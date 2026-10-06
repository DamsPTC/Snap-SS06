/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104be9f40; end: 104bea2c3;  */

void FUN_104be9f40(void)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar7;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long extraout_x9;
  long *plVar8;
  long *extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long extraout_x10;
  ulong uVar9;
  ulong extraout_x10_00;
  undefined8 extraout_x10_01;
  ulong extraout_x10_02;
  int extraout_w11;
  int extraout_w11_00;
  long *unaff_x20;
  long *unaff_x22;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x28;
  uint in_stack_00000044;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  
  func_0x000104bf00d4();
  func_0x000104bef9f4();
  func_0x000104befa78();
  func_0x000104befa9c();
  func_0x000104befb00();
  func_0x000104bf0398();
  uVar6 = (uint)*(byte *)(unaff_x22 + 1);
  uVar2 = (int)(uVar6 - 1) < 0;
  uVar3 = uVar6 == 1;
  if (uVar6 < 2) goto LAB_104bea258;
  func_0x000104bf01e4(&stack0x00000058);
  if (in_stack_00000058 == 0) {
    lVar10 = 0;
    lVar4 = in_stack_00000058;
  }
  else {
    lVar10 = in_stack_00000058;
    func_0x000104befee8();
    func_0x000104befdf4();
    lVar4 = lVar10;
  }
  func_0x000104befd44();
  if (lVar10 != 0) {
    if (*(long *)(lVar10 + 0x30) != 0) {
      do {
        func_0x000104befac8();
      } while (extraout_w10 != 0);
    }
    goto LAB_104bea258;
  }
  func_0x000104bf01e4(&stack0x00000050);
  func_0x000104bf0168();
  if (extraout_x8 != 0) {
    do {
      func_0x000104befbc0();
    } while (extraout_w11 != 0);
  }
  func_0x000104befb5c();
  func_0x000104befd34();
  func_0x000104bf00f8();
  lVar10 = 0;
  if (lVar4 == 0) {
LAB_104bea054:
    lVar4 = in_stack_00000050;
    func_0x000104befe7c();
    lVar5 = lVar10;
    func_0x000104beff14(&PTR_FUN_1107e81c8);
    if ((lVar4 == 0) || (func_0x000104bf0528(&UNK_1107e8208), extraout_x10 == 0)) {
      func_0x000104bf0510();
    }
    else {
      do {
        func_0x000104befc20();
      } while (extraout_w11_00 != 0);
      func_0x000104bf0510();
      if (extraout_x9 != 0) {
        do {
          func_0x000104befac8();
        } while (extraout_w10_01 != 0);
      }
    }
    in_stack_00000058 = lVar4;
    func_0x000104bf03e8();
    func_0x000104befd44();
    *(undefined ***)(lVar5 + 0x18) = &PTR_DAT_110874008;
    *(undefined ***)(lVar10 + 0x20) = &PTR_DAT_110874038;
    func_0x000104befe08();
    uVar12 = (ulong)in_stack_00000044;
    uVar11 = unaff_x22[1];
    if (uVar11 != 0) {
      func_0x000104bf0468();
      uVar6 = (uint)uVar11;
      if ((bool)uVar3) {
        unaff_x28 = (ulong)(uVar6 - 1 & in_stack_00000044);
      }
      else {
        uVar2 = (long)(uVar11 - uVar12) < 0;
        unaff_x28 = uVar12;
        if (uVar11 <= uVar12) {
          uVar1 = 0;
          if (uVar6 != 0) {
            uVar1 = in_stack_00000044 / uVar6;
          }
          unaff_x28 = (ulong)(in_stack_00000044 - uVar1 * uVar6);
        }
      }
      plVar8 = *(long **)(*unaff_x22 + unaff_x28 * 8);
      uVar7 = extraout_x8_00;
      if (plVar8 != (long *)0x0) {
        do {
          while( true ) {
            plVar8 = (long *)*plVar8;
            if (plVar8 == (long *)0x0) goto LAB_104bea174;
            uVar9 = plVar8[1];
            if (uVar9 != uVar12) break;
            uVar2 = (int)(*(uint *)(plVar8 + 2) - in_stack_00000044) < 0;
            if (*(uint *)(plVar8 + 2) == in_stack_00000044) goto LAB_104bea23c;
          }
          if ((uVar11 & uVar7) == 0) {
            uVar9 = uVar9 & uVar7;
          }
          else if (uVar11 <= uVar9) {
            func_0x000104bf0448();
            uVar7 = extraout_x8_01;
            plVar8 = extraout_x9_00;
            uVar9 = extraout_x10_00;
          }
          uVar2 = (long)(uVar9 - unaff_x28) < 0;
        } while (uVar9 == unaff_x28);
      }
    }
LAB_104bea174:
    func_0x000104befe60();
    func_0x000104bf008c();
    do {
      func_0x000104befac8();
    } while (extraout_w10_02 != 0);
    func_0x000104beff08(unaff_x22[3]);
    if ((uVar11 == 0) || (func_0x000104befefc(), (bool)uVar2)) {
      func_0x000104bf026c();
      uVar2 = uVar11 == 3;
      func_0x000104befa44();
      func_0x000104bf0148();
      uVar11 = *(ulong *)(lVar10 + 0x28);
      func_0x000104bf0468();
      if ((bool)uVar2) {
        unaff_x28 = (ulong)((int)uVar11 - 1U & in_stack_00000044);
      }
      else {
        unaff_x28 = uVar12;
        if (uVar11 <= uVar12) {
          uVar7 = 0;
          if (uVar11 != 0) {
            uVar7 = uVar12 / uVar11;
          }
          unaff_x28 = uVar12 - uVar7 * uVar11;
        }
      }
    }
    if (*(long *)(*unaff_x22 + unaff_x28 * 8) == 0) {
      func_0x000104befc00(in_stack_00000058);
      *(undefined8 *)(extraout_x9_01 + unaff_x28 * 8) = extraout_x10_01;
      if (*extraout_x8_02 != 0) {
        uVar12 = *(ulong *)(*extraout_x8_02 + 8);
        plVar8 = extraout_x8_02;
        lVar10 = extraout_x9_01;
        if ((uVar11 & uVar11 - 1) == 0) {
          uVar12 = uVar12 & uVar11 - 1;
        }
        else if (uVar11 <= uVar12) {
          func_0x000104bf0448();
          plVar8 = extraout_x8_03;
          lVar10 = extraout_x9_02;
          uVar12 = extraout_x10_02;
        }
        *(long **)(lVar10 + uVar12 * 8) = plVar8;
      }
    }
    else {
      func_0x000104befc10();
    }
    func_0x000104beffd4();
LAB_104bea23c:
    in_stack_00000058 = 0;
    in_stack_00000060 = 0;
    FUN_104bef0b8(&stack0x00000058);
  }
  else {
    func_0x000104befc60();
    lVar10 = in_stack_00000060;
    if (in_stack_00000058 == 0) {
      lVar10 = in_stack_00000058;
      func_0x000104befdec();
      goto LAB_104bea054;
    }
    lVar4 = in_stack_00000058;
    func_0x000104befedc();
    func_0x000104befdd0();
    lVar5 = 0;
    if ((lVar4 != 0) && (lVar10 != 0)) {
      do {
        func_0x000104befac8();
        lVar5 = lVar10;
      } while (extraout_w10_00 != 0);
    }
    func_0x000104befd24(lVar5);
    FUN_104bef0b8();
    func_0x000104befdec();
  }
  func_0x000104befb50();
  func_0x000104beffbc();
  func_0x000104befea4();
LAB_104bea258:
  (**(code **)(*unaff_x20 + 0x90))();
  FUN_104be3b38();
  func_0x000104befcd0();
  func_0x000104befb98();
  return;
}



/* Entry: 104bea2c4; end: 104bea6cb;  */

void FUN_104bea2c4(undefined8 param_1,long *param_2)

{
  undefined8 ***pppuVar1;
  long *plVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar5;
  undefined8 ***pppuVar6;
  long **pplVar7;
  long extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 uVar8;
  undefined8 **extraout_x9;
  long extraout_x9_00;
  long *extraout_x9_01;
  long *extraout_x9_02;
  long *extraout_x9_03;
  long *extraout_x9_04;
  long *plVar9;
  long extraout_x9_05;
  long extraout_x9_06;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  long *plVar10;
  long extraout_x10_02;
  long *extraout_x10_03;
  long *extraout_x10_04;
  int extraout_w11;
  int extraout_w11_00;
  undefined4 extraout_w11_01;
  undefined4 extraout_var;
  undefined8 **ppuVar11;
  undefined8 *unaff_x24;
  long *plVar12;
  long *unaff_x27;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  long *plStack_a0;
  undefined8 uStack_98;
  uint uStack_8c;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 **ppuStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  func_0x000104befa0c();
  func_0x000104befa78();
  func_0x000104befa9c();
  func_0x000104bf01a4();
  func_0x00010529dcb8(auStack_b8);
  FUN_104bef110(auStack_d0);
  func_0x000104bf02b4();
  if (!(bool)in_CY || (bool)in_ZR) goto LAB_104bea628;
  func_0x00010b9a9810(&ppuStack_78);
  if (ppuStack_78 == (undefined8 **)0x0) {
    ppuVar11 = (undefined8 **)0x0;
  }
  else {
    ppuVar11 = ppuStack_78;
    func_0x000104befee8();
    func_0x000104befdf4();
  }
  func_0x000104bf03bc();
  if (ppuVar11 != (undefined8 **)0x0) {
    func_0x000104befe94();
    if (extraout_x8 != 0) {
      do {
        func_0x000104befac8();
      } while (extraout_w10 != 0);
    }
    goto LAB_104bea628;
  }
  func_0x00010b9a9810(&plStack_80);
  uStack_88 = 0;
  if ((undefined8 *)plStack_80[4] != (undefined8 *)0x0) {
    do {
      func_0x000104befbc0();
      uStack_88 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  func_0x000104befb5c();
  uStack_8c = *(uint *)(plStack_80 + 3);
  lVar5 = 0x11328ad18;
  FUN_104be7ae4(0x11328ad18,&uStack_8c);
  pppuVar6 = (undefined8 ***)0x0;
  if (lVar5 == 0) {
LAB_104bea428:
    func_0x000104befe7c();
    func_0x000104befe84(&PTR_FUN_1107e8260);
    if ((undefined8 **)plStack_80 == (undefined8 **)0x0) {
      plStack_a0 = (long *)0x0;
LAB_104bea484:
      func_0x000104beff68();
    }
    else {
      func_0x000104bf0380(&UNK_1107e82a0);
      plStack_a0 = (long *)extraout_x9;
      if (extraout_x10 == 0) goto LAB_104bea484;
      do {
        func_0x000104befc20();
      } while (extraout_w11_00 != 0);
      plStack_a0 = plStack_80;
      func_0x000104beff68();
      if (extraout_x9_00 != 0) {
        do {
          func_0x000104befac8();
        } while (extraout_w10_01 != 0);
      }
    }
    pppuVar1 = pppuVar6 + 4;
    ppuStack_78 = (undefined8 **)plStack_80;
    FUN_104bec750(pppuVar1,&ppuStack_78);
    func_0x000104bf03bc();
    *unaff_x24 = &PTR_DAT_1108741a0;
    *pppuVar1 = (undefined8 **)&PTR_DAT_1108741d0;
    pplVar7 = &plStack_a0;
    FUN_104be7e54();
    uVar3 = uStack_8c;
    plVar2 = plRam000000011328ad20;
    plVar12 = (long *)(ulong)uStack_8c;
    if (plRam000000011328ad20 != (long *)0x0) {
      func_0x000104beff5c();
      if ((bool)in_ZR) {
        func_0x000104bf0344();
      }
      else {
        func_0x000104bf035c();
        if (!(bool)in_CY || (bool)in_ZR) {
          func_0x000104bf0350();
        }
      }
      func_0x000104bf0338();
      uVar4 = in_ZR;
      plVar9 = extraout_x9_01;
      if (extraout_x9_01 != (long *)0x0) {
        do {
          while( true ) {
            in_ZR = uVar4;
            if (*plVar9 == 0) goto LAB_104bea538;
            func_0x000104bf032c();
            if (!(bool)in_ZR) break;
            func_0x000104bf0320();
            uVar4 = 0;
            plVar9 = extraout_x9_03;
            if ((bool)in_ZR) goto LAB_104bea604;
          }
          plVar9 = extraout_x9_02;
          if (((ulong)plVar2 & extraout_x8_01) == 0) {
            plVar10 = (long *)((ulong)extraout_x10_00 & extraout_x8_01);
          }
          else {
            plVar10 = extraout_x10_00;
            if (plVar2 <= extraout_x10_00) {
              func_0x000104beff50();
              plVar9 = extraout_x9_04;
              plVar10 = extraout_x10_01;
            }
          }
          in_NG = (long)plVar10 - (long)unaff_x27 < 0;
          in_ZR = plVar10 == unaff_x27;
          uVar4 = in_ZR;
        } while ((bool)in_ZR);
      }
    }
LAB_104bea538:
    func_0x000104befe60();
    lStack_70 = 0x11328ad28;
    uStack_68 = 1;
    ppuStack_78 = pplVar7;
    *pplVar7 = (long *)0x0;
    pplVar7[1] = plVar12;
    *(uint *)(pplVar7 + 2) = uVar3;
    pplVar7[3] = (long *)pppuVar1;
    pplVar7[4] = (long *)pppuVar6;
    do {
      func_0x000104befac8();
    } while (extraout_w10_02 != 0);
    func_0x000104befc8c();
    plVar9 = unaff_x27;
    if ((plVar2 == (long *)0x0) || (func_0x000104befecc(), (bool)in_NG)) {
      func_0x000104befba8();
      in_ZR = plVar2 == (long *)0x3;
      func_0x000104befa44();
      func_0x000104befbf0();
      func_0x000104befebc();
      if ((bool)in_ZR) {
        func_0x000104bf02e4();
      }
      else {
        in_ZR = plVar2 == plVar12;
        plVar9 = plVar12;
        if (plVar2 <= plVar12) {
          func_0x000104bf02d8();
          plVar9 = unaff_x27;
        }
      }
    }
    if (*(long *)(lRam000000011328ad18 + (long)plVar9 * 8) == 0) {
      func_0x000104befae4(ppuStack_78);
      if (extraout_x10_02 != 0) {
        func_0x000104befeac();
        uVar8 = extraout_x8_02;
        lVar5 = extraout_x9_05;
        if ((bool)in_ZR) {
          plVar12 = (long *)((ulong)extraout_x10_03 & CONCAT44(extraout_var,extraout_w11_01));
        }
        else {
          plVar12 = extraout_x10_03;
          if (plVar2 <= extraout_x10_03) {
            func_0x000104beff50();
            uVar8 = extraout_x8_03;
            lVar5 = extraout_x9_06;
            plVar12 = extraout_x10_04;
          }
        }
        *(undefined8 *)(lVar5 + (long)plVar12 * 8) = uVar8;
      }
    }
    else {
      func_0x000104befc10();
    }
    ppuStack_78 = (undefined8 **)0x0;
    lRam000000011328ad30 = lRam000000011328ad30 + 1;
    FUN_104be7cd0(&ppuStack_78);
LAB_104bea604:
    ppuStack_78 = (undefined8 **)0x0;
    lStack_70 = 0;
    FUN_104bef228(&ppuStack_78);
  }
  else {
    func_0x000104befdd8(&ppuStack_78);
    lVar5 = lStack_70;
    if (ppuStack_78 == (undefined8 **)0x0) {
      pppuVar6 = &ppuStack_78;
      func_0x000104bec70c();
      goto LAB_104bea428;
    }
    ppuVar11 = ppuStack_78;
    func_0x000104befedc();
    func_0x000104befdd0();
    if ((ppuVar11 != (undefined8 **)0x0) && (lVar5 != 0)) {
      do {
        func_0x000104befac8();
      } while (extraout_w10_00 != 0);
    }
    plStack_a0 = (long *)0x0;
    uStack_98 = 0;
    FUN_104bef228(&plStack_a0);
    func_0x000104bec70c(&ppuStack_78);
  }
  func_0x000104befb50();
  FUN_104bdbf78(&uStack_88);
  FUN_104be7e54(&plStack_80);
LAB_104bea628:
  func_0x000104bf03a8(*(undefined8 *)(*param_2 + 0x98));
  FUN_104be3c30(&stack0xffffffffffffff20);
  func_0x0001006573e4(auStack_d0);
  func_0x000104bf0228();
  func_0x000104befb98();
  return;
}



/* Entry: 104bea6cc; end: 104bea737;  */

void FUN_104bea6cc(void)

{
  long *unaff_x21;
  
  func_0x000104bf0434();
  func_0x000104bef9f4();
  func_0x000104befa88();
  func_0x000104befab8();
  func_0x000104befa30();
  func_0x000104bf0194();
  FUN_104bee010(&stack0x00000008);
  func_0x000104befcec(*(undefined8 *)(*unaff_x21 + 0xa0));
  FUN_104be36f0(&stack0x00000008);
  func_0x000104befcd0();
  func_0x000104bf013c();
  return;
}



/* Entry: 104bea738; end: 104bea793;  */

void FUN_104bea738(void)

{
  long *unaff_x21;
  
  func_0x000104bf0434();
  func_0x000104bef9f4();
  func_0x000104befa88();
  func_0x000104befab8();
  func_0x000104befa30();
  func_0x000104bf0194();
  func_0x000104befbd0();
  func_0x000104befcec(*(undefined8 *)(*unaff_x21 + 0xa8));
  func_0x000104befd10();
  func_0x000104befcd0();
  func_0x000104bf013c();
  return;
}



/* Entry: 104bea794; end: 104beaa77;  */

void FUN_104bea794(undefined8 param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 uVar3;
  long extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  long *extraout_x9_02;
  long *extraout_x9_03;
  long *plVar4;
  long extraout_x9_04;
  long extraout_x9_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  long extraout_x10_02;
  long extraout_x10_03;
  ulong extraout_x10_04;
  ulong extraout_x10_05;
  ulong uVar5;
  int extraout_w11;
  int extraout_w11_00;
  undefined4 extraout_w11_01;
  undefined4 extraout_var;
  long lVar6;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  
  func_0x000104bf00d4();
  func_0x000104befa0c();
  func_0x000104befa78();
  func_0x000104bf01a4();
  func_0x000104befc30();
  func_0x000104bf02b4();
  if (!(bool)in_CY || (bool)in_ZR) goto LAB_104beaa20;
  func_0x000104befdfc();
  if (in_stack_00000058 == 0) {
    lVar6 = 0;
    lVar2 = in_stack_00000058;
  }
  else {
    lVar6 = in_stack_00000058;
    func_0x000104befee8();
    func_0x000104befdf4();
    lVar2 = lVar6;
  }
  func_0x000104befd44();
  if (lVar6 != 0) {
    func_0x000104befe94();
    if (extraout_x8 != 0) {
      do {
        func_0x000104befac8();
      } while (extraout_w10 != 0);
    }
    goto LAB_104beaa20;
  }
  func_0x000104befde0();
  func_0x000104bf0168();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000104befbc0();
    } while (extraout_w11 != 0);
  }
  func_0x000104befb5c();
  func_0x000104befd34();
  func_0x000104befbdc();
  if (lVar2 == 0) {
LAB_104bea894:
    func_0x000104befe7c();
    func_0x000104befe84(&PTR_FUN_1107e82f8);
    if ((in_stack_00000050 == 0) || (func_0x000104bf0380(&UNK_1107e8338), extraout_x10 == 0)) {
      func_0x000104beff68();
    }
    else {
      do {
        func_0x000104befc20();
      } while (extraout_w11_00 != 0);
      func_0x000104befdb4();
      if (extraout_x9 != 0) {
        do {
          func_0x000104befac8();
        } while (extraout_w10_01 != 0);
      }
    }
    func_0x000104bf0504();
    func_0x000104befe70();
    func_0x000104befd44();
    func_0x000104befb80(&UNK_110874048);
    func_0x000104bf04ec();
    if (in_stack_00000050 != 0) {
      func_0x000104beff5c();
      if ((bool)in_ZR) {
        func_0x000104bf0344();
      }
      else {
        func_0x000104bf035c();
        if (!(bool)in_CY || (bool)in_ZR) {
          func_0x000104bf0350();
        }
      }
      func_0x000104bf0338();
      uVar1 = in_ZR;
      plVar4 = extraout_x9_00;
      if (extraout_x9_00 != (long *)0x0) {
        do {
          while( true ) {
            in_ZR = uVar1;
            if (*plVar4 == 0) goto LAB_104bea978;
            func_0x000104bf032c();
            if (!(bool)in_ZR) break;
            func_0x000104bf0320();
            uVar1 = 0;
            plVar4 = extraout_x9_02;
            if ((bool)in_ZR) goto LAB_104beaa0c;
          }
          plVar4 = extraout_x9_01;
          if ((in_stack_00000050 & extraout_x8_01) == 0) {
            uVar5 = extraout_x10_00 & extraout_x8_01;
          }
          else {
            uVar5 = extraout_x10_00;
            if (in_stack_00000050 <= extraout_x10_00) {
              func_0x000104beff50();
              plVar4 = extraout_x9_03;
              uVar5 = extraout_x10_01;
            }
          }
          in_NG = (long)(uVar5 - unaff_x27) < 0;
          in_ZR = uVar5 == unaff_x27;
          uVar1 = in_ZR;
        } while ((bool)in_ZR);
      }
    }
LAB_104bea978:
    func_0x000104befe60();
    func_0x000104befb14();
    do {
      func_0x000104befac8();
    } while (extraout_w10_02 != 0);
    func_0x000104befc8c();
    if ((in_stack_00000050 == 0) || (func_0x000104befecc(), (bool)in_NG)) {
      func_0x000104befba8();
      in_ZR = in_stack_00000050 == 3;
      func_0x000104befa44();
      func_0x000104befbf0();
      func_0x000104befebc();
      if ((bool)in_ZR) {
        func_0x000104bf02e4();
      }
      else {
        in_ZR = in_stack_00000050 == unaff_x26;
        if (in_stack_00000050 <= unaff_x26) {
          func_0x000104bf02d8();
        }
      }
    }
    func_0x000104bf0030();
    if (extraout_x10_02 == 0) {
      func_0x000104befae4();
      if (extraout_x10_03 != 0) {
        func_0x000104befeac();
        uVar3 = extraout_x8_02;
        lVar6 = extraout_x9_04;
        if ((bool)in_ZR) {
          uVar5 = extraout_x10_04 & CONCAT44(extraout_var,extraout_w11_01);
        }
        else {
          uVar5 = extraout_x10_04;
          if (in_stack_00000050 <= extraout_x10_04) {
            func_0x000104beff50();
            uVar3 = extraout_x8_03;
            lVar6 = extraout_x9_05;
            uVar5 = extraout_x10_05;
          }
        }
        *(undefined8 *)(lVar6 + uVar5 * 8) = uVar3;
      }
    }
    else {
      func_0x000104befc10();
    }
    func_0x000104befb68();
LAB_104beaa0c:
    func_0x000104beffc4();
    FUN_104bef280();
  }
  else {
    func_0x000104befc60();
    if (in_stack_00000058 == 0) {
      func_0x000104befdec();
      goto LAB_104bea894;
    }
    func_0x000104befedc();
    func_0x000104befdd0();
    lVar6 = 0;
    if ((in_stack_00000058 != 0) && (in_stack_00000060 != 0)) {
      do {
        func_0x000104befac8();
        lVar6 = in_stack_00000060;
      } while (extraout_w10_00 != 0);
    }
    func_0x000104befd24(lVar6);
    FUN_104bef280();
    func_0x000104befdec();
  }
  func_0x000104befb50();
  func_0x000104beffbc();
  func_0x000104befea4();
LAB_104beaa20:
  func_0x000104befc7c(*(undefined8 *)(*param_2 + 0xb0));
  FUN_104be3d28();
  func_0x000104befcd0();
  func_0x000104befb98();
  return;
}



