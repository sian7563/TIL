//
//  SecondViewController.swift
//  screenChangetableView
//
//  Created by kimsian on 2021/05/21.
//

import UIKit

class SCViewController: UIViewController {

    var eng: String?
       
       @IBOutlet weak var Label: UILabel!
       
       override func viewDidLoad() {
        super.viewDidLoad()

        Label.text = eng
        
    }
    

}
