/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102c0bcd8; end: 102c0bcff;  */

void FUN_102c0bcd8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1105b0bd0;
  func_0x000107c613fc(&UNK_1105b0bd0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102c04618;
  func_0x00010058fa64(FUN_102c04618,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102c0bd00; end: 102c0bd4b;  */

void FUN_102c0bd00(undefined8 param_1)

{
  func_0x0001000285a8(0x112eff028,&UNK_10db32200);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102c0bd4c,param_1);
  return;
}



/* Entry: 102c0bd4c; end: 102c0bdc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c0bd4c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_112fbd108);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 102c0bdc4; end: 102c0bdd3;  */

undefined1  [16] FUN_102c0bdc4(void)

{
  return ZEXT816(0x1105b12d0);
}



/* Entry: 102c0bdd4; end: 102c0be1f;  */

void FUN_102c0bdd4(undefined8 param_1)

{
  func_0x0001000285a8(0x112eff028,&UNK_10db32200);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102c0be20,param_1);
  return;
}



/* Entry: 102c0be20; end: 102c0be97;  */

void FUN_102c0be20(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102c3a5d0();
  func_0x000107c61170(uStack_38);
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_2;
    func_0x000107c4de98();
    func_0x000107c61180();
    func_0x000107c615e8(param_2);
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 102c0be98; end: 102c0bea7;  */

undefined1  [16] FUN_102c0be98(void)

{
  return ZEXT816(0x1105b1398);
}



/* Entry: 102c0bea8; end: 102c0bf4b;  */

void FUN_102c0bea8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eff030,&UNK_10db32270);
  puVar1 = &UNK_1105b1460;
  func_0x000107c613fc(&UNK_1105b1460,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_102c0bf4c,puVar1);
  return;
}



/* Entry: 102c0bf4c; end: 102c0bff3;  */

void FUN_102c0bf4c(undefined8 *param_1)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_102c32904(0);
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  FUN_102c31ea0(uStack_58,uStack_60,uStack_68,uStack_70);
  *param_1 = uStack_58;
  return;
}



/* Entry: 102c0bff4; end: 102c0c003;  */

undefined1  [16] FUN_102c0bff4(void)

{
  return ZEXT816(0x1105b1488);
}



/* Entry: 102c0c004; end: 102c0c293;  */

void FUN_102c0c004(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eff038,&UNK_10db322a0);
  puVar1 = &UNK_1105b1550;
  func_0x000107c613fc(&UNK_1105b1550,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001000823a8(0x102c0c0e4,puVar1);
  return;
}



/* Entry: 102c0c294; end: 102c0c2a3;  */

undefined1  [16] FUN_102c0c294(void)

{
  return ZEXT816(0x1105b1578);
}



/* Entry: 102c0c2a4; end: 102c0c35b;  */

void FUN_102c0c2a4(undefined8 param_1)

{
  func_0x0001000285a8(0x112eff038,&UNK_10db322a0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102c0c2f0,param_1);
  return;
}



/* Entry: 102c0c35c; end: 102c0c36b;  */

undefined1  [16] FUN_102c0c35c(void)

{
  return ZEXT816(0x1105b1640);
}



/* Entry: 102c0c36c; end: 102c0c4df;  */

void FUN_102c0c36c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eff030,&UNK_10db32270);
  puVar1 = &UNK_1105b1708;
  func_0x000107c613fc(&UNK_1105b1708,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(0x102c0c404,puVar1);
  return;
}



/* Entry: 102c0c4e0; end: 102c0c4ef;  */

undefined1  [16] FUN_102c0c4e0(void)

{
  return ZEXT816(0x1105b1730);
}



/* Entry: 102c0c4f0; end: 102c0c55f;  */

void FUN_102c0c4f0(void)

{
  func_0x0001000285a8(0x112eff038,&UNK_10db322a0);
  func_0x0001000823a8(0x102c0c530,0);
  return;
}



/* Entry: 102c0c560; end: 102c0c56f;  */

undefined1  [16] FUN_102c0c560(void)

{
  return ZEXT816(0x1105b17f8);
}



/* Entry: 102c0c570; end: 102c0c627; -[_TtC27MemTwoSnapPlaybackLayerImpl37MemTwoSnapPlaybackLayerViewController loadView] */

/* WARNING: Possible PIC construction at 0x000102c0c5bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c0c604: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c0c5c0) */
/* WARNING: Removing unreachable block (ram,0x000102c0c624) */
/* WARNING: Removing unreachable block (ram,0x000102c0c5d4) */
/* WARNING: Removing unreachable block (ram,0x000102c0c608) */

void FUN_102c0c570(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c61174(param_1);
  func_0x000107c453e4(puVar1);
  func_0x000107c5a568(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 102c0c628; end: 102c0c7c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c0c628(double param_1,undefined8 param_2,double param_3,double param_4)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffff70,PTR_s_viewDidLayoutSubviews_112684cc8);
  if (*(char *)(unaff_x20 + _DAT_112eff058) == '\x01') {
    FUN_102c0c7c4();
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112eff040);
  if (lVar2 != 0) {
    lVar3 = ((long *)(unaff_x20 + _DAT_112eff040))[1];
    lVar1 = lVar2;
    func_0x000107c614f0(lVar2);
    pcVar4 = *(code **)(lVar3 + 8);
    func_0x000107c615f0(lVar2);
    (*pcVar4)(lVar1,lVar3);
    func_0x000107c615e8(lVar2);
    FUN_102c0ca40();
    func_0x000107c54b80(lVar1);
    func_0x000107c61170(lVar1);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112eff060);
  if (lVar2 != 0) {
    func_0x000107c61174();
    FUN_102c0ca40();
    func_0x000107c61174(lVar2);
    dVar5 = param_3;
    dVar7 = param_4;
    func_0x000107c5b098(param_3,param_4);
    dVar6 = param_1;
    func_0x000107c609c4(param_1,param_2,param_3,param_4);
    func_0x000107c609c8(param_1,param_2,param_3,param_4);
    func_0x000107c54b80(dVar6 + 8.0,param_1 + 8.0,dVar5 + 12.0,dVar7 + 6.0,lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102c0c7c4; end: 102c0ca3f;  */

/* WARNING: Possible PIC construction at 0x000102c0c9a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c0ca18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c0ca2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c0ca1c) */
/* WARNING: Removing unreachable block (ram,0x000102c0c9a4) */
/* WARNING: Removing unreachable block (ram,0x000102c0ca20) */
/* WARNING: Removing unreachable block (ram,0x000102c0c9c0) */
/* WARNING: Removing unreachable block (ram,0x000102c0ca30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c0c7c4(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 *param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  double dStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  undefined2 uStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  plVar1 = (long *)(unaff_x20 + _DAT_112eff040);
  if ((*plVar1 == 0) && (func_0x000102c0cf48(), param_5 != (undefined8 *)0x0)) {
    FUN_102c0ca40();
    if ((0.0 < param_3) && (0.0 < param_4)) {
      puVar2 = (undefined8 *)((long)param_5 + _DAT_112eff180);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      uVar10 = *(undefined8 *)((long)param_5 + _DAT_112eff188);
      uStack_98 = 0x3c;
      uStack_90 = 0;
      uStack_88 = 0x4038000000000000;
      pcStack_80 = FUN_102c0d144;
      uStack_78 = 0;
      uStack_70 = 0x102c0d148;
      uStack_68 = 0;
      lVar9 = *(long *)((long)param_5 + _DAT_112eff190);
      lVar6 = ((long *)((long)param_5 + _DAT_112eff190))[1];
      lVar7 = lVar9;
      uStack_c0 = uVar4;
      uStack_b8 = uVar5;
      uStack_b0 = uVar10;
      dStack_a8 = param_3;
      dStack_a0 = param_4;
      func_0x000107c614f0();
      pcVar11 = *(code **)(lVar6 + 0x18);
      func_0x000107c615f0(uVar10);
      func_0x000107c615f0(lVar9);
      func_0x00010006c00c(uVar4,uVar5);
      puVar8 = &uStack_c0;
      (*pcVar11)(puVar8,lVar7,lVar6);
      func_0x000107c615e8(lVar9);
      if (puVar8 == (undefined8 *)0x0) {
        func_0x000101c5f644(&uStack_c0);
      }
      else {
        lVar9 = *plVar1;
        *plVar1 = (long)puVar8;
        plVar1[1] = lVar7;
        func_0x000107c615f0(puVar8);
        func_0x000107c615e8(lVar9);
        uVar5 = puVar2[1];
        puVar3 = (undefined8 *)(unaff_x20 + _DAT_112eff048);
        uVar4 = *puVar3;
        uVar10 = puVar3[1];
        *puVar3 = *puVar2;
        puVar3[1] = uVar5;
        func_0x00010006c00c();
        func_0x0001000b44c0(uVar4,uVar10);
        func_0x000107c614f0(puVar8);
        (**(code **)(lVar7 + 8))();
        FUN_102c0ca40();
        func_0x000107c54b80(puVar8);
        func_0x000107c5de64();
        func_0x000107c61180();
        if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x102c0ca40);
          (*pcVar11)();
        }
        func_0x000107c3d89c();
        param_5 = puVar8;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_5);
    return;
  }
  return;
}



/* Entry: 102c0ca40; end: 102c0cbeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_102c0ca40(double param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  double dVar3;
  double dVar4;
  double dVar5;
  
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102c0cbe0);
    (*pcVar1)();
  }
  func_0x000107c515a0();
  dVar3 = param_1;
  func_0x000107c61170(lVar2);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102c0cbe4);
    (*pcVar1)();
  }
  func_0x000107c3ec60();
  func_0x000107c61170(lVar2);
  func_0x000107c609cc(dVar3,param_2,param_3,param_4);
  lVar2 = unaff_x20;
  dVar5 = dVar3;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102c0cbe8);
    (*pcVar1)();
  }
  func_0x000107c3ec60();
  func_0x000107c61170(lVar2);
  func_0x000107c609b0(dVar5,param_2,param_3,param_4);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102c0cbec);
    (*pcVar1)();
  }
  func_0x000107c515a0();
  func_0x000107c61170();
  dVar4 = 0.0;
  if (((0.0 < dVar3) && (param_3 = (dVar5 - param_1) - param_3, 0.0 < param_3)) &&
     (func_0x000102c0cf48(), unaff_x20 != 0)) {
    dVar5 = *(double *)(unaff_x20 + _DAT_112eff198);
    func_0x000107c61170();
    if (0.0 < dVar5) {
      dVar4 = param_3 * dVar5;
      if (dVar3 / dVar5 <= param_3) {
        dVar4 = dVar3;
      }
      dVar4 = (dVar3 - dVar4) * 0.5;
    }
  }
  return dVar4;
}



/* Entry: 102c0cbec; end: 102c0cc13; -[_TtC27MemTwoSnapPlaybackLayerImpl37MemTwoSnapPlaybackLayerViewController viewDidLayoutSubviews] */

void FUN_102c0cbec(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102c0c628();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c0cc14; end: 102c0cc1b; -[_TtC27MemTwoSnapPlaybackLayerImpl37MemTwoSnapPlaybackLayerViewController layerViewContainerOption] */

undefined8 FUN_102c0cc14(void)

{
  return 3;
}



/* Entry: 102c0cc1c; end: 102c0cc4b; -[_TtC27MemTwoSnapPlaybackLayerImpl37MemTwoSnapPlaybackLayerViewController viewWillFullyAppear] */

void FUN_102c0cc1c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102c0cc4c(&PTR_s_viewWillFullyAppear_112685468);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c0cc4c; end: 102c0ccf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c0cc4c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  code *pcVar4;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,*param_1);
  *(undefined1 *)(unaff_x20 + _DAT_112eff058) = 1;
  FUN_102c0c7c4();
  *(undefined1 *)(unaff_x20 + _DAT_112eff050) = 1;
  lVar3 = *(long *)(unaff_x20 + _DAT_112eff040);
  if (lVar3 != 0) {
    lVar2 = ((long *)(unaff_x20 + _DAT_112eff040))[1];
    lVar1 = lVar3;
    func_0x000107c614f0(lVar3);
    pcVar4 = *(code **)(lVar2 + 0x10);
    func_0x000107c615f0(lVar3);
    (*pcVar4)(lVar1,lVar2);
    func_0x000107c615e8(lVar3);
  }
  return;
}



/* Entry: 102c0ccf4; end: 102c0cd23; -[_TtC27MemTwoSnapPlaybackLayerImpl37MemTwoSnapPlaybackLayerViewController viewDidFullyAppear] */

void FUN_102c0ccf4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102c0cc4c(&PTR_s_viewDidFullyAppear_112684c88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c0cd24; end: 102c0cdc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c0cd24(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  code *pcVar4;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewWillFullyDisappear_112685470);
  *(undefined1 *)(unaff_x20 + _DAT_112eff058) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112eff050) = 0;
  lVar3 = *(long *)(unaff_x20 + _DAT_112eff040);
  if (lVar3 != 0) {
    lVar2 = ((long *)(unaff_x20 + _DAT_112eff040))[1];
    lVar1 = lVar3;
    func_0x000107c614f0(lVar3);
    pcVar4 = *(code **)(lVar2 + 0x18);
    func_0x000107c615f0(lVar3);
    (*pcVar4)(lVar1,lVar2);
    func_0x000107c615e8(lVar3);
  }
  return;
}



/* Entry: 102c0cdc4; end: 102c0cdeb; -[_TtC27MemTwoSnapPlaybackLayerImpl37MemTwoSnapPlaybackLayerViewController viewWillFullyDisappear] */

void FUN_102c0cdc4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102c0cd24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c0cdec; end: 102c0ceb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c0cdec(void)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  plVar1 = (long *)(unaff_x20 + _DAT_112eff040);
  lVar6 = *plVar1;
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    lVar7 = plVar1[1];
    lVar4 = lVar6;
    func_0x000107c614f0(lVar6);
    pcVar8 = *(code **)(lVar7 + 0x20);
    func_0x000107c615f0(lVar6);
    (*pcVar8)(lVar4,lVar7);
    func_0x000107c615e8(lVar6);
    lVar6 = *plVar1;
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  func_0x000107c615e8(lVar6);
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112eff048);
  uVar5 = *puVar2;
  uVar3 = puVar2[1];
  puVar2[1] = 0xf000000000000000;
  *puVar2 = 0;
  func_0x0001000b44c0(uVar5,uVar3);
  *(undefined1 *)(unaff_x20 + _DAT_112eff050) = 0;
  lVar6 = _DAT_112eff060;
  uVar5 = 0;
  if (*(long *)(unaff_x20 + _DAT_112eff060) != 0) {
    func_0x000107c4ff34();
    uVar5 = *(undefined8 *)(unaff_x20 + lVar6);
  }
  *(undefined8 *)(unaff_x20 + lVar6) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 102c0ceb8; end: 102c0d07f; -[_TtC27MemTwoSnapPlaybackLayerImpl37MemTwoSnapPlaybackLayerViewController viewDidFullyDisappear] */

