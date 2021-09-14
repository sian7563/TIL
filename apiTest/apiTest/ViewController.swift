//
//  ViewController.swift
//  apiTest
//
//  Created by kimsian on 2021/09/09.
//

import UIKit
import Alamofire

class ViewController: UIViewController {

    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
    
//    let URL = "https://honggun-blog.herokuapp.com/MAKE_CONTENTS"
//
//    let PARAM:Parameters =
//    [
//        "NAME":"손흥민",
//        "BORN": 1992,
//        "JOB": "축구선수"
//    ]
//
//    let alamo = AF.request(URL, method: .post, parameters: PARAM).validate(statusCode: 200..<300)
//
//    alamo.responseString() { response in
//        switch response.result
//        {
//        case .success(let value):
//            print("value: \(value)")
//
//
//        case .failure(let error):
//            print("error: \(String(describing: error.errorDescription))")
//
//            }
//        }
        
        let URL = "https://honggun-blog.herokuapp.com/READ_CONTENTS"
        
        let PARAM:Parameters = [
            
            "JOB": "영화배우"
        ]
        
        let alamo = AF.request(URL, method: .post, parameters: PARAM).validate(statusCode: 200..<300)
        
        alamo.responseJSON() { response in
            switch response.result
            {
            
            case .success(let value):
                
                if let jsonObj = value as? [Dictionary<String, Any>]
                {
                    
                    print("데이터의 갯수: \(jsonObj.count)")
                    
                    for item in jsonObj
                    {
                        print("\n--------------------------------------------")
                        
                        print("item: \(item)")
                        
                        let NAME = item["NAME"]! as? String ?? ""
                        let BORN = item["BORN"]! as? Int ?? 0
                        let JOB = item["JOB"]! as? String ?? ""
                        
                        print("NAME: \(NAME)")
                        print("BORN: \(BORN)")
                        print("JOB: \(JOB)")
                    }
                }
                
            
            case .failure(let error):
                print("error: \(String(describing: error.errorDescription))")
            }
        }
    }
}