/* Entry: 104beaa78; end: 104beaad7;  */

void FUN_104beaa78(void)

{
  long *unaff_x21;
  
  func_0x000104bf0434();
  func_0x000104bef9f4();
  func_0x000104befa88();
  func_0x000104befab8();
  func_0x000104befa30();
  func_0x00010b9a9518();
  func_0x000104befbd0();
  func_0x000104befcd8(*(undefined8 *)(*unaff_x21 + 0xb8));
  func_0x000104befd10();
  func_0x000104befcd0();
  func_0x000104bf013c();
  return;
}



/* Entry: 104beaad8; end: 104beab8b;  */

void FUN_104beaad8(undefined8 param_1)

{
  undefined8 *unaff_x21;
  long *plVar1;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  FUN_104bef9f4();
  func_0x000104befa88();
  func_0x000104befab8();
  plVar1 = (long *)*unaff_x21;
  func_0x00010529dcb8(auStack_58);
  FUN_104bdbf60(auStack_70);
  FUN_104bee974(auStack_80,param_1);
  (**(code **)(*plVar1 + 0xc0))(plVar1,auStack_58,auStack_70,auStack_80);
  FUN_104be3970(auStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  func_0x000104bf0228();
  func_0x000104bf013c();
  return;
}



/* Entry: 104beab8c; end: 104beae6f;  */

void FUN_104beab8c(undefined8 param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 uVar3;
  long extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  long *extraout_x9_02;
  long *extraout_x9_03;
  long *plVar4;
  long extraout_x9_04;
  long extraout_x9_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  long extraout_x10_02;
  long extraout_x10_03;
  ulong extraout_x10_04;
  ulong extraout_x10_05;
  ulong uVar5;
  int extraout_w11;
  int extraout_w11_00;
  undefined4 extraout_w11_01;
  undefined4 extraout_var;
  long lVar6;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  
  func_0x000104bf00d4();
  func_0x000104befa0c();
  func_0x000104befa78();
  func_0x000104befd80();
  FUN_104bede38();
  func_0x000104bf02b4();
  if (!(bool)in_CY || (bool)in_ZR) goto LAB_104beae18;
  func_0x000104befdfc();
  if (in_stack_00000058 == 0) {
    lVar6 = 0;
    lVar2 = in_stack_00000058;
  }
  else {
    lVar6 = in_stack_00000058;
    func_0x000104befee8();
    func_0x000104befdf4();
    lVar2 = lVar6;
  }
  func_0x000104befd44();
  if (lVar6 != 0) {
    func_0x000104befe94();
    if (extraout_x8 != 0) {
      do {
        func_0x000104befac8();
      } while (extraout_w10 != 0);
    }
    goto LAB_104beae18;
  }
  func_0x000104befde0();
  func_0x000104bf0168();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000104befbc0();
    } while (extraout_w11 != 0);
  }
  func_0x000104befb5c();
  func_0x000104befd34();
  func_0x000104befbdc();
  if (lVar2 == 0) {
LAB_104beac8c:
    func_0x000104befe7c();
    func_0x000104befe84(&PTR_FUN_1107e8390);
    if ((in_stack_00000050 == 0) || (func_0x000104bf0380(&UNK_1107e83d0), extraout_x10 == 0)) {
      func_0x000104beff68();
    }
    else {
      do {
        func_0x000104befc20();
      } while (extraout_w11_00 != 0);
      func_0x000104befdb4();
      if (extraout_x9 != 0) {
        do {
          func_0x000104befac8();
        } while (extraout_w10_01 != 0);
      }
    }
    func_0x000104bf0504();
    func_0x000104befe70();
    func_0x000104befd44();
    func_0x000104befb80(&UNK_1108740d0);
    func_0x000104bf04ec();
    if (in_stack_00000050 != 0) {
      func_0x000104beff5c();
      if ((bool)in_ZR) {
        func_0x000104bf0344();
      }
      else {
        func_0x000104bf035c();
        if (!(bool)in_CY || (bool)in_ZR) {
          func_0x000104bf0350();
        }
      }
      func_0x000104bf0338();
      uVar1 = in_ZR;
      plVar4 = extraout_x9_00;
      if (extraout_x9_00 != (long *)0x0) {
        do {
          while( true ) {
            in_ZR = uVar1;
            if (*plVar4 == 0) goto LAB_104bead70;
            func_0x000104bf032c();
            if (!(bool)in_ZR) break;
            func_0x000104bf0320();
            uVar1 = 0;
            plVar4 = extraout_x9_02;
            if ((bool)in_ZR) goto LAB_104beae04;
          }
          plVar4 = extraout_x9_01;
          if ((in_stack_00000050 & extraout_x8_01) == 0) {
            uVar5 = extraout_x10_00 & extraout_x8_01;
          }
          else {
            uVar5 = extraout_x10_00;
            if (in_stack_00000050 <= extraout_x10_00) {
              func_0x000104beff50();
              plVar4 = extraout_x9_03;
              uVar5 = extraout_x10_01;
            }
          }
          in_NG = (long)(uVar5 - unaff_x27) < 0;
          in_ZR = uVar5 == unaff_x27;
          uVar1 = in_ZR;
        } while ((bool)in_ZR);
      }
    }
LAB_104bead70:
    func_0x000104befe60();
    func_0x000104befb14();
    do {
      func_0x000104befac8();
    } while (extraout_w10_02 != 0);
    func_0x000104befc8c();
    if ((in_stack_00000050 == 0) || (func_0x000104befecc(), (bool)in_NG)) {
      func_0x000104befba8();
      in_ZR = in_stack_00000050 == 3;
      func_0x000104befa44();
      func_0x000104befbf0();
      func_0x000104befebc();
      if ((bool)in_ZR) {
        func_0x000104bf02e4();
      }
      else {
        in_ZR = in_stack_00000050 == unaff_x26;
        if (in_stack_00000050 <= unaff_x26) {
          func_0x000104bf02d8();
        }
      }
    }
    func_0x000104bf0030();
    if (extraout_x10_02 == 0) {
      func_0x000104befae4();
      if (extraout_x10_03 != 0) {
        func_0x000104befeac();
        uVar3 = extraout_x8_02;
        lVar6 = extraout_x9_04;
        if ((bool)in_ZR) {
          uVar5 = extraout_x10_04 & CONCAT44(extraout_var,extraout_w11_01);
        }
        else {
          uVar5 = extraout_x10_04;
          if (in_stack_00000050 <= extraout_x10_04) {
            func_0x000104beff50();
            uVar3 = extraout_x8_03;
            lVar6 = extraout_x9_05;
            uVar5 = extraout_x10_05;
          }
        }
        *(undefined8 *)(lVar6 + uVar5 * 8) = uVar3;
      }
    }
    else {
      func_0x000104befc10();
    }
    func_0x000104befb68();
LAB_104beae04:
    func_0x000104beffc4();
    FUN_104bef2d8();
  }
  else {
    func_0x000104befc60();
    if (in_stack_00000058 == 0) {
      func_0x000104befdec();
      goto LAB_104beac8c;
    }
    func_0x000104befedc();
    func_0x000104befdd0();
    lVar6 = 0;
    if ((in_stack_00000058 != 0) && (in_stack_00000060 != 0)) {
      do {
        func_0x000104befac8();
        lVar6 = in_stack_00000060;
      } while (extraout_w10_00 != 0);
    }
    func_0x000104befd24(lVar6);
    FUN_104bef2d8();
    func_0x000104befdec();
  }
  func_0x000104befb50();
  func_0x000104beffbc();
  func_0x000104befea4();
LAB_104beae18:
  func_0x000104befc7c(*(undefined8 *)(*param_2 + 200));
  FUN_104be3e20();
  func_0x000104bf01dc();
  func_0x000104befb98();
  return;
}



/* Entry: 104beae70; end: 104beaef7;  */

void FUN_104beae70(undefined8 param_1)

{
  long *unaff_x20;
  
  FUN_104bef9f4();
  func_0x000104befa78();
  func_0x000104befa9c();
  func_0x000104befc3c();
  func_0x000104befb00();
  func_0x000104bf0398();
  func_0x000104bedf88(param_1);
  func_0x000104befe28();
  func_0x000104befe18(*(undefined8 *)(*unaff_x20 + 0xd0));
  func_0x000104befd10();
  func_0x000104befcd0();
  func_0x000104befb98();
  return;
}



/* Entry: 104beaef8; end: 104beb283;  */