void FUN_102c0ceb8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  puVar2 = PTR_s_viewDidFullyDisappear_112684ca8;
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,puVar2);
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3dfc0();
  func_0x000107c61170(puVar2);
  if (puVar3 == (undefined *)0x0) {
    FUN_102c0cdec();
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102c0d080; end: 102c0d0e3; -[_TtC27MemTwoSnapPlaybackLayerImpl37MemTwoSnapPlaybackLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Possible PIC construction at 0x000102c0d0c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c0d0c8) */

void FUN_102c0d080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102c0d57c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102c0d0e4; end: 102c0d143; -[_TtC27MemTwoSnapPlaybackLayerImpl37MemTwoSnapPlaybackLayerViewController teardown] */

void FUN_102c0d0e4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61174();
  FUN_102c0cdec();
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61154(&uStack_40,PTR_s_teardown_112678538);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102c0d144; end: 102c0d14b;  */

void FUN_102c0d144(void)

{
  return;
}



/* Entry: 102c0d14c; end: 102c0d23f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102c0d14c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eff040);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eff048);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112eff050) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112eff058) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eff060) = 0;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_initWithConfiguration_layerViewC_1125de030,
                      param_1,param_2,param_3,param_4);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  if (puVar2 != (undefined1 *)0x0) {
    func_0x000107c61170(puVar2);
  }
  return puVar2;
}



/* Entry: 102c0d240; end: 102c0d39b; -[_TtC27MemTwoSnapPlaybackLayerImpl37MemTwoSnapPlaybackLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

void FUN_102c0d240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  FUN_102c0d14c(param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 102c0d39c; end: 102c0d4b3; -[_TtC27MemTwoSnapPlaybackLayerImpl37MemTwoSnapPlaybackLayerViewController initWithNibName:bundle:] */

void FUN_102c0d39c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_4);
  func_0x000102c0d2b4(param_3,param_2,param_4);
  return;
}



/* Entry: 102c0d4b4; end: 102c0d4db; -[_TtC27MemTwoSnapPlaybackLayerImpl37MemTwoSnapPlaybackLayerViewController initWithCoder:] */

void FUN_102c0d4b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000102c0d3fc();
  return;
}



/* Entry: 102c0d4dc; end: 102c0d50f;  */

void FUN_102c0d4dc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c0d510; end: 102c0d55b; -[_TtC27MemTwoSnapPlaybackLayerImpl37MemTwoSnapPlaybackLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c0d510(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112eff040));
  func_0x0001000b44c0(*(undefined8 *)(param_1 + _DAT_112eff048),
                      ((undefined8 *)(param_1 + _DAT_112eff048))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eff060));
  return;
}



/* Entry: 102c0d55c; end: 102c0d57b;  */

void FUN_102c0d55c(void)

{
  func_0x000107c61168(&PTR_PTR_112eff0a8);
  return;
}



/* Entry: 102c0d57c; end: 102c0d6eb;  */

/* WARNING: Possible PIC construction at 0x000102c0d5d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c0d634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c0d64c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c0ce78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c0d6c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c0d6cc) */
/* WARNING: Removing unreachable block (ram,0x000102c0ce7c) */
/* WARNING: Removing unreachable block (ram,0x000102c0ce98) */
/* WARNING: Removing unreachable block (ram,0x000102c0cea0) */
/* WARNING: Removing unreachable block (ram,0x000102c0d650) */
/* WARNING: Removing unreachable block (ram,0x000102c0d6d8) */
/* WARNING: Removing unreachable block (ram,0x000102c0cdec) */
/* WARNING: Removing unreachable block (ram,0x000102c0ce50) */
/* WARNING: Removing unreachable block (ram,0x000102c0ce18) */
/* WARNING: Removing unreachable block (ram,0x000102c0ce54) */
/* WARNING: Removing unreachable block (ram,0x000102c0d638) */
/* WARNING: Removing unreachable block (ram,0x000102c0d5d4) */
/* WARNING: Removing unreachable block (ram,0x000102c0d5f0) */
/* WARNING: Removing unreachable block (ram,0x000102c0d5fc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Removing unreachable block (ram,0x00010006c0a4) */
/* WARNING: Removing unreachable block (ram,0x00010006c090) */
/* WARNING: Removing unreachable block (ram,0x00010006c09c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0cc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0c4) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c0d57c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112eff040) == 0) {
    return;
  }
  func_0x000102c0cf48();
  if (param_1 == 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112eff048);
    uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112eff048))[1];
    if (uVar2 >> 0x3c < 0xf) {
      func_0x000100de78a0(uVar1,uVar2);
    }
    else {
      func_0x000100de78a0(uVar1,uVar2);
    }
    return;
  }
  func_0x00010006c00c(*(undefined8 *)(param_1 + _DAT_112eff180),
                      ((undefined8 *)(param_1 + _DAT_112eff180))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c0d6ec; end: 102c0d76f; -[MemTwoSnapPlaybackLayerViewControllerFactory supportedLayers] */

