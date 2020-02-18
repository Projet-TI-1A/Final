






if (Dessin)
		{
			while ( Dessin )
			{
				Position_Curseur(&x, &y, window);
				p1.set(x, y);
				switch ( k )
				{
					case 1:
						if (zone(k,x,y,240,160,150, 72))
						{
							tab_point.append(p1);
						}
						else
						{
							tab_erreur.append(p1);
						}
					break;
					case 2:
						if (zone(k,x,y,240,160,150, 72))
						{
							tab_point.append(p1);
						}
						else
						{
							tab_erreur.append(p1);
						}
					case 3:
						if (zone(k,x,y,240,160,150, 72))
						{
							tab_point.append(p1);
						}
						else
						{
							tab_erreur.append(p1);
						}
					case 4:
						if (zone(k,x,y,240,160,150, 72))
						{
							tab_point.append(p1);
						}
						else
						{
							tab_erreur.append(p1);
						}
					case 5:
						if (zone(k,x,y,240,160,150, 72))
						{
							tab_point.append(p1);
						}
						else
						{
							tab_erreur.append(p1);
						}
					break;
					default:
					k=0;
				}
			
		}