void FUN_104beaef8(void)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar7;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long extraout_x9;
  long *plVar8;
  long *extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long extraout_x10;
  ulong uVar9;
  ulong extraout_x10_00;
  undefined8 extraout_x10_01;
  ulong extraout_x10_02;
  int extraout_w11;
  int extraout_w11_00;
  long *unaff_x20;
  long *unaff_x22;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x28;
  uint in_stack_00000044;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  
  func_0x000104bf00d4();
  func_0x000104bef9f4();
  func_0x000104befa78();
  func_0x000104befa9c();
  func_0x000104befb00();
  FUN_104bef330();
  uVar6 = (uint)*(byte *)(unaff_x22 + 1);
  uVar2 = (int)(uVar6 - 1) < 0;
  uVar3 = uVar6 == 1;
  if (uVar6 < 2) goto LAB_104beb214;
  func_0x000104bf01e4(&stack0x00000058);
  if (in_stack_00000058 == 0) {
    lVar10 = 0;
    lVar4 = in_stack_00000058;
  }
  else {
    lVar10 = in_stack_00000058;
    func_0x000104befee8();
    func_0x000104befdf4();
    lVar4 = lVar10;
  }
  func_0x000104befd44();
  if (lVar10 != 0) {
    if (*(long *)(lVar10 + 0x30) != 0) {
      do {
        func_0x000104befac8();
      } while (extraout_w10 != 0);
    }
    goto LAB_104beb214;
  }
  func_0x000104bf01e4(&stack0x00000050);
  func_0x000104bf0168();
  if (extraout_x8 != 0) {
    do {
      func_0x000104befbc0();
    } while (extraout_w11 != 0);
  }
  func_0x000104befb5c();
  func_0x000104befd34();
  func_0x000104bf00f8();
  lVar10 = 0;
  if (lVar4 == 0) {
LAB_104beb010:
    lVar4 = in_stack_00000050;
    func_0x000104befe7c();
    lVar5 = lVar10;
    func_0x000104beff14(&PTR_FUN_1107e8428);
    if ((lVar4 == 0) || (func_0x000104bf0528(&UNK_1107e8468), extraout_x10 == 0)) {
      func_0x000104bf0510();
    }
    else {
      do {
        func_0x000104befc20();
      } while (extraout_w11_00 != 0);
      func_0x000104bf0510();
      if (extraout_x9 != 0) {
        do {
          func_0x000104befac8();
        } while (extraout_w10_01 != 0);
      }
    }
    in_stack_00000058 = lVar4;
    func_0x000104bf03e8();
    func_0x000104befd44();
    *(undefined ***)(lVar5 + 0x18) = &PTR_DAT_110873f80;
    *(undefined ***)(lVar10 + 0x20) = &PTR_DAT_110873fb0;
    func_0x000104befe08();
    uVar12 = (ulong)in_stack_00000044;
    uVar11 = unaff_x22[1];
    if (uVar11 != 0) {
      func_0x000104bf0468();
      uVar6 = (uint)uVar11;
      if ((bool)uVar3) {
        unaff_x28 = (ulong)(uVar6 - 1 & in_stack_00000044);
      }
      else {
        uVar2 = (long)(uVar11 - uVar12) < 0;
        unaff_x28 = uVar12;
        if (uVar11 <= uVar12) {
          uVar1 = 0;
          if (uVar6 != 0) {
            uVar1 = in_stack_00000044 / uVar6;
          }
          unaff_x28 = (ulong)(in_stack_00000044 - uVar1 * uVar6);
        }
      }
      plVar8 = *(long **)(*unaff_x22 + unaff_x28 * 8);
      uVar7 = extraout_x8_00;
      if (plVar8 != (long *)0x0) {
        do {
          while( true ) {
            plVar8 = (long *)*plVar8;
            if (plVar8 == (long *)0x0) goto LAB_104beb130;
            uVar9 = plVar8[1];
            if (uVar9 != uVar12) break;
            uVar2 = (int)(*(uint *)(plVar8 + 2) - in_stack_00000044) < 0;
            if (*(uint *)(plVar8 + 2) == in_stack_00000044) goto LAB_104beb1f8;
          }
          if ((uVar11 & uVar7) == 0) {
            uVar9 = uVar9 & uVar7;
          }
          else if (uVar11 <= uVar9) {
            func_0x000104bf0448();
            uVar7 = extraout_x8_01;
            plVar8 = extraout_x9_00;
            uVar9 = extraout_x10_00;
          }
          uVar2 = (long)(uVar9 - unaff_x28) < 0;
        } while (uVar9 == unaff_x28);
      }
    }
LAB_104beb130:
    func_0x000104befe60();
    func_0x000104bf008c();
    do {
      func_0x000104befac8();
    } while (extraout_w10_02 != 0);
    func_0x000104beff08(unaff_x22[3]);
    if ((uVar11 == 0) || (func_0x000104befefc(), (bool)uVar2)) {
      func_0x000104bf026c();
      uVar2 = uVar11 == 3;
      func_0x000104befa44();
      func_0x000104bf0148();
      uVar11 = *(ulong *)(lVar10 + 0x28);
      func_0x000104bf0468();
      if ((bool)uVar2) {
        unaff_x28 = (ulong)((int)uVar11 - 1U & in_stack_00000044);
      }
      else {
        unaff_x28 = uVar12;
        if (uVar11 <= uVar12) {
          uVar7 = 0;
          if (uVar11 != 0) {
            uVar7 = uVar12 / uVar11;
          }
          unaff_x28 = uVar12 - uVar7 * uVar11;
        }
      }
    }
    if (*(long *)(*unaff_x22 + unaff_x28 * 8) == 0) {
      func_0x000104befc00(in_stack_00000058);
      *(undefined8 *)(extraout_x9_01 + unaff_x28 * 8) = extraout_x10_01;
      if (*extraout_x8_02 != 0) {
        uVar12 = *(ulong *)(*extraout_x8_02 + 8);
        plVar8 = extraout_x8_02;
        lVar10 = extraout_x9_01;
        if ((uVar11 & uVar11 - 1) == 0) {
          uVar12 = uVar12 & uVar11 - 1;
        }
        else if (uVar11 <= uVar12) {
          func_0x000104bf0448();
          plVar8 = extraout_x8_03;
          lVar10 = extraout_x9_02;
          uVar12 = extraout_x10_02;
        }
        *(long **)(lVar10 + uVar12 * 8) = plVar8;
      }
    }
    else {
      func_0x000104befc10();
    }
    func_0x000104beffd4();
LAB_104beb1f8:
    in_stack_00000058 = 0;
    in_stack_00000060 = 0;
    FUN_104bef360(&stack0x00000058);
  }
  else {
    func_0x000104befc60();
    lVar10 = in_stack_00000060;
    if (in_stack_00000058 == 0) {
      lVar10 = in_stack_00000058;
      func_0x000104befdec();
      goto LAB_104beb010;
    }
    lVar4 = in_stack_00000058;
    func_0x000104befedc();
    func_0x000104befdd0();
    lVar5 = 0;
    if ((lVar4 != 0) && (lVar10 != 0)) {
      do {
        func_0x000104befac8();
        lVar5 = lVar10;
      } while (extraout_w10_00 != 0);
    }
    func_0x000104befd24(lVar5);
    FUN_104bef360();
    func_0x000104befdec();
  }
  func_0x000104befb50();
  func_0x000104beffbc();
  func_0x000104befea4();
LAB_104beb214:
  func_0x000104bf03a8(*(undefined8 *)(*unaff_x20 + 0xd8));
  FUN_104be3f18();
  func_0x000104befcd0();
  func_0x000104befb98();
  return;
}



/* Entry: 104beb284; end: 104beb2e3;  */

void FUN_104beb284(void)

{
  long *unaff_x21;
  
  func_0x000104bf0434();
  func_0x000104bef9f4();
  func_0x000104befa88();
  func_0x000104befab8();
  func_0x000104befa30();
  func_0x00010b9a9608();
  func_0x000104befbd0();
  func_0x000104befcd8(*(undefined8 *)(*unaff_x21 + 0xe0));
  func_0x000104befd10();
  func_0x000104befcd0();
  func_0x000104bf013c();
  return;
}



/* Entry: 104beb2e4; end: 104beb38b;  */