void FUN_102c0d6ec(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = 0x112eff120;
  func_0x0001000285a8(0x112eff120,&UNK_10db32400);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  uVar2 = 0;
  func_0x000102c0d958();
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  uVar2 = 0x112eff150;
  func_0x0001000285a8(0x112eff150,&UNK_10db32440);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 102c0d770; end: 102c0d7e3; -[MemTwoSnapPlaybackLayerViewControllerFactory layerViewControllerWithLayer:configuration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

void FUN_102c0d770(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000102c0d958(0);
  func_0x000107c61480(param_3,uVar1);
  if (param_3 != 0) {
    FUN_102c0d55c(0);
    func_0x000107c610f8();
    func_0x000107c45ff8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c0d7e4; end: 102c0d81f; -[MemTwoSnapPlaybackLayerViewControllerFactory init] */

void FUN_102c0d7e4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c0d820; end: 102c0d8ab;  */

void FUN_102c0d820(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c0d8ac; end: 102c0d8e7; -[_TtC26MemTwoSnapPlaybackLayerAPI23MemTwoSnapPlaybackLayer initWithPage:] */

void FUN_102c0d8ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c0d8e8; end: 102c0d8ef; -[_TtC26MemTwoSnapPlaybackLayerAPI23MemTwoSnapPlaybackLayer type] */

undefined8 FUN_102c0d8e8(void)

{
  return 0x19;
}



/* Entry: 102c0d8f0; end: 102c0d8f7; -[_TtC26MemTwoSnapPlaybackLayerAPI23MemTwoSnapPlaybackLayer layerContentType] */

undefined8 FUN_102c0d8f0(void)

{
  return 1;
}



/* Entry: 102c0d8f8; end: 102c0d977; -[_TtC26MemTwoSnapPlaybackLayerAPI23MemTwoSnapPlaybackLayer init] */

void FUN_102c0d8f8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoSnapPlaybackLayerAPI.MemTwoSnapPlaybackLayer",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c0d924);
  (*pcVar1)();
}



/* Entry: 102c0d978; end: 102c0d983;  */

undefined * FUN_102c0d978(void)

{
  return &UNK_1105b1958;
}



/* Entry: 102c0d984; end: 102c0dacb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c0d984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eff180);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112eff188) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eff190);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112eff198) = param_1;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c0dacc; end: 102c0db2b; -[_TtC26MemTwoSnapPlaybackLayerAPI28MemTwoSnapPlaybackLayerModel init] */

void FUN_102c0dacc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoSnapPlaybackLayerAPI.MemTwoSnapPlaybackLayerModel",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c0daf8);
  (*pcVar1)();
}



/* Entry: 102c0db2c; end: 102c0db77; -[_TtC26MemTwoSnapPlaybackLayerAPI28MemTwoSnapPlaybackLayerModel .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c0db5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c0db60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c0db2c(long param_1)

{
  func_0x00010006c090(*(undefined8 *)(param_1 + _DAT_112eff180),
                      ((undefined8 *)(param_1 + _DAT_112eff180))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eff188));
  return;
}



/* Entry: 102c0db78; end: 102c0db97;  */

void FUN_102c0db78(void)

{
  func_0x000107c61168(&PTR_PTR_112896970);
  return;
}



/* Entry: 102c0db98; end: 102c0e06f;  */

long FUN_102c0db98(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102c0e070; end: 102c0e0db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c0e070(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x0001002c3554();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112eff1d0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 102c0e0dc; end: 102c0e0e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c0e0dc(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x0001002c3554();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112eff1d0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 102c0e0e4; end: 102c0e167;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c0e0e4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eff1d0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c0e168; end: 102c0e1c7; -[_TtC23SnapPlaybackViewService24SnapPlaybackViewServices init] */

void FUN_102c0e168(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapPlaybackViewService.SnapPlaybackViewServices",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c0e194);
  (*pcVar1)();
}



/* Entry: 102c0e1c8; end: 102c0e1d7;  */

undefined1  [16] FUN_102c0e1c8(void)

{
  return ZEXT816(0x1105b1b38);
}



/* Entry: 102c0e1d8; end: 102c0e1e7; -[_TtC23SnapPlaybackViewService24SnapPlaybackViewServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c0e1d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eff1d0));
  return;
}



/* Entry: 102c0e1e8; end: 102c0e257;  */

undefined1 FUN_102c0e1e8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uStack_31;
  
  puVar1 = &UNK_10db32660;
  func_0x000107c614e0(&UNK_10db32660);
  puVar2 = &UNK_10db32688;
  func_0x000107c614e0(&UNK_10db32688);
  func_0x000107c5f20c(&uStack_31);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  return uStack_31;
}



/* Entry: 102c0e258; end: 102c0e2b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c0e258(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x00010058d43c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = _DAT_112eff200;
  lVar2 = 0x112d4ffc8;
  func_0x0001000285a8(0x112d4ffc8,&UNK_10d9de530);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c0e2b8; end: 102c0e2bf;  */

void FUN_102c0e2b8(void)

{
  if (lRam0000000112eff230 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e72078c);
  return;
}



/* Entry: 102c0e2c0; end: 102c0e2f7;  */

void FUN_102c0e2c0(undefined8 param_1)

{
  if (lRam0000000112eff230 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e72078c);
  return;
}



/* Entry: 102c0e2f8; end: 102c0e36f;  */

void FUN_102c0e2f8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = &UNK_10db32610;
  lVar1 = 0x13f;
  func_0x000100f8b92c();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,2,&puStack_30,param_1 + 0x50);
  }
  return;
}



/* Entry: 102c0e370; end: 102c0e37b;  */

undefined * FUN_102c0e370(void)

{
  return PTR___s7Combine25ObservableObjectPublisherCAA0D0AAWP_11034ae28;
}



/* Entry: 102c0e37c; end: 102c0e3a3;  */

void FUN_102c0e37c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5f1e8();
  *param_1 = uVar1;
  return;
}



/* Entry: 102c0e3a4; end: 102c0e3ab;  */

void FUN_102c0e3a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 102c0e3ac; end: 102c0e3df;  */

undefined8 * FUN_102c0e3ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 102c0e3e0; end: 102c0e433;  */

undefined8 * FUN_102c0e3e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 102c0e434; end: 102c0e46f;  */

undefined8 * FUN_102c0e434(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61574(uVar2);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 102c0e470; end: 102c0e517;  */

int FUN_102c0e470(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102c0e518; end: 102c0e8c7;  */

void FUN_102c0e518(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  code *pcVar17;
  undefined1 auVar18 [16];
  char cStack_99;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar7 = &UNK_1105b1ca0;
  func_0x000107c613fc(&UNK_1105b1ca0,0x28,7);
  *(undefined8 *)(puVar7 + 0x10) = param_3;
  *(undefined8 *)(puVar7 + 0x18) = param_4;
  *(undefined8 *)(puVar7 + 0x20) = param_2;
  func_0x000107c6157c(param_4);
  uVar8 = 0x112eff2d8;
  func_0x0001000285a8(0x112eff2d8,&UNK_10db32730);
  uVar9 = uVar8;
  FUN_102c0f408();
  func_0x000107c5f738(param_1,FUN_102c0f3fc,puVar7,FUN_102c0e90c,0,uVar8,uVar9);
  lVar10 = 0x112eff308;
  func_0x0001000285a8(0x112eff308,&UNK_10db32748);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar10 + 0x24));
  lVar11 = 0;
  func_0x000107c5f37c();
  iVar5 = *(int *)(lVar11 + 0x14);
  uVar4 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50;
  lVar12 = 0;
  func_0x000107c5f41c();
  pcVar17 = *(code **)(*(long *)(lVar12 + -8) + 0x68);
  (*pcVar17)((long)puVar1 + (long)iVar5,uVar4,lVar12);
  auVar18 = NEON_fmov(0x4034000000000000,8);
  puVar1[1] = auVar18._8_8_;
  *puVar1 = auVar18._0_8_;
  puVar13 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c5f6dc();
  lVar10 = 0x112d50058;
  puVar7 = &UNK_10d916410;
  func_0x0001000285a8();
  *(undefined **)((long)puVar1 + (long)*(int *)(lVar10 + 0x34)) = puVar13;
  *(undefined2 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x38)) = 0x100;
  func_0x000107c5f7ac();
  lVar14 = 0x112eff310;
  func_0x0001000285a8(0x112eff310,&UNK_10db7f070);
  plVar2 = (long *)((long)puVar1 + (long)*(int *)(lVar14 + 0x24));
  *plVar2 = lVar10;
  plVar2[1] = (long)puVar7;
  lVar10 = 0x112eff318;
  func_0x0001000285a8(0x112eff318,&UNK_10db32750);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar10 + 0x24));
  lVar10 = (long)puVar1 + (long)*(int *)(lVar11 + 0x14);
  (*pcVar17)(lVar10,uVar4,lVar12);
  puVar1[1] = auVar18._8_8_;
  *puVar1 = auVar18._0_8_;
  func_0x000107c5f6d0();
  lVar14 = lVar10;
  func_0x000107c5f6d4(0x3fd0000000000000);
  func_0x000107c61574(lVar10);
  func_0x000107c5f2b4(&uStack_98,0x3fe0000000000000,0x4024000000000000,0,0,0,
                      PTR___swiftEmptyArrayStorage_11034f1c8);
  lVar10 = 0x112d50210;
  func_0x0001000285a8(0x112d50210,&UNK_10d916888);
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x24));
  puVar3[1] = uStack_90;
  *puVar3 = uStack_98;
  puVar3[3] = uStack_80;
  puVar3[2] = uStack_88;
  puVar3[4] = uStack_78;
  lVar10 = 0x112d50218;
  puVar7 = &UNK_10d916890;
  func_0x0001000285a8();
  *(long *)((long)puVar1 + (long)*(int *)(lVar10 + 0x34)) = lVar14;
  *(undefined2 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x38)) = 0x100;
  func_0x000107c5f7ac();
  lVar14 = 0x112eff320;
  func_0x0001000285a8(0x112eff320,&UNK_10db32758);
  plVar2 = (long *)((long)puVar1 + (long)*(int *)(lVar14 + 0x24));
  *plVar2 = lVar10;
  plVar2[1] = (long)puVar7;
  puVar7 = &UNK_10db32760;
  puVar15 = puVar7;
  func_0x000107c614e0(&UNK_10db32760);
  puVar13 = &UNK_10db32788;
  puVar16 = puVar13;
  func_0x000107c614e0(&UNK_10db32788);
  func_0x000107c5f20c(&cStack_99,param_4,puVar15,puVar16);
  func_0x000107c61574(puVar15);
  func_0x000107c61574(puVar16);
  cVar6 = cStack_99;
  puVar15 = &UNK_10db327a8;
  func_0x000107c614e0();
  puVar16 = &UNK_1105b1cc8;
  func_0x000107c613fc(&UNK_1105b1cc8,0x11,7);
  puVar16[0x10] = cVar6;
  lVar10 = 0x112eff328;
  func_0x0001000285a8(0x112eff328,&UNK_10db327d8);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar10 + 0x24));
  *puVar1 = puVar15;
  puVar1[1] = FUN_102c0f5e8;
  puVar1[2] = puVar16;
  func_0x000107c614e0(&UNK_10db32760);
  func_0x000107c614e0(&UNK_10db32788);
  func_0x000107c5f20c(&cStack_99,param_4,puVar7,puVar13);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar13);
  uVar8 = 0x3fe0000000000000;
  if (cStack_99 == '\0') {
    uVar8 = 0x3ff0000000000000;
  }
  lVar10 = 0x112eff330;
  func_0x0001000285a8(0x112eff330,&UNK_10db327e0);
  *(undefined8 *)(param_1 + *(int *)(lVar10 + 0x24)) = uVar8;
  return;
}



/* Entry: 102c0e8c8; end: 102c0e90b;  */

void FUN_102c0e8c8(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_2 + 0x10);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 102c0e90c; end: 102c0edeb;  */

