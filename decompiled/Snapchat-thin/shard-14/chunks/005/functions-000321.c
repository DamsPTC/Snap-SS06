/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b2835d8; end: 10b2835e7;  */

void FUN_10b2835d8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ccd6c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b2835e8; end: 10b2835fb;  */

void FUN_10b2835e8(void)

{
  FUN_10b283e7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2835fc; end: 10b283607;  */

void FUN_10b2835fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010062a2c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b283608; end: 10b28361b;  */

void FUN_10b283608(void)

{
  FUN_10b283afc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b28361c; end: 10b28371f;  */

code ** FUN_10b28361c(long param_1)

{
  undefined1 in_ZR;
  int iVar1;
  code **ppcVar2;
  undefined1 *puVar3;
  code **ppcVar5;
  code **ppcVar6;
  code *pcVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  code *extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  long lVar8;
  long unaff_x22;
  long lVar9;
  long lVar10;
  undefined8 **in_stack_00000030;
  code *in_stack_00000038;
  undefined1 in_stack_00000040;
  code *in_stack_00000050;
  undefined **in_stack_00000058;
  undefined8 *in_stack_000000c0;
  code *pcStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined **ppuStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_50;
  undefined8 *puStack_10;
  code *pcStack_8;
  undefined1 *puVar4;
  
  func_0x000107c35364();
  func_0x000107c352d8();
  lVar8 = *(long *)(param_1 + 0x20);
  func_0x00010b28450c();
  if (extraout_x8 != 0) {
    do {
      func_0x000107c352d4();
    } while (extraout_w10 != 0);
  }
  func_0x00010b284590();
  func_0x000107c28150();
  func_0x00010b284600();
  func_0x00010b284570();
  lVar10 = *(long *)(unaff_x22 + 0x70);
  in_stack_00000050 = FUN_10b283b38;
  in_stack_00000058 = &PTR_FUN_110ccd818;
  func_0x00010b284568();
  func_0x00010b284474();
  func_0x00010b284560();
  func_0x00010b2844fc();
  func_0x00010b284490();
  func_0x00010b284414();
  func_0x00010b2844d8();
  if (lVar10 == 0) {
    func_0x00010b284460();
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c352d4();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c35310();
    func_0x000107c35314();
    func_0x000107c352f8();
  }
  ppcVar2 = (code **)register0x00000008;
  FUN_10b283be8();
  func_0x000107c352cc();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b28444c();
    puVar3 = (undefined1 *)register0x00000008;
    FUN_10b283be8();
    func_0x00010b284458();
    func_0x000107c35364();
    puVar4 = puVar3;
    in_stack_000000c0 = &stack0x000000c0;
    func_0x000107c352d8();
    iVar1 = (int)puVar4;
    in_stack_00000030 = (undefined8 **)((ulong)in_stack_00000030 & 0xffffffffffffff00);
    in_stack_00000040 = 0;
    func_0x000107c35358();
    if (iVar1 == 0) {
      func_0x000107c35318();
      if (extraout_x8_03 != 0) {
        do {
          func_0x000107c352d4();
        } while (extraout_w10_03 != 0);
      }
      func_0x000107c352f4();
      if ((bool)in_ZR) {
        func_0x000107c352f0();
      }
      func_0x000107c28150();
      func_0x000107c35350();
      func_0x000107c35320();
      lVar10 = *(long *)(lVar8 + 0x70);
      in_stack_00000050 = FUN_10b283c90;
      in_stack_00000058 = &PTR_FUN_110ccd848;
      func_0x000107c35324();
      func_0x000107c352dc();
      if ((bool)in_ZR) {
        func_0x000107c352e4();
      }
      func_0x000107c3531c();
      func_0x000107c35308();
      func_0x000107c352d0();
      func_0x000107c3530c();
      if (lVar10 == 0) {
        func_0x000107c352fc();
        if (extraout_x8_04 != 0) {
          do {
            func_0x000107c352d4();
          } while (extraout_w10_04 != 0);
        }
        func_0x000107c35310();
        func_0x000107c35314();
        func_0x000107c352f8();
      }
      ppcVar2 = (code **)register0x00000008;
      FUN_10b283d40();
    }
    else {
      func_0x000107c35318();
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107c352d4();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c352f4();
      if ((bool)in_ZR) {
        func_0x000107c352f0();
      }
      func_0x000107c28150();
      func_0x000107c35350();
      func_0x000107c35320();
      lVar10 = *(long *)(lVar8 + 0x70);
      in_stack_00000050 = FUN_10b283c04;
      in_stack_00000058 = &PTR_FUN_110ccd830;
      func_0x000107c35324();
      func_0x000107c352dc();
      if ((bool)in_ZR) {
        func_0x000107c352e4();
      }
      func_0x000107c3531c();
      func_0x000107c35308();
      func_0x000107c352d0();
      func_0x000107c3530c();
      if (lVar10 == 0) {
        func_0x000107c352fc();
        if (extraout_x8_02 != 0) {
          do {
            func_0x000107c352d4();
          } while (extraout_w10_02 != 0);
        }
        func_0x000107c35310();
        func_0x000107c35314();
        func_0x000107c352f8();
      }
      ppcVar2 = (code **)register0x00000008;
      FUN_10b283c74();
    }
    func_0x000107c3533c();
    func_0x000107c352cc();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b28444c();
      puVar4 = (undefined1 *)register0x00000008;
      FUN_10b283d40();
      func_0x000107c3533c();
      func_0x00010b284458();
      ppcVar2 = &pcStack_90;
      ppcVar6 = &pcStack_90;
      pcStack_8 = FUN_10b2838f8;
      puStack_10 = &stack0x000000c0;
      func_0x000107c352d8();
      lVar10 = *(long *)(puVar4 + 0x20);
      func_0x00010b28450c();
      if (extraout_x8_05 != 0) {
        do {
          func_0x000107c352d4();
        } while (extraout_w10_05 != 0);
      }
      func_0x000107c28150();
      func_0x000107c35350();
      func_0x000107c35320();
      lVar9 = *(long *)(lVar8 + 0x70);
      pcStack_80 = FUN_10b283d5c;
      ppuStack_78 = &PTR_FUN_110ccd860;
      uStack_68 = uStack_88;
      pcStack_70 = pcStack_90;
      pcStack_90 = (code *)0x0;
      uStack_88 = 0;
      ppcVar5 = (code **)(lVar8 + 0x48);
      puStack_50 = puVar3;
      func_0x000107c28154(ppcVar5,&pcStack_80);
      func_0x00010b284424(ppuStack_78);
      func_0x000107c3530c();
      if (lVar9 == 0) {
        ppuStack_78 = *(undefined ***)(lVar10 + 0x18);
        pcStack_80 = *(code **)(lVar10 + 0x10);
        if (*(long *)(lVar10 + 0x18) != 0) {
          do {
            func_0x000107c352d4();
          } while (extraout_w10_06 != 0);
        }
        func_0x000107c35310();
        (*extraout_x8_06)();
        ppcVar5 = &pcStack_80;
        func_0x000107c27e74();
      }
      func_0x00010b28451c();
      func_0x000107c352cc();
      if ((bool)in_ZR) {
        return ppcVar5;
      }
      ___stack_chk_fail();
      func_0x000107c27e74();
      func_0x00010b28451c();
      func_0x00010b284458();
      pcVar7 = FUN_10b2839fc;
      func_0x000107c35364();
      in_stack_00000030 = &puStack_10;
      in_stack_00000038 = pcVar7;
      func_0x000107c352d8();
      func_0x00010b28450c();
      if (extraout_x8_07 != 0) {
        do {
          func_0x000107c352d4();
        } while (extraout_w10_07 != 0);
      }
      func_0x00010b284590();
      func_0x000107c28150();
      func_0x00010b284600();
      func_0x00010b284570();
      lVar8 = *(long *)(lVar9 + 0x70);
      func_0x00010b284568();
      func_0x00010b284474();
      func_0x00010b284560();
      func_0x00010b2844fc();
      func_0x00010b284490();
      func_0x00010b284414();
      func_0x00010b2844d8();
      if (lVar8 == 0) {
        func_0x00010b284460();
        if (extraout_x8_08 != 0) {
          do {
            func_0x000107c352d4();
          } while (extraout_w10_08 != 0);
        }
        func_0x000107c35310();
        func_0x000107c35314();
        func_0x000107c352f8();
      }
      FUN_10b283e60(&pcStack_90);
      func_0x000107c352cc();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010b28444c();
        FUN_10b283e60(&pcStack_90);
        func_0x00010b284458();
        func_0x000107c3534c(&PTR_DAT_110ccd7b0);
        func_0x00010527e23c();
        func_0x000107c2814c(ppcVar6 + 4);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar10);
        return ppcVar6;
      }
    }
  }
  return ppcVar2;
}



/* Entry: 10b283720; end: 10b2838f7;  */

code ** FUN_10b283720(undefined8 param_1)

{
  undefined1 in_ZR;
  int iVar1;
  code **ppcVar3;
  undefined1 *puVar4;
  code **ppcVar5;
  code **ppcVar6;
  code *pcVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  long unaff_x21;
  long lVar8;
  long lVar9;
  undefined8 **in_stack_00000030;
  code *in_stack_00000038;
  undefined1 in_stack_00000040;
  code *in_stack_00000050;
  undefined **in_stack_00000058;
  undefined8 in_stack_000000c0;
  code *pcStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined **ppuStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_50;
  undefined8 *puStack_10;
  code *pcStack_8;
  undefined8 uVar2;
  
  func_0x000107c35364();
  uVar2 = param_1;
  func_0x000107c352d8();
  iVar1 = (int)uVar2;
  in_stack_00000030 = (undefined8 **)((ulong)in_stack_00000030 & 0xffffffffffffff00);
  in_stack_00000040 = 0;
  func_0x000107c35358();
  ppcVar3 = (code **)register0x00000008;
  if (iVar1 == 0) {
    func_0x000107c35318();
    if (extraout_x8_01 != 0) {
      do {
        func_0x000107c352d4();
      } while (extraout_w10_01 != 0);
    }
    func_0x000107c352f4();
    if ((bool)in_ZR) {
      func_0x000107c352f0();
    }
    func_0x000107c28150();
    func_0x000107c35350();
    func_0x000107c35320();
    lVar8 = *(long *)(unaff_x21 + 0x70);
    in_stack_00000050 = FUN_10b283c90;
    in_stack_00000058 = &PTR_FUN_110ccd848;
    func_0x000107c35324();
    func_0x000107c352dc();
    if ((bool)in_ZR) {
      func_0x000107c352e4();
    }
    func_0x000107c3531c();
    func_0x000107c35308();
    func_0x000107c352d0();
    func_0x000107c3530c();
    if (lVar8 == 0) {
      func_0x000107c352fc();
      if (extraout_x8_02 != 0) {
        do {
          func_0x000107c352d4();
        } while (extraout_w10_02 != 0);
      }
      func_0x000107c35310();
      func_0x000107c35314();
      func_0x000107c352f8();
    }
    FUN_10b283d40();
  }
  else {
    func_0x000107c35318();
    if (extraout_x8 != 0) {
      do {
        func_0x000107c352d4();
      } while (extraout_w10 != 0);
    }
    func_0x000107c352f4();
    if ((bool)in_ZR) {
      func_0x000107c352f0();
    }
    func_0x000107c28150();
    func_0x000107c35350();
    func_0x000107c35320();
    lVar8 = *(long *)(unaff_x21 + 0x70);
    in_stack_00000050 = FUN_10b283c04;
    in_stack_00000058 = &PTR_FUN_110ccd830;
    func_0x000107c35324();
    func_0x000107c352dc();
    if ((bool)in_ZR) {
      func_0x000107c352e4();
    }
    func_0x000107c3531c();
    func_0x000107c35308();
    func_0x000107c352d0();
    func_0x000107c3530c();
    if (lVar8 == 0) {
      func_0x000107c352fc();
      if (extraout_x8_00 != 0) {
        do {
          func_0x000107c352d4();
        } while (extraout_w10_00 != 0);
      }
      func_0x000107c35310();
      func_0x000107c35314();
      func_0x000107c352f8();
    }
    FUN_10b283c74();
  }
  func_0x000107c3533c();
  func_0x000107c352cc();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b28444c();
    puVar4 = (undefined1 *)register0x00000008;
    FUN_10b283d40();
    func_0x000107c3533c();
    func_0x00010b284458();
    ppcVar3 = &pcStack_90;
    ppcVar6 = &pcStack_90;
    pcStack_8 = FUN_10b2838f8;
    puStack_10 = &stack0x000000c0;
    func_0x000107c352d8();
    lVar8 = *(long *)(puVar4 + 0x20);
    func_0x00010b28450c();
    if (extraout_x8_03 != 0) {
      do {
        func_0x000107c352d4();
      } while (extraout_w10_03 != 0);
    }
    func_0x000107c28150();
    func_0x000107c35350();
    func_0x000107c35320();
    lVar9 = *(long *)(unaff_x21 + 0x70);
    pcStack_80 = FUN_10b283d5c;
    ppuStack_78 = &PTR_FUN_110ccd860;
    uStack_68 = uStack_88;
    pcStack_70 = pcStack_90;
    pcStack_90 = (code *)0x0;
    uStack_88 = 0;
    ppcVar5 = (code **)(unaff_x21 + 0x48);
    uStack_50 = param_1;
    func_0x000107c28154(ppcVar5,&pcStack_80);
    func_0x00010b284424(ppuStack_78);
    func_0x000107c3530c();
    if (lVar9 == 0) {
      ppuStack_78 = *(undefined ***)(lVar8 + 0x18);
      pcStack_80 = *(code **)(lVar8 + 0x10);
      if (*(long *)(lVar8 + 0x18) != 0) {
        do {
          func_0x000107c352d4();
        } while (extraout_w10_04 != 0);
      }
      func_0x000107c35310();
      (*extraout_x8_04)();
      ppcVar5 = &pcStack_80;
      func_0x000107c27e74();
    }
    func_0x00010b28451c();
    func_0x000107c352cc();
    if ((bool)in_ZR) {
      return ppcVar5;
    }
    ___stack_chk_fail();
    func_0x000107c27e74();
    func_0x00010b28451c();
    func_0x00010b284458();
    pcVar7 = FUN_10b2839fc;
    func_0x000107c35364();
    in_stack_00000030 = &puStack_10;
    in_stack_00000038 = pcVar7;
    func_0x000107c352d8();
    func_0x00010b28450c();
    if (extraout_x8_05 != 0) {
      do {
        func_0x000107c352d4();
      } while (extraout_w10_05 != 0);
    }
    func_0x00010b284590();
    func_0x000107c28150();
    func_0x00010b284600();
    func_0x00010b284570();
    lVar9 = *(long *)(lVar9 + 0x70);
    func_0x00010b284568();
    func_0x00010b284474();
    func_0x00010b284560();
    func_0x00010b2844fc();
    func_0x00010b284490();
    func_0x00010b284414();
    func_0x00010b2844d8();
    if (lVar9 == 0) {
      func_0x00010b284460();
      if (extraout_x8_06 != 0) {
        do {
          func_0x000107c352d4();
        } while (extraout_w10_06 != 0);
      }
      func_0x000107c35310();
      func_0x000107c35314();
      func_0x000107c352f8();
    }
    FUN_10b283e60(&pcStack_90);
    func_0x000107c352cc();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b28444c();
      FUN_10b283e60(&pcStack_90);
      func_0x00010b284458();
      func_0x000107c3534c(&PTR_DAT_110ccd7b0);
      func_0x00010527e23c();
      func_0x000107c2814c(ppcVar6 + 4);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar8);
      return ppcVar6;
    }
  }
  return ppcVar3;
}



/* Entry: 10b2838f8; end: 10b2839fb;  */

code ** FUN_10b2838f8(long param_1)

{
  undefined1 in_ZR;
  code **ppcVar1;
  code **ppcVar2;
  code **ppcVar3;
  long extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long lVar4;
  long unaff_x21;
  long lVar5;
  code *pcStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined **ppuStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  ppcVar2 = &pcStack_90;
  ppcVar3 = &pcStack_90;
  func_0x000107c352d8();
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x00010b28450c();
  if (extraout_x8 != 0) {
    do {
      func_0x000107c352d4();
    } while (extraout_w10 != 0);
  }
  func_0x000107c28150();
  func_0x000107c35350();
  func_0x000107c35320();
  lVar5 = *(long *)(unaff_x21 + 0x70);
  pcStack_80 = FUN_10b283d5c;
  ppuStack_78 = &PTR_FUN_110ccd860;
  uStack_68 = uStack_88;
  pcStack_70 = pcStack_90;
  pcStack_90 = (code *)0x0;
  uStack_88 = 0;
  ppcVar1 = (code **)(unaff_x21 + 0x48);
  func_0x000107c28154(ppcVar1,&pcStack_80);
  func_0x00010b284424(ppuStack_78);
  func_0x000107c3530c();
  if (lVar5 == 0) {
    ppuStack_78 = *(undefined ***)(lVar4 + 0x18);
    pcStack_80 = *(code **)(lVar4 + 0x10);
    if (*(long *)(lVar4 + 0x18) != 0) {
      do {
        func_0x000107c352d4();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c35310();
    (*extraout_x8_00)();
    ppcVar1 = &pcStack_80;
    func_0x000107c27e74();
  }
  func_0x00010b28451c();
  func_0x000107c352cc();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c27e74();
    func_0x00010b28451c();
    func_0x00010b284458();
    func_0x000107c35364();
    func_0x000107c352d8();
    func_0x00010b28450c();
    if (extraout_x8_01 != 0) {
      do {
        func_0x000107c352d4();
      } while (extraout_w10_01 != 0);
    }
    func_0x00010b284590();
    func_0x000107c28150();
    func_0x00010b284600();
    func_0x00010b284570();
    lVar5 = *(long *)(lVar5 + 0x70);
    func_0x00010b284568();
    func_0x00010b284474();
    func_0x00010b284560();
    func_0x00010b2844fc();
    func_0x00010b284490();
    func_0x00010b284414();
    func_0x00010b2844d8();
    if (lVar5 == 0) {
      func_0x00010b284460();
      if (extraout_x8_02 != 0) {
        do {
          func_0x000107c352d4();
        } while (extraout_w10_02 != 0);
      }
      func_0x000107c35310();
      func_0x000107c35314();
      func_0x000107c352f8();
    }
    FUN_10b283e60(&pcStack_90);
    func_0x000107c352cc();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b28444c();
      FUN_10b283e60(&pcStack_90);
      func_0x00010b284458();
      func_0x000107c3534c(&PTR_DAT_110ccd7b0);
      func_0x00010527e23c();
      func_0x000107c2814c(ppcVar3 + 4);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar4);
      return ppcVar3;
    }
    return ppcVar2;
  }
  return ppcVar1;
}



/* Entry: 10b2839fc; end: 10b283afb;  */

undefined1 * FUN_10b2839fc(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x22;
  long lVar2;
  code *in_stack_00000050;
  undefined **in_stack_00000058;
  
  func_0x000107c35364();
  func_0x000107c352d8();
  func_0x00010b28450c();
  if (extraout_x8 != 0) {
    do {
      func_0x000107c352d4();
    } while (extraout_w10 != 0);
  }
  func_0x00010b284590();
  func_0x000107c28150();
  func_0x00010b284600();
  func_0x00010b284570();
  lVar2 = *(long *)(unaff_x22 + 0x70);
  in_stack_00000050 = FUN_10b283de0;
  in_stack_00000058 = &PTR_FUN_110ccd878;
  func_0x00010b284568();
  func_0x00010b284474();
  func_0x00010b284560();
  func_0x00010b2844fc();
  func_0x00010b284490();
  func_0x00010b284414();
  func_0x00010b2844d8();
  if (lVar2 == 0) {
    func_0x00010b284460();
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c352d4();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c35310();
    func_0x000107c35314();
    func_0x000107c352f8();
  }
  puVar1 = (undefined1 *)register0x00000008;
  FUN_10b283e60();
  func_0x000107c352cc();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b28444c();
    FUN_10b283e60();
    func_0x00010b284458();
    func_0x000107c3534c(&PTR_DAT_110ccd7b0);
    func_0x00010527e23c();
    func_0x000107c2814c((undefined1 *)((long)register0x00000008 + 0x20));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    return (undefined1 *)register0x00000008;
  }
  return puVar1;
}



/* Entry: 10b283afc; end: 10b283b37;  */

long FUN_10b283afc(long param_1)

{
  func_0x000107c3534c(&PTR_DAT_110ccd7b0);
  func_0x00010527e23c();
  func_0x000107c2814c(param_1 + 0x20);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  return param_1;
}



/* Entry: 10b283b38; end: 10b283bc3;  */

void FUN_10b283b38(void)

{
  undefined8 uStack_98;
  
  func_0x00010b2845b0();
  func_0x00010b2844b4();
  func_0x00010b2844c8();
  func_0x00010b2845a4(uStack_98);
  func_0x00010b284430();
  func_0x00010b2845ec();
  func_0x00010b2844e0();
  func_0x00010b284488();
  func_0x00010b2844c0();
  func_0x00010b284588();
  return;
}



/* Entry: 10b283bc4; end: 10b283be3;  */

void FUN_10b283bc4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b283be8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b283be4; end: 10b283be7;  */

void FUN_10b283be4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b283be8; end: 10b283c03;  */

long FUN_10b283be8(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b2844a8();
  lVar1 = unaff_x19;
  func_0x00010046e218();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10b283c04; end: 10b283c4f;  */

void FUN_10b283c04(long param_1,undefined8 param_2)

{
  code *extraout_x8;
  
  func_0x000107c35310(**(undefined8 **)(param_1 + 0x10),param_2,*(undefined8 **)(param_1 + 0x10) + 2
                     );
  (*extraout_x8)();
  func_0x000107c35338();
  return;
}



/* Entry: 10b283c50; end: 10b283c6f;  */

void FUN_10b283c50(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b283c74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b283c70; end: 10b283c73;  */

void FUN_10b283c70(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b283c74; end: 10b283c8f;  */

long FUN_10b283c74(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c35304();
  lVar1 = unaff_x19;
  func_0x00010046e218();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10b283c90; end: 10b283d1b;  */

void FUN_10b283c90(void)

{
  code *extraout_x8;
  
  func_0x00010b2845b0();
  func_0x00010b284548();
  func_0x00010b2844c8();
  func_0x00010b2845a4();
  func_0x00010b284430();
  (*extraout_x8)();
  func_0x00010b2844e0();
  func_0x00010b284488();
  func_0x00010b2844c0();
  func_0x00010b284540();
  return;
}



/* Entry: 10b283d1c; end: 10b283d3b;  */

void FUN_10b283d1c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b283d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b283d3c; end: 10b283d3f;  */

void FUN_10b283d3c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b283d40; end: 10b283d5b;  */

long FUN_10b283d40(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c35304();
  lVar1 = unaff_x19;
  func_0x00010046e218();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10b283d5c; end: 10b283dbb;  */

void FUN_10b283d5c(long param_1)

{
  undefined1 auStack_60 [32];
  undefined1 uStack_40;
  undefined1 auStack_38 [16];
  undefined1 uStack_28;
  
  auStack_38[0] = 0;
  uStack_28 = 0;
  auStack_60[0] = 0;
  uStack_40 = 0;
  func_0x000107c35310(*(undefined8 *)(param_1 + 0x10));
  func_0x00010b2845ec();
  func_0x000107c2c018(auStack_60);
  func_0x000107c27f18(auStack_38);
  return;
}



/* Entry: 10b283dbc; end: 10b283ddf;  */

void FUN_10b283dbc(long param_1)

{
  param_1 = param_1 + 8;
  func_0x00010046e218();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10b283de0; end: 10b283e3b;  */

void FUN_10b283de0(void)

{
  long *unaff_x19;
  
  func_0x00010b2845b0();
  func_0x00010b2844b4();
  func_0x00010b2844c8();
  func_0x00010b2845a4();
  func_0x00010b2845c8(*(undefined8 *)(*unaff_x19 + 0x18));
  func_0x00010b284488();
  func_0x00010b2844c0();
  return;
}



/* Entry: 10b283e3c; end: 10b283e5b;  */

void FUN_10b283e3c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b283e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b283e5c; end: 10b283e5f;  */

void FUN_10b283e5c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b283e60; end: 10b283e7b;  */

long FUN_10b283e60(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b2844a8();
  lVar1 = unaff_x19;
  func_0x00010046e218();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10b283e7c; end: 10b283e87;  */

void FUN_10b283e7c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ccd760;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b283e88; end: 10b283eab;  */

void FUN_10b283e88(long param_1)

{
  func_0x000107c35330();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b283eac; end: 10b283eaf;  */

void FUN_10b283eac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ccd8a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b283eb0; end: 10b283ec3;  */

void FUN_10b283eb0(void)

{
  FUN_10b28434c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b283ec4; end: 10b283ecf;  */

void FUN_10b283ec4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010062a2c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b283ed0; end: 10b283ee3;  */

void FUN_10b283ed0(void)

{
  FUN_10b284090();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b283ee4; end: 10b28407f;  */

void FUN_10b283ee4(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  code *extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  lVar4 = *param_3;
  if (lVar4 == 0) {
    puStack_50 = (undefined8 *)0x0;
    puStack_48 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)0x40;
    __Znwm();
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_FUN_110ccd948;
    puStack_50 = puVar2 + 3;
    *puStack_50 = &PTR_DAT_110ccd998;
    lVar3 = *(long *)(param_1 + 0x10);
    uVar5 = *(undefined8 *)(param_1 + 8);
    puVar2[5] = *(undefined8 *)(param_1 + 0x10);
    puVar2[4] = uVar5;
    if (lVar3 != 0) {
      do {
        func_0x000107c352d4();
      } while (extraout_w10 != 0);
      lVar4 = *param_3;
    }
    lVar3 = param_3[1];
    puVar2[6] = lVar4;
    puVar2[7] = lVar3;
    puStack_48 = puVar2;
    if (lVar3 != 0) {
      do {
        func_0x000107c352d4();
      } while (extraout_w10_00 != 0);
    }
  }
  puVar1 = puStack_48;
  puVar2 = puStack_50;
  uStack_58 = 0;
  func_0x000107c2bfd4(param_2,&uStack_58);
  if ((int)param_2 == 0) {
    param_3 = (long *)*param_3;
    func_0x000107c278b8(&puStack_90,&UNK_10f73f88f);
    puStack_78 = (undefined8 *)CONCAT44(puStack_78._4_4_,3);
    uStack_60 = uStack_80;
    uStack_68 = uStack_88;
    puStack_70 = puStack_90;
    puStack_90 = (undefined8 *)0x0;
    uStack_88 = 0;
    uStack_80 = 0;
    (**(code **)(*param_3 + 0x10))(param_3,&puStack_78);
    func_0x00010b284488();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_90);
  }
  else {
    puStack_78 = puVar2;
    puStack_70 = puVar1;
    if (puVar1 != (undefined8 *)0x0) {
      do {
        func_0x000107c352d4();
      } while (extraout_w10_01 != 0);
    }
    func_0x000107c35310();
    (*extraout_x8)();
    func_0x0001072f169c(&puStack_78);
  }
  func_0x000107c27c64(&uStack_58);
  FUN_10b284328(&puStack_50);
  return;
}



/* Entry: 10b284080; end: 10b28408f;  */

void FUN_10b284080(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b28408c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 10b284090; end: 10b2840cb;  */

undefined8 * FUN_10b284090(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ccd8f0;
  func_0x0001073ac5c4(param_1 + 3);
  func_0x000107c2814c(param_1 + 1);
  return param_1;
}



/* Entry: 10b2840cc; end: 10b2840cf;  */

void FUN_10b2840cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ccd948;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b2840d0; end: 10b2840e3;  */

void FUN_10b2840d0(void)

{
  FUN_10b28431c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2840e4; end: 10b2840ef;  */

void FUN_10b2840e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010062a2c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b2840f0; end: 10b284103;  */

void FUN_10b2840f0(void)

{
  FUN_10b284214();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b284104; end: 10b284213;  */

undefined8 * FUN_10b284104(long param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x22;
  long lVar2;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  code *in_stack_00000050;
  undefined **in_stack_00000058;
  
  func_0x000107c35364();
  func_0x000107c352d8();
  in_stack_00000008 = *(undefined8 *)(param_1 + 0x20);
  in_stack_00000000 = *(undefined8 *)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    do {
      func_0x000107c352d4();
    } while (extraout_w10 != 0);
  }
  func_0x00010b284590();
  func_0x000107c28150();
  func_0x00010b284600();
  func_0x00010b284570();
  lVar2 = *(long *)(unaff_x22 + 0x70);
  in_stack_00000050 = FUN_10b284274;
  in_stack_00000058 = &PTR_FUN_110ccd9c8;
  func_0x00010b284568();
  func_0x00010b284474();
  func_0x00010b284560();
  func_0x00010b2844fc();
  func_0x00010b284490();
  func_0x00010b284414();
  func_0x00010b2844d8();
  if (lVar2 == 0) {
    func_0x00010b284460();
    if (extraout_x8 != 0) {
      do {
        func_0x000107c352d4();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c35310();
    func_0x000107c35314();
    func_0x000107c352f8();
  }
  puVar1 = (undefined8 *)register0x00000008;
  FUN_10b2842fc();
  func_0x000107c352cc();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b28444c();
    FUN_10b2842fc();
    func_0x00010b284458();
    *(undefined ***)register0x00000008 = &PTR_DAT_110ccd998;
    func_0x00010b284250((undefined8 *)((long)register0x00000008 + 0x18));
    func_0x000107c2814c((undefined8 *)((long)register0x00000008 + 8));
    return (undefined8 *)register0x00000008;
  }
  return puVar1;
}



/* Entry: 10b284214; end: 10b284273;  */

undefined8 * FUN_10b284214(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ccd998;
  func_0x00010b284250(param_1 + 3);
  func_0x000107c2814c(param_1 + 1);
  return param_1;
}



/* Entry: 10b284274; end: 10b2842d7;  */

void FUN_10b284274(void)

{
  long *unaff_x19;
  
  func_0x00010b2845b0();
  func_0x00010b2844b4();
  func_0x00010b2845a4();
  func_0x00010b2845c8(*(undefined8 *)(*unaff_x19 + 0x10));
  func_0x00010b284488();
  func_0x00010b2844c0();
  return;
}



/* Entry: 10b2842d8; end: 10b2842f7;  */

void FUN_10b2842d8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b2842fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b2842f8; end: 10b2842fb;  */

void FUN_10b2842f8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b2842fc; end: 10b28431b;  */

long FUN_10b2842fc(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b2844a8();
  lVar1 = unaff_x19;
  func_0x000107c35330();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b28431c; end: 10b284327;  */

void FUN_10b28431c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ccd948;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b284328; end: 10b28434b;  */

void FUN_10b284328(long param_1)

{
  func_0x000107c35330();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b28434c; end: 10b284357;  */

void FUN_10b28434c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ccd8a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b284358; end: 10b284393;  */

long FUN_10b284358(long param_1)

{
  func_0x000107c3534c(&PTR_FUN_110ccd4c0);
  func_0x000107c2814c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
  func_0x000107c27bb4();
  return param_1;
}



/* Entry: 10b284394; end: 10b284413;  */

void FUN_10b284394(undefined8 param_1)

{
  undefined1 auStack_a0 [24];
  undefined1 uStack_88;
  undefined1 auStack_80 [24];
  undefined1 uStack_68;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  undefined1 auStack_40 [40];
  undefined1 uStack_18;
  
  auStack_40[0] = 0;
  uStack_18 = 0;
  auStack_60[0] = 0;
  uStack_48 = 0;
  auStack_80[0] = 0;
  uStack_68 = 0;
  auStack_a0[0] = 0;
  uStack_88 = 0;
  func_0x000107c27e84(param_1,0,0,auStack_40,0x101,auStack_60,auStack_80,0,auStack_a0);
  func_0x000107c279a4(auStack_a0);
  func_0x000107c279a4(auStack_80);
  func_0x000107c279a4(auStack_60);
  func_0x000107c27bb0(auStack_40);
  return;
}



/* Entry: 10b284414; end: 10b28460b;  */

void FUN_10b284414(void)

{
  long unaff_x24;
  undefined8 *in_stack_00000058;
  
                    /* WARNING: Could not recover jumptable at 0x00010b284420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*in_stack_00000058)(unaff_x24 + 8);
  return;
}



/* Entry: 10b28460c; end: 10b284647;  */

void FUN_10b28460c(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x10;
  __Znwm();
  uVar1 = *param_2;
  *puVar2 = &PTR_FUN_110ccda48;
  *(undefined1 *)(puVar2 + 1) = uVar1;
  *param_1 = puVar2;
  return;
}



/* Entry: 10b284648; end: 10b284787;  */

void FUN_10b284648(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 uStack_41;
  undefined1 **ppuStack_40;
  undefined1 *puStack_38;
  
  uVar2 = 0x38;
  __Znwm();
  if ((bRam00000001137f4710 & 1) == 0) {
    iVar1 = 0x137f4710;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ppuRam00000001137f4720 = &PTR_FUN_110cfa6c0;
      uRam00000001137f4728 = 0;
      uRam00000001137f4738 = 0;
      uRam00000001137f4730 = 0;
      uRam00000001137f4748 = 0;
      uRam00000001137f4740 = 0;
      uRam00000001137f4750 = 0;
      ___cxa_guard_release(0x1137f4710);
    }
  }
  if (lRam00000001137f4718 != -1) {
    puStack_38 = &uStack_41;
    ppuStack_40 = &puStack_38;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(0x1137f4718,&ppuStack_40,FUN_10b28488c);
  }
  FUN_10b517984(uVar2,0,0x1137f4720);
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  if (uVar4 == 0) {
    if (*(long *)(param_1 + 0x38) != 0) {
      func_0x000107c304f0();
    }
    __ZdlPv();
  }
  uVar3 = *(ulong *)(uVar2 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  if (uVar4 != uVar3) {
    FUN_10b4cf42c(uVar4,uVar2);
    uVar2 = uVar4;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  *(ulong *)(param_1 + 0x38) = uVar2;
  return;
}



/* Entry: 10b284788; end: 10b28478b;  */

void FUN_10b284788(void)

{
  func_0x000107c3538c();
  func_0x000107c304fc();
  return;
}



/* Entry: 10b28478c; end: 10b28479f;  */

void FUN_10b28478c(void)

{
  FUN_10b2847a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2847a0; end: 10b2847bf;  */

void FUN_10b2847a0(void)

{
  func_0x000107c3538c();
  func_0x000107c304fc();
  return;
}



/* Entry: 10b2847c0; end: 10b28487b;  */

void FUN_10b2847c0(undefined8 *param_1,long param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    param_1[1] = 2;
    *param_1 = 4;
    param_1[2] = 500;
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
    func_0x000107c2c048(param_1 + 7,&UNK_10e570280,&DAT_10e570288);
  }
  else {
    *(undefined1 *)(param_1 + 6) = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  }
  func_0x000107c35374();
  return;
}



/* Entry: 10b28487c; end: 10b28488b;  */

undefined8 FUN_10b28487c(void)

{
  return 0;
}



/* Entry: 10b28488c; end: 10b284a07;  */

void FUN_10b28488c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuStack_78 = &PTR_FUN_110cfa6c0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0;
  puVar1 = puRam00000001137f4728;
  if (((ulong)puRam00000001137f4728 & 1) != 0) {
    puVar1 = *(undefined8 **)((ulong)puRam00000001137f4728 & 0xfffffffffffffffe);
  }
  if (puVar1 == (undefined8 *)0x0) {
    FUN_10b517d64(0x1137f4720,&ppuStack_78);
  }
  else {
    FUN_10b517d30(0x1137f4720,&ppuStack_78);
  }
  func_0x000107c304f0(&ppuStack_78);
  uRam00000001137f4740 = 0x400000000;
  uRam00000001137f4748 = 3;
  uRam00000001137f4750 = 0;
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110cfa670;
  puVar1[1] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  for (lVar4 = 0; lVar4 != 8; lVar4 = lVar4 + 4) {
    func_0x000107c2845c(puVar1 + 2,*(undefined4 *)(&UNK_10e570280 + lVar4));
  }
  puVar2 = puRam00000001137f4728;
  if (((ulong)puRam00000001137f4728 & 1) != 0) {
    puVar2 = *(undefined8 **)((ulong)puRam00000001137f4728 & 0xfffffffffffffffe);
  }
  if (puVar2 == (undefined8 *)0x0) {
    if (puRam00000001137f4738 != (undefined8 *)0x0) {
      func_0x000107c304ec();
    }
    __ZdlPv();
  }
  puVar3 = (undefined8 *)puVar1[1];
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = *(undefined8 **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  if (puVar2 != puVar3) {
    FUN_10b4cf42c(puVar2,puVar1);
    puVar1 = puVar2;
  }
  uRam00000001137f4730 = uRam00000001137f4730 | 1;
  puRam00000001137f4738 = puVar1;
  return;
}



/* Entry: 10b284a08; end: 10b284a4b;  */

void FUN_10b284a08(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2 + 0x18);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10b284a4c; end: 10b284a87;  */

void FUN_10b284a4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10b284a88; end: 10b284aef;  */

void FUN_10b284a88(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [24];
  undefined1 uStack_40;
  undefined1 auStack_38 [24];
  
  puVar1 = puRam000000011383a240;
  if (((param_2 & 1) == 0) && (puRam000000011383a240 != (undefined8 *)0x0)) {
    func_0x000107c353c0();
    auStack_58[0] = 0;
    uStack_40 = 0;
    func_0x00010b2853f8(*(undefined8 *)*puVar1,puVar1,1,auStack_38,param_4,auStack_58);
    func_0x000107c353ac();
    func_0x000107c353a8();
  }
  return;
}



/* Entry: 10b284af0; end: 10b284af3;  */

undefined8 * FUN_10b284af0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ccdc50;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x22);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x1e);
  *param_1 = &PTR_DAT_110ccdb78;
  func_0x0001001148fc(param_1 + 0x10);
  func_0x0001001148fc(param_1 + 0xb);
  func_0x000107c60ca0(param_1 + 8);
  func_0x0001008379c0();
  func_0x000107c60ca0(param_1 + 2);
  return param_1;
}



/* Entry: 10b284af4; end: 10b284b07;  */

void FUN_10b284af4(void)

{
  FUN_10b2852b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b284b08; end: 10b284b0b;  */

void FUN_10b284b08(void)

{
  return;
}



/* Entry: 10b284b0c; end: 10b2852b3;  */

undefined8 *
FUN_10b284b0c(double param_1,long param_2,int param_3,undefined8 param_4,undefined8 param_5,
             int param_6,undefined8 param_7,undefined1 param_8,undefined4 param_9,
             undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined1 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  int extraout_w10;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 in_stack_00000020;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined1 auStack_550 [32];
  undefined1 auStack_530 [32];
  undefined1 auStack_510 [24];
  long alStack_4f8 [3];
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined4 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined1 uStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined1 auStack_3f0 [368];
  long lStack_280;
  long lStack_278;
  undefined1 auStack_268 [368];
  long lStack_f8;
  long lStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  long lStack_d8;
  undefined8 uStack_88;
  
  iVar12 = param_6;
  func_0x000107c353a4();
  uStack_568 = 0;
  uStack_560 = 0;
  uStack_558 = 0;
  *(int *)(param_2 + 0x78) = iVar12;
  uStack_88 = extraout_x8;
  if (*(char *)(param_2 + 0x98) == '\x01') {
    func_0x000107c353e4();
    func_0x000107c353e8(&uStack_568);
  }
  lVar15 = *(long *)(unaff_x20 + 0x128);
  func_0x000107c353b4();
  func_0x000107c2c154();
  func_0x000107c2c158();
  if ((0 < *(long *)(unaff_x20 + 0xc0)) && (lRam000000011383a240 != 0)) {
    FUN_10b285354();
    func_0x00010b285370();
    func_0x000107c353bc();
    func_0x00010b285388();
    func_0x00010b2853b0();
    func_0x00010b2853a0();
    func_0x00010b2853a8();
  }
  if ((0 < *(long *)(unaff_x20 + 200)) && (lRam000000011383a240 != 0)) {
    FUN_10b285354();
    func_0x00010b285370();
    func_0x000107c353bc();
    func_0x00010b285388();
    func_0x00010b2853b0();
    func_0x00010b2853a0();
    func_0x00010b2853a8();
  }
  if (0 < *(long *)(unaff_x20 + 0xd0)) {
    func_0x000107c280ec(auStack_3f0,&uStack_568);
    func_0x00010b2853e0();
    lVar8 = lRam000000011383a240;
    if (lRam000000011383a240 != 0) {
      func_0x00010b285364(&uStack_480);
      func_0x00010b2853ec();
      func_0x000107c353bc();
      func_0x00010b2853b0(lVar8,0x17,&uStack_480);
      func_0x00010b2853a0();
      func_0x00010b2853b8();
    }
    func_0x00010b2853d8();
  }
  if ((0 < *(long *)(unaff_x20 + 0xd8)) && (lRam000000011383a240 != 0)) {
    FUN_10b285354();
    func_0x00010b285370();
    func_0x000107c353bc();
    func_0x00010b285388();
    func_0x00010b2853b0();
    func_0x00010b2853a0();
    func_0x00010b2853a8();
  }
  if ((0 < *(long *)(unaff_x20 + 0xe0)) && (lRam000000011383a240 != 0)) {
    FUN_10b285354();
    func_0x00010b285370();
    func_0x000107c353bc();
    func_0x00010b285388();
    func_0x00010b2853b0();
    func_0x00010b2853a0();
    func_0x00010b2853a8();
  }
  if ((0 < *(long *)(unaff_x20 + 0xe8)) && (lRam000000011383a240 != 0)) {
    FUN_10b285354();
    func_0x00010b285370();
    func_0x000107c353bc();
    func_0x00010b285388();
    func_0x00010b2853b0();
    func_0x00010b2853a0();
    func_0x00010b2853a8();
  }
  func_0x000107c2c064(&uStack_568,&DAT_10f2df4ca,unaff_x20 + 0x28);
  if (lRam000000011383a240 != 0) {
    FUN_10b285354();
    func_0x00010b285370();
    func_0x000107c353bc();
    func_0x00010b285388();
    (*extraout_x8_00)();
    func_0x00010b2853a0();
    func_0x00010b2853a8();
  }
  if ((param_6 != -1) && (lRam000000011383a240 != 0)) {
    FUN_10b285354();
    func_0x00010b285370();
    func_0x000107c353bc();
    func_0x00010b285388();
    (*extraout_x8_01)();
    func_0x00010b2853a0();
    func_0x00010b2853a8();
  }
  func_0x000107c2c068(&uStack_568,param_4);
  lVar8 = lRam000000011383a240;
  if (lRam000000011383a240 != 0) {
    FUN_10b285354();
    func_0x00010b285370();
    func_0x000107c353fc();
    (*extraout_x8_02)(lVar8,0x1a,auStack_3f0);
    func_0x00010b2853a0();
    func_0x00010b2853a8();
  }
  if (param_3 != 0) {
    func_0x000107c2c070(auStack_268,&DAT_10f2df4ca,unaff_x20 + 0x28);
    func_0x000107c280c8(auStack_3f0,auStack_268,1);
    func_0x000107c27bbc(auStack_268);
    func_0x00010b2853e0();
    if (*(char *)(unaff_x20 + 0x98) == '\x01') {
      func_0x000107c353e4();
      func_0x000107c353e8(auStack_3f0);
    }
    lVar8 = lRam000000011383a240;
    if (lRam000000011383a240 != 0) {
      func_0x00010b285364(&uStack_480);
      func_0x00010b2853ec();
      func_0x000107c353fc();
      func_0x00010b2853f8(lVar8,0x19,&uStack_480);
      func_0x00010b2853a0();
      func_0x00010b2853b8();
    }
    func_0x00010b2853d8();
  }
  func_0x00010b285364(auStack_268);
  uVar9 = param_3 == 0;
  func_0x000107c2c06c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_268);
  func_0x000107c2bfd8(param_5);
  func_0x000107c353f0();
  if (lStack_280 != 0) {
    func_0x00010b285364(&uStack_498);
    func_0x000107c2bfb4(&uStack_4b0,*(undefined8 *)(unaff_x20 + 0x108));
    uVar7 = *(undefined4 *)(*(long *)(unaff_x20 + 0x108) + 0x28);
    func_0x000107c353ec(&uStack_4c8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&uStack_4e0,in_stack_00000020);
    uStack_470 = uStack_488;
    uStack_408 = uStack_4d0;
    uStack_478 = uStack_490;
    uStack_480 = uStack_498;
    uStack_490 = 0;
    uStack_488 = 0;
    uStack_460 = uStack_4a8;
    uStack_468 = uStack_4b0;
    uStack_458 = uStack_4a0;
    uStack_4b0 = 0;
    uStack_4a8 = 0;
    uStack_4a0 = 0;
    uStack_498 = 0;
    uStack_440 = uStack_4c0;
    uStack_448 = uStack_4c8;
    uStack_438 = uStack_4b8;
    uStack_4c8 = 0;
    uStack_4c0 = 0;
    uStack_4b8 = 0;
    uStack_428 = param_10;
    uStack_424 = param_11;
    uStack_420 = param_12;
    uStack_41c = param_13;
    uStack_410 = uStack_4d8;
    uStack_418 = uStack_4e0;
    uStack_4e0 = 0;
    uStack_4d8 = 0;
    uStack_4d0 = 0;
    uVar1 = *(undefined8 *)(unaff_x20 + 0xe0);
    uVar4 = *(undefined8 *)(unaff_x20 + 0xe8);
    uVar2 = *(undefined8 *)(unaff_x20 + 0xd0);
    uVar5 = *(undefined8 *)(unaff_x20 + 0xd8);
    uVar3 = *(undefined8 *)(unaff_x20 + 0xc0);
    uVar6 = *(undefined8 *)(unaff_x20 + 200);
    uStack_450 = uVar7;
    uStack_430 = param_8;
    uStack_42c = param_9;
    uStack_400 = param_5;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (alStack_4f8,unaff_x20 + 0x10);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_510,unaff_x20 + 0x40);
    func_0x000107c279a0(auStack_530,unaff_x20 + 0x58);
    uVar14 = *(undefined8 *)(unaff_x20 + 0x128);
    uVar13 = *(undefined8 *)(unaff_x20 + 8);
    func_0x000107c279a0(auStack_550,unaff_x20 + 0x80);
    uVar9 = param_3 == 0;
    FUN_10b282718(auStack_3f0,&uStack_480,uVar5,uVar4,uVar1,uVar3,uVar2,uVar6,
                  (long)(param_1 + (double)lVar15),uVar9,param_3,alStack_4f8,auStack_510,auStack_530
                  ,0x101,uVar14,0x101,uVar13,auStack_550,(long)*(int *)(unaff_x20 + 0x78),
                  *(undefined4 *)(unaff_x20 + 0x7c));
    func_0x000107c279a4(auStack_550);
    func_0x000107c279a4(auStack_530);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_510);
    plVar10 = alStack_4f8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x000107c353d4();
    func_0x000107c353c8();
    func_0x000107c353cc();
    func_0x000107c353dc();
    func_0x000107c353d8();
    func_0x000107c2c074();
    FUN_10b282890(auStack_268,auStack_3f0);
    lStack_f0 = lStack_278;
    lStack_f8 = lStack_280;
    if (lStack_278 != 0) {
      do {
        func_0x000107c35398();
      } while (extraout_w10 != 0);
    }
    pcStack_e8 = FUN_10b2852f4;
    ppuStack_e0 = &PTR_FUN_110ccdcc8;
    lVar15 = 0x180;
    __Znwm();
    FUN_10b282890();
    *(long *)(lVar15 + 0x178) = lStack_f0;
    *(long *)(lVar15 + 0x170) = lStack_f8;
    lStack_f8 = 0;
    lStack_f0 = 0;
    lStack_d8 = lVar15;
    func_0x000107c353f4(*(undefined8 *)(*plVar10 + 0x10));
    func_0x00010b2853c0();
    FUN_10b28532c(auStack_268);
    func_0x00010b282990(auStack_3f0);
  }
  func_0x000107c353d0();
  puVar11 = &uStack_568;
  func_0x000107c280f8();
  func_0x000107c3539c(uStack_88);
  if (!(bool)uVar9) {
    ___stack_chk_fail();
    func_0x00010b2853a0();
    func_0x00010b2853b8();
    func_0x00010b2853d8();
    puVar11 = &uStack_568;
    func_0x000107c280f8();
    func_0x00010b285398();
    *puVar11 = &PTR_FUN_110ccdc50;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar11 + 0x22);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar11 + 0x1e);
    *puVar11 = &PTR_DAT_110ccdb78;
    func_0x0001001148fc(puVar11 + 0x10);
    func_0x0001001148fc(puVar11 + 0xb);
    func_0x000107c60ca0(puVar11 + 8);
    func_0x0001008379c0();
    func_0x000107c60ca0(puVar11 + 2);
    return puVar11;
  }
  return puVar11;
}



/* Entry: 10b2852b4; end: 10b2852f3;  */

undefined8 * FUN_10b2852b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ccdc50;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x22);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x1e);
  *param_1 = &PTR_DAT_110ccdb78;
  func_0x0001001148fc(param_1 + 0x10);
  func_0x0001001148fc(param_1 + 0xb);
  func_0x000107c60ca0(param_1 + 8);
  func_0x0001008379c0();
  func_0x000107c60ca0(param_1 + 2);
  return param_1;
}



/* Entry: 10b2852f4; end: 10b285307;  */

void FUN_10b2852f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b285304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0x170) + 0x18))();
  return;
}



/* Entry: 10b285308; end: 10b285327;  */

void FUN_10b285308(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b28532c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b285328; end: 10b28532b;  */

void FUN_10b285328(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b28532c; end: 10b285353;  */

/* WARNING: Possible PIC construction at 0x000100bf5684: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bf5688) */

void FUN_10b28532c(long param_1)

{
  func_0x000107c2c000(param_1 + 0x170);
  func_0x000107c279a4(param_1 + 0x138);
  func_0x000107c279a4(param_1 + 0xf8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xe0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1 + 0x68);
  return;
}



/* Entry: 10b285354; end: 10b2853ff;  */

void FUN_10b285354(void)

{
  long in_x9;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if (*(char *)(in_x9 + 0x70) == '\x01') {
    func_0x000107c60dec(auStack_50,&UNK_10f73f719,in_x9 + 0x58);
    func_0x000100610910(auStack_38,auStack_50,unaff_x20 + 0xf0);
    func_0x000100066230(&stack0x000001f0,auStack_38);
    func_0x000107c60ca0(auStack_38);
    func_0x000107c60ca0(auStack_50);
  }
  else {
    func_0x000107c60ca4(&stack0x000001f0,unaff_x20 + 0xf0);
  }
  return;
}



/* Entry: 10b285400; end: 10b28544b;  */

void FUN_10b285400(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar5 = param_2[1];
  uVar4 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_18 = *(undefined8 *)(param_1 + 0x10);
  uStack_20 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  *(undefined8 *)(param_1 + 8) = uVar4;
  func_0x00010b2854bc(&uStack_20);
  return;
}



/* Entry: 10b28544c; end: 10b285477;  */

void FUN_10b28544c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[1] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 10b285478; end: 10b28548b;  */

void FUN_10b285478(void)

{
  FUN_10b28548c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b28548c; end: 10b2854e7;  */

undefined8 * FUN_10b28548c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ccdcf0;
  func_0x00010b2854bc(param_1 + 1);
  return param_1;
}



/* Entry: 10b2854e8; end: 10b2854eb;  */

undefined8 * FUN_10b2854e8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ccdd48;
  func_0x000107c2c00c(param_1 + 5);
  func_0x000107c2c000(param_1 + 3);
  func_0x000107c2c078(param_1 + 1);
  return param_1;
}



/* Entry: 10b2854ec; end: 10b2854ff;  */

void FUN_10b2854ec(void)

{
  FUN_10b285500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b285500; end: 10b285543;  */

undefined8 * FUN_10b285500(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ccdd48;
  func_0x000107c2c00c(param_1 + 5);
  func_0x000107c2c000(param_1 + 3);
  func_0x000107c2c078(param_1 + 1);
  return param_1;
}



/* Entry: 10b285544; end: 10b285547;  */

void FUN_10b285544(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b285548; end: 10b28555b;  */

void FUN_10b285548(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b28555c; end: 10b285573;  */

void FUN_10b28555c(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010b28556c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b285574; end: 10b2855ab;  */

long FUN_10b285574(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110ccdde8);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10b2855ac; end: 10b2855db;  */

void FUN_10b2855ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2855dc; end: 10b285677;  */

void FUN_10b2855dc(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 in_ZR;
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  code *extraout_x8_07;
  code *extraout_x8_08;
  undefined8 extraout_x8_09;
  code *extraout_x8_10;
  undefined8 extraout_x8_11;
  code *extraout_x8_12;
  code *extraout_x8_13;
  undefined8 extraout_x8_14;
  code *extraout_x8_15;
  code *extraout_x8_16;
  code *extraout_x8_17;
  code *extraout_x8_18;
  undefined8 uVar13;
  undefined8 *unaff_x30;
  undefined8 in_stack_00000068;
  undefined8 in_stack_000000a0;
  undefined8 ******ppppppuStack_1130;
  code *pcStack_1128;
  undefined8 ******ppppppuStack_1110;
  code *pcStack_1108;
  undefined8 *puStack_10b0;
  undefined8 *puStack_10a8;
  undefined8 uStack_10a0;
  code *pcStack_1098;
  undefined1 ******ppppppuStack_1090;
  code *pcStack_1088;
  undefined8 *puStack_1020;
  undefined8 *puStack_1018;
  undefined8 uStack_1010;
  undefined8 *puStack_1008;
  undefined1 ***pppuStack_1000;
  code *pcStack_ff8;
  undefined8 uStack_fe8;
  undefined1 *****pppppuStack_fc0;
  code *pcStack_fb8;
  undefined1 ****ppppuStack_fa0;
  code *pcStack_f98;
  undefined8 *puStack_f80;
  undefined8 *puStack_f78;
  undefined8 uStack_f70;
  code *pcStack_f68;
  undefined1 **ppuStack_f60;
  code *pcStack_f58;
  undefined8 *puStack_ec0;
  undefined8 *puStack_eb8;
  undefined8 uStack_eb0;
  code *pcStack_ea8;
  undefined1 *puStack_ea0;
  code *pcStack_e98;
  undefined8 uStack_e70;
  undefined8 uStack_e68;
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  undefined8 uStack_e50;
  undefined8 uStack_e48;
  undefined8 uStack_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined8 uStack_e28;
  undefined8 uStack_e20;
  undefined8 uStack_e18;
  undefined8 uStack_e10;
  undefined8 uStack_e08;
  undefined8 uStack_e00;
  undefined8 uStack_df8;
  undefined8 uStack_dd8;
  undefined8 uStack_d08;
  undefined8 uStack_b28;
  undefined8 ******ppppppuStack_b00;
  code *pcStack_af8;
  undefined8 ******ppppppuStack_af0;
  code *pcStack_ae8;
  undefined8 ******ppppppuStack_ad0;
  code *pcStack_ac8;
  undefined8 *puStack_a60;
  undefined8 *puStack_a58;
  undefined8 *puStack_a50;
  undefined8 *puStack_a48;
  undefined8 ******ppppppuStack_a40;
  code *pcStack_a38;
  undefined8 *puStack_9d0;
  undefined8 *puStack_9c8;
  undefined8 *puStack_9c0;
  undefined8 *puStack_9b8;
  undefined8 ******ppppppuStack_9b0;
  code *pcStack_9a8;
  undefined8 *puStack_940;
  undefined8 *puStack_938;
  undefined8 *puStack_930;
  undefined8 *puStack_928;
  undefined8 ******ppppppuStack_920;
  code *pcStack_918;
  undefined8 ******ppppppuStack_900;
  code *pcStack_8f8;
  undefined8 *puStack_8a0;
  undefined8 *puStack_898;
  undefined8 *puStack_890;
  undefined8 ******ppppppuStack_880;
  code *pcStack_878;
  undefined8 *puStack_7e0;
  undefined8 *puStack_7d8;
  undefined8 *puStack_7d0;
  undefined8 uStack_7c8;
  undefined8 ******ppppppuStack_7c0;
  code *pcStack_7b8;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 *puStack_710;
  undefined8 *puStack_708;
  undefined8 *puStack_700;
  undefined8 uStack_6f8;
  undefined8 ******ppppppuStack_6f0;
  code *pcStack_6e8;
  undefined8 *puStack_670;
  undefined8 *puStack_668;
  undefined8 uStack_658;
  undefined8 ******ppppppuStack_650;
  code *pcStack_648;
  undefined8 *puStack_5b0;
  undefined8 *puStack_5a8;
  undefined8 ******ppppppuStack_590;
  code *pcStack_588;
  undefined8 *puStack_510;
  undefined8 *puStack_508;
  undefined8 ******ppppppuStack_4f0;
  code *pcStack_4e8;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 ******ppppppuStack_460;
  code *pcStack_458;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 ******ppppppuStack_3c0;
  code *pcStack_3b8;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined8 ******ppppppuStack_330;
  code *pcStack_328;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *****pppppuStack_290;
  code *pcStack_288;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 ****ppppuStack_200;
  code *pcStack_1f8;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 ***pppuStack_160;
  code *pcStack_158;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 **ppuStack_a0;
  code *pcStack_98;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  undefined8 *puStack_10;
  code *pcStack_8;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  iVar1 = (int)param_1;
  func_0x000107c354e0();
  puVar3 = param_3;
  puVar5 = param_4;
  func_0x000107c3541c();
  (*extraout_x8)();
  if (iVar1 != 0) {
    FUN_10b286c70();
    func_0x000107c35450();
    func_0x000107c354ac();
    func_0x000107c35434();
    func_0x000107c35494();
    func_0x000107c354bc();
    do {
      func_0x000107c354a0();
      func_0x000107c354a8();
    } while (!(bool)in_ZR);
  }
  func_0x000107c35430(in_stack_00000068);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b286d60();
  func_0x00010b286dc8();
  do {
    func_0x00010b286da8();
    func_0x00010b286db0();
  } while (!(bool)in_ZR);
  func_0x00010b286da0();
  pcStack_8 = FUN_10b285678;
  puStack_30 = param_3;
  puStack_28 = param_4;
  puStack_10 = &stack0x000000a0;
  func_0x000107c3542c();
  (*extraout_x8_00)();
  if (iVar1 != 0) {
    func_0x00010b286d10();
    func_0x000107c35448();
    func_0x000107c354ac();
    func_0x000107c35434();
    func_0x000107c35494();
    func_0x000107c354b4();
    do {
      func_0x000107c354a0();
      func_0x000107c354a8();
    } while (!(bool)in_ZR);
  }
  func_0x000107c35428();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b286d60();
  func_0x00010b286dbc();
  do {
    func_0x00010b286da8();
    func_0x00010b286db0();
  } while (!(bool)in_ZR);
  func_0x00010b286da0();
  pcStack_98 = FUN_10b285700;
  puStack_c0 = param_3;
  puStack_b8 = param_4;
  ppuStack_a0 = &puStack_10;
  func_0x000107c35410();
  func_0x00010b286cc0();
  func_0x000107c35454();
  func_0x000107c354ac();
  func_0x000107c35434();
  func_0x000107c35494();
  func_0x000107c354c4();
  do {
    func_0x000107c354a0();
    func_0x000107c354a8();
  } while (!(bool)in_ZR);
  func_0x000107c35428();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b286d60();
  func_0x00010b286dd4();
  do {
    func_0x00010b286da8();
    func_0x00010b286db0();
  } while (!(bool)in_ZR);
  func_0x00010b286da0();
  pcStack_158 = FUN_10b28577c;
  puStack_180 = param_3;
  puStack_178 = param_4;
  pppuStack_160 = &ppuStack_a0;
  func_0x000107c35410();
  func_0x00010b286cf4();
  func_0x000107c35450();
  func_0x000107c354ac();
  func_0x000107c35434();
  func_0x000107c35494();
  func_0x000107c354bc();
  do {
    func_0x000107c354a0();
    func_0x000107c354a8();
  } while (!(bool)in_ZR);
  func_0x000107c35428();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286dc8();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcStack_1f8 = FUN_10b2857f8;
    puStack_220 = param_3;
    puStack_218 = param_4;
    ppppuStack_200 = &pppuStack_160;
    func_0x000107c35410();
    func_0x000107c35448();
    func_0x000107c354ac();
    func_0x000107c35434();
    func_0x000107c35494();
    func_0x000107c354b4();
    do {
      func_0x000107c354a0();
      func_0x000107c354a8();
    } while (!(bool)in_ZR);
    func_0x000107c35428();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286dbc();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcStack_288 = FUN_10b285870;
    puStack_2b0 = param_3;
    puStack_2a8 = param_4;
    pppppuStack_290 = &ppppuStack_200;
    func_0x000107c35410();
    func_0x00010b286cf4();
    func_0x000107c35450();
    func_0x000107c354ac();
    func_0x000107c35434();
    func_0x000107c35494();
    func_0x000107c354bc();
    do {
      func_0x000107c354a0();
      func_0x000107c354a8();
    } while (!(bool)in_ZR);
    func_0x000107c35428();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b286d60();
      func_0x00010b286dc8();
      do {
        func_0x00010b286da8();
        func_0x00010b286db0();
      } while (!(bool)in_ZR);
      func_0x00010b286da0();
      pcStack_328 = FUN_10b2858ec;
      puStack_350 = param_3;
      puStack_348 = param_4;
      ppppppuStack_330 = &pppppuStack_290;
      func_0x000107c35410();
      func_0x000107c35448();
      func_0x000107c354ac();
      func_0x000107c35434();
      func_0x000107c35494();
      func_0x000107c354b4();
      do {
        func_0x000107c354a0();
        func_0x000107c354a8();
      } while (!(bool)in_ZR);
      func_0x000107c35428();
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010b286d60();
      func_0x00010b286dbc();
      do {
        func_0x00010b286da8();
        func_0x00010b286db0();
      } while (!(bool)in_ZR);
      func_0x00010b286da0();
      pcStack_3b8 = FUN_10b285964;
      puStack_3e0 = param_3;
      puStack_3d8 = param_4;
      ppppppuStack_3c0 = &ppppppuStack_330;
      func_0x000107c35410();
      func_0x00010b286cf4();
      func_0x000107c35450();
      func_0x000107c354ac();
      func_0x000107c35434();
      func_0x000107c35494();
      func_0x000107c354bc();
      do {
        func_0x000107c354a0();
        func_0x000107c354a8();
      } while (!(bool)in_ZR);
      func_0x000107c35428();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010b286d60();
        func_0x00010b286dc8();
        do {
          func_0x00010b286da8();
          func_0x00010b286db0();
        } while (!(bool)in_ZR);
        func_0x00010b286da0();
        pcStack_458 = FUN_10b2859e0;
        puStack_480 = param_3;
        puStack_478 = param_4;
        ppppppuStack_460 = &ppppppuStack_3c0;
        func_0x000107c35410();
        func_0x000107c35448();
        func_0x000107c354ac();
        func_0x000107c35434();
        func_0x000107c35494();
        func_0x000107c354b4();
        do {
          func_0x000107c354a0();
          func_0x000107c354a8();
        } while (!(bool)in_ZR);
        func_0x000107c35428();
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x00010b286d60();
        func_0x00010b286dbc();
        do {
          func_0x00010b286da8();
          func_0x00010b286db0();
        } while (!(bool)in_ZR);
        func_0x00010b286da0();
        pcStack_4e8 = FUN_10b285a58;
        puStack_510 = param_3;
        puStack_508 = param_4;
        ppppppuStack_4f0 = &ppppppuStack_460;
        func_0x000107c35410();
        func_0x00010b286cf4();
        func_0x000107c35450();
        func_0x000107c354ac();
        func_0x000107c35434();
        func_0x000107c35494();
        func_0x000107c354bc();
        do {
          func_0x000107c354a0();
          func_0x000107c354a8();
        } while (!(bool)in_ZR);
        func_0x000107c35428();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010b286d60();
          func_0x00010b286dc8();
          do {
            func_0x00010b286da8();
            func_0x00010b286db0();
          } while (!(bool)in_ZR);
          func_0x00010b286da0();
          pcStack_588 = FUN_10b285ad4;
          puStack_5b0 = param_3;
          puStack_5a8 = param_4;
          ppppppuStack_590 = &ppppppuStack_4f0;
          func_0x000107c35438();
          uVar13 = *(undefined8 *)CONCAT44(uVar2,iVar1);
          func_0x000107c35414();
          func_0x000107c35444();
          func_0x000107c35454();
          func_0x000107c35460();
          func_0x000107c35490();
          func_0x000107c35494();
          func_0x000107c354c4();
          do {
            func_0x000107c354a0();
            func_0x000107c354a8();
          } while (!(bool)in_ZR);
          func_0x000107c35428();
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          func_0x00010b286d60();
          func_0x00010b286dd4();
          do {
            func_0x00010b286da8();
            func_0x00010b286db0();
          } while (!(bool)in_ZR);
          func_0x00010b286da0();
          pcStack_648 = FUN_10b285b58;
          puVar4 = param_5;
          puStack_670 = param_3;
          puStack_668 = param_4;
          uStack_658 = uVar13;
          ppppppuStack_650 = &ppppppuStack_590;
          func_0x000107c35438();
          uVar13 = *(undefined8 *)CONCAT44(uVar2,iVar1);
          func_0x000107c35414();
          func_0x000107c35450();
          func_0x000107c35460();
          func_0x000107c35490();
          func_0x000107c35494();
          func_0x000107c354bc();
          do {
            func_0x000107c354a0();
            func_0x000107c354a8();
          } while (!(bool)in_ZR);
          func_0x000107c35428();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286dc8();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            pcStack_6e8 = FUN_10b285bd8;
            puStack_710 = param_3;
            puStack_708 = param_4;
            puStack_700 = param_5;
            uStack_6f8 = uVar13;
            ppppppuStack_6f0 = &ppppppuStack_650;
            func_0x000107c35410();
            func_0x00010b286cc0();
            uStack_728 = unaff_x30[1];
            uStack_730 = *unaff_x30;
            uStack_720 = unaff_x30[2];
            unaff_x30[1] = 0;
            unaff_x30[2] = 0;
            *unaff_x30 = 0;
            func_0x000107c35488();
            func_0x000107c354ac();
            func_0x000107c35434();
            func_0x000107c35494();
            func_0x000107c354d4();
            do {
              func_0x000107c354a0();
              func_0x000107c354a8();
            } while (!(bool)in_ZR);
            func_0x000107c35428();
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286df0();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            pcStack_7b8 = FUN_10b285c78;
            puStack_7e0 = param_3;
            puStack_7d8 = param_4;
            puStack_7d0 = param_5;
            uStack_7c8 = param_7;
            ppppppuStack_7c0 = &ppppppuStack_6f0;
            func_0x000107c35410();
            func_0x00010b286cc0();
            func_0x000107c35454();
            func_0x000107c354ac();
            func_0x000107c35434();
            func_0x000107c35494();
            func_0x000107c354c4();
            do {
              func_0x000107c354a0();
              func_0x000107c354a8();
            } while (!(bool)in_ZR);
            func_0x000107c35428();
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286dd4();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            pcStack_878 = FUN_10b285cf4;
            puVar7 = puVar4;
            puStack_8a0 = param_3;
            puStack_898 = param_4;
            puStack_890 = param_5;
            ppppppuStack_880 = &ppppppuStack_7c0;
            func_0x000107c35410();
            func_0x00010b286cf4();
            func_0x000107c35450();
            func_0x000107c354ac();
            func_0x000107c35434();
            func_0x000107c35494();
            func_0x000107c354bc();
            do {
              func_0x000107c354a0();
              func_0x000107c354a8();
            } while (!(bool)in_ZR);
            func_0x000107c35428();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dc8();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              pcStack_918 = FUN_10b285d70;
              puStack_940 = param_3;
              puStack_938 = param_4;
              puStack_930 = param_5;
              puStack_928 = puVar4;
              ppppppuStack_920 = &ppppppuStack_880;
              func_0x000107c35410();
              func_0x000107c35448();
              func_0x000107c354ac();
              func_0x000107c35434();
              func_0x000107c35494();
              func_0x000107c354b4();
              do {
                func_0x000107c354a0();
                func_0x000107c354a8();
              } while (!(bool)in_ZR);
              func_0x000107c35428();
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dbc();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              pcVar10 = FUN_10b285de8;
              func_0x000107c354e0();
              puVar4 = puVar3;
              puVar6 = puVar5;
              puVar8 = puVar7;
              ppppppuStack_900 = &ppppppuStack_920;
              pcStack_8f8 = pcVar10;
              func_0x000107c3541c();
              (*extraout_x8_01)();
              if (iVar1 != 0) {
                FUN_10b286c70();
                func_0x000107c35450();
                func_0x000107c354ac();
                func_0x000107c35434();
                func_0x000107c35494();
                func_0x000107c354bc();
                do {
                  func_0x000107c354a0();
                  func_0x000107c354a8();
                } while (!(bool)in_ZR);
              }
              func_0x000107c35430(puStack_938);
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dc8();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              pcStack_9a8 = FUN_10b285e84;
              puStack_9d0 = puVar3;
              puStack_9c8 = puVar5;
              puStack_9c0 = param_5;
              puStack_9b8 = puVar7;
              ppppppuStack_9b0 = &ppppppuStack_900;
              func_0x000107c3542c();
              (*extraout_x8_02)();
              if (iVar1 != 0) {
                func_0x00010b286d10();
                func_0x000107c35448();
                func_0x000107c354ac();
                func_0x000107c35434();
                func_0x000107c35494();
                func_0x000107c354b4();
                do {
                  func_0x000107c354a0();
                  func_0x000107c354a8();
                } while (!(bool)in_ZR);
              }
              func_0x000107c35428();
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dbc();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              pcStack_a38 = FUN_10b285f0c;
              puStack_a60 = puVar3;
              puStack_a58 = puVar5;
              puStack_a50 = param_5;
              puStack_a48 = puVar7;
              ppppppuStack_a40 = &ppppppuStack_9b0;
              func_0x000107c35410();
              func_0x00010b286cc0();
              func_0x000107c35454();
              func_0x000107c354ac();
              func_0x000107c35434();
              func_0x000107c35494();
              func_0x000107c354c4();
              do {
                func_0x000107c354a0();
                func_0x000107c354a8();
              } while (!(bool)in_ZR);
              func_0x000107c35428();
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dd4();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              pcStack_af8 = FUN_10b285f88;
              ppppppuStack_b00 = &ppppppuStack_a40;
              func_0x000107c35410();
              func_0x00010b286cf4();
              func_0x000107c35450();
              func_0x000107c354ac();
              func_0x000107c35434();
              func_0x000107c35494();
              func_0x000107c354bc();
              do {
                func_0x000107c354a0();
                func_0x000107c354a8();
              } while (!(bool)in_ZR);
              func_0x000107c35428();
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dc8();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              pcVar12 = FUN_10b286004;
              func_0x000107c354e4();
              ppppppuStack_ad0 = &ppppppuStack_b00;
              pcStack_ac8 = pcVar12;
              func_0x000107c3541c();
              (*extraout_x8_03)();
              if (iVar1 != 0) {
                func_0x000107c35420();
                func_0x000107c35454();
                func_0x00010b286d80();
                func_0x000107c35484();
                func_0x000107c35494();
                func_0x000107c354c4();
                do {
                  func_0x000107c354a0();
                  func_0x000107c354a8();
                } while (!(bool)in_ZR);
              }
              func_0x000107c35430(pcVar10);
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x00010b286d60();
                func_0x00010b286dd4();
                do {
                  func_0x00010b286da8();
                  func_0x00010b286db0();
                } while (!(bool)in_ZR);
                func_0x00010b286da0();
                pcVar12 = FUN_10b2860a4;
                func_0x000107c354e4();
                ppppppuStack_ad0 = &ppppppuStack_ad0;
                pcStack_ac8 = pcVar12;
                func_0x000107c3541c();
                (*extraout_x8_04)();
                if (iVar1 != 0) {
                  func_0x000107c35420();
                  func_0x000107c35454();
                  func_0x00010b286d48();
                  func_0x00010b286d94();
                  func_0x000107c35494();
                  func_0x000107c354c4();
                  do {
                    func_0x000107c354a0();
                    func_0x000107c354a8();
                  } while (!(bool)in_ZR);
                }
                func_0x000107c35430(pcVar10);
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  func_0x00010b286dd4();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  pcVar10 = FUN_10b286144;
                  func_0x000107c354e0();
                  ppppppuStack_af0 = &ppppppuStack_ad0;
                  pcStack_ae8 = pcVar10;
                  func_0x000107c3541c();
                  (*extraout_x8_05)();
                  if (iVar1 != 0) {
                    FUN_10b286c70();
                    func_0x000107c35450();
                    func_0x00010b286d48();
                    func_0x00010b286d94();
                    func_0x000107c35494();
                    func_0x000107c354bc();
                    do {
                      func_0x000107c354a0();
                      func_0x000107c354a8();
                    } while (!(bool)in_ZR);
                  }
                  func_0x000107c35430(uStack_b28);
                  if (!(bool)in_ZR) {
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286dc8();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    pcVar10 = FUN_10b2861e0;
                    func_0x000107c354e0();
                    ppppppuStack_af0 = &ppppppuStack_af0;
                    pcStack_ae8 = pcVar10;
                    func_0x000107c3541c();
                    (*extraout_x8_06)();
                    if (iVar1 != 0) {
                      FUN_10b286c70();
                      func_0x000107c35450();
                      func_0x000107c354ac();
                      func_0x000107c35434();
                      func_0x000107c35494();
                      func_0x000107c354bc();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                    }
                    func_0x000107c35430(uStack_b28);
                    if (!(bool)in_ZR) {
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dc8();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      func_0x000107c3542c();
                      (*extraout_x8_07)();
                      if (iVar1 != 0) {
                        func_0x00010b286d10();
                        func_0x000107c35448();
                        func_0x000107c354ac();
                        func_0x000107c35434();
                        func_0x000107c35494();
                        func_0x000107c354b4();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                      }
                      func_0x000107c35428();
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dbc();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      func_0x000107c35410();
                      func_0x000107c35448();
                      func_0x000107c354ac();
                      func_0x000107c35434();
                      func_0x000107c35494();
                      func_0x000107c354b4();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                      func_0x000107c35428();
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dbc();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      func_0x000107c35438();
                      func_0x000107c35414();
                      func_0x000107c35444();
                      func_0x000107c35454();
                      func_0x000107c35460();
                      func_0x000107c35490();
                      func_0x000107c35494();
                      func_0x000107c354c4();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                      func_0x000107c35428();
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dd4();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      pcVar10 = FUN_10b286400;
                      func_0x000107c354e0();
                      func_0x000107c3541c();
                      puVar3 = (undefined8 *)&UNK_110ccea78;
                      (*extraout_x8_08)();
                      if (iVar1 != 0) {
                        FUN_10b286c70();
                        func_0x000107c35450();
                        func_0x00010b286d48();
                        puVar3 = (undefined8 *)&UNK_110ccea78;
                        func_0x00010b286d94();
                        func_0x000107c35494();
                        func_0x000107c354bc();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                      }
                      func_0x000107c35430(uStack_d08);
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dc8();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      puVar5 = puVar4;
                      puVar7 = puVar6;
                      puVar9 = puVar8;
                      pcVar12 = pcVar10;
                      func_0x000107c35440();
                      uStack_dd8 = extraout_x8_09;
                      func_0x000107c35474();
                      (*extraout_x8_10)();
                      if (iVar1 != 0) {
                        uStack_e68 = puVar3[1];
                        uStack_e70 = *puVar3;
                        uStack_e60 = puVar3[2];
                        puVar3[1] = 0;
                        puVar3[2] = 0;
                        *puVar3 = 0;
                        uStack_e50 = puVar4[1];
                        uStack_e58 = *puVar4;
                        uStack_e48 = puVar4[2];
                        puVar4[1] = 0;
                        puVar4[2] = 0;
                        *puVar4 = 0;
                        uStack_e38 = puVar6[1];
                        uStack_e40 = *puVar6;
                        uStack_e30 = puVar6[2];
                        puVar6[1] = 0;
                        puVar6[2] = 0;
                        *puVar6 = 0;
                        uStack_e20 = puVar8[1];
                        uStack_e28 = *puVar8;
                        uStack_e18 = puVar8[2];
                        *puVar8 = 0;
                        puVar8[1] = 0;
                        puVar8[2] = 0;
                        uStack_e08 = *(undefined8 *)(pcVar10 + 8);
                        uStack_e10 = *(undefined8 *)pcVar10;
                        uStack_e00 = *(undefined8 *)(pcVar10 + 0x10);
                        func_0x00010b286d6c();
                        func_0x00010b286dfc();
                        func_0x00010b286de0();
                        func_0x00010b286d80();
                        func_0x000107c35484();
                        func_0x000107c35494();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                      }
                      func_0x000107c35430(uStack_dd8);
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      func_0x000107c354dc();
                      func_0x000107c35440();
                      uStack_df8 = extraout_x8_11;
                      func_0x000107c35474();
                      (*extraout_x8_12)();
                      if (iVar1 != 0) {
                        func_0x000107c3543c();
                        func_0x000107c35488();
                        func_0x00010b286d80();
                        func_0x000107c35484();
                        func_0x000107c35494();
                        func_0x000107c354d4();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                      }
                      func_0x000107c35430(uStack_df8);
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286df0();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      func_0x000107c354e4();
                      puVar3 = puVar7;
                      puVar4 = puVar9;
                      pcVar10 = pcVar12;
                      func_0x000107c3541c();
                      (*extraout_x8_13)();
                      if (iVar1 != 0) {
                        func_0x000107c35420();
                        func_0x000107c35454();
                        func_0x00010b286d80();
                        func_0x000107c35484();
                        func_0x000107c35494();
                        func_0x000107c354c4();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                      }
                      func_0x000107c35430(uStack_e08);
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dd4();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      uStack_eb0 = 0x78;
                      pcStack_e98 = FUN_10b286724;
                      pcVar11 = pcVar10;
                      puStack_ec0 = puVar7;
                      puStack_eb8 = puVar9;
                      pcStack_ea8 = pcVar12;
                      puStack_ea0 = &stack0xfffffffffffff230;
                      func_0x000107c35410();
                      func_0x00010b286cc0();
                      func_0x000107c35454();
                      func_0x000107c354ac();
                      func_0x000107c35434();
                      func_0x000107c35494();
                      func_0x000107c354c4();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                      func_0x000107c35428();
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dd4();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      uStack_f70 = 0x78;
                      pcStack_f58 = FUN_10b2867a0;
                      puVar6 = puVar4;
                      puStack_f80 = puVar7;
                      puStack_f78 = puVar9;
                      pcStack_f68 = pcVar10;
                      ppuStack_f60 = &puStack_ea0;
                      func_0x000107c35410();
                      func_0x00010b286cf4();
                      func_0x000107c35450();
                      func_0x000107c354ac();
                      func_0x000107c35434();
                      func_0x000107c35494();
                      func_0x000107c354bc();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                      func_0x000107c35428();
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dc8();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      uStack_1010 = 0x78;
                      pcStack_ff8 = FUN_10b28681c;
                      puStack_1020 = puVar7;
                      puStack_1018 = puVar9;
                      puStack_1008 = puVar4;
                      pppuStack_1000 = &ppuStack_f60;
                      func_0x000107c35410();
                      func_0x000107c35448();
                      func_0x000107c354ac();
                      func_0x000107c35434();
                      func_0x000107c35494();
                      func_0x000107c354b4();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                      func_0x000107c35428();
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dbc();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      pcVar10 = FUN_10b286894;
                      func_0x000107c354dc();
                      ppppuStack_fa0 = &pppuStack_1000;
                      pcStack_f98 = pcVar10;
                      func_0x000107c35440();
                      uStack_fe8 = extraout_x8_14;
                      func_0x000107c35474();
                      (*extraout_x8_15)();
                      if (iVar1 != 0) {
                        func_0x000107c3543c();
                        func_0x000107c35488();
                        func_0x00010b286d80();
                        func_0x000107c35484();
                        func_0x000107c35494();
                        func_0x000107c354d4();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                      }
                      func_0x000107c35430(uStack_fe8);
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286df0();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      pcVar10 = FUN_10b286940;
                      func_0x000107c354e4();
                      puVar4 = puVar3;
                      pppppuStack_fc0 = &ppppuStack_fa0;
                      pcStack_fb8 = pcVar10;
                      func_0x000107c3541c();
                      (*extraout_x8_16)();
                      if (iVar1 != 0) {
                        func_0x000107c35420();
                        func_0x000107c35454();
                        func_0x00010b286d80();
                        func_0x000107c35484();
                        func_0x000107c35494();
                        func_0x000107c354c4();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                      }
                      func_0x000107c35430(pcStack_ff8);
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dd4();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      uStack_10a0 = 0x78;
                      pcStack_1088 = FUN_10b2869e0;
                      puStack_10b0 = puVar3;
                      puStack_10a8 = puVar6;
                      pcStack_1098 = pcVar11;
                      ppppppuStack_1090 = &pppppuStack_fc0;
                      func_0x000107c35410();
                      func_0x00010b286cf4();
                      func_0x000107c35450();
                      func_0x000107c354ac();
                      func_0x000107c35434();
                      func_0x000107c35494();
                      func_0x000107c354bc();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                      func_0x000107c35428();
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dc8();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      pcStack_1128 = FUN_10b286a5c;
                      ppppppuStack_1130 = &ppppppuStack_1090;
                      func_0x000107c35410();
                      func_0x000107c35448();
                      func_0x000107c354ac();
                      puVar3 = (undefined8 *)&UNK_110cceed8;
                      func_0x000107c35434();
                      func_0x000107c35494();
                      func_0x000107c354b4();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                      func_0x000107c35428();
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dbc();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      pcVar10 = FUN_10b286ad4;
                      func_0x000107c354e0();
                      ppppppuStack_1110 = &ppppppuStack_1130;
                      pcStack_1108 = pcVar10;
                      func_0x000107c3541c();
                      (*extraout_x8_17)();
                      if (iVar1 != 0) {
                        FUN_10b286c70();
                        func_0x000107c35450();
                        func_0x000107c354ac();
                        func_0x000107c35434();
                        func_0x000107c35494();
                        func_0x000107c354bc();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                      }
                      func_0x000107c35430(puVar6);
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dc8();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      func_0x000107c3542c();
                      (*extraout_x8_18)();
                      if (iVar1 != 0) {
                        func_0x00010b286d10();
                        func_0x000107c35448();
                        func_0x000107c354ac();
                        func_0x000107c35434();
                        func_0x000107c35494();
                        func_0x000107c354b4();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                      }
                      func_0x000107c35428();
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dbc();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      func_0x000107c35410();
                      func_0x000107c35448();
                      func_0x000107c354ac();
                      func_0x000107c35434();
                      func_0x000107c35494();
                      func_0x000107c354b4();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                      func_0x000107c35428();
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dbc();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      puVar3[1] = 0;
                      puVar3[2] = 0;
                      *puVar3 = 0;
                      *puVar5 = 0;
                      puVar5[1] = 0;
                      puVar5[2] = 0;
                      puVar4[1] = 0;
                      puVar4[2] = 0;
                      *puVar4 = 0;
                      return;
                    }
                  }
                  return;
                }
              }
              return;
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10b285678; end: 10b2856ff;  */

/* WARNING: Possible PIC construction at 0x00010b285e20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b28617c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286b0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b28643c) */
/* WARNING: Removing unreachable block (ram,0x00010b286458) */
/* WARNING: Removing unreachable block (ram,0x00010b28621c) */
/* WARNING: Removing unreachable block (ram,0x00010b286238) */
/* WARNING: Removing unreachable block (ram,0x00010b286180) */
/* WARNING: Removing unreachable block (ram,0x00010b28619c) */
/* WARNING: Removing unreachable block (ram,0x00010b285e24) */
/* WARNING: Removing unreachable block (ram,0x00010b285e40) */
/* WARNING: Removing unreachable block (ram,0x00010b286b10) */
/* WARNING: Removing unreachable block (ram,0x00010b286b2c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10b285678(int param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  code *extraout_x8_07;
  undefined8 extraout_x8_08;
  code *extraout_x8_09;
  undefined8 extraout_x8_10;
  code *extraout_x8_11;
  code *extraout_x8_12;
  undefined8 extraout_x8_13;
  code *extraout_x8_14;
  code *extraout_x8_15;
  code *extraout_x8_16;
  code *extraout_x8_17;
  undefined8 unaff_x21;
  undefined8 uVar13;
  undefined1 auStack_12d0 [96];
  undefined8 *puStack_1270;
  undefined8 *puStack_1268;
  undefined8 uStack_1260;
  undefined8 *puStack_1258;
  undefined8 *******pppppppuStack_1250;
  code *pcStack_1248;
  undefined8 *puStack_11e0;
  undefined8 *puStack_11d8;
  undefined8 uStack_11d0;
  undefined8 *puStack_11c8;
  undefined8 *******pppppppuStack_11c0;
  code *pcStack_11b8;
  undefined1 auStack_11b0 [96];
  undefined8 *puStack_1150;
  undefined8 *puStack_1148;
  undefined8 uStack_1140;
  undefined8 *puStack_1138;
  undefined1 *******pppppppuStack_1130;
  code *pcStack_1128;
  undefined8 *******pppppppuStack_1110;
  code *pcStack_1108;
  undefined8 *puStack_10b0;
  undefined8 *puStack_10a8;
  undefined8 uStack_10a0;
  code *pcStack_1098;
  undefined1 ******ppppppuStack_1090;
  code *pcStack_1088;
  undefined8 *puStack_1020;
  undefined8 *puStack_1018;
  undefined8 uStack_1010;
  undefined8 *puStack_1008;
  undefined1 ***pppuStack_1000;
  code *pcStack_ff8;
  undefined8 uStack_fe8;
  undefined1 *****pppppuStack_fc0;
  code *pcStack_fb8;
  undefined1 ****ppppuStack_fa0;
  code *pcStack_f98;
  undefined8 *puStack_f80;
  undefined8 *puStack_f78;
  undefined8 uStack_f70;
  code *pcStack_f68;
  undefined1 **ppuStack_f60;
  code *pcStack_f58;
  undefined8 *puStack_ec0;
  undefined8 *puStack_eb8;
  undefined8 uStack_eb0;
  code *pcStack_ea8;
  undefined1 *puStack_ea0;
  code *pcStack_e98;
  undefined8 uStack_e70;
  undefined8 uStack_e68;
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  undefined8 uStack_e50;
  undefined8 uStack_e48;
  undefined8 uStack_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined8 uStack_e28;
  undefined8 uStack_e20;
  undefined8 uStack_e18;
  undefined8 uStack_e10;
  undefined8 uStack_e08;
  undefined8 uStack_e00;
  undefined8 uStack_df8;
  undefined8 uStack_dd8;
  undefined1 auStack_d70 [104];
  undefined8 uStack_d08;
  undefined8 *puStack_ce0;
  undefined8 *puStack_cd8;
  undefined1 ****ppppuStack_cd0;
  code *pcStack_cc8;
  undefined1 ***pppuStack_cc0;
  code *pcStack_cb8;
  undefined8 *puStack_c50;
  undefined8 *puStack_c48;
  undefined8 *puStack_c40;
  undefined8 *puStack_c38;
  undefined1 **ppuStack_c30;
  code *pcStack_c28;
  undefined8 *puStack_bc0;
  undefined8 *puStack_bb8;
  undefined8 *puStack_bb0;
  undefined8 *puStack_ba8;
  undefined1 *puStack_ba0;
  code *pcStack_b98;
  undefined1 auStack_b90 [104];
  undefined8 uStack_b28;
  undefined8 *puStack_b20;
  undefined8 *puStack_b18;
  undefined8 *puStack_b10;
  code *pcStack_b08;
  undefined8 *******pppppppuStack_b00;
  code *pcStack_af8;
  undefined8 *******pppppppuStack_af0;
  code *pcStack_ae8;
  undefined8 *******pppppppuStack_ad0;
  code *pcStack_ac8;
  undefined8 *puStack_a60;
  undefined8 *puStack_a58;
  undefined8 *puStack_a50;
  undefined8 *puStack_a48;
  undefined8 *******pppppppuStack_a40;
  code *pcStack_a38;
  undefined8 *puStack_9d0;
  undefined8 *puStack_9c8;
  undefined8 *puStack_9c0;
  undefined8 *puStack_9b8;
  undefined8 *******pppppppuStack_9b0;
  code *pcStack_9a8;
  undefined1 auStack_9a0 [96];
  undefined8 *******pppppppuStack_920;
  code *pcStack_918;
  undefined8 *******pppppppuStack_900;
  code *pcStack_8f8;
  undefined8 *******pppppppuStack_880;
  code *pcStack_878;
  undefined8 *******pppppppuStack_7c0;
  code *pcStack_7b8;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 *******pppppppuStack_6f0;
  code *pcStack_6e8;
  undefined8 *******pppppppuStack_650;
  code *pcStack_648;
  undefined8 *******pppppppuStack_590;
  code *pcStack_588;
  undefined8 *******pppppppuStack_4f0;
  code *pcStack_4e8;
  undefined1 *******pppppppuStack_460;
  code *pcStack_458;
  undefined1 ******ppppppuStack_3c0;
  code *pcStack_3b8;
  undefined1 *****pppppuStack_330;
  code *pcStack_328;
  undefined1 ****ppppuStack_290;
  code *pcStack_288;
  undefined1 ***pppuStack_200;
  code *pcStack_1f8;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  undefined1 *puStack_a0;
  code *pcStack_98;
  
  func_0x000107c3542c();
  (*extraout_x8)();
  if (param_1 != 0) {
    func_0x00010b286d10();
    func_0x000107c35448();
    func_0x000107c354ac();
    func_0x000107c35434();
    func_0x000107c35494();
    func_0x000107c354b4();
    do {
      func_0x000107c354a0();
      func_0x000107c354a8();
    } while (!(bool)in_ZR);
  }
  func_0x000107c35428();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b286d60();
  func_0x00010b286dbc();
  do {
    func_0x00010b286da8();
    func_0x00010b286db0();
  } while (!(bool)in_ZR);
  func_0x00010b286da0();
  pcStack_98 = FUN_10b285700;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x000107c35410();
  func_0x00010b286cc0();
  func_0x000107c35454();
  func_0x000107c354ac();
  func_0x000107c35434();
  func_0x000107c35494();
  func_0x000107c354c4();
  do {
    func_0x000107c354a0();
    func_0x000107c354a8();
  } while (!(bool)in_ZR);
  func_0x000107c35428();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b286d60();
  func_0x00010b286dd4();
  do {
    func_0x00010b286da8();
    func_0x00010b286db0();
  } while (!(bool)in_ZR);
  func_0x00010b286da0();
  pcStack_158 = FUN_10b28577c;
  ppuStack_160 = &puStack_a0;
  func_0x000107c35410();
  func_0x00010b286cf4();
  func_0x000107c35450();
  func_0x000107c354ac();
  func_0x000107c35434();
  func_0x000107c35494();
  func_0x000107c354bc();
  do {
    func_0x000107c354a0();
    func_0x000107c354a8();
  } while (!(bool)in_ZR);
  func_0x000107c35428();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286dc8();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcStack_1f8 = FUN_10b2857f8;
    pppuStack_200 = &ppuStack_160;
    func_0x000107c35410();
    func_0x000107c35448();
    func_0x000107c354ac();
    func_0x000107c35434();
    func_0x000107c35494();
    func_0x000107c354b4();
    do {
      func_0x000107c354a0();
      func_0x000107c354a8();
    } while (!(bool)in_ZR);
    func_0x000107c35428();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286dbc();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcStack_288 = FUN_10b285870;
    ppppuStack_290 = &pppuStack_200;
    func_0x000107c35410();
    func_0x00010b286cf4();
    func_0x000107c35450();
    func_0x000107c354ac();
    func_0x000107c35434();
    func_0x000107c35494();
    func_0x000107c354bc();
    do {
      func_0x000107c354a0();
      func_0x000107c354a8();
    } while (!(bool)in_ZR);
    func_0x000107c35428();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b286d60();
      func_0x00010b286dc8();
      do {
        func_0x00010b286da8();
        func_0x00010b286db0();
      } while (!(bool)in_ZR);
      func_0x00010b286da0();
      pcStack_328 = FUN_10b2858ec;
      pppppuStack_330 = &ppppuStack_290;
      func_0x000107c35410();
      func_0x000107c35448();
      func_0x000107c354ac();
      func_0x000107c35434();
      func_0x000107c35494();
      func_0x000107c354b4();
      do {
        func_0x000107c354a0();
        func_0x000107c354a8();
      } while (!(bool)in_ZR);
      func_0x000107c35428();
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010b286d60();
      func_0x00010b286dbc();
      do {
        func_0x00010b286da8();
        func_0x00010b286db0();
      } while (!(bool)in_ZR);
      func_0x00010b286da0();
      pcStack_3b8 = FUN_10b285964;
      ppppppuStack_3c0 = &pppppuStack_330;
      func_0x000107c35410();
      func_0x00010b286cf4();
      func_0x000107c35450();
      func_0x000107c354ac();
      func_0x000107c35434();
      func_0x000107c35494();
      func_0x000107c354bc();
      do {
        func_0x000107c354a0();
        func_0x000107c354a8();
      } while (!(bool)in_ZR);
      func_0x000107c35428();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010b286d60();
        func_0x00010b286dc8();
        do {
          func_0x00010b286da8();
          func_0x00010b286db0();
        } while (!(bool)in_ZR);
        func_0x00010b286da0();
        pcStack_458 = FUN_10b2859e0;
        pppppppuStack_460 = &ppppppuStack_3c0;
        func_0x000107c35410();
        func_0x000107c35448();
        func_0x000107c354ac();
        func_0x000107c35434();
        func_0x000107c35494();
        func_0x000107c354b4();
        do {
          func_0x000107c354a0();
          func_0x000107c354a8();
        } while (!(bool)in_ZR);
        func_0x000107c35428();
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x00010b286d60();
        func_0x00010b286dbc();
        do {
          func_0x00010b286da8();
          func_0x00010b286db0();
        } while (!(bool)in_ZR);
        func_0x00010b286da0();
        pcStack_4e8 = FUN_10b285a58;
        pppppppuStack_4f0 = &pppppppuStack_460;
        func_0x000107c35410();
        func_0x00010b286cf4();
        func_0x000107c35450();
        func_0x000107c354ac();
        func_0x000107c35434();
        func_0x000107c35494();
        func_0x000107c354bc();
        do {
          func_0x000107c354a0();
          func_0x000107c354a8();
        } while (!(bool)in_ZR);
        func_0x000107c35428();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010b286d60();
          func_0x00010b286dc8();
          do {
            func_0x00010b286da8();
            func_0x00010b286db0();
          } while (!(bool)in_ZR);
          func_0x00010b286da0();
          pcStack_588 = FUN_10b285ad4;
          pppppppuStack_590 = &pppppppuStack_4f0;
          func_0x000107c35438();
          func_0x000107c35414();
          func_0x000107c35444();
          func_0x000107c35454();
          func_0x000107c35460();
          func_0x000107c35490();
          func_0x000107c35494();
          func_0x000107c354c4();
          do {
            func_0x000107c354a0();
            func_0x000107c354a8();
          } while (!(bool)in_ZR);
          func_0x000107c35428();
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          func_0x00010b286d60();
          func_0x00010b286dd4();
          do {
            func_0x00010b286da8();
            func_0x00010b286db0();
          } while (!(bool)in_ZR);
          func_0x00010b286da0();
          pcStack_648 = FUN_10b285b58;
          puVar3 = param_5;
          pppppppuStack_650 = &pppppppuStack_590;
          func_0x000107c35438();
          func_0x000107c35414();
          func_0x000107c35450();
          func_0x000107c35460();
          func_0x000107c35490();
          func_0x000107c35494();
          func_0x000107c354bc();
          do {
            func_0x000107c354a0();
            func_0x000107c354a8();
          } while (!(bool)in_ZR);
          func_0x000107c35428();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286dc8();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            pcStack_6e8 = FUN_10b285bd8;
            pppppppuStack_6f0 = &pppppppuStack_650;
            func_0x000107c35410();
            func_0x00010b286cc0();
            uStack_728 = param_6[1];
            uStack_730 = *param_6;
            uStack_720 = param_6[2];
            param_6[1] = 0;
            param_6[2] = 0;
            *param_6 = 0;
            func_0x000107c35488();
            func_0x000107c354ac();
            func_0x000107c35434();
            func_0x000107c35494();
            func_0x000107c354d4();
            do {
              func_0x000107c354a0();
              func_0x000107c354a8();
            } while (!(bool)in_ZR);
            func_0x000107c35428();
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286df0();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            pcStack_7b8 = FUN_10b285c78;
            pppppppuStack_7c0 = &pppppppuStack_6f0;
            func_0x000107c35410();
            func_0x00010b286cc0();
            func_0x000107c35454();
            func_0x000107c354ac();
            func_0x000107c35434();
            func_0x000107c35494();
            func_0x000107c354c4();
            do {
              func_0x000107c354a0();
              func_0x000107c354a8();
            } while (!(bool)in_ZR);
            func_0x000107c35428();
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286dd4();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            pcStack_878 = FUN_10b285cf4;
            pppppppuStack_880 = &pppppppuStack_7c0;
            func_0x000107c35410();
            func_0x00010b286cf4();
            func_0x000107c35450();
            func_0x000107c354ac();
            func_0x000107c35434();
            func_0x000107c35494();
            func_0x000107c354bc();
            do {
              func_0x000107c354a0();
              func_0x000107c354a8();
            } while (!(bool)in_ZR);
            func_0x000107c35428();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dc8();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              pcStack_918 = FUN_10b285d70;
              pppppppuStack_920 = &pppppppuStack_880;
              func_0x000107c35410();
              func_0x000107c35448();
              func_0x000107c354ac();
              puVar2 = (undefined8 *)&UNK_110cce4d8;
              func_0x000107c35434();
              func_0x000107c35494();
              func_0x000107c354b4();
              do {
                func_0x000107c354a0();
                func_0x000107c354a8();
              } while (!(bool)in_ZR);
              func_0x000107c35428();
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dbc();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              pcVar10 = FUN_10b285de8;
              func_0x000107c354e0();
              puVar4 = param_3;
              puVar6 = param_4;
              puVar8 = puVar3;
              pppppppuStack_900 = &pppppppuStack_920;
              pcStack_8f8 = pcVar10;
              func_0x000107c3541c();
              (*extraout_x8_00)();
              puVar1 = auStack_9a0;
              if (param_1 == 0) {
                func_0x000107c35430(unaff_x21);
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x00010b286d60();
                func_0x00010b286dc8();
                do {
                  func_0x00010b286da8();
                  func_0x00010b286db0();
                } while (!(bool)in_ZR);
                func_0x00010b286da0();
                pcStack_9a8 = FUN_10b285e84;
                puStack_9d0 = param_3;
                puStack_9c8 = param_4;
                puStack_9c0 = param_5;
                puStack_9b8 = puVar3;
                pppppppuStack_9b0 = &pppppppuStack_900;
                func_0x000107c3542c();
                (*extraout_x8_01)();
                if (param_1 != 0) {
                  func_0x00010b286d10();
                  func_0x000107c35448();
                  func_0x000107c354ac();
                  func_0x000107c35434();
                  func_0x000107c35494();
                  func_0x000107c354b4();
                  do {
                    func_0x000107c354a0();
                    func_0x000107c354a8();
                  } while (!(bool)in_ZR);
                }
                func_0x000107c35428();
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x00010b286d60();
                func_0x00010b286dbc();
                do {
                  func_0x00010b286da8();
                  func_0x00010b286db0();
                } while (!(bool)in_ZR);
                func_0x00010b286da0();
                pcStack_a38 = FUN_10b285f0c;
                puStack_a60 = param_3;
                puStack_a58 = param_4;
                puStack_a50 = param_5;
                puStack_a48 = puVar3;
                pppppppuStack_a40 = &pppppppuStack_9b0;
                func_0x000107c35410();
                func_0x00010b286cc0();
                func_0x000107c35454();
                func_0x000107c354ac();
                func_0x000107c35434();
                func_0x000107c35494();
                func_0x000107c354c4();
                do {
                  func_0x000107c354a0();
                  func_0x000107c354a8();
                } while (!(bool)in_ZR);
                func_0x000107c35428();
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x00010b286d60();
                func_0x00010b286dd4();
                do {
                  func_0x00010b286da8();
                  func_0x00010b286db0();
                } while (!(bool)in_ZR);
                func_0x00010b286da0();
                pcStack_af8 = FUN_10b285f88;
                puStack_b20 = param_3;
                puStack_b18 = param_4;
                puStack_b10 = param_5;
                pcStack_b08 = pcVar10;
                pppppppuStack_b00 = &pppppppuStack_a40;
                func_0x000107c35410();
                func_0x00010b286cf4();
                func_0x000107c35450();
                func_0x000107c354ac();
                func_0x000107c35434();
                func_0x000107c35494();
                func_0x000107c354bc();
                do {
                  func_0x000107c354a0();
                  func_0x000107c354a8();
                } while (!(bool)in_ZR);
                func_0x000107c35428();
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x00010b286d60();
                func_0x00010b286dc8();
                do {
                  func_0x00010b286da8();
                  func_0x00010b286db0();
                } while (!(bool)in_ZR);
                func_0x00010b286da0();
                pcVar10 = FUN_10b286004;
                func_0x000107c354e4();
                pppppppuStack_ad0 = &pppppppuStack_b00;
                pcStack_ac8 = pcVar10;
                func_0x000107c3541c();
                (*extraout_x8_02)();
                if (param_1 != 0) {
                  func_0x000107c35420();
                  func_0x000107c35454();
                  func_0x00010b286d80();
                  func_0x000107c35484();
                  func_0x000107c35494();
                  func_0x000107c354c4();
                  do {
                    func_0x000107c354a0();
                    func_0x000107c354a8();
                  } while (!(bool)in_ZR);
                }
                func_0x000107c35430(pcStack_b08);
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  func_0x00010b286dd4();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  pcVar10 = FUN_10b2860a4;
                  func_0x000107c354e4();
                  pppppppuStack_ad0 = &pppppppuStack_ad0;
                  pcStack_ac8 = pcVar10;
                  func_0x000107c3541c();
                  puVar2 = (undefined8 *)&UNK_110cce7f8;
                  (*extraout_x8_03)();
                  if (param_1 != 0) {
                    func_0x000107c35420();
                    func_0x000107c35454();
                    func_0x00010b286d48();
                    puVar2 = (undefined8 *)&UNK_110cce7f8;
                    func_0x00010b286d94();
                    func_0x000107c35494();
                    func_0x000107c354c4();
                    do {
                      func_0x000107c354a0();
                      func_0x000107c354a8();
                    } while (!(bool)in_ZR);
                  }
                  func_0x000107c35430(pcStack_b08);
                  if (!(bool)in_ZR) {
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286dd4();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    pcVar10 = FUN_10b286144;
                    func_0x000107c354e0();
                    puVar5 = puVar4;
                    puVar7 = puVar6;
                    pppppppuStack_af0 = &pppppppuStack_ad0;
                    pcStack_ae8 = pcVar10;
                    func_0x000107c3541c();
                    puVar3 = (undefined8 *)&UNK_110cce848;
                    (*extraout_x8_04)();
                    puVar1 = auStack_b90;
                    param_4 = puVar6;
                    param_3 = puVar4;
                    if (param_1 == 0) {
                      func_0x000107c35430(uStack_b28);
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dc8();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      pcVar10 = FUN_10b2861e0;
                      func_0x000107c354e0();
                      puVar4 = puVar5;
                      puVar6 = puVar7;
                      puVar9 = puVar8;
                      pppppppuStack_af0 = &pppppppuStack_af0;
                      pcStack_ae8 = pcVar10;
                      func_0x000107c3541c();
                      (*extraout_x8_05)();
                      puVar1 = auStack_b90;
                      param_4 = puVar7;
                      param_3 = puVar5;
                      puVar2 = puVar3;
                      if (param_1 == 0) {
                        func_0x000107c35430(uStack_b28);
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286dc8();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        pcStack_b98 = FUN_10b28627c;
                        puStack_bc0 = puVar5;
                        puStack_bb8 = puVar7;
                        puStack_bb0 = param_5;
                        puStack_ba8 = puVar8;
                        puStack_ba0 = (undefined1 *)&pppppppuStack_af0;
                        func_0x000107c3542c();
                        (*extraout_x8_06)();
                        if (param_1 != 0) {
                          func_0x00010b286d10();
                          func_0x000107c35448();
                          func_0x000107c354ac();
                          func_0x000107c35434();
                          func_0x000107c35494();
                          func_0x000107c354b4();
                          do {
                            func_0x000107c354a0();
                            func_0x000107c354a8();
                          } while (!(bool)in_ZR);
                        }
                        func_0x000107c35428();
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286dbc();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        pcStack_c28 = FUN_10b286304;
                        param_4 = puVar6;
                        puStack_c50 = puVar5;
                        puStack_c48 = puVar7;
                        puStack_c40 = param_5;
                        puStack_c38 = puVar8;
                        ppuStack_c30 = &puStack_ba0;
                        func_0x000107c35410();
                        func_0x000107c35448();
                        func_0x000107c354ac();
                        func_0x000107c35434();
                        func_0x000107c35494();
                        func_0x000107c354b4();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                        func_0x000107c35428();
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286dbc();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        puVar1 = auStack_d70;
                        pcStack_cb8 = FUN_10b28637c;
                        puStack_ce0 = puVar5;
                        puStack_cd8 = puVar7;
                        ppppuStack_cd0 = (undefined1 ****)param_5;
                        pcStack_cc8 = (code *)puVar6;
                        pppuStack_cc0 = &ppuStack_c30;
                        func_0x000107c35438();
                        func_0x000107c35414();
                        func_0x000107c35444();
                        func_0x000107c35454();
                        func_0x000107c35460();
                        puVar2 = (undefined8 *)&UNK_110ccea28;
                        func_0x000107c35490();
                        func_0x000107c35494();
                        func_0x000107c354c4();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                        func_0x000107c35428();
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286dd4();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        pcVar10 = FUN_10b286400;
                        func_0x000107c354e0();
                        puVar6 = puVar4;
                        puVar8 = param_4;
                        ppppuStack_cd0 = &pppuStack_cc0;
                        pcStack_cc8 = pcVar10;
                        func_0x000107c3541c();
                        puVar3 = (undefined8 *)&UNK_110ccea78;
                        (*extraout_x8_07)();
                        param_3 = puVar4;
                        if (param_1 == 0) {
                          func_0x000107c35430(uStack_d08);
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          func_0x00010b286dc8();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          param_3 = puVar6;
                          puVar2 = puVar8;
                          puVar4 = puVar9;
                          pcVar11 = pcVar10;
                          func_0x000107c35440();
                          uStack_dd8 = extraout_x8_08;
                          func_0x000107c35474();
                          (*extraout_x8_09)();
                          if (param_1 != 0) {
                            uStack_e68 = puVar3[1];
                            uStack_e70 = *puVar3;
                            uStack_e60 = puVar3[2];
                            puVar3[1] = 0;
                            puVar3[2] = 0;
                            *puVar3 = 0;
                            uStack_e50 = puVar6[1];
                            uStack_e58 = *puVar6;
                            uStack_e48 = puVar6[2];
                            puVar6[1] = 0;
                            puVar6[2] = 0;
                            *puVar6 = 0;
                            uStack_e38 = puVar8[1];
                            uStack_e40 = *puVar8;
                            uStack_e30 = puVar8[2];
                            puVar8[1] = 0;
                            puVar8[2] = 0;
                            *puVar8 = 0;
                            uStack_e20 = puVar9[1];
                            uStack_e28 = *puVar9;
                            uStack_e18 = puVar9[2];
                            *puVar9 = 0;
                            puVar9[1] = 0;
                            puVar9[2] = 0;
                            uStack_e08 = *(undefined8 *)(pcVar10 + 8);
                            uStack_e10 = *(undefined8 *)pcVar10;
                            uStack_e00 = *(undefined8 *)(pcVar10 + 0x10);
                            func_0x00010b286d6c();
                            func_0x00010b286dfc();
                            func_0x00010b286de0();
                            func_0x00010b286d80();
                            func_0x000107c35484();
                            func_0x000107c35494();
                            do {
                              func_0x000107c354a0();
                              func_0x000107c354a8();
                            } while (!(bool)in_ZR);
                          }
                          func_0x000107c35430(uStack_dd8);
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          func_0x000107c354dc();
                          func_0x000107c35440();
                          uStack_df8 = extraout_x8_10;
                          func_0x000107c35474();
                          (*extraout_x8_11)();
                          if (param_1 != 0) {
                            func_0x000107c3543c();
                            func_0x000107c35488();
                            func_0x00010b286d80();
                            func_0x000107c35484();
                            func_0x000107c35494();
                            func_0x000107c354d4();
                            do {
                              func_0x000107c354a0();
                              func_0x000107c354a8();
                            } while (!(bool)in_ZR);
                          }
                          func_0x000107c35430(uStack_df8);
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          func_0x00010b286df0();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          func_0x000107c354e4();
                          puVar3 = puVar2;
                          puVar6 = puVar4;
                          pcVar10 = pcVar11;
                          func_0x000107c3541c();
                          (*extraout_x8_12)();
                          if (param_1 != 0) {
                            func_0x000107c35420();
                            func_0x000107c35454();
                            func_0x00010b286d80();
                            func_0x000107c35484();
                            func_0x000107c35494();
                            func_0x000107c354c4();
                            do {
                              func_0x000107c354a0();
                              func_0x000107c354a8();
                            } while (!(bool)in_ZR);
                          }
                          func_0x000107c35430(uStack_e08);
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          func_0x00010b286dd4();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          uStack_eb0 = 0x78;
                          pcStack_e98 = FUN_10b286724;
                          pcVar12 = pcVar10;
                          puStack_ec0 = puVar2;
                          puStack_eb8 = puVar4;
                          pcStack_ea8 = pcVar11;
                          puStack_ea0 = &stack0xfffffffffffff230;
                          func_0x000107c35410();
                          func_0x00010b286cc0();
                          func_0x000107c35454();
                          func_0x000107c354ac();
                          func_0x000107c35434();
                          func_0x000107c35494();
                          func_0x000107c354c4();
                          do {
                            func_0x000107c354a0();
                            func_0x000107c354a8();
                          } while (!(bool)in_ZR);
                          func_0x000107c35428();
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          func_0x00010b286dd4();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          uStack_f70 = 0x78;
                          pcStack_f58 = FUN_10b2867a0;
                          puVar8 = puVar6;
                          puStack_f80 = puVar2;
                          puStack_f78 = puVar4;
                          pcStack_f68 = pcVar10;
                          ppuStack_f60 = &puStack_ea0;
                          func_0x000107c35410();
                          func_0x00010b286cf4();
                          func_0x000107c35450();
                          func_0x000107c354ac();
                          func_0x000107c35434();
                          func_0x000107c35494();
                          func_0x000107c354bc();
                          do {
                            func_0x000107c354a0();
                            func_0x000107c354a8();
                          } while (!(bool)in_ZR);
                          func_0x000107c35428();
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          func_0x00010b286dc8();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          uStack_1010 = 0x78;
                          pcStack_ff8 = FUN_10b28681c;
                          puStack_1020 = puVar2;
                          puStack_1018 = puVar4;
                          puStack_1008 = puVar6;
                          pppuStack_1000 = &ppuStack_f60;
                          func_0x000107c35410();
                          func_0x000107c35448();
                          func_0x000107c354ac();
                          func_0x000107c35434();
                          func_0x000107c35494();
                          func_0x000107c354b4();
                          do {
                            func_0x000107c354a0();
                            func_0x000107c354a8();
                          } while (!(bool)in_ZR);
                          func_0x000107c35428();
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          func_0x00010b286dbc();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          pcVar10 = FUN_10b286894;
                          func_0x000107c354dc();
                          ppppuStack_fa0 = &pppuStack_1000;
                          pcStack_f98 = pcVar10;
                          func_0x000107c35440();
                          uStack_fe8 = extraout_x8_13;
                          func_0x000107c35474();
                          (*extraout_x8_14)();
                          if (param_1 != 0) {
                            func_0x000107c3543c();
                            func_0x000107c35488();
                            func_0x00010b286d80();
                            func_0x000107c35484();
                            func_0x000107c35494();
                            func_0x000107c354d4();
                            do {
                              func_0x000107c354a0();
                              func_0x000107c354a8();
                            } while (!(bool)in_ZR);
                          }
                          func_0x000107c35430(uStack_fe8);
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          func_0x00010b286df0();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          pcVar10 = FUN_10b286940;
                          func_0x000107c354e4();
                          param_4 = puVar3;
                          puVar2 = puVar8;
                          pppppuStack_fc0 = &ppppuStack_fa0;
                          pcStack_fb8 = pcVar10;
                          func_0x000107c3541c();
                          (*extraout_x8_15)();
                          if (param_1 != 0) {
                            func_0x000107c35420();
                            func_0x000107c35454();
                            func_0x00010b286d80();
                            func_0x000107c35484();
                            func_0x000107c35494();
                            func_0x000107c354c4();
                            do {
                              func_0x000107c354a0();
                              func_0x000107c354a8();
                            } while (!(bool)in_ZR);
                          }
                          func_0x000107c35430(pcStack_ff8);
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          func_0x00010b286dd4();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          uStack_10a0 = 0x78;
                          pcStack_1088 = FUN_10b2869e0;
                          puVar4 = puVar2;
                          puStack_10b0 = puVar3;
                          puStack_10a8 = puVar8;
                          pcStack_1098 = pcVar12;
                          ppppppuStack_1090 = &pppppuStack_fc0;
                          func_0x000107c35410();
                          func_0x00010b286cf4();
                          func_0x000107c35450();
                          func_0x000107c354ac();
                          func_0x000107c35434();
                          func_0x000107c35494();
                          func_0x000107c354bc();
                          do {
                            func_0x000107c354a0();
                            func_0x000107c354a8();
                          } while (!(bool)in_ZR);
                          func_0x000107c35428();
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          func_0x00010b286dc8();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          puVar1 = auStack_11b0;
                          uStack_1140 = 0x78;
                          pcStack_1128 = FUN_10b286a5c;
                          puStack_1150 = puVar3;
                          puStack_1148 = puVar8;
                          puStack_1138 = puVar2;
                          pppppppuStack_1130 = &ppppppuStack_1090;
                          func_0x000107c35410();
                          func_0x000107c35448();
                          func_0x000107c354ac();
                          puVar2 = (undefined8 *)&UNK_110cceed8;
                          func_0x000107c35434();
                          func_0x000107c35494();
                          func_0x000107c354b4();
                          do {
                            func_0x000107c354a0();
                            func_0x000107c354a8();
                          } while (!(bool)in_ZR);
                          func_0x000107c35428();
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          func_0x00010b286dbc();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          pcVar10 = FUN_10b286ad4;
                          func_0x000107c354e0();
                          pppppppuStack_1110 = &pppppppuStack_1130;
                          pcStack_1108 = pcVar10;
                          func_0x000107c3541c();
                          (*extraout_x8_16)();
                          if (param_1 == 0) {
                            func_0x000107c35430(puStack_1148);
                            if ((bool)in_ZR) {
                              return;
                            }
                            ___stack_chk_fail();
                            func_0x00010b286d60();
                            func_0x00010b286dc8();
                            do {
                              func_0x00010b286da8();
                              func_0x00010b286db0();
                            } while (!(bool)in_ZR);
                            func_0x00010b286da0();
                            uStack_11d0 = 0x78;
                            pcStack_11b8 = FUN_10b286b70;
                            puStack_11e0 = param_3;
                            puStack_11d8 = param_4;
                            puStack_11c8 = puVar4;
                            pppppppuStack_11c0 = &pppppppuStack_1110;
                            func_0x000107c3542c();
                            (*extraout_x8_17)();
                            if (param_1 != 0) {
                              func_0x00010b286d10();
                              func_0x000107c35448();
                              func_0x000107c354ac();
                              func_0x000107c35434();
                              func_0x000107c35494();
                              func_0x000107c354b4();
                              do {
                                func_0x000107c354a0();
                                func_0x000107c354a8();
                              } while (!(bool)in_ZR);
                            }
                            func_0x000107c35428();
                            if ((bool)in_ZR) {
                              return;
                            }
                            ___stack_chk_fail();
                            func_0x00010b286d60();
                            func_0x00010b286dbc();
                            do {
                              func_0x00010b286da8();
                              func_0x00010b286db0();
                            } while (!(bool)in_ZR);
                            func_0x00010b286da0();
                            uStack_1260 = 0x78;
                            pcStack_1248 = FUN_10b286bf8;
                            puStack_1270 = param_3;
                            puStack_1268 = param_4;
                            puStack_1258 = puVar4;
                            pppppppuStack_1250 = &pppppppuStack_11c0;
                            func_0x000107c35410();
                            func_0x000107c35448();
                            func_0x000107c354ac();
                            func_0x000107c35434();
                            func_0x000107c35494();
                            func_0x000107c354b4();
                            do {
                              func_0x000107c354a0();
                              func_0x000107c354a8();
                            } while (!(bool)in_ZR);
                            func_0x000107c35428();
                            if ((bool)in_ZR) {
                              return;
                            }
                            ___stack_chk_fail();
                            func_0x00010b286d60();
                            func_0x00010b286dbc();
                            do {
                              func_0x00010b286da8();
                              func_0x00010b286db0();
                            } while (!(bool)in_ZR);
                            func_0x00010b286da0();
                            puVar1 = auStack_12d0;
                          }
                        }
                      }
                    }
                    goto FUN_10b286c70;
                  }
                }
                return;
              }
FUN_10b286c70:
              uVar13 = *puVar2;
              *(undefined8 *)(puVar1 + 0x28) = puVar2[1];
              *(undefined8 *)(puVar1 + 0x20) = uVar13;
              *(undefined8 *)(puVar1 + 0x30) = puVar2[2];
              puVar2[1] = 0;
              puVar2[2] = 0;
              *puVar2 = 0;
              uVar13 = *param_3;
              *(undefined8 *)(puVar1 + 0x40) = param_3[1];
              *(undefined8 *)(puVar1 + 0x38) = uVar13;
              *(undefined8 *)(puVar1 + 0x48) = param_3[2];
              *param_3 = 0;
              param_3[1] = 0;
              param_3[2] = 0;
              *(undefined8 *)(puVar1 + 0x60) = param_4[2];
              uVar13 = *param_4;
              *(undefined8 *)(puVar1 + 0x58) = param_4[1];
              *(undefined8 *)(puVar1 + 0x50) = uVar13;
              param_4[1] = 0;
              param_4[2] = 0;
              *param_4 = 0;
              return;
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10b285700; end: 10b28577b;  */

/* WARNING: Possible PIC construction at 0x00010b285e20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b28617c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286b0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b28643c) */
/* WARNING: Removing unreachable block (ram,0x00010b286458) */
/* WARNING: Removing unreachable block (ram,0x00010b28621c) */
/* WARNING: Removing unreachable block (ram,0x00010b286238) */
/* WARNING: Removing unreachable block (ram,0x00010b286180) */
/* WARNING: Removing unreachable block (ram,0x00010b28619c) */
/* WARNING: Removing unreachable block (ram,0x00010b285e24) */
/* WARNING: Removing unreachable block (ram,0x00010b285e40) */
/* WARNING: Removing unreachable block (ram,0x00010b286b10) */
/* WARNING: Removing unreachable block (ram,0x00010b286b2c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10b285700(int param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  undefined8 extraout_x8_07;
  code *extraout_x8_08;
  undefined8 extraout_x8_09;
  code *extraout_x8_10;
  code *extraout_x8_11;
  undefined8 extraout_x8_12;
  code *extraout_x8_13;
  code *extraout_x8_14;
  code *extraout_x8_15;
  code *extraout_x8_16;
  undefined8 unaff_x21;
  undefined8 uVar13;
  undefined1 auStack_1240 [96];
  undefined8 *puStack_11e0;
  undefined8 *puStack_11d8;
  undefined8 uStack_11d0;
  undefined8 *puStack_11c8;
  undefined8 *******pppppppuStack_11c0;
  code *pcStack_11b8;
  undefined8 *puStack_1150;
  undefined8 *puStack_1148;
  undefined8 uStack_1140;
  undefined8 *puStack_1138;
  undefined8 *******pppppppuStack_1130;
  code *pcStack_1128;
  undefined1 auStack_1120 [96];
  undefined8 *puStack_10c0;
  undefined8 *puStack_10b8;
  undefined8 uStack_10b0;
  undefined8 *puStack_10a8;
  undefined1 *******pppppppuStack_10a0;
  code *pcStack_1098;
  undefined8 *******pppppppuStack_1080;
  code *pcStack_1078;
  undefined8 *puStack_1020;
  undefined8 *puStack_1018;
  undefined8 uStack_1010;
  code *pcStack_1008;
  undefined1 ******ppppppuStack_1000;
  code *pcStack_ff8;
  undefined8 *puStack_f90;
  undefined8 *puStack_f88;
  undefined8 uStack_f80;
  undefined8 *puStack_f78;
  undefined1 ***pppuStack_f70;
  code *pcStack_f68;
  undefined8 uStack_f58;
  undefined1 *****pppppuStack_f30;
  code *pcStack_f28;
  undefined1 ****ppppuStack_f10;
  code *pcStack_f08;
  undefined8 *puStack_ef0;
  undefined8 *puStack_ee8;
  undefined8 uStack_ee0;
  code *pcStack_ed8;
  undefined1 **ppuStack_ed0;
  code *pcStack_ec8;
  undefined8 *puStack_e30;
  undefined8 *puStack_e28;
  undefined8 uStack_e20;
  code *pcStack_e18;
  undefined1 *puStack_e10;
  code *pcStack_e08;
  undefined8 uStack_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d48;
  undefined1 auStack_ce0 [104];
  undefined8 uStack_c78;
  undefined8 *puStack_c50;
  undefined8 *puStack_c48;
  undefined1 ****ppppuStack_c40;
  code *pcStack_c38;
  undefined1 ***pppuStack_c30;
  code *pcStack_c28;
  undefined8 *puStack_bc0;
  undefined8 *puStack_bb8;
  undefined8 *puStack_bb0;
  undefined8 *puStack_ba8;
  undefined1 **ppuStack_ba0;
  code *pcStack_b98;
  undefined8 *puStack_b30;
  undefined8 *puStack_b28;
  undefined8 *puStack_b20;
  undefined8 *puStack_b18;
  undefined1 *puStack_b10;
  code *pcStack_b08;
  undefined1 auStack_b00 [104];
  undefined8 uStack_a98;
  undefined8 *puStack_a90;
  undefined8 *puStack_a88;
  undefined8 *puStack_a80;
  code *pcStack_a78;
  undefined8 *******pppppppuStack_a70;
  code *pcStack_a68;
  undefined8 *******pppppppuStack_a60;
  code *pcStack_a58;
  undefined8 *******pppppppuStack_a40;
  code *pcStack_a38;
  undefined8 *puStack_9d0;
  undefined8 *puStack_9c8;
  undefined8 *puStack_9c0;
  undefined8 *puStack_9b8;
  undefined8 *******pppppppuStack_9b0;
  code *pcStack_9a8;
  undefined8 *puStack_940;
  undefined8 *puStack_938;
  undefined8 *puStack_930;
  undefined8 *puStack_928;
  undefined8 *******pppppppuStack_920;
  code *pcStack_918;
  undefined1 auStack_910 [96];
  undefined8 *******pppppppuStack_890;
  code *pcStack_888;
  undefined8 *******pppppppuStack_870;
  code *pcStack_868;
  undefined8 *******pppppppuStack_7f0;
  code *pcStack_7e8;
  undefined8 *******pppppppuStack_730;
  code *pcStack_728;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 *******pppppppuStack_660;
  code *pcStack_658;
  undefined8 *******pppppppuStack_5c0;
  code *pcStack_5b8;
  undefined8 *******pppppppuStack_500;
  code *pcStack_4f8;
  undefined1 *******pppppppuStack_460;
  code *pcStack_458;
  undefined1 ******ppppppuStack_3d0;
  code *pcStack_3c8;
  undefined1 *****pppppuStack_330;
  code *pcStack_328;
  undefined1 ****ppppuStack_2a0;
  code *pcStack_298;
  undefined1 ***pppuStack_200;
  code *pcStack_1f8;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  
  func_0x000107c35410();
  func_0x00010b286cc0();
  func_0x000107c35454();
  func_0x000107c354ac();
  func_0x000107c35434();
  func_0x000107c35494();
  func_0x000107c354c4();
  do {
    func_0x000107c354a0();
    func_0x000107c354a8();
  } while (!(bool)in_ZR);
  func_0x000107c35428();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b286d60();
  func_0x00010b286dd4();
  do {
    func_0x00010b286da8();
    func_0x00010b286db0();
  } while (!(bool)in_ZR);
  func_0x00010b286da0();
  pcStack_c8 = FUN_10b28577c;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x000107c35410();
  func_0x00010b286cf4();
  func_0x000107c35450();
  func_0x000107c354ac();
  func_0x000107c35434();
  func_0x000107c35494();
  func_0x000107c354bc();
  do {
    func_0x000107c354a0();
    func_0x000107c354a8();
  } while (!(bool)in_ZR);
  func_0x000107c35428();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286dc8();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcStack_168 = FUN_10b2857f8;
    ppuStack_170 = &puStack_d0;
    func_0x000107c35410();
    func_0x000107c35448();
    func_0x000107c354ac();
    func_0x000107c35434();
    func_0x000107c35494();
    func_0x000107c354b4();
    do {
      func_0x000107c354a0();
      func_0x000107c354a8();
    } while (!(bool)in_ZR);
    func_0x000107c35428();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286dbc();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcStack_1f8 = FUN_10b285870;
    pppuStack_200 = &ppuStack_170;
    func_0x000107c35410();
    func_0x00010b286cf4();
    func_0x000107c35450();
    func_0x000107c354ac();
    func_0x000107c35434();
    func_0x000107c35494();
    func_0x000107c354bc();
    do {
      func_0x000107c354a0();
      func_0x000107c354a8();
    } while (!(bool)in_ZR);
    func_0x000107c35428();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b286d60();
      func_0x00010b286dc8();
      do {
        func_0x00010b286da8();
        func_0x00010b286db0();
      } while (!(bool)in_ZR);
      func_0x00010b286da0();
      pcStack_298 = FUN_10b2858ec;
      ppppuStack_2a0 = &pppuStack_200;
      func_0x000107c35410();
      func_0x000107c35448();
      func_0x000107c354ac();
      func_0x000107c35434();
      func_0x000107c35494();
      func_0x000107c354b4();
      do {
        func_0x000107c354a0();
        func_0x000107c354a8();
      } while (!(bool)in_ZR);
      func_0x000107c35428();
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010b286d60();
      func_0x00010b286dbc();
      do {
        func_0x00010b286da8();
        func_0x00010b286db0();
      } while (!(bool)in_ZR);
      func_0x00010b286da0();
      pcStack_328 = FUN_10b285964;
      pppppuStack_330 = &ppppuStack_2a0;
      func_0x000107c35410();
      func_0x00010b286cf4();
      func_0x000107c35450();
      func_0x000107c354ac();
      func_0x000107c35434();
      func_0x000107c35494();
      func_0x000107c354bc();
      do {
        func_0x000107c354a0();
        func_0x000107c354a8();
      } while (!(bool)in_ZR);
      func_0x000107c35428();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010b286d60();
        func_0x00010b286dc8();
        do {
          func_0x00010b286da8();
          func_0x00010b286db0();
        } while (!(bool)in_ZR);
        func_0x00010b286da0();
        pcStack_3c8 = FUN_10b2859e0;
        ppppppuStack_3d0 = &pppppuStack_330;
        func_0x000107c35410();
        func_0x000107c35448();
        func_0x000107c354ac();
        func_0x000107c35434();
        func_0x000107c35494();
        func_0x000107c354b4();
        do {
          func_0x000107c354a0();
          func_0x000107c354a8();
        } while (!(bool)in_ZR);
        func_0x000107c35428();
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x00010b286d60();
        func_0x00010b286dbc();
        do {
          func_0x00010b286da8();
          func_0x00010b286db0();
        } while (!(bool)in_ZR);
        func_0x00010b286da0();
        pcStack_458 = FUN_10b285a58;
        pppppppuStack_460 = &ppppppuStack_3d0;
        func_0x000107c35410();
        func_0x00010b286cf4();
        func_0x000107c35450();
        func_0x000107c354ac();
        func_0x000107c35434();
        func_0x000107c35494();
        func_0x000107c354bc();
        do {
          func_0x000107c354a0();
          func_0x000107c354a8();
        } while (!(bool)in_ZR);
        func_0x000107c35428();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010b286d60();
          func_0x00010b286dc8();
          do {
            func_0x00010b286da8();
            func_0x00010b286db0();
          } while (!(bool)in_ZR);
          func_0x00010b286da0();
          pcStack_4f8 = FUN_10b285ad4;
          pppppppuStack_500 = &pppppppuStack_460;
          func_0x000107c35438();
          func_0x000107c35414();
          func_0x000107c35444();
          func_0x000107c35454();
          func_0x000107c35460();
          func_0x000107c35490();
          func_0x000107c35494();
          func_0x000107c354c4();
          do {
            func_0x000107c354a0();
            func_0x000107c354a8();
          } while (!(bool)in_ZR);
          func_0x000107c35428();
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          func_0x00010b286d60();
          func_0x00010b286dd4();
          do {
            func_0x00010b286da8();
            func_0x00010b286db0();
          } while (!(bool)in_ZR);
          func_0x00010b286da0();
          pcStack_5b8 = FUN_10b285b58;
          puVar3 = param_5;
          pppppppuStack_5c0 = &pppppppuStack_500;
          func_0x000107c35438();
          func_0x000107c35414();
          func_0x000107c35450();
          func_0x000107c35460();
          func_0x000107c35490();
          func_0x000107c35494();
          func_0x000107c354bc();
          do {
            func_0x000107c354a0();
            func_0x000107c354a8();
          } while (!(bool)in_ZR);
          func_0x000107c35428();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286dc8();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            pcStack_658 = FUN_10b285bd8;
            pppppppuStack_660 = &pppppppuStack_5c0;
            func_0x000107c35410();
            func_0x00010b286cc0();
            uStack_698 = param_6[1];
            uStack_6a0 = *param_6;
            uStack_690 = param_6[2];
            param_6[1] = 0;
            param_6[2] = 0;
            *param_6 = 0;
            func_0x000107c35488();
            func_0x000107c354ac();
            func_0x000107c35434();
            func_0x000107c35494();
            func_0x000107c354d4();
            do {
              func_0x000107c354a0();
              func_0x000107c354a8();
            } while (!(bool)in_ZR);
            func_0x000107c35428();
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286df0();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            pcStack_728 = FUN_10b285c78;
            pppppppuStack_730 = &pppppppuStack_660;
            func_0x000107c35410();
            func_0x00010b286cc0();
            func_0x000107c35454();
            func_0x000107c354ac();
            func_0x000107c35434();
            func_0x000107c35494();
            func_0x000107c354c4();
            do {
              func_0x000107c354a0();
              func_0x000107c354a8();
            } while (!(bool)in_ZR);
            func_0x000107c35428();
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286dd4();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            pcStack_7e8 = FUN_10b285cf4;
            pppppppuStack_7f0 = &pppppppuStack_730;
            func_0x000107c35410();
            func_0x00010b286cf4();
            func_0x000107c35450();
            func_0x000107c354ac();
            func_0x000107c35434();
            func_0x000107c35494();
            func_0x000107c354bc();
            do {
              func_0x000107c354a0();
              func_0x000107c354a8();
            } while (!(bool)in_ZR);
            func_0x000107c35428();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dc8();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              pcStack_888 = FUN_10b285d70;
              pppppppuStack_890 = &pppppppuStack_7f0;
              func_0x000107c35410();
              func_0x000107c35448();
              func_0x000107c354ac();
              puVar2 = (undefined8 *)&UNK_110cce4d8;
              func_0x000107c35434();
              func_0x000107c35494();
              func_0x000107c354b4();
              do {
                func_0x000107c354a0();
                func_0x000107c354a8();
              } while (!(bool)in_ZR);
              func_0x000107c35428();
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dbc();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              pcVar10 = FUN_10b285de8;
              func_0x000107c354e0();
              puVar4 = param_3;
              puVar6 = param_4;
              puVar8 = puVar3;
              pppppppuStack_870 = &pppppppuStack_890;
              pcStack_868 = pcVar10;
              func_0x000107c3541c();
              (*extraout_x8)();
              puVar1 = auStack_910;
              if (param_1 == 0) {
                func_0x000107c35430(unaff_x21);
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x00010b286d60();
                func_0x00010b286dc8();
                do {
                  func_0x00010b286da8();
                  func_0x00010b286db0();
                } while (!(bool)in_ZR);
                func_0x00010b286da0();
                pcStack_918 = FUN_10b285e84;
                puStack_940 = param_3;
                puStack_938 = param_4;
                puStack_930 = param_5;
                puStack_928 = puVar3;
                pppppppuStack_920 = &pppppppuStack_870;
                func_0x000107c3542c();
                (*extraout_x8_00)();
                if (param_1 != 0) {
                  func_0x00010b286d10();
                  func_0x000107c35448();
                  func_0x000107c354ac();
                  func_0x000107c35434();
                  func_0x000107c35494();
                  func_0x000107c354b4();
                  do {
                    func_0x000107c354a0();
                    func_0x000107c354a8();
                  } while (!(bool)in_ZR);
                }
                func_0x000107c35428();
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x00010b286d60();
                func_0x00010b286dbc();
                do {
                  func_0x00010b286da8();
                  func_0x00010b286db0();
                } while (!(bool)in_ZR);
                func_0x00010b286da0();
                pcStack_9a8 = FUN_10b285f0c;
                puStack_9d0 = param_3;
                puStack_9c8 = param_4;
                puStack_9c0 = param_5;
                puStack_9b8 = puVar3;
                pppppppuStack_9b0 = &pppppppuStack_920;
                func_0x000107c35410();
                func_0x00010b286cc0();
                func_0x000107c35454();
                func_0x000107c354ac();
                func_0x000107c35434();
                func_0x000107c35494();
                func_0x000107c354c4();
                do {
                  func_0x000107c354a0();
                  func_0x000107c354a8();
                } while (!(bool)in_ZR);
                func_0x000107c35428();
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x00010b286d60();
                func_0x00010b286dd4();
                do {
                  func_0x00010b286da8();
                  func_0x00010b286db0();
                } while (!(bool)in_ZR);
                func_0x00010b286da0();
                pcStack_a68 = FUN_10b285f88;
                puStack_a90 = param_3;
                puStack_a88 = param_4;
                puStack_a80 = param_5;
                pcStack_a78 = pcVar10;
                pppppppuStack_a70 = &pppppppuStack_9b0;
                func_0x000107c35410();
                func_0x00010b286cf4();
                func_0x000107c35450();
                func_0x000107c354ac();
                func_0x000107c35434();
                func_0x000107c35494();
                func_0x000107c354bc();
                do {
                  func_0x000107c354a0();
                  func_0x000107c354a8();
                } while (!(bool)in_ZR);
                func_0x000107c35428();
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x00010b286d60();
                func_0x00010b286dc8();
                do {
                  func_0x00010b286da8();
                  func_0x00010b286db0();
                } while (!(bool)in_ZR);
                func_0x00010b286da0();
                pcVar10 = FUN_10b286004;
                func_0x000107c354e4();
                pppppppuStack_a40 = &pppppppuStack_a70;
                pcStack_a38 = pcVar10;
                func_0x000107c3541c();
                (*extraout_x8_01)();
                if (param_1 != 0) {
                  func_0x000107c35420();
                  func_0x000107c35454();
                  func_0x00010b286d80();
                  func_0x000107c35484();
                  func_0x000107c35494();
                  func_0x000107c354c4();
                  do {
                    func_0x000107c354a0();
                    func_0x000107c354a8();
                  } while (!(bool)in_ZR);
                }
                func_0x000107c35430(pcStack_a78);
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  func_0x00010b286dd4();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  pcVar10 = FUN_10b2860a4;
                  func_0x000107c354e4();
                  pppppppuStack_a40 = &pppppppuStack_a40;
                  pcStack_a38 = pcVar10;
                  func_0x000107c3541c();
                  puVar2 = (undefined8 *)&UNK_110cce7f8;
                  (*extraout_x8_02)();
                  if (param_1 != 0) {
                    func_0x000107c35420();
                    func_0x000107c35454();
                    func_0x00010b286d48();
                    puVar2 = (undefined8 *)&UNK_110cce7f8;
                    func_0x00010b286d94();
                    func_0x000107c35494();
                    func_0x000107c354c4();
                    do {
                      func_0x000107c354a0();
                      func_0x000107c354a8();
                    } while (!(bool)in_ZR);
                  }
                  func_0x000107c35430(pcStack_a78);
                  if (!(bool)in_ZR) {
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286dd4();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    pcVar10 = FUN_10b286144;
                    func_0x000107c354e0();
                    puVar5 = puVar4;
                    puVar7 = puVar6;
                    pppppppuStack_a60 = &pppppppuStack_a40;
                    pcStack_a58 = pcVar10;
                    func_0x000107c3541c();
                    puVar3 = (undefined8 *)&UNK_110cce848;
                    (*extraout_x8_03)();
                    puVar1 = auStack_b00;
                    param_4 = puVar6;
                    param_3 = puVar4;
                    if (param_1 == 0) {
                      func_0x000107c35430(uStack_a98);
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dc8();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      pcVar10 = FUN_10b2861e0;
                      func_0x000107c354e0();
                      puVar4 = puVar5;
                      puVar6 = puVar7;
                      puVar9 = puVar8;
                      pppppppuStack_a60 = &pppppppuStack_a60;
                      pcStack_a58 = pcVar10;
                      func_0x000107c3541c();
                      (*extraout_x8_04)();
                      puVar1 = auStack_b00;
                      param_4 = puVar7;
                      param_3 = puVar5;
                      puVar2 = puVar3;
                      if (param_1 == 0) {
                        func_0x000107c35430(uStack_a98);
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286dc8();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        pcStack_b08 = FUN_10b28627c;
                        puStack_b30 = puVar5;
                        puStack_b28 = puVar7;
                        puStack_b20 = param_5;
                        puStack_b18 = puVar8;
                        puStack_b10 = (undefined1 *)&pppppppuStack_a60;
                        func_0x000107c3542c();
                        (*extraout_x8_05)();
                        if (param_1 != 0) {
                          func_0x00010b286d10();
                          func_0x000107c35448();
                          func_0x000107c354ac();
                          func_0x000107c35434();
                          func_0x000107c35494();
                          func_0x000107c354b4();
                          do {
                            func_0x000107c354a0();
                            func_0x000107c354a8();
                          } while (!(bool)in_ZR);
                        }
                        func_0x000107c35428();
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286dbc();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        pcStack_b98 = FUN_10b286304;
                        param_4 = puVar6;
                        puStack_bc0 = puVar5;
                        puStack_bb8 = puVar7;
                        puStack_bb0 = param_5;
                        puStack_ba8 = puVar8;
                        ppuStack_ba0 = &puStack_b10;
                        func_0x000107c35410();
                        func_0x000107c35448();
                        func_0x000107c354ac();
                        func_0x000107c35434();
                        func_0x000107c35494();
                        func_0x000107c354b4();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                        func_0x000107c35428();
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286dbc();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        puVar1 = auStack_ce0;
                        pcStack_c28 = FUN_10b28637c;
                        puStack_c50 = puVar5;
                        puStack_c48 = puVar7;
                        ppppuStack_c40 = (undefined1 ****)param_5;
                        pcStack_c38 = (code *)puVar6;
                        pppuStack_c30 = &ppuStack_ba0;
                        func_0x000107c35438();
                        func_0x000107c35414();
                        func_0x000107c35444();
                        func_0x000107c35454();
                        func_0x000107c35460();
                        puVar2 = (undefined8 *)&UNK_110ccea28;
                        func_0x000107c35490();
                        func_0x000107c35494();
                        func_0x000107c354c4();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                        func_0x000107c35428();
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286dd4();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        pcVar10 = FUN_10b286400;
                        func_0x000107c354e0();
                        puVar6 = puVar4;
                        puVar8 = param_4;
                        ppppuStack_c40 = &pppuStack_c30;
                        pcStack_c38 = pcVar10;
                        func_0x000107c3541c();
                        puVar3 = (undefined8 *)&UNK_110ccea78;
                        (*extraout_x8_06)();
                        param_3 = puVar4;
                        if (param_1 == 0) {
                          func_0x000107c35430(uStack_c78);
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          func_0x00010b286dc8();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          param_3 = puVar6;
                          puVar2 = puVar8;
                          puVar4 = puVar9;
                          pcVar11 = pcVar10;
                          func_0x000107c35440();
                          uStack_d48 = extraout_x8_07;
                          func_0x000107c35474();
                          (*extraout_x8_08)();
                          if (param_1 != 0) {
                            uStack_dd8 = puVar3[1];
                            uStack_de0 = *puVar3;
                            uStack_dd0 = puVar3[2];
                            puVar3[1] = 0;
                            puVar3[2] = 0;
                            *puVar3 = 0;
                            uStack_dc0 = puVar6[1];
                            uStack_dc8 = *puVar6;
                            uStack_db8 = puVar6[2];
                            puVar6[1] = 0;
                            puVar6[2] = 0;
                            *puVar6 = 0;
                            uStack_da8 = puVar8[1];
                            uStack_db0 = *puVar8;
                            uStack_da0 = puVar8[2];
                            puVar8[1] = 0;
                            puVar8[2] = 0;
                            *puVar8 = 0;
                            uStack_d90 = puVar9[1];
                            uStack_d98 = *puVar9;
                            uStack_d88 = puVar9[2];
                            *puVar9 = 0;
                            puVar9[1] = 0;
                            puVar9[2] = 0;
                            uStack_d78 = *(undefined8 *)(pcVar10 + 8);
                            uStack_d80 = *(undefined8 *)pcVar10;
                            uStack_d70 = *(undefined8 *)(pcVar10 + 0x10);
                            func_0x00010b286d6c();
                            func_0x00010b286dfc();
                            func_0x00010b286de0();
                            func_0x00010b286d80();
                            func_0x000107c35484();
                            func_0x000107c35494();
                            do {
                              func_0x000107c354a0();
                              func_0x000107c354a8();
                            } while (!(bool)in_ZR);
                          }
                          func_0x000107c35430(uStack_d48);
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          func_0x000107c354dc();
                          func_0x000107c35440();
                          uStack_d68 = extraout_x8_09;
                          func_0x000107c35474();
                          (*extraout_x8_10)();
                          if (param_1 != 0) {
                            func_0x000107c3543c();
                            func_0x000107c35488();
                            func_0x00010b286d80();
                            func_0x000107c35484();
                            func_0x000107c35494();
                            func_0x000107c354d4();
                            do {
                              func_0x000107c354a0();
                              func_0x000107c354a8();
                            } while (!(bool)in_ZR);
                          }
                          func_0x000107c35430(uStack_d68);
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          func_0x00010b286df0();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          func_0x000107c354e4();
                          puVar3 = puVar2;
                          puVar6 = puVar4;
                          pcVar10 = pcVar11;
                          func_0x000107c3541c();
                          (*extraout_x8_11)();
                          if (param_1 != 0) {
                            func_0x000107c35420();
                            func_0x000107c35454();
                            func_0x00010b286d80();
                            func_0x000107c35484();
                            func_0x000107c35494();
                            func_0x000107c354c4();
                            do {
                              func_0x000107c354a0();
                              func_0x000107c354a8();
                            } while (!(bool)in_ZR);
                          }
                          func_0x000107c35430(uStack_d78);
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          func_0x00010b286dd4();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          uStack_e20 = 0x78;
                          pcStack_e08 = FUN_10b286724;
                          pcVar12 = pcVar10;
                          puStack_e30 = puVar2;
                          puStack_e28 = puVar4;
                          pcStack_e18 = pcVar11;
                          puStack_e10 = &stack0xfffffffffffff2c0;
                          func_0x000107c35410();
                          func_0x00010b286cc0();
                          func_0x000107c35454();
                          func_0x000107c354ac();
                          func_0x000107c35434();
                          func_0x000107c35494();
                          func_0x000107c354c4();
                          do {
                            func_0x000107c354a0();
                            func_0x000107c354a8();
                          } while (!(bool)in_ZR);
                          func_0x000107c35428();
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          func_0x00010b286dd4();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          uStack_ee0 = 0x78;
                          pcStack_ec8 = FUN_10b2867a0;
                          puVar8 = puVar6;
                          puStack_ef0 = puVar2;
                          puStack_ee8 = puVar4;
                          pcStack_ed8 = pcVar10;
                          ppuStack_ed0 = &puStack_e10;
                          func_0x000107c35410();
                          func_0x00010b286cf4();
                          func_0x000107c35450();
                          func_0x000107c354ac();
                          func_0x000107c35434();
                          func_0x000107c35494();
                          func_0x000107c354bc();
                          do {
                            func_0x000107c354a0();
                            func_0x000107c354a8();
                          } while (!(bool)in_ZR);
                          func_0x000107c35428();
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          func_0x00010b286dc8();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          uStack_f80 = 0x78;
                          pcStack_f68 = FUN_10b28681c;
                          puStack_f90 = puVar2;
                          puStack_f88 = puVar4;
                          puStack_f78 = puVar6;
                          pppuStack_f70 = &ppuStack_ed0;
                          func_0x000107c35410();
                          func_0x000107c35448();
                          func_0x000107c354ac();
                          func_0x000107c35434();
                          func_0x000107c35494();
                          func_0x000107c354b4();
                          do {
                            func_0x000107c354a0();
                            func_0x000107c354a8();
                          } while (!(bool)in_ZR);
                          func_0x000107c35428();
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          func_0x00010b286dbc();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          pcVar10 = FUN_10b286894;
                          func_0x000107c354dc();
                          ppppuStack_f10 = &pppuStack_f70;
                          pcStack_f08 = pcVar10;
                          func_0x000107c35440();
                          uStack_f58 = extraout_x8_12;
                          func_0x000107c35474();
                          (*extraout_x8_13)();
                          if (param_1 != 0) {
                            func_0x000107c3543c();
                            func_0x000107c35488();
                            func_0x00010b286d80();
                            func_0x000107c35484();
                            func_0x000107c35494();
                            func_0x000107c354d4();
                            do {
                              func_0x000107c354a0();
                              func_0x000107c354a8();
                            } while (!(bool)in_ZR);
                          }
                          func_0x000107c35430(uStack_f58);
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          func_0x00010b286df0();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          pcVar10 = FUN_10b286940;
                          func_0x000107c354e4();
                          param_4 = puVar3;
                          puVar2 = puVar8;
                          pppppuStack_f30 = &ppppuStack_f10;
                          pcStack_f28 = pcVar10;
                          func_0x000107c3541c();
                          (*extraout_x8_14)();
                          if (param_1 != 0) {
                            func_0x000107c35420();
                            func_0x000107c35454();
                            func_0x00010b286d80();
                            func_0x000107c35484();
                            func_0x000107c35494();
                            func_0x000107c354c4();
                            do {
                              func_0x000107c354a0();
                              func_0x000107c354a8();
                            } while (!(bool)in_ZR);
                          }
                          func_0x000107c35430(pcStack_f68);
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          func_0x00010b286dd4();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          uStack_1010 = 0x78;
                          pcStack_ff8 = FUN_10b2869e0;
                          puVar4 = puVar2;
                          puStack_1020 = puVar3;
                          puStack_1018 = puVar8;
                          pcStack_1008 = pcVar12;
                          ppppppuStack_1000 = &pppppuStack_f30;
                          func_0x000107c35410();
                          func_0x00010b286cf4();
                          func_0x000107c35450();
                          func_0x000107c354ac();
                          func_0x000107c35434();
                          func_0x000107c35494();
                          func_0x000107c354bc();
                          do {
                            func_0x000107c354a0();
                            func_0x000107c354a8();
                          } while (!(bool)in_ZR);
                          func_0x000107c35428();
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          func_0x00010b286dc8();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          puVar1 = auStack_1120;
                          uStack_10b0 = 0x78;
                          pcStack_1098 = FUN_10b286a5c;
                          puStack_10c0 = puVar3;
                          puStack_10b8 = puVar8;
                          puStack_10a8 = puVar2;
                          pppppppuStack_10a0 = &ppppppuStack_1000;
                          func_0x000107c35410();
                          func_0x000107c35448();
                          func_0x000107c354ac();
                          puVar2 = (undefined8 *)&UNK_110cceed8;
                          func_0x000107c35434();
                          func_0x000107c35494();
                          func_0x000107c354b4();
                          do {
                            func_0x000107c354a0();
                            func_0x000107c354a8();
                          } while (!(bool)in_ZR);
                          func_0x000107c35428();
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          func_0x00010b286dbc();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          pcVar10 = FUN_10b286ad4;
                          func_0x000107c354e0();
                          pppppppuStack_1080 = &pppppppuStack_10a0;
                          pcStack_1078 = pcVar10;
                          func_0x000107c3541c();
                          (*extraout_x8_15)();
                          if (param_1 == 0) {
                            func_0x000107c35430(puStack_10b8);
                            if ((bool)in_ZR) {
                              return;
                            }
                            ___stack_chk_fail();
                            func_0x00010b286d60();
                            func_0x00010b286dc8();
                            do {
                              func_0x00010b286da8();
                              func_0x00010b286db0();
                            } while (!(bool)in_ZR);
                            func_0x00010b286da0();
                            uStack_1140 = 0x78;
                            pcStack_1128 = FUN_10b286b70;
                            puStack_1150 = param_3;
                            puStack_1148 = param_4;
                            puStack_1138 = puVar4;
                            pppppppuStack_1130 = &pppppppuStack_1080;
                            func_0x000107c3542c();
                            (*extraout_x8_16)();
                            if (param_1 != 0) {
                              func_0x00010b286d10();
                              func_0x000107c35448();
                              func_0x000107c354ac();
                              func_0x000107c35434();
                              func_0x000107c35494();
                              func_0x000107c354b4();
                              do {
                                func_0x000107c354a0();
                                func_0x000107c354a8();
                              } while (!(bool)in_ZR);
                            }
                            func_0x000107c35428();
                            if ((bool)in_ZR) {
                              return;
                            }
                            ___stack_chk_fail();
                            func_0x00010b286d60();
                            func_0x00010b286dbc();
                            do {
                              func_0x00010b286da8();
                              func_0x00010b286db0();
                            } while (!(bool)in_ZR);
                            func_0x00010b286da0();
                            uStack_11d0 = 0x78;
                            pcStack_11b8 = FUN_10b286bf8;
                            puStack_11e0 = param_3;
                            puStack_11d8 = param_4;
                            puStack_11c8 = puVar4;
                            pppppppuStack_11c0 = &pppppppuStack_1130;
                            func_0x000107c35410();
                            func_0x000107c35448();
                            func_0x000107c354ac();
                            func_0x000107c35434();
                            func_0x000107c35494();
                            func_0x000107c354b4();
                            do {
                              func_0x000107c354a0();
                              func_0x000107c354a8();
                            } while (!(bool)in_ZR);
                            func_0x000107c35428();
                            if ((bool)in_ZR) {
                              return;
                            }
                            ___stack_chk_fail();
                            func_0x00010b286d60();
                            func_0x00010b286dbc();
                            do {
                              func_0x00010b286da8();
                              func_0x00010b286db0();
                            } while (!(bool)in_ZR);
                            func_0x00010b286da0();
                            puVar1 = auStack_1240;
                          }
                        }
                      }
                    }
                    goto FUN_10b286c70;
                  }
                }
                return;
              }
FUN_10b286c70:
              uVar13 = *puVar2;
              *(undefined8 *)(puVar1 + 0x28) = puVar2[1];
              *(undefined8 *)(puVar1 + 0x20) = uVar13;
              *(undefined8 *)(puVar1 + 0x30) = puVar2[2];
              puVar2[1] = 0;
              puVar2[2] = 0;
              *puVar2 = 0;
              uVar13 = *param_3;
              *(undefined8 *)(puVar1 + 0x40) = param_3[1];
              *(undefined8 *)(puVar1 + 0x38) = uVar13;
              *(undefined8 *)(puVar1 + 0x48) = param_3[2];
              *param_3 = 0;
              param_3[1] = 0;
              param_3[2] = 0;
              *(undefined8 *)(puVar1 + 0x60) = param_4[2];
              uVar13 = *param_4;
              *(undefined8 *)(puVar1 + 0x58) = param_4[1];
              *(undefined8 *)(puVar1 + 0x50) = uVar13;
              param_4[1] = 0;
              param_4[2] = 0;
              *param_4 = 0;
              return;
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10b28577c; end: 10b2857f7;  */

/* WARNING: Possible PIC construction at 0x00010b285e20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b28617c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286b0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b28643c) */
/* WARNING: Removing unreachable block (ram,0x00010b286458) */
/* WARNING: Removing unreachable block (ram,0x00010b28621c) */
/* WARNING: Removing unreachable block (ram,0x00010b286238) */
/* WARNING: Removing unreachable block (ram,0x00010b286180) */
/* WARNING: Removing unreachable block (ram,0x00010b28619c) */
/* WARNING: Removing unreachable block (ram,0x00010b285e24) */
/* WARNING: Removing unreachable block (ram,0x00010b285e40) */
/* WARNING: Removing unreachable block (ram,0x00010b286b10) */
/* WARNING: Removing unreachable block (ram,0x00010b286b2c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10b28577c(int param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  undefined8 extraout_x8_07;
  code *extraout_x8_08;
  undefined8 extraout_x8_09;
  code *extraout_x8_10;
  code *extraout_x8_11;
  undefined8 extraout_x8_12;
  code *extraout_x8_13;
  code *extraout_x8_14;
  code *extraout_x8_15;
  code *extraout_x8_16;
  undefined8 unaff_x21;
  undefined8 uVar13;
  undefined1 auStack_1180 [96];
  undefined8 *puStack_1120;
  undefined8 *puStack_1118;
  undefined8 uStack_1110;
  undefined8 *puStack_1108;
  undefined8 *******pppppppuStack_1100;
  code *pcStack_10f8;
  undefined8 *puStack_1090;
  undefined8 *puStack_1088;
  undefined8 uStack_1080;
  undefined8 *puStack_1078;
  undefined8 *******pppppppuStack_1070;
  code *pcStack_1068;
  undefined1 auStack_1060 [96];
  undefined8 *puStack_1000;
  undefined8 *puStack_ff8;
  undefined8 uStack_ff0;
  undefined8 *puStack_fe8;
  undefined1 *******pppppppuStack_fe0;
  code *pcStack_fd8;
  undefined8 *******pppppppuStack_fc0;
  code *pcStack_fb8;
  undefined8 *puStack_f60;
  undefined8 *puStack_f58;
  undefined8 uStack_f50;
  code *pcStack_f48;
  undefined1 ******ppppppuStack_f40;
  code *pcStack_f38;
  undefined8 *puStack_ed0;
  undefined8 *puStack_ec8;
  undefined8 uStack_ec0;
  undefined8 *puStack_eb8;
  undefined1 ***pppuStack_eb0;
  code *pcStack_ea8;
  undefined8 uStack_e98;
  undefined1 *****pppppuStack_e70;
  code *pcStack_e68;
  undefined1 ****ppppuStack_e50;
  code *pcStack_e48;
  undefined8 *puStack_e30;
  undefined8 *puStack_e28;
  undefined8 uStack_e20;
  code *pcStack_e18;
  undefined1 **ppuStack_e10;
  code *pcStack_e08;
  undefined8 *puStack_d70;
  undefined8 *puStack_d68;
  undefined8 uStack_d60;
  code *pcStack_d58;
  undefined1 *puStack_d50;
  code *pcStack_d48;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_c88;
  undefined1 auStack_c20 [104];
  undefined8 uStack_bb8;
  undefined8 *puStack_b90;
  undefined8 *puStack_b88;
  undefined1 ****ppppuStack_b80;
  code *pcStack_b78;
  undefined1 ***pppuStack_b70;
  code *pcStack_b68;
  undefined8 *puStack_b00;
  undefined8 *puStack_af8;
  undefined8 *puStack_af0;
  undefined8 *puStack_ae8;
  undefined1 **ppuStack_ae0;
  code *pcStack_ad8;
  undefined8 *puStack_a70;
  undefined8 *puStack_a68;
  undefined8 *puStack_a60;
  undefined8 *puStack_a58;
  undefined1 *puStack_a50;
  code *pcStack_a48;
  undefined1 auStack_a40 [104];
  undefined8 uStack_9d8;
  undefined8 *puStack_9d0;
  undefined8 *puStack_9c8;
  undefined8 *puStack_9c0;
  code *pcStack_9b8;
  undefined8 *******pppppppuStack_9b0;
  code *pcStack_9a8;
  undefined8 *******pppppppuStack_9a0;
  code *pcStack_998;
  undefined8 *******pppppppuStack_980;
  code *pcStack_978;
  undefined8 *puStack_910;
  undefined8 *puStack_908;
  undefined8 *puStack_900;
  undefined8 *puStack_8f8;
  undefined8 *******pppppppuStack_8f0;
  code *pcStack_8e8;
  undefined8 *puStack_880;
  undefined8 *puStack_878;
  undefined8 *puStack_870;
  undefined8 *puStack_868;
  undefined8 *******pppppppuStack_860;
  code *pcStack_858;
  undefined1 auStack_850 [96];
  undefined8 *******pppppppuStack_7d0;
  code *pcStack_7c8;
  undefined8 *******pppppppuStack_7b0;
  code *pcStack_7a8;
  undefined8 *******pppppppuStack_730;
  code *pcStack_728;
  undefined8 *******pppppppuStack_670;
  code *pcStack_668;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 *******pppppppuStack_5a0;
  code *pcStack_598;
  undefined8 *******pppppppuStack_500;
  code *pcStack_4f8;
  undefined1 *******pppppppuStack_440;
  code *pcStack_438;
  undefined1 ******ppppppuStack_3a0;
  code *pcStack_398;
  undefined1 *****pppppuStack_310;
  code *pcStack_308;
  undefined1 ****ppppuStack_270;
  code *pcStack_268;
  undefined1 ***pppuStack_1e0;
  code *pcStack_1d8;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  
  func_0x000107c35410();
  func_0x00010b286cf4();
  func_0x000107c35450();
  func_0x000107c354ac();
  func_0x000107c35434();
  func_0x000107c35494();
  func_0x000107c354bc();
  do {
    func_0x000107c354a0();
    func_0x000107c354a8();
  } while (!(bool)in_ZR);
  func_0x000107c35428();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286dc8();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcStack_a8 = FUN_10b2857f8;
    puStack_b0 = &stack0xfffffffffffffff0;
    func_0x000107c35410();
    func_0x000107c35448();
    func_0x000107c354ac();
    func_0x000107c35434();
    func_0x000107c35494();
    func_0x000107c354b4();
    do {
      func_0x000107c354a0();
      func_0x000107c354a8();
    } while (!(bool)in_ZR);
    func_0x000107c35428();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286dbc();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcStack_138 = FUN_10b285870;
    ppuStack_140 = &puStack_b0;
    func_0x000107c35410();
    func_0x00010b286cf4();
    func_0x000107c35450();
    func_0x000107c354ac();
    func_0x000107c35434();
    func_0x000107c35494();
    func_0x000107c354bc();
    do {
      func_0x000107c354a0();
      func_0x000107c354a8();
    } while (!(bool)in_ZR);
    func_0x000107c35428();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b286d60();
      func_0x00010b286dc8();
      do {
        func_0x00010b286da8();
        func_0x00010b286db0();
      } while (!(bool)in_ZR);
      func_0x00010b286da0();
      pcStack_1d8 = FUN_10b2858ec;
      pppuStack_1e0 = &ppuStack_140;
      func_0x000107c35410();
      func_0x000107c35448();
      func_0x000107c354ac();
      func_0x000107c35434();
      func_0x000107c35494();
      func_0x000107c354b4();
      do {
        func_0x000107c354a0();
        func_0x000107c354a8();
      } while (!(bool)in_ZR);
      func_0x000107c35428();
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010b286d60();
      func_0x00010b286dbc();
      do {
        func_0x00010b286da8();
        func_0x00010b286db0();
      } while (!(bool)in_ZR);
      func_0x00010b286da0();
      pcStack_268 = FUN_10b285964;
      ppppuStack_270 = &pppuStack_1e0;
      func_0x000107c35410();
      func_0x00010b286cf4();
      func_0x000107c35450();
      func_0x000107c354ac();
      func_0x000107c35434();
      func_0x000107c35494();
      func_0x000107c354bc();
      do {
        func_0x000107c354a0();
        func_0x000107c354a8();
      } while (!(bool)in_ZR);
      func_0x000107c35428();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010b286d60();
        func_0x00010b286dc8();
        do {
          func_0x00010b286da8();
          func_0x00010b286db0();
        } while (!(bool)in_ZR);
        func_0x00010b286da0();
        pcStack_308 = FUN_10b2859e0;
        pppppuStack_310 = &ppppuStack_270;
        func_0x000107c35410();
        func_0x000107c35448();
        func_0x000107c354ac();
        func_0x000107c35434();
        func_0x000107c35494();
        func_0x000107c354b4();
        do {
          func_0x000107c354a0();
          func_0x000107c354a8();
        } while (!(bool)in_ZR);
        func_0x000107c35428();
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x00010b286d60();
        func_0x00010b286dbc();
        do {
          func_0x00010b286da8();
          func_0x00010b286db0();
        } while (!(bool)in_ZR);
        func_0x00010b286da0();
        pcStack_398 = FUN_10b285a58;
        ppppppuStack_3a0 = &pppppuStack_310;
        func_0x000107c35410();
        func_0x00010b286cf4();
        func_0x000107c35450();
        func_0x000107c354ac();
        func_0x000107c35434();
        func_0x000107c35494();
        func_0x000107c354bc();
        do {
          func_0x000107c354a0();
          func_0x000107c354a8();
        } while (!(bool)in_ZR);
        func_0x000107c35428();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010b286d60();
          func_0x00010b286dc8();
          do {
            func_0x00010b286da8();
            func_0x00010b286db0();
          } while (!(bool)in_ZR);
          func_0x00010b286da0();
          pcStack_438 = FUN_10b285ad4;
          pppppppuStack_440 = &ppppppuStack_3a0;
          func_0x000107c35438();
          func_0x000107c35414();
          func_0x000107c35444();
          func_0x000107c35454();
          func_0x000107c35460();
          func_0x000107c35490();
          func_0x000107c35494();
          func_0x000107c354c4();
          do {
            func_0x000107c354a0();
            func_0x000107c354a8();
          } while (!(bool)in_ZR);
          func_0x000107c35428();
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          func_0x00010b286d60();
          func_0x00010b286dd4();
          do {
            func_0x00010b286da8();
            func_0x00010b286db0();
          } while (!(bool)in_ZR);
          func_0x00010b286da0();
          pcStack_4f8 = FUN_10b285b58;
          puVar3 = param_5;
          pppppppuStack_500 = &pppppppuStack_440;
          func_0x000107c35438();
          func_0x000107c35414();
          func_0x000107c35450();
          func_0x000107c35460();
          func_0x000107c35490();
          func_0x000107c35494();
          func_0x000107c354bc();
          do {
            func_0x000107c354a0();
            func_0x000107c354a8();
          } while (!(bool)in_ZR);
          func_0x000107c35428();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286dc8();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            pcStack_598 = FUN_10b285bd8;
            pppppppuStack_5a0 = &pppppppuStack_500;
            func_0x000107c35410();
            func_0x00010b286cc0();
            uStack_5d8 = param_6[1];
            uStack_5e0 = *param_6;
            uStack_5d0 = param_6[2];
            param_6[1] = 0;
            param_6[2] = 0;
            *param_6 = 0;
            func_0x000107c35488();
            func_0x000107c354ac();
            func_0x000107c35434();
            func_0x000107c35494();
            func_0x000107c354d4();
            do {
              func_0x000107c354a0();
              func_0x000107c354a8();
            } while (!(bool)in_ZR);
            func_0x000107c35428();
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286df0();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            pcStack_668 = FUN_10b285c78;
            pppppppuStack_670 = &pppppppuStack_5a0;
            func_0x000107c35410();
            func_0x00010b286cc0();
            func_0x000107c35454();
            func_0x000107c354ac();
            func_0x000107c35434();
            func_0x000107c35494();
            func_0x000107c354c4();
            do {
              func_0x000107c354a0();
              func_0x000107c354a8();
            } while (!(bool)in_ZR);
            func_0x000107c35428();
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286dd4();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            pcStack_728 = FUN_10b285cf4;
            pppppppuStack_730 = &pppppppuStack_670;
            func_0x000107c35410();
            func_0x00010b286cf4();
            func_0x000107c35450();
            func_0x000107c354ac();
            func_0x000107c35434();
            func_0x000107c35494();
            func_0x000107c354bc();
            do {
              func_0x000107c354a0();
              func_0x000107c354a8();
            } while (!(bool)in_ZR);
            func_0x000107c35428();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dc8();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              pcStack_7c8 = FUN_10b285d70;
              pppppppuStack_7d0 = &pppppppuStack_730;
              func_0x000107c35410();
              func_0x000107c35448();
              func_0x000107c354ac();
              puVar2 = (undefined8 *)&UNK_110cce4d8;
              func_0x000107c35434();
              func_0x000107c35494();
              func_0x000107c354b4();
              do {
                func_0x000107c354a0();
                func_0x000107c354a8();
              } while (!(bool)in_ZR);
              func_0x000107c35428();
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dbc();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              pcVar10 = FUN_10b285de8;
              func_0x000107c354e0();
              puVar4 = param_3;
              puVar6 = param_4;
              puVar8 = puVar3;
              pppppppuStack_7b0 = &pppppppuStack_7d0;
              pcStack_7a8 = pcVar10;
              func_0x000107c3541c();
              (*extraout_x8)();
              puVar1 = auStack_850;
              if (param_1 == 0) {
                func_0x000107c35430(unaff_x21);
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x00010b286d60();
                func_0x00010b286dc8();
                do {
                  func_0x00010b286da8();
                  func_0x00010b286db0();
                } while (!(bool)in_ZR);
                func_0x00010b286da0();
                pcStack_858 = FUN_10b285e84;
                puStack_880 = param_3;
                puStack_878 = param_4;
                puStack_870 = param_5;
                puStack_868 = puVar3;
                pppppppuStack_860 = &pppppppuStack_7b0;
                func_0x000107c3542c();
                (*extraout_x8_00)();
                if (param_1 != 0) {
                  func_0x00010b286d10();
                  func_0x000107c35448();
                  func_0x000107c354ac();
                  func_0x000107c35434();
                  func_0x000107c35494();
                  func_0x000107c354b4();
                  do {
                    func_0x000107c354a0();
                    func_0x000107c354a8();
                  } while (!(bool)in_ZR);
                }
                func_0x000107c35428();
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x00010b286d60();
                func_0x00010b286dbc();
                do {
                  func_0x00010b286da8();
                  func_0x00010b286db0();
                } while (!(bool)in_ZR);
                func_0x00010b286da0();
                pcStack_8e8 = FUN_10b285f0c;
                puStack_910 = param_3;
                puStack_908 = param_4;
                puStack_900 = param_5;
                puStack_8f8 = puVar3;
                pppppppuStack_8f0 = &pppppppuStack_860;
                func_0x000107c35410();
                func_0x00010b286cc0();
                func_0x000107c35454();
                func_0x000107c354ac();
                func_0x000107c35434();
                func_0x000107c35494();
                func_0x000107c354c4();
                do {
                  func_0x000107c354a0();
                  func_0x000107c354a8();
                } while (!(bool)in_ZR);
                func_0x000107c35428();
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x00010b286d60();
                func_0x00010b286dd4();
                do {
                  func_0x00010b286da8();
                  func_0x00010b286db0();
                } while (!(bool)in_ZR);
                func_0x00010b286da0();
                pcStack_9a8 = FUN_10b285f88;
                puStack_9d0 = param_3;
                puStack_9c8 = param_4;
                puStack_9c0 = param_5;
                pcStack_9b8 = pcVar10;
                pppppppuStack_9b0 = &pppppppuStack_8f0;
                func_0x000107c35410();
                func_0x00010b286cf4();
                func_0x000107c35450();
                func_0x000107c354ac();
                func_0x000107c35434();
                func_0x000107c35494();
                func_0x000107c354bc();
                do {
                  func_0x000107c354a0();
                  func_0x000107c354a8();
                } while (!(bool)in_ZR);
                func_0x000107c35428();
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x00010b286d60();
                func_0x00010b286dc8();
                do {
                  func_0x00010b286da8();
                  func_0x00010b286db0();
                } while (!(bool)in_ZR);
                func_0x00010b286da0();
                pcVar10 = FUN_10b286004;
                func_0x000107c354e4();
                pppppppuStack_980 = &pppppppuStack_9b0;
                pcStack_978 = pcVar10;
                func_0x000107c3541c();
                (*extraout_x8_01)();
                if (param_1 != 0) {
                  func_0x000107c35420();
                  func_0x000107c35454();
                  func_0x00010b286d80();
                  func_0x000107c35484();
                  func_0x000107c35494();
                  func_0x000107c354c4();
                  do {
                    func_0x000107c354a0();
                    func_0x000107c354a8();
                  } while (!(bool)in_ZR);
                }
                func_0x000107c35430(pcStack_9b8);
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  func_0x00010b286dd4();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  pcVar10 = FUN_10b2860a4;
                  func_0x000107c354e4();
                  pppppppuStack_980 = &pppppppuStack_980;
                  pcStack_978 = pcVar10;
                  func_0x000107c3541c();
                  puVar2 = (undefined8 *)&UNK_110cce7f8;
                  (*extraout_x8_02)();
                  if (param_1 != 0) {
                    func_0x000107c35420();
                    func_0x000107c35454();
                    func_0x00010b286d48();
                    puVar2 = (undefined8 *)&UNK_110cce7f8;
                    func_0x00010b286d94();
                    func_0x000107c35494();
                    func_0x000107c354c4();
                    do {
                      func_0x000107c354a0();
                      func_0x000107c354a8();
                    } while (!(bool)in_ZR);
                  }
                  func_0x000107c35430(pcStack_9b8);
                  if (!(bool)in_ZR) {
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286dd4();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    pcVar10 = FUN_10b286144;
                    func_0x000107c354e0();
                    puVar5 = puVar4;
                    puVar7 = puVar6;
                    pppppppuStack_9a0 = &pppppppuStack_980;
                    pcStack_998 = pcVar10;
                    func_0x000107c3541c();
                    puVar3 = (undefined8 *)&UNK_110cce848;
                    (*extraout_x8_03)();
                    puVar1 = auStack_a40;
                    param_4 = puVar6;
                    param_3 = puVar4;
                    if (param_1 == 0) {
                      func_0x000107c35430(uStack_9d8);
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dc8();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      pcVar10 = FUN_10b2861e0;
                      func_0x000107c354e0();
                      puVar4 = puVar5;
                      puVar6 = puVar7;
                      puVar9 = puVar8;
                      pppppppuStack_9a0 = &pppppppuStack_9a0;
                      pcStack_998 = pcVar10;
                      func_0x000107c3541c();
                      (*extraout_x8_04)();
                      puVar1 = auStack_a40;
                      param_4 = puVar7;
                      param_3 = puVar5;
                      puVar2 = puVar3;
                      if (param_1 == 0) {
                        func_0x000107c35430(uStack_9d8);
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286dc8();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        pcStack_a48 = FUN_10b28627c;
                        puStack_a70 = puVar5;
                        puStack_a68 = puVar7;
                        puStack_a60 = param_5;
                        puStack_a58 = puVar8;
                        puStack_a50 = (undefined1 *)&pppppppuStack_9a0;
                        func_0x000107c3542c();
                        (*extraout_x8_05)();
                        if (param_1 != 0) {
                          func_0x00010b286d10();
                          func_0x000107c35448();
                          func_0x000107c354ac();
                          func_0x000107c35434();
                          func_0x000107c35494();
                          func_0x000107c354b4();
                          do {
                            func_0x000107c354a0();
                            func_0x000107c354a8();
                          } while (!(bool)in_ZR);
                        }
                        func_0x000107c35428();
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286dbc();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        pcStack_ad8 = FUN_10b286304;
                        param_4 = puVar6;
                        puStack_b00 = puVar5;
                        puStack_af8 = puVar7;
                        puStack_af0 = param_5;
                        puStack_ae8 = puVar8;
                        ppuStack_ae0 = &puStack_a50;
                        func_0x000107c35410();
                        func_0x000107c35448();
                        func_0x000107c354ac();
                        func_0x000107c35434();
                        func_0x000107c35494();
                        func_0x000107c354b4();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                        func_0x000107c35428();
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286dbc();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        puVar1 = auStack_c20;
                        pcStack_b68 = FUN_10b28637c;
                        puStack_b90 = puVar5;
                        puStack_b88 = puVar7;
                        ppppuStack_b80 = (undefined1 ****)param_5;
                        pcStack_b78 = (code *)puVar6;
                        pppuStack_b70 = &ppuStack_ae0;
                        func_0x000107c35438();
                        func_0x000107c35414();
                        func_0x000107c35444();
                        func_0x000107c35454();
                        func_0x000107c35460();
                        puVar2 = (undefined8 *)&UNK_110ccea28;
                        func_0x000107c35490();
                        func_0x000107c35494();
                        func_0x000107c354c4();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                        func_0x000107c35428();
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286dd4();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        pcVar10 = FUN_10b286400;
                        func_0x000107c354e0();
                        puVar6 = puVar4;
                        puVar8 = param_4;
                        ppppuStack_b80 = &pppuStack_b70;
                        pcStack_b78 = pcVar10;
                        func_0x000107c3541c();
                        puVar3 = (undefined8 *)&UNK_110ccea78;
                        (*extraout_x8_06)();
                        param_3 = puVar4;
                        if (param_1 == 0) {
                          func_0x000107c35430(uStack_bb8);
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          func_0x00010b286dc8();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          param_3 = puVar6;
                          puVar2 = puVar8;
                          puVar4 = puVar9;
                          pcVar11 = pcVar10;
                          func_0x000107c35440();
                          uStack_c88 = extraout_x8_07;
                          func_0x000107c35474();
                          (*extraout_x8_08)();
                          if (param_1 != 0) {
                            uStack_d18 = puVar3[1];
                            uStack_d20 = *puVar3;
                            uStack_d10 = puVar3[2];
                            puVar3[1] = 0;
                            puVar3[2] = 0;
                            *puVar3 = 0;
                            uStack_d00 = puVar6[1];
                            uStack_d08 = *puVar6;
                            uStack_cf8 = puVar6[2];
                            puVar6[1] = 0;
                            puVar6[2] = 0;
                            *puVar6 = 0;
                            uStack_ce8 = puVar8[1];
                            uStack_cf0 = *puVar8;
                            uStack_ce0 = puVar8[2];
                            puVar8[1] = 0;
                            puVar8[2] = 0;
                            *puVar8 = 0;
                            uStack_cd0 = puVar9[1];
                            uStack_cd8 = *puVar9;
                            uStack_cc8 = puVar9[2];
                            *puVar9 = 0;
                            puVar9[1] = 0;
                            puVar9[2] = 0;
                            uStack_cb8 = *(undefined8 *)(pcVar10 + 8);
                            uStack_cc0 = *(undefined8 *)pcVar10;
                            uStack_cb0 = *(undefined8 *)(pcVar10 + 0x10);
                            func_0x00010b286d6c();
                            func_0x00010b286dfc();
                            func_0x00010b286de0();
                            func_0x00010b286d80();
                            func_0x000107c35484();
                            func_0x000107c35494();
                            do {
                              func_0x000107c354a0();
                              func_0x000107c354a8();
                            } while (!(bool)in_ZR);
                          }
                          func_0x000107c35430(uStack_c88);
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          func_0x000107c354dc();
                          func_0x000107c35440();
                          uStack_ca8 = extraout_x8_09;
                          func_0x000107c35474();
                          (*extraout_x8_10)();
                          if (param_1 != 0) {
                            func_0x000107c3543c();
                            func_0x000107c35488();
                            func_0x00010b286d80();
                            func_0x000107c35484();
                            func_0x000107c35494();
                            func_0x000107c354d4();
                            do {
                              func_0x000107c354a0();
                              func_0x000107c354a8();
                            } while (!(bool)in_ZR);
                          }
                          func_0x000107c35430(uStack_ca8);
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          func_0x00010b286df0();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          func_0x000107c354e4();
                          puVar3 = puVar2;
                          puVar6 = puVar4;
                          pcVar10 = pcVar11;
                          func_0x000107c3541c();
                          (*extraout_x8_11)();
                          if (param_1 != 0) {
                            func_0x000107c35420();
                            func_0x000107c35454();
                            func_0x00010b286d80();
                            func_0x000107c35484();
                            func_0x000107c35494();
                            func_0x000107c354c4();
                            do {
                              func_0x000107c354a0();
                              func_0x000107c354a8();
                            } while (!(bool)in_ZR);
                          }
                          func_0x000107c35430(uStack_cb8);
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          func_0x00010b286dd4();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          uStack_d60 = 0x78;
                          pcStack_d48 = FUN_10b286724;
                          pcVar12 = pcVar10;
                          puStack_d70 = puVar2;
                          puStack_d68 = puVar4;
                          pcStack_d58 = pcVar11;
                          puStack_d50 = &stack0xfffffffffffff380;
                          func_0x000107c35410();
                          func_0x00010b286cc0();
                          func_0x000107c35454();
                          func_0x000107c354ac();
                          func_0x000107c35434();
                          func_0x000107c35494();
                          func_0x000107c354c4();
                          do {
                            func_0x000107c354a0();
                            func_0x000107c354a8();
                          } while (!(bool)in_ZR);
                          func_0x000107c35428();
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          func_0x00010b286dd4();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          uStack_e20 = 0x78;
                          pcStack_e08 = FUN_10b2867a0;
                          puVar8 = puVar6;
                          puStack_e30 = puVar2;
                          puStack_e28 = puVar4;
                          pcStack_e18 = pcVar10;
                          ppuStack_e10 = &puStack_d50;
                          func_0x000107c35410();
                          func_0x00010b286cf4();
                          func_0x000107c35450();
                          func_0x000107c354ac();
                          func_0x000107c35434();
                          func_0x000107c35494();
                          func_0x000107c354bc();
                          do {
                            func_0x000107c354a0();
                            func_0x000107c354a8();
                          } while (!(bool)in_ZR);
                          func_0x000107c35428();
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          func_0x00010b286dc8();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          uStack_ec0 = 0x78;
                          pcStack_ea8 = FUN_10b28681c;
                          puStack_ed0 = puVar2;
                          puStack_ec8 = puVar4;
                          puStack_eb8 = puVar6;
                          pppuStack_eb0 = &ppuStack_e10;
                          func_0x000107c35410();
                          func_0x000107c35448();
                          func_0x000107c354ac();
                          func_0x000107c35434();
                          func_0x000107c35494();
                          func_0x000107c354b4();
                          do {
                            func_0x000107c354a0();
                            func_0x000107c354a8();
                          } while (!(bool)in_ZR);
                          func_0x000107c35428();
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          func_0x00010b286dbc();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          pcVar10 = FUN_10b286894;
                          func_0x000107c354dc();
                          ppppuStack_e50 = &pppuStack_eb0;
                          pcStack_e48 = pcVar10;
                          func_0x000107c35440();
                          uStack_e98 = extraout_x8_12;
                          func_0x000107c35474();
                          (*extraout_x8_13)();
                          if (param_1 != 0) {
                            func_0x000107c3543c();
                            func_0x000107c35488();
                            func_0x00010b286d80();
                            func_0x000107c35484();
                            func_0x000107c35494();
                            func_0x000107c354d4();
                            do {
                              func_0x000107c354a0();
                              func_0x000107c354a8();
                            } while (!(bool)in_ZR);
                          }
                          func_0x000107c35430(uStack_e98);
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          func_0x00010b286df0();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          pcVar10 = FUN_10b286940;
                          func_0x000107c354e4();
                          param_4 = puVar3;
                          puVar2 = puVar8;
                          pppppuStack_e70 = &ppppuStack_e50;
                          pcStack_e68 = pcVar10;
                          func_0x000107c3541c();
                          (*extraout_x8_14)();
                          if (param_1 != 0) {
                            func_0x000107c35420();
                            func_0x000107c35454();
                            func_0x00010b286d80();
                            func_0x000107c35484();
                            func_0x000107c35494();
                            func_0x000107c354c4();
                            do {
                              func_0x000107c354a0();
                              func_0x000107c354a8();
                            } while (!(bool)in_ZR);
                          }
                          func_0x000107c35430(pcStack_ea8);
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          func_0x00010b286dd4();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          uStack_f50 = 0x78;
                          pcStack_f38 = FUN_10b2869e0;
                          puVar4 = puVar2;
                          puStack_f60 = puVar3;
                          puStack_f58 = puVar8;
                          pcStack_f48 = pcVar12;
                          ppppppuStack_f40 = &pppppuStack_e70;
                          func_0x000107c35410();
                          func_0x00010b286cf4();
                          func_0x000107c35450();
                          func_0x000107c354ac();
                          func_0x000107c35434();
                          func_0x000107c35494();
                          func_0x000107c354bc();
                          do {
                            func_0x000107c354a0();
                            func_0x000107c354a8();
                          } while (!(bool)in_ZR);
                          func_0x000107c35428();
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          func_0x00010b286dc8();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          puVar1 = auStack_1060;
                          uStack_ff0 = 0x78;
                          pcStack_fd8 = FUN_10b286a5c;
                          puStack_1000 = puVar3;
                          puStack_ff8 = puVar8;
                          puStack_fe8 = puVar2;
                          pppppppuStack_fe0 = &ppppppuStack_f40;
                          func_0x000107c35410();
                          func_0x000107c35448();
                          func_0x000107c354ac();
                          puVar2 = (undefined8 *)&UNK_110cceed8;
                          func_0x000107c35434();
                          func_0x000107c35494();
                          func_0x000107c354b4();
                          do {
                            func_0x000107c354a0();
                            func_0x000107c354a8();
                          } while (!(bool)in_ZR);
                          func_0x000107c35428();
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          func_0x00010b286dbc();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          pcVar10 = FUN_10b286ad4;
                          func_0x000107c354e0();
                          pppppppuStack_fc0 = &pppppppuStack_fe0;
                          pcStack_fb8 = pcVar10;
                          func_0x000107c3541c();
                          (*extraout_x8_15)();
                          if (param_1 == 0) {
                            func_0x000107c35430(puStack_ff8);
                            if ((bool)in_ZR) {
                              return;
                            }
                            ___stack_chk_fail();
                            func_0x00010b286d60();
                            func_0x00010b286dc8();
                            do {
                              func_0x00010b286da8();
                              func_0x00010b286db0();
                            } while (!(bool)in_ZR);
                            func_0x00010b286da0();
                            uStack_1080 = 0x78;
                            pcStack_1068 = FUN_10b286b70;
                            puStack_1090 = param_3;
                            puStack_1088 = param_4;
                            puStack_1078 = puVar4;
                            pppppppuStack_1070 = &pppppppuStack_fc0;
                            func_0x000107c3542c();
                            (*extraout_x8_16)();
                            if (param_1 != 0) {
                              func_0x00010b286d10();
                              func_0x000107c35448();
                              func_0x000107c354ac();
                              func_0x000107c35434();
                              func_0x000107c35494();
                              func_0x000107c354b4();
                              do {
                                func_0x000107c354a0();
                                func_0x000107c354a8();
                              } while (!(bool)in_ZR);
                            }
                            func_0x000107c35428();
                            if ((bool)in_ZR) {
                              return;
                            }
                            ___stack_chk_fail();
                            func_0x00010b286d60();
                            func_0x00010b286dbc();
                            do {
                              func_0x00010b286da8();
                              func_0x00010b286db0();
                            } while (!(bool)in_ZR);
                            func_0x00010b286da0();
                            uStack_1110 = 0x78;
                            pcStack_10f8 = FUN_10b286bf8;
                            puStack_1120 = param_3;
                            puStack_1118 = param_4;
                            puStack_1108 = puVar4;
                            pppppppuStack_1100 = &pppppppuStack_1070;
                            func_0x000107c35410();
                            func_0x000107c35448();
                            func_0x000107c354ac();
                            func_0x000107c35434();
                            func_0x000107c35494();
                            func_0x000107c354b4();
                            do {
                              func_0x000107c354a0();
                              func_0x000107c354a8();
                            } while (!(bool)in_ZR);
                            func_0x000107c35428();
                            if ((bool)in_ZR) {
                              return;
                            }
                            ___stack_chk_fail();
                            func_0x00010b286d60();
                            func_0x00010b286dbc();
                            do {
                              func_0x00010b286da8();
                              func_0x00010b286db0();
                            } while (!(bool)in_ZR);
                            func_0x00010b286da0();
                            puVar1 = auStack_1180;
                          }
                        }
                      }
                    }
                    goto FUN_10b286c70;
                  }
                }
                return;
              }
FUN_10b286c70:
              uVar13 = *puVar2;
              *(undefined8 *)(puVar1 + 0x28) = puVar2[1];
              *(undefined8 *)(puVar1 + 0x20) = uVar13;
              *(undefined8 *)(puVar1 + 0x30) = puVar2[2];
              puVar2[1] = 0;
              puVar2[2] = 0;
              *puVar2 = 0;
              uVar13 = *param_3;
              *(undefined8 *)(puVar1 + 0x40) = param_3[1];
              *(undefined8 *)(puVar1 + 0x38) = uVar13;
              *(undefined8 *)(puVar1 + 0x48) = param_3[2];
              *param_3 = 0;
              param_3[1] = 0;
              param_3[2] = 0;
              *(undefined8 *)(puVar1 + 0x60) = param_4[2];
              uVar13 = *param_4;
              *(undefined8 *)(puVar1 + 0x58) = param_4[1];
              *(undefined8 *)(puVar1 + 0x50) = uVar13;
              param_4[1] = 0;
              param_4[2] = 0;
              *param_4 = 0;
              return;
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10b2857f8; end: 10b28586f;  */

/* WARNING: Possible PIC construction at 0x00010b285e20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b28617c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286b0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b28643c) */
/* WARNING: Removing unreachable block (ram,0x00010b286458) */
/* WARNING: Removing unreachable block (ram,0x00010b28621c) */
/* WARNING: Removing unreachable block (ram,0x00010b286238) */
/* WARNING: Removing unreachable block (ram,0x00010b286180) */
/* WARNING: Removing unreachable block (ram,0x00010b28619c) */
/* WARNING: Removing unreachable block (ram,0x00010b285e24) */
/* WARNING: Removing unreachable block (ram,0x00010b285e40) */
/* WARNING: Removing unreachable block (ram,0x00010b286b10) */
/* WARNING: Removing unreachable block (ram,0x00010b286b2c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10b2857f8(int param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  undefined8 extraout_x8_07;
  code *extraout_x8_08;
  undefined8 extraout_x8_09;
  code *extraout_x8_10;
  code *extraout_x8_11;
  undefined8 extraout_x8_12;
  code *extraout_x8_13;
  code *extraout_x8_14;
  code *extraout_x8_15;
  code *extraout_x8_16;
  undefined8 unaff_x21;
  undefined8 uVar13;
  undefined1 auStack_10e0 [96];
  undefined8 *puStack_1080;
  undefined8 *puStack_1078;
  undefined8 uStack_1070;
  undefined8 *puStack_1068;
  undefined8 *******pppppppuStack_1060;
  code *pcStack_1058;
  undefined8 *puStack_ff0;
  undefined8 *puStack_fe8;
  undefined8 uStack_fe0;
  undefined8 *puStack_fd8;
  undefined8 *******pppppppuStack_fd0;
  code *pcStack_fc8;
  undefined1 auStack_fc0 [96];
  undefined8 *puStack_f60;
  undefined8 *puStack_f58;
  undefined8 uStack_f50;
  undefined8 *puStack_f48;
  undefined1 *******pppppppuStack_f40;
  code *pcStack_f38;
  undefined8 *******pppppppuStack_f20;
  code *pcStack_f18;
  undefined8 *puStack_ec0;
  undefined8 *puStack_eb8;
  undefined8 uStack_eb0;
  code *pcStack_ea8;
  undefined1 ******ppppppuStack_ea0;
  code *pcStack_e98;
  undefined8 *puStack_e30;
  undefined8 *puStack_e28;
  undefined8 uStack_e20;
  undefined8 *puStack_e18;
  undefined1 ***pppuStack_e10;
  code *pcStack_e08;
  undefined8 uStack_df8;
  undefined1 *****pppppuStack_dd0;
  code *pcStack_dc8;
  undefined1 ****ppppuStack_db0;
  code *pcStack_da8;
  undefined8 *puStack_d90;
  undefined8 *puStack_d88;
  undefined8 uStack_d80;
  code *pcStack_d78;
  undefined1 **ppuStack_d70;
  code *pcStack_d68;
  undefined8 *puStack_cd0;
  undefined8 *puStack_cc8;
  undefined8 uStack_cc0;
  code *pcStack_cb8;
  undefined1 *puStack_cb0;
  code *pcStack_ca8;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_be8;
  undefined1 auStack_b80 [104];
  undefined8 uStack_b18;
  undefined8 *puStack_af0;
  undefined8 *puStack_ae8;
  undefined1 ****ppppuStack_ae0;
  code *pcStack_ad8;
  undefined1 ***pppuStack_ad0;
  code *pcStack_ac8;
  undefined8 *puStack_a60;
  undefined8 *puStack_a58;
  undefined8 *puStack_a50;
  undefined8 *puStack_a48;
  undefined1 **ppuStack_a40;
  code *pcStack_a38;
  undefined8 *puStack_9d0;
  undefined8 *puStack_9c8;
  undefined8 *puStack_9c0;
  undefined8 *puStack_9b8;
  undefined1 *puStack_9b0;
  code *pcStack_9a8;
  undefined1 auStack_9a0 [104];
  undefined8 uStack_938;
  undefined8 *puStack_930;
  undefined8 *puStack_928;
  undefined8 *puStack_920;
  code *pcStack_918;
  undefined8 *******pppppppuStack_910;
  code *pcStack_908;
  undefined8 *******pppppppuStack_900;
  code *pcStack_8f8;
  undefined8 *******pppppppuStack_8e0;
  code *pcStack_8d8;
  undefined8 *puStack_870;
  undefined8 *puStack_868;
  undefined8 *puStack_860;
  undefined8 *puStack_858;
  undefined8 *******pppppppuStack_850;
  code *pcStack_848;
  undefined8 *puStack_7e0;
  undefined8 *puStack_7d8;
  undefined8 *puStack_7d0;
  undefined8 *puStack_7c8;
  undefined8 *******pppppppuStack_7c0;
  code *pcStack_7b8;
  undefined1 auStack_7b0 [96];
  undefined8 *******pppppppuStack_730;
  code *pcStack_728;
  undefined8 *******pppppppuStack_710;
  code *pcStack_708;
  undefined8 *******pppppppuStack_690;
  code *pcStack_688;
  undefined8 *******pppppppuStack_5d0;
  code *pcStack_5c8;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 *******pppppppuStack_500;
  code *pcStack_4f8;
  undefined1 *******pppppppuStack_460;
  code *pcStack_458;
  undefined1 ******ppppppuStack_3a0;
  code *pcStack_398;
  undefined1 *****pppppuStack_300;
  code *pcStack_2f8;
  undefined1 ****ppppuStack_270;
  code *pcStack_268;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  undefined1 *puStack_a0;
  code *pcStack_98;
  
  func_0x000107c35410();
  func_0x000107c35448();
  func_0x000107c354ac();
  func_0x000107c35434();
  func_0x000107c35494();
  func_0x000107c354b4();
  do {
    func_0x000107c354a0();
    func_0x000107c354a8();
  } while (!(bool)in_ZR);
  func_0x000107c35428();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b286d60();
  func_0x00010b286dbc();
  do {
    func_0x00010b286da8();
    func_0x00010b286db0();
  } while (!(bool)in_ZR);
  func_0x00010b286da0();
  pcStack_98 = FUN_10b285870;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x000107c35410();
  func_0x00010b286cf4();
  func_0x000107c35450();
  func_0x000107c354ac();
  func_0x000107c35434();
  func_0x000107c35494();
  func_0x000107c354bc();
  do {
    func_0x000107c354a0();
    func_0x000107c354a8();
  } while (!(bool)in_ZR);
  func_0x000107c35428();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286dc8();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcStack_138 = FUN_10b2858ec;
    ppuStack_140 = &puStack_a0;
    func_0x000107c35410();
    func_0x000107c35448();
    func_0x000107c354ac();
    func_0x000107c35434();
    func_0x000107c35494();
    func_0x000107c354b4();
    do {
      func_0x000107c354a0();
      func_0x000107c354a8();
    } while (!(bool)in_ZR);
    func_0x000107c35428();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286dbc();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcStack_1c8 = FUN_10b285964;
    pppuStack_1d0 = &ppuStack_140;
    func_0x000107c35410();
    func_0x00010b286cf4();
    func_0x000107c35450();
    func_0x000107c354ac();
    func_0x000107c35434();
    func_0x000107c35494();
    func_0x000107c354bc();
    do {
      func_0x000107c354a0();
      func_0x000107c354a8();
    } while (!(bool)in_ZR);
    func_0x000107c35428();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b286d60();
      func_0x00010b286dc8();
      do {
        func_0x00010b286da8();
        func_0x00010b286db0();
      } while (!(bool)in_ZR);
      func_0x00010b286da0();
      pcStack_268 = FUN_10b2859e0;
      ppppuStack_270 = &pppuStack_1d0;
      func_0x000107c35410();
      func_0x000107c35448();
      func_0x000107c354ac();
      func_0x000107c35434();
      func_0x000107c35494();
      func_0x000107c354b4();
      do {
        func_0x000107c354a0();
        func_0x000107c354a8();
      } while (!(bool)in_ZR);
      func_0x000107c35428();
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010b286d60();
      func_0x00010b286dbc();
      do {
        func_0x00010b286da8();
        func_0x00010b286db0();
      } while (!(bool)in_ZR);
      func_0x00010b286da0();
      pcStack_2f8 = FUN_10b285a58;
      pppppuStack_300 = &ppppuStack_270;
      func_0x000107c35410();
      func_0x00010b286cf4();
      func_0x000107c35450();
      func_0x000107c354ac();
      func_0x000107c35434();
      func_0x000107c35494();
      func_0x000107c354bc();
      do {
        func_0x000107c354a0();
        func_0x000107c354a8();
      } while (!(bool)in_ZR);
      func_0x000107c35428();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010b286d60();
        func_0x00010b286dc8();
        do {
          func_0x00010b286da8();
          func_0x00010b286db0();
        } while (!(bool)in_ZR);
        func_0x00010b286da0();
        pcStack_398 = FUN_10b285ad4;
        ppppppuStack_3a0 = &pppppuStack_300;
        func_0x000107c35438();
        func_0x000107c35414();
        func_0x000107c35444();
        func_0x000107c35454();
        func_0x000107c35460();
        func_0x000107c35490();
        func_0x000107c35494();
        func_0x000107c354c4();
        do {
          func_0x000107c354a0();
          func_0x000107c354a8();
        } while (!(bool)in_ZR);
        func_0x000107c35428();
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x00010b286d60();
        func_0x00010b286dd4();
        do {
          func_0x00010b286da8();
          func_0x00010b286db0();
        } while (!(bool)in_ZR);
        func_0x00010b286da0();
        pcStack_458 = FUN_10b285b58;
        puVar3 = param_5;
        pppppppuStack_460 = &ppppppuStack_3a0;
        func_0x000107c35438();
        func_0x000107c35414();
        func_0x000107c35450();
        func_0x000107c35460();
        func_0x000107c35490();
        func_0x000107c35494();
        func_0x000107c354bc();
        do {
          func_0x000107c354a0();
          func_0x000107c354a8();
        } while (!(bool)in_ZR);
        func_0x000107c35428();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010b286d60();
          func_0x00010b286dc8();
          do {
            func_0x00010b286da8();
            func_0x00010b286db0();
          } while (!(bool)in_ZR);
          func_0x00010b286da0();
          pcStack_4f8 = FUN_10b285bd8;
          pppppppuStack_500 = &pppppppuStack_460;
          func_0x000107c35410();
          func_0x00010b286cc0();
          uStack_538 = param_6[1];
          uStack_540 = *param_6;
          uStack_530 = param_6[2];
          param_6[1] = 0;
          param_6[2] = 0;
          *param_6 = 0;
          func_0x000107c35488();
          func_0x000107c354ac();
          func_0x000107c35434();
          func_0x000107c35494();
          func_0x000107c354d4();
          do {
            func_0x000107c354a0();
            func_0x000107c354a8();
          } while (!(bool)in_ZR);
          func_0x000107c35428();
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          func_0x00010b286d60();
          func_0x00010b286df0();
          do {
            func_0x00010b286da8();
            func_0x00010b286db0();
          } while (!(bool)in_ZR);
          func_0x00010b286da0();
          pcStack_5c8 = FUN_10b285c78;
          pppppppuStack_5d0 = &pppppppuStack_500;
          func_0x000107c35410();
          func_0x00010b286cc0();
          func_0x000107c35454();
          func_0x000107c354ac();
          func_0x000107c35434();
          func_0x000107c35494();
          func_0x000107c354c4();
          do {
            func_0x000107c354a0();
            func_0x000107c354a8();
          } while (!(bool)in_ZR);
          func_0x000107c35428();
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          func_0x00010b286d60();
          func_0x00010b286dd4();
          do {
            func_0x00010b286da8();
            func_0x00010b286db0();
          } while (!(bool)in_ZR);
          func_0x00010b286da0();
          pcStack_688 = FUN_10b285cf4;
          pppppppuStack_690 = &pppppppuStack_5d0;
          func_0x000107c35410();
          func_0x00010b286cf4();
          func_0x000107c35450();
          func_0x000107c354ac();
          func_0x000107c35434();
          func_0x000107c35494();
          func_0x000107c354bc();
          do {
            func_0x000107c354a0();
            func_0x000107c354a8();
          } while (!(bool)in_ZR);
          func_0x000107c35428();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286dc8();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            pcStack_728 = FUN_10b285d70;
            pppppppuStack_730 = &pppppppuStack_690;
            func_0x000107c35410();
            func_0x000107c35448();
            func_0x000107c354ac();
            puVar2 = (undefined8 *)&UNK_110cce4d8;
            func_0x000107c35434();
            func_0x000107c35494();
            func_0x000107c354b4();
            do {
              func_0x000107c354a0();
              func_0x000107c354a8();
            } while (!(bool)in_ZR);
            func_0x000107c35428();
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286dbc();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            pcVar10 = FUN_10b285de8;
            func_0x000107c354e0();
            puVar4 = param_3;
            puVar6 = param_4;
            puVar8 = puVar3;
            pppppppuStack_710 = &pppppppuStack_730;
            pcStack_708 = pcVar10;
            func_0x000107c3541c();
            (*extraout_x8)();
            puVar1 = auStack_7b0;
            if (param_1 == 0) {
              func_0x000107c35430(unaff_x21);
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dc8();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              pcStack_7b8 = FUN_10b285e84;
              puStack_7e0 = param_3;
              puStack_7d8 = param_4;
              puStack_7d0 = param_5;
              puStack_7c8 = puVar3;
              pppppppuStack_7c0 = &pppppppuStack_710;
              func_0x000107c3542c();
              (*extraout_x8_00)();
              if (param_1 != 0) {
                func_0x00010b286d10();
                func_0x000107c35448();
                func_0x000107c354ac();
                func_0x000107c35434();
                func_0x000107c35494();
                func_0x000107c354b4();
                do {
                  func_0x000107c354a0();
                  func_0x000107c354a8();
                } while (!(bool)in_ZR);
              }
              func_0x000107c35428();
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dbc();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              pcStack_848 = FUN_10b285f0c;
              puStack_870 = param_3;
              puStack_868 = param_4;
              puStack_860 = param_5;
              puStack_858 = puVar3;
              pppppppuStack_850 = &pppppppuStack_7c0;
              func_0x000107c35410();
              func_0x00010b286cc0();
              func_0x000107c35454();
              func_0x000107c354ac();
              func_0x000107c35434();
              func_0x000107c35494();
              func_0x000107c354c4();
              do {
                func_0x000107c354a0();
                func_0x000107c354a8();
              } while (!(bool)in_ZR);
              func_0x000107c35428();
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dd4();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              pcStack_908 = FUN_10b285f88;
              puStack_930 = param_3;
              puStack_928 = param_4;
              puStack_920 = param_5;
              pcStack_918 = pcVar10;
              pppppppuStack_910 = &pppppppuStack_850;
              func_0x000107c35410();
              func_0x00010b286cf4();
              func_0x000107c35450();
              func_0x000107c354ac();
              func_0x000107c35434();
              func_0x000107c35494();
              func_0x000107c354bc();
              do {
                func_0x000107c354a0();
                func_0x000107c354a8();
              } while (!(bool)in_ZR);
              func_0x000107c35428();
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dc8();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              pcVar10 = FUN_10b286004;
              func_0x000107c354e4();
              pppppppuStack_8e0 = &pppppppuStack_910;
              pcStack_8d8 = pcVar10;
              func_0x000107c3541c();
              (*extraout_x8_01)();
              if (param_1 != 0) {
                func_0x000107c35420();
                func_0x000107c35454();
                func_0x00010b286d80();
                func_0x000107c35484();
                func_0x000107c35494();
                func_0x000107c354c4();
                do {
                  func_0x000107c354a0();
                  func_0x000107c354a8();
                } while (!(bool)in_ZR);
              }
              func_0x000107c35430(pcStack_918);
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x00010b286d60();
                func_0x00010b286dd4();
                do {
                  func_0x00010b286da8();
                  func_0x00010b286db0();
                } while (!(bool)in_ZR);
                func_0x00010b286da0();
                pcVar10 = FUN_10b2860a4;
                func_0x000107c354e4();
                pppppppuStack_8e0 = &pppppppuStack_8e0;
                pcStack_8d8 = pcVar10;
                func_0x000107c3541c();
                puVar2 = (undefined8 *)&UNK_110cce7f8;
                (*extraout_x8_02)();
                if (param_1 != 0) {
                  func_0x000107c35420();
                  func_0x000107c35454();
                  func_0x00010b286d48();
                  puVar2 = (undefined8 *)&UNK_110cce7f8;
                  func_0x00010b286d94();
                  func_0x000107c35494();
                  func_0x000107c354c4();
                  do {
                    func_0x000107c354a0();
                    func_0x000107c354a8();
                  } while (!(bool)in_ZR);
                }
                func_0x000107c35430(pcStack_918);
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  func_0x00010b286dd4();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  pcVar10 = FUN_10b286144;
                  func_0x000107c354e0();
                  puVar5 = puVar4;
                  puVar7 = puVar6;
                  pppppppuStack_900 = &pppppppuStack_8e0;
                  pcStack_8f8 = pcVar10;
                  func_0x000107c3541c();
                  puVar3 = (undefined8 *)&UNK_110cce848;
                  (*extraout_x8_03)();
                  puVar1 = auStack_9a0;
                  param_4 = puVar6;
                  param_3 = puVar4;
                  if (param_1 == 0) {
                    func_0x000107c35430(uStack_938);
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286dc8();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    pcVar10 = FUN_10b2861e0;
                    func_0x000107c354e0();
                    puVar4 = puVar5;
                    puVar6 = puVar7;
                    puVar9 = puVar8;
                    pppppppuStack_900 = &pppppppuStack_900;
                    pcStack_8f8 = pcVar10;
                    func_0x000107c3541c();
                    (*extraout_x8_04)();
                    puVar1 = auStack_9a0;
                    param_4 = puVar7;
                    param_3 = puVar5;
                    puVar2 = puVar3;
                    if (param_1 == 0) {
                      func_0x000107c35430(uStack_938);
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dc8();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      pcStack_9a8 = FUN_10b28627c;
                      puStack_9d0 = puVar5;
                      puStack_9c8 = puVar7;
                      puStack_9c0 = param_5;
                      puStack_9b8 = puVar8;
                      puStack_9b0 = (undefined1 *)&pppppppuStack_900;
                      func_0x000107c3542c();
                      (*extraout_x8_05)();
                      if (param_1 != 0) {
                        func_0x00010b286d10();
                        func_0x000107c35448();
                        func_0x000107c354ac();
                        func_0x000107c35434();
                        func_0x000107c35494();
                        func_0x000107c354b4();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                      }
                      func_0x000107c35428();
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dbc();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      pcStack_a38 = FUN_10b286304;
                      param_4 = puVar6;
                      puStack_a60 = puVar5;
                      puStack_a58 = puVar7;
                      puStack_a50 = param_5;
                      puStack_a48 = puVar8;
                      ppuStack_a40 = &puStack_9b0;
                      func_0x000107c35410();
                      func_0x000107c35448();
                      func_0x000107c354ac();
                      func_0x000107c35434();
                      func_0x000107c35494();
                      func_0x000107c354b4();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                      func_0x000107c35428();
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dbc();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      puVar1 = auStack_b80;
                      pcStack_ac8 = FUN_10b28637c;
                      puStack_af0 = puVar5;
                      puStack_ae8 = puVar7;
                      ppppuStack_ae0 = (undefined1 ****)param_5;
                      pcStack_ad8 = (code *)puVar6;
                      pppuStack_ad0 = &ppuStack_a40;
                      func_0x000107c35438();
                      func_0x000107c35414();
                      func_0x000107c35444();
                      func_0x000107c35454();
                      func_0x000107c35460();
                      puVar2 = (undefined8 *)&UNK_110ccea28;
                      func_0x000107c35490();
                      func_0x000107c35494();
                      func_0x000107c354c4();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                      func_0x000107c35428();
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dd4();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      pcVar10 = FUN_10b286400;
                      func_0x000107c354e0();
                      puVar6 = puVar4;
                      puVar8 = param_4;
                      ppppuStack_ae0 = &pppuStack_ad0;
                      pcStack_ad8 = pcVar10;
                      func_0x000107c3541c();
                      puVar3 = (undefined8 *)&UNK_110ccea78;
                      (*extraout_x8_06)();
                      param_3 = puVar4;
                      if (param_1 == 0) {
                        func_0x000107c35430(uStack_b18);
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286dc8();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        param_3 = puVar6;
                        puVar2 = puVar8;
                        puVar4 = puVar9;
                        pcVar11 = pcVar10;
                        func_0x000107c35440();
                        uStack_be8 = extraout_x8_07;
                        func_0x000107c35474();
                        (*extraout_x8_08)();
                        if (param_1 != 0) {
                          uStack_c78 = puVar3[1];
                          uStack_c80 = *puVar3;
                          uStack_c70 = puVar3[2];
                          puVar3[1] = 0;
                          puVar3[2] = 0;
                          *puVar3 = 0;
                          uStack_c60 = puVar6[1];
                          uStack_c68 = *puVar6;
                          uStack_c58 = puVar6[2];
                          puVar6[1] = 0;
                          puVar6[2] = 0;
                          *puVar6 = 0;
                          uStack_c48 = puVar8[1];
                          uStack_c50 = *puVar8;
                          uStack_c40 = puVar8[2];
                          puVar8[1] = 0;
                          puVar8[2] = 0;
                          *puVar8 = 0;
                          uStack_c30 = puVar9[1];
                          uStack_c38 = *puVar9;
                          uStack_c28 = puVar9[2];
                          *puVar9 = 0;
                          puVar9[1] = 0;
                          puVar9[2] = 0;
                          uStack_c18 = *(undefined8 *)(pcVar10 + 8);
                          uStack_c20 = *(undefined8 *)pcVar10;
                          uStack_c10 = *(undefined8 *)(pcVar10 + 0x10);
                          func_0x00010b286d6c();
                          func_0x00010b286dfc();
                          func_0x00010b286de0();
                          func_0x00010b286d80();
                          func_0x000107c35484();
                          func_0x000107c35494();
                          do {
                            func_0x000107c354a0();
                            func_0x000107c354a8();
                          } while (!(bool)in_ZR);
                        }
                        func_0x000107c35430(uStack_be8);
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        func_0x000107c354dc();
                        func_0x000107c35440();
                        uStack_c08 = extraout_x8_09;
                        func_0x000107c35474();
                        (*extraout_x8_10)();
                        if (param_1 != 0) {
                          func_0x000107c3543c();
                          func_0x000107c35488();
                          func_0x00010b286d80();
                          func_0x000107c35484();
                          func_0x000107c35494();
                          func_0x000107c354d4();
                          do {
                            func_0x000107c354a0();
                            func_0x000107c354a8();
                          } while (!(bool)in_ZR);
                        }
                        func_0x000107c35430(uStack_c08);
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286df0();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        func_0x000107c354e4();
                        puVar3 = puVar2;
                        puVar6 = puVar4;
                        pcVar10 = pcVar11;
                        func_0x000107c3541c();
                        (*extraout_x8_11)();
                        if (param_1 != 0) {
                          func_0x000107c35420();
                          func_0x000107c35454();
                          func_0x00010b286d80();
                          func_0x000107c35484();
                          func_0x000107c35494();
                          func_0x000107c354c4();
                          do {
                            func_0x000107c354a0();
                            func_0x000107c354a8();
                          } while (!(bool)in_ZR);
                        }
                        func_0x000107c35430(uStack_c18);
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286dd4();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        uStack_cc0 = 0x78;
                        pcStack_ca8 = FUN_10b286724;
                        pcVar12 = pcVar10;
                        puStack_cd0 = puVar2;
                        puStack_cc8 = puVar4;
                        pcStack_cb8 = pcVar11;
                        puStack_cb0 = &stack0xfffffffffffff420;
                        func_0x000107c35410();
                        func_0x00010b286cc0();
                        func_0x000107c35454();
                        func_0x000107c354ac();
                        func_0x000107c35434();
                        func_0x000107c35494();
                        func_0x000107c354c4();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                        func_0x000107c35428();
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286dd4();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        uStack_d80 = 0x78;
                        pcStack_d68 = FUN_10b2867a0;
                        puVar8 = puVar6;
                        puStack_d90 = puVar2;
                        puStack_d88 = puVar4;
                        pcStack_d78 = pcVar10;
                        ppuStack_d70 = &puStack_cb0;
                        func_0x000107c35410();
                        func_0x00010b286cf4();
                        func_0x000107c35450();
                        func_0x000107c354ac();
                        func_0x000107c35434();
                        func_0x000107c35494();
                        func_0x000107c354bc();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                        func_0x000107c35428();
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286dc8();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        uStack_e20 = 0x78;
                        pcStack_e08 = FUN_10b28681c;
                        puStack_e30 = puVar2;
                        puStack_e28 = puVar4;
                        puStack_e18 = puVar6;
                        pppuStack_e10 = &ppuStack_d70;
                        func_0x000107c35410();
                        func_0x000107c35448();
                        func_0x000107c354ac();
                        func_0x000107c35434();
                        func_0x000107c35494();
                        func_0x000107c354b4();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                        func_0x000107c35428();
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286dbc();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        pcVar10 = FUN_10b286894;
                        func_0x000107c354dc();
                        ppppuStack_db0 = &pppuStack_e10;
                        pcStack_da8 = pcVar10;
                        func_0x000107c35440();
                        uStack_df8 = extraout_x8_12;
                        func_0x000107c35474();
                        (*extraout_x8_13)();
                        if (param_1 != 0) {
                          func_0x000107c3543c();
                          func_0x000107c35488();
                          func_0x00010b286d80();
                          func_0x000107c35484();
                          func_0x000107c35494();
                          func_0x000107c354d4();
                          do {
                            func_0x000107c354a0();
                            func_0x000107c354a8();
                          } while (!(bool)in_ZR);
                        }
                        func_0x000107c35430(uStack_df8);
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286df0();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        pcVar10 = FUN_10b286940;
                        func_0x000107c354e4();
                        param_4 = puVar3;
                        puVar2 = puVar8;
                        pppppuStack_dd0 = &ppppuStack_db0;
                        pcStack_dc8 = pcVar10;
                        func_0x000107c3541c();
                        (*extraout_x8_14)();
                        if (param_1 != 0) {
                          func_0x000107c35420();
                          func_0x000107c35454();
                          func_0x00010b286d80();
                          func_0x000107c35484();
                          func_0x000107c35494();
                          func_0x000107c354c4();
                          do {
                            func_0x000107c354a0();
                            func_0x000107c354a8();
                          } while (!(bool)in_ZR);
                        }
                        func_0x000107c35430(pcStack_e08);
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286dd4();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        uStack_eb0 = 0x78;
                        pcStack_e98 = FUN_10b2869e0;
                        puVar4 = puVar2;
                        puStack_ec0 = puVar3;
                        puStack_eb8 = puVar8;
                        pcStack_ea8 = pcVar12;
                        ppppppuStack_ea0 = &pppppuStack_dd0;
                        func_0x000107c35410();
                        func_0x00010b286cf4();
                        func_0x000107c35450();
                        func_0x000107c354ac();
                        func_0x000107c35434();
                        func_0x000107c35494();
                        func_0x000107c354bc();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                        func_0x000107c35428();
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286dc8();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        puVar1 = auStack_fc0;
                        uStack_f50 = 0x78;
                        pcStack_f38 = FUN_10b286a5c;
                        puStack_f60 = puVar3;
                        puStack_f58 = puVar8;
                        puStack_f48 = puVar2;
                        pppppppuStack_f40 = &ppppppuStack_ea0;
                        func_0x000107c35410();
                        func_0x000107c35448();
                        func_0x000107c354ac();
                        puVar2 = (undefined8 *)&UNK_110cceed8;
                        func_0x000107c35434();
                        func_0x000107c35494();
                        func_0x000107c354b4();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                        func_0x000107c35428();
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286dbc();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        pcVar10 = FUN_10b286ad4;
                        func_0x000107c354e0();
                        pppppppuStack_f20 = &pppppppuStack_f40;
                        pcStack_f18 = pcVar10;
                        func_0x000107c3541c();
                        (*extraout_x8_15)();
                        if (param_1 == 0) {
                          func_0x000107c35430(puStack_f58);
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          func_0x00010b286dc8();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          uStack_fe0 = 0x78;
                          pcStack_fc8 = FUN_10b286b70;
                          puStack_ff0 = param_3;
                          puStack_fe8 = param_4;
                          puStack_fd8 = puVar4;
                          pppppppuStack_fd0 = &pppppppuStack_f20;
                          func_0x000107c3542c();
                          (*extraout_x8_16)();
                          if (param_1 != 0) {
                            func_0x00010b286d10();
                            func_0x000107c35448();
                            func_0x000107c354ac();
                            func_0x000107c35434();
                            func_0x000107c35494();
                            func_0x000107c354b4();
                            do {
                              func_0x000107c354a0();
                              func_0x000107c354a8();
                            } while (!(bool)in_ZR);
                          }
                          func_0x000107c35428();
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          func_0x00010b286dbc();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          uStack_1070 = 0x78;
                          pcStack_1058 = FUN_10b286bf8;
                          puStack_1080 = param_3;
                          puStack_1078 = param_4;
                          puStack_1068 = puVar4;
                          pppppppuStack_1060 = &pppppppuStack_fd0;
                          func_0x000107c35410();
                          func_0x000107c35448();
                          func_0x000107c354ac();
                          func_0x000107c35434();
                          func_0x000107c35494();
                          func_0x000107c354b4();
                          do {
                            func_0x000107c354a0();
                            func_0x000107c354a8();
                          } while (!(bool)in_ZR);
                          func_0x000107c35428();
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          func_0x00010b286dbc();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          puVar1 = auStack_10e0;
                        }
                      }
                    }
                  }
                  goto FUN_10b286c70;
                }
              }
              return;
            }
FUN_10b286c70:
            uVar13 = *puVar2;
            *(undefined8 *)(puVar1 + 0x28) = puVar2[1];
            *(undefined8 *)(puVar1 + 0x20) = uVar13;
            *(undefined8 *)(puVar1 + 0x30) = puVar2[2];
            puVar2[1] = 0;
            puVar2[2] = 0;
            *puVar2 = 0;
            uVar13 = *param_3;
            *(undefined8 *)(puVar1 + 0x40) = param_3[1];
            *(undefined8 *)(puVar1 + 0x38) = uVar13;
            *(undefined8 *)(puVar1 + 0x48) = param_3[2];
            *param_3 = 0;
            param_3[1] = 0;
            param_3[2] = 0;
            *(undefined8 *)(puVar1 + 0x60) = param_4[2];
            uVar13 = *param_4;
            *(undefined8 *)(puVar1 + 0x58) = param_4[1];
            *(undefined8 *)(puVar1 + 0x50) = uVar13;
            param_4[1] = 0;
            param_4[2] = 0;
            *param_4 = 0;
            return;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10b285870; end: 10b2858eb;  */

/* WARNING: Possible PIC construction at 0x00010b285e20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b28617c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286b0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b28643c) */
/* WARNING: Removing unreachable block (ram,0x00010b286458) */
/* WARNING: Removing unreachable block (ram,0x00010b28621c) */
/* WARNING: Removing unreachable block (ram,0x00010b286238) */
/* WARNING: Removing unreachable block (ram,0x00010b286180) */
/* WARNING: Removing unreachable block (ram,0x00010b28619c) */
/* WARNING: Removing unreachable block (ram,0x00010b285e24) */
/* WARNING: Removing unreachable block (ram,0x00010b285e40) */
/* WARNING: Removing unreachable block (ram,0x00010b286b10) */
/* WARNING: Removing unreachable block (ram,0x00010b286b2c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10b285870(int param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  undefined8 extraout_x8_07;
  code *extraout_x8_08;
  undefined8 extraout_x8_09;
  code *extraout_x8_10;
  code *extraout_x8_11;
  undefined8 extraout_x8_12;
  code *extraout_x8_13;
  code *extraout_x8_14;
  code *extraout_x8_15;
  code *extraout_x8_16;
  undefined8 unaff_x21;
  undefined8 uVar13;
  undefined1 auStack_1050 [96];
  undefined8 *puStack_ff0;
  undefined8 *puStack_fe8;
  undefined8 uStack_fe0;
  undefined8 *puStack_fd8;
  undefined8 *******pppppppuStack_fd0;
  code *pcStack_fc8;
  undefined8 *puStack_f60;
  undefined8 *puStack_f58;
  undefined8 uStack_f50;
  undefined8 *puStack_f48;
  undefined8 *******pppppppuStack_f40;
  code *pcStack_f38;
  undefined1 auStack_f30 [96];
  undefined8 *puStack_ed0;
  undefined8 *puStack_ec8;
  undefined8 uStack_ec0;
  undefined8 *puStack_eb8;
  undefined1 *******pppppppuStack_eb0;
  code *pcStack_ea8;
  undefined8 *******pppppppuStack_e90;
  code *pcStack_e88;
  undefined8 *puStack_e30;
  undefined8 *puStack_e28;
  undefined8 uStack_e20;
  code *pcStack_e18;
  undefined1 ******ppppppuStack_e10;
  code *pcStack_e08;
  undefined8 *puStack_da0;
  undefined8 *puStack_d98;
  undefined8 uStack_d90;
  undefined8 *puStack_d88;
  undefined1 ***pppuStack_d80;
  code *pcStack_d78;
  undefined8 uStack_d68;
  undefined1 *****pppppuStack_d40;
  code *pcStack_d38;
  undefined1 ****ppppuStack_d20;
  code *pcStack_d18;
  undefined8 *puStack_d00;
  undefined8 *puStack_cf8;
  undefined8 uStack_cf0;
  code *pcStack_ce8;
  undefined1 **ppuStack_ce0;
  code *pcStack_cd8;
  undefined8 *puStack_c40;
  undefined8 *puStack_c38;
  undefined8 uStack_c30;
  code *pcStack_c28;
  undefined1 *puStack_c20;
  code *pcStack_c18;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b58;
  undefined1 auStack_af0 [104];
  undefined8 uStack_a88;
  undefined8 *puStack_a60;
  undefined8 *puStack_a58;
  undefined1 ****ppppuStack_a50;
  code *pcStack_a48;
  undefined1 ***pppuStack_a40;
  code *pcStack_a38;
  undefined8 *puStack_9d0;
  undefined8 *puStack_9c8;
  undefined8 *puStack_9c0;
  undefined8 *puStack_9b8;
  undefined1 **ppuStack_9b0;
  code *pcStack_9a8;
  undefined8 *puStack_940;
  undefined8 *puStack_938;
  undefined8 *puStack_930;
  undefined8 *puStack_928;
  undefined1 *puStack_920;
  code *pcStack_918;
  undefined1 auStack_910 [104];
  undefined8 uStack_8a8;
  undefined8 *puStack_8a0;
  undefined8 *puStack_898;
  undefined8 *puStack_890;
  code *pcStack_888;
  undefined8 *******pppppppuStack_880;
  code *pcStack_878;
  undefined8 *******pppppppuStack_870;
  code *pcStack_868;
  undefined8 *******pppppppuStack_850;
  code *pcStack_848;
  undefined8 *puStack_7e0;
  undefined8 *puStack_7d8;
  undefined8 *puStack_7d0;
  undefined8 *puStack_7c8;
  undefined8 *******pppppppuStack_7c0;
  code *pcStack_7b8;
  undefined8 *puStack_750;
  undefined8 *puStack_748;
  undefined8 *puStack_740;
  undefined8 *puStack_738;
  undefined8 *******pppppppuStack_730;
  code *pcStack_728;
  undefined1 auStack_720 [96];
  undefined8 *******pppppppuStack_6a0;
  code *pcStack_698;
  undefined8 *******pppppppuStack_680;
  code *pcStack_678;
  undefined8 *******pppppppuStack_600;
  code *pcStack_5f8;
  undefined8 *******pppppppuStack_540;
  code *pcStack_538;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined1 *******pppppppuStack_470;
  code *pcStack_468;
  undefined1 ******ppppppuStack_3d0;
  code *pcStack_3c8;
  undefined1 *****pppppuStack_310;
  code *pcStack_308;
  undefined1 ****ppppuStack_270;
  code *pcStack_268;
  undefined1 ***pppuStack_1e0;
  code *pcStack_1d8;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  
  func_0x000107c35410();
  func_0x00010b286cf4();
  func_0x000107c35450();
  func_0x000107c354ac();
  func_0x000107c35434();
  func_0x000107c35494();
  func_0x000107c354bc();
  do {
    func_0x000107c354a0();
    func_0x000107c354a8();
  } while (!(bool)in_ZR);
  func_0x000107c35428();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286dc8();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcStack_a8 = FUN_10b2858ec;
    puStack_b0 = &stack0xfffffffffffffff0;
    func_0x000107c35410();
    func_0x000107c35448();
    func_0x000107c354ac();
    func_0x000107c35434();
    func_0x000107c35494();
    func_0x000107c354b4();
    do {
      func_0x000107c354a0();
      func_0x000107c354a8();
    } while (!(bool)in_ZR);
    func_0x000107c35428();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286dbc();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcStack_138 = FUN_10b285964;
    ppuStack_140 = &puStack_b0;
    func_0x000107c35410();
    func_0x00010b286cf4();
    func_0x000107c35450();
    func_0x000107c354ac();
    func_0x000107c35434();
    func_0x000107c35494();
    func_0x000107c354bc();
    do {
      func_0x000107c354a0();
      func_0x000107c354a8();
    } while (!(bool)in_ZR);
    func_0x000107c35428();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b286d60();
      func_0x00010b286dc8();
      do {
        func_0x00010b286da8();
        func_0x00010b286db0();
      } while (!(bool)in_ZR);
      func_0x00010b286da0();
      pcStack_1d8 = FUN_10b2859e0;
      pppuStack_1e0 = &ppuStack_140;
      func_0x000107c35410();
      func_0x000107c35448();
      func_0x000107c354ac();
      func_0x000107c35434();
      func_0x000107c35494();
      func_0x000107c354b4();
      do {
        func_0x000107c354a0();
        func_0x000107c354a8();
      } while (!(bool)in_ZR);
      func_0x000107c35428();
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010b286d60();
      func_0x00010b286dbc();
      do {
        func_0x00010b286da8();
        func_0x00010b286db0();
      } while (!(bool)in_ZR);
      func_0x00010b286da0();
      pcStack_268 = FUN_10b285a58;
      ppppuStack_270 = &pppuStack_1e0;
      func_0x000107c35410();
      func_0x00010b286cf4();
      func_0x000107c35450();
      func_0x000107c354ac();
      func_0x000107c35434();
      func_0x000107c35494();
      func_0x000107c354bc();
      do {
        func_0x000107c354a0();
        func_0x000107c354a8();
      } while (!(bool)in_ZR);
      func_0x000107c35428();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010b286d60();
        func_0x00010b286dc8();
        do {
          func_0x00010b286da8();
          func_0x00010b286db0();
        } while (!(bool)in_ZR);
        func_0x00010b286da0();
        pcStack_308 = FUN_10b285ad4;
        pppppuStack_310 = &ppppuStack_270;
        func_0x000107c35438();
        func_0x000107c35414();
        func_0x000107c35444();
        func_0x000107c35454();
        func_0x000107c35460();
        func_0x000107c35490();
        func_0x000107c35494();
        func_0x000107c354c4();
        do {
          func_0x000107c354a0();
          func_0x000107c354a8();
        } while (!(bool)in_ZR);
        func_0x000107c35428();
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x00010b286d60();
        func_0x00010b286dd4();
        do {
          func_0x00010b286da8();
          func_0x00010b286db0();
        } while (!(bool)in_ZR);
        func_0x00010b286da0();
        pcStack_3c8 = FUN_10b285b58;
        puVar3 = param_5;
        ppppppuStack_3d0 = &pppppuStack_310;
        func_0x000107c35438();
        func_0x000107c35414();
        func_0x000107c35450();
        func_0x000107c35460();
        func_0x000107c35490();
        func_0x000107c35494();
        func_0x000107c354bc();
        do {
          func_0x000107c354a0();
          func_0x000107c354a8();
        } while (!(bool)in_ZR);
        func_0x000107c35428();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010b286d60();
          func_0x00010b286dc8();
          do {
            func_0x00010b286da8();
            func_0x00010b286db0();
          } while (!(bool)in_ZR);
          func_0x00010b286da0();
          pcStack_468 = FUN_10b285bd8;
          pppppppuStack_470 = &ppppppuStack_3d0;
          func_0x000107c35410();
          func_0x00010b286cc0();
          uStack_4a8 = param_6[1];
          uStack_4b0 = *param_6;
          uStack_4a0 = param_6[2];
          param_6[1] = 0;
          param_6[2] = 0;
          *param_6 = 0;
          func_0x000107c35488();
          func_0x000107c354ac();
          func_0x000107c35434();
          func_0x000107c35494();
          func_0x000107c354d4();
          do {
            func_0x000107c354a0();
            func_0x000107c354a8();
          } while (!(bool)in_ZR);
          func_0x000107c35428();
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          func_0x00010b286d60();
          func_0x00010b286df0();
          do {
            func_0x00010b286da8();
            func_0x00010b286db0();
          } while (!(bool)in_ZR);
          func_0x00010b286da0();
          pcStack_538 = FUN_10b285c78;
          pppppppuStack_540 = &pppppppuStack_470;
          func_0x000107c35410();
          func_0x00010b286cc0();
          func_0x000107c35454();
          func_0x000107c354ac();
          func_0x000107c35434();
          func_0x000107c35494();
          func_0x000107c354c4();
          do {
            func_0x000107c354a0();
            func_0x000107c354a8();
          } while (!(bool)in_ZR);
          func_0x000107c35428();
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          func_0x00010b286d60();
          func_0x00010b286dd4();
          do {
            func_0x00010b286da8();
            func_0x00010b286db0();
          } while (!(bool)in_ZR);
          func_0x00010b286da0();
          pcStack_5f8 = FUN_10b285cf4;
          pppppppuStack_600 = &pppppppuStack_540;
          func_0x000107c35410();
          func_0x00010b286cf4();
          func_0x000107c35450();
          func_0x000107c354ac();
          func_0x000107c35434();
          func_0x000107c35494();
          func_0x000107c354bc();
          do {
            func_0x000107c354a0();
            func_0x000107c354a8();
          } while (!(bool)in_ZR);
          func_0x000107c35428();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286dc8();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            pcStack_698 = FUN_10b285d70;
            pppppppuStack_6a0 = &pppppppuStack_600;
            func_0x000107c35410();
            func_0x000107c35448();
            func_0x000107c354ac();
            puVar2 = (undefined8 *)&UNK_110cce4d8;
            func_0x000107c35434();
            func_0x000107c35494();
            func_0x000107c354b4();
            do {
              func_0x000107c354a0();
              func_0x000107c354a8();
            } while (!(bool)in_ZR);
            func_0x000107c35428();
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286dbc();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            pcVar10 = FUN_10b285de8;
            func_0x000107c354e0();
            puVar4 = param_3;
            puVar6 = param_4;
            puVar8 = puVar3;
            pppppppuStack_680 = &pppppppuStack_6a0;
            pcStack_678 = pcVar10;
            func_0x000107c3541c();
            (*extraout_x8)();
            puVar1 = auStack_720;
            if (param_1 == 0) {
              func_0x000107c35430(unaff_x21);
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dc8();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              pcStack_728 = FUN_10b285e84;
              puStack_750 = param_3;
              puStack_748 = param_4;
              puStack_740 = param_5;
              puStack_738 = puVar3;
              pppppppuStack_730 = &pppppppuStack_680;
              func_0x000107c3542c();
              (*extraout_x8_00)();
              if (param_1 != 0) {
                func_0x00010b286d10();
                func_0x000107c35448();
                func_0x000107c354ac();
                func_0x000107c35434();
                func_0x000107c35494();
                func_0x000107c354b4();
                do {
                  func_0x000107c354a0();
                  func_0x000107c354a8();
                } while (!(bool)in_ZR);
              }
              func_0x000107c35428();
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dbc();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              pcStack_7b8 = FUN_10b285f0c;
              puStack_7e0 = param_3;
              puStack_7d8 = param_4;
              puStack_7d0 = param_5;
              puStack_7c8 = puVar3;
              pppppppuStack_7c0 = &pppppppuStack_730;
              func_0x000107c35410();
              func_0x00010b286cc0();
              func_0x000107c35454();
              func_0x000107c354ac();
              func_0x000107c35434();
              func_0x000107c35494();
              func_0x000107c354c4();
              do {
                func_0x000107c354a0();
                func_0x000107c354a8();
              } while (!(bool)in_ZR);
              func_0x000107c35428();
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dd4();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              pcStack_878 = FUN_10b285f88;
              puStack_8a0 = param_3;
              puStack_898 = param_4;
              puStack_890 = param_5;
              pcStack_888 = pcVar10;
              pppppppuStack_880 = &pppppppuStack_7c0;
              func_0x000107c35410();
              func_0x00010b286cf4();
              func_0x000107c35450();
              func_0x000107c354ac();
              func_0x000107c35434();
              func_0x000107c35494();
              func_0x000107c354bc();
              do {
                func_0x000107c354a0();
                func_0x000107c354a8();
              } while (!(bool)in_ZR);
              func_0x000107c35428();
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dc8();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              pcVar10 = FUN_10b286004;
              func_0x000107c354e4();
              pppppppuStack_850 = &pppppppuStack_880;
              pcStack_848 = pcVar10;
              func_0x000107c3541c();
              (*extraout_x8_01)();
              if (param_1 != 0) {
                func_0x000107c35420();
                func_0x000107c35454();
                func_0x00010b286d80();
                func_0x000107c35484();
                func_0x000107c35494();
                func_0x000107c354c4();
                do {
                  func_0x000107c354a0();
                  func_0x000107c354a8();
                } while (!(bool)in_ZR);
              }
              func_0x000107c35430(pcStack_888);
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x00010b286d60();
                func_0x00010b286dd4();
                do {
                  func_0x00010b286da8();
                  func_0x00010b286db0();
                } while (!(bool)in_ZR);
                func_0x00010b286da0();
                pcVar10 = FUN_10b2860a4;
                func_0x000107c354e4();
                pppppppuStack_850 = &pppppppuStack_850;
                pcStack_848 = pcVar10;
                func_0x000107c3541c();
                puVar2 = (undefined8 *)&UNK_110cce7f8;
                (*extraout_x8_02)();
                if (param_1 != 0) {
                  func_0x000107c35420();
                  func_0x000107c35454();
                  func_0x00010b286d48();
                  puVar2 = (undefined8 *)&UNK_110cce7f8;
                  func_0x00010b286d94();
                  func_0x000107c35494();
                  func_0x000107c354c4();
                  do {
                    func_0x000107c354a0();
                    func_0x000107c354a8();
                  } while (!(bool)in_ZR);
                }
                func_0x000107c35430(pcStack_888);
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  func_0x00010b286dd4();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  pcVar10 = FUN_10b286144;
                  func_0x000107c354e0();
                  puVar5 = puVar4;
                  puVar7 = puVar6;
                  pppppppuStack_870 = &pppppppuStack_850;
                  pcStack_868 = pcVar10;
                  func_0x000107c3541c();
                  puVar3 = (undefined8 *)&UNK_110cce848;
                  (*extraout_x8_03)();
                  puVar1 = auStack_910;
                  param_4 = puVar6;
                  param_3 = puVar4;
                  if (param_1 == 0) {
                    func_0x000107c35430(uStack_8a8);
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286dc8();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    pcVar10 = FUN_10b2861e0;
                    func_0x000107c354e0();
                    puVar4 = puVar5;
                    puVar6 = puVar7;
                    puVar9 = puVar8;
                    pppppppuStack_870 = &pppppppuStack_870;
                    pcStack_868 = pcVar10;
                    func_0x000107c3541c();
                    (*extraout_x8_04)();
                    puVar1 = auStack_910;
                    param_4 = puVar7;
                    param_3 = puVar5;
                    puVar2 = puVar3;
                    if (param_1 == 0) {
                      func_0x000107c35430(uStack_8a8);
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dc8();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      pcStack_918 = FUN_10b28627c;
                      puStack_940 = puVar5;
                      puStack_938 = puVar7;
                      puStack_930 = param_5;
                      puStack_928 = puVar8;
                      puStack_920 = (undefined1 *)&pppppppuStack_870;
                      func_0x000107c3542c();
                      (*extraout_x8_05)();
                      if (param_1 != 0) {
                        func_0x00010b286d10();
                        func_0x000107c35448();
                        func_0x000107c354ac();
                        func_0x000107c35434();
                        func_0x000107c35494();
                        func_0x000107c354b4();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                      }
                      func_0x000107c35428();
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dbc();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      pcStack_9a8 = FUN_10b286304;
                      param_4 = puVar6;
                      puStack_9d0 = puVar5;
                      puStack_9c8 = puVar7;
                      puStack_9c0 = param_5;
                      puStack_9b8 = puVar8;
                      ppuStack_9b0 = &puStack_920;
                      func_0x000107c35410();
                      func_0x000107c35448();
                      func_0x000107c354ac();
                      func_0x000107c35434();
                      func_0x000107c35494();
                      func_0x000107c354b4();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                      func_0x000107c35428();
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dbc();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      puVar1 = auStack_af0;
                      pcStack_a38 = FUN_10b28637c;
                      puStack_a60 = puVar5;
                      puStack_a58 = puVar7;
                      ppppuStack_a50 = (undefined1 ****)param_5;
                      pcStack_a48 = (code *)puVar6;
                      pppuStack_a40 = &ppuStack_9b0;
                      func_0x000107c35438();
                      func_0x000107c35414();
                      func_0x000107c35444();
                      func_0x000107c35454();
                      func_0x000107c35460();
                      puVar2 = (undefined8 *)&UNK_110ccea28;
                      func_0x000107c35490();
                      func_0x000107c35494();
                      func_0x000107c354c4();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                      func_0x000107c35428();
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dd4();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      pcVar10 = FUN_10b286400;
                      func_0x000107c354e0();
                      puVar6 = puVar4;
                      puVar8 = param_4;
                      ppppuStack_a50 = &pppuStack_a40;
                      pcStack_a48 = pcVar10;
                      func_0x000107c3541c();
                      puVar3 = (undefined8 *)&UNK_110ccea78;
                      (*extraout_x8_06)();
                      param_3 = puVar4;
                      if (param_1 == 0) {
                        func_0x000107c35430(uStack_a88);
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286dc8();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        param_3 = puVar6;
                        puVar2 = puVar8;
                        puVar4 = puVar9;
                        pcVar11 = pcVar10;
                        func_0x000107c35440();
                        uStack_b58 = extraout_x8_07;
                        func_0x000107c35474();
                        (*extraout_x8_08)();
                        if (param_1 != 0) {
                          uStack_be8 = puVar3[1];
                          uStack_bf0 = *puVar3;
                          uStack_be0 = puVar3[2];
                          puVar3[1] = 0;
                          puVar3[2] = 0;
                          *puVar3 = 0;
                          uStack_bd0 = puVar6[1];
                          uStack_bd8 = *puVar6;
                          uStack_bc8 = puVar6[2];
                          puVar6[1] = 0;
                          puVar6[2] = 0;
                          *puVar6 = 0;
                          uStack_bb8 = puVar8[1];
                          uStack_bc0 = *puVar8;
                          uStack_bb0 = puVar8[2];
                          puVar8[1] = 0;
                          puVar8[2] = 0;
                          *puVar8 = 0;
                          uStack_ba0 = puVar9[1];
                          uStack_ba8 = *puVar9;
                          uStack_b98 = puVar9[2];
                          *puVar9 = 0;
                          puVar9[1] = 0;
                          puVar9[2] = 0;
                          uStack_b88 = *(undefined8 *)(pcVar10 + 8);
                          uStack_b90 = *(undefined8 *)pcVar10;
                          uStack_b80 = *(undefined8 *)(pcVar10 + 0x10);
                          func_0x00010b286d6c();
                          func_0x00010b286dfc();
                          func_0x00010b286de0();
                          func_0x00010b286d80();
                          func_0x000107c35484();
                          func_0x000107c35494();
                          do {
                            func_0x000107c354a0();
                            func_0x000107c354a8();
                          } while (!(bool)in_ZR);
                        }
                        func_0x000107c35430(uStack_b58);
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        func_0x000107c354dc();
                        func_0x000107c35440();
                        uStack_b78 = extraout_x8_09;
                        func_0x000107c35474();
                        (*extraout_x8_10)();
                        if (param_1 != 0) {
                          func_0x000107c3543c();
                          func_0x000107c35488();
                          func_0x00010b286d80();
                          func_0x000107c35484();
                          func_0x000107c35494();
                          func_0x000107c354d4();
                          do {
                            func_0x000107c354a0();
                            func_0x000107c354a8();
                          } while (!(bool)in_ZR);
                        }
                        func_0x000107c35430(uStack_b78);
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286df0();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        func_0x000107c354e4();
                        puVar3 = puVar2;
                        puVar6 = puVar4;
                        pcVar10 = pcVar11;
                        func_0x000107c3541c();
                        (*extraout_x8_11)();
                        if (param_1 != 0) {
                          func_0x000107c35420();
                          func_0x000107c35454();
                          func_0x00010b286d80();
                          func_0x000107c35484();
                          func_0x000107c35494();
                          func_0x000107c354c4();
                          do {
                            func_0x000107c354a0();
                            func_0x000107c354a8();
                          } while (!(bool)in_ZR);
                        }
                        func_0x000107c35430(uStack_b88);
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286dd4();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        uStack_c30 = 0x78;
                        pcStack_c18 = FUN_10b286724;
                        pcVar12 = pcVar10;
                        puStack_c40 = puVar2;
                        puStack_c38 = puVar4;
                        pcStack_c28 = pcVar11;
                        puStack_c20 = &stack0xfffffffffffff4b0;
                        func_0x000107c35410();
                        func_0x00010b286cc0();
                        func_0x000107c35454();
                        func_0x000107c354ac();
                        func_0x000107c35434();
                        func_0x000107c35494();
                        func_0x000107c354c4();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                        func_0x000107c35428();
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286dd4();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        uStack_cf0 = 0x78;
                        pcStack_cd8 = FUN_10b2867a0;
                        puVar8 = puVar6;
                        puStack_d00 = puVar2;
                        puStack_cf8 = puVar4;
                        pcStack_ce8 = pcVar10;
                        ppuStack_ce0 = &puStack_c20;
                        func_0x000107c35410();
                        func_0x00010b286cf4();
                        func_0x000107c35450();
                        func_0x000107c354ac();
                        func_0x000107c35434();
                        func_0x000107c35494();
                        func_0x000107c354bc();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                        func_0x000107c35428();
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286dc8();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        uStack_d90 = 0x78;
                        pcStack_d78 = FUN_10b28681c;
                        puStack_da0 = puVar2;
                        puStack_d98 = puVar4;
                        puStack_d88 = puVar6;
                        pppuStack_d80 = &ppuStack_ce0;
                        func_0x000107c35410();
                        func_0x000107c35448();
                        func_0x000107c354ac();
                        func_0x000107c35434();
                        func_0x000107c35494();
                        func_0x000107c354b4();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                        func_0x000107c35428();
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286dbc();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        pcVar10 = FUN_10b286894;
                        func_0x000107c354dc();
                        ppppuStack_d20 = &pppuStack_d80;
                        pcStack_d18 = pcVar10;
                        func_0x000107c35440();
                        uStack_d68 = extraout_x8_12;
                        func_0x000107c35474();
                        (*extraout_x8_13)();
                        if (param_1 != 0) {
                          func_0x000107c3543c();
                          func_0x000107c35488();
                          func_0x00010b286d80();
                          func_0x000107c35484();
                          func_0x000107c35494();
                          func_0x000107c354d4();
                          do {
                            func_0x000107c354a0();
                            func_0x000107c354a8();
                          } while (!(bool)in_ZR);
                        }
                        func_0x000107c35430(uStack_d68);
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286df0();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        pcVar10 = FUN_10b286940;
                        func_0x000107c354e4();
                        param_4 = puVar3;
                        puVar2 = puVar8;
                        pppppuStack_d40 = &ppppuStack_d20;
                        pcStack_d38 = pcVar10;
                        func_0x000107c3541c();
                        (*extraout_x8_14)();
                        if (param_1 != 0) {
                          func_0x000107c35420();
                          func_0x000107c35454();
                          func_0x00010b286d80();
                          func_0x000107c35484();
                          func_0x000107c35494();
                          func_0x000107c354c4();
                          do {
                            func_0x000107c354a0();
                            func_0x000107c354a8();
                          } while (!(bool)in_ZR);
                        }
                        func_0x000107c35430(pcStack_d78);
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286dd4();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        uStack_e20 = 0x78;
                        pcStack_e08 = FUN_10b2869e0;
                        puVar4 = puVar2;
                        puStack_e30 = puVar3;
                        puStack_e28 = puVar8;
                        pcStack_e18 = pcVar12;
                        ppppppuStack_e10 = &pppppuStack_d40;
                        func_0x000107c35410();
                        func_0x00010b286cf4();
                        func_0x000107c35450();
                        func_0x000107c354ac();
                        func_0x000107c35434();
                        func_0x000107c35494();
                        func_0x000107c354bc();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                        func_0x000107c35428();
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286dc8();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        puVar1 = auStack_f30;
                        uStack_ec0 = 0x78;
                        pcStack_ea8 = FUN_10b286a5c;
                        puStack_ed0 = puVar3;
                        puStack_ec8 = puVar8;
                        puStack_eb8 = puVar2;
                        pppppppuStack_eb0 = &ppppppuStack_e10;
                        func_0x000107c35410();
                        func_0x000107c35448();
                        func_0x000107c354ac();
                        puVar2 = (undefined8 *)&UNK_110cceed8;
                        func_0x000107c35434();
                        func_0x000107c35494();
                        func_0x000107c354b4();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                        func_0x000107c35428();
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286dbc();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        pcVar10 = FUN_10b286ad4;
                        func_0x000107c354e0();
                        pppppppuStack_e90 = &pppppppuStack_eb0;
                        pcStack_e88 = pcVar10;
                        func_0x000107c3541c();
                        (*extraout_x8_15)();
                        if (param_1 == 0) {
                          func_0x000107c35430(puStack_ec8);
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          func_0x00010b286dc8();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          uStack_f50 = 0x78;
                          pcStack_f38 = FUN_10b286b70;
                          puStack_f60 = param_3;
                          puStack_f58 = param_4;
                          puStack_f48 = puVar4;
                          pppppppuStack_f40 = &pppppppuStack_e90;
                          func_0x000107c3542c();
                          (*extraout_x8_16)();
                          if (param_1 != 0) {
                            func_0x00010b286d10();
                            func_0x000107c35448();
                            func_0x000107c354ac();
                            func_0x000107c35434();
                            func_0x000107c35494();
                            func_0x000107c354b4();
                            do {
                              func_0x000107c354a0();
                              func_0x000107c354a8();
                            } while (!(bool)in_ZR);
                          }
                          func_0x000107c35428();
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          func_0x00010b286dbc();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          uStack_fe0 = 0x78;
                          pcStack_fc8 = FUN_10b286bf8;
                          puStack_ff0 = param_3;
                          puStack_fe8 = param_4;
                          puStack_fd8 = puVar4;
                          pppppppuStack_fd0 = &pppppppuStack_f40;
                          func_0x000107c35410();
                          func_0x000107c35448();
                          func_0x000107c354ac();
                          func_0x000107c35434();
                          func_0x000107c35494();
                          func_0x000107c354b4();
                          do {
                            func_0x000107c354a0();
                            func_0x000107c354a8();
                          } while (!(bool)in_ZR);
                          func_0x000107c35428();
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x00010b286d60();
                          func_0x00010b286dbc();
                          do {
                            func_0x00010b286da8();
                            func_0x00010b286db0();
                          } while (!(bool)in_ZR);
                          func_0x00010b286da0();
                          puVar1 = auStack_1050;
                        }
                      }
                    }
                  }
                  goto FUN_10b286c70;
                }
              }
              return;
            }
FUN_10b286c70:
            uVar13 = *puVar2;
            *(undefined8 *)(puVar1 + 0x28) = puVar2[1];
            *(undefined8 *)(puVar1 + 0x20) = uVar13;
            *(undefined8 *)(puVar1 + 0x30) = puVar2[2];
            puVar2[1] = 0;
            puVar2[2] = 0;
            *puVar2 = 0;
            uVar13 = *param_3;
            *(undefined8 *)(puVar1 + 0x40) = param_3[1];
            *(undefined8 *)(puVar1 + 0x38) = uVar13;
            *(undefined8 *)(puVar1 + 0x48) = param_3[2];
            *param_3 = 0;
            param_3[1] = 0;
            param_3[2] = 0;
            *(undefined8 *)(puVar1 + 0x60) = param_4[2];
            uVar13 = *param_4;
            *(undefined8 *)(puVar1 + 0x58) = param_4[1];
            *(undefined8 *)(puVar1 + 0x50) = uVar13;
            param_4[1] = 0;
            param_4[2] = 0;
            *param_4 = 0;
            return;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10b2858ec; end: 10b285963;  */

/* WARNING: Possible PIC construction at 0x00010b285e20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b28617c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286b0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b28643c) */
/* WARNING: Removing unreachable block (ram,0x00010b286458) */
/* WARNING: Removing unreachable block (ram,0x00010b28621c) */
/* WARNING: Removing unreachable block (ram,0x00010b286238) */
/* WARNING: Removing unreachable block (ram,0x00010b286180) */
/* WARNING: Removing unreachable block (ram,0x00010b28619c) */
/* WARNING: Removing unreachable block (ram,0x00010b285e24) */
/* WARNING: Removing unreachable block (ram,0x00010b285e40) */
/* WARNING: Removing unreachable block (ram,0x00010b286b10) */
/* WARNING: Removing unreachable block (ram,0x00010b286b2c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10b2858ec(int param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  undefined8 extraout_x8_07;
  code *extraout_x8_08;
  undefined8 extraout_x8_09;
  code *extraout_x8_10;
  code *extraout_x8_11;
  undefined8 extraout_x8_12;
  code *extraout_x8_13;
  code *extraout_x8_14;
  code *extraout_x8_15;
  code *extraout_x8_16;
  undefined8 unaff_x21;
  undefined8 uVar13;
  undefined1 auStack_fb0 [96];
  undefined8 *puStack_f50;
  undefined8 *puStack_f48;
  undefined8 uStack_f40;
  undefined8 *puStack_f38;
  undefined8 *******pppppppuStack_f30;
  code *pcStack_f28;
  undefined8 *puStack_ec0;
  undefined8 *puStack_eb8;
  undefined8 uStack_eb0;
  undefined8 *puStack_ea8;
  undefined8 *******pppppppuStack_ea0;
  code *pcStack_e98;
  undefined1 auStack_e90 [96];
  undefined8 *puStack_e30;
  undefined8 *puStack_e28;
  undefined8 uStack_e20;
  undefined8 *puStack_e18;
  undefined1 *******pppppppuStack_e10;
  code *pcStack_e08;
  undefined8 *******pppppppuStack_df0;
  code *pcStack_de8;
  undefined8 *puStack_d90;
  undefined8 *puStack_d88;
  undefined8 uStack_d80;
  code *pcStack_d78;
  undefined1 ******ppppppuStack_d70;
  code *pcStack_d68;
  undefined8 *puStack_d00;
  undefined8 *puStack_cf8;
  undefined8 uStack_cf0;
  undefined8 *puStack_ce8;
  undefined1 ***pppuStack_ce0;
  code *pcStack_cd8;
  undefined8 uStack_cc8;
  undefined1 *****pppppuStack_ca0;
  code *pcStack_c98;
  undefined1 ****ppppuStack_c80;
  code *pcStack_c78;
  undefined8 *puStack_c60;
  undefined8 *puStack_c58;
  undefined8 uStack_c50;
  code *pcStack_c48;
  undefined1 **ppuStack_c40;
  code *pcStack_c38;
  undefined8 *puStack_ba0;
  undefined8 *puStack_b98;
  undefined8 uStack_b90;
  code *pcStack_b88;
  undefined1 *puStack_b80;
  code *pcStack_b78;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ab8;
  undefined1 auStack_a50 [104];
  undefined8 uStack_9e8;
  undefined8 *puStack_9c0;
  undefined8 *puStack_9b8;
  undefined1 ****ppppuStack_9b0;
  code *pcStack_9a8;
  undefined1 ***pppuStack_9a0;
  code *pcStack_998;
  undefined8 *puStack_930;
  undefined8 *puStack_928;
  undefined8 *puStack_920;
  undefined8 *puStack_918;
  undefined1 **ppuStack_910;
  code *pcStack_908;
  undefined8 *puStack_8a0;
  undefined8 *puStack_898;
  undefined8 *puStack_890;
  undefined8 *puStack_888;
  undefined1 *puStack_880;
  code *pcStack_878;
  undefined1 auStack_870 [104];
  undefined8 uStack_808;
  undefined8 *puStack_800;
  undefined8 *puStack_7f8;
  undefined8 *puStack_7f0;
  code *pcStack_7e8;
  undefined8 *******pppppppuStack_7e0;
  code *pcStack_7d8;
  undefined8 *******pppppppuStack_7d0;
  code *pcStack_7c8;
  undefined8 *******pppppppuStack_7b0;
  code *pcStack_7a8;
  undefined8 *puStack_740;
  undefined8 *puStack_738;
  undefined8 *puStack_730;
  undefined8 *puStack_728;
  undefined8 *******pppppppuStack_720;
  code *pcStack_718;
  undefined8 *puStack_6b0;
  undefined8 *puStack_6a8;
  undefined8 *puStack_6a0;
  undefined8 *puStack_698;
  undefined8 *******pppppppuStack_690;
  code *pcStack_688;
  undefined1 auStack_680 [96];
  undefined8 *******pppppppuStack_600;
  code *pcStack_5f8;
  undefined8 *******pppppppuStack_5e0;
  code *pcStack_5d8;
  undefined8 *******pppppppuStack_560;
  code *pcStack_558;
  undefined1 *******pppppppuStack_4a0;
  code *pcStack_498;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined1 ******ppppppuStack_3d0;
  code *pcStack_3c8;
  undefined1 *****pppppuStack_330;
  code *pcStack_328;
  undefined1 ****ppppuStack_270;
  code *pcStack_268;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  undefined1 *puStack_a0;
  code *pcStack_98;
  
  func_0x000107c35410();
  func_0x000107c35448();
  func_0x000107c354ac();
  func_0x000107c35434();
  func_0x000107c35494();
  func_0x000107c354b4();
  do {
    func_0x000107c354a0();
    func_0x000107c354a8();
  } while (!(bool)in_ZR);
  func_0x000107c35428();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b286d60();
  func_0x00010b286dbc();
  do {
    func_0x00010b286da8();
    func_0x00010b286db0();
  } while (!(bool)in_ZR);
  func_0x00010b286da0();
  pcStack_98 = FUN_10b285964;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x000107c35410();
  func_0x00010b286cf4();
  func_0x000107c35450();
  func_0x000107c354ac();
  func_0x000107c35434();
  func_0x000107c35494();
  func_0x000107c354bc();
  do {
    func_0x000107c354a0();
    func_0x000107c354a8();
  } while (!(bool)in_ZR);
  func_0x000107c35428();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286dc8();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcStack_138 = FUN_10b2859e0;
    ppuStack_140 = &puStack_a0;
    func_0x000107c35410();
    func_0x000107c35448();
    func_0x000107c354ac();
    func_0x000107c35434();
    func_0x000107c35494();
    func_0x000107c354b4();
    do {
      func_0x000107c354a0();
      func_0x000107c354a8();
    } while (!(bool)in_ZR);
    func_0x000107c35428();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286dbc();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcStack_1c8 = FUN_10b285a58;
    pppuStack_1d0 = &ppuStack_140;
    func_0x000107c35410();
    func_0x00010b286cf4();
    func_0x000107c35450();
    func_0x000107c354ac();
    func_0x000107c35434();
    func_0x000107c35494();
    func_0x000107c354bc();
    do {
      func_0x000107c354a0();
      func_0x000107c354a8();
    } while (!(bool)in_ZR);
    func_0x000107c35428();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b286d60();
      func_0x00010b286dc8();
      do {
        func_0x00010b286da8();
        func_0x00010b286db0();
      } while (!(bool)in_ZR);
      func_0x00010b286da0();
      pcStack_268 = FUN_10b285ad4;
      ppppuStack_270 = &pppuStack_1d0;
      func_0x000107c35438();
      func_0x000107c35414();
      func_0x000107c35444();
      func_0x000107c35454();
      func_0x000107c35460();
      func_0x000107c35490();
      func_0x000107c35494();
      func_0x000107c354c4();
      do {
        func_0x000107c354a0();
        func_0x000107c354a8();
      } while (!(bool)in_ZR);
      func_0x000107c35428();
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010b286d60();
      func_0x00010b286dd4();
      do {
        func_0x00010b286da8();
        func_0x00010b286db0();
      } while (!(bool)in_ZR);
      func_0x00010b286da0();
      pcStack_328 = FUN_10b285b58;
      puVar3 = param_5;
      pppppuStack_330 = &ppppuStack_270;
      func_0x000107c35438();
      func_0x000107c35414();
      func_0x000107c35450();
      func_0x000107c35460();
      func_0x000107c35490();
      func_0x000107c35494();
      func_0x000107c354bc();
      do {
        func_0x000107c354a0();
        func_0x000107c354a8();
      } while (!(bool)in_ZR);
      func_0x000107c35428();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010b286d60();
        func_0x00010b286dc8();
        do {
          func_0x00010b286da8();
          func_0x00010b286db0();
        } while (!(bool)in_ZR);
        func_0x00010b286da0();
        pcStack_3c8 = FUN_10b285bd8;
        ppppppuStack_3d0 = &pppppuStack_330;
        func_0x000107c35410();
        func_0x00010b286cc0();
        uStack_408 = param_6[1];
        uStack_410 = *param_6;
        uStack_400 = param_6[2];
        param_6[1] = 0;
        param_6[2] = 0;
        *param_6 = 0;
        func_0x000107c35488();
        func_0x000107c354ac();
        func_0x000107c35434();
        func_0x000107c35494();
        func_0x000107c354d4();
        do {
          func_0x000107c354a0();
          func_0x000107c354a8();
        } while (!(bool)in_ZR);
        func_0x000107c35428();
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x00010b286d60();
        func_0x00010b286df0();
        do {
          func_0x00010b286da8();
          func_0x00010b286db0();
        } while (!(bool)in_ZR);
        func_0x00010b286da0();
        pcStack_498 = FUN_10b285c78;
        pppppppuStack_4a0 = &ppppppuStack_3d0;
        func_0x000107c35410();
        func_0x00010b286cc0();
        func_0x000107c35454();
        func_0x000107c354ac();
        func_0x000107c35434();
        func_0x000107c35494();
        func_0x000107c354c4();
        do {
          func_0x000107c354a0();
          func_0x000107c354a8();
        } while (!(bool)in_ZR);
        func_0x000107c35428();
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x00010b286d60();
        func_0x00010b286dd4();
        do {
          func_0x00010b286da8();
          func_0x00010b286db0();
        } while (!(bool)in_ZR);
        func_0x00010b286da0();
        pcStack_558 = FUN_10b285cf4;
        pppppppuStack_560 = &pppppppuStack_4a0;
        func_0x000107c35410();
        func_0x00010b286cf4();
        func_0x000107c35450();
        func_0x000107c354ac();
        func_0x000107c35434();
        func_0x000107c35494();
        func_0x000107c354bc();
        do {
          func_0x000107c354a0();
          func_0x000107c354a8();
        } while (!(bool)in_ZR);
        func_0x000107c35428();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010b286d60();
          func_0x00010b286dc8();
          do {
            func_0x00010b286da8();
            func_0x00010b286db0();
          } while (!(bool)in_ZR);
          func_0x00010b286da0();
          pcStack_5f8 = FUN_10b285d70;
          pppppppuStack_600 = &pppppppuStack_560;
          func_0x000107c35410();
          func_0x000107c35448();
          func_0x000107c354ac();
          puVar2 = (undefined8 *)&UNK_110cce4d8;
          func_0x000107c35434();
          func_0x000107c35494();
          func_0x000107c354b4();
          do {
            func_0x000107c354a0();
            func_0x000107c354a8();
          } while (!(bool)in_ZR);
          func_0x000107c35428();
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          func_0x00010b286d60();
          func_0x00010b286dbc();
          do {
            func_0x00010b286da8();
            func_0x00010b286db0();
          } while (!(bool)in_ZR);
          func_0x00010b286da0();
          pcVar10 = FUN_10b285de8;
          func_0x000107c354e0();
          puVar4 = param_3;
          puVar6 = param_4;
          puVar8 = puVar3;
          pppppppuStack_5e0 = &pppppppuStack_600;
          pcStack_5d8 = pcVar10;
          func_0x000107c3541c();
          (*extraout_x8)();
          puVar1 = auStack_680;
          if (param_1 == 0) {
            func_0x000107c35430(unaff_x21);
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286dc8();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            pcStack_688 = FUN_10b285e84;
            puStack_6b0 = param_3;
            puStack_6a8 = param_4;
            puStack_6a0 = param_5;
            puStack_698 = puVar3;
            pppppppuStack_690 = &pppppppuStack_5e0;
            func_0x000107c3542c();
            (*extraout_x8_00)();
            if (param_1 != 0) {
              func_0x00010b286d10();
              func_0x000107c35448();
              func_0x000107c354ac();
              func_0x000107c35434();
              func_0x000107c35494();
              func_0x000107c354b4();
              do {
                func_0x000107c354a0();
                func_0x000107c354a8();
              } while (!(bool)in_ZR);
            }
            func_0x000107c35428();
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286dbc();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            pcStack_718 = FUN_10b285f0c;
            puStack_740 = param_3;
            puStack_738 = param_4;
            puStack_730 = param_5;
            puStack_728 = puVar3;
            pppppppuStack_720 = &pppppppuStack_690;
            func_0x000107c35410();
            func_0x00010b286cc0();
            func_0x000107c35454();
            func_0x000107c354ac();
            func_0x000107c35434();
            func_0x000107c35494();
            func_0x000107c354c4();
            do {
              func_0x000107c354a0();
              func_0x000107c354a8();
            } while (!(bool)in_ZR);
            func_0x000107c35428();
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286dd4();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            pcStack_7d8 = FUN_10b285f88;
            puStack_800 = param_3;
            puStack_7f8 = param_4;
            puStack_7f0 = param_5;
            pcStack_7e8 = pcVar10;
            pppppppuStack_7e0 = &pppppppuStack_720;
            func_0x000107c35410();
            func_0x00010b286cf4();
            func_0x000107c35450();
            func_0x000107c354ac();
            func_0x000107c35434();
            func_0x000107c35494();
            func_0x000107c354bc();
            do {
              func_0x000107c354a0();
              func_0x000107c354a8();
            } while (!(bool)in_ZR);
            func_0x000107c35428();
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286dc8();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            pcVar10 = FUN_10b286004;
            func_0x000107c354e4();
            pppppppuStack_7b0 = &pppppppuStack_7e0;
            pcStack_7a8 = pcVar10;
            func_0x000107c3541c();
            (*extraout_x8_01)();
            if (param_1 != 0) {
              func_0x000107c35420();
              func_0x000107c35454();
              func_0x00010b286d80();
              func_0x000107c35484();
              func_0x000107c35494();
              func_0x000107c354c4();
              do {
                func_0x000107c354a0();
                func_0x000107c354a8();
              } while (!(bool)in_ZR);
            }
            func_0x000107c35430(pcStack_7e8);
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dd4();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              pcVar10 = FUN_10b2860a4;
              func_0x000107c354e4();
              pppppppuStack_7b0 = &pppppppuStack_7b0;
              pcStack_7a8 = pcVar10;
              func_0x000107c3541c();
              puVar2 = (undefined8 *)&UNK_110cce7f8;
              (*extraout_x8_02)();
              if (param_1 != 0) {
                func_0x000107c35420();
                func_0x000107c35454();
                func_0x00010b286d48();
                puVar2 = (undefined8 *)&UNK_110cce7f8;
                func_0x00010b286d94();
                func_0x000107c35494();
                func_0x000107c354c4();
                do {
                  func_0x000107c354a0();
                  func_0x000107c354a8();
                } while (!(bool)in_ZR);
              }
              func_0x000107c35430(pcStack_7e8);
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x00010b286d60();
                func_0x00010b286dd4();
                do {
                  func_0x00010b286da8();
                  func_0x00010b286db0();
                } while (!(bool)in_ZR);
                func_0x00010b286da0();
                pcVar10 = FUN_10b286144;
                func_0x000107c354e0();
                puVar5 = puVar4;
                puVar7 = puVar6;
                pppppppuStack_7d0 = &pppppppuStack_7b0;
                pcStack_7c8 = pcVar10;
                func_0x000107c3541c();
                puVar3 = (undefined8 *)&UNK_110cce848;
                (*extraout_x8_03)();
                puVar1 = auStack_870;
                param_4 = puVar6;
                param_3 = puVar4;
                if (param_1 == 0) {
                  func_0x000107c35430(uStack_808);
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  func_0x00010b286dc8();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  pcVar10 = FUN_10b2861e0;
                  func_0x000107c354e0();
                  puVar4 = puVar5;
                  puVar6 = puVar7;
                  puVar9 = puVar8;
                  pppppppuStack_7d0 = &pppppppuStack_7d0;
                  pcStack_7c8 = pcVar10;
                  func_0x000107c3541c();
                  (*extraout_x8_04)();
                  puVar1 = auStack_870;
                  param_4 = puVar7;
                  param_3 = puVar5;
                  puVar2 = puVar3;
                  if (param_1 == 0) {
                    func_0x000107c35430(uStack_808);
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286dc8();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    pcStack_878 = FUN_10b28627c;
                    puStack_8a0 = puVar5;
                    puStack_898 = puVar7;
                    puStack_890 = param_5;
                    puStack_888 = puVar8;
                    puStack_880 = (undefined1 *)&pppppppuStack_7d0;
                    func_0x000107c3542c();
                    (*extraout_x8_05)();
                    if (param_1 != 0) {
                      func_0x00010b286d10();
                      func_0x000107c35448();
                      func_0x000107c354ac();
                      func_0x000107c35434();
                      func_0x000107c35494();
                      func_0x000107c354b4();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                    }
                    func_0x000107c35428();
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286dbc();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    pcStack_908 = FUN_10b286304;
                    param_4 = puVar6;
                    puStack_930 = puVar5;
                    puStack_928 = puVar7;
                    puStack_920 = param_5;
                    puStack_918 = puVar8;
                    ppuStack_910 = &puStack_880;
                    func_0x000107c35410();
                    func_0x000107c35448();
                    func_0x000107c354ac();
                    func_0x000107c35434();
                    func_0x000107c35494();
                    func_0x000107c354b4();
                    do {
                      func_0x000107c354a0();
                      func_0x000107c354a8();
                    } while (!(bool)in_ZR);
                    func_0x000107c35428();
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286dbc();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    puVar1 = auStack_a50;
                    pcStack_998 = FUN_10b28637c;
                    puStack_9c0 = puVar5;
                    puStack_9b8 = puVar7;
                    ppppuStack_9b0 = (undefined1 ****)param_5;
                    pcStack_9a8 = (code *)puVar6;
                    pppuStack_9a0 = &ppuStack_910;
                    func_0x000107c35438();
                    func_0x000107c35414();
                    func_0x000107c35444();
                    func_0x000107c35454();
                    func_0x000107c35460();
                    puVar2 = (undefined8 *)&UNK_110ccea28;
                    func_0x000107c35490();
                    func_0x000107c35494();
                    func_0x000107c354c4();
                    do {
                      func_0x000107c354a0();
                      func_0x000107c354a8();
                    } while (!(bool)in_ZR);
                    func_0x000107c35428();
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286dd4();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    pcVar10 = FUN_10b286400;
                    func_0x000107c354e0();
                    puVar6 = puVar4;
                    puVar8 = param_4;
                    ppppuStack_9b0 = &pppuStack_9a0;
                    pcStack_9a8 = pcVar10;
                    func_0x000107c3541c();
                    puVar3 = (undefined8 *)&UNK_110ccea78;
                    (*extraout_x8_06)();
                    param_3 = puVar4;
                    if (param_1 == 0) {
                      func_0x000107c35430(uStack_9e8);
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dc8();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      param_3 = puVar6;
                      puVar2 = puVar8;
                      puVar4 = puVar9;
                      pcVar11 = pcVar10;
                      func_0x000107c35440();
                      uStack_ab8 = extraout_x8_07;
                      func_0x000107c35474();
                      (*extraout_x8_08)();
                      if (param_1 != 0) {
                        uStack_b48 = puVar3[1];
                        uStack_b50 = *puVar3;
                        uStack_b40 = puVar3[2];
                        puVar3[1] = 0;
                        puVar3[2] = 0;
                        *puVar3 = 0;
                        uStack_b30 = puVar6[1];
                        uStack_b38 = *puVar6;
                        uStack_b28 = puVar6[2];
                        puVar6[1] = 0;
                        puVar6[2] = 0;
                        *puVar6 = 0;
                        uStack_b18 = puVar8[1];
                        uStack_b20 = *puVar8;
                        uStack_b10 = puVar8[2];
                        puVar8[1] = 0;
                        puVar8[2] = 0;
                        *puVar8 = 0;
                        uStack_b00 = puVar9[1];
                        uStack_b08 = *puVar9;
                        uStack_af8 = puVar9[2];
                        *puVar9 = 0;
                        puVar9[1] = 0;
                        puVar9[2] = 0;
                        uStack_ae8 = *(undefined8 *)(pcVar10 + 8);
                        uStack_af0 = *(undefined8 *)pcVar10;
                        uStack_ae0 = *(undefined8 *)(pcVar10 + 0x10);
                        func_0x00010b286d6c();
                        func_0x00010b286dfc();
                        func_0x00010b286de0();
                        func_0x00010b286d80();
                        func_0x000107c35484();
                        func_0x000107c35494();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                      }
                      func_0x000107c35430(uStack_ab8);
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      func_0x000107c354dc();
                      func_0x000107c35440();
                      uStack_ad8 = extraout_x8_09;
                      func_0x000107c35474();
                      (*extraout_x8_10)();
                      if (param_1 != 0) {
                        func_0x000107c3543c();
                        func_0x000107c35488();
                        func_0x00010b286d80();
                        func_0x000107c35484();
                        func_0x000107c35494();
                        func_0x000107c354d4();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                      }
                      func_0x000107c35430(uStack_ad8);
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286df0();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      func_0x000107c354e4();
                      puVar3 = puVar2;
                      puVar6 = puVar4;
                      pcVar10 = pcVar11;
                      func_0x000107c3541c();
                      (*extraout_x8_11)();
                      if (param_1 != 0) {
                        func_0x000107c35420();
                        func_0x000107c35454();
                        func_0x00010b286d80();
                        func_0x000107c35484();
                        func_0x000107c35494();
                        func_0x000107c354c4();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                      }
                      func_0x000107c35430(uStack_ae8);
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dd4();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      uStack_b90 = 0x78;
                      pcStack_b78 = FUN_10b286724;
                      pcVar12 = pcVar10;
                      puStack_ba0 = puVar2;
                      puStack_b98 = puVar4;
                      pcStack_b88 = pcVar11;
                      puStack_b80 = &stack0xfffffffffffff550;
                      func_0x000107c35410();
                      func_0x00010b286cc0();
                      func_0x000107c35454();
                      func_0x000107c354ac();
                      func_0x000107c35434();
                      func_0x000107c35494();
                      func_0x000107c354c4();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                      func_0x000107c35428();
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dd4();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      uStack_c50 = 0x78;
                      pcStack_c38 = FUN_10b2867a0;
                      puVar8 = puVar6;
                      puStack_c60 = puVar2;
                      puStack_c58 = puVar4;
                      pcStack_c48 = pcVar10;
                      ppuStack_c40 = &puStack_b80;
                      func_0x000107c35410();
                      func_0x00010b286cf4();
                      func_0x000107c35450();
                      func_0x000107c354ac();
                      func_0x000107c35434();
                      func_0x000107c35494();
                      func_0x000107c354bc();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                      func_0x000107c35428();
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dc8();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      uStack_cf0 = 0x78;
                      pcStack_cd8 = FUN_10b28681c;
                      puStack_d00 = puVar2;
                      puStack_cf8 = puVar4;
                      puStack_ce8 = puVar6;
                      pppuStack_ce0 = &ppuStack_c40;
                      func_0x000107c35410();
                      func_0x000107c35448();
                      func_0x000107c354ac();
                      func_0x000107c35434();
                      func_0x000107c35494();
                      func_0x000107c354b4();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                      func_0x000107c35428();
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dbc();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      pcVar10 = FUN_10b286894;
                      func_0x000107c354dc();
                      ppppuStack_c80 = &pppuStack_ce0;
                      pcStack_c78 = pcVar10;
                      func_0x000107c35440();
                      uStack_cc8 = extraout_x8_12;
                      func_0x000107c35474();
                      (*extraout_x8_13)();
                      if (param_1 != 0) {
                        func_0x000107c3543c();
                        func_0x000107c35488();
                        func_0x00010b286d80();
                        func_0x000107c35484();
                        func_0x000107c35494();
                        func_0x000107c354d4();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                      }
                      func_0x000107c35430(uStack_cc8);
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286df0();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      pcVar10 = FUN_10b286940;
                      func_0x000107c354e4();
                      param_4 = puVar3;
                      puVar2 = puVar8;
                      pppppuStack_ca0 = &ppppuStack_c80;
                      pcStack_c98 = pcVar10;
                      func_0x000107c3541c();
                      (*extraout_x8_14)();
                      if (param_1 != 0) {
                        func_0x000107c35420();
                        func_0x000107c35454();
                        func_0x00010b286d80();
                        func_0x000107c35484();
                        func_0x000107c35494();
                        func_0x000107c354c4();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                      }
                      func_0x000107c35430(pcStack_cd8);
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dd4();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      uStack_d80 = 0x78;
                      pcStack_d68 = FUN_10b2869e0;
                      puVar4 = puVar2;
                      puStack_d90 = puVar3;
                      puStack_d88 = puVar8;
                      pcStack_d78 = pcVar12;
                      ppppppuStack_d70 = &pppppuStack_ca0;
                      func_0x000107c35410();
                      func_0x00010b286cf4();
                      func_0x000107c35450();
                      func_0x000107c354ac();
                      func_0x000107c35434();
                      func_0x000107c35494();
                      func_0x000107c354bc();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                      func_0x000107c35428();
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dc8();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      puVar1 = auStack_e90;
                      uStack_e20 = 0x78;
                      pcStack_e08 = FUN_10b286a5c;
                      puStack_e30 = puVar3;
                      puStack_e28 = puVar8;
                      puStack_e18 = puVar2;
                      pppppppuStack_e10 = &ppppppuStack_d70;
                      func_0x000107c35410();
                      func_0x000107c35448();
                      func_0x000107c354ac();
                      puVar2 = (undefined8 *)&UNK_110cceed8;
                      func_0x000107c35434();
                      func_0x000107c35494();
                      func_0x000107c354b4();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                      func_0x000107c35428();
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dbc();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      pcVar10 = FUN_10b286ad4;
                      func_0x000107c354e0();
                      pppppppuStack_df0 = &pppppppuStack_e10;
                      pcStack_de8 = pcVar10;
                      func_0x000107c3541c();
                      (*extraout_x8_15)();
                      if (param_1 == 0) {
                        func_0x000107c35430(puStack_e28);
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286dc8();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        uStack_eb0 = 0x78;
                        pcStack_e98 = FUN_10b286b70;
                        puStack_ec0 = param_3;
                        puStack_eb8 = param_4;
                        puStack_ea8 = puVar4;
                        pppppppuStack_ea0 = &pppppppuStack_df0;
                        func_0x000107c3542c();
                        (*extraout_x8_16)();
                        if (param_1 != 0) {
                          func_0x00010b286d10();
                          func_0x000107c35448();
                          func_0x000107c354ac();
                          func_0x000107c35434();
                          func_0x000107c35494();
                          func_0x000107c354b4();
                          do {
                            func_0x000107c354a0();
                            func_0x000107c354a8();
                          } while (!(bool)in_ZR);
                        }
                        func_0x000107c35428();
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286dbc();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        uStack_f40 = 0x78;
                        pcStack_f28 = FUN_10b286bf8;
                        puStack_f50 = param_3;
                        puStack_f48 = param_4;
                        puStack_f38 = puVar4;
                        pppppppuStack_f30 = &pppppppuStack_ea0;
                        func_0x000107c35410();
                        func_0x000107c35448();
                        func_0x000107c354ac();
                        func_0x000107c35434();
                        func_0x000107c35494();
                        func_0x000107c354b4();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                        func_0x000107c35428();
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286dbc();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        puVar1 = auStack_fb0;
                      }
                    }
                  }
                }
                goto FUN_10b286c70;
              }
            }
            return;
          }
FUN_10b286c70:
          uVar13 = *puVar2;
          *(undefined8 *)(puVar1 + 0x28) = puVar2[1];
          *(undefined8 *)(puVar1 + 0x20) = uVar13;
          *(undefined8 *)(puVar1 + 0x30) = puVar2[2];
          puVar2[1] = 0;
          puVar2[2] = 0;
          *puVar2 = 0;
          uVar13 = *param_3;
          *(undefined8 *)(puVar1 + 0x40) = param_3[1];
          *(undefined8 *)(puVar1 + 0x38) = uVar13;
          *(undefined8 *)(puVar1 + 0x48) = param_3[2];
          *param_3 = 0;
          param_3[1] = 0;
          param_3[2] = 0;
          *(undefined8 *)(puVar1 + 0x60) = param_4[2];
          uVar13 = *param_4;
          *(undefined8 *)(puVar1 + 0x58) = param_4[1];
          *(undefined8 *)(puVar1 + 0x50) = uVar13;
          param_4[1] = 0;
          param_4[2] = 0;
          *param_4 = 0;
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 10b285964; end: 10b2859df;  */

/* WARNING: Possible PIC construction at 0x00010b285e20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b28617c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286b0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b28643c) */
/* WARNING: Removing unreachable block (ram,0x00010b286458) */
/* WARNING: Removing unreachable block (ram,0x00010b28621c) */
/* WARNING: Removing unreachable block (ram,0x00010b286238) */
/* WARNING: Removing unreachable block (ram,0x00010b286180) */
/* WARNING: Removing unreachable block (ram,0x00010b28619c) */
/* WARNING: Removing unreachable block (ram,0x00010b285e24) */
/* WARNING: Removing unreachable block (ram,0x00010b285e40) */
/* WARNING: Removing unreachable block (ram,0x00010b286b10) */
/* WARNING: Removing unreachable block (ram,0x00010b286b2c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10b285964(int param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  undefined8 extraout_x8_07;
  code *extraout_x8_08;
  undefined8 extraout_x8_09;
  code *extraout_x8_10;
  code *extraout_x8_11;
  undefined8 extraout_x8_12;
  code *extraout_x8_13;
  code *extraout_x8_14;
  code *extraout_x8_15;
  code *extraout_x8_16;
  undefined8 unaff_x21;
  undefined8 uVar13;
  undefined1 auStack_f20 [96];
  undefined8 *puStack_ec0;
  undefined8 *puStack_eb8;
  undefined8 uStack_eb0;
  undefined8 *puStack_ea8;
  undefined8 *******pppppppuStack_ea0;
  code *pcStack_e98;
  undefined8 *puStack_e30;
  undefined8 *puStack_e28;
  undefined8 uStack_e20;
  undefined8 *puStack_e18;
  undefined8 *******pppppppuStack_e10;
  code *pcStack_e08;
  undefined1 auStack_e00 [96];
  undefined8 *puStack_da0;
  undefined8 *puStack_d98;
  undefined8 uStack_d90;
  undefined8 *puStack_d88;
  undefined1 *******pppppppuStack_d80;
  code *pcStack_d78;
  undefined8 *******pppppppuStack_d60;
  code *pcStack_d58;
  undefined8 *puStack_d00;
  undefined8 *puStack_cf8;
  undefined8 uStack_cf0;
  code *pcStack_ce8;
  undefined1 ******ppppppuStack_ce0;
  code *pcStack_cd8;
  undefined8 *puStack_c70;
  undefined8 *puStack_c68;
  undefined8 uStack_c60;
  undefined8 *puStack_c58;
  undefined1 ***pppuStack_c50;
  code *pcStack_c48;
  undefined8 uStack_c38;
  undefined1 *****pppppuStack_c10;
  code *pcStack_c08;
  undefined1 ****ppppuStack_bf0;
  code *pcStack_be8;
  undefined8 *puStack_bd0;
  undefined8 *puStack_bc8;
  undefined8 uStack_bc0;
  code *pcStack_bb8;
  undefined1 **ppuStack_bb0;
  code *pcStack_ba8;
  undefined8 *puStack_b10;
  undefined8 *puStack_b08;
  undefined8 uStack_b00;
  code *pcStack_af8;
  undefined1 *puStack_af0;
  code *pcStack_ae8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a28;
  undefined1 auStack_9c0 [104];
  undefined8 uStack_958;
  undefined8 *puStack_930;
  undefined8 *puStack_928;
  undefined1 ****ppppuStack_920;
  code *pcStack_918;
  undefined1 ***pppuStack_910;
  code *pcStack_908;
  undefined8 *puStack_8a0;
  undefined8 *puStack_898;
  undefined8 *puStack_890;
  undefined8 *puStack_888;
  undefined1 **ppuStack_880;
  code *pcStack_878;
  undefined8 *puStack_810;
  undefined8 *puStack_808;
  undefined8 *puStack_800;
  undefined8 *puStack_7f8;
  undefined1 *puStack_7f0;
  code *pcStack_7e8;
  undefined1 auStack_7e0 [104];
  undefined8 uStack_778;
  undefined8 *puStack_770;
  undefined8 *puStack_768;
  undefined8 *puStack_760;
  code *pcStack_758;
  undefined8 *******pppppppuStack_750;
  code *pcStack_748;
  undefined8 *******pppppppuStack_740;
  code *pcStack_738;
  undefined8 *******pppppppuStack_720;
  code *pcStack_718;
  undefined8 *puStack_6b0;
  undefined8 *puStack_6a8;
  undefined8 *puStack_6a0;
  undefined8 *puStack_698;
  undefined8 *******pppppppuStack_690;
  code *pcStack_688;
  undefined8 *puStack_620;
  undefined8 *puStack_618;
  undefined8 *puStack_610;
  undefined8 *puStack_608;
  undefined8 *******pppppppuStack_600;
  code *pcStack_5f8;
  undefined1 auStack_5f0 [96];
  undefined8 *******pppppppuStack_570;
  code *pcStack_568;
  undefined8 *******pppppppuStack_550;
  code *pcStack_548;
  undefined1 *******pppppppuStack_4d0;
  code *pcStack_4c8;
  undefined1 ******ppppppuStack_410;
  code *pcStack_408;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *****pppppuStack_340;
  code *pcStack_338;
  undefined1 ****ppppuStack_2a0;
  code *pcStack_298;
  undefined1 ***pppuStack_1e0;
  code *pcStack_1d8;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  
  func_0x000107c35410();
  func_0x00010b286cf4();
  func_0x000107c35450();
  func_0x000107c354ac();
  func_0x000107c35434();
  func_0x000107c35494();
  func_0x000107c354bc();
  do {
    func_0x000107c354a0();
    func_0x000107c354a8();
  } while (!(bool)in_ZR);
  func_0x000107c35428();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286dc8();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcStack_a8 = FUN_10b2859e0;
    puStack_b0 = &stack0xfffffffffffffff0;
    func_0x000107c35410();
    func_0x000107c35448();
    func_0x000107c354ac();
    func_0x000107c35434();
    func_0x000107c35494();
    func_0x000107c354b4();
    do {
      func_0x000107c354a0();
      func_0x000107c354a8();
    } while (!(bool)in_ZR);
    func_0x000107c35428();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286dbc();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcStack_138 = FUN_10b285a58;
    ppuStack_140 = &puStack_b0;
    func_0x000107c35410();
    func_0x00010b286cf4();
    func_0x000107c35450();
    func_0x000107c354ac();
    func_0x000107c35434();
    func_0x000107c35494();
    func_0x000107c354bc();
    do {
      func_0x000107c354a0();
      func_0x000107c354a8();
    } while (!(bool)in_ZR);
    func_0x000107c35428();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b286d60();
      func_0x00010b286dc8();
      do {
        func_0x00010b286da8();
        func_0x00010b286db0();
      } while (!(bool)in_ZR);
      func_0x00010b286da0();
      pcStack_1d8 = FUN_10b285ad4;
      pppuStack_1e0 = &ppuStack_140;
      func_0x000107c35438();
      func_0x000107c35414();
      func_0x000107c35444();
      func_0x000107c35454();
      func_0x000107c35460();
      func_0x000107c35490();
      func_0x000107c35494();
      func_0x000107c354c4();
      do {
        func_0x000107c354a0();
        func_0x000107c354a8();
      } while (!(bool)in_ZR);
      func_0x000107c35428();
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010b286d60();
      func_0x00010b286dd4();
      do {
        func_0x00010b286da8();
        func_0x00010b286db0();
      } while (!(bool)in_ZR);
      func_0x00010b286da0();
      pcStack_298 = FUN_10b285b58;
      puVar3 = param_5;
      ppppuStack_2a0 = &pppuStack_1e0;
      func_0x000107c35438();
      func_0x000107c35414();
      func_0x000107c35450();
      func_0x000107c35460();
      func_0x000107c35490();
      func_0x000107c35494();
      func_0x000107c354bc();
      do {
        func_0x000107c354a0();
        func_0x000107c354a8();
      } while (!(bool)in_ZR);
      func_0x000107c35428();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010b286d60();
        func_0x00010b286dc8();
        do {
          func_0x00010b286da8();
          func_0x00010b286db0();
        } while (!(bool)in_ZR);
        func_0x00010b286da0();
        pcStack_338 = FUN_10b285bd8;
        pppppuStack_340 = &ppppuStack_2a0;
        func_0x000107c35410();
        func_0x00010b286cc0();
        uStack_378 = param_6[1];
        uStack_380 = *param_6;
        uStack_370 = param_6[2];
        param_6[1] = 0;
        param_6[2] = 0;
        *param_6 = 0;
        func_0x000107c35488();
        func_0x000107c354ac();
        func_0x000107c35434();
        func_0x000107c35494();
        func_0x000107c354d4();
        do {
          func_0x000107c354a0();
          func_0x000107c354a8();
        } while (!(bool)in_ZR);
        func_0x000107c35428();
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x00010b286d60();
        func_0x00010b286df0();
        do {
          func_0x00010b286da8();
          func_0x00010b286db0();
        } while (!(bool)in_ZR);
        func_0x00010b286da0();
        pcStack_408 = FUN_10b285c78;
        ppppppuStack_410 = &pppppuStack_340;
        func_0x000107c35410();
        func_0x00010b286cc0();
        func_0x000107c35454();
        func_0x000107c354ac();
        func_0x000107c35434();
        func_0x000107c35494();
        func_0x000107c354c4();
        do {
          func_0x000107c354a0();
          func_0x000107c354a8();
        } while (!(bool)in_ZR);
        func_0x000107c35428();
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x00010b286d60();
        func_0x00010b286dd4();
        do {
          func_0x00010b286da8();
          func_0x00010b286db0();
        } while (!(bool)in_ZR);
        func_0x00010b286da0();
        pcStack_4c8 = FUN_10b285cf4;
        pppppppuStack_4d0 = &ppppppuStack_410;
        func_0x000107c35410();
        func_0x00010b286cf4();
        func_0x000107c35450();
        func_0x000107c354ac();
        func_0x000107c35434();
        func_0x000107c35494();
        func_0x000107c354bc();
        do {
          func_0x000107c354a0();
          func_0x000107c354a8();
        } while (!(bool)in_ZR);
        func_0x000107c35428();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010b286d60();
          func_0x00010b286dc8();
          do {
            func_0x00010b286da8();
            func_0x00010b286db0();
          } while (!(bool)in_ZR);
          func_0x00010b286da0();
          pcStack_568 = FUN_10b285d70;
          pppppppuStack_570 = &pppppppuStack_4d0;
          func_0x000107c35410();
          func_0x000107c35448();
          func_0x000107c354ac();
          puVar2 = (undefined8 *)&UNK_110cce4d8;
          func_0x000107c35434();
          func_0x000107c35494();
          func_0x000107c354b4();
          do {
            func_0x000107c354a0();
            func_0x000107c354a8();
          } while (!(bool)in_ZR);
          func_0x000107c35428();
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          func_0x00010b286d60();
          func_0x00010b286dbc();
          do {
            func_0x00010b286da8();
            func_0x00010b286db0();
          } while (!(bool)in_ZR);
          func_0x00010b286da0();
          pcVar10 = FUN_10b285de8;
          func_0x000107c354e0();
          puVar4 = param_3;
          puVar6 = param_4;
          puVar8 = puVar3;
          pppppppuStack_550 = &pppppppuStack_570;
          pcStack_548 = pcVar10;
          func_0x000107c3541c();
          (*extraout_x8)();
          puVar1 = auStack_5f0;
          if (param_1 == 0) {
            func_0x000107c35430(unaff_x21);
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286dc8();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            pcStack_5f8 = FUN_10b285e84;
            puStack_620 = param_3;
            puStack_618 = param_4;
            puStack_610 = param_5;
            puStack_608 = puVar3;
            pppppppuStack_600 = &pppppppuStack_550;
            func_0x000107c3542c();
            (*extraout_x8_00)();
            if (param_1 != 0) {
              func_0x00010b286d10();
              func_0x000107c35448();
              func_0x000107c354ac();
              func_0x000107c35434();
              func_0x000107c35494();
              func_0x000107c354b4();
              do {
                func_0x000107c354a0();
                func_0x000107c354a8();
              } while (!(bool)in_ZR);
            }
            func_0x000107c35428();
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286dbc();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            pcStack_688 = FUN_10b285f0c;
            puStack_6b0 = param_3;
            puStack_6a8 = param_4;
            puStack_6a0 = param_5;
            puStack_698 = puVar3;
            pppppppuStack_690 = &pppppppuStack_600;
            func_0x000107c35410();
            func_0x00010b286cc0();
            func_0x000107c35454();
            func_0x000107c354ac();
            func_0x000107c35434();
            func_0x000107c35494();
            func_0x000107c354c4();
            do {
              func_0x000107c354a0();
              func_0x000107c354a8();
            } while (!(bool)in_ZR);
            func_0x000107c35428();
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286dd4();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            pcStack_748 = FUN_10b285f88;
            puStack_770 = param_3;
            puStack_768 = param_4;
            puStack_760 = param_5;
            pcStack_758 = pcVar10;
            pppppppuStack_750 = &pppppppuStack_690;
            func_0x000107c35410();
            func_0x00010b286cf4();
            func_0x000107c35450();
            func_0x000107c354ac();
            func_0x000107c35434();
            func_0x000107c35494();
            func_0x000107c354bc();
            do {
              func_0x000107c354a0();
              func_0x000107c354a8();
            } while (!(bool)in_ZR);
            func_0x000107c35428();
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286dc8();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            pcVar10 = FUN_10b286004;
            func_0x000107c354e4();
            pppppppuStack_720 = &pppppppuStack_750;
            pcStack_718 = pcVar10;
            func_0x000107c3541c();
            (*extraout_x8_01)();
            if (param_1 != 0) {
              func_0x000107c35420();
              func_0x000107c35454();
              func_0x00010b286d80();
              func_0x000107c35484();
              func_0x000107c35494();
              func_0x000107c354c4();
              do {
                func_0x000107c354a0();
                func_0x000107c354a8();
              } while (!(bool)in_ZR);
            }
            func_0x000107c35430(pcStack_758);
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dd4();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              pcVar10 = FUN_10b2860a4;
              func_0x000107c354e4();
              pppppppuStack_720 = &pppppppuStack_720;
              pcStack_718 = pcVar10;
              func_0x000107c3541c();
              puVar2 = (undefined8 *)&UNK_110cce7f8;
              (*extraout_x8_02)();
              if (param_1 != 0) {
                func_0x000107c35420();
                func_0x000107c35454();
                func_0x00010b286d48();
                puVar2 = (undefined8 *)&UNK_110cce7f8;
                func_0x00010b286d94();
                func_0x000107c35494();
                func_0x000107c354c4();
                do {
                  func_0x000107c354a0();
                  func_0x000107c354a8();
                } while (!(bool)in_ZR);
              }
              func_0x000107c35430(pcStack_758);
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x00010b286d60();
                func_0x00010b286dd4();
                do {
                  func_0x00010b286da8();
                  func_0x00010b286db0();
                } while (!(bool)in_ZR);
                func_0x00010b286da0();
                pcVar10 = FUN_10b286144;
                func_0x000107c354e0();
                puVar5 = puVar4;
                puVar7 = puVar6;
                pppppppuStack_740 = &pppppppuStack_720;
                pcStack_738 = pcVar10;
                func_0x000107c3541c();
                puVar3 = (undefined8 *)&UNK_110cce848;
                (*extraout_x8_03)();
                puVar1 = auStack_7e0;
                param_4 = puVar6;
                param_3 = puVar4;
                if (param_1 == 0) {
                  func_0x000107c35430(uStack_778);
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  func_0x00010b286dc8();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  pcVar10 = FUN_10b2861e0;
                  func_0x000107c354e0();
                  puVar4 = puVar5;
                  puVar6 = puVar7;
                  puVar9 = puVar8;
                  pppppppuStack_740 = &pppppppuStack_740;
                  pcStack_738 = pcVar10;
                  func_0x000107c3541c();
                  (*extraout_x8_04)();
                  puVar1 = auStack_7e0;
                  param_4 = puVar7;
                  param_3 = puVar5;
                  puVar2 = puVar3;
                  if (param_1 == 0) {
                    func_0x000107c35430(uStack_778);
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286dc8();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    pcStack_7e8 = FUN_10b28627c;
                    puStack_810 = puVar5;
                    puStack_808 = puVar7;
                    puStack_800 = param_5;
                    puStack_7f8 = puVar8;
                    puStack_7f0 = (undefined1 *)&pppppppuStack_740;
                    func_0x000107c3542c();
                    (*extraout_x8_05)();
                    if (param_1 != 0) {
                      func_0x00010b286d10();
                      func_0x000107c35448();
                      func_0x000107c354ac();
                      func_0x000107c35434();
                      func_0x000107c35494();
                      func_0x000107c354b4();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                    }
                    func_0x000107c35428();
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286dbc();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    pcStack_878 = FUN_10b286304;
                    param_4 = puVar6;
                    puStack_8a0 = puVar5;
                    puStack_898 = puVar7;
                    puStack_890 = param_5;
                    puStack_888 = puVar8;
                    ppuStack_880 = &puStack_7f0;
                    func_0x000107c35410();
                    func_0x000107c35448();
                    func_0x000107c354ac();
                    func_0x000107c35434();
                    func_0x000107c35494();
                    func_0x000107c354b4();
                    do {
                      func_0x000107c354a0();
                      func_0x000107c354a8();
                    } while (!(bool)in_ZR);
                    func_0x000107c35428();
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286dbc();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    puVar1 = auStack_9c0;
                    pcStack_908 = FUN_10b28637c;
                    puStack_930 = puVar5;
                    puStack_928 = puVar7;
                    ppppuStack_920 = (undefined1 ****)param_5;
                    pcStack_918 = (code *)puVar6;
                    pppuStack_910 = &ppuStack_880;
                    func_0x000107c35438();
                    func_0x000107c35414();
                    func_0x000107c35444();
                    func_0x000107c35454();
                    func_0x000107c35460();
                    puVar2 = (undefined8 *)&UNK_110ccea28;
                    func_0x000107c35490();
                    func_0x000107c35494();
                    func_0x000107c354c4();
                    do {
                      func_0x000107c354a0();
                      func_0x000107c354a8();
                    } while (!(bool)in_ZR);
                    func_0x000107c35428();
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286dd4();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    pcVar10 = FUN_10b286400;
                    func_0x000107c354e0();
                    puVar6 = puVar4;
                    puVar8 = param_4;
                    ppppuStack_920 = &pppuStack_910;
                    pcStack_918 = pcVar10;
                    func_0x000107c3541c();
                    puVar3 = (undefined8 *)&UNK_110ccea78;
                    (*extraout_x8_06)();
                    param_3 = puVar4;
                    if (param_1 == 0) {
                      func_0x000107c35430(uStack_958);
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dc8();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      param_3 = puVar6;
                      puVar2 = puVar8;
                      puVar4 = puVar9;
                      pcVar11 = pcVar10;
                      func_0x000107c35440();
                      uStack_a28 = extraout_x8_07;
                      func_0x000107c35474();
                      (*extraout_x8_08)();
                      if (param_1 != 0) {
                        uStack_ab8 = puVar3[1];
                        uStack_ac0 = *puVar3;
                        uStack_ab0 = puVar3[2];
                        puVar3[1] = 0;
                        puVar3[2] = 0;
                        *puVar3 = 0;
                        uStack_aa0 = puVar6[1];
                        uStack_aa8 = *puVar6;
                        uStack_a98 = puVar6[2];
                        puVar6[1] = 0;
                        puVar6[2] = 0;
                        *puVar6 = 0;
                        uStack_a88 = puVar8[1];
                        uStack_a90 = *puVar8;
                        uStack_a80 = puVar8[2];
                        puVar8[1] = 0;
                        puVar8[2] = 0;
                        *puVar8 = 0;
                        uStack_a70 = puVar9[1];
                        uStack_a78 = *puVar9;
                        uStack_a68 = puVar9[2];
                        *puVar9 = 0;
                        puVar9[1] = 0;
                        puVar9[2] = 0;
                        uStack_a58 = *(undefined8 *)(pcVar10 + 8);
                        uStack_a60 = *(undefined8 *)pcVar10;
                        uStack_a50 = *(undefined8 *)(pcVar10 + 0x10);
                        func_0x00010b286d6c();
                        func_0x00010b286dfc();
                        func_0x00010b286de0();
                        func_0x00010b286d80();
                        func_0x000107c35484();
                        func_0x000107c35494();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                      }
                      func_0x000107c35430(uStack_a28);
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      func_0x000107c354dc();
                      func_0x000107c35440();
                      uStack_a48 = extraout_x8_09;
                      func_0x000107c35474();
                      (*extraout_x8_10)();
                      if (param_1 != 0) {
                        func_0x000107c3543c();
                        func_0x000107c35488();
                        func_0x00010b286d80();
                        func_0x000107c35484();
                        func_0x000107c35494();
                        func_0x000107c354d4();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                      }
                      func_0x000107c35430(uStack_a48);
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286df0();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      func_0x000107c354e4();
                      puVar3 = puVar2;
                      puVar6 = puVar4;
                      pcVar10 = pcVar11;
                      func_0x000107c3541c();
                      (*extraout_x8_11)();
                      if (param_1 != 0) {
                        func_0x000107c35420();
                        func_0x000107c35454();
                        func_0x00010b286d80();
                        func_0x000107c35484();
                        func_0x000107c35494();
                        func_0x000107c354c4();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                      }
                      func_0x000107c35430(uStack_a58);
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dd4();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      uStack_b00 = 0x78;
                      pcStack_ae8 = FUN_10b286724;
                      pcVar12 = pcVar10;
                      puStack_b10 = puVar2;
                      puStack_b08 = puVar4;
                      pcStack_af8 = pcVar11;
                      puStack_af0 = &stack0xfffffffffffff5e0;
                      func_0x000107c35410();
                      func_0x00010b286cc0();
                      func_0x000107c35454();
                      func_0x000107c354ac();
                      func_0x000107c35434();
                      func_0x000107c35494();
                      func_0x000107c354c4();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                      func_0x000107c35428();
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dd4();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      uStack_bc0 = 0x78;
                      pcStack_ba8 = FUN_10b2867a0;
                      puVar8 = puVar6;
                      puStack_bd0 = puVar2;
                      puStack_bc8 = puVar4;
                      pcStack_bb8 = pcVar10;
                      ppuStack_bb0 = &puStack_af0;
                      func_0x000107c35410();
                      func_0x00010b286cf4();
                      func_0x000107c35450();
                      func_0x000107c354ac();
                      func_0x000107c35434();
                      func_0x000107c35494();
                      func_0x000107c354bc();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                      func_0x000107c35428();
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dc8();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      uStack_c60 = 0x78;
                      pcStack_c48 = FUN_10b28681c;
                      puStack_c70 = puVar2;
                      puStack_c68 = puVar4;
                      puStack_c58 = puVar6;
                      pppuStack_c50 = &ppuStack_bb0;
                      func_0x000107c35410();
                      func_0x000107c35448();
                      func_0x000107c354ac();
                      func_0x000107c35434();
                      func_0x000107c35494();
                      func_0x000107c354b4();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                      func_0x000107c35428();
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dbc();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      pcVar10 = FUN_10b286894;
                      func_0x000107c354dc();
                      ppppuStack_bf0 = &pppuStack_c50;
                      pcStack_be8 = pcVar10;
                      func_0x000107c35440();
                      uStack_c38 = extraout_x8_12;
                      func_0x000107c35474();
                      (*extraout_x8_13)();
                      if (param_1 != 0) {
                        func_0x000107c3543c();
                        func_0x000107c35488();
                        func_0x00010b286d80();
                        func_0x000107c35484();
                        func_0x000107c35494();
                        func_0x000107c354d4();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                      }
                      func_0x000107c35430(uStack_c38);
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286df0();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      pcVar10 = FUN_10b286940;
                      func_0x000107c354e4();
                      param_4 = puVar3;
                      puVar2 = puVar8;
                      pppppuStack_c10 = &ppppuStack_bf0;
                      pcStack_c08 = pcVar10;
                      func_0x000107c3541c();
                      (*extraout_x8_14)();
                      if (param_1 != 0) {
                        func_0x000107c35420();
                        func_0x000107c35454();
                        func_0x00010b286d80();
                        func_0x000107c35484();
                        func_0x000107c35494();
                        func_0x000107c354c4();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                      }
                      func_0x000107c35430(pcStack_c48);
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dd4();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      uStack_cf0 = 0x78;
                      pcStack_cd8 = FUN_10b2869e0;
                      puVar4 = puVar2;
                      puStack_d00 = puVar3;
                      puStack_cf8 = puVar8;
                      pcStack_ce8 = pcVar12;
                      ppppppuStack_ce0 = &pppppuStack_c10;
                      func_0x000107c35410();
                      func_0x00010b286cf4();
                      func_0x000107c35450();
                      func_0x000107c354ac();
                      func_0x000107c35434();
                      func_0x000107c35494();
                      func_0x000107c354bc();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                      func_0x000107c35428();
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dc8();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      puVar1 = auStack_e00;
                      uStack_d90 = 0x78;
                      pcStack_d78 = FUN_10b286a5c;
                      puStack_da0 = puVar3;
                      puStack_d98 = puVar8;
                      puStack_d88 = puVar2;
                      pppppppuStack_d80 = &ppppppuStack_ce0;
                      func_0x000107c35410();
                      func_0x000107c35448();
                      func_0x000107c354ac();
                      puVar2 = (undefined8 *)&UNK_110cceed8;
                      func_0x000107c35434();
                      func_0x000107c35494();
                      func_0x000107c354b4();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                      func_0x000107c35428();
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dbc();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      pcVar10 = FUN_10b286ad4;
                      func_0x000107c354e0();
                      pppppppuStack_d60 = &pppppppuStack_d80;
                      pcStack_d58 = pcVar10;
                      func_0x000107c3541c();
                      (*extraout_x8_15)();
                      if (param_1 == 0) {
                        func_0x000107c35430(puStack_d98);
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286dc8();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        uStack_e20 = 0x78;
                        pcStack_e08 = FUN_10b286b70;
                        puStack_e30 = param_3;
                        puStack_e28 = param_4;
                        puStack_e18 = puVar4;
                        pppppppuStack_e10 = &pppppppuStack_d60;
                        func_0x000107c3542c();
                        (*extraout_x8_16)();
                        if (param_1 != 0) {
                          func_0x00010b286d10();
                          func_0x000107c35448();
                          func_0x000107c354ac();
                          func_0x000107c35434();
                          func_0x000107c35494();
                          func_0x000107c354b4();
                          do {
                            func_0x000107c354a0();
                            func_0x000107c354a8();
                          } while (!(bool)in_ZR);
                        }
                        func_0x000107c35428();
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286dbc();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        uStack_eb0 = 0x78;
                        pcStack_e98 = FUN_10b286bf8;
                        puStack_ec0 = param_3;
                        puStack_eb8 = param_4;
                        puStack_ea8 = puVar4;
                        pppppppuStack_ea0 = &pppppppuStack_e10;
                        func_0x000107c35410();
                        func_0x000107c35448();
                        func_0x000107c354ac();
                        func_0x000107c35434();
                        func_0x000107c35494();
                        func_0x000107c354b4();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                        func_0x000107c35428();
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x00010b286d60();
                        func_0x00010b286dbc();
                        do {
                          func_0x00010b286da8();
                          func_0x00010b286db0();
                        } while (!(bool)in_ZR);
                        func_0x00010b286da0();
                        puVar1 = auStack_f20;
                      }
                    }
                  }
                }
                goto FUN_10b286c70;
              }
            }
            return;
          }
FUN_10b286c70:
          uVar13 = *puVar2;
          *(undefined8 *)(puVar1 + 0x28) = puVar2[1];
          *(undefined8 *)(puVar1 + 0x20) = uVar13;
          *(undefined8 *)(puVar1 + 0x30) = puVar2[2];
          puVar2[1] = 0;
          puVar2[2] = 0;
          *puVar2 = 0;
          uVar13 = *param_3;
          *(undefined8 *)(puVar1 + 0x40) = param_3[1];
          *(undefined8 *)(puVar1 + 0x38) = uVar13;
          *(undefined8 *)(puVar1 + 0x48) = param_3[2];
          *param_3 = 0;
          param_3[1] = 0;
          param_3[2] = 0;
          *(undefined8 *)(puVar1 + 0x60) = param_4[2];
          uVar13 = *param_4;
          *(undefined8 *)(puVar1 + 0x58) = param_4[1];
          *(undefined8 *)(puVar1 + 0x50) = uVar13;
          param_4[1] = 0;
          param_4[2] = 0;
          *param_4 = 0;
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 10b2859e0; end: 10b285a57;  */

/* WARNING: Possible PIC construction at 0x00010b285e20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b28617c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286b0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b28643c) */
/* WARNING: Removing unreachable block (ram,0x00010b286458) */
/* WARNING: Removing unreachable block (ram,0x00010b28621c) */
/* WARNING: Removing unreachable block (ram,0x00010b286238) */
/* WARNING: Removing unreachable block (ram,0x00010b286180) */
/* WARNING: Removing unreachable block (ram,0x00010b28619c) */
/* WARNING: Removing unreachable block (ram,0x00010b285e24) */
/* WARNING: Removing unreachable block (ram,0x00010b285e40) */
/* WARNING: Removing unreachable block (ram,0x00010b286b10) */
/* WARNING: Removing unreachable block (ram,0x00010b286b2c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10b2859e0(int param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  undefined8 extraout_x8_07;
  code *extraout_x8_08;
  undefined8 extraout_x8_09;
  code *extraout_x8_10;
  code *extraout_x8_11;
  undefined8 extraout_x8_12;
  code *extraout_x8_13;
  code *extraout_x8_14;
  code *extraout_x8_15;
  code *extraout_x8_16;
  undefined8 unaff_x21;
  undefined8 uVar13;
  undefined1 auStack_e80 [96];
  undefined8 *puStack_e20;
  undefined8 *puStack_e18;
  undefined8 uStack_e10;
  undefined8 *puStack_e08;
  undefined8 *******pppppppuStack_e00;
  code *pcStack_df8;
  undefined8 *puStack_d90;
  undefined8 *puStack_d88;
  undefined8 uStack_d80;
  undefined8 *puStack_d78;
  undefined8 *******pppppppuStack_d70;
  code *pcStack_d68;
  undefined1 auStack_d60 [96];
  undefined8 *puStack_d00;
  undefined8 *puStack_cf8;
  undefined8 uStack_cf0;
  undefined8 *puStack_ce8;
  undefined1 *******pppppppuStack_ce0;
  code *pcStack_cd8;
  undefined8 *******pppppppuStack_cc0;
  code *pcStack_cb8;
  undefined8 *puStack_c60;
  undefined8 *puStack_c58;
  undefined8 uStack_c50;
  code *pcStack_c48;
  undefined1 ******ppppppuStack_c40;
  code *pcStack_c38;
  undefined8 *puStack_bd0;
  undefined8 *puStack_bc8;
  undefined8 uStack_bc0;
  undefined8 *puStack_bb8;
  undefined1 ***pppuStack_bb0;
  code *pcStack_ba8;
  undefined8 uStack_b98;
  undefined1 *****pppppuStack_b70;
  code *pcStack_b68;
  undefined1 ****ppppuStack_b50;
  code *pcStack_b48;
  undefined8 *puStack_b30;
  undefined8 *puStack_b28;
  undefined8 uStack_b20;
  code *pcStack_b18;
  undefined1 **ppuStack_b10;
  code *pcStack_b08;
  undefined8 *puStack_a70;
  undefined8 *puStack_a68;
  undefined8 uStack_a60;
  code *pcStack_a58;
  undefined1 *puStack_a50;
  code *pcStack_a48;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_988;
  undefined1 auStack_920 [104];
  undefined8 uStack_8b8;
  undefined8 *puStack_890;
  undefined8 *puStack_888;
  undefined1 ****ppppuStack_880;
  code *pcStack_878;
  undefined1 ***pppuStack_870;
  code *pcStack_868;
  undefined8 *puStack_800;
  undefined8 *puStack_7f8;
  undefined8 *puStack_7f0;
  undefined8 *puStack_7e8;
  undefined1 **ppuStack_7e0;
  code *pcStack_7d8;
  undefined8 *puStack_770;
  undefined8 *puStack_768;
  undefined8 *puStack_760;
  undefined8 *puStack_758;
  undefined1 *puStack_750;
  code *pcStack_748;
  undefined1 auStack_740 [104];
  undefined8 uStack_6d8;
  undefined8 *puStack_6d0;
  undefined8 *puStack_6c8;
  undefined8 *puStack_6c0;
  code *pcStack_6b8;
  undefined8 *******pppppppuStack_6b0;
  code *pcStack_6a8;
  undefined8 *******pppppppuStack_6a0;
  code *pcStack_698;
  undefined8 *******pppppppuStack_680;
  code *pcStack_678;
  undefined8 *puStack_610;
  undefined8 *puStack_608;
  undefined8 *puStack_600;
  undefined8 *puStack_5f8;
  undefined8 *******pppppppuStack_5f0;
  code *pcStack_5e8;
  undefined8 *puStack_580;
  undefined8 *puStack_578;
  undefined8 *puStack_570;
  undefined8 *puStack_568;
  undefined8 *******pppppppuStack_560;
  code *pcStack_558;
  undefined1 auStack_550 [96];
  undefined1 *******pppppppuStack_4d0;
  code *pcStack_4c8;
  undefined8 *******pppppppuStack_4b0;
  code *pcStack_4a8;
  undefined1 ******ppppppuStack_430;
  code *pcStack_428;
  undefined1 *****pppppuStack_370;
  code *pcStack_368;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 ****ppppuStack_2a0;
  code *pcStack_298;
  undefined1 ***pppuStack_200;
  code *pcStack_1f8;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  undefined1 *puStack_a0;
  code *pcStack_98;
  
  func_0x000107c35410();
  func_0x000107c35448();
  func_0x000107c354ac();
  func_0x000107c35434();
  func_0x000107c35494();
  func_0x000107c354b4();
  do {
    func_0x000107c354a0();
    func_0x000107c354a8();
  } while (!(bool)in_ZR);
  func_0x000107c35428();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b286d60();
  func_0x00010b286dbc();
  do {
    func_0x00010b286da8();
    func_0x00010b286db0();
  } while (!(bool)in_ZR);
  func_0x00010b286da0();
  pcStack_98 = FUN_10b285a58;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x000107c35410();
  func_0x00010b286cf4();
  func_0x000107c35450();
  func_0x000107c354ac();
  func_0x000107c35434();
  func_0x000107c35494();
  func_0x000107c354bc();
  do {
    func_0x000107c354a0();
    func_0x000107c354a8();
  } while (!(bool)in_ZR);
  func_0x000107c35428();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286dc8();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcStack_138 = FUN_10b285ad4;
    ppuStack_140 = &puStack_a0;
    func_0x000107c35438();
    func_0x000107c35414();
    func_0x000107c35444();
    func_0x000107c35454();
    func_0x000107c35460();
    func_0x000107c35490();
    func_0x000107c35494();
    func_0x000107c354c4();
    do {
      func_0x000107c354a0();
      func_0x000107c354a8();
    } while (!(bool)in_ZR);
    func_0x000107c35428();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286dd4();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcStack_1f8 = FUN_10b285b58;
    puVar3 = param_5;
    pppuStack_200 = &ppuStack_140;
    func_0x000107c35438();
    func_0x000107c35414();
    func_0x000107c35450();
    func_0x000107c35460();
    func_0x000107c35490();
    func_0x000107c35494();
    func_0x000107c354bc();
    do {
      func_0x000107c354a0();
      func_0x000107c354a8();
    } while (!(bool)in_ZR);
    func_0x000107c35428();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b286d60();
      func_0x00010b286dc8();
      do {
        func_0x00010b286da8();
        func_0x00010b286db0();
      } while (!(bool)in_ZR);
      func_0x00010b286da0();
      pcStack_298 = FUN_10b285bd8;
      ppppuStack_2a0 = &pppuStack_200;
      func_0x000107c35410();
      func_0x00010b286cc0();
      uStack_2d8 = param_6[1];
      uStack_2e0 = *param_6;
      uStack_2d0 = param_6[2];
      param_6[1] = 0;
      param_6[2] = 0;
      *param_6 = 0;
      func_0x000107c35488();
      func_0x000107c354ac();
      func_0x000107c35434();
      func_0x000107c35494();
      func_0x000107c354d4();
      do {
        func_0x000107c354a0();
        func_0x000107c354a8();
      } while (!(bool)in_ZR);
      func_0x000107c35428();
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010b286d60();
      func_0x00010b286df0();
      do {
        func_0x00010b286da8();
        func_0x00010b286db0();
      } while (!(bool)in_ZR);
      func_0x00010b286da0();
      pcStack_368 = FUN_10b285c78;
      pppppuStack_370 = &ppppuStack_2a0;
      func_0x000107c35410();
      func_0x00010b286cc0();
      func_0x000107c35454();
      func_0x000107c354ac();
      func_0x000107c35434();
      func_0x000107c35494();
      func_0x000107c354c4();
      do {
        func_0x000107c354a0();
        func_0x000107c354a8();
      } while (!(bool)in_ZR);
      func_0x000107c35428();
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010b286d60();
      func_0x00010b286dd4();
      do {
        func_0x00010b286da8();
        func_0x00010b286db0();
      } while (!(bool)in_ZR);
      func_0x00010b286da0();
      pcStack_428 = FUN_10b285cf4;
      ppppppuStack_430 = &pppppuStack_370;
      func_0x000107c35410();
      func_0x00010b286cf4();
      func_0x000107c35450();
      func_0x000107c354ac();
      func_0x000107c35434();
      func_0x000107c35494();
      func_0x000107c354bc();
      do {
        func_0x000107c354a0();
        func_0x000107c354a8();
      } while (!(bool)in_ZR);
      func_0x000107c35428();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010b286d60();
        func_0x00010b286dc8();
        do {
          func_0x00010b286da8();
          func_0x00010b286db0();
        } while (!(bool)in_ZR);
        func_0x00010b286da0();
        pcStack_4c8 = FUN_10b285d70;
        pppppppuStack_4d0 = &ppppppuStack_430;
        func_0x000107c35410();
        func_0x000107c35448();
        func_0x000107c354ac();
        puVar2 = (undefined8 *)&UNK_110cce4d8;
        func_0x000107c35434();
        func_0x000107c35494();
        func_0x000107c354b4();
        do {
          func_0x000107c354a0();
          func_0x000107c354a8();
        } while (!(bool)in_ZR);
        func_0x000107c35428();
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x00010b286d60();
        func_0x00010b286dbc();
        do {
          func_0x00010b286da8();
          func_0x00010b286db0();
        } while (!(bool)in_ZR);
        func_0x00010b286da0();
        pcVar10 = FUN_10b285de8;
        func_0x000107c354e0();
        puVar4 = param_3;
        puVar6 = param_4;
        puVar8 = puVar3;
        pppppppuStack_4b0 = &pppppppuStack_4d0;
        pcStack_4a8 = pcVar10;
        func_0x000107c3541c();
        (*extraout_x8)();
        puVar1 = auStack_550;
        if (param_1 == 0) {
          func_0x000107c35430(unaff_x21);
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          func_0x00010b286d60();
          func_0x00010b286dc8();
          do {
            func_0x00010b286da8();
            func_0x00010b286db0();
          } while (!(bool)in_ZR);
          func_0x00010b286da0();
          pcStack_558 = FUN_10b285e84;
          puStack_580 = param_3;
          puStack_578 = param_4;
          puStack_570 = param_5;
          puStack_568 = puVar3;
          pppppppuStack_560 = &pppppppuStack_4b0;
          func_0x000107c3542c();
          (*extraout_x8_00)();
          if (param_1 != 0) {
            func_0x00010b286d10();
            func_0x000107c35448();
            func_0x000107c354ac();
            func_0x000107c35434();
            func_0x000107c35494();
            func_0x000107c354b4();
            do {
              func_0x000107c354a0();
              func_0x000107c354a8();
            } while (!(bool)in_ZR);
          }
          func_0x000107c35428();
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          func_0x00010b286d60();
          func_0x00010b286dbc();
          do {
            func_0x00010b286da8();
            func_0x00010b286db0();
          } while (!(bool)in_ZR);
          func_0x00010b286da0();
          pcStack_5e8 = FUN_10b285f0c;
          puStack_610 = param_3;
          puStack_608 = param_4;
          puStack_600 = param_5;
          puStack_5f8 = puVar3;
          pppppppuStack_5f0 = &pppppppuStack_560;
          func_0x000107c35410();
          func_0x00010b286cc0();
          func_0x000107c35454();
          func_0x000107c354ac();
          func_0x000107c35434();
          func_0x000107c35494();
          func_0x000107c354c4();
          do {
            func_0x000107c354a0();
            func_0x000107c354a8();
          } while (!(bool)in_ZR);
          func_0x000107c35428();
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          func_0x00010b286d60();
          func_0x00010b286dd4();
          do {
            func_0x00010b286da8();
            func_0x00010b286db0();
          } while (!(bool)in_ZR);
          func_0x00010b286da0();
          pcStack_6a8 = FUN_10b285f88;
          puStack_6d0 = param_3;
          puStack_6c8 = param_4;
          puStack_6c0 = param_5;
          pcStack_6b8 = pcVar10;
          pppppppuStack_6b0 = &pppppppuStack_5f0;
          func_0x000107c35410();
          func_0x00010b286cf4();
          func_0x000107c35450();
          func_0x000107c354ac();
          func_0x000107c35434();
          func_0x000107c35494();
          func_0x000107c354bc();
          do {
            func_0x000107c354a0();
            func_0x000107c354a8();
          } while (!(bool)in_ZR);
          func_0x000107c35428();
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          func_0x00010b286d60();
          func_0x00010b286dc8();
          do {
            func_0x00010b286da8();
            func_0x00010b286db0();
          } while (!(bool)in_ZR);
          func_0x00010b286da0();
          pcVar10 = FUN_10b286004;
          func_0x000107c354e4();
          pppppppuStack_680 = &pppppppuStack_6b0;
          pcStack_678 = pcVar10;
          func_0x000107c3541c();
          (*extraout_x8_01)();
          if (param_1 != 0) {
            func_0x000107c35420();
            func_0x000107c35454();
            func_0x00010b286d80();
            func_0x000107c35484();
            func_0x000107c35494();
            func_0x000107c354c4();
            do {
              func_0x000107c354a0();
              func_0x000107c354a8();
            } while (!(bool)in_ZR);
          }
          func_0x000107c35430(pcStack_6b8);
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286dd4();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            pcVar10 = FUN_10b2860a4;
            func_0x000107c354e4();
            pppppppuStack_680 = &pppppppuStack_680;
            pcStack_678 = pcVar10;
            func_0x000107c3541c();
            puVar2 = (undefined8 *)&UNK_110cce7f8;
            (*extraout_x8_02)();
            if (param_1 != 0) {
              func_0x000107c35420();
              func_0x000107c35454();
              func_0x00010b286d48();
              puVar2 = (undefined8 *)&UNK_110cce7f8;
              func_0x00010b286d94();
              func_0x000107c35494();
              func_0x000107c354c4();
              do {
                func_0x000107c354a0();
                func_0x000107c354a8();
              } while (!(bool)in_ZR);
            }
            func_0x000107c35430(pcStack_6b8);
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dd4();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              pcVar10 = FUN_10b286144;
              func_0x000107c354e0();
              puVar5 = puVar4;
              puVar7 = puVar6;
              pppppppuStack_6a0 = &pppppppuStack_680;
              pcStack_698 = pcVar10;
              func_0x000107c3541c();
              puVar3 = (undefined8 *)&UNK_110cce848;
              (*extraout_x8_03)();
              puVar1 = auStack_740;
              param_4 = puVar6;
              param_3 = puVar4;
              if (param_1 == 0) {
                func_0x000107c35430(uStack_6d8);
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x00010b286d60();
                func_0x00010b286dc8();
                do {
                  func_0x00010b286da8();
                  func_0x00010b286db0();
                } while (!(bool)in_ZR);
                func_0x00010b286da0();
                pcVar10 = FUN_10b2861e0;
                func_0x000107c354e0();
                puVar4 = puVar5;
                puVar6 = puVar7;
                puVar9 = puVar8;
                pppppppuStack_6a0 = &pppppppuStack_6a0;
                pcStack_698 = pcVar10;
                func_0x000107c3541c();
                (*extraout_x8_04)();
                puVar1 = auStack_740;
                param_4 = puVar7;
                param_3 = puVar5;
                puVar2 = puVar3;
                if (param_1 == 0) {
                  func_0x000107c35430(uStack_6d8);
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  func_0x00010b286dc8();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  pcStack_748 = FUN_10b28627c;
                  puStack_770 = puVar5;
                  puStack_768 = puVar7;
                  puStack_760 = param_5;
                  puStack_758 = puVar8;
                  puStack_750 = (undefined1 *)&pppppppuStack_6a0;
                  func_0x000107c3542c();
                  (*extraout_x8_05)();
                  if (param_1 != 0) {
                    func_0x00010b286d10();
                    func_0x000107c35448();
                    func_0x000107c354ac();
                    func_0x000107c35434();
                    func_0x000107c35494();
                    func_0x000107c354b4();
                    do {
                      func_0x000107c354a0();
                      func_0x000107c354a8();
                    } while (!(bool)in_ZR);
                  }
                  func_0x000107c35428();
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  func_0x00010b286dbc();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  pcStack_7d8 = FUN_10b286304;
                  param_4 = puVar6;
                  puStack_800 = puVar5;
                  puStack_7f8 = puVar7;
                  puStack_7f0 = param_5;
                  puStack_7e8 = puVar8;
                  ppuStack_7e0 = &puStack_750;
                  func_0x000107c35410();
                  func_0x000107c35448();
                  func_0x000107c354ac();
                  func_0x000107c35434();
                  func_0x000107c35494();
                  func_0x000107c354b4();
                  do {
                    func_0x000107c354a0();
                    func_0x000107c354a8();
                  } while (!(bool)in_ZR);
                  func_0x000107c35428();
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  func_0x00010b286dbc();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  puVar1 = auStack_920;
                  pcStack_868 = FUN_10b28637c;
                  puStack_890 = puVar5;
                  puStack_888 = puVar7;
                  ppppuStack_880 = (undefined1 ****)param_5;
                  pcStack_878 = (code *)puVar6;
                  pppuStack_870 = &ppuStack_7e0;
                  func_0x000107c35438();
                  func_0x000107c35414();
                  func_0x000107c35444();
                  func_0x000107c35454();
                  func_0x000107c35460();
                  puVar2 = (undefined8 *)&UNK_110ccea28;
                  func_0x000107c35490();
                  func_0x000107c35494();
                  func_0x000107c354c4();
                  do {
                    func_0x000107c354a0();
                    func_0x000107c354a8();
                  } while (!(bool)in_ZR);
                  func_0x000107c35428();
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  func_0x00010b286dd4();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  pcVar10 = FUN_10b286400;
                  func_0x000107c354e0();
                  puVar6 = puVar4;
                  puVar8 = param_4;
                  ppppuStack_880 = &pppuStack_870;
                  pcStack_878 = pcVar10;
                  func_0x000107c3541c();
                  puVar3 = (undefined8 *)&UNK_110ccea78;
                  (*extraout_x8_06)();
                  param_3 = puVar4;
                  if (param_1 == 0) {
                    func_0x000107c35430(uStack_8b8);
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286dc8();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    param_3 = puVar6;
                    puVar2 = puVar8;
                    puVar4 = puVar9;
                    pcVar11 = pcVar10;
                    func_0x000107c35440();
                    uStack_988 = extraout_x8_07;
                    func_0x000107c35474();
                    (*extraout_x8_08)();
                    if (param_1 != 0) {
                      uStack_a18 = puVar3[1];
                      uStack_a20 = *puVar3;
                      uStack_a10 = puVar3[2];
                      puVar3[1] = 0;
                      puVar3[2] = 0;
                      *puVar3 = 0;
                      uStack_a00 = puVar6[1];
                      uStack_a08 = *puVar6;
                      uStack_9f8 = puVar6[2];
                      puVar6[1] = 0;
                      puVar6[2] = 0;
                      *puVar6 = 0;
                      uStack_9e8 = puVar8[1];
                      uStack_9f0 = *puVar8;
                      uStack_9e0 = puVar8[2];
                      puVar8[1] = 0;
                      puVar8[2] = 0;
                      *puVar8 = 0;
                      uStack_9d0 = puVar9[1];
                      uStack_9d8 = *puVar9;
                      uStack_9c8 = puVar9[2];
                      *puVar9 = 0;
                      puVar9[1] = 0;
                      puVar9[2] = 0;
                      uStack_9b8 = *(undefined8 *)(pcVar10 + 8);
                      uStack_9c0 = *(undefined8 *)pcVar10;
                      uStack_9b0 = *(undefined8 *)(pcVar10 + 0x10);
                      func_0x00010b286d6c();
                      func_0x00010b286dfc();
                      func_0x00010b286de0();
                      func_0x00010b286d80();
                      func_0x000107c35484();
                      func_0x000107c35494();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                    }
                    func_0x000107c35430(uStack_988);
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    func_0x000107c354dc();
                    func_0x000107c35440();
                    uStack_9a8 = extraout_x8_09;
                    func_0x000107c35474();
                    (*extraout_x8_10)();
                    if (param_1 != 0) {
                      func_0x000107c3543c();
                      func_0x000107c35488();
                      func_0x00010b286d80();
                      func_0x000107c35484();
                      func_0x000107c35494();
                      func_0x000107c354d4();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                    }
                    func_0x000107c35430(uStack_9a8);
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286df0();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    func_0x000107c354e4();
                    puVar3 = puVar2;
                    puVar6 = puVar4;
                    pcVar10 = pcVar11;
                    func_0x000107c3541c();
                    (*extraout_x8_11)();
                    if (param_1 != 0) {
                      func_0x000107c35420();
                      func_0x000107c35454();
                      func_0x00010b286d80();
                      func_0x000107c35484();
                      func_0x000107c35494();
                      func_0x000107c354c4();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                    }
                    func_0x000107c35430(uStack_9b8);
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286dd4();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    uStack_a60 = 0x78;
                    pcStack_a48 = FUN_10b286724;
                    pcVar12 = pcVar10;
                    puStack_a70 = puVar2;
                    puStack_a68 = puVar4;
                    pcStack_a58 = pcVar11;
                    puStack_a50 = &stack0xfffffffffffff680;
                    func_0x000107c35410();
                    func_0x00010b286cc0();
                    func_0x000107c35454();
                    func_0x000107c354ac();
                    func_0x000107c35434();
                    func_0x000107c35494();
                    func_0x000107c354c4();
                    do {
                      func_0x000107c354a0();
                      func_0x000107c354a8();
                    } while (!(bool)in_ZR);
                    func_0x000107c35428();
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286dd4();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    uStack_b20 = 0x78;
                    pcStack_b08 = FUN_10b2867a0;
                    puVar8 = puVar6;
                    puStack_b30 = puVar2;
                    puStack_b28 = puVar4;
                    pcStack_b18 = pcVar10;
                    ppuStack_b10 = &puStack_a50;
                    func_0x000107c35410();
                    func_0x00010b286cf4();
                    func_0x000107c35450();
                    func_0x000107c354ac();
                    func_0x000107c35434();
                    func_0x000107c35494();
                    func_0x000107c354bc();
                    do {
                      func_0x000107c354a0();
                      func_0x000107c354a8();
                    } while (!(bool)in_ZR);
                    func_0x000107c35428();
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286dc8();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    uStack_bc0 = 0x78;
                    pcStack_ba8 = FUN_10b28681c;
                    puStack_bd0 = puVar2;
                    puStack_bc8 = puVar4;
                    puStack_bb8 = puVar6;
                    pppuStack_bb0 = &ppuStack_b10;
                    func_0x000107c35410();
                    func_0x000107c35448();
                    func_0x000107c354ac();
                    func_0x000107c35434();
                    func_0x000107c35494();
                    func_0x000107c354b4();
                    do {
                      func_0x000107c354a0();
                      func_0x000107c354a8();
                    } while (!(bool)in_ZR);
                    func_0x000107c35428();
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286dbc();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    pcVar10 = FUN_10b286894;
                    func_0x000107c354dc();
                    ppppuStack_b50 = &pppuStack_bb0;
                    pcStack_b48 = pcVar10;
                    func_0x000107c35440();
                    uStack_b98 = extraout_x8_12;
                    func_0x000107c35474();
                    (*extraout_x8_13)();
                    if (param_1 != 0) {
                      func_0x000107c3543c();
                      func_0x000107c35488();
                      func_0x00010b286d80();
                      func_0x000107c35484();
                      func_0x000107c35494();
                      func_0x000107c354d4();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                    }
                    func_0x000107c35430(uStack_b98);
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286df0();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    pcVar10 = FUN_10b286940;
                    func_0x000107c354e4();
                    param_4 = puVar3;
                    puVar2 = puVar8;
                    pppppuStack_b70 = &ppppuStack_b50;
                    pcStack_b68 = pcVar10;
                    func_0x000107c3541c();
                    (*extraout_x8_14)();
                    if (param_1 != 0) {
                      func_0x000107c35420();
                      func_0x000107c35454();
                      func_0x00010b286d80();
                      func_0x000107c35484();
                      func_0x000107c35494();
                      func_0x000107c354c4();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                    }
                    func_0x000107c35430(pcStack_ba8);
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286dd4();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    uStack_c50 = 0x78;
                    pcStack_c38 = FUN_10b2869e0;
                    puVar4 = puVar2;
                    puStack_c60 = puVar3;
                    puStack_c58 = puVar8;
                    pcStack_c48 = pcVar12;
                    ppppppuStack_c40 = &pppppuStack_b70;
                    func_0x000107c35410();
                    func_0x00010b286cf4();
                    func_0x000107c35450();
                    func_0x000107c354ac();
                    func_0x000107c35434();
                    func_0x000107c35494();
                    func_0x000107c354bc();
                    do {
                      func_0x000107c354a0();
                      func_0x000107c354a8();
                    } while (!(bool)in_ZR);
                    func_0x000107c35428();
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286dc8();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    puVar1 = auStack_d60;
                    uStack_cf0 = 0x78;
                    pcStack_cd8 = FUN_10b286a5c;
                    puStack_d00 = puVar3;
                    puStack_cf8 = puVar8;
                    puStack_ce8 = puVar2;
                    pppppppuStack_ce0 = &ppppppuStack_c40;
                    func_0x000107c35410();
                    func_0x000107c35448();
                    func_0x000107c354ac();
                    puVar2 = (undefined8 *)&UNK_110cceed8;
                    func_0x000107c35434();
                    func_0x000107c35494();
                    func_0x000107c354b4();
                    do {
                      func_0x000107c354a0();
                      func_0x000107c354a8();
                    } while (!(bool)in_ZR);
                    func_0x000107c35428();
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286dbc();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    pcVar10 = FUN_10b286ad4;
                    func_0x000107c354e0();
                    pppppppuStack_cc0 = &pppppppuStack_ce0;
                    pcStack_cb8 = pcVar10;
                    func_0x000107c3541c();
                    (*extraout_x8_15)();
                    if (param_1 == 0) {
                      func_0x000107c35430(puStack_cf8);
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dc8();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      uStack_d80 = 0x78;
                      pcStack_d68 = FUN_10b286b70;
                      puStack_d90 = param_3;
                      puStack_d88 = param_4;
                      puStack_d78 = puVar4;
                      pppppppuStack_d70 = &pppppppuStack_cc0;
                      func_0x000107c3542c();
                      (*extraout_x8_16)();
                      if (param_1 != 0) {
                        func_0x00010b286d10();
                        func_0x000107c35448();
                        func_0x000107c354ac();
                        func_0x000107c35434();
                        func_0x000107c35494();
                        func_0x000107c354b4();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                      }
                      func_0x000107c35428();
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dbc();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      uStack_e10 = 0x78;
                      pcStack_df8 = FUN_10b286bf8;
                      puStack_e20 = param_3;
                      puStack_e18 = param_4;
                      puStack_e08 = puVar4;
                      pppppppuStack_e00 = &pppppppuStack_d70;
                      func_0x000107c35410();
                      func_0x000107c35448();
                      func_0x000107c354ac();
                      func_0x000107c35434();
                      func_0x000107c35494();
                      func_0x000107c354b4();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                      func_0x000107c35428();
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dbc();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      puVar1 = auStack_e80;
                    }
                  }
                }
              }
              goto FUN_10b286c70;
            }
          }
          return;
        }
FUN_10b286c70:
        uVar13 = *puVar2;
        *(undefined8 *)(puVar1 + 0x28) = puVar2[1];
        *(undefined8 *)(puVar1 + 0x20) = uVar13;
        *(undefined8 *)(puVar1 + 0x30) = puVar2[2];
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        uVar13 = *param_3;
        *(undefined8 *)(puVar1 + 0x40) = param_3[1];
        *(undefined8 *)(puVar1 + 0x38) = uVar13;
        *(undefined8 *)(puVar1 + 0x48) = param_3[2];
        *param_3 = 0;
        param_3[1] = 0;
        param_3[2] = 0;
        *(undefined8 *)(puVar1 + 0x60) = param_4[2];
        uVar13 = *param_4;
        *(undefined8 *)(puVar1 + 0x58) = param_4[1];
        *(undefined8 *)(puVar1 + 0x50) = uVar13;
        param_4[1] = 0;
        param_4[2] = 0;
        *param_4 = 0;
        return;
      }
    }
  }
  return;
}



/* Entry: 10b285a58; end: 10b285ad3;  */

/* WARNING: Possible PIC construction at 0x00010b285e20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b28617c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286b0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b28643c) */
/* WARNING: Removing unreachable block (ram,0x00010b286458) */
/* WARNING: Removing unreachable block (ram,0x00010b28621c) */
/* WARNING: Removing unreachable block (ram,0x00010b286238) */
/* WARNING: Removing unreachable block (ram,0x00010b286180) */
/* WARNING: Removing unreachable block (ram,0x00010b28619c) */
/* WARNING: Removing unreachable block (ram,0x00010b285e24) */
/* WARNING: Removing unreachable block (ram,0x00010b285e40) */
/* WARNING: Removing unreachable block (ram,0x00010b286b10) */
/* WARNING: Removing unreachable block (ram,0x00010b286b2c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10b285a58(int param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  undefined8 extraout_x8_07;
  code *extraout_x8_08;
  undefined8 extraout_x8_09;
  code *extraout_x8_10;
  code *extraout_x8_11;
  undefined8 extraout_x8_12;
  code *extraout_x8_13;
  code *extraout_x8_14;
  code *extraout_x8_15;
  code *extraout_x8_16;
  undefined8 unaff_x21;
  undefined8 uVar13;
  undefined1 auStack_df0 [96];
  undefined8 *puStack_d90;
  undefined8 *puStack_d88;
  undefined8 uStack_d80;
  undefined8 *puStack_d78;
  undefined8 *******pppppppuStack_d70;
  code *pcStack_d68;
  undefined8 *puStack_d00;
  undefined8 *puStack_cf8;
  undefined8 uStack_cf0;
  undefined8 *puStack_ce8;
  undefined8 *******pppppppuStack_ce0;
  code *pcStack_cd8;
  undefined1 auStack_cd0 [96];
  undefined8 *puStack_c70;
  undefined8 *puStack_c68;
  undefined8 uStack_c60;
  undefined8 *puStack_c58;
  undefined1 *******pppppppuStack_c50;
  code *pcStack_c48;
  undefined8 *******pppppppuStack_c30;
  code *pcStack_c28;
  undefined8 *puStack_bd0;
  undefined8 *puStack_bc8;
  undefined8 uStack_bc0;
  code *pcStack_bb8;
  undefined1 ******ppppppuStack_bb0;
  code *pcStack_ba8;
  undefined8 *puStack_b40;
  undefined8 *puStack_b38;
  undefined8 uStack_b30;
  undefined8 *puStack_b28;
  undefined1 ***pppuStack_b20;
  code *pcStack_b18;
  undefined8 uStack_b08;
  undefined1 *****pppppuStack_ae0;
  code *pcStack_ad8;
  undefined1 ****ppppuStack_ac0;
  code *pcStack_ab8;
  undefined8 *puStack_aa0;
  undefined8 *puStack_a98;
  undefined8 uStack_a90;
  code *pcStack_a88;
  undefined1 **ppuStack_a80;
  code *pcStack_a78;
  undefined8 *puStack_9e0;
  undefined8 *puStack_9d8;
  undefined8 uStack_9d0;
  code *pcStack_9c8;
  undefined1 *puStack_9c0;
  code *pcStack_9b8;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_8f8;
  undefined1 auStack_890 [104];
  undefined8 uStack_828;
  undefined8 *puStack_800;
  undefined8 *puStack_7f8;
  undefined1 ****ppppuStack_7f0;
  code *pcStack_7e8;
  undefined1 ***pppuStack_7e0;
  code *pcStack_7d8;
  undefined8 *puStack_770;
  undefined8 *puStack_768;
  undefined8 *puStack_760;
  undefined8 *puStack_758;
  undefined1 **ppuStack_750;
  code *pcStack_748;
  undefined8 *puStack_6e0;
  undefined8 *puStack_6d8;
  undefined8 *puStack_6d0;
  undefined8 *puStack_6c8;
  undefined1 *puStack_6c0;
  code *pcStack_6b8;
  undefined1 auStack_6b0 [104];
  undefined8 uStack_648;
  undefined8 *puStack_640;
  undefined8 *puStack_638;
  undefined8 *puStack_630;
  code *pcStack_628;
  undefined8 *******pppppppuStack_620;
  code *pcStack_618;
  undefined8 *******pppppppuStack_610;
  code *pcStack_608;
  undefined8 *******pppppppuStack_5f0;
  code *pcStack_5e8;
  undefined8 *puStack_580;
  undefined8 *puStack_578;
  undefined8 *puStack_570;
  undefined8 *puStack_568;
  undefined8 *******pppppppuStack_560;
  code *pcStack_558;
  undefined8 *puStack_4f0;
  undefined8 *puStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 *******pppppppuStack_4d0;
  code *pcStack_4c8;
  undefined1 auStack_4c0 [96];
  undefined1 ******ppppppuStack_440;
  code *pcStack_438;
  undefined1 *******pppppppuStack_420;
  code *pcStack_418;
  undefined1 *****pppppuStack_3a0;
  code *pcStack_398;
  undefined1 ****ppppuStack_2e0;
  code *pcStack_2d8;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  
  func_0x000107c35410();
  func_0x00010b286cf4();
  func_0x000107c35450();
  func_0x000107c354ac();
  func_0x000107c35434();
  func_0x000107c35494();
  func_0x000107c354bc();
  do {
    func_0x000107c354a0();
    func_0x000107c354a8();
  } while (!(bool)in_ZR);
  func_0x000107c35428();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286dc8();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcStack_a8 = FUN_10b285ad4;
    puStack_b0 = &stack0xfffffffffffffff0;
    func_0x000107c35438();
    func_0x000107c35414();
    func_0x000107c35444();
    func_0x000107c35454();
    func_0x000107c35460();
    func_0x000107c35490();
    func_0x000107c35494();
    func_0x000107c354c4();
    do {
      func_0x000107c354a0();
      func_0x000107c354a8();
    } while (!(bool)in_ZR);
    func_0x000107c35428();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286dd4();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcStack_168 = FUN_10b285b58;
    puVar3 = param_5;
    ppuStack_170 = &puStack_b0;
    func_0x000107c35438();
    func_0x000107c35414();
    func_0x000107c35450();
    func_0x000107c35460();
    func_0x000107c35490();
    func_0x000107c35494();
    func_0x000107c354bc();
    do {
      func_0x000107c354a0();
      func_0x000107c354a8();
    } while (!(bool)in_ZR);
    func_0x000107c35428();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b286d60();
      func_0x00010b286dc8();
      do {
        func_0x00010b286da8();
        func_0x00010b286db0();
      } while (!(bool)in_ZR);
      func_0x00010b286da0();
      pcStack_208 = FUN_10b285bd8;
      pppuStack_210 = &ppuStack_170;
      func_0x000107c35410();
      func_0x00010b286cc0();
      uStack_248 = param_6[1];
      uStack_250 = *param_6;
      uStack_240 = param_6[2];
      param_6[1] = 0;
      param_6[2] = 0;
      *param_6 = 0;
      func_0x000107c35488();
      func_0x000107c354ac();
      func_0x000107c35434();
      func_0x000107c35494();
      func_0x000107c354d4();
      do {
        func_0x000107c354a0();
        func_0x000107c354a8();
      } while (!(bool)in_ZR);
      func_0x000107c35428();
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010b286d60();
      func_0x00010b286df0();
      do {
        func_0x00010b286da8();
        func_0x00010b286db0();
      } while (!(bool)in_ZR);
      func_0x00010b286da0();
      pcStack_2d8 = FUN_10b285c78;
      ppppuStack_2e0 = &pppuStack_210;
      func_0x000107c35410();
      func_0x00010b286cc0();
      func_0x000107c35454();
      func_0x000107c354ac();
      func_0x000107c35434();
      func_0x000107c35494();
      func_0x000107c354c4();
      do {
        func_0x000107c354a0();
        func_0x000107c354a8();
      } while (!(bool)in_ZR);
      func_0x000107c35428();
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010b286d60();
      func_0x00010b286dd4();
      do {
        func_0x00010b286da8();
        func_0x00010b286db0();
      } while (!(bool)in_ZR);
      func_0x00010b286da0();
      pcStack_398 = FUN_10b285cf4;
      pppppuStack_3a0 = &ppppuStack_2e0;
      func_0x000107c35410();
      func_0x00010b286cf4();
      func_0x000107c35450();
      func_0x000107c354ac();
      func_0x000107c35434();
      func_0x000107c35494();
      func_0x000107c354bc();
      do {
        func_0x000107c354a0();
        func_0x000107c354a8();
      } while (!(bool)in_ZR);
      func_0x000107c35428();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010b286d60();
        func_0x00010b286dc8();
        do {
          func_0x00010b286da8();
          func_0x00010b286db0();
        } while (!(bool)in_ZR);
        func_0x00010b286da0();
        pcStack_438 = FUN_10b285d70;
        ppppppuStack_440 = &pppppuStack_3a0;
        func_0x000107c35410();
        func_0x000107c35448();
        func_0x000107c354ac();
        puVar2 = (undefined8 *)&UNK_110cce4d8;
        func_0x000107c35434();
        func_0x000107c35494();
        func_0x000107c354b4();
        do {
          func_0x000107c354a0();
          func_0x000107c354a8();
        } while (!(bool)in_ZR);
        func_0x000107c35428();
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x00010b286d60();
        func_0x00010b286dbc();
        do {
          func_0x00010b286da8();
          func_0x00010b286db0();
        } while (!(bool)in_ZR);
        func_0x00010b286da0();
        pcVar10 = FUN_10b285de8;
        func_0x000107c354e0();
        puVar4 = param_3;
        puVar6 = param_4;
        puVar8 = puVar3;
        pppppppuStack_420 = &ppppppuStack_440;
        pcStack_418 = pcVar10;
        func_0x000107c3541c();
        (*extraout_x8)();
        puVar1 = auStack_4c0;
        if (param_1 == 0) {
          func_0x000107c35430(unaff_x21);
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          func_0x00010b286d60();
          func_0x00010b286dc8();
          do {
            func_0x00010b286da8();
            func_0x00010b286db0();
          } while (!(bool)in_ZR);
          func_0x00010b286da0();
          pcStack_4c8 = FUN_10b285e84;
          puStack_4f0 = param_3;
          puStack_4e8 = param_4;
          puStack_4e0 = param_5;
          puStack_4d8 = puVar3;
          pppppppuStack_4d0 = &pppppppuStack_420;
          func_0x000107c3542c();
          (*extraout_x8_00)();
          if (param_1 != 0) {
            func_0x00010b286d10();
            func_0x000107c35448();
            func_0x000107c354ac();
            func_0x000107c35434();
            func_0x000107c35494();
            func_0x000107c354b4();
            do {
              func_0x000107c354a0();
              func_0x000107c354a8();
            } while (!(bool)in_ZR);
          }
          func_0x000107c35428();
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          func_0x00010b286d60();
          func_0x00010b286dbc();
          do {
            func_0x00010b286da8();
            func_0x00010b286db0();
          } while (!(bool)in_ZR);
          func_0x00010b286da0();
          pcStack_558 = FUN_10b285f0c;
          puStack_580 = param_3;
          puStack_578 = param_4;
          puStack_570 = param_5;
          puStack_568 = puVar3;
          pppppppuStack_560 = &pppppppuStack_4d0;
          func_0x000107c35410();
          func_0x00010b286cc0();
          func_0x000107c35454();
          func_0x000107c354ac();
          func_0x000107c35434();
          func_0x000107c35494();
          func_0x000107c354c4();
          do {
            func_0x000107c354a0();
            func_0x000107c354a8();
          } while (!(bool)in_ZR);
          func_0x000107c35428();
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          func_0x00010b286d60();
          func_0x00010b286dd4();
          do {
            func_0x00010b286da8();
            func_0x00010b286db0();
          } while (!(bool)in_ZR);
          func_0x00010b286da0();
          pcStack_618 = FUN_10b285f88;
          puStack_640 = param_3;
          puStack_638 = param_4;
          puStack_630 = param_5;
          pcStack_628 = pcVar10;
          pppppppuStack_620 = &pppppppuStack_560;
          func_0x000107c35410();
          func_0x00010b286cf4();
          func_0x000107c35450();
          func_0x000107c354ac();
          func_0x000107c35434();
          func_0x000107c35494();
          func_0x000107c354bc();
          do {
            func_0x000107c354a0();
            func_0x000107c354a8();
          } while (!(bool)in_ZR);
          func_0x000107c35428();
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          func_0x00010b286d60();
          func_0x00010b286dc8();
          do {
            func_0x00010b286da8();
            func_0x00010b286db0();
          } while (!(bool)in_ZR);
          func_0x00010b286da0();
          pcVar10 = FUN_10b286004;
          func_0x000107c354e4();
          pppppppuStack_5f0 = &pppppppuStack_620;
          pcStack_5e8 = pcVar10;
          func_0x000107c3541c();
          (*extraout_x8_01)();
          if (param_1 != 0) {
            func_0x000107c35420();
            func_0x000107c35454();
            func_0x00010b286d80();
            func_0x000107c35484();
            func_0x000107c35494();
            func_0x000107c354c4();
            do {
              func_0x000107c354a0();
              func_0x000107c354a8();
            } while (!(bool)in_ZR);
          }
          func_0x000107c35430(pcStack_628);
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286dd4();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            pcVar10 = FUN_10b2860a4;
            func_0x000107c354e4();
            pppppppuStack_5f0 = &pppppppuStack_5f0;
            pcStack_5e8 = pcVar10;
            func_0x000107c3541c();
            puVar2 = (undefined8 *)&UNK_110cce7f8;
            (*extraout_x8_02)();
            if (param_1 != 0) {
              func_0x000107c35420();
              func_0x000107c35454();
              func_0x00010b286d48();
              puVar2 = (undefined8 *)&UNK_110cce7f8;
              func_0x00010b286d94();
              func_0x000107c35494();
              func_0x000107c354c4();
              do {
                func_0x000107c354a0();
                func_0x000107c354a8();
              } while (!(bool)in_ZR);
            }
            func_0x000107c35430(pcStack_628);
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dd4();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              pcVar10 = FUN_10b286144;
              func_0x000107c354e0();
              puVar5 = puVar4;
              puVar7 = puVar6;
              pppppppuStack_610 = &pppppppuStack_5f0;
              pcStack_608 = pcVar10;
              func_0x000107c3541c();
              puVar3 = (undefined8 *)&UNK_110cce848;
              (*extraout_x8_03)();
              puVar1 = auStack_6b0;
              param_4 = puVar6;
              param_3 = puVar4;
              if (param_1 == 0) {
                func_0x000107c35430(uStack_648);
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x00010b286d60();
                func_0x00010b286dc8();
                do {
                  func_0x00010b286da8();
                  func_0x00010b286db0();
                } while (!(bool)in_ZR);
                func_0x00010b286da0();
                pcVar10 = FUN_10b2861e0;
                func_0x000107c354e0();
                puVar4 = puVar5;
                puVar6 = puVar7;
                puVar9 = puVar8;
                pppppppuStack_610 = &pppppppuStack_610;
                pcStack_608 = pcVar10;
                func_0x000107c3541c();
                (*extraout_x8_04)();
                puVar1 = auStack_6b0;
                param_4 = puVar7;
                param_3 = puVar5;
                puVar2 = puVar3;
                if (param_1 == 0) {
                  func_0x000107c35430(uStack_648);
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  func_0x00010b286dc8();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  pcStack_6b8 = FUN_10b28627c;
                  puStack_6e0 = puVar5;
                  puStack_6d8 = puVar7;
                  puStack_6d0 = param_5;
                  puStack_6c8 = puVar8;
                  puStack_6c0 = (undefined1 *)&pppppppuStack_610;
                  func_0x000107c3542c();
                  (*extraout_x8_05)();
                  if (param_1 != 0) {
                    func_0x00010b286d10();
                    func_0x000107c35448();
                    func_0x000107c354ac();
                    func_0x000107c35434();
                    func_0x000107c35494();
                    func_0x000107c354b4();
                    do {
                      func_0x000107c354a0();
                      func_0x000107c354a8();
                    } while (!(bool)in_ZR);
                  }
                  func_0x000107c35428();
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  func_0x00010b286dbc();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  pcStack_748 = FUN_10b286304;
                  param_4 = puVar6;
                  puStack_770 = puVar5;
                  puStack_768 = puVar7;
                  puStack_760 = param_5;
                  puStack_758 = puVar8;
                  ppuStack_750 = &puStack_6c0;
                  func_0x000107c35410();
                  func_0x000107c35448();
                  func_0x000107c354ac();
                  func_0x000107c35434();
                  func_0x000107c35494();
                  func_0x000107c354b4();
                  do {
                    func_0x000107c354a0();
                    func_0x000107c354a8();
                  } while (!(bool)in_ZR);
                  func_0x000107c35428();
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  func_0x00010b286dbc();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  puVar1 = auStack_890;
                  pcStack_7d8 = FUN_10b28637c;
                  puStack_800 = puVar5;
                  puStack_7f8 = puVar7;
                  ppppuStack_7f0 = (undefined1 ****)param_5;
                  pcStack_7e8 = (code *)puVar6;
                  pppuStack_7e0 = &ppuStack_750;
                  func_0x000107c35438();
                  func_0x000107c35414();
                  func_0x000107c35444();
                  func_0x000107c35454();
                  func_0x000107c35460();
                  puVar2 = (undefined8 *)&UNK_110ccea28;
                  func_0x000107c35490();
                  func_0x000107c35494();
                  func_0x000107c354c4();
                  do {
                    func_0x000107c354a0();
                    func_0x000107c354a8();
                  } while (!(bool)in_ZR);
                  func_0x000107c35428();
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  func_0x00010b286dd4();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  pcVar10 = FUN_10b286400;
                  func_0x000107c354e0();
                  puVar6 = puVar4;
                  puVar8 = param_4;
                  ppppuStack_7f0 = &pppuStack_7e0;
                  pcStack_7e8 = pcVar10;
                  func_0x000107c3541c();
                  puVar3 = (undefined8 *)&UNK_110ccea78;
                  (*extraout_x8_06)();
                  param_3 = puVar4;
                  if (param_1 == 0) {
                    func_0x000107c35430(uStack_828);
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286dc8();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    param_3 = puVar6;
                    puVar2 = puVar8;
                    puVar4 = puVar9;
                    pcVar11 = pcVar10;
                    func_0x000107c35440();
                    uStack_8f8 = extraout_x8_07;
                    func_0x000107c35474();
                    (*extraout_x8_08)();
                    if (param_1 != 0) {
                      uStack_988 = puVar3[1];
                      uStack_990 = *puVar3;
                      uStack_980 = puVar3[2];
                      puVar3[1] = 0;
                      puVar3[2] = 0;
                      *puVar3 = 0;
                      uStack_970 = puVar6[1];
                      uStack_978 = *puVar6;
                      uStack_968 = puVar6[2];
                      puVar6[1] = 0;
                      puVar6[2] = 0;
                      *puVar6 = 0;
                      uStack_958 = puVar8[1];
                      uStack_960 = *puVar8;
                      uStack_950 = puVar8[2];
                      puVar8[1] = 0;
                      puVar8[2] = 0;
                      *puVar8 = 0;
                      uStack_940 = puVar9[1];
                      uStack_948 = *puVar9;
                      uStack_938 = puVar9[2];
                      *puVar9 = 0;
                      puVar9[1] = 0;
                      puVar9[2] = 0;
                      uStack_928 = *(undefined8 *)(pcVar10 + 8);
                      uStack_930 = *(undefined8 *)pcVar10;
                      uStack_920 = *(undefined8 *)(pcVar10 + 0x10);
                      func_0x00010b286d6c();
                      func_0x00010b286dfc();
                      func_0x00010b286de0();
                      func_0x00010b286d80();
                      func_0x000107c35484();
                      func_0x000107c35494();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                    }
                    func_0x000107c35430(uStack_8f8);
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    func_0x000107c354dc();
                    func_0x000107c35440();
                    uStack_918 = extraout_x8_09;
                    func_0x000107c35474();
                    (*extraout_x8_10)();
                    if (param_1 != 0) {
                      func_0x000107c3543c();
                      func_0x000107c35488();
                      func_0x00010b286d80();
                      func_0x000107c35484();
                      func_0x000107c35494();
                      func_0x000107c354d4();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                    }
                    func_0x000107c35430(uStack_918);
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286df0();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    func_0x000107c354e4();
                    puVar3 = puVar2;
                    puVar6 = puVar4;
                    pcVar10 = pcVar11;
                    func_0x000107c3541c();
                    (*extraout_x8_11)();
                    if (param_1 != 0) {
                      func_0x000107c35420();
                      func_0x000107c35454();
                      func_0x00010b286d80();
                      func_0x000107c35484();
                      func_0x000107c35494();
                      func_0x000107c354c4();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                    }
                    func_0x000107c35430(uStack_928);
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286dd4();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    uStack_9d0 = 0x78;
                    pcStack_9b8 = FUN_10b286724;
                    pcVar12 = pcVar10;
                    puStack_9e0 = puVar2;
                    puStack_9d8 = puVar4;
                    pcStack_9c8 = pcVar11;
                    puStack_9c0 = &stack0xfffffffffffff710;
                    func_0x000107c35410();
                    func_0x00010b286cc0();
                    func_0x000107c35454();
                    func_0x000107c354ac();
                    func_0x000107c35434();
                    func_0x000107c35494();
                    func_0x000107c354c4();
                    do {
                      func_0x000107c354a0();
                      func_0x000107c354a8();
                    } while (!(bool)in_ZR);
                    func_0x000107c35428();
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286dd4();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    uStack_a90 = 0x78;
                    pcStack_a78 = FUN_10b2867a0;
                    puVar8 = puVar6;
                    puStack_aa0 = puVar2;
                    puStack_a98 = puVar4;
                    pcStack_a88 = pcVar10;
                    ppuStack_a80 = &puStack_9c0;
                    func_0x000107c35410();
                    func_0x00010b286cf4();
                    func_0x000107c35450();
                    func_0x000107c354ac();
                    func_0x000107c35434();
                    func_0x000107c35494();
                    func_0x000107c354bc();
                    do {
                      func_0x000107c354a0();
                      func_0x000107c354a8();
                    } while (!(bool)in_ZR);
                    func_0x000107c35428();
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286dc8();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    uStack_b30 = 0x78;
                    pcStack_b18 = FUN_10b28681c;
                    puStack_b40 = puVar2;
                    puStack_b38 = puVar4;
                    puStack_b28 = puVar6;
                    pppuStack_b20 = &ppuStack_a80;
                    func_0x000107c35410();
                    func_0x000107c35448();
                    func_0x000107c354ac();
                    func_0x000107c35434();
                    func_0x000107c35494();
                    func_0x000107c354b4();
                    do {
                      func_0x000107c354a0();
                      func_0x000107c354a8();
                    } while (!(bool)in_ZR);
                    func_0x000107c35428();
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286dbc();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    pcVar10 = FUN_10b286894;
                    func_0x000107c354dc();
                    ppppuStack_ac0 = &pppuStack_b20;
                    pcStack_ab8 = pcVar10;
                    func_0x000107c35440();
                    uStack_b08 = extraout_x8_12;
                    func_0x000107c35474();
                    (*extraout_x8_13)();
                    if (param_1 != 0) {
                      func_0x000107c3543c();
                      func_0x000107c35488();
                      func_0x00010b286d80();
                      func_0x000107c35484();
                      func_0x000107c35494();
                      func_0x000107c354d4();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                    }
                    func_0x000107c35430(uStack_b08);
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286df0();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    pcVar10 = FUN_10b286940;
                    func_0x000107c354e4();
                    param_4 = puVar3;
                    puVar2 = puVar8;
                    pppppuStack_ae0 = &ppppuStack_ac0;
                    pcStack_ad8 = pcVar10;
                    func_0x000107c3541c();
                    (*extraout_x8_14)();
                    if (param_1 != 0) {
                      func_0x000107c35420();
                      func_0x000107c35454();
                      func_0x00010b286d80();
                      func_0x000107c35484();
                      func_0x000107c35494();
                      func_0x000107c354c4();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                    }
                    func_0x000107c35430(pcStack_b18);
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286dd4();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    uStack_bc0 = 0x78;
                    pcStack_ba8 = FUN_10b2869e0;
                    puVar4 = puVar2;
                    puStack_bd0 = puVar3;
                    puStack_bc8 = puVar8;
                    pcStack_bb8 = pcVar12;
                    ppppppuStack_bb0 = &pppppuStack_ae0;
                    func_0x000107c35410();
                    func_0x00010b286cf4();
                    func_0x000107c35450();
                    func_0x000107c354ac();
                    func_0x000107c35434();
                    func_0x000107c35494();
                    func_0x000107c354bc();
                    do {
                      func_0x000107c354a0();
                      func_0x000107c354a8();
                    } while (!(bool)in_ZR);
                    func_0x000107c35428();
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286dc8();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    puVar1 = auStack_cd0;
                    uStack_c60 = 0x78;
                    pcStack_c48 = FUN_10b286a5c;
                    puStack_c70 = puVar3;
                    puStack_c68 = puVar8;
                    puStack_c58 = puVar2;
                    pppppppuStack_c50 = &ppppppuStack_bb0;
                    func_0x000107c35410();
                    func_0x000107c35448();
                    func_0x000107c354ac();
                    puVar2 = (undefined8 *)&UNK_110cceed8;
                    func_0x000107c35434();
                    func_0x000107c35494();
                    func_0x000107c354b4();
                    do {
                      func_0x000107c354a0();
                      func_0x000107c354a8();
                    } while (!(bool)in_ZR);
                    func_0x000107c35428();
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286dbc();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    pcVar10 = FUN_10b286ad4;
                    func_0x000107c354e0();
                    pppppppuStack_c30 = &pppppppuStack_c50;
                    pcStack_c28 = pcVar10;
                    func_0x000107c3541c();
                    (*extraout_x8_15)();
                    if (param_1 == 0) {
                      func_0x000107c35430(puStack_c68);
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dc8();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      uStack_cf0 = 0x78;
                      pcStack_cd8 = FUN_10b286b70;
                      puStack_d00 = param_3;
                      puStack_cf8 = param_4;
                      puStack_ce8 = puVar4;
                      pppppppuStack_ce0 = &pppppppuStack_c30;
                      func_0x000107c3542c();
                      (*extraout_x8_16)();
                      if (param_1 != 0) {
                        func_0x00010b286d10();
                        func_0x000107c35448();
                        func_0x000107c354ac();
                        func_0x000107c35434();
                        func_0x000107c35494();
                        func_0x000107c354b4();
                        do {
                          func_0x000107c354a0();
                          func_0x000107c354a8();
                        } while (!(bool)in_ZR);
                      }
                      func_0x000107c35428();
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dbc();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      uStack_d80 = 0x78;
                      pcStack_d68 = FUN_10b286bf8;
                      puStack_d90 = param_3;
                      puStack_d88 = param_4;
                      puStack_d78 = puVar4;
                      pppppppuStack_d70 = &pppppppuStack_ce0;
                      func_0x000107c35410();
                      func_0x000107c35448();
                      func_0x000107c354ac();
                      func_0x000107c35434();
                      func_0x000107c35494();
                      func_0x000107c354b4();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                      func_0x000107c35428();
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x00010b286d60();
                      func_0x00010b286dbc();
                      do {
                        func_0x00010b286da8();
                        func_0x00010b286db0();
                      } while (!(bool)in_ZR);
                      func_0x00010b286da0();
                      puVar1 = auStack_df0;
                    }
                  }
                }
              }
              goto FUN_10b286c70;
            }
          }
          return;
        }
FUN_10b286c70:
        uVar13 = *puVar2;
        *(undefined8 *)(puVar1 + 0x28) = puVar2[1];
        *(undefined8 *)(puVar1 + 0x20) = uVar13;
        *(undefined8 *)(puVar1 + 0x30) = puVar2[2];
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        uVar13 = *param_3;
        *(undefined8 *)(puVar1 + 0x40) = param_3[1];
        *(undefined8 *)(puVar1 + 0x38) = uVar13;
        *(undefined8 *)(puVar1 + 0x48) = param_3[2];
        *param_3 = 0;
        param_3[1] = 0;
        param_3[2] = 0;
        *(undefined8 *)(puVar1 + 0x60) = param_4[2];
        uVar13 = *param_4;
        *(undefined8 *)(puVar1 + 0x58) = param_4[1];
        *(undefined8 *)(puVar1 + 0x50) = uVar13;
        param_4[1] = 0;
        param_4[2] = 0;
        *param_4 = 0;
        return;
      }
    }
  }
  return;
}



/* Entry: 10b285ad4; end: 10b285b57;  */

/* WARNING: Possible PIC construction at 0x00010b285e20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b28617c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286b0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b28643c) */
/* WARNING: Removing unreachable block (ram,0x00010b286458) */
/* WARNING: Removing unreachable block (ram,0x00010b28621c) */
/* WARNING: Removing unreachable block (ram,0x00010b286238) */
/* WARNING: Removing unreachable block (ram,0x00010b286180) */
/* WARNING: Removing unreachable block (ram,0x00010b28619c) */
/* WARNING: Removing unreachable block (ram,0x00010b285e24) */
/* WARNING: Removing unreachable block (ram,0x00010b285e40) */
/* WARNING: Removing unreachable block (ram,0x00010b286b10) */
/* WARNING: Removing unreachable block (ram,0x00010b286b2c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10b285ad4(int param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  undefined8 extraout_x8_07;
  code *extraout_x8_08;
  undefined8 extraout_x8_09;
  code *extraout_x8_10;
  code *extraout_x8_11;
  undefined8 extraout_x8_12;
  code *extraout_x8_13;
  code *extraout_x8_14;
  code *extraout_x8_15;
  code *extraout_x8_16;
  undefined8 unaff_x21;
  undefined8 uVar13;
  undefined1 auStack_d50 [96];
  undefined8 *puStack_cf0;
  undefined8 *puStack_ce8;
  undefined8 uStack_ce0;
  undefined8 *puStack_cd8;
  undefined8 *******pppppppuStack_cd0;
  code *pcStack_cc8;
  undefined8 *puStack_c60;
  undefined8 *puStack_c58;
  undefined8 uStack_c50;
  undefined8 *puStack_c48;
  undefined8 *******pppppppuStack_c40;
  code *pcStack_c38;
  undefined1 auStack_c30 [96];
  undefined8 *puStack_bd0;
  undefined8 *puStack_bc8;
  undefined8 uStack_bc0;
  undefined8 *puStack_bb8;
  undefined1 *******pppppppuStack_bb0;
  code *pcStack_ba8;
  undefined8 *******pppppppuStack_b90;
  code *pcStack_b88;
  undefined8 *puStack_b30;
  undefined8 *puStack_b28;
  undefined8 uStack_b20;
  code *pcStack_b18;
  undefined1 ******ppppppuStack_b10;
  code *pcStack_b08;
  undefined8 *puStack_aa0;
  undefined8 *puStack_a98;
  undefined8 uStack_a90;
  undefined8 *puStack_a88;
  undefined1 ***pppuStack_a80;
  code *pcStack_a78;
  undefined8 uStack_a68;
  undefined1 *****pppppuStack_a40;
  code *pcStack_a38;
  undefined1 ****ppppuStack_a20;
  code *pcStack_a18;
  undefined8 *puStack_a00;
  undefined8 *puStack_9f8;
  undefined8 uStack_9f0;
  code *pcStack_9e8;
  undefined1 **ppuStack_9e0;
  code *pcStack_9d8;
  undefined8 *puStack_940;
  undefined8 *puStack_938;
  undefined8 uStack_930;
  code *pcStack_928;
  undefined1 *puStack_920;
  code *pcStack_918;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_858;
  undefined1 auStack_7f0 [104];
  undefined8 uStack_788;
  undefined8 *puStack_760;
  undefined8 *puStack_758;
  undefined1 ****ppppuStack_750;
  code *pcStack_748;
  undefined1 ***pppuStack_740;
  code *pcStack_738;
  undefined8 *puStack_6d0;
  undefined8 *puStack_6c8;
  undefined8 *puStack_6c0;
  undefined8 *puStack_6b8;
  undefined1 **ppuStack_6b0;
  code *pcStack_6a8;
  undefined8 *puStack_640;
  undefined8 *puStack_638;
  undefined8 *puStack_630;
  undefined8 *puStack_628;
  undefined1 *puStack_620;
  code *pcStack_618;
  undefined1 auStack_610 [104];
  undefined8 uStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 *puStack_598;
  undefined8 *puStack_590;
  code *pcStack_588;
  undefined8 *******pppppppuStack_580;
  code *pcStack_578;
  undefined8 *******pppppppuStack_570;
  code *pcStack_568;
  undefined8 *******pppppppuStack_550;
  code *pcStack_548;
  undefined8 *puStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 *puStack_4d0;
  undefined8 *puStack_4c8;
  undefined8 *******pppppppuStack_4c0;
  code *pcStack_4b8;
  undefined8 *puStack_450;
  undefined8 *puStack_448;
  undefined8 *puStack_440;
  undefined8 *puStack_438;
  undefined1 *******pppppppuStack_430;
  code *pcStack_428;
  undefined1 auStack_420 [96];
  undefined1 *****pppppuStack_3a0;
  code *pcStack_398;
  undefined1 ******ppppppuStack_380;
  code *pcStack_378;
  undefined1 ****ppppuStack_300;
  code *pcStack_2f8;
  undefined1 ***pppuStack_240;
  code *pcStack_238;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  
  func_0x000107c35438();
  func_0x000107c35414();
  func_0x000107c35444();
  func_0x000107c35454();
  func_0x000107c35460();
  func_0x000107c35490();
  func_0x000107c35494();
  func_0x000107c354c4();
  do {
    func_0x000107c354a0();
    func_0x000107c354a8();
  } while (!(bool)in_ZR);
  func_0x000107c35428();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b286d60();
  func_0x00010b286dd4();
  do {
    func_0x00010b286da8();
    func_0x00010b286db0();
  } while (!(bool)in_ZR);
  func_0x00010b286da0();
  pcStack_c8 = FUN_10b285b58;
  puVar3 = param_5;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x000107c35438();
  func_0x000107c35414();
  func_0x000107c35450();
  func_0x000107c35460();
  func_0x000107c35490();
  func_0x000107c35494();
  func_0x000107c354bc();
  do {
    func_0x000107c354a0();
    func_0x000107c354a8();
  } while (!(bool)in_ZR);
  func_0x000107c35428();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286dc8();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcStack_168 = FUN_10b285bd8;
    ppuStack_170 = &puStack_d0;
    func_0x000107c35410();
    func_0x00010b286cc0();
    uStack_1a8 = param_6[1];
    uStack_1b0 = *param_6;
    uStack_1a0 = param_6[2];
    param_6[1] = 0;
    param_6[2] = 0;
    *param_6 = 0;
    func_0x000107c35488();
    func_0x000107c354ac();
    func_0x000107c35434();
    func_0x000107c35494();
    func_0x000107c354d4();
    do {
      func_0x000107c354a0();
      func_0x000107c354a8();
    } while (!(bool)in_ZR);
    func_0x000107c35428();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286df0();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcStack_238 = FUN_10b285c78;
    pppuStack_240 = &ppuStack_170;
    func_0x000107c35410();
    func_0x00010b286cc0();
    func_0x000107c35454();
    func_0x000107c354ac();
    func_0x000107c35434();
    func_0x000107c35494();
    func_0x000107c354c4();
    do {
      func_0x000107c354a0();
      func_0x000107c354a8();
    } while (!(bool)in_ZR);
    func_0x000107c35428();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286dd4();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcStack_2f8 = FUN_10b285cf4;
    ppppuStack_300 = &pppuStack_240;
    func_0x000107c35410();
    func_0x00010b286cf4();
    func_0x000107c35450();
    func_0x000107c354ac();
    func_0x000107c35434();
    func_0x000107c35494();
    func_0x000107c354bc();
    do {
      func_0x000107c354a0();
      func_0x000107c354a8();
    } while (!(bool)in_ZR);
    func_0x000107c35428();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b286d60();
      func_0x00010b286dc8();
      do {
        func_0x00010b286da8();
        func_0x00010b286db0();
      } while (!(bool)in_ZR);
      func_0x00010b286da0();
      pcStack_398 = FUN_10b285d70;
      pppppuStack_3a0 = &ppppuStack_300;
      func_0x000107c35410();
      func_0x000107c35448();
      func_0x000107c354ac();
      puVar2 = (undefined8 *)&UNK_110cce4d8;
      func_0x000107c35434();
      func_0x000107c35494();
      func_0x000107c354b4();
      do {
        func_0x000107c354a0();
        func_0x000107c354a8();
      } while (!(bool)in_ZR);
      func_0x000107c35428();
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010b286d60();
      func_0x00010b286dbc();
      do {
        func_0x00010b286da8();
        func_0x00010b286db0();
      } while (!(bool)in_ZR);
      func_0x00010b286da0();
      pcVar10 = FUN_10b285de8;
      func_0x000107c354e0();
      puVar4 = param_3;
      puVar6 = param_4;
      puVar8 = puVar3;
      ppppppuStack_380 = &pppppuStack_3a0;
      pcStack_378 = pcVar10;
      func_0x000107c3541c();
      (*extraout_x8)();
      puVar1 = auStack_420;
      if (param_1 == 0) {
        func_0x000107c35430(unaff_x21);
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x00010b286d60();
        func_0x00010b286dc8();
        do {
          func_0x00010b286da8();
          func_0x00010b286db0();
        } while (!(bool)in_ZR);
        func_0x00010b286da0();
        pcStack_428 = FUN_10b285e84;
        puStack_450 = param_3;
        puStack_448 = param_4;
        puStack_440 = param_5;
        puStack_438 = puVar3;
        pppppppuStack_430 = &ppppppuStack_380;
        func_0x000107c3542c();
        (*extraout_x8_00)();
        if (param_1 != 0) {
          func_0x00010b286d10();
          func_0x000107c35448();
          func_0x000107c354ac();
          func_0x000107c35434();
          func_0x000107c35494();
          func_0x000107c354b4();
          do {
            func_0x000107c354a0();
            func_0x000107c354a8();
          } while (!(bool)in_ZR);
        }
        func_0x000107c35428();
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x00010b286d60();
        func_0x00010b286dbc();
        do {
          func_0x00010b286da8();
          func_0x00010b286db0();
        } while (!(bool)in_ZR);
        func_0x00010b286da0();
        pcStack_4b8 = FUN_10b285f0c;
        puStack_4e0 = param_3;
        puStack_4d8 = param_4;
        puStack_4d0 = param_5;
        puStack_4c8 = puVar3;
        pppppppuStack_4c0 = &pppppppuStack_430;
        func_0x000107c35410();
        func_0x00010b286cc0();
        func_0x000107c35454();
        func_0x000107c354ac();
        func_0x000107c35434();
        func_0x000107c35494();
        func_0x000107c354c4();
        do {
          func_0x000107c354a0();
          func_0x000107c354a8();
        } while (!(bool)in_ZR);
        func_0x000107c35428();
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x00010b286d60();
        func_0x00010b286dd4();
        do {
          func_0x00010b286da8();
          func_0x00010b286db0();
        } while (!(bool)in_ZR);
        func_0x00010b286da0();
        pcStack_578 = FUN_10b285f88;
        puStack_5a0 = param_3;
        puStack_598 = param_4;
        puStack_590 = param_5;
        pcStack_588 = pcVar10;
        pppppppuStack_580 = &pppppppuStack_4c0;
        func_0x000107c35410();
        func_0x00010b286cf4();
        func_0x000107c35450();
        func_0x000107c354ac();
        func_0x000107c35434();
        func_0x000107c35494();
        func_0x000107c354bc();
        do {
          func_0x000107c354a0();
          func_0x000107c354a8();
        } while (!(bool)in_ZR);
        func_0x000107c35428();
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x00010b286d60();
        func_0x00010b286dc8();
        do {
          func_0x00010b286da8();
          func_0x00010b286db0();
        } while (!(bool)in_ZR);
        func_0x00010b286da0();
        pcVar10 = FUN_10b286004;
        func_0x000107c354e4();
        pppppppuStack_550 = &pppppppuStack_580;
        pcStack_548 = pcVar10;
        func_0x000107c3541c();
        (*extraout_x8_01)();
        if (param_1 != 0) {
          func_0x000107c35420();
          func_0x000107c35454();
          func_0x00010b286d80();
          func_0x000107c35484();
          func_0x000107c35494();
          func_0x000107c354c4();
          do {
            func_0x000107c354a0();
            func_0x000107c354a8();
          } while (!(bool)in_ZR);
        }
        func_0x000107c35430(pcStack_588);
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010b286d60();
          func_0x00010b286dd4();
          do {
            func_0x00010b286da8();
            func_0x00010b286db0();
          } while (!(bool)in_ZR);
          func_0x00010b286da0();
          pcVar10 = FUN_10b2860a4;
          func_0x000107c354e4();
          pppppppuStack_550 = &pppppppuStack_550;
          pcStack_548 = pcVar10;
          func_0x000107c3541c();
          puVar2 = (undefined8 *)&UNK_110cce7f8;
          (*extraout_x8_02)();
          if (param_1 != 0) {
            func_0x000107c35420();
            func_0x000107c35454();
            func_0x00010b286d48();
            puVar2 = (undefined8 *)&UNK_110cce7f8;
            func_0x00010b286d94();
            func_0x000107c35494();
            func_0x000107c354c4();
            do {
              func_0x000107c354a0();
              func_0x000107c354a8();
            } while (!(bool)in_ZR);
          }
          func_0x000107c35430(pcStack_588);
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286dd4();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            pcVar10 = FUN_10b286144;
            func_0x000107c354e0();
            puVar5 = puVar4;
            puVar7 = puVar6;
            pppppppuStack_570 = &pppppppuStack_550;
            pcStack_568 = pcVar10;
            func_0x000107c3541c();
            puVar3 = (undefined8 *)&UNK_110cce848;
            (*extraout_x8_03)();
            puVar1 = auStack_610;
            param_4 = puVar6;
            param_3 = puVar4;
            if (param_1 == 0) {
              func_0x000107c35430(uStack_5a8);
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dc8();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              pcVar10 = FUN_10b2861e0;
              func_0x000107c354e0();
              puVar4 = puVar5;
              puVar6 = puVar7;
              puVar9 = puVar8;
              pppppppuStack_570 = &pppppppuStack_570;
              pcStack_568 = pcVar10;
              func_0x000107c3541c();
              (*extraout_x8_04)();
              puVar1 = auStack_610;
              param_4 = puVar7;
              param_3 = puVar5;
              puVar2 = puVar3;
              if (param_1 == 0) {
                func_0x000107c35430(uStack_5a8);
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x00010b286d60();
                func_0x00010b286dc8();
                do {
                  func_0x00010b286da8();
                  func_0x00010b286db0();
                } while (!(bool)in_ZR);
                func_0x00010b286da0();
                pcStack_618 = FUN_10b28627c;
                puStack_640 = puVar5;
                puStack_638 = puVar7;
                puStack_630 = param_5;
                puStack_628 = puVar8;
                puStack_620 = (undefined1 *)&pppppppuStack_570;
                func_0x000107c3542c();
                (*extraout_x8_05)();
                if (param_1 != 0) {
                  func_0x00010b286d10();
                  func_0x000107c35448();
                  func_0x000107c354ac();
                  func_0x000107c35434();
                  func_0x000107c35494();
                  func_0x000107c354b4();
                  do {
                    func_0x000107c354a0();
                    func_0x000107c354a8();
                  } while (!(bool)in_ZR);
                }
                func_0x000107c35428();
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x00010b286d60();
                func_0x00010b286dbc();
                do {
                  func_0x00010b286da8();
                  func_0x00010b286db0();
                } while (!(bool)in_ZR);
                func_0x00010b286da0();
                pcStack_6a8 = FUN_10b286304;
                param_4 = puVar6;
                puStack_6d0 = puVar5;
                puStack_6c8 = puVar7;
                puStack_6c0 = param_5;
                puStack_6b8 = puVar8;
                ppuStack_6b0 = &puStack_620;
                func_0x000107c35410();
                func_0x000107c35448();
                func_0x000107c354ac();
                func_0x000107c35434();
                func_0x000107c35494();
                func_0x000107c354b4();
                do {
                  func_0x000107c354a0();
                  func_0x000107c354a8();
                } while (!(bool)in_ZR);
                func_0x000107c35428();
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x00010b286d60();
                func_0x00010b286dbc();
                do {
                  func_0x00010b286da8();
                  func_0x00010b286db0();
                } while (!(bool)in_ZR);
                func_0x00010b286da0();
                puVar1 = auStack_7f0;
                pcStack_738 = FUN_10b28637c;
                puStack_760 = puVar5;
                puStack_758 = puVar7;
                ppppuStack_750 = (undefined1 ****)param_5;
                pcStack_748 = (code *)puVar6;
                pppuStack_740 = &ppuStack_6b0;
                func_0x000107c35438();
                func_0x000107c35414();
                func_0x000107c35444();
                func_0x000107c35454();
                func_0x000107c35460();
                puVar2 = (undefined8 *)&UNK_110ccea28;
                func_0x000107c35490();
                func_0x000107c35494();
                func_0x000107c354c4();
                do {
                  func_0x000107c354a0();
                  func_0x000107c354a8();
                } while (!(bool)in_ZR);
                func_0x000107c35428();
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x00010b286d60();
                func_0x00010b286dd4();
                do {
                  func_0x00010b286da8();
                  func_0x00010b286db0();
                } while (!(bool)in_ZR);
                func_0x00010b286da0();
                pcVar10 = FUN_10b286400;
                func_0x000107c354e0();
                puVar6 = puVar4;
                puVar8 = param_4;
                ppppuStack_750 = &pppuStack_740;
                pcStack_748 = pcVar10;
                func_0x000107c3541c();
                puVar3 = (undefined8 *)&UNK_110ccea78;
                (*extraout_x8_06)();
                param_3 = puVar4;
                if (param_1 == 0) {
                  func_0x000107c35430(uStack_788);
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  func_0x00010b286dc8();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  param_3 = puVar6;
                  puVar2 = puVar8;
                  puVar4 = puVar9;
                  pcVar11 = pcVar10;
                  func_0x000107c35440();
                  uStack_858 = extraout_x8_07;
                  func_0x000107c35474();
                  (*extraout_x8_08)();
                  if (param_1 != 0) {
                    uStack_8e8 = puVar3[1];
                    uStack_8f0 = *puVar3;
                    uStack_8e0 = puVar3[2];
                    puVar3[1] = 0;
                    puVar3[2] = 0;
                    *puVar3 = 0;
                    uStack_8d0 = puVar6[1];
                    uStack_8d8 = *puVar6;
                    uStack_8c8 = puVar6[2];
                    puVar6[1] = 0;
                    puVar6[2] = 0;
                    *puVar6 = 0;
                    uStack_8b8 = puVar8[1];
                    uStack_8c0 = *puVar8;
                    uStack_8b0 = puVar8[2];
                    puVar8[1] = 0;
                    puVar8[2] = 0;
                    *puVar8 = 0;
                    uStack_8a0 = puVar9[1];
                    uStack_8a8 = *puVar9;
                    uStack_898 = puVar9[2];
                    *puVar9 = 0;
                    puVar9[1] = 0;
                    puVar9[2] = 0;
                    uStack_888 = *(undefined8 *)(pcVar10 + 8);
                    uStack_890 = *(undefined8 *)pcVar10;
                    uStack_880 = *(undefined8 *)(pcVar10 + 0x10);
                    func_0x00010b286d6c();
                    func_0x00010b286dfc();
                    func_0x00010b286de0();
                    func_0x00010b286d80();
                    func_0x000107c35484();
                    func_0x000107c35494();
                    do {
                      func_0x000107c354a0();
                      func_0x000107c354a8();
                    } while (!(bool)in_ZR);
                  }
                  func_0x000107c35430(uStack_858);
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  func_0x000107c354dc();
                  func_0x000107c35440();
                  uStack_878 = extraout_x8_09;
                  func_0x000107c35474();
                  (*extraout_x8_10)();
                  if (param_1 != 0) {
                    func_0x000107c3543c();
                    func_0x000107c35488();
                    func_0x00010b286d80();
                    func_0x000107c35484();
                    func_0x000107c35494();
                    func_0x000107c354d4();
                    do {
                      func_0x000107c354a0();
                      func_0x000107c354a8();
                    } while (!(bool)in_ZR);
                  }
                  func_0x000107c35430(uStack_878);
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  func_0x00010b286df0();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  func_0x000107c354e4();
                  puVar3 = puVar2;
                  puVar6 = puVar4;
                  pcVar10 = pcVar11;
                  func_0x000107c3541c();
                  (*extraout_x8_11)();
                  if (param_1 != 0) {
                    func_0x000107c35420();
                    func_0x000107c35454();
                    func_0x00010b286d80();
                    func_0x000107c35484();
                    func_0x000107c35494();
                    func_0x000107c354c4();
                    do {
                      func_0x000107c354a0();
                      func_0x000107c354a8();
                    } while (!(bool)in_ZR);
                  }
                  func_0x000107c35430(uStack_888);
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  func_0x00010b286dd4();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  uStack_930 = 0x78;
                  pcStack_918 = FUN_10b286724;
                  pcVar12 = pcVar10;
                  puStack_940 = puVar2;
                  puStack_938 = puVar4;
                  pcStack_928 = pcVar11;
                  puStack_920 = &stack0xfffffffffffff7b0;
                  func_0x000107c35410();
                  func_0x00010b286cc0();
                  func_0x000107c35454();
                  func_0x000107c354ac();
                  func_0x000107c35434();
                  func_0x000107c35494();
                  func_0x000107c354c4();
                  do {
                    func_0x000107c354a0();
                    func_0x000107c354a8();
                  } while (!(bool)in_ZR);
                  func_0x000107c35428();
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  func_0x00010b286dd4();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  uStack_9f0 = 0x78;
                  pcStack_9d8 = FUN_10b2867a0;
                  puVar8 = puVar6;
                  puStack_a00 = puVar2;
                  puStack_9f8 = puVar4;
                  pcStack_9e8 = pcVar10;
                  ppuStack_9e0 = &puStack_920;
                  func_0x000107c35410();
                  func_0x00010b286cf4();
                  func_0x000107c35450();
                  func_0x000107c354ac();
                  func_0x000107c35434();
                  func_0x000107c35494();
                  func_0x000107c354bc();
                  do {
                    func_0x000107c354a0();
                    func_0x000107c354a8();
                  } while (!(bool)in_ZR);
                  func_0x000107c35428();
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  func_0x00010b286dc8();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  uStack_a90 = 0x78;
                  pcStack_a78 = FUN_10b28681c;
                  puStack_aa0 = puVar2;
                  puStack_a98 = puVar4;
                  puStack_a88 = puVar6;
                  pppuStack_a80 = &ppuStack_9e0;
                  func_0x000107c35410();
                  func_0x000107c35448();
                  func_0x000107c354ac();
                  func_0x000107c35434();
                  func_0x000107c35494();
                  func_0x000107c354b4();
                  do {
                    func_0x000107c354a0();
                    func_0x000107c354a8();
                  } while (!(bool)in_ZR);
                  func_0x000107c35428();
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  func_0x00010b286dbc();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  pcVar10 = FUN_10b286894;
                  func_0x000107c354dc();
                  ppppuStack_a20 = &pppuStack_a80;
                  pcStack_a18 = pcVar10;
                  func_0x000107c35440();
                  uStack_a68 = extraout_x8_12;
                  func_0x000107c35474();
                  (*extraout_x8_13)();
                  if (param_1 != 0) {
                    func_0x000107c3543c();
                    func_0x000107c35488();
                    func_0x00010b286d80();
                    func_0x000107c35484();
                    func_0x000107c35494();
                    func_0x000107c354d4();
                    do {
                      func_0x000107c354a0();
                      func_0x000107c354a8();
                    } while (!(bool)in_ZR);
                  }
                  func_0x000107c35430(uStack_a68);
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  func_0x00010b286df0();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  pcVar10 = FUN_10b286940;
                  func_0x000107c354e4();
                  param_4 = puVar3;
                  puVar2 = puVar8;
                  pppppuStack_a40 = &ppppuStack_a20;
                  pcStack_a38 = pcVar10;
                  func_0x000107c3541c();
                  (*extraout_x8_14)();
                  if (param_1 != 0) {
                    func_0x000107c35420();
                    func_0x000107c35454();
                    func_0x00010b286d80();
                    func_0x000107c35484();
                    func_0x000107c35494();
                    func_0x000107c354c4();
                    do {
                      func_0x000107c354a0();
                      func_0x000107c354a8();
                    } while (!(bool)in_ZR);
                  }
                  func_0x000107c35430(pcStack_a78);
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  func_0x00010b286dd4();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  uStack_b20 = 0x78;
                  pcStack_b08 = FUN_10b2869e0;
                  puVar4 = puVar2;
                  puStack_b30 = puVar3;
                  puStack_b28 = puVar8;
                  pcStack_b18 = pcVar12;
                  ppppppuStack_b10 = &pppppuStack_a40;
                  func_0x000107c35410();
                  func_0x00010b286cf4();
                  func_0x000107c35450();
                  func_0x000107c354ac();
                  func_0x000107c35434();
                  func_0x000107c35494();
                  func_0x000107c354bc();
                  do {
                    func_0x000107c354a0();
                    func_0x000107c354a8();
                  } while (!(bool)in_ZR);
                  func_0x000107c35428();
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  func_0x00010b286dc8();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  puVar1 = auStack_c30;
                  uStack_bc0 = 0x78;
                  pcStack_ba8 = FUN_10b286a5c;
                  puStack_bd0 = puVar3;
                  puStack_bc8 = puVar8;
                  puStack_bb8 = puVar2;
                  pppppppuStack_bb0 = &ppppppuStack_b10;
                  func_0x000107c35410();
                  func_0x000107c35448();
                  func_0x000107c354ac();
                  puVar2 = (undefined8 *)&UNK_110cceed8;
                  func_0x000107c35434();
                  func_0x000107c35494();
                  func_0x000107c354b4();
                  do {
                    func_0x000107c354a0();
                    func_0x000107c354a8();
                  } while (!(bool)in_ZR);
                  func_0x000107c35428();
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  func_0x00010b286dbc();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  pcVar10 = FUN_10b286ad4;
                  func_0x000107c354e0();
                  pppppppuStack_b90 = &pppppppuStack_bb0;
                  pcStack_b88 = pcVar10;
                  func_0x000107c3541c();
                  (*extraout_x8_15)();
                  if (param_1 == 0) {
                    func_0x000107c35430(puStack_bc8);
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286dc8();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    uStack_c50 = 0x78;
                    pcStack_c38 = FUN_10b286b70;
                    puStack_c60 = param_3;
                    puStack_c58 = param_4;
                    puStack_c48 = puVar4;
                    pppppppuStack_c40 = &pppppppuStack_b90;
                    func_0x000107c3542c();
                    (*extraout_x8_16)();
                    if (param_1 != 0) {
                      func_0x00010b286d10();
                      func_0x000107c35448();
                      func_0x000107c354ac();
                      func_0x000107c35434();
                      func_0x000107c35494();
                      func_0x000107c354b4();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                    }
                    func_0x000107c35428();
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286dbc();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    uStack_ce0 = 0x78;
                    pcStack_cc8 = FUN_10b286bf8;
                    puStack_cf0 = param_3;
                    puStack_ce8 = param_4;
                    puStack_cd8 = puVar4;
                    pppppppuStack_cd0 = &pppppppuStack_c40;
                    func_0x000107c35410();
                    func_0x000107c35448();
                    func_0x000107c354ac();
                    func_0x000107c35434();
                    func_0x000107c35494();
                    func_0x000107c354b4();
                    do {
                      func_0x000107c354a0();
                      func_0x000107c354a8();
                    } while (!(bool)in_ZR);
                    func_0x000107c35428();
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286dbc();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    puVar1 = auStack_d50;
                  }
                }
              }
            }
            goto FUN_10b286c70;
          }
        }
        return;
      }
FUN_10b286c70:
      uVar13 = *puVar2;
      *(undefined8 *)(puVar1 + 0x28) = puVar2[1];
      *(undefined8 *)(puVar1 + 0x20) = uVar13;
      *(undefined8 *)(puVar1 + 0x30) = puVar2[2];
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = 0;
      uVar13 = *param_3;
      *(undefined8 *)(puVar1 + 0x40) = param_3[1];
      *(undefined8 *)(puVar1 + 0x38) = uVar13;
      *(undefined8 *)(puVar1 + 0x48) = param_3[2];
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      *(undefined8 *)(puVar1 + 0x60) = param_4[2];
      uVar13 = *param_4;
      *(undefined8 *)(puVar1 + 0x58) = param_4[1];
      *(undefined8 *)(puVar1 + 0x50) = uVar13;
      param_4[1] = 0;
      param_4[2] = 0;
      *param_4 = 0;
      return;
    }
  }
  return;
}



/* Entry: 10b285b58; end: 10b285bd7;  */

/* WARNING: Possible PIC construction at 0x00010b285e20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b28617c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286b0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b28643c) */
/* WARNING: Removing unreachable block (ram,0x00010b286458) */
/* WARNING: Removing unreachable block (ram,0x00010b28621c) */
/* WARNING: Removing unreachable block (ram,0x00010b286238) */
/* WARNING: Removing unreachable block (ram,0x00010b286180) */
/* WARNING: Removing unreachable block (ram,0x00010b28619c) */
/* WARNING: Removing unreachable block (ram,0x00010b285e24) */
/* WARNING: Removing unreachable block (ram,0x00010b285e40) */
/* WARNING: Removing unreachable block (ram,0x00010b286b10) */
/* WARNING: Removing unreachable block (ram,0x00010b286b2c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10b285b58(int param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  undefined8 extraout_x8_07;
  code *extraout_x8_08;
  undefined8 extraout_x8_09;
  code *extraout_x8_10;
  code *extraout_x8_11;
  undefined8 extraout_x8_12;
  code *extraout_x8_13;
  code *extraout_x8_14;
  code *extraout_x8_15;
  code *extraout_x8_16;
  undefined8 unaff_x21;
  undefined8 uVar13;
  undefined1 auStack_c90 [96];
  undefined8 *puStack_c30;
  undefined8 *puStack_c28;
  undefined8 uStack_c20;
  undefined8 *puStack_c18;
  undefined8 *******pppppppuStack_c10;
  code *pcStack_c08;
  undefined8 *puStack_ba0;
  undefined8 *puStack_b98;
  undefined8 uStack_b90;
  undefined8 *puStack_b88;
  undefined8 *******pppppppuStack_b80;
  code *pcStack_b78;
  undefined1 auStack_b70 [96];
  undefined8 *puStack_b10;
  undefined8 *puStack_b08;
  undefined8 uStack_b00;
  undefined8 *puStack_af8;
  undefined1 *******pppppppuStack_af0;
  code *pcStack_ae8;
  undefined8 *******pppppppuStack_ad0;
  code *pcStack_ac8;
  undefined8 *puStack_a70;
  undefined8 *puStack_a68;
  undefined8 uStack_a60;
  code *pcStack_a58;
  undefined1 ******ppppppuStack_a50;
  code *pcStack_a48;
  undefined8 *puStack_9e0;
  undefined8 *puStack_9d8;
  undefined8 uStack_9d0;
  undefined8 *puStack_9c8;
  undefined1 ***pppuStack_9c0;
  code *pcStack_9b8;
  undefined8 uStack_9a8;
  undefined1 *****pppppuStack_980;
  code *pcStack_978;
  undefined1 ****ppppuStack_960;
  code *pcStack_958;
  undefined8 *puStack_940;
  undefined8 *puStack_938;
  undefined8 uStack_930;
  code *pcStack_928;
  undefined1 **ppuStack_920;
  code *pcStack_918;
  undefined8 *puStack_880;
  undefined8 *puStack_878;
  undefined8 uStack_870;
  code *pcStack_868;
  undefined1 *puStack_860;
  code *pcStack_858;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_798;
  undefined1 auStack_730 [104];
  undefined8 uStack_6c8;
  undefined8 *puStack_6a0;
  undefined8 *puStack_698;
  undefined1 ****ppppuStack_690;
  code *pcStack_688;
  undefined1 ***pppuStack_680;
  code *pcStack_678;
  undefined8 *puStack_610;
  undefined8 *puStack_608;
  undefined8 *puStack_600;
  undefined8 *puStack_5f8;
  undefined1 **ppuStack_5f0;
  code *pcStack_5e8;
  undefined8 *puStack_580;
  undefined8 *puStack_578;
  undefined8 *puStack_570;
  undefined8 *puStack_568;
  undefined1 *puStack_560;
  code *pcStack_558;
  undefined1 auStack_550 [104];
  undefined8 uStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 *puStack_4d0;
  code *pcStack_4c8;
  undefined8 *******pppppppuStack_4c0;
  code *pcStack_4b8;
  undefined8 *******pppppppuStack_4b0;
  code *pcStack_4a8;
  undefined8 *******pppppppuStack_490;
  code *pcStack_488;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 *puStack_410;
  undefined8 *puStack_408;
  undefined1 *******pppppppuStack_400;
  code *pcStack_3f8;
  undefined8 *puStack_390;
  undefined8 *puStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined1 ******ppppppuStack_370;
  code *pcStack_368;
  undefined1 auStack_360 [96];
  undefined1 ****ppppuStack_2e0;
  code *pcStack_2d8;
  undefined1 *****pppppuStack_2c0;
  code *pcStack_2b8;
  undefined1 ***pppuStack_240;
  code *pcStack_238;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  
  puVar3 = param_5;
  func_0x000107c35438();
  func_0x000107c35414();
  func_0x000107c35450();
  func_0x000107c35460();
  func_0x000107c35490();
  func_0x000107c35494();
  func_0x000107c354bc();
  do {
    func_0x000107c354a0();
    func_0x000107c354a8();
  } while (!(bool)in_ZR);
  func_0x000107c35428();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286dc8();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcStack_a8 = FUN_10b285bd8;
    puStack_b0 = &stack0xfffffffffffffff0;
    func_0x000107c35410();
    func_0x00010b286cc0();
    uStack_e8 = param_6[1];
    uStack_f0 = *param_6;
    uStack_e0 = param_6[2];
    param_6[1] = 0;
    param_6[2] = 0;
    *param_6 = 0;
    func_0x000107c35488();
    func_0x000107c354ac();
    func_0x000107c35434();
    func_0x000107c35494();
    func_0x000107c354d4();
    do {
      func_0x000107c354a0();
      func_0x000107c354a8();
    } while (!(bool)in_ZR);
    func_0x000107c35428();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286df0();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcStack_178 = FUN_10b285c78;
    ppuStack_180 = &puStack_b0;
    func_0x000107c35410();
    func_0x00010b286cc0();
    func_0x000107c35454();
    func_0x000107c354ac();
    func_0x000107c35434();
    func_0x000107c35494();
    func_0x000107c354c4();
    do {
      func_0x000107c354a0();
      func_0x000107c354a8();
    } while (!(bool)in_ZR);
    func_0x000107c35428();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286dd4();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcStack_238 = FUN_10b285cf4;
    pppuStack_240 = &ppuStack_180;
    func_0x000107c35410();
    func_0x00010b286cf4();
    func_0x000107c35450();
    func_0x000107c354ac();
    func_0x000107c35434();
    func_0x000107c35494();
    func_0x000107c354bc();
    do {
      func_0x000107c354a0();
      func_0x000107c354a8();
    } while (!(bool)in_ZR);
    func_0x000107c35428();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b286d60();
      func_0x00010b286dc8();
      do {
        func_0x00010b286da8();
        func_0x00010b286db0();
      } while (!(bool)in_ZR);
      func_0x00010b286da0();
      pcStack_2d8 = FUN_10b285d70;
      ppppuStack_2e0 = &pppuStack_240;
      func_0x000107c35410();
      func_0x000107c35448();
      func_0x000107c354ac();
      puVar2 = (undefined8 *)&UNK_110cce4d8;
      func_0x000107c35434();
      func_0x000107c35494();
      func_0x000107c354b4();
      do {
        func_0x000107c354a0();
        func_0x000107c354a8();
      } while (!(bool)in_ZR);
      func_0x000107c35428();
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010b286d60();
      func_0x00010b286dbc();
      do {
        func_0x00010b286da8();
        func_0x00010b286db0();
      } while (!(bool)in_ZR);
      func_0x00010b286da0();
      pcVar10 = FUN_10b285de8;
      func_0x000107c354e0();
      puVar4 = param_3;
      puVar6 = param_4;
      puVar8 = puVar3;
      pppppuStack_2c0 = &ppppuStack_2e0;
      pcStack_2b8 = pcVar10;
      func_0x000107c3541c();
      (*extraout_x8)();
      puVar1 = auStack_360;
      if (param_1 == 0) {
        func_0x000107c35430(unaff_x21);
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x00010b286d60();
        func_0x00010b286dc8();
        do {
          func_0x00010b286da8();
          func_0x00010b286db0();
        } while (!(bool)in_ZR);
        func_0x00010b286da0();
        pcStack_368 = FUN_10b285e84;
        puStack_390 = param_3;
        puStack_388 = param_4;
        puStack_380 = param_5;
        puStack_378 = puVar3;
        ppppppuStack_370 = &pppppuStack_2c0;
        func_0x000107c3542c();
        (*extraout_x8_00)();
        if (param_1 != 0) {
          func_0x00010b286d10();
          func_0x000107c35448();
          func_0x000107c354ac();
          func_0x000107c35434();
          func_0x000107c35494();
          func_0x000107c354b4();
          do {
            func_0x000107c354a0();
            func_0x000107c354a8();
          } while (!(bool)in_ZR);
        }
        func_0x000107c35428();
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x00010b286d60();
        func_0x00010b286dbc();
        do {
          func_0x00010b286da8();
          func_0x00010b286db0();
        } while (!(bool)in_ZR);
        func_0x00010b286da0();
        pcStack_3f8 = FUN_10b285f0c;
        puStack_420 = param_3;
        puStack_418 = param_4;
        puStack_410 = param_5;
        puStack_408 = puVar3;
        pppppppuStack_400 = &ppppppuStack_370;
        func_0x000107c35410();
        func_0x00010b286cc0();
        func_0x000107c35454();
        func_0x000107c354ac();
        func_0x000107c35434();
        func_0x000107c35494();
        func_0x000107c354c4();
        do {
          func_0x000107c354a0();
          func_0x000107c354a8();
        } while (!(bool)in_ZR);
        func_0x000107c35428();
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x00010b286d60();
        func_0x00010b286dd4();
        do {
          func_0x00010b286da8();
          func_0x00010b286db0();
        } while (!(bool)in_ZR);
        func_0x00010b286da0();
        pcStack_4b8 = FUN_10b285f88;
        puStack_4e0 = param_3;
        puStack_4d8 = param_4;
        puStack_4d0 = param_5;
        pcStack_4c8 = pcVar10;
        pppppppuStack_4c0 = &pppppppuStack_400;
        func_0x000107c35410();
        func_0x00010b286cf4();
        func_0x000107c35450();
        func_0x000107c354ac();
        func_0x000107c35434();
        func_0x000107c35494();
        func_0x000107c354bc();
        do {
          func_0x000107c354a0();
          func_0x000107c354a8();
        } while (!(bool)in_ZR);
        func_0x000107c35428();
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x00010b286d60();
        func_0x00010b286dc8();
        do {
          func_0x00010b286da8();
          func_0x00010b286db0();
        } while (!(bool)in_ZR);
        func_0x00010b286da0();
        pcVar10 = FUN_10b286004;
        func_0x000107c354e4();
        pppppppuStack_490 = &pppppppuStack_4c0;
        pcStack_488 = pcVar10;
        func_0x000107c3541c();
        (*extraout_x8_01)();
        if (param_1 != 0) {
          func_0x000107c35420();
          func_0x000107c35454();
          func_0x00010b286d80();
          func_0x000107c35484();
          func_0x000107c35494();
          func_0x000107c354c4();
          do {
            func_0x000107c354a0();
            func_0x000107c354a8();
          } while (!(bool)in_ZR);
        }
        func_0x000107c35430(pcStack_4c8);
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010b286d60();
          func_0x00010b286dd4();
          do {
            func_0x00010b286da8();
            func_0x00010b286db0();
          } while (!(bool)in_ZR);
          func_0x00010b286da0();
          pcVar10 = FUN_10b2860a4;
          func_0x000107c354e4();
          pppppppuStack_490 = &pppppppuStack_490;
          pcStack_488 = pcVar10;
          func_0x000107c3541c();
          puVar2 = (undefined8 *)&UNK_110cce7f8;
          (*extraout_x8_02)();
          if (param_1 != 0) {
            func_0x000107c35420();
            func_0x000107c35454();
            func_0x00010b286d48();
            puVar2 = (undefined8 *)&UNK_110cce7f8;
            func_0x00010b286d94();
            func_0x000107c35494();
            func_0x000107c354c4();
            do {
              func_0x000107c354a0();
              func_0x000107c354a8();
            } while (!(bool)in_ZR);
          }
          func_0x000107c35430(pcStack_4c8);
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286dd4();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            pcVar10 = FUN_10b286144;
            func_0x000107c354e0();
            puVar5 = puVar4;
            puVar7 = puVar6;
            pppppppuStack_4b0 = &pppppppuStack_490;
            pcStack_4a8 = pcVar10;
            func_0x000107c3541c();
            puVar3 = (undefined8 *)&UNK_110cce848;
            (*extraout_x8_03)();
            puVar1 = auStack_550;
            param_4 = puVar6;
            param_3 = puVar4;
            if (param_1 == 0) {
              func_0x000107c35430(uStack_4e8);
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dc8();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              pcVar10 = FUN_10b2861e0;
              func_0x000107c354e0();
              puVar4 = puVar5;
              puVar6 = puVar7;
              puVar9 = puVar8;
              pppppppuStack_4b0 = &pppppppuStack_4b0;
              pcStack_4a8 = pcVar10;
              func_0x000107c3541c();
              (*extraout_x8_04)();
              puVar1 = auStack_550;
              param_4 = puVar7;
              param_3 = puVar5;
              puVar2 = puVar3;
              if (param_1 == 0) {
                func_0x000107c35430(uStack_4e8);
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x00010b286d60();
                func_0x00010b286dc8();
                do {
                  func_0x00010b286da8();
                  func_0x00010b286db0();
                } while (!(bool)in_ZR);
                func_0x00010b286da0();
                pcStack_558 = FUN_10b28627c;
                puStack_580 = puVar5;
                puStack_578 = puVar7;
                puStack_570 = param_5;
                puStack_568 = puVar8;
                puStack_560 = (undefined1 *)&pppppppuStack_4b0;
                func_0x000107c3542c();
                (*extraout_x8_05)();
                if (param_1 != 0) {
                  func_0x00010b286d10();
                  func_0x000107c35448();
                  func_0x000107c354ac();
                  func_0x000107c35434();
                  func_0x000107c35494();
                  func_0x000107c354b4();
                  do {
                    func_0x000107c354a0();
                    func_0x000107c354a8();
                  } while (!(bool)in_ZR);
                }
                func_0x000107c35428();
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x00010b286d60();
                func_0x00010b286dbc();
                do {
                  func_0x00010b286da8();
                  func_0x00010b286db0();
                } while (!(bool)in_ZR);
                func_0x00010b286da0();
                pcStack_5e8 = FUN_10b286304;
                param_4 = puVar6;
                puStack_610 = puVar5;
                puStack_608 = puVar7;
                puStack_600 = param_5;
                puStack_5f8 = puVar8;
                ppuStack_5f0 = &puStack_560;
                func_0x000107c35410();
                func_0x000107c35448();
                func_0x000107c354ac();
                func_0x000107c35434();
                func_0x000107c35494();
                func_0x000107c354b4();
                do {
                  func_0x000107c354a0();
                  func_0x000107c354a8();
                } while (!(bool)in_ZR);
                func_0x000107c35428();
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x00010b286d60();
                func_0x00010b286dbc();
                do {
                  func_0x00010b286da8();
                  func_0x00010b286db0();
                } while (!(bool)in_ZR);
                func_0x00010b286da0();
                puVar1 = auStack_730;
                pcStack_678 = FUN_10b28637c;
                puStack_6a0 = puVar5;
                puStack_698 = puVar7;
                ppppuStack_690 = (undefined1 ****)param_5;
                pcStack_688 = (code *)puVar6;
                pppuStack_680 = &ppuStack_5f0;
                func_0x000107c35438();
                func_0x000107c35414();
                func_0x000107c35444();
                func_0x000107c35454();
                func_0x000107c35460();
                puVar2 = (undefined8 *)&UNK_110ccea28;
                func_0x000107c35490();
                func_0x000107c35494();
                func_0x000107c354c4();
                do {
                  func_0x000107c354a0();
                  func_0x000107c354a8();
                } while (!(bool)in_ZR);
                func_0x000107c35428();
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x00010b286d60();
                func_0x00010b286dd4();
                do {
                  func_0x00010b286da8();
                  func_0x00010b286db0();
                } while (!(bool)in_ZR);
                func_0x00010b286da0();
                pcVar10 = FUN_10b286400;
                func_0x000107c354e0();
                puVar6 = puVar4;
                puVar8 = param_4;
                ppppuStack_690 = &pppuStack_680;
                pcStack_688 = pcVar10;
                func_0x000107c3541c();
                puVar3 = (undefined8 *)&UNK_110ccea78;
                (*extraout_x8_06)();
                param_3 = puVar4;
                if (param_1 == 0) {
                  func_0x000107c35430(uStack_6c8);
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  func_0x00010b286dc8();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  param_3 = puVar6;
                  puVar2 = puVar8;
                  puVar4 = puVar9;
                  pcVar11 = pcVar10;
                  func_0x000107c35440();
                  uStack_798 = extraout_x8_07;
                  func_0x000107c35474();
                  (*extraout_x8_08)();
                  if (param_1 != 0) {
                    uStack_828 = puVar3[1];
                    uStack_830 = *puVar3;
                    uStack_820 = puVar3[2];
                    puVar3[1] = 0;
                    puVar3[2] = 0;
                    *puVar3 = 0;
                    uStack_810 = puVar6[1];
                    uStack_818 = *puVar6;
                    uStack_808 = puVar6[2];
                    puVar6[1] = 0;
                    puVar6[2] = 0;
                    *puVar6 = 0;
                    uStack_7f8 = puVar8[1];
                    uStack_800 = *puVar8;
                    uStack_7f0 = puVar8[2];
                    puVar8[1] = 0;
                    puVar8[2] = 0;
                    *puVar8 = 0;
                    uStack_7e0 = puVar9[1];
                    uStack_7e8 = *puVar9;
                    uStack_7d8 = puVar9[2];
                    *puVar9 = 0;
                    puVar9[1] = 0;
                    puVar9[2] = 0;
                    uStack_7c8 = *(undefined8 *)(pcVar10 + 8);
                    uStack_7d0 = *(undefined8 *)pcVar10;
                    uStack_7c0 = *(undefined8 *)(pcVar10 + 0x10);
                    func_0x00010b286d6c();
                    func_0x00010b286dfc();
                    func_0x00010b286de0();
                    func_0x00010b286d80();
                    func_0x000107c35484();
                    func_0x000107c35494();
                    do {
                      func_0x000107c354a0();
                      func_0x000107c354a8();
                    } while (!(bool)in_ZR);
                  }
                  func_0x000107c35430(uStack_798);
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  func_0x000107c354dc();
                  func_0x000107c35440();
                  uStack_7b8 = extraout_x8_09;
                  func_0x000107c35474();
                  (*extraout_x8_10)();
                  if (param_1 != 0) {
                    func_0x000107c3543c();
                    func_0x000107c35488();
                    func_0x00010b286d80();
                    func_0x000107c35484();
                    func_0x000107c35494();
                    func_0x000107c354d4();
                    do {
                      func_0x000107c354a0();
                      func_0x000107c354a8();
                    } while (!(bool)in_ZR);
                  }
                  func_0x000107c35430(uStack_7b8);
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  func_0x00010b286df0();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  func_0x000107c354e4();
                  puVar3 = puVar2;
                  puVar6 = puVar4;
                  pcVar10 = pcVar11;
                  func_0x000107c3541c();
                  (*extraout_x8_11)();
                  if (param_1 != 0) {
                    func_0x000107c35420();
                    func_0x000107c35454();
                    func_0x00010b286d80();
                    func_0x000107c35484();
                    func_0x000107c35494();
                    func_0x000107c354c4();
                    do {
                      func_0x000107c354a0();
                      func_0x000107c354a8();
                    } while (!(bool)in_ZR);
                  }
                  func_0x000107c35430(uStack_7c8);
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  func_0x00010b286dd4();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  uStack_870 = 0x78;
                  pcStack_858 = FUN_10b286724;
                  pcVar12 = pcVar10;
                  puStack_880 = puVar2;
                  puStack_878 = puVar4;
                  pcStack_868 = pcVar11;
                  puStack_860 = &stack0xfffffffffffff870;
                  func_0x000107c35410();
                  func_0x00010b286cc0();
                  func_0x000107c35454();
                  func_0x000107c354ac();
                  func_0x000107c35434();
                  func_0x000107c35494();
                  func_0x000107c354c4();
                  do {
                    func_0x000107c354a0();
                    func_0x000107c354a8();
                  } while (!(bool)in_ZR);
                  func_0x000107c35428();
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  func_0x00010b286dd4();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  uStack_930 = 0x78;
                  pcStack_918 = FUN_10b2867a0;
                  puVar8 = puVar6;
                  puStack_940 = puVar2;
                  puStack_938 = puVar4;
                  pcStack_928 = pcVar10;
                  ppuStack_920 = &puStack_860;
                  func_0x000107c35410();
                  func_0x00010b286cf4();
                  func_0x000107c35450();
                  func_0x000107c354ac();
                  func_0x000107c35434();
                  func_0x000107c35494();
                  func_0x000107c354bc();
                  do {
                    func_0x000107c354a0();
                    func_0x000107c354a8();
                  } while (!(bool)in_ZR);
                  func_0x000107c35428();
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  func_0x00010b286dc8();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  uStack_9d0 = 0x78;
                  pcStack_9b8 = FUN_10b28681c;
                  puStack_9e0 = puVar2;
                  puStack_9d8 = puVar4;
                  puStack_9c8 = puVar6;
                  pppuStack_9c0 = &ppuStack_920;
                  func_0x000107c35410();
                  func_0x000107c35448();
                  func_0x000107c354ac();
                  func_0x000107c35434();
                  func_0x000107c35494();
                  func_0x000107c354b4();
                  do {
                    func_0x000107c354a0();
                    func_0x000107c354a8();
                  } while (!(bool)in_ZR);
                  func_0x000107c35428();
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  func_0x00010b286dbc();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  pcVar10 = FUN_10b286894;
                  func_0x000107c354dc();
                  ppppuStack_960 = &pppuStack_9c0;
                  pcStack_958 = pcVar10;
                  func_0x000107c35440();
                  uStack_9a8 = extraout_x8_12;
                  func_0x000107c35474();
                  (*extraout_x8_13)();
                  if (param_1 != 0) {
                    func_0x000107c3543c();
                    func_0x000107c35488();
                    func_0x00010b286d80();
                    func_0x000107c35484();
                    func_0x000107c35494();
                    func_0x000107c354d4();
                    do {
                      func_0x000107c354a0();
                      func_0x000107c354a8();
                    } while (!(bool)in_ZR);
                  }
                  func_0x000107c35430(uStack_9a8);
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  func_0x00010b286df0();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  pcVar10 = FUN_10b286940;
                  func_0x000107c354e4();
                  param_4 = puVar3;
                  puVar2 = puVar8;
                  pppppuStack_980 = &ppppuStack_960;
                  pcStack_978 = pcVar10;
                  func_0x000107c3541c();
                  (*extraout_x8_14)();
                  if (param_1 != 0) {
                    func_0x000107c35420();
                    func_0x000107c35454();
                    func_0x00010b286d80();
                    func_0x000107c35484();
                    func_0x000107c35494();
                    func_0x000107c354c4();
                    do {
                      func_0x000107c354a0();
                      func_0x000107c354a8();
                    } while (!(bool)in_ZR);
                  }
                  func_0x000107c35430(pcStack_9b8);
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  func_0x00010b286dd4();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  uStack_a60 = 0x78;
                  pcStack_a48 = FUN_10b2869e0;
                  puVar4 = puVar2;
                  puStack_a70 = puVar3;
                  puStack_a68 = puVar8;
                  pcStack_a58 = pcVar12;
                  ppppppuStack_a50 = &pppppuStack_980;
                  func_0x000107c35410();
                  func_0x00010b286cf4();
                  func_0x000107c35450();
                  func_0x000107c354ac();
                  func_0x000107c35434();
                  func_0x000107c35494();
                  func_0x000107c354bc();
                  do {
                    func_0x000107c354a0();
                    func_0x000107c354a8();
                  } while (!(bool)in_ZR);
                  func_0x000107c35428();
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  func_0x00010b286dc8();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  puVar1 = auStack_b70;
                  uStack_b00 = 0x78;
                  pcStack_ae8 = FUN_10b286a5c;
                  puStack_b10 = puVar3;
                  puStack_b08 = puVar8;
                  puStack_af8 = puVar2;
                  pppppppuStack_af0 = &ppppppuStack_a50;
                  func_0x000107c35410();
                  func_0x000107c35448();
                  func_0x000107c354ac();
                  puVar2 = (undefined8 *)&UNK_110cceed8;
                  func_0x000107c35434();
                  func_0x000107c35494();
                  func_0x000107c354b4();
                  do {
                    func_0x000107c354a0();
                    func_0x000107c354a8();
                  } while (!(bool)in_ZR);
                  func_0x000107c35428();
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x00010b286d60();
                  func_0x00010b286dbc();
                  do {
                    func_0x00010b286da8();
                    func_0x00010b286db0();
                  } while (!(bool)in_ZR);
                  func_0x00010b286da0();
                  pcVar10 = FUN_10b286ad4;
                  func_0x000107c354e0();
                  pppppppuStack_ad0 = &pppppppuStack_af0;
                  pcStack_ac8 = pcVar10;
                  func_0x000107c3541c();
                  (*extraout_x8_15)();
                  if (param_1 == 0) {
                    func_0x000107c35430(puStack_b08);
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286dc8();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    uStack_b90 = 0x78;
                    pcStack_b78 = FUN_10b286b70;
                    puStack_ba0 = param_3;
                    puStack_b98 = param_4;
                    puStack_b88 = puVar4;
                    pppppppuStack_b80 = &pppppppuStack_ad0;
                    func_0x000107c3542c();
                    (*extraout_x8_16)();
                    if (param_1 != 0) {
                      func_0x00010b286d10();
                      func_0x000107c35448();
                      func_0x000107c354ac();
                      func_0x000107c35434();
                      func_0x000107c35494();
                      func_0x000107c354b4();
                      do {
                        func_0x000107c354a0();
                        func_0x000107c354a8();
                      } while (!(bool)in_ZR);
                    }
                    func_0x000107c35428();
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286dbc();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    uStack_c20 = 0x78;
                    pcStack_c08 = FUN_10b286bf8;
                    puStack_c30 = param_3;
                    puStack_c28 = param_4;
                    puStack_c18 = puVar4;
                    pppppppuStack_c10 = &pppppppuStack_b80;
                    func_0x000107c35410();
                    func_0x000107c35448();
                    func_0x000107c354ac();
                    func_0x000107c35434();
                    func_0x000107c35494();
                    func_0x000107c354b4();
                    do {
                      func_0x000107c354a0();
                      func_0x000107c354a8();
                    } while (!(bool)in_ZR);
                    func_0x000107c35428();
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x00010b286d60();
                    func_0x00010b286dbc();
                    do {
                      func_0x00010b286da8();
                      func_0x00010b286db0();
                    } while (!(bool)in_ZR);
                    func_0x00010b286da0();
                    puVar1 = auStack_c90;
                  }
                }
              }
            }
            goto FUN_10b286c70;
          }
        }
        return;
      }
FUN_10b286c70:
      uVar13 = *puVar2;
      *(undefined8 *)(puVar1 + 0x28) = puVar2[1];
      *(undefined8 *)(puVar1 + 0x20) = uVar13;
      *(undefined8 *)(puVar1 + 0x30) = puVar2[2];
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = 0;
      uVar13 = *param_3;
      *(undefined8 *)(puVar1 + 0x40) = param_3[1];
      *(undefined8 *)(puVar1 + 0x38) = uVar13;
      *(undefined8 *)(puVar1 + 0x48) = param_3[2];
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      *(undefined8 *)(puVar1 + 0x60) = param_4[2];
      uVar13 = *param_4;
      *(undefined8 *)(puVar1 + 0x58) = param_4[1];
      *(undefined8 *)(puVar1 + 0x50) = uVar13;
      param_4[1] = 0;
      param_4[2] = 0;
      *param_4 = 0;
      return;
    }
  }
  return;
}



/* Entry: 10b285bd8; end: 10b285c77;  */

/* WARNING: Possible PIC construction at 0x00010b285e20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b28617c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286b0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b28643c) */
/* WARNING: Removing unreachable block (ram,0x00010b286458) */
/* WARNING: Removing unreachable block (ram,0x00010b28621c) */
/* WARNING: Removing unreachable block (ram,0x00010b286238) */
/* WARNING: Removing unreachable block (ram,0x00010b286180) */
/* WARNING: Removing unreachable block (ram,0x00010b28619c) */
/* WARNING: Removing unreachable block (ram,0x00010b285e24) */
/* WARNING: Removing unreachable block (ram,0x00010b285e40) */
/* WARNING: Removing unreachable block (ram,0x00010b286b10) */
/* WARNING: Removing unreachable block (ram,0x00010b286b2c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10b285bd8(int param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  undefined8 extraout_x8_07;
  code *extraout_x8_08;
  undefined8 extraout_x8_09;
  code *extraout_x8_10;
  code *extraout_x8_11;
  undefined8 extraout_x8_12;
  code *extraout_x8_13;
  code *extraout_x8_14;
  code *extraout_x8_15;
  code *extraout_x8_16;
  undefined8 unaff_x21;
  undefined8 uVar11;
  undefined1 auStack_bf0 [96];
  undefined8 *puStack_b90;
  undefined8 *puStack_b88;
  undefined8 uStack_b80;
  undefined8 *puStack_b78;
  undefined8 *******pppppppuStack_b70;
  code *pcStack_b68;
  undefined8 *puStack_b00;
  undefined8 *puStack_af8;
  undefined8 uStack_af0;
  undefined8 *puStack_ae8;
  undefined8 *******pppppppuStack_ae0;
  code *pcStack_ad8;
  undefined1 auStack_ad0 [96];
  undefined8 *puStack_a70;
  undefined8 *puStack_a68;
  undefined8 uStack_a60;
  undefined8 *puStack_a58;
  undefined1 *******pppppppuStack_a50;
  code *pcStack_a48;
  undefined8 *******pppppppuStack_a30;
  code *pcStack_a28;
  undefined8 *puStack_9d0;
  undefined8 *puStack_9c8;
  undefined8 uStack_9c0;
  code *pcStack_9b8;
  undefined1 ******ppppppuStack_9b0;
  code *pcStack_9a8;
  undefined8 *puStack_940;
  undefined8 *puStack_938;
  undefined8 uStack_930;
  undefined8 *puStack_928;
  undefined1 ***pppuStack_920;
  code *pcStack_918;
  undefined8 uStack_908;
  undefined1 *****pppppuStack_8e0;
  code *pcStack_8d8;
  undefined1 ****ppppuStack_8c0;
  code *pcStack_8b8;
  undefined8 *puStack_8a0;
  undefined8 *puStack_898;
  undefined8 uStack_890;
  code *pcStack_888;
  undefined1 **ppuStack_880;
  code *pcStack_878;
  undefined8 *puStack_7e0;
  undefined8 *puStack_7d8;
  undefined8 uStack_7d0;
  code *pcStack_7c8;
  undefined1 *puStack_7c0;
  code *pcStack_7b8;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_6f8;
  undefined1 auStack_690 [104];
  undefined8 uStack_628;
  undefined8 *puStack_600;
  undefined8 *puStack_5f8;
  undefined1 auStack_4b0 [104];
  undefined8 uStack_448;
  undefined8 *puStack_440;
  undefined8 *puStack_438;
  undefined1 *******pppppppuStack_420;
  code *pcStack_418;
  undefined8 *******pppppppuStack_410;
  code *pcStack_408;
  undefined8 *******pppppppuStack_3f0;
  code *pcStack_3e8;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined1 ******ppppppuStack_360;
  code *pcStack_358;
  undefined8 *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined1 *****pppppuStack_2d0;
  code *pcStack_2c8;
  undefined1 auStack_2c0 [96];
  undefined1 ***pppuStack_240;
  code *pcStack_238;
  undefined1 ****ppppuStack_220;
  code *pcStack_218;
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000107c35410();
  func_0x00010b286cc0();
  uStack_48 = param_6[1];
  uStack_50 = *param_6;
  uStack_40 = param_6[2];
  param_6[1] = 0;
  param_6[2] = 0;
  *param_6 = 0;
  func_0x000107c35488();
  func_0x000107c354ac();
  func_0x000107c35434();
  func_0x000107c35494();
  func_0x000107c354d4();
  do {
    func_0x000107c354a0();
    func_0x000107c354a8();
  } while (!(bool)in_ZR);
  func_0x000107c35428();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b286d60();
  func_0x00010b286df0();
  do {
    func_0x00010b286da8();
    func_0x00010b286db0();
  } while (!(bool)in_ZR);
  func_0x00010b286da0();
  pcStack_d8 = FUN_10b285c78;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x000107c35410();
  func_0x00010b286cc0();
  func_0x000107c35454();
  func_0x000107c354ac();
  func_0x000107c35434();
  func_0x000107c35494();
  func_0x000107c354c4();
  do {
    func_0x000107c354a0();
    func_0x000107c354a8();
  } while (!(bool)in_ZR);
  func_0x000107c35428();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b286d60();
  func_0x00010b286dd4();
  do {
    func_0x00010b286da8();
    func_0x00010b286db0();
  } while (!(bool)in_ZR);
  func_0x00010b286da0();
  pcStack_198 = FUN_10b285cf4;
  ppuStack_1a0 = &puStack_e0;
  func_0x000107c35410();
  func_0x00010b286cf4();
  func_0x000107c35450();
  func_0x000107c354ac();
  func_0x000107c35434();
  func_0x000107c35494();
  func_0x000107c354bc();
  do {
    func_0x000107c354a0();
    func_0x000107c354a8();
  } while (!(bool)in_ZR);
  func_0x000107c35428();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b286d60();
  func_0x00010b286dc8();
  do {
    func_0x00010b286da8();
    func_0x00010b286db0();
  } while (!(bool)in_ZR);
  func_0x00010b286da0();
  pcStack_238 = FUN_10b285d70;
  pppuStack_240 = &ppuStack_1a0;
  func_0x000107c35410();
  func_0x000107c35448();
  func_0x000107c354ac();
  puVar2 = (undefined8 *)&UNK_110cce4d8;
  func_0x000107c35434();
  func_0x000107c35494();
  func_0x000107c354b4();
  do {
    func_0x000107c354a0();
    func_0x000107c354a8();
  } while (!(bool)in_ZR);
  func_0x000107c35428();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b286d60();
  func_0x00010b286dbc();
  do {
    func_0x00010b286da8();
    func_0x00010b286db0();
  } while (!(bool)in_ZR);
  func_0x00010b286da0();
  pcVar8 = FUN_10b285de8;
  func_0x000107c354e0();
  puVar4 = param_3;
  puVar6 = param_4;
  ppppuStack_220 = &pppuStack_240;
  pcStack_218 = pcVar8;
  func_0x000107c3541c();
  (*extraout_x8)();
  puVar1 = auStack_2c0;
  if (param_1 == 0) {
    func_0x000107c35430(unaff_x21);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286dc8();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcStack_2c8 = FUN_10b285e84;
    puStack_2f0 = param_3;
    puStack_2e8 = param_4;
    pppppuStack_2d0 = &ppppuStack_220;
    func_0x000107c3542c();
    (*extraout_x8_00)();
    if (param_1 != 0) {
      func_0x00010b286d10();
      func_0x000107c35448();
      func_0x000107c354ac();
      func_0x000107c35434();
      func_0x000107c35494();
      func_0x000107c354b4();
      do {
        func_0x000107c354a0();
        func_0x000107c354a8();
      } while (!(bool)in_ZR);
    }
    func_0x000107c35428();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286dbc();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcStack_358 = FUN_10b285f0c;
    puStack_380 = param_3;
    puStack_378 = param_4;
    ppppppuStack_360 = &pppppuStack_2d0;
    func_0x000107c35410();
    func_0x00010b286cc0();
    func_0x000107c35454();
    func_0x000107c354ac();
    func_0x000107c35434();
    func_0x000107c35494();
    func_0x000107c354c4();
    do {
      func_0x000107c354a0();
      func_0x000107c354a8();
    } while (!(bool)in_ZR);
    func_0x000107c35428();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286dd4();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcStack_418 = FUN_10b285f88;
    puStack_440 = param_3;
    puStack_438 = param_4;
    pppppppuStack_420 = &ppppppuStack_360;
    func_0x000107c35410();
    func_0x00010b286cf4();
    func_0x000107c35450();
    func_0x000107c354ac();
    func_0x000107c35434();
    func_0x000107c35494();
    func_0x000107c354bc();
    do {
      func_0x000107c354a0();
      func_0x000107c354a8();
    } while (!(bool)in_ZR);
    func_0x000107c35428();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286dc8();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcVar10 = FUN_10b286004;
    func_0x000107c354e4();
    pppppppuStack_3f0 = &pppppppuStack_420;
    pcStack_3e8 = pcVar10;
    func_0x000107c3541c();
    (*extraout_x8_01)();
    if (param_1 != 0) {
      func_0x000107c35420();
      func_0x000107c35454();
      func_0x00010b286d80();
      func_0x000107c35484();
      func_0x000107c35494();
      func_0x000107c354c4();
      do {
        func_0x000107c354a0();
        func_0x000107c354a8();
      } while (!(bool)in_ZR);
    }
    func_0x000107c35430(pcVar8);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b286d60();
      func_0x00010b286dd4();
      do {
        func_0x00010b286da8();
        func_0x00010b286db0();
      } while (!(bool)in_ZR);
      func_0x00010b286da0();
      pcVar10 = FUN_10b2860a4;
      func_0x000107c354e4();
      pppppppuStack_3f0 = &pppppppuStack_3f0;
      pcStack_3e8 = pcVar10;
      func_0x000107c3541c();
      puVar2 = (undefined8 *)&UNK_110cce7f8;
      (*extraout_x8_02)();
      if (param_1 != 0) {
        func_0x000107c35420();
        func_0x000107c35454();
        func_0x00010b286d48();
        puVar2 = (undefined8 *)&UNK_110cce7f8;
        func_0x00010b286d94();
        func_0x000107c35494();
        func_0x000107c354c4();
        do {
          func_0x000107c354a0();
          func_0x000107c354a8();
        } while (!(bool)in_ZR);
      }
      func_0x000107c35430(pcVar8);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010b286d60();
        func_0x00010b286dd4();
        do {
          func_0x00010b286da8();
          func_0x00010b286db0();
        } while (!(bool)in_ZR);
        func_0x00010b286da0();
        pcVar8 = FUN_10b286144;
        func_0x000107c354e0();
        puVar5 = puVar4;
        puVar7 = puVar6;
        pppppppuStack_410 = &pppppppuStack_3f0;
        pcStack_408 = pcVar8;
        func_0x000107c3541c();
        puVar3 = (undefined8 *)&UNK_110cce848;
        (*extraout_x8_03)();
        puVar1 = auStack_4b0;
        param_4 = puVar6;
        param_3 = puVar4;
        if (param_1 == 0) {
          func_0x000107c35430(uStack_448);
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          func_0x00010b286d60();
          func_0x00010b286dc8();
          do {
            func_0x00010b286da8();
            func_0x00010b286db0();
          } while (!(bool)in_ZR);
          func_0x00010b286da0();
          pcVar8 = FUN_10b2861e0;
          func_0x000107c354e0();
          puVar4 = puVar5;
          puVar6 = puVar7;
          pppppppuStack_410 = &pppppppuStack_410;
          pcStack_408 = pcVar8;
          func_0x000107c3541c();
          (*extraout_x8_04)();
          puVar1 = auStack_4b0;
          param_4 = puVar7;
          param_3 = puVar5;
          puVar2 = puVar3;
          if (param_1 == 0) {
            func_0x000107c35430(uStack_448);
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286dc8();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            func_0x000107c3542c();
            (*extraout_x8_05)();
            if (param_1 != 0) {
              func_0x00010b286d10();
              func_0x000107c35448();
              func_0x000107c354ac();
              func_0x000107c35434();
              func_0x000107c35494();
              func_0x000107c354b4();
              do {
                func_0x000107c354a0();
                func_0x000107c354a8();
              } while (!(bool)in_ZR);
            }
            func_0x000107c35428();
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286dbc();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            func_0x000107c35410();
            func_0x000107c35448();
            func_0x000107c354ac();
            func_0x000107c35434();
            func_0x000107c35494();
            func_0x000107c354b4();
            do {
              func_0x000107c354a0();
              func_0x000107c354a8();
            } while (!(bool)in_ZR);
            func_0x000107c35428();
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286dbc();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            puVar1 = auStack_690;
            puStack_600 = puVar5;
            puStack_5f8 = puVar7;
            func_0x000107c35438();
            func_0x000107c35414();
            func_0x000107c35444();
            func_0x000107c35454();
            func_0x000107c35460();
            puVar2 = (undefined8 *)&UNK_110ccea28;
            func_0x000107c35490();
            func_0x000107c35494();
            func_0x000107c354c4();
            do {
              func_0x000107c354a0();
              func_0x000107c354a8();
            } while (!(bool)in_ZR);
            func_0x000107c35428();
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286dd4();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            pcVar8 = FUN_10b286400;
            func_0x000107c354e0();
            puVar5 = puVar4;
            puVar7 = puVar6;
            func_0x000107c3541c();
            puVar3 = (undefined8 *)&UNK_110ccea78;
            (*extraout_x8_06)();
            param_4 = puVar6;
            param_3 = puVar4;
            if (param_1 == 0) {
              func_0x000107c35430(uStack_628);
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dc8();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              param_3 = puVar5;
              puVar2 = puVar7;
              puVar4 = param_5;
              pcVar10 = pcVar8;
              func_0x000107c35440();
              uStack_6f8 = extraout_x8_07;
              func_0x000107c35474();
              (*extraout_x8_08)();
              if (param_1 != 0) {
                uStack_788 = puVar3[1];
                uStack_790 = *puVar3;
                uStack_780 = puVar3[2];
                puVar3[1] = 0;
                puVar3[2] = 0;
                *puVar3 = 0;
                uStack_770 = puVar5[1];
                uStack_778 = *puVar5;
                uStack_768 = puVar5[2];
                puVar5[1] = 0;
                puVar5[2] = 0;
                *puVar5 = 0;
                uStack_758 = puVar7[1];
                uStack_760 = *puVar7;
                uStack_750 = puVar7[2];
                puVar7[1] = 0;
                puVar7[2] = 0;
                *puVar7 = 0;
                uStack_740 = param_5[1];
                uStack_748 = *param_5;
                uStack_738 = param_5[2];
                *param_5 = 0;
                param_5[1] = 0;
                param_5[2] = 0;
                uStack_728 = *(undefined8 *)(pcVar8 + 8);
                uStack_730 = *(undefined8 *)pcVar8;
                uStack_720 = *(undefined8 *)(pcVar8 + 0x10);
                func_0x00010b286d6c();
                func_0x00010b286dfc();
                func_0x00010b286de0();
                func_0x00010b286d80();
                func_0x000107c35484();
                func_0x000107c35494();
                do {
                  func_0x000107c354a0();
                  func_0x000107c354a8();
                } while (!(bool)in_ZR);
              }
              func_0x000107c35430(uStack_6f8);
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              func_0x000107c354dc();
              func_0x000107c35440();
              uStack_718 = extraout_x8_09;
              func_0x000107c35474();
              (*extraout_x8_10)();
              if (param_1 != 0) {
                func_0x000107c3543c();
                func_0x000107c35488();
                func_0x00010b286d80();
                func_0x000107c35484();
                func_0x000107c35494();
                func_0x000107c354d4();
                do {
                  func_0x000107c354a0();
                  func_0x000107c354a8();
                } while (!(bool)in_ZR);
              }
              func_0x000107c35430(uStack_718);
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286df0();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              func_0x000107c354e4();
              puVar6 = puVar2;
              puVar3 = puVar4;
              pcVar8 = pcVar10;
              func_0x000107c3541c();
              (*extraout_x8_11)();
              if (param_1 != 0) {
                func_0x000107c35420();
                func_0x000107c35454();
                func_0x00010b286d80();
                func_0x000107c35484();
                func_0x000107c35494();
                func_0x000107c354c4();
                do {
                  func_0x000107c354a0();
                  func_0x000107c354a8();
                } while (!(bool)in_ZR);
              }
              func_0x000107c35430(uStack_728);
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dd4();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              uStack_7d0 = 0x78;
              pcStack_7b8 = FUN_10b286724;
              pcVar9 = pcVar8;
              puStack_7e0 = puVar2;
              puStack_7d8 = puVar4;
              pcStack_7c8 = pcVar10;
              puStack_7c0 = &stack0xfffffffffffff910;
              func_0x000107c35410();
              func_0x00010b286cc0();
              func_0x000107c35454();
              func_0x000107c354ac();
              func_0x000107c35434();
              func_0x000107c35494();
              func_0x000107c354c4();
              do {
                func_0x000107c354a0();
                func_0x000107c354a8();
              } while (!(bool)in_ZR);
              func_0x000107c35428();
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dd4();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              uStack_890 = 0x78;
              pcStack_878 = FUN_10b2867a0;
              puVar5 = puVar3;
              puStack_8a0 = puVar2;
              puStack_898 = puVar4;
              pcStack_888 = pcVar8;
              ppuStack_880 = &puStack_7c0;
              func_0x000107c35410();
              func_0x00010b286cf4();
              func_0x000107c35450();
              func_0x000107c354ac();
              func_0x000107c35434();
              func_0x000107c35494();
              func_0x000107c354bc();
              do {
                func_0x000107c354a0();
                func_0x000107c354a8();
              } while (!(bool)in_ZR);
              func_0x000107c35428();
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dc8();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              uStack_930 = 0x78;
              pcStack_918 = FUN_10b28681c;
              puStack_940 = puVar2;
              puStack_938 = puVar4;
              puStack_928 = puVar3;
              pppuStack_920 = &ppuStack_880;
              func_0x000107c35410();
              func_0x000107c35448();
              func_0x000107c354ac();
              func_0x000107c35434();
              func_0x000107c35494();
              func_0x000107c354b4();
              do {
                func_0x000107c354a0();
                func_0x000107c354a8();
              } while (!(bool)in_ZR);
              func_0x000107c35428();
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dbc();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              pcVar8 = FUN_10b286894;
              func_0x000107c354dc();
              ppppuStack_8c0 = &pppuStack_920;
              pcStack_8b8 = pcVar8;
              func_0x000107c35440();
              uStack_908 = extraout_x8_12;
              func_0x000107c35474();
              (*extraout_x8_13)();
              if (param_1 != 0) {
                func_0x000107c3543c();
                func_0x000107c35488();
                func_0x00010b286d80();
                func_0x000107c35484();
                func_0x000107c35494();
                func_0x000107c354d4();
                do {
                  func_0x000107c354a0();
                  func_0x000107c354a8();
                } while (!(bool)in_ZR);
              }
              func_0x000107c35430(uStack_908);
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286df0();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              pcVar8 = FUN_10b286940;
              func_0x000107c354e4();
              param_4 = puVar6;
              puVar2 = puVar5;
              pppppuStack_8e0 = &ppppuStack_8c0;
              pcStack_8d8 = pcVar8;
              func_0x000107c3541c();
              (*extraout_x8_14)();
              if (param_1 != 0) {
                func_0x000107c35420();
                func_0x000107c35454();
                func_0x00010b286d80();
                func_0x000107c35484();
                func_0x000107c35494();
                func_0x000107c354c4();
                do {
                  func_0x000107c354a0();
                  func_0x000107c354a8();
                } while (!(bool)in_ZR);
              }
              func_0x000107c35430(pcStack_918);
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dd4();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              uStack_9c0 = 0x78;
              pcStack_9a8 = FUN_10b2869e0;
              puVar4 = puVar2;
              puStack_9d0 = puVar6;
              puStack_9c8 = puVar5;
              pcStack_9b8 = pcVar9;
              ppppppuStack_9b0 = &pppppuStack_8e0;
              func_0x000107c35410();
              func_0x00010b286cf4();
              func_0x000107c35450();
              func_0x000107c354ac();
              func_0x000107c35434();
              func_0x000107c35494();
              func_0x000107c354bc();
              do {
                func_0x000107c354a0();
                func_0x000107c354a8();
              } while (!(bool)in_ZR);
              func_0x000107c35428();
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dc8();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              puVar1 = auStack_ad0;
              uStack_a60 = 0x78;
              pcStack_a48 = FUN_10b286a5c;
              puStack_a70 = puVar6;
              puStack_a68 = puVar5;
              puStack_a58 = puVar2;
              pppppppuStack_a50 = &ppppppuStack_9b0;
              func_0x000107c35410();
              func_0x000107c35448();
              func_0x000107c354ac();
              puVar2 = (undefined8 *)&UNK_110cceed8;
              func_0x000107c35434();
              func_0x000107c35494();
              func_0x000107c354b4();
              do {
                func_0x000107c354a0();
                func_0x000107c354a8();
              } while (!(bool)in_ZR);
              func_0x000107c35428();
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dbc();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              pcVar8 = FUN_10b286ad4;
              func_0x000107c354e0();
              pppppppuStack_a30 = &pppppppuStack_a50;
              pcStack_a28 = pcVar8;
              func_0x000107c3541c();
              (*extraout_x8_15)();
              if (param_1 == 0) {
                func_0x000107c35430(puStack_a68);
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x00010b286d60();
                func_0x00010b286dc8();
                do {
                  func_0x00010b286da8();
                  func_0x00010b286db0();
                } while (!(bool)in_ZR);
                func_0x00010b286da0();
                uStack_af0 = 0x78;
                pcStack_ad8 = FUN_10b286b70;
                puStack_b00 = param_3;
                puStack_af8 = param_4;
                puStack_ae8 = puVar4;
                pppppppuStack_ae0 = &pppppppuStack_a30;
                func_0x000107c3542c();
                (*extraout_x8_16)();
                if (param_1 != 0) {
                  func_0x00010b286d10();
                  func_0x000107c35448();
                  func_0x000107c354ac();
                  func_0x000107c35434();
                  func_0x000107c35494();
                  func_0x000107c354b4();
                  do {
                    func_0x000107c354a0();
                    func_0x000107c354a8();
                  } while (!(bool)in_ZR);
                }
                func_0x000107c35428();
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x00010b286d60();
                func_0x00010b286dbc();
                do {
                  func_0x00010b286da8();
                  func_0x00010b286db0();
                } while (!(bool)in_ZR);
                func_0x00010b286da0();
                uStack_b80 = 0x78;
                pcStack_b68 = FUN_10b286bf8;
                puStack_b90 = param_3;
                puStack_b88 = param_4;
                puStack_b78 = puVar4;
                pppppppuStack_b70 = &pppppppuStack_ae0;
                func_0x000107c35410();
                func_0x000107c35448();
                func_0x000107c354ac();
                func_0x000107c35434();
                func_0x000107c35494();
                func_0x000107c354b4();
                do {
                  func_0x000107c354a0();
                  func_0x000107c354a8();
                } while (!(bool)in_ZR);
                func_0x000107c35428();
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x00010b286d60();
                func_0x00010b286dbc();
                do {
                  func_0x00010b286da8();
                  func_0x00010b286db0();
                } while (!(bool)in_ZR);
                func_0x00010b286da0();
                puVar1 = auStack_bf0;
              }
            }
          }
        }
        goto FUN_10b286c70;
      }
    }
    return;
  }
FUN_10b286c70:
  uVar11 = *puVar2;
  *(undefined8 *)(puVar1 + 0x28) = puVar2[1];
  *(undefined8 *)(puVar1 + 0x20) = uVar11;
  *(undefined8 *)(puVar1 + 0x30) = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  uVar11 = *param_3;
  *(undefined8 *)(puVar1 + 0x40) = param_3[1];
  *(undefined8 *)(puVar1 + 0x38) = uVar11;
  *(undefined8 *)(puVar1 + 0x48) = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  *(undefined8 *)(puVar1 + 0x60) = param_4[2];
  uVar11 = *param_4;
  *(undefined8 *)(puVar1 + 0x58) = param_4[1];
  *(undefined8 *)(puVar1 + 0x50) = uVar11;
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  return;
}



/* Entry: 10b285c78; end: 10b285cf3;  */

/* WARNING: Possible PIC construction at 0x00010b285e20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b28617c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286b0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b28643c) */
/* WARNING: Removing unreachable block (ram,0x00010b286458) */
/* WARNING: Removing unreachable block (ram,0x00010b28621c) */
/* WARNING: Removing unreachable block (ram,0x00010b286238) */
/* WARNING: Removing unreachable block (ram,0x00010b286180) */
/* WARNING: Removing unreachable block (ram,0x00010b28619c) */
/* WARNING: Removing unreachable block (ram,0x00010b285e24) */
/* WARNING: Removing unreachable block (ram,0x00010b285e40) */
/* WARNING: Removing unreachable block (ram,0x00010b286b10) */
/* WARNING: Removing unreachable block (ram,0x00010b286b2c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10b285c78(int param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  undefined8 extraout_x8_07;
  code *extraout_x8_08;
  undefined8 extraout_x8_09;
  code *extraout_x8_10;
  code *extraout_x8_11;
  undefined8 extraout_x8_12;
  code *extraout_x8_13;
  code *extraout_x8_14;
  code *extraout_x8_15;
  code *extraout_x8_16;
  undefined8 unaff_x21;
  undefined8 uVar11;
  undefined1 auStack_b20 [96];
  undefined8 *puStack_ac0;
  undefined8 *puStack_ab8;
  undefined8 uStack_ab0;
  undefined8 *puStack_aa8;
  undefined8 *******pppppppuStack_aa0;
  code *pcStack_a98;
  undefined8 *puStack_a30;
  undefined8 *puStack_a28;
  undefined8 uStack_a20;
  undefined8 *puStack_a18;
  undefined8 *******pppppppuStack_a10;
  code *pcStack_a08;
  undefined1 auStack_a00 [96];
  undefined8 *puStack_9a0;
  undefined8 *puStack_998;
  undefined8 uStack_990;
  undefined8 *puStack_988;
  undefined1 *******pppppppuStack_980;
  code *pcStack_978;
  undefined8 *******pppppppuStack_960;
  code *pcStack_958;
  undefined8 *puStack_900;
  undefined8 *puStack_8f8;
  undefined8 uStack_8f0;
  code *pcStack_8e8;
  undefined1 ******ppppppuStack_8e0;
  code *pcStack_8d8;
  undefined8 *puStack_870;
  undefined8 *puStack_868;
  undefined8 uStack_860;
  undefined8 *puStack_858;
  undefined1 ***pppuStack_850;
  code *pcStack_848;
  undefined8 uStack_838;
  undefined1 *****pppppuStack_810;
  code *pcStack_808;
  undefined1 ****ppppuStack_7f0;
  code *pcStack_7e8;
  undefined8 *puStack_7d0;
  undefined8 *puStack_7c8;
  undefined8 uStack_7c0;
  code *pcStack_7b8;
  undefined1 **ppuStack_7b0;
  code *pcStack_7a8;
  undefined8 *puStack_710;
  undefined8 *puStack_708;
  undefined8 uStack_700;
  code *pcStack_6f8;
  undefined1 *puStack_6f0;
  code *pcStack_6e8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_628;
  undefined1 auStack_5c0 [104];
  undefined8 uStack_558;
  undefined8 *puStack_530;
  undefined8 *puStack_528;
  undefined1 auStack_3e0 [104];
  undefined8 uStack_378;
  undefined8 *puStack_370;
  undefined8 *puStack_368;
  undefined1 ******ppppppuStack_350;
  code *pcStack_348;
  undefined8 *******pppppppuStack_340;
  code *pcStack_338;
  undefined8 *******pppppppuStack_320;
  code *pcStack_318;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined1 *****pppppuStack_290;
  code *pcStack_288;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined1 ****ppppuStack_200;
  code *pcStack_1f8;
  undefined1 auStack_1f0 [96];
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined1 ***pppuStack_150;
  code *pcStack_148;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  
  func_0x000107c35410();
  func_0x00010b286cc0();
  func_0x000107c35454();
  func_0x000107c354ac();
  func_0x000107c35434();
  func_0x000107c35494();
  func_0x000107c354c4();
  do {
    func_0x000107c354a0();
    func_0x000107c354a8();
  } while (!(bool)in_ZR);
  func_0x000107c35428();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b286d60();
  func_0x00010b286dd4();
  do {
    func_0x00010b286da8();
    func_0x00010b286db0();
  } while (!(bool)in_ZR);
  func_0x00010b286da0();
  pcStack_c8 = FUN_10b285cf4;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x000107c35410();
  func_0x00010b286cf4();
  func_0x000107c35450();
  func_0x000107c354ac();
  func_0x000107c35434();
  func_0x000107c35494();
  func_0x000107c354bc();
  do {
    func_0x000107c354a0();
    func_0x000107c354a8();
  } while (!(bool)in_ZR);
  func_0x000107c35428();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b286d60();
  func_0x00010b286dc8();
  do {
    func_0x00010b286da8();
    func_0x00010b286db0();
  } while (!(bool)in_ZR);
  func_0x00010b286da0();
  pcStack_168 = FUN_10b285d70;
  ppuStack_170 = &puStack_d0;
  func_0x000107c35410();
  func_0x000107c35448();
  func_0x000107c354ac();
  puVar2 = (undefined8 *)&UNK_110cce4d8;
  func_0x000107c35434();
  func_0x000107c35494();
  func_0x000107c354b4();
  do {
    func_0x000107c354a0();
    func_0x000107c354a8();
  } while (!(bool)in_ZR);
  func_0x000107c35428();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b286d60();
  func_0x00010b286dbc();
  do {
    func_0x00010b286da8();
    func_0x00010b286db0();
  } while (!(bool)in_ZR);
  func_0x00010b286da0();
  pcVar8 = FUN_10b285de8;
  func_0x000107c354e0();
  puVar4 = param_3;
  puVar6 = param_4;
  pppuStack_150 = &ppuStack_170;
  pcStack_148 = pcVar8;
  func_0x000107c3541c();
  (*extraout_x8)();
  puVar1 = auStack_1f0;
  if (param_1 == 0) {
    func_0x000107c35430(unaff_x21);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286dc8();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcStack_1f8 = FUN_10b285e84;
    puStack_220 = param_3;
    puStack_218 = param_4;
    ppppuStack_200 = &pppuStack_150;
    func_0x000107c3542c();
    (*extraout_x8_00)();
    if (param_1 != 0) {
      func_0x00010b286d10();
      func_0x000107c35448();
      func_0x000107c354ac();
      func_0x000107c35434();
      func_0x000107c35494();
      func_0x000107c354b4();
      do {
        func_0x000107c354a0();
        func_0x000107c354a8();
      } while (!(bool)in_ZR);
    }
    func_0x000107c35428();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286dbc();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcStack_288 = FUN_10b285f0c;
    puStack_2b0 = param_3;
    puStack_2a8 = param_4;
    pppppuStack_290 = &ppppuStack_200;
    func_0x000107c35410();
    func_0x00010b286cc0();
    func_0x000107c35454();
    func_0x000107c354ac();
    func_0x000107c35434();
    func_0x000107c35494();
    func_0x000107c354c4();
    do {
      func_0x000107c354a0();
      func_0x000107c354a8();
    } while (!(bool)in_ZR);
    func_0x000107c35428();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286dd4();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcStack_348 = FUN_10b285f88;
    puStack_370 = param_3;
    puStack_368 = param_4;
    ppppppuStack_350 = &pppppuStack_290;
    func_0x000107c35410();
    func_0x00010b286cf4();
    func_0x000107c35450();
    func_0x000107c354ac();
    func_0x000107c35434();
    func_0x000107c35494();
    func_0x000107c354bc();
    do {
      func_0x000107c354a0();
      func_0x000107c354a8();
    } while (!(bool)in_ZR);
    func_0x000107c35428();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286dc8();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcVar10 = FUN_10b286004;
    func_0x000107c354e4();
    pppppppuStack_320 = (undefined8 *******)&ppppppuStack_350;
    pcStack_318 = pcVar10;
    func_0x000107c3541c();
    (*extraout_x8_01)();
    if (param_1 != 0) {
      func_0x000107c35420();
      func_0x000107c35454();
      func_0x00010b286d80();
      func_0x000107c35484();
      func_0x000107c35494();
      func_0x000107c354c4();
      do {
        func_0x000107c354a0();
        func_0x000107c354a8();
      } while (!(bool)in_ZR);
    }
    func_0x000107c35430(pcVar8);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b286d60();
      func_0x00010b286dd4();
      do {
        func_0x00010b286da8();
        func_0x00010b286db0();
      } while (!(bool)in_ZR);
      func_0x00010b286da0();
      pcVar10 = FUN_10b2860a4;
      func_0x000107c354e4();
      pppppppuStack_320 = &pppppppuStack_320;
      pcStack_318 = pcVar10;
      func_0x000107c3541c();
      puVar2 = (undefined8 *)&UNK_110cce7f8;
      (*extraout_x8_02)();
      if (param_1 != 0) {
        func_0x000107c35420();
        func_0x000107c35454();
        func_0x00010b286d48();
        puVar2 = (undefined8 *)&UNK_110cce7f8;
        func_0x00010b286d94();
        func_0x000107c35494();
        func_0x000107c354c4();
        do {
          func_0x000107c354a0();
          func_0x000107c354a8();
        } while (!(bool)in_ZR);
      }
      func_0x000107c35430(pcVar8);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010b286d60();
        func_0x00010b286dd4();
        do {
          func_0x00010b286da8();
          func_0x00010b286db0();
        } while (!(bool)in_ZR);
        func_0x00010b286da0();
        pcVar8 = FUN_10b286144;
        func_0x000107c354e0();
        puVar5 = puVar4;
        puVar7 = puVar6;
        pppppppuStack_340 = &pppppppuStack_320;
        pcStack_338 = pcVar8;
        func_0x000107c3541c();
        puVar3 = (undefined8 *)&UNK_110cce848;
        (*extraout_x8_03)();
        puVar1 = auStack_3e0;
        param_4 = puVar6;
        param_3 = puVar4;
        if (param_1 == 0) {
          func_0x000107c35430(uStack_378);
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          func_0x00010b286d60();
          func_0x00010b286dc8();
          do {
            func_0x00010b286da8();
            func_0x00010b286db0();
          } while (!(bool)in_ZR);
          func_0x00010b286da0();
          pcVar8 = FUN_10b2861e0;
          func_0x000107c354e0();
          puVar4 = puVar5;
          puVar6 = puVar7;
          pppppppuStack_340 = &pppppppuStack_340;
          pcStack_338 = pcVar8;
          func_0x000107c3541c();
          (*extraout_x8_04)();
          puVar1 = auStack_3e0;
          param_4 = puVar7;
          param_3 = puVar5;
          puVar2 = puVar3;
          if (param_1 == 0) {
            func_0x000107c35430(uStack_378);
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286dc8();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            func_0x000107c3542c();
            (*extraout_x8_05)();
            if (param_1 != 0) {
              func_0x00010b286d10();
              func_0x000107c35448();
              func_0x000107c354ac();
              func_0x000107c35434();
              func_0x000107c35494();
              func_0x000107c354b4();
              do {
                func_0x000107c354a0();
                func_0x000107c354a8();
              } while (!(bool)in_ZR);
            }
            func_0x000107c35428();
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286dbc();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            func_0x000107c35410();
            func_0x000107c35448();
            func_0x000107c354ac();
            func_0x000107c35434();
            func_0x000107c35494();
            func_0x000107c354b4();
            do {
              func_0x000107c354a0();
              func_0x000107c354a8();
            } while (!(bool)in_ZR);
            func_0x000107c35428();
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286dbc();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            puVar1 = auStack_5c0;
            puStack_530 = puVar5;
            puStack_528 = puVar7;
            func_0x000107c35438();
            func_0x000107c35414();
            func_0x000107c35444();
            func_0x000107c35454();
            func_0x000107c35460();
            puVar2 = (undefined8 *)&UNK_110ccea28;
            func_0x000107c35490();
            func_0x000107c35494();
            func_0x000107c354c4();
            do {
              func_0x000107c354a0();
              func_0x000107c354a8();
            } while (!(bool)in_ZR);
            func_0x000107c35428();
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286dd4();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            pcVar8 = FUN_10b286400;
            func_0x000107c354e0();
            puVar5 = puVar4;
            puVar7 = puVar6;
            func_0x000107c3541c();
            puVar3 = (undefined8 *)&UNK_110ccea78;
            (*extraout_x8_06)();
            param_4 = puVar6;
            param_3 = puVar4;
            if (param_1 == 0) {
              func_0x000107c35430(uStack_558);
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dc8();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              param_3 = puVar5;
              puVar2 = puVar7;
              puVar4 = param_5;
              pcVar10 = pcVar8;
              func_0x000107c35440();
              uStack_628 = extraout_x8_07;
              func_0x000107c35474();
              (*extraout_x8_08)();
              if (param_1 != 0) {
                uStack_6b8 = puVar3[1];
                uStack_6c0 = *puVar3;
                uStack_6b0 = puVar3[2];
                puVar3[1] = 0;
                puVar3[2] = 0;
                *puVar3 = 0;
                uStack_6a0 = puVar5[1];
                uStack_6a8 = *puVar5;
                uStack_698 = puVar5[2];
                puVar5[1] = 0;
                puVar5[2] = 0;
                *puVar5 = 0;
                uStack_688 = puVar7[1];
                uStack_690 = *puVar7;
                uStack_680 = puVar7[2];
                puVar7[1] = 0;
                puVar7[2] = 0;
                *puVar7 = 0;
                uStack_670 = param_5[1];
                uStack_678 = *param_5;
                uStack_668 = param_5[2];
                *param_5 = 0;
                param_5[1] = 0;
                param_5[2] = 0;
                uStack_658 = *(undefined8 *)(pcVar8 + 8);
                uStack_660 = *(undefined8 *)pcVar8;
                uStack_650 = *(undefined8 *)(pcVar8 + 0x10);
                func_0x00010b286d6c();
                func_0x00010b286dfc();
                func_0x00010b286de0();
                func_0x00010b286d80();
                func_0x000107c35484();
                func_0x000107c35494();
                do {
                  func_0x000107c354a0();
                  func_0x000107c354a8();
                } while (!(bool)in_ZR);
              }
              func_0x000107c35430(uStack_628);
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              func_0x000107c354dc();
              func_0x000107c35440();
              uStack_648 = extraout_x8_09;
              func_0x000107c35474();
              (*extraout_x8_10)();
              if (param_1 != 0) {
                func_0x000107c3543c();
                func_0x000107c35488();
                func_0x00010b286d80();
                func_0x000107c35484();
                func_0x000107c35494();
                func_0x000107c354d4();
                do {
                  func_0x000107c354a0();
                  func_0x000107c354a8();
                } while (!(bool)in_ZR);
              }
              func_0x000107c35430(uStack_648);
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286df0();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              func_0x000107c354e4();
              puVar6 = puVar2;
              puVar3 = puVar4;
              pcVar8 = pcVar10;
              func_0x000107c3541c();
              (*extraout_x8_11)();
              if (param_1 != 0) {
                func_0x000107c35420();
                func_0x000107c35454();
                func_0x00010b286d80();
                func_0x000107c35484();
                func_0x000107c35494();
                func_0x000107c354c4();
                do {
                  func_0x000107c354a0();
                  func_0x000107c354a8();
                } while (!(bool)in_ZR);
              }
              func_0x000107c35430(uStack_658);
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dd4();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              uStack_700 = 0x78;
              pcStack_6e8 = FUN_10b286724;
              pcVar9 = pcVar8;
              puStack_710 = puVar2;
              puStack_708 = puVar4;
              pcStack_6f8 = pcVar10;
              puStack_6f0 = &stack0xfffffffffffff9e0;
              func_0x000107c35410();
              func_0x00010b286cc0();
              func_0x000107c35454();
              func_0x000107c354ac();
              func_0x000107c35434();
              func_0x000107c35494();
              func_0x000107c354c4();
              do {
                func_0x000107c354a0();
                func_0x000107c354a8();
              } while (!(bool)in_ZR);
              func_0x000107c35428();
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dd4();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              uStack_7c0 = 0x78;
              pcStack_7a8 = FUN_10b2867a0;
              puVar5 = puVar3;
              puStack_7d0 = puVar2;
              puStack_7c8 = puVar4;
              pcStack_7b8 = pcVar8;
              ppuStack_7b0 = &puStack_6f0;
              func_0x000107c35410();
              func_0x00010b286cf4();
              func_0x000107c35450();
              func_0x000107c354ac();
              func_0x000107c35434();
              func_0x000107c35494();
              func_0x000107c354bc();
              do {
                func_0x000107c354a0();
                func_0x000107c354a8();
              } while (!(bool)in_ZR);
              func_0x000107c35428();
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dc8();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              uStack_860 = 0x78;
              pcStack_848 = FUN_10b28681c;
              puStack_870 = puVar2;
              puStack_868 = puVar4;
              puStack_858 = puVar3;
              pppuStack_850 = &ppuStack_7b0;
              func_0x000107c35410();
              func_0x000107c35448();
              func_0x000107c354ac();
              func_0x000107c35434();
              func_0x000107c35494();
              func_0x000107c354b4();
              do {
                func_0x000107c354a0();
                func_0x000107c354a8();
              } while (!(bool)in_ZR);
              func_0x000107c35428();
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dbc();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              pcVar8 = FUN_10b286894;
              func_0x000107c354dc();
              ppppuStack_7f0 = &pppuStack_850;
              pcStack_7e8 = pcVar8;
              func_0x000107c35440();
              uStack_838 = extraout_x8_12;
              func_0x000107c35474();
              (*extraout_x8_13)();
              if (param_1 != 0) {
                func_0x000107c3543c();
                func_0x000107c35488();
                func_0x00010b286d80();
                func_0x000107c35484();
                func_0x000107c35494();
                func_0x000107c354d4();
                do {
                  func_0x000107c354a0();
                  func_0x000107c354a8();
                } while (!(bool)in_ZR);
              }
              func_0x000107c35430(uStack_838);
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286df0();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              pcVar8 = FUN_10b286940;
              func_0x000107c354e4();
              param_4 = puVar6;
              puVar2 = puVar5;
              pppppuStack_810 = &ppppuStack_7f0;
              pcStack_808 = pcVar8;
              func_0x000107c3541c();
              (*extraout_x8_14)();
              if (param_1 != 0) {
                func_0x000107c35420();
                func_0x000107c35454();
                func_0x00010b286d80();
                func_0x000107c35484();
                func_0x000107c35494();
                func_0x000107c354c4();
                do {
                  func_0x000107c354a0();
                  func_0x000107c354a8();
                } while (!(bool)in_ZR);
              }
              func_0x000107c35430(pcStack_848);
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dd4();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              uStack_8f0 = 0x78;
              pcStack_8d8 = FUN_10b2869e0;
              puVar4 = puVar2;
              puStack_900 = puVar6;
              puStack_8f8 = puVar5;
              pcStack_8e8 = pcVar9;
              ppppppuStack_8e0 = &pppppuStack_810;
              func_0x000107c35410();
              func_0x00010b286cf4();
              func_0x000107c35450();
              func_0x000107c354ac();
              func_0x000107c35434();
              func_0x000107c35494();
              func_0x000107c354bc();
              do {
                func_0x000107c354a0();
                func_0x000107c354a8();
              } while (!(bool)in_ZR);
              func_0x000107c35428();
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dc8();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              puVar1 = auStack_a00;
              uStack_990 = 0x78;
              pcStack_978 = FUN_10b286a5c;
              puStack_9a0 = puVar6;
              puStack_998 = puVar5;
              puStack_988 = puVar2;
              pppppppuStack_980 = &ppppppuStack_8e0;
              func_0x000107c35410();
              func_0x000107c35448();
              func_0x000107c354ac();
              puVar2 = (undefined8 *)&UNK_110cceed8;
              func_0x000107c35434();
              func_0x000107c35494();
              func_0x000107c354b4();
              do {
                func_0x000107c354a0();
                func_0x000107c354a8();
              } while (!(bool)in_ZR);
              func_0x000107c35428();
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dbc();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              pcVar8 = FUN_10b286ad4;
              func_0x000107c354e0();
              pppppppuStack_960 = &pppppppuStack_980;
              pcStack_958 = pcVar8;
              func_0x000107c3541c();
              (*extraout_x8_15)();
              if (param_1 == 0) {
                func_0x000107c35430(puStack_998);
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x00010b286d60();
                func_0x00010b286dc8();
                do {
                  func_0x00010b286da8();
                  func_0x00010b286db0();
                } while (!(bool)in_ZR);
                func_0x00010b286da0();
                uStack_a20 = 0x78;
                pcStack_a08 = FUN_10b286b70;
                puStack_a30 = param_3;
                puStack_a28 = param_4;
                puStack_a18 = puVar4;
                pppppppuStack_a10 = &pppppppuStack_960;
                func_0x000107c3542c();
                (*extraout_x8_16)();
                if (param_1 != 0) {
                  func_0x00010b286d10();
                  func_0x000107c35448();
                  func_0x000107c354ac();
                  func_0x000107c35434();
                  func_0x000107c35494();
                  func_0x000107c354b4();
                  do {
                    func_0x000107c354a0();
                    func_0x000107c354a8();
                  } while (!(bool)in_ZR);
                }
                func_0x000107c35428();
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x00010b286d60();
                func_0x00010b286dbc();
                do {
                  func_0x00010b286da8();
                  func_0x00010b286db0();
                } while (!(bool)in_ZR);
                func_0x00010b286da0();
                uStack_ab0 = 0x78;
                pcStack_a98 = FUN_10b286bf8;
                puStack_ac0 = param_3;
                puStack_ab8 = param_4;
                puStack_aa8 = puVar4;
                pppppppuStack_aa0 = &pppppppuStack_a10;
                func_0x000107c35410();
                func_0x000107c35448();
                func_0x000107c354ac();
                func_0x000107c35434();
                func_0x000107c35494();
                func_0x000107c354b4();
                do {
                  func_0x000107c354a0();
                  func_0x000107c354a8();
                } while (!(bool)in_ZR);
                func_0x000107c35428();
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x00010b286d60();
                func_0x00010b286dbc();
                do {
                  func_0x00010b286da8();
                  func_0x00010b286db0();
                } while (!(bool)in_ZR);
                func_0x00010b286da0();
                puVar1 = auStack_b20;
              }
            }
          }
        }
        goto FUN_10b286c70;
      }
    }
    return;
  }
FUN_10b286c70:
  uVar11 = *puVar2;
  *(undefined8 *)(puVar1 + 0x28) = puVar2[1];
  *(undefined8 *)(puVar1 + 0x20) = uVar11;
  *(undefined8 *)(puVar1 + 0x30) = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  uVar11 = *param_3;
  *(undefined8 *)(puVar1 + 0x40) = param_3[1];
  *(undefined8 *)(puVar1 + 0x38) = uVar11;
  *(undefined8 *)(puVar1 + 0x48) = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  *(undefined8 *)(puVar1 + 0x60) = param_4[2];
  uVar11 = *param_4;
  *(undefined8 *)(puVar1 + 0x58) = param_4[1];
  *(undefined8 *)(puVar1 + 0x50) = uVar11;
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  return;
}



/* Entry: 10b285cf4; end: 10b285d6f;  */

/* WARNING: Possible PIC construction at 0x00010b285e20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b28617c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b286b0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b28643c) */
/* WARNING: Removing unreachable block (ram,0x00010b286458) */
/* WARNING: Removing unreachable block (ram,0x00010b28621c) */
/* WARNING: Removing unreachable block (ram,0x00010b286238) */
/* WARNING: Removing unreachable block (ram,0x00010b286180) */
/* WARNING: Removing unreachable block (ram,0x00010b28619c) */
/* WARNING: Removing unreachable block (ram,0x00010b285e24) */
/* WARNING: Removing unreachable block (ram,0x00010b285e40) */
/* WARNING: Removing unreachable block (ram,0x00010b286b10) */
/* WARNING: Removing unreachable block (ram,0x00010b286b2c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10b285cf4(int param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  undefined8 extraout_x8_07;
  code *extraout_x8_08;
  undefined8 extraout_x8_09;
  code *extraout_x8_10;
  code *extraout_x8_11;
  undefined8 extraout_x8_12;
  code *extraout_x8_13;
  code *extraout_x8_14;
  code *extraout_x8_15;
  code *extraout_x8_16;
  undefined8 unaff_x21;
  undefined8 uVar11;
  undefined1 auStack_a60 [96];
  undefined8 *puStack_a00;
  undefined8 *puStack_9f8;
  undefined8 uStack_9f0;
  undefined8 *puStack_9e8;
  undefined8 *******pppppppuStack_9e0;
  code *pcStack_9d8;
  undefined8 *puStack_970;
  undefined8 *puStack_968;
  undefined8 uStack_960;
  undefined8 *puStack_958;
  undefined8 *******pppppppuStack_950;
  code *pcStack_948;
  undefined1 auStack_940 [96];
  undefined8 *puStack_8e0;
  undefined8 *puStack_8d8;
  undefined8 uStack_8d0;
  undefined8 *puStack_8c8;
  undefined1 *******pppppppuStack_8c0;
  code *pcStack_8b8;
  undefined8 *******pppppppuStack_8a0;
  code *pcStack_898;
  undefined8 *puStack_840;
  undefined8 *puStack_838;
  undefined8 uStack_830;
  code *pcStack_828;
  undefined1 ******ppppppuStack_820;
  code *pcStack_818;
  undefined8 *puStack_7b0;
  undefined8 *puStack_7a8;
  undefined8 uStack_7a0;
  undefined8 *puStack_798;
  undefined1 ***pppuStack_790;
  code *pcStack_788;
  undefined8 uStack_778;
  undefined1 *****pppppuStack_750;
  code *pcStack_748;
  undefined1 ****ppppuStack_730;
  code *pcStack_728;
  undefined8 *puStack_710;
  undefined8 *puStack_708;
  undefined8 uStack_700;
  code *pcStack_6f8;
  undefined1 **ppuStack_6f0;
  code *pcStack_6e8;
  undefined8 *puStack_650;
  undefined8 *puStack_648;
  undefined8 uStack_640;
  code *pcStack_638;
  undefined1 *puStack_630;
  code *pcStack_628;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_568;
  undefined1 auStack_500 [104];
  undefined8 uStack_498;
  undefined8 *puStack_470;
  undefined8 *puStack_468;
  undefined1 auStack_320 [104];
  undefined8 uStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *****pppppuStack_290;
  code *pcStack_288;
  undefined8 *******pppppppuStack_280;
  code *pcStack_278;
  undefined8 *******pppppppuStack_260;
  code *pcStack_258;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined1 ****ppppuStack_1d0;
  code *pcStack_1c8;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined1 ***pppuStack_140;
  code *pcStack_138;
  undefined1 auStack_130 [96];
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  
  func_0x000107c35410();
  func_0x00010b286cf4();
  func_0x000107c35450();
  func_0x000107c354ac();
  func_0x000107c35434();
  func_0x000107c35494();
  func_0x000107c354bc();
  do {
    func_0x000107c354a0();
    func_0x000107c354a8();
  } while (!(bool)in_ZR);
  func_0x000107c35428();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b286d60();
  func_0x00010b286dc8();
  do {
    func_0x00010b286da8();
    func_0x00010b286db0();
  } while (!(bool)in_ZR);
  func_0x00010b286da0();
  pcStack_a8 = FUN_10b285d70;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000107c35410();
  func_0x000107c35448();
  func_0x000107c354ac();
  puVar2 = (undefined8 *)&UNK_110cce4d8;
  func_0x000107c35434();
  func_0x000107c35494();
  func_0x000107c354b4();
  do {
    func_0x000107c354a0();
    func_0x000107c354a8();
  } while (!(bool)in_ZR);
  func_0x000107c35428();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b286d60();
  func_0x00010b286dbc();
  do {
    func_0x00010b286da8();
    func_0x00010b286db0();
  } while (!(bool)in_ZR);
  func_0x00010b286da0();
  pcVar8 = FUN_10b285de8;
  func_0x000107c354e0();
  puVar4 = param_3;
  puVar6 = param_4;
  ppuStack_90 = &puStack_b0;
  pcStack_88 = pcVar8;
  func_0x000107c3541c();
  (*extraout_x8)();
  puVar1 = auStack_130;
  if (param_1 == 0) {
    func_0x000107c35430(unaff_x21);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286dc8();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcStack_138 = FUN_10b285e84;
    puStack_160 = param_3;
    puStack_158 = param_4;
    pppuStack_140 = &ppuStack_90;
    func_0x000107c3542c();
    (*extraout_x8_00)();
    if (param_1 != 0) {
      func_0x00010b286d10();
      func_0x000107c35448();
      func_0x000107c354ac();
      func_0x000107c35434();
      func_0x000107c35494();
      func_0x000107c354b4();
      do {
        func_0x000107c354a0();
        func_0x000107c354a8();
      } while (!(bool)in_ZR);
    }
    func_0x000107c35428();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286dbc();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcStack_1c8 = FUN_10b285f0c;
    puStack_1f0 = param_3;
    puStack_1e8 = param_4;
    ppppuStack_1d0 = &pppuStack_140;
    func_0x000107c35410();
    func_0x00010b286cc0();
    func_0x000107c35454();
    func_0x000107c354ac();
    func_0x000107c35434();
    func_0x000107c35494();
    func_0x000107c354c4();
    do {
      func_0x000107c354a0();
      func_0x000107c354a8();
    } while (!(bool)in_ZR);
    func_0x000107c35428();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286dd4();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcStack_288 = FUN_10b285f88;
    puStack_2b0 = param_3;
    puStack_2a8 = param_4;
    pppppuStack_290 = (undefined8 *****)&ppppuStack_1d0;
    func_0x000107c35410();
    func_0x00010b286cf4();
    func_0x000107c35450();
    func_0x000107c354ac();
    func_0x000107c35434();
    func_0x000107c35494();
    func_0x000107c354bc();
    do {
      func_0x000107c354a0();
      func_0x000107c354a8();
    } while (!(bool)in_ZR);
    func_0x000107c35428();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010b286d60();
    func_0x00010b286dc8();
    do {
      func_0x00010b286da8();
      func_0x00010b286db0();
    } while (!(bool)in_ZR);
    func_0x00010b286da0();
    pcVar10 = FUN_10b286004;
    func_0x000107c354e4();
    pppppppuStack_260 = (undefined8 *******)&pppppuStack_290;
    pcStack_258 = pcVar10;
    func_0x000107c3541c();
    (*extraout_x8_01)();
    if (param_1 != 0) {
      func_0x000107c35420();
      func_0x000107c35454();
      func_0x00010b286d80();
      func_0x000107c35484();
      func_0x000107c35494();
      func_0x000107c354c4();
      do {
        func_0x000107c354a0();
        func_0x000107c354a8();
      } while (!(bool)in_ZR);
    }
    func_0x000107c35430(pcVar8);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b286d60();
      func_0x00010b286dd4();
      do {
        func_0x00010b286da8();
        func_0x00010b286db0();
      } while (!(bool)in_ZR);
      func_0x00010b286da0();
      pcVar10 = FUN_10b2860a4;
      func_0x000107c354e4();
      pppppppuStack_260 = &pppppppuStack_260;
      pcStack_258 = pcVar10;
      func_0x000107c3541c();
      puVar2 = (undefined8 *)&UNK_110cce7f8;
      (*extraout_x8_02)();
      if (param_1 != 0) {
        func_0x000107c35420();
        func_0x000107c35454();
        func_0x00010b286d48();
        puVar2 = (undefined8 *)&UNK_110cce7f8;
        func_0x00010b286d94();
        func_0x000107c35494();
        func_0x000107c354c4();
        do {
          func_0x000107c354a0();
          func_0x000107c354a8();
        } while (!(bool)in_ZR);
      }
      func_0x000107c35430(pcVar8);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010b286d60();
        func_0x00010b286dd4();
        do {
          func_0x00010b286da8();
          func_0x00010b286db0();
        } while (!(bool)in_ZR);
        func_0x00010b286da0();
        pcVar8 = FUN_10b286144;
        func_0x000107c354e0();
        puVar5 = puVar4;
        puVar7 = puVar6;
        pppppppuStack_280 = &pppppppuStack_260;
        pcStack_278 = pcVar8;
        func_0x000107c3541c();
        puVar3 = (undefined8 *)&UNK_110cce848;
        (*extraout_x8_03)();
        puVar1 = auStack_320;
        param_4 = puVar6;
        param_3 = puVar4;
        if (param_1 == 0) {
          func_0x000107c35430(uStack_2b8);
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          func_0x00010b286d60();
          func_0x00010b286dc8();
          do {
            func_0x00010b286da8();
            func_0x00010b286db0();
          } while (!(bool)in_ZR);
          func_0x00010b286da0();
          pcVar8 = FUN_10b2861e0;
          func_0x000107c354e0();
          puVar4 = puVar5;
          puVar6 = puVar7;
          pppppppuStack_280 = &pppppppuStack_280;
          pcStack_278 = pcVar8;
          func_0x000107c3541c();
          (*extraout_x8_04)();
          puVar1 = auStack_320;
          param_4 = puVar7;
          param_3 = puVar5;
          puVar2 = puVar3;
          if (param_1 == 0) {
            func_0x000107c35430(uStack_2b8);
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286dc8();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            func_0x000107c3542c();
            (*extraout_x8_05)();
            if (param_1 != 0) {
              func_0x00010b286d10();
              func_0x000107c35448();
              func_0x000107c354ac();
              func_0x000107c35434();
              func_0x000107c35494();
              func_0x000107c354b4();
              do {
                func_0x000107c354a0();
                func_0x000107c354a8();
              } while (!(bool)in_ZR);
            }
            func_0x000107c35428();
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286dbc();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            func_0x000107c35410();
            func_0x000107c35448();
            func_0x000107c354ac();
            func_0x000107c35434();
            func_0x000107c35494();
            func_0x000107c354b4();
            do {
              func_0x000107c354a0();
              func_0x000107c354a8();
            } while (!(bool)in_ZR);
            func_0x000107c35428();
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286dbc();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            puVar1 = auStack_500;
            puStack_470 = puVar5;
            puStack_468 = puVar7;
            func_0x000107c35438();
            func_0x000107c35414();
            func_0x000107c35444();
            func_0x000107c35454();
            func_0x000107c35460();
            puVar2 = (undefined8 *)&UNK_110ccea28;
            func_0x000107c35490();
            func_0x000107c35494();
            func_0x000107c354c4();
            do {
              func_0x000107c354a0();
              func_0x000107c354a8();
            } while (!(bool)in_ZR);
            func_0x000107c35428();
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x00010b286d60();
            func_0x00010b286dd4();
            do {
              func_0x00010b286da8();
              func_0x00010b286db0();
            } while (!(bool)in_ZR);
            func_0x00010b286da0();
            pcVar8 = FUN_10b286400;
            func_0x000107c354e0();
            puVar5 = puVar4;
            puVar7 = puVar6;
            func_0x000107c3541c();
            puVar3 = (undefined8 *)&UNK_110ccea78;
            (*extraout_x8_06)();
            param_4 = puVar6;
            param_3 = puVar4;
            if (param_1 == 0) {
              func_0x000107c35430(uStack_498);
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dc8();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              param_3 = puVar5;
              puVar2 = puVar7;
              puVar4 = param_5;
              pcVar10 = pcVar8;
              func_0x000107c35440();
              uStack_568 = extraout_x8_07;
              func_0x000107c35474();
              (*extraout_x8_08)();
              if (param_1 != 0) {
                uStack_5f8 = puVar3[1];
                uStack_600 = *puVar3;
                uStack_5f0 = puVar3[2];
                puVar3[1] = 0;
                puVar3[2] = 0;
                *puVar3 = 0;
                uStack_5e0 = puVar5[1];
                uStack_5e8 = *puVar5;
                uStack_5d8 = puVar5[2];
                puVar5[1] = 0;
                puVar5[2] = 0;
                *puVar5 = 0;
                uStack_5c8 = puVar7[1];
                uStack_5d0 = *puVar7;
                uStack_5c0 = puVar7[2];
                puVar7[1] = 0;
                puVar7[2] = 0;
                *puVar7 = 0;
                uStack_5b0 = param_5[1];
                uStack_5b8 = *param_5;
                uStack_5a8 = param_5[2];
                *param_5 = 0;
                param_5[1] = 0;
                param_5[2] = 0;
                uStack_598 = *(undefined8 *)(pcVar8 + 8);
                uStack_5a0 = *(undefined8 *)pcVar8;
                uStack_590 = *(undefined8 *)(pcVar8 + 0x10);
                func_0x00010b286d6c();
                func_0x00010b286dfc();
                func_0x00010b286de0();
                func_0x00010b286d80();
                func_0x000107c35484();
                func_0x000107c35494();
                do {
                  func_0x000107c354a0();
                  func_0x000107c354a8();
                } while (!(bool)in_ZR);
              }
              func_0x000107c35430(uStack_568);
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              func_0x000107c354dc();
              func_0x000107c35440();
              uStack_588 = extraout_x8_09;
              func_0x000107c35474();
              (*extraout_x8_10)();
              if (param_1 != 0) {
                func_0x000107c3543c();
                func_0x000107c35488();
                func_0x00010b286d80();
                func_0x000107c35484();
                func_0x000107c35494();
                func_0x000107c354d4();
                do {
                  func_0x000107c354a0();
                  func_0x000107c354a8();
                } while (!(bool)in_ZR);
              }
              func_0x000107c35430(uStack_588);
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286df0();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              func_0x000107c354e4();
              puVar6 = puVar2;
              puVar3 = puVar4;
              pcVar8 = pcVar10;
              func_0x000107c3541c();
              (*extraout_x8_11)();
              if (param_1 != 0) {
                func_0x000107c35420();
                func_0x000107c35454();
                func_0x00010b286d80();
                func_0x000107c35484();
                func_0x000107c35494();
                func_0x000107c354c4();
                do {
                  func_0x000107c354a0();
                  func_0x000107c354a8();
                } while (!(bool)in_ZR);
              }
              func_0x000107c35430(uStack_598);
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dd4();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              uStack_640 = 0x78;
              pcStack_628 = FUN_10b286724;
              pcVar9 = pcVar8;
              puStack_650 = puVar2;
              puStack_648 = puVar4;
              pcStack_638 = pcVar10;
              puStack_630 = &stack0xfffffffffffffaa0;
              func_0x000107c35410();
              func_0x00010b286cc0();
              func_0x000107c35454();
              func_0x000107c354ac();
              func_0x000107c35434();
              func_0x000107c35494();
              func_0x000107c354c4();
              do {
                func_0x000107c354a0();
                func_0x000107c354a8();
              } while (!(bool)in_ZR);
              func_0x000107c35428();
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dd4();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              uStack_700 = 0x78;
              pcStack_6e8 = FUN_10b2867a0;
              puVar5 = puVar3;
              puStack_710 = puVar2;
              puStack_708 = puVar4;
              pcStack_6f8 = pcVar8;
              ppuStack_6f0 = &puStack_630;
              func_0x000107c35410();
              func_0x00010b286cf4();
              func_0x000107c35450();
              func_0x000107c354ac();
              func_0x000107c35434();
              func_0x000107c35494();
              func_0x000107c354bc();
              do {
                func_0x000107c354a0();
                func_0x000107c354a8();
              } while (!(bool)in_ZR);
              func_0x000107c35428();
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dc8();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              uStack_7a0 = 0x78;
              pcStack_788 = FUN_10b28681c;
              puStack_7b0 = puVar2;
              puStack_7a8 = puVar4;
              puStack_798 = puVar3;
              pppuStack_790 = &ppuStack_6f0;
              func_0x000107c35410();
              func_0x000107c35448();
              func_0x000107c354ac();
              func_0x000107c35434();
              func_0x000107c35494();
              func_0x000107c354b4();
              do {
                func_0x000107c354a0();
                func_0x000107c354a8();
              } while (!(bool)in_ZR);
              func_0x000107c35428();
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dbc();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              pcVar8 = FUN_10b286894;
              func_0x000107c354dc();
              ppppuStack_730 = &pppuStack_790;
              pcStack_728 = pcVar8;
              func_0x000107c35440();
              uStack_778 = extraout_x8_12;
              func_0x000107c35474();
              (*extraout_x8_13)();
              if (param_1 != 0) {
                func_0x000107c3543c();
                func_0x000107c35488();
                func_0x00010b286d80();
                func_0x000107c35484();
                func_0x000107c35494();
                func_0x000107c354d4();
                do {
                  func_0x000107c354a0();
                  func_0x000107c354a8();
                } while (!(bool)in_ZR);
              }
              func_0x000107c35430(uStack_778);
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286df0();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              pcVar8 = FUN_10b286940;
              func_0x000107c354e4();
              param_4 = puVar6;
              puVar2 = puVar5;
              pppppuStack_750 = &ppppuStack_730;
              pcStack_748 = pcVar8;
              func_0x000107c3541c();
              (*extraout_x8_14)();
              if (param_1 != 0) {
                func_0x000107c35420();
                func_0x000107c35454();
                func_0x00010b286d80();
                func_0x000107c35484();
                func_0x000107c35494();
                func_0x000107c354c4();
                do {
                  func_0x000107c354a0();
                  func_0x000107c354a8();
                } while (!(bool)in_ZR);
              }
              func_0x000107c35430(pcStack_788);
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dd4();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              uStack_830 = 0x78;
              pcStack_818 = FUN_10b2869e0;
              puVar4 = puVar2;
              puStack_840 = puVar6;
              puStack_838 = puVar5;
              pcStack_828 = pcVar9;
              ppppppuStack_820 = &pppppuStack_750;
              func_0x000107c35410();
              func_0x00010b286cf4();
              func_0x000107c35450();
              func_0x000107c354ac();
              func_0x000107c35434();
              func_0x000107c35494();
              func_0x000107c354bc();
              do {
                func_0x000107c354a0();
                func_0x000107c354a8();
              } while (!(bool)in_ZR);
              func_0x000107c35428();
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dc8();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              puVar1 = auStack_940;
              uStack_8d0 = 0x78;
              pcStack_8b8 = FUN_10b286a5c;
              puStack_8e0 = puVar6;
              puStack_8d8 = puVar5;
              puStack_8c8 = puVar2;
              pppppppuStack_8c0 = &ppppppuStack_820;
              func_0x000107c35410();
              func_0x000107c35448();
              func_0x000107c354ac();
              puVar2 = (undefined8 *)&UNK_110cceed8;
              func_0x000107c35434();
              func_0x000107c35494();
              func_0x000107c354b4();
              do {
                func_0x000107c354a0();
                func_0x000107c354a8();
              } while (!(bool)in_ZR);
              func_0x000107c35428();
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010b286d60();
              func_0x00010b286dbc();
              do {
                func_0x00010b286da8();
                func_0x00010b286db0();
              } while (!(bool)in_ZR);
              func_0x00010b286da0();
              pcVar8 = FUN_10b286ad4;
              func_0x000107c354e0();
              pppppppuStack_8a0 = &pppppppuStack_8c0;
              pcStack_898 = pcVar8;
              func_0x000107c3541c();
              (*extraout_x8_15)();
              if (param_1 == 0) {
                func_0x000107c35430(puStack_8d8);
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x00010b286d60();
                func_0x00010b286dc8();
                do {
                  func_0x00010b286da8();
                  func_0x00010b286db0();
                } while (!(bool)in_ZR);
                func_0x00010b286da0();
                uStack_960 = 0x78;
                pcStack_948 = FUN_10b286b70;
                puStack_970 = param_3;
                puStack_968 = param_4;
                puStack_958 = puVar4;
                pppppppuStack_950 = &pppppppuStack_8a0;
                func_0x000107c3542c();
                (*extraout_x8_16)();
                if (param_1 != 0) {
                  func_0x00010b286d10();
                  func_0x000107c35448();
                  func_0x000107c354ac();
                  func_0x000107c35434();
                  func_0x000107c35494();
                  func_0x000107c354b4();
                  do {
                    func_0x000107c354a0();
                    func_0x000107c354a8();
                  } while (!(bool)in_ZR);
                }
                func_0x000107c35428();
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x00010b286d60();
                func_0x00010b286dbc();
                do {
                  func_0x00010b286da8();
                  func_0x00010b286db0();
                } while (!(bool)in_ZR);
                func_0x00010b286da0();
                uStack_9f0 = 0x78;
                pcStack_9d8 = FUN_10b286bf8;
                puStack_a00 = param_3;
                puStack_9f8 = param_4;
                puStack_9e8 = puVar4;
                pppppppuStack_9e0 = &pppppppuStack_950;
                func_0x000107c35410();
                func_0x000107c35448();
                func_0x000107c354ac();
                func_0x000107c35434();
                func_0x000107c35494();
                func_0x000107c354b4();
                do {
                  func_0x000107c354a0();
                  func_0x000107c354a8();
                } while (!(bool)in_ZR);
                func_0x000107c35428();
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x00010b286d60();
                func_0x00010b286dbc();
                do {
                  func_0x00010b286da8();
                  func_0x00010b286db0();
                } while (!(bool)in_ZR);
                func_0x00010b286da0();
                puVar1 = auStack_a60;
              }
            }
          }
        }
        goto FUN_10b286c70;
      }
    }
    return;
  }
FUN_10b286c70:
  uVar11 = *puVar2;
  *(undefined8 *)(puVar1 + 0x28) = puVar2[1];
  *(undefined8 *)(puVar1 + 0x20) = uVar11;
  *(undefined8 *)(puVar1 + 0x30) = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  uVar11 = *param_3;
  *(undefined8 *)(puVar1 + 0x40) = param_3[1];
  *(undefined8 *)(puVar1 + 0x38) = uVar11;
  *(undefined8 *)(puVar1 + 0x48) = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  *(undefined8 *)(puVar1 + 0x60) = param_4[2];
  uVar11 = *param_4;
  *(undefined8 *)(puVar1 + 0x58) = param_4[1];
  *(undefined8 *)(puVar1 + 0x50) = uVar11;
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  return;
}


