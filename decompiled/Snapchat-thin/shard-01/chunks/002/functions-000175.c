/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100e17944; end: 100e17b37;  */

/* WARNING: Possible PIC construction at 0x000100e17a7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e17a8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e17a9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e17b04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e17b14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e17af4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e17b18) */
/* WARNING: Removing unreachable block (ram,0x000100e17b08) */
/* WARNING: Removing unreachable block (ram,0x000100e17aa0) */
/* WARNING: Removing unreachable block (ram,0x000100e17a90) */
/* WARNING: Removing unreachable block (ram,0x000100e17a80) */
/* WARNING: Removing unreachable block (ram,0x000100e17af8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e17944(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5b3e0();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = unaff_x20;
      func_0x000107c4d52c();
      func_0x000107c61180();
      if (lVar4 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar5 = unaff_x20;
        func_0x000107c3e8cc();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c61170(lVar2);
          lVar2 = lVar3;
        }
        else {
          func_0x000107c45284();
          func_0x000107c61180();
          if (unaff_x20 != 0) {
            lVar6 = 0;
            FUN_100e17274();
            lVar2 = lVar6;
            func_0x000107c610f8();
            *(undefined8 *)(lVar2 + _DAT_112d390f0) = 0;
            *(long *)(lVar2 + _DAT_112d390f8) = lVar3;
            *(long *)(lVar2 + _DAT_112d39100) = lVar4;
            *(long *)(lVar2 + _DAT_112d39108) = lVar5;
            *(long *)(lVar2 + _DAT_112d39110) = unaff_x20;
            puVar1 = PTR_s_init_1125d9248;
            lStack_60 = lVar2;
            lStack_58 = lVar6;
            func_0x000107c61174(lVar3);
            func_0x000107c61174(lVar4);
            func_0x000107c61174(lVar5);
            func_0x000107c61174(unaff_x20);
            func_0x000107c61154(&lStack_60,puVar1);
            FUN_100e16968();
            lVar2 = unaff_x20;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 100e17b38; end: 100e17b5f; -[SCContextualNotificationPromptFeatureEntryPoint begin] */

void FUN_100e17b38(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100e17944();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100e17b60; end: 100e17ba3; -[SCContextualNotificationPromptFeatureEntryPoint end] */

void FUN_100e17b60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e17ba4; end: 100e17e87;  */

void FUN_100e17ba4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0x7672655370616e73;
    if (((param_2 == 0x7672655370616e73) && (param_3 == -0x13ffffff8c9a9c97)) ||
       (func_0x000107c605b8(0x7672655370616e73,0xec00000073656369,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c59470();
    }
    else {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffee) && (param_3 == -0x7ffffffef10edf60)) ||
         (func_0x000107c605b8(0xd000000000000012,0x800000010ef120a0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c569f0();
      }
      else {
        if ((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef10eeea0)) {
          uVar2 = 0xd000000000000019;
          func_0x000107c605b8(0xd000000000000019,0x800000010ef11160,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            if ((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef10edf40)) {
              uVar2 = 0xd000000000000019;
              func_0x000107c605b8(0xd000000000000019,0x800000010ef120c0,param_2,param_3,0);
              if ((uVar2 & 1) == 0) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "ContextualNotificationPromptFeature/SCContextualNotificationPromptFeatureEntryPoint.swift"
                                    ,0x59,2,0x38,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x100e17e88);
                (*pcVar1)();
              }
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c5532c();
            goto LAB_100e17c30;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c52c50();
      }
    }
  }
LAB_100e17c30:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100e17e88; end: 100e17f33; -[SCContextualNotificationPromptFeatureEntryPoint setValue:forIvarName:] */

void FUN_100e17e88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100e17ba4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100e17f34; end: 100e17fdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e17f34(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d39148,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d39150,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d39158,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d39160,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d39168) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d39170) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e17fdc; end: 100e17ffb; -[SCContextualNotificationPromptFeatureEntryPoint init] */

void FUN_100e17fdc(void)

{
  FUN_100e17f34();
  return;
}



/* Entry: 100e17ffc; end: 100e1802f;  */

void FUN_100e17ffc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e18030; end: 100e180a7; -[SCContextualNotificationPromptFeatureEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100e1808c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e18090) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e18030(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d39148);
  func_0x000107c61610(param_1 + _DAT_112d39150);
  func_0x000107c61610(param_1 + _DAT_112d39158);
  func_0x000107c61610(param_1 + _DAT_112d39160);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d39168));
  return;
}



/* Entry: 100e180a8; end: 100e180c7;  */

void FUN_100e180a8(void)

{
  func_0x000107c61168(&PTR_PTR_1127998e8);
  return;
}



/* Entry: 100e180c8; end: 100e1811b;  */

void FUN_100e180c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 100e1811c; end: 100e18317;  */

void FUN_100e1811c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined1 auStack_320 [96];
  undefined1 auStack_2c0 [64];
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [96];
  undefined1 auStack_1c0 [96];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x50);
  lStack_90 = *(long *)(unaff_x20 + 0x48);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x38);
  if (lStack_90 == 1) {
    func_0x00010448a8f4(auStack_220);
    func_0x00010448aa5c(auStack_1c0);
    FUN_100e19000(auStack_220);
    lVar3 = 0x112d38300;
    func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
    puVar6 = auStack_2c0;
    func_0x000107c61534();
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    ppuVar4 = &PTR____CFConstantStringClassReference_110dadcb8;
    func_0x000107c5faec();
    *(undefined8 *)(lVar3 + 0x20) = ppuVar4;
    uVar2 = uRam0000000112d39528;
    uVar1 = uRam0000000112d39520;
    *(undefined1 **)(lVar3 + 0x28) = puVar6;
    *(undefined8 *)(lVar3 + 0x30) = uVar1;
    *(undefined8 *)(lVar3 + 0x38) = uVar2;
    func_0x000107c61434();
    lVar5 = lVar3;
    func_0x0001001830b8(lVar3);
    func_0x000107c61588(lVar3);
    func_0x000100e19070((undefined8 *)(lVar3 + 0x20),0x112d38308,&UNK_10d902040);
    func_0x00010448a92c(&uStack_160,lVar5);
    uStack_d8 = uStack_138;
    uStack_e0 = uStack_140;
    uStack_c8 = uStack_128;
    uStack_d0 = uStack_130;
    uStack_b8 = uStack_118;
    uStack_c0 = uStack_120;
    uStack_a8 = uStack_108;
    uStack_b0 = uStack_110;
    uStack_f8 = uStack_158;
    uStack_100 = uStack_160;
    uStack_e8 = uStack_148;
    uStack_f0 = uStack_150;
    func_0x000107c6142c(lVar5);
    FUN_100e19000(auStack_1c0);
    uStack_258 = *(undefined8 *)(unaff_x20 + 0x60);
    uStack_260 = *(undefined8 *)(unaff_x20 + 0x58);
    uStack_248 = *(undefined8 *)(unaff_x20 + 0x70);
    uStack_250 = *(undefined8 *)(unaff_x20 + 0x68);
    uStack_238 = *(undefined8 *)(unaff_x20 + 0x80);
    uStack_240 = *(undefined8 *)(unaff_x20 + 0x78);
    uStack_228 = *(undefined8 *)(unaff_x20 + 0x90);
    uStack_230 = *(undefined8 *)(unaff_x20 + 0x88);
    uStack_278 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_280 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_268 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_270 = *(undefined8 *)(unaff_x20 + 0x48);
    *(undefined8 *)(unaff_x20 + 0x40) = uStack_158;
    *(undefined8 *)(unaff_x20 + 0x38) = uStack_160;
    *(undefined8 *)(unaff_x20 + 0x50) = uStack_148;
    *(undefined8 *)(unaff_x20 + 0x48) = uStack_150;
    *(undefined8 *)(unaff_x20 + 0x60) = uStack_138;
    *(undefined8 *)(unaff_x20 + 0x58) = uStack_140;
    *(undefined8 *)(unaff_x20 + 0x70) = uStack_128;
    *(undefined8 *)(unaff_x20 + 0x68) = uStack_130;
    *(undefined8 *)(unaff_x20 + 0x80) = uStack_118;
    *(undefined8 *)(unaff_x20 + 0x78) = uStack_120;
    *(undefined8 *)(unaff_x20 + 0x90) = uStack_108;
    *(undefined8 *)(unaff_x20 + 0x88) = uStack_110;
    func_0x000100e19034(&uStack_160,auStack_320);
    func_0x000100e19070(&uStack_280,0x112d39270,&UNK_10d902fa0);
  }
  else {
    uStack_d8 = *(undefined8 *)(unaff_x20 + 0x60);
    uStack_e0 = *(undefined8 *)(unaff_x20 + 0x58);
    uStack_c8 = *(undefined8 *)(unaff_x20 + 0x70);
    uStack_d0 = *(undefined8 *)(unaff_x20 + 0x68);
    uStack_b8 = *(undefined8 *)(unaff_x20 + 0x80);
    uStack_c0 = *(undefined8 *)(unaff_x20 + 0x78);
    uStack_a8 = *(undefined8 *)(unaff_x20 + 0x90);
    uStack_b0 = *(undefined8 *)(unaff_x20 + 0x88);
    uStack_f8 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_100 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_e8 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_f0 = *(undefined8 *)(unaff_x20 + 0x48);
  }
  func_0x000100e190b0(&uStack_a0,&uStack_280);
  param_1[5] = uStack_d8;
  param_1[4] = uStack_e0;
  param_1[7] = uStack_c8;
  param_1[6] = uStack_d0;
  param_1[9] = uStack_b8;
  param_1[8] = uStack_c0;
  param_1[0xb] = uStack_a8;
  param_1[10] = uStack_b0;
  param_1[1] = uStack_f8;
  *param_1 = uStack_100;
  param_1[3] = uStack_e8;
  param_1[2] = uStack_f0;
  return;
}



