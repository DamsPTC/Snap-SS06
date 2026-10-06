/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10331d3d0; end: 10331d51b;  */

void FUN_10331d3d0(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x00010331d7c0(unaff_x20 + 0x90,0x112f58f30,&UNK_10dbb11f0);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  return;
}



/* Entry: 10331d51c; end: 10331d523;  */

void FUN_10331d51c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  
  lVar1 = 0x112f59918;
  func_0x0001000285a8(0x112f59918,&UNK_10dbb28c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  func_0x00010437500c();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar4 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_10331d908(param_2,puVar3,0x112f59918,&UNK_10dbb28c0);
  pcVar5 = *(code **)(lVar6 + 0x30);
  puVar2 = puVar3;
  (*pcVar5)(puVar3,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x000107c6159c(lVar4,lVar1,6);
    puVar2 = puVar3;
    (*pcVar5)(puVar3,1,lVar1);
    if ((int)puVar2 != 1) {
      func_0x00010331d7c0(puVar3,0x112f59918,&UNK_10dbb28c0);
    }
  }
  else {
    func_0x00010331d77c(puVar3,lVar4);
  }
  func_0x000104379958(0);
  func_0x000104376118(lVar4);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4168c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4b218();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 10331d524; end: 10331d5f3;  */

void FUN_10331d524(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c4168c();
  func_0x000107c61180();
  if (uVar2 != 0) {
    uVar1 = uVar2;
    func_0x000107c61150();
    if ((uVar1 & 1) != 0) {
      func_0x000107c4b220(uVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar2);
    return;
  }
  return;
}



/* Entry: 10331d5f4; end: 10331d77b;  */

void FUN_10331d5f4(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  
  lVar1 = 0x112f59918;
  func_0x0001000285a8(0x112f59918,&UNK_10dbb28c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  func_0x00010437500c();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar4 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_10331d908(param_1,puVar3,0x112f59918,&UNK_10dbb28c0);
  pcVar5 = *(code **)(lVar6 + 0x30);
  puVar2 = puVar3;
  (*pcVar5)(puVar3,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x000107c6159c(lVar4,lVar1,6);
    puVar2 = puVar3;
    (*pcVar5)(puVar3,1,lVar1);
    if ((int)puVar2 != 1) {
      func_0x00010331d7c0(puVar3,0x112f59918,&UNK_10dbb28c0);
    }
  }
  else {
    func_0x00010331d77c(puVar3,lVar4);
  }
  func_0x000104379958(0);
  func_0x000104376118(lVar4);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4168c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4b218();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 10331d77c; end: 10331d7ff;  */

undefined8 FUN_10331d77c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x00010437500c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10331d800; end: 10331d85f;  */

void FUN_10331d800(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar4 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar2);
  (**(code **)(lVar4 + 8))(param_1,uVar1,uVar3,uVar2,lVar4);
  return;
}



/* Entry: 10331d860; end: 10331d907;  */

void FUN_10331d860(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  lVar2 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar1);
  (**(code **)(lVar2 + 0x10))(param_1,uVar3,uVar1,lVar2);
  return;
}



/* Entry: 10331d908; end: 10331d94f;  */

undefined8 FUN_10331d908(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10331d950; end: 10331d957;  */

void FUN_10331d950(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (lVar1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c3d060();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 10331d958; end: 10331d9d7;  */

undefined8 FUN_10331d958(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_103331784();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10331d9d8; end: 10331da3b;  */

void FUN_10331d9d8(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 10331da3c; end: 10331da7f;  */

void FUN_10331da3c(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 10331da80; end: 10331ddef;  */

undefined * FUN_10331da80(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined8 unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_90 = 0;
  lStack_88 = 0;
  uStack_a0 = 0;
  lStack_98 = 0;
  puVar6 = &UNK_11063e440;
  func_0x000107c613fc(&UNK_11063e440,0x28,7);
  *(undefined8 **)(puVar6 + 0x10) = &uStack_78;
  *(undefined8 **)(puVar6 + 0x18) = &uStack_a0;
  *(undefined8 **)(puVar6 + 0x20) = &uStack_90;
  puVar7 = &UNK_11063e468;
  func_0x000107c613fc(&UNK_11063e468,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_10331ded4;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  puVar12 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_b0 = FUN_10331dee0;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0x42000000;
  pcStack_c0 = FUN_10331df00;
  puStack_b8 = &UNK_11063e480;
  ppuVar8 = &puStack_d0;
  puStack_a8 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar9 = puStack_a8;
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar9);
  puVar9 = &UNK_11063e4b8;
  func_0x000107c613fc(&UNK_11063e4b8,0x30,7);
  *(undefined8 **)(puVar9 + 0x10) = &uStack_80;
  *(undefined8 *)(puVar9 + 0x18) = unaff_x20;
  *(undefined8 **)(puVar9 + 0x20) = &uStack_a0;
  *(undefined8 **)(puVar9 + 0x28) = &uStack_90;
  puVar10 = &UNK_11063e4e0;
  func_0x000107c613fc(&UNK_11063e4e0,0x20,7);
  *(code **)(puVar10 + 0x10) = FUN_10331e194;
  *(undefined **)(puVar10 + 0x18) = puVar9;
  pcStack_b0 = FUN_10331e1d0;
  puStack_d0 = puVar12;
  uStack_c8 = 0x42000000;
  pcStack_c0 = FUN_10331e208;
  puStack_b8 = &UNK_11063e4f8;
  ppuVar11 = &puStack_d0;
  puStack_a8 = puVar10;
  func_0x000107c60bc4(ppuVar11);
  puVar12 = puStack_a8;
  func_0x000107c61174();
  func_0x000107c6157c(puVar10);
  func_0x000107c61574(puVar12);
  func_0x000107c4c7b4(unaff_x20);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar8);
  uVar4 = uStack_78;
  uVar3 = uStack_80;
  lVar2 = lStack_88;
  uVar13 = uStack_90;
  lVar1 = lStack_98;
  uVar14 = uStack_a0;
  if (lStack_88 == 0) {
    func_0x000107c61174(uStack_80);
    func_0x000107c61174(uVar4);
    func_0x000107c61434(lVar1);
    uVar13 = 0;
  }
  else {
    func_0x000107c61174(uStack_80);
    func_0x000107c61434(lVar2);
    func_0x000107c61174(uVar4);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar13,lVar2);
    func_0x000107c6142c(lVar2);
  }
  if (lVar1 == 0) {
    uVar14 = 0;
    uVar15 = 0;
  }
  else {
    func_0x000107c61434(lVar1);
    uVar15 = uVar14;
    func_0x000107c5fadc(uVar14,lVar1);
    func_0x000107c6142c(lVar1);
    func_0x000107c5fadc(uVar14,lVar1);
    func_0x000107c6142c(lVar1);
  }
  puVar12 = PTR_PTR_1126bb7e0;
  func_0x000107c610f8();
  func_0x000107c45800();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar14);
  if (puVar12 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10331ddf0);
    (*pcVar5)();
  }
  func_0x000107c6142c(lStack_98);
  func_0x000107c6142c(lStack_88);
  func_0x000107c61170(uStack_80);
  uVar13 = uStack_78;
  func_0x000107c61574(puVar6);
  func_0x000107c61170(uVar13);
  puVar6 = puVar7;
  func_0x000107c61544(puVar7,"",0x95,0xf,0x16,1);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10331dde8);
    (*pcVar5)();
  }
  puVar6 = puVar10;
  func_0x000107c61544(puVar10,"",0x95,0x13,0x15,1);
  func_0x000107c61574(puVar10);
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10331ddec);
    (*pcVar5)();
  }
  return puVar12;
}



/* Entry: 10331ddf0; end: 10331ded3;  */

