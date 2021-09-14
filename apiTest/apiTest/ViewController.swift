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
    
    let URL = "https://honggun-blog.herokuapp.com/MAKE_CONTENTS"
    
    let PARAM:Parameters =
    [
        "NAME":"손흥민",
        "BORN": 1992,
        "JOB": "축구선수"
    ]
    
    let alamo = AF.request(URL, method: .post, parameters: PARAM).validate(statusCode: 200..<300)
    
    alamo.responseString() { response in
        switch response.result
        {
        case .success(let value):
            print("value: \(value)")
            
        
        case .failure(let error):
            print("error: \(String(describing: error.errorDescription))")
            
            }
        }
    }
}