void FUN_102c0e90c(undefined8 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined7 uStack_7c0;
  undefined1 uStack_7b9;
  undefined7 uStack_7b8;
  undefined1 uStack_7b1;
  undefined7 uStack_7b0;
  undefined1 uStack_7a9;
  undefined7 uStack_7a8;
  undefined1 uStack_7a1;
  undefined7 uStack_7a0;
  undefined1 uStack_799;
  undefined7 uStack_798;
  undefined1 uStack_791;
  undefined7 uStack_790;
  undefined1 uStack_789;
  undefined7 uStack_788;
  undefined1 uStack_781;
  undefined7 uStack_780;
  undefined1 uStack_779;
  undefined7 uStack_778;
  undefined1 uStack_771;
  undefined7 uStack_770;
  undefined1 uStack_769;
  undefined7 uStack_768;
  undefined1 uStack_761;
  undefined7 uStack_760;
  undefined1 uStack_759;
  undefined7 uStack_758;
  undefined1 uStack_751;
  undefined7 uStack_750;
  undefined8 uStack_749;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
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
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined1 uStack_628;
  undefined7 uStack_627;
  undefined1 uStack_620;
  undefined7 uStack_61f;
  undefined1 uStack_618;
  undefined7 uStack_617;
  undefined8 uStack_610;
  undefined8 uStack_608;
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
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined1 uStack_500;
  undefined7 uStack_4ff;
  undefined1 uStack_4f8;
  undefined7 uStack_4f7;
  undefined1 uStack_4f0;
  undefined7 uStack_4ef;
  undefined1 uStack_4e8;
  undefined7 uStack_4e7;
  undefined1 uStack_4e0;
  undefined7 uStack_4df;
  undefined1 uStack_4d8;
  undefined7 uStack_4d7;
  undefined1 uStack_4d0;
  undefined7 uStack_4cf;
  undefined1 uStack_4c8;
  undefined7 uStack_4c7;
  undefined1 uStack_4c0;
  undefined7 uStack_4bf;
  undefined1 uStack_4b8;
  undefined7 uStack_4b7;
  undefined1 uStack_4b0;
  undefined7 uStack_4af;
  undefined1 uStack_4a8;
  undefined7 uStack_4a7;
  undefined1 uStack_4a0;
  undefined7 uStack_49f;
  undefined1 uStack_498;
  undefined7 uStack_497;
  undefined1 uStack_490;
  undefined7 uStack_48f;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined1 uStack_470;
  undefined8 uStack_46f;
  undefined8 uStack_467;
  undefined8 uStack_45f;
  undefined8 uStack_457;
  undefined8 uStack_44f;
  undefined8 uStack_447;
  undefined8 uStack_43f;
  undefined8 uStack_437;
  undefined8 uStack_42f;
  undefined8 uStack_427;
  undefined8 uStack_41f;
  undefined8 uStack_417;
  undefined8 uStack_40f;
  undefined7 uStack_407;
  undefined1 uStack_400;
  undefined7 uStack_3ff;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined1 uStack_360;
  undefined7 uStack_35f;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 uStack_348;
  undefined7 uStack_347;
  undefined1 uStack_340;
  undefined7 uStack_33f;
  undefined1 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 uStack_278;
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
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 uStack_1b0;
  undefined7 uStack_1af;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined7 uStack_18f;
  undefined1 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
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
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_98;
  undefined8 *puVar3;
  
  func_0x000107c5f410();
  FUN_102c0edec(&uStack_180);
  uStack_5c8 = uStack_138;
  uStack_5d0 = uStack_140;
  uStack_5b8 = uStack_128;
  uStack_5c0 = uStack_130;
  uStack_5a8 = uStack_118;
  uStack_5b0 = uStack_120;
  uStack_5a0 = uStack_110;
  uStack_608 = uStack_178;
  uStack_610 = uStack_180;
  uStack_5f8 = uStack_168;
  uStack_600 = uStack_170;
  uStack_5e8 = uStack_158;
  uStack_5f0 = uStack_160;
  uStack_5d8 = uStack_148;
  uStack_5e0 = uStack_150;
  uStack_588 = uStack_178;
  uStack_590 = uStack_180;
  uStack_578 = uStack_168;
  uStack_580 = uStack_170;
  uStack_568 = uStack_158;
  uStack_570 = uStack_160;
  uStack_558 = uStack_148;
  uStack_560 = uStack_150;
  uStack_548 = uStack_138;
  uStack_550 = uStack_140;
  uStack_538 = uStack_128;
  uStack_540 = uStack_130;
  uStack_528 = uStack_118;
  uStack_530 = uStack_120;
  uStack_520 = uStack_110;
  FUN_102c0f600(&uStack_610,&uStack_270,0x112eff338,&UNK_10db327e8);
  puVar3 = &uStack_590;
  func_0x000102c0f648(puVar3,0x112eff338,&UNK_10db327e8);
  uVar1 = SUB81(puVar3,0);
  uStack_771 = (undefined1)uStack_5c8;
  uStack_770 = (undefined7)((ulong)uStack_5c8 >> 8);
  uStack_779 = (undefined1)uStack_5d0;
  uStack_778 = (undefined7)((ulong)uStack_5d0 >> 8);
  uStack_761 = (undefined1)uStack_5b8;
  uStack_760 = (undefined7)((ulong)uStack_5b8 >> 8);
  uStack_769 = (undefined1)uStack_5c0;
  uStack_768 = (undefined7)((ulong)uStack_5c0 >> 8);
  uStack_751 = (undefined1)uStack_5a8;
  uStack_750 = (undefined7)((ulong)uStack_5a8 >> 8);
  uStack_759 = (undefined1)uStack_5b0;
  uStack_758 = (undefined7)((ulong)uStack_5b0 >> 8);
  uStack_7b1 = (undefined1)uStack_608;
  uStack_7b0 = (undefined7)((ulong)uStack_608 >> 8);
  uStack_7b9 = (undefined1)uStack_610;
  uStack_7b8 = (undefined7)((ulong)uStack_610 >> 8);
  uStack_7a1 = (undefined1)uStack_5f8;
  uStack_7a0 = (undefined7)((ulong)uStack_5f8 >> 8);
  uStack_7a9 = (undefined1)uStack_600;
  uStack_7a8 = (undefined7)((ulong)uStack_600 >> 8);
  uStack_791 = (undefined1)uStack_5e8;
  uStack_790 = (undefined7)((ulong)uStack_5e8 >> 8);
  uStack_799 = (undefined1)uStack_5f0;
  uStack_798 = (undefined7)((ulong)uStack_5f0 >> 8);
  uStack_749 = uStack_5a0;
  uStack_781 = (undefined1)uStack_5d8;
  uStack_780 = (undefined7)((ulong)uStack_5d8 >> 8);
  uStack_789 = (undefined1)uStack_5e0;
  uStack_788 = (undefined7)((ulong)uStack_5e0 >> 8);
  func_0x000107c5f568();
  uStack_4b7 = uStack_778;
  uStack_4b0 = uStack_771;
  uStack_4bf = uStack_780;
  uStack_4b8 = uStack_779;
  uStack_4a7 = uStack_768;
  uStack_4a0 = uStack_761;
  uStack_4af = uStack_770;
  uStack_4a8 = uStack_769;
  uStack_497 = uStack_758;
  uStack_49f = uStack_760;
  uStack_498 = uStack_759;
  uStack_488 = uStack_749;
  uStack_490 = uStack_751;
  uStack_48f = uStack_750;
  uStack_4f7 = uStack_7b8;
  uStack_4f0 = uStack_7b1;
  uStack_4ff = uStack_7c0;
  uStack_4f8 = uStack_7b9;
  uStack_4e7 = uStack_7a8;
  uStack_4e0 = uStack_7a1;
  uStack_4ef = uStack_7b0;
  uStack_4e8 = uStack_7a9;
  uVar6 = CONCAT17(uStack_789,uStack_790);
  uStack_4d7 = uStack_798;
  uStack_4d0 = uStack_791;
  uStack_4df = uStack_7a0;
  uStack_4d8 = uStack_799;
  uStack_508 = 0x4018000000000000;
  uStack_500 = 0;
  uStack_4c7 = uStack_788;
  uStack_4c0 = uStack_781;
  uStack_4cf = uStack_790;
  uStack_4c8 = uStack_789;
  uVar4 = 0x4028000000000000;
  uVar7 = uStack_120;
  uVar5 = uStack_180;
  uStack_510 = param_2;
  func_0x000107c5f280();
  uStack_208 = CONCAT71(uStack_4a7,uStack_4a8);
  uStack_210 = CONCAT71(uStack_4af,uStack_4b0);
  uStack_1f8 = CONCAT71(uStack_497,uStack_498);
  uStack_200 = CONCAT71(uStack_49f,uStack_4a0);
  uStack_1f0 = CONCAT71(uStack_48f,uStack_490);
  uStack_1e8 = uStack_488;
  uStack_248 = CONCAT71(uStack_4e7,uStack_4e8);
  uStack_250 = CONCAT71(uStack_4ef,uStack_4f0);
  uStack_238 = CONCAT71(uStack_4d7,uStack_4d8);
  uStack_240 = CONCAT71(uStack_4df,uStack_4e0);
  uStack_228 = CONCAT71(uStack_4c7,uStack_4c8);
  uStack_230 = CONCAT71(uStack_4cf,uStack_4d0);
  uStack_218 = CONCAT71(uStack_4b7,uStack_4b8);
  uStack_220 = CONCAT71(uStack_4bf,uStack_4c0);
  uStack_258 = CONCAT71(uStack_4f7,uStack_4f8);
  uStack_260 = CONCAT71(uStack_4ff,uStack_500);
  uStack_268 = uStack_508;
  uStack_270 = uStack_510;
  uStack_427 = CONCAT17(uStack_771,uStack_778);
  uStack_42f = CONCAT17(uStack_779,uStack_780);
  uStack_417 = CONCAT17(uStack_761,uStack_768);
  uStack_41f = CONCAT17(uStack_769,uStack_770);
  uStack_40f = CONCAT17(uStack_759,uStack_760);
  uStack_407 = uStack_758;
  uStack_3f8 = uStack_749;
  uStack_400 = uStack_751;
  uStack_3ff = uStack_750;
  uStack_467 = CONCAT17(uStack_7b1,uStack_7b8);
  uStack_46f = CONCAT17(uStack_7b9,uStack_7c0);
  uStack_457 = CONCAT17(uStack_7a1,uStack_7a8);
  uStack_45f = CONCAT17(uStack_7a9,uStack_7b0);
  uStack_447 = CONCAT17(uStack_791,uStack_798);
  uStack_44f = CONCAT17(uStack_799,uStack_7a0);
  uStack_437 = CONCAT17(uStack_781,uStack_788);
  uStack_43f = CONCAT17(uStack_789,uStack_790);
  uStack_478 = 0x4018000000000000;
  uStack_470 = 0;
  uVar8 = uVar7;
  uVar9 = uVar5;
  uStack_480 = param_2;
  FUN_102c0f600(&uStack_510,&uStack_180,0x112eff300,&UNK_10db32740);
  puVar3 = &uStack_480;
  func_0x000102c0f648(puVar3,0x112eff300,&UNK_10db32740);
  uVar2 = SUB81(puVar3,0);
  func_0x000107c5f584();
  uStack_388 = uStack_208;
  uStack_390 = uStack_210;
  uStack_378 = uStack_1f8;
  uStack_380 = uStack_200;
  uStack_368 = uStack_1e8;
  uStack_370 = uStack_1f0;
  uStack_3c8 = uStack_248;
  uStack_3d0 = uStack_250;
  uStack_3b8 = uStack_238;
  uStack_3c0 = uStack_240;
  uStack_398 = uStack_218;
  uStack_3a0 = uStack_220;
  uStack_3a8 = uStack_228;
  uStack_3b0 = uStack_230;
  uStack_3e8 = uStack_268;
  uStack_3f0 = uStack_270;
  uStack_3d8 = uStack_258;
  uStack_3e0 = uStack_260;
  uStack_348 = (undefined1)uVar7;
  uStack_347 = (undefined7)((ulong)uVar7 >> 8);
  uStack_340 = (undefined1)uVar5;
  uStack_33f = (undefined7)((ulong)uVar5 >> 8);
  uStack_338 = 0;
  uVar5 = 0x4020000000000000;
  uVar7 = uStack_270;
  uStack_360 = uVar1;
  uStack_358 = uVar4;
  uStack_350 = uVar6;
  func_0x000107c5f280();
  uStack_640 = CONCAT71(uStack_35f,uStack_360);
  uStack_648 = uStack_368;
  uStack_650 = uStack_370;
  uStack_638 = uStack_358;
  uStack_628 = uStack_348;
  uStack_630 = uStack_350;
  uStack_61f = uStack_33f;
  uStack_618 = uStack_338;
  uStack_627 = uStack_347;
  uStack_620 = uStack_340;
  uStack_688 = uStack_3a8;
  uStack_690 = uStack_3b0;
  uStack_678 = uStack_398;
  uStack_680 = uStack_3a0;
  uStack_668 = uStack_388;
  uStack_670 = uStack_390;
  uStack_658 = uStack_378;
  uStack_660 = uStack_380;
  uStack_6c8 = uStack_3e8;
  uStack_6d0 = uStack_3f0;
  uStack_6b8 = uStack_3d8;
  uStack_6c0 = uStack_3e0;
  uStack_6a8 = uStack_3c8;
  uStack_6b0 = uStack_3d0;
  uStack_698 = uStack_3b8;
  uStack_6a0 = uStack_3c0;
  uStack_2c8 = uStack_208;
  uStack_2d0 = uStack_210;
  uStack_2b8 = uStack_1f8;
  uStack_2c0 = uStack_200;
  uStack_2a8 = uStack_1e8;
  uStack_2b0 = uStack_1f0;
  uStack_308 = uStack_248;
  uStack_310 = uStack_250;
  uStack_2f8 = uStack_238;
  uStack_300 = uStack_240;
  uStack_2d8 = uStack_218;
  uStack_2e0 = uStack_220;
  uStack_2e8 = uStack_228;
  uStack_2f0 = uStack_230;
  uStack_318 = uStack_258;
  uStack_320 = uStack_260;
  uStack_328 = uStack_268;
  uStack_330 = uStack_270;
  uStack_278 = 0;
  uStack_2a0 = uVar1;
  uStack_298 = uVar4;
  uStack_290 = uVar6;
  FUN_102c0f600(&uStack_3f0,&uStack_180,0x112eff2f0,&UNK_10db32738);
  func_0x000102c0f648(&uStack_330,0x112eff2f0,&UNK_10db32738);
  uStack_1e8 = uStack_648;
  uStack_1f0 = uStack_650;
  uStack_1d8 = uStack_638;
  uStack_1e0 = uStack_640;
  uStack_1c8 = CONCAT71(uStack_627,uStack_628);
  uStack_1b8 = CONCAT71(uStack_617,uStack_618);
  uStack_1c0 = CONCAT71(uStack_61f,uStack_620);
  uStack_d8 = CONCAT71(uStack_627,uStack_628);
  uStack_c8 = CONCAT71(uStack_617,uStack_618);
  uStack_d0 = CONCAT71(uStack_61f,uStack_620);
  uStack_1d0 = uStack_630;
  uStack_228 = uStack_688;
  uStack_230 = uStack_690;
  uStack_218 = uStack_678;
  uStack_220 = uStack_680;
  uStack_208 = uStack_668;
  uStack_210 = uStack_670;
  uStack_1f8 = uStack_658;
  uStack_200 = uStack_660;
  uStack_268 = uStack_6c8;
  uStack_270 = uStack_6d0;
  uStack_258 = uStack_6b8;
  uStack_260 = uStack_6c0;
  uStack_248 = uStack_6a8;
  uStack_250 = uStack_6b0;
  uStack_238 = uStack_698;
  uStack_240 = uStack_6a0;
  uStack_f8 = uStack_648;
  uStack_100 = uStack_650;
  uStack_e8 = uStack_638;
  uStack_f0 = uStack_640;
  uStack_e0 = uStack_630;
  uStack_138 = uStack_688;
  uStack_140 = uStack_690;
  uStack_128 = uStack_678;
  uStack_130 = uStack_680;
  uStack_118 = uStack_668;
  uStack_120 = uStack_670;
  uStack_108 = uStack_658;
  uStack_110 = uStack_660;
  uStack_178 = uStack_6c8;
  uStack_180 = uStack_6d0;
  uStack_168 = uStack_6b8;
  uStack_170 = uStack_6c0;
  uStack_198 = (undefined1)uVar8;
  uStack_197 = (undefined7)((ulong)uVar8 >> 8);
  uStack_190 = (undefined1)uVar9;
  uStack_18f = (undefined7)((ulong)uVar9 >> 8);
  uStack_188 = 0;
  uStack_158 = uStack_6a8;
  uStack_160 = uStack_6b0;
  uStack_148 = uStack_698;
  uStack_150 = uStack_6a0;
  uStack_98 = 0;
  uStack_1b0 = uVar2;
  uStack_1a8 = uVar5;
  uStack_1a0 = uVar7;
  uStack_c0 = uVar2;
  uStack_b8 = uVar5;
  uStack_b0 = uVar7;
  FUN_102c0f600(&uStack_270,&uStack_7c0,0x112eff2d8,&UNK_10db32730);
  func_0x000102c0f648(&uStack_180,0x112eff2d8,&UNK_10db32730);
  param_1[0x19] = uStack_1a8;
  param_1[0x18] = CONCAT71(uStack_1af,uStack_1b0);
  param_1[0x1b] = CONCAT71(uStack_197,uStack_198);
  param_1[0x1a] = uStack_1a0;
  *(ulong *)((long)param_1 + 0xe1) = CONCAT17(uStack_188,uStack_18f);
  *(ulong *)((long)param_1 + 0xd9) = CONCAT17(uStack_190,uStack_197);
  param_1[0x11] = uStack_1e8;
  param_1[0x10] = uStack_1f0;
  param_1[0x13] = uStack_1d8;
  param_1[0x12] = uStack_1e0;
  param_1[0x15] = uStack_1c8;
  param_1[0x14] = uStack_1d0;
  param_1[0x17] = uStack_1b8;
  param_1[0x16] = uStack_1c0;
  param_1[9] = uStack_228;
  param_1[8] = uStack_230;
  param_1[0xb] = uStack_218;
  param_1[10] = uStack_220;
  param_1[0xd] = uStack_208;
  param_1[0xc] = uStack_210;
  param_1[0xf] = uStack_1f8;
  param_1[0xe] = uStack_200;
  param_1[1] = uStack_268;
  *param_1 = uStack_270;
  param_1[3] = uStack_258;
  param_1[2] = uStack_260;
  param_1[5] = uStack_248;
  param_1[4] = uStack_250;
  param_1[7] = uStack_238;
  param_1[6] = uStack_240;
  return;
}