/* WARNING: Possible PIC construction at 0x00010331de98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010331de9c) */

void FUN_10331ddf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c5fca0(param_3);
  puVar1 = PTR_PTR_1126bb7f0;
  func_0x000107c610f8();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c495c0();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  uVar2 = *param_6;
  *param_6 = puVar1;
  func_0x000107c61170(uVar2);
  uVar2 = param_7[1];
  *param_7 = param_4;
  param_7[1] = param_5;
  func_0x000107c61434(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 10331ded4; end: 10331dedf;  */

/* WARNING: Possible PIC construction at 0x00010331de98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010331de9c) */

void FUN_10331ded4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  puVar2 = *(undefined8 **)(unaff_x20 + 0x18);
  func_0x000107c5fca0(param_3);
  puVar3 = PTR_PTR_1126bb7f0;
  func_0x000107c610f8();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c495c0();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  uVar4 = *puVar1;
  *puVar1 = puVar3;
  func_0x000107c61170(uVar4);
  uVar4 = puVar2[1];
  *puVar2 = param_4;
  puVar2[1] = param_5;
  func_0x000107c61434(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
  return;
}



/* Entry: 10331dee0; end: 10331deff;  */

void FUN_10331dee0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10331df00; end: 10331df73;  */

/* WARNING: Possible PIC construction at 0x00010331df58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010331df5c) */

void FUN_10331df00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x000107c5faec(param_2);
  uVar3 = uVar2;
  func_0x000107c5faec(param_4);
  (*pcVar1)(param_2,uVar2,param_3,param_4,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 10331df74; end: 10331df8f;  */

void FUN_10331df74(long param_1,long param_2)

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



/* Entry: 10331df90; end: 10331e193;  */

/* WARNING: Possible PIC construction at 0x00010331e0bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010331e150: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010331e0c0) */
/* WARNING: Removing unreachable block (ram,0x00010331e154) */

void FUN_10331df90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  ppuVar1 = &PTR_PTR_110d5ad00;
  if (param_12 != 1) {
    ppuVar1 = &PTR_PTR_110d5ad18;
  }
  ppuVar2 = &PTR_PTR_110d5ad08;
  if (param_12 != 2) {
    ppuVar2 = ppuVar1;
  }
  puVar3 = *ppuVar2;
  uVar4 = param_2;
  func_0x000107c5faec(puVar3);
  func_0x000107c610f8();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c5fadc(param_5,param_6);
  func_0x000107c5fadc(param_5,param_6);
  func_0x000107c5fadc(param_8,param_9);
  func_0x000107c5fadc(param_10,param_11);
  func_0x000107c5fadc(puVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
  return;
}



/* Entry: 10331e194; end: 10331e1cf;  */

void FUN_10331e194(void)

{
  FUN_10331df90();
  return;
}



/* Entry: 10331e1d0; end: 10331e207;  */

void FUN_10331e1d0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10331e208; end: 10331e343;  */

/* WARNING: Possible PIC construction at 0x00010331e2f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010331e304: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010331e314: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010331e308) */
/* WARNING: Removing unreachable block (ram,0x00010331e2f8) */
/* WARNING: Removing unreachable block (ram,0x00010331e318) */

void FUN_10331e208(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x000107c5faec();
  uVar3 = uVar2;
  func_0x000107c5faec();
  uVar4 = uVar3;
  func_0x000107c5faec();
  uVar5 = uVar4;
  func_0x000107c5faec(param_6);
  uVar6 = uVar5;
  func_0x000107c5faec();
  uVar7 = uVar6;
  func_0x000107c5faec();
  func_0x000107c61174(param_5);
  (*pcVar1)(param_2,uVar2,param_3,uVar3,param_4,uVar4,param_5,param_6,uVar5,param_7,uVar6,param_8,
            param_9,uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 10331e344; end: 10331e34b;  */

void FUN_10331e344(long param_1,long param_2)

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



/* Entry: 10331e34c; end: 10331e4cb;  */

/* WARNING: Possible PIC construction at 0x00010331e364: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010331e368) */
/* WARNING: Removing unreachable block (ram,0x00010331e39c) */
/* WARNING: Removing unreachable block (ram,0x00010331e380) */
/* WARNING: Removing unreachable block (ram,0x00010331e3a4) */
/* WARNING: Removing unreachable block (ram,0x00010331e3c0) */
/* WARNING: Removing unreachable block (ram,0x00010331e3f0) */
/* WARNING: Removing unreachable block (ram,0x00010331e3d4) */
/* WARNING: Removing unreachable block (ram,0x00010331e3f8) */
/* WARNING: Removing unreachable block (ram,0x00010331e434) */
/* WARNING: Removing unreachable block (ram,0x00010331e414) */

void FUN_10331e34c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10331e4cc; end: 10331e4df;  */

void FUN_10331e4cc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10331e4e0; end: 10331e84b;  */

undefined * FUN_10331e4e0(void)

{
  bool bVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar11 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)puVar11 - extraout_x12;
  lVar3 = unaff_x20;
  func_0x000107c5d2ac();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = unaff_x20;
    func_0x000107c44fb4();
    func_0x000107c61180();
    bVar1 = lVar4 == 0;
    if (bVar1) {
      func_0x000107c5ede0();
    }
    else {
      func_0x000107c5edb4(puVar11);
      func_0x000107c61170(lVar4);
      lVar4 = 0;
      func_0x000107c5ede0();
    }
    lVar13 = *(long *)(lVar4 + -8);
    (**(code **)(lVar13 + 0x38))(puVar11,bVar1,1,lVar4);
    func_0x0001001021cc(puVar11,lVar9);
    func_0x000107c5ede0(0);
    uVar7 = 1;
    lVar10 = lVar9;
    (**(code **)(lVar13 + 0x30))(lVar9,1,lVar4);
    if ((int)lVar10 == 1) {
      func_0x0001000293e4(lVar9);
      lVar10 = 0;
      uVar8 = uVar7;
    }
    else {
      func_0x000107c5ed70();
      (**(code **)(lVar13 + 8))(lVar9,lVar4);
      uVar8 = uVar7;
      func_0x000107c5fadc(lVar10,uVar7);
      func_0x000107c6142c(uVar7);
    }
    lVar4 = unaff_x20;
    func_0x000107c4b2c0();
    func_0x000107c61180();
    lVar13 = unaff_x20;
    func_0x000107c40ca8();
    func_0x000107c61180();
    if (lVar13 == 0) {
      lVar13 = 0;
    }
    else {
      lVar12 = lVar13;
      func_0x000107c5d9e8();
      func_0x000107c61180();
      func_0x000107c61170(lVar13);
      lVar13 = lVar12;
      if (lVar12 != 0) {
        func_0x000107c5faec(lVar12);
        func_0x000107c61170(lVar12);
        uVar7 = uVar8;
        func_0x000107c5fadc(lVar13,uVar8);
        func_0x000107c6142c(uVar8);
        uVar8 = uVar7;
      }
    }
    lVar12 = unaff_x20;
    func_0x000107c4c010();
    func_0x000107c61180();
    if (lVar12 == 0) {
      lVar12 = 0;
    }
    else {
      lVar14 = lVar12;
      func_0x000107c4f8c4();
      func_0x000107c61180();
      func_0x000107c61170(lVar12);
      lVar12 = lVar14;
      if (lVar14 != 0) {
        func_0x000107c5faec(lVar14);
        func_0x000107c61170(lVar14);
        uVar7 = uVar8;
        func_0x000107c5fadc(lVar12,uVar8);
        func_0x000107c6142c(uVar8);
        uVar8 = uVar7;
      }
    }
    lVar14 = unaff_x20;
    func_0x000107c4c010();
    func_0x000107c61180();
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      lVar5 = lVar14;
      func_0x000107c4f8c8();
      func_0x000107c61180();
      func_0x000107c61170(lVar14);
      lVar14 = lVar5;
      if (lVar5 != 0) {
        func_0x000107c5faec(lVar5);
        func_0x000107c61170(lVar5);
        func_0x000107c5fadc(lVar14,uVar8);
        func_0x000107c6142c(uVar8);
      }
    }
    puVar6 = PTR_PTR_1126ae6a8;
    func_0x000107c61168(PTR_PTR_1126ae6a8);
    func_0x000107c4a3a4();
    *(undefined8 *)(lVar9 + -8) = 0;
    *(char *)(lVar9 + -0x10) = (char)unaff_x20;
    func_0x000107c4e824(puVar6);
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar13);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar14);
    return puVar6;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10331e84c);
  (*pcVar2)();
}



