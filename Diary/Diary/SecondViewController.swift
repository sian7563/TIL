//
//  SecondViewController.swift
//  Diary
//
//  Created by kimsian on 2021/07/04.
//

import UIKit

class SecondViewController: UITableViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        
    }

    @IBAction func add(_ sender: Any) {
        
        guard let uvc = self.storyboard?.instantiateViewController(withIdentifier: "ThirdVC") else {
            return
        }
        
        uvc.modalTransitionStyle = UIModalTransitionStyle.coverVertical
             
        self.present(uvc, animated: true)
        
        }
    
  
}