/* Entry: 102c0edec; end: 102c0f303;  */

void FUN_102c0edec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 ***pppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined *puVar10;
  undefined8 ****ppppuVar11;
  undefined *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  undefined8 ***pppuVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puStack_310;
  undefined6 uStack_308;
  undefined2 uStack_302;
  undefined6 uStack_300;
  undefined2 uStack_2fa;
  undefined8 uStack_2f8;
  undefined6 uStack_2f0;
  undefined2 uStack_2ea;
  undefined6 uStack_2e8;
  undefined2 uStack_2e2;
  undefined6 uStack_2e0;
  undefined2 uStack_2da;
  undefined6 uStack_2d8;
  undefined2 uStack_2d2;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined *puStack_2b8;
  long lStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 **ppuStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 **ppuStack_258;
  undefined8 uStack_250;
  undefined2 uStack_248;
  undefined6 uStack_246;
  undefined2 uStack_240;
  undefined6 uStack_23e;
  undefined2 uStack_238;
  undefined6 uStack_236;
  undefined2 uStack_230;
  undefined6 uStack_22e;
  undefined2 uStack_228;
  undefined6 uStack_226;
  undefined2 uStack_220;
  undefined6 uStack_21e;
  undefined2 uStack_218;
  undefined6 uStack_216;
  undefined8 **ppuStack_210;
  undefined8 uStack_208;
  undefined2 uStack_200;
  undefined8 uStack_1fe;
  undefined8 uStack_1f6;
  undefined8 uStack_1ee;
  undefined8 uStack_1e6;
  undefined8 uStack_1de;
  undefined6 uStack_1d6;
  undefined2 uStack_1d0;
  undefined6 uStack_1ce;
  undefined1 auStack_1c8 [88];
  undefined6 uStack_170;
  undefined2 uStack_16a;
  undefined6 uStack_168;
  undefined2 uStack_162;
  undefined6 uStack_160;
  undefined2 uStack_15a;
  undefined6 uStack_158;
  undefined2 uStack_152;
  undefined6 uStack_150;
  undefined2 uStack_14a;
  undefined6 uStack_148;
  undefined2 uStack_142;
  undefined6 uStack_140;
  undefined2 uStack_13a;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 ***pppuStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b0 [64];
  
  lVar2 = 0;
  puStack_2a8 = param_1;
  func_0x000107c5f58c();
  lStack_2b0 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_2b0 + 0x40));
  lVar15 = (long)&puStack_310 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f6f0();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  pppuVar14 = (undefined8 ***)(lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c5afa0(0x4030000000000000);
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
    puStack_2c8 = (undefined *)0x0;
    uStack_2c0 = 0;
    puStack_2b8 = (undefined *)0x0;
    uStack_2e8 = 0;
    uStack_2e2 = 0;
    uStack_2f0 = 0;
    uStack_2ea = 0;
    uStack_2d8 = 0;
    uStack_2d2 = 0;
    uStack_2e0 = 0;
    uStack_2da = 0;
    uStack_308 = 0;
    uStack_302 = 0;
    puStack_310 = (undefined8 *)0x0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2fa = 0;
    ppppuVar7 = (undefined8 ****)0x0;
  }
  else {
    func_0x000107c61174();
    puVar5 = puVar4;
    func_0x000107c5f6e8();
    (**(code **)(lVar13 + 0x68))
              (pppuVar14,
               *(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_110349738,lVar3)
    ;
    pppuVar6 = pppuVar14;
    func_0x000107c5f6fc(0,0,0,0,pppuVar14,puVar5);
    func_0x000107c61574(puVar5);
    (**(code **)(lVar13 + 8))(pppuVar14,lVar3);
    func_0x000107c5f7ac();
    func_0x000107c5f2d4(auStack_b0,0x4030000000000000,0,0x4030000000000000,0,pppuVar14,lVar3);
    uStack_162 = (undefined2)auStack_b0._8_8_;
    uStack_160 = SUB86(auStack_b0._8_8_,2);
    uStack_16a = (undefined2)auStack_b0._0_8_;
    uStack_168 = SUB86(auStack_b0._0_8_,2);
    uStack_152 = (undefined2)auStack_b0._24_8_;
    uStack_150 = SUB86(auStack_b0._24_8_,2);
    uStack_15a = (undefined2)auStack_b0._16_8_;
    uStack_158 = SUB86(auStack_b0._16_8_,2);
    uStack_142 = (undefined2)auStack_b0._40_8_;
    uStack_140 = SUB86(auStack_b0._40_8_,2);
    uStack_14a = (undefined2)auStack_b0._32_8_;
    uStack_148 = SUB86(auStack_b0._32_8_,2);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168();
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c5f6dc();
    func_0x000107c61170(puVar4);
    uStack_250 = 0;
    uStack_248 = 1;
    uStack_23e = uStack_168;
    uStack_238 = uStack_162;
    uStack_246 = uStack_170;
    uStack_240 = uStack_16a;
    uStack_22e = uStack_158;
    uStack_228 = uStack_152;
    uStack_236 = uStack_160;
    uStack_230 = uStack_15a;
    uStack_21e = uStack_148;
    uStack_226 = uStack_150;
    uStack_220 = uStack_14a;
    uStack_218 = uStack_142;
    uStack_216 = uStack_140;
    puVar4 = &UNK_10db327f8;
    ppuStack_258 = pppuVar6;
    func_0x000107c614e0();
    uStack_278 = CONCAT62(uStack_22e,uStack_230);
    uStack_280 = CONCAT62(uStack_236,uStack_238);
    uStack_268 = CONCAT62(uStack_21e,uStack_220);
    uStack_270 = CONCAT62(uStack_226,uStack_228);
    uStack_260 = CONCAT62(uStack_216,uStack_218);
    uStack_288 = CONCAT62(uStack_23e,uStack_240);
    uStack_290 = CONCAT62(uStack_246,uStack_248);
    uStack_298 = uStack_250;
    ppuStack_2a0 = ppuStack_258;
    uStack_208 = 0;
    uStack_200 = 1;
    uStack_1f6 = CONCAT26(uStack_162,uStack_168);
    uStack_1fe = CONCAT26(uStack_16a,uStack_170);
    uStack_1e6 = CONCAT26(uStack_152,uStack_158);
    uStack_1ee = CONCAT26(uStack_15a,uStack_160);
    uStack_1de = CONCAT26(uStack_14a,uStack_150);
    uStack_1ce = uStack_140;
    uStack_1d6 = uStack_148;
    uStack_1d0 = uStack_142;
    ppuStack_210 = pppuVar6;
    FUN_102c0f600(&ppuStack_258,&pppuStack_110,0x112eb9208,&UNK_10dad0728);
    func_0x000102c0f648(&ppuStack_210,0x112eb9208,&UNK_10dad0728);
    uStack_148 = (undefined6)uStack_278;
    uStack_142 = (undefined2)((ulong)uStack_278 >> 0x30);
    uStack_150 = (undefined6)uStack_280;
    uStack_14a = (undefined2)((ulong)uStack_280 >> 0x30);
    uStack_138 = uStack_268;
    uStack_140 = (undefined6)uStack_270;
    uStack_13a = (undefined2)((ulong)uStack_270 >> 0x30);
    uStack_168 = (undefined6)uStack_298;
    uStack_162 = (undefined2)((ulong)uStack_298 >> 0x30);
    uStack_170 = SUB86(ppuStack_2a0,0);
    uStack_16a = (undefined2)((ulong)ppuStack_2a0 >> 0x30);
    uStack_158 = (undefined6)uStack_288;
    uStack_152 = (undefined2)((ulong)uStack_288 >> 0x30);
    uStack_160 = (undefined6)uStack_290;
    uStack_15a = (undefined2)((ulong)uStack_290 >> 0x30);
    uStack_130 = uStack_260;
    uStack_e8 = uStack_278;
    uStack_f0 = (undefined8 *)uStack_280;
    uStack_d8 = uStack_268;
    uStack_e0 = uStack_270;
    uStack_108 = uStack_298;
    pppuStack_110 = (undefined8 ***)ppuStack_2a0;
    uStack_f8 = uStack_288;
    uStack_100 = uStack_290;
    uStack_d0 = uStack_260;
    param_3 = 0x112eff348;
    param_5 = &UNK_10db32830;
    puStack_128 = puVar4;
    puStack_120 = puVar5;
    puStack_c8 = puVar4;
    puStack_c0 = puVar5;
    FUN_102c0f600(&uStack_170,auStack_1c8,0x112eff348,&UNK_10db32830);
    ppppuVar7 = &pppuStack_110;
    func_0x000102c0f648(ppppuVar7,0x112eff348,&UNK_10db32830);
    uStack_2d8 = uStack_168;
    uStack_2d2 = uStack_162;
    uStack_2e0 = uStack_170;
    uStack_2da = uStack_16a;
    uStack_2e8 = uStack_158;
    uStack_2e2 = uStack_152;
    uStack_2f0 = uStack_160;
    uStack_2ea = uStack_15a;
    uStack_308 = uStack_148;
    uStack_302 = uStack_142;
    puStack_310 = (undefined8 *)CONCAT26(uStack_14a,uStack_150);
    uStack_300 = uStack_140;
    uStack_2fa = uStack_13a;
    uStack_2f8 = uStack_138;
    puStack_2c8 = puStack_128;
    uStack_2c0 = uStack_130;
    puStack_2b8 = puStack_120;
  }
  puVar16 = puStack_310;
  func_0x000108dfd26c();
  func_0x000107c61180();
  if (ppppuVar7 != (undefined8 ****)0x0) {
    ppppuVar8 = ppppuVar7;
    func_0x000107c5faec();
    func_0x000107c61170(ppppuVar7);
    pppuStack_110 = ppppuVar8;
    uStack_108 = param_3;
    func_0x000100e8b654();
    ppppuVar9 = &pppuStack_110;
    puVar4 = PTR___sSSN_11034da80;
    func_0x000107c5f5e0(ppppuVar9,PTR___sSSN_11034da80,ppppuVar7);
    func_0x000107c5f598();
    lVar3 = lStack_2b0;
    (**(code **)(lStack_2b0 + 0x68))
              (lVar15,*(undefined4 *)PTR___s7SwiftUI4FontV6DesignO7defaultyA2EmFWC_1103492d8,lVar2);
    lVar13 = lVar15;
    func_0x000107c5f5a4(0x402c000000000000,puVar16);
    (**(code **)(lVar3 + 8))(lVar15,lVar2);
    lVar2 = lVar13;
    ppppuVar8 = ppppuVar9;
    puVar10 = puVar4;
    ppppuVar11 = ppppuVar7;
    func_0x000107c5f5d4();
    func_0x000107c61574(lVar13);
    func_0x000100f795bc(ppppuVar9,puVar4,ppppuVar7);
    func_0x000107c6142c(param_5);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168();
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c5f6dc();
    puVar5 = puVar4;
    lVar3 = lVar2;
    ppppuVar7 = ppppuVar8;
    puVar12 = puVar10;
    func_0x000107c5f5d0();
    func_0x000107c61574(puVar4);
    func_0x000100f795bc(lVar2,ppppuVar8,puVar10);
    func_0x000107c6142c(ppppuVar11);
    uStack_168 = uStack_2d8;
    uStack_162 = uStack_2d2;
    uStack_170 = uStack_2e0;
    uStack_16a = uStack_2da;
    uStack_158 = uStack_2e8;
    uStack_152 = uStack_2e2;
    uStack_160 = uStack_2f0;
    uStack_15a = uStack_2ea;
    uStack_148 = uStack_308;
    uStack_142 = uStack_302;
    uStack_150 = SUB86(puStack_310,0);
    uStack_14a = (undefined2)((ulong)puStack_310 >> 0x30);
    uStack_138 = uStack_2f8;
    uStack_140 = uStack_300;
    uStack_13a = uStack_2fa;
    uStack_130 = uStack_2c0;
    puStack_128 = puStack_2c8;
    puStack_120 = puStack_2b8;
    puStack_c0 = puStack_2b8;
    uStack_e8 = CONCAT26(uStack_302,uStack_308);
    uStack_f0 = puStack_310;
    uStack_e0 = CONCAT26(uStack_2fa,uStack_300);
    uStack_d8 = uStack_2f8;
    puStack_c8 = puStack_2c8;
    uStack_d0 = uStack_2c0;
    uStack_108 = CONCAT26(uStack_2d2,uStack_2d8);
    pppuStack_110 = (undefined8 ***)CONCAT26(uStack_2da,uStack_2e0);
    uStack_f8 = CONCAT26(uStack_2e2,uStack_2e8);
    uStack_100 = CONCAT26(uStack_2ea,uStack_2f0);
    puStack_2a8[1] = uStack_108;
    *puStack_2a8 = pppuStack_110;
    puStack_2a8[3] = uStack_f8;
    puStack_2a8[2] = uStack_100;
    puStack_2a8[7] = uStack_2f8;
    puStack_2a8[6] = uStack_e0;
    puStack_2a8[9] = puStack_2c8;
    puStack_2a8[8] = uStack_2c0;
    puStack_2a8[5] = uStack_e8;
    puStack_2a8[4] = puStack_310;
    puStack_2a8[10] = puStack_2b8;
    puStack_2a8[0xb] = puVar5;
    puStack_2a8[0xc] = lVar3;
    *(char *)(puStack_2a8 + 0xd) = (char)ppppuVar7;
    puStack_2a8[0xe] = puVar12;
    FUN_102c0f600(&pppuStack_110,auStack_1c8,0x112eff340,&UNK_10db327f0);
    func_0x000100f8a880(puVar5,lVar3,ppppuVar7);
    func_0x000107c61434(puVar12);
    func_0x000100f795bc(puVar5,lVar3,ppppuVar7);
    func_0x000107c6142c(puVar12);
    func_0x000102c0f648(&uStack_170,0x112eff340,&UNK_10db327f0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c0f304);
  (*pcVar1)();
}



/* Entry: 102c0f304; end: 102c0f30f;  */

void FUN_102c0f304(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 102c0f310; end: 102c0f3fb;  */

void FUN_102c0f310(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar3 = *unaff_x20;
  uVar5 = unaff_x20[1];
  uVar6 = unaff_x20[2];
  func_0x000107c5f410();
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar2 = 0x112eff2c0;
  func_0x0001000285a8(0x112eff2c0,&UNK_10db32718);
  FUN_102c0e518((long)param_1 + (long)*(int *)(lVar2 + 0x2c),uVar6,uVar3,uVar5);
  func_0x000107c5f7ac();
  func_0x000107c5f2d4(&uStack_70,0,1,uVar6,0,uVar3,uVar5);
  lVar2 = 0x112eff2c8;
  func_0x0001000285a8(0x112eff2c8,&UNK_10db32720);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x24));
  puVar1[1] = uStack_68;
  *puVar1 = uStack_70;
  puVar1[3] = uStack_58;
  puVar1[2] = uStack_60;
  puVar1[5] = uStack_48;
  puVar1[4] = uStack_50;
  func_0x000107c5f56c();
  lVar4 = 0x112eff2d0;
  func_0x0001000285a8(0x112eff2d0,&UNK_10db32728);
  *(char *)((long)param_1 + (long)*(int *)(lVar4 + 0x24)) = (char)lVar2;
  return;
}