/* Entry: 10331e84c; end: 10331ea47;  */

void FUN_10331e84c(ulong *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  func_0x000107c5b37c();
  func_0x000107c61180();
  if (uVar5 == 0) {
    uVar3 = 0;
    param_3 = 0;
  }
  else {
    uVar3 = uVar5;
    func_0x000107c5faec();
    func_0x000107c61170(uVar5);
  }
  uVar5 = param_3;
  func_0x0001048daacc();
  func_0x000107c6142c(param_3);
  if ((uVar3 & 1) == 0) {
    func_0x000107c5b37c();
    func_0x000107c61180();
    if (param_2 == 0) {
      uVar3 = 0;
      uVar5 = 0;
    }
    else {
      uVar3 = param_2;
      func_0x000107c5faec();
      func_0x000107c61170(param_2);
    }
    *param_1 = uVar3;
    param_1[1] = uVar5;
    lVar1 = 0;
    func_0x00010437500c();
    uVar2 = 2;
  }
  else {
    uVar3 = param_2;
    func_0x000107c5d984();
    func_0x000107c61180();
    if (uVar3 == 0) {
      uVar4 = 0;
      uVar5 = 0;
    }
    else {
      uVar4 = uVar3;
      func_0x000107c5faec();
      func_0x000107c61170(uVar3);
    }
    uVar3 = uVar5;
    func_0x0001048daacc();
    func_0x000107c6142c(uVar5);
    if ((uVar4 & 1) != 0) {
      lVar1 = 0;
      func_0x00010437500c();
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 0x38);
      uVar2 = 1;
      goto LAB_10331ea34;
    }
    uVar5 = param_2;
    func_0x000107c5d984();
    func_0x000107c61180();
    if (uVar5 == 0) {
      uVar4 = 0;
      uVar5 = 0;
      uVar6 = uVar3;
    }
    else {
      uVar4 = uVar5;
      func_0x000107c5faec();
      uVar6 = uVar3;
      func_0x000107c61170(uVar5);
      uVar5 = uVar3;
    }
    func_0x000107c42120();
    func_0x000107c61180();
    if (param_2 == 0) {
      uVar3 = 0;
      uVar6 = 0;
    }
    else {
      uVar3 = param_2;
      func_0x000107c5faec();
      func_0x000107c61170(param_2);
    }
    *param_1 = uVar4;
    param_1[1] = uVar5;
    param_1[2] = uVar3;
    param_1[3] = uVar6;
    lVar1 = 0;
    func_0x00010437500c();
    uVar2 = 1;
  }
  func_0x000107c6159c(param_1,lVar1,uVar2);
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 0x38);
  uVar2 = 0;
LAB_10331ea34:
                    /* WARNING: Could not recover jumptable at 0x00010331ea44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2,1,lVar1);
  return;
}



/* Entry: 10331ea48; end: 10331ec7b;  */

void FUN_10331ea48(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = 0;
  func_0x000107c5eb9c();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar10 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)puVar10 - extraout_x8_00;
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar11 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000100029394(param_2,lVar9);
  lVar5 = lVar9;
  (**(code **)(lVar13 + 0x30))(lVar9,1,lVar3);
  if ((int)lVar5 == 1) {
    func_0x0001000293e4(lVar9);
  }
  else {
    pcVar8 = *(code **)(lVar13 + 0x20);
    lVar5 = lVar11;
    uStack_78 = param_1;
    (*pcVar8)(lVar11,lVar9,lVar3);
    func_0x000107c5ed70();
    lStack_70 = lVar5;
    lStack_68 = lVar9;
    func_0x000107c5eb88(puVar10);
    func_0x000100e8b654();
    puVar4 = puVar10;
    puVar6 = PTR___sSSN_11034da80;
    func_0x000107c601f0(puVar10,PTR___sSSN_11034da80,lVar5);
    (**(code **)(lVar12 + 8))(puVar10,lVar2);
    func_0x000107c6142c(lVar9);
    func_0x000107c6142c(puVar6);
    param_1 = uStack_78;
    uVar1 = (ulong)puVar4 & 0xffffffffffff;
    if (((ulong)puVar6 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)puVar6 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (*pcVar8)(uStack_78,lVar11,lVar3);
      lVar5 = 0;
      func_0x00010437500c();
      func_0x000107c6159c(param_1,lVar5,4);
      pcVar8 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
      uVar7 = 0;
      goto LAB_10331ec58;
    }
    (**(code **)(lVar13 + 8))(lVar11,lVar3);
    param_1 = uStack_78;
  }
  lVar5 = 0;
  func_0x00010437500c();
  pcVar8 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  uVar7 = 1;
LAB_10331ec58:
  (*pcVar8)(param_1,uVar7,1,lVar5);
  return;
}



/* Entry: 10331ec7c; end: 10331ec8b;  */

bool FUN_10331ec7c(ulong param_1)

{
  return (param_1 & 0x801) != 0;
}



/* Entry: 10331ec8c; end: 10331ecbf; -[_TtC26LensInfoCardImplementation38InfoCardLensExplorerCategoriesProvider categoriesResponse] */

void FUN_10331ec8c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10331ecc0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10331ecc0; end: 10331eda7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10331ecc0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f59a18);
  func_0x000107c3f6f0(uVar1);
  func_0x000107c61180();
  puVar2 = &UNK_11063e530;
  func_0x000107c613fc(&UNK_11063e530,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,*(undefined8 *)(unaff_x20 + _DAT_112f59a20));
  pcStack_40 = FUN_10331f08c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_102e29f64;
  puStack_48 = &UNK_11063e548;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  uVar4 = uVar1;
  func_0x000107c421bc(uVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar1);
  return uVar4;
}



/* Entry: 10331eda8; end: 10331ef17;  */

void FUN_10331eda8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    puVar2 = &UNK_11063e580;
    func_0x000107c613fc(&UNK_11063e580,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = 0x10331f0b0;
    *(long *)(puVar2 + 0x18) = param_2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_78 = FUN_10331f0b8;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_102e29eb8;
    puStack_80 = &UNK_11063e598;
    ppuVar3 = &puStack_98;
    puStack_70 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_70;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(puVar2);
    puVar2 = &UNK_11063e5d0;
    func_0x000107c613fc(&UNK_11063e5d0,0x20,7);
    *(code **)(puVar2 + 0x10) = FUN_10331f0d8;
    *(long *)(puVar2 + 0x18) = param_2;
    pcStack_78 = (code *)0x10331f10c;
    puStack_98 = puVar1;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_100e27b38;
    puStack_80 = &UNK_11063e5e8;
    ppuVar4 = &puStack_98;
    puStack_70 = puVar2;
    func_0x000107c60bc4(ppuVar4);
    puVar2 = puStack_70;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(puVar2);
    func_0x000107c4c754(param_1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61578(param_2,3);
  }
  return;
}



/* Entry: 10331ef18; end: 10331efab;  */