/* Entry: 100e18318; end: 100e18333;  */

void FUN_100e18318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1a0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1a8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x198) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100e18334,0,0);
  return;
}



/* Entry: 100e18334; end: 100e1842f;  */

void FUN_100e18334(void)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  int *piVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  puVar2 = *(undefined8 **)(unaff_x22 + 0x198);
  *(undefined8 *)(unaff_x22 + 0x128) = 0xc000000000000000;
  *(undefined8 *)(unaff_x22 + 0x120) = 0;
  uVar5 = *puVar2;
  *(undefined8 *)(unaff_x22 + 0x138) = puVar2[1];
  *(undefined8 *)(unaff_x22 + 0x130) = uVar5;
  uVar5 = *puVar2;
  *(undefined8 *)(unaff_x22 + 0xf8) = puVar2[1];
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar5;
  uVar5 = puVar2[2];
  *(undefined8 *)(unaff_x22 + 0x148) = puVar2[3];
  *(undefined8 *)(unaff_x22 + 0x140) = uVar5;
  uVar5 = puVar2[2];
  *(undefined8 *)(unaff_x22 + 0x108) = puVar2[3];
  *(undefined8 *)(unaff_x22 + 0x100) = uVar5;
  uVar5 = puVar2[4];
  *(undefined8 *)(unaff_x22 + 0x158) = puVar2[5];
  *(undefined8 *)(unaff_x22 + 0x150) = uVar5;
  uVar5 = puVar2[4];
  *(undefined8 *)(unaff_x22 + 0x118) = puVar2[5];
  *(undefined8 *)(unaff_x22 + 0x110) = uVar5;
  puVar2 = (undefined8 *)(*(long *)(unaff_x22 + 0x1a0) + 0x10);
  func_0x0001000a8868(puVar2,*(undefined8 *)(*(long *)(unaff_x22 + 0x1a0) + 0x28));
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x108);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x128);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x120);
  func_0x000100402194(unaff_x22 + 0x130,unaff_x22 + 0x160);
  func_0x000100402194(unaff_x22 + 0x140,unaff_x22 + 0x170);
  func_0x000100402194(unaff_x22 + 0x150,unaff_x22 + 0x180);
  FUN_100e1811c(unaff_x22 + 0x10);
  piVar4 = *(int **)(*(long *)*puVar2 + 0x78);
  iVar1 = *piVar4;
  plVar3 = (long *)(ulong)(uint)piVar4[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1b0) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100e18430;
                    /* WARNING: Could not recover jumptable at 0x000100e1842c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))(plVar3,unaff_x22 + 0xb0,unaff_x22 + 0x70,unaff_x22 + 0x10)
  ;
  return;
}



/* Entry: 100e18430; end: 100e184a3;  */

void FUN_100e18430(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1b8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1b0));
  func_0x000100e19070(lVar2 + 0x10,0x112d39250,&UNK_10d9d84e0);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100e184a4;
  }
  else {
    pcVar1 = FUN_100e18604;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100e184a4; end: 100e18603;  */

void FUN_100e184a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar5 = *(ulong *)(unaff_x22 + 0xd8);
  if (((uVar5 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    FUN_100e18a14();
    puVar3 = &UNK_110355a98;
    func_0x000107c613f8(&UNK_110355a98,param_1,0,0);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x00010488ade0();
    FUN_100e18a54(unaff_x22 + 0xb0);
    func_0x000107c614ac(puVar3);
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar2 = *(undefined8 *)(unaff_x22 + 200);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
    if ((uVar5 >> 0x3d & 1) == 0) {
      FUN_100e18a14();
      puVar3 = &UNK_110355a98;
      func_0x000107c613f8(&UNK_110355a98,param_1,0,0);
      *param_1 = uVar1;
      param_1[1] = uVar2;
      FUN_100e18b3c(uVar1,uVar2,uVar6,uVar5);
      func_0x000107c61434(uVar2);
      func_0x00010488ade0(puVar3);
      FUN_100e18a54(unaff_x22 + 0xb0);
      func_0x000107c614ac(puVar3);
      FUN_100e18ad8(uVar1,uVar2,uVar6,uVar5);
    }
    else {
      FUN_100e18a88(uVar1,uVar2,uVar6,uVar5);
      uVar4 = uVar1;
      FUN_100e1867c();
      *(undefined8 *)(unaff_x22 + 400) = uVar4;
      func_0x000100b60084(unaff_x22 + 400);
      FUN_100e18ad8(uVar1,uVar2,uVar6,uVar5);
      FUN_100e18a54(unaff_x22 + 0xb0);
      func_0x000107c6142c(uVar4);
    }
  }
  FUN_100e189e0(unaff_x22 + 0xf0);
                    /* WARNING: Could not recover jumptable at 0x000100e18600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100e18604; end: 100e1867b;  */

void FUN_100e18604(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1b8);
  puVar1 = (undefined8 *)(unaff_x22 + 0xf0);
  FUN_100e189e0();
  FUN_100e18a14();
  puVar2 = &UNK_110355a98;
  func_0x000107c613f8(&UNK_110355a98,puVar1,0,0);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x00010488ade0();
  func_0x000107c614ac(puVar2);
  func_0x000107c614ac(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100e18678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100e1867c; end: 100e18797;  */

/* WARNING: Removing unreachable block (ram,0x000100e18784) */

undefined * FUN_100e1867c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  lVar3 = *(long *)(param_1 + 0x10);
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar3 != 0) {
    func_0x000100e18e7c(0,lVar3,0);
    puVar5 = (undefined8 *)(param_1 + 0x30);
    do {
      puVar2 = puStack_58;
      uStack_78 = puVar5[-2];
      uStack_70 = puVar5[-1];
      uVar4 = *puVar5;
      uStack_68 = uVar4;
      func_0x00010006c00c();
      func_0x000107c6157c(uVar4);
      FUN_100e18b50(&uStack_60,&uStack_78);
      uVar4 = uStack_68;
      func_0x00010006c090(uStack_78,uStack_70);
      func_0x000107c61574(uVar4);
      uVar4 = uStack_60;
      uVar1 = *(ulong *)(puVar2 + 0x10);
      puStack_58 = puVar2;
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        func_0x000100e18e7c(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
      }
      puVar5 = puVar5 + 3;
      *(ulong *)(puStack_58 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puStack_58 + uVar1 * 8 + 0x20) = uVar4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return puStack_58;
}



/* Entry: 100e18798; end: 100e18807;  */

void FUN_100e18798(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  FUN_100e19100(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                *(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80),
                *(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e18808; end: 100e1893b;  */

undefined8 FUN_100e18808(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = *unaff_x20;
  func_0x0001000285a8(0x112d39248,&UNK_10d902f60);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  puVar2 = &UNK_110355a00;
  func_0x000107c613fc(&UNK_110355a00,0x50,7);
  uVar4 = *param_1;
  uVar6 = param_1[3];
  uVar5 = param_1[2];
  *(undefined8 *)(puVar2 + 0x18) = param_1[1];
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  *(undefined8 *)(puVar2 + 0x28) = uVar6;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  uVar4 = param_1[4];
  *(undefined8 *)(puVar2 + 0x38) = param_1[5];
  *(undefined8 *)(puVar2 + 0x30) = uVar4;
  *(undefined8 *)(puVar2 + 0x40) = uVar3;
  *(long *)(puVar2 + 0x48) = lVar1;
  func_0x000100402194(&uStack_40,auStack_70);
  func_0x000100402194(&uStack_50,auStack_70);
  func_0x000100402194(&uStack_60,auStack_70);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(lVar1);
  uVar3 = 4;
  func_0x0001001ca524(4,1,0,4,0,0,&UNK_10d902f70,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c6157c(uVar3);
  func_0x000107c61574(lVar1);
  return uVar3;
}



/* Entry: 100e1893c; end: 100e189a3;  */

void FUN_100e1893c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x40);
  lVar2 = *(long *)(unaff_x20 + 0x48);
  plVar3 = (long *)0x1c0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100e189a4;
  plVar3[0x34] = lVar1;
  plVar3[0x35] = lVar2;
  plVar3[0x33] = unaff_x20 + 0x10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100e18334,0,0);
  return;
}



/* Entry: 100e189a4; end: 100e189df;  */

void FUN_100e189a4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100e189dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100e189e0; end: 100e18a13;  */

undefined8 FUN_100e189e0(undefined8 param_1)

{
  FUN_100e9c058();
  return param_1;
}



/* Entry: 100e18a14; end: 100e18a53;  */

void FUN_100e18a14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d39258 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d902f10;
  func_0x000107c61520(&UNK_10d902f10,&UNK_110355a98);
  puRam0000000112d39258 = puVar1;
  return;
}



/* Entry: 100e18a54; end: 100e18a87;  */

undefined8 FUN_100e18a54(undefined8 param_1)

{
  (*(code *)(undefined *)0x100e9e940)();
  return param_1;
}



/* Entry: 100e18a88; end: 100e18ad7;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_100e18a88(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if ((param_4 >> 0x3d & 1) == 0) {
    func_0x000107c61434(param_2);
    param_2 = param_3;
    param_3 = param_4;
  }
  else {
    func_0x000107c61434();
  }
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100e18ad8; end: 100e18aeb;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_100e18ad8(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if (((param_4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    return;
  }
  if ((param_4 >> 0x3d & 1) == 0) {
    func_0x000107c6142c(param_2);
    param_2 = param_3;
    param_3 = param_4;
  }
  else {
    func_0x000107c6142c();
  }
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2);
  return;
}



/* Entry: 100e18aec; end: 100e18b3b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_100e18aec(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if ((param_4 >> 0x3d & 1) == 0) {
    func_0x000107c6142c(param_2);
    param_2 = param_3;
    param_3 = param_4;
  }
  else {
    func_0x000107c6142c();
  }
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2);
  return;
}



/* Entry: 100e18b3c; end: 100e18b4f;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_100e18b3c(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if (((param_4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    return;
  }
  if ((param_4 >> 0x3d & 1) == 0) {
    func_0x000107c61434(param_2);
    param_2 = param_3;
    param_3 = param_4;
  }
  else {
    func_0x000107c61434();
  }
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100e18b50; end: 100e18e1f;  */

void FUN_100e18b50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar7 = param_2[2];
  puVar3 = PTR_PTR_1126a5d78;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar4 = uVar1;
  uVar5 = uVar2;
  func_0x000100e90a70(uVar1,uVar2,uVar7);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar5);
  func_0x000107c5a344(puVar3);
  func_0x000107c61170(uVar4);
  uVar4 = uVar1;
  uVar5 = uVar2;
  func_0x000100e90abc(uVar1,uVar2,uVar7);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar5);
  func_0x000107c5a42c(puVar3);
  func_0x000107c61170(uVar4);
  uVar4 = uVar1;
  uVar5 = uVar2;
  func_0x000100e90b08(uVar1,uVar2,uVar7);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar5);
  func_0x000107c54230(puVar3);
  func_0x000107c61170(uVar4);
  uVar4 = uVar1;
  uVar5 = uVar2;
  func_0x000100e90b54(uVar1,uVar2,uVar7);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar5);
  func_0x000107c53798(puVar3);
  func_0x000107c61170(uVar4);
  uVar4 = uVar1;
  uVar5 = uVar2;
  func_0x000100e90ba0(uVar1,uVar2,uVar7);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar5);
  func_0x000107c537a0(puVar3);
  func_0x000107c61170(uVar4);
  uVar4 = uVar1;
  uVar5 = uVar2;
  func_0x000100e90bec(uVar1,uVar2,uVar7);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar5);
  func_0x000107c52cc4(puVar3);
  func_0x000107c61170(uVar4);
  uVar4 = uVar1;
  uVar5 = uVar2;
  func_0x000100e90c38(uVar1,uVar2,uVar7);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar5);
  func_0x000107c52d30(puVar3);
  func_0x000107c61170(uVar4);
  uVar4 = uVar1;
  uVar5 = uVar2;
  func_0x000100e90c84(uVar1,uVar2,uVar7);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar5);
  func_0x000107c52d2c(puVar3);
  func_0x000107c61170(uVar4);
  uVar4 = uVar1;
  uVar5 = uVar2;
  func_0x000100e90cd0(uVar1,uVar2,uVar7);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar5);
  func_0x000107c52ccc(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000100e90d1c(uVar1,uVar2,uVar7);
  func_0x000107c55750(puVar3);
  uVar4 = uVar1;
  uVar6 = uVar2;
  func_0x000100e90d58(uVar1,uVar2,uVar7);
  uVar5 = uVar4;
  func_0x000107c5ee20();
  func_0x00010006c090(uVar4,uVar6);
  func_0x000107c594f8(puVar3);
  func_0x000107c61170(uVar5);
  func_0x000100e90da8(uVar1,uVar2,uVar7);
  func_0x000107c58c9c(puVar3);
  *param_1 = puVar3;
  return;
}