void FUN_104beb2e4(ulong param_1)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  long lVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  long *plStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_88;
  undefined2 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  func_0x00010527ff8c();
  func_0x0001052845d4(param_1);
  func_0x000105288840(param_1);
  func_0x000105288c80(param_1);
  func_0x00010528920c(param_1);
  func_0x000105289758(param_1);
  func_0x000105289b98(param_1);
  func_0x000105289fd8(param_1);
  func_0x00010528a418(param_1);
  func_0x000105299930(param_1);
  func_0x00010529a45c(param_1);
  func_0x00010529c88c(param_1);
  bVar2 = *(byte *)((param_1 & 0xffffffff) + 0x113815cd8);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x113815cd8) = 1;
  if ((bVar2 & 1) != 0) {
    return;
  }
  FUN_104beb38c();
  lVar5 = 0x113815cf8;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010b9941f8(&uStack_48);
  if ((param_1 & 1) == 0) {
    func_0x000107c31000(uStack_48);
    iVar6 = (int)lVar5;
  }
  else {
    uStack_50 = uStack_48;
    func_0x000108b80b74(auStack_40,&uStack_50,0x113815cf8);
    func_0x000107c30f50();
    lStack_88 = *(long *)(lVar5 + 0x10);
    if (lStack_88 != 0) {
      piVar1 = (int *)(lStack_88 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_80 = 0xff00;
    func_0x000107c30fa8(auStack_78,&lStack_88);
    func_0x000107c31030(auStack_68,auStack_78);
    func_0x000107c27900(auStack_70);
    func_0x000107c278f4(&lStack_88);
    puVar7 = auStack_68;
    func_0x00010b994158(uStack_48,puVar7,auStack_38);
    iVar6 = (int)puVar7;
    func_0x000107c27900(auStack_60);
    func_0x000107c2a668(auStack_40);
  }
  FUN_104bdc2fc(&uStack_48);
  func_0x000108b80b80(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  func_0x00010b9a96d0(&lStack_c8);
  plStack_e0 = *(long **)(lStack_c8 + 0x18);
  if (plStack_e0 != (long *)0x0) {
    (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
  }
  lStack_d0 = *(long *)(lStack_c8 + 0x28);
  lStack_d8 = *(long *)(lStack_c8 + 0x20);
  func_0x000107c27d7c(extraout_x8,lStack_d8,lStack_d8 + lStack_d0);
  func_0x000107c27900(&plStack_e0);
  FUN_104bdb38c(&lStack_c8);
  return;
}



/* Entry: 104beb38c; end: 104bec5bb;  */

void FUN_104beb38c(void)

{
  undefined1 in_ZR;
  int iVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  long lVar4;
  undefined1 auStack_c18 [16];
  undefined1 auStack_c08 [16];
  undefined8 uStack_bf8;
  undefined1 auStack_bf0 [16];
  undefined1 auStack_be0 [16];
  undefined8 uStack_bd0;
  undefined1 auStack_bc8 [16];
  undefined1 auStack_bb8 [16];
  undefined8 uStack_ba8;
  undefined1 auStack_ba0 [16];
  undefined1 auStack_b90 [16];
  undefined8 uStack_b80;
  undefined1 auStack_b78 [16];
  undefined1 auStack_b68 [16];
  undefined8 uStack_b58;
  undefined1 auStack_b50 [16];
  undefined1 auStack_b40 [16];
  undefined8 uStack_b30;
  undefined1 auStack_b28 [16];
  undefined1 auStack_b18 [16];
  undefined8 uStack_b08;
  undefined1 auStack_b00 [16];
  undefined1 auStack_af0 [16];
  undefined8 uStack_ae0;
  undefined1 auStack_ad8 [16];
  undefined1 auStack_ac8 [16];
  undefined8 uStack_ab8;
  undefined1 auStack_ab0 [16];
  undefined1 auStack_aa0 [16];
  undefined8 uStack_a90;
  undefined1 auStack_a88 [16];
  undefined1 auStack_a78 [16];
  undefined8 uStack_a68;
  undefined1 auStack_a60 [16];
  undefined1 auStack_a50 [16];
  undefined8 uStack_a40;
  undefined1 auStack_a38 [16];
  undefined1 auStack_a28 [16];
  undefined8 uStack_a18;
  undefined1 auStack_a10 [16];
  undefined1 auStack_a00 [16];
  undefined8 uStack_9f0;
  undefined1 auStack_9e8 [16];
  undefined1 auStack_9d8 [16];
  undefined8 uStack_9c8;
  undefined1 auStack_9c0 [16];
  undefined1 auStack_9b0 [16];
  undefined8 uStack_9a0;
  undefined1 auStack_998 [16];
  undefined1 auStack_988 [16];
  undefined8 uStack_978;
  undefined1 auStack_970 [16];
  undefined1 auStack_960 [16];
  undefined8 uStack_950;
  undefined1 auStack_948 [16];
  undefined1 auStack_938 [16];
  undefined8 uStack_928;
  undefined1 auStack_920 [16];
  undefined1 auStack_910 [16];
  undefined8 uStack_900;
  undefined1 auStack_8f8 [16];
  undefined1 auStack_8e8 [16];
  undefined8 uStack_8d8;
  undefined1 auStack_8d0 [16];
  undefined1 auStack_8c0 [16];
  undefined8 uStack_8b0;
  undefined1 auStack_8a8 [16];
  undefined1 auStack_898 [16];
  undefined8 uStack_888;
  undefined1 auStack_880 [16];
  undefined1 auStack_870 [16];
  undefined8 uStack_860;
  undefined1 auStack_858 [16];
  undefined1 auStack_848 [16];
  undefined8 uStack_838;
  undefined1 auStack_830 [16];
  undefined1 auStack_820 [16];
  undefined8 uStack_810;
  undefined1 auStack_808 [16];
  undefined1 auStack_7f8 [16];
  undefined8 uStack_7e8;
  undefined1 auStack_7e0 [48];
  undefined1 auStack_7b0 [48];
  undefined1 auStack_780 [64];
  undefined1 auStack_740 [32];
  undefined1 auStack_720 [48];
  undefined1 auStack_6f0 [48];
  undefined1 auStack_6c0 [32];
  undefined1 auStack_6a0 [48];
  undefined1 auStack_670 [48];
  undefined1 auStack_640 [48];
  undefined1 auStack_610 [48];
  undefined1 auStack_5e0 [32];
  undefined1 auStack_5c0 [32];
  undefined1 auStack_5a0 [32];
  undefined1 auStack_580 [32];
  undefined1 auStack_560 [64];
  undefined1 auStack_520 [64];
  undefined1 auStack_4e0 [16];
  undefined1 auStack_4d0 [48];
  undefined1 auStack_4a0 [48];
  undefined1 auStack_470 [48];
  undefined1 auStack_440 [32];
  undefined1 auStack_420 [64];
  undefined1 auStack_3e0 [16];
  undefined1 auStack_3d0 [48];
  undefined1 auStack_3a0 [32];
  undefined1 auStack_380 [32];
  undefined1 auStack_360 [64];
  undefined1 auStack_320 [32];
  undefined1 auStack_300 [32];
  undefined1 auStack_2e0 [32];
  undefined8 uStack_2c0;
  undefined1 auStack_2b8 [16];
  undefined8 uStack_2a8;
  undefined1 auStack_2a0 [16];
  undefined8 uStack_290;
  undefined1 auStack_288 [16];
  undefined8 uStack_278;
  undefined1 auStack_270 [16];
  undefined8 uStack_260;
  undefined1 auStack_258 [16];
  undefined8 uStack_248;
  undefined1 auStack_240 [16];
  undefined8 uStack_230;
  undefined1 auStack_228 [16];
  undefined8 uStack_218;
  undefined1 auStack_210 [16];
  undefined8 uStack_200;
  undefined1 auStack_1f8 [16];
  undefined8 uStack_1e8;
  undefined1 auStack_1e0 [16];
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [16];
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [16];
  undefined8 uStack_1a0;
  undefined1 auStack_198 [16];
  undefined8 uStack_188;
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  undefined1 auStack_168 [16];
  undefined8 uStack_158;
  undefined1 auStack_150 [16];
  undefined8 uStack_140;
  undefined1 auStack_138 [16];
  undefined8 uStack_128;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000104bf0040();
  uStack_38 = extraout_x8;
  if ((bRam00000001136a37d0 & 1) == 0) {
    iVar1 = 0x136a37d0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_104bec658();
      pcVar2 = "fetchConversation";
      func_0x0001003a83dc(&uStack_7e8,"fetchConversation");
      func_0x0001003b166c(auStack_808);
      func_0x00010529dde0();
      func_0x0001003adcc0(auStack_2e0,pcVar2);
      func_0x000105288a10();
      func_0x000104befd08();
      func_0x000104befef4(auStack_7f8,auStack_808,auStack_2e0);
      uStack_2c0 = uStack_7e8;
      uStack_7e8 = 0;
      func_0x0001003aef98(auStack_2b8,auStack_7f8);
      pcVar2 = "fetchConversationWithMessages";
      func_0x0001003a83dc(&uStack_810,"fetchConversationWithMessages");
      func_0x0001003b166c(auStack_830);
      func_0x00010529dde0();
      func_0x0001003adcc0(auStack_300,pcVar2);
      func_0x000105288ef8();
      func_0x000104befd08();
      func_0x000104befef4(auStack_820,auStack_830,auStack_300);
      uStack_2a8 = uStack_810;
      uStack_810 = 0;
      func_0x0001003aef98(auStack_2a0,auStack_820);
      pcVar2 = "fetchConversationByParticipants";
      func_0x0001003a83dc(&uStack_838,"fetchConversationByParticipants");
      func_0x0001003b166c(auStack_858);
      FUN_104bef3dc();
      func_0x0001003adcc0(auStack_320,pcVar2);
      func_0x0001052893e0();
      func_0x000104befd08();
      func_0x000104befef4(auStack_848,auStack_858,auStack_320);
      uStack_290 = uStack_838;
      uStack_838 = 0;
      func_0x0001003aef98(auStack_288,auStack_848);
      pcVar2 = "fetchConversationWithMessagesPaginated";
      func_0x0001003a83dc(&uStack_860,"fetchConversationWithMessagesPaginated");
      func_0x0001003b166c(auStack_880);
      func_0x00010529dde0();
      func_0x0001003adcc0(auStack_360,pcVar2);
      FUN_104bef438();
      func_0x000104befd08();
      FUN_104bef494();
      func_0x000104befd78();
      func_0x000105288ef8();
      func_0x000104beff48();
      func_0x000104bf00f0(auStack_870,auStack_880,auStack_360);
      uStack_278 = uStack_860;
      uStack_860 = 0;
      func_0x0001003aef98(auStack_270,auStack_870);
      pcVar2 = "syncServerConversation";
      func_0x0001003a83dc(&uStack_888,"syncServerConversation");
      func_0x0001003b166c(auStack_8a8);
      func_0x000105284140();
      func_0x0001003adcc0(auStack_3a0,pcVar2);
      FUN_104bef4f0();
      func_0x000104befd08();
      if ((bRam00000001136a37d8 & 1) == 0) goto LAB_104bec54c;
      goto LAB_104beb5e0;
    }
  }
  while (func_0x000104befd94(uStack_38), !(bool)in_ZR) {
    ___stack_chk_fail();
LAB_104bec54c:
    iVar1 = 0x136a37d8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1136a37f8);
      ___cxa_guard_release(0x1136a37d8);
    }
LAB_104beb5e0:
    func_0x0001003adcc0(auStack_380,0x1136a37f8);
    func_0x00010529ca5c();
    func_0x000104beff48();
    func_0x000104bf00f0(auStack_898,auStack_8a8,auStack_3a0);
    uStack_260 = uStack_888;
    uStack_888 = 0;
    func_0x0001003aef98(auStack_258,auStack_898);
    pcVar2 = "sendMessageWithContent";
    func_0x0001003a83dc(&uStack_8b0,"sendMessageWithContent");
    func_0x0001003b166c(auStack_8d0);
    func_0x000105291404();
    func_0x0001003adcc0(auStack_3d0,pcVar2);
    func_0x00010528c61c();
    func_0x000104befd08();
    func_0x00010529a678();
    func_0x000104befd78();
    func_0x000104befe68(auStack_8c0,auStack_8d0,auStack_3d0);
    uStack_248 = uStack_8b0;
    uStack_8b0 = 0;
    func_0x0001003aef98(auStack_240,auStack_8c0);
    pcVar2 = "createConversation";
    func_0x0001003a83dc(&uStack_8d8,"createConversation");
    func_0x0001003b166c(auStack_8f8);
    FUN_104bef3dc();
    puVar3 = auStack_420;
    func_0x0001003adcc0(puVar3,pcVar2);
    FUN_104bdbd7c();
    func_0x000104befd08();
    FUN_104bef548();
    func_0x000104befd78();
    FUN_104bef5a0();
    func_0x000104beff48();
    func_0x0001052847a4();
    func_0x0001003adcc0(auStack_3e0,puVar3);
    FUN_104bdbd48(auStack_8e8,auStack_8f8,auStack_420,5);
    uStack_230 = uStack_8d8;
    uStack_8d8 = 0;
    func_0x0001003aef98(auStack_228,auStack_8e8);
    pcVar2 = "leaveConversation";
    func_0x0001003a83dc(&uStack_900,"leaveConversation");
    func_0x0001003b166c(auStack_920);
    func_0x00010529dde0();
    func_0x0001003adcc0(auStack_440,pcVar2);
    func_0x00010528014c();
    func_0x000104befd08();
    func_0x000104befef4(auStack_910,auStack_920,auStack_440);
    uStack_218 = uStack_900;
    uStack_900 = 0;
    func_0x0001003aef98(auStack_210,auStack_910);
    pcVar2 = "enterConversation";
    func_0x0001003a83dc(&uStack_928,"enterConversation");
    func_0x0001003b166c(auStack_948);
    func_0x00010529dde0();
    func_0x0001003adcc0(auStack_470,pcVar2);
    FUN_104bef548();
    func_0x000104befd08();
    func_0x00010528014c();
    func_0x000104befd78();
    func_0x000104befe68(auStack_938,auStack_948,auStack_470);
    uStack_200 = uStack_928;
    uStack_928 = 0;
    func_0x0001003aef98(auStack_1f8,auStack_938);
    pcVar2 = "exitConversation";
    func_0x0001003a83dc(&uStack_950,"exitConversation");
    func_0x0001003b166c(auStack_970);
    func_0x00010529dde0();
    func_0x0001003adcc0(auStack_4a0,pcVar2);
    FUN_104bef438();
    func_0x000104befd08();
    func_0x00010528014c();
    func_0x000104befd78();
    func_0x000104befe68(auStack_960,auStack_970,auStack_4a0);
    uStack_1e8 = uStack_950;
    uStack_950 = 0;
    func_0x0001003aef98(auStack_1e0,auStack_960);
    pcVar2 = "displayedMessages";
    func_0x0001003a83dc(&uStack_978,"displayedMessages");
    func_0x0001003b166c(auStack_998);
    func_0x00010529dde0();
    func_0x0001003adcc0(auStack_4d0,pcVar2);
    FUN_104bef5f8();
    func_0x000104befd08();
    func_0x00010528014c();
    func_0x000104befd78();
    func_0x000104befe68(auStack_988,auStack_998,auStack_4d0);
    uStack_1d0 = uStack_978;
    uStack_978 = 0;
    func_0x0001003aef98(auStack_1c8,auStack_988);
    pcVar2 = "reactToMessage";
    func_0x0001003a83dc(&uStack_9a0,"reactToMessage");
    func_0x0001003b166c(auStack_9c0);
    func_0x00010529dde0();
    puVar3 = auStack_520;
    func_0x0001003adcc0(puVar3,pcVar2);
    FUN_104bef5f8();
    func_0x000104befd08();
    func_0x00010529921c();
    func_0x000104befd78();
    func_0x00010529629c();
    func_0x000104beff48();
    func_0x00010528014c();
    func_0x0001003adcc0(auStack_4e0,puVar3);
    FUN_104bdbd48(auStack_9b0,auStack_9c0,auStack_520,5);
    uStack_1b8 = uStack_9a0;
    uStack_9a0 = 0;
    func_0x0001003aef98(auStack_1b0,auStack_9b0);
    pcVar2 = "removeReaction";
    func_0x0001003a83dc(&uStack_9c8,"removeReaction");
    func_0x0001003b166c(auStack_9e8);
    func_0x00010529dde0();
    func_0x0001003adcc0(auStack_560,pcVar2);
    FUN_104bef5f8();
    func_0x000104befd08();
    func_0x00010529921c();
    func_0x000104befd78();
    func_0x00010528014c();
    func_0x000104beff48();
    func_0x000104bf00f0(auStack_9d8,auStack_9e8,auStack_560);
    uStack_1a0 = uStack_9c8;
    uStack_9c8 = 0;
    func_0x0001003aef98(auStack_198,auStack_9d8);
    pcVar2 = "updateMessage";
    func_0x0001003a83dc(&uStack_9f0,"updateMessage");
    func_0x0001003b166c(auStack_a10);
    func_0x00010529dde0();
    func_0x0001003adcc0(auStack_5a0,pcVar2);
    FUN_104bef5f8();
    func_0x000104befd08();
    if ((bRam00000001136a37e0 & 1) == 0) {
      iVar1 = 0x136a37e0;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        func_0x00010b990e20(0x1136a3808);
        ___cxa_guard_release(0x1136a37e0);
      }
    }
    func_0x0001003adcc0(auStack_580,0x1136a3808);
    func_0x00010528014c();
    func_0x000104beff48();
    func_0x000104bf00f0(auStack_a00,auStack_a10,auStack_5a0);
    uStack_188 = uStack_9f0;
    uStack_9f0 = 0;
    func_0x0001003aef98(auStack_180,auStack_a00);
    pcVar2 = "joinPublicGroup";
    func_0x0001003a83dc(&uStack_a18,"joinPublicGroup");
    func_0x0001003b166c(auStack_a38);
    func_0x00010529dde0();
    func_0x0001003adcc0(auStack_5c0,pcVar2);
    func_0x00010528014c();
    func_0x000104befd08();
    func_0x000104befef4(auStack_a28,auStack_a38,auStack_5c0);
    uStack_170 = uStack_a18;
    uStack_a18 = 0;
    func_0x0001003aef98(auStack_168,auStack_a28);
    pcVar2 = "leavePublicGroup";
    func_0x0001003a83dc(&uStack_a40,"leavePublicGroup");
    func_0x0001003b166c(auStack_a60);
    func_0x00010529dde0();
    func_0x0001003adcc0(auStack_5e0,pcVar2);
    func_0x00010528014c();
    func_0x000104befd08();
    func_0x000104befef4(auStack_a50,auStack_a60,auStack_5e0);
    uStack_158 = uStack_a40;
    uStack_a40 = 0;
    func_0x0001003aef98(auStack_150,auStack_a50);
    pcVar2 = "fetchServerMessageIdentifier";
    func_0x0001003a83dc(&uStack_a68,"fetchServerMessageIdentifier");
    func_0x0001003b166c(auStack_a88);
    func_0x00010529dde0();
    func_0x0001003adcc0(auStack_610,pcVar2);
    FUN_104bef5f8();
    func_0x000104befd08();
    func_0x000105289d68();
    func_0x000104befd78();
    func_0x000104befe68(auStack_a78,auStack_a88,auStack_610);
    uStack_140 = uStack_a68;
    uStack_a68 = 0;
    func_0x0001003aef98(auStack_138,auStack_a78);
    pcVar2 = "retrieveMessagesByServerId";
    func_0x0001003a83dc(&uStack_a90,"retrieveMessagesByServerId");
    func_0x0001003b166c(auStack_ab0);
    func_0x00010529dde0();
    func_0x0001003adcc0(auStack_640,pcVar2);
    FUN_104bef650();
    func_0x000104befd08();
    func_0x000105299b2c();
    func_0x000104befd78();
    func_0x000104befe68(auStack_aa0,auStack_ab0,auStack_640);
    uStack_128 = uStack_a90;
    uStack_a90 = 0;
    func_0x0001003aef98(auStack_120,auStack_aa0);
    pcVar2 = "retrySendMessage";
    func_0x0001003a83dc(&uStack_ab8,"retrySendMessage");
    func_0x0001003b166c(auStack_ad8);
    func_0x00010529dde0();
    func_0x0001003adcc0(auStack_670,pcVar2);
    FUN_104bef5f8();
    func_0x000104befd08();
    func_0x00010529a678();
    func_0x000104befd78();
    func_0x000104befe68(auStack_ac8,auStack_ad8,auStack_670);
    uStack_110 = uStack_ab8;
    uStack_ab8 = 0;
    func_0x0001003aef98(auStack_108,auStack_ac8);
    pcVar2 = "cancelMessageSend";
    func_0x0001003a83dc(&uStack_ae0,"cancelMessageSend");
    func_0x0001003b166c(auStack_b00);
    func_0x00010529dde0();
    func_0x0001003adcc0(auStack_6a0,pcVar2);
    FUN_104bef5f8();
    func_0x000104befd08();
    func_0x00010528014c();
    func_0x000104befd78();
    func_0x000104befe68(auStack_af0,auStack_b00,auStack_6a0);
    uStack_f8 = uStack_ae0;
    uStack_ae0 = 0;
    func_0x0001003aef98(auStack_f0,auStack_af0);
    pcVar2 = "getConversation";
    func_0x0001003a83dc(&uStack_b08,"getConversation");
    func_0x0001003b166c(auStack_b28);
    func_0x00010529dde0();
    func_0x0001003adcc0(auStack_6c0,pcVar2);
    func_0x00010528a1a8();
    func_0x000104befd08();
    func_0x000104befef4(auStack_b18,auStack_b28,auStack_6c0);
    uStack_e0 = uStack_b08;
    uStack_b08 = 0;
    func_0x0001003aef98(auStack_d8,auStack_b18);
    pcVar2 = "updateChatNotificationSettings";
    func_0x0001003a83dc(&uStack_b30,"updateChatNotificationSettings");
    func_0x0001003b166c(auStack_b50);
    func_0x00010529dde0();
    func_0x0001003adcc0(auStack_6f0,pcVar2);
    FUN_104bef6ac();
    func_0x000104befd08();
    func_0x00010528014c();
    func_0x000104befd78();
    func_0x000104befe68(auStack_b40,auStack_b50,auStack_6f0);
    uStack_c8 = uStack_b30;
    uStack_b30 = 0;
    func_0x0001003aef98(auStack_c0,auStack_b40);
    pcVar2 = "updateConversationTitle";
    func_0x0001003a83dc(&uStack_b58,"updateConversationTitle");
    func_0x0001003b166c(auStack_b78);
    func_0x00010529dde0();
    func_0x0001003adcc0(auStack_720,pcVar2);
    FUN_104bdbd7c();
    func_0x000104befd08();
    func_0x00010528014c();
    func_0x000104befd78();
    func_0x000104befe68(auStack_b68,auStack_b78,auStack_720);
    uStack_b0 = uStack_b58;
    uStack_b58 = 0;
    func_0x0001003aef98(auStack_a8,auStack_b68);
    pcVar2 = "getOneOnOneConversationIds";
    func_0x0001003a83dc(&uStack_b80);
    func_0x0001003b166c(auStack_ba0);
    FUN_104bef3dc();
    func_0x0001003adcc0(auStack_740,pcVar2);
    func_0x00010528a5ec();
    func_0x000104befd08();
    func_0x000104befef4(auStack_b90,auStack_ba0,auStack_740);
    uStack_98 = uStack_b80;
    uStack_b80 = 0;
    func_0x0001003aef98(auStack_90,auStack_b90);
    pcVar2 = "updatePollVote";
    func_0x0001003a83dc(&uStack_ba8,"updatePollVote");
    func_0x0001003b166c(auStack_bc8);
    func_0x00010529dde0();
    func_0x0001003adcc0(auStack_780,pcVar2);
    FUN_104bef5f8();
    func_0x000104befd08();
    FUN_104bef494();
    func_0x000104befd78();
    func_0x00010528014c();
    func_0x000104beff48();
    func_0x000104bf00f0(auStack_bb8,auStack_bc8,auStack_780);
    uStack_80 = uStack_ba8;
    uStack_ba8 = 0;
    func_0x0001003aef98(auStack_78,auStack_bb8);
    pcVar2 = "getAffinityMessages";
    func_0x0001003a83dc(&uStack_bd0,"getAffinityMessages");
    func_0x0001003b166c(auStack_bf0);
    func_0x00010529dde0();
    func_0x0001003adcc0(auStack_7b0,pcVar2);
    FUN_104bef704();
    func_0x000104befd08();
    func_0x000105289928();
    func_0x000104befd78();
    func_0x000104befe68(auStack_be0,auStack_bf0,auStack_7b0);
    uStack_68 = uStack_bd0;
    uStack_bd0 = 0;
    func_0x0001003aef98(auStack_60,auStack_be0);
    pcVar2 = "setStreakFrozenState";
    func_0x0001003a83dc(&uStack_bf8,"setStreakFrozenState");
    func_0x0001003b166c(auStack_c18);
    func_0x00010529dde0();
    func_0x0001003adcc0(auStack_7e0,pcVar2);
    FUN_104bef4f0();
    func_0x000104befd08();
    func_0x00010528014c();
    func_0x000104befd78();
    func_0x000104befe68(auStack_c08,auStack_c18,auStack_7e0);
    uStack_50 = uStack_bf8;
    uStack_bf8 = 0;
    func_0x0001003aef98(auStack_48,auStack_c08);
    FUN_104bdbd44(0x113815cf8,0x113815d08,1,&uStack_2c0,0x1b);
    lVar4 = 0x270;
    do {
      func_0x0001003b1c5c(auStack_2b8 + lVar4 + -8);
      lVar4 = lVar4 + -0x18;
      in_ZR = lVar4 == -0x18;
    } while (!(bool)in_ZR);
    func_0x000104befcb8(auStack_c08);
    do {
      func_0x000104befd00();
      func_0x000104befd4c();
    } while (!(bool)in_ZR);
    func_0x000104befcb8(auStack_c18);
    func_0x0001003a8c94(&uStack_bf8);
    func_0x000104befcb8(auStack_be0);
    do {
      func_0x000104befd00();
      func_0x000104befd4c();
    } while (!(bool)in_ZR);
    func_0x000104befcb8(auStack_bf0);
    func_0x0001003a8c94(&uStack_bd0);
    func_0x000104befcb8(auStack_bb8);
    do {
      func_0x000104befd00();
      func_0x000104befd4c();
    } while (!(bool)in_ZR);
    func_0x000104befcb8(auStack_bc8);
    func_0x0001003a8c94(&uStack_ba8);
    func_0x000104befcb8(auStack_b90);
    do {
      func_0x000104befd00();
      func_0x000104befd4c();
    } while (!(bool)in_ZR);
    func_0x000104befcb8(auStack_ba0);
    func_0x0001003a8c94(&uStack_b80);
    func_0x000104befcb8(auStack_b68);
    do {
      func_0x000104befd00();
      func_0x000104befd4c();
    } while (!(bool)in_ZR);
    func_0x000104befcb8(auStack_b78);
    func_0x0001003a8c94(&uStack_b58);
    func_0x000104befcb8(auStack_b40);
    do {
      func_0x000104befd00();
      func_0x000104befd4c();
    } while (!(bool)in_ZR);
    func_0x000104befcb8(auStack_b50);
    func_0x0001003a8c94(&uStack_b30);
    func_0x000104befcb8(auStack_b18);
    do {
      func_0x000104befd00();
      func_0x000104befd4c();
    } while (!(bool)in_ZR);
    func_0x000104befcb8(auStack_b28);
    func_0x0001003a8c94(&uStack_b08);
    func_0x000104befcb8(auStack_af0);
    do {
      func_0x000104befd00();
      func_0x000104befd4c();
    } while (!(bool)in_ZR);
    func_0x000104befcb8(auStack_b00);
    func_0x0001003a8c94(&uStack_ae0);
    func_0x000104befcb8(auStack_ac8);
    do {
      func_0x000104befd00();
      func_0x000104befd4c();
    } while (!(bool)in_ZR);
    func_0x000104befcb8(auStack_ad8);
    func_0x0001003a8c94(&uStack_ab8);
    func_0x000104befcb8(auStack_aa0);
    do {
      func_0x000104befd00();
      func_0x000104befd4c();
    } while (!(bool)in_ZR);
    func_0x000104befcb8(auStack_ab0);
    func_0x0001003a8c94(&uStack_a90);
    func_0x000104befcb8(auStack_a78);
    do {
      func_0x000104befd00();
      func_0x000104befd4c();
    } while (!(bool)in_ZR);
    func_0x000104befcb8(auStack_a88);
    func_0x0001003a8c94(&uStack_a68);
    func_0x000104befcb8(auStack_a50);
    do {
      func_0x000104befd00();
      func_0x000104befd4c();
    } while (!(bool)in_ZR);
    func_0x000104befcb8(auStack_a60);
    func_0x0001003a8c94(&uStack_a40);
    func_0x000104befcb8(auStack_a28);
    do {
      func_0x000104befd00();
      func_0x000104befd4c();
    } while (!(bool)in_ZR);
    func_0x000104befcb8(auStack_a38);
    func_0x0001003a8c94(&uStack_a18);
    func_0x000104befcb8(auStack_a00);
    do {
      func_0x000104befd00();
      func_0x000104befd4c();
    } while (!(bool)in_ZR);
    func_0x000104befcb8(auStack_a10);
    func_0x0001003a8c94(&uStack_9f0);
    func_0x000104befcb8(auStack_9d8);
    do {
      func_0x000104befd00();
      func_0x000104befd4c();
    } while (!(bool)in_ZR);
    func_0x000104befcb8(auStack_9e8);
    func_0x0001003a8c94(&uStack_9c8);
    func_0x000104befcb8(auStack_9b0);
    do {
      func_0x000104befd00();
      func_0x000104befd4c();
    } while (!(bool)in_ZR);
    func_0x000104befcb8(auStack_9c0);
    func_0x0001003a8c94(&uStack_9a0);
    func_0x000104befcb8(auStack_988);
    do {
      func_0x000104befd00();
      func_0x000104befd4c();
    } while (!(bool)in_ZR);
    func_0x000104befcb8(auStack_998);
    func_0x0001003a8c94(&uStack_978);
    func_0x000104befcb8(auStack_960);
    do {
      func_0x000104befd00();
      func_0x000104befd4c();
    } while (!(bool)in_ZR);
    func_0x000104befcb8(auStack_970);
    func_0x0001003a8c94(&uStack_950);
    func_0x000104befcb8(auStack_938);
    do {
      func_0x000104befd00();
      func_0x000104befd4c();
    } while (!(bool)in_ZR);
    func_0x000104befcb8(auStack_948);
    func_0x0001003a8c94(&uStack_928);
    func_0x000104befcb8(auStack_910);
    do {
      func_0x000104befd00();
      func_0x000104befd4c();
    } while (!(bool)in_ZR);
    func_0x000104befcb8(auStack_920);
    func_0x0001003a8c94(&uStack_900);
    func_0x000104befcb8(auStack_8e8);
    do {
      func_0x000104befd00();
      func_0x000104befd4c();
    } while (!(bool)in_ZR);
    func_0x000104befcb8(auStack_8f8);
    func_0x0001003a8c94(&uStack_8d8);
    func_0x000104befcb8(auStack_8c0);
    do {
      func_0x000104befd00();
      func_0x000104befd4c();
    } while (!(bool)in_ZR);
    func_0x000104befcb8(auStack_8d0);
    func_0x0001003a8c94(&uStack_8b0);
    func_0x000104befcb8(auStack_898);
    do {
      func_0x000104befd00();
      func_0x000104befd4c();
    } while (!(bool)in_ZR);
    func_0x000104befcb8(auStack_8a8);
    func_0x0001003a8c94(&uStack_888);
    func_0x000104befcb8(auStack_870);
    do {
      func_0x000104befd00();
      func_0x000104befd4c();
    } while (!(bool)in_ZR);
    func_0x000104befcb8(auStack_880);
    func_0x0001003a8c94(&uStack_860);
    func_0x000104befcb8(auStack_848);
    do {
      func_0x000104befd00();
      func_0x000104befd4c();
    } while (!(bool)in_ZR);
    func_0x000104befcb8(auStack_858);
    func_0x0001003a8c94(&uStack_838);
    func_0x000104befcb8(auStack_820);
    do {
      func_0x000104befd00();
      func_0x000104befd4c();
    } while (!(bool)in_ZR);
    func_0x000104befcb8(auStack_830);
    func_0x0001003a8c94(&uStack_810);
    func_0x000104befcb8(auStack_7f8);
    do {
      func_0x000104befd00();
      func_0x000104befd4c();
    } while (!(bool)in_ZR);
    func_0x000104befcb8(auStack_808);
    func_0x0001003a8c94(&uStack_7e8);
    ___cxa_guard_release(0x1136a37d0);
  }
  return;
}



