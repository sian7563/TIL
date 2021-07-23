//
//  ViewController.swift
//  Diary
//
//  Created by kimsian on 2021/07/03.
//

import UIKit

class ViewController: UIViewController {

   
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
    }

   
    @IBAction func signup(_ sender: Any) {
        
        guard let uvc = self.storyboard?.instantiateViewController(withIdentifier: "SecondVC") else {
            return
        }
        
        uvc.modalTransitionStyle = UIModalTransitionStyle.coverVertical
             
        self.present(uvc, animated: true)
    }
    
}