/* Entry: 100e18e20; end: 100e18e97;  */

void FUN_100e18e20(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_100e18fbc();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112d39268;
  plVar5 = (long *)&UNK_10d902f80;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 100e18e98; end: 100e18fbb;  */

undefined * FUN_100e18e98(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100e18fbc);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_100e18e20();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_100e18fbc(0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 100e18fbc; end: 100e18fff;  */

void FUN_100e18fbc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d39260 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a5d78;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d39260 = puVar1;
  return;
}



/* Entry: 100e19000; end: 100e190ff;  */

undefined8 FUN_100e19000(undefined8 param_1)

{
  (*(code *)&DAT_10448afb8)();
  return param_1;
}



/* Entry: 100e19100; end: 100e1911f;  */

/* WARNING: Possible PIC construction at 0x000100e19144: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e19154: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e19148) */
/* WARNING: Removing unreachable block (ram,0x000100e19158) */

void FUN_100e19100(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 1) {
    return;
  }
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
    return;
  }
  return;
}



/* Entry: 100e19120; end: 100e1916f;  */

/* WARNING: Possible PIC construction at 0x000100e19144: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e19154: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e19148) */
/* WARNING: Removing unreachable block (ram,0x000100e19158) */

void FUN_100e19120(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
    return;
  }
  return;
}



/* Entry: 100e19170; end: 100e19177;  */