/* Entry: 104bec5bc; end: 104bec657;  */

undefined8 FUN_104bec5bc(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113815cf0 & 1) == 0) {
    iVar4 = 0x13815cf0;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_104bec658();
      lStack_20 = lRam0000000113815d08;
      if (lRam0000000113815d08 != 0) {
        piVar1 = (int *)(lRam0000000113815d08 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_18 = 0xff00;
      func_0x0001003ad9a4(0x113815ce0,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x113815cf0);
    }
  }
  return 0x113815ce0;
}



/* Entry: 104bec658; end: 104bec6ab;  */

void FUN_104bec658(void)

{
  int iVar1;
  
  if ((bRam0000000113815d10 & 1) == 0) {
    iVar1 = 0x13815d10;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113815d08,"_djinni_interface_ConversationManager");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113815d10);
      return;
    }
  }
  return;
}



/* Entry: 104bec6ac; end: 104bec72f;  */

void FUN_104bec6ac(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 104bec730; end: 104bec733;  */

void FUN_104bec730(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e7e28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bec734; end: 104bec747;  */

void FUN_104bec734(void)

{
  func_0x000104bed8a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bec748; end: 104bec74f;  */

void FUN_104bec748(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104befb4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bec750; end: 104bec803;  */

undefined8 * FUN_104bec750(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  
  *param_1 = &PTR_FUN_1107e7df0;
  lVar1 = *param_2;
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    do {
      func_0x000104befc20();
      lVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[1] = lVar1;
  FUN_104bec8bc(param_1 + 2,*(undefined8 *)(*(long *)(*(long *)(lVar1 + 0x20) + 0x10) + 0x20));
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_104bec80c(param_1);
  return param_1;
}



/* Entry: 104bec804; end: 104bec80b;  */

void FUN_104bec804(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104bec808);
  (*pcVar1)();
}



/* Entry: 104bec80c; end: 104bec8bb;  */

void FUN_104bec80c(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x20);
  lVar2 = *(long *)(lVar7 + 0x10);
  if (lVar2 != 0) {
    uVar6 = *(ulong *)(lVar2 + 0x20);
    FUN_104bec9f0(param_1 + 0x28,uVar6,0);
    lVar2 = 0x30;
    for (uVar8 = 0; uVar6 != uVar8; uVar8 = uVar8 + 1) {
      lVar3 = *(long *)(lVar7 + 0x10) + lVar2;
      func_0x00010b9905e4();
      if (lVar3 == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(lVar3 + 0x18) == '\x01';
      }
      lVar3 = *(long *)(param_1 + 0x28);
      uVar4 = uVar8 >> 6;
      uVar5 = 1L << (uVar8 & 0x3f);
      if (bVar1) {
        uVar5 = *(ulong *)(lVar3 + uVar4 * 8) | uVar5;
      }
      else {
        uVar5 = *(ulong *)(lVar3 + uVar4 * 8) & (uVar5 ^ 0xffffffffffffffff);
      }
      *(ulong *)(lVar3 + uVar4 * 8) = uVar5;
      lVar2 = lVar2 + 0x18;
    }
  }
  return;
}



/* Entry: 104bec8bc; end: 104bec923;  */

undefined8 * FUN_104bec8bc(undefined8 *param_1,long param_2)

{
  undefined8 *puStack_30;
  undefined1 uStack_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_28 = 0;
  puStack_30 = param_1;
  if (param_2 != 0) {
    FUN_104bec924(param_1);
    FUN_104bec95c(param_1,param_2);
  }
  uStack_28 = 1;
  FUN_104bec9c4(&puStack_30);
  return param_1;
}



/* Entry: 104bec924; end: 104bec95b;  */

void FUN_104bec924(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_2 >> 0x3d != 0) {
    FUN_104bec980();
    puVar3 = (undefined8 *)param_1[1];
    puVar1 = puVar3;
    for (lVar4 = param_2 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    param_1[1] = (long)(puVar3 + param_2);
    return;
  }
  plVar2 = param_1 + 2;
  FUN_104bec98c();
  *param_1 = (long)plVar2;
  param_1[1] = (long)plVar2;
  param_1[2] = (long)(plVar2 + param_2);
  return;
}



/* Entry: 104bec95c; end: 104bec97f;  */

void FUN_104bec95c(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar1 = puVar2;
  for (lVar3 = param_2 << 3; lVar3 != 0; lVar3 = lVar3 + -8) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  *(undefined8 **)(param_1 + 8) = puVar2 + param_2;
  return;
}



/* Entry: 104bec980; end: 104bec98b;  */

void FUN_104bec980(void)

{
  func_0x000104beffec();
  FUN_104bec9ac();
  return;
}



/* Entry: 104bec98c; end: 104bec9ab;  */

void FUN_104bec98c(void)

{
  FUN_104bec9ac();
  return;
}



/* Entry: 104bec9ac; end: 104bec9c3;  */

long FUN_104bec9ac(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  FUN_104bd35f4();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x000104be7de0(param_1);
  }
  return param_1;
}



/* Entry: 104bec9c4; end: 104bec9ef;  */

long FUN_104bec9c4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x000104be7de0(param_1);
  }
  return param_1;
}



/* Entry: 104bec9f0; end: 104becb0f;  */

void FUN_104bec9f0(long *param_1,ulong param_2,undefined1 param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_70;
  undefined4 uStack_68;
  long lStack_60;
  uint uStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  undefined1 uStack_31;
  
  uVar3 = param_1[1];
  uVar1 = param_2 - uVar3;
  if (param_2 < uVar3 || uVar1 == 0) {
    param_1[1] = param_2;
  }
  else {
    uStack_31 = param_3;
    if ((ulong)(param_1[2] * 0x40) < uVar1 || param_1[2] * 0x40 - uVar1 < uVar3) {
      lStack_50 = 0;
      lStack_48 = 0;
      lStack_40 = 0;
      plVar2 = param_1;
      FUN_104becbb8(param_1);
      FUN_104becb10(&lStack_50,plVar2);
      uVar3 = param_1[1];
      lStack_48 = uVar3 + uVar1;
      lStack_70 = lStack_50;
      uStack_68 = 0;
      FUN_104becbf8(&lStack_60,*param_1,0,*param_1 + (uVar3 >> 6) * 8,uVar3 & 0x3f,&lStack_70);
      lVar4 = *param_1;
      *param_1 = lStack_50;
      lVar6 = param_1[2];
      lVar5 = param_1[1];
      param_1[2] = lStack_40;
      param_1[1] = lStack_48;
      lStack_50 = lVar4;
      lStack_48 = lVar5;
      lStack_40 = lVar6;
      func_0x000104be7d74(&lStack_50);
    }
    else {
      lStack_60 = *param_1 + (uVar3 >> 6) * 8;
      uStack_58 = (uint)uVar3 & 0x3f;
      param_1[1] = param_2;
    }
    lStack_48 = CONCAT44(lStack_48._4_4_,uStack_58);
    lStack_50 = lStack_60;
    FUN_104becc40(&lStack_60,&lStack_50,uVar1,&uStack_31);
  }
  return;
}



/* Entry: 104becb10; end: 104becbb7;  */

long * FUN_104becb10(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *extraout_x8;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined4 uStack_98;
  long lStack_58;
  uint uStack_50;
  long lStack_48;
  undefined4 uStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  if ((ulong)(param_1[2] * 0x40) < param_2) {
    if ((long)param_2 < 0) {
      func_0x000104becc5c();
      plVar2 = &lStack_38;
      func_0x000104be7d74();
      func_0x000104befcc0();
      if ((long)param_2 < 0) {
        func_0x000104becc5c();
        FUN_104bed2e8(auStack_b0);
        *extraout_x8 = uStack_a0;
        *(undefined4 *)(extraout_x8 + 1) = uStack_98;
        return plVar2;
      }
      if ((ulong)(plVar2[2] << 6) < 0x3fffffffffffffff) {
        plVar2 = (long *)(plVar2[2] * 0x80);
        plVar3 = (long *)(param_2 + 0x3f & 0xffffffffffffffc0);
        if (plVar2 < plVar3 || (long)plVar2 - (long)plVar3 == 0) {
          plVar2 = plVar3;
        }
        return plVar2;
      }
      return (long *)0x7fffffffffffffff;
    }
    lStack_38 = 0;
    lStack_30 = 0;
    lStack_28 = 0;
    FUN_104becc68(&lStack_38);
    lStack_48 = *param_1;
    uStack_40 = 0;
    lStack_58 = lStack_48 + ((ulong)param_1[1] >> 6) * 8;
    uStack_50 = (uint)param_1[1] & 0x3f;
    func_0x000104becca8(&lStack_38,&lStack_48,&lStack_58);
    lVar1 = *param_1;
    *param_1 = lStack_38;
    lVar5 = param_1[2];
    lVar4 = param_1[1];
    param_1[2] = lStack_28;
    param_1[1] = lStack_30;
    param_1 = &lStack_38;
    lStack_38 = lVar1;
    lStack_30 = lVar4;
    lStack_28 = lVar5;
    func_0x000104be7d74(param_1);
  }
  return param_1;
}



/* Entry: 104becbb8; end: 104becbf7;  */

ulong FUN_104becbb8(ulong param_1,long param_2)

{
  ulong uVar1;
  undefined8 *extraout_x8;
  ulong uVar2;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  if (param_2 < 0) {
    func_0x000104becc5c();
    FUN_104bed2e8(auStack_50);
    *extraout_x8 = uStack_40;
    *(undefined4 *)(extraout_x8 + 1) = uStack_38;
    return param_1;
  }
  if ((ulong)(*(long *)(param_1 + 0x10) << 6) < 0x3fffffffffffffff) {
    uVar1 = *(long *)(param_1 + 0x10) * 0x80;
    uVar2 = param_2 + 0x3fU & 0xffffffffffffffc0;
    if (uVar1 < uVar2 || uVar1 - uVar2 == 0) {
      uVar1 = uVar2;
    }
    return uVar1;
  }
  return 0x7fffffffffffffff;
}



/* Entry: 104becbf8; end: 104becc3f;  */

void FUN_104becbf8(undefined8 *param_1)

{
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  FUN_104bed2e8(auStack_40);
  *param_1 = uStack_30;
  *(undefined4 *)(param_1 + 1) = uStack_28;
  return;
}



/* Entry: 104becc40; end: 104becc67;  */

void FUN_104becc40(void)

{
  func_0x000104bf029c();
  FUN_104bed710();
  return;
}



/* Entry: 104becc68; end: 104becd7f;  */

void FUN_104becc68(long *param_1,undefined8 *param_2,ulong *param_3,long param_4)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lStack_90;
  uint uStack_88;
  long lStack_70;
  uint uStack_68;
  ulong uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  if (-1 < (long)param_2) {
    lVar3 = 0;
    if (param_2 != (undefined8 *)0x0) {
      lVar3 = ((long)param_2 - 1U >> 6) + 1;
    }
    plVar2 = param_1 + 2;
    func_0x000104becd60();
    *param_1 = (long)plVar2;
    param_1[1] = 0;
    param_1[2] = lVar3;
    return;
  }
  func_0x000104becc5c();
  uStack_50 = *param_2;
  uStack_48 = *(undefined4 *)(param_2 + 1);
  uStack_60 = *param_3;
  uStack_58 = (undefined4)param_3[1];
  lStack_70 = *param_1 + ((ulong)param_1[1] >> 6) * 8;
  uStack_68 = (uint)param_1[1] & 0x3f;
  func_0x000104becd98(&lStack_90,&uStack_50,&uStack_60,&lStack_70);
  uVar1 = param_1[1] + param_4;
  param_1[1] = uVar1;
  uStack_88 = (uint)uVar1 & 0x3f;
  if ((uVar1 & 0x3f) != 0) {
    lStack_90 = *param_1 + (uVar1 >> 6) * 8;
    uStack_60 = uStack_60 & 0xffffffff00000000;
    func_0x000104becdf0(&uStack_50,&lStack_90,0x40 - uStack_88,&uStack_60);
  }
  return;
}



