//
//  ViewController.swift
//  screenChangetableView
//
//  Created by kimsian on 2021/05/11.
//

import UIKit

class ViewController: UIViewController, UITableViewDataSource, UITableViewDelegate {
    
    @IBOutlet weak var tableView: UITableView!
    
    let engs = ["a","b","c","d","e","f"]
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        tableView.dataSource = self
        tableView.delegate = self
        // Do any additional setup after loading the view.
    }
    
    func numberOfSections(in tableView: UITableView) -> Int {
        return 1
    }
    
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return engs.count
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        
        let cell = tableView.dequeueReusableCell(withIdentifier: "cell", for: indexPath) as! TableViewCell
        
        cell.titleLabel.text = self.engs[indexPath.row]
        
        return cell
    }
    
    func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        
        guard let uvc = self.storyboard?.instantiateViewController(withIdentifier: "SecondVC") as? SCViewController else {
            return
        }
        
        uvc.eng = self.engs[indexPath.row]
                
        
        self.navigationController?.pushViewController(uvc, animated: true)
    }
    
}
    
    