void FUN_100e19170(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 100e19178; end: 100e191e7;  */

undefined8 * FUN_100e19178(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 100e191e8; end: 100e192df;  */

int FUN_100e191e8(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Entry: 100e192e0; end: 100e1945f;  */

void FUN_100e192e0(long param_1,long param_2,byte param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 == 0) {
    return;
  }
  puVar2 = PTR_PTR_1126e21f0;
  func_0x000107c610f8(PTR_PTR_1126e21f0);
  func_0x000107c453e4();
  if (param_3 < 2) {
    if (param_3 == 0) goto LAB_100e19438;
    puVar3 = PTR_PTR_1126a5d88;
    func_0x000107c610f8(PTR_PTR_1126a5d88);
    func_0x000107c453e4();
    func_0x000107c56ba4();
    func_0x000107c4bfb0(lStack_48);
    func_0x000107c61170(puVar3);
  }
  else if (param_3 == 2) {
    puVar3 = PTR_PTR_1126a5d80;
    func_0x000107c610f8(PTR_PTR_1126a5d80);
    func_0x000107c61434(param_2);
    func_0x000107c453e4(puVar3);
    lVar4 = 0x6e776f6e6b6e75;
    if (param_2 != 0) {
      lVar4 = param_1;
    }
    lVar1 = -0x1900000000000000;
    if (param_2 != 0) {
      lVar1 = param_2;
    }
    func_0x000107c5fadc(lVar4,lVar1);
    func_0x000107c6142c(lVar1);
    func_0x000107c57b84(puVar3);
    func_0x000107c61170(lVar4);
    func_0x000107c4bfb0(lStack_48);
    func_0x000107c61170(puVar3);
  }
  else if ((param_1 != 0 || param_2 != 0) && (param_1 != 1 || param_2 != 0)) goto LAB_100e19438;
  func_0x000107c59850(puVar2);
  func_0x000107c4bfb0(lStack_48);
LAB_100e19438:
  func_0x000107c615e8(lStack_48);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 100e19460; end: 100e1948b;  */

void FUN_100e19460(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e1948c; end: 100e194c7;  */

undefined1  [16] FUN_100e1948c(void)

{
  char *pcVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  pcVar1 = "inkError-grpcError";
  uVar2 = 0xd00000000000001a;
  if (*unaff_x20 != '\x01') {
    pcVar1 = "FacebookLoginError-unknown";
    uVar2 = 0xd00000000000001c;
  }
  auVar3._8_8_ = (ulong)pcVar1 | 0x8000000000000000;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 100e194c8; end: 100e194eb;  */

void FUN_100e194c8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100e194ec();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 100e194ec; end: 100e1954b;  */

void FUN_100e194ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d39278 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93cac8;
  func_0x000107c61520(&UNK_10d93cac8,&UNK_1103b5a50);
  puRam0000000112d39278 = puVar1;
  return;
}



/* Entry: 100e1954c; end: 100e19583;  */

undefined1  [16] FUN_100e1954c(void)

{
  char *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  uVar2 = 0xd000000000000022;
  pcVar1 = "inkError-protoError";
  if (*(long *)(unaff_x20 + 8) != 0) {
    uVar2 = 0xd000000000000023;
    pcVar1 = "ptFeatureEntryPoint.swift";
  }
  auVar3._8_8_ = (ulong)pcVar1 | 0x8000000000000000;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 100e19584; end: 100e195a7;  */

void FUN_100e19584(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100e18a14();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 100e195a8; end: 100e19947;  */

undefined * FUN_100e195a8(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  long alStack_78 [3];
  undefined8 uStack_60;
  long lStack_58;
  
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  plVar2 = (long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(plVar2,*(undefined8 *)(unaff_x20 + 0x48));
  uVar9 = *(undefined8 *)(*plVar2 + 0x10);
  lVar3 = 0;
  func_0x000100e1cc5c();
  FUN_100e1cba0();
  uVar5 = 0x646574696d696c;
  if (lVar3 != 1) {
    uVar5 = 0x6e776f6e6b6e75;
  }
  uVar8 = 0x64656c62616e65;
  if (lVar3 != 0) {
    uVar8 = uVar5;
  }
  func_0x000107c5fadc(uVar8,0xe700000000000000);
  func_0x000107c6142c(0xe700000000000000);
  func_0x000104c990b8(uVar9,uVar8,1);
  func_0x000107c61170(uVar8);
  func_0x0001000d224c(alStack_78);
  if (alStack_78[0] != 0) {
    puVar4 = PTR_PTR_1126e21f0;
    func_0x000107c610f8(PTR_PTR_1126e21f0);
    func_0x000107c453e4();
    func_0x000107c59850();
    func_0x000107c4bfb0(alStack_78[0]);
    func_0x000107c615e8(alStack_78[0]);
    func_0x000107c61170(puVar4);
  }
  uVar5 = 0;
  func_0x000101077224(0);
  FUN_101076f58();
  func_0x000107c4d664(puVar1);
  func_0x000107c61170(uVar5);
  func_0x0001000d224c(alStack_78);
  func_0x0001000a8868(alStack_78,uStack_60);
  uVar9 = uStack_60;
  (**(code **)(lStack_58 + 8))(uStack_60,lStack_58);
  puVar4 = &UNK_110355b38;
  puVar6 = puVar4;
  func_0x000107c613fc(&UNK_110355b38,0x18,7);
  func_0x000107c61644(puVar6 + 0x10);
  puVar7 = &UNK_110355b60;
  func_0x000107c613fc(&UNK_110355b60,0x20,7);
  *(undefined **)(puVar7 + 0x10) = puVar6;
  *(undefined **)(puVar7 + 0x18) = puVar1;
  func_0x000107c61174();
  uVar5 = 0x112d393e8;
  func_0x0001000285a8(0x112d393e8,&UNK_10d903100);
  uVar8 = 0;
  func_0x0001048898b8(0,1,0x100e1a5c4,puVar7,uVar5);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(puVar7);
  func_0x0001000834e4(alStack_78);
  puVar6 = puVar4;
  func_0x000107c613fc(&UNK_110355b38,0x18,7);
  func_0x000107c61644(puVar6 + 0x10);
  puVar7 = &UNK_110355b88;
  func_0x000107c613fc(&UNK_110355b88,0x20,7);
  *(undefined **)(puVar7 + 0x10) = puVar6;
  *(undefined **)(puVar7 + 0x18) = puVar1;
  func_0x000107c61174();
  uVar9 = 0;
  func_0x0001048898b8(0,1,0x100e1a5dc,puVar7,uVar5);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(puVar7);
  puVar6 = puVar4;
  func_0x000107c613fc(&UNK_110355b38,0x18,7);
  func_0x000107c61644(puVar6 + 0x10);
  puVar7 = &UNK_110355bb0;
  func_0x000107c613fc(&UNK_110355bb0,0x20,7);
  *(undefined **)(puVar7 + 0x10) = puVar6;
  *(undefined **)(puVar7 + 0x18) = puVar1;
  func_0x000107c61174();
  uVar5 = 0;
  func_0x00010488a220(0,1,0x100e1a5f4,puVar7);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(puVar7);
  func_0x000107c613fc(&UNK_110355b38,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  puVar7 = &UNK_110355bd8;
  func_0x000107c613fc(&UNK_110355bd8,0x20,7);
  *(undefined **)(puVar7 + 0x10) = puVar4;
  *(undefined **)(puVar7 + 0x18) = puVar1;
  func_0x000107c61174(puVar1);
  func_0x000107c6157c(puVar4);
  func_0x000104888fc0(0,1,FUN_100e1a638,puVar7);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(puVar7);
  return puVar1;
}



/* Entry: 100e19948; end: 100e19b8b;  */

void FUN_100e19948(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long alStack_c8 [3];
  long alStack_b0 [3];
  long lStack_98;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
  lVar2 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    FUN_100e1a640(lVar2 + 0x30,alStack_b0);
    func_0x000107c61574(lVar2);
    plVar1 = alStack_b0;
    func_0x0001000a8868(plVar1,lStack_98);
    uVar6 = *(undefined8 *)(*plVar1 + 0x10);
    lVar2 = 0;
    func_0x000100e1cc5c();
    FUN_100e1cba0();
    uVar5 = 0x646574696d696c;
    if (lVar2 != 1) {
      uVar5 = 0x6e776f6e6b6e75;
    }
    uVar3 = 0x64656c62616e65;
    if (lVar2 != 0) {
      uVar3 = uVar5;
    }
    func_0x000107c5fadc(uVar3,0xe700000000000000);
    func_0x000107c6142c(0xe700000000000000);
    func_0x000104c9922c(uVar6,uVar3,1);
    func_0x000107c61170(uVar3);
    func_0x0001000d224c(alStack_c8);
    if (alStack_c8[0] != 0) {
      puVar4 = PTR_PTR_1126e21f0;
      func_0x000107c610f8(PTR_PTR_1126e21f0);
      func_0x000107c453e4();
      func_0x000107c59850();
      func_0x000107c4bfb0(alStack_c8[0]);
      func_0x000107c615e8(alStack_c8[0]);
      func_0x000107c61170(puVar4);
    }
    func_0x0001000834e4(alStack_b0);
  }
  uVar5 = 0;
  func_0x000101077224(0);
  func_0x000101076f6c();
  func_0x000107c4d664(param_3);
  func_0x000107c61170(uVar5);
  func_0x000107c61428(param_2 + 0x10,alStack_c8,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    func_0x000107c6157c(uVar5);
    func_0x000107c61574(param_2);
    func_0x0001000d224c(alStack_b0);
    func_0x000107c61574(uVar5);
    if (lStack_98 == 0) {
      FUN_100e1a700(alStack_b0,0x112d39410,&UNK_10d903130);
    }
    else {
      func_0x0001000a8868(alStack_b0);
      uVar5 = 0;
      func_0x000100e187e8(0);
      FUN_100e18808(&uStack_70,uVar5,&PTR_DAT_1103559e0);
      func_0x0001000834e4(alStack_b0);
    }
  }
  return;
}



/* Entry: 100e19b8c; end: 100e19ec7;  */

void FUN_100e19b8c(ulong *param_1,long param_2,undefined8 param_3)

{
  ulong *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long alStack_b8 [3];
  ulong auStack_a0 [3];
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  long lStack_58;
  
  uVar6 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  lVar2 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    FUN_100e1a640(lVar2 + 0x30,auStack_a0);
    func_0x000107c61574(lVar2);
    puVar1 = auStack_a0;
    func_0x0001000a8868(puVar1,uStack_88);
    if (uVar6 >> 0x3e == 0) {
      uVar5 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = uVar6 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar6) {
        uVar5 = uVar6;
      }
      func_0x000107c60480(uVar5);
    }
    uVar7 = *(undefined8 *)(*puVar1 + 0x10);
    lVar2 = 0;
    func_0x000100e1cc5c();
    FUN_100e1cba0();
    uVar4 = 0x646574696d696c;
    if (lVar2 != 1) {
      uVar4 = 0x6e776f6e6b6e75;
    }
    uVar3 = 0x64656c62616e65;
    if (lVar2 != 0) {
      uVar3 = uVar4;
    }
    func_0x000107c5fadc(uVar3,0xe700000000000000);
    func_0x000107c6142c(0xe700000000000000);
    func_0x000104c993a0(uVar7,uVar5 != 0,uVar3,1);
    func_0x000107c61170(uVar3);
    func_0x0001000d224c(alStack_b8);
    if (alStack_b8[0] != 0) {
      func_0x000107c610f8(PTR_PTR_1126e21f0);
      func_0x000107c453e4();
      func_0x000107c61170();
      func_0x000107c615e8(alStack_b8[0]);
    }
    func_0x0001000834e4(auStack_a0);
  }
  if (uVar6 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar5 = uVar6;
    }
    func_0x000107c60480();
  }
  if (uVar5 == 0) {
    func_0x0001000285a8(0x112d39408,&UNK_10d903120);
    auStack_a0[0] = uVar6;
    func_0x000104888f7c(auStack_a0);
  }
  else {
    func_0x000107c61428(param_2 + 0x10,alStack_b8,0,0);
    lVar2 = param_2 + 0x10;
    func_0x000107c61648();
    if (lVar2 != 0) {
      FUN_100e1a640(lVar2 + 0x30,auStack_a0);
      func_0x000107c61574(lVar2);
      puVar1 = auStack_a0;
      func_0x0001000a8868(puVar1,uStack_88);
      uVar7 = *(undefined8 *)(*puVar1 + 0x10);
      lVar2 = 0;
      func_0x000100e1cc5c();
      FUN_100e1cba0();
      uVar4 = 0x646574696d696c;
      if (lVar2 != 1) {
        uVar4 = 0x6e776f6e6b6e75;
      }
      uVar3 = 0x64656c62616e65;
      if (lVar2 != 0) {
        uVar3 = uVar4;
      }
      func_0x000107c5fadc(uVar3,0xe700000000000000);
      func_0x000107c6142c(0xe700000000000000);
      func_0x000104c9958c(uVar7,uVar3,1);
      func_0x000107c61170(uVar3);
      func_0x0001000d224c(&lStack_58);
      if (lStack_58 != 0) {
        func_0x000107c610f8(PTR_PTR_1126e21f0);
        func_0x000107c453e4();
        func_0x000107c61170();
        func_0x000107c615e8(lStack_58);
      }
      func_0x0001000834e4(auStack_a0);
    }
    uVar4 = 0;
    func_0x000101077224(0);
    func_0x000101076f7c();
    func_0x000107c4d664(param_3);
    func_0x000107c61170(uVar4);
    func_0x000107c61428(param_2 + 0x10,auStack_a0,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      FUN_100e19ec8(uVar6);
      func_0x000107c61574(param_2);
    }
  }
  return;
}



/* Entry: 100e19ec8; end: 100e1a08f;  */

undefined8 FUN_100e19ec8(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  ppuVar7 = &puStack_90;
  func_0x0001000285a8(0x112d39248,&UNK_10d902f60);
  func_0x000107c613fc();
  lVar2 = 0;
  func_0x00010095c380();
  lVar3 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    puVar4 = &UNK_110355c00;
    func_0x000107c613fc(&UNK_110355c00,0x18,7);
    *(undefined8 *)(puVar4 + 0x10) = param_1;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_70 = FUN_100e1a6d4;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100ab3660;
    puStack_78 = &UNK_110355c18;
    puStack_68 = puVar4;
    func_0x000107c60bc4(&puStack_90);
    puVar4 = puStack_68;
    func_0x000107c61434(param_1);
    func_0x000107c61574(puVar4);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
    func_0x000107c4f7c0(uVar6);
    func_0x000107c61180();
    puVar4 = &UNK_110355c50;
    func_0x000107c613fc(&UNK_110355c50,0x20,7);
    *(long *)(puVar4 + 0x10) = lVar2;
    *(undefined8 *)(puVar4 + 0x18) = param_1;
    pcStack_70 = (code *)0x100e1a6f8;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100ab47f8;
    puStack_78 = &UNK_110355c68;
    puStack_68 = puVar4;
    func_0x000107c60bc4(&puStack_90);
    puVar4 = puStack_68;
    func_0x000107c61434(param_1);
    func_0x000107c6157c(lVar2);
    func_0x000107c61574(puVar4);
    func_0x000107c4e55c(lVar3);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar3);
  }
  uVar6 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c6157c(uVar6);
  func_0x000107c61574(lVar2);
  return uVar6;
}



/* Entry: 100e1a090; end: 100e1a21f;  */

void FUN_100e1a090(ulong *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long alStack_80 [3];
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  plVar1 = alStack_80;
  uVar5 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_100e1a640(param_2 + 0x30,alStack_80);
    func_0x000107c61574(param_2);
    func_0x0001000a8868(alStack_80,uStack_68);
    if (uVar5 >> 0x3e == 0) {
      uVar6 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = uVar5 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar5) {
        uVar6 = uVar5;
      }
      func_0x000107c60480(uVar6);
    }
    uVar7 = *(undefined8 *)(*plVar1 + 0x10);
    lVar2 = 0;
    func_0x000100e1cc5c();
    FUN_100e1cba0();
    uVar4 = 0x646574696d696c;
    if (lVar2 != 1) {
      uVar4 = 0x6e776f6e6b6e75;
    }
    uVar3 = 0x64656c62616e65;
    if (lVar2 != 0) {
      uVar3 = uVar4;
    }
    func_0x000107c5fadc(uVar3,0xe700000000000000);
    func_0x000107c6142c(0xe700000000000000);
    func_0x000104c99700(uVar7,uVar3,1);
    func_0x000107c61170(uVar3);
    FUN_100e192e0(uVar6,0,1);
    func_0x0001000834e4(alStack_80);
  }
  func_0x000101077224(0);
  uVar4 = 1;
  func_0x000101077048(1);
  func_0x000107c4d664(param_3);
  func_0x000107c61170(uVar4);
  func_0x000107c3fedc(param_3);
  return;
}



