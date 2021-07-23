//
//  ViewController.swift
//  screenChange
//
//  Created by kimsian on 2021/05/09.
//

import UIKit

class ViewController: UIViewController {

    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        
        
    }

    @IBAction func button(_ sender: Any) {
        
        guard let uvc = self.storyboard?.instantiateViewController(withIdentifier: "SecondVC") else {
            return
        }
        self.navigationController?.pushViewController(uvc, animated: true)
    }
    
    
}