/* Entry: 102c0f3fc; end: 102c0f407;  */

undefined8 FUN_102c0f3fc(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(*(long *)(unaff_x20 + 0x18) + 0x10);
  if (pcVar1 == (code *)0x0) {
    return *(undefined8 *)(unaff_x20 + 0x10);
  }
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 0x18);
  func_0x000107c6157c(*(undefined8 *)(unaff_x20 + 0x20),uVar2);
  (*pcVar1)();
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return uVar2;
  }
  return 0;
}



/* Entry: 102c0f408; end: 102c0f50f;  */

void FUN_102c0f408(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000112eff2e0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112eff2d8;
  func_0x00010002969c(0x112eff2d8,&UNK_10db32730);
  uVar2 = uVar1;
  func_0x000102c0f480();
  puStack_28 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1103489f8;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112eff2e0 = puVar3;
  return;
}



/* Entry: 102c0f510; end: 102c0f5e7;  */

/* WARNING: Possible PIC construction at 0x000102c0f560: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c0f564) */

void FUN_102c0f510(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &UNK_10db32760;
  func_0x000107c614e0(&UNK_10db32760);
  puVar2 = &UNK_10db32788;
  func_0x000107c614e0(&UNK_10db32788);
  func_0x000107c5f20c(param_1,uVar3,puVar1,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102c0f5e8; end: 102c0f5ff;  */

void FUN_102c0f5e8(byte *param_1)

{
  long unaff_x20;
  
  *param_1 = *param_1 & (*(byte *)(unaff_x20 + 0x10) ^ 0xff) & 1;
  return;
}



/* Entry: 102c0f600; end: 102c0f7d3;  */

undefined8 FUN_102c0f600(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 102c0f7d4; end: 102c0f7db;  */

undefined8 * FUN_102c0f7d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 102c0f7dc; end: 102c0f84b;  */

void FUN_102c0f7dc(void)

{
  func_0x0001000285a8(0x112eff038,&UNK_10db322a0);
  func_0x0001000823a8(0x102c0f81c,0);
  return;
}



/* Entry: 102c0f84c; end: 102c0f85b;  */

undefined1  [16] FUN_102c0f84c(void)

{
  return ZEXT816(0x1105b1d40);
}



/* Entry: 102c0f85c; end: 102c0f8df; -[MemoriesOperaInteractionButtonsLayerViewControllerFactory supportedLayers] */

void FUN_102c0f85c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = 0x112eff120;
  func_0x0001000285a8(0x112eff120,&UNK_10db32400);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  uVar2 = 0;
  func_0x0001038eadec();
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  uVar2 = 0x112eff150;
  func_0x0001000285a8(0x112eff150,&UNK_10db32440);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 102c0f8e0; end: 102c0f97b; -[MemoriesOperaInteractionButtonsLayerViewControllerFactory layerViewControllerWithLayer:configuration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

void FUN_102c0f8e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0;
  func_0x0001038eadec(0);
  lVar2 = param_3;
  func_0x000107c61480(param_3,uVar1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    FUN_102c109f0(0);
    func_0x000107c610f8();
    func_0x000107c615f0(param_3);
    func_0x000107c45ff8(uVar1);
    func_0x000107c615e8(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102c0f97c; end: 102c0f9b7; -[MemoriesOperaInteractionButtonsLayerViewControllerFactory init] */

void FUN_102c0f97c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c0f9b8; end: 102c0fa0b;  */

void FUN_102c0f9b8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c0fa0c; end: 102c0fafb; -[_TtC40MemoriesOperaInteractionButtonsLayerImpl50MemoriesOperaInteractionButtonsLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102c0fa0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar3 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112eff398) = 0;
  *(undefined8 *)(param_1 + _DAT_112eff3a0) = 0;
  *(undefined8 *)(param_1 + _DAT_112eff3a8) = 0;
  puVar1 = PTR_s_initWithConfiguration_layerViewC_1125de030;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c61154(&lStack_50,puVar1,param_3,param_4,param_5,param_6);
  if (plVar4 != (long *)0x0) {
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c615e8(param_6);
    return (undefined1 *)plVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102c0fafc);
  (*pcVar2)();
}



/* Entry: 102c0fafc; end: 102c0fb77; -[_TtC40MemoriesOperaInteractionButtonsLayerImpl50MemoriesOperaInteractionButtonsLayerViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c0fafc(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112eff398) = 0;
  *(undefined8 *)(param_1 + _DAT_112eff3a0) = 0;
  *(undefined8 *)(param_1 + _DAT_112eff3a8) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "MemoriesOperaInteractionButtonsLayerImpl/MemoriesOperaInteractionButtonsLayerViewController.swift"
                      ,0x61,2,0x27,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c0fb78);
  (*pcVar1)();
}



/* Entry: 102c0fb78; end: 102c0fc0b;  */

/* WARNING: Possible PIC construction at 0x000102c0fbac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c0fbf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c0fbb0) */
/* WARNING: Removing unreachable block (ram,0x000102c0fc08) */
/* WARNING: Removing unreachable block (ram,0x000102c0fbc4) */
/* WARNING: Removing unreachable block (ram,0x000102c0fbf8) */

void FUN_102c0fb78(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000102c10cc8(0);
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a568();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102c0fc0c; end: 102c0fc33; -[_TtC40MemoriesOperaInteractionButtonsLayerImpl50MemoriesOperaInteractionButtonsLayerViewController loadView] */

void FUN_102c0fc0c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102c0fb78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c0fc34; end: 102c1018f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c0fc34(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  long lVar12;
  ulong *puVar13;
  long lVar14;
  long unaff_x20;
  undefined8 uVar15;
  long lVar16;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  lVar16 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (lVar16 != 0) {
    func_0x000107c61170();
    lVar16 = _DAT_112eff3a0;
    if ((*(long *)(unaff_x20 + _DAT_112eff3a0) == 0) || (*(long *)(unaff_x20 + _DAT_112eff398) == 0)
       ) {
      uVar4 = 0;
      FUN_102c0e2c0();
      uVar5 = uVar4;
      func_0x000107c613fc();
      *(undefined8 *)(uVar5 + 0x10) = 0;
      *(undefined8 *)(uVar5 + 0x18) = 0;
      uStack_78 = uStack_78 & 0xffffffffffffff00;
      func_0x000107c5f1fc(uVar5 + _DAT_112eff200,&uStack_78,PTR___sSbN_11034dd40);
      puVar6 = &UNK_1105b1d60;
      func_0x000107c613fc(&UNK_1105b1d60,0x18,7);
      func_0x000107c61614(puVar6 + 0x10);
      uVar15 = *(undefined8 *)(uVar5 + 0x10);
      uVar1 = *(undefined8 *)(uVar5 + 0x18);
      *(code **)(uVar5 + 0x10) = FUN_102c10e30;
      *(undefined **)(uVar5 + 0x18) = puVar6;
      func_0x000107c6157c(puVar6);
      func_0x00010058d43c(uVar15,uVar1);
      func_0x000107c61574();
      uVar3 = SUB81(puVar6,0);
      FUN_102c101ec();
      puVar6 = &UNK_10db32908;
      func_0x000107c614e0(&UNK_10db32908);
      puVar7 = &UNK_10db32930;
      func_0x000107c614e0(&UNK_10db32930);
      uStack_78 = CONCAT71(uStack_78._1_7_,uVar3) & 0xffffffffffffff01;
      func_0x000107c6157c(uVar5);
      func_0x000107c5f210(&uStack_78,uVar5,puVar6,puVar7);
      uVar15 = *(undefined8 *)(unaff_x20 + lVar16);
      *(ulong *)(unaff_x20 + lVar16) = uVar5;
      func_0x000107c61580(uVar5,2);
      func_0x000107c61574(uVar15);
      FUN_102c10e38();
      uVar8 = uVar5;
      func_0x000107c5f31c(uVar5,uVar4,uVar15);
      uStack_68 = 0x404b800000000000;
      uStack_78 = uVar8;
      uStack_70 = uVar4;
      func_0x0001000285a8(0x112eff488,&UNK_10db32958);
      func_0x000107c610f8();
      func_0x000107c6157c(uVar4);
      puVar9 = &uStack_78;
      func_0x000107c5f458();
      func_0x000107c61174();
      puVar10 = puVar9;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (puVar10 == (ulong *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102c10170);
        (*pcVar2)();
      }
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c3fa94();
      func_0x000107c61180();
      func_0x000107c52b50(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar6);
      func_0x000107c3d614();
      lVar16 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar16 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102c10174);
        (*pcVar2)();
      }
      puVar10 = puVar9;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (puVar10 == (ulong *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102c10178);
        (*pcVar2)();
      }
      func_0x000107c3d89c(lVar16);
      func_0x000107c61170(lVar16);
      func_0x000107c61170(puVar10);
      func_0x000107c41c30(puVar9);
      puVar10 = puVar9;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (puVar10 == (ulong *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102c1017c);
        (*pcVar2)();
      }
      func_0x000107c5a050();
      func_0x000107c61170(puVar10);
      puVar10 = puVar9;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (puVar10 == (ulong *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102c10180);
        (*pcVar2)();
      }
      puVar11 = puVar10;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      lVar16 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar16 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102c10184);
        (*pcVar2)();
      }
      lVar12 = lVar16;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      func_0x000107c61170(lVar16);
      puVar10 = puVar11;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar11);
      func_0x000107c61170(lVar12);
      lVar16 = *(long *)(unaff_x20 + _DAT_112eff3a8);
      *(ulong **)(unaff_x20 + _DAT_112eff3a8) = puVar10;
      func_0x000107c61174();
      func_0x000107c61170();
      func_0x0001008478a8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar16 + 0x18) = 7;
      *(undefined8 *)(lVar16 + 0x10) = 3;
      *(ulong **)(lVar16 + 0x20) = puVar10;
      func_0x000107c61174(puVar10);
      puVar11 = puVar9;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (puVar11 == (ulong *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102c10188);
        (*pcVar2)();
      }
      puVar13 = puVar11;
      func_0x000107c50890();
      func_0x000107c61180();
      func_0x000107c61170(puVar11);
      lVar12 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar12 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102c1018c);
        (*pcVar2)();
      }
      lVar14 = lVar12;
      func_0x000107c50890();
      func_0x000107c61180();
      func_0x000107c61170(lVar12);
      puVar11 = puVar13;
      func_0x000107c40284(0xc046800000000000);
      func_0x000107c61180();
      func_0x000107c61170(puVar13);
      func_0x000107c61170(lVar14);
      *(ulong **)(lVar16 + 0x28) = puVar11;
      puVar11 = puVar9;
      func_0x000107c5de64();
      func_0x000107c61180();
      func_0x000107c61170(puVar9);
      if (puVar11 == (ulong *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102c10190);
        (*pcVar2)();
      }
      puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      puVar13 = puVar11;
      func_0x000107c44d9c();
      func_0x000107c61180();
      func_0x000107c61170(puVar11);
      puVar11 = puVar13;
      func_0x000107c40290(0x404b800000000000);
      func_0x000107c61180();
      func_0x000107c61170(puVar13);
      *(ulong **)(lVar16 + 0x30) = puVar11;
      uVar15 = 0;
      FUN_102c10e7c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar12 = lVar16;
      func_0x000107c5fc48(lVar16,uVar15);
      func_0x000107c61574(lVar16);
      func_0x000107c3d048(puVar6);
      func_0x000107c61170(lVar12);
      uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112eff398);
      *(ulong **)(unaff_x20 + _DAT_112eff398) = puVar9;
      func_0x000107c61174(puVar9);
      func_0x000107c61170(uVar15);
      FUN_102c10358();
      func_0x000107c61574(uVar5);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar10);
      func_0x000107c61574(uVar4);
    }
  }
  return;
}