void FUN_10331ef18(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_38;
  
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c3da44();
    func_0x000107c61180();
    lVar1 = param_1;
    func_0x000107c3f6e0();
    func_0x000107c61180();
    func_0x000107c615e8(param_1);
    uVar2 = 0;
    func_0x000102e2a354(0);
    lVar3 = lVar1;
    func_0x000107c5fc54(lVar1,uVar2);
    func_0x000107c61170(lVar1);
  }
  lStack_38 = lVar3;
  func_0x0001002a64a8(&lStack_38);
  func_0x000107c6142c(lVar3);
  return;
}



/* Entry: 10331efac; end: 10331efd3; -[_TtC26LensInfoCardImplementation38InfoCardLensExplorerCategoriesProvider categoriesAggregator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10331efac(long param_1)

{
  func_0x000107c3f6e4(*(undefined8 *)(param_1 + _DAT_112f59a18));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10331efd4; end: 10331f033; -[_TtC26LensInfoCardImplementation38InfoCardLensExplorerCategoriesProvider init] */

void FUN_10331efd4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensInfoCardImplementation.InfoCardLensExplorerCategoriesProvider",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10331f000);
  (*pcVar1)();
}



/* Entry: 10331f034; end: 10331f06b; -[_TtC26LensInfoCardImplementation38InfoCardLensExplorerCategoriesProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10331f034(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f59a18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f59a20));
  return;
}



/* Entry: 10331f06c; end: 10331f08b;  */

void FUN_10331f06c(void)

{
  func_0x000107c61168(&PTR_PTR_1128ce3f0);
  return;
}



/* Entry: 10331f08c; end: 10331f0b7;  */

void FUN_10331f08c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    puVar3 = &UNK_11063e580;
    func_0x000107c613fc(&UNK_11063e580,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = 0x10331f0b0;
    *(long *)(puVar3 + 0x18) = lVar2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_78 = FUN_10331f0b8;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_102e29eb8;
    puStack_80 = &UNK_11063e598;
    ppuVar4 = &puStack_98;
    puStack_70 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_70;
    func_0x000107c6157c(lVar2);
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_11063e5d0;
    func_0x000107c613fc(&UNK_11063e5d0,0x20,7);
    *(code **)(puVar3 + 0x10) = FUN_10331f0d8;
    *(long *)(puVar3 + 0x18) = lVar2;
    pcStack_78 = (code *)0x10331f10c;
    puStack_98 = puVar1;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_100e27b38;
    puStack_80 = &UNK_11063e5e8;
    ppuVar5 = &puStack_98;
    puStack_70 = puVar3;
    func_0x000107c60bc4(ppuVar5);
    puVar3 = puStack_70;
    func_0x000107c6157c(lVar2);
    func_0x000107c61574(puVar3);
    func_0x000107c4c754(param_1);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61578(lVar2,3);
  }
  return;
}



/* Entry: 10331f0b8; end: 10331f0d7;  */

void FUN_10331f0b8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10331f0d8; end: 10331f0fb;  */

void FUN_10331f0d8(void)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  func_0x0001002a64a8(&uStack_18);
  return;
}



/* Entry: 10331f0fc; end: 10331f123;  */

void FUN_10331f0fc(long param_1,long param_2)

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



/* Entry: 10331f124; end: 10331f20f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10331f124(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c3f6ec(uVar2,param_2,param_1);
  func_0x000107c61180();
  lVar3 = 0;
  FUN_10331f06c();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar1 = _DAT_112f59a20;
  func_0x0001000285a8(0x112f599f8,&UNK_10dbb1880);
  func_0x000107c613fc();
  uVar6 = uVar2;
  func_0x000107c615f0();
  func_0x0001000c2754();
  *(undefined8 *)(lVar4 + lVar1) = uVar6;
  *(undefined8 *)(lVar4 + _DAT_112f59a18) = uVar2;
  plVar5 = &lStack_50;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  plStack_58 = plVar5;
  func_0x000107c6157c(uVar6);
  func_0x0001002a64a8(&plStack_58);
  func_0x000107c61574(uVar6);
  func_0x000107c615e8(uVar2);
  return plVar5;
}



/* Entry: 10331f210; end: 10331f267; -[_TtC26LensInfoCardImplementation45InfoCardLensExplorerCategoriesProviderManager categoriesProviderWithConfiguration:] */

