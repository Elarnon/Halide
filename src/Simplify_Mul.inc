((a.node_type() == IRNodeType::Add) && (
 rewrite((((x*c0) + ((y*-1) - z))*c2), (((x*c0) - (y + z))*c2)))) ||
((a.node_type() == IRNodeType::Min) && (
 rewrite((min((x*c0), c1)*c2), min((x*fold((c0*c2))), fold((c1*c2))), (((((c0 <= -1) || (c1 <= 1)) || (c1 <= c0)) || ((c1*c2) <= (c0*c2))) && ((((1 <= c0) || (c1 <= 1)) || ((c0 + c1) <= 0)) && (1 <= c2)))))) ||
((a.node_type() == IRNodeType::Max) && (
 rewrite((max((x*c0), c1)*c2), max((x*fold((c0*c2))), fold((c1*c2))), ((((c0 <= -1) || (c1 <= 1)) || (c1 <= c0)) && ((((1 <= c0) || (c1 <= 1)) || ((c0 + c1) <= 0)) && (1 <= c2)))) ||
 rewrite((max((x*c0), c1)*c2), max((x*fold((c0*c2))), fold((c1*c2))), (((((1 <= c0) || (c1 <= 1)) || ((c0 + c1) <= 0)) || ((c1*c2) <= ((0 - c0)*c2))) && ((((c0 <= -1) || (c1 <= 1)) || (c1 <= c0)) && (1 <= c2))))))