/* Entry: 102c10190; end: 102c101eb; -[_TtC40MemoriesOperaInteractionButtonsLayerImpl50MemoriesOperaInteractionButtonsLayerViewController viewDidLoad] */

void FUN_102c10190(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  FUN_102c0fc34();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102c101ec; end: 102c10357;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102c101ec(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *unaff_x20;
  long lVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c4e230();
  func_0x000107c61180();
  if (unaff_x20 == (long *)0x0) {
    uStack_48 = 0;
    uStack_50 = 0;
    lStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    lVar6 = *(long *)((long)unaff_x20 + _DAT_11307abc8);
    func_0x000107c61434(lVar6);
    func_0x000107c61170();
    func_0x0001038eac98();
    if (*(long *)(lVar6 + 0x10) == 0) {
      uStack_48 = 0;
      uStack_50 = 0;
      lStack_38 = 0;
      uStack_40 = 0;
    }
    else {
      lVar2 = *unaff_x20;
      uVar1 = unaff_x20[1];
      func_0x000107c61434(lVar6);
      func_0x000107c61434(uVar1);
      uVar5 = uVar1;
      func_0x000100029284(lVar2);
      if ((uVar5 & 1) != 0) {
        func_0x0001000bb420(*(long *)(lVar6 + 0x38) + lVar2 * 0x20,&uStack_50);
        func_0x000107c6142c(uVar1);
        func_0x000107c61430(lVar6,2);
        if (lStack_38 != 0) {
          uVar3 = 0;
          FUN_102c10e7c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          puVar4 = &uStack_58;
          func_0x000107c6147c(puVar4,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
          if (((ulong)puVar4 & 1) == 0) {
            return 0;
          }
          uVar3 = uStack_58;
          func_0x000107c3ebcc(uStack_58);
          func_0x000107c61170(uStack_58);
          return uVar3;
        }
        goto LAB_102c10328;
      }
      func_0x000107c6142c(lVar6);
      uStack_48 = 0;
      uStack_50 = 0;
      lStack_38 = 0;
      uStack_40 = 0;
      func_0x000107c6142c(uVar1);
    }
    func_0x000107c6142c(lVar6);
  }
LAB_102c10328:
  func_0x000102c10ebc(&uStack_50,0x112d387f8,&UNK_10d902650);
  return 0;
}



/* Entry: 102c10358; end: 102c10637;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c10358(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long unaff_x20;
  long lVar7;
  long *plVar8;
  long lVar9;
  long alStack_78 [5];
  
  lVar1 = unaff_x20;
  func_0x000107c4e230();
  func_0x000107c61180();
  if (lVar1 == 0) {
    param_1 = 0;
    alStack_78[2] = 0;
    alStack_78[1] = 0;
    alStack_78[4] = 0;
    alStack_78[3] = 0;
LAB_102c10488:
    plVar4 = (long *)0x112d387f8;
    func_0x000102c10ebc(alStack_78 + 1,0x112d387f8,&UNK_10d902650);
    lVar1 = 0;
  }
  else {
    lVar7 = *(long *)(lVar1 + _DAT_11307abc8);
    func_0x000107c61434(lVar7);
    func_0x000107c61170(lVar1);
    ppuVar2 = &PTR____CFConstantStringClassReference_110f0d5f8;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0d5f8);
    if (*(long *)(lVar7 + 0x10) == 0) {
LAB_102c10470:
      param_1 = 0;
      alStack_78[2] = 0;
      alStack_78[1] = 0;
      alStack_78[4] = 0;
      alStack_78[3] = 0;
      func_0x000107c6142c(param_3);
      func_0x000107c6142c(lVar7);
      goto LAB_102c10488;
    }
    func_0x000107c61434(lVar7);
    uVar5 = param_3;
    func_0x000100029284(ppuVar2);
    if ((uVar5 & 1) == 0) {
      func_0x000107c6142c(lVar7);
      goto LAB_102c10470;
    }
    func_0x0001000bb420(*(long *)(lVar7 + 0x38) + (long)ppuVar2 * 0x20,alStack_78 + 1);
    func_0x000107c6142c(param_3);
    func_0x000107c61430(lVar7,2);
    if (alStack_78[4] == 0) goto LAB_102c10488;
    uVar3 = 0;
    FUN_102c10e7c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    plVar8 = alStack_78;
    plVar4 = alStack_78 + 1;
    func_0x000107c6147c(plVar8,plVar4,PTR___sypN_11034f1a8 + 8,uVar3,6);
    lVar1 = alStack_78[0];
    if ((int)plVar8 == 0) {
      lVar1 = 0;
    }
  }
  lVar7 = unaff_x20;
  func_0x000107c4e230();
  func_0x000107c61180();
  if (lVar7 == 0) {
    alStack_78[2] = 0;
    alStack_78[1] = 0;
    alStack_78[4] = 0;
    alStack_78[3] = 0;
LAB_102c105c4:
    func_0x000102c10ebc(alStack_78 + 1,0x112d387f8,&UNK_10d902650);
  }
  else {
    plVar8 = *(long **)(lVar7 + _DAT_11307abc8);
    func_0x000107c61434(plVar8);
    func_0x000107c61170(lVar7);
    ppuVar2 = &PTR____CFConstantStringClassReference_110f0d618;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0d618);
    if (plVar8[2] == 0) {
LAB_102c10540:
      param_1 = 0;
      alStack_78[2] = 0;
      alStack_78[1] = 0;
      alStack_78[4] = 0;
      alStack_78[3] = 0;
    }
    else {
      func_0x000107c61434(plVar8);
      plVar6 = plVar4;
      func_0x000100029284(ppuVar2);
      if (((ulong)plVar6 & 1) == 0) {
        func_0x000107c6142c(plVar8);
        goto LAB_102c10540;
      }
      func_0x0001000bb420(plVar8[7] + (long)ppuVar2 * 0x20,alStack_78 + 1);
      func_0x000107c6142c(plVar4);
      plVar4 = plVar8;
    }
    func_0x000107c6142c(plVar4);
    func_0x000107c6142c(plVar8);
    if (alStack_78[4] == 0) goto LAB_102c105c4;
    uVar3 = 0;
    FUN_102c10e7c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    plVar4 = alStack_78;
    func_0x000107c6147c(plVar4,alStack_78 + 1,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      lVar7 = alStack_78[0];
      func_0x000107c3ebcc();
      lVar9 = alStack_78[0];
      uVar3 = 0;
      if (((int)lVar7 != 0) && (lVar1 != 0)) {
        func_0x000107c4223c(lVar1);
        uVar3 = param_1;
      }
      goto LAB_102c105e4;
    }
  }
  lVar9 = 0;
  uVar3 = 0;
LAB_102c105e4:
  lVar7 = *(long *)(unaff_x20 + _DAT_112eff3a8);
  if (lVar7 != 0) {
    func_0x000107c61174();
    func_0x000107c5378c(uVar3);
    func_0x000107c61170(lVar7);
  }
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar1);
  return;
}