void FUN_10331f210(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_10331f124(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10331f268; end: 10331f2e7; -[_TtC26LensInfoCardImplementation45InfoCardLensExplorerCategoriesProviderManager reset] */

/* WARNING: Possible PIC construction at 0x00010331f29c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010331f2d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010331f2a0) */
/* WARNING: Removing unreachable block (ram,0x00010331f2d8) */

void FUN_10331f268(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6157c();
  func_0x000107c504e8(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c6157c(uVar1);
  func_0x000100c7f490();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10331f2e8; end: 10331f333;  */

void FUN_10331f2e8(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10331f334; end: 10331f353;  */

void FUN_10331f334(undefined8 param_1,code *param_2)

{
  (*param_2)();
  return;
}



/* Entry: 10331f354; end: 10331f3cb; -[_TtC26LensInfoCardImplementation29InfoCardLensExplorerDataStore allItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10331f354(long param_1)

{
  long lVar1;
  
  if (((*(byte *)(param_1 + _DAT_112f59b08) & 1) == 0) &&
     (*(char *)(param_1 + _DAT_112f59b10) != '\x01')) {
    lVar1 = *(long *)(param_1 + _DAT_112f59b00);
    func_0x000107c3db5c(lVar1);
    func_0x000107c61180();
  }
  else {
    func_0x000107c61174();
    lVar1 = param_1;
    FUN_10331f3cc();
    func_0x000107c61170(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10331f3cc; end: 10331f4db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10331f3cc(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  long lVar6;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar5 = &puStack_60;
  lVar6 = unaff_x20;
  func_0x000107c614f0();
  lVar3 = *(long *)(unaff_x20 + _DAT_112f59b00);
  func_0x000107c3db5c();
  func_0x000107c61180();
  if (lVar3 == 0) {
    lVar6 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(unaff_x20 + _DAT_112f59b08);
    uVar2 = *(undefined1 *)(unaff_x20 + _DAT_112f59b10);
    puVar4 = &UNK_11063e670;
    func_0x000107c613fc(&UNK_11063e670,0x20,7);
    puVar4[0x10] = uVar1;
    puVar4[0x11] = uVar2;
    *(long *)(puVar4 + 0x18) = lVar6;
    uStack_40 = 0x10331f990;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_10117fbac;
    puStack_48 = &UNK_11063e688;
    puStack_38 = puVar4;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    lVar6 = lVar3;
    func_0x000107c4c280(lVar3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar3);
  }
  return lVar6;
}



/* Entry: 10331f4dc; end: 10331f5b7;  */

void FUN_10331f4dc(long *param_1,long param_2,uint param_3,uint param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_48;
  
  lStack_48 = 0;
  uVar1 = 0;
  FUN_103320374(0,0x112e56278,&PTR_PTR_1126ccc20);
  func_0x000107c5fc50(param_2,&lStack_48,uVar1);
  lVar2 = lStack_48;
  if (lStack_48 == 0) {
    lVar2 = 0;
    FUN_103320374(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61174();
  }
  else {
    param_2 = lStack_48;
    FUN_10331f9a0(lStack_48,param_3 & 1,param_4 & 1);
    func_0x000107c6142c(lVar2);
    lVar2 = 0x112f59b48;
    func_0x0001000285a8(0x112f59b48,&UNK_10dbb19b0);
  }
  param_1[3] = lVar2;
  *param_1 = param_2;
  return;
}



/* Entry: 10331f5b8; end: 10331f5df; -[_TtC26LensInfoCardImplementation29InfoCardLensExplorerDataStore remoteState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10331f5b8(long param_1)

{
  func_0x000107c4fe48(*(undefined8 *)(param_1 + _DAT_112f59b00));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10331f5e0; end: 10331f64f; -[_TtC26LensInfoCardImplementation29InfoCardLensExplorerDataStore dataStoreIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10331f5e0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112f59b00);
  func_0x000107c61174();
  func_0x000107c412c0();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10331f650; end: 10331f683; -[_TtC26LensInfoCardImplementation29InfoCardLensExplorerDataStore isEmpty] */

void FUN_10331f650(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10331f684();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10331f684; end: 10331f87b;  */

/* WARNING: Possible PIC construction at 0x00010331f6f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010331f77c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010331f7bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010331f824: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010331f7c0) */
/* WARNING: Removing unreachable block (ram,0x00010331f780) */
/* WARNING: Removing unreachable block (ram,0x00010331f6f4) */
/* WARNING: Removing unreachable block (ram,0x00010331f828) */
/* WARNING: Removing unreachable block (ram,0x00010331f838) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10331f684(long param_1)

{
  undefined *puVar1;
  long unaff_x20;
  
  if (((*(byte *)(unaff_x20 + _DAT_112f59b08) & 1) == 0) &&
     (*(char *)(unaff_x20 + _DAT_112f59b10) != '\x01')) {
    func_0x000107c49cd4(*(undefined8 *)(unaff_x20 + _DAT_112f59b00));
  }
  else {
    FUN_10331f3cc();
    if (param_1 == 0) {
      puVar1 = PTR_PTR_1126ae558;
      func_0x000107c61168(PTR_PTR_1126ae558);
      FUN_103320374(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c6010c(1);
      func_0x000107c451b0(puVar1);
    }
    else {
      func_0x000107c610f8(PTR_PTR_1126ae560);
      func_0x000107c453e4();
      func_0x000107c5c6c0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10331f87c; end: 10331f8db; -[_TtC26LensInfoCardImplementation29InfoCardLensExplorerDataStore init] */

void FUN_10331f87c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensInfoCardImplementation.InfoCardLensExplorerDataStore",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10331f8a8);
  (*pcVar1)();
}



/* Entry: 10331f8dc; end: 10331f913; -[_TtC26LensInfoCardImplementation29InfoCardLensExplorerDataStore .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10331f8dc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f59b00));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f59b18));
  return;
}



/* Entry: 10331f914; end: 10331f933;  */

void FUN_10331f914(void)

{
  func_0x000107c61168(&PTR_PTR_1128ce4b8);
  return;
}



/* Entry: 10331f934; end: 10331f973;  */

void FUN_10331f934(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c40808();
  uVar1 = (ulong)(param_1 == 0);
  func_0x000107c5fca0(uVar1);
  func_0x000107c3fefc(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10331f974; end: 10331f99f;  */

void FUN_10331f974(long param_1,long param_2)

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



/* Entry: 10331f9a0; end: 10332036b;  */

undefined * FUN_10331f9a0(undefined *param_1,uint param_2,uint param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  ulong uStack_c8;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *apuStack_80 [2];
  
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar18 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
    puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar18 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar18 = param_1;
    }
    func_0x000107c60480();
    puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar16;
  if (puVar18 != (undefined *)0x0) {
    puVar19 = (undefined *)0x0;
    puVar6 = puVar16;
    do {
      while( true ) {
        if (((ulong)param_1 & 0xc000000000000001) == 0) {
          if (*(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= puVar19) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10332031c);
            (*pcVar4)();
          }
          puVar7 = *(undefined **)(param_1 + (long)puVar19 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar7 = puVar19;
          func_0x0001020a4b50(puVar19,param_1);
        }
        if (SCARRY8((long)puVar19,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103320318);
          (*pcVar4)();
        }
        puVar19 = puVar19 + 1;
        if ((param_2 & 1) == 0) break;
        apuStack_80[0] = (undefined *)0x0;
        puVar16 = &UNK_11063e8a0;
        func_0x000107c613fc(&UNK_11063e8a0,0x18,7);
        *(undefined ***)(puVar16 + 0x10) = apuStack_80;
        puVar17 = &UNK_11063e8c8;
        func_0x000107c613fc(&UNK_11063e8c8,0x20,7);
        *(undefined8 *)(puVar17 + 0x10) = 0x1033203ec;
        *(undefined **)(puVar17 + 0x18) = puVar16;
        pcStack_90 = (code *)0x103320430;
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0x42000000;
        puStack_a0 = &UNK_1020995dc;
        puStack_98 = &UNK_11063e8e0;
        ppuVar8 = &puStack_b0;
        puStack_88 = puVar17;
        func_0x000107c60bc4(ppuVar8);
        puVar5 = puStack_88;
        func_0x000107c6157c(puVar17);
        func_0x000107c61574(puVar5);
        func_0x000107c4c684(puVar7);
        func_0x000107c60bd0(ppuVar8);
        puVar5 = apuStack_80[0];
        func_0x000107c61574(puVar16);
        puVar16 = puVar17;
        func_0x000107c61544(puVar17,"",0x7a,9,0xd,1);
        func_0x000107c61574(puVar17);
        if (((ulong)puVar16 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103320320);
          (*pcVar4)();
        }
        if (puVar5 == (undefined *)0x0) break;
LAB_10331fa18:
        func_0x000107c61170(puVar7);
LAB_10331fa24:
        func_0x000107c61170(puVar5);
LAB_10331fa28:
        if (puVar19 == puVar18) {
          return puVar6;
        }
      }
      if ((param_3 & 1) != 0) {
        apuStack_80[0] = (undefined *)0x0;
        puVar16 = &UNK_11063e828;
        func_0x000107c613fc(&UNK_11063e828,0x18,7);
        *(undefined ***)(puVar16 + 0x10) = apuStack_80;
        puVar17 = &UNK_11063e850;
        func_0x000107c613fc(&UNK_11063e850,0x20,7);
        *(code **)(puVar17 + 0x10) = FUN_1033203e4;
        *(undefined **)(puVar17 + 0x18) = puVar16;
        pcStack_90 = (code *)0x10332042c;
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0x42000000;
        puStack_a0 = (undefined *)0x103174de4;
        puStack_98 = &UNK_11063e868;
        ppuVar8 = &puStack_b0;
        puStack_88 = puVar17;
        func_0x000107c60bc4(ppuVar8);
        puVar5 = puStack_88;
        func_0x000107c6157c(puVar17);
        func_0x000107c61574(puVar5);
        func_0x000107c4c684(puVar7);
        func_0x000107c60bd0(ppuVar8);
        puVar5 = apuStack_80[0];
        func_0x000107c61574(puVar16);
        puVar16 = puVar17;
        func_0x000107c61544(puVar17,"",0x7a,0x17,0x18,1);
        func_0x000107c61574(puVar17);
        if (((ulong)puVar16 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103320328);
          (*pcVar4)();
        }
        if (puVar5 != (undefined *)0x0) goto LAB_10331fa18;
      }
      apuStack_80[0] = (undefined *)0x0;
      puVar16 = &UNK_11063e6c0;
      func_0x000107c613fc(&UNK_11063e6c0,0x18,7);
      *(undefined ***)(puVar16 + 0x10) = apuStack_80;
      puVar17 = &UNK_11063e6e8;
      func_0x000107c613fc(&UNK_11063e6e8,0x20,7);
      *(code **)(puVar17 + 0x10) = FUN_10332036c;
      *(undefined **)(puVar17 + 0x18) = puVar16;
      pcStack_90 = (code *)0x103320424;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0x42000000;
      puStack_a0 = &UNK_102500714;
      puStack_98 = &UNK_11063e700;
      ppuVar8 = &puStack_b0;
      puStack_88 = puVar17;
      func_0x000107c60bc4(ppuVar8);
      puVar5 = puStack_88;
      func_0x000107c6157c(puVar17);
      func_0x000107c61574(puVar5);
      func_0x000107c4c684(puVar7);
      func_0x000107c60bd0(ppuVar8);
      puVar5 = apuStack_80[0];
      func_0x000107c61574(puVar16);
      puVar16 = puVar17;
      func_0x000107c61544(puVar17,"",0x7a,0x26,0x1c,1);
      func_0x000107c61574(puVar17);
      if (((ulong)puVar16 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103320324);
        (*pcVar4)();
      }
      if (puVar5 != (undefined *)0x0) {
        puVar16 = puVar5;
        func_0x000107c4a7d4();
        func_0x000107c61180();
        uVar9 = 0;
        FUN_103320374(0,0x112ea2a98,&PTR_PTR_1126ccd78);
        puVar17 = puVar16;
        func_0x000107c5fc54();
        func_0x000107c61170(puVar16);
        if ((ulong)puVar17 >> 0x3e == 0) {
          puVar16 = *(undefined **)(((ulong)puVar17 & 0xffffffffffffff8) + 0x10);
          puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          puVar16 = (undefined *)((ulong)puVar17 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar17) {
            puVar16 = puVar17;
          }
          func_0x000107c60480();
          puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        PTR___swiftEmptyArrayStorage_11034f1c8 = puVar14;
        if (puVar16 != (undefined *)0x0) {
          uStack_c8 = (ulong)puVar17 & 0xffffffffffffff8;
          puVar13 = (undefined *)0x0;
          do {
            while( true ) {
              if (((ulong)puVar17 & 0xc000000000000001) == 0) {
                if (*(undefined **)(uStack_c8 + 0x10) <= puVar13) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10332030c);
                  (*pcVar4)();
                }
                puVar10 = *(undefined **)(puVar17 + (long)puVar13 * 8 + 0x20);
                func_0x000107c61174();
              }
              else {
                puVar10 = puVar13;
                FUN_1033429ec(puVar13,puVar17);
              }
              puVar1 = puVar13 + 1;
              if (SCARRY8((long)puVar13,1)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x103320308);
                (*pcVar4)();
              }
              if ((param_2 & 1) == 0) break;
              lStack_b8 = 0;
              puVar11 = &UNK_11063e7b0;
              func_0x000107c613fc(&UNK_11063e7b0,0x18,7);
              *(long **)(puVar11 + 0x10) = &lStack_b8;
              puVar12 = &UNK_11063e7d8;
              func_0x000107c613fc(&UNK_11063e7d8,0x20,7);
              *(undefined8 *)(puVar12 + 0x10) = 0x1033203bc;
              *(undefined **)(puVar12 + 0x18) = puVar11;
              pcStack_90 = FUN_1033203c4;
              puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_a8 = 0x42000000;
              puStack_a0 = &UNK_1020995dc;
              puStack_98 = &UNK_11063e7f0;
              ppuVar8 = &puStack_b0;
              puStack_88 = puVar12;
              func_0x000107c60bc4(ppuVar8);
              puVar3 = puStack_88;
              func_0x000107c6157c(puVar12);
              func_0x000107c61574(puVar3);
              func_0x000107c4c688(puVar10);
              func_0x000107c60bd0(ppuVar8);
              lVar20 = lStack_b8;
              func_0x000107c61574(puVar11);
              puVar11 = puVar12;
              func_0x000107c61544(puVar12,"",0x82,9,0xd,1);
              func_0x000107c61574(puVar12);
              if (((ulong)puVar11 & 1) != 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x103320314);
                (*pcVar4)();
              }
              if (lVar20 == 0) break;
LAB_10331fde8:
              func_0x000107c61170(puVar10);
              func_0x000107c61170(lVar20);
              puVar13 = puVar13 + 1;
              if (puVar1 == puVar16) goto LAB_1033200fc;
            }
            if ((param_3 & 1) != 0) {
              lStack_b8 = 0;
              puVar11 = &UNK_11063e738;
              func_0x000107c613fc(&UNK_11063e738,0x18,7);
              *(long **)(puVar11 + 0x10) = &lStack_b8;
              puVar12 = &UNK_11063e760;
              func_0x000107c613fc(&UNK_11063e760,0x20,7);
              *(code **)(puVar12 + 0x10) = FUN_1033203b4;
              *(undefined **)(puVar12 + 0x18) = puVar11;
              pcStack_90 = (code *)0x103320428;
              puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_a8 = 0x42000000;
              puStack_a0 = (undefined *)0x103174de4;
              puStack_98 = &UNK_11063e778;
              ppuVar8 = &puStack_b0;
              puStack_88 = puVar12;
              func_0x000107c60bc4(ppuVar8);
              puVar3 = puStack_88;
              func_0x000107c6157c(puVar12);
              func_0x000107c61574(puVar3);
              func_0x000107c4c688(puVar10);
              func_0x000107c60bd0(ppuVar8);
              lVar20 = lStack_b8;
              func_0x000107c61574(puVar11);
              puVar11 = puVar12;
              func_0x000107c61544(puVar12,"",0x82,0x17,0x18,1);
              func_0x000107c61574(puVar12);
              if (((ulong)puVar11 & 1) != 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x103320310);
                (*pcVar4)();
              }
              if (lVar20 != 0) goto LAB_10331fde8;
            }
            puVar13 = puVar14;
            func_0x000107c61558();
            apuStack_80[0] = puVar14;
            if (((ulong)puVar13 & 1) == 0) {
              FUN_103346338(0,*(long *)(puVar14 + 0x10) + 1,1);
            }
            uVar2 = *(ulong *)(apuStack_80[0] + 0x10);
            if (*(ulong *)(apuStack_80[0] + 0x18) >> 1 <= uVar2) {
              FUN_103346338(1 < *(ulong *)(apuStack_80[0] + 0x18),uVar2 + 1,1);
            }
            *(ulong *)(apuStack_80[0] + 0x10) = uVar2 + 1;
            *(undefined **)(apuStack_80[0] + uVar2 * 8 + 0x20) = puVar10;
            puVar14 = apuStack_80[0];
            puVar13 = puVar1;
          } while (puVar1 != puVar16);
        }
LAB_1033200fc:
        func_0x000107c6142c(puVar17);
        puVar16 = PTR_PTR_1126cd128;
        func_0x000107c61168();
        func_0x000107c4b0b8();
        func_0x000107c61180();
        puVar17 = puVar14;
        func_0x000107c5fc48(puVar14,uVar9);
        func_0x000107c61574(puVar14);
        puVar14 = puVar16;
        func_0x000107c5e614();
        func_0x000107c61180();
        func_0x000107c61170(puVar16);
        func_0x000107c61170(puVar17);
        puVar16 = puVar14;
        func_0x000107c3ecc8();
        func_0x000107c61180();
        func_0x000107c61170(puVar14);
        puVar17 = puVar16;
        func_0x000107c4a7d4();
        func_0x000107c61180();
        puVar14 = puVar17;
        func_0x000107c5fc54();
        func_0x000107c61170(puVar17);
        if ((ulong)puVar14 >> 0x3e == 0) {
          puVar17 = *(undefined **)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar17 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar14) {
            puVar17 = puVar14;
          }
          func_0x000107c60480();
        }
        func_0x000107c6142c(puVar14);
        if (puVar17 == (undefined *)0x0) {
          func_0x000107c61170(puVar5);
          func_0x000107c61170(puVar16);
          puVar5 = puVar7;
          goto LAB_10331fa24;
        }
        puVar17 = PTR_PTR_1126ccc20;
        func_0x000107c61168();
        func_0x000107c40380();
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar16);
        func_0x000107c61170(puVar7);
        puVar7 = puVar17;
        if (puVar17 != (undefined *)0x0) goto LAB_103320254;
        goto LAB_10331fa28;
      }
LAB_103320254:
      puVar16 = puVar6;
      func_0x000107c61550();
      if ((((int)puVar16 == 0) || ((long)puVar6 < 0)) ||
         (puVar16 = puVar6, ((ulong)puVar6 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar6 >> 0x3e == 0) {
          puVar17 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar17 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar6) {
            puVar17 = puVar6;
          }
          func_0x000107c60480(puVar17);
        }
        puVar16 = (undefined *)0x0;
        FUN_103174ed0(0,puVar17 + 1,1,puVar6);
      }
      uVar15 = (ulong)puVar16 & 0xffffffffffffff8;
      uVar2 = *(ulong *)(uVar15 + 0x10);
      if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar2) {
        puVar16 = (undefined *)(ulong)(1 < *(ulong *)(uVar15 + 0x18));
        FUN_103174ed0(puVar16,uVar2 + 1,1);
        uVar15 = (ulong)puVar16 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar15 + 0x10) = uVar2 + 1;
      *(undefined **)(uVar15 + uVar2 * 8 + 0x20) = puVar7;
      puVar6 = puVar16;
    } while (puVar19 != puVar18);
  }
  return puVar16;
}