/* Entry: 104becd80; end: 104bece0b;  */

void FUN_104becd80(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  if ((ulong)param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 << 3);
    return;
  }
  FUN_104bd35f4();
  uStack_18 = 0x104becd98;
  uStack_30 = *param_1;
  uStack_28 = *(undefined4 *)(param_1 + 1);
  uStack_40 = *param_2;
  uStack_38 = *(undefined4 *)(param_2 + 1);
  uStack_50 = *param_3;
  uStack_48 = *(undefined4 *)(param_3 + 1);
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_104bece0c(&uStack_30,&uStack_40,&uStack_50);
  return;
}



/* Entry: 104bece0c; end: 104becf23;  */

void FUN_104bece0c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 uStack_41;
  undefined8 auStack_40 [4];
  
  uStack_58 = *param_1;
  uStack_50 = *(undefined4 *)(param_1 + 1);
  uStack_68 = *param_2;
  uStack_60 = *(undefined4 *)(param_2 + 1);
  uStack_78 = *param_3;
  uStack_70 = *(undefined4 *)(param_3 + 1);
  func_0x000104bece84(auStack_40,&uStack_41,&uStack_58,&uStack_68,&uStack_78);
  func_0x000104bf0240(auStack_40[0]);
  return;
}



/* Entry: 104becf24; end: 104bed04f;  */

void FUN_104becf24(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  ulong *puVar5;
  uint extraout_w8;
  int iVar6;
  ulong extraout_x8;
  long extraout_x9;
  long extraout_x11;
  ulong uVar7;
  
  puVar5 = (ulong *)*param_2;
  uVar3 = *(uint *)(param_2 + 1);
  uVar7 = ((ulong)*(uint *)(param_3 + 1) + (*param_3 - (long)puVar5) * 8) - (ulong)uVar3;
  if ((long)uVar7 < 1) {
    puVar5 = (ulong *)*param_4;
  }
  else {
    if (uVar3 != 0) {
      uVar2 = uVar7;
      if (0x40 - uVar3 <= uVar7) {
        uVar2 = (ulong)(0x40 - uVar3);
      }
      uVar7 = uVar7 - uVar2;
      func_0x000104bf02f0();
      *(ulong *)*param_4 =
           *(ulong *)*param_4 & (extraout_x8 ^ 0xffffffffffffffff) | *puVar5 & extraout_x8;
      func_0x000104bf04c0();
      *param_4 = extraout_x11 + extraout_x9;
      *(uint *)(param_4 + 1) = extraout_w8 & 0x3f;
      puVar5 = (ulong *)(*param_2 + 8);
      *param_2 = (long)puVar5;
    }
    lVar4 = (long)uVar7 / 0x40;
    if (0x7e < uVar7 + 0x3f) {
      _memmove(*param_4,puVar5,lVar4 << 3);
    }
    puVar5 = (ulong *)(*param_4 + lVar4 * 8);
    *param_4 = (long)puVar5;
    if (0 < (long)uVar7 % 0x40) {
      puVar1 = (ulong *)(*param_2 + lVar4 * 8);
      *param_2 = (long)puVar1;
      iVar6 = (int)((long)uVar7 % 0x40);
      uVar7 = 0xffffffffffffffff >> ((ulong)(uint)-iVar6 & 0x3f);
      puVar5 = (ulong *)*param_4;
      *puVar5 = *puVar5 & (uVar7 ^ 0xffffffffffffffff) | *puVar1 & uVar7;
      *(int *)(param_4 + 1) = iVar6;
    }
  }
  *param_1 = (long)puVar5;
  *(int *)(param_1 + 1) = (int)param_4[1];
  return;
}



/* Entry: 104bed050; end: 104bed2e7;  */

void FUN_104bed050(long *param_1,long *param_2,long *param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  puVar6 = (ulong *)*param_2;
  uVar4 = *(uint *)(param_2 + 1);
  uVar3 = ((ulong)*(uint *)(param_3 + 1) + (*param_3 - (long)puVar6) * 8) - (ulong)uVar4;
  if ((long)uVar3 < 1) {
    puVar8 = (ulong *)*param_4;
    uVar4 = *(uint *)(param_4 + 1);
  }
  else {
    if (uVar4 == 0) {
      uVar5 = (ulong)*(uint *)(param_4 + 1);
    }
    else {
      uVar1 = 0x40 - uVar4;
      uVar9 = uVar3;
      if (uVar1 <= uVar3) {
        uVar9 = (ulong)uVar1;
      }
      uVar3 = uVar3 - uVar9;
      uVar7 = 0xffffffffffffffffU >> ((ulong)(uVar1 - (int)uVar9) & 0x3f) &
              -1L << ((ulong)uVar4 & 0x3f) & *puVar6;
      uVar1 = *(uint *)(param_4 + 1);
      uVar2 = 0x40 - uVar1;
      uVar10 = uVar9;
      if (uVar2 <= uVar9) {
        uVar10 = (ulong)uVar2;
      }
      puVar6 = (ulong *)*param_4;
      uVar5 = uVar7 << ((ulong)(uVar1 - uVar4) & 0x3f);
      if (uVar1 <= uVar4) {
        uVar5 = uVar7 >> ((ulong)(uVar4 - uVar1) & 0x3f);
      }
      *puVar6 = *puVar6 & (0xffffffffffffffffU >> ((ulong)(uVar2 - (int)uVar10) & 0x3f) &
                           -1L << ((ulong)uVar1 & 0x3f) ^ 0xffffffffffffffff) | uVar5;
      puVar6 = (ulong *)((long)puVar6 + (uVar10 + uVar1 >> 3 & 0x3ffffff8));
      *param_4 = (long)puVar6;
      uVar4 = uVar1 + (int)uVar10 & 0x3f;
      *(uint *)(param_4 + 1) = uVar4;
      uVar9 = uVar9 - uVar10;
      uVar5 = (ulong)uVar4;
      if (0 < (long)uVar9) {
        *puVar6 = uVar7 >> (uVar10 + *(uint *)(param_2 + 1) & 0x3f) |
                  *puVar6 & (0xffffffffffffffffU >> ((ulong)(uint)-(int)uVar9 & 0x3f) ^
                            0xffffffffffffffff);
        *(int *)(param_4 + 1) = (int)uVar9;
        uVar5 = uVar9;
      }
      puVar6 = (ulong *)(*param_2 + 8);
      *param_2 = (long)puVar6;
    }
    uVar4 = (uint)uVar5;
    uVar9 = (ulong)(0x40 - uVar4);
    uVar10 = -1L << (uVar5 & 0x3f);
    while (0x3f < (long)uVar3) {
      uVar7 = *puVar6;
      puVar6 = (ulong *)*param_4;
      *puVar6 = *puVar6 & ~uVar10 | uVar7 << (uVar5 & 0x3f);
      puVar6 = puVar6 + 1;
      uVar11 = *puVar6;
      *param_4 = (long)puVar6;
      *puVar6 = uVar11 & uVar10 | uVar7 >> (uVar9 & 0x3f);
      puVar6 = (ulong *)(*param_2 + 8);
      *param_2 = (long)puVar6;
      uVar3 = uVar3 - 0x40;
    }
    puVar8 = (ulong *)*param_4;
    if (0 < (long)uVar3) {
      uVar11 = *puVar6 & 0xffffffffffffffffU >> (-uVar3 & 0x3f);
      uVar7 = uVar3;
      if (uVar9 <= uVar3) {
        uVar7 = uVar9;
      }
      *puVar8 = *puVar8 & (0xffffffffffffffffU >> ((ulong)((0x40 - uVar4) - (int)uVar7) & 0x3f) &
                           uVar10 ^ 0xffffffffffffffff) | uVar11 << (uVar5 & 0x3f);
      puVar8 = (ulong *)((long)puVar8 + (uVar7 + (uVar5 & 0xffffffff) >> 3 & 0x3ffffff8));
      *param_4 = (long)puVar8;
      uVar4 = uVar4 + (int)uVar7 & 0x3f;
      *(uint *)(param_4 + 1) = uVar4;
      if (0 < (long)(uVar3 - uVar7)) {
        uVar5 = uVar3;
        if (uVar9 <= uVar3) {
          uVar5 = uVar9;
        }
        uVar4 = (int)uVar3 - (int)uVar5;
        *puVar8 = *puVar8 & (0xffffffffffffffffU >> (uVar5 - uVar3 & 0x3f) ^ 0xffffffffffffffff) |
                  uVar11 >> (uVar7 & 0x3f);
        *(uint *)(param_4 + 1) = uVar4;
      }
    }
  }
  *param_1 = (long)puVar8;
  *(uint *)(param_1 + 1) = uVar4;
  return;
}



/* Entry: 104bed2e8; end: 104bed313;  */

void FUN_104bed2e8(void)

{
  FUN_104bed314();
  return;
}



/* Entry: 104bed314; end: 104bed383;  */

void FUN_104bed314(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 *param_6)

{
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 uStack_41;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uStack_58 = *param_6;
  uStack_50 = *(undefined4 *)(param_6 + 1);
  FUN_104bed384(&uStack_40,&uStack_41,param_2,param_3,param_4,param_5,&uStack_58);
  *param_1 = uStack_40;
  *(undefined4 *)(param_1 + 1) = uStack_38;
  param_1[2] = uStack_30;
  *(undefined4 *)(param_1 + 3) = uStack_28;
  return;
}



/* Entry: 104bed384; end: 104bed3fb;  */

void FUN_104bed384(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  if (*(int *)(param_7 + 8) == param_4) {
    func_0x000104bf0368(param_3);
    FUN_104bed3fc();
  }
  else {
    func_0x000104bf0368(param_3);
    FUN_104bed504();
  }
  *param_1 = param_5;
  param_1[1] = param_6;
  param_1[2] = uStack_40;
  *(undefined4 *)(param_1 + 3) = uStack_38;
  return;
}



/* Entry: 104bed3fc; end: 104bed503;  */

void FUN_104bed3fc(long *param_1,ulong *param_2,uint param_3,long param_4,uint param_5,long *param_6
                  )

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  uint extraout_w8;
  ulong extraout_x8;
  int iVar4;
  long extraout_x9;
  ulong *puVar5;
  ulong uVar6;
  
  uVar6 = ((ulong)param_5 - (ulong)param_3) + (param_4 - (long)param_2) * 8;
  if ((long)uVar6 < 1) {
    puVar3 = (ulong *)*param_6;
  }
  else {
    puVar3 = (ulong *)*param_6;
    puVar5 = param_2;
    if (param_3 != 0) {
      uVar1 = uVar6;
      if (0x40 - param_3 <= uVar6) {
        uVar1 = (ulong)(0x40 - param_3);
      }
      uVar6 = uVar6 - uVar1;
      func_0x000104bf02f0(param_3);
      puVar5 = param_2 + 1;
      *puVar3 = *puVar3 & (extraout_x8 ^ 0xffffffffffffffff) | *param_2 & extraout_x8;
      func_0x000104bf04c0();
      puVar3 = (ulong *)((long)puVar3 + extraout_x9);
      *param_6 = (long)puVar3;
      *(uint *)(param_6 + 1) = extraout_w8 & 0x3f;
    }
    lVar2 = (long)uVar6 / 0x40;
    if (0x7e < uVar6 + 0x3f) {
      _memmove(puVar3,puVar5,lVar2 * 8);
      puVar3 = (ulong *)*param_6;
    }
    puVar3 = puVar3 + lVar2;
    *param_6 = (long)puVar3;
    if (0 < (long)uVar6 % 0x40) {
      iVar4 = (int)((long)uVar6 % 0x40);
      uVar6 = 0xffffffffffffffff >> ((ulong)(uint)-iVar4 & 0x3f);
      *puVar3 = *puVar3 & (uVar6 ^ 0xffffffffffffffff) | puVar5[lVar2] & uVar6;
      *(int *)(param_6 + 1) = iVar4;
    }
  }
  *param_1 = (long)puVar3;
  *(int *)(param_1 + 1) = (int)param_6[1];
  return;
}



/* Entry: 104bed504; end: 104bed70f;  */

void FUN_104bed504(long *param_1,ulong *param_2,uint param_3,long param_4,uint param_5,long *param_6
                  )

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar2 = ((ulong)param_5 - (ulong)param_3) + (param_4 - (long)param_2) * 8;
  if ((long)uVar2 < 1) {
    puVar7 = (ulong *)*param_6;
    uVar3 = *(uint *)(param_6 + 1);
  }
  else {
    if (param_3 == 0) {
      uVar4 = (ulong)*(uint *)(param_6 + 1);
    }
    else {
      uVar3 = 0x40 - param_3;
      uVar8 = uVar2;
      if (uVar3 <= uVar2) {
        uVar8 = (ulong)uVar3;
      }
      uVar2 = uVar2 - uVar8;
      uVar5 = 0xffffffffffffffffU >> ((ulong)(uVar3 - (int)uVar8) & 0x3f) &
              -1L << ((ulong)param_3 & 0x3f) & *param_2;
      uVar3 = *(uint *)(param_6 + 1);
      uVar1 = 0x40 - uVar3;
      uVar6 = uVar8;
      if (uVar1 <= uVar8) {
        uVar6 = (ulong)uVar1;
      }
      puVar7 = (ulong *)*param_6;
      uVar4 = uVar5 << ((ulong)(uVar3 - param_3) & 0x3f);
      if (uVar3 < param_3 || uVar3 - param_3 == 0) {
        uVar4 = uVar5 >> ((ulong)(param_3 - uVar3) & 0x3f);
      }
      *puVar7 = *puVar7 & (0xffffffffffffffffU >> ((ulong)(uVar1 - (int)uVar6) & 0x3f) &
                           -1L << ((ulong)uVar3 & 0x3f) ^ 0xffffffffffffffff) | uVar4;
      puVar7 = (ulong *)((long)puVar7 + (uVar6 + uVar3 >> 3 & 0x3ffffff8));
      *param_6 = (long)puVar7;
      uVar3 = uVar3 + (int)uVar6 & 0x3f;
      *(uint *)(param_6 + 1) = uVar3;
      uVar8 = uVar8 - uVar6;
      uVar4 = (ulong)uVar3;
      if (0 < (long)uVar8) {
        *puVar7 = *puVar7 & (0xffffffffffffffffU >> ((ulong)(uint)-(int)uVar8 & 0x3f) ^
                            0xffffffffffffffff) | uVar5 >> (uVar6 + param_3 & 0x3f);
        *(int *)(param_6 + 1) = (int)uVar8;
        uVar4 = uVar8;
      }
      param_2 = param_2 + 1;
    }
    uVar3 = (uint)uVar4;
    uVar8 = (ulong)(0x40 - uVar3);
    uVar6 = -1L << (uVar4 & 0x3f);
    while (0x3f < (long)uVar2) {
      uVar5 = *param_2;
      puVar7 = (ulong *)*param_6;
      *puVar7 = *puVar7 & ~uVar6 | uVar5 << (uVar4 & 0x3f);
      puVar7 = puVar7 + 1;
      uVar9 = *puVar7;
      *param_6 = (long)puVar7;
      *puVar7 = uVar9 & uVar6 | uVar5 >> (uVar8 & 0x3f);
      param_2 = param_2 + 1;
      uVar2 = uVar2 - 0x40;
    }
    puVar7 = (ulong *)*param_6;
    if (0 < (long)uVar2) {
      uVar9 = *param_2 & 0xffffffffffffffffU >> (-uVar2 & 0x3f);
      uVar5 = uVar2;
      if (uVar8 <= uVar2) {
        uVar5 = uVar8;
      }
      *puVar7 = *puVar7 & (0xffffffffffffffffU >> ((ulong)((0x40 - uVar3) - (int)uVar5) & 0x3f) &
                           uVar6 ^ 0xffffffffffffffff) | uVar9 << (uVar4 & 0x3f);
      puVar7 = (ulong *)((long)puVar7 + (uVar5 + (uVar4 & 0xffffffff) >> 3 & 0x3ffffff8));
      *param_6 = (long)puVar7;
      uVar3 = uVar3 + (int)uVar5 & 0x3f;
      *(uint *)(param_6 + 1) = uVar3;
      if (0 < (long)(uVar2 - uVar5)) {
        uVar4 = uVar2;
        if (uVar8 <= uVar2) {
          uVar4 = uVar8;
        }
        uVar3 = (int)uVar2 - (int)uVar4;
        *puVar7 = *puVar7 & (0xffffffffffffffffU >> (uVar4 - uVar2 & 0x3f) ^ 0xffffffffffffffff) |
                  uVar9 >> (uVar5 & 0x3f);
        *(uint *)(param_6 + 1) = uVar3;
      }
    }
  }
  *param_1 = (long)puVar7;
  *(uint *)(param_1 + 1) = uVar3;
  return;
}



