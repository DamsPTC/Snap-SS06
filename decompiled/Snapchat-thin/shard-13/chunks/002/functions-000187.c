/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a339800; end: 10a339903;  */

void FUN_10a339800(long *param_1,long param_2,long *param_3,long param_4,long *param_5,long param_6)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_48 [8];
  
  iVar3 = (int)auStack_48;
  func_0x00010a1bd170();
  if (iVar3 == 0) {
    *param_1 = param_2;
    *(undefined1 *)(param_1 + 1) = 0;
    iVar3 = (int)auStack_48;
    func_0x00010a1bd170();
    plVar5 = (long *)0x0;
    if (iVar3 == 0) {
      plVar5 = param_3;
    }
    lVar4 = 0;
    if (iVar3 == 0) {
      lVar4 = param_4;
    }
  }
  else {
    *param_1 = param_2;
    *(undefined1 *)(param_1 + 1) = 0;
    func_0x00010a1bd170(auStack_48);
    plVar5 = (long *)0x0;
    lVar4 = 0;
  }
  lVar1 = -0x2a8;
  if (cRam00000001137eafaa == '\0') {
    lVar1 = -0xffff;
  }
  if (param_6 != 0) {
    lVar2 = 0;
    if (param_2 != 0) {
      lVar2 = param_2 + lVar1 + 0x40;
    }
    param_6 = param_6 << 4;
    do {
      if (*param_5 != 0) {
        func_0x00010a1bf190(*param_5 + 0x18,lVar2);
      }
      param_5 = param_5 + 2;
      param_6 = param_6 + -0x10;
    } while (param_6 != 0);
  }
  if (lVar4 != 0) {
    lVar4 = lVar4 << 4;
    do {
      if (*plVar5 != 0) {
        func_0x00010a1bf34c(*plVar5 + 0x18,param_2 + lVar1 + 0x40);
      }
      plVar5 = plVar5 + 2;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 10a339904; end: 10a33a5cb;  */

void FUN_10a339904(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined4 uVar11;
  undefined **ppuStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  long *plStack_78;
  
  puStack_a0 = &UNK_10f650fff;
  uStack_98 = 10;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110bc5dd8,&puStack_a0);
  FUN_10a00d760(param_2,&PTR_DAT_110bc5db8,param_1 + 0x1a0);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bc4d60,*(undefined1 *)(param_1 + 0x218));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bc4d80,*(undefined1 *)(param_1 + 0x21a));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bc4da0,*(undefined1 *)(param_1 + 0x219));
  (**(code **)(*param_2 + 200))(param_2,&PTR_DAT_110bc4de0,param_1 + 0x21e);
  (**(code **)(*param_2 + 0x78))(param_2,&PTR_DAT_110bc4e00,param_1 + 0x248);
  (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110bc4e20,*(undefined4 *)(param_1 + 0x250));
  (**(code **)(*param_2 + 0x120))(param_2,*(undefined8 *)(param_1 + 600),0);
  (**(code **)(*param_2 + 0x120))(param_2,*(undefined8 *)(param_1 + 0x268),0);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bc4e40,*(undefined1 *)(param_1 + 0x244));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bc4e60,*(undefined1 *)(param_1 + 0x21c));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bc4e80,*(undefined1 *)(param_1 + 0x21d));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bc4ea0,*(undefined1 *)(param_1 + 0x245));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bc4ec0,*(undefined1 *)(param_1 + 0x21b));
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x228),param_2,&PTR_DAT_110bc4f00);
  puStack_a0 = (undefined *)0x0;
  uStack_98 = 0;
  uStack_90 = 0;
  func_0x000107c31930(&puStack_a0,*(undefined8 *)(param_1 + 0x210));
  plVar7 = *(long **)(param_1 + 0x200);
  while (plVar7 != (long *)(param_1 + 0x208)) {
    if (*(char *)((long)plVar7 + 0x37) < '\0') {
      func_0x000107c3192c(&ppuStack_c0,plVar7[4],plVar7[5]);
    }
    else {
      lStack_b8 = plVar7[5];
      ppuStack_c0 = (undefined **)plVar7[4];
      lStack_b0 = plVar7[6];
    }
    FUN_10a059fa0(&puStack_a0,&ppuStack_c0);
    if (lStack_b0 < 0) {
      __ZdlPv(ppuStack_c0);
    }
    plVar8 = (long *)plVar7[1];
    plVar6 = plVar7;
    if ((long *)plVar7[1] == (long *)0x0) {
      do {
        plVar7 = (long *)plVar6[2];
        bVar5 = (long *)*plVar7 != plVar6;
        plVar6 = plVar7;
      } while (bVar5);
    }
    else {
      do {
        plVar7 = plVar8;
        plVar8 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
    }
  }
  (**(code **)(*param_2 + 0x138))(param_2,&PTR_DAT_110bc4f20,&puStack_a0);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110bc4f40);
  plVar8 = *(long **)(param_1 + 0x1b8);
  plVar7 = (long *)*plVar8;
  do {
    if (plVar7 == plVar8 + 1) {
      plVar7 = *(long **)(param_1 + 0x1d0);
      while (plVar7 != (long *)(param_1 + 0x1d8)) {
        (**(code **)(*param_2 + 0x10))(param_2);
        (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110bc4f60,(int)plVar7[8]);
        FUN_10a00d760(param_2,&PTR_DAT_110bc5db8,plVar7 + 4);
        (**(code **)(*param_2 + 0x20))(param_2);
        plVar8 = (long *)plVar7[1];
        plVar6 = plVar7;
        if ((long *)plVar7[1] == (long *)0x0) {
          do {
            plVar7 = (long *)plVar6[2];
            bVar5 = (long *)*plVar7 != plVar6;
            plVar6 = plVar7;
          } while (bVar5);
        }
        else {
          do {
            plVar7 = plVar8;
            plVar8 = (long *)*plVar7;
          } while ((long *)*plVar7 != (long *)0x0);
        }
      }
      plVar7 = *(long **)(param_1 + 0x1e8);
      while (plVar7 != (long *)(param_1 + 0x1f0)) {
        lVar10 = plVar7[8];
        (**(code **)(*param_2 + 0x10))(param_2);
        FUN_10a00d760(param_2,&PTR_DAT_110bc5db8,plVar7 + 4);
        FUN_10a33a5cc(param_2,&PTR_DAT_110bc5dd8,&DAT_10f636fd0);
        FUN_10a02e188(param_2,&PTR_s_value_110bc5df8,lVar10 + 0x188,&UNK_10f633e9d,0xd);
        plVar8 = (long *)plVar7[8];
        (**(code **)(*plVar8 + 0x20))();
        (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bc4fa0,*(undefined4 *)((long)plVar8 + 4))
        ;
        (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bc5020,(int)plVar8[1]);
        (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bc4fc0,(int)plVar8[1]);
        (**(code **)(*param_2 + 0x40))
                  (param_2,&PTR_DAT_110bc4fe0,*(undefined4 *)((long)plVar8 + 0xc));
        (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bc5000,(int)plVar8[2]);
        (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bc5040,(char)*plVar8);
        (**(code **)(*param_2 + 0x90))
                  (param_2,&PTR_DAT_110bc5060,(undefined1 *)((long)plVar8 + 0x14));
        (**(code **)(*param_2 + 0x20))(param_2);
        plVar8 = (long *)plVar7[1];
        plVar6 = plVar7;
        if ((long *)plVar7[1] == (long *)0x0) {
          do {
            plVar7 = (long *)plVar6[2];
            bVar5 = (long *)*plVar7 != plVar6;
            plVar6 = plVar7;
          } while (bVar5);
        }
        else {
          do {
            plVar7 = plVar8;
            plVar8 = (long *)*plVar7;
          } while ((long *)*plVar7 != (long *)0x0);
        }
      }
      plVar7 = *(long **)(param_1 + 0x290);
      while (plVar7 != (long *)(param_1 + 0x298)) {
        lVar10 = plVar7[8];
        (**(code **)(*param_2 + 0x10))(param_2);
        FUN_10a00d760(param_2,&PTR_DAT_110bc5db8,plVar7 + 4);
        FUN_10a33a5cc(param_2,&PTR_DAT_110bc5dd8,&DAT_10f49dfaa);
        plStack_78 = *(long **)(lVar10 + 0xf8);
        uStack_80 = *(undefined8 *)(lVar10 + 0xf0);
        ppuStack_c0 = (undefined **)&UNK_10f65112b;
        lStack_b8 = 0x19;
        if (*(long *)(lVar10 + 0xf8) != 0) {
          plVar8 = (long *)(*(long *)(lVar10 + 0xf8) + 8);
          do {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = *plVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        (**(code **)(*param_2 + 0x108))(param_2,&PTR_s_value_110bc5df8,&uStack_80,&ppuStack_c0);
        plVar8 = plStack_78;
        if (plStack_78 != (long *)0x0) {
          plVar6 = plStack_78 + 1;
          do {
            lVar10 = *plVar6;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar5) {
              *plVar6 = lVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plStack_78 + 0x10))(plStack_78);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        (**(code **)(*param_2 + 0x20))(param_2);
        plVar8 = (long *)plVar7[1];
        plVar6 = plVar7;
        if ((long *)plVar7[1] == (long *)0x0) {
          do {
            plVar7 = (long *)plVar6[2];
            bVar5 = (long *)*plVar7 != plVar6;
            plVar6 = plVar7;
          } while (bVar5);
        }
        else {
          do {
            plVar7 = plVar8;
            plVar8 = (long *)*plVar7;
          } while ((long *)*plVar7 != (long *)0x0);
        }
      }
      plVar7 = *(long **)(param_1 + 0x2a8);
      while (plVar7 != (long *)(param_1 + 0x2b0)) {
        lVar10 = plVar7[8];
        (**(code **)(*param_2 + 0x10))(param_2);
        FUN_10a00d760(param_2,&PTR_DAT_110bc5db8,plVar7 + 4);
        FUN_10a33a5cc(param_2,&PTR_DAT_110bc5dd8,&UNK_10f64f85b);
        FUN_10a33a62c(param_2,&PTR_s_value_110bc5df8,lVar10 + 0xf0,&UNK_10f651145,0x14);
        (**(code **)(*param_2 + 0x20))(param_2);
        plVar8 = (long *)plVar7[1];
        plVar6 = plVar7;
        if ((long *)plVar7[1] == (long *)0x0) {
          do {
            plVar7 = (long *)plVar6[2];
            bVar5 = (long *)*plVar7 != plVar6;
            plVar6 = plVar7;
          } while (bVar5);
        }
        else {
          do {
            plVar7 = plVar8;
            plVar8 = (long *)*plVar7;
          } while ((long *)*plVar7 != (long *)0x0);
        }
      }
      (**(code **)(*param_2 + 0x20))(param_2);
      (**(code **)(*param_2 + 0x118))
                (param_2,&PTR_s_provider_110bc4bd0,*(undefined8 *)(param_1 + 0x188));
      (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110bc5080);
      plVar7 = *(long **)(param_1 + 0x1d0);
      while (plVar7 != (long *)(param_1 + 0x1d8)) {
        (**(code **)(*param_2 + 0x10))(param_2);
        FUN_10a00d760(param_2,&PTR_DAT_110bc5db8,plVar7 + 4);
        (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110bc4f60,(int)plVar7[8]);
        (**(code **)(*param_2 + 0x20))(param_2);
        plVar8 = (long *)plVar7[1];
        plVar6 = plVar7;
        if ((long *)plVar7[1] == (long *)0x0) {
          do {
            plVar7 = (long *)plVar6[2];
            bVar5 = (long *)*plVar7 != plVar6;
            plVar6 = plVar7;
          } while (bVar5);
        }
        else {
          do {
            plVar7 = plVar8;
            plVar8 = (long *)*plVar7;
          } while ((long *)*plVar7 != (long *)0x0);
        }
      }
      (**(code **)(*param_2 + 0x20))(param_2);
      ppuStack_c0 = &puStack_a0;
      FUN_10a0426d8(&ppuStack_c0);
      return;
    }
    lVar10 = plVar7[8];
    (**(code **)(*param_2 + 0x10))(param_2);
    FUN_10a00d760(param_2,&PTR_DAT_110bc5db8,plVar7 + 4);
    if (0xf < *(byte *)(lVar10 + 100)) {
      FUN_10a05bab8(&UNK_10f6347d3);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a33a560);
      (*pcVar4)();
    }
    puVar1 = (undefined8 *)(lVar10 + 0x24);
    switch(*(byte *)(lVar10 + 100)) {
    case 0:
      uVar11 = *(undefined4 *)puVar1;
      FUN_10a33a5cc(param_2,&PTR_DAT_110bc5dd8,&DAT_10f33a2d8);
      (**(code **)(*param_2 + 0x60))(uVar11,param_2,&PTR_s_value_110bc5df8);
      break;
    case 1:
      uVar11 = *(undefined4 *)puVar1;
      FUN_10a33a5cc(param_2,&PTR_DAT_110bc5dd8,&DAT_10f62bbce);
      lVar10 = 0x40;
      goto code_r0x00010a339e68;
    case 2:
      uVar2 = *(undefined1 *)puVar1;
      FUN_10a33a5cc(param_2,&PTR_DAT_110bc5dd8,"bool");
      (**(code **)(*param_2 + 0x70))(param_2,&PTR_s_value_110bc5df8,uVar2);
      break;
    case 3:
      ppuStack_c0 = (undefined **)*puVar1;
      FUN_10a33a5cc(param_2,&PTR_DAT_110bc5dd8,&DAT_10f4913b9);
      (**(code **)(*param_2 + 0x78))(param_2,&PTR_s_value_110bc5df8,&ppuStack_c0);
      break;
    case 4:
      ppuStack_c0 = *(undefined ***)(lVar10 + 0x24);
      lStack_b8 = CONCAT44(lStack_b8._4_4_,*(undefined4 *)(lVar10 + 0x2c));
      FUN_10a33a5cc(param_2,&PTR_DAT_110bc5dd8,&DAT_10f4913be);
      (**(code **)(*param_2 + 0x80))(param_2,&PTR_s_value_110bc5df8,&ppuStack_c0);
      break;
    case 5:
      lStack_b8 = *(long *)(lVar10 + 0x2c);
      ppuStack_c0 = (undefined **)*puVar1;
      FUN_10a33a5cc(param_2,&PTR_DAT_110bc5dd8,&DAT_10f4913c3);
      (**(code **)(*param_2 + 0x90))(param_2,&PTR_s_value_110bc5df8,&ppuStack_c0);
      break;
    case 6:
      lStack_b8 = *(long *)(lVar10 + 0x2c);
      ppuStack_c0 = (undefined **)*puVar1;
      FUN_10a33a5cc(param_2,&PTR_DAT_110bc5dd8,&DAT_10f4913fe);
      (**(code **)(*param_2 + 0xe0))(param_2,&PTR_s_value_110bc5df8,&ppuStack_c0);
      break;
    case 7:
      FUN_10a33a5cc(param_2,&PTR_DAT_110bc5dd8,&DAT_10f491403);
      lVar10 = 0xe8;
      goto code_r0x00010a339f7c;
    case 8:
      FUN_10a33a5cc(param_2,&PTR_DAT_110bc5dd8,&DAT_10f491408);
      lVar10 = 0xf0;
code_r0x00010a339f7c:
      (**(code **)(*param_2 + lVar10))(param_2,&PTR_s_value_110bc5df8,puVar1);
      break;
    case 9:
      uVar11 = *(undefined4 *)puVar1;
      FUN_10a33a5cc(param_2,&PTR_DAT_110bc5dd8,&DAT_10f49122c);
      lVar10 = 0x50;
code_r0x00010a339e68:
      (**(code **)(*param_2 + lVar10))(param_2,&PTR_s_value_110bc5df8,uVar11);
      break;
    case 10:
      ppuStack_c0 = (undefined **)*puVar1;
      FUN_10a33a5cc(param_2,&PTR_DAT_110bc5dd8,&DAT_10f4913c8);
      (**(code **)(*param_2 + 0x98))(param_2,&PTR_s_value_110bc5df8,&ppuStack_c0);
      break;
    case 0xb:
      ppuStack_c0 = *(undefined ***)(lVar10 + 0x24);
      lStack_b8 = CONCAT44(lStack_b8._4_4_,*(undefined4 *)(lVar10 + 0x2c));
      FUN_10a33a5cc(param_2,&PTR_DAT_110bc5dd8,&DAT_10f4913ce);
      (**(code **)(*param_2 + 0xa0))(param_2,&PTR_s_value_110bc5df8,&ppuStack_c0);
      break;
    case 0xc:
      lStack_b8 = *(long *)(lVar10 + 0x2c);
      ppuStack_c0 = (undefined **)*puVar1;
      FUN_10a33a5cc(param_2,&PTR_DAT_110bc5dd8,&DAT_10f4913d4);
      (**(code **)(*param_2 + 0xa8))(param_2,&PTR_s_value_110bc5df8,&ppuStack_c0);
      break;
    case 0xd:
      ppuStack_c0 = (undefined **)*puVar1;
      FUN_10a33a5cc(param_2,&PTR_DAT_110bc5dd8,&DAT_10f4913da);
      (**(code **)(*param_2 + 0xb0))(param_2,&PTR_s_value_110bc5df8,&ppuStack_c0);
      break;
    case 0xe:
      ppuStack_c0 = *(undefined ***)(lVar10 + 0x24);
      lStack_b8 = CONCAT44(lStack_b8._4_4_,*(undefined4 *)(lVar10 + 0x2c));
      FUN_10a33a5cc(param_2,&PTR_DAT_110bc5dd8,&DAT_10f4913e0);
      (**(code **)(*param_2 + 0xb8))(param_2,&PTR_s_value_110bc5df8,&ppuStack_c0);
      break;
    case 0xf:
      lStack_b8 = *(long *)(lVar10 + 0x2c);
      ppuStack_c0 = (undefined **)*puVar1;
      FUN_10a33a5cc(param_2,&PTR_DAT_110bc5dd8,&DAT_10f4913e6);
      (**(code **)(*param_2 + 0xc0))(param_2,&PTR_s_value_110bc5df8,&ppuStack_c0);
    }
    (**(code **)(*param_2 + 0x20))(param_2);
    plVar6 = (long *)plVar7[1];
    plVar9 = plVar7;
    if ((long *)plVar7[1] == (long *)0x0) {
      do {
        plVar7 = (long *)plVar9[2];
        bVar5 = (long *)*plVar7 != plVar9;
        plVar9 = plVar7;
      } while (bVar5);
    }
    else {
      do {
        plVar7 = plVar6;
        plVar6 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
    }
  } while( true );
}



/* Entry: 10a33a5cc; end: 10a33a62b;  */

void FUN_10a33a5cc(long *param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_3;
  _strlen();
  lStack_40 = param_3;
  lStack_38 = lVar2;
  if (-1 < lVar2) {
    (**(code **)(*param_1 + 0x30))(param_1,param_2,&lStack_40);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a33a62c);
  (*pcVar1)();
}



/* Entry: 10a33a62c; end: 10a33a6d3;  */

void FUN_10a33a62c(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plStack_38 = (long *)param_3[1];
  uStack_40 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_30 = param_4;
  uStack_28 = param_5;
  (**(code **)(*param_1 + 0x108))(param_1,param_2,&uStack_40,&uStack_30);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a33a6d4; end: 10a33b663;  */

void FUN_10a33a6d4(long param_1,long *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined1 **ppuVar4;
  code *pcVar5;
  undefined1 uVar6;
  undefined8 ***pppuVar7;
  undefined8 **ppuVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  undefined1 *puStack_1a0;
  ulong uStack_198;
  byte bStack_189;
  undefined8 **appuStack_188 [2];
  char cStack_171;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_150;
  undefined7 uStack_148;
  undefined1 uStack_141;
  undefined7 uStack_140;
  char cStack_139;
  ulong uStack_138;
  undefined8 auStack_130 [2];
  char cStack_119;
  ulong uStack_118;
  undefined7 uStack_110;
  undefined1 uStack_109;
  undefined7 uStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  code *pcStack_f0;
  undefined **ppuStack_e8;
  undefined8 **ppuStack_e0;
  undefined8 *puStack_d8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a0d09b4(auStack_130);
  plVar9 = (long *)(*(long *)(param_1 + 0x1b8) + 8);
  plVar13 = (long *)*plVar9;
  plVar11 = plVar9;
  if (plVar13 == (long *)0x0) {
LAB_10a33a75c:
    lVar10 = *(long *)(param_1 + 0x1d8);
    if (lVar10 != 0) {
      lVar12 = param_1 + 0x1d8;
      do {
        lVar2 = 8;
        if (uStack_118 <= *(ulong *)(lVar10 + 0x38)) {
          lVar2 = 0;
          lVar12 = lVar10;
        }
        lVar10 = *(long *)(lVar10 + lVar2);
      } while (lVar10 != 0);
      if ((lVar12 != param_1 + 0x1d8) && (*(ulong *)(lVar12 + 0x38) <= uStack_118)) {
        puStack_f8 = (undefined8 *)(ulong)*(uint *)(lVar12 + 0x40);
        pcStack_f0 = (code *)&UNK_1053a6a3c;
        ppuStack_e8 = &PTR_DAT_110ae9180;
        ppuStack_b0 = &PTR_DAT_110ae9180;
        puStack_100 = param_3;
        if (*(uint *)(lVar12 + 0x40) != 0) {
          uVar14 = 0;
          do {
            uVar3 = param_2[1];
            if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
              uVar3 = (ulong)*(byte *)((long)param_2 + 0x17);
            }
            FUN_10a003c90(appuStack_188,uVar3 + 1,&puStack_1a0);
            pppuVar7 = (undefined8 ***)appuStack_188[0];
            if (-1 < cStack_171) {
              pppuVar7 = appuStack_188;
            }
            if (uVar3 != 0) {
              plVar11 = (long *)*param_2;
              if (-1 < *(char *)((long)param_2 + 0x17)) {
                plVar11 = param_2;
              }
              _memmove(pppuVar7,plVar11,uVar3);
            }
            *(undefined2 *)((long)pppuVar7 + uVar3) = 0x5b;
            __ZNSt3__19to_stringEi(&puStack_1a0,uVar14);
            uVar3 = uStack_198;
            ppuVar4 = (undefined1 **)puStack_1a0;
            if (-1 < (char)bStack_189) {
              uVar3 = (ulong)bStack_189;
              ppuVar4 = &puStack_1a0;
            }
            pppuVar7 = appuStack_188;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (pppuVar7,ppuVar4,uVar3);
            puStack_168 = pppuVar7[1];
            puStack_170 = *pppuVar7;
            puStack_160 = pppuVar7[2];
            pppuVar7[1] = (undefined8 **)0x0;
            pppuVar7[2] = (undefined8 **)0x0;
            *pppuVar7 = (undefined8 **)0x0;
            ppuVar8 = &puStack_170;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (ppuVar8,&DAT_10f62a9ea,1);
            uStack_150 = *ppuVar8;
            uStack_110 = SUB87(ppuVar8[1],0);
            uStack_109 = (undefined1)*(undefined8 *)((long)ppuVar8 + 0xf);
            uStack_108 = (undefined7)((ulong)*(undefined8 *)((long)ppuVar8 + 0xf) >> 8);
            cStack_139 = *(char *)((long)ppuVar8 + 0x17);
            ppuVar8[1] = (undefined8 *)0x0;
            ppuVar8[2] = (undefined8 *)0x0;
            *ppuVar8 = (undefined8 *)0x0;
            uStack_140 = uStack_108;
            uStack_148 = uStack_110;
            uStack_141 = uStack_109;
            uStack_138 = 0;
            func_0x000107c2b080(&uStack_150);
            if ((long)puStack_160 < 0) {
              __ZdlPv(puStack_170);
            }
            if ((char)bStack_189 < '\0') {
              __ZdlPv(puStack_1a0);
            }
            if (cStack_171 < '\0') {
              __ZdlPv(appuStack_188[0]);
            }
            plVar9 = (long *)(*(long *)(param_1 + 0x1b8) + 8);
            plVar13 = (long *)*plVar9;
            plVar11 = plVar9;
            if (plVar13 == (long *)0x0) {
LAB_10a33b3ac:
              if (cStack_139 < '\0') {
                __ZdlPv(uStack_150);
              }
              break;
            }
            do {
              lVar10 = 8;
              if (uStack_138 <= (ulong)plVar13[7]) {
                lVar10 = 0;
                plVar11 = plVar13;
              }
              plVar13 = *(long **)((long)plVar13 + lVar10);
            } while (plVar13 != (long *)0x0);
            if ((plVar11 == plVar9) || (uStack_138 < (ulong)plVar11[7])) goto LAB_10a33b3ac;
            lVar10 = plVar11[8];
            if (0xf < *(byte *)(lVar10 + 100)) goto LAB_10a33b568;
            puVar1 = (undefined8 *)(lVar10 + 0x24);
            switch(*(byte *)(lVar10 + 100)) {
            case 0:
              puStack_170 = (undefined8 *)CONCAT44(puStack_170._4_4_,*(undefined4 *)puVar1);
              if (((ulong)ppuStack_e8[1] & 1) == 0) {
                (*(code *)*ppuStack_b0)(&ppuStack_b0);
                ppuStack_b0 = &PTR_DAT_110bc6d38;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_a8 = 0;
                func_0x0001073b504c(&uStack_a8,puStack_f8);
                pcStack_f0 = FUN_10a3694ac;
                (*(code *)*ppuStack_e8)(&ppuStack_e8);
                ppuStack_e8 = &PTR_FUN_110bc6d50;
                ppuStack_e0 = &puStack_100;
                puStack_d8 = &uStack_a8;
              }
              FUN_10a0ca014(&uStack_a8,&puStack_170);
              break;
            case 1:
              puStack_170 = (undefined8 *)CONCAT44(puStack_170._4_4_,*(undefined4 *)puVar1);
              if (((ulong)ppuStack_e8[1] & 1) == 0) {
                (*(code *)*ppuStack_b0)(&ppuStack_b0);
                ppuStack_b0 = &PTR_DAT_110bc6d68;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_a8 = 0;
                func_0x000107c27e9c(&uStack_a8,puStack_f8);
                pcStack_f0 = FUN_10a3695d0;
                (*(code *)*ppuStack_e8)(&ppuStack_e8);
                ppuStack_e8 = &PTR_FUN_110bc6d80;
                ppuStack_e0 = &puStack_100;
                puStack_d8 = &uStack_a8;
              }
              func_0x000109febdc8(&uStack_a8,&puStack_170);
              break;
            case 2:
              puStack_170 = (undefined8 *)CONCAT71(puStack_170._1_7_,*(undefined1 *)puVar1);
              if (((ulong)ppuStack_e8[1] & 1) == 0) {
                (*(code *)*ppuStack_b0)(&ppuStack_b0);
                ppuStack_b0 = &PTR_DAT_110bc6d98;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_a8 = 0;
                func_0x000104becb10(&uStack_a8,puStack_f8);
                pcStack_f0 = FUN_10a3696e4;
                (*(code *)*ppuStack_e8)(&ppuStack_e8);
                ppuStack_e8 = &PTR_FUN_110bc6db0;
                ppuStack_e0 = &puStack_100;
                puStack_d8 = &uStack_a8;
              }
              func_0x0001078db3d4(&uStack_a8,&puStack_170);
              break;
            case 3:
              puStack_170 = (undefined8 *)*puVar1;
              if (((ulong)ppuStack_e8[1] & 1) == 0) {
                (*(code *)*ppuStack_b0)(&ppuStack_b0);
                ppuStack_b0 = &PTR_DAT_110bc6dc8;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_a8 = 0;
                func_0x000107458bb4(&uStack_a8,puStack_f8);
                pcStack_f0 = FUN_10a3697f8;
                (*(code *)*ppuStack_e8)(&ppuStack_e8);
                ppuStack_e8 = &PTR_FUN_110bc6de0;
                ppuStack_e0 = &puStack_100;
                puStack_d8 = &uStack_a8;
              }
              FUN_10a1f2004(&uStack_a8,&puStack_170);
              break;
            case 4:
              puStack_170 = *(undefined8 **)(lVar10 + 0x24);
              puStack_168 = (undefined8 *)CONCAT44(puStack_168._4_4_,*(undefined4 *)(lVar10 + 0x2c))
              ;
              if (((ulong)ppuStack_e8[1] & 1) == 0) {
                (*(code *)*ppuStack_b0)(&ppuStack_b0);
                ppuStack_b0 = &PTR_DAT_110bc6df8;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_a8 = 0;
                func_0x00010983ca2c(&uStack_a8,puStack_f8);
                pcStack_f0 = FUN_10a36991c;
                (*(code *)*ppuStack_e8)(&ppuStack_e8);
                ppuStack_e8 = &PTR_FUN_110bc6e10;
                ppuStack_e0 = &puStack_100;
                puStack_d8 = &uStack_a8;
              }
              FUN_10a0efe48(&uStack_a8,&puStack_170);
              break;
            case 5:
              puStack_168 = *(undefined8 **)(lVar10 + 0x2c);
              puStack_170 = (undefined8 *)*puVar1;
              if (((ulong)ppuStack_e8[1] & 1) == 0) {
                (*(code *)*ppuStack_b0)(&ppuStack_b0);
                ppuStack_b0 = &PTR_FUN_110bc6e28;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_a8 = 0;
                func_0x00010742a338(&uStack_a8,puStack_f8);
                pcStack_f0 = FUN_10a369c24;
                (*(code *)*ppuStack_e8)(&ppuStack_e8);
                ppuStack_e8 = &PTR_FUN_110bc6e40;
                ppuStack_e0 = &puStack_100;
                puStack_d8 = &uStack_a8;
              }
              FUN_10a369b18(&uStack_a8,&puStack_170);
              break;
            case 6:
              puStack_168 = *(undefined8 **)(lVar10 + 0x2c);
              puStack_170 = (undefined8 *)*puVar1;
              if (((ulong)ppuStack_e8[1] & 1) == 0) {
                (*(code *)*ppuStack_b0)(&ppuStack_b0);
                ppuStack_b0 = &PTR_FUN_110bc6e58;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_a8 = 0;
                FUN_10a369e14(&uStack_a8,puStack_f8);
                pcStack_f0 = FUN_10a369ff4;
                (*(code *)*ppuStack_e8)(&ppuStack_e8);
                ppuStack_e8 = &PTR_FUN_110bc6e70;
                ppuStack_e0 = &puStack_100;
                puStack_d8 = &uStack_a8;
              }
              func_0x00010a369ea0(&uStack_a8,&puStack_170);
              break;
            case 7:
              if (((ulong)ppuStack_e8[1] & 1) == 0) {
                (*(code *)*ppuStack_b0)(&ppuStack_b0);
                ppuStack_b0 = &PTR_FUN_110bc6e88;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_a8 = 0;
                func_0x000109670690(&uStack_a8,puStack_f8);
                pcStack_f0 = FUN_10a36a394;
                (*(code *)*ppuStack_e8)(&ppuStack_e8);
                ppuStack_e8 = &PTR_FUN_110bc6ea0;
                ppuStack_e0 = &puStack_100;
                puStack_d8 = &uStack_a8;
              }
              FUN_10a36a1e4(&uStack_a8,puVar1);
              break;
            case 8:
              if (((ulong)ppuStack_e8[1] & 1) == 0) {
                (*(code *)*ppuStack_b0)(&ppuStack_b0);
                ppuStack_b0 = &PTR_DAT_110bc6eb8;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_a8 = 0;
                FUN_10a32a7d4(&uStack_a8,puStack_f8);
                pcStack_f0 = FUN_10a36a5dc;
                (*(code *)*ppuStack_e8)(&ppuStack_e8);
                ppuStack_e8 = &PTR_FUN_110bc6ed0;
                ppuStack_e0 = &puStack_100;
                puStack_d8 = &uStack_a8;
              }
              func_0x00010a32a860(&uStack_a8,puVar1);
              break;
            case 9:
              puStack_170 = (undefined8 *)CONCAT44(puStack_170._4_4_,*(undefined4 *)puVar1);
              if (((ulong)ppuStack_e8[1] & 1) == 0) {
                (*(code *)*ppuStack_b0)(&ppuStack_b0);
                ppuStack_b0 = &PTR_DAT_110bc6ee8;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_a8 = 0;
                func_0x0001056c5718(&uStack_a8,puStack_f8);
                pcStack_f0 = FUN_10a36a810;
                (*(code *)*ppuStack_e8)(&ppuStack_e8);
                ppuStack_e8 = &PTR_FUN_110bc6f00;
                ppuStack_e0 = &puStack_100;
                puStack_d8 = &uStack_a8;
              }
              FUN_10a0e6678(&uStack_a8,&puStack_170);
              break;
            case 10:
              puStack_170 = (undefined8 *)*puVar1;
              if (((ulong)ppuStack_e8[1] & 1) == 0) {
                (*(code *)*ppuStack_b0)(&ppuStack_b0);
                ppuStack_b0 = &PTR_FUN_110bc6f18;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_a8 = 0;
                FUN_109ffc8bc(&uStack_a8,puStack_f8);
                pcStack_f0 = FUN_10a36aae8;
                (*(code *)*ppuStack_e8)(&ppuStack_e8);
                ppuStack_e8 = &PTR_FUN_110bc6f30;
                ppuStack_e0 = &puStack_100;
                puStack_d8 = &uStack_a8;
              }
              FUN_10a36a9e0(&uStack_a8,&puStack_170);
              break;
            case 0xb:
              puStack_170 = *(undefined8 **)(lVar10 + 0x24);
              puStack_168 = (undefined8 *)CONCAT44(puStack_168._4_4_,*(undefined4 *)(lVar10 + 0x2c))
              ;
              if (((ulong)ppuStack_e8[1] & 1) == 0) {
                (*(code *)*ppuStack_b0)(&ppuStack_b0);
                ppuStack_b0 = &PTR_FUN_110bc6f48;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_a8 = 0;
                FUN_10a36ac8c(&uStack_a8,puStack_f8);
                pcStack_f0 = FUN_10a36ae74;
                (*(code *)*ppuStack_e8)(&ppuStack_e8);
                ppuStack_e8 = &PTR_FUN_110bc6f60;
                ppuStack_e0 = &puStack_100;
                puStack_d8 = &uStack_a8;
              }
              func_0x00010a36ad38(&uStack_a8,&puStack_170);
              break;
            case 0xc:
              puStack_168 = *(undefined8 **)(lVar10 + 0x2c);
              puStack_170 = (undefined8 *)*puVar1;
              if (((ulong)ppuStack_e8[1] & 1) == 0) {
                (*(code *)*ppuStack_b0)(&ppuStack_b0);
                ppuStack_b0 = &PTR_FUN_110bc6f78;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_a8 = 0;
                FUN_10a36b024(&uStack_a8,puStack_f8);
                pcStack_f0 = FUN_10a36b204;
                (*(code *)*ppuStack_e8)(&ppuStack_e8);
                ppuStack_e8 = &PTR_FUN_110bc6f90;
                ppuStack_e0 = &puStack_100;
                puStack_d8 = &uStack_a8;
              }
              func_0x00010a36b0b0(&uStack_a8,&puStack_170);
              break;
            case 0xd:
              puStack_170 = (undefined8 *)*puVar1;
              if (((ulong)ppuStack_e8[1] & 1) == 0) {
                (*(code *)*ppuStack_b0)(&ppuStack_b0);
                ppuStack_b0 = &PTR_FUN_110bc6fa8;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_a8 = 0;
                FUN_10a36b3a8(&uStack_a8,puStack_f8);
                pcStack_f0 = FUN_10a36b584;
                (*(code *)*ppuStack_e8)(&ppuStack_e8);
                ppuStack_e8 = &PTR_FUN_110bc6fc0;
                ppuStack_e0 = &puStack_100;
                puStack_d8 = &uStack_a8;
              }
              func_0x00010a36b438(&uStack_a8,&puStack_170);
              break;
            case 0xe:
              puStack_170 = *(undefined8 **)(lVar10 + 0x24);
              puStack_168 = (undefined8 *)CONCAT44(puStack_168._4_4_,*(undefined4 *)(lVar10 + 0x2c))
              ;
              if (((ulong)ppuStack_e8[1] & 1) == 0) {
                (*(code *)*ppuStack_b0)(&ppuStack_b0);
                ppuStack_b0 = &PTR_FUN_110bc6fd8;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_a8 = 0;
                FUN_10a36b728(&uStack_a8,puStack_f8);
                pcStack_f0 = FUN_10a36b910;
                (*(code *)*ppuStack_e8)(&ppuStack_e8);
                ppuStack_e8 = &PTR_FUN_110bc6ff0;
                ppuStack_e0 = &puStack_100;
                puStack_d8 = &uStack_a8;
              }
              func_0x00010a36b7d4(&uStack_a8,&puStack_170);
              break;
            case 0xf:
              puStack_168 = *(undefined8 **)(lVar10 + 0x2c);
              puStack_170 = (undefined8 *)*puVar1;
              if (((ulong)ppuStack_e8[1] & 1) == 0) {
                (*(code *)*ppuStack_b0)(&ppuStack_b0);
                ppuStack_b0 = &PTR_FUN_110bc7008;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_a8 = 0;
                FUN_10a36bac0(&uStack_a8,puStack_f8);
                pcStack_f0 = FUN_10a36bca0;
                (*(code *)*ppuStack_e8)(&ppuStack_e8);
                ppuStack_e8 = &PTR_FUN_110bc7020;
                ppuStack_e0 = &puStack_100;
                puStack_d8 = &uStack_a8;
              }
              func_0x00010a36bb50(&uStack_a8,&puStack_170);
            }
            if (cStack_139 < '\0') {
              __ZdlPv(uStack_150);
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < *(uint *)(lVar12 + 0x40));
        }
        FUN_10a33b664(&puStack_100);
        goto LAB_10a33b3c4;
      }
    }
    lVar10 = *(long *)(param_1 + 0x1f0);
    if (lVar10 != 0) {
      lVar12 = param_1 + 0x1f0;
      do {
        lVar2 = 8;
        if (uStack_118 <= *(ulong *)(lVar10 + 0x38)) {
          lVar2 = 0;
          lVar12 = lVar10;
        }
        lVar10 = *(long *)(lVar10 + lVar2);
      } while (lVar10 != 0);
      if ((lVar12 != param_1 + 0x1f0) && (*(ulong *)(lVar12 + 0x38) <= uStack_118)) {
        FUN_10a1f92d8(param_3,*(long *)(lVar12 + 0x40) + 0x188);
        goto LAB_10a33b3c4;
      }
    }
    lVar10 = *(long *)(param_1 + 0x298);
    if (lVar10 != 0) {
      lVar12 = param_1 + 0x298;
      do {
        lVar2 = 8;
        if (uStack_118 <= *(ulong *)(lVar10 + 0x38)) {
          lVar2 = 0;
          lVar12 = lVar10;
        }
        lVar10 = *(long *)(lVar10 + lVar2);
      } while (lVar10 != 0);
      if ((lVar12 != param_1 + 0x298) && (*(ulong *)(lVar12 + 0x38) <= uStack_118)) {
        func_0x00010a351ad8(&puStack_100,*param_3,*(long *)(lVar12 + 0x40) + 0xf0);
        func_0x0001098968d0(param_3 + 1,&puStack_100);
        if ((3 < (int)puStack_100) && (puStack_f8 != (undefined8 *)0x0)) {
          (**(code **)*puStack_f8)();
        }
        goto LAB_10a33b3c4;
      }
    }
    lVar10 = *(long *)(param_1 + 0x2b0);
    if (lVar10 != 0) {
      lVar12 = param_1 + 0x2b0;
      do {
        lVar2 = 8;
        if (uStack_118 <= *(ulong *)(lVar10 + 0x38)) {
          lVar2 = 0;
          lVar12 = lVar10;
        }
        lVar10 = *(long *)(lVar10 + lVar2);
      } while (lVar10 != 0);
      if ((lVar12 != param_1 + 0x2b0) && (*(ulong *)(lVar12 + 0x38) <= uStack_118)) {
        uVar6 = *(long *)(*(long *)(lVar12 + 0x40) + 0xf0) != 0;
code_r0x00010a33a880:
        puStack_100 = (undefined8 *)CONCAT71(puStack_100._1_7_,uVar6);
        FUN_10a351b5c(param_3,&puStack_100);
      }
    }
  }
  else {
    do {
      lVar10 = 8;
      if (uStack_118 <= (ulong)plVar13[7]) {
        lVar10 = 0;
        plVar11 = plVar13;
      }
      plVar13 = *(long **)((long)plVar13 + lVar10);
    } while (plVar13 != (long *)0x0);
    if ((plVar11 == plVar9) || (uStack_118 < (ulong)plVar11[7])) goto LAB_10a33a75c;
    lVar10 = plVar11[8];
    if (0xf < *(byte *)(lVar10 + 100)) {
      FUN_10a05bab8(&UNK_10f6347d3);
      goto LAB_10a33b584;
    }
    puVar1 = (undefined8 *)(lVar10 + 0x24);
    switch(*(byte *)(lVar10 + 100)) {
    case 0:
      puStack_100 = (undefined8 *)CONCAT44(puStack_100._4_4_,*(undefined4 *)puVar1);
      func_0x00010a3680dc(param_3,&puStack_100);
      break;
    case 1:
      puStack_100 = (undefined8 *)CONCAT44(puStack_100._4_4_,*(undefined4 *)puVar1);
      func_0x00010a368134(param_3,&puStack_100);
      break;
    case 2:
      uVar6 = *(undefined1 *)puVar1;
      goto code_r0x00010a33a880;
    case 3:
      puStack_100 = (undefined8 *)*puVar1;
      func_0x00010a36818c(param_3,&puStack_100);
      break;
    case 4:
      puStack_100 = *(undefined8 **)(lVar10 + 0x24);
      puStack_f8 = (undefined8 *)CONCAT44(puStack_f8._4_4_,*(undefined4 *)(lVar10 + 0x2c));
      func_0x00010a3681e8(param_3,&puStack_100);
      break;
    case 5:
      puStack_f8 = *(undefined8 **)(lVar10 + 0x2c);
      puStack_100 = (undefined8 *)*puVar1;
      func_0x00010a368244(param_3,&puStack_100);
      break;
    case 6:
      puStack_f8 = *(undefined8 **)(lVar10 + 0x2c);
      puStack_100 = (undefined8 *)*puVar1;
      func_0x00010a3682a0(param_3,&puStack_100);
      break;
    case 7:
      FUN_10a3684c4(param_3);
      break;
    case 8:
      FUN_10a3685f4(param_3);
      break;
    case 9:
      puStack_100 = (undefined8 *)CONCAT44(puStack_100._4_4_,*(undefined4 *)puVar1);
      FUN_10a368728(param_3,&puStack_100);
      break;
    case 10:
      puStack_100 = (undefined8 *)*puVar1;
      FUN_10a368780(param_3,&puStack_100);
      break;
    case 0xb:
      puStack_100 = *(undefined8 **)(lVar10 + 0x24);
      puStack_f8 = (undefined8 *)CONCAT44(puStack_f8._4_4_,*(undefined4 *)(lVar10 + 0x2c));
      FUN_10a3689a4(param_3,&puStack_100);
      break;
    case 0xc:
      puStack_f8 = *(undefined8 **)(lVar10 + 0x2c);
      puStack_100 = (undefined8 *)*puVar1;
      FUN_10a368bd0(param_3,&puStack_100);
      break;
    case 0xd:
      puStack_100 = (undefined8 *)*puVar1;
      FUN_10a368df4(param_3,&puStack_100);
      break;
    case 0xe:
      puStack_100 = *(undefined8 **)(lVar10 + 0x24);
      puStack_f8 = (undefined8 *)CONCAT44(puStack_f8._4_4_,*(undefined4 *)(lVar10 + 0x2c));
      FUN_10a369018(param_3,&puStack_100);
      break;
    case 0xf:
      puStack_f8 = *(undefined8 **)(lVar10 + 0x2c);
      puStack_100 = (undefined8 *)*puVar1;
      FUN_10a369244(param_3,&puStack_100);
    }
  }
LAB_10a33b3c4:
  if (cStack_119 < '\0') {
    __ZdlPv(auStack_130[0]);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
LAB_10a33b568:
  FUN_10a05bab8(&UNK_10f6347d3);
LAB_10a33b584:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a33b588);
  (*pcVar5)();
}



/* Entry: 10a33b664; end: 10a33b6c7;  */

long FUN_10a33b664(long param_1)

{
  if (*(char *)(*(long *)(param_1 + 0x18) + 8) == '\x01') {
    (**(code **)(param_1 + 0x10))();
  }
  (*(code *)**(undefined8 **)(param_1 + 0x50))();
  (*(code *)**(undefined8 **)(param_1 + 0x18))((long *)(param_1 + 0x18));
  return param_1;
}



/* Entry: 10a33b6c8; end: 10a33b6cf;  */

void FUN_10a33b6c8(long param_1,long *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined1 **ppuVar4;
  code *pcVar5;
  undefined1 uVar6;
  undefined8 ***pppuVar7;
  undefined8 **ppuVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  undefined1 *puStack_1a0;
  ulong uStack_198;
  byte bStack_189;
  undefined8 **appuStack_188 [2];
  char cStack_171;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_150;
  undefined7 uStack_148;
  undefined1 uStack_141;
  undefined7 uStack_140;
  char cStack_139;
  ulong uStack_138;
  undefined8 auStack_130 [2];
  char cStack_119;
  ulong uStack_118;
  undefined7 uStack_110;
  undefined1 uStack_109;
  undefined7 uStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  code *pcStack_f0;
  undefined **ppuStack_e8;
  undefined8 **ppuStack_e0;
  undefined8 *puStack_d8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a0d09b4(auStack_130);
  plVar9 = (long *)(*(long *)(param_1 + 0x1a8) + 8);
  plVar13 = (long *)*plVar9;
  plVar11 = plVar9;
  if (plVar13 == (long *)0x0) {
LAB_10a33a75c:
    lVar10 = *(long *)(param_1 + 0x1c8);
    if (lVar10 != 0) {
      lVar12 = param_1 + 0x1c8;
      do {
        lVar2 = 8;
        if (uStack_118 <= *(ulong *)(lVar10 + 0x38)) {
          lVar2 = 0;
          lVar12 = lVar10;
        }
        lVar10 = *(long *)(lVar10 + lVar2);
      } while (lVar10 != 0);
      if ((lVar12 != param_1 + 0x1c8) && (*(ulong *)(lVar12 + 0x38) <= uStack_118)) {
        puStack_f8 = (undefined8 *)(ulong)*(uint *)(lVar12 + 0x40);
        pcStack_f0 = (code *)&UNK_1053a6a3c;
        ppuStack_e8 = &PTR_DAT_110ae9180;
        ppuStack_b0 = &PTR_DAT_110ae9180;
        puStack_100 = param_3;
        if (*(uint *)(lVar12 + 0x40) != 0) {
          uVar14 = 0;
          do {
            uVar3 = param_2[1];
            if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
              uVar3 = (ulong)*(byte *)((long)param_2 + 0x17);
            }
            FUN_10a003c90(appuStack_188,uVar3 + 1,&puStack_1a0);
            pppuVar7 = (undefined8 ***)appuStack_188[0];
            if (-1 < cStack_171) {
              pppuVar7 = appuStack_188;
            }
            if (uVar3 != 0) {
              plVar11 = (long *)*param_2;
              if (-1 < *(char *)((long)param_2 + 0x17)) {
                plVar11 = param_2;
              }
              _memmove(pppuVar7,plVar11,uVar3);
            }
            *(undefined2 *)((long)pppuVar7 + uVar3) = 0x5b;
            __ZNSt3__19to_stringEi(&puStack_1a0,uVar14);
            uVar3 = uStack_198;
            ppuVar4 = (undefined1 **)puStack_1a0;
            if (-1 < (char)bStack_189) {
              uVar3 = (ulong)bStack_189;
              ppuVar4 = &puStack_1a0;
            }
            pppuVar7 = appuStack_188;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (pppuVar7,ppuVar4,uVar3);
            puStack_168 = pppuVar7[1];
            puStack_170 = *pppuVar7;
            puStack_160 = pppuVar7[2];
            pppuVar7[1] = (undefined8 **)0x0;
            pppuVar7[2] = (undefined8 **)0x0;
            *pppuVar7 = (undefined8 **)0x0;
            ppuVar8 = &puStack_170;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (ppuVar8,&DAT_10f62a9ea,1);
            uStack_150 = *ppuVar8;
            uStack_110 = SUB87(ppuVar8[1],0);
            uStack_109 = (undefined1)*(undefined8 *)((long)ppuVar8 + 0xf);
            uStack_108 = (undefined7)((ulong)*(undefined8 *)((long)ppuVar8 + 0xf) >> 8);
            cStack_139 = *(char *)((long)ppuVar8 + 0x17);
            ppuVar8[1] = (undefined8 *)0x0;
            ppuVar8[2] = (undefined8 *)0x0;
            *ppuVar8 = (undefined8 *)0x0;
            uStack_140 = uStack_108;
            uStack_148 = uStack_110;
            uStack_141 = uStack_109;
            uStack_138 = 0;
            func_0x000107c2b080(&uStack_150);
            if ((long)puStack_160 < 0) {
              __ZdlPv(puStack_170);
            }
            if ((char)bStack_189 < '\0') {
              __ZdlPv(puStack_1a0);
            }
            if (cStack_171 < '\0') {
              __ZdlPv(appuStack_188[0]);
            }
            plVar9 = (long *)(*(long *)(param_1 + 0x1a8) + 8);
            plVar13 = (long *)*plVar9;
            plVar11 = plVar9;
            if (plVar13 == (long *)0x0) {
LAB_10a33b3ac:
              if (cStack_139 < '\0') {
                __ZdlPv(uStack_150);
              }
              break;
            }
            do {
              lVar10 = 8;
              if (uStack_138 <= (ulong)plVar13[7]) {
                lVar10 = 0;
                plVar11 = plVar13;
              }
              plVar13 = *(long **)((long)plVar13 + lVar10);
            } while (plVar13 != (long *)0x0);
            if ((plVar11 == plVar9) || (uStack_138 < (ulong)plVar11[7])) goto LAB_10a33b3ac;
            lVar10 = plVar11[8];
            if (0xf < *(byte *)(lVar10 + 100)) goto LAB_10a33b568;
            puVar1 = (undefined8 *)(lVar10 + 0x24);
            switch(*(byte *)(lVar10 + 100)) {
            case 0:
              puStack_170 = (undefined8 *)CONCAT44(puStack_170._4_4_,*(undefined4 *)puVar1);
              if (((ulong)ppuStack_e8[1] & 1) == 0) {
                (*(code *)*ppuStack_b0)(&ppuStack_b0);
                ppuStack_b0 = &PTR_DAT_110bc6d38;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_a8 = 0;
                func_0x0001073b504c(&uStack_a8,puStack_f8);
                pcStack_f0 = FUN_10a3694ac;
                (*(code *)*ppuStack_e8)(&ppuStack_e8);
                ppuStack_e8 = &PTR_FUN_110bc6d50;
                ppuStack_e0 = &puStack_100;
                puStack_d8 = &uStack_a8;
              }
              FUN_10a0ca014(&uStack_a8,&puStack_170);
              break;
            case 1:
              puStack_170 = (undefined8 *)CONCAT44(puStack_170._4_4_,*(undefined4 *)puVar1);
              if (((ulong)ppuStack_e8[1] & 1) == 0) {
                (*(code *)*ppuStack_b0)(&ppuStack_b0);
                ppuStack_b0 = &PTR_DAT_110bc6d68;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_a8 = 0;
                func_0x000107c27e9c(&uStack_a8,puStack_f8);
                pcStack_f0 = FUN_10a3695d0;
                (*(code *)*ppuStack_e8)(&ppuStack_e8);
                ppuStack_e8 = &PTR_FUN_110bc6d80;
                ppuStack_e0 = &puStack_100;
                puStack_d8 = &uStack_a8;
              }
              func_0x000109febdc8(&uStack_a8,&puStack_170);
              break;
            case 2:
              puStack_170 = (undefined8 *)CONCAT71(puStack_170._1_7_,*(undefined1 *)puVar1);
              if (((ulong)ppuStack_e8[1] & 1) == 0) {
                (*(code *)*ppuStack_b0)(&ppuStack_b0);
                ppuStack_b0 = &PTR_DAT_110bc6d98;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_a8 = 0;
                func_0x000104becb10(&uStack_a8,puStack_f8);
                pcStack_f0 = FUN_10a3696e4;
                (*(code *)*ppuStack_e8)(&ppuStack_e8);
                ppuStack_e8 = &PTR_FUN_110bc6db0;
                ppuStack_e0 = &puStack_100;
                puStack_d8 = &uStack_a8;
              }
              func_0x0001078db3d4(&uStack_a8,&puStack_170);
              break;
            case 3:
              puStack_170 = (undefined8 *)*puVar1;
              if (((ulong)ppuStack_e8[1] & 1) == 0) {
                (*(code *)*ppuStack_b0)(&ppuStack_b0);
                ppuStack_b0 = &PTR_DAT_110bc6dc8;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_a8 = 0;
                func_0x000107458bb4(&uStack_a8,puStack_f8);
                pcStack_f0 = FUN_10a3697f8;
                (*(code *)*ppuStack_e8)(&ppuStack_e8);
                ppuStack_e8 = &PTR_FUN_110bc6de0;
                ppuStack_e0 = &puStack_100;
                puStack_d8 = &uStack_a8;
              }
              FUN_10a1f2004(&uStack_a8,&puStack_170);
              break;
            case 4:
              puStack_170 = *(undefined8 **)(lVar10 + 0x24);
              puStack_168 = (undefined8 *)CONCAT44(puStack_168._4_4_,*(undefined4 *)(lVar10 + 0x2c))
              ;
              if (((ulong)ppuStack_e8[1] & 1) == 0) {
                (*(code *)*ppuStack_b0)(&ppuStack_b0);
                ppuStack_b0 = &PTR_DAT_110bc6df8;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_a8 = 0;
                func_0x00010983ca2c(&uStack_a8,puStack_f8);
                pcStack_f0 = FUN_10a36991c;
                (*(code *)*ppuStack_e8)(&ppuStack_e8);
                ppuStack_e8 = &PTR_FUN_110bc6e10;
                ppuStack_e0 = &puStack_100;
                puStack_d8 = &uStack_a8;
              }
              FUN_10a0efe48(&uStack_a8,&puStack_170);
              break;
            case 5:
              puStack_168 = *(undefined8 **)(lVar10 + 0x2c);
              puStack_170 = (undefined8 *)*puVar1;
              if (((ulong)ppuStack_e8[1] & 1) == 0) {
                (*(code *)*ppuStack_b0)(&ppuStack_b0);
                ppuStack_b0 = &PTR_FUN_110bc6e28;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_a8 = 0;
                func_0x00010742a338(&uStack_a8,puStack_f8);
                pcStack_f0 = FUN_10a369c24;
                (*(code *)*ppuStack_e8)(&ppuStack_e8);
                ppuStack_e8 = &PTR_FUN_110bc6e40;
                ppuStack_e0 = &puStack_100;
                puStack_d8 = &uStack_a8;
              }
              FUN_10a369b18(&uStack_a8,&puStack_170);
              break;
            case 6:
              puStack_168 = *(undefined8 **)(lVar10 + 0x2c);
              puStack_170 = (undefined8 *)*puVar1;
              if (((ulong)ppuStack_e8[1] & 1) == 0) {
                (*(code *)*ppuStack_b0)(&ppuStack_b0);
                ppuStack_b0 = &PTR_FUN_110bc6e58;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_a8 = 0;
                FUN_10a369e14(&uStack_a8,puStack_f8);
                pcStack_f0 = FUN_10a369ff4;
                (*(code *)*ppuStack_e8)(&ppuStack_e8);
                ppuStack_e8 = &PTR_FUN_110bc6e70;
                ppuStack_e0 = &puStack_100;
                puStack_d8 = &uStack_a8;
              }
              func_0x00010a369ea0(&uStack_a8,&puStack_170);
              break;
            case 7:
              if (((ulong)ppuStack_e8[1] & 1) == 0) {
                (*(code *)*ppuStack_b0)(&ppuStack_b0);
                ppuStack_b0 = &PTR_FUN_110bc6e88;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_a8 = 0;
                func_0x000109670690(&uStack_a8,puStack_f8);
                pcStack_f0 = FUN_10a36a394;
                (*(code *)*ppuStack_e8)(&ppuStack_e8);
                ppuStack_e8 = &PTR_FUN_110bc6ea0;
                ppuStack_e0 = &puStack_100;
                puStack_d8 = &uStack_a8;
              }
              FUN_10a36a1e4(&uStack_a8,puVar1);
              break;
            case 8:
              if (((ulong)ppuStack_e8[1] & 1) == 0) {
                (*(code *)*ppuStack_b0)(&ppuStack_b0);
                ppuStack_b0 = &PTR_DAT_110bc6eb8;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_a8 = 0;
                FUN_10a32a7d4(&uStack_a8,puStack_f8);
                pcStack_f0 = FUN_10a36a5dc;
                (*(code *)*ppuStack_e8)(&ppuStack_e8);
                ppuStack_e8 = &PTR_FUN_110bc6ed0;
                ppuStack_e0 = &puStack_100;
                puStack_d8 = &uStack_a8;
              }
              func_0x00010a32a860(&uStack_a8,puVar1);
              break;
            case 9:
              puStack_170 = (undefined8 *)CONCAT44(puStack_170._4_4_,*(undefined4 *)puVar1);
              if (((ulong)ppuStack_e8[1] & 1) == 0) {
                (*(code *)*ppuStack_b0)(&ppuStack_b0);
                ppuStack_b0 = &PTR_DAT_110bc6ee8;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_a8 = 0;
                func_0x0001056c5718(&uStack_a8,puStack_f8);
                pcStack_f0 = FUN_10a36a810;
                (*(code *)*ppuStack_e8)(&ppuStack_e8);
                ppuStack_e8 = &PTR_FUN_110bc6f00;
                ppuStack_e0 = &puStack_100;
                puStack_d8 = &uStack_a8;
              }
              FUN_10a0e6678(&uStack_a8,&puStack_170);
              break;
            case 10:
              puStack_170 = (undefined8 *)*puVar1;
              if (((ulong)ppuStack_e8[1] & 1) == 0) {
                (*(code *)*ppuStack_b0)(&ppuStack_b0);
                ppuStack_b0 = &PTR_FUN_110bc6f18;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_a8 = 0;
                FUN_109ffc8bc(&uStack_a8,puStack_f8);
                pcStack_f0 = FUN_10a36aae8;
                (*(code *)*ppuStack_e8)(&ppuStack_e8);
                ppuStack_e8 = &PTR_FUN_110bc6f30;
                ppuStack_e0 = &puStack_100;
                puStack_d8 = &uStack_a8;
              }
              FUN_10a36a9e0(&uStack_a8,&puStack_170);
              break;
            case 0xb:
              puStack_170 = *(undefined8 **)(lVar10 + 0x24);
              puStack_168 = (undefined8 *)CONCAT44(puStack_168._4_4_,*(undefined4 *)(lVar10 + 0x2c))
              ;
              if (((ulong)ppuStack_e8[1] & 1) == 0) {
                (*(code *)*ppuStack_b0)(&ppuStack_b0);
                ppuStack_b0 = &PTR_FUN_110bc6f48;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_a8 = 0;
                FUN_10a36ac8c(&uStack_a8,puStack_f8);
                pcStack_f0 = FUN_10a36ae74;
                (*(code *)*ppuStack_e8)(&ppuStack_e8);
                ppuStack_e8 = &PTR_FUN_110bc6f60;
                ppuStack_e0 = &puStack_100;
                puStack_d8 = &uStack_a8;
              }
              func_0x00010a36ad38(&uStack_a8,&puStack_170);
              break;
            case 0xc:
              puStack_168 = *(undefined8 **)(lVar10 + 0x2c);
              puStack_170 = (undefined8 *)*puVar1;
              if (((ulong)ppuStack_e8[1] & 1) == 0) {
                (*(code *)*ppuStack_b0)(&ppuStack_b0);
                ppuStack_b0 = &PTR_FUN_110bc6f78;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_a8 = 0;
                FUN_10a36b024(&uStack_a8,puStack_f8);
                pcStack_f0 = FUN_10a36b204;
                (*(code *)*ppuStack_e8)(&ppuStack_e8);
                ppuStack_e8 = &PTR_FUN_110bc6f90;
                ppuStack_e0 = &puStack_100;
                puStack_d8 = &uStack_a8;
              }
              func_0x00010a36b0b0(&uStack_a8,&puStack_170);
              break;
            case 0xd:
              puStack_170 = (undefined8 *)*puVar1;
              if (((ulong)ppuStack_e8[1] & 1) == 0) {
                (*(code *)*ppuStack_b0)(&ppuStack_b0);
                ppuStack_b0 = &PTR_FUN_110bc6fa8;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_a8 = 0;
                FUN_10a36b3a8(&uStack_a8,puStack_f8);
                pcStack_f0 = FUN_10a36b584;
                (*(code *)*ppuStack_e8)(&ppuStack_e8);
                ppuStack_e8 = &PTR_FUN_110bc6fc0;
                ppuStack_e0 = &puStack_100;
                puStack_d8 = &uStack_a8;
              }
              func_0x00010a36b438(&uStack_a8,&puStack_170);
              break;
            case 0xe:
              puStack_170 = *(undefined8 **)(lVar10 + 0x24);
              puStack_168 = (undefined8 *)CONCAT44(puStack_168._4_4_,*(undefined4 *)(lVar10 + 0x2c))
              ;
              if (((ulong)ppuStack_e8[1] & 1) == 0) {
                (*(code *)*ppuStack_b0)(&ppuStack_b0);
                ppuStack_b0 = &PTR_FUN_110bc6fd8;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_a8 = 0;
                FUN_10a36b728(&uStack_a8,puStack_f8);
                pcStack_f0 = FUN_10a36b910;
                (*(code *)*ppuStack_e8)(&ppuStack_e8);
                ppuStack_e8 = &PTR_FUN_110bc6ff0;
                ppuStack_e0 = &puStack_100;
                puStack_d8 = &uStack_a8;
              }
              func_0x00010a36b7d4(&uStack_a8,&puStack_170);
              break;
            case 0xf:
              puStack_168 = *(undefined8 **)(lVar10 + 0x2c);
              puStack_170 = (undefined8 *)*puVar1;
              if (((ulong)ppuStack_e8[1] & 1) == 0) {
                (*(code *)*ppuStack_b0)(&ppuStack_b0);
                ppuStack_b0 = &PTR_FUN_110bc7008;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_a8 = 0;
                FUN_10a36bac0(&uStack_a8,puStack_f8);
                pcStack_f0 = FUN_10a36bca0;
                (*(code *)*ppuStack_e8)(&ppuStack_e8);
                ppuStack_e8 = &PTR_FUN_110bc7020;
                ppuStack_e0 = &puStack_100;
                puStack_d8 = &uStack_a8;
              }
              func_0x00010a36bb50(&uStack_a8,&puStack_170);
            }
            if (cStack_139 < '\0') {
              __ZdlPv(uStack_150);
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < *(uint *)(lVar12 + 0x40));
        }
        FUN_10a33b664(&puStack_100);
        goto LAB_10a33b3c4;
      }
    }
    lVar10 = *(long *)(param_1 + 0x1e0);
    if (lVar10 != 0) {
      lVar12 = param_1 + 0x1e0;
      do {
        lVar2 = 8;
        if (uStack_118 <= *(ulong *)(lVar10 + 0x38)) {
          lVar2 = 0;
          lVar12 = lVar10;
        }
        lVar10 = *(long *)(lVar10 + lVar2);
      } while (lVar10 != 0);
      if ((lVar12 != param_1 + 0x1e0) && (*(ulong *)(lVar12 + 0x38) <= uStack_118)) {
        FUN_10a1f92d8(param_3,*(long *)(lVar12 + 0x40) + 0x188);
        goto LAB_10a33b3c4;
      }
    }
    lVar10 = *(long *)(param_1 + 0x288);
    if (lVar10 != 0) {
      lVar12 = param_1 + 0x288;
      do {
        lVar2 = 8;
        if (uStack_118 <= *(ulong *)(lVar10 + 0x38)) {
          lVar2 = 0;
          lVar12 = lVar10;
        }
        lVar10 = *(long *)(lVar10 + lVar2);
      } while (lVar10 != 0);
      if ((lVar12 != param_1 + 0x288) && (*(ulong *)(lVar12 + 0x38) <= uStack_118)) {
        func_0x00010a351ad8(&puStack_100,*param_3,*(long *)(lVar12 + 0x40) + 0xf0);
        func_0x0001098968d0(param_3 + 1,&puStack_100);
        if ((3 < (int)puStack_100) && (puStack_f8 != (undefined8 *)0x0)) {
          (**(code **)*puStack_f8)();
        }
        goto LAB_10a33b3c4;
      }
    }
    lVar10 = *(long *)(param_1 + 0x2a0);
    if (lVar10 != 0) {
      lVar12 = param_1 + 0x2a0;
      do {
        lVar2 = 8;
        if (uStack_118 <= *(ulong *)(lVar10 + 0x38)) {
          lVar2 = 0;
          lVar12 = lVar10;
        }
        lVar10 = *(long *)(lVar10 + lVar2);
      } while (lVar10 != 0);
      if ((lVar12 != param_1 + 0x2a0) && (*(ulong *)(lVar12 + 0x38) <= uStack_118)) {
        uVar6 = *(long *)(*(long *)(lVar12 + 0x40) + 0xf0) != 0;
code_r0x00010a33a880:
        puStack_100 = (undefined8 *)CONCAT71(puStack_100._1_7_,uVar6);
        FUN_10a351b5c(param_3,&puStack_100);
      }
    }
  }
  else {
    do {
      lVar10 = 8;
      if (uStack_118 <= (ulong)plVar13[7]) {
        lVar10 = 0;
        plVar11 = plVar13;
      }
      plVar13 = *(long **)((long)plVar13 + lVar10);
    } while (plVar13 != (long *)0x0);
    if ((plVar11 == plVar9) || (uStack_118 < (ulong)plVar11[7])) goto LAB_10a33a75c;
    lVar10 = plVar11[8];
    if (0xf < *(byte *)(lVar10 + 100)) {
      FUN_10a05bab8(&UNK_10f6347d3);
      goto LAB_10a33b584;
    }
    puVar1 = (undefined8 *)(lVar10 + 0x24);
    switch(*(byte *)(lVar10 + 100)) {
    case 0:
      puStack_100 = (undefined8 *)CONCAT44(puStack_100._4_4_,*(undefined4 *)puVar1);
      func_0x00010a3680dc(param_3,&puStack_100);
      break;
    case 1:
      puStack_100 = (undefined8 *)CONCAT44(puStack_100._4_4_,*(undefined4 *)puVar1);
      func_0x00010a368134(param_3,&puStack_100);
      break;
    case 2:
      uVar6 = *(undefined1 *)puVar1;
      goto code_r0x00010a33a880;
    case 3:
      puStack_100 = (undefined8 *)*puVar1;
      func_0x00010a36818c(param_3,&puStack_100);
      break;
    case 4:
      puStack_100 = *(undefined8 **)(lVar10 + 0x24);
      puStack_f8 = (undefined8 *)CONCAT44(puStack_f8._4_4_,*(undefined4 *)(lVar10 + 0x2c));
      func_0x00010a3681e8(param_3,&puStack_100);
      break;
    case 5:
      puStack_f8 = *(undefined8 **)(lVar10 + 0x2c);
      puStack_100 = (undefined8 *)*puVar1;
      func_0x00010a368244(param_3,&puStack_100);
      break;
    case 6:
      puStack_f8 = *(undefined8 **)(lVar10 + 0x2c);
      puStack_100 = (undefined8 *)*puVar1;
      func_0x00010a3682a0(param_3,&puStack_100);
      break;
    case 7:
      FUN_10a3684c4(param_3);
      break;
    case 8:
      FUN_10a3685f4(param_3);
      break;
    case 9:
      puStack_100 = (undefined8 *)CONCAT44(puStack_100._4_4_,*(undefined4 *)puVar1);
      FUN_10a368728(param_3,&puStack_100);
      break;
    case 10:
      puStack_100 = (undefined8 *)*puVar1;
      FUN_10a368780(param_3,&puStack_100);
      break;
    case 0xb:
      puStack_100 = *(undefined8 **)(lVar10 + 0x24);
      puStack_f8 = (undefined8 *)CONCAT44(puStack_f8._4_4_,*(undefined4 *)(lVar10 + 0x2c));
      FUN_10a3689a4(param_3,&puStack_100);
      break;
    case 0xc:
      puStack_f8 = *(undefined8 **)(lVar10 + 0x2c);
      puStack_100 = (undefined8 *)*puVar1;
      FUN_10a368bd0(param_3,&puStack_100);
      break;
    case 0xd:
      puStack_100 = (undefined8 *)*puVar1;
      FUN_10a368df4(param_3,&puStack_100);
      break;
    case 0xe:
      puStack_100 = *(undefined8 **)(lVar10 + 0x24);
      puStack_f8 = (undefined8 *)CONCAT44(puStack_f8._4_4_,*(undefined4 *)(lVar10 + 0x2c));
      FUN_10a369018(param_3,&puStack_100);
      break;
    case 0xf:
      puStack_f8 = *(undefined8 **)(lVar10 + 0x2c);
      puStack_100 = (undefined8 *)*puVar1;
      FUN_10a369244(param_3,&puStack_100);
    }
  }
LAB_10a33b3c4:
  if (cStack_119 < '\0') {
    __ZdlPv(auStack_130[0]);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
LAB_10a33b568:
  FUN_10a05bab8(&UNK_10f6347d3);
LAB_10a33b584:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a33b588);
  (*pcVar5)();
}



/* Entry: 10a33b6d0; end: 10a33ce6b;  */

/* WARNING: Removing unreachable block (ram,0x00010a33c438) */

void FUN_10a33b6d0(float param_1,float param_2,float param_3,float param_4,long param_5,
                  long *param_6,long ******param_7)

{
  float *pfVar1;
  byte *pbVar2;
  long lVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  long ******pppppplVar9;
  long ******pppppplVar10;
  long ******pppppplVar11;
  long ******pppppplVar12;
  long *****ppppplVar13;
  undefined **ppuVar14;
  undefined8 *puVar15;
  int iVar16;
  long *plVar17;
  int iVar18;
  long *plVar19;
  long lVar20;
  char *pcVar21;
  long ****pppplVar22;
  undefined *extraout_x8;
  long lVar23;
  long ***ppplVar24;
  undefined *puVar25;
  long ****pppplVar26;
  long *plVar27;
  ulong uVar28;
  long *plVar29;
  undefined8 uVar30;
  long *****ppppplVar31;
  int iVar32;
  long *****ppppplVar33;
  long *****ppppplVar34;
  long *****ppppplVar35;
  long *****ppppplVar36;
  long *****ppppplVar37;
  ushort uVar38;
  long *****ppppplStack_160;
  long *plStack_158;
  byte bStack_149;
  long *****ppppplStack_148;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  undefined7 uStack_138;
  char cStack_131;
  long *****ppppplStack_130;
  undefined1 uStack_128;
  undefined6 uStack_127;
  undefined1 uStack_121;
  undefined7 uStack_120;
  char cStack_119;
  long ***ppplStack_118;
  undefined8 auStack_110 [2];
  char cStack_f9;
  ulong uStack_f8;
  long *****ppppplStack_f0;
  long ****pppplStack_e8;
  long ****pppplStack_e0;
  undefined7 uStack_d0;
  undefined1 uStack_c9;
  undefined7 uStack_c8;
  undefined1 uStack_c1;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar17 = param_6;
  FUN_10a0d09b4(auStack_110);
  pppppplVar11 = (long ******)(param_5 + 0x1b8);
  plVar19 = (long *)(*(long *)(param_5 + 0x1b8) + 8);
  plVar29 = (long *)*plVar19;
  plVar27 = plVar19;
  if (plVar29 == (long *)0x0) {
LAB_10a33b75c:
    lVar23 = *(long *)(param_5 + 0x1d8);
    if (lVar23 != 0) {
      lVar20 = param_5 + 0x1d8;
      do {
        lVar3 = 8;
        if (uStack_f8 <= *(ulong *)(lVar23 + 0x38)) {
          lVar3 = 0;
          lVar20 = lVar23;
        }
        lVar23 = *(long *)(lVar23 + lVar3);
      } while (lVar23 != 0);
      if ((lVar20 == param_5 + 0x1d8) || (uStack_f8 < *(ulong *)(lVar20 + 0x38)))
      goto LAB_10a33b7a4;
      uStack_b8 = (long ****)((ulong)uStack_b8 & 0xffffffff00000000);
      uStack_b0 = &PTR_DAT_110ae9180;
      iVar16 = *(int *)(lVar20 + 0x40);
      uStack_c0 = param_7;
      func_0x000109897e5c();
      if ((int)param_7 <= iVar16) {
        iVar16 = (int)param_7;
      }
      if (0 < iVar16) {
        iVar32 = 0;
        do {
          uVar28 = param_6[1];
          if (-1 < (char)*(byte *)((long)param_6 + 0x17)) {
            uVar28 = (ulong)*(byte *)((long)param_6 + 0x17);
          }
          FUN_10a003c90(&ppppplStack_148,uVar28 + 1,&ppppplStack_160);
          pppppplVar10 = (long ******)ppppplStack_148;
          if (-1 < cStack_131) {
            pppppplVar10 = &ppppplStack_148;
          }
          if (uVar28 != 0) {
            plVar27 = (long *)*param_6;
            if (-1 < *(char *)((long)param_6 + 0x17)) {
              plVar27 = param_6;
            }
            _memmove(pppppplVar10,plVar27,uVar28);
          }
          *(undefined2 *)((long)pppppplVar10 + uVar28) = 0x5b;
          __ZNSt3__19to_stringEi(&ppppplStack_160,iVar32);
          plVar27 = plStack_158;
          pppppplVar10 = (long ******)ppppplStack_160;
          if (-1 < (char)bStack_149) {
            plVar27 = (long *)(ulong)bStack_149;
            pppppplVar10 = &ppppplStack_160;
          }
          pppppplVar9 = &ppppplStack_148;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppppplVar9,pppppplVar10,plVar27);
          pppplStack_e8 = (long ****)pppppplVar9[1];
          ppppplStack_f0 = *pppppplVar9;
          pppplStack_e0 = (long ****)pppppplVar9[2];
          pppppplVar9[1] = (long *****)0x0;
          pppppplVar9[2] = (long *****)0x0;
          *pppppplVar9 = (long *****)0x0;
          pppppplVar10 = &ppppplStack_f0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppppplVar10,&DAT_10f62a9ea,1);
          ppppplStack_130 = *pppppplVar10;
          uStack_d0 = SUB87(pppppplVar10[1],0);
          uStack_c9 = (undefined1)*(undefined8 *)((long)pppppplVar10 + 0xf);
          uStack_c8 = (undefined7)((ulong)*(undefined8 *)((long)pppppplVar10 + 0xf) >> 8);
          cStack_119 = *(char *)((long)pppppplVar10 + 0x17);
          pppppplVar10[1] = (long *****)0x0;
          pppppplVar10[2] = (long *****)0x0;
          *pppppplVar10 = (long *****)0x0;
          uStack_120 = uStack_c8;
          uStack_128 = (undefined1)uStack_d0;
          uStack_127 = (undefined6)((uint7)uStack_d0 >> 8);
          uStack_121 = uStack_c9;
          ppplStack_118 = (long ***)0x0;
          func_0x000107c2b080(&ppppplStack_130);
          if ((long)pppplStack_e0 < 0) {
            __ZdlPv(ppppplStack_f0);
          }
          if ((char)bStack_149 < '\0') {
            __ZdlPv(ppppplStack_160);
          }
          if (cStack_131 < '\0') {
            __ZdlPv(ppppplStack_148);
          }
          ppppplVar33 = *pppppplVar11 + 1;
          ppppplVar13 = (long *****)*ppppplVar33;
          ppppplVar31 = ppppplVar33;
          if (ppppplVar13 == (long *****)0x0) {
LAB_10a33c19c:
            if (cStack_119 < '\0') {
              __ZdlPv(ppppplStack_130);
            }
            break;
          }
          do {
            lVar23 = 8;
            if (ppplStack_118 <= ppppplVar13[7]) {
              lVar23 = 0;
              ppppplVar31 = ppppplVar13;
            }
            ppppplVar13 = *(long ******)((long)ppppplVar13 + lVar23);
          } while (ppppplVar13 != (long *****)0x0);
          if ((ppppplVar31 == ppppplVar33) || (ppplStack_118 < ppppplVar31[7])) goto LAB_10a33c19c;
          pppplVar22 = ppppplVar31[8];
          if (0xf < *(byte *)((long)pppplVar22 + 100)) {
            FUN_10a05bab8(&UNK_10f6347d3);
            goto LAB_10a33cd78;
          }
          pbVar2 = (byte *)((long)pppplVar22 + 0x24);
          iVar18 = (int)(float)uStack_b8;
          switch(*(byte *)((long)pppplVar22 + 100)) {
          case 0:
            iVar18 = (int)(float)uStack_b8;
            if ((float)uStack_b8 == 0.0) {
              FUN_10a36c708(&ppppplStack_f0,uStack_c0);
              (*(code *)*uStack_b0)(&uStack_b0);
              uStack_a0 = (long *****)pppplStack_e8;
              uStack_a8 = (long ******)ppppplStack_f0;
              uStack_b0 = &PTR_DAT_110bc6d38;
              uStack_98 = (long *****)pppplStack_e0;
              iVar18 = (int)(float)uStack_b8;
            }
            uStack_b8 = (long ****)CONCAT44(uStack_b8._4_4_,iVar18 + 1);
            if ((ulong)((long)uStack_a0 - (long)uStack_a8 >> 2) <= (ulong)(long)iVar18)
            goto LAB_10a33cd78;
            *(undefined4 *)pbVar2 = *(undefined4 *)((long)uStack_a8 + (long)iVar18 * 4);
            break;
          case 1:
            if ((float)uStack_b8 == 0.0) {
              FUN_10a36c94c(&ppppplStack_f0,uStack_c0);
              (*(code *)*uStack_b0)(&uStack_b0);
              uStack_b0 = &PTR_DAT_110bc6d68;
code_r0x00010a33bf80:
              uStack_98 = (long *****)pppplStack_e0;
              iVar18 = (int)(float)uStack_b8;
              uStack_a8 = (long ******)ppppplStack_f0;
              uStack_a0 = (long *****)pppplStack_e8;
            }
            goto code_r0x00010a33bf90;
          case 2:
            iVar18 = (int)(float)uStack_b8;
            if ((float)uStack_b8 == 0.0) {
              FUN_10a36cba8(&ppppplStack_f0,uStack_c0);
              (*(code *)*uStack_b0)(&uStack_b0);
              uStack_b0 = &PTR_DAT_110bc6d98;
              uStack_a8 = (long ******)ppppplStack_f0;
              uStack_98 = (long *****)pppplStack_e0;
              uStack_a0 = (long *****)pppplStack_e8;
              iVar18 = (int)(float)uStack_b8;
            }
            uStack_b8 = (long ****)CONCAT44(uStack_b8._4_4_,iVar18 + 1);
            if (uStack_a0 <= (long *****)(long)iVar18) goto LAB_10a33cd78;
            *pbVar2 = (byte)((ulong)uStack_a8[(ulong)(long)iVar18 >> 6] >> ((long)iVar18 & 0x3fU)) &
                      1;
            break;
          case 3:
            if ((float)uStack_b8 == 0.0) {
              FUN_10a36cc0c(&ppppplStack_f0,uStack_c0);
              (*(code *)*uStack_b0)(&uStack_b0);
              uStack_a0 = (long *****)pppplStack_e8;
              uStack_a8 = (long ******)ppppplStack_f0;
              uStack_b0 = &PTR_DAT_110bc6dc8;
code_r0x00010a33c04c:
              iVar18 = (int)(float)uStack_b8;
              ppppplStack_f0 = (long *****)uStack_a8;
              pppplStack_e8 = (long ****)uStack_a0;
              uStack_98 = (long *****)pppplStack_e0;
            }
            goto code_r0x00010a33c05c;
          case 4:
            if ((float)uStack_b8 == 0.0) {
              FUN_10a36ce0c(&ppppplStack_f0,uStack_c0);
              (*(code *)*uStack_b0)(&uStack_b0);
              uStack_a0 = (long *****)pppplStack_e8;
              uStack_a8 = (long ******)ppppplStack_f0;
              uStack_b0 = &PTR_DAT_110bc6df8;
code_r0x00010a33bd9c:
              iVar18 = (int)(float)uStack_b8;
              ppppplStack_f0 = (long *****)uStack_a8;
              pppplStack_e8 = (long ****)uStack_a0;
              uStack_98 = (long *****)pppplStack_e0;
            }
            goto code_r0x00010a33bdac;
          case 5:
            if ((float)uStack_b8 == 0.0) {
              FUN_10a36d00c(&ppppplStack_f0,uStack_c0);
              (*(code *)*uStack_b0)(&uStack_b0);
              uStack_a0 = (long *****)pppplStack_e8;
              uStack_a8 = (long ******)ppppplStack_f0;
              uStack_b0 = &PTR_FUN_110bc6e28;
code_r0x00010a33bfe8:
              iVar18 = (int)(float)uStack_b8;
              ppppplStack_f0 = (long *****)uStack_a8;
              pppplStack_e8 = (long ****)uStack_a0;
              uStack_98 = (long *****)pppplStack_e0;
            }
            goto code_r0x00010a33bff8;
          case 6:
            if ((float)uStack_b8 == 0.0) {
              FUN_10a36d20c(&ppppplStack_f0,uStack_c0);
              (*(code *)*uStack_b0)(&uStack_b0);
              uStack_a0 = (long *****)pppplStack_e8;
              uStack_a8 = (long ******)ppppplStack_f0;
              uStack_b0 = &PTR_FUN_110bc6e58;
              goto code_r0x00010a33bfe8;
            }
            goto code_r0x00010a33bff8;
          case 7:
            iVar18 = (int)(float)uStack_b8;
            if ((float)uStack_b8 == 0.0) {
              FUN_10a36d40c(&ppppplStack_f0,uStack_c0);
              (*(code *)*uStack_b0)(&uStack_b0);
              uStack_a0 = (long *****)pppplStack_e8;
              uStack_a8 = (long ******)ppppplStack_f0;
              uStack_b0 = &PTR_FUN_110bc6e88;
              uStack_98 = (long *****)pppplStack_e0;
              iVar18 = (int)(float)uStack_b8;
            }
            uStack_b8 = (long ****)CONCAT44(uStack_b8._4_4_,iVar18 + 1);
            uVar28 = ((long)uStack_a0 - (long)uStack_a8 >> 2) * -0x71c71c71c71c71c7;
            if ((ulong)(long)iVar18 <= uVar28 && uVar28 - (long)iVar18 != 0) {
              pcVar21 = (char *)((long)uStack_a8 + (long)iVar18 * 0x24);
              ppppplVar33 = *(long ******)(pcVar21 + 8);
              ppppplVar31 = *(long ******)pcVar21;
              ppppplVar34 = *(long ******)(pcVar21 + 0x18);
              ppppplVar13 = *(long ******)(pcVar21 + 0x10);
              *(undefined4 *)((long)pppplVar22 + 0x44) = *(undefined4 *)(pcVar21 + 0x20);
              goto code_r0x00010a33c0ec;
            }
            goto LAB_10a33cd78;
          case 8:
            iVar18 = (int)(float)uStack_b8;
            if ((float)uStack_b8 == 0.0) {
              FUN_10a36d60c(&ppppplStack_f0,uStack_c0);
              (*(code *)*uStack_b0)(&uStack_b0);
              uStack_a0 = (long *****)pppplStack_e8;
              uStack_a8 = (long ******)ppppplStack_f0;
              uStack_b0 = &PTR_DAT_110bc6eb8;
              uStack_98 = (long *****)pppplStack_e0;
              iVar18 = (int)(float)uStack_b8;
            }
            uStack_b8 = (long ****)CONCAT44(uStack_b8._4_4_,iVar18 + 1);
            if ((ulong)(long)iVar18 < (ulong)((long)uStack_a0 - (long)uStack_a8 >> 6)) {
              pppppplVar10 = uStack_a8 + (long)iVar18 * 8;
              ppppplVar33 = pppppplVar10[1];
              ppppplVar31 = *pppppplVar10;
              ppppplVar34 = pppppplVar10[3];
              ppppplVar13 = pppppplVar10[2];
              ppppplVar35 = pppppplVar10[4];
              ppppplVar37 = pppppplVar10[7];
              ppppplVar36 = pppppplVar10[6];
              *(long ******)((long)pppplVar22 + 0x4c) = pppppplVar10[5];
              *(long ******)((long)pppplVar22 + 0x44) = ppppplVar35;
              *(long ******)((long)pppplVar22 + 0x5c) = ppppplVar37;
              *(long ******)((long)pppplVar22 + 0x54) = ppppplVar36;
code_r0x00010a33c0ec:
              *(long ******)((long)pppplVar22 + 0x3c) = ppppplVar34;
              *(long ******)((long)pppplVar22 + 0x34) = ppppplVar13;
              goto code_r0x00010a33c0f0;
            }
            goto LAB_10a33cd78;
          case 9:
            if ((float)uStack_b8 == 0.0) {
              FUN_10a36d80c(&ppppplStack_f0,uStack_c0);
              (*(code *)*uStack_b0)(&uStack_b0);
              uStack_b0 = &PTR_DAT_110bc6ee8;
              goto code_r0x00010a33bf80;
            }
code_r0x00010a33bf90:
            uStack_b8 = (long ****)CONCAT44(uStack_b8._4_4_,iVar18 + 1);
            if ((ulong)((long)uStack_a0 - (long)uStack_a8 >> 2) <= (ulong)(long)iVar18)
            goto LAB_10a33cd78;
            *(undefined4 *)pbVar2 = *(undefined4 *)((long)uStack_a8 + (long)iVar18 * 4);
            break;
          case 10:
            if ((float)uStack_b8 == 0.0) {
              FUN_10a36da44(&ppppplStack_f0,uStack_c0);
              (*(code *)*uStack_b0)(&uStack_b0);
              uStack_a0 = (long *****)pppplStack_e8;
              uStack_a8 = (long ******)ppppplStack_f0;
              uStack_b0 = &PTR_FUN_110bc6f18;
              goto code_r0x00010a33c04c;
            }
            goto code_r0x00010a33c05c;
          case 0xb:
            if ((float)uStack_b8 == 0.0) {
              FUN_10a36dc38(&ppppplStack_f0,uStack_c0);
              (*(code *)*uStack_b0)(&uStack_b0);
              uStack_a0 = (long *****)pppplStack_e8;
              uStack_a8 = (long ******)ppppplStack_f0;
              uStack_b0 = &PTR_FUN_110bc6f48;
              goto code_r0x00010a33bd9c;
            }
            goto code_r0x00010a33bdac;
          case 0xc:
            if ((float)uStack_b8 == 0.0) {
              FUN_10a36de2c(&ppppplStack_f0,uStack_c0);
              (*(code *)*uStack_b0)(&uStack_b0);
              uStack_a0 = (long *****)pppplStack_e8;
              uStack_a8 = (long ******)ppppplStack_f0;
              uStack_b0 = &PTR_FUN_110bc6f78;
              goto code_r0x00010a33bfe8;
            }
            goto code_r0x00010a33bff8;
          case 0xd:
            if ((float)uStack_b8 == 0.0) {
              FUN_10a36e020(&ppppplStack_f0,uStack_c0);
              (*(code *)*uStack_b0)(&uStack_b0);
              uStack_a0 = (long *****)pppplStack_e8;
              uStack_a8 = (long ******)ppppplStack_f0;
              uStack_b0 = &PTR_FUN_110bc6fa8;
              goto code_r0x00010a33c04c;
            }
code_r0x00010a33c05c:
            uStack_b8 = (long ****)CONCAT44(uStack_b8._4_4_,iVar18 + 1);
            if ((ulong)((long)uStack_a0 - (long)uStack_a8 >> 3) <= (ulong)(long)iVar18)
            goto LAB_10a33cd78;
            *(long ******)pbVar2 = uStack_a8[iVar18];
            break;
          case 0xe:
            if ((float)uStack_b8 == 0.0) {
              FUN_10a36e214(&ppppplStack_f0,uStack_c0);
              (*(code *)*uStack_b0)(&uStack_b0);
              uStack_a0 = (long *****)pppplStack_e8;
              uStack_a8 = (long ******)ppppplStack_f0;
              uStack_b0 = &PTR_FUN_110bc6fd8;
              goto code_r0x00010a33bd9c;
            }
code_r0x00010a33bdac:
            uStack_b8 = (long ****)CONCAT44(uStack_b8._4_4_,iVar18 + 1);
            uVar28 = ((long)uStack_a0 - (long)uStack_a8 >> 2) * -0x5555555555555555;
            if (uVar28 < (ulong)(long)iVar18 || uVar28 - (long)iVar18 == 0) goto LAB_10a33cd78;
            pcVar21 = (char *)((long)uStack_a8 + (long)iVar18 * 0xc);
            uVar30 = *(undefined8 *)pcVar21;
            *(undefined4 *)((long)pppplVar22 + 0x2c) = *(undefined4 *)(pcVar21 + 8);
            *(undefined8 *)pbVar2 = uVar30;
            break;
          case 0xf:
            if ((float)uStack_b8 == 0.0) {
              FUN_10a36e408(&ppppplStack_f0,uStack_c0);
              (*(code *)*uStack_b0)(&uStack_b0);
              uStack_a0 = (long *****)pppplStack_e8;
              uStack_a8 = (long ******)ppppplStack_f0;
              uStack_b0 = &PTR_FUN_110bc7008;
              goto code_r0x00010a33bfe8;
            }
code_r0x00010a33bff8:
            uStack_b8 = (long ****)CONCAT44(uStack_b8._4_4_,iVar18 + 1);
            if ((ulong)((long)uStack_a0 - (long)uStack_a8 >> 4) <= (ulong)(long)iVar18)
            goto LAB_10a33cd78;
            ppppplVar33 = (uStack_a8 + (long)iVar18 * 2)[1];
            ppppplVar31 = uStack_a8[(long)iVar18 * 2];
code_r0x00010a33c0f0:
            *(long ******)((long)pppplVar22 + 0x2c) = ppppplVar33;
            *(long ******)pbVar2 = ppppplVar31;
          }
          if (cStack_119 < '\0') {
            __ZdlPv(ppppplStack_130);
          }
          iVar32 = iVar32 + 1;
        } while (iVar32 != iVar16);
      }
      do {
        lVar23 = lRam0000000113301700;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(0x113301700,0x10);
        if (bVar7) {
          cVar4 = ExclusiveMonitorsStatus();
          lRam0000000113301700 = lRam0000000113301700 + 1;
        }
      } while (cVar4 != '\0');
      *(long *)(param_5 + 0x1c8) = lVar23;
      uStack_128 = 0;
      ppppplStack_130 = (long *****)pppppplVar11;
      FUN_10a0daaec(&ppppplStack_130);
      FUN_10a0daab8(&ppppplStack_130);
      (*(code *)*uStack_b0)(&uStack_b0);
      goto LAB_10a33c88c;
    }
LAB_10a33b7a4:
    lVar23 = *(long *)(param_5 + 0x1f0);
    if (lVar23 != 0) {
      lVar20 = param_5 + 0x1f0;
      do {
        lVar3 = 8;
        if (uStack_f8 <= *(ulong *)(lVar23 + 0x38)) {
          lVar3 = 0;
          lVar20 = lVar23;
        }
        lVar23 = *(long *)(lVar23 + lVar3);
      } while (lVar23 != 0);
      if ((lVar20 == param_5 + 0x1f0) || (uStack_f8 < *(ulong *)(lVar20 + 0x38)))
      goto LAB_10a33b7e8;
      uVar30 = *(undefined8 *)(lVar20 + 0x40);
      FUN_10a33ce6c(&uStack_c0,param_7);
      FUN_10a32f140(uVar30,&uStack_c0);
      if (uStack_b8 == (long ****)0x0) goto LAB_10a33c88c;
      pppplVar22 = uStack_b8 + 1;
      do {
        ppplVar24 = *pppplVar22;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppplVar22,0x10);
        if (bVar7) {
          *pppplVar22 = (long ***)((long)ppplVar24 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
        pppplVar26 = uStack_b8;
      } while (cVar4 != '\0');
LAB_10a33c45c:
      if (ppplVar24 == (long ***)0x0) {
        (*(code *)(*pppplVar26)[2])(pppplVar26);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar26);
      }
      goto LAB_10a33c88c;
    }
LAB_10a33b7e8:
    lVar23 = *(long *)(param_5 + 0x298);
    if (lVar23 == 0) {
LAB_10a33b830:
      lVar23 = *(long *)(param_5 + 0x2b0);
      if (lVar23 != 0) {
        lVar20 = param_5 + 0x2b0;
        do {
          lVar3 = 8;
          if (uStack_f8 <= *(ulong *)(lVar23 + 0x38)) {
            lVar3 = 0;
            lVar20 = lVar23;
          }
          lVar23 = *(long *)(lVar23 + lVar3);
        } while (lVar23 != 0);
        if ((lVar20 != param_5 + 0x2b0) && (*(ulong *)(lVar20 + 0x38) <= uStack_f8)) {
          FUN_10a36e5fc(&uStack_c0,*param_7,param_7 + 1);
          FUN_10a33d314(*(undefined8 *)(lVar20 + 0x40),uStack_c0,uStack_b8);
          uStack_128 = 0;
          ppppplStack_130 = (long *****)(param_5 + 0x2a8);
          FUN_10a33d4b4(&ppppplStack_130);
          FUN_10a35ed78(&ppppplStack_130);
          if (uStack_b8 != (long ****)0x0) {
            pppplVar22 = uStack_b8 + 1;
            do {
              ppplVar24 = *pppplVar22;
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(pppplVar22,0x10);
              if (bVar7) {
                *pppplVar22 = (long ***)((long)ppplVar24 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
              pppplVar26 = uStack_b8;
            } while (cVar4 != '\0');
            goto LAB_10a33c45c;
          }
        }
      }
      goto LAB_10a33c88c;
    }
    lVar20 = param_5 + 0x298;
    do {
      lVar3 = 8;
      if (uStack_f8 <= *(ulong *)(lVar23 + 0x38)) {
        lVar3 = 0;
        lVar20 = lVar23;
      }
      lVar23 = *(long *)(lVar23 + lVar3);
    } while (lVar23 != 0);
    if ((lVar20 == param_5 + 0x298) || (uStack_f8 < *(ulong *)(lVar20 + 0x38))) goto LAB_10a33b830;
    ppppplVar31 = *param_7;
    func_0x000109898610(&ppppplStack_148,ppppplVar31,param_7 + 1);
    if ((long ******)ppppplStack_148 == (long ******)0x0) {
      uStack_d0 = 0;
      uStack_c9 = 0;
      uStack_c8 = 0;
      uStack_c1 = 0;
    }
    else {
      pppppplVar11 = (long ******)ppppplStack_148;
      ___dynamic_cast(ppppplStack_148,&PTR_DAT_110b178e0,&PTR_DAT_110c41a10,0x10);
      if (pppppplVar11 == (long ******)0x0) {
        pppppplVar10 = &ppppplStack_160;
      }
      else {
        plStack_158 = (long *)CONCAT71(uStack_13f,uStack_140);
        pppppplVar10 = &ppppplStack_148;
        ppppplStack_160 = (long *****)pppppplVar11;
      }
      *pppppplVar10 = (long *****)0x0;
      ppppplVar33 = ppppplStack_160;
      pppppplVar10[1] = (long *****)0x0;
      if ((long ******)ppppplStack_160 == (long ******)0x0) {
        func_0x00010988bd28(&UNK_10f685500);
        goto LAB_10a33cd78;
      }
      FUN_10a0533bc(&ppppplStack_130,ppppplStack_160);
      if ((long ******)ppppplStack_130 == (long ******)0x0) {
        func_0x0001098849a4(&uStack_c0,ppppplVar31,param_7 + 1);
        ppppplVar13 = (long *****)0x30;
        __Znwm();
        plVar27 = plStack_158;
        ppppplVar13[1] = (long ****)0x0;
        ppppplVar13[2] = (long ****)0x0;
        *ppppplVar13 = (long ****)&PTR_DAT_110b174d8;
        ppppplStack_f0 = ppppplVar13 + 3;
        if ((float)uStack_c0 == 4.2039e-45) {
          ppppplVar13[3] = (long ****)ppppplVar31;
          *(undefined4 *)(ppppplVar13 + 4) = 3;
          ppppplVar13[5] = uStack_b8;
        }
        else if ((float)uStack_c0 == 2.8026e-45) {
          ppppplVar13[3] = (long ****)ppppplVar31;
          *(undefined4 *)(ppppplVar13 + 4) = 2;
          *(undefined1 *)(ppppplVar13 + 5) = (undefined1)uStack_b8;
        }
        else if ((int)(float)uStack_c0 < 4) {
          ppppplVar13[3] = (long ****)ppppplVar31;
          *(float *)(ppppplVar13 + 4) = (float)uStack_c0;
        }
        else {
          ppppplVar13[3] = (long ****)ppppplVar31;
          *(float *)(ppppplVar13 + 4) = (float)uStack_c0;
          ppppplVar13[5] = uStack_b8;
        }
        uStack_c0 = (long ******)ppppplVar33;
        uStack_b8 = (long ****)plStack_158;
        if (plStack_158 != (long *)0x0) {
          plVar17 = plStack_158 + 1;
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar7) {
              *plVar17 = *plVar17 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        puVar15 = (undefined8 *)0x90;
        pppplStack_e8 = (long ****)ppppplVar13;
        __Znwm();
        puVar15[1] = 0;
        puVar15[2] = 0;
        *puVar15 = &PTR_FUN_110b9fe30;
        ppppplStack_130 = (long *****)(puVar15 + 3);
        *ppppplStack_130 = (long ****)ppppplVar33;
        uStack_c0 = (long ******)0x0;
        uStack_b8 = (long ****)0x0;
        puVar15[4] = plVar27;
        puVar15[5] = 0;
        puVar15[6] = 0;
        puVar15[7] = 0x32aaaba7;
        puVar15[9] = 0;
        puVar15[8] = 0;
        puVar15[0xb] = 0;
        puVar15[10] = 0;
        puVar15[0xd] = 0;
        puVar15[0xc] = 0;
        puVar15[0xf] = 0;
        puVar15[0xe] = 0;
        puVar15[0x11] = 0;
        puVar15[0x10] = 0;
        plVar27 = (long *)CONCAT17(uStack_121,CONCAT61(uStack_127,uStack_128));
        uStack_128 = SUB81(puVar15,0);
        uStack_127 = (undefined6)((ulong)puVar15 >> 8);
        uStack_121 = (undefined1)((ulong)puVar15 >> 0x38);
        if (plVar27 != (long *)0x0) {
          plVar17 = plVar27 + 1;
          do {
            lVar23 = *plVar17;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar7) {
              *plVar17 = lVar23 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar23 == 0) {
            (**(code **)(*plVar27 + 0x10))(plVar27);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
          }
        }
        plVar27 = (long *)uStack_b8;
        if (uStack_b8 != (long ****)0x0) {
          plVar17 = (long *)(uStack_b8 + 1);
          do {
            lVar23 = *plVar17;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar7) {
              *plVar17 = lVar23 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar23 == 0) {
            (**(code **)((long)*uStack_b8 + 0x10))(uStack_b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
          }
        }
        func_0x00010a04a7fc(ppppplStack_130 + 2,&ppppplStack_f0);
        uStack_c8 = CONCAT61(uStack_127,uStack_128);
        uStack_b8 = (long ****)CONCAT17(uStack_121,uStack_c8);
        uStack_d0 = SUB87(ppppplStack_160,0);
        uStack_c9 = (undefined1)((ulong)ppppplStack_160 >> 0x38);
        uStack_c1 = uStack_121;
        if (uStack_b8 == (long ****)0x0) {
          uStack_b8 = (long ****)0x0;
        }
        else {
          pppplVar22 = uStack_b8 + 1;
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pppplVar22,0x10);
            if (bVar7) {
              *pppplVar22 = (long ***)((long)*pppplVar22 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pppplVar22,0x10);
            if (bVar7) {
              *pppplVar22 = (long ***)((long)*pppplVar22 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uStack_c0 = (long ******)ppppplStack_160;
        func_0x00010a053e8c(ppppplStack_130,&uStack_c0);
        pppplVar22 = uStack_b8;
        if (uStack_b8 != (long ****)0x0) {
          pppplVar26 = uStack_b8 + 1;
          do {
            ppplVar24 = *pppplVar26;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pppplVar26,0x10);
            if (bVar7) {
              *pppplVar26 = (long ***)((long)ppplVar24 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (ppplVar24 == (long ***)0x0) {
            (*(code *)(*uStack_b8)[2])(uStack_b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar22);
          }
        }
        func_0x00010a053ee8(ppppplStack_160,&ppppplStack_130);
        ppuVar14 = &PTR___tlv_bootstrap_11340df48;
        (*(code *)PTR___tlv_bootstrap_11340df48)(ppppplStack_160[10]);
        puVar25 = *ppuVar14;
        if (extraout_x8 != (undefined *)0x0) {
          puVar25 = extraout_x8;
        }
        FUN_10aa89b3c(*(undefined8 *)(puVar25 + 0x870),&ppppplStack_130);
        pppplVar22 = pppplStack_e8;
        if ((long *****)pppplStack_e8 != (long *****)0x0) {
          ppppplVar31 = (long *****)(pppplStack_e8 + 1);
          do {
            pppplVar26 = *ppppplVar31;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppplVar31,0x10);
            if (bVar7) {
              *ppppplVar31 = (long ****)((long)pppplVar26 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (pppplVar26 == (long ****)0x0) {
            (*(code *)(*pppplStack_e8)[2])(pppplStack_e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar22);
          }
        }
      }
      else {
        FUN_10a053e40(&uStack_c0);
        uStack_c8 = SUB87(uStack_b8,0);
        uStack_c1 = (undefined1)((ulong)uStack_b8 >> 0x38);
        uStack_d0 = SUB87(uStack_c0,0);
        uStack_c9 = (undefined1)((ulong)uStack_c0 >> 0x38);
      }
      plVar27 = (long *)CONCAT17(uStack_121,CONCAT61(uStack_127,uStack_128));
      if (plVar27 != (long *)0x0) {
        plVar17 = plVar27 + 1;
        do {
          lVar23 = *plVar17;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar7) {
            *plVar17 = lVar23 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar23 == 0) {
          (**(code **)(*plVar27 + 0x10))(plVar27);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
        }
      }
      if (plStack_158 != (long *)0x0) {
        plVar27 = plStack_158 + 1;
        do {
          lVar23 = *plVar27;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar7) {
            *plVar27 = lVar23 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar23 == 0) {
          (**(code **)(*plStack_158 + 0x10))(plStack_158);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_158);
        }
      }
    }
    plVar27 = (long *)CONCAT71(uStack_13f,uStack_140);
    if (plVar27 != (long *)0x0) {
      plVar17 = plVar27 + 1;
      do {
        lVar23 = *plVar17;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar7) {
          *plVar17 = lVar23 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar23 == 0) {
        (**(code **)(*plVar27 + 0x10))(plVar27);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
      }
    }
    (**(code **)(*(long *)CONCAT17(uStack_c9,uStack_d0) + 0x60))(&uStack_c0);
    ppppplStack_130 = (long *****)0x0;
    uStack_128 = 0;
    uStack_127 = 0;
    uStack_121 = 0;
    uStack_120 = 0;
    cStack_119 = '\0';
    func_0x000107c2b054(&ppppplStack_f0,&UNK_10f64f865);
    pppplVar22 = uStack_b8;
    pppppplVar11 = uStack_c0;
    if (-1 < (long)uStack_b0) {
      pppplVar22 = (long ****)((ulong)uStack_b0 >> 0x38);
      pppppplVar11 = (long ******)&uStack_c0;
    }
    ppppplVar31 = (long *****)pppplStack_e8;
    pppppplVar10 = (long ******)ppppplStack_f0;
    if (-1 < (long)pppplStack_e0) {
      ppppplVar31 = (long *****)((ulong)pppplStack_e0 >> 0x38);
      pppppplVar10 = &ppppplStack_f0;
    }
    if (ppppplVar31 == (long *****)0x0) {
      lVar23 = 0;
LAB_10a33c39c:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                (&ppppplStack_148,&uStack_c0,lVar23 + (long)ppppplVar31,0xffffffffffffffff,
                 &ppppplStack_160);
      uStack_128 = uStack_140;
      uStack_127 = (undefined6)uStack_13f;
      uStack_121 = (undefined1)((uint7)uStack_13f >> 0x30);
      ppppplStack_130 = ppppplStack_148;
      uStack_120 = uStack_138;
      cStack_119 = cStack_131;
    }
    else if ((long)ppppplVar31 <= (long)pppplVar22) {
      pppppplVar9 = (long ******)((long)pppppplVar11 + (long)pppplVar22);
      cVar4 = *(char *)pppppplVar10;
      pppppplVar10 = pppppplVar11;
      do {
        if ((0xfffffffffffffffe < (ulong)((long)pppplVar22 - (long)ppppplVar31)) ||
           (_memchr(pppppplVar10,(long)cVar4,((long)pppplVar22 - (long)ppppplVar31) + 1),
           pppppplVar10 == (long ******)0x0)) break;
        pppppplVar12 = pppppplVar10;
        _memcmp();
        if ((int)pppppplVar12 == 0) {
          if ((pppppplVar10 != pppppplVar9) &&
             (lVar23 = (long)pppppplVar10 - (long)pppppplVar11, lVar23 != -1)) goto LAB_10a33c39c;
          break;
        }
        pppppplVar10 = (long ******)((long)pppppplVar10 + 1);
        pppplVar22 = (long ****)((long)pppppplVar9 - (long)pppppplVar10);
      } while ((long)ppppplVar31 <= (long)pppplVar22);
    }
    lVar23 = CONCAT17(uStack_c9,uStack_d0);
    if ((*(long *)(lVar23 + 0xe8) - *(long *)(lVar23 + 0xe0) >> 3) * -0x3333333333333333 -
        (long)*(int *)(*(long *)(lVar20 + 0x40) + 0x120) == 0) {
      FUN_10a33cecc(*(long *)(lVar20 + 0x40),lVar23,CONCAT17(uStack_c1,uStack_c8));
      uStack_140 = 0;
      ppppplStack_148 = (long *****)(param_5 + 0x290);
      FUN_10a33d0a0(&ppppplStack_148);
      FUN_10a35e92c(&ppppplStack_148);
      if ((long)pppplStack_e0 < 0) {
        __ZdlPv(ppppplStack_f0);
      }
      if (cStack_119 < '\0') {
        __ZdlPv(ppppplStack_130);
      }
      pppplVar26 = (long ****)CONCAT17(uStack_c1,uStack_c8);
      if (pppplVar26 == (long ****)0x0) goto LAB_10a33c88c;
      pppplVar22 = pppplVar26 + 1;
      do {
        ppplVar24 = *pppplVar22;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppplVar22,0x10);
        if (bVar7) {
          *pppplVar22 = (long ***)((long)ppplVar24 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_10a33c45c;
    }
    goto LAB_10a33cb18;
  }
  do {
    lVar23 = 8;
    if (uStack_f8 <= (ulong)plVar29[7]) {
      lVar23 = 0;
      plVar27 = plVar29;
    }
    plVar29 = *(long **)((long)plVar29 + lVar23);
  } while (plVar29 != (long *)0x0);
  if ((plVar27 == plVar19) || (uStack_f8 < (ulong)plVar27[7])) goto LAB_10a33b75c;
  lVar23 = plVar27[8];
  if (0xf < *(byte *)(lVar23 + 100)) {
    FUN_10a05bab8(&UNK_10f6347d3);
    goto LAB_10a33cd78;
  }
  pfVar1 = (float *)(lVar23 + 0x24);
  switch(*(byte *)(lVar23 + 100)) {
  case 0:
    FUN_10a36be44(param_7);
    if (*pfVar1 != param_1) {
      *pfVar1 = param_1;
      break;
    }
    goto LAB_10a33c88c;
  case 1:
    FUN_10a36bed4();
    fVar8 = SUB84(param_7,0);
    goto code_r0x00010a33c688;
  case 2:
    FUN_10a36bf34();
    if ((uint)*(byte *)pfVar1 == (uint)param_7) goto LAB_10a33c88c;
    *(byte *)pfVar1 = (byte)param_7;
    break;
  case 3:
    FUN_10a36bf94(param_7);
    bVar7 = false;
    if ((*(float *)(lVar23 + 0x24) == param_1) &&
       (bVar7 = false, !NAN(*(float *)(lVar23 + 0x28)) && !NAN(param_2))) {
      bVar7 = *(float *)(lVar23 + 0x28) == param_2;
    }
    if (bVar7) goto LAB_10a33c88c;
    *(float *)(lVar23 + 0x24) = param_1;
    *(float *)(lVar23 + 0x28) = param_2;
    break;
  case 4:
    FUN_10a36bff8(param_7);
    bVar7 = false;
    if ((*(float *)(lVar23 + 0x24) == param_1) &&
       (bVar7 = false, !NAN(*(float *)(lVar23 + 0x28)) && !NAN(param_2))) {
      bVar7 = *(float *)(lVar23 + 0x28) == param_2;
    }
    bVar6 = false;
    if ((bVar7) && (bVar6 = false, !NAN(*(float *)(lVar23 + 0x2c)) && !NAN(param_3))) {
      bVar6 = *(float *)(lVar23 + 0x2c) == param_3;
    }
    if (bVar6) goto LAB_10a33c88c;
    *(float *)(lVar23 + 0x24) = param_1;
    *(float *)(lVar23 + 0x28) = param_2;
    *(float *)(lVar23 + 0x2c) = param_3;
    break;
  case 5:
    FUN_10a36c060(param_7);
    uVar38 = NEON_uminv(CONCAT26(-(ushort)((float)((ulong)*(undefined8 *)(lVar23 + 0x2c) >> 0x20) ==
                                          param_4),
                                 CONCAT24(-(ushort)((float)*(undefined8 *)(lVar23 + 0x2c) == param_3
                                                   ),
                                          CONCAT22(-(ushort)((float)((ulong)*(long *)pfVar1 >> 0x20)
                                                            == param_2),
                                                   -(ushort)((float)*(long *)pfVar1 == param_1)))),2
                       );
    if ((uVar38 & 1) != 0) goto LAB_10a33c88c;
    *(float *)(lVar23 + 0x24) = param_1;
    *(float *)(lVar23 + 0x28) = param_2;
    *(float *)(lVar23 + 0x2c) = param_3;
    *(float *)(lVar23 + 0x30) = param_4;
    break;
  case 6:
    FUN_10a36c0c8(param_7);
    bVar7 = false;
    if ((*(float *)(lVar23 + 0x24) == param_1) &&
       (bVar7 = false, !NAN(*(float *)(lVar23 + 0x28)) && !NAN(param_2))) {
      bVar7 = *(float *)(lVar23 + 0x28) == param_2;
    }
    if (bVar7) {
      bVar7 = false;
      if ((*(float *)(lVar23 + 0x2c) == param_3) &&
         (bVar7 = false, !NAN(*(float *)(lVar23 + 0x30)) && !NAN(param_4))) {
        bVar7 = *(float *)(lVar23 + 0x30) == param_4;
      }
      if (bVar7) goto LAB_10a33c88c;
    }
    *(float *)(lVar23 + 0x24) = param_1;
    *(float *)(lVar23 + 0x28) = param_2;
    *(float *)(lVar23 + 0x2c) = param_3;
    *(float *)(lVar23 + 0x30) = param_4;
    break;
  case 7:
    FUN_10a36c174(&uStack_c0,param_7);
    if ((((*pfVar1 == (float)uStack_c0) && (*(float *)(lVar23 + 0x28) == uStack_c0._4_4_)) &&
        ((*(float *)(lVar23 + 0x2c) == (float)uStack_b8 &&
         (((*(float *)(lVar23 + 0x30) == uStack_b8._4_4_ &&
           (*(float *)(lVar23 + 0x34) == (float)uStack_b0)) &&
          (*(float *)(lVar23 + 0x38) == uStack_b0._4_4_)))))) &&
       (((*(float *)(lVar23 + 0x3c) == (float)uStack_a8 &&
         (*(float *)(lVar23 + 0x40) == uStack_a8._4_4_)) &&
        (*(float *)(lVar23 + 0x44) == (float)uStack_a0)))) goto LAB_10a33c88c;
    *(long *****)(lVar23 + 0x2c) = uStack_b8;
    *(long *******)pfVar1 = uStack_c0;
    *(long *******)(lVar23 + 0x3c) = uStack_a8;
    *(undefined ***)(lVar23 + 0x34) = uStack_b0;
    *(float *)(lVar23 + 0x44) = (float)uStack_a0;
    break;
  case 8:
    FUN_10a36c1e8(&uStack_c0,param_7);
    if ((((((((*pfVar1 == (float)uStack_c0) && (*(float *)(lVar23 + 0x28) == uStack_c0._4_4_)) &&
            (*(float *)(lVar23 + 0x2c) == (float)uStack_b8)) &&
           ((*(float *)(lVar23 + 0x30) == uStack_b8._4_4_ &&
            (*(float *)(lVar23 + 0x34) == (float)uStack_b0)))) &&
          (*(float *)(lVar23 + 0x38) == uStack_b0._4_4_)) &&
         (((*(float *)(lVar23 + 0x3c) == (float)uStack_a8 &&
           (*(float *)(lVar23 + 0x40) == uStack_a8._4_4_)) &&
          ((*(float *)(lVar23 + 0x44) == (float)uStack_a0 &&
           (((*(float *)(lVar23 + 0x48) == uStack_a0._4_4_ &&
             (*(float *)(lVar23 + 0x4c) == (float)uStack_98)) &&
            (*(float *)(lVar23 + 0x50) == uStack_98._4_4_)))))))) &&
        ((*(float *)(lVar23 + 0x54) == fStack_90 && (*(float *)(lVar23 + 0x58) == fStack_8c)))) &&
       ((*(float *)(lVar23 + 0x5c) == fStack_88 && (*(float *)(lVar23 + 0x60) == fStack_84))))
    goto LAB_10a33c88c;
    *(long *****)(lVar23 + 0x2c) = uStack_b8;
    *(long *******)pfVar1 = uStack_c0;
    *(long *******)(lVar23 + 0x3c) = uStack_a8;
    *(undefined ***)(lVar23 + 0x34) = uStack_b0;
    *(long ******)(lVar23 + 0x4c) = uStack_98;
    *(long ******)(lVar23 + 0x44) = uStack_a0;
    *(ulong *)(lVar23 + 0x5c) = CONCAT44(fStack_84,fStack_88);
    *(ulong *)(lVar23 + 0x54) = CONCAT44(fStack_8c,fStack_90);
    break;
  case 9:
    FUN_10a36c2a0();
    fVar8 = SUB84(param_7,0);
code_r0x00010a33c688:
    if (*pfVar1 != fVar8) {
      *pfVar1 = fVar8;
      break;
    }
    goto LAB_10a33c88c;
  case 10:
    FUN_10a36c300();
    goto code_r0x00010a33c720;
  case 0xb:
    FUN_10a36c3a8();
    iVar16 = (int)plVar17;
    goto code_r0x00010a33c4e8;
  case 0xc:
    FUN_10a36c458();
    goto code_r0x00010a33c578;
  case 0xd:
    FUN_10a36c504();
code_r0x00010a33c720:
    if (*(int *)(lVar23 + 0x24) != (int)param_7 ||
        *(int *)(lVar23 + 0x28) != (int)((ulong)param_7 >> 0x20)) {
      *(long *******)pfVar1 = param_7;
      break;
    }
    goto LAB_10a33c88c;
  case 0xe:
    FUN_10a36c5ac();
    iVar16 = (int)plVar17;
code_r0x00010a33c4e8:
    if ((*(int *)(lVar23 + 0x24) != (int)param_7 ||
        *(int *)(lVar23 + 0x28) != (int)((ulong)param_7 >> 0x20)) ||
        *(int *)(lVar23 + 0x2c) != iVar16) {
      *(long *******)(lVar23 + 0x24) = param_7;
      *(int *)(lVar23 + 0x2c) = iVar16;
      break;
    }
    goto LAB_10a33c88c;
  case 0xf:
    FUN_10a36c65c();
code_r0x00010a33c578:
    if (((*(int *)(lVar23 + 0x24) != (int)param_7 ||
         *(int *)(lVar23 + 0x28) != (int)((ulong)param_7 >> 0x20)) ||
         *(int *)(lVar23 + 0x2c) != (int)plVar17) ||
       (*(int *)(lVar23 + 0x30) != (int)((ulong)plVar17 >> 0x20))) {
      *(long *******)(lVar23 + 0x24) = param_7;
      *(long **)(lVar23 + 0x2c) = plVar17;
      break;
    }
    goto LAB_10a33c88c;
  }
  do {
    lVar23 = lRam0000000113301700;
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(0x113301700,0x10);
    if (bVar7) {
      cVar4 = ExclusiveMonitorsStatus();
      lRam0000000113301700 = lRam0000000113301700 + 1;
    }
  } while (cVar4 != '\0');
  *(long *)(param_5 + 0x1c8) = lVar23;
  uStack_b8 = (long ****)((ulong)uStack_b8 & 0xffffffffffffff00);
  uStack_c0 = pppppplVar11;
  FUN_10a0daaec(&uStack_c0);
  FUN_10a0daab8(&uStack_c0);
LAB_10a33c88c:
  if (cStack_f9 < '\0') {
    __ZdlPv(auStack_110[0]);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
LAB_10a33cb18:
  puVar15 = (undefined8 *)0x120;
  ___cxa_allocate_exception();
  FUN_10a0ee900(&ppppplStack_148,&UNK_10f64f86c,0x9a);
  FUN_10a002a94(puVar15,&ppppplStack_148);
  *puVar15 = &PTR_FUN_110b99e70;
  ___cxa_throw(puVar15,&PTR_DAT_110b99e48,FUN_10a002a90);
LAB_10a33cd78:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a33cd7c);
  (*pcVar5)();
}



/* Entry: 10a33ce6c; end: 10a33cecb;  */

void FUN_10a33ce6c(undefined8 *param_1)

{
  FUN_10a065cdc(*param_1,param_1 + 1);
  return;
}



/* Entry: 10a33cecc; end: 10a33d09f;  */

void FUN_10a33cecc(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  ushort uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_38;
  
  if (param_3 != (long *)0x0) {
    plVar11 = param_3 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = *plVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar11 = (long *)(param_1 + 0xf0);
  plStack_98 = param_3;
  if (*plVar11 != param_2) {
    plStack_98 = (long *)0x0;
    plVar10 = *(long **)(param_1 + 0xf8);
    *(long *)(param_1 + 0xf0) = param_2;
    *(long **)(param_1 + 0xf8) = param_3;
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 1;
      do {
        lVar9 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    puVar6 = &uStack_90;
    func_0x00010a1bd170();
    uVar5 = uRam0000000113301758;
    uVar2 = *(ushort *)((long)plVar11 + (0x71 - (ulong)uRam0000000113301758));
    if ((uVar2 >> 8 & 1) == 0) {
      if (((*(long *)((long)plVar11 + (0x48 - (ulong)uRam0000000113301758)) != 0) ||
          ((uVar2 >> 9 & 1) != 0)) ||
         (*(long *)((long)plVar11 + (0x68 - (ulong)uRam0000000113301758)) != 0)) {
        uVar7 = 0;
        func_0x00010a1bd170();
        if ((uVar7 & 1) == 0) {
          uStack_58 = 0;
          uStack_60 = 0;
          uStack_48 = 0;
          uStack_50 = 0;
          uStack_78 = 0;
          uStack_80 = 0;
          uStack_68 = 0;
          uStack_70 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          ppuStack_38 = &PTR_DAT_110bc5e18;
          uVar7 = (ulong)&uStack_90 | 8;
          FUN_10a0dad0c(uVar7,&ppuStack_38);
          uVar8 = (ulong)uRam0000000113301758;
          if ((*(ushort *)((long)plVar11 + (0x71 - uVar8)) >> 8 & 1) != 0) {
            FUN_10a1bd5e0();
            uVar8 = (ulong)uRam0000000113301758;
            if (uVar7 != 0) {
              FUN_10a1bd648();
              uVar8 = (ulong)uRam0000000113301758;
            }
          }
          FUN_10a1c054c((long)plVar11 + (0x18 - uVar8),&uStack_90);
        }
        goto LAB_10a33d040;
      }
      *(long *)((long)plVar11 + (0x28 - (ulong)uRam0000000113301758)) =
           *(long *)((long)plVar11 + (0x28 - (ulong)uRam0000000113301758)) + 1;
    }
    if ((*(undefined ***)((long)plVar11 + (0x78 - (ulong)uVar5)) != &PTR_DAT_110bc5e18) &&
       (FUN_10a1bd5e0(), puVar6 != (undefined8 *)0x0)) {
      FUN_10a1bd648();
      *(undefined ***)((long)plVar11 + (0x78 - (ulong)uVar5)) = &PTR_DAT_110bc5e18;
    }
  }
LAB_10a33d040:
  if (plStack_98 != (long *)0x0) {
    plVar11 = plStack_98 + 1;
    do {
      lVar9 = *plVar11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
    }
  }
  return;
}



/* Entry: 10a33d0a0; end: 10a33d313;  */

void FUN_10a33d0a0(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ushort uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_48;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    uVar2 = 0;
    lVar3 = -0x290;
    if (cRam00000001137eafa8 == '\0') {
      lVar3 = -0xffff;
    }
    lVar3 = *param_1 + lVar3;
    uVar4 = *(ushort *)(lVar3 + 0x129);
    if ((((uVar4 >> 8 & 1) == 0) &&
        (((*(long *)(lVar3 + 0x100) != 0 || ((uVar4 >> 9 & 1) != 0)) ||
         (*(long *)(lVar3 + 0x120) != 0)))) || ((*(ushort *)(lVar3 + 0x70) >> 8 & 1) == 0)) {
      func_0x00010a1bd170();
      if ((uVar2 & 1) == 0) {
        *(undefined1 *)(param_1 + 1) = 1;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        ppuStack_48 = &PTR_DAT_110bc6750;
        uVar2 = (ulong)&uStack_a0 | 8;
        FUN_10a0dad0c(uVar2,&ppuStack_48);
        lVar3 = -0x290;
        if (cRam00000001137eafa8 == '\0') {
          lVar3 = -0xffff;
        }
        lVar3 = *param_1 + lVar3;
        uVar4 = *(ushort *)(lVar3 + 0x70);
        if (((uVar4 & 0x7f) == 0) && ((*(ushort *)(lVar3 + 0x129) & 0x7f) == 0)) {
          if ((uVar4 >> 8 & 1) == 0) {
            uVar2 = lVar3 + 0x40;
            FUN_10a1bfe94(uVar2,&uStack_a0);
          }
          else {
            FUN_10a1bd5e0();
            if (uVar2 != 0) {
              FUN_10a1bd7d8();
            }
          }
        }
        else {
          if ((uVar4 >> 7 & 1) == 0) {
            *(undefined8 *)(lVar3 + 0x80) = uStack_a0;
            *(ushort *)(lVar3 + 0x70) = uVar4 | 0x80;
          }
          uVar2 = lVar3 + 0x80;
          FUN_10a1bd398(uVar2,&uStack_a0);
        }
        lVar3 = *param_1;
        uVar4 = 0x290;
        if (cRam00000001137eafa8 == '\0') {
          uVar4 = 0xffff;
        }
        lVar1 = 0x290;
        if (cRam00000001137eafa8 == '\0') {
          lVar1 = 0xffff;
        }
        if ((*(ushort *)((lVar3 - lVar1) + 0x129) >> 8 & 1) != 0) {
          FUN_10a1bd5e0();
          lVar3 = *param_1;
          uVar4 = 0x290;
          if (cRam00000001137eafa8 == '\0') {
            uVar4 = 0xffff;
          }
          if (uVar2 != 0) {
            FUN_10a1bd648();
            lVar3 = *param_1;
            uVar4 = 0x290;
            if (cRam00000001137eafa8 == '\0') {
              uVar4 = 0xffff;
            }
          }
        }
        FUN_10a1c054c((lVar3 - (ulong)uVar4) + 0xd0,&uStack_a0);
      }
    }
    else {
      *(undefined1 *)(param_1 + 1) = 1;
      if ((*(ushort *)(lVar3 + 0x129) >> 8 & 1) == 0) {
        *(long *)(lVar3 + 0xe0) = *(long *)(lVar3 + 0xe0) + 1;
      }
      ppuVar6 = *(undefined ***)(lVar3 + 0x130);
      ppuVar5 = *(undefined ***)(lVar3 + 0x78);
      if ((ppuVar6 != &PTR_DAT_110bc6750 || ppuVar5 != &PTR_DAT_110bc6750) &&
         (FUN_10a1bd5e0(), param_1 != (long *)0x0)) {
        if (ppuVar6 != &PTR_DAT_110bc6750) {
          FUN_10a1bd648(param_1,lVar3 + 0xd0,&PTR_DAT_110bc6750);
          *(undefined ***)(lVar3 + 0x130) = &PTR_DAT_110bc6750;
        }
        if (ppuVar5 != &PTR_DAT_110bc6750) {
          FUN_10a1bd7d8(param_1,lVar3 + 0x40,&PTR_DAT_110bc6750);
          *(undefined ***)(lVar3 + 0x78) = &PTR_DAT_110bc6750;
        }
      }
    }
  }
  return;
}



/* Entry: 10a33d314; end: 10a33d4b3;  */

void FUN_10a33d314(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  ushort uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_38;
  
  if (param_3 != (long *)0x0) {
    plVar10 = param_3 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar10 = (long *)(param_1 + 0xf0);
  lStack_a0 = param_2;
  plStack_98 = param_3;
  if (*plVar10 != param_2) {
    FUN_10a350ec8(plVar10,&lStack_a0);
    puVar6 = &uStack_90;
    func_0x00010a1bd170();
    uVar5 = uRam000000011330175a;
    uVar2 = *(ushort *)((long)plVar10 + (0x71 - (ulong)uRam000000011330175a));
    if ((uVar2 >> 8 & 1) == 0) {
      if (((*(long *)((long)plVar10 + (0x48 - (ulong)uRam000000011330175a)) != 0) ||
          ((uVar2 >> 9 & 1) != 0)) ||
         (*(long *)((long)plVar10 + (0x68 - (ulong)uRam000000011330175a)) != 0)) {
        uVar7 = 0;
        func_0x00010a1bd170();
        if ((uVar7 & 1) == 0) {
          uStack_58 = 0;
          uStack_60 = 0;
          uStack_48 = 0;
          uStack_50 = 0;
          uStack_78 = 0;
          uStack_80 = 0;
          uStack_68 = 0;
          uStack_70 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          ppuStack_38 = &PTR_DAT_110bc5e30;
          uVar7 = (ulong)&uStack_90 | 8;
          FUN_10a0dad0c(uVar7,&ppuStack_38);
          uVar8 = (ulong)uRam000000011330175a;
          if ((*(ushort *)((long)plVar10 + (0x71 - uVar8)) >> 8 & 1) != 0) {
            FUN_10a1bd5e0();
            uVar8 = (ulong)uRam000000011330175a;
            if (uVar7 != 0) {
              FUN_10a1bd648();
              uVar8 = (ulong)uRam000000011330175a;
            }
          }
          FUN_10a1c054c((long)plVar10 + (0x18 - uVar8),&uStack_90);
        }
        goto LAB_10a33d454;
      }
      *(long *)((long)plVar10 + (0x28 - (ulong)uRam000000011330175a)) =
           *(long *)((long)plVar10 + (0x28 - (ulong)uRam000000011330175a)) + 1;
    }
    if ((*(undefined ***)((long)plVar10 + (0x78 - (ulong)uVar5)) != &PTR_DAT_110bc5e30) &&
       (FUN_10a1bd5e0(), puVar6 != (undefined8 *)0x0)) {
      FUN_10a1bd648();
      *(undefined ***)((long)plVar10 + (0x78 - (ulong)uVar5)) = &PTR_DAT_110bc5e30;
    }
  }
LAB_10a33d454:
  plVar10 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar1 = plStack_98 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  return;
}



/* Entry: 10a33d4b4; end: 10a33d727;  */

void FUN_10a33d4b4(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ushort uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_48;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    uVar2 = 0;
    lVar3 = -0x2a8;
    if (cRam00000001137eafaa == '\0') {
      lVar3 = -0xffff;
    }
    lVar3 = *param_1 + lVar3;
    uVar4 = *(ushort *)(lVar3 + 0x129);
    if ((((uVar4 >> 8 & 1) == 0) &&
        (((*(long *)(lVar3 + 0x100) != 0 || ((uVar4 >> 9 & 1) != 0)) ||
         (*(long *)(lVar3 + 0x120) != 0)))) || ((*(ushort *)(lVar3 + 0x70) >> 8 & 1) == 0)) {
      func_0x00010a1bd170();
      if ((uVar2 & 1) == 0) {
        *(undefined1 *)(param_1 + 1) = 1;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        ppuStack_48 = &PTR_DAT_110bc6768;
        uVar2 = (ulong)&uStack_a0 | 8;
        FUN_10a0dad0c(uVar2,&ppuStack_48);
        lVar3 = -0x2a8;
        if (cRam00000001137eafaa == '\0') {
          lVar3 = -0xffff;
        }
        lVar3 = *param_1 + lVar3;
        uVar4 = *(ushort *)(lVar3 + 0x70);
        if (((uVar4 & 0x7f) == 0) && ((*(ushort *)(lVar3 + 0x129) & 0x7f) == 0)) {
          if ((uVar4 >> 8 & 1) == 0) {
            uVar2 = lVar3 + 0x40;
            FUN_10a1bfe94(uVar2,&uStack_a0);
          }
          else {
            FUN_10a1bd5e0();
            if (uVar2 != 0) {
              FUN_10a1bd7d8();
            }
          }
        }
        else {
          if ((uVar4 >> 7 & 1) == 0) {
            *(undefined8 *)(lVar3 + 0x80) = uStack_a0;
            *(ushort *)(lVar3 + 0x70) = uVar4 | 0x80;
          }
          uVar2 = lVar3 + 0x80;
          FUN_10a1bd398(uVar2,&uStack_a0);
        }
        lVar3 = *param_1;
        uVar4 = 0x2a8;
        if (cRam00000001137eafaa == '\0') {
          uVar4 = 0xffff;
        }
        lVar1 = 0x2a8;
        if (cRam00000001137eafaa == '\0') {
          lVar1 = 0xffff;
        }
        if ((*(ushort *)((lVar3 - lVar1) + 0x129) >> 8 & 1) != 0) {
          FUN_10a1bd5e0();
          lVar3 = *param_1;
          uVar4 = 0x2a8;
          if (cRam00000001137eafaa == '\0') {
            uVar4 = 0xffff;
          }
          if (uVar2 != 0) {
            FUN_10a1bd648();
            lVar3 = *param_1;
            uVar4 = 0x2a8;
            if (cRam00000001137eafaa == '\0') {
              uVar4 = 0xffff;
            }
          }
        }
        FUN_10a1c054c((lVar3 - (ulong)uVar4) + 0xd0,&uStack_a0);
      }
    }
    else {
      *(undefined1 *)(param_1 + 1) = 1;
      if ((*(ushort *)(lVar3 + 0x129) >> 8 & 1) == 0) {
        *(long *)(lVar3 + 0xe0) = *(long *)(lVar3 + 0xe0) + 1;
      }
      ppuVar6 = *(undefined ***)(lVar3 + 0x130);
      ppuVar5 = *(undefined ***)(lVar3 + 0x78);
      if ((ppuVar6 != &PTR_DAT_110bc6768 || ppuVar5 != &PTR_DAT_110bc6768) &&
         (FUN_10a1bd5e0(), param_1 != (long *)0x0)) {
        if (ppuVar6 != &PTR_DAT_110bc6768) {
          FUN_10a1bd648(param_1,lVar3 + 0xd0,&PTR_DAT_110bc6768);
          *(undefined ***)(lVar3 + 0x130) = &PTR_DAT_110bc6768;
        }
        if (ppuVar5 != &PTR_DAT_110bc6768) {
          FUN_10a1bd7d8(param_1,lVar3 + 0x40,&PTR_DAT_110bc6768);
          *(undefined ***)(lVar3 + 0x78) = &PTR_DAT_110bc6768;
        }
      }
    }
  }
  return;
}



/* Entry: 10a33d728; end: 10a33d72f;  */

/* WARNING: Removing unreachable block (ram,0x00010a33c438) */

void FUN_10a33d728(float param_1,float param_2,float param_3,float param_4,long param_5,
                  long *param_6,long ******param_7)

{
  float *pfVar1;
  byte *pbVar2;
  long lVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  long ******pppppplVar9;
  long ******pppppplVar10;
  long ******pppppplVar11;
  long ******pppppplVar12;
  long *****ppppplVar13;
  undefined **ppuVar14;
  undefined8 *puVar15;
  int iVar16;
  long *plVar17;
  int iVar18;
  long *plVar19;
  long lVar20;
  char *pcVar21;
  long ****pppplVar22;
  undefined *extraout_x8;
  long lVar23;
  long ***ppplVar24;
  undefined *puVar25;
  long ****pppplVar26;
  long *plVar27;
  ulong uVar28;
  long *plVar29;
  undefined8 uVar30;
  long *****ppppplVar31;
  int iVar32;
  long *****ppppplVar33;
  long *****ppppplVar34;
  long *****ppppplVar35;
  long *****ppppplVar36;
  long *****ppppplVar37;
  ushort uVar38;
  long *****ppppplStack_160;
  long *plStack_158;
  byte bStack_149;
  long *****ppppplStack_148;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  undefined7 uStack_138;
  char cStack_131;
  long *****ppppplStack_130;
  undefined1 uStack_128;
  undefined6 uStack_127;
  undefined1 uStack_121;
  undefined7 uStack_120;
  char cStack_119;
  long ***ppplStack_118;
  undefined8 auStack_110 [2];
  char cStack_f9;
  ulong uStack_f8;
  long *****ppppplStack_f0;
  long ****pppplStack_e8;
  long ****pppplStack_e0;
  undefined7 uStack_d0;
  undefined1 uStack_c9;
  undefined7 uStack_c8;
  undefined1 uStack_c1;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar17 = param_6;
  FUN_10a0d09b4(auStack_110);
  pppppplVar11 = (long ******)(param_5 + 0x1a8);
  plVar19 = (long *)(*(long *)(param_5 + 0x1a8) + 8);
  plVar29 = (long *)*plVar19;
  plVar27 = plVar19;
  if (plVar29 == (long *)0x0) {
LAB_10a33b75c:
    lVar23 = *(long *)(param_5 + 0x1c8);
    if (lVar23 != 0) {
      lVar20 = param_5 + 0x1c8;
      do {
        lVar3 = 8;
        if (uStack_f8 <= *(ulong *)(lVar23 + 0x38)) {
          lVar3 = 0;
          lVar20 = lVar23;
        }
        lVar23 = *(long *)(lVar23 + lVar3);
      } while (lVar23 != 0);
      if ((lVar20 == param_5 + 0x1c8) || (uStack_f8 < *(ulong *)(lVar20 + 0x38)))
      goto LAB_10a33b7a4;
      uStack_b8 = (long ****)((ulong)uStack_b8 & 0xffffffff00000000);
      uStack_b0 = &PTR_DAT_110ae9180;
      iVar16 = *(int *)(lVar20 + 0x40);
      uStack_c0 = param_7;
      func_0x000109897e5c();
      if ((int)param_7 <= iVar16) {
        iVar16 = (int)param_7;
      }
      if (0 < iVar16) {
        iVar32 = 0;
        do {
          uVar28 = param_6[1];
          if (-1 < (char)*(byte *)((long)param_6 + 0x17)) {
            uVar28 = (ulong)*(byte *)((long)param_6 + 0x17);
          }
          FUN_10a003c90(&ppppplStack_148,uVar28 + 1,&ppppplStack_160);
          pppppplVar10 = (long ******)ppppplStack_148;
          if (-1 < cStack_131) {
            pppppplVar10 = &ppppplStack_148;
          }
          if (uVar28 != 0) {
            plVar27 = (long *)*param_6;
            if (-1 < *(char *)((long)param_6 + 0x17)) {
              plVar27 = param_6;
            }
            _memmove(pppppplVar10,plVar27,uVar28);
          }
          *(undefined2 *)((long)pppppplVar10 + uVar28) = 0x5b;
          __ZNSt3__19to_stringEi(&ppppplStack_160,iVar32);
          plVar27 = plStack_158;
          pppppplVar10 = (long ******)ppppplStack_160;
          if (-1 < (char)bStack_149) {
            plVar27 = (long *)(ulong)bStack_149;
            pppppplVar10 = &ppppplStack_160;
          }
          pppppplVar9 = &ppppplStack_148;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppppplVar9,pppppplVar10,plVar27);
          pppplStack_e8 = (long ****)pppppplVar9[1];
          ppppplStack_f0 = *pppppplVar9;
          pppplStack_e0 = (long ****)pppppplVar9[2];
          pppppplVar9[1] = (long *****)0x0;
          pppppplVar9[2] = (long *****)0x0;
          *pppppplVar9 = (long *****)0x0;
          pppppplVar10 = &ppppplStack_f0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppppplVar10,&DAT_10f62a9ea,1);
          ppppplStack_130 = *pppppplVar10;
          uStack_d0 = SUB87(pppppplVar10[1],0);
          uStack_c9 = (undefined1)*(undefined8 *)((long)pppppplVar10 + 0xf);
          uStack_c8 = (undefined7)((ulong)*(undefined8 *)((long)pppppplVar10 + 0xf) >> 8);
          cStack_119 = *(char *)((long)pppppplVar10 + 0x17);
          pppppplVar10[1] = (long *****)0x0;
          pppppplVar10[2] = (long *****)0x0;
          *pppppplVar10 = (long *****)0x0;
          uStack_120 = uStack_c8;
          uStack_128 = (undefined1)uStack_d0;
          uStack_127 = (undefined6)((uint7)uStack_d0 >> 8);
          uStack_121 = uStack_c9;
          ppplStack_118 = (long ***)0x0;
          func_0x000107c2b080(&ppppplStack_130);
          if ((long)pppplStack_e0 < 0) {
            __ZdlPv(ppppplStack_f0);
          }
          if ((char)bStack_149 < '\0') {
            __ZdlPv(ppppplStack_160);
          }
          if (cStack_131 < '\0') {
            __ZdlPv(ppppplStack_148);
          }
          ppppplVar33 = *pppppplVar11 + 1;
          ppppplVar13 = (long *****)*ppppplVar33;
          ppppplVar31 = ppppplVar33;
          if (ppppplVar13 == (long *****)0x0) {
LAB_10a33c19c:
            if (cStack_119 < '\0') {
              __ZdlPv(ppppplStack_130);
            }
            break;
          }
          do {
            lVar23 = 8;
            if (ppplStack_118 <= ppppplVar13[7]) {
              lVar23 = 0;
              ppppplVar31 = ppppplVar13;
            }
            ppppplVar13 = *(long ******)((long)ppppplVar13 + lVar23);
          } while (ppppplVar13 != (long *****)0x0);
          if ((ppppplVar31 == ppppplVar33) || (ppplStack_118 < ppppplVar31[7])) goto LAB_10a33c19c;
          pppplVar22 = ppppplVar31[8];
          if (0xf < *(byte *)((long)pppplVar22 + 100)) {
            FUN_10a05bab8(&UNK_10f6347d3);
            goto LAB_10a33cd78;
          }
          pbVar2 = (byte *)((long)pppplVar22 + 0x24);
          iVar18 = (int)(float)uStack_b8;
          switch(*(byte *)((long)pppplVar22 + 100)) {
          case 0:
            iVar18 = (int)(float)uStack_b8;
            if ((float)uStack_b8 == 0.0) {
              FUN_10a36c708(&ppppplStack_f0,uStack_c0);
              (*(code *)*uStack_b0)(&uStack_b0);
              uStack_a0 = (long *****)pppplStack_e8;
              uStack_a8 = (long ******)ppppplStack_f0;
              uStack_b0 = &PTR_DAT_110bc6d38;
              uStack_98 = (long *****)pppplStack_e0;
              iVar18 = (int)(float)uStack_b8;
            }
            uStack_b8 = (long ****)CONCAT44(uStack_b8._4_4_,iVar18 + 1);
            if ((ulong)((long)uStack_a0 - (long)uStack_a8 >> 2) <= (ulong)(long)iVar18)
            goto LAB_10a33cd78;
            *(undefined4 *)pbVar2 = *(undefined4 *)((long)uStack_a8 + (long)iVar18 * 4);
            break;
          case 1:
            if ((float)uStack_b8 == 0.0) {
              FUN_10a36c94c(&ppppplStack_f0,uStack_c0);
              (*(code *)*uStack_b0)(&uStack_b0);
              uStack_b0 = &PTR_DAT_110bc6d68;
code_r0x00010a33bf80:
              uStack_98 = (long *****)pppplStack_e0;
              iVar18 = (int)(float)uStack_b8;
              uStack_a8 = (long ******)ppppplStack_f0;
              uStack_a0 = (long *****)pppplStack_e8;
            }
            goto code_r0x00010a33bf90;
          case 2:
            iVar18 = (int)(float)uStack_b8;
            if ((float)uStack_b8 == 0.0) {
              FUN_10a36cba8(&ppppplStack_f0,uStack_c0);
              (*(code *)*uStack_b0)(&uStack_b0);
              uStack_b0 = &PTR_DAT_110bc6d98;
              uStack_a8 = (long ******)ppppplStack_f0;
              uStack_98 = (long *****)pppplStack_e0;
              uStack_a0 = (long *****)pppplStack_e8;
              iVar18 = (int)(float)uStack_b8;
            }
            uStack_b8 = (long ****)CONCAT44(uStack_b8._4_4_,iVar18 + 1);
            if (uStack_a0 <= (long *****)(long)iVar18) goto LAB_10a33cd78;
            *pbVar2 = (byte)((ulong)uStack_a8[(ulong)(long)iVar18 >> 6] >> ((long)iVar18 & 0x3fU)) &
                      1;
            break;
          case 3:
            if ((float)uStack_b8 == 0.0) {
              FUN_10a36cc0c(&ppppplStack_f0,uStack_c0);
              (*(code *)*uStack_b0)(&uStack_b0);
              uStack_a0 = (long *****)pppplStack_e8;
              uStack_a8 = (long ******)ppppplStack_f0;
              uStack_b0 = &PTR_DAT_110bc6dc8;
code_r0x00010a33c04c:
              iVar18 = (int)(float)uStack_b8;
              ppppplStack_f0 = (long *****)uStack_a8;
              pppplStack_e8 = (long ****)uStack_a0;
              uStack_98 = (long *****)pppplStack_e0;
            }
            goto code_r0x00010a33c05c;
          case 4:
            if ((float)uStack_b8 == 0.0) {
              FUN_10a36ce0c(&ppppplStack_f0,uStack_c0);
              (*(code *)*uStack_b0)(&uStack_b0);
              uStack_a0 = (long *****)pppplStack_e8;
              uStack_a8 = (long ******)ppppplStack_f0;
              uStack_b0 = &PTR_DAT_110bc6df8;
code_r0x00010a33bd9c:
              iVar18 = (int)(float)uStack_b8;
              ppppplStack_f0 = (long *****)uStack_a8;
              pppplStack_e8 = (long ****)uStack_a0;
              uStack_98 = (long *****)pppplStack_e0;
            }
            goto code_r0x00010a33bdac;
          case 5:
            if ((float)uStack_b8 == 0.0) {
              FUN_10a36d00c(&ppppplStack_f0,uStack_c0);
              (*(code *)*uStack_b0)(&uStack_b0);
              uStack_a0 = (long *****)pppplStack_e8;
              uStack_a8 = (long ******)ppppplStack_f0;
              uStack_b0 = &PTR_FUN_110bc6e28;
code_r0x00010a33bfe8:
              iVar18 = (int)(float)uStack_b8;
              ppppplStack_f0 = (long *****)uStack_a8;
              pppplStack_e8 = (long ****)uStack_a0;
              uStack_98 = (long *****)pppplStack_e0;
            }
            goto code_r0x00010a33bff8;
          case 6:
            if ((float)uStack_b8 == 0.0) {
              FUN_10a36d20c(&ppppplStack_f0,uStack_c0);
              (*(code *)*uStack_b0)(&uStack_b0);
              uStack_a0 = (long *****)pppplStack_e8;
              uStack_a8 = (long ******)ppppplStack_f0;
              uStack_b0 = &PTR_FUN_110bc6e58;
              goto code_r0x00010a33bfe8;
            }
            goto code_r0x00010a33bff8;
          case 7:
            iVar18 = (int)(float)uStack_b8;
            if ((float)uStack_b8 == 0.0) {
              FUN_10a36d40c(&ppppplStack_f0,uStack_c0);
              (*(code *)*uStack_b0)(&uStack_b0);
              uStack_a0 = (long *****)pppplStack_e8;
              uStack_a8 = (long ******)ppppplStack_f0;
              uStack_b0 = &PTR_FUN_110bc6e88;
              uStack_98 = (long *****)pppplStack_e0;
              iVar18 = (int)(float)uStack_b8;
            }
            uStack_b8 = (long ****)CONCAT44(uStack_b8._4_4_,iVar18 + 1);
            uVar28 = ((long)uStack_a0 - (long)uStack_a8 >> 2) * -0x71c71c71c71c71c7;
            if ((ulong)(long)iVar18 <= uVar28 && uVar28 - (long)iVar18 != 0) {
              pcVar21 = (char *)((long)uStack_a8 + (long)iVar18 * 0x24);
              ppppplVar33 = *(long ******)(pcVar21 + 8);
              ppppplVar31 = *(long ******)pcVar21;
              ppppplVar34 = *(long ******)(pcVar21 + 0x18);
              ppppplVar13 = *(long ******)(pcVar21 + 0x10);
              *(undefined4 *)((long)pppplVar22 + 0x44) = *(undefined4 *)(pcVar21 + 0x20);
              goto code_r0x00010a33c0ec;
            }
            goto LAB_10a33cd78;
          case 8:
            iVar18 = (int)(float)uStack_b8;
            if ((float)uStack_b8 == 0.0) {
              FUN_10a36d60c(&ppppplStack_f0,uStack_c0);
              (*(code *)*uStack_b0)(&uStack_b0);
              uStack_a0 = (long *****)pppplStack_e8;
              uStack_a8 = (long ******)ppppplStack_f0;
              uStack_b0 = &PTR_DAT_110bc6eb8;
              uStack_98 = (long *****)pppplStack_e0;
              iVar18 = (int)(float)uStack_b8;
            }
            uStack_b8 = (long ****)CONCAT44(uStack_b8._4_4_,iVar18 + 1);
            if ((ulong)(long)iVar18 < (ulong)((long)uStack_a0 - (long)uStack_a8 >> 6)) {
              pppppplVar10 = uStack_a8 + (long)iVar18 * 8;
              ppppplVar33 = pppppplVar10[1];
              ppppplVar31 = *pppppplVar10;
              ppppplVar34 = pppppplVar10[3];
              ppppplVar13 = pppppplVar10[2];
              ppppplVar35 = pppppplVar10[4];
              ppppplVar37 = pppppplVar10[7];
              ppppplVar36 = pppppplVar10[6];
              *(long ******)((long)pppplVar22 + 0x4c) = pppppplVar10[5];
              *(long ******)((long)pppplVar22 + 0x44) = ppppplVar35;
              *(long ******)((long)pppplVar22 + 0x5c) = ppppplVar37;
              *(long ******)((long)pppplVar22 + 0x54) = ppppplVar36;
code_r0x00010a33c0ec:
              *(long ******)((long)pppplVar22 + 0x3c) = ppppplVar34;
              *(long ******)((long)pppplVar22 + 0x34) = ppppplVar13;
              goto code_r0x00010a33c0f0;
            }
            goto LAB_10a33cd78;
          case 9:
            if ((float)uStack_b8 == 0.0) {
              FUN_10a36d80c(&ppppplStack_f0,uStack_c0);
              (*(code *)*uStack_b0)(&uStack_b0);
              uStack_b0 = &PTR_DAT_110bc6ee8;
              goto code_r0x00010a33bf80;
            }
code_r0x00010a33bf90:
            uStack_b8 = (long ****)CONCAT44(uStack_b8._4_4_,iVar18 + 1);
            if ((ulong)((long)uStack_a0 - (long)uStack_a8 >> 2) <= (ulong)(long)iVar18)
            goto LAB_10a33cd78;
            *(undefined4 *)pbVar2 = *(undefined4 *)((long)uStack_a8 + (long)iVar18 * 4);
            break;
          case 10:
            if ((float)uStack_b8 == 0.0) {
              FUN_10a36da44(&ppppplStack_f0,uStack_c0);
              (*(code *)*uStack_b0)(&uStack_b0);
              uStack_a0 = (long *****)pppplStack_e8;
              uStack_a8 = (long ******)ppppplStack_f0;
              uStack_b0 = &PTR_FUN_110bc6f18;
              goto code_r0x00010a33c04c;
            }
            goto code_r0x00010a33c05c;
          case 0xb:
            if ((float)uStack_b8 == 0.0) {
              FUN_10a36dc38(&ppppplStack_f0,uStack_c0);
              (*(code *)*uStack_b0)(&uStack_b0);
              uStack_a0 = (long *****)pppplStack_e8;
              uStack_a8 = (long ******)ppppplStack_f0;
              uStack_b0 = &PTR_FUN_110bc6f48;
              goto code_r0x00010a33bd9c;
            }
            goto code_r0x00010a33bdac;
          case 0xc:
            if ((float)uStack_b8 == 0.0) {
              FUN_10a36de2c(&ppppplStack_f0,uStack_c0);
              (*(code *)*uStack_b0)(&uStack_b0);
              uStack_a0 = (long *****)pppplStack_e8;
              uStack_a8 = (long ******)ppppplStack_f0;
              uStack_b0 = &PTR_FUN_110bc6f78;
              goto code_r0x00010a33bfe8;
            }
            goto code_r0x00010a33bff8;
          case 0xd:
            if ((float)uStack_b8 == 0.0) {
              FUN_10a36e020(&ppppplStack_f0,uStack_c0);
              (*(code *)*uStack_b0)(&uStack_b0);
              uStack_a0 = (long *****)pppplStack_e8;
              uStack_a8 = (long ******)ppppplStack_f0;
              uStack_b0 = &PTR_FUN_110bc6fa8;
              goto code_r0x00010a33c04c;
            }
code_r0x00010a33c05c:
            uStack_b8 = (long ****)CONCAT44(uStack_b8._4_4_,iVar18 + 1);
            if ((ulong)((long)uStack_a0 - (long)uStack_a8 >> 3) <= (ulong)(long)iVar18)
            goto LAB_10a33cd78;
            *(long ******)pbVar2 = uStack_a8[iVar18];
            break;
          case 0xe:
            if ((float)uStack_b8 == 0.0) {
              FUN_10a36e214(&ppppplStack_f0,uStack_c0);
              (*(code *)*uStack_b0)(&uStack_b0);
              uStack_a0 = (long *****)pppplStack_e8;
              uStack_a8 = (long ******)ppppplStack_f0;
              uStack_b0 = &PTR_FUN_110bc6fd8;
              goto code_r0x00010a33bd9c;
            }
code_r0x00010a33bdac:
            uStack_b8 = (long ****)CONCAT44(uStack_b8._4_4_,iVar18 + 1);
            uVar28 = ((long)uStack_a0 - (long)uStack_a8 >> 2) * -0x5555555555555555;
            if (uVar28 < (ulong)(long)iVar18 || uVar28 - (long)iVar18 == 0) goto LAB_10a33cd78;
            pcVar21 = (char *)((long)uStack_a8 + (long)iVar18 * 0xc);
            uVar30 = *(undefined8 *)pcVar21;
            *(undefined4 *)((long)pppplVar22 + 0x2c) = *(undefined4 *)(pcVar21 + 8);
            *(undefined8 *)pbVar2 = uVar30;
            break;
          case 0xf:
            if ((float)uStack_b8 == 0.0) {
              FUN_10a36e408(&ppppplStack_f0,uStack_c0);
              (*(code *)*uStack_b0)(&uStack_b0);
              uStack_a0 = (long *****)pppplStack_e8;
              uStack_a8 = (long ******)ppppplStack_f0;
              uStack_b0 = &PTR_FUN_110bc7008;
              goto code_r0x00010a33bfe8;
            }
code_r0x00010a33bff8:
            uStack_b8 = (long ****)CONCAT44(uStack_b8._4_4_,iVar18 + 1);
            if ((ulong)((long)uStack_a0 - (long)uStack_a8 >> 4) <= (ulong)(long)iVar18)
            goto LAB_10a33cd78;
            ppppplVar33 = (uStack_a8 + (long)iVar18 * 2)[1];
            ppppplVar31 = uStack_a8[(long)iVar18 * 2];
code_r0x00010a33c0f0:
            *(long ******)((long)pppplVar22 + 0x2c) = ppppplVar33;
            *(long ******)pbVar2 = ppppplVar31;
          }
          if (cStack_119 < '\0') {
            __ZdlPv(ppppplStack_130);
          }
          iVar32 = iVar32 + 1;
        } while (iVar32 != iVar16);
      }
      do {
        lVar23 = lRam0000000113301700;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(0x113301700,0x10);
        if (bVar7) {
          cVar4 = ExclusiveMonitorsStatus();
          lRam0000000113301700 = lRam0000000113301700 + 1;
        }
      } while (cVar4 != '\0');
      *(long *)(param_5 + 0x1b8) = lVar23;
      uStack_128 = 0;
      ppppplStack_130 = (long *****)pppppplVar11;
      FUN_10a0daaec(&ppppplStack_130);
      FUN_10a0daab8(&ppppplStack_130);
      (*(code *)*uStack_b0)(&uStack_b0);
      goto LAB_10a33c88c;
    }
LAB_10a33b7a4:
    lVar23 = *(long *)(param_5 + 0x1e0);
    if (lVar23 != 0) {
      lVar20 = param_5 + 0x1e0;
      do {
        lVar3 = 8;
        if (uStack_f8 <= *(ulong *)(lVar23 + 0x38)) {
          lVar3 = 0;
          lVar20 = lVar23;
        }
        lVar23 = *(long *)(lVar23 + lVar3);
      } while (lVar23 != 0);
      if ((lVar20 == param_5 + 0x1e0) || (uStack_f8 < *(ulong *)(lVar20 + 0x38)))
      goto LAB_10a33b7e8;
      uVar30 = *(undefined8 *)(lVar20 + 0x40);
      FUN_10a33ce6c(&uStack_c0,param_7);
      FUN_10a32f140(uVar30,&uStack_c0);
      if (uStack_b8 == (long ****)0x0) goto LAB_10a33c88c;
      pppplVar22 = uStack_b8 + 1;
      do {
        ppplVar24 = *pppplVar22;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppplVar22,0x10);
        if (bVar7) {
          *pppplVar22 = (long ***)((long)ppplVar24 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
        pppplVar26 = uStack_b8;
      } while (cVar4 != '\0');
LAB_10a33c45c:
      if (ppplVar24 == (long ***)0x0) {
        (*(code *)(*pppplVar26)[2])(pppplVar26);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar26);
      }
      goto LAB_10a33c88c;
    }
LAB_10a33b7e8:
    lVar23 = *(long *)(param_5 + 0x288);
    if (lVar23 == 0) {
LAB_10a33b830:
      lVar23 = *(long *)(param_5 + 0x2a0);
      if (lVar23 != 0) {
        lVar20 = param_5 + 0x2a0;
        do {
          lVar3 = 8;
          if (uStack_f8 <= *(ulong *)(lVar23 + 0x38)) {
            lVar3 = 0;
            lVar20 = lVar23;
          }
          lVar23 = *(long *)(lVar23 + lVar3);
        } while (lVar23 != 0);
        if ((lVar20 != param_5 + 0x2a0) && (*(ulong *)(lVar20 + 0x38) <= uStack_f8)) {
          FUN_10a36e5fc(&uStack_c0,*param_7,param_7 + 1);
          FUN_10a33d314(*(undefined8 *)(lVar20 + 0x40),uStack_c0,uStack_b8);
          uStack_128 = 0;
          ppppplStack_130 = (long *****)(param_5 + 0x298);
          FUN_10a33d4b4(&ppppplStack_130);
          FUN_10a35ed78(&ppppplStack_130);
          if (uStack_b8 != (long ****)0x0) {
            pppplVar22 = uStack_b8 + 1;
            do {
              ppplVar24 = *pppplVar22;
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(pppplVar22,0x10);
              if (bVar7) {
                *pppplVar22 = (long ***)((long)ppplVar24 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
              pppplVar26 = uStack_b8;
            } while (cVar4 != '\0');
            goto LAB_10a33c45c;
          }
        }
      }
      goto LAB_10a33c88c;
    }
    lVar20 = param_5 + 0x288;
    do {
      lVar3 = 8;
      if (uStack_f8 <= *(ulong *)(lVar23 + 0x38)) {
        lVar3 = 0;
        lVar20 = lVar23;
      }
      lVar23 = *(long *)(lVar23 + lVar3);
    } while (lVar23 != 0);
    if ((lVar20 == param_5 + 0x288) || (uStack_f8 < *(ulong *)(lVar20 + 0x38))) goto LAB_10a33b830;
    ppppplVar31 = *param_7;
    func_0x000109898610(&ppppplStack_148,ppppplVar31,param_7 + 1);
    if ((long ******)ppppplStack_148 == (long ******)0x0) {
      uStack_d0 = 0;
      uStack_c9 = 0;
      uStack_c8 = 0;
      uStack_c1 = 0;
    }
    else {
      pppppplVar11 = (long ******)ppppplStack_148;
      ___dynamic_cast(ppppplStack_148,&PTR_DAT_110b178e0,&PTR_DAT_110c41a10,0x10);
      if (pppppplVar11 == (long ******)0x0) {
        pppppplVar10 = &ppppplStack_160;
      }
      else {
        plStack_158 = (long *)CONCAT71(uStack_13f,uStack_140);
        pppppplVar10 = &ppppplStack_148;
        ppppplStack_160 = (long *****)pppppplVar11;
      }
      *pppppplVar10 = (long *****)0x0;
      ppppplVar33 = ppppplStack_160;
      pppppplVar10[1] = (long *****)0x0;
      if ((long ******)ppppplStack_160 == (long ******)0x0) {
        func_0x00010988bd28(&UNK_10f685500);
        goto LAB_10a33cd78;
      }
      FUN_10a0533bc(&ppppplStack_130,ppppplStack_160);
      if ((long ******)ppppplStack_130 == (long ******)0x0) {
        func_0x0001098849a4(&uStack_c0,ppppplVar31,param_7 + 1);
        ppppplVar13 = (long *****)0x30;
        __Znwm();
        plVar27 = plStack_158;
        ppppplVar13[1] = (long ****)0x0;
        ppppplVar13[2] = (long ****)0x0;
        *ppppplVar13 = (long ****)&PTR_DAT_110b174d8;
        ppppplStack_f0 = ppppplVar13 + 3;
        if ((float)uStack_c0 == 4.2039e-45) {
          ppppplVar13[3] = (long ****)ppppplVar31;
          *(undefined4 *)(ppppplVar13 + 4) = 3;
          ppppplVar13[5] = uStack_b8;
        }
        else if ((float)uStack_c0 == 2.8026e-45) {
          ppppplVar13[3] = (long ****)ppppplVar31;
          *(undefined4 *)(ppppplVar13 + 4) = 2;
          *(undefined1 *)(ppppplVar13 + 5) = (undefined1)uStack_b8;
        }
        else if ((int)(float)uStack_c0 < 4) {
          ppppplVar13[3] = (long ****)ppppplVar31;
          *(float *)(ppppplVar13 + 4) = (float)uStack_c0;
        }
        else {
          ppppplVar13[3] = (long ****)ppppplVar31;
          *(float *)(ppppplVar13 + 4) = (float)uStack_c0;
          ppppplVar13[5] = uStack_b8;
        }
        uStack_c0 = (long ******)ppppplVar33;
        uStack_b8 = (long ****)plStack_158;
        if (plStack_158 != (long *)0x0) {
          plVar17 = plStack_158 + 1;
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar7) {
              *plVar17 = *plVar17 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        puVar15 = (undefined8 *)0x90;
        pppplStack_e8 = (long ****)ppppplVar13;
        __Znwm();
        puVar15[1] = 0;
        puVar15[2] = 0;
        *puVar15 = &PTR_FUN_110b9fe30;
        ppppplStack_130 = (long *****)(puVar15 + 3);
        *ppppplStack_130 = (long ****)ppppplVar33;
        uStack_c0 = (long ******)0x0;
        uStack_b8 = (long ****)0x0;
        puVar15[4] = plVar27;
        puVar15[5] = 0;
        puVar15[6] = 0;
        puVar15[7] = 0x32aaaba7;
        puVar15[9] = 0;
        puVar15[8] = 0;
        puVar15[0xb] = 0;
        puVar15[10] = 0;
        puVar15[0xd] = 0;
        puVar15[0xc] = 0;
        puVar15[0xf] = 0;
        puVar15[0xe] = 0;
        puVar15[0x11] = 0;
        puVar15[0x10] = 0;
        plVar27 = (long *)CONCAT17(uStack_121,CONCAT61(uStack_127,uStack_128));
        uStack_128 = SUB81(puVar15,0);
        uStack_127 = (undefined6)((ulong)puVar15 >> 8);
        uStack_121 = (undefined1)((ulong)puVar15 >> 0x38);
        if (plVar27 != (long *)0x0) {
          plVar17 = plVar27 + 1;
          do {
            lVar23 = *plVar17;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar7) {
              *plVar17 = lVar23 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar23 == 0) {
            (**(code **)(*plVar27 + 0x10))(plVar27);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
          }
        }
        plVar27 = (long *)uStack_b8;
        if (uStack_b8 != (long ****)0x0) {
          plVar17 = (long *)(uStack_b8 + 1);
          do {
            lVar23 = *plVar17;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar7) {
              *plVar17 = lVar23 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar23 == 0) {
            (**(code **)((long)*uStack_b8 + 0x10))(uStack_b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
          }
        }
        func_0x00010a04a7fc(ppppplStack_130 + 2,&ppppplStack_f0);
        uStack_c8 = CONCAT61(uStack_127,uStack_128);
        uStack_b8 = (long ****)CONCAT17(uStack_121,uStack_c8);
        uStack_d0 = SUB87(ppppplStack_160,0);
        uStack_c9 = (undefined1)((ulong)ppppplStack_160 >> 0x38);
        uStack_c1 = uStack_121;
        if (uStack_b8 == (long ****)0x0) {
          uStack_b8 = (long ****)0x0;
        }
        else {
          pppplVar22 = uStack_b8 + 1;
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pppplVar22,0x10);
            if (bVar7) {
              *pppplVar22 = (long ***)((long)*pppplVar22 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pppplVar22,0x10);
            if (bVar7) {
              *pppplVar22 = (long ***)((long)*pppplVar22 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uStack_c0 = (long ******)ppppplStack_160;
        func_0x00010a053e8c(ppppplStack_130,&uStack_c0);
        pppplVar22 = uStack_b8;
        if (uStack_b8 != (long ****)0x0) {
          pppplVar26 = uStack_b8 + 1;
          do {
            ppplVar24 = *pppplVar26;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pppplVar26,0x10);
            if (bVar7) {
              *pppplVar26 = (long ***)((long)ppplVar24 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (ppplVar24 == (long ***)0x0) {
            (*(code *)(*uStack_b8)[2])(uStack_b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar22);
          }
        }
        func_0x00010a053ee8(ppppplStack_160,&ppppplStack_130);
        ppuVar14 = &PTR___tlv_bootstrap_11340df48;
        (*(code *)PTR___tlv_bootstrap_11340df48)(ppppplStack_160[10]);
        puVar25 = *ppuVar14;
        if (extraout_x8 != (undefined *)0x0) {
          puVar25 = extraout_x8;
        }
        FUN_10aa89b3c(*(undefined8 *)(puVar25 + 0x870),&ppppplStack_130);
        pppplVar22 = pppplStack_e8;
        if ((long *****)pppplStack_e8 != (long *****)0x0) {
          ppppplVar31 = (long *****)(pppplStack_e8 + 1);
          do {
            pppplVar26 = *ppppplVar31;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppplVar31,0x10);
            if (bVar7) {
              *ppppplVar31 = (long ****)((long)pppplVar26 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (pppplVar26 == (long ****)0x0) {
            (*(code *)(*pppplStack_e8)[2])(pppplStack_e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar22);
          }
        }
      }
      else {
        FUN_10a053e40(&uStack_c0);
        uStack_c8 = SUB87(uStack_b8,0);
        uStack_c1 = (undefined1)((ulong)uStack_b8 >> 0x38);
        uStack_d0 = SUB87(uStack_c0,0);
        uStack_c9 = (undefined1)((ulong)uStack_c0 >> 0x38);
      }
      plVar27 = (long *)CONCAT17(uStack_121,CONCAT61(uStack_127,uStack_128));
      if (plVar27 != (long *)0x0) {
        plVar17 = plVar27 + 1;
        do {
          lVar23 = *plVar17;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar7) {
            *plVar17 = lVar23 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar23 == 0) {
          (**(code **)(*plVar27 + 0x10))(plVar27);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
        }
      }
      if (plStack_158 != (long *)0x0) {
        plVar27 = plStack_158 + 1;
        do {
          lVar23 = *plVar27;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar7) {
            *plVar27 = lVar23 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar23 == 0) {
          (**(code **)(*plStack_158 + 0x10))(plStack_158);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_158);
        }
      }
    }
    plVar27 = (long *)CONCAT71(uStack_13f,uStack_140);
    if (plVar27 != (long *)0x0) {
      plVar17 = plVar27 + 1;
      do {
        lVar23 = *plVar17;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar7) {
          *plVar17 = lVar23 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar23 == 0) {
        (**(code **)(*plVar27 + 0x10))(plVar27);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
      }
    }
    (**(code **)(*(long *)CONCAT17(uStack_c9,uStack_d0) + 0x60))(&uStack_c0);
    ppppplStack_130 = (long *****)0x0;
    uStack_128 = 0;
    uStack_127 = 0;
    uStack_121 = 0;
    uStack_120 = 0;
    cStack_119 = '\0';
    func_0x000107c2b054(&ppppplStack_f0,&UNK_10f64f865);
    pppplVar22 = uStack_b8;
    pppppplVar11 = uStack_c0;
    if (-1 < (long)uStack_b0) {
      pppplVar22 = (long ****)((ulong)uStack_b0 >> 0x38);
      pppppplVar11 = (long ******)&uStack_c0;
    }
    ppppplVar31 = (long *****)pppplStack_e8;
    pppppplVar10 = (long ******)ppppplStack_f0;
    if (-1 < (long)pppplStack_e0) {
      ppppplVar31 = (long *****)((ulong)pppplStack_e0 >> 0x38);
      pppppplVar10 = &ppppplStack_f0;
    }
    if (ppppplVar31 == (long *****)0x0) {
      lVar23 = 0;
LAB_10a33c39c:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                (&ppppplStack_148,&uStack_c0,lVar23 + (long)ppppplVar31,0xffffffffffffffff,
                 &ppppplStack_160);
      uStack_128 = uStack_140;
      uStack_127 = (undefined6)uStack_13f;
      uStack_121 = (undefined1)((uint7)uStack_13f >> 0x30);
      ppppplStack_130 = ppppplStack_148;
      uStack_120 = uStack_138;
      cStack_119 = cStack_131;
    }
    else if ((long)ppppplVar31 <= (long)pppplVar22) {
      pppppplVar9 = (long ******)((long)pppppplVar11 + (long)pppplVar22);
      cVar4 = *(char *)pppppplVar10;
      pppppplVar10 = pppppplVar11;
      do {
        if ((0xfffffffffffffffe < (ulong)((long)pppplVar22 - (long)ppppplVar31)) ||
           (_memchr(pppppplVar10,(long)cVar4,((long)pppplVar22 - (long)ppppplVar31) + 1),
           pppppplVar10 == (long ******)0x0)) break;
        pppppplVar12 = pppppplVar10;
        _memcmp();
        if ((int)pppppplVar12 == 0) {
          if ((pppppplVar10 != pppppplVar9) &&
             (lVar23 = (long)pppppplVar10 - (long)pppppplVar11, lVar23 != -1)) goto LAB_10a33c39c;
          break;
        }
        pppppplVar10 = (long ******)((long)pppppplVar10 + 1);
        pppplVar22 = (long ****)((long)pppppplVar9 - (long)pppppplVar10);
      } while ((long)ppppplVar31 <= (long)pppplVar22);
    }
    lVar23 = CONCAT17(uStack_c9,uStack_d0);
    if ((*(long *)(lVar23 + 0xe8) - *(long *)(lVar23 + 0xe0) >> 3) * -0x3333333333333333 -
        (long)*(int *)(*(long *)(lVar20 + 0x40) + 0x120) == 0) {
      FUN_10a33cecc(*(long *)(lVar20 + 0x40),lVar23,CONCAT17(uStack_c1,uStack_c8));
      uStack_140 = 0;
      ppppplStack_148 = (long *****)(param_5 + 0x280);
      FUN_10a33d0a0(&ppppplStack_148);
      FUN_10a35e92c(&ppppplStack_148);
      if ((long)pppplStack_e0 < 0) {
        __ZdlPv(ppppplStack_f0);
      }
      if (cStack_119 < '\0') {
        __ZdlPv(ppppplStack_130);
      }
      pppplVar26 = (long ****)CONCAT17(uStack_c1,uStack_c8);
      if (pppplVar26 == (long ****)0x0) goto LAB_10a33c88c;
      pppplVar22 = pppplVar26 + 1;
      do {
        ppplVar24 = *pppplVar22;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppplVar22,0x10);
        if (bVar7) {
          *pppplVar22 = (long ***)((long)ppplVar24 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_10a33c45c;
    }
    goto LAB_10a33cb18;
  }
  do {
    lVar23 = 8;
    if (uStack_f8 <= (ulong)plVar29[7]) {
      lVar23 = 0;
      plVar27 = plVar29;
    }
    plVar29 = *(long **)((long)plVar29 + lVar23);
  } while (plVar29 != (long *)0x0);
  if ((plVar27 == plVar19) || (uStack_f8 < (ulong)plVar27[7])) goto LAB_10a33b75c;
  lVar23 = plVar27[8];
  if (0xf < *(byte *)(lVar23 + 100)) {
    FUN_10a05bab8(&UNK_10f6347d3);
    goto LAB_10a33cd78;
  }
  pfVar1 = (float *)(lVar23 + 0x24);
  switch(*(byte *)(lVar23 + 100)) {
  case 0:
    FUN_10a36be44(param_7);
    if (*pfVar1 != param_1) {
      *pfVar1 = param_1;
      break;
    }
    goto LAB_10a33c88c;
  case 1:
    FUN_10a36bed4();
    fVar8 = SUB84(param_7,0);
    goto code_r0x00010a33c688;
  case 2:
    FUN_10a36bf34();
    if ((uint)*(byte *)pfVar1 == (uint)param_7) goto LAB_10a33c88c;
    *(byte *)pfVar1 = (byte)param_7;
    break;
  case 3:
    FUN_10a36bf94(param_7);
    bVar7 = false;
    if ((*(float *)(lVar23 + 0x24) == param_1) &&
       (bVar7 = false, !NAN(*(float *)(lVar23 + 0x28)) && !NAN(param_2))) {
      bVar7 = *(float *)(lVar23 + 0x28) == param_2;
    }
    if (bVar7) goto LAB_10a33c88c;
    *(float *)(lVar23 + 0x24) = param_1;
    *(float *)(lVar23 + 0x28) = param_2;
    break;
  case 4:
    FUN_10a36bff8(param_7);
    bVar7 = false;
    if ((*(float *)(lVar23 + 0x24) == param_1) &&
       (bVar7 = false, !NAN(*(float *)(lVar23 + 0x28)) && !NAN(param_2))) {
      bVar7 = *(float *)(lVar23 + 0x28) == param_2;
    }
    bVar6 = false;
    if ((bVar7) && (bVar6 = false, !NAN(*(float *)(lVar23 + 0x2c)) && !NAN(param_3))) {
      bVar6 = *(float *)(lVar23 + 0x2c) == param_3;
    }
    if (bVar6) goto LAB_10a33c88c;
    *(float *)(lVar23 + 0x24) = param_1;
    *(float *)(lVar23 + 0x28) = param_2;
    *(float *)(lVar23 + 0x2c) = param_3;
    break;
  case 5:
    FUN_10a36c060(param_7);
    uVar38 = NEON_uminv(CONCAT26(-(ushort)((float)((ulong)*(undefined8 *)(lVar23 + 0x2c) >> 0x20) ==
                                          param_4),
                                 CONCAT24(-(ushort)((float)*(undefined8 *)(lVar23 + 0x2c) == param_3
                                                   ),
                                          CONCAT22(-(ushort)((float)((ulong)*(long *)pfVar1 >> 0x20)
                                                            == param_2),
                                                   -(ushort)((float)*(long *)pfVar1 == param_1)))),2
                       );
    if ((uVar38 & 1) != 0) goto LAB_10a33c88c;
    *(float *)(lVar23 + 0x24) = param_1;
    *(float *)(lVar23 + 0x28) = param_2;
    *(float *)(lVar23 + 0x2c) = param_3;
    *(float *)(lVar23 + 0x30) = param_4;
    break;
  case 6:
    FUN_10a36c0c8(param_7);
    bVar7 = false;
    if ((*(float *)(lVar23 + 0x24) == param_1) &&
       (bVar7 = false, !NAN(*(float *)(lVar23 + 0x28)) && !NAN(param_2))) {
      bVar7 = *(float *)(lVar23 + 0x28) == param_2;
    }
    if (bVar7) {
      bVar7 = false;
      if ((*(float *)(lVar23 + 0x2c) == param_3) &&
         (bVar7 = false, !NAN(*(float *)(lVar23 + 0x30)) && !NAN(param_4))) {
        bVar7 = *(float *)(lVar23 + 0x30) == param_4;
      }
      if (bVar7) goto LAB_10a33c88c;
    }
    *(float *)(lVar23 + 0x24) = param_1;
    *(float *)(lVar23 + 0x28) = param_2;
    *(float *)(lVar23 + 0x2c) = param_3;
    *(float *)(lVar23 + 0x30) = param_4;
    break;
  case 7:
    FUN_10a36c174(&uStack_c0,param_7);
    if ((((*pfVar1 == (float)uStack_c0) && (*(float *)(lVar23 + 0x28) == uStack_c0._4_4_)) &&
        ((*(float *)(lVar23 + 0x2c) == (float)uStack_b8 &&
         (((*(float *)(lVar23 + 0x30) == uStack_b8._4_4_ &&
           (*(float *)(lVar23 + 0x34) == (float)uStack_b0)) &&
          (*(float *)(lVar23 + 0x38) == uStack_b0._4_4_)))))) &&
       (((*(float *)(lVar23 + 0x3c) == (float)uStack_a8 &&
         (*(float *)(lVar23 + 0x40) == uStack_a8._4_4_)) &&
        (*(float *)(lVar23 + 0x44) == (float)uStack_a0)))) goto LAB_10a33c88c;
    *(long *****)(lVar23 + 0x2c) = uStack_b8;
    *(long *******)pfVar1 = uStack_c0;
    *(long *******)(lVar23 + 0x3c) = uStack_a8;
    *(undefined ***)(lVar23 + 0x34) = uStack_b0;
    *(float *)(lVar23 + 0x44) = (float)uStack_a0;
    break;
  case 8:
    FUN_10a36c1e8(&uStack_c0,param_7);
    if ((((((((*pfVar1 == (float)uStack_c0) && (*(float *)(lVar23 + 0x28) == uStack_c0._4_4_)) &&
            (*(float *)(lVar23 + 0x2c) == (float)uStack_b8)) &&
           ((*(float *)(lVar23 + 0x30) == uStack_b8._4_4_ &&
            (*(float *)(lVar23 + 0x34) == (float)uStack_b0)))) &&
          (*(float *)(lVar23 + 0x38) == uStack_b0._4_4_)) &&
         (((*(float *)(lVar23 + 0x3c) == (float)uStack_a8 &&
           (*(float *)(lVar23 + 0x40) == uStack_a8._4_4_)) &&
          ((*(float *)(lVar23 + 0x44) == (float)uStack_a0 &&
           (((*(float *)(lVar23 + 0x48) == uStack_a0._4_4_ &&
             (*(float *)(lVar23 + 0x4c) == (float)uStack_98)) &&
            (*(float *)(lVar23 + 0x50) == uStack_98._4_4_)))))))) &&
        ((*(float *)(lVar23 + 0x54) == fStack_90 && (*(float *)(lVar23 + 0x58) == fStack_8c)))) &&
       ((*(float *)(lVar23 + 0x5c) == fStack_88 && (*(float *)(lVar23 + 0x60) == fStack_84))))
    goto LAB_10a33c88c;
    *(long *****)(lVar23 + 0x2c) = uStack_b8;
    *(long *******)pfVar1 = uStack_c0;
    *(long *******)(lVar23 + 0x3c) = uStack_a8;
    *(undefined ***)(lVar23 + 0x34) = uStack_b0;
    *(long ******)(lVar23 + 0x4c) = uStack_98;
    *(long ******)(lVar23 + 0x44) = uStack_a0;
    *(ulong *)(lVar23 + 0x5c) = CONCAT44(fStack_84,fStack_88);
    *(ulong *)(lVar23 + 0x54) = CONCAT44(fStack_8c,fStack_90);
    break;
  case 9:
    FUN_10a36c2a0();
    fVar8 = SUB84(param_7,0);
code_r0x00010a33c688:
    if (*pfVar1 != fVar8) {
      *pfVar1 = fVar8;
      break;
    }
    goto LAB_10a33c88c;
  case 10:
    FUN_10a36c300();
    goto code_r0x00010a33c720;
  case 0xb:
    FUN_10a36c3a8();
    iVar16 = (int)plVar17;
    goto code_r0x00010a33c4e8;
  case 0xc:
    FUN_10a36c458();
    goto code_r0x00010a33c578;
  case 0xd:
    FUN_10a36c504();
code_r0x00010a33c720:
    if (*(int *)(lVar23 + 0x24) != (int)param_7 ||
        *(int *)(lVar23 + 0x28) != (int)((ulong)param_7 >> 0x20)) {
      *(long *******)pfVar1 = param_7;
      break;
    }
    goto LAB_10a33c88c;
  case 0xe:
    FUN_10a36c5ac();
    iVar16 = (int)plVar17;
code_r0x00010a33c4e8:
    if ((*(int *)(lVar23 + 0x24) != (int)param_7 ||
        *(int *)(lVar23 + 0x28) != (int)((ulong)param_7 >> 0x20)) ||
        *(int *)(lVar23 + 0x2c) != iVar16) {
      *(long *******)(lVar23 + 0x24) = param_7;
      *(int *)(lVar23 + 0x2c) = iVar16;
      break;
    }
    goto LAB_10a33c88c;
  case 0xf:
    FUN_10a36c65c();
code_r0x00010a33c578:
    if (((*(int *)(lVar23 + 0x24) != (int)param_7 ||
         *(int *)(lVar23 + 0x28) != (int)((ulong)param_7 >> 0x20)) ||
         *(int *)(lVar23 + 0x2c) != (int)plVar17) ||
       (*(int *)(lVar23 + 0x30) != (int)((ulong)plVar17 >> 0x20))) {
      *(long *******)(lVar23 + 0x24) = param_7;
      *(long **)(lVar23 + 0x2c) = plVar17;
      break;
    }
    goto LAB_10a33c88c;
  }
  do {
    lVar23 = lRam0000000113301700;
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(0x113301700,0x10);
    if (bVar7) {
      cVar4 = ExclusiveMonitorsStatus();
      lRam0000000113301700 = lRam0000000113301700 + 1;
    }
  } while (cVar4 != '\0');
  *(long *)(param_5 + 0x1b8) = lVar23;
  uStack_b8 = (long ****)((ulong)uStack_b8 & 0xffffffffffffff00);
  uStack_c0 = pppppplVar11;
  FUN_10a0daaec(&uStack_c0);
  FUN_10a0daab8(&uStack_c0);
LAB_10a33c88c:
  if (cStack_f9 < '\0') {
    __ZdlPv(auStack_110[0]);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
LAB_10a33cb18:
  puVar15 = (undefined8 *)0x120;
  ___cxa_allocate_exception();
  FUN_10a0ee900(&ppppplStack_148,&UNK_10f64f86c,0x9a);
  FUN_10a002a94(puVar15,&ppppplStack_148);
  *puVar15 = &PTR_FUN_110b99e70;
  ___cxa_throw(puVar15,&PTR_DAT_110b99e48,FUN_10a002a90);
LAB_10a33cd78:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a33cd7c);
  (*pcVar5)();
}



/* Entry: 10a33d730; end: 10a33d85f;  */

bool FUN_10a33d730(ulong param_1)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 auStack_40 [2];
  char cStack_29;
  ulong uStack_28;
  
  FUN_10a0d09b4(auStack_40);
  uVar3 = param_1;
  FUN_10a336830(param_1,auStack_40);
  if ((uVar3 & 1) != 0) {
LAB_10a33d75c:
    bVar2 = true;
    goto LAB_10a33d83c;
  }
  lVar4 = *(long *)(param_1 + 0x1f0);
  if (lVar4 != 0) {
    lVar5 = param_1 + 0x1f0;
    do {
      lVar6 = 8;
      if (uStack_28 <= *(ulong *)(lVar4 + 0x38)) {
        lVar6 = 0;
        lVar5 = lVar4;
      }
      lVar4 = *(long *)(lVar4 + lVar6);
    } while (lVar4 != 0);
    if ((lVar5 != param_1 + 0x1f0) && (*(ulong *)(lVar5 + 0x38) <= uStack_28)) goto LAB_10a33d75c;
  }
  lVar4 = *(long *)(param_1 + 0x298);
  if (lVar4 != 0) {
    lVar5 = param_1 + 0x298;
    do {
      lVar6 = 8;
      if (uStack_28 <= *(ulong *)(lVar4 + 0x38)) {
        lVar6 = 0;
        lVar5 = lVar4;
      }
      lVar4 = *(long *)(lVar4 + lVar6);
    } while (lVar4 != 0);
    if ((lVar5 != param_1 + 0x298) && (*(ulong *)(lVar5 + 0x38) <= uStack_28)) goto LAB_10a33d75c;
  }
  lVar4 = param_1 + 0x2b0;
  lVar6 = *(long *)(param_1 + 0x2b0);
  lVar5 = lVar4;
  if (lVar6 == 0) {
LAB_10a33d830:
    lVar5 = lVar4;
  }
  else {
    do {
      lVar1 = 8;
      if (uStack_28 <= *(ulong *)(lVar6 + 0x38)) {
        lVar1 = 0;
        lVar5 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + lVar1);
    } while (lVar6 != 0);
    if ((lVar5 == lVar4) || (uStack_28 < *(ulong *)(lVar5 + 0x38))) goto LAB_10a33d830;
  }
  bVar2 = lVar5 != lVar4;
LAB_10a33d83c:
  if (cStack_29 < '\0') {
    __ZdlPv(auStack_40[0]);
  }
  return bVar2;
}



/* Entry: 10a33d860; end: 10a33d867;  */

bool FUN_10a33d860(long param_1)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 auStack_40 [2];
  char cStack_29;
  ulong uStack_28;
  
  uVar3 = param_1 - 0x10;
  FUN_10a0d09b4(auStack_40);
  FUN_10a336830(uVar3,auStack_40);
  if ((uVar3 & 1) != 0) {
LAB_10a33d75c:
    bVar2 = true;
    goto LAB_10a33d83c;
  }
  lVar4 = *(long *)(param_1 + 0x1e0);
  if (lVar4 != 0) {
    lVar5 = param_1 + 0x1e0;
    do {
      lVar6 = 8;
      if (uStack_28 <= *(ulong *)(lVar4 + 0x38)) {
        lVar6 = 0;
        lVar5 = lVar4;
      }
      lVar4 = *(long *)(lVar4 + lVar6);
    } while (lVar4 != 0);
    if ((lVar5 != param_1 + 0x1e0) && (*(ulong *)(lVar5 + 0x38) <= uStack_28)) goto LAB_10a33d75c;
  }
  lVar4 = *(long *)(param_1 + 0x288);
  if (lVar4 != 0) {
    lVar5 = param_1 + 0x288;
    do {
      lVar6 = 8;
      if (uStack_28 <= *(ulong *)(lVar4 + 0x38)) {
        lVar6 = 0;
        lVar5 = lVar4;
      }
      lVar4 = *(long *)(lVar4 + lVar6);
    } while (lVar4 != 0);
    if ((lVar5 != param_1 + 0x288) && (*(ulong *)(lVar5 + 0x38) <= uStack_28)) goto LAB_10a33d75c;
  }
  lVar4 = param_1 + 0x2a0;
  lVar6 = *(long *)(param_1 + 0x2a0);
  lVar5 = lVar4;
  if (lVar6 == 0) {
LAB_10a33d830:
    lVar5 = lVar4;
  }
  else {
    do {
      lVar1 = 8;
      if (uStack_28 <= *(ulong *)(lVar6 + 0x38)) {
        lVar1 = 0;
        lVar5 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + lVar1);
    } while (lVar6 != 0);
    if ((lVar5 == lVar4) || (uStack_28 < *(ulong *)(lVar5 + 0x38))) goto LAB_10a33d830;
  }
  bVar2 = lVar5 != lVar4;
LAB_10a33d83c:
  if (cStack_29 < '\0') {
    __ZdlPv(auStack_40[0]);
  }
  return bVar2;
}



/* Entry: 10a33d868; end: 10a33d9df;  */

void FUN_10a33d868(undefined8 *param_1,long param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107c31930(param_1,*(long *)(param_2 + 0x1f8) +
                              *(long *)(*(long *)(param_2 + 0x1b8) + 0x10));
  plVar3 = *(undefined8 **)(param_2 + 0x1b8) + 1;
  plVar5 = (long *)**(undefined8 **)(param_2 + 0x1b8);
  if (plVar5 != plVar3) {
    puVar2 = (undefined8 *)param_1[1];
    do {
      if (puVar2 < (undefined8 *)param_1[2]) {
        FUN_10a0cf46c(param_1,plVar5 + 4);
        puVar2 = puVar2 + 3;
      }
      else {
        puVar2 = param_1;
        func_0x000107c281ec(param_1,plVar5 + 4);
      }
      param_1[1] = puVar2;
      plVar4 = (long *)plVar5[1];
      plVar6 = plVar5;
      if ((long *)plVar5[1] == (long *)0x0) {
        do {
          plVar5 = (long *)plVar6[2];
          bVar1 = (long *)*plVar5 != plVar6;
          plVar6 = plVar5;
        } while (bVar1);
      }
      else {
        do {
          plVar5 = plVar4;
          plVar4 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
    } while (plVar5 != plVar3);
  }
  plVar5 = *(long **)(param_2 + 0x1e8);
  if (plVar5 != (long *)(param_2 + 0x1f0)) {
    puVar2 = (undefined8 *)param_1[1];
    do {
      if (puVar2 < (undefined8 *)param_1[2]) {
        FUN_10a0cf46c(param_1,plVar5 + 4);
        puVar2 = puVar2 + 3;
      }
      else {
        puVar2 = param_1;
        func_0x000107c281ec(param_1,plVar5 + 4);
      }
      param_1[1] = puVar2;
      plVar3 = (long *)plVar5[1];
      plVar4 = plVar5;
      if ((long *)plVar5[1] == (long *)0x0) {
        do {
          plVar5 = (long *)plVar4[2];
          bVar1 = (long *)*plVar5 != plVar4;
          plVar4 = plVar5;
        } while (bVar1);
      }
      else {
        do {
          plVar5 = plVar3;
          plVar3 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
    } while (plVar5 != (long *)(param_2 + 0x1f0));
  }
  return;
}



/* Entry: 10a33d9e0; end: 10a33d9e7;  */

void FUN_10a33d9e0(undefined8 *param_1,long param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107c31930(param_1,*(long *)(param_2 + 0x1e8) +
                              *(long *)(*(long *)(param_2 + 0x1a8) + 0x10));
  plVar3 = *(undefined8 **)(param_2 + 0x1a8) + 1;
  plVar5 = (long *)**(undefined8 **)(param_2 + 0x1a8);
  if (plVar5 != plVar3) {
    puVar2 = (undefined8 *)param_1[1];
    do {
      if (puVar2 < (undefined8 *)param_1[2]) {
        FUN_10a0cf46c(param_1,plVar5 + 4);
        puVar2 = puVar2 + 3;
      }
      else {
        puVar2 = param_1;
        func_0x000107c281ec(param_1,plVar5 + 4);
      }
      param_1[1] = puVar2;
      plVar4 = (long *)plVar5[1];
      plVar6 = plVar5;
      if ((long *)plVar5[1] == (long *)0x0) {
        do {
          plVar5 = (long *)plVar6[2];
          bVar1 = (long *)*plVar5 != plVar6;
          plVar6 = plVar5;
        } while (bVar1);
      }
      else {
        do {
          plVar5 = plVar4;
          plVar4 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
    } while (plVar5 != plVar3);
  }
  plVar5 = *(long **)(param_2 + 0x1d8);
  if (plVar5 != (long *)(param_2 + 0x1e0)) {
    puVar2 = (undefined8 *)param_1[1];
    do {
      if (puVar2 < (undefined8 *)param_1[2]) {
        FUN_10a0cf46c(param_1,plVar5 + 4);
        puVar2 = puVar2 + 3;
      }
      else {
        puVar2 = param_1;
        func_0x000107c281ec(param_1,plVar5 + 4);
      }
      param_1[1] = puVar2;
      plVar3 = (long *)plVar5[1];
      plVar4 = plVar5;
      if ((long *)plVar5[1] == (long *)0x0) {
        do {
          plVar5 = (long *)plVar4[2];
          bVar1 = (long *)*plVar5 != plVar4;
          plVar4 = plVar5;
        } while (bVar1);
      }
      else {
        do {
          plVar5 = plVar3;
          plVar3 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
    } while (plVar5 != (long *)(param_2 + 0x1e0));
  }
  return;
}



/* Entry: 10a33d9e8; end: 10a33e447;  */

/* WARNING: Removing unreachable block (ram,0x00010a33e104) */
/* WARNING: Removing unreachable block (ram,0x00010a33e13c) */
/* WARNING: Removing unreachable block (ram,0x00010a33e14c) */
/* WARNING: Removing unreachable block (ram,0x00010a33e428) */
/* WARNING: Removing unreachable block (ram,0x00010a33e438) */

void FUN_10a33d9e8(undefined8 param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  ulong uVar4;
  byte bVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 *puVar11;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  undefined8 *puVar12;
  undefined1 *unaff_x22;
  long unaff_x23;
  undefined8 *puVar13;
  undefined1 *unaff_x24;
  undefined8 unaff_x25;
  long lVar14;
  undefined8 *unaff_x26;
  byte *unaff_x27;
  ulong unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar15;
  undefined8 uVar16;
  
code_r0x00010a33d9e8:
  *(ulong *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(byte **)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 **)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x330) = param_1;
  *(undefined8 *)((long)register0x00000008 + -0x70) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010989f98c((undefined1 *)((long)register0x00000008 + -0xe8),param_2 + 0x18);
  pcVar1 = "false";
  pcVar2 = "true";
  pcVar3 = pcVar2;
  if (*(char *)(param_2 + 0x218) == '\0') {
    pcVar3 = pcVar1;
  }
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x100),pcVar3);
  pcVar3 = pcVar2;
  if (*(char *)(param_2 + 0x219) == '\0') {
    pcVar3 = pcVar1;
  }
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x118),pcVar3);
  if (*(char *)(param_2 + 0x21a) == '\0') {
    pcVar2 = pcVar1;
  }
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x130),pcVar2);
  *(undefined1 *)((long)register0x00000008 + -0xd0) = 0;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -200),&DAT_10f64f6c4);
  *(undefined1 *)((long)register0x00000008 + -0xb0) = 1;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xa8),"Back");
  unaff_x24 = (undefined1 *)((long)register0x00000008 + -0xd0);
  *(undefined1 *)((long)register0x00000008 + -0x90) = 2;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x88),&DAT_10f64f6ca);
  *(long *)((long)register0x00000008 + -0x328) = param_2;
  puVar12 = (undefined8 *)0x0;
  lVar14 = 0;
  unaff_x26 = (undefined8 *)((long)register0x00000008 + -0x148);
  *(undefined8 *)((long)register0x00000008 + -0x140) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
  unaff_x20 = (undefined8 *)((long)register0x00000008 + -0x140);
  *(undefined8 **)((long)register0x00000008 + -0x148) = unaff_x20;
  puVar9 = unaff_x20;
  do {
    unaff_x27 = unaff_x24 + lVar14;
    bVar5 = *unaff_x27;
    unaff_x28 = (ulong)bVar5;
    puVar10 = unaff_x20;
    puVar11 = unaff_x20;
    puVar13 = unaff_x20;
    if (puVar9 == unaff_x20) {
LAB_10a33db88:
      puVar9 = unaff_x26;
      if (puVar12 != (undefined8 *)0x0) {
        puVar11 = puVar10 + 1;
        puVar9 = puVar10;
        puVar13 = puVar10;
      }
      if (puVar9[1] == 0) goto LAB_10a33dba4;
    }
    else {
      puVar9 = unaff_x20;
      puVar7 = puVar12;
      if (puVar12 == (undefined8 *)0x0) {
        do {
          puVar10 = (undefined8 *)puVar9[2];
          bVar8 = (undefined8 *)*puVar10 == puVar9;
          puVar9 = puVar10;
        } while (bVar8);
        if (*(byte *)(puVar10 + 4) < bVar5) goto LAB_10a33db88;
      }
      else {
        do {
          puVar10 = puVar7;
          puVar7 = (undefined8 *)puVar10[1];
        } while ((undefined8 *)puVar10[1] != (undefined8 *)0x0);
        if (*(byte *)(puVar10 + 4) < bVar5) goto LAB_10a33db88;
        do {
          while (puVar13 = puVar12, bVar5 < *(byte *)(puVar13 + 4)) {
            puVar12 = (undefined8 *)*puVar13;
            puVar11 = puVar13;
            if ((undefined8 *)*puVar13 == (undefined8 *)0x0) goto LAB_10a33dba4;
          }
          if (bVar5 <= *(byte *)(puVar13 + 4)) goto LAB_10a33dc14;
          puVar12 = (undefined8 *)puVar13[1];
        } while ((undefined8 *)puVar13[1] != (undefined8 *)0x0);
        puVar11 = puVar13 + 1;
      }
LAB_10a33dba4:
      puVar9 = (undefined8 *)0x40;
      __Znwm();
      *(byte *)(puVar9 + 4) = bVar5;
      if ((char)unaff_x27[0x1f] < '\0') {
        func_0x000107c3192c(puVar9 + 5,*(undefined8 *)(unaff_x27 + 8),
                            *(undefined8 *)(unaff_x27 + 0x10));
      }
      else {
        uVar15 = *(undefined8 *)(unaff_x27 + 8);
        puVar9[6] = *(undefined8 *)(unaff_x27 + 0x10);
        puVar9[5] = uVar15;
        puVar9[7] = *(undefined8 *)(unaff_x27 + 0x18);
      }
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = puVar13;
      *puVar11 = puVar9;
      if (**(long **)((long)register0x00000008 + -0x148) != 0) {
        *(long *)((long)register0x00000008 + -0x148) =
             **(long **)((long)register0x00000008 + -0x148);
        puVar9 = (undefined8 *)*puVar11;
      }
      func_0x000107c2b058(*(undefined8 *)((long)register0x00000008 + -0x140),puVar9);
      *(long *)((long)register0x00000008 + -0x138) =
           *(long *)((long)register0x00000008 + -0x138) + 1;
    }
LAB_10a33dc14:
    lVar14 = lVar14 + 0x20;
    if (lVar14 == 0x60) break;
    puVar9 = *(undefined8 **)((long)register0x00000008 + -0x148);
    puVar12 = *(undefined8 **)((long)register0x00000008 + -0x140);
  } while( true );
  lVar14 = 0;
  unaff_x23 = *(long *)((long)register0x00000008 + -0x328);
  do {
    if (*(char *)((long)register0x00000008 + lVar14 + -0x71) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + lVar14 + -0x88));
    }
    lVar14 = lVar14 + -0x20;
  } while (lVar14 != -0x60);
  puVar9 = *(undefined8 **)((long)register0x00000008 + -0x140);
  if (puVar9 != (undefined8 *)0x0) {
    puVar12 = unaff_x20;
    do {
      lVar14 = 8;
      if (*(byte *)(unaff_x23 + 0x244) <= *(byte *)(puVar9 + 4)) {
        lVar14 = 0;
        puVar12 = puVar9;
      }
      puVar9 = *(undefined8 **)((long)puVar9 + lVar14);
    } while (puVar9 != (undefined8 *)0x0);
    if ((puVar12 != unaff_x20) && (*(byte *)(puVar12 + 4) <= *(byte *)(unaff_x23 + 0x244))) {
      if (*(char *)((long)puVar12 + 0x3f) < '\0') {
        func_0x000107c3192c((undefined1 *)((long)register0x00000008 + -0xd0),puVar12[5],puVar12[6]);
      }
      else {
        uVar15 = puVar12[5];
        *(undefined8 *)((long)register0x00000008 + -200) = puVar12[6];
        *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar15;
        *(undefined8 *)((long)register0x00000008 + -0xc0) = puVar12[7];
      }
      goto LAB_10a33dca4;
    }
  }
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xd0),&UNK_10f64f907);
LAB_10a33dca4:
  unaff_x21 = *(ulong *)((long)register0x00000008 + -0xe0);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0xd1)) {
    unaff_x21 = (ulong)*(byte *)((long)register0x00000008 + -0xd1);
  }
  FUN_10a003c90((undefined1 *)((long)register0x00000008 + -0x2d8),unaff_x21 + 0xd,
                (undefined1 *)((long)register0x00000008 + -0x2f0));
  unaff_x22 = *(undefined1 **)((long)register0x00000008 + -0x2d8);
  if (-1 < *(char *)((long)register0x00000008 + -0x2c1)) {
    unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x2d8);
  }
  if (unaff_x21 != 0) {
    _memmove(unaff_x22,(undefined1 *)((long)register0x00000008 + -0xe8),unaff_x21);
  }
  puVar9 = (undefined8 *)(unaff_x22 + unaff_x21);
  *puVar9 = 0x69536f7754736920;
  *(undefined8 *)((long)puVar9 + 5) = 0x203a64656469536f;
  *(undefined1 *)((long)puVar9 + 0xd) = 0;
  uVar4 = *(ulong *)((long)register0x00000008 + -0xf8);
  puVar6 = *(undefined1 **)((long)register0x00000008 + -0x100);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0xe9)) {
    uVar4 = (ulong)*(byte *)((long)register0x00000008 + -0xe9);
    puVar6 = (undefined1 *)((long)register0x00000008 + -0x100);
  }
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x2d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar9,puVar6,uVar4);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x2b0) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x2b8) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x2c0) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x2c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f64f928,0xd);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x290) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x298) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x2a0) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  uVar4 = *(ulong *)((long)register0x00000008 + -0x110);
  puVar6 = *(undefined1 **)((long)register0x00000008 + -0x118);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x101)) {
    uVar4 = (ulong)*(byte *)((long)register0x00000008 + -0x101);
    puVar6 = (undefined1 *)((long)register0x00000008 + -0x118);
  }
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x2a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar9,puVar6,uVar4);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x270) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x278) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x280) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x280);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f64f936,0x10);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x250) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -600) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x260) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  uVar4 = *(ulong *)((long)register0x00000008 + -0x128);
  puVar6 = *(undefined1 **)((long)register0x00000008 + -0x130);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x119)) {
    uVar4 = (ulong)*(byte *)((long)register0x00000008 + -0x119);
    puVar6 = (undefined1 *)((long)register0x00000008 + -0x130);
  }
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x260);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar9,puVar6,uVar4);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x230) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x238) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x240) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x240);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f64f947,0xd);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x210) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x218) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x220) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEf
            ((undefined1 *)((long)register0x00000008 + -0x2f0),*(undefined4 *)(unaff_x23 + 0x224));
  uVar4 = *(ulong *)((long)register0x00000008 + -0x2e8);
  puVar6 = *(undefined1 **)((long)register0x00000008 + -0x2f0);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x2d9)) {
    uVar4 = (ulong)*(byte *)((long)register0x00000008 + -0x2d9);
    puVar6 = (undefined1 *)((long)register0x00000008 + -0x2f0);
  }
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x220);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar9,puVar6,uVar4);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x1f0) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x1f8) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x200) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x200);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f64f955,0x17);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x1d0) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x1d8) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x1e0) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEf
            ((undefined1 *)((long)register0x00000008 + -0x308),*(undefined4 *)(unaff_x23 + 0x248));
  uVar4 = *(ulong *)((long)register0x00000008 + -0x300);
  puVar6 = *(undefined1 **)((long)register0x00000008 + -0x308);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x2f1)) {
    uVar4 = (ulong)*(byte *)((long)register0x00000008 + -0x2f1);
    puVar6 = (undefined1 *)((long)register0x00000008 + -0x308);
  }
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x1e0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar9,puVar6,uVar4);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x1b0) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x1b8) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x1c0) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x1c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&DAT_10f68f19e,2);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -400) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x198) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x1a0) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEf
            ((undefined1 *)((long)register0x00000008 + -800),*(undefined4 *)(unaff_x23 + 0x24c));
  uVar4 = *(ulong *)((long)register0x00000008 + -0x318);
  puVar6 = *(undefined1 **)((long)register0x00000008 + -800);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x309)) {
    uVar4 = (ulong)*(byte *)((long)register0x00000008 + -0x309);
    puVar6 = (undefined1 *)((long)register0x00000008 + -800);
  }
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x1a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar9,puVar6,uVar4);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x170) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x178) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x180) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x180);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f64f96d,0xd);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x150) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x158) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x160) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  uVar4 = *(ulong *)((long)register0x00000008 + -200);
  puVar6 = *(undefined1 **)((long)register0x00000008 + -0xd0);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0xb9)) {
    uVar4 = (ulong)*(byte *)((long)register0x00000008 + -0xb9);
    puVar6 = (undefined1 *)((long)register0x00000008 + -0xd0);
  }
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x160);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar9,puVar6,uVar4);
  uVar15 = *puVar9;
  puVar12 = *(undefined8 **)((long)register0x00000008 + -0x330);
  puVar12[1] = puVar9[1];
  *puVar12 = uVar15;
  puVar12[2] = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  if (*(char *)((long)register0x00000008 + -0x149) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x160));
  }
  if (*(char *)((long)register0x00000008 + -0x169) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x180));
  }
  if (*(char *)((long)register0x00000008 + -0x309) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -800));
  }
  if (*(char *)((long)register0x00000008 + -0x189) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1a0));
  }
  if (*(char *)((long)register0x00000008 + -0x1a9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1c0));
  }
  if (*(char *)((long)register0x00000008 + -0x2f1) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x308));
  }
  if (*(char *)((long)register0x00000008 + -0x1c9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1e0));
  }
  if (*(char *)((long)register0x00000008 + -0x1e9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x200));
  }
  if (*(char *)((long)register0x00000008 + -0x2d9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x2f0));
  }
  if (*(char *)((long)register0x00000008 + -0x209) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x220));
  }
  if (*(char *)((long)register0x00000008 + -0x229) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x240));
  }
  if (*(char *)((long)register0x00000008 + -0x249) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x260));
  }
  if (*(char *)((long)register0x00000008 + -0x269) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x280));
  }
  if (*(char *)((long)register0x00000008 + -0x289) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x2a0));
  }
  if (*(char *)((long)register0x00000008 + -0x2a9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x2c0));
  }
  if (*(char *)((long)register0x00000008 + -0x2c1) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x2d8));
  }
  unaff_x19 = *(long *)((long)register0x00000008 + -0x140);
  FUN_10a36eabc();
  if (*(char *)((long)register0x00000008 + -0x119) < '\0') {
    unaff_x19 = *(long *)((long)register0x00000008 + -0x130);
    __ZdlPv();
  }
  if (*(char *)((long)register0x00000008 + -0x101) < '\0') {
    unaff_x19 = *(long *)((long)register0x00000008 + -0x118);
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x70)) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a36eabc(*(undefined8 *)((long)register0x00000008 + -0x140));
  if (*(char *)((long)register0x00000008 + -0x119) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x130));
  }
  if (*(char *)((long)register0x00000008 + -0x101) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x118));
  }
  unaff_x30 = FUN_10a33e448;
  param_2 = unaff_x19;
  __Unwind_Resume();
  param_2 = param_2 + -0x18;
  unaff_x25 = 0x60;
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x330);
  param_1 = extraout_x8;
  goto code_r0x00010a33d9e8;
}



/* Entry: 10a33e448; end: 10a33e44f;  */

/* WARNING: Removing unreachable block (ram,0x00010a33e104) */
/* WARNING: Removing unreachable block (ram,0x00010a33e13c) */
/* WARNING: Removing unreachable block (ram,0x00010a33e14c) */
/* WARNING: Removing unreachable block (ram,0x00010a33e428) */
/* WARNING: Removing unreachable block (ram,0x00010a33e438) */

void FUN_10a33e448(undefined8 param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  ulong uVar4;
  byte bVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 extraout_x8;
  undefined8 *puVar11;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar12;
  ulong unaff_x21;
  undefined1 *unaff_x22;
  undefined8 *puVar13;
  long unaff_x23;
  undefined1 *unaff_x24;
  long lVar14;
  undefined8 unaff_x25;
  undefined8 *unaff_x26;
  byte *unaff_x27;
  ulong unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar15;
  undefined8 uVar16;
  
FUN_10a33d9e8:
  *(ulong *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(byte **)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 **)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x330) = param_1;
  *(undefined8 *)((long)register0x00000008 + -0x70) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010989f98c((undefined1 *)((long)register0x00000008 + -0xe8),param_2);
  pcVar1 = "false";
  pcVar2 = "true";
  pcVar3 = pcVar2;
  if (*(char *)(param_2 + 0x200) == '\0') {
    pcVar3 = pcVar1;
  }
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x100),pcVar3);
  pcVar3 = pcVar2;
  if (*(char *)(param_2 + 0x201) == '\0') {
    pcVar3 = pcVar1;
  }
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x118),pcVar3);
  if (*(char *)(param_2 + 0x202) == '\0') {
    pcVar2 = pcVar1;
  }
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x130),pcVar2);
  *(undefined1 *)((long)register0x00000008 + -0xd0) = 0;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -200),&DAT_10f64f6c4);
  *(undefined1 *)((long)register0x00000008 + -0xb0) = 1;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xa8),"Back");
  unaff_x24 = (undefined1 *)((long)register0x00000008 + -0xd0);
  *(undefined1 *)((long)register0x00000008 + -0x90) = 2;
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x88),&DAT_10f64f6ca);
  *(long *)((long)register0x00000008 + -0x328) = param_2 + -0x18;
  puVar12 = (undefined8 *)0x0;
  lVar14 = 0;
  unaff_x26 = (undefined8 *)((long)register0x00000008 + -0x148);
  *(undefined8 *)((long)register0x00000008 + -0x140) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
  unaff_x20 = (undefined8 *)((long)register0x00000008 + -0x140);
  *(undefined8 **)((long)register0x00000008 + -0x148) = unaff_x20;
  puVar9 = unaff_x20;
  do {
    unaff_x27 = unaff_x24 + lVar14;
    bVar5 = *unaff_x27;
    unaff_x28 = (ulong)bVar5;
    puVar10 = unaff_x20;
    puVar11 = unaff_x20;
    puVar13 = unaff_x20;
    if (puVar9 == unaff_x20) {
LAB_10a33db88:
      puVar9 = unaff_x26;
      if (puVar12 != (undefined8 *)0x0) {
        puVar11 = puVar10 + 1;
        puVar9 = puVar10;
        puVar13 = puVar10;
      }
      if (puVar9[1] == 0) goto LAB_10a33dba4;
    }
    else {
      puVar9 = unaff_x20;
      puVar7 = puVar12;
      if (puVar12 == (undefined8 *)0x0) {
        do {
          puVar10 = (undefined8 *)puVar9[2];
          bVar8 = (undefined8 *)*puVar10 == puVar9;
          puVar9 = puVar10;
        } while (bVar8);
        if (*(byte *)(puVar10 + 4) < bVar5) goto LAB_10a33db88;
      }
      else {
        do {
          puVar10 = puVar7;
          puVar7 = (undefined8 *)puVar10[1];
        } while ((undefined8 *)puVar10[1] != (undefined8 *)0x0);
        if (*(byte *)(puVar10 + 4) < bVar5) goto LAB_10a33db88;
        do {
          while (puVar13 = puVar12, bVar5 < *(byte *)(puVar13 + 4)) {
            puVar12 = (undefined8 *)*puVar13;
            puVar11 = puVar13;
            if ((undefined8 *)*puVar13 == (undefined8 *)0x0) goto LAB_10a33dba4;
          }
          if (bVar5 <= *(byte *)(puVar13 + 4)) goto LAB_10a33dc14;
          puVar12 = (undefined8 *)puVar13[1];
        } while ((undefined8 *)puVar13[1] != (undefined8 *)0x0);
        puVar11 = puVar13 + 1;
      }
LAB_10a33dba4:
      puVar9 = (undefined8 *)0x40;
      __Znwm();
      *(byte *)(puVar9 + 4) = bVar5;
      if ((char)unaff_x27[0x1f] < '\0') {
        func_0x000107c3192c(puVar9 + 5,*(undefined8 *)(unaff_x27 + 8),
                            *(undefined8 *)(unaff_x27 + 0x10));
      }
      else {
        uVar15 = *(undefined8 *)(unaff_x27 + 8);
        puVar9[6] = *(undefined8 *)(unaff_x27 + 0x10);
        puVar9[5] = uVar15;
        puVar9[7] = *(undefined8 *)(unaff_x27 + 0x18);
      }
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = puVar13;
      *puVar11 = puVar9;
      if (**(long **)((long)register0x00000008 + -0x148) != 0) {
        *(long *)((long)register0x00000008 + -0x148) =
             **(long **)((long)register0x00000008 + -0x148);
        puVar9 = (undefined8 *)*puVar11;
      }
      func_0x000107c2b058(*(undefined8 *)((long)register0x00000008 + -0x140),puVar9);
      *(long *)((long)register0x00000008 + -0x138) =
           *(long *)((long)register0x00000008 + -0x138) + 1;
    }
LAB_10a33dc14:
    lVar14 = lVar14 + 0x20;
    if (lVar14 == 0x60) break;
    puVar9 = *(undefined8 **)((long)register0x00000008 + -0x148);
    puVar12 = *(undefined8 **)((long)register0x00000008 + -0x140);
  } while( true );
  lVar14 = 0;
  unaff_x23 = *(long *)((long)register0x00000008 + -0x328);
  do {
    if (*(char *)((long)register0x00000008 + lVar14 + -0x71) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + lVar14 + -0x88));
    }
    lVar14 = lVar14 + -0x20;
  } while (lVar14 != -0x60);
  puVar9 = *(undefined8 **)((long)register0x00000008 + -0x140);
  if (puVar9 != (undefined8 *)0x0) {
    puVar12 = unaff_x20;
    do {
      lVar14 = 8;
      if (*(byte *)(unaff_x23 + 0x244) <= *(byte *)(puVar9 + 4)) {
        lVar14 = 0;
        puVar12 = puVar9;
      }
      puVar9 = *(undefined8 **)((long)puVar9 + lVar14);
    } while (puVar9 != (undefined8 *)0x0);
    if ((puVar12 != unaff_x20) && (*(byte *)(puVar12 + 4) <= *(byte *)(unaff_x23 + 0x244))) {
      if (*(char *)((long)puVar12 + 0x3f) < '\0') {
        func_0x000107c3192c((undefined1 *)((long)register0x00000008 + -0xd0),puVar12[5],puVar12[6]);
      }
      else {
        uVar15 = puVar12[5];
        *(undefined8 *)((long)register0x00000008 + -200) = puVar12[6];
        *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar15;
        *(undefined8 *)((long)register0x00000008 + -0xc0) = puVar12[7];
      }
      goto LAB_10a33dca4;
    }
  }
  func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xd0),&UNK_10f64f907);
LAB_10a33dca4:
  unaff_x21 = *(ulong *)((long)register0x00000008 + -0xe0);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0xd1)) {
    unaff_x21 = (ulong)*(byte *)((long)register0x00000008 + -0xd1);
  }
  FUN_10a003c90((undefined1 *)((long)register0x00000008 + -0x2d8),unaff_x21 + 0xd,
                (undefined1 *)((long)register0x00000008 + -0x2f0));
  unaff_x22 = *(undefined1 **)((long)register0x00000008 + -0x2d8);
  if (-1 < *(char *)((long)register0x00000008 + -0x2c1)) {
    unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x2d8);
  }
  if (unaff_x21 != 0) {
    _memmove(unaff_x22,(undefined1 *)((long)register0x00000008 + -0xe8),unaff_x21);
  }
  puVar9 = (undefined8 *)(unaff_x22 + unaff_x21);
  *puVar9 = 0x69536f7754736920;
  *(undefined8 *)((long)puVar9 + 5) = 0x203a64656469536f;
  *(undefined1 *)((long)puVar9 + 0xd) = 0;
  uVar4 = *(ulong *)((long)register0x00000008 + -0xf8);
  puVar6 = *(undefined1 **)((long)register0x00000008 + -0x100);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0xe9)) {
    uVar4 = (ulong)*(byte *)((long)register0x00000008 + -0xe9);
    puVar6 = (undefined1 *)((long)register0x00000008 + -0x100);
  }
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x2d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar9,puVar6,uVar4);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x2b0) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x2b8) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x2c0) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x2c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f64f928,0xd);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x290) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x298) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x2a0) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  uVar4 = *(ulong *)((long)register0x00000008 + -0x110);
  puVar6 = *(undefined1 **)((long)register0x00000008 + -0x118);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x101)) {
    uVar4 = (ulong)*(byte *)((long)register0x00000008 + -0x101);
    puVar6 = (undefined1 *)((long)register0x00000008 + -0x118);
  }
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x2a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar9,puVar6,uVar4);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x270) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x278) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x280) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x280);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f64f936,0x10);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x250) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -600) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x260) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  uVar4 = *(ulong *)((long)register0x00000008 + -0x128);
  puVar6 = *(undefined1 **)((long)register0x00000008 + -0x130);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x119)) {
    uVar4 = (ulong)*(byte *)((long)register0x00000008 + -0x119);
    puVar6 = (undefined1 *)((long)register0x00000008 + -0x130);
  }
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x260);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar9,puVar6,uVar4);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x230) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x238) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x240) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x240);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f64f947,0xd);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x210) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x218) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x220) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEf
            ((undefined1 *)((long)register0x00000008 + -0x2f0),*(undefined4 *)(unaff_x23 + 0x224));
  uVar4 = *(ulong *)((long)register0x00000008 + -0x2e8);
  puVar6 = *(undefined1 **)((long)register0x00000008 + -0x2f0);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x2d9)) {
    uVar4 = (ulong)*(byte *)((long)register0x00000008 + -0x2d9);
    puVar6 = (undefined1 *)((long)register0x00000008 + -0x2f0);
  }
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x220);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar9,puVar6,uVar4);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x1f0) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x1f8) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x200) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x200);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f64f955,0x17);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x1d0) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x1d8) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x1e0) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEf
            ((undefined1 *)((long)register0x00000008 + -0x308),*(undefined4 *)(unaff_x23 + 0x248));
  uVar4 = *(ulong *)((long)register0x00000008 + -0x300);
  puVar6 = *(undefined1 **)((long)register0x00000008 + -0x308);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x2f1)) {
    uVar4 = (ulong)*(byte *)((long)register0x00000008 + -0x2f1);
    puVar6 = (undefined1 *)((long)register0x00000008 + -0x308);
  }
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x1e0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar9,puVar6,uVar4);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x1b0) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x1b8) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x1c0) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x1c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&DAT_10f68f19e,2);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -400) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x198) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x1a0) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEf
            ((undefined1 *)((long)register0x00000008 + -800),*(undefined4 *)(unaff_x23 + 0x24c));
  uVar4 = *(ulong *)((long)register0x00000008 + -0x318);
  puVar6 = *(undefined1 **)((long)register0x00000008 + -800);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0x309)) {
    uVar4 = (ulong)*(byte *)((long)register0x00000008 + -0x309);
    puVar6 = (undefined1 *)((long)register0x00000008 + -800);
  }
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x1a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar9,puVar6,uVar4);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x170) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x178) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x180) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x180);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f64f96d,0xd);
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined8 *)((long)register0x00000008 + -0x150) = puVar9[2];
  *(undefined8 *)((long)register0x00000008 + -0x158) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x160) = uVar15;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  uVar4 = *(ulong *)((long)register0x00000008 + -200);
  puVar6 = *(undefined1 **)((long)register0x00000008 + -0xd0);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0xb9)) {
    uVar4 = (ulong)*(byte *)((long)register0x00000008 + -0xb9);
    puVar6 = (undefined1 *)((long)register0x00000008 + -0xd0);
  }
  puVar9 = (undefined8 *)((long)register0x00000008 + -0x160);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar9,puVar6,uVar4);
  uVar15 = *puVar9;
  puVar12 = *(undefined8 **)((long)register0x00000008 + -0x330);
  puVar12[1] = puVar9[1];
  *puVar12 = uVar15;
  puVar12[2] = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  if (*(char *)((long)register0x00000008 + -0x149) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x160));
  }
  if (*(char *)((long)register0x00000008 + -0x169) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x180));
  }
  if (*(char *)((long)register0x00000008 + -0x309) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -800));
  }
  if (*(char *)((long)register0x00000008 + -0x189) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1a0));
  }
  if (*(char *)((long)register0x00000008 + -0x1a9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1c0));
  }
  if (*(char *)((long)register0x00000008 + -0x2f1) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x308));
  }
  if (*(char *)((long)register0x00000008 + -0x1c9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1e0));
  }
  if (*(char *)((long)register0x00000008 + -0x1e9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x200));
  }
  if (*(char *)((long)register0x00000008 + -0x2d9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x2f0));
  }
  if (*(char *)((long)register0x00000008 + -0x209) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x220));
  }
  if (*(char *)((long)register0x00000008 + -0x229) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x240));
  }
  if (*(char *)((long)register0x00000008 + -0x249) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x260));
  }
  if (*(char *)((long)register0x00000008 + -0x269) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x280));
  }
  if (*(char *)((long)register0x00000008 + -0x289) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x2a0));
  }
  if (*(char *)((long)register0x00000008 + -0x2a9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x2c0));
  }
  if (*(char *)((long)register0x00000008 + -0x2c1) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x2d8));
  }
  unaff_x19 = *(long *)((long)register0x00000008 + -0x140);
  FUN_10a36eabc();
  if (*(char *)((long)register0x00000008 + -0x119) < '\0') {
    unaff_x19 = *(long *)((long)register0x00000008 + -0x130);
    __ZdlPv();
  }
  if (*(char *)((long)register0x00000008 + -0x101) < '\0') {
    unaff_x19 = *(long *)((long)register0x00000008 + -0x118);
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x70)) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a36eabc(*(undefined8 *)((long)register0x00000008 + -0x140));
  if (*(char *)((long)register0x00000008 + -0x119) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x130));
  }
  if (*(char *)((long)register0x00000008 + -0x101) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x118));
  }
  unaff_x30 = FUN_10a33e448;
  param_2 = unaff_x19;
  __Unwind_Resume();
  unaff_x25 = 0x60;
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x330);
  param_1 = extraout_x8;
  goto FUN_10a33d9e8;
}



/* Entry: 10a33e450; end: 10a33edf7;  */

/* WARNING: Removing unreachable block (ram,0x00010a33e860) */

void FUN_10a33e450(undefined8 *param_1,undefined8 param_2,undefined8 *******param_3,
                  undefined4 param_4,undefined4 param_5,long param_6,ulong *param_7)

{
  undefined2 *puVar1;
  ushort uVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong *puVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  undefined2 *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined4 uVar23;
  undefined8 *******pppppppuVar24;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 ******ppppppuStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 ******ppppppuStack_f0;
  undefined8 uStack_e8;
  float fStack_dc;
  undefined8 ******ppppppuStack_d8;
  long *plStack_d0;
  undefined7 uStack_c8;
  char cStack_c1;
  ulong uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  
  lStack_a0 = 0;
  lStack_98 = 0;
  uStack_90 = 0;
  uVar19 = *param_7;
  puStack_b0 = (undefined8 *)0x0;
  puStack_a8 = (undefined8 *)0x0;
  puStack_b8 = (undefined8 *)0x0;
  if (param_7[1] - uVar19 == 0) {
    puVar21 = (undefined8 *)0x0;
    puVar17 = (undefined8 *)0x0;
  }
  else {
    lVar8 = (long)(param_7[1] - uVar19) >> 3;
    if (0x666666666666666 < (ulong)(lVar8 * -0x5555555555555555)) {
      func_0x00010a351bc4();
      goto LAB_10a33ecc4;
    }
    puVar6 = (undefined8 *)(lVar8 * -0x5555555555555548);
    __Znwm();
    puVar21 = puVar6 + lVar8 * -0xaaaaaaaaaaaaaa9;
    pppppppuVar24 = (undefined8 *******)0x0;
    puVar17 = puVar6;
    do {
      puVar17[1] = 0;
      *puVar17 = 0;
      puVar17[3] = 0;
      puVar17[2] = 0;
      puVar17[3] = 0x28cd94bfde;
      puVar17[4] = 0;
      puVar17 = puVar17 + 5;
    } while (puVar17 != puVar21);
    lVar8 = 0;
    uVar22 = 0;
    puStack_b8 = puVar6;
    puStack_b0 = puVar21;
    puStack_a8 = puVar21;
    do {
      uVar23 = SUB84(pppppppuVar24,0);
      FUN_10a0d09b4(&ppppppuStack_d8);
      if (uVar22 != 0) {
        lVar9 = ((long)puVar21 - (long)puStack_b8 >> 3) * -0x3333333333333333;
        puVar12 = puStack_b8 + 3;
        uVar13 = uVar22;
        do {
          if (lVar9 == 0) goto LAB_10a33ecc4;
          if (*puVar12 == uStack_c0) {
            FUN_10a0ee900(&uStack_120,&UNK_10f64fa32,0x24);
            FUN_10a0029c0(&uStack_120);
            goto LAB_10a33ecc4;
          }
          lVar9 = lVar9 + -1;
          uVar13 = uVar13 - 1;
          puVar12 = puVar12 + 5;
        } while (uVar13 != 0);
      }
      plVar10 = (long *)(*(long *)(param_6 + 0x1b8) + 8);
      plVar14 = (long *)*plVar10;
      plVar11 = plVar10;
      if (plVar14 == (long *)0x0) {
LAB_10a33eb7c:
        FUN_10a0ee900(&uStack_120,&UNK_10f64fa57,0x2a);
        FUN_10a0029c0(&uStack_120);
        goto LAB_10a33ecc4;
      }
      do {
        lVar9 = 8;
        if (uStack_c0 <= (ulong)plVar14[7]) {
          lVar9 = 0;
          plVar11 = plVar14;
        }
        plVar14 = *(long **)((long)plVar14 + lVar9);
      } while (plVar14 != (long *)0x0);
      if ((plVar11 == plVar10) || (uStack_c0 < (ulong)plVar11[7])) goto LAB_10a33eb7c;
      lVar9 = plVar11[8];
      if (lVar9 == 0) {
        FUN_10a0ee900(&uStack_120,&UNK_10f64fa82,0x29);
        FUN_10a0029c0(&uStack_120);
        goto LAB_10a33ecc4;
      }
      uVar2 = *(ushort *)(lVar9 + 0x20);
      uVar13 = (ulong)(uint)(int)(short)uVar2;
      FUN_10a33edf8();
      if ((uVar19 & 1) == 0) {
        if (-1 < cStack_c1) {
          ppppppuStack_d8 = &ppppppuStack_d8;
        }
        func_0x00010a33ee30(&uStack_120,ppppppuStack_d8);
        FUN_10a0029c0(&uStack_120);
        goto LAB_10a33ecc4;
      }
      if (uVar2 < 7) {
        if (uVar2 < 3) {
          if (uVar2 == 1) {
            uVar23 = 0x3f800000;
            if (*(char *)(lVar9 + 0x24) == '\0') {
              uVar23 = 0;
            }
            uStack_120 = (undefined8 *******)CONCAT44(uStack_120._4_4_,uVar23);
            FUN_10a001c34(&lStack_a0,&uStack_120);
          }
          else {
            if (uVar2 != 2) {
LAB_10a33ec1c:
              if (-1 < cStack_c1) {
                ppppppuStack_d8 = &ppppppuStack_d8;
              }
              func_0x00010a33eea4(&uStack_120,ppppppuStack_d8,(ulong)(uint)(int)(short)uVar2);
              FUN_10a0029c0(&uStack_120);
              goto LAB_10a33ecc4;
            }
            fStack_dc = (float)*(int *)(lVar9 + 0x24);
            bVar5 = false;
            if ((-2.1474836e+09 <= fStack_dc) && (bVar5 = false, !NAN(fStack_dc))) {
              bVar5 = fStack_dc < 2.1474836e+09;
            }
            if (!bVar5 || *(int *)(lVar9 + 0x24) != (int)fStack_dc) {
              FUN_10a0ee900(&uStack_120,&UNK_10f64faac,99);
              FUN_10a0029c0(&uStack_120);
              goto LAB_10a33ecc4;
            }
            FUN_10a0ca014(&lStack_a0,&fStack_dc);
          }
        }
        else if (uVar2 == 3) {
          uStack_120 = (undefined8 *******)CONCAT44(uStack_120._4_4_,*(undefined4 *)(lVar9 + 0x24));
          FUN_10a001c34(&lStack_a0,&uStack_120);
        }
        else {
          if (uVar2 != 6) goto LAB_10a33ec1c;
          fStack_dc = (float)*(uint *)(lVar9 + 0x24);
          param_3 = (undefined8 *******)0x4f800000;
          if (4.2949673e+09 <= fStack_dc || *(uint *)(lVar9 + 0x24) != (int)fStack_dc) {
            FUN_10a0ee900(&uStack_120,&UNK_10f64fb10,99);
            FUN_10a0029c0(&uStack_120);
            goto LAB_10a33ecc4;
          }
          FUN_10a0ca014(&lStack_a0,&fStack_dc);
        }
      }
      else if (uVar2 < 9) {
        if (uVar2 == 7) {
          uStack_120 = *(undefined8 ********)(lVar9 + 0x24);
          FUN_10a351cfc(&lStack_a0,lStack_98,&uStack_120,(long)&uStack_120 + uVar13 * 4,uVar13);
        }
        else {
          if (uVar2 != 8) goto LAB_10a33ec1c;
          param_3 = *(undefined8 ********)(lVar9 + 0x24);
          uStack_118 = (long *)CONCAT44(uStack_118._4_4_,*(undefined4 *)(lVar9 + 0x2c));
          uStack_120 = param_3;
          FUN_10a351cfc(&lStack_a0,lStack_98,&uStack_120,(long)&uStack_120 + uVar13 * 4,uVar13);
        }
      }
      else if (uVar2 == 9) {
        FUN_10a0dad84(lVar9);
        uStack_120 = (undefined8 *******)CONCAT44((int)param_3,uVar23);
        uStack_118 = (long *)CONCAT44(param_5,param_4);
        FUN_10a351cfc(&lStack_a0,lStack_98,&uStack_120,(long)&uStack_120 + uVar13 * 4,uVar13);
      }
      else if (uVar2 == 10) {
        uStack_118 = *(long **)(lVar9 + 0x2c);
        uStack_120 = *(undefined8 ********)(lVar9 + 0x24);
        uStack_108 = *(ulong *)(lVar9 + 0x3c);
        param_3 = *(undefined8 ********)(lVar9 + 0x34);
        uStack_100 = CONCAT44(uStack_100._4_4_,*(undefined4 *)(lVar9 + 0x44));
        ppppppuStack_110 = param_3;
        FUN_10a351cfc(&lStack_a0,lStack_98,&uStack_120,(long)&uStack_120 + uVar13 * 4,uVar13);
      }
      else {
        if (uVar2 != 0xb) goto LAB_10a33ec1c;
        uStack_118 = *(long **)(lVar9 + 0x2c);
        uStack_120 = *(undefined8 ********)(lVar9 + 0x24);
        uStack_108 = *(ulong *)(lVar9 + 0x3c);
        ppppppuStack_110 = *(undefined8 *******)(lVar9 + 0x34);
        uStack_f8 = *(undefined8 *)(lVar9 + 0x4c);
        uStack_100 = *(undefined8 *)(lVar9 + 0x44);
        uStack_e8 = *(undefined8 *)(lVar9 + 0x5c);
        param_3 = *(undefined8 ********)(lVar9 + 0x54);
        ppppppuStack_f0 = param_3;
        FUN_10a351cfc(&lStack_a0,lStack_98,&uStack_120,(long)&uStack_120 + uVar13 * 4,uVar13);
      }
      if (cStack_c1 < '\0') {
        func_0x000107c3192c(&uStack_120,ppppppuStack_d8,plStack_d0);
      }
      else {
        uStack_118 = plStack_d0;
        uStack_120 = (undefined8 *******)ppppppuStack_d8;
        ppppppuStack_110 = (undefined8 ******)CONCAT17(cStack_c1,uStack_c8);
      }
      puVar17 = puStack_b8;
      uStack_108 = uStack_c0;
      uStack_100 = CONCAT62(uStack_100._2_6_,uVar2);
      uVar19 = ((long)puVar21 - (long)puStack_b8 >> 3) * -0x3333333333333333;
      if (uVar19 < uVar22 || uVar19 - uVar22 == 0) goto LAB_10a33ecc4;
      puVar6 = puStack_b8 + uVar22 * 5;
      if (*(char *)((long)puVar6 + 0x17) < '\0') {
        __ZdlPv(*puVar6);
      }
      pppppppuVar24 = uStack_120;
      puVar6[2] = ppppppuStack_110;
      puVar6[1] = uStack_118;
      *puVar6 = uStack_120;
      ppppppuStack_110 = (undefined8 ******)((ulong)ppppppuStack_110 & 0xffffffffffffff);
      uStack_120 = (undefined8 *******)((ulong)uStack_120 & 0xffffffffffffff00);
      puVar6[3] = uStack_108;
      *(undefined2 *)(puVar6 + 4) = (undefined2)uStack_100;
      if (cStack_c1 < '\0') {
        __ZdlPv(ppppppuStack_d8);
      }
      lVar8 = uVar13 + lVar8;
      uVar22 = uVar22 + 1;
      uVar19 = *param_7;
    } while (uVar22 < (ulong)(((long)(param_7[1] - uVar19) >> 3) * -0x5555555555555555));
    if (lStack_98 - lStack_a0 >> 2 != lVar8) {
      FUN_10a0ee900(&uStack_120,&UNK_10f64fb74,0x44);
      FUN_10a0029c0(&uStack_120);
      goto LAB_10a33ecc4;
    }
  }
  lVar8 = *(long *)(param_6 + 0x198);
  puVar6 = (undefined8 *)0x70;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110bc7048;
  puVar6[3] = &PTR_FUN_110bc55f8;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  uVar13 = ((long)puVar21 - (long)puVar17 >> 3) * -0x3333333333333333;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  uVar22 = uVar13;
  FUN_10a36f1ec(puVar6 + 9);
  lVar9 = puVar6[6];
  uVar19 = puVar6[8] - lVar9 >> 1;
  if (uVar19 <= uVar13 && uVar13 - uVar19 != 0) {
    if ((long)puVar21 - (long)puVar17 < 0) {
      FUN_10a36f544();
LAB_10a33ecc4:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a33ecc8);
      (*pcVar4)();
    }
    lVar15 = puVar6[7];
    FUN_10a36f558();
    lVar9 = uVar13 + (lVar15 - lVar9);
    lVar20 = lVar9 - (puVar6[7] - puVar6[6]);
    _memcpy(lVar20);
    lVar15 = puVar6[6];
    puVar6[6] = lVar20;
    puVar6[7] = lVar9;
    puVar6[8] = uVar13 + uVar22 * 2;
    if (lVar15 != 0) {
      __ZdlPv();
    }
  }
  do {
    if (puVar17 == puVar21) {
      uVar18 = *(undefined8 *)(lVar8 + 0x870);
      uStack_120 = (undefined8 *******)0x0;
      uStack_118 = (long *)0x0;
      ppppppuStack_110 = (undefined8 ******)0x0;
      FUN_10a0ca588(&uStack_120,lStack_a0,lStack_98,lStack_98 - lStack_a0 >> 2);
      FUN_10a347f28(&ppppppuStack_d8,uVar18,&uStack_120);
      func_0x00010a36f2e0(puVar6 + 0xc,&ppppppuStack_d8);
      if (plStack_d0 != (long *)0x0) {
        plVar11 = plStack_d0 + 1;
        do {
          lVar8 = *plVar11;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d0);
        }
      }
      if (uStack_120 != (undefined8 *******)0x0) {
        uStack_118 = (long *)uStack_120;
        __ZdlPv();
      }
      *param_1 = puVar6 + 3;
      param_1[1] = puVar6;
      FUN_10a351bd8(&puStack_b8);
      if (lStack_a0 != 0) {
        lStack_98 = lStack_a0;
        __ZdlPv();
      }
      return;
    }
    puVar7 = puVar17;
    FUN_10a36f2a4(puVar6 + 9);
    puVar1 = (undefined2 *)puVar6[7];
    if (puVar1 < (undefined2 *)puVar6[8]) {
      puVar16 = puVar1 + 1;
      *puVar1 = *(undefined2 *)(puVar17 + 4);
    }
    else {
      lVar9 = puVar6[6];
      lVar20 = (long)puVar1 - lVar9;
      lVar15 = lVar20 >> 1;
      if (lVar15 < -1) {
        FUN_10a36f544();
        goto LAB_10a33ecc4;
      }
      uVar22 = (long)puVar6[8] - lVar9;
      uVar19 = uVar22;
      if (uVar22 <= lVar15 + 1U) {
        uVar19 = lVar15 + 1;
      }
      if (0x7ffffffffffffffd < uVar22) {
        uVar19 = 0x7fffffffffffffff;
      }
      FUN_10a36f558();
      lVar9 = puVar6[6];
      puVar1 = (undefined2 *)(uVar19 + lVar20);
      lVar15 = (long)puVar1 - (puVar6[7] - lVar9);
      puVar16 = puVar1 + 1;
      *puVar1 = *(undefined2 *)(puVar17 + 4);
      _memcpy(lVar15,lVar9);
      lVar9 = puVar6[6];
      puVar6[6] = lVar15;
      puVar6[7] = puVar16;
      puVar6[8] = uVar19 + (long)puVar7 * 2;
      if (lVar9 != 0) {
        __ZdlPv();
      }
    }
    puVar6[7] = puVar16;
    puVar17 = puVar17 + 5;
  } while( true );
}



/* Entry: 10a33edf8; end: 10a33ee2f;  */

undefined1  [16] FUN_10a33edf8(int param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if (param_1 - 1U < 0xb) {
    lVar1 = ((ulong)(param_1 - 1U) & 0xffff) * 8;
    auVar2._0_8_ = *(undefined8 *)(&UNK_10e4b0820 + lVar1);
    auVar2._8_8_ = *(undefined8 *)(&UNK_10e4b0878 + lVar1);
    return auVar2;
  }
  return ZEXT816(0);
}



/* Entry: 10a33ee30; end: 10a33ef1b;  */

void FUN_10a33ee30(undefined8 param_1)

{
  undefined8 auStack_48 [2];
  char cStack_31;
  
  FUN_10a351c48(auStack_48);
  FUN_10a0ee900(param_1,&UNK_10f65115a,0x42);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return;
}



/* Entry: 10a33ef1c; end: 10a33f023;  */

void FUN_10a33ef1c(long param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_80,*param_2,param_2[1]);
  }
  else {
    uStack_78 = param_2[1];
    uStack_80 = *param_2;
    lStack_70 = param_2[2];
  }
  uStack_68 = param_2[3];
  plStack_58 = (long *)param_5[1];
  uStack_60 = *param_5;
  if (param_5[1] != 0) {
    plVar1 = (long *)(param_5[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_50 = param_3;
  uStack_4c = param_4;
  FUN_10a175674(param_1 + 0x2c0,param_2,&uStack_80);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if (lStack_70 < 0) {
    __ZdlPv(uStack_80);
  }
  return;
}



/* Entry: 10a33f024; end: 10a33f0d3;  */

undefined1  [16] FUN_10a33f024(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1f;
  auVar1._0_8_ = &UNK_10f651200;
  return auVar1;
}



/* Entry: 10a33f0d4; end: 10a33f1ab;  */

void FUN_10a33f0d4(undefined8 param_1)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0xffffffff00000002;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x124;
  uStack_48 = 0x13c;
  FUN_10a33f1ac(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f64fbb9;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a36f880();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &DAT_10f64fbc6;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010a36fc9c(param_1,&puStack_88);
  FUN_10a36fdbc(param_1);
  return;
}



/* Entry: 10a33f1ac; end: 10a33f283;  */

/* WARNING: Removing unreachable block (ram,0x00010a33f244) */

undefined1  [16] FUN_10a33f1ac(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f651200,0x1f);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a36f784(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a33f284; end: 10a33f5cb;  */

/* WARNING: Removing unreachable block (ram,0x00010a33f4f4) */
/* WARNING: Removing unreachable block (ram,0x00010a33f504) */

void FUN_10a33f284(undefined8 *param_1,long *param_2)

{
  undefined8 ****ppppuVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 **ppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ***pppuVar7;
  undefined8 **ppuVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined1 *puStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  undefined8 ***apppuStack_d8 [2];
  char cStack_c1;
  undefined8 **ppuStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 ***pppuStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 auStack_70 [8];
  ulong uStack_68;
  byte bStack_59;
  undefined8 ***pppuStack_58;
  long lStack_50;
  char cStack_41;
  
  FUN_10ad04458(&pppuStack_58,*(ulong *)(*(long *)(*param_2 + -8) + 8) & 0x7fffffffffffffff);
  if (-1 < (long)cStack_41) {
    pppuStack_58 = &pppuStack_58;
  }
  if (-1 < cStack_41) {
    lStack_50 = (long)cStack_41;
  }
  do {
    lVar9 = lStack_50;
    if (lVar9 == 0) {
      lVar9 = 0;
      break;
    }
    lStack_50 = lVar9 + -1;
  } while (*(char *)((long)pppuStack_58 + lVar9 + -1) != ':');
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
            (auStack_70,&pppuStack_58,lVar9,0xffffffffffffffff,&pppuStack_88);
  pppuStack_88 = (undefined8 ****)0x0;
  uStack_80 = 0;
  uStack_78 = 0;
  puVar3 = (undefined8 *)param_2[7];
  for (puVar10 = (undefined8 *)param_2[6]; puVar10 != puVar3; puVar10 = puVar10 + 4) {
    uVar2 = puVar10[1];
    puVar4 = (undefined8 *)*puVar10;
    if (-1 < (char)*(byte *)((long)puVar10 + 0x17)) {
      uVar2 = (ulong)*(byte *)((long)puVar10 + 0x17);
      puVar4 = puVar10;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&pppuStack_88,puVar4,uVar2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&pppuStack_88,&DAT_10f68f19e,2);
  }
  uVar2 = uStack_68;
  if (-1 < (char)bStack_59) {
    uVar2 = (ulong)bStack_59;
  }
  FUN_10a003c90(apppuStack_d8,uVar2 + 0xb,&puStack_f0);
  ppppuVar1 = (undefined8 ****)apppuStack_d8[0];
  if (-1 < cStack_c1) {
    ppppuVar1 = apppuStack_d8;
  }
  if (uVar2 != 0) {
    _memmove(ppppuVar1,auStack_70,uVar2);
  }
  puVar10 = (undefined8 *)((long)ppppuVar1 + uVar2);
  *puVar10 = 0x6d726f66696e7520;
  *(undefined4 *)((long)puVar10 + 7) = 0x203a736d;
  *(undefined1 *)((long)puVar10 + 0xb) = 0;
  uVar2 = uStack_80;
  ppppuVar1 = (undefined8 ****)pppuStack_88;
  if (-1 < (long)uStack_78) {
    uVar2 = uStack_78 >> 0x38;
    ppppuVar1 = &pppuStack_88;
  }
  ppppuVar6 = apppuStack_d8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppuVar6,ppppuVar1,uVar2);
  ppuStack_b8 = ppppuVar6[1];
  ppuStack_c0 = *ppppuVar6;
  ppuStack_b0 = ppppuVar6[2];
  ppppuVar6[1] = (undefined8 ***)0x0;
  ppppuVar6[2] = (undefined8 ***)0x0;
  *ppppuVar6 = (undefined8 ***)0x0;
  pppuVar7 = &ppuStack_c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar7,&UNK_10f64fbd7,0xd);
  puStack_98 = pppuVar7[1];
  puStack_a0 = *pppuVar7;
  puStack_90 = pppuVar7[2];
  pppuVar7[1] = (undefined8 **)0x0;
  pppuVar7[2] = (undefined8 **)0x0;
  *pppuVar7 = (undefined8 **)0x0;
  __ZNSt3__19to_stringEm(&puStack_f0,*(undefined8 *)(param_2[9] + 8));
  ppuVar5 = (undefined1 **)puStack_f0;
  if (-1 < (char)bStack_d9) {
    uStack_e8 = (ulong)bStack_d9;
    ppuVar5 = &puStack_f0;
  }
  ppuVar8 = &puStack_a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar8,ppuVar5,uStack_e8);
  puVar10 = *ppuVar8;
  param_1[1] = ppuVar8[1];
  *param_1 = puVar10;
  param_1[2] = ppuVar8[2];
  ppuVar8[1] = (undefined8 *)0x0;
  ppuVar8[2] = (undefined8 *)0x0;
  *ppuVar8 = (undefined8 *)0x0;
  if ((char)bStack_d9 < '\0') {
    __ZdlPv(puStack_f0);
  }
  if ((long)puStack_90 < 0) {
    __ZdlPv(puStack_a0);
  }
  if ((long)ppuStack_b0 < 0) {
    __ZdlPv(ppuStack_c0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(apppuStack_d8[0]);
  }
  if ((long)uStack_78 < 0) {
    __ZdlPv(pppuStack_88);
  }
  return;
}



/* Entry: 10a33f5cc; end: 10a33f64f;  */

undefined1  [16] FUN_10a33f5cc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x17;
  auVar1._0_8_ = &UNK_10f651220;
  return auVar1;
}



/* Entry: 10a33f650; end: 10a33fd77;  */

void FUN_10a33f650(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f651220,0x17);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bc5680;
  pppuVar2 = (undefined8 ***)&UNK_10f64efef;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0xad;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bc5680;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c42c58;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a33fd58;
    FUN_10a054dac(param_1,&UNK_10f64fbe5,FUN_10a36fed0,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a33fd58;
    FUN_10a054dac(param_1,&UNK_10f64fbf8,FUN_10a37018c,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a33fd58;
    FUN_10a054dac(param_1,&UNK_10f64fc13,FUN_10a370420,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a33fd58;
    FUN_10a054dac(param_1,&UNK_10f64fc29,FUN_10a3704d8,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a33fd58;
    FUN_10a054dac(param_1,&UNK_10f64fc3c,FUN_10a370590,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a33fd58;
    FUN_10a054dac(param_1,&UNK_10f64fc58,FUN_10a370648,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a33fd58;
    FUN_10a054dac(param_1,&UNK_10f64fc73,FUN_10a370700,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a33fd58;
    FUN_10a054dac(param_1,&UNK_10f64fc83,FUN_10a370a8c,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a33fd58;
    FUN_10a054dac(param_1,&UNK_10f64fc9f,FUN_10a370e60,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a33fd58;
    FUN_10a054dac(param_1,&UNK_10f64fcb7,FUN_10a371010,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a33fd58;
    FUN_10a054dac(param_1,&UNK_10f64fccd,FUN_10a371574,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a33fd58;
    FUN_10a054dac(param_1,&UNK_10f64fceb,FUN_10a3717fc,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a33fd58;
    FUN_10a054dac(param_1,&UNK_10f64fd00,FUN_10a371bf4,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a33fd58;
    FUN_10a054dac(param_1,&UNK_10f64fd14,FUN_10a3721b0,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a33fd58;
    FUN_10a054dac(param_1,&UNK_10f64fd27,FUN_10a372740,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a33fd58;
    FUN_10a054dac(param_1,&UNK_10f64fd4c,FUN_10a372cd0,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a33fd58;
    FUN_10a054dac(param_1,&UNK_10f64fd62,FUN_10a37328c,5,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a33fd58;
    FUN_10a054dac(param_1,&UNK_10f64fd6e,FUN_10a373fe4,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a33fd58;
    FUN_10a054dac(param_1,&UNK_10f64fd7a,FUN_10a374824,3,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f651220,0x17);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a33fd58:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a33fd5c);
  (*pcVar6)();
}



/* Entry: 10a33fd78; end: 10a33fe4f;  */

undefined8 * FUN_10a33fd78(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uStack_21;
  
  puVar1 = param_1;
  uVar2 = param_2;
  func_0x00010a0fda30();
  FUN_10aa7093c(param_1,param_2,puVar1,uVar2);
  FUN_10a03c0d0(param_1 + 0x1c);
  *param_1 = &PTR_DAT_110bc50b0;
  param_1[2] = &PTR_DAT_110bc5160;
  param_1[7] = &PTR_DAT_110bc51b8;
  param_1[0x1c] = &PTR_FUN_110bc51d8;
  param_1[0x20] = param_2;
  FUN_10a05a5d4(param_1 + 0x21,&uStack_21);
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0x3f800000;
  param_1[0x28] = param_1 + 0x28;
  param_1[0x29] = param_1 + 0x28;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  return param_1;
}



/* Entry: 10a33fe50; end: 10a33ff13;  */

undefined8 * FUN_10a33fe50(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 uStack_21;
  
  puVar1 = param_1;
  FUN_10aa7093c();
  FUN_10a03c0d0(puVar1 + 0x1c);
  *param_1 = &PTR_DAT_110bc50b0;
  param_1[2] = &PTR_DAT_110bc5160;
  param_1[7] = &PTR_DAT_110bc51b8;
  param_1[0x1c] = &PTR_FUN_110bc51d8;
  param_1[0x20] = param_2;
  FUN_10a05a5d4(param_1 + 0x21,&uStack_21);
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0x3f800000;
  param_1[0x28] = param_1 + 0x28;
  param_1[0x29] = param_1 + 0x28;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  return param_1;
}



/* Entry: 10a33ff14; end: 10a33ff1b;  */

void FUN_10a33ff14(long param_1,long *param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(*param_2 + 0xa8))(&uStack_38,param_2,&PTR_DAT_110c3fbe8,&UNK_10f68c0c1,0);
  if (*(char *)(param_1 + 0x6f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x60) = uStack_30;
  *(undefined8 *)(param_1 + 0x58) = uStack_38;
  *(undefined8 *)(param_1 + 0x68) = uStack_28;
  return;
}



/* Entry: 10a33ff1c; end: 10a34017f;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 **
FUN_10a33ff1c(undefined8 *param_1,undefined8 **param_2,long *param_3,long *param_4,
             undefined8 param_5)

{
  long *plVar1;
  undefined8 **ppuVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 ***pppuVar8;
  code **ppcVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 **ppuVar15;
  undefined8 **ppuVar16;
  undefined8 **ppuVar17;
  undefined8 **ppuVar18;
  undefined8 **ppuVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined8 *puStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 **ppuStack_4b0;
  undefined8 **ppuStack_4a8;
  long lStack_4a0;
  long lStack_498;
  undefined8 **ppuStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 **ppuStack_478;
  long lStack_470;
  undefined8 **ppuStack_468;
  undefined8 **ppuStack_460;
  long lStack_458;
  long lStack_450;
  undefined8 **ppuStack_448;
  undefined8 uStack_440;
  long lStack_438;
  undefined8 **ppuStack_430;
  undefined8 uStack_428;
  long lStack_420;
  undefined8 **ppuStack_418;
  undefined8 uStack_410;
  long lStack_408;
  undefined8 **ppuStack_400;
  undefined8 uStack_3f8;
  long lStack_3f0;
  undefined8 **ppuStack_3e8;
  undefined8 uStack_3e0;
  long lStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 **ppuStack_3c8;
  code *pcStack_3c0;
  undefined **ppuStack_3b8;
  undefined8 *puStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  long lStack_380;
  undefined8 **ppuStack_310;
  long lStack_308;
  long lStack_300;
  undefined8 **ppuStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  undefined8 **ppuStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  undefined1 uStack_2c8;
  undefined8 uStack_2b8;
  undefined8 *apuStack_2b0 [8];
  long *plStack_270;
  undefined8 *apuStack_260 [7];
  long lStack_228;
  long *plStack_220;
  undefined1 *puStack_218;
  undefined *puStack_210;
  undefined8 **ppuStack_208;
  undefined1 **ppuStack_200;
  code *pcStack_1f8;
  code *pcStack_1f0;
  undefined **ppuStack_1e8;
  undefined8 *puStack_1e0;
  long lStack_1b0;
  long *plStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined8 *apuStack_190 [7];
  long lStack_158;
  long *plStack_150;
  long lStack_148;
  undefined8 *apuStack_140 [7];
  long lStack_108;
  undefined8 *apuStack_100 [7];
  long lStack_c8;
  long *plStack_c0;
  long lStack_b8;
  undefined8 *apuStack_b0 [7];
  long lStack_78;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  lVar10 = *param_3;
  if (lVar10 == 0) {
    FUN_10a00946c(&UNK_10f64fd98);
  }
  else {
    lVar11 = *param_4;
    if (lVar11 != 0) {
      puVar13 = param_2[0x20];
      ppuVar15 = (undefined8 **)param_3[1];
      if (ppuVar15 != (undefined8 **)0x0) {
        ppuVar16 = ppuVar15 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
          if (bVar4) {
            *ppuVar16 = (undefined8 *)((long)*ppuVar16 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        lVar11 = *param_4;
      }
      ppuVar16 = (undefined8 **)param_4[1];
      if (ppuVar16 != (undefined8 **)0x0) {
        ppuVar17 = ppuVar16 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
          if (bVar4) {
            *ppuVar17 = (undefined8 *)((long)*ppuVar17 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppuVar17 = (undefined8 **)param_3[1];
      lVar25 = param_3[1];
      lVar22 = *param_3;
      if (ppuVar17 != (undefined8 **)0x0) {
        ppuVar19 = ppuVar17 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
          if (bVar4) {
            *ppuVar19 = (undefined8 *)((long)*ppuVar19 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppuVar19 = (undefined8 **)param_4[1];
      lVar27 = param_4[1];
      lVar26 = *param_4;
      if (ppuVar19 != (undefined8 **)0x0) {
        ppuVar18 = ppuVar19 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
          if (bVar4) {
            *ppuVar18 = (undefined8 *)((long)*ppuVar18 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *param_1 = FUN_10a376cb8;
      param_1[1] = &PTR_FUN_110bc7370;
      param_1[2] = puVar13;
      param_1[3] = lVar10;
      param_1[4] = ppuVar15;
      if (ppuVar15 != (undefined8 **)0x0) {
        ppuVar18 = ppuVar15 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
          if (bVar4) {
            *ppuVar18 = (undefined8 *)((long)*ppuVar18 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      param_1[5] = lVar11;
      param_1[6] = ppuVar16;
      if (ppuVar16 != (undefined8 **)0x0) {
        ppuVar18 = ppuVar16 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
          if (bVar4) {
            *ppuVar18 = (undefined8 *)((long)*ppuVar18 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar10 = param_4[1];
      lVar11 = *param_4;
      param_1[9] = param_4[1];
      param_1[8] = lVar11;
      if (lVar10 != 0) {
        plVar7 = (long *)(lVar10 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = *plVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      param_1[10] = FUN_10a3773b0;
      param_1[0xb] = &PTR_FUN_110bc7390;
      param_1[0xd] = lVar25;
      param_1[0xc] = lVar22;
      if (ppuVar17 != (undefined8 **)0x0) {
        ppuVar18 = ppuVar17 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
          if (bVar4) {
            *ppuVar18 = (undefined8 *)((long)*ppuVar18 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      param_1[0xf] = lVar27;
      param_1[0xe] = lVar26;
      if (ppuVar19 != (undefined8 **)0x0) {
        ppuVar18 = ppuVar19 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
          if (bVar4) {
            *ppuVar18 = (undefined8 *)((long)*ppuVar18 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        do {
          puVar13 = *ppuVar18;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
          if (bVar4) {
            *ppuVar18 = (undefined8 *)((long)puVar13 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar13 == (undefined8 *)0x0) {
          (*(code *)(*ppuVar19)[2])(ppuVar19);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar19);
          param_2 = ppuVar19;
        }
      }
      if (ppuVar17 != (undefined8 **)0x0) {
        ppuVar19 = ppuVar17 + 1;
        do {
          puVar13 = *ppuVar19;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
          if (bVar4) {
            *ppuVar19 = (undefined8 *)((long)puVar13 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar13 == (undefined8 *)0x0) {
          (*(code *)(*ppuVar17)[2])(ppuVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
          param_2 = ppuVar17;
        }
      }
      if (ppuVar16 != (undefined8 **)0x0) {
        ppuVar17 = ppuVar16 + 1;
        do {
          puVar13 = *ppuVar17;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
          if (bVar4) {
            *ppuVar17 = (undefined8 *)((long)puVar13 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar13 == (undefined8 *)0x0) {
          (*(code *)(*ppuVar16)[2])(ppuVar16);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar16);
          param_2 = ppuVar16;
        }
      }
      if (ppuVar15 != (undefined8 **)0x0) {
        ppuVar16 = ppuVar15 + 1;
        do {
          puVar13 = *ppuVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
          if (bVar4) {
            *ppuVar16 = (undefined8 *)((long)puVar13 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar13 == (undefined8 *)0x0) {
          (*(code *)(*ppuVar15)[2])(ppuVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(ppuVar15);
          return ppuVar15;
        }
      }
      return param_2;
    }
  }
  puVar6 = &UNK_10f64fdc4;
  FUN_10a00946c();
  ppcVar9 = &pcStack_1f0;
  pcStack_38 = FUN_10a340180;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = *param_4;
  puStack_40 = &stack0xfffffffffffffff0;
  (**(code **)(param_4[1] + 0x10))(apuStack_100);
  plStack_c0 = (long *)param_4[9];
  lStack_c8 = param_4[8];
  param_4[8] = 0;
  param_4[9] = 0;
  lStack_b8 = param_4[10];
  (**(code **)(param_4[0xb] + 0x10))(apuStack_b0,param_4 + 0xb);
  lStack_198 = lStack_108;
  puStack_1a0 = puVar6;
  (*(code *)apuStack_100[0][2])(apuStack_190,apuStack_100);
  plStack_150 = plStack_c0;
  lStack_158 = lStack_c8;
  if (plStack_c0 != (long *)0x0) {
    plVar7 = plStack_c0 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lStack_148 = lStack_b8;
  (*(code *)apuStack_b0[0][2])(apuStack_140,apuStack_b0);
  pcStack_1f0 = FUN_10a37f030;
  ppuStack_1e8 = &PTR_FUN_110bc7638;
  puVar13 = (undefined8 *)0x98;
  __Znwm();
  *puVar13 = puStack_1a0;
  puVar13[1] = lStack_198;
  (*(code *)apuStack_190[0][2])(puVar13 + 2,apuStack_190);
  puVar13[10] = plStack_150;
  puVar13[9] = lStack_158;
  lStack_158 = 0;
  plStack_150 = (long *)0x0;
  puVar13[0xb] = lStack_148;
  (*(code *)apuStack_140[0][2])(puVar13 + 0xc,apuStack_140);
  plStack_1a8 = plStack_c0;
  lStack_1b0 = lStack_c8;
  if (plStack_c0 != (long *)0x0) {
    plVar7 = plStack_c0 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puStack_1e0 = puVar13;
  FUN_10a341c30(puVar6);
  plVar7 = plStack_1a8;
  if (plStack_1a8 != (long *)0x0) {
    plVar1 = plStack_1a8 + 1;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  (*(code *)*ppuStack_1e8)(&ppuStack_1e8);
  (*(code *)*apuStack_140[0])(apuStack_140);
  plVar7 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    plVar1 = plStack_150 + 1;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  (*(code *)*apuStack_190[0])(apuStack_190);
  (*(code *)*apuStack_b0[0])(apuStack_b0);
  plVar7 = plStack_c0;
  if (plStack_c0 != (long *)0x0) {
    plVar1 = plStack_c0 + 1;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  ppuVar15 = apuStack_100;
  (*(code *)*apuStack_100[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return ppuVar15;
  }
  ___stack_chk_fail();
  func_0x00010a07a8a8(&lStack_1b0);
  (*(code *)*ppuStack_1e8)(&ppuStack_1e8);
  (*(code *)*apuStack_140[0])(apuStack_140);
  func_0x00010a07a8a8(&lStack_158);
  (*(code *)*apuStack_190[0])(apuStack_190);
  (*(code *)*apuStack_b0[0])(apuStack_b0);
  func_0x00010a07a8a8(&lStack_c8);
  (*(code *)*apuStack_100[0])(apuStack_100);
  ppuVar16 = ppuVar15;
  __Unwind_Resume(ppuVar15);
  pppuVar8 = &ppuStack_310;
  pcStack_1f8 = FUN_10a340494;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_220 = &lStack_108;
  puStack_210 = puVar6;
  ppuStack_208 = ppuVar15;
  ppuStack_200 = &puStack_40;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    puVar13 = (undefined8 *)0x0;
    if (param_3[1] != 0) {
      puStack_218 = (undefined1 *)&pcStack_1f0;
      func_0x000107c3192c(&ppuStack_310,*param_3);
      goto LAB_10a3404f8;
    }
LAB_10a3405ec:
    ppuVar15 = (undefined8 **)&UNK_10f64fe69;
    puStack_218 = (undefined1 *)&pcStack_1f0;
    FUN_10a00946c();
  }
  else {
    puVar13 = ppcVar9;
    if (*(char *)((long)param_3 + 0x17) == '\0') goto LAB_10a3405ec;
    lStack_308 = param_3[1];
    ppuStack_310 = (undefined8 **)*param_3;
    lStack_300 = param_3[2];
    puStack_218 = (undefined1 *)&pcStack_1f0;
LAB_10a3404f8:
    uStack_2c8 = 0;
    lStack_2d0 = 0;
    uStack_2d8 = 0;
    ppuStack_2e0 = (undefined8 **)0x0;
    lStack_2e8 = 0;
    uStack_2f0 = 0;
    ppuStack_2f8 = (undefined8 **)0x0;
    FUN_10a33ff1c(&uStack_2b8,ppuVar16,ppcVar9,param_5);
    puVar13 = &uStack_2b8;
    FUN_10a340648(ppuVar16);
    (*(code *)*apuStack_260[0])(apuStack_260);
    if (plStack_270 != (long *)0x0) {
      plVar7 = plStack_270 + 1;
      do {
        lVar10 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_270 + 0x10))(plStack_270);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_270);
      }
    }
    ppuVar15 = apuStack_2b0;
    (*(code *)*apuStack_2b0[0])();
    param_3 = (long *)pppuVar8;
    if (lStack_2d0 < 0) {
      ppuVar15 = ppuStack_2e0;
      __ZdlPv();
      param_3 = (long *)pppuVar8;
    }
    if (lStack_2e8 < 0) {
      ppuVar15 = ppuStack_2f8;
      __ZdlPv();
    }
    if (lStack_300 < 0) {
      ppuVar15 = ppuStack_310;
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
      return ppuVar15;
    }
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_380 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = param_3;
  FUN_10ad015f0(param_3,0x8000);
  if ((int)plVar7 == 0) {
    ppuVar16 = ppuVar15 + 0x23;
    FUN_10a37f300(ppuVar16,param_3,param_3);
    puVar20 = ppuVar16[6];
    if (puVar20 < ppuVar16[7]) {
      *puVar20 = *puVar13;
      (**(code **)(puVar13[1] + 0x10))(puVar20 + 1);
      uVar23 = puVar13[8];
      puVar20[9] = puVar13[9];
      puVar20[8] = uVar23;
      puVar13[8] = 0;
      puVar13[9] = 0;
      puVar20[10] = puVar13[10];
      ppuVar17 = (undefined8 **)(puVar20 + 0xb);
      (**(code **)(puVar13[0xb] + 0x10))(ppuVar17,puVar13 + 0xb);
      puVar20 = puVar20 + 0x12;
LAB_10a340904:
      ppuVar16[6] = puVar20;
      if ((ulong)(((long)puVar20 - (long)ppuVar16[5] >> 4) * -0x71c71c71c71c71c7) < 2) {
        plVar7 = *(long **)(ppuVar15[0x20][0x20] + 0x1c8);
        (**(code **)(*plVar7 + 0x18))();
        puStack_3d0 = (undefined8 *)0x0;
        ppuStack_3c8 = (undefined8 **)0x0;
        ppuVar19 = (undefined8 **)plVar7[1];
        if (((ppuVar19 == (undefined8 **)0x0) ||
            (__ZNSt3__119__shared_weak_count4lockEv(), ppuStack_3c8 = ppuVar19,
            ppuVar19 == (undefined8 **)0x0)) ||
           (puVar13 = (undefined8 *)*plVar7, puStack_3d0 = puVar13, puVar13 == (undefined8 *)0x0)) {
          ppuVar19 = ppuStack_3c8;
          if (ppuVar16[6] == ppuVar16[5]) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10a340c3c);
            (*pcVar5)();
          }
          puVar13 = (undefined8 *)ppuVar16[5][8];
          func_0x000107c2b054(&uStack_480,&UNK_10f64fed1);
          if ((puVar13 == (undefined8 *)0x0) || (*(char *)(puVar13 + 8) != '\x02')) {
            if ((puVar13 != (undefined8 *)0x0) && (*(char *)(puVar13 + 8) == '\x01')) {
              (*(code *)*puVar13)(&uStack_480,puVar13);
            }
          }
          else {
            FUN_10a05aad0(puVar13,&uStack_480);
          }
          if (lStack_470 < 0) {
            __ZdlPv(CONCAT44(uStack_480._4_4_,(undefined4)uStack_480));
          }
          ppuVar17 = ppuVar16 + 5;
          FUN_10a352278(ppuVar17,ppuVar16[5]);
          if (ppuVar19 == (undefined8 **)0x0) goto LAB_10a340c00;
        }
        else {
          ppuVar16 = ppuVar19;
          __ZNSt3__16chrono12steady_clock3nowEv();
          lStack_3d8 = 0;
          uStack_3e0 = 0;
          ppuStack_3e8 = (undefined8 **)0x0;
          lStack_3f0 = 0;
          uStack_3f8 = 0;
          ppuStack_400 = (undefined8 **)0x0;
          lStack_408 = 0;
          uStack_410 = 0;
          ppuStack_418 = (undefined8 **)0x0;
          lStack_420 = 0;
          uStack_428 = 0;
          ppuStack_430 = (undefined8 **)0x0;
          lStack_438 = 0;
          uStack_440 = 0;
          ppuStack_448 = (undefined8 **)0x0;
          lStack_450 = 0;
          lStack_458 = 0;
          ppuStack_460 = (undefined8 **)0x0;
          ppuStack_468 = (undefined8 **)0x0;
          lStack_470 = 0;
          ppuStack_478 = (undefined8 **)0x0;
          uStack_480._0_4_ = 6;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (&ppuStack_478,param_3);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (&ppuStack_448,ppuVar15[0x20][0x20] + 0x208);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (&ppuStack_400,param_3);
          uVar12 = param_3[4];
          if (-1 < (char)*(byte *)((long)param_3 + 0x2f)) {
            uVar12 = (ulong)*(byte *)((long)param_3 + 0x2f);
          }
          if (uVar12 != 0) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (&ppuStack_430,param_3 + 3);
          }
          uVar12 = param_3[7];
          if (-1 < (char)*(byte *)((long)param_3 + 0x47)) {
            uVar12 = (ulong)*(byte *)((long)param_3 + 0x47);
          }
          if (uVar12 != 0) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (&ppuStack_418,param_3 + 6);
          }
          ppuStack_4b0 = ppuVar15;
          if (*(char *)((long)param_3 + 0x17) < '\0') {
            func_0x000107c3192c(&ppuStack_4a8,*param_3,param_3[1]);
          }
          else {
            lStack_4a0 = param_3[1];
            ppuStack_4a8 = (undefined8 **)*param_3;
            lStack_498 = param_3[2];
          }
          uStack_488 = 0;
          ppuStack_490 = ppuVar16;
          FUN_10a341fc4(&puStack_4c8,ppuVar15[0x21],&ppuStack_4b0);
          pcStack_3c0 = FUN_10a37f750;
          ppuStack_3b8 = &PTR_FUN_110bc7658;
          puStack_3b0 = puStack_4c8;
          uStack_3a0 = uStack_4b8;
          uStack_3a8 = uStack_4c0;
          uStack_4c0 = 0;
          uStack_4b8 = 0;
          (**(code **)*puVar13)(puVar13,&uStack_480,&pcStack_3c0);
          (*(code *)*ppuStack_3b8)(&ppuStack_3b8);
          ppuVar17 = &puStack_4c8;
          FUN_10a342184();
          if (lStack_498 < 0) {
            ppuVar17 = ppuStack_4a8;
            __ZdlPv();
          }
          if (lStack_3d8 < 0) {
            ppuVar17 = ppuStack_3e8;
            __ZdlPv();
          }
          if (lStack_3f0 < 0) {
            ppuVar17 = ppuStack_400;
            __ZdlPv();
          }
          if (lStack_408 < 0) {
            ppuVar17 = ppuStack_418;
            __ZdlPv();
          }
          if (lStack_420 < 0) {
            ppuVar17 = ppuStack_430;
            __ZdlPv();
          }
          if (lStack_438 < 0) {
            ppuVar17 = ppuStack_448;
            __ZdlPv();
          }
          if (lStack_450 < 0) {
            ppuVar17 = ppuStack_460;
            __ZdlPv();
          }
          if ((long)ppuStack_468 < 0) {
            ppuVar17 = ppuStack_478;
            __ZdlPv();
          }
        }
        ppuVar15 = ppuVar19 + 1;
        do {
          puVar13 = *ppuVar15;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
          if (bVar4) {
            *ppuVar15 = (undefined8 *)((long)puVar13 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar13 == (undefined8 *)0x0) {
          (*(code *)(*ppuVar19)[2])(ppuVar19);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar17 = ppuVar19;
        }
      }
      goto LAB_10a340c00;
    }
    lVar10 = (long)puVar20 - (long)ppuVar16[5];
    uVar12 = (lVar10 >> 4) * -0x71c71c71c71c71c7 + 1;
    if (uVar12 < 0x1c71c71c71c71c8) {
      lVar11 = (long)ppuVar16[7] - (long)ppuVar16[5] >> 4;
      uVar14 = lVar11 * 0x1c71c71c71c71c72;
      if (uVar14 < uVar12 || uVar14 - uVar12 == 0) {
        uVar14 = uVar12;
      }
      if (0xe38e38e38e38e2 < (ulong)(lVar11 * -0x71c71c71c71c71c7)) {
        uVar14 = 0x1c71c71c71c71c7;
      }
      if (0x1c71c71c71c71c7 < uVar14) goto LAB_10a340c44;
      lVar11 = uVar14 * 0x90;
      __Znwm();
      puVar20 = (undefined8 *)(lVar11 + lVar10);
      *puVar20 = *puVar13;
      (**(code **)(puVar13[1] + 0x10))(puVar20 + 1);
      lVar10 = puVar13[0xb];
      uVar23 = puVar13[8];
      puVar20[9] = puVar13[9];
      puVar20[8] = uVar23;
      puVar13[8] = 0;
      puVar13[9] = 0;
      puVar20[10] = puVar13[10];
      ppuVar17 = (undefined8 **)(puVar20 + 0xb);
      (**(code **)(lVar10 + 0x10))(ppuVar17,puVar13 + 0xb);
      ppuVar18 = (undefined8 **)ppuVar16[5];
      ppuVar2 = (undefined8 **)ppuVar16[6];
      puVar13 = (undefined8 *)((long)puVar20 + ((long)ppuVar18 - (long)ppuVar2));
      ppuVar19 = ppuVar18;
      puVar21 = puVar13;
      if (ppuVar2 != ppuVar18) {
        do {
          *puVar21 = *ppuVar19;
          (*(code *)ppuVar19[1][2])(puVar21 + 1);
          puVar24 = ppuVar19[8];
          puVar21[9] = ppuVar19[9];
          puVar21[8] = puVar24;
          ppuVar19[8] = (undefined8 *)0x0;
          ppuVar19[9] = (undefined8 *)0x0;
          puVar21[10] = ppuVar19[10];
          (*(code *)ppuVar19[0xb][2])(puVar21 + 0xb,ppuVar19 + 0xb);
          ppuVar19 = ppuVar19 + 0x12;
          puVar21 = puVar21 + 0x12;
        } while (ppuVar19 != ppuVar2);
        ppuVar18 = ppuVar18 + 0xb;
        do {
          (*(code *)**ppuVar18)(ppuVar18);
          func_0x00010a07a8a8(ppuVar18 + -3);
          ppuVar17 = ppuVar18 + -10;
          (*(code *)**ppuVar17)();
          ppuVar19 = ppuVar18 + 7;
          ppuVar18 = ppuVar18 + 0x12;
        } while (ppuVar19 != ppuVar2);
        ppuVar18 = (undefined8 **)ppuVar16[5];
      }
      puVar20 = puVar20 + 0x12;
      ppuVar16[5] = puVar13;
      ppuVar16[6] = puVar20;
      ppuVar16[7] = (undefined8 *)(lVar11 + uVar14 * 0x90);
      if (ppuVar18 != (undefined8 **)0x0) {
        __ZdlPv();
        ppuVar17 = ppuVar18;
      }
      goto LAB_10a340904;
    }
  }
  else {
    FUN_10a0ff18c(&uStack_480,param_3,2);
    ppuVar17 = (undefined8 **)&uStack_480;
    (*(code *)*puVar13)(ppuVar17,0,(char)param_3[9],puVar13);
    if (lStack_458 < 0) {
      ppuVar17 = ppuStack_468;
      __ZdlPv();
    }
    if (lStack_470 < 0) {
      ppuVar17 = (undefined8 **)CONCAT44(uStack_480._4_4_,(undefined4)uStack_480);
      __ZdlPv();
    }
LAB_10a340c00:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_380) {
      return ppuVar17;
    }
    ___stack_chk_fail();
    ppuVar16 = ppuVar17;
  }
  FUN_10a35220c();
LAB_10a340c44:
  func_0x000109ffded8();
  FUN_10a23298c(&uStack_480);
  func_0x00010a23a4e4(&puStack_3d0);
  __Unwind_Resume();
  if (*(char *)((long)ppuVar16 + 0x47) < '\0') {
    __ZdlPv(ppuVar16[6]);
  }
  if (*(char *)((long)ppuVar16 + 0x2f) < '\0') {
    __ZdlPv(ppuVar16[3]);
  }
  if (*(char *)((long)ppuVar16 + 0x17) < '\0') {
    __ZdlPv(*ppuVar16);
  }
  return ppuVar16;
}



/* Entry: 10a340180; end: 10a340493;  */

undefined8 **
FUN_10a340180(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 **ppuVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  undefined8 *puVar9;
  undefined8 **ppuVar10;
  long *plVar11;
  undefined8 **ppuVar12;
  undefined8 ***pppuVar13;
  code **ppcVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 **ppuVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  undefined8 *puStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 **ppuStack_480;
  undefined8 **ppuStack_478;
  undefined8 uStack_470;
  long lStack_468;
  undefined8 **ppuStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 **ppuStack_448;
  long lStack_440;
  undefined8 **ppuStack_438;
  undefined8 **ppuStack_430;
  long lStack_428;
  long lStack_420;
  undefined8 **ppuStack_418;
  undefined8 uStack_410;
  long lStack_408;
  undefined8 **ppuStack_400;
  undefined8 uStack_3f8;
  long lStack_3f0;
  undefined8 **ppuStack_3e8;
  undefined8 uStack_3e0;
  long lStack_3d8;
  undefined8 **ppuStack_3d0;
  undefined8 uStack_3c8;
  long lStack_3c0;
  undefined8 **ppuStack_3b8;
  undefined8 uStack_3b0;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 **ppuStack_398;
  code *pcStack_390;
  undefined **ppuStack_388;
  undefined8 *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  long lStack_350;
  undefined8 **ppuStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  undefined8 **ppuStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  undefined8 **ppuStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  undefined1 uStack_298;
  undefined8 uStack_288;
  undefined8 *apuStack_280 [8];
  long *plStack_240;
  undefined8 *apuStack_230 [7];
  long lStack_1f8;
  undefined8 *puStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 **ppuStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  code *pcStack_1c0;
  undefined **ppuStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_180;
  long *plStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 *apuStack_160 [7];
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 *apuStack_110 [7];
  undefined8 uStack_d8;
  undefined8 *apuStack_d0 [7];
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  ppcVar14 = &pcStack_1c0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_d8 = *param_3;
  (**(code **)(param_3[1] + 0x10))(apuStack_d0);
  plStack_90 = (long *)param_3[9];
  uStack_98 = param_3[8];
  param_3[8] = 0;
  param_3[9] = 0;
  uStack_88 = param_3[10];
  (**(code **)(param_3[0xb] + 0x10))(apuStack_80,param_3 + 0xb);
  uStack_168 = uStack_d8;
  uStack_170 = param_1;
  (*(code *)apuStack_d0[0][2])(apuStack_160,apuStack_d0);
  plStack_120 = plStack_90;
  uStack_128 = uStack_98;
  if (plStack_90 != (long *)0x0) {
    plVar11 = plStack_90 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = *plVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_118 = uStack_88;
  (*(code *)apuStack_80[0][2])(apuStack_110,apuStack_80);
  pcStack_1c0 = FUN_10a37f030;
  ppuStack_1b8 = &PTR_FUN_110bc7638;
  puVar6 = (undefined8 *)0x98;
  __Znwm();
  *puVar6 = uStack_170;
  puVar6[1] = uStack_168;
  (*(code *)apuStack_160[0][2])(puVar6 + 2,apuStack_160);
  puVar6[10] = plStack_120;
  puVar6[9] = uStack_128;
  uStack_128 = 0;
  plStack_120 = (long *)0x0;
  puVar6[0xb] = uStack_118;
  (*(code *)apuStack_110[0][2])(puVar6 + 0xc,apuStack_110);
  plStack_178 = plStack_90;
  uStack_180 = uStack_98;
  if (plStack_90 != (long *)0x0) {
    plVar11 = plStack_90 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = *plVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puStack_1b0 = puVar6;
  FUN_10a341c30(param_1);
  plVar11 = plStack_178;
  if (plStack_178 != (long *)0x0) {
    plVar1 = plStack_178 + 1;
    do {
      lVar15 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_178 + 0x10))(plStack_178);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  (*(code *)*ppuStack_1b8)(&ppuStack_1b8);
  (*(code *)*apuStack_110[0])(apuStack_110);
  plVar11 = plStack_120;
  if (plStack_120 != (long *)0x0) {
    plVar1 = plStack_120 + 1;
    do {
      lVar15 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_120 + 0x10))(plStack_120);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  (*(code *)*apuStack_160[0])(apuStack_160);
  (*(code *)*apuStack_80[0])(apuStack_80);
  plVar11 = plStack_90;
  if (plStack_90 != (long *)0x0) {
    plVar1 = plStack_90 + 1;
    do {
      lVar15 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  ppuVar7 = apuStack_d0;
  (*(code *)*apuStack_d0[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar7;
  }
  ___stack_chk_fail();
  func_0x00010a07a8a8(&uStack_180);
  (*(code *)*ppuStack_1b8)(&ppuStack_1b8);
  (*(code *)*apuStack_110[0])(apuStack_110);
  func_0x00010a07a8a8(&uStack_128);
  (*(code *)*apuStack_160[0])(apuStack_160);
  (*(code *)*apuStack_80[0])(apuStack_80);
  func_0x00010a07a8a8(&uStack_98);
  (*(code *)*apuStack_d0[0])(apuStack_d0);
  ppuVar8 = ppuVar7;
  __Unwind_Resume(ppuVar7);
  pppuVar13 = &ppuStack_2e0;
  pcStack_1c8 = FUN_10a340494;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1f0 = &uStack_d8;
  uStack_1e0 = param_1;
  ppuStack_1d8 = ppuVar7;
  puStack_1d0 = &stack0xfffffffffffffff0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    puVar6 = (undefined8 *)0x0;
    if (param_2[1] != 0) {
      puStack_1e8 = (undefined1 *)&pcStack_1c0;
      func_0x000107c3192c(&ppuStack_2e0,*param_2);
      goto LAB_10a3404f8;
    }
LAB_10a3405ec:
    ppuVar7 = (undefined8 **)&UNK_10f64fe69;
    puStack_1e8 = (undefined1 *)&pcStack_1c0;
    FUN_10a00946c();
  }
  else {
    puVar6 = ppcVar14;
    if (*(char *)((long)param_2 + 0x17) == '\0') goto LAB_10a3405ec;
    uStack_2d8 = param_2[1];
    ppuStack_2e0 = (undefined8 **)*param_2;
    lStack_2d0 = param_2[2];
    puStack_1e8 = (undefined1 *)&pcStack_1c0;
LAB_10a3404f8:
    uStack_298 = 0;
    lStack_2a0 = 0;
    uStack_2a8 = 0;
    ppuStack_2b0 = (undefined8 **)0x0;
    lStack_2b8 = 0;
    uStack_2c0 = 0;
    ppuStack_2c8 = (undefined8 **)0x0;
    FUN_10a33ff1c(&uStack_288,ppuVar8,ppcVar14,param_4);
    puVar6 = &uStack_288;
    FUN_10a340648(ppuVar8);
    (*(code *)*apuStack_230[0])(apuStack_230);
    if (plStack_240 != (long *)0x0) {
      plVar11 = plStack_240 + 1;
      do {
        lVar15 = *plVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_240 + 0x10))(plStack_240);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_240);
      }
    }
    ppuVar7 = apuStack_280;
    (*(code *)*apuStack_280[0])();
    param_2 = pppuVar13;
    if (lStack_2a0 < 0) {
      ppuVar7 = ppuStack_2b0;
      __ZdlPv();
      param_2 = pppuVar13;
    }
    if (lStack_2b8 < 0) {
      ppuVar7 = ppuStack_2c8;
      __ZdlPv();
    }
    if (lStack_2d0 < 0) {
      ppuVar7 = ppuStack_2e0;
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
      return ppuVar7;
    }
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_350 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_2;
  FUN_10ad015f0(param_2,0x8000);
  if ((int)puVar9 == 0) {
    ppuVar8 = ppuVar7 + 0x23;
    FUN_10a37f300(ppuVar8,param_2,param_2);
    puVar9 = ppuVar8[6];
    if (puVar9 < ppuVar8[7]) {
      *puVar9 = *puVar6;
      (**(code **)(puVar6[1] + 0x10))(puVar9 + 1);
      uVar21 = puVar6[8];
      puVar9[9] = puVar6[9];
      puVar9[8] = uVar21;
      puVar6[8] = 0;
      puVar6[9] = 0;
      puVar9[10] = puVar6[10];
      ppuVar10 = (undefined8 **)(puVar9 + 0xb);
      (**(code **)(puVar6[0xb] + 0x10))(ppuVar10,puVar6 + 0xb);
      puVar9 = puVar9 + 0x12;
LAB_10a340904:
      ppuVar8[6] = puVar9;
      if ((ulong)(((long)puVar9 - (long)ppuVar8[5] >> 4) * -0x71c71c71c71c71c7) < 2) {
        plVar11 = *(long **)(ppuVar7[0x20][0x20] + 0x1c8);
        (**(code **)(*plVar11 + 0x18))();
        puStack_3a0 = (undefined8 *)0x0;
        ppuStack_398 = (undefined8 **)0x0;
        ppuVar12 = (undefined8 **)plVar11[1];
        if (((ppuVar12 == (undefined8 **)0x0) ||
            (__ZNSt3__119__shared_weak_count4lockEv(), ppuStack_398 = ppuVar12,
            ppuVar12 == (undefined8 **)0x0)) ||
           (puVar6 = (undefined8 *)*plVar11, puStack_3a0 = puVar6, puVar6 == (undefined8 *)0x0)) {
          ppuVar12 = ppuStack_398;
          if (ppuVar8[6] == ppuVar8[5]) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10a340c3c);
            (*pcVar5)();
          }
          puVar6 = (undefined8 *)ppuVar8[5][8];
          func_0x000107c2b054(&uStack_450,&UNK_10f64fed1);
          if ((puVar6 == (undefined8 *)0x0) || (*(char *)(puVar6 + 8) != '\x02')) {
            if ((puVar6 != (undefined8 *)0x0) && (*(char *)(puVar6 + 8) == '\x01')) {
              (*(code *)*puVar6)(&uStack_450,puVar6);
            }
          }
          else {
            FUN_10a05aad0(puVar6,&uStack_450);
          }
          if (lStack_440 < 0) {
            __ZdlPv(CONCAT44(uStack_450._4_4_,(undefined4)uStack_450));
          }
          ppuVar10 = ppuVar8 + 5;
          FUN_10a352278(ppuVar10,ppuVar8[5]);
          if (ppuVar12 == (undefined8 **)0x0) goto LAB_10a340c00;
        }
        else {
          ppuVar8 = ppuVar12;
          __ZNSt3__16chrono12steady_clock3nowEv();
          lStack_3a8 = 0;
          uStack_3b0 = 0;
          ppuStack_3b8 = (undefined8 **)0x0;
          lStack_3c0 = 0;
          uStack_3c8 = 0;
          ppuStack_3d0 = (undefined8 **)0x0;
          lStack_3d8 = 0;
          uStack_3e0 = 0;
          ppuStack_3e8 = (undefined8 **)0x0;
          lStack_3f0 = 0;
          uStack_3f8 = 0;
          ppuStack_400 = (undefined8 **)0x0;
          lStack_408 = 0;
          uStack_410 = 0;
          ppuStack_418 = (undefined8 **)0x0;
          lStack_420 = 0;
          lStack_428 = 0;
          ppuStack_430 = (undefined8 **)0x0;
          ppuStack_438 = (undefined8 **)0x0;
          lStack_440 = 0;
          ppuStack_448 = (undefined8 **)0x0;
          uStack_450._0_4_ = 6;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (&ppuStack_448,param_2);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (&ppuStack_418,ppuVar7[0x20][0x20] + 0x208);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (&ppuStack_3d0,param_2);
          uVar17 = param_2[4];
          if (-1 < (char)*(byte *)((long)param_2 + 0x2f)) {
            uVar17 = (ulong)*(byte *)((long)param_2 + 0x2f);
          }
          if (uVar17 != 0) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (&ppuStack_400,param_2 + 3);
          }
          uVar17 = param_2[7];
          if (-1 < (char)*(byte *)((long)param_2 + 0x47)) {
            uVar17 = (ulong)*(byte *)((long)param_2 + 0x47);
          }
          if (uVar17 != 0) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (&ppuStack_3e8,param_2 + 6);
          }
          ppuStack_480 = ppuVar7;
          if (*(char *)((long)param_2 + 0x17) < '\0') {
            func_0x000107c3192c(&ppuStack_478,*param_2,param_2[1]);
          }
          else {
            uStack_470 = param_2[1];
            ppuStack_478 = (undefined8 **)*param_2;
            lStack_468 = param_2[2];
          }
          uStack_458 = 0;
          ppuStack_460 = ppuVar8;
          FUN_10a341fc4(&puStack_498,ppuVar7[0x21],&ppuStack_480);
          pcStack_390 = FUN_10a37f750;
          ppuStack_388 = &PTR_FUN_110bc7658;
          puStack_380 = puStack_498;
          uStack_370 = uStack_488;
          uStack_378 = uStack_490;
          uStack_490 = 0;
          uStack_488 = 0;
          (**(code **)*puVar6)(puVar6,&uStack_450,&pcStack_390);
          (*(code *)*ppuStack_388)(&ppuStack_388);
          ppuVar10 = &puStack_498;
          FUN_10a342184();
          if (lStack_468 < 0) {
            ppuVar10 = ppuStack_478;
            __ZdlPv();
          }
          if (lStack_3a8 < 0) {
            ppuVar10 = ppuStack_3b8;
            __ZdlPv();
          }
          if (lStack_3c0 < 0) {
            ppuVar10 = ppuStack_3d0;
            __ZdlPv();
          }
          if (lStack_3d8 < 0) {
            ppuVar10 = ppuStack_3e8;
            __ZdlPv();
          }
          if (lStack_3f0 < 0) {
            ppuVar10 = ppuStack_400;
            __ZdlPv();
          }
          if (lStack_408 < 0) {
            ppuVar10 = ppuStack_418;
            __ZdlPv();
          }
          if (lStack_420 < 0) {
            ppuVar10 = ppuStack_430;
            __ZdlPv();
          }
          if ((long)ppuStack_438 < 0) {
            ppuVar10 = ppuStack_448;
            __ZdlPv();
          }
        }
        ppuVar7 = ppuVar12 + 1;
        do {
          puVar6 = *ppuVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
          if (bVar4) {
            *ppuVar7 = (undefined8 *)((long)puVar6 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar6 == (undefined8 *)0x0) {
          (*(code *)(*ppuVar12)[2])(ppuVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar10 = ppuVar12;
        }
      }
      goto LAB_10a340c00;
    }
    lVar15 = (long)puVar9 - (long)ppuVar8[5];
    uVar17 = (lVar15 >> 4) * -0x71c71c71c71c71c7 + 1;
    if (uVar17 < 0x1c71c71c71c71c8) {
      lVar16 = (long)ppuVar8[7] - (long)ppuVar8[5] >> 4;
      uVar18 = lVar16 * 0x1c71c71c71c71c72;
      if (uVar18 < uVar17 || uVar18 - uVar17 == 0) {
        uVar18 = uVar17;
      }
      if (0xe38e38e38e38e2 < (ulong)(lVar16 * -0x71c71c71c71c71c7)) {
        uVar18 = 0x1c71c71c71c71c7;
      }
      if (0x1c71c71c71c71c7 < uVar18) goto LAB_10a340c44;
      lVar16 = uVar18 * 0x90;
      __Znwm();
      puVar9 = (undefined8 *)(lVar16 + lVar15);
      *puVar9 = *puVar6;
      (**(code **)(puVar6[1] + 0x10))(puVar9 + 1);
      lVar15 = puVar6[0xb];
      uVar21 = puVar6[8];
      puVar9[9] = puVar6[9];
      puVar9[8] = uVar21;
      puVar6[8] = 0;
      puVar6[9] = 0;
      puVar9[10] = puVar6[10];
      ppuVar10 = (undefined8 **)(puVar9 + 0xb);
      (**(code **)(lVar15 + 0x10))(ppuVar10,puVar6 + 0xb);
      ppuVar19 = (undefined8 **)ppuVar8[5];
      ppuVar2 = (undefined8 **)ppuVar8[6];
      puVar6 = (undefined8 *)((long)puVar9 + ((long)ppuVar19 - (long)ppuVar2));
      ppuVar12 = ppuVar19;
      puVar20 = puVar6;
      if (ppuVar2 != ppuVar19) {
        do {
          *puVar20 = *ppuVar12;
          (*(code *)ppuVar12[1][2])(puVar20 + 1);
          puVar22 = ppuVar12[8];
          puVar20[9] = ppuVar12[9];
          puVar20[8] = puVar22;
          ppuVar12[8] = (undefined8 *)0x0;
          ppuVar12[9] = (undefined8 *)0x0;
          puVar20[10] = ppuVar12[10];
          (*(code *)ppuVar12[0xb][2])(puVar20 + 0xb,ppuVar12 + 0xb);
          ppuVar12 = ppuVar12 + 0x12;
          puVar20 = puVar20 + 0x12;
        } while (ppuVar12 != ppuVar2);
        ppuVar19 = ppuVar19 + 0xb;
        do {
          (*(code *)**ppuVar19)(ppuVar19);
          func_0x00010a07a8a8(ppuVar19 + -3);
          ppuVar10 = ppuVar19 + -10;
          (*(code *)**ppuVar10)();
          ppuVar12 = ppuVar19 + 7;
          ppuVar19 = ppuVar19 + 0x12;
        } while (ppuVar12 != ppuVar2);
        ppuVar19 = (undefined8 **)ppuVar8[5];
      }
      puVar9 = puVar9 + 0x12;
      ppuVar8[5] = puVar6;
      ppuVar8[6] = puVar9;
      ppuVar8[7] = (undefined8 *)(lVar16 + uVar18 * 0x90);
      if (ppuVar19 != (undefined8 **)0x0) {
        __ZdlPv();
        ppuVar10 = ppuVar19;
      }
      goto LAB_10a340904;
    }
  }
  else {
    FUN_10a0ff18c(&uStack_450,param_2,2);
    ppuVar10 = (undefined8 **)&uStack_450;
    (*(code *)*puVar6)(ppuVar10,0,*(undefined1 *)(param_2 + 9),puVar6);
    if (lStack_428 < 0) {
      ppuVar10 = ppuStack_438;
      __ZdlPv();
    }
    if (lStack_440 < 0) {
      ppuVar10 = (undefined8 **)CONCAT44(uStack_450._4_4_,(undefined4)uStack_450);
      __ZdlPv();
    }
LAB_10a340c00:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_350) {
      return ppuVar10;
    }
    ___stack_chk_fail();
    ppuVar8 = ppuVar10;
  }
  FUN_10a35220c();
LAB_10a340c44:
  func_0x000109ffded8();
  FUN_10a23298c(&uStack_450);
  func_0x00010a23a4e4(&puStack_3a0);
  __Unwind_Resume();
  if (*(char *)((long)ppuVar8 + 0x47) < '\0') {
    __ZdlPv(ppuVar8[6]);
  }
  if (*(char *)((long)ppuVar8 + 0x2f) < '\0') {
    __ZdlPv(ppuVar8[3]);
  }
  if (*(char *)((long)ppuVar8 + 0x17) < '\0') {
    __ZdlPv(*ppuVar8);
  }
  return ppuVar8;
}



/* Entry: 10a340494; end: 10a340647;  */

undefined8 **
FUN_10a340494(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 **ppuVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  long *plVar9;
  undefined8 **ppuVar10;
  undefined8 ***pppuVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 **ppuVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 **ppuStack_2c0;
  undefined8 **ppuStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  undefined8 **ppuStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 **ppuStack_288;
  long lStack_280;
  undefined8 **ppuStack_278;
  undefined8 **ppuStack_270;
  long lStack_268;
  long lStack_260;
  undefined8 **ppuStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 **ppuStack_240;
  undefined8 uStack_238;
  long lStack_230;
  undefined8 **ppuStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 **ppuStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined8 **ppuStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 **ppuStack_1d8;
  code *pcStack_1d0;
  undefined **ppuStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_190;
  undefined8 **ppuStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 **ppuStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 **ppuStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined1 uStack_d8;
  undefined8 uStack_c8;
  undefined8 *apuStack_c0 [8];
  long *plStack_80;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  pppuVar11 = &ppuStack_120;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    puVar17 = (undefined8 *)0x0;
    if (param_2[1] != 0) {
      func_0x000107c3192c(&ppuStack_120,*param_2);
      goto LAB_10a3404f8;
    }
LAB_10a3405ec:
    ppuVar5 = (undefined8 **)&UNK_10f64fe69;
    FUN_10a00946c();
  }
  else {
    puVar17 = param_3;
    if (*(char *)((long)param_2 + 0x17) == '\0') goto LAB_10a3405ec;
    uStack_118 = param_2[1];
    ppuStack_120 = (undefined8 **)*param_2;
    lStack_110 = param_2[2];
LAB_10a3404f8:
    uStack_d8 = 0;
    lStack_e0 = 0;
    uStack_e8 = 0;
    ppuStack_f0 = (undefined8 **)0x0;
    lStack_f8 = 0;
    uStack_100 = 0;
    ppuStack_108 = (undefined8 **)0x0;
    FUN_10a33ff1c(&uStack_c8,param_1,param_3,param_4);
    puVar17 = &uStack_c8;
    FUN_10a340648(param_1);
    (*(code *)*apuStack_70[0])(apuStack_70);
    if (plStack_80 != (long *)0x0) {
      plVar9 = plStack_80 + 1;
      do {
        lVar12 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
      }
    }
    ppuVar5 = apuStack_c0;
    (*(code *)*apuStack_c0[0])();
    param_2 = pppuVar11;
    if (lStack_e0 < 0) {
      ppuVar5 = ppuStack_f0;
      __ZdlPv();
      param_2 = pppuVar11;
    }
    if (lStack_f8 < 0) {
      ppuVar5 = ppuStack_108;
      __ZdlPv();
    }
    if (lStack_110 < 0) {
      ppuVar5 = ppuStack_120;
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return ppuVar5;
    }
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_2;
  FUN_10ad015f0(param_2,0x8000);
  if ((int)puVar6 == 0) {
    ppuVar7 = ppuVar5 + 0x23;
    FUN_10a37f300(ppuVar7,param_2,param_2);
    puVar6 = ppuVar7[6];
    if (puVar6 < ppuVar7[7]) {
      *puVar6 = *puVar17;
      (**(code **)(puVar17[1] + 0x10))(puVar6 + 1);
      uVar19 = puVar17[8];
      puVar6[9] = puVar17[9];
      puVar6[8] = uVar19;
      puVar17[8] = 0;
      puVar17[9] = 0;
      puVar6[10] = puVar17[10];
      ppuVar8 = (undefined8 **)(puVar6 + 0xb);
      (**(code **)(puVar17[0xb] + 0x10))(ppuVar8,puVar17 + 0xb);
      puVar6 = puVar6 + 0x12;
LAB_10a340904:
      ppuVar7[6] = puVar6;
      if ((ulong)(((long)puVar6 - (long)ppuVar7[5] >> 4) * -0x71c71c71c71c71c7) < 2) {
        plVar9 = *(long **)(ppuVar5[0x20][0x20] + 0x1c8);
        (**(code **)(*plVar9 + 0x18))();
        puStack_1e0 = (undefined8 *)0x0;
        ppuStack_1d8 = (undefined8 **)0x0;
        ppuVar10 = (undefined8 **)plVar9[1];
        if (((ppuVar10 == (undefined8 **)0x0) ||
            (__ZNSt3__119__shared_weak_count4lockEv(), ppuStack_1d8 = ppuVar10,
            ppuVar10 == (undefined8 **)0x0)) ||
           (puVar17 = (undefined8 *)*plVar9, puStack_1e0 = puVar17, puVar17 == (undefined8 *)0x0)) {
          ppuVar10 = ppuStack_1d8;
          if (ppuVar7[6] == ppuVar7[5]) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10a340c3c);
            (*pcVar4)();
          }
          puVar17 = (undefined8 *)ppuVar7[5][8];
          func_0x000107c2b054(&uStack_290,&UNK_10f64fed1);
          if ((puVar17 == (undefined8 *)0x0) || (*(char *)(puVar17 + 8) != '\x02')) {
            if ((puVar17 != (undefined8 *)0x0) && (*(char *)(puVar17 + 8) == '\x01')) {
              (*(code *)*puVar17)(&uStack_290,puVar17);
            }
          }
          else {
            FUN_10a05aad0(puVar17,&uStack_290);
          }
          if (lStack_280 < 0) {
            __ZdlPv(CONCAT44(uStack_290._4_4_,(undefined4)uStack_290));
          }
          ppuVar8 = ppuVar7 + 5;
          FUN_10a352278(ppuVar8,ppuVar7[5]);
          if (ppuVar10 == (undefined8 **)0x0) goto LAB_10a340c00;
        }
        else {
          ppuVar7 = ppuVar10;
          __ZNSt3__16chrono12steady_clock3nowEv();
          lStack_1e8 = 0;
          uStack_1f0 = 0;
          ppuStack_1f8 = (undefined8 **)0x0;
          lStack_200 = 0;
          uStack_208 = 0;
          ppuStack_210 = (undefined8 **)0x0;
          lStack_218 = 0;
          uStack_220 = 0;
          ppuStack_228 = (undefined8 **)0x0;
          lStack_230 = 0;
          uStack_238 = 0;
          ppuStack_240 = (undefined8 **)0x0;
          lStack_248 = 0;
          uStack_250 = 0;
          ppuStack_258 = (undefined8 **)0x0;
          lStack_260 = 0;
          lStack_268 = 0;
          ppuStack_270 = (undefined8 **)0x0;
          ppuStack_278 = (undefined8 **)0x0;
          lStack_280 = 0;
          ppuStack_288 = (undefined8 **)0x0;
          uStack_290._0_4_ = 6;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (&ppuStack_288,param_2);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (&ppuStack_258,ppuVar5[0x20][0x20] + 0x208);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (&ppuStack_210,param_2);
          uVar14 = param_2[4];
          if (-1 < (char)*(byte *)((long)param_2 + 0x2f)) {
            uVar14 = (ulong)*(byte *)((long)param_2 + 0x2f);
          }
          if (uVar14 != 0) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (&ppuStack_240,param_2 + 3);
          }
          uVar14 = param_2[7];
          if (-1 < (char)*(byte *)((long)param_2 + 0x47)) {
            uVar14 = (ulong)*(byte *)((long)param_2 + 0x47);
          }
          if (uVar14 != 0) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (&ppuStack_228,param_2 + 6);
          }
          ppuStack_2c0 = ppuVar5;
          if (*(char *)((long)param_2 + 0x17) < '\0') {
            func_0x000107c3192c(&ppuStack_2b8,*param_2,param_2[1]);
          }
          else {
            uStack_2b0 = param_2[1];
            ppuStack_2b8 = (undefined8 **)*param_2;
            lStack_2a8 = param_2[2];
          }
          uStack_298 = 0;
          ppuStack_2a0 = ppuVar7;
          FUN_10a341fc4(&puStack_2d8,ppuVar5[0x21],&ppuStack_2c0);
          pcStack_1d0 = FUN_10a37f750;
          ppuStack_1c8 = &PTR_FUN_110bc7658;
          puStack_1c0 = puStack_2d8;
          uStack_1b0 = uStack_2c8;
          uStack_1b8 = uStack_2d0;
          uStack_2d0 = 0;
          uStack_2c8 = 0;
          (**(code **)*puVar17)(puVar17,&uStack_290,&pcStack_1d0);
          (*(code *)*ppuStack_1c8)(&ppuStack_1c8);
          ppuVar8 = &puStack_2d8;
          FUN_10a342184();
          if (lStack_2a8 < 0) {
            ppuVar8 = ppuStack_2b8;
            __ZdlPv();
          }
          if (lStack_1e8 < 0) {
            ppuVar8 = ppuStack_1f8;
            __ZdlPv();
          }
          if (lStack_200 < 0) {
            ppuVar8 = ppuStack_210;
            __ZdlPv();
          }
          if (lStack_218 < 0) {
            ppuVar8 = ppuStack_228;
            __ZdlPv();
          }
          if (lStack_230 < 0) {
            ppuVar8 = ppuStack_240;
            __ZdlPv();
          }
          if (lStack_248 < 0) {
            ppuVar8 = ppuStack_258;
            __ZdlPv();
          }
          if (lStack_260 < 0) {
            ppuVar8 = ppuStack_270;
            __ZdlPv();
          }
          if ((long)ppuStack_278 < 0) {
            ppuVar8 = ppuStack_288;
            __ZdlPv();
          }
        }
        ppuVar5 = ppuVar10 + 1;
        do {
          puVar17 = *ppuVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
          if (bVar3) {
            *ppuVar5 = (undefined8 *)((long)puVar17 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (puVar17 == (undefined8 *)0x0) {
          (*(code *)(*ppuVar10)[2])(ppuVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar8 = ppuVar10;
        }
      }
      goto LAB_10a340c00;
    }
    lVar12 = (long)puVar6 - (long)ppuVar7[5];
    uVar14 = (lVar12 >> 4) * -0x71c71c71c71c71c7 + 1;
    if (uVar14 < 0x1c71c71c71c71c8) {
      lVar13 = (long)ppuVar7[7] - (long)ppuVar7[5] >> 4;
      uVar15 = lVar13 * 0x1c71c71c71c71c72;
      if (uVar15 < uVar14 || uVar15 - uVar14 == 0) {
        uVar15 = uVar14;
      }
      if (0xe38e38e38e38e2 < (ulong)(lVar13 * -0x71c71c71c71c71c7)) {
        uVar15 = 0x1c71c71c71c71c7;
      }
      if (0x1c71c71c71c71c7 < uVar15) goto LAB_10a340c44;
      lVar13 = uVar15 * 0x90;
      __Znwm();
      puVar6 = (undefined8 *)(lVar13 + lVar12);
      *puVar6 = *puVar17;
      (**(code **)(puVar17[1] + 0x10))(puVar6 + 1);
      lVar12 = puVar17[0xb];
      uVar19 = puVar17[8];
      puVar6[9] = puVar17[9];
      puVar6[8] = uVar19;
      puVar17[8] = 0;
      puVar17[9] = 0;
      puVar6[10] = puVar17[10];
      ppuVar8 = (undefined8 **)(puVar6 + 0xb);
      (**(code **)(lVar12 + 0x10))(ppuVar8,puVar17 + 0xb);
      ppuVar16 = (undefined8 **)ppuVar7[5];
      ppuVar1 = (undefined8 **)ppuVar7[6];
      puVar17 = (undefined8 *)((long)puVar6 + ((long)ppuVar16 - (long)ppuVar1));
      ppuVar10 = ppuVar16;
      puVar18 = puVar17;
      if (ppuVar1 != ppuVar16) {
        do {
          *puVar18 = *ppuVar10;
          (*(code *)ppuVar10[1][2])(puVar18 + 1);
          puVar20 = ppuVar10[8];
          puVar18[9] = ppuVar10[9];
          puVar18[8] = puVar20;
          ppuVar10[8] = (undefined8 *)0x0;
          ppuVar10[9] = (undefined8 *)0x0;
          puVar18[10] = ppuVar10[10];
          (*(code *)ppuVar10[0xb][2])(puVar18 + 0xb,ppuVar10 + 0xb);
          ppuVar10 = ppuVar10 + 0x12;
          puVar18 = puVar18 + 0x12;
        } while (ppuVar10 != ppuVar1);
        ppuVar16 = ppuVar16 + 0xb;
        do {
          (*(code *)**ppuVar16)(ppuVar16);
          func_0x00010a07a8a8(ppuVar16 + -3);
          ppuVar8 = ppuVar16 + -10;
          (*(code *)**ppuVar8)();
          ppuVar10 = ppuVar16 + 7;
          ppuVar16 = ppuVar16 + 0x12;
        } while (ppuVar10 != ppuVar1);
        ppuVar16 = (undefined8 **)ppuVar7[5];
      }
      puVar6 = puVar6 + 0x12;
      ppuVar7[5] = puVar17;
      ppuVar7[6] = puVar6;
      ppuVar7[7] = (undefined8 *)(lVar13 + uVar15 * 0x90);
      if (ppuVar16 != (undefined8 **)0x0) {
        __ZdlPv();
        ppuVar8 = ppuVar16;
      }
      goto LAB_10a340904;
    }
  }
  else {
    FUN_10a0ff18c(&uStack_290,param_2,2);
    ppuVar8 = (undefined8 **)&uStack_290;
    (*(code *)*puVar17)(ppuVar8,0,*(undefined1 *)(param_2 + 9),puVar17);
    if (lStack_268 < 0) {
      ppuVar8 = ppuStack_278;
      __ZdlPv();
    }
    if (lStack_280 < 0) {
      ppuVar8 = (undefined8 **)CONCAT44(uStack_290._4_4_,(undefined4)uStack_290);
      __ZdlPv();
    }
LAB_10a340c00:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_190) {
      return ppuVar8;
    }
    ___stack_chk_fail();
    ppuVar7 = ppuVar8;
  }
  FUN_10a35220c();
LAB_10a340c44:
  func_0x000109ffded8();
  FUN_10a23298c(&uStack_290);
  func_0x00010a23a4e4(&puStack_1e0);
  __Unwind_Resume();
  if (*(char *)((long)ppuVar7 + 0x47) < '\0') {
    __ZdlPv(ppuVar7[6]);
  }
  if (*(char *)((long)ppuVar7 + 0x2f) < '\0') {
    __ZdlPv(ppuVar7[3]);
  }
  if (*(char *)((long)ppuVar7 + 0x17) < '\0') {
    __ZdlPv(*ppuVar7);
  }
  return ppuVar7;
}



/* Entry: 10a340648; end: 10a340cd7;  */

long * FUN_10a340648(long param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 uVar16;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  long *plStack_198;
  long lStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long *plStack_168;
  long lStack_160;
  long *plStack_158;
  long *plStack_150;
  long lStack_148;
  long lStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 *puStack_c0;
  long *plStack_b8;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = param_2;
  FUN_10ad015f0(param_2,0x8000);
  if ((int)plVar6 == 0) {
    plVar6 = (long *)(param_1 + 0x118);
    FUN_10a37f300(plVar6,param_2,param_2);
    puVar14 = (undefined8 *)plVar6[6];
    if (puVar14 < (undefined8 *)plVar6[7]) {
      *puVar14 = *param_3;
      (**(code **)(param_3[1] + 0x10))(puVar14 + 1);
      uVar16 = param_3[8];
      puVar14[9] = param_3[9];
      puVar14[8] = uVar16;
      param_3[8] = 0;
      param_3[9] = 0;
      puVar14[10] = param_3[10];
      plVar7 = puVar14 + 0xb;
      (**(code **)(param_3[0xb] + 0x10))(plVar7,param_3 + 0xb);
      puVar14 = puVar14 + 0x12;
LAB_10a340904:
      plVar6[6] = (long)puVar14;
      if ((ulong)(((long)puVar14 - plVar6[5] >> 4) * -0x71c71c71c71c71c7) < 2) {
        plVar7 = *(long **)(*(long *)(*(long *)(param_1 + 0x100) + 0x100) + 0x1c8);
        (**(code **)(*plVar7 + 0x18))();
        puStack_c0 = (undefined8 *)0x0;
        plStack_b8 = (long *)0x0;
        plVar8 = (long *)plVar7[1];
        if (((plVar8 == (long *)0x0) ||
            (__ZNSt3__119__shared_weak_count4lockEv(), plStack_b8 = plVar8, plVar8 == (long *)0x0))
           || (puVar14 = (undefined8 *)*plVar7, puStack_c0 = puVar14, puVar14 == (undefined8 *)0x0))
        {
          plVar8 = plStack_b8;
          if (plVar6[6] == plVar6[5]) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10a340c3c);
            (*pcVar5)();
          }
          puVar14 = *(undefined8 **)(plVar6[5] + 0x40);
          func_0x000107c2b054(&uStack_170,&UNK_10f64fed1);
          if ((puVar14 == (undefined8 *)0x0) || (*(char *)(puVar14 + 8) != '\x02')) {
            if ((puVar14 != (undefined8 *)0x0) && (*(char *)(puVar14 + 8) == '\x01')) {
              (*(code *)*puVar14)(&uStack_170,puVar14);
            }
          }
          else {
            FUN_10a05aad0(puVar14,&uStack_170);
          }
          if (lStack_160 < 0) {
            __ZdlPv(CONCAT44(uStack_170._4_4_,(undefined4)uStack_170));
          }
          plVar7 = plVar6 + 5;
          FUN_10a352278(plVar7,plVar6[5]);
          if (plVar8 == (long *)0x0) goto LAB_10a340c00;
        }
        else {
          plVar6 = plVar8;
          __ZNSt3__16chrono12steady_clock3nowEv();
          lStack_c8 = 0;
          uStack_d0 = 0;
          plStack_d8 = (long *)0x0;
          lStack_e0 = 0;
          uStack_e8 = 0;
          plStack_f0 = (long *)0x0;
          lStack_f8 = 0;
          uStack_100 = 0;
          plStack_108 = (long *)0x0;
          lStack_110 = 0;
          uStack_118 = 0;
          plStack_120 = (long *)0x0;
          lStack_128 = 0;
          uStack_130 = 0;
          plStack_138 = (long *)0x0;
          lStack_140 = 0;
          lStack_148 = 0;
          plStack_150 = (long *)0x0;
          plStack_158 = (long *)0x0;
          lStack_160 = 0;
          plStack_168 = (long *)0x0;
          uStack_170._0_4_ = 6;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (&plStack_168,param_2);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (&plStack_138,*(long *)(*(long *)(param_1 + 0x100) + 0x100) + 0x208);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (&plStack_f0,param_2);
          uVar11 = param_2[4];
          if (-1 < (char)*(byte *)((long)param_2 + 0x2f)) {
            uVar11 = (ulong)*(byte *)((long)param_2 + 0x2f);
          }
          if (uVar11 != 0) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (&plStack_120,param_2 + 3);
          }
          uVar11 = param_2[7];
          if (-1 < (char)*(byte *)((long)param_2 + 0x47)) {
            uVar11 = (ulong)*(byte *)((long)param_2 + 0x47);
          }
          if (uVar11 != 0) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (&plStack_108,param_2 + 6);
          }
          lStack_1a0 = param_1;
          if (*(char *)((long)param_2 + 0x17) < '\0') {
            func_0x000107c3192c(&plStack_198,*param_2,param_2[1]);
          }
          else {
            lStack_190 = param_2[1];
            plStack_198 = (long *)*param_2;
            lStack_188 = param_2[2];
          }
          uStack_178 = 0;
          plStack_180 = plVar6;
          FUN_10a341fc4(&lStack_1b8,*(undefined8 *)(param_1 + 0x108),&lStack_1a0);
          pcStack_b0 = FUN_10a37f750;
          ppuStack_a8 = &PTR_FUN_110bc7658;
          lStack_a0 = lStack_1b8;
          uStack_90 = uStack_1a8;
          uStack_98 = uStack_1b0;
          uStack_1b0 = 0;
          uStack_1a8 = 0;
          (**(code **)*puVar14)(puVar14,&uStack_170,&pcStack_b0);
          (*(code *)*ppuStack_a8)(&ppuStack_a8);
          plVar7 = &lStack_1b8;
          FUN_10a342184();
          if (lStack_188 < 0) {
            plVar7 = plStack_198;
            __ZdlPv();
          }
          if (lStack_c8 < 0) {
            plVar7 = plStack_d8;
            __ZdlPv();
          }
          if (lStack_e0 < 0) {
            plVar7 = plStack_f0;
            __ZdlPv();
          }
          if (lStack_f8 < 0) {
            plVar7 = plStack_108;
            __ZdlPv();
          }
          if (lStack_110 < 0) {
            plVar7 = plStack_120;
            __ZdlPv();
          }
          if (lStack_128 < 0) {
            plVar7 = plStack_138;
            __ZdlPv();
          }
          if (lStack_140 < 0) {
            plVar7 = plStack_150;
            __ZdlPv();
          }
          if ((long)plStack_158 < 0) {
            plVar7 = plStack_168;
            __ZdlPv();
          }
        }
        plVar6 = plVar8 + 1;
        do {
          lVar10 = *plVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar7 = plVar8;
        }
      }
      goto LAB_10a340c00;
    }
    lVar10 = (long)puVar14 - plVar6[5];
    uVar11 = (lVar10 >> 4) * -0x71c71c71c71c71c7 + 1;
    if (uVar11 < 0x1c71c71c71c71c8) {
      lVar9 = plVar6[7] - plVar6[5] >> 4;
      uVar12 = lVar9 * 0x1c71c71c71c71c72;
      if (uVar12 < uVar11 || uVar12 - uVar11 == 0) {
        uVar12 = uVar11;
      }
      if (0xe38e38e38e38e2 < (ulong)(lVar9 * -0x71c71c71c71c71c7)) {
        uVar12 = 0x1c71c71c71c71c7;
      }
      if (0x1c71c71c71c71c7 < uVar12) goto LAB_10a340c44;
      lVar9 = uVar12 * 0x90;
      __Znwm();
      puVar14 = (undefined8 *)(lVar9 + lVar10);
      *puVar14 = *param_3;
      (**(code **)(param_3[1] + 0x10))(puVar14 + 1);
      lVar10 = param_3[0xb];
      uVar16 = param_3[8];
      puVar14[9] = param_3[9];
      puVar14[8] = uVar16;
      param_3[8] = 0;
      param_3[9] = 0;
      puVar14[10] = param_3[10];
      plVar7 = puVar14 + 0xb;
      (**(code **)(lVar10 + 0x10))(plVar7,param_3 + 0xb);
      plVar13 = (long *)plVar6[5];
      plVar2 = (long *)plVar6[6];
      plVar1 = (long *)((long)puVar14 + ((long)plVar13 - (long)plVar2));
      plVar8 = plVar13;
      plVar15 = plVar1;
      if (plVar2 != plVar13) {
        do {
          *plVar15 = *plVar8;
          (**(code **)(plVar8[1] + 0x10))(plVar15 + 1);
          lVar10 = plVar8[8];
          plVar15[9] = plVar8[9];
          plVar15[8] = lVar10;
          plVar8[8] = 0;
          plVar8[9] = 0;
          plVar15[10] = plVar8[10];
          (**(code **)(plVar8[0xb] + 0x10))(plVar15 + 0xb,plVar8 + 0xb);
          plVar8 = plVar8 + 0x12;
          plVar15 = plVar15 + 0x12;
        } while (plVar8 != plVar2);
        plVar13 = plVar13 + 0xb;
        do {
          (**(code **)*plVar13)(plVar13);
          func_0x00010a07a8a8(plVar13 + -3);
          plVar7 = plVar13 + -10;
          (**(code **)*plVar7)();
          plVar8 = plVar13 + 7;
          plVar13 = plVar13 + 0x12;
        } while (plVar8 != plVar2);
        plVar13 = (long *)plVar6[5];
      }
      puVar14 = puVar14 + 0x12;
      plVar6[5] = (long)plVar1;
      plVar6[6] = (long)puVar14;
      plVar6[7] = lVar9 + uVar12 * 0x90;
      if (plVar13 != (long *)0x0) {
        __ZdlPv();
        plVar7 = plVar13;
      }
      goto LAB_10a340904;
    }
  }
  else {
    FUN_10a0ff18c(&uStack_170,param_2,2);
    plVar7 = &uStack_170;
    (*(code *)*param_3)(plVar7,0,(char)param_2[9],param_3);
    if (lStack_148 < 0) {
      plVar7 = plStack_158;
      __ZdlPv();
    }
    if (lStack_160 < 0) {
      plVar7 = (long *)CONCAT44(uStack_170._4_4_,(undefined4)uStack_170);
      __ZdlPv();
    }
LAB_10a340c00:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return plVar7;
    }
    ___stack_chk_fail();
    plVar6 = plVar7;
  }
  FUN_10a35220c();
LAB_10a340c44:
  func_0x000109ffded8();
  FUN_10a23298c(&uStack_170);
  func_0x00010a23a4e4(&puStack_c0);
  __Unwind_Resume();
  if (*(char *)((long)plVar6 + 0x47) < '\0') {
    __ZdlPv(plVar6[6]);
  }
  if (*(char *)((long)plVar6 + 0x2f) < '\0') {
    __ZdlPv(plVar6[3]);
  }
  if (*(char *)((long)plVar6 + 0x17) < '\0') {
    __ZdlPv(*plVar6);
  }
  return plVar6;
}



/* Entry: 10a340cd8; end: 10a340d27;  */

undefined8 * FUN_10a340cd8(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a340d28; end: 10a340e3f;  */

undefined ***
FUN_10a340d28(undefined8 param_1,long *param_2,undefined8 param_3,undefined ***param_4,
             undefined8 *param_5)

{
  long *plVar1;
  ulong uVar2;
  undefined **ppuVar3;
  char cVar4;
  bool bVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined ****ppppuVar8;
  undefined ****ppppuVar9;
  long *plVar10;
  undefined8 *extraout_x8;
  long lVar11;
  undefined *puVar12;
  undefined ***pppuVar13;
  undefined **ppuVar14;
  undefined **unaff_x22;
  undefined **ppuVar15;
  undefined ***pppuVar16;
  undefined **ppuVar17;
  undefined ***pppuVar18;
  undefined **ppuVar19;
  undefined ***pppuVar20;
  long lVar21;
  undefined **ppuStack_4d8;
  undefined **ppuStack_4d0;
  undefined ***pppuStack_4c8;
  undefined **ppuStack_4c0;
  undefined ***pppuStack_4b8;
  undefined **ppuStack_4b0;
  undefined ***pppuStack_4a8;
  long lStack_438;
  undefined **appuStack_430 [7];
  undefined1 auStack_3f8 [8];
  long *plStack_3f0;
  undefined8 *apuStack_3e0 [7];
  long lStack_3a8;
  undefined **ppuStack_3a0;
  undefined ***pppuStack_398;
  undefined ***pppuStack_390;
  undefined ***pppuStack_388;
  undefined1 ****ppppuStack_380;
  code *pcStack_378;
  undefined ***pppuStack_370;
  long lStack_368;
  long lStack_360;
  undefined ***pppuStack_358;
  undefined8 uStack_350;
  long lStack_348;
  undefined ***pppuStack_340;
  undefined8 uStack_338;
  long lStack_330;
  undefined1 uStack_328;
  undefined **ppuStack_318;
  undefined **appuStack_310 [8];
  long *plStack_2d0;
  undefined8 *apuStack_2c0 [7];
  long lStack_288;
  undefined **ppuStack_280;
  undefined ***pppuStack_278;
  undefined ***pppuStack_270;
  undefined ***pppuStack_268;
  undefined1 ***pppuStack_260;
  code *pcStack_258;
  undefined ***pppuStack_250;
  undefined ***pppuStack_248;
  undefined1 **ppuStack_240;
  code *pcStack_238;
  undefined ***pppuStack_230;
  long lStack_228;
  long lStack_220;
  undefined ***pppuStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined ***pppuStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined1 uStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined ***pppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined ***pppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined ***pppuStack_198;
  undefined **ppuStack_190;
  undefined ***pppuStack_188;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  code *pcStack_168;
  undefined **ppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined **ppuStack_c8;
  undefined **appuStack_c0 [7];
  undefined1 auStack_88 [8];
  long *plStack_80;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a33ff1c(&ppuStack_c8,param_1,param_3,param_4);
  pppuVar13 = &ppuStack_c8;
  pppuVar20 = &ppuStack_c8;
  FUN_10a340180(param_1);
  (*(code *)*apuStack_70[0])(apuStack_70);
  if (plStack_80 != (long *)0x0) {
    plVar10 = plStack_80 + 1;
    do {
      lVar11 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
    }
  }
  pppuVar6 = appuStack_c0;
  (*(code *)*appuStack_c0[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return pppuVar6;
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_70[0])(apuStack_70);
  func_0x00010a07a8a8(auStack_88);
  (*(code *)*appuStack_c0[0])(appuStack_c0);
  __Unwind_Resume();
  ppppuVar8 = &pppuStack_230;
  puStack_e0 = &stack0xfffffffffffffff0;
  pcStack_d8 = FUN_10a340e40;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  if (uVar2 == 0) {
    FUN_10a00946c(&UNK_10f64fe69);
    pppuVar7 = param_4;
LAB_10a341110:
    FUN_10a00946c(&UNK_10f64fd98);
LAB_10a34111c:
    ppppuVar8 = (undefined ****)param_2;
    pppuVar6 = (undefined ***)&UNK_10f64fdc4;
    FUN_10a00946c();
  }
  else {
    unaff_x22 = *pppuVar20;
    pppuVar7 = param_4;
    if (unaff_x22 == (undefined **)0x0) goto LAB_10a341110;
    ppuVar14 = *param_4;
    pppuVar13 = (undefined ***)0x0;
    if (ppuVar14 == (undefined **)0x0) goto LAB_10a34111c;
    ppuVar17 = pppuVar6[0x20];
    ppuStack_1e0 = ppuVar17;
    ppuStack_1d8 = unaff_x22;
    pppuVar16 = (undefined ***)pppuVar20[1];
    if (pppuVar16 != (undefined ***)0x0) {
      pppuVar13 = pppuVar16 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
        if (bVar5) {
          *pppuVar13 = (undefined **)((long)*pppuVar13 + 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      ppuVar14 = *param_4;
    }
    pppuVar18 = (undefined ***)param_4[1];
    if (pppuVar18 != (undefined ***)0x0) {
      pppuVar13 = pppuVar18 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
        if (bVar5) {
          *pppuVar13 = (undefined **)((long)*pppuVar13 + 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    pppuStack_1d0 = pppuVar16;
    ppuStack_1c8 = ppuVar14;
    pppuStack_1c0 = pppuVar18;
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(&pppuStack_230,*param_2,param_2[1]);
    }
    else {
      lStack_228 = param_2[1];
      pppuStack_230 = (undefined ***)*param_2;
      lStack_220 = param_2[2];
    }
    uStack_1e8 = 0;
    lStack_1f0 = 0;
    uStack_1f8 = 0;
    pppuStack_200 = (undefined ***)0x0;
    lStack_208 = 0;
    uStack_210 = 0;
    pppuStack_218 = (undefined ***)0x0;
    ppuStack_1b8 = (undefined **)FUN_10a37adbc;
    ppuStack_1b0 = &PTR_DAT_110bc74f8;
    if (pppuVar16 != (undefined ***)0x0) {
      pppuVar13 = pppuVar16 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
        if (bVar5) {
          *pppuVar13 = (undefined **)((long)*pppuVar13 + 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (pppuVar18 != (undefined ***)0x0) {
      pppuVar13 = pppuVar18 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
        if (bVar5) {
          *pppuVar13 = (undefined **)((long)*pppuVar13 + 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    pppuVar13 = &ppuStack_1b8;
    ppuStack_170 = param_4[1];
    ppuStack_178 = *param_4;
    if (param_4[1] != (undefined **)0x0) {
      ppuVar15 = param_4[1] + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
        if (bVar5) {
          *ppuVar15 = *ppuVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uStack_140 = 0;
    uStack_148 = 0;
    uStack_130 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_158 = 0;
    pcStack_168 = FUN_10a352044;
    ppuStack_160 = &PTR_DAT_110950c70;
    pppuVar20 = &ppuStack_1b8;
    ppuStack_1a8 = ppuVar17;
    ppuStack_1a0 = unaff_x22;
    pppuStack_198 = pppuVar16;
    ppuStack_190 = ppuVar14;
    pppuStack_188 = pppuVar18;
    FUN_10a340648(pppuVar6);
    (*(code *)*ppuStack_160)(&ppuStack_160);
    ppuVar14 = ppuStack_170;
    if (ppuStack_170 != (undefined **)0x0) {
      ppuVar17 = ppuStack_170 + 1;
      do {
        puVar12 = *ppuVar17;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar5) {
          *ppuVar17 = puVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (puVar12 == (undefined *)0x0) {
        (**(code **)(*ppuStack_170 + 0x10))(ppuStack_170);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
      }
    }
    pppuVar6 = &ppuStack_1b0;
    (*(code *)*ppuStack_1b0)();
    if (lStack_1f0 < 0) {
      pppuVar6 = pppuStack_200;
      __ZdlPv();
    }
    if (lStack_208 < 0) {
      pppuVar6 = pppuStack_218;
      __ZdlPv();
    }
    if (lStack_220 < 0) {
      pppuVar6 = pppuStack_230;
      __ZdlPv();
    }
    pppuVar16 = pppuStack_1c0;
    if (pppuStack_1c0 != (undefined ***)0x0) {
      pppuVar18 = pppuStack_1c0 + 1;
      do {
        ppuVar14 = *pppuVar18;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppuVar18,0x10);
        if (bVar5) {
          *pppuVar18 = (undefined **)((long)ppuVar14 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (ppuVar14 == (undefined **)0x0) {
        (*(code *)(*pppuStack_1c0)[2])(pppuStack_1c0);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppuVar6 = pppuVar16;
      }
    }
    pppuVar16 = pppuStack_1d0;
    if (pppuStack_1d0 != (undefined ***)0x0) {
      pppuVar18 = pppuStack_1d0 + 1;
      do {
        ppuVar14 = *pppuVar18;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppuVar18,0x10);
        if (bVar5) {
          *pppuVar18 = (undefined **)((long)ppuVar14 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (ppuVar14 == (undefined **)0x0) {
        (*(code *)(*pppuStack_1d0)[2])(pppuStack_1d0);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppuVar6 = pppuVar16;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
      return pppuVar6;
    }
  }
  ___stack_chk_fail();
  func_0x00010a07a8a8(&ppuStack_1c8);
  FUN_10a0844ac(&ppuStack_1d8);
  pppuVar16 = pppuVar6;
  __Unwind_Resume();
  pppuStack_250 = &ppuStack_1e0;
  pppuStack_248 = pppuVar6;
  ppuStack_240 = &puStack_e0;
  pcStack_238 = FUN_10a341184;
  if (pppuVar20 == (undefined ***)0x0) {
    FUN_10a00946c(&UNK_10f64fd98);
  }
  else {
    ppuVar14 = (undefined **)*param_5;
    if (ppuVar14 != (undefined **)0x0) {
      ppuVar17 = (undefined **)ppppuVar8[0x20];
      if (pppuVar7 != (undefined ***)0x0) {
        pppuVar13 = pppuVar7 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
          if (bVar5) {
            *pppuVar13 = (undefined **)((long)*pppuVar13 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        ppuVar14 = (undefined **)*param_5;
      }
      pppuVar13 = (undefined ***)param_5[1];
      if (pppuVar13 != (undefined ***)0x0) {
        pppuVar6 = pppuVar13 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
          if (bVar5) {
            *pppuVar6 = (undefined **)((long)*pppuVar6 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      *pppuVar16 = (undefined **)FUN_10a37b8d0;
      pppuVar16[1] = &PTR_FUN_110bc7518;
      pppuVar16[2] = ppuVar17;
      pppuVar16[3] = (undefined **)pppuVar20;
      pppuVar16[4] = (undefined **)pppuVar7;
      if (pppuVar7 != (undefined ***)0x0) {
        pppuVar20 = pppuVar7 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar20,0x10);
          if (bVar5) {
            *pppuVar20 = (undefined **)((long)*pppuVar20 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      pppuVar16[5] = ppuVar14;
      pppuVar16[6] = (undefined **)pppuVar13;
      if (pppuVar13 != (undefined ***)0x0) {
        pppuVar20 = pppuVar13 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar20,0x10);
          if (bVar5) {
            *pppuVar20 = (undefined **)((long)*pppuVar20 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      lVar11 = param_5[1];
      ppuVar14 = (undefined **)*param_5;
      pppuVar16[9] = (undefined **)param_5[1];
      pppuVar16[8] = ppuVar14;
      if (lVar11 != 0) {
        plVar10 = (long *)(lVar11 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = *plVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      pppuVar16[0xf] = (undefined **)0x0;
      pppuVar16[0xe] = (undefined **)0x0;
      pppuVar16[0x11] = (undefined **)0x0;
      pppuVar16[0x10] = (undefined **)0x0;
      pppuVar16[0xd] = (undefined **)0x0;
      pppuVar16[0xc] = (undefined **)0x0;
      pppuVar16[10] = (undefined **)FUN_10a352044;
      pppuVar16[0xb] = &PTR_DAT_110950c70;
      if (pppuVar13 != (undefined ***)0x0) {
        pppuVar20 = pppuVar13 + 1;
        do {
          ppuVar14 = *pppuVar20;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar20,0x10);
          if (bVar5) {
            *pppuVar20 = (undefined **)((long)ppuVar14 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (ppuVar14 == (undefined **)0x0) {
          (*(code *)(*pppuVar13)[2])(pppuVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar13);
          pppuVar16 = pppuVar13;
        }
      }
      if (pppuVar7 == (undefined ***)0x0) {
        return pppuVar16;
      }
      pppuVar13 = pppuVar7 + 1;
      do {
        ppuVar14 = *pppuVar13;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
        if (bVar5) {
          *pppuVar13 = (undefined **)((long)ppuVar14 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (ppuVar14 != (undefined **)0x0) {
        return pppuVar16;
      }
      (*(code *)(*pppuVar7)[2])(pppuVar7);
      goto code_r0x00010bdbd2cc;
    }
  }
  puVar12 = &UNK_10f64fdc4;
  FUN_10a00946c(&UNK_10f64fdc4);
  ppppuVar9 = &pppuStack_370;
  ppuStack_280 = unaff_x22;
  pppuStack_278 = pppuVar13;
  pppuStack_270 = &ppuStack_1e0;
  pppuStack_268 = pppuVar6;
  pppuStack_260 = &ppuStack_240;
  pcStack_258 = FUN_10a34130c;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)((long)ppppuVar8 + 0x17) < '\0') {
    pppuVar13 = (undefined ***)0x0;
    if (ppppuVar8[1] == (undefined ***)0x0) goto LAB_10a341464;
    func_0x000107c3192c(&pppuStack_370,*ppppuVar8);
LAB_10a341370:
    uStack_328 = 0;
    lStack_330 = 0;
    uStack_338 = 0;
    pppuStack_340 = (undefined ***)0x0;
    lStack_348 = 0;
    uStack_350 = 0;
    pppuStack_358 = (undefined ***)0x0;
    pppuVar16 = (undefined ***)pppuVar20[1];
    FUN_10a341184(&ppuStack_318,puVar12,*pppuVar20,pppuVar16,pppuVar7);
    pppuVar7 = &ppuStack_318;
    pppuVar13 = &ppuStack_318;
    FUN_10a340648(puVar12);
    (*(code *)*apuStack_2c0[0])(apuStack_2c0);
    if (plStack_2d0 != (long *)0x0) {
      plVar10 = plStack_2d0 + 1;
      do {
        lVar11 = *plVar10;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_2d0 + 0x10))(plStack_2d0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2d0);
      }
    }
    pppuVar6 = appuStack_310;
    (*(code *)*appuStack_310[0])();
    ppppuVar8 = ppppuVar9;
    if (lStack_330 < 0) {
      pppuVar6 = pppuStack_340;
      __ZdlPv();
      ppppuVar8 = ppppuVar9;
    }
    if (lStack_348 < 0) {
      pppuVar6 = pppuStack_358;
      __ZdlPv();
    }
    if (lStack_360 < 0) {
      pppuVar6 = pppuStack_370;
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
      return pppuVar6;
    }
  }
  else {
    pppuVar13 = pppuVar20;
    if (*(char *)((long)ppppuVar8 + 0x17) != '\0') {
      lStack_368 = (long)ppppuVar8[1];
      pppuStack_370 = *ppppuVar8;
      lStack_360 = (long)ppppuVar8[2];
      goto LAB_10a341370;
    }
LAB_10a341464:
    pppuVar6 = (undefined ***)&UNK_10f64fe69;
    pppuVar16 = pppuVar7;
    FUN_10a00946c();
  }
  ___stack_chk_fail();
  pppuVar18 = pppuVar6;
  __Unwind_Resume();
  ppuStack_3a0 = unaff_x22;
  pppuStack_398 = pppuVar20;
  pppuStack_390 = pppuVar7;
  pppuStack_388 = pppuVar6;
  ppppuStack_380 = &pppuStack_260;
  pcStack_378 = FUN_10a3414c0;
  lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar14 = pppuVar13[1];
  FUN_10a341184(&lStack_438,pppuVar18,*pppuVar13,ppuVar14,pppuVar16);
  plVar10 = &lStack_438;
  FUN_10a340180(pppuVar18);
  (*(code *)*apuStack_3e0[0])(apuStack_3e0);
  if (plStack_3f0 != (long *)0x0) {
    plVar1 = plStack_3f0 + 1;
    do {
      lVar11 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_3f0 + 0x10))(plStack_3f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_3f0);
    }
  }
  pppuVar13 = appuStack_430;
  (*(code *)*appuStack_430[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
    return pppuVar13;
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_3e0[0])(apuStack_3e0);
  func_0x00010a07a8a8(auStack_3f8);
  (*(code *)*appuStack_430[0])(appuStack_430);
  __Unwind_Resume();
  ppuVar17 = (undefined **)*ppppuVar8;
  if (ppuVar17 == (undefined **)0x0) {
    FUN_10a00946c(&UNK_10f64fd98);
  }
  else {
    ppuVar15 = (undefined **)*plVar10;
    if (ppuVar15 != (undefined **)0x0) {
      ppuVar19 = pppuVar13[0x20];
      pppuVar13 = ppppuVar8[1];
      if (pppuVar13 != (undefined ***)0x0) {
        pppuVar20 = pppuVar13 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar20,0x10);
          if (bVar5) {
            *pppuVar20 = (undefined **)((long)*pppuVar20 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        ppuVar15 = (undefined **)*plVar10;
      }
      pppuVar20 = (undefined ***)plVar10[1];
      if (pppuVar20 != (undefined ***)0x0) {
        pppuVar6 = pppuVar20 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
          if (bVar5) {
            *pppuVar6 = (undefined **)((long)*pppuVar6 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      ppuVar3 = (undefined **)*ppuVar14;
      pppuVar6 = (undefined ***)ppuVar14[1];
      if (pppuVar6 != (undefined ***)0x0) {
        pppuVar7 = pppuVar6 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar5) {
            *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      *extraout_x8 = FUN_10a37c4c8;
      extraout_x8[1] = &PTR_FUN_110bc7538;
      pppuVar16 = (undefined ***)0x38;
      ppuStack_4d8 = ppuVar19;
      ppuStack_4d0 = ppuVar17;
      pppuStack_4c8 = pppuVar13;
      ppuStack_4c0 = ppuVar15;
      pppuStack_4b8 = pppuVar20;
      ppuStack_4b0 = ppuVar3;
      pppuStack_4a8 = pppuVar6;
      __Znwm();
      *pppuVar16 = ppuVar19;
      pppuVar16[1] = ppuVar17;
      pppuVar16[2] = (undefined **)pppuVar13;
      if (pppuVar13 != (undefined ***)0x0) {
        pppuVar13 = pppuVar13 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
          if (bVar5) {
            *pppuVar13 = (undefined **)((long)*pppuVar13 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      pppuVar16[3] = ppuVar15;
      pppuVar16[4] = (undefined **)pppuVar20;
      if (pppuVar20 != (undefined ***)0x0) {
        pppuVar20 = pppuVar20 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar20,0x10);
          if (bVar5) {
            *pppuVar20 = (undefined **)((long)*pppuVar20 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      pppuVar16[5] = ppuVar3;
      pppuVar16[6] = (undefined **)pppuVar6;
      if (pppuVar6 != (undefined ***)0x0) {
        pppuVar13 = pppuVar6 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
          if (bVar5) {
            *pppuVar13 = (undefined **)((long)*pppuVar13 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      extraout_x8[2] = pppuVar16;
      lVar11 = plVar10[1];
      lVar21 = *plVar10;
      extraout_x8[9] = plVar10[1];
      extraout_x8[8] = lVar21;
      if (lVar11 != 0) {
        plVar10 = (long *)(lVar11 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = *plVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      extraout_x8[0xf] = 0;
      extraout_x8[0xe] = 0;
      extraout_x8[0x11] = 0;
      extraout_x8[0x10] = 0;
      extraout_x8[0xd] = 0;
      extraout_x8[0xc] = 0;
      extraout_x8[10] = FUN_10a352044;
      extraout_x8[0xb] = &PTR_DAT_110950c70;
      if (pppuVar6 != (undefined ***)0x0) {
        pppuVar13 = pppuVar6 + 1;
        do {
          ppuVar14 = *pppuVar13;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
          if (bVar5) {
            *pppuVar13 = (undefined **)((long)ppuVar14 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (ppuVar14 == (undefined **)0x0) {
          (*(code *)(*pppuVar6)[2])(pppuVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar6);
          pppuVar16 = pppuVar6;
        }
      }
      pppuVar13 = pppuStack_4b8;
      if (pppuStack_4b8 != (undefined ***)0x0) {
        pppuVar20 = pppuStack_4b8 + 1;
        do {
          ppuVar14 = *pppuVar20;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar20,0x10);
          if (bVar5) {
            *pppuVar20 = (undefined **)((long)ppuVar14 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (ppuVar14 == (undefined **)0x0) {
          (*(code *)(*pppuStack_4b8)[2])(pppuStack_4b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar13);
          pppuVar16 = pppuVar13;
        }
      }
      pppuVar7 = pppuStack_4c8;
      if (pppuStack_4c8 != (undefined ***)0x0) {
        pppuVar13 = pppuStack_4c8 + 1;
        do {
          ppuVar14 = *pppuVar13;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
          if (bVar5) {
            *pppuVar13 = (undefined **)((long)ppuVar14 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (ppuVar14 == (undefined **)0x0) {
          (*(code *)(*pppuStack_4c8)[2])(pppuStack_4c8);
code_r0x00010bdbd2cc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(pppuVar7);
          return pppuVar7;
        }
      }
      return pppuVar16;
    }
  }
  pppuVar13 = (undefined ***)&UNK_10f64fdc4;
  FUN_10a00946c();
  FUN_10a34184c(&ppuStack_4d8);
  __Unwind_Resume(pppuVar13);
  func_0x00010a0428c0(pppuVar13 + 5);
  func_0x00010a07a8a8(pppuVar13 + 3);
  FUN_10a1cfc50(pppuVar13 + 1);
  return pppuVar13;
}



/* Entry: 10a340e40; end: 10a341183;  */

undefined ***
FUN_10a340e40(long param_1,long *param_2,undefined ***param_3,undefined ***param_4,
             undefined8 *param_5)

{
  long *plVar1;
  ulong uVar2;
  undefined **ppuVar3;
  char cVar4;
  bool bVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined ****ppppuVar8;
  undefined ****ppppuVar9;
  long *plVar10;
  long lVar11;
  undefined8 *extraout_x8;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined ***unaff_x21;
  undefined **ppuVar14;
  undefined **unaff_x22;
  undefined **ppuVar15;
  undefined ***pppuVar16;
  undefined8 uVar17;
  undefined ***pppuVar18;
  undefined ***pppuVar19;
  undefined **ppuVar20;
  long lVar21;
  undefined **ppuStack_408;
  undefined **ppuStack_400;
  undefined ***pppuStack_3f8;
  undefined **ppuStack_3f0;
  undefined ***pppuStack_3e8;
  undefined **ppuStack_3e0;
  undefined ***pppuStack_3d8;
  long lStack_368;
  undefined **appuStack_360 [7];
  undefined1 auStack_328 [8];
  long *plStack_320;
  undefined8 *apuStack_310 [7];
  long lStack_2d8;
  undefined **ppuStack_2d0;
  undefined ***pppuStack_2c8;
  undefined ***pppuStack_2c0;
  undefined ***pppuStack_2b8;
  undefined1 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined ***pppuStack_2a0;
  long lStack_298;
  long lStack_290;
  undefined ***pppuStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined ***pppuStack_270;
  undefined8 uStack_268;
  long lStack_260;
  undefined1 uStack_258;
  undefined **ppuStack_248;
  undefined **appuStack_240 [8];
  long *plStack_200;
  undefined8 *apuStack_1f0 [7];
  long lStack_1b8;
  undefined **ppuStack_1b0;
  undefined ***pppuStack_1a8;
  undefined8 *puStack_1a0;
  undefined ***pppuStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 *puStack_180;
  undefined ***pppuStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined ***pppuStack_160;
  long lStack_158;
  long lStack_150;
  undefined ***pppuStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined ***pppuStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined1 uStack_118;
  undefined8 uStack_110;
  undefined **ppuStack_108;
  undefined ***pppuStack_100;
  undefined **ppuStack_f8;
  undefined ***pppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  undefined ***pppuStack_c8;
  undefined **ppuStack_c0;
  undefined ***pppuStack_b8;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  ppppuVar8 = &pppuStack_160;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  if (uVar2 == 0) {
    FUN_10a00946c(&UNK_10f64fe69);
    pppuVar18 = param_4;
LAB_10a341110:
    FUN_10a00946c(&UNK_10f64fd98);
LAB_10a34111c:
    ppppuVar8 = (undefined ****)param_2;
    pppuVar16 = (undefined ***)&UNK_10f64fdc4;
    FUN_10a00946c();
  }
  else {
    unaff_x22 = *param_3;
    pppuVar18 = param_4;
    if (unaff_x22 == (undefined **)0x0) goto LAB_10a341110;
    ppuVar14 = *param_4;
    unaff_x21 = (undefined ***)0x0;
    if (ppuVar14 == (undefined **)0x0) goto LAB_10a34111c;
    uVar17 = *(undefined8 *)(param_1 + 0x100);
    pppuVar16 = (undefined ***)param_3[1];
    if (pppuVar16 != (undefined ***)0x0) {
      pppuVar19 = pppuVar16 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppuVar19,0x10);
        if (bVar5) {
          *pppuVar19 = (undefined **)((long)*pppuVar19 + 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      ppuVar14 = *param_4;
    }
    pppuVar19 = (undefined ***)param_4[1];
    if (pppuVar19 != (undefined ***)0x0) {
      pppuVar7 = pppuVar19 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
        if (bVar5) {
          *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uStack_110 = uVar17;
    ppuStack_108 = unaff_x22;
    pppuStack_100 = pppuVar16;
    ppuStack_f8 = ppuVar14;
    pppuStack_f0 = pppuVar19;
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(&pppuStack_160,*param_2,param_2[1]);
    }
    else {
      lStack_158 = param_2[1];
      pppuStack_160 = (undefined ***)*param_2;
      lStack_150 = param_2[2];
    }
    uStack_118 = 0;
    lStack_120 = 0;
    uStack_128 = 0;
    pppuStack_130 = (undefined ***)0x0;
    lStack_138 = 0;
    uStack_140 = 0;
    pppuStack_148 = (undefined ***)0x0;
    ppuStack_e8 = (undefined **)FUN_10a37adbc;
    ppuStack_e0 = &PTR_DAT_110bc74f8;
    if (pppuVar16 != (undefined ***)0x0) {
      pppuVar7 = pppuVar16 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
        if (bVar5) {
          *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (pppuVar19 != (undefined ***)0x0) {
      pppuVar7 = pppuVar19 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
        if (bVar5) {
          *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    unaff_x21 = &ppuStack_e8;
    ppuStack_a0 = param_4[1];
    ppuStack_a8 = *param_4;
    if (param_4[1] != (undefined **)0x0) {
      ppuVar13 = param_4[1] + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
        if (bVar5) {
          *ppuVar13 = *ppuVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    pcStack_98 = FUN_10a352044;
    ppuStack_90 = &PTR_DAT_110950c70;
    param_3 = &ppuStack_e8;
    uStack_d8 = uVar17;
    ppuStack_d0 = unaff_x22;
    pppuStack_c8 = pppuVar16;
    ppuStack_c0 = ppuVar14;
    pppuStack_b8 = pppuVar19;
    FUN_10a340648(param_1);
    (*(code *)*ppuStack_90)(&ppuStack_90);
    ppuVar14 = ppuStack_a0;
    if (ppuStack_a0 != (undefined **)0x0) {
      ppuVar13 = ppuStack_a0 + 1;
      do {
        puVar12 = *ppuVar13;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
        if (bVar5) {
          *ppuVar13 = puVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (puVar12 == (undefined *)0x0) {
        (**(code **)(*ppuStack_a0 + 0x10))(ppuStack_a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
      }
    }
    pppuVar16 = &ppuStack_e0;
    (*(code *)*ppuStack_e0)();
    if (lStack_120 < 0) {
      pppuVar16 = pppuStack_130;
      __ZdlPv();
    }
    if (lStack_138 < 0) {
      pppuVar16 = pppuStack_148;
      __ZdlPv();
    }
    if (lStack_150 < 0) {
      pppuVar16 = pppuStack_160;
      __ZdlPv();
    }
    pppuVar19 = pppuStack_f0;
    if (pppuStack_f0 != (undefined ***)0x0) {
      pppuVar7 = pppuStack_f0 + 1;
      do {
        ppuVar14 = *pppuVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
        if (bVar5) {
          *pppuVar7 = (undefined **)((long)ppuVar14 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (ppuVar14 == (undefined **)0x0) {
        (*(code *)(*pppuStack_f0)[2])(pppuStack_f0);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppuVar16 = pppuVar19;
      }
    }
    pppuVar19 = pppuStack_100;
    if (pppuStack_100 != (undefined ***)0x0) {
      pppuVar7 = pppuStack_100 + 1;
      do {
        ppuVar14 = *pppuVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
        if (bVar5) {
          *pppuVar7 = (undefined **)((long)ppuVar14 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (ppuVar14 == (undefined **)0x0) {
        (*(code *)(*pppuStack_100)[2])(pppuStack_100);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppuVar16 = pppuVar19;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return pppuVar16;
    }
  }
  ___stack_chk_fail();
  func_0x00010a07a8a8(&ppuStack_f8);
  FUN_10a0844ac(&ppuStack_108);
  pppuVar19 = pppuVar16;
  __Unwind_Resume();
  puStack_180 = &uStack_110;
  pppuStack_178 = pppuVar16;
  puStack_170 = &stack0xfffffffffffffff0;
  pcStack_168 = FUN_10a341184;
  if (param_3 == (undefined ***)0x0) {
    FUN_10a00946c(&UNK_10f64fd98);
  }
  else {
    ppuVar14 = (undefined **)*param_5;
    if (ppuVar14 != (undefined **)0x0) {
      ppuVar13 = (undefined **)ppppuVar8[0x20];
      if (pppuVar18 != (undefined ***)0x0) {
        pppuVar16 = pppuVar18 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar16,0x10);
          if (bVar5) {
            *pppuVar16 = (undefined **)((long)*pppuVar16 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        ppuVar14 = (undefined **)*param_5;
      }
      pppuVar16 = (undefined ***)param_5[1];
      if (pppuVar16 != (undefined ***)0x0) {
        pppuVar7 = pppuVar16 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar5) {
            *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      *pppuVar19 = (undefined **)FUN_10a37b8d0;
      pppuVar19[1] = &PTR_FUN_110bc7518;
      pppuVar19[2] = ppuVar13;
      pppuVar19[3] = (undefined **)param_3;
      pppuVar19[4] = (undefined **)pppuVar18;
      if (pppuVar18 != (undefined ***)0x0) {
        pppuVar7 = pppuVar18 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar5) {
            *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      pppuVar19[5] = ppuVar14;
      pppuVar19[6] = (undefined **)pppuVar16;
      if (pppuVar16 != (undefined ***)0x0) {
        pppuVar7 = pppuVar16 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar5) {
            *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      lVar11 = param_5[1];
      ppuVar14 = (undefined **)*param_5;
      pppuVar19[9] = (undefined **)param_5[1];
      pppuVar19[8] = ppuVar14;
      if (lVar11 != 0) {
        plVar10 = (long *)(lVar11 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = *plVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      pppuVar19[0xf] = (undefined **)0x0;
      pppuVar19[0xe] = (undefined **)0x0;
      pppuVar19[0x11] = (undefined **)0x0;
      pppuVar19[0x10] = (undefined **)0x0;
      pppuVar19[0xd] = (undefined **)0x0;
      pppuVar19[0xc] = (undefined **)0x0;
      pppuVar19[10] = (undefined **)FUN_10a352044;
      pppuVar19[0xb] = &PTR_DAT_110950c70;
      if (pppuVar16 != (undefined ***)0x0) {
        pppuVar7 = pppuVar16 + 1;
        do {
          ppuVar14 = *pppuVar7;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar5) {
            *pppuVar7 = (undefined **)((long)ppuVar14 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (ppuVar14 == (undefined **)0x0) {
          (*(code *)(*pppuVar16)[2])(pppuVar16);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar16);
          pppuVar19 = pppuVar16;
        }
      }
      if (pppuVar18 == (undefined ***)0x0) {
        return pppuVar19;
      }
      pppuVar16 = pppuVar18 + 1;
      do {
        ppuVar14 = *pppuVar16;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppuVar16,0x10);
        if (bVar5) {
          *pppuVar16 = (undefined **)((long)ppuVar14 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (ppuVar14 != (undefined **)0x0) {
        return pppuVar19;
      }
      (*(code *)(*pppuVar18)[2])(pppuVar18);
      goto code_r0x00010bdbd2cc;
    }
  }
  puVar12 = &UNK_10f64fdc4;
  FUN_10a00946c(&UNK_10f64fdc4);
  ppppuVar9 = &pppuStack_2a0;
  ppuStack_1b0 = unaff_x22;
  pppuStack_1a8 = unaff_x21;
  puStack_1a0 = &uStack_110;
  pppuStack_198 = pppuVar16;
  ppuStack_190 = &puStack_170;
  pcStack_188 = FUN_10a34130c;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)((long)ppppuVar8 + 0x17) < '\0') {
    pppuVar16 = (undefined ***)0x0;
    if (ppppuVar8[1] == (undefined ***)0x0) goto LAB_10a341464;
    func_0x000107c3192c(&pppuStack_2a0,*ppppuVar8);
LAB_10a341370:
    uStack_258 = 0;
    lStack_260 = 0;
    uStack_268 = 0;
    pppuStack_270 = (undefined ***)0x0;
    lStack_278 = 0;
    uStack_280 = 0;
    pppuStack_288 = (undefined ***)0x0;
    pppuVar7 = (undefined ***)param_3[1];
    FUN_10a341184(&ppuStack_248,puVar12,*param_3,pppuVar7,pppuVar18);
    pppuVar18 = &ppuStack_248;
    pppuVar16 = &ppuStack_248;
    FUN_10a340648(puVar12);
    (*(code *)*apuStack_1f0[0])(apuStack_1f0);
    if (plStack_200 != (long *)0x0) {
      plVar10 = plStack_200 + 1;
      do {
        lVar11 = *plVar10;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_200 + 0x10))(plStack_200);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_200);
      }
    }
    pppuVar19 = appuStack_240;
    (*(code *)*appuStack_240[0])();
    ppppuVar8 = ppppuVar9;
    if (lStack_260 < 0) {
      pppuVar19 = pppuStack_270;
      __ZdlPv();
      ppppuVar8 = ppppuVar9;
    }
    if (lStack_278 < 0) {
      pppuVar19 = pppuStack_288;
      __ZdlPv();
    }
    if (lStack_290 < 0) {
      pppuVar19 = pppuStack_2a0;
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
      return pppuVar19;
    }
  }
  else {
    pppuVar16 = param_3;
    if (*(char *)((long)ppppuVar8 + 0x17) != '\0') {
      lStack_298 = (long)ppppuVar8[1];
      pppuStack_2a0 = *ppppuVar8;
      lStack_290 = (long)ppppuVar8[2];
      goto LAB_10a341370;
    }
LAB_10a341464:
    pppuVar19 = (undefined ***)&UNK_10f64fe69;
    pppuVar7 = pppuVar18;
    FUN_10a00946c();
  }
  ___stack_chk_fail();
  pppuVar6 = pppuVar19;
  __Unwind_Resume();
  ppuStack_2d0 = unaff_x22;
  pppuStack_2c8 = param_3;
  pppuStack_2c0 = pppuVar18;
  pppuStack_2b8 = pppuVar19;
  pppuStack_2b0 = &ppuStack_190;
  pcStack_2a8 = FUN_10a3414c0;
  lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar14 = pppuVar16[1];
  FUN_10a341184(&lStack_368,pppuVar6,*pppuVar16,ppuVar14,pppuVar7);
  plVar10 = &lStack_368;
  FUN_10a340180(pppuVar6);
  (*(code *)*apuStack_310[0])(apuStack_310);
  if (plStack_320 != (long *)0x0) {
    plVar1 = plStack_320 + 1;
    do {
      lVar11 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_320 + 0x10))(plStack_320);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_320);
    }
  }
  pppuVar18 = appuStack_360;
  (*(code *)*appuStack_360[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
    return pppuVar18;
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_310[0])(apuStack_310);
  func_0x00010a07a8a8(auStack_328);
  (*(code *)*appuStack_360[0])(appuStack_360);
  __Unwind_Resume();
  ppuVar13 = (undefined **)*ppppuVar8;
  if (ppuVar13 == (undefined **)0x0) {
    FUN_10a00946c(&UNK_10f64fd98);
  }
  else {
    ppuVar15 = (undefined **)*plVar10;
    if (ppuVar15 != (undefined **)0x0) {
      ppuVar20 = pppuVar18[0x20];
      pppuVar18 = ppppuVar8[1];
      if (pppuVar18 != (undefined ***)0x0) {
        pppuVar16 = pppuVar18 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar16,0x10);
          if (bVar5) {
            *pppuVar16 = (undefined **)((long)*pppuVar16 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        ppuVar15 = (undefined **)*plVar10;
      }
      pppuVar16 = (undefined ***)plVar10[1];
      if (pppuVar16 != (undefined ***)0x0) {
        pppuVar19 = pppuVar16 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar19,0x10);
          if (bVar5) {
            *pppuVar19 = (undefined **)((long)*pppuVar19 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      ppuVar3 = (undefined **)*ppuVar14;
      pppuVar19 = (undefined ***)ppuVar14[1];
      if (pppuVar19 != (undefined ***)0x0) {
        pppuVar7 = pppuVar19 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar5) {
            *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      *extraout_x8 = FUN_10a37c4c8;
      extraout_x8[1] = &PTR_FUN_110bc7538;
      pppuVar7 = (undefined ***)0x38;
      ppuStack_408 = ppuVar20;
      ppuStack_400 = ppuVar13;
      pppuStack_3f8 = pppuVar18;
      ppuStack_3f0 = ppuVar15;
      pppuStack_3e8 = pppuVar16;
      ppuStack_3e0 = ppuVar3;
      pppuStack_3d8 = pppuVar19;
      __Znwm();
      *pppuVar7 = ppuVar20;
      pppuVar7[1] = ppuVar13;
      pppuVar7[2] = (undefined **)pppuVar18;
      if (pppuVar18 != (undefined ***)0x0) {
        pppuVar18 = pppuVar18 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar18,0x10);
          if (bVar5) {
            *pppuVar18 = (undefined **)((long)*pppuVar18 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      pppuVar7[3] = ppuVar15;
      pppuVar7[4] = (undefined **)pppuVar16;
      if (pppuVar16 != (undefined ***)0x0) {
        pppuVar16 = pppuVar16 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar16,0x10);
          if (bVar5) {
            *pppuVar16 = (undefined **)((long)*pppuVar16 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      pppuVar7[5] = ppuVar3;
      pppuVar7[6] = (undefined **)pppuVar19;
      if (pppuVar19 != (undefined ***)0x0) {
        pppuVar18 = pppuVar19 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar18,0x10);
          if (bVar5) {
            *pppuVar18 = (undefined **)((long)*pppuVar18 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      extraout_x8[2] = pppuVar7;
      lVar11 = plVar10[1];
      lVar21 = *plVar10;
      extraout_x8[9] = plVar10[1];
      extraout_x8[8] = lVar21;
      if (lVar11 != 0) {
        plVar10 = (long *)(lVar11 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = *plVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      extraout_x8[0xf] = 0;
      extraout_x8[0xe] = 0;
      extraout_x8[0x11] = 0;
      extraout_x8[0x10] = 0;
      extraout_x8[0xd] = 0;
      extraout_x8[0xc] = 0;
      extraout_x8[10] = FUN_10a352044;
      extraout_x8[0xb] = &PTR_DAT_110950c70;
      if (pppuVar19 != (undefined ***)0x0) {
        pppuVar18 = pppuVar19 + 1;
        do {
          ppuVar14 = *pppuVar18;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar18,0x10);
          if (bVar5) {
            *pppuVar18 = (undefined **)((long)ppuVar14 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (ppuVar14 == (undefined **)0x0) {
          (*(code *)(*pppuVar19)[2])(pppuVar19);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar19);
          pppuVar7 = pppuVar19;
        }
      }
      pppuVar18 = pppuStack_3e8;
      if (pppuStack_3e8 != (undefined ***)0x0) {
        pppuVar16 = pppuStack_3e8 + 1;
        do {
          ppuVar14 = *pppuVar16;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar16,0x10);
          if (bVar5) {
            *pppuVar16 = (undefined **)((long)ppuVar14 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (ppuVar14 == (undefined **)0x0) {
          (*(code *)(*pppuStack_3e8)[2])(pppuStack_3e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar18);
          pppuVar7 = pppuVar18;
        }
      }
      pppuVar18 = pppuStack_3f8;
      if (pppuStack_3f8 != (undefined ***)0x0) {
        pppuVar16 = pppuStack_3f8 + 1;
        do {
          ppuVar14 = *pppuVar16;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar16,0x10);
          if (bVar5) {
            *pppuVar16 = (undefined **)((long)ppuVar14 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (ppuVar14 == (undefined **)0x0) {
          (*(code *)(*pppuStack_3f8)[2])(pppuStack_3f8);
code_r0x00010bdbd2cc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(pppuVar18);
          return pppuVar18;
        }
      }
      return pppuVar7;
    }
  }
  pppuVar18 = (undefined ***)&UNK_10f64fdc4;
  FUN_10a00946c();
  FUN_10a34184c(&ppuStack_408);
  __Unwind_Resume(pppuVar18);
  func_0x00010a0428c0(pppuVar18 + 5);
  func_0x00010a07a8a8(pppuVar18 + 3);
  FUN_10a1cfc50(pppuVar18 + 1);
  return pppuVar18;
}



/* Entry: 10a341184; end: 10a34130b;  */

undefined8 **
FUN_10a341184(undefined8 **param_1,long *param_2,undefined8 *param_3,undefined8 **param_4,
             long *param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined8 ***pppuVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *extraout_x8;
  undefined8 *puVar13;
  undefined8 **ppuVar14;
  undefined8 *puVar15;
  undefined8 **ppuVar16;
  long lVar17;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 **ppuStack_298;
  undefined8 *puStack_290;
  undefined8 **ppuStack_288;
  undefined8 *puStack_280;
  undefined8 **ppuStack_278;
  long lStack_208;
  undefined8 *apuStack_200 [7];
  undefined1 auStack_1c8 [8];
  long *plStack_1c0;
  undefined8 *apuStack_1b0 [7];
  long lStack_178;
  undefined8 **ppuStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 **ppuStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 **ppuStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined1 uStack_f8;
  undefined8 uStack_e8;
  undefined8 *apuStack_e0 [8];
  long *plStack_a0;
  undefined8 *apuStack_90 [7];
  long lStack_58;
  
  if (param_3 == (undefined8 *)0x0) {
    FUN_10a00946c(&UNK_10f64fd98);
  }
  else {
    puVar11 = (undefined8 *)*param_5;
    if (puVar11 != (undefined8 *)0x0) {
      puVar13 = (undefined8 *)param_2[0x20];
      if (param_4 != (undefined8 **)0x0) {
        ppuVar14 = param_4 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
          if (bVar4) {
            *ppuVar14 = (undefined8 *)((long)*ppuVar14 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        puVar11 = (undefined8 *)*param_5;
      }
      ppuVar14 = (undefined8 **)param_5[1];
      if (ppuVar14 != (undefined8 **)0x0) {
        ppuVar16 = ppuVar14 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
          if (bVar4) {
            *ppuVar16 = (undefined8 *)((long)*ppuVar16 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *param_1 = (undefined8 *)FUN_10a37b8d0;
      param_1[1] = &PTR_FUN_110bc7518;
      param_1[2] = puVar13;
      param_1[3] = param_3;
      param_1[4] = param_4;
      if (param_4 != (undefined8 **)0x0) {
        ppuVar16 = param_4 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
          if (bVar4) {
            *ppuVar16 = (undefined8 *)((long)*ppuVar16 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      param_1[5] = puVar11;
      param_1[6] = ppuVar14;
      if (ppuVar14 != (undefined8 **)0x0) {
        ppuVar16 = ppuVar14 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
          if (bVar4) {
            *ppuVar16 = (undefined8 *)((long)*ppuVar16 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar12 = param_5[1];
      puVar11 = (undefined8 *)*param_5;
      param_1[9] = (undefined8 *)param_5[1];
      param_1[8] = puVar11;
      if (lVar12 != 0) {
        plVar9 = (long *)(lVar12 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = *plVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      param_1[0xf] = (undefined8 *)0x0;
      param_1[0xe] = (undefined8 *)0x0;
      param_1[0x11] = (undefined8 *)0x0;
      param_1[0x10] = (undefined8 *)0x0;
      param_1[0xd] = (undefined8 *)0x0;
      param_1[0xc] = (undefined8 *)0x0;
      param_1[10] = (undefined8 *)FUN_10a352044;
      param_1[0xb] = &PTR_DAT_110950c70;
      if (ppuVar14 != (undefined8 **)0x0) {
        ppuVar16 = ppuVar14 + 1;
        do {
          puVar11 = *ppuVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
          if (bVar4) {
            *ppuVar16 = (undefined8 *)((long)puVar11 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar11 == (undefined8 *)0x0) {
          (*(code *)(*ppuVar14)[2])(ppuVar14);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
          param_1 = ppuVar14;
        }
      }
      if (param_4 == (undefined8 **)0x0) {
        return param_1;
      }
      ppuVar14 = param_4 + 1;
      do {
        puVar11 = *ppuVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
        if (bVar4) {
          *ppuVar14 = (undefined8 *)((long)puVar11 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar11 != (undefined8 *)0x0) {
        return param_1;
      }
      (*(code *)(*param_4)[2])(param_4);
      goto code_r0x00010bdbd2cc;
    }
  }
  puVar5 = &UNK_10f64fdc4;
  FUN_10a00946c(&UNK_10f64fdc4);
  pppuVar8 = &ppuStack_140;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    puVar11 = (undefined8 *)0x0;
    if (param_2[1] == 0) goto LAB_10a341464;
    func_0x000107c3192c(&ppuStack_140,*param_2);
LAB_10a341370:
    uStack_f8 = 0;
    lStack_100 = 0;
    uStack_108 = 0;
    ppuStack_110 = (undefined8 **)0x0;
    lStack_118 = 0;
    uStack_120 = 0;
    ppuStack_128 = (undefined8 **)0x0;
    ppuVar16 = (undefined8 **)param_3[1];
    FUN_10a341184(&uStack_e8,puVar5,*param_3,ppuVar16,param_4);
    puVar11 = &uStack_e8;
    FUN_10a340648(puVar5);
    (*(code *)*apuStack_90[0])(apuStack_90);
    if (plStack_a0 != (long *)0x0) {
      plVar9 = plStack_a0 + 1;
      do {
        lVar12 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
      }
    }
    ppuVar14 = apuStack_e0;
    (*(code *)*apuStack_e0[0])();
    param_2 = (long *)pppuVar8;
    param_4 = ppuVar16;
    if (lStack_100 < 0) {
      ppuVar14 = ppuStack_110;
      __ZdlPv();
      param_2 = (long *)pppuVar8;
      param_4 = ppuVar16;
    }
    if (lStack_118 < 0) {
      ppuVar14 = ppuStack_128;
      __ZdlPv();
    }
    if (lStack_130 < 0) {
      ppuVar14 = ppuStack_140;
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return ppuVar14;
    }
  }
  else {
    puVar11 = param_3;
    if (*(char *)((long)param_2 + 0x17) != '\0') {
      lStack_138 = param_2[1];
      ppuStack_140 = (undefined8 **)*param_2;
      lStack_130 = param_2[2];
      goto LAB_10a341370;
    }
LAB_10a341464:
    ppuVar14 = (undefined8 **)&UNK_10f64fe69;
    FUN_10a00946c();
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)puVar11[1];
  FUN_10a341184(&lStack_208,ppuVar14,*puVar11,plVar10,param_4);
  plVar9 = &lStack_208;
  FUN_10a340180(ppuVar14);
  (*(code *)*apuStack_1b0[0])(apuStack_1b0);
  if (plStack_1c0 != (long *)0x0) {
    plVar1 = plStack_1c0 + 1;
    do {
      lVar12 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1c0);
    }
  }
  ppuVar14 = apuStack_200;
  (*(code *)*apuStack_200[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return ppuVar14;
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_1b0[0])(apuStack_1b0);
  func_0x00010a07a8a8(auStack_1c8);
  (*(code *)*apuStack_200[0])(apuStack_200);
  __Unwind_Resume();
  puVar11 = (undefined8 *)*param_2;
  if (puVar11 == (undefined8 *)0x0) {
    FUN_10a00946c(&UNK_10f64fd98);
  }
  else {
    puVar13 = (undefined8 *)*plVar9;
    if (puVar13 != (undefined8 *)0x0) {
      puVar15 = ppuVar14[0x20];
      ppuVar14 = (undefined8 **)param_2[1];
      if (ppuVar14 != (undefined8 **)0x0) {
        ppuVar16 = ppuVar14 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
          if (bVar4) {
            *ppuVar16 = (undefined8 *)((long)*ppuVar16 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        puVar13 = (undefined8 *)*plVar9;
      }
      ppuVar16 = (undefined8 **)plVar9[1];
      if (ppuVar16 != (undefined8 **)0x0) {
        ppuVar7 = ppuVar16 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
          if (bVar4) {
            *ppuVar7 = (undefined8 *)((long)*ppuVar7 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar2 = (undefined8 *)*plVar10;
      ppuVar7 = (undefined8 **)plVar10[1];
      if (ppuVar7 != (undefined8 **)0x0) {
        ppuVar6 = ppuVar7 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
          if (bVar4) {
            *ppuVar6 = (undefined8 *)((long)*ppuVar6 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *extraout_x8 = FUN_10a37c4c8;
      extraout_x8[1] = &PTR_FUN_110bc7538;
      ppuVar6 = (undefined8 **)0x38;
      puStack_2a8 = puVar15;
      puStack_2a0 = puVar11;
      ppuStack_298 = ppuVar14;
      puStack_290 = puVar13;
      ppuStack_288 = ppuVar16;
      puStack_280 = puVar2;
      ppuStack_278 = ppuVar7;
      __Znwm();
      *ppuVar6 = puVar15;
      ppuVar6[1] = puVar11;
      ppuVar6[2] = ppuVar14;
      if (ppuVar14 != (undefined8 **)0x0) {
        ppuVar14 = ppuVar14 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
          if (bVar4) {
            *ppuVar14 = (undefined8 *)((long)*ppuVar14 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppuVar6[3] = puVar13;
      ppuVar6[4] = ppuVar16;
      if (ppuVar16 != (undefined8 **)0x0) {
        ppuVar16 = ppuVar16 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
          if (bVar4) {
            *ppuVar16 = (undefined8 *)((long)*ppuVar16 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppuVar6[5] = puVar2;
      ppuVar6[6] = ppuVar7;
      if (ppuVar7 != (undefined8 **)0x0) {
        ppuVar14 = ppuVar7 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
          if (bVar4) {
            *ppuVar14 = (undefined8 *)((long)*ppuVar14 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      extraout_x8[2] = ppuVar6;
      lVar12 = plVar9[1];
      lVar17 = *plVar9;
      extraout_x8[9] = plVar9[1];
      extraout_x8[8] = lVar17;
      if (lVar12 != 0) {
        plVar9 = (long *)(lVar12 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = *plVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      extraout_x8[0xf] = 0;
      extraout_x8[0xe] = 0;
      extraout_x8[0x11] = 0;
      extraout_x8[0x10] = 0;
      extraout_x8[0xd] = 0;
      extraout_x8[0xc] = 0;
      extraout_x8[10] = FUN_10a352044;
      extraout_x8[0xb] = &PTR_DAT_110950c70;
      if (ppuVar7 != (undefined8 **)0x0) {
        ppuVar14 = ppuVar7 + 1;
        do {
          puVar11 = *ppuVar14;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
          if (bVar4) {
            *ppuVar14 = (undefined8 *)((long)puVar11 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar11 == (undefined8 *)0x0) {
          (*(code *)(*ppuVar7)[2])(ppuVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
          ppuVar6 = ppuVar7;
        }
      }
      ppuVar14 = ppuStack_288;
      if (ppuStack_288 != (undefined8 **)0x0) {
        ppuVar16 = ppuStack_288 + 1;
        do {
          puVar11 = *ppuVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
          if (bVar4) {
            *ppuVar16 = (undefined8 *)((long)puVar11 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar11 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_288)[2])(ppuStack_288);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
          ppuVar6 = ppuVar14;
        }
      }
      param_4 = ppuStack_298;
      if (ppuStack_298 != (undefined8 **)0x0) {
        ppuVar14 = ppuStack_298 + 1;
        do {
          puVar11 = *ppuVar14;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
          if (bVar4) {
            *ppuVar14 = (undefined8 *)((long)puVar11 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar11 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_298)[2])(ppuStack_298);
code_r0x00010bdbd2cc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(param_4);
          return param_4;
        }
      }
      return ppuVar6;
    }
  }
  ppuVar14 = (undefined8 **)&UNK_10f64fdc4;
  FUN_10a00946c();
  FUN_10a34184c(&puStack_2a8);
  __Unwind_Resume(ppuVar14);
  func_0x00010a0428c0(ppuVar14 + 5);
  func_0x00010a07a8a8(ppuVar14 + 3);
  FUN_10a1cfc50(ppuVar14 + 1);
  return ppuVar14;
}



/* Entry: 10a34130c; end: 10a3414bf;  */

undefined8 ** FUN_10a34130c(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined8 ***pppuVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *extraout_x8;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 **ppuVar14;
  undefined8 *puVar15;
  undefined8 **ppuVar16;
  long lVar17;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  undefined8 **ppuStack_278;
  undefined8 *puStack_270;
  undefined8 **ppuStack_268;
  undefined8 *puStack_260;
  undefined8 **ppuStack_258;
  long lStack_1e8;
  undefined8 *apuStack_1e0 [7];
  undefined1 auStack_1a8 [8];
  long *plStack_1a0;
  undefined8 *apuStack_190 [7];
  long lStack_158;
  undefined8 **ppuStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 **ppuStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 **ppuStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined1 uStack_d8;
  undefined8 uStack_c8;
  undefined8 *apuStack_c0 [8];
  long *plStack_80;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  pppuVar7 = &ppuStack_120;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    puVar13 = (undefined8 *)0x0;
    if (param_2[1] == 0) goto LAB_10a341464;
    func_0x000107c3192c(&ppuStack_120,*param_2);
  }
  else {
    puVar13 = param_3;
    if (*(char *)((long)param_2 + 0x17) == '\0') {
LAB_10a341464:
      ppuVar14 = (undefined8 **)&UNK_10f64fe69;
      FUN_10a00946c();
      goto LAB_10a341470;
    }
    lStack_118 = param_2[1];
    ppuStack_120 = (undefined8 **)*param_2;
    lStack_110 = param_2[2];
  }
  uStack_d8 = 0;
  lStack_e0 = 0;
  uStack_e8 = 0;
  ppuStack_f0 = (undefined8 **)0x0;
  lStack_f8 = 0;
  uStack_100 = 0;
  ppuStack_108 = (undefined8 **)0x0;
  uVar9 = param_3[1];
  FUN_10a341184(&uStack_c8,param_1,*param_3,uVar9,param_4);
  puVar13 = &uStack_c8;
  FUN_10a340648(param_1);
  (*(code *)*apuStack_70[0])(apuStack_70);
  if (plStack_80 != (long *)0x0) {
    plVar8 = plStack_80 + 1;
    do {
      lVar11 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
    }
  }
  ppuVar14 = apuStack_c0;
  (*(code *)*apuStack_c0[0])();
  param_2 = (long *)pppuVar7;
  param_4 = uVar9;
  if (lStack_e0 < 0) {
    ppuVar14 = ppuStack_f0;
    __ZdlPv();
    param_2 = (long *)pppuVar7;
    param_4 = uVar9;
  }
  if (lStack_f8 < 0) {
    ppuVar14 = ppuStack_108;
    __ZdlPv();
  }
  if (lStack_110 < 0) {
    ppuVar14 = ppuStack_120;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar14;
  }
LAB_10a341470:
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)puVar13[1];
  FUN_10a341184(&lStack_1e8,ppuVar14,*puVar13,plVar10,param_4);
  plVar8 = &lStack_1e8;
  FUN_10a340180(ppuVar14);
  (*(code *)*apuStack_190[0])(apuStack_190);
  if (plStack_1a0 != (long *)0x0) {
    plVar1 = plStack_1a0 + 1;
    do {
      lVar11 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_1a0 + 0x10))(plStack_1a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1a0);
    }
  }
  ppuVar14 = apuStack_1e0;
  (*(code *)*apuStack_1e0[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return ppuVar14;
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_190[0])(apuStack_190);
  func_0x00010a07a8a8(auStack_1a8);
  (*(code *)*apuStack_1e0[0])(apuStack_1e0);
  __Unwind_Resume();
  puVar13 = (undefined8 *)*param_2;
  if (puVar13 == (undefined8 *)0x0) {
    FUN_10a00946c(&UNK_10f64fd98);
  }
  else {
    puVar12 = (undefined8 *)*plVar8;
    if (puVar12 != (undefined8 *)0x0) {
      puVar15 = ppuVar14[0x20];
      ppuVar14 = (undefined8 **)param_2[1];
      if (ppuVar14 != (undefined8 **)0x0) {
        ppuVar16 = ppuVar14 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
          if (bVar4) {
            *ppuVar16 = (undefined8 *)((long)*ppuVar16 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        puVar12 = (undefined8 *)*plVar8;
      }
      ppuVar16 = (undefined8 **)plVar8[1];
      if (ppuVar16 != (undefined8 **)0x0) {
        ppuVar6 = ppuVar16 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
          if (bVar4) {
            *ppuVar6 = (undefined8 *)((long)*ppuVar6 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar2 = (undefined8 *)*plVar10;
      ppuVar6 = (undefined8 **)plVar10[1];
      if (ppuVar6 != (undefined8 **)0x0) {
        ppuVar5 = ppuVar6 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
          if (bVar4) {
            *ppuVar5 = (undefined8 *)((long)*ppuVar5 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *extraout_x8 = FUN_10a37c4c8;
      extraout_x8[1] = &PTR_FUN_110bc7538;
      ppuVar5 = (undefined8 **)0x38;
      puStack_288 = puVar15;
      puStack_280 = puVar13;
      ppuStack_278 = ppuVar14;
      puStack_270 = puVar12;
      ppuStack_268 = ppuVar16;
      puStack_260 = puVar2;
      ppuStack_258 = ppuVar6;
      __Znwm();
      *ppuVar5 = puVar15;
      ppuVar5[1] = puVar13;
      ppuVar5[2] = ppuVar14;
      if (ppuVar14 != (undefined8 **)0x0) {
        ppuVar14 = ppuVar14 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
          if (bVar4) {
            *ppuVar14 = (undefined8 *)((long)*ppuVar14 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppuVar5[3] = puVar12;
      ppuVar5[4] = ppuVar16;
      if (ppuVar16 != (undefined8 **)0x0) {
        ppuVar16 = ppuVar16 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
          if (bVar4) {
            *ppuVar16 = (undefined8 *)((long)*ppuVar16 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppuVar5[5] = puVar2;
      ppuVar5[6] = ppuVar6;
      if (ppuVar6 != (undefined8 **)0x0) {
        ppuVar14 = ppuVar6 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
          if (bVar4) {
            *ppuVar14 = (undefined8 *)((long)*ppuVar14 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      extraout_x8[2] = ppuVar5;
      lVar11 = plVar8[1];
      lVar17 = *plVar8;
      extraout_x8[9] = plVar8[1];
      extraout_x8[8] = lVar17;
      if (lVar11 != 0) {
        plVar8 = (long *)(lVar11 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = *plVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      extraout_x8[0xf] = 0;
      extraout_x8[0xe] = 0;
      extraout_x8[0x11] = 0;
      extraout_x8[0x10] = 0;
      extraout_x8[0xd] = 0;
      extraout_x8[0xc] = 0;
      extraout_x8[10] = FUN_10a352044;
      extraout_x8[0xb] = &PTR_DAT_110950c70;
      if (ppuVar6 != (undefined8 **)0x0) {
        ppuVar14 = ppuVar6 + 1;
        do {
          puVar13 = *ppuVar14;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
          if (bVar4) {
            *ppuVar14 = (undefined8 *)((long)puVar13 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar13 == (undefined8 *)0x0) {
          (*(code *)(*ppuVar6)[2])(ppuVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
          ppuVar5 = ppuVar6;
        }
      }
      ppuVar14 = ppuStack_268;
      if (ppuStack_268 != (undefined8 **)0x0) {
        ppuVar16 = ppuStack_268 + 1;
        do {
          puVar13 = *ppuVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
          if (bVar4) {
            *ppuVar16 = (undefined8 *)((long)puVar13 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar13 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_268)[2])(ppuStack_268);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
          ppuVar5 = ppuVar14;
        }
      }
      ppuVar14 = ppuStack_278;
      if (ppuStack_278 != (undefined8 **)0x0) {
        ppuVar16 = ppuStack_278 + 1;
        do {
          puVar13 = *ppuVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
          if (bVar4) {
            *ppuVar16 = (undefined8 *)((long)puVar13 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar13 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_278)[2])(ppuStack_278);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(ppuVar14);
          return ppuVar14;
        }
      }
      return ppuVar5;
    }
  }
  ppuVar14 = (undefined8 **)&UNK_10f64fdc4;
  FUN_10a00946c();
  FUN_10a34184c(&puStack_288);
  __Unwind_Resume(ppuVar14);
  func_0x00010a0428c0(ppuVar14 + 5);
  func_0x00010a07a8a8(ppuVar14 + 3);
  FUN_10a1cfc50(ppuVar14 + 1);
  return ppuVar14;
}



/* Entry: 10a3414c0; end: 10a3415df;  */

undefined8 ** FUN_10a3414c0(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *extraout_x8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 **ppuVar12;
  undefined8 *puVar13;
  undefined8 **ppuVar14;
  long lVar15;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 **ppuStack_158;
  undefined8 *puStack_150;
  undefined8 **ppuStack_148;
  undefined8 *puStack_140;
  undefined8 **ppuStack_138;
  long lStack_c8;
  undefined8 *apuStack_c0 [7];
  undefined1 auStack_88 [8];
  long *plStack_80;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = (long *)param_3[1];
  FUN_10a341184(&lStack_c8,param_1,*param_3,plVar8,param_4);
  plVar7 = &lStack_c8;
  FUN_10a340180(param_1);
  (*(code *)*apuStack_70[0])(apuStack_70);
  if (plStack_80 != (long *)0x0) {
    plVar1 = plStack_80 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
    }
  }
  ppuVar12 = apuStack_c0;
  (*(code *)*apuStack_c0[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar12;
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_70[0])(apuStack_70);
  func_0x00010a07a8a8(auStack_88);
  (*(code *)*apuStack_c0[0])(apuStack_c0);
  __Unwind_Resume();
  puVar11 = (undefined8 *)*param_2;
  if (puVar11 == (undefined8 *)0x0) {
    FUN_10a00946c(&UNK_10f64fd98);
  }
  else {
    puVar10 = (undefined8 *)*plVar7;
    if (puVar10 != (undefined8 *)0x0) {
      puVar13 = ppuVar12[0x20];
      ppuVar12 = (undefined8 **)param_2[1];
      if (ppuVar12 != (undefined8 **)0x0) {
        ppuVar14 = ppuVar12 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
          if (bVar4) {
            *ppuVar14 = (undefined8 *)((long)*ppuVar14 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        puVar10 = (undefined8 *)*plVar7;
      }
      ppuVar14 = (undefined8 **)plVar7[1];
      if (ppuVar14 != (undefined8 **)0x0) {
        ppuVar6 = ppuVar14 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
          if (bVar4) {
            *ppuVar6 = (undefined8 *)((long)*ppuVar6 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar2 = (undefined8 *)*plVar8;
      ppuVar6 = (undefined8 **)plVar8[1];
      if (ppuVar6 != (undefined8 **)0x0) {
        ppuVar5 = ppuVar6 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
          if (bVar4) {
            *ppuVar5 = (undefined8 *)((long)*ppuVar5 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *extraout_x8 = FUN_10a37c4c8;
      extraout_x8[1] = &PTR_FUN_110bc7538;
      ppuVar5 = (undefined8 **)0x38;
      puStack_168 = puVar13;
      puStack_160 = puVar11;
      ppuStack_158 = ppuVar12;
      puStack_150 = puVar10;
      ppuStack_148 = ppuVar14;
      puStack_140 = puVar2;
      ppuStack_138 = ppuVar6;
      __Znwm();
      *ppuVar5 = puVar13;
      ppuVar5[1] = puVar11;
      ppuVar5[2] = ppuVar12;
      if (ppuVar12 != (undefined8 **)0x0) {
        ppuVar12 = ppuVar12 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
          if (bVar4) {
            *ppuVar12 = (undefined8 *)((long)*ppuVar12 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppuVar5[3] = puVar10;
      ppuVar5[4] = ppuVar14;
      if (ppuVar14 != (undefined8 **)0x0) {
        ppuVar14 = ppuVar14 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
          if (bVar4) {
            *ppuVar14 = (undefined8 *)((long)*ppuVar14 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppuVar5[5] = puVar2;
      ppuVar5[6] = ppuVar6;
      if (ppuVar6 != (undefined8 **)0x0) {
        ppuVar12 = ppuVar6 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
          if (bVar4) {
            *ppuVar12 = (undefined8 *)((long)*ppuVar12 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      extraout_x8[2] = ppuVar5;
      lVar9 = plVar7[1];
      lVar15 = *plVar7;
      extraout_x8[9] = plVar7[1];
      extraout_x8[8] = lVar15;
      if (lVar9 != 0) {
        plVar7 = (long *)(lVar9 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = *plVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      extraout_x8[0xf] = 0;
      extraout_x8[0xe] = 0;
      extraout_x8[0x11] = 0;
      extraout_x8[0x10] = 0;
      extraout_x8[0xd] = 0;
      extraout_x8[0xc] = 0;
      extraout_x8[10] = FUN_10a352044;
      extraout_x8[0xb] = &PTR_DAT_110950c70;
      if (ppuVar6 != (undefined8 **)0x0) {
        ppuVar12 = ppuVar6 + 1;
        do {
          puVar11 = *ppuVar12;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
          if (bVar4) {
            *ppuVar12 = (undefined8 *)((long)puVar11 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar11 == (undefined8 *)0x0) {
          (*(code *)(*ppuVar6)[2])(ppuVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
          ppuVar5 = ppuVar6;
        }
      }
      ppuVar12 = ppuStack_148;
      if (ppuStack_148 != (undefined8 **)0x0) {
        ppuVar14 = ppuStack_148 + 1;
        do {
          puVar11 = *ppuVar14;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
          if (bVar4) {
            *ppuVar14 = (undefined8 *)((long)puVar11 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar11 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_148)[2])(ppuStack_148);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar12);
          ppuVar5 = ppuVar12;
        }
      }
      ppuVar12 = ppuStack_158;
      if (ppuStack_158 != (undefined8 **)0x0) {
        ppuVar14 = ppuStack_158 + 1;
        do {
          puVar11 = *ppuVar14;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
          if (bVar4) {
            *ppuVar14 = (undefined8 *)((long)puVar11 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar11 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_158)[2])(ppuStack_158);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(ppuVar12);
          return ppuVar12;
        }
      }
      return ppuVar5;
    }
  }
  ppuVar12 = (undefined8 **)&UNK_10f64fdc4;
  FUN_10a00946c();
  FUN_10a34184c(&puStack_168);
  __Unwind_Resume(ppuVar12);
  func_0x00010a0428c0(ppuVar12 + 5);
  func_0x00010a07a8a8(ppuVar12 + 3);
  FUN_10a1cfc50(ppuVar12 + 1);
  return ppuVar12;
}



/* Entry: 10a3415e0; end: 10a34184b;  */

long * FUN_10a3415e0(undefined8 *param_1,long param_2,long *param_3,long *param_4,long *param_5)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
  lVar7 = *param_3;
  if (lVar7 == 0) {
    FUN_10a00946c(&UNK_10f64fd98);
  }
  else {
    lVar6 = *param_4;
    if (lVar6 != 0) {
      lVar9 = *(long *)(param_2 + 0x100);
      plVar8 = (long *)param_3[1];
      if (plVar8 != (long *)0x0) {
        plVar10 = plVar8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = *plVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        lVar6 = *param_4;
      }
      plVar10 = (long *)param_4[1];
      if (plVar10 != (long *)0x0) {
        plVar5 = plVar10 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar1 = *param_5;
      plVar5 = (long *)param_5[1];
      if (plVar5 != (long *)0x0) {
        plVar4 = plVar5 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *param_1 = FUN_10a37c4c8;
      param_1[1] = &PTR_FUN_110bc7538;
      plVar4 = (long *)0x38;
      lStack_98 = lVar9;
      lStack_90 = lVar7;
      plStack_88 = plVar8;
      lStack_80 = lVar6;
      plStack_78 = plVar10;
      lStack_70 = lVar1;
      plStack_68 = plVar5;
      __Znwm();
      *plVar4 = lVar9;
      plVar4[1] = lVar7;
      plVar4[2] = (long)plVar8;
      if (plVar8 != (long *)0x0) {
        plVar8 = plVar8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar4[3] = lVar6;
      plVar4[4] = (long)plVar10;
      if (plVar10 != (long *)0x0) {
        plVar10 = plVar10 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = *plVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar4[5] = lVar1;
      plVar4[6] = (long)plVar5;
      if (plVar5 != (long *)0x0) {
        plVar8 = plVar5 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      param_1[2] = plVar4;
      lVar7 = param_4[1];
      lVar6 = *param_4;
      param_1[9] = param_4[1];
      param_1[8] = lVar6;
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      param_1[0xf] = 0;
      param_1[0xe] = 0;
      param_1[0x11] = 0;
      param_1[0x10] = 0;
      param_1[0xd] = 0;
      param_1[0xc] = 0;
      param_1[10] = FUN_10a352044;
      param_1[0xb] = &PTR_DAT_110950c70;
      if (plVar5 != (long *)0x0) {
        plVar8 = plVar5 + 1;
        do {
          lVar7 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          plVar4 = plVar5;
        }
      }
      plVar8 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar10 = plStack_78 + 1;
        do {
          lVar7 = *plVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          plVar4 = plVar8;
        }
      }
      plVar8 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar10 = plStack_88 + 1;
        do {
          lVar7 = *plVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar8);
          return plVar8;
        }
      }
      return plVar4;
    }
  }
  plVar8 = (long *)&UNK_10f64fdc4;
  FUN_10a00946c();
  FUN_10a34184c(&lStack_98);
  __Unwind_Resume(plVar8);
  func_0x00010a0428c0(plVar8 + 5);
  func_0x00010a07a8a8(plVar8 + 3);
  FUN_10a1cfc50(plVar8 + 1);
  return plVar8;
}



/* Entry: 10a34184c; end: 10a341883;  */

long FUN_10a34184c(long param_1)

{
  func_0x00010a0428c0(param_1 + 0x28);
  func_0x00010a07a8a8(param_1 + 0x18);
  FUN_10a1cfc50(param_1 + 8);
  return param_1;
}



/* Entry: 10a341884; end: 10a341a0b;  */

undefined ***
FUN_10a341884(undefined ***param_1,long *param_2,undefined8 param_3,undefined8 param_4,long *param_5
             )

{
  long *plVar1;
  undefined ***pppuVar2;
  code *pcVar3;
  undefined **ppuVar4;
  char cVar5;
  bool bVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined8 **ppuVar9;
  code **ppcVar10;
  code **ppcVar11;
  code *pcVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined ***pppuVar16;
  code *pcVar17;
  code **ppcVar18;
  code **unaff_x22;
  undefined **ppuVar19;
  undefined ***pppuStack_200;
  code *pcStack_1f8;
  undefined8 *apuStack_1f0 [7];
  code *pcStack_1b8;
  code *pcStack_1b0;
  long lStack_1a8;
  code **ppcStack_1a0;
  code **ppcStack_198;
  undefined ***pppuStack_190;
  undefined ***pppuStack_188;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  code *pcStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  code *pcStack_150;
  code *pcStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  long lStack_118;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined ***pppuStack_d8;
  code *pcStack_c8;
  undefined **appuStack_c0 [7];
  undefined1 auStack_88 [8];
  long *plStack_80;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  pppuVar8 = &ppuStack_e0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_d8 = (undefined ***)param_2[4];
  ppuStack_e0 = (undefined **)param_2[3];
  if (param_2[4] != 0) {
    plVar1 = (long *)(param_2[4] + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_10a3415e0(&pcStack_c8,param_1,param_3,param_4);
  ppcVar18 = &pcStack_c8;
  ppcVar10 = &pcStack_c8;
  FUN_10a340180(param_1);
  (*(code *)*apuStack_70[0])(apuStack_70);
  if (plStack_80 != (long *)0x0) {
    plVar1 = plStack_80 + 1;
    do {
      lVar13 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
    }
  }
  pppuVar7 = appuStack_c0;
  (*(code *)*appuStack_c0[0])();
  pppuVar16 = pppuStack_d8;
  if (pppuStack_d8 != (undefined ***)0x0) {
    pppuVar2 = pppuStack_d8 + 1;
    do {
      ppuVar14 = *pppuVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
      if (bVar6) {
        *pppuVar2 = (undefined **)((long)ppuVar14 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (ppuVar14 == (undefined **)0x0) {
      (*(code *)(*pppuStack_d8)[2])(pppuStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar7 = pppuVar16;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return pppuVar7;
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_70[0])(apuStack_70);
  func_0x00010a07a8a8(auStack_88);
  (*(code *)*appuStack_c0[0])(appuStack_c0);
  func_0x00010a0428c0(&ppuStack_e0);
  __Unwind_Resume();
  puStack_f0 = &stack0xfffffffffffffff0;
  pcStack_e8 = FUN_10a341a0c;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar12 = *ppcVar10;
  if (pcVar12 == (code *)0x0) {
    FUN_10a00946c(&UNK_10f64fd98);
  }
  else {
    ppuVar14 = *pppuVar8;
    if (ppuVar14 != (undefined **)0x0) {
      pcVar17 = ppcVar10[1];
      ppuStack_158 = pppuVar7[0x20];
      if (pcVar17 != (code *)0x0) {
        pcVar3 = pcVar17 + 8;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
          if (bVar6) {
            *(long *)pcVar3 = *(long *)pcVar3 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        ppuVar14 = *pppuVar8;
      }
      ppuVar19 = pppuVar8[1];
      if (ppuVar19 != (undefined **)0x0) {
        ppuVar4 = ppuVar19 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar4,0x10);
          if (bVar6) {
            *ppuVar4 = *ppuVar4 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      pcStack_168 = FUN_10a37da50;
      ppuStack_160 = &PTR_FUN_110bc7590;
      if (pcVar17 != (code *)0x0) {
        pcVar3 = pcVar17 + 8;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
          if (bVar6) {
            *(long *)pcVar3 = *(long *)pcVar3 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (ppuVar19 != (undefined **)0x0) {
        ppuVar4 = ppuVar19 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar4,0x10);
          if (bVar6) {
            *ppuVar4 = *ppuVar4 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      ppuStack_120 = pppuVar8[1];
      ppuStack_128 = *pppuVar8;
      if (pppuVar8[1] != (undefined **)0x0) {
        ppuVar4 = pppuVar8[1] + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar4,0x10);
          if (bVar6) {
            *ppuVar4 = *ppuVar4 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      pcStack_150 = pcVar12;
      pcStack_148 = pcVar17;
      ppuStack_140 = ppuVar14;
      ppuStack_138 = ppuVar19;
      if (ppuVar19 != (undefined **)0x0) {
        ppuVar14 = ppuVar19 + 1;
        do {
          puVar15 = *ppuVar14;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
          if (bVar6) {
            *ppuVar14 = puVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar15 == (undefined *)0x0) {
          (**(code **)(*ppuVar19 + 0x10))(ppuVar19);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar19);
        }
      }
      if (pcVar17 != (code *)0x0) {
        pcVar12 = pcVar17 + 8;
        do {
          lVar13 = *(long *)pcVar12;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pcVar12,0x10);
          if (bVar6) {
            *(long *)pcVar12 = lVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*(long *)pcVar17 + 0x10))(pcVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar17);
        }
      }
      ppcVar18 = &pcStack_168;
      unaff_x22 = &pcStack_168;
      ppcVar10 = &pcStack_168;
      FUN_10a341c30(pppuVar7);
      ppuVar14 = ppuStack_120;
      if (ppuStack_120 != (undefined **)0x0) {
        ppuVar19 = ppuStack_120 + 1;
        do {
          puVar15 = *ppuVar19;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
          if (bVar6) {
            *ppuVar19 = puVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar15 == (undefined *)0x0) {
          (**(code **)(*ppuStack_120 + 0x10))(ppuStack_120);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
        }
      }
      pppuVar16 = &ppuStack_160;
      (*(code *)*ppuStack_160)();
      param_1 = pppuVar7;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
        return pppuVar16;
      }
      goto LAB_10a341c08;
    }
  }
  pppuVar16 = (undefined ***)&UNK_10f64fdc4;
  FUN_10a00946c();
LAB_10a341c08:
  ___stack_chk_fail();
  func_0x00010a07a8a8(unaff_x22 + 8);
  (*(code *)*ppuStack_160)(ppcVar18 + 1);
  pppuVar7 = pppuVar16;
  __Unwind_Resume();
  pcStack_178 = FUN_10a341c30;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar11 = ppcVar10;
  ppcStack_1a0 = unaff_x22;
  ppcStack_198 = ppcVar18;
  pppuStack_190 = param_1;
  pppuStack_188 = pppuVar16;
  ppuStack_180 = &puStack_f0;
  (**(code **)(*param_2 + 0x48))(&pppuStack_200,param_2);
  pcStack_1f8 = *ppcVar10;
  (**(code **)(ppcVar10[1] + 0x10))(apuStack_1f0);
  pcStack_1b0 = ppcVar10[9];
  pcStack_1b8 = ppcVar10[8];
  ppcVar10[8] = (code *)0x0;
  ppcVar10[9] = (code *)0x0;
  if (pppuVar7[0x2a] == (undefined **)0x0) {
    ppcVar11 = (code **)pppuVar7[0x20];
    pppuVar8 = pppuVar7 + 0x1c;
    FUN_10a5ae998(pppuVar7[0x1d],&PTR_DAT_110b9f988);
  }
  ppuVar14 = (undefined **)0x68;
  __Znwm();
  pppuVar16 = pppuStack_200;
  *ppuVar14 = (undefined *)0x0;
  ppuVar14[1] = (undefined *)0x0;
  pppuStack_200 = (undefined ***)0x0;
  ppuVar14[2] = (undefined *)pppuVar16;
  ppuVar14[3] = pcStack_1f8;
  ppuVar9 = apuStack_1f0;
  (*(code *)apuStack_1f0[0][2])(ppuVar14 + 4);
  ppuVar14[0xc] = pcStack_1b0;
  ppuVar14[0xb] = pcStack_1b8;
  pcStack_1b8 = (code *)0x0;
  pcStack_1b0 = (code *)0x0;
  ppuVar19 = pppuVar7[0x28];
  *ppuVar14 = (undefined *)ppuVar19;
  ppuVar14[1] = (undefined *)(pppuVar7 + 0x28);
  ppuVar19[1] = (undefined *)ppuVar14;
  pppuVar7[0x28] = ppuVar14;
  pppuVar7[0x2a] = (undefined **)((long)pppuVar7[0x2a] + 1);
  (*(code *)*apuStack_1f0[0])(apuStack_1f0);
  pppuVar7 = pppuStack_200;
  if (pppuStack_200 != (undefined ***)0x0) {
    pppuVar16 = pppuStack_200 + 1;
    do {
      ppuVar14 = *pppuVar16;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pppuVar16,0x10);
      if (bVar6) {
        *pppuVar16 = (undefined **)((long)ppuVar14 - 4);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (((ulong)ppuVar14 & 0x1fffffffc) == 4) {
      do {
        ppuVar14 = *pppuVar16;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppuVar16,0x10);
        if (bVar6) {
          *pppuVar16 = (undefined **)((long)ppuVar14 - 1U);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((undefined **)((long)ppuVar14 - 1U) == (undefined **)0x0) {
        (*(code *)(*pppuStack_200)[1])();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
    ___stack_chk_fail();
    __Unwind_Resume();
    if (ppcVar11 == (code **)0x0) {
      FUN_10a00946c(&UNK_10f64fd98);
    }
    else {
      ppuVar14 = (undefined **)*param_5;
      if (ppuVar14 != (undefined **)0x0) {
        ppuVar19 = (undefined **)ppuVar9[0x20];
        if (pppuVar8 != (undefined ***)0x0) {
          pppuVar16 = pppuVar8 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppuVar16,0x10);
            if (bVar6) {
              *pppuVar16 = (undefined **)((long)*pppuVar16 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          ppuVar14 = (undefined **)*param_5;
        }
        pppuVar16 = (undefined ***)param_5[1];
        if (pppuVar16 != (undefined ***)0x0) {
          pppuVar2 = pppuVar16 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
            if (bVar6) {
              *pppuVar2 = (undefined **)((long)*pppuVar2 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        *pppuVar7 = (undefined **)FUN_10a37dc9c;
        pppuVar7[1] = &PTR_DAT_110bc7618;
        pppuVar7[2] = ppuVar19;
        pppuVar7[3] = ppcVar11;
        pppuVar7[4] = (undefined **)pppuVar8;
        if (pppuVar8 != (undefined ***)0x0) {
          pppuVar2 = pppuVar8 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
            if (bVar6) {
              *pppuVar2 = (undefined **)((long)*pppuVar2 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        pppuVar7[5] = ppuVar14;
        pppuVar7[6] = (undefined **)pppuVar16;
        if (pppuVar16 != (undefined ***)0x0) {
          pppuVar2 = pppuVar16 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
            if (bVar6) {
              *pppuVar2 = (undefined **)((long)*pppuVar2 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        lVar13 = param_5[1];
        ppuVar14 = (undefined **)*param_5;
        pppuVar7[9] = (undefined **)param_5[1];
        pppuVar7[8] = ppuVar14;
        if (lVar13 != 0) {
          plVar1 = (long *)(lVar13 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = *plVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        pppuVar7[0xf] = (undefined **)0x0;
        pppuVar7[0xe] = (undefined **)0x0;
        pppuVar7[0x11] = (undefined **)0x0;
        pppuVar7[0x10] = (undefined **)0x0;
        pppuVar7[0xd] = (undefined **)0x0;
        pppuVar7[0xc] = (undefined **)0x0;
        pppuVar7[10] = (undefined **)FUN_10a352044;
        pppuVar7[0xb] = &PTR_DAT_110950c70;
        if (pppuVar16 != (undefined ***)0x0) {
          pppuVar2 = pppuVar16 + 1;
          do {
            ppuVar14 = *pppuVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
            if (bVar6) {
              *pppuVar2 = (undefined **)((long)ppuVar14 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (ppuVar14 == (undefined **)0x0) {
            (*(code *)(*pppuVar16)[2])(pppuVar16);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar16);
            pppuVar7 = pppuVar16;
          }
        }
        if (pppuVar8 != (undefined ***)0x0) {
          pppuVar16 = pppuVar8 + 1;
          do {
            ppuVar14 = *pppuVar16;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppuVar16,0x10);
            if (bVar6) {
              *pppuVar16 = (undefined **)((long)ppuVar14 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (ppuVar14 == (undefined **)0x0) {
            (*(code *)(*pppuVar8)[2])(pppuVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(pppuVar8);
            return pppuVar8;
          }
        }
        return pppuVar7;
      }
    }
    pppuVar8 = (undefined ***)&UNK_10f64fdc4;
    FUN_10a00946c();
    func_0x00010a07a8a8(pppuVar8 + 9);
    (*(code *)*pppuVar8[2])();
    ppuVar14 = *pppuVar8;
    if (ppuVar14 != (undefined **)0x0) {
      ppuVar19 = ppuVar14 + 1;
      do {
        puVar15 = *ppuVar19;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
        if (bVar6) {
          *ppuVar19 = puVar15 + -4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (((ulong)puVar15 & 0x1fffffffc) == 4) {
        do {
          puVar15 = *ppuVar19;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
          if (bVar6) {
            *ppuVar19 = puVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar15 + -1 == (undefined *)0x0) {
          (**(code **)(*ppuVar14 + 8))();
        }
      }
    }
    return pppuVar8;
  }
  return pppuVar7;
}



/* Entry: 10a341a0c; end: 10a341c2f;  */

undefined ***
FUN_10a341a0c(long param_1,long *param_2,code **param_3,undefined ***param_4,long *param_5)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined ***pppuVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined ***pppuVar7;
  undefined8 **ppuVar8;
  code **ppcVar9;
  code *pcVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  long lVar13;
  long unaff_x20;
  undefined ***pppuVar14;
  code **unaff_x21;
  code *pcVar15;
  code **unaff_x22;
  undefined **ppuVar16;
  undefined ***pppuStack_120;
  code *pcStack_118;
  undefined8 *apuStack_110 [7];
  code *pcStack_d8;
  code *pcStack_d0;
  long lStack_c8;
  code **ppcStack_c0;
  code **ppcStack_b8;
  long lStack_b0;
  undefined ***pppuStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar10 = *param_3;
  if (pcVar10 == (code *)0x0) {
    FUN_10a00946c(&UNK_10f64fd98);
  }
  else {
    ppuVar11 = *param_4;
    if (ppuVar11 != (undefined **)0x0) {
      pcVar15 = param_3[1];
      uStack_78 = *(undefined8 *)(param_1 + 0x100);
      if (pcVar15 != (code *)0x0) {
        pcVar1 = pcVar15 + 8;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar6) {
            *(long *)pcVar1 = *(long *)pcVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        ppuVar11 = *param_4;
      }
      ppuVar16 = param_4[1];
      if (ppuVar16 != (undefined **)0x0) {
        ppuVar2 = ppuVar16 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
          if (bVar6) {
            *ppuVar2 = *ppuVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      pcStack_88 = FUN_10a37da50;
      ppuStack_80 = &PTR_FUN_110bc7590;
      if (pcVar15 != (code *)0x0) {
        pcVar1 = pcVar15 + 8;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar6) {
            *(long *)pcVar1 = *(long *)pcVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (ppuVar16 != (undefined **)0x0) {
        ppuVar2 = ppuVar16 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
          if (bVar6) {
            *ppuVar2 = *ppuVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      ppuStack_40 = param_4[1];
      ppuStack_48 = *param_4;
      if (param_4[1] != (undefined **)0x0) {
        ppuVar2 = param_4[1] + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
          if (bVar6) {
            *ppuVar2 = *ppuVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      pcStack_70 = pcVar10;
      pcStack_68 = pcVar15;
      ppuStack_60 = ppuVar11;
      ppuStack_58 = ppuVar16;
      if (ppuVar16 != (undefined **)0x0) {
        ppuVar11 = ppuVar16 + 1;
        do {
          puVar12 = *ppuVar11;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar6) {
            *ppuVar11 = puVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar12 == (undefined *)0x0) {
          (**(code **)(*ppuVar16 + 0x10))(ppuVar16);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar16);
        }
      }
      if (pcVar15 != (code *)0x0) {
        pcVar10 = pcVar15 + 8;
        do {
          lVar13 = *(long *)pcVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pcVar10,0x10);
          if (bVar6) {
            *(long *)pcVar10 = lVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*(long *)pcVar15 + 0x10))(pcVar15);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar15);
        }
      }
      unaff_x21 = &pcStack_88;
      unaff_x22 = &pcStack_88;
      param_3 = &pcStack_88;
      FUN_10a341c30(param_1);
      ppuVar11 = ppuStack_40;
      if (ppuStack_40 != (undefined **)0x0) {
        ppuVar16 = ppuStack_40 + 1;
        do {
          puVar12 = *ppuVar16;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
          if (bVar6) {
            *ppuVar16 = puVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar12 == (undefined *)0x0) {
          (**(code **)(*ppuStack_40 + 0x10))(ppuStack_40);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar11);
        }
      }
      pppuVar7 = &ppuStack_80;
      (*(code *)*ppuStack_80)();
      unaff_x20 = param_1;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
        return pppuVar7;
      }
      goto LAB_10a341c08;
    }
  }
  pppuVar7 = (undefined ***)&UNK_10f64fdc4;
  FUN_10a00946c();
LAB_10a341c08:
  ___stack_chk_fail();
  func_0x00010a07a8a8(unaff_x22 + 8);
  (*(code *)*ppuStack_80)(unaff_x21 + 1);
  pppuVar14 = pppuVar7;
  __Unwind_Resume();
  pcStack_98 = FUN_10a341c30;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar9 = param_3;
  ppcStack_c0 = unaff_x22;
  ppcStack_b8 = unaff_x21;
  lStack_b0 = unaff_x20;
  pppuStack_a8 = pppuVar7;
  puStack_a0 = &stack0xfffffffffffffff0;
  (**(code **)(*param_2 + 0x48))(&pppuStack_120,param_2);
  pcStack_118 = *param_3;
  (**(code **)(param_3[1] + 0x10))(apuStack_110);
  pcStack_d0 = param_3[9];
  pcStack_d8 = param_3[8];
  param_3[8] = (code *)0x0;
  param_3[9] = (code *)0x0;
  if (pppuVar14[0x2a] == (undefined **)0x0) {
    ppcVar9 = (code **)pppuVar14[0x20];
    param_4 = pppuVar14 + 0x1c;
    FUN_10a5ae998(pppuVar14[0x1d],&PTR_DAT_110b9f988);
  }
  ppuVar11 = (undefined **)0x68;
  __Znwm();
  pppuVar7 = pppuStack_120;
  *ppuVar11 = (undefined *)0x0;
  ppuVar11[1] = (undefined *)0x0;
  pppuStack_120 = (undefined ***)0x0;
  ppuVar11[2] = (undefined *)pppuVar7;
  ppuVar11[3] = pcStack_118;
  ppuVar8 = apuStack_110;
  (*(code *)apuStack_110[0][2])(ppuVar11 + 4);
  ppuVar11[0xc] = pcStack_d0;
  ppuVar11[0xb] = pcStack_d8;
  pcStack_d8 = (code *)0x0;
  pcStack_d0 = (code *)0x0;
  ppuVar16 = pppuVar14[0x28];
  *ppuVar11 = (undefined *)ppuVar16;
  ppuVar11[1] = (undefined *)(pppuVar14 + 0x28);
  ppuVar16[1] = (undefined *)ppuVar11;
  pppuVar14[0x28] = ppuVar11;
  pppuVar14[0x2a] = (undefined **)((long)pppuVar14[0x2a] + 1);
  (*(code *)*apuStack_110[0])(apuStack_110);
  pppuVar7 = pppuStack_120;
  if (pppuStack_120 != (undefined ***)0x0) {
    pppuVar14 = pppuStack_120 + 1;
    do {
      ppuVar11 = *pppuVar14;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pppuVar14,0x10);
      if (bVar6) {
        *pppuVar14 = (undefined **)((long)ppuVar11 - 4);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (((ulong)ppuVar11 & 0x1fffffffc) == 4) {
      do {
        ppuVar11 = *pppuVar14;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppuVar14,0x10);
        if (bVar6) {
          *pppuVar14 = (undefined **)((long)ppuVar11 - 1U);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((undefined **)((long)ppuVar11 - 1U) == (undefined **)0x0) {
        (*(code *)(*pppuStack_120)[1])();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
    ___stack_chk_fail();
    __Unwind_Resume();
    if (ppcVar9 == (code **)0x0) {
      FUN_10a00946c(&UNK_10f64fd98);
    }
    else {
      ppuVar11 = (undefined **)*param_5;
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar16 = (undefined **)ppuVar8[0x20];
        if (param_4 != (undefined ***)0x0) {
          pppuVar14 = param_4 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppuVar14,0x10);
            if (bVar6) {
              *pppuVar14 = (undefined **)((long)*pppuVar14 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          ppuVar11 = (undefined **)*param_5;
        }
        pppuVar14 = (undefined ***)param_5[1];
        if (pppuVar14 != (undefined ***)0x0) {
          pppuVar3 = pppuVar14 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppuVar3,0x10);
            if (bVar6) {
              *pppuVar3 = (undefined **)((long)*pppuVar3 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        *pppuVar7 = (undefined **)FUN_10a37dc9c;
        pppuVar7[1] = &PTR_DAT_110bc7618;
        pppuVar7[2] = ppuVar16;
        pppuVar7[3] = ppcVar9;
        pppuVar7[4] = (undefined **)param_4;
        if (param_4 != (undefined ***)0x0) {
          pppuVar3 = param_4 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppuVar3,0x10);
            if (bVar6) {
              *pppuVar3 = (undefined **)((long)*pppuVar3 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        pppuVar7[5] = ppuVar11;
        pppuVar7[6] = (undefined **)pppuVar14;
        if (pppuVar14 != (undefined ***)0x0) {
          pppuVar3 = pppuVar14 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppuVar3,0x10);
            if (bVar6) {
              *pppuVar3 = (undefined **)((long)*pppuVar3 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        lVar13 = param_5[1];
        ppuVar11 = (undefined **)*param_5;
        pppuVar7[9] = (undefined **)param_5[1];
        pppuVar7[8] = ppuVar11;
        if (lVar13 != 0) {
          plVar4 = (long *)(lVar13 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar6) {
              *plVar4 = *plVar4 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        pppuVar7[0xf] = (undefined **)0x0;
        pppuVar7[0xe] = (undefined **)0x0;
        pppuVar7[0x11] = (undefined **)0x0;
        pppuVar7[0x10] = (undefined **)0x0;
        pppuVar7[0xd] = (undefined **)0x0;
        pppuVar7[0xc] = (undefined **)0x0;
        pppuVar7[10] = (undefined **)FUN_10a352044;
        pppuVar7[0xb] = &PTR_DAT_110950c70;
        if (pppuVar14 != (undefined ***)0x0) {
          pppuVar3 = pppuVar14 + 1;
          do {
            ppuVar11 = *pppuVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppuVar3,0x10);
            if (bVar6) {
              *pppuVar3 = (undefined **)((long)ppuVar11 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (ppuVar11 == (undefined **)0x0) {
            (*(code *)(*pppuVar14)[2])(pppuVar14);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar14);
            pppuVar7 = pppuVar14;
          }
        }
        if (param_4 != (undefined ***)0x0) {
          pppuVar14 = param_4 + 1;
          do {
            ppuVar11 = *pppuVar14;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppuVar14,0x10);
            if (bVar6) {
              *pppuVar14 = (undefined **)((long)ppuVar11 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (ppuVar11 == (undefined **)0x0) {
            (*(code *)(*param_4)[2])(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(param_4);
            return param_4;
          }
        }
        return pppuVar7;
      }
    }
    pppuVar7 = (undefined ***)&UNK_10f64fdc4;
    FUN_10a00946c();
    func_0x00010a07a8a8(pppuVar7 + 9);
    (*(code *)*pppuVar7[2])();
    ppuVar11 = *pppuVar7;
    if (ppuVar11 != (undefined **)0x0) {
      ppuVar16 = ppuVar11 + 1;
      do {
        puVar12 = *ppuVar16;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
        if (bVar6) {
          *ppuVar16 = puVar12 + -4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (((ulong)puVar12 & 0x1fffffffc) == 4) {
        do {
          puVar12 = *ppuVar16;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
          if (bVar6) {
            *ppuVar16 = puVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar12 + -1 == (undefined *)0x0) {
          (**(code **)(*ppuVar11 + 8))();
        }
      }
    }
    return pppuVar7;
  }
  return pppuVar7;
}



/* Entry: 10a341c30; end: 10a341dbb;  */

long * FUN_10a341c30(long param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  undefined8 **ppuVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plStack_90;
  long lStack_88;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = param_3;
  (**(code **)(*param_2 + 0x48))(&plStack_90,param_2);
  lStack_88 = *param_3;
  (**(code **)(param_3[1] + 0x10))(apuStack_80);
  lStack_40 = param_3[9];
  lStack_48 = param_3[8];
  param_3[8] = 0;
  param_3[9] = 0;
  if (*(long *)(param_1 + 0x150) == 0) {
    plVar8 = *(long **)(param_1 + 0x100);
    param_4 = (long *)(param_1 + 0xe0);
    FUN_10a5ae998(*(undefined8 *)(param_1 + 0xe8),&PTR_DAT_110b9f988);
  }
  plVar5 = (long *)0x68;
  __Znwm();
  plVar6 = plStack_90;
  *plVar5 = 0;
  plVar5[1] = 0;
  plStack_90 = (long *)0x0;
  plVar5[2] = (long)plVar6;
  plVar5[3] = lStack_88;
  ppuVar7 = apuStack_80;
  (*(code *)apuStack_80[0][2])(plVar5 + 4);
  plVar5[0xc] = lStack_40;
  plVar5[0xb] = lStack_48;
  lStack_48 = 0;
  lStack_40 = 0;
  lVar9 = *(long *)(param_1 + 0x140);
  *plVar5 = lVar9;
  plVar5[1] = param_1 + 0x140;
  *(long **)(lVar9 + 8) = plVar5;
  *(long **)(param_1 + 0x140) = plVar5;
  *(long *)(param_1 + 0x150) = *(long *)(param_1 + 0x150) + 1;
  (*(code *)*apuStack_80[0])(apuStack_80);
  plVar6 = plStack_90;
  if (plStack_90 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_90 + 1);
    do {
      uVar10 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar10 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar10 & 0x1fffffffc) == 4) {
      do {
        uVar10 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar10 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*plStack_90 + 8))();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    __Unwind_Resume();
    if (plVar8 == (long *)0x0) {
      FUN_10a00946c(&UNK_10f64fd98);
    }
    else {
      lVar9 = *param_5;
      if (lVar9 != 0) {
        puVar11 = ppuVar7[0x20];
        if (param_4 != (long *)0x0) {
          plVar5 = param_4 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar4) {
              *plVar5 = *plVar5 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          lVar9 = *param_5;
        }
        plVar5 = (long *)param_5[1];
        if (plVar5 != (long *)0x0) {
          plVar2 = plVar5 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = *plVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        *plVar6 = (long)FUN_10a37dc9c;
        plVar6[1] = (long)&PTR_DAT_110bc7618;
        plVar6[2] = (long)puVar11;
        plVar6[3] = (long)plVar8;
        plVar6[4] = (long)param_4;
        if (param_4 != (long *)0x0) {
          plVar8 = param_4 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar4) {
              *plVar8 = *plVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plVar6[5] = lVar9;
        plVar6[6] = (long)plVar5;
        if (plVar5 != (long *)0x0) {
          plVar8 = plVar5 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar4) {
              *plVar8 = *plVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        lVar9 = param_5[1];
        lVar12 = *param_5;
        plVar6[9] = param_5[1];
        plVar6[8] = lVar12;
        if (lVar9 != 0) {
          plVar8 = (long *)(lVar9 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar4) {
              *plVar8 = *plVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plVar6[0xf] = 0;
        plVar6[0xe] = 0;
        plVar6[0x11] = 0;
        plVar6[0x10] = 0;
        plVar6[0xd] = 0;
        plVar6[0xc] = 0;
        plVar6[10] = (long)FUN_10a352044;
        plVar6[0xb] = (long)&PTR_DAT_110950c70;
        if (plVar5 != (long *)0x0) {
          plVar8 = plVar5 + 1;
          do {
            lVar9 = *plVar8;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar4) {
              *plVar8 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
            plVar6 = plVar5;
          }
        }
        if (param_4 != (long *)0x0) {
          plVar8 = param_4 + 1;
          do {
            lVar9 = *plVar8;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar4) {
              *plVar8 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*param_4 + 0x10))(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(param_4);
            return param_4;
          }
        }
        return plVar6;
      }
    }
    plVar8 = (long *)&UNK_10f64fdc4;
    FUN_10a00946c();
    func_0x00010a07a8a8(plVar8 + 9);
    (**(code **)plVar8[2])();
    plVar6 = (long *)*plVar8;
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar10 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar10 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar10 & 0x1fffffffc) == 4) {
        do {
          uVar10 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar10 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar10 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    return plVar8;
  }
  return plVar6;
}



/* Entry: 10a341dbc; end: 10a341fc3;  */

long * FUN_10a341dbc(long *param_1,long param_2,long param_3,long *param_4,long *param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  
  if (param_3 == 0) {
    FUN_10a00946c(&UNK_10f64fd98);
  }
  else {
    lVar5 = *param_5;
    if (lVar5 != 0) {
      lVar6 = *(long *)(param_2 + 0x100);
      if (param_4 != (long *)0x0) {
        plVar8 = param_4 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        lVar5 = *param_5;
      }
      plVar8 = (long *)param_5[1];
      if (plVar8 != (long *)0x0) {
        plVar4 = plVar8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *param_1 = (long)FUN_10a37dc9c;
      param_1[1] = (long)&PTR_DAT_110bc7618;
      param_1[2] = lVar6;
      param_1[3] = param_3;
      param_1[4] = (long)param_4;
      if (param_4 != (long *)0x0) {
        plVar4 = param_4 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      param_1[5] = lVar5;
      param_1[6] = (long)plVar8;
      if (plVar8 != (long *)0x0) {
        plVar4 = plVar8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar5 = param_5[1];
      lVar6 = *param_5;
      param_1[9] = param_5[1];
      param_1[8] = lVar6;
      if (lVar5 != 0) {
        plVar4 = (long *)(lVar5 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      param_1[0xf] = 0;
      param_1[0xe] = 0;
      param_1[0x11] = 0;
      param_1[0x10] = 0;
      param_1[0xd] = 0;
      param_1[0xc] = 0;
      param_1[10] = (long)FUN_10a352044;
      param_1[0xb] = (long)&PTR_DAT_110950c70;
      if (plVar8 != (long *)0x0) {
        plVar4 = plVar8 + 1;
        do {
          lVar5 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          param_1 = plVar8;
        }
      }
      if (param_4 != (long *)0x0) {
        plVar8 = param_4 + 1;
        do {
          lVar5 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*param_4 + 0x10))(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(param_4);
          return param_4;
        }
      }
      return param_1;
    }
  }
  plVar8 = (long *)&UNK_10f64fdc4;
  FUN_10a00946c();
  func_0x00010a07a8a8(plVar8 + 9);
  (**(code **)plVar8[2])();
  plVar4 = (long *)*plVar8;
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  return plVar8;
}



/* Entry: 10a341fc4; end: 10a342183;  */

undefined8 * FUN_10a341fc4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 *puStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  uVar6 = *param_3;
  if (*(char *)((long)param_3 + 0x1f) < '\0') {
    func_0x000107c3192c(&uStack_a8,param_3[1],param_3[2]);
  }
  else {
    uStack_a0 = param_3[2];
    uStack_a8 = param_3[1];
    lStack_98 = param_3[3];
  }
  uStack_88 = param_3[5];
  uStack_90 = param_3[4];
  ppuStack_80 = &PTR_FUN_110bc5f08;
  puVar4 = (undefined8 *)0x30;
  __Znwm();
  *puVar4 = uVar6;
  if (lStack_98 < 0) {
    func_0x000107c3192c(puVar4 + 1,uStack_a8,uStack_a0);
  }
  else {
    puVar4[2] = uStack_a0;
    puVar4[1] = uStack_a8;
    puVar4[3] = lStack_98;
  }
  puVar4[5] = uStack_88;
  puVar4[4] = uStack_90;
  plVar5 = (long *)0x48;
  puStack_78 = puVar4;
  __Znwm();
  plVar5[2] = (long)&PTR_FUN_110bc5f08;
  plVar5[3] = (long)puVar4;
  puStack_78 = (undefined8 *)0x0;
  puVar4 = (undefined8 *)param_2[0xb];
  lVar7 = param_2[0xc];
  *plVar5 = (long)(param_2 + 10);
  plVar5[1] = (long)puVar4;
  *puVar4 = plVar5;
  param_2[0xb] = plVar5;
  param_2[0xc] = lVar7 + 1;
  FUN_10a352220(&ppuStack_80);
  if (lStack_98 < 0) {
    __ZdlPv(uStack_a8);
  }
  uVar6 = param_2[0xb];
  puVar4 = param_2 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  uVar9 = param_2[1];
  uVar8 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = uVar6;
  param_1[2] = uVar9;
  param_1[1] = uVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar4;
  }
  ___stack_chk_fail();
  __ZdlPv(uVar6);
  if (lStack_98 < 0) {
    __ZdlPv(uStack_a8);
  }
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  __Unwind_Resume();
  plVar5 = (long *)puVar4[2];
  if (plVar5 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar5 != (long *)0x0) {
      if (puVar4[1] != 0) {
        FUN_10a05c0fc(puVar4[1],*puVar4);
      }
      plVar1 = plVar5 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (puVar4[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return puVar4;
}



/* Entry: 10a342184; end: 10a342203;  */

undefined8 * FUN_10a342184(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (param_1[1] != 0) {
        FUN_10a05c0fc(param_1[1],*param_1);
      }
      plVar1 = plVar4 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (param_1[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return param_1;
}



/* Entry: 10a342204; end: 10a34282f;  */

/* WARNING: Removing unreachable block (ram,0x00010a34243c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a342204(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 ****ppppuVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 ***pppuVar14;
  undefined8 ****ppppuStack_b0;
  long *plStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined7 uStack_68;
  char cStack_61;
  undefined8 ***pppuStack_60;
  long *plStack_58;
  long alStack_50 [2];
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppppuVar6 = &pppuStack_60;
  FUN_10a342830(ppppuVar6,param_2,param_3,param_4);
  func_0x00010ad0321c();
  if ((ulong)*(byte *)(*param_4 + 0x20) < 3) {
    puVar9 = (&PTR_DAT_110bc89b0)[*(byte *)(*param_4 + 0x20)];
  }
  else {
    puVar9 = &UNK_10f68581c;
  }
  func_0x000107c2b054(&ppppuStack_b0,puVar9);
  FUN_10ad016b8(&lStack_78,ppppuVar6,&ppppuStack_b0);
  if (lStack_a0 < 0) {
    __ZdlPv();
    ppppuVar6 = ppppuStack_b0;
  }
  FUN_109d1a80c();
  pppuVar14 = ppppuVar6[9];
  plStack_a8 = plStack_58;
  ppppuStack_b0 = (undefined8 ****)pppuStack_60;
  if (plStack_58 != (long *)0x0) {
    plVar8 = plStack_58 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (cStack_61 < '\0') {
    func_0x000107c3192c(&lStack_a0,lStack_78,uStack_70);
  }
  else {
    uStack_98 = uStack_70;
    lStack_a0 = lStack_78;
    uStack_90 = CONCAT17(cStack_61,uStack_68);
  }
  plStack_80 = (long *)param_4[1];
  lStack_88 = *param_4;
  if (param_4[1] != 0) {
    plVar8 = (long *)(param_4[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar7 = (undefined8 *)0xa0;
  __Znwm();
  *puVar7 = FUN_10a38a280;
  puVar7[1] = FUN_10a38a564;
  FUN_10a352600(puVar7 + 2);
  lVar10 = puVar7[7];
  if (lVar10 != 0) {
    plVar8 = (long *)(lVar10 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar10;
  puVar7[10] = plStack_a8;
  puVar7[9] = ppppuStack_b0;
  ppppuStack_b0 = (undefined8 ****)0x0;
  plStack_a8 = (long *)0x0;
  if (uStack_90 < 0) {
    func_0x000107c3192c(puVar7 + 0xb,lStack_a0,uStack_98);
  }
  else {
    puVar7[0xc] = uStack_98;
    puVar7[0xb] = lStack_a0;
    puVar7[0xd] = uStack_90;
  }
  puVar7[0xf] = plStack_80;
  puVar7[0xe] = lStack_88;
  if (plStack_80 != (long *)0x0) {
    plVar8 = plStack_80 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar7[0x10] = pppuVar14;
  *(undefined1 *)(puVar7 + 0x11) = 0;
  *(undefined1 *)(puVar7 + 0x13) = 0;
  alStack_50[0] = 0;
  FUN_109d18960(puVar7 + 2,pppuVar14,alStack_50);
  if (alStack_50[0] == 0) {
    if ((*(byte *)(puVar7 + 0x11) & 1) == 0) {
      puStack_38 = (undefined8 *)puVar7[0x10];
      alStack_50[1] = 0;
      puStack_40 = puVar7;
      (**(code **)*puStack_38)(puStack_38,alStack_50 + 1);
      __ZNSt13exception_ptrD1Ev(alStack_50);
LAB_10a3425e4:
      plVar8 = plStack_80;
      if (plStack_80 != (long *)0x0) {
        plVar2 = plStack_80 + 1;
        do {
          lVar10 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_80 + 0x10))(plStack_80);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (uStack_90._7_1_ < '\0') {
        __ZdlPv(lStack_a0);
      }
      plVar8 = plStack_a8;
      if (plStack_a8 != (long *)0x0) {
        plVar2 = plStack_a8 + 1;
        do {
          lVar10 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (cStack_61 < '\0') {
        __ZdlPv(lStack_78);
      }
      if (plStack_58 != (long *)0x0) {
        plVar8 = plStack_58 + 1;
        do {
          lVar10 = *plVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
        }
      }
      return;
    }
    __ZNSt13exception_ptrD1Ev(alStack_50);
    FUN_10a3523ac(puVar7 + 0x12,puVar7 + 9);
    puVar7[0x10] = puVar7[0x12];
    plVar8 = (long *)(puVar7[0x12] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(puVar7[0x10] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar7 + 0x13) = 1;
      lVar10 = puVar7[0x10];
      plVar8 = (long *)(lVar10 + 0x10);
      puVar11 = (undefined8 *)puVar7[3];
      do {
        lVar13 = *plVar8;
        if (lVar13 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            alStack_50[1] = 0;
            puStack_40 = puVar7;
            puStack_38 = puVar11;
            func_0x000109d1b588(lVar10 + 0x18,alStack_50 + 1);
            *(undefined8 *)(lVar10 + 0x10) = 0;
            goto LAB_10a3425e4;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar13 >> 1 & 1) == 0);
    }
    lVar10 = puVar7[0x10];
    if (((uint)*(undefined8 *)(puVar7[0x10] + 0x10) >> 5 & 1) == 0) {
      if ((*(byte *)(lVar10 + 0xa8) & 1) != 0) {
        func_0x00010a3522ec(puVar7 + 2,lVar10 + 0x98);
        plVar8 = (long *)puVar7[0x10];
        if (plVar8 != (long *)0x0) {
          puVar1 = (ulong *)(plVar8 + 1);
          do {
            uVar12 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar12 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar12 & 0x1fffffffc) == 4) {
            do {
              uVar12 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar12 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar12 - 1 == 0) {
              (**(code **)(*plVar8 + 8))();
            }
          }
        }
        plVar8 = (long *)puVar7[0x12];
        if (plVar8 != (long *)0x0) {
          puVar1 = (ulong *)(plVar8 + 1);
          do {
            uVar12 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar12 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar12 & 0x1fffffffc) == 4) {
            do {
              uVar12 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar12 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar12 - 1 == 0) {
              (**(code **)(*plVar8 + 8))();
            }
          }
        }
        plVar8 = (long *)puVar7[0xf];
        if (plVar8 != (long *)0x0) {
          plVar2 = plVar8 + 1;
          do {
            lVar10 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = lVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        if (*(char *)((long)puVar7 + 0x6f) < '\0') {
          __ZdlPv(puVar7[0xb]);
        }
        plVar8 = (long *)puVar7[10];
        if (plVar8 != (long *)0x0) {
          plVar2 = plVar8 + 1;
          do {
            lVar10 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = lVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        func_0x000109d1a1d0(puVar7 + 2);
        __ZdlPv(puVar7);
        goto LAB_10a3425e4;
      }
    }
    else {
      func_0x0001092af97c(lVar10 + 0x90);
    }
  }
  else {
    func_0x0001092af97c(alStack_50);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a3426d8);
  (*pcVar5)();
}



/* Entry: 10a342830; end: 10a3429fb;  */

void FUN_10a342830(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lStack_58;
  long *plStack_50;
  undefined4 uStack_44;
  undefined8 uStack_40;
  long *plStack_38;
  
  uVar9 = (ulong)*(byte *)(*(long *)(param_2 + 0x100) + 0x29);
  if (5 < uVar9) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a3429e8);
    (*pcVar6)();
  }
  FUN_10aba1500(param_1,*(undefined8 *)(*(long *)(param_2 + 0x100) + uVar9 * 8 + 0x30),param_3,0);
  if ((*(byte *)(*param_4 + 0x18) & 1) != 0) {
    return;
  }
  lVar11 = *param_1;
  iVar3 = *(int *)(lVar11 + 0x24);
  if (iVar3 == 3) {
    return;
  }
  puVar7 = *(undefined8 **)(param_2 + 0x160);
  if ((puVar7 == (undefined8 *)0x0) ||
     (*(int *)(param_2 + 0x158) != iVar3 || *(int *)(param_2 + 0x15c) != 3)) {
    *(int *)(param_2 + 0x158) = iVar3;
    *(undefined4 *)(param_2 + 0x15c) = 3;
    FUN_10a1b43e4(&uStack_40,iVar3,3);
    func_0x00010a343394(param_2 + 0x160,&uStack_40);
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        lVar10 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
    }
    puVar7 = *(undefined8 **)(param_2 + 0x160);
    if (puVar7 != (undefined8 *)0x0) goto LAB_10a342918;
    ppuVar8 = &PTR_PTR_113301cf8;
    FUN_10ae079a0(0,&PTR_PTR_113301cf8);
    FUN_10ae07cd4(ppuVar8,&PTR_PTR_113301cf8);
    lStack_58 = 0;
    plStack_50 = (long *)0x0;
  }
  else {
LAB_10a342918:
    uStack_40 = *(undefined8 *)(lVar11 + 0x10);
    uStack_44 = 0;
    (**(code **)*puVar7)(&lStack_58,puVar7,lVar11,&uStack_44,&uStack_40);
    if (lStack_58 != 0) {
      FUN_10a2382fc(param_1,&lStack_58);
      goto LAB_10a342998;
    }
  }
  ppuVar8 = &PTR_PTR_113301f00;
  FUN_10ae079a0(0,&PTR_PTR_113301f00);
  FUN_10ae07cd4(ppuVar8,&PTR_PTR_113301f00);
LAB_10a342998:
  plVar1 = plStack_50;
  if (plStack_50 != (long *)0x0) {
    plVar2 = plStack_50 + 1;
    do {
      lVar11 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a3429fc; end: 10a342a33;  */

long FUN_10a3429fc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a37fbe8(param_1 + 0x28);
  if (*(char *)(param_1 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
  }
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a342a34; end: 10a342b13;  */

void FUN_10a342a34(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  
  (**(code **)(*param_2 + 200))();
  plVar5 = (long *)param_2[1];
  if (plVar5 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar5 != (long *)0x0) {
      param_2 = (long *)*param_2;
      if (param_2 != (long *)0x0) {
        (**(code **)(*param_2 + 0x10))(param_1,param_2,0x10);
        plVar1 = plVar5 + 1;
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 != 0) {
          return;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return;
      }
    }
  }
  FUN_10a00946c(&UNK_10f650108);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a342b00);
  (*pcVar4)();
}



/* Entry: 10a342b14; end: 10a342b93;  */

void FUN_10a342b14(void)

{
  int iVar1;
  
  if ((bRam00000001137eafd0 & 1) == 0) {
    iVar1 = 0x137eafd0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10a352754();
      ___cxa_atexit(PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_110346340
                    ,0x1137eafd8,0x100000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1137eafd0);
      return;
    }
  }
  return;
}



/* Entry: 10a342b94; end: 10a342dff;  */

undefined8 * FUN_10a342b94(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  uStack_d8 = param_3[1];
  uStack_e0 = *param_3;
  uStack_d0 = param_3[2];
  uStack_c0 = param_3[4];
  uStack_c8 = param_3[3];
  param_3[3] = 0;
  param_3[4] = 0;
  lStack_b8 = param_3[5];
  uVar7 = param_3[6];
  param_3[5] = 0;
  plVar8 = (long *)param_3[7];
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar9 = param_3[8];
  plVar2 = (long *)param_3[9];
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_90 = &PTR_SUB_110bc5f58;
  puVar5 = (undefined8 *)0x50;
  uStack_b0 = uVar7;
  plStack_a8 = plVar8;
  uStack_a0 = uVar9;
  plStack_98 = plVar2;
  __Znwm();
  lVar6 = lStack_b8;
  puVar5[1] = uStack_d8;
  *puVar5 = uStack_e0;
  puVar5[2] = uStack_d0;
  puVar5[4] = uStack_c0;
  puVar5[3] = uStack_c8;
  uStack_c8 = 0;
  uStack_c0 = 0;
  lStack_b8 = 0;
  puVar5[5] = lVar6;
  puVar5[6] = uVar7;
  puVar5[7] = plVar8;
  if (plVar8 != (long *)0x0) {
    plVar8 = plVar8 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar5[8] = uVar9;
  puVar5[9] = plVar2;
  if (plVar2 != (long *)0x0) {
    plVar8 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar8 = (long *)0x48;
  puStack_88 = puVar5;
  __Znwm();
  plVar8[2] = (long)&PTR_SUB_110bc5f58;
  plVar8[3] = (long)puVar5;
  puStack_88 = (undefined8 *)0x0;
  puVar5 = (undefined8 *)param_2[0xb];
  lVar6 = param_2[0xc];
  *plVar8 = (long)(param_2 + 10);
  plVar8[1] = (long)puVar5;
  *puVar5 = plVar8;
  param_2[0xb] = plVar8;
  param_2[0xc] = lVar6 + 1;
  func_0x00010a352890(&ppuStack_90);
  if (plVar2 != (long *)0x0) {
    plVar8 = plVar2 + 1;
    do {
      lVar6 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar8 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar2 = plStack_a8 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (lStack_b8 < 0) {
    __ZdlPv(uStack_c8);
  }
  uVar7 = param_2[0xb];
  puVar5 = param_2 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  uVar10 = param_2[1];
  uVar9 = *param_2;
  if (param_2[1] != 0) {
    plVar8 = (long *)(param_2[1] + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = uVar7;
  param_1[2] = uVar10;
  param_1[1] = uVar9;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x00010a352890(&ppuStack_90);
  func_0x00010a352850(&uStack_e0);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  __Unwind_Resume();
  plVar8 = (long *)puVar5[2];
  if (plVar8 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar8 != (long *)0x0) {
      if (puVar5[1] != 0) {
        FUN_10a05c0fc(puVar5[1],*puVar5);
      }
      plVar2 = plVar8 + 1;
      do {
        lVar6 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if (puVar5[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return puVar5;
}



/* Entry: 10a342e00; end: 10a342ebf;  */

undefined8 * FUN_10a342e00(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (param_1[1] != 0) {
        FUN_10a05c0fc(param_1[1],*param_1);
      }
      plVar1 = plVar4 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (param_1[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return param_1;
}



/* Entry: 10a342ec0; end: 10a343067;  */

undefined ** FUN_10a342ec0(undefined **param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined **ppuVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  undefined **ppuStack_f0;
  undefined8 *puStack_e8;
  long lStack_b8;
  long lStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  
  ppuVar6 = param_1;
  puVar10 = param_2;
  puVar9 = param_3;
  FUN_10a3444b8();
  if (((ulong)ppuVar6 & 1) == 0) {
    puVar8 = (undefined8 *)&UNK_10f65027a;
    FUN_10a00946c();
    FUN_10a05bd88(&lStack_60);
    func_0x00010a05a8c4(&ppuStack_50);
    FUN_10a05bd88(&lStack_40);
    __Unwind_Resume();
    lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    __ZNSt3__115recursive_mutex4lockEv(puVar10 + 2);
    uStack_138 = puVar9[1];
    uStack_140 = *puVar9;
    uStack_130 = puVar9[2];
    uStack_120 = puVar9[4];
    uStack_128 = puVar9[3];
    puVar9[3] = 0;
    puVar9[4] = 0;
    lStack_118 = puVar9[5];
    uVar13 = puVar9[6];
    puVar9[5] = 0;
    plVar14 = (long *)puVar9[7];
    if (plVar14 != (long *)0x0) {
      plVar3 = plVar14 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = *plVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uVar15 = puVar9[8];
    plVar3 = (long *)puVar9[9];
    if (plVar3 != (long *)0x0) {
      plVar2 = plVar3 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = *plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    ppuStack_f0 = &PTR_SUB_110bc5f70;
    puVar9 = (undefined8 *)0x50;
    uStack_110 = uVar13;
    plStack_108 = plVar14;
    uStack_100 = uVar15;
    plStack_f8 = plVar3;
    __Znwm();
    lVar12 = lStack_118;
    puVar9[1] = uStack_138;
    *puVar9 = uStack_140;
    puVar9[2] = uStack_130;
    puVar9[4] = uStack_120;
    puVar9[3] = uStack_128;
    uStack_128 = 0;
    uStack_120 = 0;
    lStack_118 = 0;
    puVar9[5] = lVar12;
    puVar9[6] = uVar13;
    puVar9[7] = plVar14;
    if (plVar14 != (long *)0x0) {
      plVar14 = plVar14 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *plVar14 = *plVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar9[8] = uVar15;
    puVar9[9] = plVar3;
    if (plVar3 != (long *)0x0) {
      plVar14 = plVar3 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *plVar14 = *plVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar14 = (long *)0x48;
    puStack_e8 = puVar9;
    __Znwm();
    plVar14[2] = (long)&PTR_SUB_110bc5f70;
    plVar14[3] = (long)puVar9;
    puStack_e8 = (undefined8 *)0x0;
    puVar9 = (undefined8 *)puVar10[0xb];
    lVar12 = puVar10[0xc];
    *plVar14 = (long)(puVar10 + 10);
    plVar14[1] = (long)puVar9;
    *puVar9 = plVar14;
    puVar10[0xb] = plVar14;
    puVar10[0xc] = lVar12 + 1;
    func_0x00010a352cf4(&ppuStack_f0);
    if (plVar3 != (long *)0x0) {
      plVar14 = plVar3 + 1;
      do {
        lVar12 = *plVar14;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *plVar14 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    plVar14 = plStack_108;
    if (plStack_108 != (long *)0x0) {
      plVar3 = plStack_108 + 1;
      do {
        lVar12 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_108 + 0x10))(plStack_108);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      }
    }
    if (lStack_118 < 0) {
      __ZdlPv(uStack_128);
    }
    uVar13 = puVar10[0xb];
    ppuVar6 = (undefined **)(puVar10 + 2);
    __ZNSt3__115recursive_mutex6unlockEv();
    uVar16 = puVar10[1];
    uVar15 = *puVar10;
    if (puVar10[1] != 0) {
      plVar14 = (long *)(puVar10[1] + 0x10);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *plVar14 = *plVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    *puVar8 = uVar13;
    puVar8[2] = uVar16;
    puVar8[1] = uVar15;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
      return ppuVar6;
    }
    ___stack_chk_fail();
    func_0x00010a352cf4(&ppuStack_f0);
    func_0x00010a352cb4(&uStack_140);
    __ZNSt3__115recursive_mutex6unlockEv(puVar10 + 2);
    __Unwind_Resume();
    plVar14 = (long *)ppuVar6[2];
    if (plVar14 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar14 != (long *)0x0) {
        if (ppuVar6[1] != (undefined *)0x0) {
          FUN_10a05c0fc(ppuVar6[1],*ppuVar6);
        }
        plVar3 = plVar14 + 1;
        do {
          lVar12 = *plVar3;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *plVar3 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
        }
      }
      if (ppuVar6[2] != (undefined *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    return ppuVar6;
  }
  ppuVar6 = param_1;
  FUN_10a34458c(&lStack_40,param_1,param_2,param_3);
  if (lStack_40 == 0) goto LAB_10a342fec;
  ppuStack_50 = (undefined **)0x0;
  ppuStack_48 = (undefined **)0x0;
  ppuVar6 = (undefined **)param_1[0x1e];
  if (ppuVar6 == (undefined **)0x0) {
LAB_10a342f94:
    ppuVar6 = &PTR_PTR_113301b20;
    FUN_10ae079a0(0,&PTR_PTR_113301b20);
    FUN_10ae07cd4(ppuVar6,&PTR_PTR_113301b20);
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    ppuStack_48 = ppuVar6;
    if (ppuVar6 == (undefined **)0x0) goto LAB_10a342f94;
    ppuVar6 = (undefined **)param_1[0x1d];
    ppuStack_50 = ppuVar6;
    if (ppuVar6 == (undefined **)0x0) goto LAB_10a342f94;
    lStack_60 = lStack_40;
    ppuStack_58 = ppuStack_38;
    if (ppuStack_38 != (undefined **)0x0) {
      ppuVar7 = ppuStack_38 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
        if (bVar5) {
          *ppuVar7 = *ppuVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    (**(code **)*ppuVar6)(ppuVar6,&lStack_60);
    ppuVar7 = ppuStack_58;
    if (ppuStack_58 != (undefined **)0x0) {
      ppuVar1 = ppuStack_58 + 1;
      do {
        puVar11 = *ppuVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar5) {
          *ppuVar1 = puVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (puVar11 == (undefined *)0x0) {
        (**(code **)(*ppuStack_58 + 0x10))(ppuStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
        ppuVar6 = ppuVar7;
      }
    }
  }
  ppuVar7 = ppuStack_48;
  if (ppuStack_48 != (undefined **)0x0) {
    ppuVar1 = ppuStack_48 + 1;
    do {
      puVar11 = *ppuVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar5) {
        *ppuVar1 = puVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar11 == (undefined *)0x0) {
      (**(code **)(*ppuStack_48 + 0x10))(ppuStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
      ppuVar6 = ppuVar7;
    }
  }
LAB_10a342fec:
  if (ppuStack_38 != (undefined **)0x0) {
    ppuVar7 = ppuStack_38 + 1;
    do {
      puVar11 = *ppuVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
      if (bVar5) {
        *ppuVar7 = puVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar11 == (undefined *)0x0) {
      (**(code **)(*ppuStack_38 + 0x10))(ppuStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_38);
      ppuVar6 = ppuStack_38;
    }
  }
  return ppuVar6;
}



/* Entry: 10a343068; end: 10a3432d3;  */

undefined8 * FUN_10a343068(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  uStack_d8 = param_3[1];
  uStack_e0 = *param_3;
  uStack_d0 = param_3[2];
  uStack_c0 = param_3[4];
  uStack_c8 = param_3[3];
  param_3[3] = 0;
  param_3[4] = 0;
  lStack_b8 = param_3[5];
  uVar7 = param_3[6];
  param_3[5] = 0;
  plVar8 = (long *)param_3[7];
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar9 = param_3[8];
  plVar2 = (long *)param_3[9];
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_90 = &PTR_SUB_110bc5f70;
  puVar5 = (undefined8 *)0x50;
  uStack_b0 = uVar7;
  plStack_a8 = plVar8;
  uStack_a0 = uVar9;
  plStack_98 = plVar2;
  __Znwm();
  lVar6 = lStack_b8;
  puVar5[1] = uStack_d8;
  *puVar5 = uStack_e0;
  puVar5[2] = uStack_d0;
  puVar5[4] = uStack_c0;
  puVar5[3] = uStack_c8;
  uStack_c8 = 0;
  uStack_c0 = 0;
  lStack_b8 = 0;
  puVar5[5] = lVar6;
  puVar5[6] = uVar7;
  puVar5[7] = plVar8;
  if (plVar8 != (long *)0x0) {
    plVar8 = plVar8 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar5[8] = uVar9;
  puVar5[9] = plVar2;
  if (plVar2 != (long *)0x0) {
    plVar8 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar8 = (long *)0x48;
  puStack_88 = puVar5;
  __Znwm();
  plVar8[2] = (long)&PTR_SUB_110bc5f70;
  plVar8[3] = (long)puVar5;
  puStack_88 = (undefined8 *)0x0;
  puVar5 = (undefined8 *)param_2[0xb];
  lVar6 = param_2[0xc];
  *plVar8 = (long)(param_2 + 10);
  plVar8[1] = (long)puVar5;
  *puVar5 = plVar8;
  param_2[0xb] = plVar8;
  param_2[0xc] = lVar6 + 1;
  func_0x00010a352cf4(&ppuStack_90);
  if (plVar2 != (long *)0x0) {
    plVar8 = plVar2 + 1;
    do {
      lVar6 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar8 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar2 = plStack_a8 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (lStack_b8 < 0) {
    __ZdlPv(uStack_c8);
  }
  uVar7 = param_2[0xb];
  puVar5 = param_2 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  uVar10 = param_2[1];
  uVar9 = *param_2;
  if (param_2[1] != 0) {
    plVar8 = (long *)(param_2[1] + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = uVar7;
  param_1[2] = uVar10;
  param_1[1] = uVar9;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x00010a352cf4(&ppuStack_90);
  func_0x00010a352cb4(&uStack_e0);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  __Unwind_Resume();
  plVar8 = (long *)puVar5[2];
  if (plVar8 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar8 != (long *)0x0) {
      if (puVar5[1] != 0) {
        FUN_10a05c0fc(puVar5[1],*puVar5);
      }
      plVar2 = plVar8 + 1;
      do {
        lVar6 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if (puVar5[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return puVar5;
}



/* Entry: 10a3432d4; end: 10a3433f7;  */

undefined8 * FUN_10a3432d4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (param_1[1] != 0) {
        FUN_10a05c0fc(param_1[1],*param_1);
      }
      plVar1 = plVar4 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (param_1[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return param_1;
}



/* Entry: 10a3433f8; end: 10a3435a3;  */

void FUN_10a3433f8(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 auStack_b0 [2];
  char cStack_99;
  undefined1 auStack_98 [8];
  ulong uStack_90;
  byte bStack_81;
  char cStack_48;
  
  plVar4 = *(long **)(param_1 + 0x148);
  do {
    while( true ) {
      if (plVar4 == (long *)(param_1 + 0x140)) {
        if (*(long *)(param_1 + 0x150) == 0) {
          FUN_10a5ae930(*(undefined8 *)(param_1 + 0xe8));
        }
        return;
      }
      plVar6 = plVar4 + 2;
      if (((uint)*(undefined8 *)(*plVar6 + 0x10) >> 1 & 1) != 0) break;
      plVar4 = (long *)plVar4[1];
    }
    FUN_109d1a244(plVar6);
    func_0x0001092af8bc(plVar6);
    if ((*(byte *)(*plVar6 + 0xf0) & 1) == 0) goto LAB_10a343570;
    FUN_10a26f108(auStack_98,*plVar6 + 0x98);
    if (cStack_48 == '\x01') {
      uVar1 = uStack_90;
      if (-1 < (char)bStack_81) {
        uVar1 = (ulong)bStack_81;
      }
      if (uVar1 == 0) goto LAB_10a3434a8;
      (*(code *)plVar4[3])(auStack_98);
    }
    else {
LAB_10a3434a8:
      puVar7 = (undefined8 *)plVar4[0xb];
      func_0x000107c2b054(auStack_b0,&UNK_10f650123);
      if ((puVar7 == (undefined8 *)0x0) || (*(char *)(puVar7 + 8) != '\x02')) {
        if ((puVar7 != (undefined8 *)0x0) && (*(char *)(puVar7 + 8) == '\x01')) {
          (*(code *)*puVar7)(auStack_b0,puVar7);
        }
      }
      else {
        FUN_10a05aad0(puVar7,auStack_b0);
      }
      if (cStack_99 < '\0') {
        __ZdlPv(auStack_b0[0]);
      }
    }
    if ((long *)(param_1 + 0x140) == plVar4) {
LAB_10a343570:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a343574);
      (*pcVar5)();
    }
    lVar2 = *plVar4;
    plVar3 = (long *)plVar4[1];
    *(long **)(lVar2 + 8) = plVar3;
    *plVar3 = lVar2;
    *(long *)(param_1 + 0x150) = *(long *)(param_1 + 0x150) + -1;
    FUN_10a3552f8(plVar6);
    __ZdlPv(plVar4);
    func_0x00010a1fe790(auStack_98);
    plVar4 = plVar3;
  } while( true );
}



/* Entry: 10a3435a4; end: 10a343643;  */

void FUN_10a3435a4(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 auStack_b0 [2];
  char cStack_99;
  undefined1 auStack_98 [8];
  ulong uStack_90;
  byte bStack_81;
  char cStack_48;
  
  plVar4 = *(long **)(param_1 + 0x68);
  do {
    while( true ) {
      if (plVar4 == (long *)(param_1 + 0x60)) {
        if (*(long *)(param_1 + 0x70) == 0) {
          FUN_10a5ae930(*(undefined8 *)(param_1 + 8));
        }
        return;
      }
      plVar6 = plVar4 + 2;
      if (((uint)*(undefined8 *)(*plVar6 + 0x10) >> 1 & 1) != 0) break;
      plVar4 = (long *)plVar4[1];
    }
    FUN_109d1a244(plVar6);
    func_0x0001092af8bc(plVar6);
    if ((*(byte *)(*plVar6 + 0xf0) & 1) == 0) goto LAB_10a343570;
    FUN_10a26f108(auStack_98,*plVar6 + 0x98);
    if (cStack_48 == '\x01') {
      uVar1 = uStack_90;
      if (-1 < (char)bStack_81) {
        uVar1 = (ulong)bStack_81;
      }
      if (uVar1 == 0) goto LAB_10a3434a8;
      (*(code *)plVar4[3])(auStack_98);
    }
    else {
LAB_10a3434a8:
      puVar7 = (undefined8 *)plVar4[0xb];
      func_0x000107c2b054(auStack_b0,&UNK_10f650123);
      if ((puVar7 == (undefined8 *)0x0) || (*(char *)(puVar7 + 8) != '\x02')) {
        if ((puVar7 != (undefined8 *)0x0) && (*(char *)(puVar7 + 8) == '\x01')) {
          (*(code *)*puVar7)(auStack_b0,puVar7);
        }
      }
      else {
        FUN_10a05aad0(puVar7,auStack_b0);
      }
      if (cStack_99 < '\0') {
        __ZdlPv(auStack_b0[0]);
      }
    }
    if ((long *)(param_1 + 0x60) == plVar4) {
LAB_10a343570:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a343574);
      (*pcVar5)();
    }
    lVar2 = *plVar4;
    plVar3 = (long *)plVar4[1];
    *(long **)(lVar2 + 8) = plVar3;
    *plVar3 = lVar2;
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + -1;
    FUN_10a3552f8(plVar6);
    __ZdlPv(plVar4);
    func_0x00010a1fe790(auStack_98);
    plVar4 = plVar3;
  } while( true );
}



/* Entry: 10a343644; end: 10a343c5f;  */

void FUN_10a343644(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  bool bVar7;
  ulong uVar8;
  undefined4 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f651261,0x19);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bc56b8;
  pppuVar2 = (undefined8 ***)&UNK_10f64efef;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bc56b8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c42c58;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,2,0x134,0xffffffff,4);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a343c40;
    FUN_10a054dac(param_1,"fetch",FUN_10a380904,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,2,0x134,0xffffffff,4);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a343c40;
    FUN_10a054dac(param_1,&UNK_10f630f8d,FUN_10a380d5c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,4);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a343c40;
    FUN_10a054dac(param_1,&UNK_10f650148,FUN_10a380ea0,3,*(undefined8 *)(param_1 + 0x40));
  }
  iVar4 = *(int *)(param_1 + 0x160);
  bVar7 = iVar4 != 100;
  if (bVar7) {
    iVar4 = 0x19;
  }
  uVar9 = 6;
  if (bVar7) {
    uVar9 = 0xffffffff;
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,iVar4,3,0xffffffff,0xffffffff,uVar9);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a343c40;
    FUN_10a054dac(param_1,&UNK_10f630f6c,FUN_10a381cd0,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a343c40;
    FUN_10a054dac(param_1,"performApiRequest",FUN_10a381e74,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a343c40;
    FUN_10a054dac(param_1,&UNK_10f65015b,FUN_10a3822d4,3,*(undefined8 *)(param_1 + 0x40));
  }
  iVar4 = *(int *)(param_1 + 0x160);
  bVar7 = iVar4 != 100;
  if (bVar7) {
    iVar4 = 0x19;
  }
  uVar9 = 6;
  if (bVar7) {
    uVar9 = 0xffffffff;
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,iVar4,3,0xffffffff,0xffffffff,uVar9);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a343c40;
    FUN_10a054dac(param_1,&UNK_10f630f43,FUN_10a382650,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a343c40;
    FUN_10a054dac(param_1,"unsubscribe",FUN_10a382794,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a343c40;
    FUN_10a054dac(param_1,&UNK_10f65016f,FUN_10a38290c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a343c40;
    FUN_10a054dac(param_1,&UNK_10f65017f,FUN_10a382ca0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a343c40;
    FUN_10a054dac(param_1,"deleteOAuth2Tokens",FUN_10a382d58,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,0x402,0x134,0xffffffff,4);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a343c40;
    FUN_10a054dac(param_1,&UNK_10f630f7f,FUN_10a38300c,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    FUN_10a052828(param_1,"apiSpecId",FUN_10a38341c,FUN_10a383548);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_78 = *(undefined **)(lVar3 + -0x40);
    uVar10 = *(ulong *)(lVar3 + -0x48);
    uVar11 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar11 >> 0x20);
    uVar9 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar10 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar8 = param_1;
    uStack_88 = uVar11;
    uStack_80 = uVar10;
    FUN_10a0051e8(param_1,uVar11 & 0xffffffff,uVar9,uStack_50 & 0xffffffff,uVar10 & 0xffffffff,uVar5
                 );
    if ((uVar8 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f651261,0x19);
      FUN_10a05431c(param_1);
    }
    uStack_98 = 0;
    uStack_90 = 0;
    ppuStack_a0 = (undefined8 **)&UNK_10f63f2f7;
    uStack_80 = 0xffffffffffffffff;
    uStack_88 = 0x100000064;
    puStack_78 = &UNK_10f64efef;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
    uStack_48 = 0;
    uStack_40 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_a0);
    uVar8 = param_1;
    FUN_10a0051e8(param_1,100,0x402,0x139,0xffffffff,4);
    if ((uVar8 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a343c40;
      FUN_10a054dac(param_1,&UNK_10f630fac,FUN_10a383600,1,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a343c40:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a343c44);
  (*pcVar6)();
}



/* Entry: 10a343c60; end: 10a343e23;  */

void FUN_10a343c60(ulong param_1)

{
  ulong uVar1;
  char *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "OAuth2Status";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x92;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&pcStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_48,uStack_78 & 0xffffffff,
                uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,pcStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Unknown";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x92;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a343e24(param_1,&pcStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "NotSupported";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x92;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a343e24();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "TokenNotAvailable";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x92;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a343e24();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "TokenReady";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x92;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a343e24();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "TokenError";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x92;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a343e24();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a343e24; end: 10a343ec7;  */

undefined8 * FUN_10a343e24(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a343ec8);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a343ec8; end: 10a34403b;  */

undefined8 * FUN_10a343ec8(undefined8 *param_1,long param_2,undefined8 *param_3,undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 uStack_41;
  
  puVar3 = param_1;
  lVar7 = param_2;
  func_0x00010a0fda30();
  FUN_10aa7093c(param_1,param_2,puVar3,lVar7);
  *param_1 = &PTR_FUN_110bc5200;
  param_1[2] = &PTR_DAT_110bc52a8;
  param_1[7] = &PTR_DAT_110bc5300;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1c] = param_2;
  FUN_10a05a5d4(param_1 + 0x1f,&uStack_41);
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 0x21,*param_3,param_3[1]);
  }
  else {
    uVar8 = param_3[1];
    uVar6 = *param_3;
    param_1[0x23] = param_3[2];
    param_1[0x22] = uVar8;
    param_1[0x21] = uVar6;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)((long)param_1 + 0x124) = param_4;
  param_1[0x25] = param_1 + 0x26;
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x27] = 0;
  if (param_2 != 0) {
    plVar4 = *(long **)(*(long *)(param_2 + 0x100) + 0x1c8);
    (**(code **)(*plVar4 + 0x60))();
    lVar9 = plVar4[1];
    lVar7 = *plVar4;
    if (plVar4[1] != 0) {
      plVar4 = (long *)(plVar4[1] + 0x10);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lVar5 = param_1[0x1e];
    param_1[0x1e] = lVar9;
    param_1[0x1d] = lVar7;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return param_1;
}



/* Entry: 10a34403c; end: 10a344187;  */

undefined8 *
FUN_10a34403c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 uStack_31;
  
  puVar3 = param_1;
  FUN_10aa7093c();
  *puVar3 = &PTR_FUN_110bc5200;
  puVar3[2] = &PTR_DAT_110bc52a8;
  puVar3[7] = &PTR_DAT_110bc5300;
  puVar3[0x1d] = 0;
  puVar3[0x1e] = 0;
  puVar3[0x1c] = param_2;
  FUN_10a05a5d4(puVar3 + 0x1f,&uStack_31);
  if (*(char *)((long)param_5 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 0x21,*param_5,param_5[1]);
  }
  else {
    uVar8 = param_5[1];
    uVar6 = *param_5;
    param_1[0x23] = param_5[2];
    param_1[0x22] = uVar8;
    param_1[0x21] = uVar6;
  }
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = param_1 + 0x26;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  if (param_2 != 0) {
    plVar4 = *(long **)(*(long *)(param_2 + 0x100) + 0x1c8);
    (**(code **)(*plVar4 + 0x60))();
    lVar9 = plVar4[1];
    lVar7 = *plVar4;
    if (plVar4[1] != 0) {
      plVar4 = (long *)(plVar4[1] + 0x10);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lVar5 = param_1[0x1e];
    param_1[0x1e] = lVar9;
    param_1[0x1d] = lVar7;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return param_1;
}



/* Entry: 10a344188; end: 10a344217;  */

undefined8
FUN_10a344188(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 auStack_48 [2];
  char cStack_31;
  
  func_0x000107c2b054(auStack_48,&UNK_10f64efef);
  FUN_10a34403c(param_1,param_2,param_3,param_4,auStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return param_1;
}



/* Entry: 10a344218; end: 10a3443b3;  */

undefined8 * FUN_10a344218(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  bool bVar3;
  long *plVar4;
  undefined **ppuVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  *param_1 = &PTR_FUN_110bc5200;
  param_1[2] = &PTR_DAT_110bc52a8;
  param_1[7] = &PTR_DAT_110bc5300;
  if (param_1[0x27] == 0) goto LAB_10a344350;
  plVar4 = (long *)param_1[0x1e];
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)0x0;
LAB_10a3442fc:
    ppuVar5 = &PTR_PTR_113301b20;
    FUN_10ae079a0(0,&PTR_PTR_113301b20);
    FUN_10ae07cd4(ppuVar5,&PTR_PTR_113301b20);
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    if ((plVar4 == (long *)0x0) || (plVar6 = (long *)param_1[0x1d], plVar6 == (long *)0x0))
    goto LAB_10a3442fc;
    puVar8 = (undefined8 *)param_1[0x25];
    while (puVar8 != param_1 + 0x26) {
      (**(code **)(*plVar6 + 8))(plVar6,puVar8 + 4);
      puVar2 = (undefined8 *)puVar8[1];
      puVar9 = puVar8;
      if ((undefined8 *)puVar8[1] == (undefined8 *)0x0) {
        do {
          puVar8 = (undefined8 *)puVar9[2];
          bVar3 = (undefined8 *)*puVar8 != puVar9;
          puVar9 = puVar8;
        } while (bVar3);
      }
      else {
        do {
          puVar8 = puVar2;
          puVar2 = (undefined8 *)*puVar8;
        } while ((undefined8 *)*puVar8 != (undefined8 *)0x0);
      }
    }
    func_0x000107c27bf0(param_1 + 0x25,param_1[0x26]);
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x25] = param_1 + 0x26;
  }
  if (plVar4 != (long *)0x0) {
    plVar6 = plVar4 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
LAB_10a344350:
  FUN_10a3836c0(param_1 + 0x28);
  func_0x000107c27bf0(param_1 + 0x25,param_1[0x26]);
  if (*(char *)((long)param_1 + 0x11f) < '\0') {
    __ZdlPv(param_1[0x21]);
  }
  func_0x00010a05a86c(param_1 + 0x1f);
  if (param_1[0x1e] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a3443b4; end: 10a3443c7;  */

undefined8 * FUN_10a3443b4(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  bool bVar3;
  long *plVar4;
  undefined **ppuVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  *param_1 = &PTR_FUN_110bc5200;
  param_1[2] = &PTR_DAT_110bc52a8;
  param_1[7] = &PTR_DAT_110bc5300;
  if (param_1[0x27] == 0) goto LAB_10a344350;
  plVar4 = (long *)param_1[0x1e];
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)0x0;
LAB_10a3442fc:
    ppuVar5 = &PTR_PTR_113301b20;
    FUN_10ae079a0(0,&PTR_PTR_113301b20);
    FUN_10ae07cd4(ppuVar5,&PTR_PTR_113301b20);
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    if ((plVar4 == (long *)0x0) || (plVar6 = (long *)param_1[0x1d], plVar6 == (long *)0x0))
    goto LAB_10a3442fc;
    puVar8 = (undefined8 *)param_1[0x25];
    while (puVar8 != param_1 + 0x26) {
      (**(code **)(*plVar6 + 8))(plVar6,puVar8 + 4);
      puVar2 = (undefined8 *)puVar8[1];
      puVar9 = puVar8;
      if ((undefined8 *)puVar8[1] == (undefined8 *)0x0) {
        do {
          puVar8 = (undefined8 *)puVar9[2];
          bVar3 = (undefined8 *)*puVar8 != puVar9;
          puVar9 = puVar8;
        } while (bVar3);
      }
      else {
        do {
          puVar8 = puVar2;
          puVar2 = (undefined8 *)*puVar8;
        } while ((undefined8 *)*puVar8 != (undefined8 *)0x0);
      }
    }
    func_0x000107c27bf0(param_1 + 0x25,param_1[0x26]);
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x25] = param_1 + 0x26;
  }
  if (plVar4 != (long *)0x0) {
    plVar6 = plVar4 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
LAB_10a344350:
  FUN_10a3836c0(param_1 + 0x28);
  func_0x000107c27bf0(param_1 + 0x25,param_1[0x26]);
  if (*(char *)((long)param_1 + 0x11f) < '\0') {
    __ZdlPv(param_1[0x21]);
  }
  func_0x00010a05a86c(param_1 + 0x1f);
  if (param_1[0x1e] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a3443c8; end: 10a34440b;  */

void FUN_10a3443c8(void)

{
  FUN_10a344218();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a34440c; end: 10a3444b7;  */

void FUN_10a34440c(long param_1,long *param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010aa70acc();
  (**(code **)(*param_2 + 0xa8))(&uStack_38,param_2,&PTR_s_apiSpecId_110bc5310,&UNK_10f64efef,0);
  if (*(char *)(param_1 + 0x11f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x108));
  }
  *(undefined8 *)(param_1 + 0x110) = uStack_30;
  *(undefined8 *)(param_1 + 0x108) = uStack_38;
  *(undefined8 *)(param_1 + 0x118) = uStack_28;
  return;
}



/* Entry: 10a3444b8; end: 10a34458b;  */

ulong FUN_10a3444b8(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined1 uStack_31;
  
  if (*(int *)(param_1 + 0x124) == 1) {
    return 1;
  }
  uVar3 = *(ulong *)(param_1 + 0x50);
  lVar6 = *(long *)(*(long *)(uVar3 + 0x100) + 0x268);
  if (((lVar6 != 0) && ((*(byte *)(lVar6 + 0x10) >> 6 & 1) != 0)) &&
     (lVar7 = *(long *)(lVar6 + 0x90), *(char *)(lVar7 + 0x40) == '\x01')) {
    FUN_10a3df7b0(uVar3,1);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    puVar5 = *(undefined **)(lVar7 + 0x28);
    ppuVar4 = (undefined **)(lVar7 + 0x28);
    if (((ulong)puVar5 & 1) != 0) {
      ppuVar4 = (undefined **)(puVar5 + 7);
    }
    FUN_10a352d5c(ppuVar4,ppuVar4 + *(int *)(lVar7 + 0x30),param_1 + 0x108,&uStack_31);
    ppuVar1 = &PTR_PTR_1132e42b8;
    if (*(undefined ***)(lVar6 + 0x90) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(lVar6 + 0x90);
    }
    puVar5 = ppuVar1[5];
    ppuVar2 = ppuVar1 + 5;
    if (((ulong)puVar5 & 1) != 0) {
      ppuVar2 = (undefined **)(puVar5 + 7);
    }
    return (ulong)(ppuVar2 + *(int *)(ppuVar1 + 6) != ppuVar4);
  }
  return 1;
}



/* Entry: 10a34458c; end: 10a3455a7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a34458c(long *param_1,long param_2,long *param_3,long *param_4)

{
  ulong *puVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  undefined8 *****pppppuVar7;
  code *pcVar8;
  long *plVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  undefined8 *puVar12;
  undefined **ppuVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 ******ppppppuVar19;
  undefined8 *****pppppuVar20;
  long *plVar21;
  code *******pppppppcVar22;
  long *plStack_348;
  undefined8 *******pppppppuStack_340;
  long lStack_338;
  undefined8 ******ppppppuStack_330;
  undefined8 ******ppppppuStack_328;
  undefined8 uStack_320;
  undefined1 uStack_318;
  undefined8 *******pppppppuStack_310;
  undefined8 ******ppppppuStack_308;
  undefined8 ******ppppppuStack_300;
  long lStack_2f8;
  undefined4 uStack_2f0;
  undefined8 *******pppppppuStack_2e0;
  undefined8 ****ppppuStack_2d8;
  undefined8 ****ppppuStack_2d0;
  undefined8 uStack_2c8;
  ulong uStack_2c0;
  byte bStack_2b1;
  undefined8 uStack_2b0;
  ulong uStack_2a8;
  byte bStack_299;
  undefined8 uStack_298;
  ulong uStack_290;
  byte bStack_281;
  undefined1 uStack_279;
  undefined8 *****pppppuStack_278;
  undefined1 auStack_270 [8];
  undefined8 *******pppppppuStack_268;
  undefined8 ******ppppppuStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined4 uStack_248;
  code *******pppppppcStack_240;
  undefined8 ******ppppppuStack_238;
  undefined8 uStack_230;
  undefined8 *******pppppppuStack_228;
  long lStack_220;
  char cStack_211;
  undefined8 *******pppppppuStack_210;
  ulong uStack_208;
  byte bStack_1f9;
  undefined8 uStack_1f8;
  byte bStack_1f0;
  char cStack_1e1;
  undefined8 *****pppppuStack_1e0;
  undefined8 uStack_1d8;
  long alStack_1d0 [7];
  undefined8 uStack_198;
  undefined8 *****pppppuStack_190;
  undefined7 uStack_188;
  undefined4 uStack_181;
  uint uStack_17d;
  char cStack_179;
  undefined **ppuStack_178;
  long alStack_170 [2];
  undefined8 uStack_160;
  char cStack_149;
  undefined8 uStack_148;
  undefined7 uStack_138;
  char cStack_131;
  char cStack_121;
  undefined **appuStack_110 [19];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_3 == 0) {
    FUN_10a00946c(&UNK_10f6501d1);
LAB_10a345230:
    FUN_10a00946c(&UNK_10f63126b);
LAB_10a34523c:
    FUN_10a00946c(&UNK_10f63129a);
  }
  else {
    if (*param_4 == 0) goto LAB_10a345230;
    plVar21 = (long *)(param_2 + 0x108);
    if (*(char *)(param_2 + 0x11f) < '\0') {
      if (*(long *)(param_2 + 0x110) != 0) {
        plVar9 = (long *)*plVar21;
        goto LAB_10a344600;
      }
      goto LAB_10a34523c;
    }
    plVar9 = plVar21;
    if (*(char *)(param_2 + 0x11f) == '\0') goto LAB_10a34523c;
LAB_10a344600:
    FUN_10a3bf790(&uStack_298,plVar9);
    if (-1 < (char)bStack_281) {
      uStack_290 = (ulong)bStack_281;
    }
    uVar18 = (ulong)*(char *)(param_2 + 0x11f);
    if ((long)uVar18 < 0) {
      uVar18 = *(ulong *)(param_2 + 0x110);
    }
    if (uStack_290 != uVar18) {
      func_0x00010a383718(plVar21,&uStack_298);
      ppuVar13 = &PTR_PTR_113301d40;
      FUN_10ae079a0();
      func_0x00010a38376c();
      FUN_10ae07cd4(ppuVar13,&PTR_PTR_113301d40);
    }
    lVar17 = *param_3;
    lVar14 = (long)*(char *)(lVar17 + 0x2f);
    if (lVar14 < 0) {
      lVar15 = *(long *)(lVar17 + 0x18);
      lVar14 = *(long *)(lVar17 + 0x20);
    }
    else {
      lVar15 = lVar17 + 0x18;
    }
    FUN_10a3bf790(&uStack_2b0,lVar15,lVar14);
    if (-1 < (char)bStack_299) {
      uStack_2a8 = (ulong)bStack_299;
    }
    lVar14 = *param_3;
    uVar18 = (ulong)*(char *)(lVar14 + 0x2f);
    if ((long)uVar18 < 0) {
      uVar18 = *(ulong *)(lVar14 + 0x20);
    }
    if (uStack_2a8 != uVar18) {
      func_0x00010a3837bc(lVar14 + 0x18,&uStack_2b0);
      ppuVar13 = &PTR_PTR_113301d88;
      FUN_10ae079a0();
      func_0x00010a383810();
      FUN_10ae07cd4(ppuVar13,&PTR_PTR_113301d88);
    }
    lVar17 = *(long *)(*(long *)(param_2 + 0xe0) + 0x100);
    lVar14 = (long)*(char *)(lVar17 + 0x21f);
    if (lVar14 < 0) {
      lVar15 = *(long *)(lVar17 + 0x208);
      lVar14 = *(long *)(lVar17 + 0x210);
    }
    else {
      lVar15 = lVar17 + 0x208;
    }
    FUN_10a3bf790(&uStack_2c8,lVar15,lVar14);
    if (-1 < (char)bStack_2b1) {
      uStack_2c0 = (ulong)bStack_2b1;
    }
    lVar14 = *(long *)(*(long *)(param_2 + 0xe0) + 0x100);
    uVar18 = (ulong)*(char *)(lVar14 + 0x21f);
    if ((long)uVar18 < 0) {
      uVar18 = *(ulong *)(lVar14 + 0x210);
    }
    if (uStack_2c0 != uVar18) {
      func_0x00010a3837bc(lVar14 + 0x208,&uStack_2c8);
      ppuVar13 = &PTR_PTR_113301dd0;
      FUN_10ae079a0();
      func_0x00010a383810();
      FUN_10ae07cd4(ppuVar13,&PTR_PTR_113301dd0);
    }
    func_0x000107c2b054(&pppppuStack_190,&UNK_10e4ac740);
    pppppuVar20 = &pppppuStack_190;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(pppppuVar20,"/",1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
    if (*(char *)((long)pppppuVar20 + 0x17) < '\0') {
      func_0x000107c3192c(&pppppppuStack_2e0,*pppppuVar20,pppppuVar20[1]);
    }
    else {
      ppppuStack_2d8 = pppppuVar20[1];
      pppppppuStack_2e0 = (undefined8 *******)*pppppuVar20;
      ppppuStack_2d0 = pppppuVar20[2];
    }
    if (cStack_179 < '\0') {
      __ZdlPv(pppppuStack_190);
    }
    lVar14 = *param_3;
    cVar5 = *(char *)(lVar14 + 0x80);
    if (cVar5 == '\x02') {
      plVar21 = *(long **)(lVar14 + 0x68);
      puVar12 = (undefined8 *)*plVar21;
      uVar18 = plVar21[1];
    }
    else if (cVar5 == '\x01') {
      puVar12 = (undefined8 *)*(long *)(lVar14 + 0x68);
      uVar18 = *(long *)(lVar14 + 0x70) - *(long *)(lVar14 + 0x68);
    }
    else {
      if (cVar5 != '\0') goto LAB_10a34524c;
      puVar12 = (undefined8 *)*(long *)(lVar14 + 0x68);
      uVar18 = *(ulong *)(lVar14 + 0x70);
      if (-1 < (char)*(byte *)(lVar14 + 0x7f)) {
        puVar12 = (undefined8 *)(lVar14 + 0x68);
        uVar18 = (ulong)*(byte *)(lVar14 + 0x7f);
      }
    }
    FUN_10a3bf330(&pppppuStack_1e0,puVar12,uVar18);
    ppppppuStack_308 = (undefined8 ******)0x0;
    pppppppuStack_310 = (undefined8 *******)0x0;
    lStack_2f8 = 0;
    ppppppuStack_300 = (undefined8 ******)0x0;
    uStack_2f0 = 0x3f800000;
    plStack_348 = (long *)(*param_3 + 0x30);
    FUN_10a0512e4(&pppppuStack_190,&plStack_348);
    func_0x00010a051364(&pppppppcStack_240,&plStack_348);
    while( true ) {
      pppppuVar20 = &pppppuStack_190;
      func_0x00010937c708(pppppuVar20,&pppppppcStack_240);
      if ((int)pppppuVar20 != 0) break;
      pppppuVar20 = &pppppuStack_190;
      func_0x00010937c560();
      if (*(char *)pppppuVar20 == '\x03') {
        func_0x00010937c804(&pppppppuStack_268);
      }
      else {
        FUN_10a0c32e4(&pppppppuStack_268);
      }
      ppppppuVar19 = &pppppuStack_190;
      FUN_10a0513d8();
      pppppppuVar11 = &pppppppuStack_310;
      ppppppuStack_330 = ppppppuVar19;
      FUN_109cf993c(pppppppuVar11,ppppppuVar19,&UNK_10dd5b8f9,&ppppppuStack_330,auStack_270);
      if (*(char *)((long)pppppppuVar11 + 0x3f) < '\0') {
        __ZdlPv(pppppppuVar11[5]);
      }
      pppppppuVar10 = pppppppuStack_268;
      pppppppuVar11[6] = ppppppuStack_260;
      pppppppuVar11[5] = pppppppuVar10;
      pppppppuVar11[7] = uStack_258;
      func_0x00010937c698(&pppppuStack_190);
      alStack_170[0] = alStack_170[0] + 1;
    }
    if (cStack_1e1 < '\0') {
      __ZdlPv(uStack_1f8);
    }
    if ((char)bStack_1f9 < '\0') {
      __ZdlPv(pppppppuStack_210);
    }
    if (cStack_131 < '\0') {
      __ZdlPv(uStack_148);
    }
    if (cStack_149 < '\0') {
      __ZdlPv(uStack_160);
    }
    plVar21 = (long *)(*param_3 + 0x50);
    while (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0) {
      pppppuStack_190 = (undefined8 *****)(plVar21 + 2);
      pppppppuVar11 = &pppppppuStack_310;
      FUN_109cf993c(pppppppuVar11,pppppuStack_190,&UNK_10dd5b8f9,&pppppuStack_190,&pppppppcStack_240
                   );
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (pppppppuVar11 + 5,plVar21 + 5);
    }
    lVar14 = *param_3;
    plVar21 = *(long **)(lVar14 + 0x88);
    plVar9 = *(long **)(lVar14 + 0x90);
    if (plVar21 != plVar9) {
      FUN_109febc44(&pppppuStack_190);
      puVar12 = *(undefined8 **)(lVar14 + 0x88);
      puVar4 = *(undefined8 **)(lVar14 + 0x90);
      if (puVar12 != puVar4) {
        lVar17 = 0;
        do {
          (**(code **)(*(long *)*puVar12 + 0x48))(&plStack_348);
          if (((uint)plStack_348[2] >> 1 & 1) == 0) {
            FUN_10a00946c(&UNK_10f65045a);
            goto LAB_10a345258;
          }
          if ((((uint)plStack_348[2] >> 1 & 1) == 0) || (((uint)plStack_348[2] >> 5 & 1) != 0)) {
            if (((uint)plStack_348[2] >> 5 & 1) == 0) {
              puVar12 = (undefined8 *)0x10;
              ___cxa_allocate_exception();
              __ZNSt13runtime_errorC2EPKc();
              *puVar12 = &PTR_DAT_110ae85c0;
              ___cxa_throw(puVar12,&PTR_DAT_110ae8598,&DAT_1092af9d8);
            }
            else {
              __ZNSt13exception_ptrC1ERKS_(&pppppppuStack_268,plStack_348 + 0x12);
              func_0x0001092af97c(&pppppppuStack_268);
            }
            goto LAB_10a345258;
          }
          if ((*(byte *)(plStack_348 + 0x1e) & 1) == 0) goto LAB_10a345258;
          FUN_10a26f108(&pppppppcStack_240,plStack_348 + 0x13);
          lVar15 = (long)&uStack_181 + 1;
          FUN_10a002568(lVar15,"<",1);
          if ((bStack_1f0 & 1) == 0) goto LAB_10a345258;
          if ((long)uStack_230._7_1_ < 0) {
            ppppppuVar19 = ppppppuStack_238;
            pppppppcVar22 = pppppppcStack_240;
            if ((undefined8 ******)0x7ffffffffffffff7 < ppppppuStack_238) {
              func_0x000109ffde50();
              goto LAB_10a345258;
            }
          }
          else {
            ppppppuVar19 = (undefined8 ******)(long)uStack_230._7_1_;
            pppppppcVar22 = (code *******)&pppppppcStack_240;
          }
          if (ppppppuVar19 < (undefined8 ******)0x17) {
            uStack_258 = (undefined8 ******)CONCAT17((char)ppppppuVar19,(undefined7)uStack_258);
            pppppppuVar10 = &pppppppuStack_268;
            if (ppppppuVar19 != (undefined8 ******)0x0) goto LAB_10a344b94;
          }
          else {
            pppppppuVar11 = (undefined8 *******)0x19;
            if (((ulong)ppppppuVar19 | 7) != 0x17) {
              pppppppuVar11 = (undefined8 *******)(((ulong)ppppppuVar19 | 7) + 1);
            }
            pppppppuVar10 = pppppppuVar11;
            __Znwm();
            uStack_258 = (undefined8 ******)((ulong)pppppppuVar11 | 0x8000000000000000);
            pppppppuStack_268 = pppppppuVar10;
            ppppppuStack_260 = ppppppuVar19;
LAB_10a344b94:
            _memmove(pppppppuVar10,pppppppcVar22,ppppppuVar19);
          }
          *(undefined1 *)((long)pppppppuVar10 + (long)ppppppuVar19) = 0;
          ppppppuVar19 = ppppppuStack_260;
          pppppppuVar11 = pppppppuStack_268;
          if (-1 < (long)uStack_258) {
            ppppppuVar19 = (undefined8 ******)((ulong)uStack_258 >> 0x38);
            pppppppuVar11 = &pppppppuStack_268;
          }
          FUN_10a002568(lVar15,pppppppuVar11,ppppppuVar19);
          FUN_10a002568();
          FUN_10a002568();
          if ((long)uStack_258 < 0) {
            __ZdlPv(pppppppuStack_268);
          }
          if ((bStack_1f0 & 1) == 0) goto LAB_10a345258;
          lVar15 = (long)cStack_211;
          if (lVar15 < 0) {
            pppppppuVar11 = pppppppuStack_228;
            lVar15 = lStack_220;
            if (lStack_220 != 0) goto LAB_10a344c24;
          }
          else {
            pppppppuVar11 = &pppppppuStack_228;
            if (cStack_211 != '\0') {
LAB_10a344c24:
              FUN_10a0f10f0(&pppppppuStack_268,pppppppuVar11,lVar15,3);
              ppppppuVar19 = ppppppuStack_260;
              pppppppuVar11 = pppppppuStack_268;
              if (-1 < (long)uStack_258) {
                ppppppuVar19 = (undefined8 ******)((ulong)uStack_258 >> 0x38);
                pppppppuVar11 = &pppppppuStack_268;
              }
              FUN_10a002568((long)&uStack_181 + 1,pppppppuVar11,ppppppuVar19);
              if ((long)uStack_258 < 0) {
                __ZdlPv(pppppppuStack_268);
              }
              if ((bStack_1f0 & 1) == 0) goto LAB_10a345258;
            }
          }
          uVar18 = uStack_208;
          if (-1 < (char)bStack_1f9) {
            uVar18 = (ulong)bStack_1f9;
          }
          if (uVar18 != 0) {
            lVar15 = (long)&uStack_181 + 1;
            FUN_10a002568(lVar15,&UNK_10f650488,5);
            if ((bStack_1f0 & 1) == 0) goto LAB_10a345258;
            uVar18 = uStack_208;
            pppppppuVar11 = pppppppuStack_210;
            if (-1 < (char)bStack_1f9) {
              uVar18 = (ulong)bStack_1f9;
              pppppppuVar11 = &pppppppuStack_210;
            }
            FUN_10a0f10f0(&pppppppuStack_268,pppppppuVar11,uVar18,3);
            ppppppuVar19 = ppppppuStack_260;
            pppppppuVar11 = pppppppuStack_268;
            if (-1 < (long)uStack_258) {
              ppppppuVar19 = (undefined8 ******)((ulong)uStack_258 >> 0x38);
              pppppppuVar11 = &pppppppuStack_268;
            }
            FUN_10a002568(lVar15,pppppppuVar11,ppppppuVar19);
            if ((long)uStack_258 < 0) {
              __ZdlPv(pppppppuStack_268);
            }
          }
          if (lVar17 != (*(long *)(lVar14 + 0x90) - *(long *)(lVar14 + 0x88) >> 4) + -1) {
            FUN_10a002568((long)&uStack_181 + 1,&DAT_10f68e8ee,1);
          }
          func_0x00010a1fe790(&pppppppcStack_240);
          if (plStack_348 != (long *)0x0) {
            puVar1 = (ulong *)(plStack_348 + 1);
            do {
              uVar18 = *puVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = uVar18 - 4;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((uVar18 & 0x1fffffffc) == 4) {
              do {
                uVar18 = *puVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar6) {
                  *puVar1 = uVar18 - 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (uVar18 - 1 == 0) {
                (**(code **)(*plStack_348 + 8))();
              }
            }
          }
          lVar17 = lVar17 + 1;
          puVar12 = puVar12 + 2;
        } while (puVar12 != puVar4);
      }
      func_0x00010a002480(&ppppppuStack_330,&ppuStack_178,&pppppuStack_278);
      pppppuStack_190 = (undefined8 *****)&PTR_SUB_1108a5a38;
      uStack_181 = CONCAT31(0x8a5a60,(undefined1)uStack_181);
      uStack_17d = 0x110;
      cStack_179 = '\0';
      appuStack_110[0] = &PTR_DAT_1108a5a88;
      ppuStack_178 = &PTR_DAT_11088d7b0;
      if (cStack_121 < '\0') {
        __ZdlPv(CONCAT17(cStack_131,uStack_138));
      }
      ppuStack_178 = (undefined **)
                     (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
      __ZNSt3__16localeD1Ev(alStack_170);
      __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&pppppuStack_190,&PTR_PTR_1108a5aa0);
      __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_110);
      uVar16 = (uint)(char)uStack_320._7_1_;
      ppppppuVar19 = ppppppuStack_328;
      if (-1 < (int)uVar16) {
        ppppppuVar19 = (undefined8 ******)(ulong)uStack_320._7_1_;
      }
      if (ppppppuVar19 == (undefined8 ******)0x0) {
LAB_10a344eb4:
        if ((uVar16 >> 7 & 1) != 0) {
LAB_10a344eb8:
          __ZdlPv(ppppppuStack_330);
        }
      }
      else {
        cStack_179 = '\x13';
        uStack_188 = 0x6f7365725f6465;
        uStack_181 = 0x65637275;
        pppppuStack_190 = (undefined8 *****)0x6b6e696c5f63733a;
        uStack_17d = uStack_17d & 0xffffff00;
        pppppppuVar11 = &pppppppuStack_310;
        pppppuStack_278 = &pppppuStack_190;
        func_0x000104c5bc74(pppppppuVar11,&pppppuStack_190,&UNK_10dd5b8f9,&pppppuStack_278,
                            &uStack_279);
        if (*(char *)((long)pppppppuVar11 + 0x3f) < '\0') {
          __ZdlPv(pppppppuVar11[5]);
        }
        ppppppuVar19 = ppppppuStack_330;
        uVar16 = 0;
        pppppppuVar11[6] = ppppppuStack_328;
        pppppppuVar11[5] = ppppppuVar19;
        pppppppuVar11[7] = uStack_320;
        uStack_320 = (undefined8 ******)((ulong)uStack_320 & 0xffffffffffffff);
        ppppppuStack_330 = (undefined8 ******)((ulong)ppppppuStack_330 & 0xffffffffffffff00);
        if (-1 < cStack_179) goto LAB_10a344eb4;
        __ZdlPv(pppppuStack_190);
        if ((long)uStack_320 < 0) goto LAB_10a344eb8;
      }
      plVar21 = *(long **)(*param_3 + 0x88);
      plVar9 = *(long **)(*param_3 + 0x90);
    }
    for (; plVar21 != plVar9; plVar21 = plVar21 + 2) {
      lVar14 = *plVar21;
      if ((lVar14 != 0) &&
         (___dynamic_cast(lVar14,&PTR_DAT_110c5ef50,&PTR_DAT_110baea90,0), lVar14 != 0)) {
        uStack_318 = 1;
        goto LAB_10a344f14;
      }
    }
    uStack_318 = 0;
LAB_10a344f14:
    plVar21 = (long *)param_4[1];
    ppppppuStack_328 = (undefined8 ******)param_4[1];
    ppppppuStack_330 = (undefined8 ******)*param_4;
    if (plVar21 != (long *)0x0) {
      plVar9 = plVar21 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = *plVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uStack_320 = *(undefined8 *******)(param_2 + 0xe0);
    pppppuVar20 = uStack_320[0x20];
    FUN_10a3459e0(&plStack_348,*(undefined8 *)(param_2 + 0xf8),&ppppppuStack_330);
    puVar12 = (undefined8 *)0x138;
    __Znwm();
    pppppuStack_190 = pppppuStack_1e0;
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = &PTR_FUN_110b9f3b0;
    ppppuVar2 = ppppuStack_2d8;
    pppppppuVar11 = pppppppuStack_2e0;
    if (-1 < (long)ppppuStack_2d0) {
      ppppuVar2 = (undefined8 ****)((ulong)ppppuStack_2d0 >> 0x38);
      pppppppuVar11 = &pppppppuStack_2e0;
    }
    pppppuStack_1e0 = (undefined8 *****)0x0;
    uStack_188 = (undefined7)uStack_1d8;
    uStack_181._0_1_ = (undefined1)((ulong)uStack_1d8 >> 0x38);
    (**(code **)(alStack_1d0[0] + 0x10))((long)&uStack_181 + 1,alStack_1d0);
    ppppppuStack_260 = ppppppuStack_308;
    pppppppuStack_268 = pppppppuStack_310;
    uStack_148 = uStack_198;
    pppppppuStack_310 = (undefined8 *******)0x0;
    ppppppuStack_308 = (undefined8 ******)0x0;
    uStack_258 = ppppppuStack_300;
    lStack_250 = lStack_2f8;
    uStack_248 = uStack_2f0;
    if (lStack_2f8 != 0) {
      ppppppuVar19 = (undefined8 ******)ppppppuStack_300[1];
      if (((ulong)ppppppuStack_260 & (long)ppppppuStack_260 - 1U) == 0) {
        ppppppuVar19 = (undefined8 ******)((ulong)ppppppuVar19 & (long)ppppppuStack_260 - 1U);
      }
      else if (ppppppuStack_260 <= ppppppuVar19) {
        uVar18 = 0;
        if (ppppppuStack_260 != (undefined8 ******)0x0) {
          uVar18 = (ulong)ppppppuVar19 / (ulong)ppppppuStack_260;
        }
        ppppppuVar19 = (undefined8 ******)((long)ppppppuVar19 - uVar18 * (long)ppppppuStack_260);
      }
      pppppppuStack_268[(long)ppppppuVar19] = (undefined8 ******)&uStack_258;
      ppppppuStack_300 = (undefined8 ******)0x0;
      lStack_2f8 = 0;
    }
    ppppuVar3 = pppppuVar20[0x42];
    pppppuVar7 = (undefined8 *****)pppppuVar20[0x41];
    if (-1 < (char)*(byte *)((long)pppppuVar20 + 0x21f)) {
      ppppuVar3 = (undefined8 ****)(ulong)*(byte *)((long)pppppuVar20 + 0x21f);
      pppppuVar7 = pppppuVar20 + 0x41;
    }
    pppppppcStack_240 = (code *******)FUN_10a383adc;
    ppppppuStack_238 = (undefined8 ******)&PTR_FUN_110bc7720;
    uStack_230 = plStack_348;
    lStack_220 = lStack_338;
    pppppppuStack_228 = pppppppuStack_340;
    pppppppuStack_340 = (undefined8 *******)0x0;
    lStack_338 = 0;
    FUN_10a05c494(puVar12 + 3,pppppppuVar11,ppppuVar2,"POST",4,&pppppuStack_190,2,&pppppppuStack_268
                  ,pppppuVar7,ppppuVar3,&pppppppcStack_240);
    (*(code *)*ppppppuStack_238)(&ppppppuStack_238);
    func_0x000104c4f944(&pppppppuStack_268);
    FUN_10a042634(&pppppuStack_190);
    *param_1 = (long)(puVar12 + 3);
    param_1[1] = (long)puVar12;
    FUN_10a345be4(&plStack_348);
    if (plVar21 != (long *)0x0) {
      plVar9 = plVar21 + 1;
      do {
        lVar14 = *plVar9;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      }
    }
    func_0x000104c4f944(&pppppppuStack_310);
    FUN_10a042634(&pppppuStack_1e0);
    if ((long)ppppuStack_2d0 < 0) {
      __ZdlPv(pppppppuStack_2e0);
    }
    if ((char)bStack_2b1 < '\0') {
      __ZdlPv(uStack_2c8);
    }
    if ((char)bStack_299 < '\0') {
      __ZdlPv(uStack_2b0);
    }
    if ((char)bStack_281 < '\0') {
      __ZdlPv(uStack_298);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
  }
  ___stack_chk_fail();
LAB_10a34524c:
  FUN_10a05bab8(&UNK_10f6347d3);
LAB_10a345258:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a34525c);
  (*pcVar8)();
}



/* Entry: 10a3455a8; end: 10a3455fb;  */

undefined * FUN_10a3455a8(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1024];
  long lStack_70;
  
  FUN_10ae030a0(0,param_1);
  ppuVar6 = &PTR_PTR_113301a60;
  ppuVar5 = ppuVar6;
  FUN_10ae079a0();
  FUN_10ae030d8();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar5[0x13],ppuVar5[0xf],
                  ppuVar5 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    puVar8 = ppuVar5[0x12];
    puVar7 = ppuVar5[0xb];
    uVar1 = 0;
    _clock_gettime_nsec_np();
    uVar2 = uVar1;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar5 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar5 + 0xe);
    uStack_8c0 = uVar2 & 0xffffffff;
    ppuStack_8b0 = ppuVar5 + 0x10;
    puVar3 = *ppuVar5;
    ppuVar6 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar7;
    puStack_8d8 = puVar8;
    uStack_8d0 = (ulong)(puVar8 != (undefined *)0x0);
    uStack_8c8 = uVar1;
    FUN_10ae0784c(puVar3,ppuVar6,&puStack_900,&puStack_918);
  }
  iVar4 = (int)ppuVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar4 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar3);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10a3455fc; end: 10a34576b;  */

void FUN_10a3455fc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  lVar4 = 0x90;
  __Znwm();
  FUN_10a972790();
  *param_1 = lVar4;
  plVar5 = (long *)0x20;
  __Znwm();
  plVar6 = plVar5 + 1;
  *plVar6 = 0;
  *plVar5 = (long)&PTR_FUN_110bc5f98;
  plVar5[2] = 0;
  plVar5[3] = lVar4;
  param_1[1] = (long)plVar5;
  if (*(long *)(lVar4 + 0x20) == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(long *)(lVar4 + 0x18) = lVar4;
    *(long **)(lVar4 + 0x20) = plVar5;
  }
  else {
    if (*(long *)(*(long *)(lVar4 + 0x20) + 8) != -1) {
      return;
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(long *)(lVar4 + 0x18) = lVar4;
    *(long **)(lVar4 + 0x20) = plVar5;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar4 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 != 0) {
    return;
  }
  (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
  return;
}



/* Entry: 10a34576c; end: 10a3459df;  */

undefined *******
FUN_10a34576c(undefined *******param_1,undefined *******param_2,undefined8 *param_3)

{
  undefined *****pppppuVar1;
  undefined ******ppppppuVar2;
  undefined *****pppppuVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined *******pppppppuVar7;
  undefined *******pppppppuVar8;
  undefined *******pppppppuVar9;
  undefined ******ppppppuVar10;
  undefined *******pppppppuVar11;
  undefined ****ppppuVar12;
  undefined *****pppppuVar13;
  undefined *******unaff_x21;
  undefined ******ppppppuVar14;
  undefined ******ppppppuVar15;
  undefined ****ppppuStack_140;
  undefined ****ppppuStack_138;
  undefined ****ppppuStack_130;
  undefined1 uStack_128;
  undefined **ppuStack_120;
  undefined ****ppppuStack_118;
  undefined ****ppppuStack_110;
  undefined ****ppppuStack_108;
  undefined1 uStack_100;
  long lStack_e8;
  undefined *****pppppuStack_a0;
  undefined ******ppppppuStack_98;
  undefined *****pppppuStack_90;
  undefined ******ppppppuStack_88;
  undefined *****pppppuStack_80;
  undefined ******ppppppuStack_78;
  undefined *****pppppuStack_70;
  undefined *****pppppuStack_68;
  undefined *****pppppuStack_60;
  undefined ******ppppppuStack_58;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_1 == (undefined *******)0x0) || (*(char *)(param_1 + 8) != '\x02')) {
    pppppppuVar7 = param_1;
    pppppppuVar11 = param_2;
    if ((param_1 == (undefined *******)0x0) || (*(char *)(param_1 + 8) != '\x01'))
    goto LAB_10a345958;
    ppppppuVar10 = *param_1;
    ppppppuStack_78 = param_2[1];
    pppppuStack_80 = (undefined *****)*param_2;
    if (param_2[1] != (undefined ******)0x0) {
      ppppppuVar14 = param_2[1] + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar14,0x10);
        if (bVar5) {
          *ppppppuVar14 = (undefined *****)((long)*ppppppuVar14 + 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    pppppppuVar7 = (undefined *******)&pppppuStack_80;
    pppppppuVar11 = param_1;
    (*(code *)ppppppuVar10)();
    if ((undefined *******)ppppppuStack_78 == (undefined *******)0x0) goto LAB_10a345958;
    pppppppuVar8 = (undefined *******)(ppppppuStack_78 + 1);
    do {
      ppppppuVar10 = *pppppppuVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar8,0x10);
      if (bVar5) {
        *pppppppuVar8 = (undefined ******)((long)ppppppuVar10 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
      pppppppuVar9 = (undefined *******)ppppppuStack_78;
    } while (cVar4 != '\0');
  }
  else {
    unaff_x21 = param_1;
    pppppppuVar8 = param_2;
    FUN_10a688b40();
    if (unaff_x21 != (undefined *******)0x0) {
      *unaff_x21 = (undefined ******)
                   CONCAT44((int)((ulong)*unaff_x21 >> 0x20) + 1,(int)*unaff_x21 + 1);
      pppppppuVar7 = (undefined *******)*param_1;
      FUN_10a383860();
      iVar6 = *(int *)((long)unaff_x21 + 4) + -1;
      *(int *)((long)unaff_x21 + 4) = iVar6;
      pppppppuVar11 = param_2;
      if (iVar6 == 0) {
        *(undefined4 *)unaff_x21 = 0;
      }
      goto LAB_10a345958;
    }
    pppppppuVar7 = (undefined *******)0x0;
    pppppppuVar11 = (undefined *******)0x0;
    if (pppppppuVar8 == (undefined *******)0x0) goto LAB_10a345958;
    pppppuStack_68 = (undefined *****)param_1[1];
    pppppuStack_70 = (undefined *****)*param_1;
    if (param_1[1] != (undefined ******)0x0) {
      ppppppuVar10 = param_1[1] + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar10,0x10);
        if (bVar5) {
          *ppppppuVar10 = (undefined *****)((long)*ppppppuVar10 + 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    pppppuStack_90 = (undefined *****)*param_2;
    pppppppuVar8 = (undefined *******)param_2[1];
    if (pppppppuVar8 != (undefined *******)0x0) {
      pppppppuVar7 = pppppppuVar8 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar7,0x10);
        if (bVar5) {
          *pppppppuVar7 = (undefined ******)((long)*pppppppuVar7 + 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    pppppuStack_80 = (undefined *****)FUN_10a383a64;
    ppppppuStack_78 = (undefined ******)&PTR_FUN_110bc7708;
    pppppuStack_a0 = (undefined *****)0x0;
    ppppppuStack_98 = (undefined ******)0x0;
    if (pppppppuVar8 != (undefined *******)0x0) {
      pppppppuVar7 = pppppppuVar8 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar7,0x10);
        if (bVar5) {
          *pppppppuVar7 = (undefined ******)((long)*pppppppuVar7 + 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    unaff_x21 = (undefined *******)&pppppuStack_80;
    pppppppuVar11 = (undefined *******)&pppppuStack_80;
    ppppppuStack_88 = (undefined ******)pppppppuVar8;
    pppppuStack_60 = pppppuStack_90;
    ppppppuStack_58 = (undefined ******)pppppppuVar8;
    FUN_10a4634ec();
    pppppppuVar7 = &ppppppuStack_78;
    (*(code *)*ppppppuStack_78)();
    if (pppppppuVar8 != (undefined *******)0x0) {
      pppppppuVar9 = pppppppuVar8 + 1;
      do {
        ppppppuVar10 = *pppppppuVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar9,0x10);
        if (bVar5) {
          *pppppppuVar9 = (undefined ******)((long)ppppppuVar10 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (ppppppuVar10 == (undefined ******)0x0) {
        (*(code *)(*pppppppuVar8)[2])(pppppppuVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppppppuVar7 = pppppppuVar8;
      }
    }
    param_1 = (undefined *******)&pppppuStack_a0;
    if ((undefined *******)ppppppuStack_98 == (undefined *******)0x0) goto LAB_10a345958;
    pppppppuVar8 = (undefined *******)(ppppppuStack_98 + 1);
    do {
      ppppppuVar10 = *pppppppuVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar8,0x10);
      if (bVar5) {
        *pppppppuVar8 = (undefined ******)((long)ppppppuVar10 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
      pppppppuVar9 = (undefined *******)ppppppuStack_98;
      param_1 = (undefined *******)&pppppuStack_a0;
    } while (cVar4 != '\0');
  }
  if (ppppppuVar10 == (undefined ******)0x0) {
    (*(code *)(*pppppppuVar9)[2])(pppppppuVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    pppppppuVar7 = pppppppuVar9;
  }
LAB_10a345958:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return pppppppuVar7;
  }
  ___stack_chk_fail();
  (*(code *)*ppppppuStack_78)(unaff_x21 + 1);
  func_0x00010a083f00(param_1 + 2);
  func_0x00010a004dac(&pppppuStack_a0);
  __Unwind_Resume();
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(pppppppuVar11 + 2);
  pppppuVar13 = (undefined *****)*param_3;
  pppppuVar3 = (undefined *****)param_3[1];
  if (pppppuVar3 == (undefined *****)0x0) {
    ppppuStack_130 = (undefined ****)param_3[2];
    uStack_128 = *(undefined1 *)(param_3 + 3);
    ppppuStack_110 = (undefined ****)0x0;
  }
  else {
    pppppuVar1 = pppppuVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
      if (bVar5) {
        *pppppuVar1 = (undefined ****)((long)*pppppuVar1 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    ppppuStack_130 = (undefined ****)param_3[2];
    uStack_128 = *(undefined1 *)(param_3 + 3);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
      if (bVar5) {
        *pppppuVar1 = (undefined ****)((long)*pppppuVar1 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
      ppppuStack_110 = (undefined ****)pppppuVar3;
    } while (cVar4 != '\0');
  }
  ppuStack_120 = &PTR_DAT_110bc6000;
  ppppuStack_108 = ppppuStack_130;
  uStack_100 = uStack_128;
  ppppppuVar10 = (undefined ******)0x48;
  ppppuStack_140 = (undefined ****)pppppuVar13;
  ppppuStack_138 = (undefined ****)pppppuVar3;
  ppppuStack_118 = (undefined ****)pppppuVar13;
  __Znwm();
  ppppppuVar10[2] = (undefined *****)&PTR_DAT_110bc6000;
  ppppppuVar10[3] = pppppuVar13;
  ppppppuVar10[4] = pppppuVar3;
  if (pppppuVar3 != (undefined *****)0x0) {
    pppppuVar13 = pppppuVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppppuVar13,0x10);
      if (bVar5) {
        *pppppuVar13 = (undefined ****)((long)*pppppuVar13 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  ppppppuVar10[5] = (undefined *****)ppppuStack_130;
  *(undefined1 *)(ppppppuVar10 + 6) = uStack_128;
  ppppppuVar14 = pppppppuVar11[0xb];
  ppppppuVar15 = pppppppuVar11[0xc];
  *ppppppuVar10 = (undefined *****)(pppppppuVar11 + 10);
  ppppppuVar10[1] = (undefined *****)ppppppuVar14;
  *ppppppuVar14 = (undefined *****)ppppppuVar10;
  pppppppuVar11[0xb] = ppppppuVar10;
  pppppppuVar11[0xc] = (undefined ******)((long)ppppppuVar15 + 1);
  if (pppppuVar3 != (undefined *****)0x0) {
    pppppuVar13 = pppppuVar3 + 1;
    do {
      ppppuVar12 = *pppppuVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppppuVar13,0x10);
      if (bVar5) {
        *pppppuVar13 = (undefined ****)((long)ppppuVar12 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppppuVar12 == (undefined ****)0x0) {
      (*(code *)(*pppppuVar3)[2])(pppppuVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar3);
    }
    do {
      ppppuVar12 = *pppppuVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppppuVar13,0x10);
      if (bVar5) {
        *pppppuVar13 = (undefined ****)((long)ppppuVar12 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppppuVar12 == (undefined ****)0x0) {
      (*(code *)(*pppppuVar3)[2])(pppppuVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar3);
    }
  }
  ppppppuVar10 = pppppppuVar11[0xb];
  pppppppuVar8 = pppppppuVar11 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  ppppppuVar15 = pppppppuVar11[1];
  ppppppuVar14 = *pppppppuVar11;
  if (pppppppuVar11[1] != (undefined ******)0x0) {
    ppppppuVar2 = pppppppuVar11[1] + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar2,0x10);
      if (bVar5) {
        *ppppppuVar2 = (undefined *****)((long)*ppppppuVar2 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *pppppppuVar7 = ppppppuVar10;
  pppppppuVar7[2] = ppppppuVar15;
  pppppppuVar7[1] = ppppppuVar14;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
    ___stack_chk_fail();
    func_0x00010a084070(&ppppuStack_118);
    func_0x00010a084070(&ppppuStack_140);
    __ZNSt3__115recursive_mutex6unlockEv(pppppppuVar11 + 2);
    __Unwind_Resume();
    ppppppuVar10 = pppppppuVar8[2];
    if (ppppppuVar10 != (undefined ******)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      if (ppppppuVar10 != (undefined ******)0x0) {
        if (pppppppuVar8[1] != (undefined ******)0x0) {
          FUN_10a05c0fc(pppppppuVar8[1],*pppppppuVar8);
        }
        ppppppuVar14 = ppppppuVar10 + 1;
        do {
          pppppuVar13 = *ppppppuVar14;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar14,0x10);
          if (bVar5) {
            *ppppppuVar14 = (undefined *****)((long)pppppuVar13 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (pppppuVar13 == (undefined *****)0x0) {
          (*(code *)(*ppppppuVar10)[2])(ppppppuVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar10);
        }
      }
      if (pppppppuVar8[2] != (undefined ******)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    return pppppppuVar8;
  }
  return pppppppuVar8;
}



/* Entry: 10a3459e0; end: 10a345be3;  */

undefined8 * FUN_10a3459e0(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  undefined1 uStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  long *plStack_70;
  long lStack_68;
  undefined1 uStack_60;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  lVar7 = *param_3;
  plVar6 = (long *)param_3[1];
  if (plVar6 == (long *)0x0) {
    lStack_90 = param_3[2];
    uStack_88 = (undefined1)param_3[3];
    plStack_70 = (long *)0x0;
  }
  else {
    plVar4 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lStack_90 = param_3[2];
    uStack_88 = (undefined1)param_3[3];
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plStack_70 = plVar6;
    } while (cVar2 != '\0');
  }
  ppuStack_80 = &PTR_DAT_110bc6000;
  lStack_68 = lStack_90;
  uStack_60 = uStack_88;
  plVar4 = (long *)0x48;
  lStack_a0 = lVar7;
  plStack_98 = plVar6;
  lStack_78 = lVar7;
  __Znwm();
  plVar4[2] = (long)&PTR_DAT_110bc6000;
  plVar4[3] = lVar7;
  plVar4[4] = (long)plVar6;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar4[5] = lStack_90;
  *(undefined1 *)(plVar4 + 6) = uStack_88;
  puVar5 = (undefined8 *)param_2[0xb];
  lVar7 = param_2[0xc];
  *plVar4 = (long)(param_2 + 10);
  plVar4[1] = (long)puVar5;
  *puVar5 = plVar4;
  param_2[0xb] = plVar4;
  param_2[0xc] = lVar7 + 1;
  if (plVar6 != (long *)0x0) {
    plVar4 = plVar6 + 1;
    do {
      lVar7 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
    do {
      lVar7 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  uVar8 = param_2[0xb];
  puVar5 = param_2 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  uVar10 = param_2[1];
  uVar9 = *param_2;
  if (param_2[1] != 0) {
    plVar6 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = uVar8;
  param_1[2] = uVar10;
  param_1[1] = uVar9;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    func_0x00010a084070(&lStack_78);
    func_0x00010a084070(&lStack_a0);
    __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
    __Unwind_Resume();
    plVar6 = (long *)puVar5[2];
    if (plVar6 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar6 != (long *)0x0) {
        if (puVar5[1] != 0) {
          FUN_10a05c0fc(puVar5[1],*puVar5);
        }
        plVar4 = plVar6 + 1;
        do {
          lVar7 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      if (puVar5[2] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    return puVar5;
  }
  return puVar5;
}



/* Entry: 10a345be4; end: 10a345c63;  */

undefined8 * FUN_10a345be4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (param_1[1] != 0) {
        FUN_10a05c0fc(param_1[1],*param_1);
      }
      plVar1 = plVar4 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (param_1[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return param_1;
}



/* Entry: 10a345c64; end: 10a346037;  */

void FUN_10a345c64(long param_1)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  if (*(long *)(param_1 + 0x140) != 0) {
    return;
  }
  lVar7 = *(long *)(param_1 + 0xe0);
  uVar1 = *(undefined4 *)(param_1 + 0x124);
  if (lVar7 == 0) {
    plVar4 = (long *)0x120;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_DAT_110bc7868;
    plVar6 = plVar4 + 3;
    FUN_10a00ae24(plVar6,0,uVar1);
    plStack_50 = plVar6;
    plStack_48 = plVar4;
    FUN_10a386464(&plStack_50,plVar4 + 8,plVar6);
    FUN_10a386300(&plStack_90,&plStack_50);
    if (plStack_48 == (long *)0x0) goto LAB_10a345f0c;
    plVar6 = plStack_48 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_48;
    } while (cVar2 != '\0');
  }
  else {
    lVar8 = *(long *)(lVar7 + 0x858);
    plVar6 = *(long **)(lVar7 + 0x860);
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar4 = (long *)0x108;
    lStack_80 = lVar8;
    plStack_78 = plVar6;
    __Znwm();
    FUN_10a00ae24();
    lStack_70 = lVar8;
    plStack_68 = plVar6;
    if (plVar6 != (long *)0x0) {
      plVar5 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar5 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
    plVar5 = (long *)0x30;
    lStack_60 = lVar8;
    plStack_58 = plVar6;
    plStack_50 = plVar4;
    __Znwm();
    lStack_60 = 0;
    plStack_58 = (long *)0x0;
    *plVar5 = (long)&PTR_DAT_110bc7808;
    plVar5[1] = 0;
    plVar5[2] = 0;
    plVar5[3] = (long)plVar4;
    plVar5[4] = lVar8;
    plVar5[5] = (long)plVar6;
    plStack_48 = plVar5;
    FUN_10a386464(&plStack_50,plVar4 + 5,plVar4);
    FUN_10a386300(&plStack_90,&plStack_50);
    plVar6 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar4 = plStack_48 + 1;
      do {
        lVar7 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_58 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar6 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar4 = plStack_68 + 1;
      do {
        lVar7 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if ((lStack_80 != 0) && (plStack_90 != (long *)0x0)) {
      plStack_50 = plStack_90;
      plStack_48 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar6 = plStack_88 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10aa88c30(lStack_80,&plStack_50);
      plVar6 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar7 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_10a345f0c;
    plVar6 = plStack_78 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
LAB_10a345f0c:
  plVar4 = plStack_88;
  plVar6 = plStack_90;
  plStack_90 = (long *)0x0;
  plStack_88 = (long *)0x0;
  plVar5 = *(long **)(param_1 + 0x148);
  *(long **)(param_1 + 0x148) = plVar4;
  *(long **)(param_1 + 0x140) = plVar6;
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar6 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar4 = plStack_88 + 1;
    do {
      lVar7 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return;
}



/* Entry: 10a346038; end: 10a346133;  */

void FUN_10a346038(long param_1,long param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined **ppuVar6;
  long lVar7;
  
  uVar1 = *(ulong *)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0x17);
  }
  if (uVar1 == 0) {
    return;
  }
  plVar4 = *(long **)(param_1 + 0xf0);
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    if ((plVar4 != (long *)0x0) && (plVar5 = *(long **)(param_1 + 0xe8), plVar5 != (long *)0x0)) {
      (**(code **)(*plVar5 + 8))(plVar5,param_2);
      func_0x000108974130(param_1 + 0x128,param_2);
      goto LAB_10a3460dc;
    }
  }
  ppuVar6 = &PTR_PTR_113301b20;
  FUN_10ae079a0(0,&PTR_PTR_113301b20);
  FUN_10ae07cd4(ppuVar6,&PTR_PTR_113301b20);
  if (plVar4 == (long *)0x0) {
    return;
  }
LAB_10a3460dc:
  plVar5 = plVar4 + 1;
  do {
    lVar7 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  return;
}



/* Entry: 10a346134; end: 10a3462b7;  */

/* WARNING: Removing unreachable block (ram,0x00010a346590) */
/* WARNING: Removing unreachable block (ram,0x00010a3466e8) */

void FUN_10a346134(ulong param_1,code **param_2)

{
  undefined ***pppuVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined ***pppuVar7;
  long *plVar8;
  code **ppcVar9;
  undefined8 in_x7;
  code *pcVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined ***pppuVar14;
  undefined ***unaff_x21;
  undefined **unaff_x22;
  long *plVar15;
  undefined *puVar16;
  long *plStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long *plStack_250;
  long *plStack_248;
  undefined **ppuStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined4 uStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined ***pppuStack_210;
  code *pcStack_208;
  undefined8 *apuStack_200 [7];
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  long alStack_1b8 [7];
  undefined8 uStack_180;
  code *pcStack_178;
  undefined **ppuStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [8];
  undefined1 uStack_120;
  undefined8 uStack_f0;
  long lStack_e8;
  code *pcStack_88;
  undefined ***pppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  code *pcStack_68;
  undefined ***pppuStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = param_1;
  ppcVar9 = param_2;
  FUN_10a3444b8();
  if ((uVar6 & 1) == 0) {
    FUN_10a00946c(&UNK_10f65027a);
LAB_10a346278:
    FUN_10a00946c(&UNK_10f63126b);
LAB_10a346284:
    pppuVar7 = (undefined ***)&UNK_10f63129a;
    FUN_10a00946c();
  }
  else {
    pcVar10 = *param_2;
    if (pcVar10 == (code *)0x0) goto LAB_10a346278;
    lVar11 = (long)*(char *)(param_1 + 0x11f);
    if (lVar11 < 0) {
      lVar11 = *(long *)(param_1 + 0x110);
    }
    if (lVar11 == 0) goto LAB_10a346284;
    pppuVar14 = (undefined ***)param_2[1];
    if (pppuVar14 == (undefined ***)0x0) {
      pppuStack_60 = (undefined ***)0x0;
    }
    else {
      pppuVar7 = pppuVar14 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
        if (bVar5) {
          *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
        if (bVar5) {
          *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
        pppuStack_60 = pppuVar14;
      } while (cVar4 != '\0');
    }
    ppuStack_70 = &PTR_DAT_110bc7750;
    unaff_x21 = &ppuStack_70;
    pcStack_78 = FUN_10a384f08;
    ppcVar9 = &pcStack_78;
    pcStack_88 = pcVar10;
    pppuStack_80 = pppuVar14;
    pcStack_68 = pcVar10;
    FUN_10a3462b8(param_1);
    pppuVar7 = unaff_x21;
    (*(code *)*ppuStack_70)();
    if (pppuVar14 != (undefined ***)0x0) {
      pppuVar1 = pppuVar14 + 1;
      do {
        ppuVar12 = *pppuVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
        if (bVar5) {
          *pppuVar1 = (undefined **)((long)ppuVar12 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (ppuVar12 == (undefined **)0x0) {
        (*(code *)(*pppuVar14)[2])(pppuVar14);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppuVar7 = pppuVar14;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(unaff_x21);
  FUN_10a352eb0(&pcStack_88);
  __Unwind_Resume();
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar3 = *(int *)(pppuVar7 + 0x24);
  if (iVar3 == 0 || iVar3 == 5) {
    ppuStack_220 = (undefined **)0x0;
    ppuStack_218 = (undefined **)0x0;
    ppuVar12 = pppuVar7[0x1e];
    if (((ppuVar12 == (undefined **)0x0) ||
        (__ZNSt3__119__shared_weak_count4lockEv(), ppuStack_218 = ppuVar12,
        ppuVar12 == (undefined **)0x0)) ||
       (ppuVar12 = pppuVar7[0x1d], ppuStack_220 = ppuVar12, ppuVar12 == (undefined **)0x0)) {
      unaff_x22 = ppuStack_218;
      ppuVar12 = &PTR_PTR_113301b20;
      FUN_10ae079a0(0,&PTR_PTR_113301b20);
      FUN_10ae07cd4(ppuVar12,&PTR_PTR_113301b20);
    }
    else {
      *(undefined4 *)(pppuVar7 + 0x24) = 1;
      ppuStack_240 = &PTR_DAT_110b1ac68;
      uStack_238 = 0;
      puStack_230 = &DAT_11383d918;
      uStack_228 = 0;
      func_0x000107c30248(&puStack_230,pppuVar7 + 0x21,0);
      FUN_10a3bf4bc(&uStack_1c8,&ppuStack_240);
      pcStack_208 = *ppcVar9;
      pppuStack_210 = pppuVar7;
      (**(code **)(ppcVar9[1] + 0x18))(apuStack_200,ppcVar9 + 1);
      puVar16 = pppuVar7[0x1c][0x20];
      FUN_10a3466f4(&uStack_268,pppuVar7[0x1f],&pppuStack_210);
      plVar8 = (long *)0x138;
      __Znwm();
      uStack_138 = uStack_1c8;
      plVar15 = plVar8 + 1;
      *plVar15 = 0;
      plVar8[2] = 0;
      *plVar8 = (long)&PTR_FUN_110b9f3b0;
      plVar2 = plVar8 + 3;
      uStack_1c8 = 0;
      uStack_130 = uStack_1c0;
      (**(code **)(alStack_1b8[0] + 0x10))(auStack_128,alStack_1b8);
      uStack_f0 = uStack_180;
      uVar6 = *(ulong *)(puVar16 + 0x210);
      puVar13 = *(undefined **)(puVar16 + 0x208);
      if (-1 < (char)puVar16[0x21f]) {
        uVar6 = (ulong)(byte)puVar16[0x21f];
        puVar13 = puVar16 + 0x208;
      }
      pcStack_178 = FUN_10a385508;
      ppuStack_170 = &PTR_FUN_110bc7770;
      uStack_168 = uStack_268;
      uStack_158 = uStack_258;
      uStack_160 = uStack_260;
      uStack_260 = 0;
      uStack_258 = 0;
      FUN_10a23708c(plVar2,&UNK_10e4ac792,0x29,"POST",4,&uStack_138,0,in_x7,puVar13,uVar6,
                    &pcStack_178);
      (*(code *)*ppuStack_170)(&ppuStack_170);
      FUN_10a042634(&uStack_138);
      plStack_250 = plVar2;
      plStack_248 = plVar8;
      FUN_10a346854(&uStack_268);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = *plVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plStack_278 = plVar2;
      plStack_270 = plVar8;
      (**(code **)*ppuVar12)(ppuVar12,&plStack_278);
      plVar2 = plStack_270;
      if (plStack_270 != (long *)0x0) {
        plVar8 = plStack_270 + 1;
        do {
          lVar11 = *plVar8;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_270 + 0x10))(plStack_270);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      plVar2 = plStack_248;
      if (plStack_248 != (long *)0x0) {
        plVar8 = plStack_248 + 1;
        do {
          lVar11 = *plVar8;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_248 + 0x10))(plStack_248);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      (*(code *)*apuStack_200[0])(apuStack_200);
      FUN_10a042634(&uStack_1c8);
      func_0x0001098d83dc(&ppuStack_240);
      unaff_x22 = ppuStack_218;
    }
    if (unaff_x22 != (undefined **)0x0) {
      ppuVar12 = unaff_x22 + 1;
      do {
        puVar13 = *ppuVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
        if (bVar5) {
          *ppuVar12 = puVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (puVar13 == (undefined *)0x0) {
        (**(code **)(*unaff_x22 + 0x10))(unaff_x22);
        __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x22);
      }
    }
  }
  else {
    if (iVar3 == 1) goto LAB_10a34662c;
    uStack_138 = uStack_138 & 0xffffffffffffff00;
    uStack_120 = 0;
    (**ppcVar9)(iVar3,&uStack_138,ppcVar9);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
LAB_10a34662c:
  puVar13 = &UNK_10f6502a6;
  FUN_10a00946c(&UNK_10f6502a6);
  FUN_10a05bd88(&plStack_278);
  FUN_10a05bd88(&plStack_250);
  (*(code *)*apuStack_200[0])(unaff_x22 + 2);
  FUN_10a042634(&uStack_1c8);
  func_0x0001098d83dc(&ppuStack_240);
  func_0x00010a05a8c4(&ppuStack_220);
  do {
    __Unwind_Resume(puVar13);
  } while( true );
}



/* Entry: 10a3462b8; end: 10a3466f3;  */

/* WARNING: Removing unreachable block (ram,0x00010a346590) */
/* WARNING: Removing unreachable block (ram,0x00010a3466e8) */

void FUN_10a3462b8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 in_x7;
  long lVar9;
  undefined8 *puVar10;
  long *unaff_x22;
  long *plVar11;
  long lVar12;
  long *plStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined **ppuStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined4 uStack_198;
  undefined8 *puStack_190;
  long *plStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 *apuStack_170 [7];
  ulong uStack_138;
  undefined8 uStack_130;
  long alStack_128 [7];
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 uStack_90;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar2 = *(int *)(param_1 + 0x120);
  if (iVar2 == 0 || iVar2 == 5) {
    puStack_190 = (undefined8 *)0x0;
    plStack_188 = (long *)0x0;
    plVar5 = *(long **)(param_1 + 0xf0);
    if (((plVar5 == (long *)0x0) ||
        (__ZNSt3__119__shared_weak_count4lockEv(), plStack_188 = plVar5, plVar5 == (long *)0x0)) ||
       (puVar10 = *(undefined8 **)(param_1 + 0xe8), puStack_190 = puVar10,
       puVar10 == (undefined8 *)0x0)) {
      unaff_x22 = plStack_188;
      ppuVar8 = &PTR_PTR_113301b20;
      FUN_10ae079a0(0,&PTR_PTR_113301b20);
      FUN_10ae07cd4(ppuVar8,&PTR_PTR_113301b20);
    }
    else {
      *(undefined4 *)(param_1 + 0x120) = 1;
      ppuStack_1b0 = &PTR_DAT_110b1ac68;
      uStack_1a8 = 0;
      puStack_1a0 = &DAT_11383d918;
      uStack_198 = 0;
      func_0x000107c30248(&puStack_1a0,param_1 + 0x108,0);
      FUN_10a3bf4bc(&uStack_138,&ppuStack_1b0);
      uStack_178 = *param_2;
      lStack_180 = param_1;
      (**(code **)(param_2[1] + 0x18))(apuStack_170,param_2 + 1);
      lVar12 = *(long *)(*(long *)(param_1 + 0xe0) + 0x100);
      FUN_10a3466f4(&uStack_1d8,*(undefined8 *)(param_1 + 0xf8),&lStack_180);
      plVar6 = (long *)0x138;
      __Znwm();
      uStack_a8 = uStack_138;
      plVar11 = plVar6 + 1;
      *plVar11 = 0;
      plVar6[2] = 0;
      *plVar6 = (long)&PTR_FUN_110b9f3b0;
      plVar5 = plVar6 + 3;
      uStack_138 = 0;
      uStack_a0 = uStack_130;
      (**(code **)(alStack_128[0] + 0x10))(auStack_98,alStack_128);
      uStack_60 = uStack_f0;
      uVar1 = *(ulong *)(lVar12 + 0x210);
      lVar9 = *(long *)(lVar12 + 0x208);
      if (-1 < (char)*(byte *)(lVar12 + 0x21f)) {
        uVar1 = (ulong)*(byte *)(lVar12 + 0x21f);
        lVar9 = lVar12 + 0x208;
      }
      pcStack_e8 = FUN_10a385508;
      ppuStack_e0 = &PTR_FUN_110bc7770;
      uStack_d8 = uStack_1d8;
      uStack_c8 = uStack_1c8;
      uStack_d0 = uStack_1d0;
      uStack_1d0 = 0;
      uStack_1c8 = 0;
      FUN_10a23708c(plVar5,&UNK_10e4ac792,0x29,"POST",4,&uStack_a8,0,in_x7,lVar9,uVar1,&pcStack_e8);
      (*(code *)*ppuStack_e0)(&ppuStack_e0);
      FUN_10a042634(&uStack_a8);
      plStack_1c0 = plVar5;
      plStack_1b8 = plVar6;
      FUN_10a346854(&uStack_1d8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = *plVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plStack_1e8 = plVar5;
      plStack_1e0 = plVar6;
      (**(code **)*puVar10)(puVar10,&plStack_1e8);
      plVar5 = plStack_1e0;
      if (plStack_1e0 != (long *)0x0) {
        plVar6 = plStack_1e0 + 1;
        do {
          lVar9 = *plVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      plVar5 = plStack_1b8;
      if (plStack_1b8 != (long *)0x0) {
        plVar6 = plStack_1b8 + 1;
        do {
          lVar9 = *plVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      (*(code *)*apuStack_170[0])(apuStack_170);
      FUN_10a042634(&uStack_138);
      func_0x0001098d83dc(&ppuStack_1b0);
      unaff_x22 = plStack_188;
    }
    if (unaff_x22 != (long *)0x0) {
      plVar5 = unaff_x22 + 1;
      do {
        lVar9 = *plVar5;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*unaff_x22 + 0x10))(unaff_x22);
        __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x22);
      }
    }
  }
  else {
    if (iVar2 == 1) goto LAB_10a34662c;
    uStack_a8 = uStack_a8 & 0xffffffffffffff00;
    uStack_90 = 0;
    (*(code *)*param_2)(iVar2,&uStack_a8,param_2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
LAB_10a34662c:
  puVar7 = &UNK_10f6502a6;
  FUN_10a00946c(&UNK_10f6502a6);
  FUN_10a05bd88(&plStack_1e8);
  FUN_10a05bd88(&plStack_1c0);
  (*(code *)*apuStack_170[0])(unaff_x22 + 2);
  FUN_10a042634(&uStack_138);
  func_0x0001098d83dc(&ppuStack_1b0);
  func_0x00010a05a8c4(&puStack_190);
  do {
    __Unwind_Resume(puVar7);
  } while( true );
}



/* Entry: 10a3466f4; end: 10a346853;  */

long * FUN_10a3466f4(long *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  uVar2 = *param_3;
  uVar3 = param_3[1];
  (**(code **)(param_3[2] + 0x10))(apuStack_70,param_3 + 2);
  puVar6 = (undefined8 *)0x48;
  __Znwm();
  *puVar6 = uVar2;
  puVar6[1] = uVar3;
  (*(code *)apuStack_70[0][2])(puVar6 + 2,apuStack_70);
  plVar7 = (long *)0x48;
  __Znwm();
  plVar7[2] = (long)&PTR_DAT_110bc6018;
  plVar7[3] = (long)puVar6;
  puVar6 = (undefined8 *)param_2[0xb];
  lVar9 = param_2[0xc];
  *plVar7 = (long)(param_2 + 10);
  plVar7[1] = (long)puVar6;
  *puVar6 = plVar7;
  param_2[0xb] = (long)plVar7;
  param_2[0xc] = lVar9 + 1;
  (*(code *)*apuStack_70[0])(apuStack_70);
  lVar9 = param_2[0xb];
  plVar7 = param_2 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  lVar11 = param_2[1];
  lVar10 = *param_2;
  if (param_2[1] != 0) {
    plVar8 = (long *)(param_2[1] + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = lVar9;
  param_1[2] = lVar11;
  param_1[1] = lVar10;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar7;
  }
  ___stack_chk_fail();
  (*(code *)**(undefined8 **)(lVar9 + 0x10))(lVar9 + 0x10);
  __ZdlPv(lVar9);
  (*(code *)*apuStack_70[0])(apuStack_70);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  __Unwind_Resume();
  plVar8 = (long *)plVar7[2];
  if (plVar8 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar8 != (long *)0x0) {
      if (plVar7[1] != 0) {
        FUN_10a05c0fc(plVar7[1],*plVar7);
      }
      plVar1 = plVar8 + 1;
      do {
        lVar9 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if (plVar7[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return plVar7;
}



/* Entry: 10a346854; end: 10a3468d3;  */

undefined8 * FUN_10a346854(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (param_1[1] != 0) {
        FUN_10a05c0fc(param_1[1],*param_1);
      }
      plVar1 = plVar4 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (param_1[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return param_1;
}



/* Entry: 10a3468d4; end: 10a346a5f;  */

undefined *** FUN_10a3468d4(ulong param_1,code **param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined8 *puVar9;
  code *pcVar10;
  code **ppcVar11;
  code *pcVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined ***pppuVar16;
  undefined ***unaff_x21;
  ulong *unaff_x22;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined8 *apuStack_100 [7];
  long lStack_c8;
  undefined1 *puStack_c0;
  undefined ***pppuStack_b8;
  ulong uStack_b0;
  undefined ***pppuStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  ulong uStack_90;
  code *pcStack_88;
  undefined ***pppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  ulong uStack_68;
  code *pcStack_60;
  undefined ***pppuStack_58;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = param_1;
  ppcVar11 = param_2;
  FUN_10a3444b8();
  if ((uVar6 & 1) == 0) {
    FUN_10a00946c(&UNK_10f65027a);
LAB_10a346a20:
    FUN_10a00946c(&UNK_10f63126b);
  }
  else {
    pcVar12 = *param_2;
    if (pcVar12 == (code *)0x0) goto LAB_10a346a20;
    lVar13 = (long)*(char *)(param_1 + 0x11f);
    if (lVar13 < 0) {
      lVar13 = *(long *)(param_1 + 0x110);
    }
    if (lVar13 != 0) {
      pppuVar16 = (undefined ***)param_2[1];
      if (pppuVar16 == (undefined ***)0x0) {
        pppuStack_58 = (undefined ***)0x0;
      }
      else {
        pppuVar7 = pppuVar16 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar5) {
            *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar5) {
            *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
          pppuStack_58 = pppuVar16;
        } while (cVar4 != '\0');
      }
      ppuStack_70 = &PTR_DAT_110bc77a8;
      unaff_x21 = &ppuStack_70;
      pcStack_78 = FUN_10a385858;
      ppcVar11 = &pcStack_78;
      uStack_90 = param_1;
      pcStack_88 = pcVar12;
      pppuStack_80 = pppuVar16;
      uStack_68 = param_1;
      pcStack_60 = pcVar12;
      FUN_10a3462b8(param_1);
      pppuVar7 = unaff_x21;
      (*(code *)*ppuStack_70)();
      if (pppuVar16 != (undefined ***)0x0) {
        pppuVar8 = pppuVar16 + 1;
        do {
          ppuVar14 = *pppuVar8;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
          if (bVar5) {
            *pppuVar8 = (undefined **)((long)ppuVar14 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (ppuVar14 == (undefined **)0x0) {
          (*(code *)(*pppuVar16)[2])(pppuVar16);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar7 = pppuVar16;
        }
      }
      unaff_x22 = &uStack_90;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
        return pppuVar7;
      }
      goto LAB_10a346a38;
    }
  }
  pppuVar7 = (undefined ***)&UNK_10f63129a;
  FUN_10a00946c();
LAB_10a346a38:
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(unaff_x21);
  FUN_10a352eb0((undefined1 *)((long)unaff_x22 + 8));
  pppuVar8 = pppuVar7;
  __Unwind_Resume();
  pcStack_98 = FUN_10a346a60;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c0 = (undefined1 *)unaff_x22;
  pppuStack_b8 = unaff_x21;
  uStack_b0 = param_1;
  pppuStack_a8 = pppuVar7;
  puStack_a0 = &stack0xfffffffffffffff0;
  __ZNSt3__115recursive_mutex4lockEv(ppcVar11 + 2);
  uVar1 = *param_3;
  uVar2 = param_3[1];
  (**(code **)(param_3[2] + 0x10))(apuStack_100,param_3 + 2);
  puVar9 = (undefined8 *)0x48;
  __Znwm();
  *puVar9 = uVar1;
  puVar9[1] = uVar2;
  (*(code *)apuStack_100[0][2])(puVar9 + 2,apuStack_100);
  pcVar10 = (code *)0x48;
  __Znwm();
  *(undefined ***)(pcVar10 + 0x10) = &PTR_FUN_110bc6030;
  *(undefined8 **)(pcVar10 + 0x18) = puVar9;
  pcVar12 = ppcVar11[0xb];
  pcVar3 = ppcVar11[0xc];
  *(code ***)pcVar10 = ppcVar11 + 10;
  *(code **)(pcVar10 + 8) = pcVar12;
  *(code **)pcVar12 = pcVar10;
  ppcVar11[0xb] = pcVar10;
  ppcVar11[0xc] = pcVar3 + 1;
  (*(code *)*apuStack_100[0])(apuStack_100);
  ppuVar14 = (undefined **)ppcVar11[0xb];
  pppuVar16 = (undefined ***)(ppcVar11 + 2);
  __ZNSt3__115recursive_mutex6unlockEv();
  ppuVar18 = (undefined **)ppcVar11[1];
  ppuVar17 = (undefined **)*ppcVar11;
  if (ppcVar11[1] != (code *)0x0) {
    pcVar12 = ppcVar11[1] + 0x10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar12,0x10);
      if (bVar5) {
        *(long *)pcVar12 = *(long *)pcVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *pppuVar8 = ppuVar14;
  pppuVar8[2] = ppuVar18;
  pppuVar8[1] = ppuVar17;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
    ___stack_chk_fail();
    (**(code **)ppuVar14[2])(ppuVar14 + 2);
    __ZdlPv(ppuVar14);
    (*(code *)*apuStack_100[0])(apuStack_100);
    __ZNSt3__115recursive_mutex6unlockEv(ppcVar11 + 2);
    __Unwind_Resume();
    ppuVar14 = pppuVar16[2];
    if (ppuVar14 != (undefined **)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      if (ppuVar14 != (undefined **)0x0) {
        if (pppuVar16[1] != (undefined **)0x0) {
          FUN_10a05c0fc(pppuVar16[1],*pppuVar16);
        }
        ppuVar17 = ppuVar14 + 1;
        do {
          puVar15 = *ppuVar17;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
          if (bVar5) {
            *ppuVar17 = puVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar15 == (undefined *)0x0) {
          (**(code **)(*ppuVar14 + 0x10))(ppuVar14);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
        }
      }
      if (pppuVar16[2] != (undefined **)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    return pppuVar16;
  }
  return pppuVar16;
}



/* Entry: 10a346a60; end: 10a346bbf;  */

long * FUN_10a346a60(long *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  uVar2 = *param_3;
  uVar3 = param_3[1];
  (**(code **)(param_3[2] + 0x10))(apuStack_70,param_3 + 2);
  puVar6 = (undefined8 *)0x48;
  __Znwm();
  *puVar6 = uVar2;
  puVar6[1] = uVar3;
  (*(code *)apuStack_70[0][2])(puVar6 + 2,apuStack_70);
  plVar7 = (long *)0x48;
  __Znwm();
  plVar7[2] = (long)&PTR_FUN_110bc6030;
  plVar7[3] = (long)puVar6;
  puVar6 = (undefined8 *)param_2[0xb];
  lVar9 = param_2[0xc];
  *plVar7 = (long)(param_2 + 10);
  plVar7[1] = (long)puVar6;
  *puVar6 = plVar7;
  param_2[0xb] = (long)plVar7;
  param_2[0xc] = lVar9 + 1;
  (*(code *)*apuStack_70[0])(apuStack_70);
  lVar9 = param_2[0xb];
  plVar7 = param_2 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  lVar11 = param_2[1];
  lVar10 = *param_2;
  if (param_2[1] != 0) {
    plVar8 = (long *)(param_2[1] + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = lVar9;
  param_1[2] = lVar11;
  param_1[1] = lVar10;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar7;
  }
  ___stack_chk_fail();
  (*(code *)**(undefined8 **)(lVar9 + 0x10))(lVar9 + 0x10);
  __ZdlPv(lVar9);
  (*(code *)*apuStack_70[0])(apuStack_70);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  __Unwind_Resume();
  plVar8 = (long *)plVar7[2];
  if (plVar8 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar8 != (long *)0x0) {
      if (plVar7[1] != 0) {
        FUN_10a05c0fc(plVar7[1],*plVar7);
      }
      plVar1 = plVar8 + 1;
      do {
        lVar9 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if (plVar7[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return plVar7;
}



/* Entry: 10a346bc0; end: 10a346c3f;  */

undefined8 * FUN_10a346bc0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (param_1[1] != 0) {
        FUN_10a05c0fc(param_1[1],*param_1);
      }
      plVar1 = plVar4 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (param_1[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return param_1;
}



/* Entry: 10a346c40; end: 10a34707f;  */

undefined *** FUN_10a346c40(ulong param_1,long **param_2,long *param_3)

{
  undefined ***pppuVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined ***pppuVar7;
  long *plVar8;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined **ppuVar15;
  long *plVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  long lStack_270;
  long *plStack_268;
  undefined **ppuStack_260;
  long lStack_258;
  long lStack_250;
  long *plStack_248;
  long lStack_228;
  long *plStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  long *plStack_188;
  ulong uStack_180;
  long *plStack_178;
  long *plStack_170;
  undefined **ppuStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined4 uStack_150;
  undefined8 *puStack_148;
  undefined ***pppuStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long alStack_128 [7];
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [56];
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = param_1;
  ppuVar10 = (undefined **)param_2;
  FUN_10a3444b8();
  if ((uVar6 & 1) == 0) {
    FUN_10a00946c(&UNK_10f65027a);
LAB_10a346fc8:
    FUN_10a00946c(&UNK_10f63126b);
LAB_10a346fd4:
    FUN_10a00946c(&UNK_10f63129a);
  }
  else {
    if (*param_2 == (long *)0x0) goto LAB_10a346fc8;
    lVar11 = (long)*(char *)(param_1 + 0x11f);
    if (lVar11 < 0) {
      lVar11 = *(long *)(param_1 + 0x110);
    }
    if (lVar11 == 0) goto LAB_10a346fd4;
    if (*(int *)(param_1 + 0x120) != 1) {
      puStack_148 = (undefined8 *)0x0;
      pppuStack_140 = (undefined ***)0x0;
      pppuVar7 = *(undefined ****)(param_1 + 0xf0);
      if (((pppuVar7 == (undefined ***)0x0) ||
          (__ZNSt3__119__shared_weak_count4lockEv(), pppuStack_140 = pppuVar7,
          pppuVar7 == (undefined ***)0x0)) ||
         (puVar13 = *(undefined8 **)(param_1 + 0xe8), puStack_148 = puVar13,
         puVar13 == (undefined8 *)0x0)) {
        pppuVar9 = pppuStack_140;
        ppuVar10 = &PTR_PTR_113301b20;
        pppuVar7 = (undefined ***)ppuVar10;
        FUN_10ae079a0(0);
        FUN_10ae07cd4();
      }
      else {
        *(undefined4 *)(param_1 + 0x120) = 1;
        ppuStack_168 = &PTR_DAT_110b1acb8;
        uStack_160 = 0;
        puStack_158 = &DAT_11383d918;
        uStack_150 = 0;
        func_0x000107c30248(&puStack_158,param_1 + 0x108,0);
        FUN_10a3bf4bc(&uStack_138,&ppuStack_168);
        plStack_170 = param_2[1];
        plStack_178 = *param_2;
        if (param_2[1] != (long *)0x0) {
          plVar14 = param_2[1] + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar5) {
              *plVar14 = *plVar14 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uStack_180 = param_1;
        FUN_10a347080(&uStack_1a8,*(undefined8 *)(param_1 + 0xf8),&uStack_180);
        plVar8 = (long *)0x138;
        __Znwm();
        uStack_a8 = uStack_138;
        plVar16 = plVar8 + 1;
        *plVar16 = 0;
        plVar8[2] = 0;
        *plVar8 = (long)&PTR_FUN_110b9f3b0;
        plVar14 = plVar8 + 3;
        uStack_138 = 0;
        uStack_a0 = uStack_130;
        (**(code **)(alStack_128[0] + 0x10))(auStack_98,alStack_128);
        uStack_60 = uStack_f0;
        pcStack_e8 = FUN_10a386138;
        ppuStack_e0 = &PTR_FUN_110bc77e0;
        uStack_d8 = uStack_1a8;
        uStack_c8 = uStack_198;
        uStack_d0 = uStack_1a0;
        uStack_1a0 = 0;
        uStack_198 = 0;
        param_3 = (long *)0x23;
        FUN_10a23708c(plVar14,&UNK_10e4ac7e0,0x23,"POST",4,&uStack_a8,0);
        (*(code *)*ppuStack_e0)(&ppuStack_e0);
        FUN_10a042634(&uStack_a8);
        plStack_190 = plVar14;
        plStack_188 = plVar8;
        FUN_10a347250(&uStack_1a8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar5) {
            *plVar16 = *plVar16 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        ppuVar10 = (undefined **)&plStack_1b8;
        plStack_1b8 = plVar14;
        plStack_1b0 = plVar8;
        (**(code **)*puVar13)(puVar13);
        plVar14 = plStack_1b0;
        if (plStack_1b0 != (long *)0x0) {
          plVar8 = plStack_1b0 + 1;
          do {
            lVar11 = *plVar8;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = lVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
          }
        }
        plVar14 = plStack_188;
        if (plStack_188 != (long *)0x0) {
          plVar8 = plStack_188 + 1;
          do {
            lVar11 = *plVar8;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = lVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_188 + 0x10))(plStack_188);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
          }
        }
        plVar14 = plStack_170;
        if (plStack_170 != (long *)0x0) {
          plVar8 = plStack_170 + 1;
          do {
            lVar11 = *plVar8;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = lVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_170 + 0x10))(plStack_170);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
          }
        }
        FUN_10a042634(&uStack_138);
        pppuVar7 = &ppuStack_168;
        func_0x0001098d8aa4();
        pppuVar9 = pppuStack_140;
      }
      if (pppuVar9 != (undefined ***)0x0) {
        pppuVar1 = pppuVar9 + 1;
        do {
          ppuVar15 = *pppuVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
          if (bVar5) {
            *pppuVar1 = (undefined **)((long)ppuVar15 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (ppuVar15 == (undefined **)0x0) {
          (*(code *)(*pppuVar9)[2])(pppuVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar7 = pppuVar9;
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
        return pppuVar7;
      }
      goto LAB_10a346fec;
    }
  }
  pppuVar7 = (undefined ***)&UNK_10f6502a6;
  FUN_10a00946c();
LAB_10a346fec:
  ___stack_chk_fail();
  FUN_10a05bd88(&plStack_1b8);
  FUN_10a05bd88(&plStack_190);
  FUN_10a352ff8(&plStack_178);
  FUN_10a042634(&uStack_138);
  func_0x0001098d8aa4(&ppuStack_168);
  func_0x00010a05a8c4(&puStack_148);
  __Unwind_Resume();
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(ppuVar10 + 2);
  lVar11 = *param_3;
  lVar2 = param_3[1];
  plVar14 = (long *)param_3[2];
  if (plVar14 == (long *)0x0) {
    plStack_248 = (long *)0x0;
  }
  else {
    plVar8 = plVar14 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      plStack_248 = plVar14;
    } while (cVar4 != '\0');
  }
  ppuStack_260 = &PTR_DAT_110bc6048;
  plVar8 = (long *)0x48;
  lStack_270 = lVar2;
  plStack_268 = plVar14;
  lStack_258 = lVar11;
  lStack_250 = lVar2;
  __Znwm();
  plVar8[2] = (long)&PTR_DAT_110bc6048;
  plVar8[3] = lVar11;
  plVar8[4] = lVar2;
  plVar8[5] = (long)plVar14;
  if (plVar14 != (long *)0x0) {
    plVar16 = plVar14 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = *plVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar16 = (long *)ppuVar10[0xb];
  plVar3 = (long *)ppuVar10[0xc];
  *plVar8 = (long)(ppuVar10 + 10);
  plVar8[1] = (long)plVar16;
  *plVar16 = (long)plVar8;
  ppuVar10[0xb] = (undefined *)plVar8;
  ppuVar10[0xc] = (undefined *)((long)plVar3 + 1);
  if (plVar14 != (long *)0x0) {
    plVar8 = plVar14 + 1;
    do {
      lVar11 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
    do {
      lVar11 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
  }
  ppuVar15 = (undefined **)ppuVar10[0xb];
  pppuVar9 = (undefined ***)(ppuVar10 + 2);
  __ZNSt3__115recursive_mutex6unlockEv();
  ppuVar18 = (undefined **)ppuVar10[1];
  ppuVar17 = (undefined **)*ppuVar10;
  if ((long *)ppuVar10[1] != (long *)0x0) {
    plVar14 = (long *)((long)ppuVar10[1] + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *plVar14 = *plVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *pppuVar7 = ppuVar15;
  pppuVar7[2] = ppuVar18;
  pppuVar7[1] = ppuVar17;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_228) {
    ___stack_chk_fail();
    FUN_10a352ff8(&lStack_250);
    FUN_10a352ff8(&lStack_270);
    __ZNSt3__115recursive_mutex6unlockEv(ppuVar10 + 2);
    __Unwind_Resume();
    ppuVar10 = pppuVar9[2];
    if (ppuVar10 != (undefined **)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      if (ppuVar10 != (undefined **)0x0) {
        if (pppuVar9[1] != (undefined **)0x0) {
          FUN_10a05c0fc(pppuVar9[1],*pppuVar9);
        }
        ppuVar15 = ppuVar10 + 1;
        do {
          puVar12 = *ppuVar15;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
          if (bVar5) {
            *ppuVar15 = puVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar12 == (undefined *)0x0) {
          (**(code **)(*ppuVar10 + 0x10))(ppuVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
        }
      }
      if (pppuVar9[2] != (undefined **)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    return pppuVar9;
  }
  return pppuVar9;
}



/* Entry: 10a347080; end: 10a34724f;  */

undefined8 * FUN_10a347080(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lStack_a0;
  long *plStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  lVar7 = *param_3;
  lVar2 = param_3[1];
  plVar8 = (long *)param_3[2];
  if (plVar8 == (long *)0x0) {
    plStack_78 = (long *)0x0;
  }
  else {
    plVar5 = plVar8 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = *plVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = *plVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      plStack_78 = plVar8;
    } while (cVar3 != '\0');
  }
  ppuStack_90 = &PTR_DAT_110bc6048;
  plVar5 = (long *)0x48;
  lStack_a0 = lVar2;
  plStack_98 = plVar8;
  lStack_88 = lVar7;
  lStack_80 = lVar2;
  __Znwm();
  plVar5[2] = (long)&PTR_DAT_110bc6048;
  plVar5[3] = lVar7;
  plVar5[4] = lVar2;
  plVar5[5] = (long)plVar8;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar6 = (undefined8 *)param_2[0xb];
  lVar7 = param_2[0xc];
  *plVar5 = (long)(param_2 + 10);
  plVar5[1] = (long)puVar6;
  *puVar6 = plVar5;
  param_2[0xb] = plVar5;
  param_2[0xc] = lVar7 + 1;
  if (plVar8 != (long *)0x0) {
    plVar5 = plVar8 + 1;
    do {
      lVar7 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
    do {
      lVar7 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  uVar9 = param_2[0xb];
  puVar6 = param_2 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  uVar11 = param_2[1];
  uVar10 = *param_2;
  if (param_2[1] != 0) {
    plVar8 = (long *)(param_2[1] + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = uVar9;
  param_1[2] = uVar11;
  param_1[1] = uVar10;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    FUN_10a352ff8(&lStack_80);
    FUN_10a352ff8(&lStack_a0);
    __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
    __Unwind_Resume();
    plVar8 = (long *)puVar6[2];
    if (plVar8 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar8 != (long *)0x0) {
        if (puVar6[1] != 0) {
          FUN_10a05c0fc(puVar6[1],*puVar6);
        }
        plVar5 = plVar8 + 1;
        do {
          lVar7 = *plVar5;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar4) {
            *plVar5 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (puVar6[2] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    return puVar6;
  }
  return puVar6;
}



/* Entry: 10a347250; end: 10a3472cf;  */

undefined8 * FUN_10a347250(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (param_1[1] != 0) {
        FUN_10a05c0fc(param_1[1],*param_1);
      }
      plVar1 = plVar4 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (param_1[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return param_1;
}



/* Entry: 10a3472d0; end: 10a34732b;  */

void FUN_10a3472d0(undefined8 *param_1,undefined4 param_2,undefined4 param_3,long param_4,
                  undefined8 *param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *puVar7;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 auStack_108 [64];
  undefined1 uStack_c8;
  undefined1 auStack_c0 [24];
  byte bStack_a8;
  char cStack_a0;
  long lStack_98;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  long in_stack_ffffffffffffffa8;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  lVar4 = param_4;
  puVar2 = param_5;
  FUN_10a3c8488();
  if (*(int *)(lVar4 + 0x18) < 0x14a) {
    FUN_10a345c64(param_4);
    if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      func_0x00010ae06f08(1,8,&UNK_10f631118,&UNK_10f6312ed,0x11c,&UNK_10f63136d);
    }
    if (*(char *)((long)param_5 + 0x17) < '\0') {
      func_0x000107c3192c(&puStack_50,*param_5,param_5[1]);
    }
    else {
      puStack_48 = (undefined8 *)param_5[1];
      puStack_50 = (undefined8 *)*param_5;
      puStack_40 = (undefined1 *)param_5[2];
    }
    func_0x000107c2b054(&pcStack_68,&UNK_10f630f1d);
    func_0x000107c2b054(&puStack_80,&UNK_10f630f1d);
    FUN_10a00d0e0(&stack0xffffffffffffffd0,&puStack_50,&pcStack_68,&puStack_80);
    param_1[1] = unaff_x21;
    *param_1 = unaff_x22;
    if (uStack_70._7_1_ < '\0') {
      __ZdlPv(puStack_80);
    }
    if (in_stack_ffffffffffffffa8 < 0) {
      __ZdlPv(pcStack_68);
    }
    if ((long)puStack_40 < 0) {
      __ZdlPv(puStack_50);
    }
    return;
  }
  puVar5 = &UNK_10f6502d4;
  FUN_10a00946c();
  pcStack_38 = FUN_10a34732c;
  puStack_50 = param_1;
  puStack_48 = param_5;
  puStack_40 = &stack0xfffffffffffffff0;
  FUN_10a3c8488();
  if (*(int *)(puVar5 + 0x18) < 0x135) {
    puVar2 = (undefined8 *)0x60;
    __Znwm();
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_DAT_110b9da58;
    puVar7 = puVar2 + 3;
    *puVar7 = &PTR_DAT_110c32658;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar3 = (undefined8 *)0x48;
    puStack_80 = puVar7;
    puStack_78 = puVar2;
    __Znwm();
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_110b9daa8;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[3] = &PTR_DAT_110c32600;
    *(undefined4 *)(puVar3 + 6) = param_2;
    *(undefined4 *)((long)puVar3 + 0x34) = param_3;
    puVar3[7] = puVar7;
    puVar3[8] = puVar2;
    *extraout_x8 = puVar3 + 3;
    extraout_x8[1] = puVar3;
    return;
  }
  puVar5 = &UNK_10f650319;
  FUN_10a00946c();
  pcStack_68 = FUN_10a347380;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar5;
  puStack_80 = param_1;
  uStack_70 = &puStack_40;
  FUN_10a3c8488();
  if (*(int *)(puVar6 + 0x18) < 0x135) {
    FUN_10a345c64(puVar5);
    auStack_c0[0] = 0;
    cStack_a0 = '\0';
    auStack_108[0] = 0;
    uStack_c8 = 0;
    FUN_10a00b100(extraout_x8_00,*(undefined8 *)(puVar5 + 0x140),puVar2,auStack_c0,auStack_108);
    puVar5 = auStack_108;
    FUN_10a042530(puVar5);
    if (cStack_a0 == '\x01') {
      if (2 < (ulong)bStack_a8) goto LAB_10a3474a0;
      puVar5 = auStack_c0;
      (*(code *)(&PTR_FUN_110b9f188)[bStack_a8])(puVar5);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
      return;
    }
  }
  else {
    puVar5 = &UNK_10f65039e;
    FUN_10a00946c(&UNK_10f65039e);
  }
  ___stack_chk_fail();
  FUN_10a042530(auStack_108);
  if (cStack_a0 == '\x01') {
    if (2 < (ulong)bStack_a8) goto LAB_10a3474a0;
    (*(code *)(&PTR_FUN_110b9f188)[bStack_a8])(auStack_c0);
  }
  __Unwind_Resume(puVar5);
LAB_10a3474a0:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a3474a4);
  (*pcVar1)();
}



/* Entry: 10a34732c; end: 10a34737f;  */

void FUN_10a34732c(undefined8 *param_1,undefined4 param_2,undefined4 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 extraout_x8;
  undefined1 auStack_d8 [64];
  undefined1 uStack_98;
  undefined1 auStack_90 [24];
  byte bStack_78;
  char cStack_70;
  long lStack_68;
  
  FUN_10a3c8488();
  if (*(int *)(param_4 + 0x18) < 0x135) {
    puVar2 = (undefined8 *)0x60;
    __Znwm();
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_DAT_110b9da58;
    puVar2[3] = &PTR_DAT_110c32658;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar3 = (undefined8 *)0x48;
    __Znwm();
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_110b9daa8;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[3] = &PTR_DAT_110c32600;
    *(undefined4 *)(puVar3 + 6) = param_2;
    *(undefined4 *)((long)puVar3 + 0x34) = param_3;
    puVar3[7] = puVar2 + 3;
    puVar3[8] = puVar2;
    *param_1 = puVar3 + 3;
    param_1[1] = puVar3;
    return;
  }
  puVar4 = &UNK_10f650319;
  FUN_10a00946c();
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar4;
  FUN_10a3c8488();
  if (*(int *)(puVar5 + 0x18) < 0x135) {
    FUN_10a345c64(puVar4);
    auStack_90[0] = 0;
    cStack_70 = '\0';
    auStack_d8[0] = 0;
    uStack_98 = 0;
    FUN_10a00b100(extraout_x8,*(undefined8 *)(puVar4 + 0x140),param_5,auStack_90,auStack_d8);
    puVar4 = auStack_d8;
    FUN_10a042530(puVar4);
    if (cStack_70 == '\x01') {
      if (2 < (ulong)bStack_78) goto LAB_10a3474a0;
      puVar4 = auStack_90;
      (*(code *)(&PTR_FUN_110b9f188)[bStack_78])(puVar4);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
  }
  else {
    puVar4 = &UNK_10f65039e;
    FUN_10a00946c(&UNK_10f65039e);
  }
  ___stack_chk_fail();
  FUN_10a042530(auStack_d8);
  if (cStack_70 == '\x01') {
    if (2 < (ulong)bStack_78) goto LAB_10a3474a0;
    (*(code *)(&PTR_FUN_110b9f188)[bStack_78])(auStack_90);
  }
  __Unwind_Resume(puVar4);
LAB_10a3474a0:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a3474a4);
  (*pcVar1)();
}



/* Entry: 10a347380; end: 10a3474a3;  */

void FUN_10a347380(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 auStack_a8 [64];
  undefined1 uStack_68;
  undefined1 auStack_60 [24];
  byte bStack_48;
  char cStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_2;
  FUN_10a3c8488();
  if (*(int *)(lVar2 + 0x18) < 0x135) {
    FUN_10a345c64(param_2);
    auStack_60[0] = 0;
    cStack_40 = '\0';
    auStack_a8[0] = 0;
    uStack_68 = 0;
    FUN_10a00b100(param_1,*(undefined8 *)(param_2 + 0x140),param_3,auStack_60,auStack_a8);
    puVar3 = auStack_a8;
    FUN_10a042530(puVar3);
    if (cStack_40 == '\x01') {
      if (2 < (ulong)bStack_48) goto LAB_10a3474a0;
      puVar3 = auStack_60;
      (*(code *)(&PTR_FUN_110b9f188)[bStack_48])(puVar3);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
  }
  else {
    puVar3 = &UNK_10f65039e;
    FUN_10a00946c(&UNK_10f65039e);
  }
  ___stack_chk_fail();
  FUN_10a042530(auStack_a8);
  if (cStack_40 == '\x01') {
    if (2 < (ulong)bStack_48) goto LAB_10a3474a0;
    (*(code *)(&PTR_FUN_110b9f188)[bStack_48])(auStack_60);
  }
  __Unwind_Resume(puVar3);
LAB_10a3474a0:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a3474a4);
  (*pcVar1)();
}



/* Entry: 10a3474a4; end: 10a34762f;  */

void FUN_10a3474a4(undefined8 *param_1,char *param_2,long param_3,char *param_4,long param_5)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcStack_70;
  ulong uStack_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 != 0) {
    pcVar1 = param_2 + param_3;
    pcVar9 = param_2;
    do {
      do {
        if (param_5 != 0) {
          lVar8 = param_5;
          pcVar10 = param_4;
          do {
            pcVar11 = param_2;
            if (*param_2 == *pcVar10) goto LAB_10a347524;
            lVar8 = lVar8 + -1;
            pcVar10 = pcVar10 + 1;
          } while (lVar8 != 0);
        }
        param_2 = param_2 + 1;
        pcVar11 = pcVar1;
      } while (param_2 != pcVar1);
LAB_10a347524:
      if (pcVar9 != pcVar11) {
        uVar3 = (long)pcVar11 - (long)pcVar9;
        uStack_68 = uVar3;
        pcStack_70 = pcVar9;
        if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a34760c);
          (*pcVar4)();
        }
        lVar8 = 0;
        pcVar10 = pcVar9;
        do {
          puVar5 = &UNK_10f63cb7f;
          _memchr(&UNK_10f63cb7f,(long)*pcVar10,4);
          if (puVar5 == (undefined *)0x0) {
            uVar6 = -lVar8;
            goto LAB_10a347570;
          }
          pcVar10 = pcVar10 + 1;
          lVar8 = lVar8 + -1;
        } while (pcVar10 != pcVar11);
        uVar6 = 0xffffffffffffffff;
LAB_10a347570:
        uVar2 = uVar3;
        if (uVar6 <= uVar3) {
          uVar2 = uVar6;
        }
        pcVar10 = pcVar9 + ((uVar2 - 1) - (long)pcVar11);
        pcVar7 = pcVar9 + (uVar3 - 1);
        do {
          if (pcVar10 == (char *)0xffffffffffffffff) {
            pcVar10 = (char *)0x0;
            break;
          }
          puVar5 = &UNK_10f63cb7f;
          _memchr(&UNK_10f63cb7f,(long)*pcVar7,4);
          pcVar10 = pcVar10 + 1;
          pcVar7 = pcVar7 + -1;
        } while (puVar5 != (undefined *)0x0);
        pcVar7 = (char *)(uVar3 - uVar2);
        uStack_68 = 0;
        if (pcVar10 + (long)pcVar7 <= pcVar7) {
          uStack_68 = (long)pcVar7 - (long)(pcVar10 + (long)pcVar7);
        }
        pcStack_70 = pcVar9 + uVar2;
        FUN_10a043080(param_1,&pcStack_70);
      }
    } while ((pcVar11 != pcVar1) && (param_2 = pcVar11 + 1, pcVar9 = param_2, param_2 != pcVar1));
  }
  return;
}



/* Entry: 10a347630; end: 10a34769b;  */

undefined1  [16] FUN_10a347630(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = &UNK_10f6512b9;
  return auVar1;
}



/* Entry: 10a34769c; end: 10a347bd3;  */

void FUN_10a34769c(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6512b9,0x10);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bc88f8;
  pppuVar2 = (undefined8 ***)&UNK_10f64efef;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bc88f8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c42c58;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0x150,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a347bb4;
    FUN_10a054dac(param_1,&UNK_10f65048e,FUN_10a386918,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a347bb4;
    FUN_10a054dac(param_1,&UNK_10f6504aa,FUN_10a386b34,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a347bb4;
    FUN_10a054dac(param_1,&UNK_10f6504bb,FUN_10a386c3c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a347bb4;
    FUN_10a054dac(param_1,&UNK_10f6504d6,FUN_10a386d38,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0x150,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a347bb4;
    FUN_10a054dac(param_1,&UNK_10f6504e1,FUN_10a386fb0,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a347bb4;
    FUN_10a054dac(param_1,&UNK_10f6504f0,FUN_10a387060,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a347bb4;
    FUN_10a054dac(param_1,&UNK_10f6504ff,FUN_10a387238,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a347bb4;
    FUN_10a054dac(param_1,&UNK_10f650519,FUN_10a387390,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f650531,FUN_10a387448,FUN_10a387584);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f650539,FUN_10a387850,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f650543,FUN_10a387934,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f65054c,FUN_10a387a18,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f650554,FUN_10a387b50,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6512b9,0x10);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a347bb4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a347bb8);
  (*pcVar6)();
}



/* Entry: 10a347bd4; end: 10a347c5b;  */

undefined8 * FUN_10a347bd4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  uVar6 = param_2;
  func_0x00010a0fda30();
  FUN_10aa7093c(param_1,param_2,puVar4,uVar6);
  *param_1 = &PTR_FUN_110bc5340;
  param_1[2] = &PTR_DAT_110bc53e0;
  param_1[7] = &PTR_DAT_110bc5438;
  lVar5 = param_3[1];
  uVar6 = *param_3;
  param_1[0x1d] = param_3[1];
  param_1[0x1c] = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return param_1;
}



/* Entry: 10a347c5c; end: 10a347d03;  */

undefined8 * FUN_10a347c5c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  puVar1 = param_1;
  uVar2 = param_2;
  uStack_40 = param_2;
  func_0x00010a0fda30();
  FUN_10aa7093c(param_1,param_2,puVar1,uVar2);
  *param_1 = &PTR_FUN_110bc5340;
  param_1[2] = &PTR_DAT_110bc53e0;
  param_1[7] = &PTR_DAT_110bc5438;
  uStack_54 = 0;
  FUN_10a387c00(&uStack_50,&uStack_31,&uStack_40,&uStack_54,param_3);
  param_1[0x1d] = uStack_48;
  param_1[0x1c] = uStack_50;
  return param_1;
}