/* Entry: 10332036c; end: 103320373;  */

void FUN_10332036c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103320374; end: 1033203b3;  */

void FUN_103320374(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1033203b4; end: 1033203c3;  */

void FUN_1033203b4(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1033203c4; end: 1033203e3;  */

void FUN_1033203c4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1033203e4; end: 103320433;  */

void FUN_1033203e4(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103320434; end: 103320517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103320434(undefined8 param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f59b50);
  func_0x000107c5fadc();
  func_0x000107c4b160();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  uVar1 = *(undefined1 *)(unaff_x20 + _DAT_112f59b58);
  uVar2 = *(undefined1 *)(unaff_x20 + _DAT_112f59b60);
  lVar4 = 0;
  FUN_10331f914();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar3 = _DAT_112f59b18;
  puVar6 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar5 + lVar3) = puVar6;
  *(undefined8 *)(lVar5 + _DAT_112f59b00) = uVar7;
  *(undefined1 *)(lVar5 + _DAT_112f59b08) = uVar1;
  *(undefined1 *)(lVar5 + _DAT_112f59b10) = uVar2;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103320518; end: 10332057f; -[_TtC26LensInfoCardImplementation36InfoCardLensExplorerDataStoreFactory lensFeedDataStoreWithSectionId:] */

void FUN_103320518(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_103320434(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103320580; end: 1033205a7; -[_TtC26LensInfoCardImplementation36InfoCardLensExplorerDataStoreFactory remoteStateProviderForSectionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103320580(long param_1)

{
  func_0x000107c4fe4c(*(undefined8 *)(param_1 + _DAT_112f59b50));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033205a8; end: 1033205b7; -[_TtC26LensInfoCardImplementation36InfoCardLensExplorerDataStoreFactory reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033205a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112f59b50),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 1033205b8; end: 103320617; -[_TtC26LensInfoCardImplementation36InfoCardLensExplorerDataStoreFactory init] */

void FUN_1033205b8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensInfoCardImplementation.InfoCardLensExplorerDataStoreFactory",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033205e4);
  (*pcVar1)();
}



/* Entry: 103320618; end: 103320627; -[_TtC26LensInfoCardImplementation36InfoCardLensExplorerDataStoreFactory .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103320618(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f59b50));
  return;
}



/* Entry: 103320628; end: 10332067f;  */

void FUN_103320628(void)

{
  func_0x000107c61168(&PTR_PTR_1128ce590);
  return;
}



/* Entry: 103320680; end: 1033208c3;  */

uint FUN_103320680(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar9 = param_1;
    }
    func_0x000107c60480();
  }
  if (param_2 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar2 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar9 == uVar2) {
    if (uVar9 != 0) {
      uVar5 = param_1 & 0xffffffffffffff8;
      uVar2 = uVar5;
      if ((param_1 & 0x8000000000000000) != 0) {
        uVar2 = param_1;
      }
      uVar3 = uVar5 + 0x20;
      if (param_1 >> 0x3e != 0) {
        uVar3 = uVar2;
      }
      uVar6 = param_2 & 0xffffffffffffff8;
      uVar2 = uVar6;
      if ((param_2 & 0x8000000000000000) != 0) {
        uVar2 = param_2;
      }
      uVar4 = uVar6 + 0x20;
      if (param_2 >> 0x3e != 0) {
        uVar4 = uVar2;
      }
      if (uVar3 != uVar4) {
        if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1033208c4);
          (*pcVar1)();
        }
        func_0x000102e2a354(0);
        if (((param_2 | param_1) & 0xc000000000000001) == 0) {
          lVar12 = *(long *)(uVar5 + 0x10);
          lVar13 = *(long *)(uVar6 + 0x10);
          puVar10 = (ulong *)(param_1 + 0x20);
          puVar11 = (undefined8 *)(param_2 + 0x20);
          do {
            uVar9 = uVar9 - 1;
            if (lVar12 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x103320864);
              (*pcVar1)();
            }
            if (lVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x103320868);
              (*pcVar1)();
            }
            uVar5 = *puVar10;
            uVar7 = *puVar11;
            func_0x000107c61174();
            func_0x000107c61174(uVar7);
            uVar2 = uVar5;
            func_0x000107c60118(uVar5,uVar7);
            uVar8 = (uint)uVar2;
            func_0x000107c61170(uVar5);
            func_0x000107c61170(uVar7);
            if ((uVar2 & 1) == 0) break;
            lVar13 = lVar13 + -1;
            lVar12 = lVar12 + -1;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          } while (uVar9 != 0);
        }
        else {
          lVar12 = 4;
          do {
            uVar9 = uVar9 - 1;
            uVar2 = lVar12 - 4;
            if ((param_1 & 0xc000000000000001) == 0) {
              if (*(long *)(uVar5 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x10332086c);
                (*pcVar1)();
              }
              uVar3 = *(ulong *)(param_1 + lVar12 * 8);
              func_0x000107c61174();
              if ((param_2 & 0xc000000000000001) == 0) goto LAB_10332078c;
LAB_10332075c:
              func_0x000102e2a3b4(uVar2,param_2);
            }
            else {
              uVar3 = uVar2;
              func_0x000102e2a3b4(uVar2,param_1);
              if ((param_2 & 0xc000000000000001) != 0) goto LAB_10332075c;
LAB_10332078c:
              if (*(long *)(uVar6 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x103320870);
                (*pcVar1)();
              }
              uVar2 = *(ulong *)(param_2 + lVar12 * 8);
              func_0x000107c61174(uVar2);
            }
            uVar4 = uVar3;
            func_0x000107c60118(uVar3,uVar2);
            uVar8 = (uint)uVar4;
            func_0x000107c61170(uVar3);
            func_0x000107c61170(uVar2);
          } while (((uVar4 & 1) != 0) && (lVar12 = lVar12 + 1, uVar9 != 0));
        }
        goto LAB_10332089c;
      }
    }
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
LAB_10332089c:
  return uVar8 & 1;
}