/* Entry: 100e1a220; end: 100e1a49b;  */

void FUN_100e1a220(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_e8 [24];
  long lStack_d0;
  long lStack_c8;
  long alStack_c0 [3];
  undefined8 uStack_a8;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  alStack_c0[0] = param_1;
  func_0x000107c614b0();
  uVar10 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  uVar1 = 0x112d393f8;
  func_0x0001000285a8(0x112d393f8,&UNK_10d903110);
  puVar2 = &uStack_80;
  func_0x000107c6147c(puVar2,alStack_c0,uVar10,uVar1,0xe);
  if (((ulong)puVar2 & 1) == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  func_0x000107c61428(param_2 + 0x10,auStack_98,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_100e1a640(param_2 + 0x30,alStack_c0);
    func_0x000107c61574(param_2);
    plVar3 = alStack_c0;
    func_0x0001000a8868(plVar3,uStack_a8);
    func_0x000100e1a684(&uStack_80,auStack_e8);
    if (lStack_d0 == 0) {
      FUN_100e1a700(auStack_e8,0x112d39400,&UNK_10d903118);
      lVar9 = 0;
      lVar7 = -0x1900000000000000;
      lVar8 = 0;
      lVar4 = 0x6e776f6e6b6e75;
    }
    else {
      func_0x0001000a8868(auStack_e8,lStack_d0);
      lVar9 = lStack_d0;
      lVar7 = lStack_c8;
      (**(code **)(lStack_c8 + 0x10))(lStack_d0,lStack_c8);
      func_0x0001000834e4(auStack_e8);
      lVar8 = lVar7;
      lVar4 = lVar9;
    }
    uVar10 = *(undefined8 *)(*plVar3 + 0x10);
    func_0x000107c61434(lVar8);
    func_0x000107c5fadc(lVar4,lVar7);
    func_0x000107c6142c(lVar7);
    lVar5 = 0;
    func_0x000100e1cc5c();
    FUN_100e1cba0();
    lVar7 = 0x646574696d696c;
    if (lVar5 != 1) {
      lVar7 = 0x6e776f6e6b6e75;
    }
    lVar6 = 0x64656c62616e65;
    if (lVar5 != 0) {
      lVar6 = lVar7;
    }
    func_0x000107c5fadc(lVar6,0xe700000000000000);
    func_0x000107c6142c(0xe700000000000000);
    func_0x000104c99874(uVar10,lVar4,lVar6,1);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar6);
    FUN_100e192e0(lVar9,lVar8,2);
    func_0x000107c6142c(lVar8);
    func_0x0001000834e4(alStack_c0);
  }
  func_0x000101077224(0);
  uVar10 = 0;
  func_0x000101077048(0);
  func_0x000107c4d664(param_3);
  func_0x000107c61170(uVar10);
  func_0x000107c3fedc(param_3);
  FUN_100e1a700(&uStack_80,0x112d39400,&UNK_10d903118);
  return;
}



/* Entry: 100e1a49c; end: 100e1a55f; -[_TtC37FacebookLinkingServicesImplementation26FacebookLinkingServiceImpl linkFacebookAccount] */

void FUN_100e1a49c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_100e195a8();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100e1a560; end: 100e1a637;  */