/* Entry: 104bed710; end: 104bed767;  */

void FUN_104bed710(undefined8 param_1,long param_2,char *param_3)

{
  undefined8 extraout_x8;
  
  func_0x0001006567d0();
  if (param_2 != 0) {
    if (*param_3 == '\x01') {
      func_0x000104bf01ec();
      FUN_104bed768();
    }
    else {
      func_0x000104bf01ec();
      func_0x000104bed7dc();
    }
  }
  func_0x000104bed84c(extraout_x8);
  return;
}



/* Entry: 104bed768; end: 104bed8ab;  */

void FUN_104bed768(undefined8 *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *extraout_x8;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x10;
  long extraout_x11;
  ulong uVar4;
  
  puVar2 = (ulong *)*param_1;
  if (*(int *)(param_1 + 1) != 0) {
    func_0x000104bf0408();
    puVar2 = extraout_x8 + 1;
    *extraout_x8 = extraout_x10 | extraout_x9;
    param_2 = param_2 - extraout_x11;
    *param_1 = puVar2;
  }
  uVar3 = param_2 >> 6;
  puVar1 = puVar2;
  for (uVar4 = uVar3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar1 = 0xffffffffffffffff;
    puVar1 = puVar1 + 1;
  }
  if ((param_2 & 0x3f) != 0) {
    *param_1 = puVar2 + uVar3;
    puVar2[uVar3] = puVar2[uVar3] | 0xffffffffffffffffU >> (-(param_2 & 0x3f) & 0x3f);
  }
  return;
}



/* Entry: 104bed8ac; end: 104bed973;  */