/* Entry: 1033208c4; end: 1033208cb;  */

void FUN_1033208c4(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 1033208cc; end: 103320933;  */

undefined8 * FUN_1033208cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103320934; end: 103320a17;  */

int FUN_103320934(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103320a18; end: 103320bb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103320a18(undefined1 param_1,undefined1 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112f59b98;
  uVar2 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  lVar1 = _DAT_112f59b90;
  uVar2 = 0x112f599f8;
  func_0x0001000285a8(0x112f599f8,&UNK_10dbb1880);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined1 *)(unaff_x20 + _DAT_112f59ba0) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112f59ba8) = param_2;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103320bb8; end: 103320c4f; -[_TtC26LensInfoCardImplementation41InfoCardLensExplorerQueryContextDecorator decorateDataStoreFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103320bb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  uVar1 = *(undefined1 *)(param_1 + _DAT_112f59ba0);
  uVar2 = *(undefined1 *)(param_1 + _DAT_112f59ba8);
  lVar4 = 0;
  FUN_103320628();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112f59b50) = param_3;
  *(undefined1 *)(lVar5 + _DAT_112f59b58) = uVar1;
  *(undefined1 *)(lVar5 + _DAT_112f59b60) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_40,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103320c50; end: 103320d6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103320c50(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  code *pcVar7;
  
  lVar1 = 0;
  func_0x00010331f314();
  func_0x000107c613fc();
  uVar2 = 0x112f59af8;
  func_0x0001000285a8(0x112f59af8,&UNK_10dbb1980);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  func_0x000107c6157c();
  func_0x000107c615f0(param_1);
  plVar3 = (long *)0x10331f110;
  func_0x00010068b194(0x10331f110,0,&UNK_11063e988);
  func_0x000107c61574(uVar2);
  lVar6 = *(long *)(unaff_x20 + _DAT_112f59b90);
  pcVar7 = *(code **)(*plVar3 + 0x60);
  func_0x000107c6157c(lVar6);
  pcVar4 = FUN_103320d70;
  lVar5 = lVar6;
  (*pcVar7)(FUN_103320d70);
  func_0x000107c61574(plVar3);
  func_0x000107c61574(lVar6);
  pcVar7 = pcVar4;
  func_0x000107c614f0(pcVar4);
  (**(code **)(lVar5 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112f59b98),pcVar7,lVar5);
  func_0x000107c615e8(pcVar4);
  return lVar1;
}



/* Entry: 103320d70; end: 103320d97;  */

void FUN_103320d70(undefined8 *param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = *param_1;
  func_0x0001002a64a8(&uStack_18);
  return;
}



/* Entry: 103320d98; end: 103320df3; -[_TtC26LensInfoCardImplementation41InfoCardLensExplorerQueryContextDecorator decorateCategoriesProviderFactory:] */

void FUN_103320d98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103320c50(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103320df4; end: 103320e53; -[_TtC26LensInfoCardImplementation41InfoCardLensExplorerQueryContextDecorator init] */

void FUN_103320df4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensInfoCardImplementation.InfoCardLensExplorerQueryContextDecorator",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103320e20);
  (*pcVar1)();
}



/* Entry: 103320e54; end: 103320e8b; -[_TtC26LensInfoCardImplementation41InfoCardLensExplorerQueryContextDecorator .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103320e70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103320e74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103320e54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f59b98));
  return;
}



/* Entry: 103320e8c; end: 103320eab;  */

void FUN_103320e8c(void)

{
  func_0x000107c61168(&PTR_PTR_1128ce660);
  return;
}



/* Entry: 103320eac; end: 10332106b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103320eac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112f59bd8;
  uVar3 = 0x112f59a00;
  func_0x0001000285a8(0x112f59a00,&UNK_10dbb1a70);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f59be0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f59be8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f59bf0) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_112f59bf8) = param_5;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10332106c; end: 103321117;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10332106c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f59be0);
    func_0x000107c5fadc(uVar1,((undefined8 *)(unaff_x20 + _DAT_112f59be0))[1]);
    func_0x000107c4ef5c(lStack_48);
    func_0x000107c615e8(lStack_48);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 103321118; end: 1033211eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103321118(code *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  func_0x0001000d224c(&puStack_60);
  puVar1 = puStack_60;
  if (puStack_60 == (undefined *)0x0) {
    if (param_1 != (code *)0x0) {
      (*param_1)();
    }
  }
  else {
    if (param_1 == (code *)0x0) {
      ppuVar3 = (undefined **)0x0;
    }
    else {
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      puStack_50 = &UNK_1000f6b44;
      puStack_48 = &UNK_11063e9a8;
      pcStack_40 = param_1;
      uStack_38 = param_2;
      func_0x000107c60bc4(&puStack_60);
      uVar2 = uStack_38;
      func_0x000107c6157c(param_2);
      func_0x000107c61574(uVar2);
    }
    func_0x000107c42058(puVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(puVar1);
  }
  return;
}



/* Entry: 1033211ec; end: 103321207;  */

void FUN_1033211ec(long param_1,long param_2)

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



/* Entry: 103321208; end: 103321267; -[_TtC26LensInfoCardImplementation30InfoCardLensExplorerController init] */

void FUN_103321208(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensInfoCardImplementation.InfoCardLensExplorerController",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103321234);
  (*pcVar1)();
}



/* Entry: 103321268; end: 1033212c3; -[_TtC26LensInfoCardImplementation30InfoCardLensExplorerController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103321298: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010332129c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103321268(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f59be0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f59be8));
  return;
}



/* Entry: 1033212c4; end: 1033212d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033212c4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*unaff_x20 + _DAT_112f59bd8));
  return;
}



/* Entry: 1033212d8; end: 103321373;  */

void FUN_1033212d8(void)

{
  FUN_10332106c();
  return;
}



/* Entry: 103321374; end: 103321377; -[_TtC26LensInfoCardImplementation30InfoCardLensExplorerController lensExplorerRouterDidPresentLensExplorer:] */

void FUN_103321374(void)

{
  return;
}



/* Entry: 103321378; end: 10332137b; -[_TtC26LensInfoCardImplementation30InfoCardLensExplorerController lensExplorerRouterBeginDismissingLensExplorer:] */

void FUN_103321378(void)

{
  return;
}



/* Entry: 10332137c; end: 10332137f; -[_TtC26LensInfoCardImplementation30InfoCardLensExplorerController lensExplorerRouterDidDismissLensExplorer:] */

void FUN_10332137c(void)

{
  return;
}



/* Entry: 103321380; end: 103321387; -[_TtC26LensInfoCardImplementation30InfoCardLensExplorerController lensExplorerRouterReplyParameters:] */

void FUN_103321380(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 103321388; end: 1033213ef; -[_TtC26LensInfoCardImplementation30InfoCardLensExplorerController lensExplorerRouter:didPickItem:selectionTrigger:] */

/* WARNING: Possible PIC construction at 0x0001033213d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033213dc) */

void FUN_103321388(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_103321448(param_4);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1033213f0; end: 1033213f3; -[_TtC26LensInfoCardImplementation30InfoCardLensExplorerController lensExplorerRouterDidToggleCamera:] */

void FUN_1033213f0(void)

{
  return;
}



/* Entry: 1033213f4; end: 103321447; -[_TtC26LensInfoCardImplementation30InfoCardLensExplorerController lensExplorerRouter:didPerformStoryEvent:] */

void FUN_1033213f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_103321534(param_4);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103321448; end: 103321533;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103321448(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  char cStack_48;
  
  func_0x000107c61174();
  func_0x00010436ed6c(&uStack_68);
  if (cStack_48 == '\0') {
    puVar1 = PTR_PTR_1126b0820;
    func_0x000107c61168();
    func_0x000107c4b184();
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c5e848();
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    puVar1 = puVar2;
    func_0x000107c3ecc8();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    uStack_88 = uStack_60;
    uStack_80 = uStack_58;
    uStack_78 = 0;
    uStack_70 = 7;
    puStack_90 = puVar1;
    func_0x0001002a64a8(&puStack_90);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(uStack_68);
    func_0x000107c6142c(uStack_58);
  }
  else {
    FUN_1033215a0(&uStack_68);
  }
  return;
}



/* Entry: 103321534; end: 10332157f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103321534(int param_1)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  if (param_1 == 0) {
    uStack_48 = 0x19;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0xd;
    func_0x0001002a64a8(&uStack_48);
  }
  return;
}