void FUN_100e1a560(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000834e4(unaff_x20 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e1a638; end: 100e1a63f;  */

void FUN_100e1a638(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_e8 [24];
  long lStack_d0;
  long lStack_c8;
  long alStack_c0 [3];
  undefined8 uStack_a8;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  alStack_c0[0] = param_1;
  func_0x000107c614b0();
  uVar11 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  uVar2 = 0x112d393f8;
  func_0x0001000285a8(0x112d393f8,&UNK_10d903110);
  puVar3 = &uStack_80;
  func_0x000107c6147c(puVar3,alStack_c0,uVar11,uVar2,0xe);
  if (((ulong)puVar3 & 1) == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  func_0x000107c61428(lVar4 + 0x10,auStack_98,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    FUN_100e1a640(lVar4 + 0x30,alStack_c0);
    func_0x000107c61574(lVar4);
    plVar5 = alStack_c0;
    func_0x0001000a8868(plVar5,uStack_a8);
    func_0x000100e1a684(&uStack_80,auStack_e8);
    if (lStack_d0 == 0) {
      FUN_100e1a700(auStack_e8,0x112d39400,&UNK_10d903118);
      lVar10 = 0;
      lVar9 = -0x1900000000000000;
      lVar4 = 0;
      lVar6 = 0x6e776f6e6b6e75;
    }
    else {
      func_0x0001000a8868(auStack_e8,lStack_d0);
      lVar10 = lStack_d0;
      lVar9 = lStack_c8;
      (**(code **)(lStack_c8 + 0x10))(lStack_d0,lStack_c8);
      func_0x0001000834e4(auStack_e8);
      lVar4 = lVar9;
      lVar6 = lVar10;
    }
    uVar11 = *(undefined8 *)(*plVar5 + 0x10);
    func_0x000107c61434(lVar4);
    func_0x000107c5fadc(lVar6,lVar9);
    func_0x000107c6142c(lVar9);
    lVar7 = 0;
    func_0x000100e1cc5c();
    FUN_100e1cba0();
    lVar9 = 0x646574696d696c;
    if (lVar7 != 1) {
      lVar9 = 0x6e776f6e6b6e75;
    }
    lVar8 = 0x64656c62616e65;
    if (lVar7 != 0) {
      lVar8 = lVar9;
    }
    func_0x000107c5fadc(lVar8,0xe700000000000000);
    func_0x000107c6142c(0xe700000000000000);
    func_0x000104c99874(uVar11,lVar6,lVar8,1);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar8);
    FUN_100e192e0(lVar10,lVar4,2);
    func_0x000107c6142c(lVar4);
    func_0x0001000834e4(alStack_c0);
  }
  func_0x000101077224(0);
  uVar11 = 0;
  func_0x000101077048(0);
  func_0x000107c4d664(uVar1);
  func_0x000107c61170(uVar11);
  func_0x000107c3fedc(uVar1);
  FUN_100e1a700(&uStack_80,0x112d39400,&UNK_10d903118);
  return;
}



/* Entry: 100e1a640; end: 100e1a6d3;  */

long FUN_100e1a640(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100e1a6d4; end: 100e1a6ff;  */

void FUN_100e1a6d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = 0;
  FUN_100e18fbc(0);
  func_0x000107c5fc48(uVar2,uVar1);
  func_0x0001055a7c68(param_1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100e1a700; end: 100e1a73f;  */

undefined8 FUN_100e1a700(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100e1a740; end: 100e1a747;  */

void FUN_100e1a740(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100e1a748; end: 100e1a79f;  */

void FUN_100e1a748(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  return;
}



/* Entry: 100e1a7a0; end: 100e1a9bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100e1a7a0(void)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  puVar5 = &UNK_110355ca0;
  puVar1 = puVar5;
  func_0x000107c613fc(&UNK_110355ca0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  func_0x0001000285a8(0x112d39418,&UNK_10d903140);
  func_0x000107c613fc();
  pcVar2 = FUN_100e1aa28;
  func_0x0001000bdd8c(FUN_100e1aa28,puVar1);
  uVar8 = *(undefined8 *)(*(long *)(unaff_x20 + 0x30) + _DAT_113083868);
  lVar3 = 0;
  func_0x000100e1952c();
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126a5d90;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar3 + 0x10) = puVar1;
  func_0x0001000285a8(0x112d39420,&UNK_10d979900);
  uVar7 = uVar8;
  func_0x0001000bda74();
  *(undefined8 *)(lVar3 + 0x18) = uVar7;
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  func_0x000107c613fc(&UNK_110355ca0,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  puVar1 = &UNK_110355cc8;
  func_0x000107c613fc(&UNK_110355cc8,0x28,7);
  *(undefined **)(puVar1 + 0x10) = puVar5;
  *(code **)(puVar1 + 0x18) = pcVar2;
  *(long *)(puVar1 + 0x20) = lVar3;
  pcStack_60 = FUN_100e1adc8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_100e1ae7c;
  puStack_68 = &UNK_110355ce0;
  puStack_58 = puVar1;
  func_0x000107c60bc4(&puStack_80);
  puVar5 = puStack_58;
  func_0x000107c6157c(pcVar2);
  func_0x000107c6157c(lVar3);
  func_0x000107c61574(puVar5);
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  uVar7 = 0;
  FUN_101076984(0);
  func_0x000107c610f8();
  func_0x0001010768c8(puVar4,uVar7);
  func_0x000107c61574(pcVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61574(lVar3);
  return puVar4;
}



/* Entry: 100e1a9bc; end: 100e1aa27;  */

void FUN_100e1a9bc(undefined8 *param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    FUN_100e1aa30(param_1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 100e1aa28; end: 100e1aa2f;  */

void FUN_100e1aa28(undefined8 *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    FUN_100e1aa30(param_1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 100e1aa30; end: 100e1adc7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_100e1aa30(long *param_1,long param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  undefined8 uVar6;
  long extraout_x12;
  code *pcVar7;
  undefined8 *apuStack_120 [4];
  long lStack_100;
  undefined **ppuStack_f8;
  undefined1 auStack_f0 [40];
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined2 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  FUN_100e1add4();
  if (param_2 == 0) {
    lVar4 = 0;
    ppuVar1 = (undefined **)0x0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db1dd8;
    func_0x000107c5faec();
    uStack_b8 = 0;
    uStack_b0 = 0x201;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_68 = 0;
    ppuStack_c8 = ppuVar1;
    uStack_c0 = param_3;
    func_0x000103e3687c(apuStack_120 + 1);
    func_0x0001000a8868(apuStack_120 + 1,lStack_100);
    pcVar7 = *(code **)((long)ppuStack_f8 + 8);
    func_0x000107c615f0(param_2);
    (*pcVar7)(auStack_f0,0xd000000000000012,0x800000010ef12250,&ppuStack_c8,param_2,lStack_100,
              ppuStack_f8);
    func_0x000107c615e8(param_2);
    func_0x0001000834e4(apuStack_120 + 1);
    func_0x000100e1b010(auStack_f0,apuStack_120 + 1);
    lVar2 = 0;
    func_0x000100e9f7f4();
    func_0x000107c613fc();
    puVar3 = apuStack_120 + 1;
    FUN_100e9ebb8();
    ppuStack_f8 = &PTR_DAT_1103559c8;
    lVar4 = 0;
    apuStack_120[1] = puVar3;
    lStack_100 = lVar2;
    func_0x000100e187e8();
    lVar5 = lVar4;
    func_0x000107c613fc();
    func_0x0001000c6518(apuStack_120 + 1,lVar2);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
    puVar3 = (undefined8 *)((long)apuStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(extraout_x12 + 0x10))(puVar3);
    uVar6 = *puVar3;
    *(long *)(lVar5 + 0x28) = lVar2;
    *(undefined ***)(lVar5 + 0x30) = &PTR_DAT_1103559c8;
    *(undefined8 *)(lVar5 + 0x10) = uVar6;
    *(undefined8 *)(lVar5 + 0x38) = 0;
    *(undefined8 *)(lVar5 + 0x40) = 0;
    *(undefined8 *)(lVar5 + 0x48) = 1;
    *(undefined8 *)(lVar5 + 0x58) = 0;
    *(undefined8 *)(lVar5 + 0x50) = 0;
    *(undefined8 *)(lVar5 + 0x68) = 0;
    *(undefined8 *)(lVar5 + 0x60) = 0;
    *(undefined8 *)(lVar5 + 0x78) = 0;
    *(undefined8 *)(lVar5 + 0x70) = 0;
    *(undefined8 *)(lVar5 + 0x88) = 0;
    *(undefined8 *)(lVar5 + 0x80) = 0;
    *(undefined8 *)(lVar5 + 0x90) = 0;
    func_0x0001000834e4(apuStack_120 + 1);
    func_0x000100e1b054(&ppuStack_c8);
    func_0x000107c615e8(param_2);
    *param_1 = lVar5;
    func_0x0001000834e4(auStack_f0);
    ppuVar1 = &PTR_DAT_1103559e0;
  }
  param_1[3] = lVar4;
  param_1[4] = (long)ppuVar1;
  return;
}



/* Entry: 100e1adc8; end: 100e1add3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1adc8(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long extraout_x8;
  undefined8 uVar6;
  long extraout_x12;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *aplStack_a0 [3];
  long lStack_88;
  undefined **ppuStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = *(long **)(unaff_x20 + 0x20);
  lVar7 = *plVar5;
  func_0x000107c61428(lVar2 + 0x10,auStack_78,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    FUN_100e1add4();
    if (lVar3 == 0) {
      func_0x000107c61574(lVar2);
    }
    else {
      uVar8 = *(undefined8 *)(*(long *)(lVar2 + 0x10) + _DAT_112d7eb90);
      uVar9 = *(undefined8 *)(lVar2 + 0x28);
      func_0x000107c6157c(uVar8);
      func_0x000107c421c8();
      func_0x000107c61180();
      ppuStack_80 = &PTR_DAT_110355b10;
      lVar4 = 0;
      aplStack_a0[0] = plVar5;
      lStack_88 = lVar7;
      func_0x000100e1a5a4();
      func_0x000107c613fc();
      func_0x0001000c6518(aplStack_a0,lVar7);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
      puVar10 = (undefined8 *)((long)aplStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
      (**(code **)(extraout_x12 + 0x10))(puVar10);
      uVar6 = *puVar10;
      *(long *)(lVar4 + 0x48) = lVar7;
      *(undefined ***)(lVar4 + 0x50) = &PTR_DAT_110355b10;
      *(long *)(lVar4 + 0x28) = lVar3;
      *(undefined8 *)(lVar4 + 0x30) = uVar6;
      *(undefined8 *)(lVar4 + 0x10) = uVar8;
      *(undefined8 *)(lVar4 + 0x18) = uVar1;
      *(undefined8 *)(lVar4 + 0x20) = uVar9;
      func_0x000107c6157c(plVar5);
      func_0x000107c6157c(uVar1);
      func_0x0001000834e4(aplStack_a0);
      func_0x000107c61574(lVar2);
    }
  }
  return;
}



/* Entry: 100e1add4; end: 100e1ae7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100e1add4(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x18) + _DAT_113093a98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = 0xd00000000000001b;
    func_0x000107c5fadc(0xd00000000000001b,0x800000010ef12230);
    lVar3 = lVar1;
    func_0x000107c4e60c(lVar1);
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(uVar2);
  }
  return lVar3;
}



/* Entry: 100e1ae7c; end: 100e1aeb3;  */

void FUN_100e1ae7c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100e1aeb4; end: 100e1aecf;  */

void FUN_100e1aeb4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100e1aed0; end: 100e1af03;  */

/* WARNING: Possible PIC construction at 0x000100e1aedc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e1aeec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e1aee0) */
/* WARNING: Removing unreachable block (ram,0x000100e1aef0) */

void FUN_100e1aed0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100e1af04; end: 100e1af67;  */

void FUN_100e1af04(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e1af68; end: 100e1afeb;  */

void FUN_100e1af68(undefined8 param_1)

{
  if (lRam0000000112d39450 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e610330);
  return;
}



/* Entry: 100e1afec; end: 100e1b087;  */

void FUN_100e1afec(undefined8 *param_1,undefined8 param_2)

{
  FUN_100e1a7a0();
  *param_1 = param_2;
  return;
}



/* Entry: 100e1b088; end: 100e1b093; -[SCFacebookLinkingServiceProvider facebookLoginServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1b088(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d39568;
  func_0x000107c61428(param_1 + _DAT_112d39568,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e1b094; end: 100e1b09f; -[SCFacebookLinkingServiceProvider setFacebookLoginServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1b094(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d39568;
  func_0x000107c61428(param_1 + _DAT_112d39568,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e1b0a0; end: 100e1b0ab; -[SCFacebookLinkingServiceProvider taskManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1b0a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d39570;
  func_0x000107c61428(param_1 + _DAT_112d39570,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e1b0ac; end: 100e1b0b7; -[SCFacebookLinkingServiceProvider setTaskManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1b0ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d39570;
  func_0x000107c61428(param_1 + _DAT_112d39570,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e1b0b8; end: 100e1b0c3; -[SCFacebookLinkingServiceProvider unifiedGRPCServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1b0b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d39578;
  func_0x000107c61428(param_1 + _DAT_112d39578,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e1b0c4; end: 100e1b0cf; -[SCFacebookLinkingServiceProvider setUnifiedGRPCServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1b0c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d39578;
  func_0x000107c61428(param_1 + _DAT_112d39578,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e1b0d0; end: 100e1b0db; -[SCFacebookLinkingServiceProvider userStorageServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1b0d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d39580;
  func_0x000107c61428(param_1 + _DAT_112d39580,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e1b0dc; end: 100e1b0e7; -[SCFacebookLinkingServiceProvider setUserStorageServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1b0dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d39580;
  func_0x000107c61428(param_1 + _DAT_112d39580,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e1b0e8; end: 100e1b0f3; -[SCFacebookLinkingServiceProvider userBlizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1b0e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d39588;
  func_0x000107c61428(param_1 + _DAT_112d39588,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e1b0f4; end: 100e1b137;  */

void FUN_100e1b0f4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e1b138; end: 100e1b143; -[SCFacebookLinkingServiceProvider setUserBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1b138(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d39588;
  func_0x000107c61428(param_1 + _DAT_112d39588,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e1b144; end: 100e1b197;  */

void FUN_100e1b144(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e1b198; end: 100e1b357;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1b198(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  lVar1 = unaff_x20;
  func_0x000107c42d44();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c5c78c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c5d228();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c5daa0();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          lVar1 = lVar3;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c5d900();
          func_0x000107c61180();
          if (lVar5 != 0) {
            lVar6 = 0;
            FUN_100e1af68();
            func_0x000107c613fc();
            *(long *)(lVar6 + 0x10) = lVar1;
            *(long *)(lVar6 + 0x18) = lVar2;
            *(long *)(lVar6 + 0x20) = lVar3;
            *(long *)(lVar6 + 0x28) = lVar4;
            *(long *)(lVar6 + 0x30) = lVar5;
            uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d39590);
            *(long *)(unaff_x20 + _DAT_112d39590) = lVar6;
            func_0x000107c61174(lVar1);
            func_0x000107c61174(lVar2);
            func_0x000107c61174(lVar3);
            func_0x000107c61174(lVar4);
            func_0x000107c61174(lVar5);
            func_0x000107c6157c(lVar6);
            func_0x000107c61574(uVar7);
            FUN_100e1a7a0();
            func_0x000107c61170(lVar1);
            func_0x000107c61170(lVar2);
            func_0x000107c61170(lVar3);
            func_0x000107c61170(lVar4);
            func_0x000107c61170(lVar5);
            func_0x000107c61574(lVar6);
            return;
          }
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          func_0x000107c61170(lVar3);
          lVar1 = lVar4;
        }
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100e1b358; end: 100e1b3e3; -[SCFacebookLinkingServiceProvider provide] */

void FUN_100e1b358(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_100e1b198();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "FacebookLinkingServicesImplementation/SCFacebookLinkingServiceProvider.swift"
                      ,0x4c,2,0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e1b3e4);
  (*pcVar1)();
}



/* Entry: 100e1b3e4; end: 100e1b417; -[SCFacebookLinkingServiceProvider __safeProvide] */

void FUN_100e1b3e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100e1b198();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100e1b418; end: 100e1b45b; -[SCFacebookLinkingServiceProvider end] */

void FUN_100e1b418(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e1b45c; end: 100e1b72f;  */

void FUN_100e1b45c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0xd000000000000015;
  if ((param_2 == -0x2fffffffffffffeb && param_3 == -0x7ffffffef10edd40) ||
     (func_0x000107c605b8(0xd000000000000015,0x800000010ef122c0,param_2,param_3,0), (uVar2 & 1) != 0
     )) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5485c();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10edd20)) ||
       (func_0x000107c605b8(0xd000000000000016,0x800000010ef122e0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c59c2c();
    }
    else {
      if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10edd00)) {
        uVar2 = 0xd000000000000013;
        func_0x000107c605b8(0xd000000000000013,0x800000010ef12300,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10edce0)) {
            uVar2 = 0xd000000000000013;
            func_0x000107c605b8(0xd000000000000013,0x800000010ef12320,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0;
              if (((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10ef610)) &&
                 (func_0x000107c605b8(0xd000000000000014,0x800000010ef109f0,param_2,param_3,0),
                 (uVar2 & 1) == 0)) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "FacebookLinkingServicesImplementation/SCFacebookLinkingServiceProvider.swift"
                                    ,0x4c,2,0x41,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x100e1b730);
                (*pcVar1)();
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c5a2fc();
              goto LAB_100e1b4ec;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5a408();
          goto LAB_100e1b4ec;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5a178();
    }
  }
LAB_100e1b4ec:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100e1b730; end: 100e1b7db; -[SCFacebookLinkingServiceProvider setValue:forIvarName:] */

void FUN_100e1b730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100e1b45c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100e1b7dc; end: 100e1b88b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1b7dc(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d39568,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d39570,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d39578,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d39580,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d39588,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d39590) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e1b88c; end: 100e1b8ab; -[SCFacebookLinkingServiceProvider init] */

void FUN_100e1b88c(void)

{
  FUN_100e1b7dc();
  return;
}



/* Entry: 100e1b8ac; end: 100e1b8df;  */

void FUN_100e1b8ac(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e1b8e0; end: 100e1b957; -[SCFacebookLinkingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1b8e0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d39568);
  func_0x000107c61610(param_1 + _DAT_112d39570);
  func_0x000107c61610(param_1 + _DAT_112d39578);
  func_0x000107c61610(param_1 + _DAT_112d39580);
  func_0x000107c61610(param_1 + _DAT_112d39588);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d39590));
  return;
}



/* Entry: 100e1b958; end: 100e1b977;  */

void FUN_100e1b958(void)

{
  func_0x000107c61168(&PTR_PTR_112d395d8);
  return;
}



/* Entry: 100e1b978; end: 100e1b9bb;  */

void FUN_100e1b978(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e1b9bc; end: 100e1ba8b;  */

void FUN_100e1b9bc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_98 [24];
  long lStack_80;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [40];
  
  func_0x000107c61428(unaff_x20 + 0x38,auStack_70,0,0);
  FUN_100e1c3c0(unaff_x20 + 0x38,auStack_98);
  if (lStack_80 == 0) {
    func_0x000100e1c410(auStack_98);
    uVar1 = 0;
    func_0x000104904e40();
    uVar2 = uVar1;
    func_0x000107c610f8();
    func_0x000107c453e4();
    param_1[3] = uVar1;
    param_1[4] = &PTR_DAT_110355dc8;
    *param_1 = uVar2;
    func_0x000100e1c458(param_1,auStack_58);
    func_0x000107c61428(unaff_x20 + 0x38,auStack_98,0x21,0);
    func_0x000100e1c49c(auStack_58,unaff_x20 + 0x38);
    func_0x000107c614a8(auStack_98);
  }
  else {
    FUN_100e1c4ec(auStack_98,auStack_58);
    FUN_100e1c4ec(auStack_58,param_1);
  }
  return;
}



/* Entry: 100e1ba8c; end: 100e1bdbb;  */

undefined8 FUN_100e1ba8c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar11;
  long lVar12;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  func_0x000107c6071c();
  func_0x0001000285a8(0x112d397a0,&UNK_10d9032b8);
  func_0x000107c613fc();
  lVar2 = 0;
  func_0x00010095c380();
  FUN_100e1b9bc(auStack_88);
  uVar11 = uStack_70;
  func_0x0001000a8868();
  func_0x0001048fc3a4();
  puVar3 = auStack_88;
  func_0x0001000834e4();
  func_0x000107c5eec4(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5eeac();
  (**(code **)(lVar12 + 8))(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  uVar4 = 0;
  func_0x000100e1cc5c();
  FUN_100e1cba0();
  func_0x0001048f80c8(0);
  lVar1 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  func_0x000107c61434(uVar11);
  func_0x0001048f6a70(lVar1,uVar4,puVar3,uVar11);
  if (lVar1 == 0) {
    func_0x000107c6142c(uVar11);
    plVar6 = (long *)(unaff_x20 + 0x10);
    func_0x0001000a8868(plVar6,*(undefined8 *)(unaff_x20 + 0x28));
    uVar11 = *(undefined8 *)(*plVar6 + 0x10);
    puVar7 = (undefined1 *)0x6e776f6e6b6e75;
    func_0x000107c5fadc(0x6e776f6e6b6e75,0xe700000000000000);
    puVar8 = puVar7;
    FUN_100e1cba0();
    puVar3 = (undefined1 *)0x646574696d696c;
    if (puVar8 != (undefined1 *)0x1) {
      puVar3 = (undefined1 *)0x6e776f6e6b6e75;
    }
    puVar9 = (undefined1 *)0x64656c62616e65;
    if (puVar8 != (undefined1 *)0x0) {
      puVar9 = puVar3;
    }
    func_0x000107c5fadc(puVar9,0xe700000000000000);
    func_0x000104c99e78(uVar11,puVar7,puVar9,1);
    func_0x000107c61170(puVar7);
    func_0x000107c61170();
    FUN_100e194ec();
    puVar10 = &UNK_1103b5a50;
    func_0x000107c613f8(&UNK_1103b5a50,puVar9,0,0);
    *puVar9 = 1;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar10);
  }
  else {
    FUN_100e1b9bc(auStack_88);
    func_0x0001000a8868(auStack_88,uStack_70);
    puVar10 = &UNK_110355e00;
    func_0x000107c613fc(&UNK_110355e00,0x18,7);
    func_0x000107c61644(puVar10 + 0x10);
    puVar5 = &UNK_110355e28;
    func_0x000107c613fc(&UNK_110355e28,0x40,7);
    *(undefined **)(puVar5 + 0x10) = puVar10;
    *(undefined8 *)(puVar5 + 0x18) = param_1;
    *(undefined8 *)(puVar5 + 0x20) = uVar4;
    *(undefined1 **)(puVar5 + 0x28) = puVar3;
    *(undefined8 *)(puVar5 + 0x30) = uVar11;
    *(long *)(puVar5 + 0x38) = lVar2;
    lVar12 = lVar1;
    func_0x000107c61174(lVar1);
    func_0x000107c6157c(puVar10);
    func_0x000107c6157c(lVar2);
    func_0x0001048fa4c4(0,lVar1,FUN_100e1c390,puVar5);
    func_0x000107c61574(puVar10);
    func_0x000107c61574(puVar5);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar12);
    func_0x0001000834e4(auStack_88);
  }
  uVar11 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c6157c(uVar11);
  func_0x000107c61574(lVar2);
  return uVar11;
}



/* Entry: 100e1bdbc; end: 100e1c323;  */

void FUN_100e1bdbc(double param_1,undefined8 param_2,undefined8 param_3,long param_4,char param_5,
                  long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  double dVar16;
  undefined *puStack_e0;
  undefined1 *puStack_d8;
  long lStack_d0;
  undefined1 *puStack_c8;
  long lStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  
  puVar10 = auStack_88;
  dVar16 = param_1;
  func_0x000107c61428(param_6 + 0x10,puVar10,0,0);
  param_6 = param_6 + 0x10;
  func_0x000107c61648();
  if (param_6 != 0) {
    func_0x000107c6071c();
    dVar16 = (dVar16 - param_1) * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar16)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100e1c31c);
      (*pcVar1)();
    }
    if (dVar16 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100e1c320);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= dVar16) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100e1c324);
      (*pcVar1)();
    }
    lVar14 = (long)dVar16;
    if (param_5 == '\0') {
      if (param_4 == 0) {
        lStack_d0 = 0;
        puStack_c8 = (undefined1 *)0xe000000000000000;
        puStack_d8 = puVar10;
      }
      else {
        func_0x000107c5cb90();
        func_0x000107c61180();
        lStack_d0 = param_4;
        func_0x000107c5faec();
        puStack_d8 = puVar10;
        func_0x000107c61170(param_4);
        puStack_c8 = puVar10;
      }
      puVar6 = PTR_PTR_1126a5d98;
      func_0x000107c61168();
      func_0x000107c40ed0();
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) {
        puStack_e0 = (undefined *)0x0;
        puStack_d8 = (undefined1 *)0xe000000000000000;
      }
      else {
        puVar7 = puVar6;
        func_0x000107c5cb90();
        func_0x000107c61180();
        func_0x000107c61170(puVar6);
        puStack_e0 = puVar7;
        func_0x000107c5faec();
        func_0x000107c61170(puVar7);
      }
      plVar8 = (long *)(param_6 + 0x10);
      func_0x0001000a8868(plVar8,*(undefined8 *)(param_6 + 0x28));
      uVar15 = *(undefined8 *)(*plVar8 + 0x10);
      lVar2 = 0;
      func_0x000100e1cc5c();
      FUN_100e1cba0();
      uVar11 = 0x646574696d696c;
      if (lVar2 != 1) {
        uVar11 = 0x6e776f6e6b6e75;
      }
      uVar9 = 0x64656c62616e65;
      if (lVar2 != 0) {
        uVar9 = uVar11;
      }
      func_0x000107c5fadc(uVar9,0xe700000000000000);
      func_0x000107c6142c(0xe700000000000000);
      func_0x000104c99d04(uVar15,uVar9,lVar14);
      func_0x000107c61170(uVar9);
      plVar8 = (long *)(param_6 + 0x10);
      func_0x0001000a8868(plVar8,*(undefined8 *)(param_6 + 0x28));
      uVar15 = *(undefined8 *)(*plVar8 + 0x10);
      FUN_100e1cba0();
      uVar11 = 0x646574696d696c;
      if (plVar8 != (long *)0x1) {
        uVar11 = 0x6e776f6e6b6e75;
      }
      uVar9 = 0x64656c62616e65;
      if (plVar8 != (long *)0x0) {
        uVar9 = uVar11;
      }
      func_0x000107c5fadc(uVar9,0xe700000000000000);
      func_0x000107c6142c(0xe700000000000000);
      func_0x000104c99b90(uVar15,uVar9,1);
      func_0x000107c61170(uVar9);
      lStack_b8 = lStack_d0;
      puStack_b0 = puStack_c8;
      puStack_a8 = puStack_e0;
      puStack_a0 = puStack_d8;
      uStack_98 = param_8;
      uStack_90 = param_9;
      func_0x000107c61434(param_9);
      func_0x000100b60084(&lStack_b8);
      func_0x000107c6142c(param_9);
      func_0x000107c6142c(puStack_d8);
      func_0x000107c6142c(puStack_c8);
      func_0x000107c61574(param_6);
    }
    else {
      if (param_5 == '\x01') {
        plVar8 = (long *)(param_6 + 0x10);
        func_0x0001000a8868(plVar8,*(undefined8 *)(param_6 + 0x28));
        uVar11 = *(undefined8 *)(*plVar8 + 0x10);
        puVar12 = (undefined1 *)0x6e776f6e6b6e75;
        puVar5 = puVar12;
        func_0x000107c5fadc(0x6e776f6e6b6e75,0xe700000000000000);
        lVar2 = 0;
        func_0x000100e1cc5c();
        FUN_100e1cba0();
        puVar10 = (undefined1 *)0x646574696d696c;
        if (lVar2 != 1) {
          puVar10 = puVar12;
        }
        puVar3 = (undefined1 *)0x64656c62616e65;
        if (lVar2 != 0) {
          puVar3 = puVar10;
        }
        func_0x000107c5fadc(puVar3,0xe700000000000000);
        func_0x000104c9a0a8(uVar11,puVar5,puVar3,lVar14);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar3);
        plVar8 = (long *)(param_6 + 0x10);
        func_0x0001000a8868(plVar8,*(undefined8 *)(param_6 + 0x28));
        uVar11 = *(undefined8 *)(*plVar8 + 0x10);
        puVar5 = puVar12;
        func_0x000107c5fadc(0x6e776f6e6b6e75,0xe700000000000000);
        puVar3 = puVar5;
        FUN_100e1cba0();
        puVar10 = (undefined1 *)0x646574696d696c;
        if (puVar3 != (undefined1 *)0x1) {
          puVar10 = puVar12;
        }
        puVar12 = (undefined1 *)0x64656c62616e65;
        if (puVar3 != (undefined1 *)0x0) {
          puVar12 = puVar10;
        }
        func_0x000107c5fadc(puVar12,0xe700000000000000);
        func_0x000104c99e78(uVar11,puVar5,puVar12,1);
        func_0x000107c61170(puVar5);
        func_0x000107c61170();
        FUN_100e194ec();
        puVar6 = &UNK_1103b5a50;
        func_0x000107c613f8(&UNK_1103b5a50,puVar12,0,0);
        *puVar12 = 1;
      }
      else {
        plVar8 = (long *)(param_6 + 0x10);
        func_0x0001000a8868(plVar8,*(undefined8 *)(param_6 + 0x28));
        uVar11 = *(undefined8 *)(*plVar8 + 0x10);
        lVar13 = 0x656c6c65636e6163;
        lVar2 = lVar13;
        func_0x000107c5fadc(0x656c6c65636e6163,0xe900000000000064);
        lVar4 = 0;
        func_0x000100e1cc5c();
        FUN_100e1cba0();
        puVar10 = (undefined1 *)0x646574696d696c;
        if (lVar4 != 1) {
          puVar10 = (undefined1 *)0x6e776f6e6b6e75;
        }
        puVar5 = (undefined1 *)0x64656c62616e65;
        if (lVar4 != 0) {
          puVar5 = puVar10;
        }
        func_0x000107c5fadc(puVar5,0xe700000000000000);
        func_0x000107c6142c(0xe700000000000000);
        func_0x000104c9a0a8(uVar11,lVar2,puVar5,lVar14);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(puVar5);
        plVar8 = (long *)(param_6 + 0x10);
        func_0x0001000a8868(plVar8,*(undefined8 *)(param_6 + 0x28));
        uVar11 = *(undefined8 *)(*plVar8 + 0x10);
        func_0x000107c5fadc(0x656c6c65636e6163,0xe900000000000064);
        lVar14 = lVar13;
        FUN_100e1cba0();
        puVar10 = (undefined1 *)0x646574696d696c;
        if (lVar14 != 1) {
          puVar10 = (undefined1 *)0x6e776f6e6b6e75;
        }
        puVar5 = (undefined1 *)0x64656c62616e65;
        if (lVar14 != 0) {
          puVar5 = puVar10;
        }
        func_0x000107c5fadc(puVar5,0xe700000000000000);
        func_0x000107c6142c(0xe700000000000000);
        func_0x000104c99e78(uVar11,lVar13,puVar5,1);
        func_0x000107c61170(lVar13);
        func_0x000107c61170();
        FUN_100e194ec();
        puVar6 = &UNK_1103b5a50;
        func_0x000107c613f8(&UNK_1103b5a50,puVar5,0,0);
        *puVar5 = 0;
      }
      func_0x00010488ade0();
      func_0x000107c61574(param_6);
      func_0x000107c614ac(puVar6);
    }
  }
  return;
}



/* Entry: 100e1c324; end: 100e1c36f;  */

void FUN_100e1c324(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000100e1c410(unaff_x20 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}