void FUN_104bed8ac(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (param_2 <= uVar7) {
    if (param_2 < uVar7) {
      uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
      if (param_2 <= uVar4) {
        param_2 = uVar4;
      }
      if (param_2 < uVar7) goto LAB_104bed8f4;
    }
    return;
  }
LAB_104bed8f4:
  if (param_2 == 0) {
    FUN_104beda70(param_1);
    param_1[1] = 0;
  }
  else {
    plVar2 = param_1 + 1;
    FUN_104beda88(plVar2);
    FUN_104beda70(param_1,plVar2);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar7 = 0; param_2 != uVar7; uVar7 = uVar7 + 1) {
      *(undefined8 *)(lVar1 + uVar7 * 8) = 0;
    }
    plVar2 = (long *)param_1[2];
    if (plVar2 != (long *)0x0) {
      uVar5 = plVar2[1];
      uVar4 = param_2 - 1;
      uVar7 = 0;
      if (param_2 != 0) {
        uVar7 = uVar5 / param_2;
      }
      uVar6 = uVar5;
      if (param_2 <= uVar5) {
        uVar6 = uVar5 - uVar7 * param_2;
      }
      if ((param_2 & uVar4) == 0) {
        uVar6 = uVar5 & uVar4;
      }
      *(long **)(lVar1 + uVar6 * 8) = param_1 + 2;
      while (plVar3 = plVar2, plVar2 = (long *)*plVar3, plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        if ((param_2 & uVar4) == 0) {
          uVar7 = uVar7 & uVar4;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        if (uVar7 != uVar6) {
          if (*(long *)(lVar1 + uVar7 * 8) == 0) {
            *(long **)(lVar1 + uVar7 * 8) = plVar3;
            uVar6 = uVar7;
          }
          else {
            *plVar3 = *plVar2;
            *plVar2 = **(undefined8 **)(lVar1 + uVar7 * 8);
            **(long **)(lVar1 + uVar7 * 8) = (long)plVar2;
            plVar2 = plVar3;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 104bed974; end: 104beda6f;  */

void FUN_104bed974(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_104beda70(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_104beda88(plVar3);
    FUN_104beda70(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
            **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 104beda70; end: 104beda87;  */

void FUN_104beda70(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 104beda88; end: 104beda9f;  */

void FUN_104beda88(undefined8 param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long lVar4;
  uint uVar5;
  long extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar6;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 uVar7;
  long extraout_x9;
  long lVar8;
  long *plVar9;
  long *extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  ulong uVar10;
  ulong extraout_x10;
  long extraout_x10_00;
  ulong extraout_x10_01;
  int extraout_w11;
  int extraout_w11_00;
  long *unaff_x20;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x26;
  long alStack_a0 [2];
  uint uStack_8c;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  if (param_3 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_3 << 3);
    return;
  }
  FUN_104bd35f4();
  uVar5 = (uint)*(byte *)(param_3 + 8);
  uVar2 = (int)(uVar5 - 1) < 0;
  uVar3 = uVar5 == 1;
  if (uVar5 < 2) {
    *param_2 = 0;
    param_2[1] = 0;
    return;
  }
  func_0x000104bf01b0();
  if (lStack_78 == 0) {
    lVar11 = 0;
    lVar4 = lStack_78;
  }
  else {
    lVar11 = lStack_78;
    func_0x000104befee8();
    func_0x000104befdf4();
    lVar4 = lVar11;
  }
  func_0x000104bf0010();
  if (lVar11 != 0) {
    func_0x000104bf025c();
    if (extraout_x8 == 0) {
      return;
    }
    do {
      func_0x000104befac8();
    } while (extraout_w10 != 0);
    return;
  }
  func_0x000104bf038c();
  uStack_88 = 0;
  if (*(long *)(lStack_80 + 0x20) != 0) {
    do {
      func_0x000104befbc0();
      uStack_88 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  func_0x000104befb5c();
  uStack_8c = *(uint *)(lStack_80 + 0x18);
  func_0x000104bf0114();
  lVar11 = 0;
  if (lVar4 != 0) {
    func_0x000104befdd8(&lStack_78);
    lVar11 = lStack_70;
    if (lStack_78 != 0) {
      lVar4 = lStack_78;
      func_0x000104befedc();
      func_0x000104befdd0();
      lVar8 = 0;
      if ((lVar4 != 0) && (lVar11 != 0)) {
        do {
          func_0x000104befac8();
          lVar8 = lVar11;
        } while (extraout_w10_00 != 0);
      }
      *param_2 = lVar4;
      param_2[1] = lVar8;
      alStack_a0[0] = 0;
      alStack_a0[1] = 0;
      FUN_104bedde0(alStack_a0);
      func_0x000104bf0220();
      goto LAB_104bedd94;
    }
    func_0x000104bf0220();
    lVar11 = lStack_78;
  }
  func_0x000104befe7c();
  lVar4 = lVar11;
  func_0x000104beff14(&PTR_FUN_1107e7ec0);
  if (lStack_80 == 0) {
    lVar8 = 0;
LAB_104bedc0c:
    *(undefined8 *)(lVar4 + 0x18) = &PTR_DAT_1107e7f10;
    alStack_a0[0] = lVar8;
  }
  else {
    lVar8 = lStack_80;
    if (*(long *)(lStack_80 + 0x10) == 0) goto LAB_104bedc0c;
    do {
      func_0x000104befc20();
    } while (extraout_w11_00 != 0);
    func_0x000104bf048c();
    if (extraout_x9 != 0) {
      do {
        func_0x000104befac8();
      } while (extraout_w10_01 != 0);
    }
  }
  lStack_78 = lStack_80;
  func_0x000104bf03c4();
  func_0x000104bf0010();
  func_0x000104bf0050(&UNK_110873e58);
  uVar5 = uStack_8c;
  uVar14 = (ulong)uStack_8c;
  uVar13 = unaff_x20[1];
  if (uVar13 != 0) {
    func_0x000104bf0480();
    uVar12 = (uint)uVar13;
    if ((bool)uVar3) {
      unaff_x26 = (ulong)(uVar12 - 1 & uVar5);
    }
    else {
      uVar2 = (long)(uVar13 - uVar14) < 0;
      unaff_x26 = uVar14;
      if (uVar13 <= uVar14) {
        uVar1 = 0;
        if (uVar12 != 0) {
          uVar1 = uVar5 / uVar12;
        }
        unaff_x26 = (ulong)(uVar5 - uVar1 * uVar12);
      }
    }
    plVar9 = *(long **)(*unaff_x20 + unaff_x26 * 8);
    uVar6 = extraout_x8_01;
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_104bedcc0;
          uVar10 = plVar9[1];
          if (uVar10 != uVar14) break;
          uVar2 = (int)(*(uint *)(plVar9 + 2) - uVar5) < 0;
          if (*(uint *)(plVar9 + 2) == uVar5) goto LAB_104bedd84;
        }
        if ((uVar13 & uVar6) == 0) {
          uVar10 = uVar10 & uVar6;
        }
        else if (uVar13 <= uVar10) {
          func_0x000104bf0474();
          uVar6 = extraout_x8_02;
          plVar9 = extraout_x9_00;
          uVar10 = extraout_x10;
        }
        uVar2 = (long)(uVar10 - unaff_x26) < 0;
      } while (uVar10 == unaff_x26);
    }
  }
LAB_104bedcc0:
  func_0x000104befe60();
  func_0x000104bf0068();
  do {
    func_0x000104befac8();
  } while (extraout_w10_02 != 0);
  func_0x000104beff08(unaff_x20[3]);
  if ((uVar13 == 0) || (func_0x000104befefc(param_1,(int)unaff_x20[4],(float)uVar13), (bool)uVar2))
  {
    func_0x000104bf0284();
    uVar2 = uVar13 == 3;
    func_0x000104befa44();
    func_0x000104bf0174();
    uVar13 = *(ulong *)(lVar11 + 0x28);
    func_0x000104bf0480();
    if ((bool)uVar2) {
      unaff_x26 = (ulong)((int)uVar13 - 1U & uVar5);
    }
    else {
      unaff_x26 = uVar14;
      if (uVar13 <= uVar14) {
        uVar6 = 0;
        if (uVar13 != 0) {
          uVar6 = uVar14 / uVar13;
        }
        unaff_x26 = uVar14 - uVar6 * uVar13;
      }
    }
  }
  if (*(long *)(*unaff_x20 + unaff_x26 * 8) == 0) {
    func_0x000104befc00(lStack_78);
    func_0x000104bf04d4();
    if (extraout_x10_00 != 0) {
      uVar14 = *(ulong *)(extraout_x10_00 + 8);
      uVar7 = extraout_x8_03;
      lVar8 = extraout_x9_01;
      if ((uVar13 & uVar13 - 1) == 0) {
        uVar14 = uVar14 & uVar13 - 1;
      }
      else if (uVar13 <= uVar14) {
        func_0x000104bf0474();
        uVar7 = extraout_x8_04;
        lVar8 = extraout_x9_02;
        uVar14 = extraout_x10_01;
      }
      *(undefined8 *)(lVar8 + uVar14 * 8) = uVar7;
    }
  }
  else {
    func_0x000104befc10();
  }
  func_0x000104beff9c();
LAB_104bedd84:
  *param_2 = lVar4 + 0x18;
  param_2[1] = lVar11;
  lStack_78 = 0;
  lStack_70 = 0;
  FUN_104bedde0(&lStack_78);
LAB_104bedd94:
  func_0x000104befb50();
  FUN_104bdbf78(&uStack_88);
  FUN_104be7e54(&lStack_80);
  return;
}



/* Entry: 104bedaa0; end: 104bedddf;  */

void FUN_104bedaa0(undefined8 param_1,long *param_2,long param_3)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long lVar4;
  uint uVar5;
  long extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar6;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 uVar7;
  long extraout_x9;
  long lVar8;
  long *plVar9;
  long *extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  ulong uVar10;
  ulong extraout_x10;
  long extraout_x10_00;
  ulong extraout_x10_01;
  int extraout_w11;
  int extraout_w11_00;
  long *unaff_x20;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x26;
  long alStack_90 [2];
  uint uStack_7c;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  
  uVar5 = (uint)*(byte *)(param_3 + 8);
  uVar2 = (int)(uVar5 - 1) < 0;
  uVar3 = uVar5 == 1;
  if (uVar5 < 2) {
    *param_2 = 0;
    param_2[1] = 0;
    return;
  }
  func_0x000104bf01b0();
  if (lStack_68 == 0) {
    lVar11 = 0;
    lVar4 = lStack_68;
  }
  else {
    lVar11 = lStack_68;
    func_0x000104befee8();
    func_0x000104befdf4();
    lVar4 = lVar11;
  }
  func_0x000104bf0010();
  if (lVar11 != 0) {
    func_0x000104bf025c();
    if (extraout_x8 == 0) {
      return;
    }
    do {
      func_0x000104befac8();
    } while (extraout_w10 != 0);
    return;
  }
  func_0x000104bf038c();
  uStack_78 = 0;
  if (*(long *)(lStack_70 + 0x20) != 0) {
    do {
      func_0x000104befbc0();
      uStack_78 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  func_0x000104befb5c();
  uStack_7c = *(uint *)(lStack_70 + 0x18);
  func_0x000104bf0114();
  lVar11 = 0;
  if (lVar4 != 0) {
    func_0x000104befdd8(&lStack_68);
    lVar11 = lStack_60;
    if (lStack_68 != 0) {
      lVar4 = lStack_68;
      func_0x000104befedc();
      func_0x000104befdd0();
      lVar8 = 0;
      if ((lVar4 != 0) && (lVar11 != 0)) {
        do {
          func_0x000104befac8();
          lVar8 = lVar11;
        } while (extraout_w10_00 != 0);
      }
      *param_2 = lVar4;
      param_2[1] = lVar8;
      alStack_90[0] = 0;
      alStack_90[1] = 0;
      FUN_104bedde0(alStack_90);
      func_0x000104bf0220();
      goto LAB_104bedd94;
    }
    func_0x000104bf0220();
    lVar11 = lStack_68;
  }
  func_0x000104befe7c();
  lVar4 = lVar11;
  func_0x000104beff14(&PTR_FUN_1107e7ec0);
  if (lStack_70 == 0) {
    lVar8 = 0;
LAB_104bedc0c:
    *(undefined8 *)(lVar4 + 0x18) = &PTR_DAT_1107e7f10;
    alStack_90[0] = lVar8;
  }
  else {
    lVar8 = lStack_70;
    if (*(long *)(lStack_70 + 0x10) == 0) goto LAB_104bedc0c;
    do {
      func_0x000104befc20();
    } while (extraout_w11_00 != 0);
    func_0x000104bf048c();
    if (extraout_x9 != 0) {
      do {
        func_0x000104befac8();
      } while (extraout_w10_01 != 0);
    }
  }
  lStack_68 = lStack_70;
  func_0x000104bf03c4();
  func_0x000104bf0010();
  func_0x000104bf0050(&UNK_110873e58);
  uVar5 = uStack_7c;
  uVar14 = (ulong)uStack_7c;
  uVar13 = unaff_x20[1];
  if (uVar13 != 0) {
    func_0x000104bf0480();
    uVar12 = (uint)uVar13;
    if ((bool)uVar3) {
      unaff_x26 = (ulong)(uVar12 - 1 & uVar5);
    }
    else {
      uVar2 = (long)(uVar13 - uVar14) < 0;
      unaff_x26 = uVar14;
      if (uVar13 <= uVar14) {
        uVar1 = 0;
        if (uVar12 != 0) {
          uVar1 = uVar5 / uVar12;
        }
        unaff_x26 = (ulong)(uVar5 - uVar1 * uVar12);
      }
    }
    plVar9 = *(long **)(*unaff_x20 + unaff_x26 * 8);
    uVar6 = extraout_x8_01;
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_104bedcc0;
          uVar10 = plVar9[1];
          if (uVar10 != uVar14) break;
          uVar2 = (int)(*(uint *)(plVar9 + 2) - uVar5) < 0;
          if (*(uint *)(plVar9 + 2) == uVar5) goto LAB_104bedd84;
        }
        if ((uVar13 & uVar6) == 0) {
          uVar10 = uVar10 & uVar6;
        }
        else if (uVar13 <= uVar10) {
          func_0x000104bf0474();
          uVar6 = extraout_x8_02;
          plVar9 = extraout_x9_00;
          uVar10 = extraout_x10;
        }
        uVar2 = (long)(uVar10 - unaff_x26) < 0;
      } while (uVar10 == unaff_x26);
    }
  }
LAB_104bedcc0:
  func_0x000104befe60();
  func_0x000104bf0068();
  do {
    func_0x000104befac8();
  } while (extraout_w10_02 != 0);
  func_0x000104beff08(unaff_x20[3]);
  if ((uVar13 == 0) || (func_0x000104befefc(param_1,(int)unaff_x20[4],(float)uVar13), (bool)uVar2))
  {
    func_0x000104bf0284();
    uVar2 = uVar13 == 3;
    func_0x000104befa44();
    func_0x000104bf0174();
    uVar13 = *(ulong *)(lVar11 + 0x28);
    func_0x000104bf0480();
    if ((bool)uVar2) {
      unaff_x26 = (ulong)((int)uVar13 - 1U & uVar5);
    }
    else {
      unaff_x26 = uVar14;
      if (uVar13 <= uVar14) {
        uVar6 = 0;
        if (uVar13 != 0) {
          uVar6 = uVar14 / uVar13;
        }
        unaff_x26 = uVar14 - uVar6 * uVar13;
      }
    }
  }
  if (*(long *)(*unaff_x20 + unaff_x26 * 8) == 0) {
    func_0x000104befc00(lStack_68);
    func_0x000104bf04d4();
    if (extraout_x10_00 != 0) {
      uVar14 = *(ulong *)(extraout_x10_00 + 8);
      uVar7 = extraout_x8_03;
      lVar8 = extraout_x9_01;
      if ((uVar13 & uVar13 - 1) == 0) {
        uVar14 = uVar14 & uVar13 - 1;
      }
      else if (uVar13 <= uVar14) {
        func_0x000104bf0474();
        uVar7 = extraout_x8_04;
        lVar8 = extraout_x9_02;
        uVar14 = extraout_x10_01;
      }
      *(undefined8 *)(lVar8 + uVar14 * 8) = uVar7;
    }
  }
  else {
    func_0x000104befc10();
  }
  func_0x000104beff9c();
LAB_104bedd84:
  *param_2 = lVar4 + 0x18;
  param_2[1] = lVar11;
  lStack_68 = 0;
  lStack_60 = 0;
  FUN_104bedde0(&lStack_68);
LAB_104bedd94:
  func_0x000104befb50();
  FUN_104bdbf78(&uStack_78);
  FUN_104be7e54(&lStack_70);
  return;
}



/* Entry: 104bedde0; end: 104bede03;  */

void FUN_104bedde0(long param_1)

{
  func_0x0001006764f0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104bede04; end: 104bede07;  */

void FUN_104bede04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e7ec0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bede08; end: 104bede1b;  */

void FUN_104bede08(void)

{
  func_0x000104bede2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bede1c; end: 104bede37;  */

void FUN_104bede1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104befb4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bede38; end: 104bedecf;  */

void FUN_104bede38(long *param_1)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000104bf02c0();
  if (((bool)in_ZR) && (lVar2 = *param_1, lVar2 != 0)) {
    func_0x00010065cf40();
    lVar1 = lVar2 + 0x18;
    for (uVar3 = 0; uVar3 < *(ulong *)(lVar2 + 0x10); uVar3 = uVar3 + 1) {
      func_0x00010529dcb8(auStack_48,lVar1);
      func_0x00010065cfc8();
      func_0x00010069c690();
      func_0x000100100fec(auStack_48);
      lVar1 = lVar1 + 0x10;
    }
  }
  return;
}



/* Entry: 104beded0; end: 104bedeff;  */

void FUN_104beded0(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  puVar1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined8 **)(param_1 + 8) = puVar1 + 3;
  return;
}



/* Entry: 104bedf00; end: 104bedf23;  */

void FUN_104bedf00(long param_1)

{
  func_0x0001006764f0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104bedf24; end: 104bedf27;  */

void FUN_104bedf24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e7f60;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bedf28; end: 104bedf3b;  */

void FUN_104bedf28(void)

{
  func_0x000104bedf4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bedf3c; end: 104bedf57;  */

void FUN_104bedf3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104befb4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bedf58; end: 104bedfb7;  */

undefined1  [16] FUN_104bedf58(long param_1)

{
  undefined1 auVar1 [16];
  
  if (*(byte *)(param_1 + 8) < 2) {
    return ZEXT816(0);
  }
  func_0x00010b9a9588();
  auVar1._8_8_ = 1;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 104bedfb8; end: 104bedfdb;  */

void FUN_104bedfb8(long param_1)

{
  func_0x0001006764f0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104bedfdc; end: 104bedfdf;  */

void FUN_104bedfdc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e7ff8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bedfe0; end: 104bedff3;  */

void FUN_104bedfe0(void)

{
  func_0x000104bee004();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bedff4; end: 104bee00f;  */

void FUN_104bedff4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104befb4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bee010; end: 104bee34f;  */

void FUN_104bee010(undefined8 param_1,long *param_2,long param_3)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long lVar4;
  uint uVar5;
  long extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar6;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 uVar7;
  long extraout_x9;
  long lVar8;
  long *plVar9;
  long *extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  ulong uVar10;
  ulong extraout_x10;
  long extraout_x10_00;
  ulong extraout_x10_01;
  int extraout_w11;
  int extraout_w11_00;
  long *unaff_x20;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x26;
  long alStack_90 [2];
  uint uStack_7c;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  
  uVar5 = (uint)*(byte *)(param_3 + 8);
  uVar2 = (int)(uVar5 - 1) < 0;
  uVar3 = uVar5 == 1;
  if (uVar5 < 2) {
    *param_2 = 0;
    param_2[1] = 0;
    return;
  }
  func_0x000104bf01b0();
  if (lStack_68 == 0) {
    lVar11 = 0;
    lVar4 = lStack_68;
  }
  else {
    lVar11 = lStack_68;
    func_0x000104befee8();
    func_0x000104befdf4();
    lVar4 = lVar11;
  }
  func_0x000104bf0010();
  if (lVar11 != 0) {
    func_0x000104bf025c();
    if (extraout_x8 == 0) {
      return;
    }
    do {
      func_0x000104befac8();
    } while (extraout_w10 != 0);
    return;
  }
  func_0x000104bf038c();
  uStack_78 = 0;
  if (*(long *)(lStack_70 + 0x20) != 0) {
    do {
      func_0x000104befbc0();
      uStack_78 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  func_0x000104befb5c();
  uStack_7c = *(uint *)(lStack_70 + 0x18);
  func_0x000104bf0114();
  lVar11 = 0;
  if (lVar4 != 0) {
    func_0x000104befdd8(&lStack_68);
    lVar11 = lStack_60;
    if (lStack_68 != 0) {
      lVar4 = lStack_68;
      func_0x000104befedc();
      func_0x000104befdd0();
      lVar8 = 0;
      if ((lVar4 != 0) && (lVar11 != 0)) {
        do {
          func_0x000104befac8();
          lVar8 = lVar11;
        } while (extraout_w10_00 != 0);
      }
      *param_2 = lVar4;
      param_2[1] = lVar8;
      alStack_90[0] = 0;
      alStack_90[1] = 0;
      FUN_104bee350(alStack_90);
      func_0x000104bf0220();
      goto LAB_104bee304;
    }
    func_0x000104bf0220();
    lVar11 = lStack_68;
  }
  func_0x000104befe7c();
  lVar4 = lVar11;
  func_0x000104beff14(&PTR_FUN_1107e8090);
  if (lStack_70 == 0) {
    lVar8 = 0;
LAB_104bee17c:
    *(undefined8 *)(lVar4 + 0x18) = &PTR_DAT_1107e80e0;
    alStack_90[0] = lVar8;
  }
  else {
    lVar8 = lStack_70;
    if (*(long *)(lStack_70 + 0x10) == 0) goto LAB_104bee17c;
    do {
      func_0x000104befc20();
    } while (extraout_w11_00 != 0);
    func_0x000104bf048c();
    if (extraout_x9 != 0) {
      do {
        func_0x000104befac8();
      } while (extraout_w10_01 != 0);
    }
  }
  lStack_68 = lStack_70;
  func_0x000104bf03c4();
  func_0x000104bf0010();
  func_0x000104bf0050(&UNK_1108741e0);
  uVar5 = uStack_7c;
  uVar14 = (ulong)uStack_7c;
  uVar13 = unaff_x20[1];
  if (uVar13 != 0) {
    func_0x000104bf0480();
    uVar12 = (uint)uVar13;
    if ((bool)uVar3) {
      unaff_x26 = (ulong)(uVar12 - 1 & uVar5);
    }
    else {
      uVar2 = (long)(uVar13 - uVar14) < 0;
      unaff_x26 = uVar14;
      if (uVar13 <= uVar14) {
        uVar1 = 0;
        if (uVar12 != 0) {
          uVar1 = uVar5 / uVar12;
        }
        unaff_x26 = (ulong)(uVar5 - uVar1 * uVar12);
      }
    }
    plVar9 = *(long **)(*unaff_x20 + unaff_x26 * 8);
    uVar6 = extraout_x8_01;
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_104bee230;
          uVar10 = plVar9[1];
          if (uVar10 != uVar14) break;
          uVar2 = (int)(*(uint *)(plVar9 + 2) - uVar5) < 0;
          if (*(uint *)(plVar9 + 2) == uVar5) goto LAB_104bee2f4;
        }
        if ((uVar13 & uVar6) == 0) {
          uVar10 = uVar10 & uVar6;
        }
        else if (uVar13 <= uVar10) {
          func_0x000104bf0474();
          uVar6 = extraout_x8_02;
          plVar9 = extraout_x9_00;
          uVar10 = extraout_x10;
        }
        uVar2 = (long)(uVar10 - unaff_x26) < 0;
      } while (uVar10 == unaff_x26);
    }
  }
LAB_104bee230:
  func_0x000104befe60();
  func_0x000104bf0068();
  do {
    func_0x000104befac8();
  } while (extraout_w10_02 != 0);
  func_0x000104beff08(unaff_x20[3]);
  if ((uVar13 == 0) || (func_0x000104befefc(param_1,(int)unaff_x20[4],(float)uVar13), (bool)uVar2))
  {
    func_0x000104bf0284();
    uVar2 = uVar13 == 3;
    func_0x000104befa44();
    func_0x000104bf0174();
    uVar13 = *(ulong *)(lVar11 + 0x28);
    func_0x000104bf0480();
    if ((bool)uVar2) {
      unaff_x26 = (ulong)((int)uVar13 - 1U & uVar5);
    }
    else {
      unaff_x26 = uVar14;
      if (uVar13 <= uVar14) {
        uVar6 = 0;
        if (uVar13 != 0) {
          uVar6 = uVar14 / uVar13;
        }
        unaff_x26 = uVar14 - uVar6 * uVar13;
      }
    }
  }
  if (*(long *)(*unaff_x20 + unaff_x26 * 8) == 0) {
    func_0x000104befc00(lStack_68);
    func_0x000104bf04d4();
    if (extraout_x10_00 != 0) {
      uVar14 = *(ulong *)(extraout_x10_00 + 8);
      uVar7 = extraout_x8_03;
      lVar8 = extraout_x9_01;
      if ((uVar13 & uVar13 - 1) == 0) {
        uVar14 = uVar14 & uVar13 - 1;
      }
      else if (uVar13 <= uVar14) {
        func_0x000104bf0474();
        uVar7 = extraout_x8_04;
        lVar8 = extraout_x9_02;
        uVar14 = extraout_x10_01;
      }
      *(undefined8 *)(lVar8 + uVar14 * 8) = uVar7;
    }
  }
  else {
    func_0x000104befc10();
  }
  func_0x000104beff9c();
LAB_104bee2f4:
  *param_2 = lVar4 + 0x18;
  param_2[1] = lVar11;
  lStack_68 = 0;
  lStack_60 = 0;
  FUN_104bee350(&lStack_68);
LAB_104bee304:
  func_0x000104befb50();
  FUN_104bdbf78(&uStack_78);
  FUN_104be7e54(&lStack_70);
  return;
}



/* Entry: 104bee350; end: 104bee373;  */

void FUN_104bee350(long param_1)

{
  func_0x0001006764f0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104bee374; end: 104bee377;  */

void FUN_104bee374(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e8090;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bee378; end: 104bee38b;  */

void FUN_104bee378(void)

{
  func_0x000104bee39c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bee38c; end: 104bee3a7;  */

void FUN_104bee38c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104befb4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bee3a8; end: 104bee40f;  */

long FUN_104bee3a8(long param_1)

{
  long lStack_28;
  
  func_0x0001002a2294(param_1 + 0x368);
  FUN_104bee410(param_1 + 0x2f8);
  func_0x00010069ab0c(param_1 + 0x2c8);
  func_0x00010069b2d8(param_1 + 0x2a8);
  func_0x00010069b1f4(param_1 + 0x268);
  func_0x0001002a2294(param_1 + 0x240);
  func_0x000104bee630(param_1 + 0x210);
  func_0x000104be1594(param_1 + 0x1f0);
  func_0x000104bee6b8(param_1 + 0x20);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 104bee410; end: 104bee42f;  */

void FUN_104bee410(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    FUN_104bee430();
  }
  return;
}



/* Entry: 104bee430; end: 104bee457;  */

void FUN_104bee430(long param_1)

{
  FUN_104bee458(param_1 + 0x20);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_104bee5a8();
  }
  return;
}



/* Entry: 104bee458; end: 104bee477;  */

void FUN_104bee458(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_104bee478();
  }
  return;
}



/* Entry: 104bee478; end: 104bee4c7;  */

void FUN_104bee478(void)

{
  func_0x0001006573d4();
  func_0x000104bee49c();
  return;
}



/* Entry: 104bee4c8; end: 104bee4cf;  */

void FUN_104bee4c8(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x000104befd58(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -3;
    func_0x000104bee500();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104bee4d0; end: 104bee54f;  */

void FUN_104bee4d0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000104befd58();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x18;
    func_0x000104bee500();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104bee550; end: 104bee557;  */

void FUN_104bee550(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x000104befd58(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -6;
    FUN_104be0e14();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104bee558; end: 104bee587;  */

void FUN_104bee558(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000104befd58();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x30;
    FUN_104be0e14();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104bee588; end: 104bee5a7;  */

void FUN_104bee588(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_104bee5a8();
  }
  return;
}



/* Entry: 104bee5a8; end: 104bee5f7;  */

void FUN_104bee5a8(void)

{
  func_0x0001006573d4();
  func_0x000104bee5cc();
  return;
}



/* Entry: 104bee5f8; end: 104bee5ff;  */

void FUN_104bee5f8(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x000104befd58(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -4;
    func_0x000100100fec();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104bee600; end: 104bee67f;  */

void FUN_104bee600(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000104befd58();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x20;
    func_0x000100100fec();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104bee680; end: 104bee687;  */

void FUN_104bee680(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x000104befd58(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -3;
    func_0x000100100fec();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104bee688; end: 104bee6e7;  */

void FUN_104bee688(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000104befd58();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x18;
    func_0x000100100fec();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104bee6e8; end: 104bee707;  */

void FUN_104bee6e8(long param_1)

{
  if (*(char *)(param_1 + 0x160) == '\x01') {
    FUN_104bee708();
  }
  return;
}



/* Entry: 104bee708; end: 104bee747;  */

void FUN_104bee708(long param_1)

{
  FUN_104bee748(param_1 + 0x140);
  FUN_104bee748(param_1 + 0x120);
  func_0x0001001148fc(param_1 + 0x100);
  func_0x00010066d68c(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 104bee748; end: 104bee767;  */

void FUN_104bee748(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x0001005fb56c();
  }
  return;
}



/* Entry: 104bee768; end: 104bee7c3;  */

undefined8 FUN_104bee768(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000104bee7a0(param_1 + 0x48);
  FUN_104bee7dc(param_1 + 0x30);
  func_0x000104bee864(param_1 + 0x18);
  func_0x000100292090(param_1);
  func_0x0001005fb5c8();
  return unaff_x19;
}



/* Entry: 104bee7c4; end: 104bee7db;  */

void FUN_104bee7c4(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 104bee7dc; end: 104bee82b;  */

void FUN_104bee7dc(void)

{
  func_0x0001006573d4();
  func_0x000104bee800();
  return;
}



/* Entry: 104bee82c; end: 104bee833;  */

void FUN_104bee82c(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x000104befd58(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -3;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104bee834; end: 104bee8b3;  */

void FUN_104bee834(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000104befd58();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x18;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104bee8b4; end: 104bee8bb;  */

void FUN_104bee8b4(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x000104befd58(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0xb;
    func_0x000104bee8ec();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104bee8bc; end: 104bee93f;  */

void FUN_104bee8bc(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000104befd58();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x58;
    func_0x000104bee8ec();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104bee940; end: 104bee943;  */

void FUN_104bee940(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e8130;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bee944; end: 104bee957;  */

void FUN_104bee944(void)

{
  func_0x000104bee968();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bee958; end: 104bee973;  */

void FUN_104bee958(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104befb4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bee974; end: 104beea07;  */

void FUN_104bee974(undefined8 *param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  undefined1 uStack_39;
  long lStack_38;
  
  if (*(byte *)(param_2 + 8) < 2) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x00010b9a9810(&lStack_38);
    if (lStack_38 == 0) {
      lStack_38 = 0;
    }
    else {
      func_0x000104befee8();
      func_0x000104befdf4();
    }
    func_0x000104bf010c();
    if (lStack_38 == 0) {
      FUN_104beea08(param_1,&uStack_39,param_2);
    }
    else {
      func_0x000104bf025c();
      if (extraout_x8 != 0) {
        do {
          func_0x000104befac8();
        } while (extraout_w10 != 0);
      }
    }
  }
  return;
}


