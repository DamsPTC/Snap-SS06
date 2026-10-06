/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1000d22b4; end: 1000d236f;  */

void FUN_1000d22b4(undefined8 param_1,code *param_2,undefined8 param_3,long *param_4)

{
  long extraout_x8;
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  long lStack_60;
  
  lVar1 = *(long *)(*param_4 + 0x50);
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_60 = lVar1;
  FUN_100075034(puVar2,FUN_1000ca6b0,auStack_70,lVar1);
  (*param_2)(param_1,puVar2);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 1000d2370; end: 1000d2373;  */

void FUN_1000d2370(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long extraout_x12;
  long extraout_x12_00;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  code *pcStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  long lStack_d0;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [32];
  
  lVar7 = *(long *)(*unaff_x20 + 0x50);
  lVar5 = 0;
  func_0x000100082288(0,lVar7);
  lVar9 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar12 = (long)&pcStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar12 - extraout_x12;
  lStack_108 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_108 + 0x40));
  lVar6 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_110 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar6 - extraout_x12_00;
  lVar13 = unaff_x20[3];
  func_0x000107c61428(lVar13 + 0x10,auStack_a8,0x21,0);
  iVar4 = 1;
  func_0x000107c60b20(1,lVar13 + 0x10);
  func_0x000107c614a8(auStack_a8);
  if (iVar4 != 0) {
    lVar10 = *(long *)(*unaff_x20 + 0x68);
    func_0x000107c61428((long)unaff_x20 + lVar10,auStack_100,0,0);
    (**(code **)(lVar9 + 0x10))(lVar8,(long)unaff_x20 + lVar10,lVar5);
    lVar10 = lVar8;
    func_0x000107c614c4(lVar8,lVar5);
    if ((int)lVar10 == 1) {
      pcVar11 = *(code **)(lStack_108 + 0x20);
      (*pcVar11)(lVar6,lVar8,lVar7);
      (*pcVar11)(param_1,lVar6,lVar7);
      return;
    }
    (**(code **)(lVar9 + 8))(lVar8,lVar5);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70));
  func_0x000107c61428(puVar1,auStack_80,0,0);
  if (*(char *)((long)puVar1 + 0x11) == '\x01') {
    func_0x000107c6157c();
  }
  else {
    uStack_120 = *puVar1;
    uVar2 = puVar1[1];
    uVar3 = *(undefined1 *)(puVar1 + 2);
    uStack_118 = param_1;
    func_0x000107c61428(0x1138153c0,auStack_c0,0,0);
    FUN_10008a8e8(0x1138153c0,auStack_e8);
    if (lStack_d0 != 0) {
      func_0x000104857124(auStack_e8,auStack_a8);
      lStack_128 = lVar9;
      FUN_1000a8868(auStack_a8,uStack_90);
      pcStack_130 = *(code **)(lStack_88 + 8);
      func_0x000107c61580();
      lVar9 = lStack_128;
      (*pcStack_130)(uStack_120,uVar2,uVar3,&UNK_104857794);
      func_0x000107c61574();
      func_0x0001000834e4(auStack_a8);
      param_1 = uStack_118;
      goto LAB_100083dec;
    }
    func_0x000107c6157c();
    func_0x00010008a938(auStack_e8);
    param_1 = uStack_118;
  }
  FUN_100083ec8();
LAB_100083dec:
  func_0x000107c61428(lVar13 + 0x10,auStack_a8,0x21,0);
  iVar4 = 1;
  func_0x000107c60b20(1,lVar13 + 0x10);
  func_0x000107c614a8(auStack_a8);
  if (iVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x100083eb4);
    (*pcVar11)();
  }
  lVar6 = *(long *)(*unaff_x20 + 0x68);
  func_0x000107c61428((long)unaff_x20 + lVar6,auStack_a8,0,0);
  (**(code **)(lVar9 + 0x10))(lVar12,(long)unaff_x20 + lVar6,lVar5);
  lVar8 = lVar12;
  func_0x000107c614c4(lVar12,lVar5);
  lVar6 = lStack_110;
  if ((int)lVar8 == 1) {
    pcVar11 = *(code **)(lStack_108 + 0x20);
    (*pcVar11)(lStack_110,lVar12,lVar7);
    (*pcVar11)(param_1,lVar6,lVar7);
    func_0x000107c61574();
    return;
  }
  (**(code **)(lVar9 + 8))(lVar12,lVar5);
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x100083ec8);
  (*pcVar11)();
}



/* Entry: 1000d2374; end: 1000d23d3;  */

long FUN_1000d2374(long param_1)

{
  FUN_1000b6d7c();
  func_0x000107c61574(*(undefined8 *)(param_1 + 0x10));
  return param_1;
}



/* Entry: 1000d23d4; end: 1000d23df;  */

void FUN_1000d23d4(long param_1)

{
  undefined1 auStack_60 [16];
  long lStack_50;
  
  lStack_50 = param_1;
  FUN_100087bd4(*(undefined8 *)(param_1 + 0x10),FUN_1000d2434,auStack_60,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 1000d23e0; end: 1000d2433;  */

void FUN_1000d23e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [16];
  long lStack_50;
  
  lStack_50 = param_1;
  FUN_100087bd4(*(undefined8 *)(param_1 + 0x10),param_4,auStack_60,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 1000d2434; end: 1000d244f;  */

void FUN_1000d2434(void)

{
  long unaff_x20;
  
  FUN_1000c98fc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1000d2450; end: 1000d2583;  */

void FUN_1000d2450(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  uVar4 = *param_2;
  (**(code **)(lVar5 + 0x68))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,lVar1);
  puVar2 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar3 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010ef86250);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar3);
  (**(code **)(lVar5 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  FUN_1000caff4(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar4);
  FUN_1000d2584(puVar2,uVar4);
  *param_1 = puVar2;
  return;
}



/* Entry: 1000d2584; end: 1000d25f3;  */

void FUN_1000d2584(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  FUN_1000285a8(0x112da94f8,&UNK_10d950a90);
  func_0x000107c613fc();
  puVar1 = &uStack_38;
  FUN_10006c248();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 **)(unaff_x20 + 0x20) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1000d25f4; end: 1000d26df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d25f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long lVar1;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  long lStack_68;
  char cStack_51;
  
  lVar1 = *unaff_x20;
  uStack_70 = param_2;
  lStack_68 = param_3;
  FUN_100087bd4(&cStack_51,FUN_1000d26e0,auStack_80,PTR___sSbN_11034dd40);
  if (cStack_51 == '\x01') {
    (**(code **)(param_3 + 0x20))(param_2,param_3);
  }
  FUN_1000b69f8(param_1,param_2,param_3);
  FUN_1000b66c4(0,*(undefined8 *)(lVar1 + 0x88));
  func_0x000107c6157c();
  FUN_1000b6858();
  return;
}



/* Entry: 1000d26e0; end: 1000d26fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d26e0(undefined1 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined1 *)(*(long *)(unaff_x20 + 0x20) + _DAT_113096b38);
  return;
}



/* Entry: 1000d26fc; end: 1000d273b;  */

undefined1 FUN_1000d26fc(void)

{
  if (lRam00000001137fc098 != -1) {
    FUN_10002a2fc(0x1137fc098,&PTR___NSConcreteGlobalBlock_110d663d8);
  }
  return uRam00000001137fc007;
}



/* Entry: 1000d273c; end: 1000d2743; -[SCCameraHardwareResourceImpl queuePerformer] */

undefined8 FUN_1000d273c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1000d2744; end: 1000d276f;  */

void FUN_1000d2744(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000d2770; end: 1000d2777;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d2770(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_113091b78);
  func_0x000107c615f0(uVar1);
  func_0x000107c61170(lStack_38);
  FUN_1000d27f0(0);
  func_0x000107c610f8();
  FUN_1000d29dc();
  *param_1 = uVar1;
  return;
}



/* Entry: 1000d2778; end: 1000d27ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d2778(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_113091b78);
  func_0x000107c615f0(uVar1);
  func_0x000107c61170(lStack_38);
  FUN_1000d27f0(0);
  func_0x000107c610f8();
  FUN_1000d29dc();
  *param_1 = uVar1;
  return;
}



/* Entry: 1000d27f0; end: 1000d285f;  */

void FUN_1000d27f0(void)

{
  func_0x000107c61168(&PTR_PTR_1127d7840);
  return;
}



/* Entry: 1000d2860; end: 1000d28af;  */

void FUN_1000d2860(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  func_0x000107c61574(unaff_x20[2]);
  (**(code **)(*(long *)(*(long *)(lVar1 + 0x50) + -8) + 8))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1000d28b0; end: 1000d29c7;  */

void FUN_1000d28b0(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  uVar1 = param_3 & 0xffffffffffff;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar1 = param_4 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
    puVar2 = &UNK_1103cdea8;
    func_0x000107c613fc(&UNK_1103cdea8,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    puVar3 = &UNK_1103cded0;
    func_0x000107c613fc(&UNK_1103cded0,0x38,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = param_1;
    *(undefined8 *)(puVar3 + 0x20) = param_2;
    *(ulong *)(puVar3 + 0x28) = param_3;
    *(ulong *)(puVar3 + 0x30) = param_4;
    uStack_60 = 0x100102234;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_1000f6b44;
    puStack_68 = &UNK_1103cdee8;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    puVar2 = puStack_58;
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_4);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar5);
    func_0x000107c60bd0(ppuVar4);
  }
  return;
}



/* Entry: 1000d29c8; end: 1000d29db;  */

void FUN_1000d29c8(long param_1,long param_2)

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



/* Entry: 1000d29dc; end: 1000d2a17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d29dc(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112da0628) = param_1;
  FUN_1000d27f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1000d2a18; end: 1000d2a3f; -[SCCaptureDeviceAuthorizationCheckerImpl cameraPermissionObservable] */

void FUN_1000d2a18(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1000d2a40; end: 1000d2a53;  */

void FUN_1000d2a40(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  FUN_100083b20(&uStack_68,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  uVar7 = uStack_68;
  FUN_100083b20(&uStack_68);
  func_0x000107c61574(uStack_68);
  uVar8 = uVar7;
  func_0x000107c446bc();
  func_0x000107c61180();
  FUN_10009cd10(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
  FUN_1000d2bc8(uVar8,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6);
  func_0x000107c61170(uVar7);
  *param_1 = uVar8;
  return;
}



/* Entry: 1000d2a54; end: 1000d2b5f;  */

void FUN_1000d2a54(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  uVar1 = uStack_68;
  FUN_100083b20(&uStack_68);
  func_0x000107c61574(uStack_68);
  uVar2 = uVar1;
  func_0x000107c446bc();
  func_0x000107c61180();
  FUN_10009cd10(0);
  func_0x000107c610f8();
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  FUN_1000d2bc8(uVar2,param_4,param_5,param_6,param_7,param_8,param_9);
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1000d2b60; end: 1000d2bc7; +[SCBlizzardSessionIdProvider initialize] */

void FUN_1000d2b60(undefined *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d0530;
  func_0x000107c61158();
  if (param_1 != puVar2) {
    return;
  }
  uRam00000001136c4ba8 = 0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e15c();
  func_0x000107c61180();
  uVar1 = puRam00000001136c4bb0;
  puRam00000001136c4bb0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1000d2bc8; end: 1000d2d33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d2bc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112da0d78) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da0d80) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da0d08) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da0d18) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da0d20) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da0d28) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da0d30) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da0d38) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da0d40) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da0d48) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da0d50) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da0d60) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da0d68) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da0d70) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da0d10) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112da0d58) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112da0d88) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112da0d90) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112da0d98) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112da0da0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112da0da8) = param_7;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1000d2d34; end: 1000d2d8f;  */

void FUN_1000d2d34(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000d2d90; end: 1000d2da3;  */

void FUN_1000d2d90(long param_1,long param_2)

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



/* Entry: 1000d2da4; end: 1000d2de3;  */

void FUN_1000d2da4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1000d2de4; end: 1000d2df7;  */

void FUN_1000d2de4(long param_1,long param_2)

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



/* Entry: 1000d2df8; end: 1000d2f87;  */

undefined8 FUN_1000d2df8(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  *param_1 = *param_1 + param_3;
  uVar2 = *(uint *)(param_1 + 9);
  uVar3 = (ulong)uVar2;
  if (param_3 + uVar3 < 0x20) {
    func_0x000107c610b4((long)param_1 + uVar3 + 0x28,param_2,param_3);
    uVar3 = (ulong)(uint)((int)param_1[9] + (int)param_3);
  }
  else {
    plVar1 = (long *)((long)param_2 + param_3);
    if (uVar2 != 0) {
      func_0x000107c610b4((long)param_1 + uVar3 + 0x28,param_2,0x20 - uVar2);
      uVar3 = param_1[1] + param_1[5] * -0x3d4d51c2d82b14b1;
      uVar4 = param_1[2] + param_1[6] * -0x3d4d51c2d82b14b1;
      param_1[1] = (uVar3 >> 0x21 | uVar3 * 0x80000000) * -0x61c8864e7a143579;
      param_1[2] = (uVar4 >> 0x21 | uVar4 * 0x80000000) * -0x61c8864e7a143579;
      uVar3 = param_1[3] + param_1[7] * -0x3d4d51c2d82b14b1;
      uVar4 = param_1[4] + param_1[8] * -0x3d4d51c2d82b14b1;
      param_1[3] = (uVar3 >> 0x21 | uVar3 * 0x80000000) * -0x61c8864e7a143579;
      param_1[4] = (uVar4 >> 0x21 | uVar4 * 0x80000000) * -0x61c8864e7a143579;
      param_2 = (long *)((long)param_2 + (ulong)(0x20 - (int)param_1[9]));
      *(undefined4 *)(param_1 + 9) = 0;
    }
    if (param_2 + 4 <= plVar1) {
      lVar7 = param_1[1];
      lVar9 = param_1[2];
      lVar6 = param_1[3];
      lVar5 = param_1[4];
      do {
        uVar4 = lVar7 + *param_2 * -0x3d4d51c2d82b14b1;
        uVar8 = lVar9 + param_2[1] * -0x3d4d51c2d82b14b1;
        uVar3 = lVar6 + param_2[2] * -0x3d4d51c2d82b14b1;
        lVar7 = (uVar4 >> 0x21 | uVar4 * 0x80000000) * -0x61c8864e7a143579;
        lVar9 = (uVar8 >> 0x21 | uVar8 * 0x80000000) * -0x61c8864e7a143579;
        lVar6 = (uVar3 >> 0x21 | uVar3 * 0x80000000) * -0x61c8864e7a143579;
        uVar3 = lVar5 + param_2[3] * -0x3d4d51c2d82b14b1;
        lVar5 = (uVar3 >> 0x21 | uVar3 * 0x80000000) * -0x61c8864e7a143579;
        param_2 = param_2 + 4;
      } while (param_2 <= plVar1 + -4);
      param_1[1] = lVar7;
      param_1[2] = lVar9;
      param_1[3] = lVar6;
      param_1[4] = lVar5;
    }
    if (plVar1 <= param_2) {
      return 0;
    }
    uVar3 = (long)plVar1 - (long)param_2;
    func_0x000107c610b4(param_1 + 5,param_2,uVar3);
  }
  *(int *)(param_1 + 9) = (int)uVar3;
  return 0;
}



/* Entry: 1000d2f88; end: 1000d3027; +[SCBlizzardSessionIdProvider addSessionIdDidChangeHandler:] */

/* WARNING: Possible PIC construction at 0x0001000d2fe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000d2ff8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000d2fe8) */

void FUN_1000d2f88(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  if (param_3 != 0) {
    func_0x000107c40794(param_3);
    func_0x000107c611ec(0x1136c4ba8);
    uVar1 = uRam00000001136c4bb0;
    func_0x000107c61184(param_3);
    func_0x000107c3d798(uVar1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1000d3028; end: 1000d32a7; -[SCCameraHardwareOperationFactory initWithCameraHardwareResource:managedCaptureSession:viewfinderRenderAgent:deviceCapacityAnalyzer:deviceSubjectAreaHandler:userPreferences:systemConfiguration:applicationState:featureStartupEventBus:appStartExperimentReader:captureDeviceManager:] */

undefined8 *
FUN_1000d3028(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  puStack_68 = PTR_PTR_1126e8a10;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[7];
    puVar1[7] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[8];
    puVar1[8] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[9];
    puVar1[9] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1000d32a8; end: 1000d32d3; +[SCBlizzard getSessionIdProvider] */

void FUN_1000d32a8(void)

{
  undefined8 uVar1;
  
  uVar1 = uRam00000001136c4b38;
  func_0x000107c61174(uRam00000001136c4b38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1000d32d4; end: 1000d34b7; -[SCCameraHardwareRequestHandler initWithCameraOperationFactory:hardwarePerformer:cameraPermissionObservable:] */

undefined8 *
FUN_1000d32d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_1126e8a18;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126b9d68;
    func_0x000107c4f7f8();
    func_0x000107c61180();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[6];
    puVar1[6] = param_4;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    func_0x000107c61170(uVar2);
    puVar1[7] = 0;
    puVar3 = PTR_PTR_1126b9d70;
    func_0x000107c41dc4();
    func_0x000107c61180();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_58,puVar1);
    func_0x000107c6111c(auStack_60,auStack_58);
    uVar2 = param_5;
    func_0x000107c5c320(param_5);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_60);
    func_0x000107c61120(auStack_58);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1000d34b8; end: 1000d3573; +[SCCameraHardwareRequestHandler queueWithPerformer:] */

void FUN_1000d34b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  lVar2 = lRam00000001136bc7b0;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1000d3574;
  puStack_40 = &UNK_110842e18;
  uStack_38 = param_3;
  func_0x000107c61174(param_3);
  uVar3 = param_3;
  if (lVar2 != -1) {
    FUN_10002a2fc(0x1136bc7b0,&puStack_58);
    uVar3 = uStack_38;
  }
  uVar1 = uRam00000001136bc7a8;
  func_0x000107c61174(uRam00000001136bc7a8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1000d3574; end: 1000d35eb;  */

/* WARNING: Possible PIC construction at 0x0001000d35a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000d35a4) */

void FUN_1000d3574(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x000107c61160();
  uVar1 = puRam00000001136bc7a8;
  puRam00000001136bc7a8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1000d35ec; end: 1000d3613;  */

void FUN_1000d35ec(void)

{
  undefined1 uVar1;
  
  uVar1 = 0xb8;
  FUN_100069c44(&PTR____CFConstantStringClassReference_110f985b8,0);
  uRam00000001137fc007 = uVar1;
  return;
}



/* Entry: 1000d3614; end: 1000d367b;  */

void FUN_1000d3614(long param_1)

{
  FUN_1000d2374();
  func_0x000107c61574(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x28,7);
  return;
}



/* Entry: 1000d367c; end: 1000d3703; +[SCAttributedBlockOperationProvider sharedProvider] */

void FUN_1000d367c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f3ff8 != -1) {
    FUN_10002a2fc(0x1137f3ff8,&PTR___NSConcreteGlobalBlock_110cb7940);
  }
  uVar1 = uRam00000001137f3ff0;
  func_0x000107c61174(uRam00000001137f3ff0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1000d3704; end: 1000d376f;  */

void FUN_1000d3704(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000d3770; end: 1000d37bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d3770(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_11307d7d0) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1000d37bc; end: 1000d37c3;  */

void FUN_1000d37bc(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [40];
  
  FUN_100083b20(auStack_58,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(auStack_80);
  FUN_1000a1704(0);
  func_0x000107c610f8();
  puVar1 = auStack_58;
  FUN_1000d7890(puVar1,auStack_80);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1000d37c4; end: 1000d382b;  */

void FUN_1000d37c4(long *param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [40];
  
  FUN_100083b20(auStack_58);
  FUN_100083b20(auStack_80);
  FUN_1000a1704(0);
  func_0x000107c610f8();
  puVar1 = auStack_58;
  FUN_1000d7890(puVar1,auStack_80);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1000d382c; end: 1000d383b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d382c(undefined8 *param_1)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong *puVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 *puVar18;
  long extraout_x8;
  long extraout_x8_00;
  long lVar19;
  long extraout_x8_01;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong *puVar22;
  ulong auStack_230 [6];
  undefined1 auStack_200 [8];
  undefined8 auStack_1f8 [3];
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  uint uStack_1bc;
  undefined8 *puStack_1b8;
  uint uStack_1ac;
  ulong uStack_1a8;
  undefined4 uStack_19c;
  uint uStack_198;
  uint uStack_194;
  ulong *puStack_190;
  uint uStack_184;
  uint uStack_180;
  undefined4 uStack_17c;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 *apuStack_d8 [3];
  undefined8 *puStack_c0;
  undefined **ppuStack_b8;
  undefined1 uStack_98;
  undefined7 uStack_97;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  puStack_190 = *(ulong **)(unaff_x20 + 0x38);
  lVar17 = 0x112da1570;
  puStack_128 = param_1;
  FUN_1000285a8(0x112da1570,&UNK_10d944870,*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar17 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = 0x112da1578;
  lStack_138 = (long)&uStack_1e0 - extraout_x8;
  FUN_1000285a8(0x112da1578,&UNK_10dcd5b50);
  lStack_158 = *(long *)(lVar17 + -8);
  lStack_150 = lVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_158 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = ((long)&uStack_1e0 - extraout_x8) - extraout_x8_00;
  lVar17 = 0x112da1580;
  lStack_140 = lVar19;
  FUN_1000285a8(0x112da1580,&UNK_10d944880);
  lStack_100 = *(long *)(lVar17 + -8);
  lStack_f8 = lVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_100 + 0x40));
  lVar19 = lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_148 = lVar19;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar19 - extraout_x12;
  FUN_100083b20(&uStack_98);
  lVar17 = CONCAT71(uStack_97,uStack_98);
  FUN_100083b20(&uStack_98);
  uVar20 = CONCAT71(uStack_97,uStack_98);
  uVar6 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef83d80);
  uVar21 = uVar20;
  func_0x000107c3ebd4();
  pcStack_178 = (code *)CONCAT44(pcStack_178._4_4_,(int)uVar21);
  func_0x000107c61170(uVar6);
  FUN_1000285a8(0x112da1588,&UNK_10db4ed90);
  FUN_100083b20(&uStack_98);
  uVar6 = CONCAT71(uStack_97,uStack_98);
  uVar21 = uVar6;
  func_0x000107c4141c();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  uVar6 = uVar21;
  func_0x000107c41424();
  func_0x000107c61180();
  func_0x000107c615e8(uVar21);
  uVar21 = uVar6;
  func_0x0001000b637c();
  uStack_118 = uVar21;
  func_0x000107c61170(uVar6);
  FUN_1000285a8(0x112da1590,&UNK_10d944890);
  FUN_100083b20(&uStack_98);
  lVar3 = CONCAT71(uStack_97,uStack_98);
  uVar21 = *(undefined8 *)(lVar3 + _DAT_113097748);
  func_0x000107c615f0(uVar21);
  func_0x000107c61170(lVar3);
  uVar6 = uVar21;
  func_0x000107c40fa4();
  func_0x000107c61180();
  func_0x000107c615e8(uVar21);
  uVar21 = uVar6;
  func_0x0001000b637c();
  uStack_120 = uVar21;
  func_0x000107c61170(uVar6);
  FUN_1000285a8(0x112da1598,&UNK_10d9d0cd0);
  FUN_100083b20(&uStack_98);
  lVar3 = CONCAT71(uStack_97,uStack_98);
  uVar21 = *(undefined8 *)(lVar3 + _DAT_11307cc98);
  func_0x000107c615f0(uVar21);
  func_0x000107c61170(lVar3);
  uVar6 = uVar21;
  func_0x000107c438e4();
  func_0x000107c61180();
  func_0x000107c615e8(uVar21);
  uVar21 = uVar6;
  func_0x0001000b637c();
  func_0x000107c61170(uVar6);
  uVar6 = 0x112da15a0;
  FUN_1000285a8(0x112da15a0,&UNK_10d9448a0);
  FUN_1000d46b0();
  uVar11 = uVar6;
  func_0x0001000b637c();
  func_0x000107c61170(uVar6);
  FUN_1000285a8(0x112d51030,&UNK_10d917a40);
  uVar6 = *(undefined8 *)(lVar17 + _DAT_113091b70);
  lStack_130 = lVar17;
  func_0x000107c41b80();
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x0001000b637c();
  func_0x000107c61170(uVar6);
  uVar6 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010ef83da0);
  uStack_110 = uVar20;
  func_0x000107c4980c(uVar20);
  func_0x000107c61170(uVar6);
  puVar8 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar9 = puVar8;
  func_0x000107c3dfc0();
  func_0x000107c61170(puVar8);
  puVar10 = (undefined8 *)0x0;
  if (puVar9 != (undefined *)0x2) {
    func_0x0001000d46c0();
    puVar10 = (undefined8 *)*puVar10;
  }
  uStack_168 = uVar11;
  uStack_160 = uVar21;
  FUN_1000d46cc(lVar19,puVar10,(uint)uVar20 & ((int)(uint)uVar20 >> 0x1f ^ 0xffffffffU),uVar11,uVar7
                ,uVar21);
  uVar21 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef83dd0);
  uVar20 = uStack_110;
  uVar6 = uStack_110;
  func_0x000107c4980c();
  uStack_180 = (uint)uVar6;
  func_0x000107c61170(uVar21);
  uVar6 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010ef83df0);
  uVar21 = uVar20;
  func_0x000107c4980c();
  uStack_184 = (uint)uVar21;
  func_0x000107c61170(uVar6);
  uVar6 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef83e20);
  uVar21 = uVar20;
  func_0x000107c4980c();
  uStack_194 = (uint)uVar21;
  func_0x000107c61170(uVar6);
  uVar21 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef83e50);
  uVar6 = uVar20;
  func_0x000107c3ebd4();
  uStack_17c = (undefined4)uVar6;
  func_0x000107c61170(uVar21);
  uVar6 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef83e70);
  uVar21 = uVar20;
  func_0x000107c4980c();
  func_0x000107c61170(uVar6);
  uVar11 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef83e90);
  uVar6 = uVar20;
  func_0x000107c4980c();
  uStack_198 = (uint)uVar6;
  func_0x000107c61170(uVar11);
  uVar6 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef83eb0);
  uVar11 = uVar20;
  func_0x000107c4980c();
  uStack_1a8 = CONCAT44(uStack_1a8._4_4_,(int)uVar11);
  func_0x000107c61170(uVar6);
  uVar6 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef83ed0);
  uVar11 = uVar20;
  func_0x000107c4980c();
  func_0x000107c61170(uVar6);
  uVar6 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010ef83f00);
  uVar12 = uVar20;
  func_0x000107c4980c();
  func_0x000107c61170(uVar6);
  uVar6 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef83f20);
  uVar13 = uVar20;
  func_0x000107c4980c();
  func_0x000107c61170(uVar6);
  uVar14 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef83f40);
  uVar6 = uVar20;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar14);
  puVar15 = (ulong *)0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010ef83f60);
  func_0x000107c3ebd4();
  uStack_19c = (undefined4)uVar20;
  func_0x000107c61170();
  puVar16 = puVar15;
  puVar22 = (ulong *)0x0;
  if ((int)uVar6 != 0) {
    FUN_100083b20(&uStack_98);
    puVar16 = (ulong *)CONCAT71(uStack_97,uStack_98);
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar16) + 0x58))();
    func_0x000107c61170();
    puVar22 = puVar15;
  }
  func_0x0001000d4e14();
  puStack_190 = puVar22;
  uStack_170 = uVar7;
  lStack_108 = lVar19;
  if (*(char *)(*puVar16 + _DAT_11307c8d0) == '\x01') {
    func_0x0001000d4e54();
  }
  else {
    func_0x0001040bebd0();
  }
  func_0x000107c61428();
  puStack_1b8 = (undefined8 *)*puVar16;
  uStack_1c8 = puVar16[2];
  uStack_1ac = (uint)(byte)puVar16[3];
  uStack_1bc = (uint)(byte)puVar16[1];
  func_0x000107c61434();
  uStack_1d0 = (ulong)((uint)uVar13 & ((int)(uint)uVar13 >> 0x1f ^ 0xffffffffU));
  uStack_1d8 = (ulong)((uint)uVar12 & ((int)(uint)uVar12 >> 0x1f ^ 0xffffffffU));
  uStack_1e0 = (ulong)((uint)uVar11 & ((int)(uint)uVar11 >> 0x1f ^ 0xffffffffU));
  uStack_1a8 = (ulong)((uint)uStack_1a8 & ((int)(uint)uStack_1a8 >> 0x1f ^ 0xffffffffU));
  uStack_78 = (ulong)(uStack_198 & ((int)uStack_198 >> 0x1f ^ 0xffffffffU));
  uStack_70 = (ulong)((uint)uVar21 & ((int)(uint)uVar21 >> 0x1f ^ 0xffffffffU));
  uStack_80 = (ulong)(uStack_194 & ((int)uStack_194 >> 0x1f ^ 0xffffffffU));
  uStack_88 = (ulong)(uStack_184 & ((int)uStack_184 >> 0x1f ^ 0xffffffffU));
  pcVar1 = FUN_1000f3668;
  if ((int)pcStack_178 == 0) {
    pcVar1 = (code *)0x0;
  }
  uVar2 = uStack_180 & ((int)uStack_180 >> 0x1f ^ 0xffffffffU);
  lVar17 = 0;
  pcStack_178 = pcVar1;
  FUN_1000c2ae4(0);
  FUN_1000d4f60();
  lVar3 = lStack_140;
  (**(code **)(lStack_158 + 0x10))(lStack_140,lVar17 + _DAT_113813110,lStack_150);
  func_0x000107c61574(lVar17);
  lVar5 = lStack_138;
  FUN_1000d4fa0(lStack_138,uStack_120,uStack_118);
  lVar17 = lStack_148;
  (**(code **)(lStack_100 + 0x10))(lStack_148,lStack_108,lStack_f8);
  puVar18 = (undefined8 *)0x0;
  FUN_1000d5f48();
  puVar10 = puVar18;
  func_0x000107c613fc();
  FUN_1000d6158();
  puVar15 = puStack_190;
  ppuStack_b8 = &PTR_DAT_110744600;
  uStack_98 = (undefined1)uStack_17c;
  puVar16 = puStack_190;
  apuStack_d8[0] = puVar10;
  puStack_c0 = puVar18;
  uStack_90 = (ulong)uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar6 = 0;
  func_0x0001000d6180();
  func_0x000107c613fc();
  *(undefined8 *)(lVar19 + -0x10) = 0;
  *(code **)(lVar19 + -0x18) = pcStack_178;
  *(char *)(lVar19 + -0x20) = (char)uStack_19c;
  *(ulong **)(lVar19 + -0x28) = puVar16;
  *(ulong *)(lVar19 + -0x30) = uStack_1d0;
  *(ulong *)(lVar19 + -0x38) = uStack_1d8;
  *(ulong *)(lVar19 + -0x40) = uStack_1e0;
  uVar4 = uStack_1a8;
  *(undefined1 **)(lVar19 + -0x50) = &uStack_98;
  *(ulong *)(lVar19 + -0x48) = uVar4;
  puVar18 = puStack_1b8;
  FUN_1000d61a0(puStack_1b8,uStack_1bc,uStack_1c8,uStack_1ac,lVar3,lVar5,lVar17,apuStack_d8);
  puVar10 = puVar18;
  func_0x0001000aca5c();
  func_0x000107c61428();
  uVar20 = *puVar10;
  ppuStack_b8 = &PTR_DAT_1107449c8;
  apuStack_d8[0] = puVar18;
  puStack_c0 = (undefined8 *)uVar6;
  func_0x000107c6157c(uVar20);
  func_0x000107c6157c(puVar18);
  FUN_1000d6e24(apuStack_d8);
  func_0x000107c61574(uVar20);
  func_0x0001000834e4(apuStack_d8);
  func_0x000107c61428(puVar10,apuStack_d8,0,0);
  uVar20 = *puVar10;
  uVar6 = 0;
  FUN_1000acbe4();
  puVar10 = puStack_128;
  puStack_128[3] = uVar6;
  puStack_128[4] = &PTR_DAT_1107ad508;
  func_0x000107c6157c(uVar20);
  func_0x000107c61574(uStack_118);
  func_0x000107c61574(uStack_120);
  func_0x000107c61574(uStack_160);
  func_0x000107c61574(uStack_168);
  func_0x000107c61574(uStack_170);
  *puVar10 = uVar20;
  func_0x000107c61170(puVar15);
  func_0x000107c61574(puVar18);
  func_0x000107c615e8(uStack_110);
  func_0x000107c61170(lStack_130);
  (**(code **)(lStack_100 + 8))(lStack_108,lStack_f8);
  return;
}



/* Entry: 1000d383c; end: 1000d439f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d383c(undefined8 *param_1)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong *puVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 in_x5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar19;
  long extraout_x8_01;
  long extraout_x12;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong *puVar22;
  ulong auStack_230 [6];
  undefined1 auStack_200 [8];
  undefined8 auStack_1f8 [3];
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  uint uStack_1bc;
  undefined8 *puStack_1b8;
  uint uStack_1ac;
  ulong uStack_1a8;
  undefined4 uStack_19c;
  uint uStack_198;
  uint uStack_194;
  ulong *puStack_190;
  uint uStack_184;
  uint uStack_180;
  undefined4 uStack_17c;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 *apuStack_d8 [3];
  undefined8 *puStack_c0;
  undefined **ppuStack_b8;
  undefined1 uStack_98;
  undefined7 uStack_97;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  lVar17 = 0x112da1570;
  puStack_190 = (ulong *)in_x5;
  puStack_128 = param_1;
  FUN_1000285a8(0x112da1570,&UNK_10d944870);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar17 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = 0x112da1578;
  lStack_138 = (long)&uStack_1e0 - extraout_x8;
  FUN_1000285a8(0x112da1578,&UNK_10dcd5b50);
  lStack_158 = *(long *)(lVar17 + -8);
  lStack_150 = lVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_158 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = ((long)&uStack_1e0 - extraout_x8) - extraout_x8_00;
  lVar17 = 0x112da1580;
  lStack_140 = lVar19;
  FUN_1000285a8(0x112da1580,&UNK_10d944880);
  lStack_100 = *(long *)(lVar17 + -8);
  lStack_f8 = lVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_100 + 0x40));
  lVar19 = lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_148 = lVar19;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar19 - extraout_x12;
  FUN_100083b20(&uStack_98);
  lVar17 = CONCAT71(uStack_97,uStack_98);
  FUN_100083b20(&uStack_98);
  uVar20 = CONCAT71(uStack_97,uStack_98);
  uVar6 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef83d80);
  uVar21 = uVar20;
  func_0x000107c3ebd4();
  pcStack_178 = (code *)CONCAT44(pcStack_178._4_4_,(int)uVar21);
  func_0x000107c61170(uVar6);
  FUN_1000285a8(0x112da1588,&UNK_10db4ed90);
  FUN_100083b20(&uStack_98);
  uVar6 = CONCAT71(uStack_97,uStack_98);
  uVar21 = uVar6;
  func_0x000107c4141c();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  uVar6 = uVar21;
  func_0x000107c41424();
  func_0x000107c61180();
  func_0x000107c615e8(uVar21);
  uVar21 = uVar6;
  func_0x0001000b637c();
  uStack_118 = uVar21;
  func_0x000107c61170(uVar6);
  FUN_1000285a8(0x112da1590,&UNK_10d944890);
  FUN_100083b20(&uStack_98);
  lVar3 = CONCAT71(uStack_97,uStack_98);
  uVar21 = *(undefined8 *)(lVar3 + _DAT_113097748);
  func_0x000107c615f0(uVar21);
  func_0x000107c61170(lVar3);
  uVar6 = uVar21;
  func_0x000107c40fa4();
  func_0x000107c61180();
  func_0x000107c615e8(uVar21);
  uVar21 = uVar6;
  func_0x0001000b637c();
  uStack_120 = uVar21;
  func_0x000107c61170(uVar6);
  FUN_1000285a8(0x112da1598,&UNK_10d9d0cd0);
  FUN_100083b20(&uStack_98);
  lVar3 = CONCAT71(uStack_97,uStack_98);
  uVar21 = *(undefined8 *)(lVar3 + _DAT_11307cc98);
  func_0x000107c615f0(uVar21);
  func_0x000107c61170(lVar3);
  uVar6 = uVar21;
  func_0x000107c438e4();
  func_0x000107c61180();
  func_0x000107c615e8(uVar21);
  uVar21 = uVar6;
  func_0x0001000b637c();
  func_0x000107c61170(uVar6);
  uVar6 = 0x112da15a0;
  FUN_1000285a8(0x112da15a0,&UNK_10d9448a0);
  FUN_1000d46b0();
  uVar11 = uVar6;
  func_0x0001000b637c();
  func_0x000107c61170(uVar6);
  FUN_1000285a8(0x112d51030,&UNK_10d917a40);
  uVar6 = *(undefined8 *)(lVar17 + _DAT_113091b70);
  lStack_130 = lVar17;
  func_0x000107c41b80();
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x0001000b637c();
  func_0x000107c61170(uVar6);
  uVar6 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010ef83da0);
  uStack_110 = uVar20;
  func_0x000107c4980c(uVar20);
  func_0x000107c61170(uVar6);
  puVar8 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar9 = puVar8;
  func_0x000107c3dfc0();
  func_0x000107c61170(puVar8);
  puVar10 = (undefined8 *)0x0;
  if (puVar9 != (undefined *)0x2) {
    func_0x0001000d46c0();
    puVar10 = (undefined8 *)*puVar10;
  }
  uStack_168 = uVar11;
  uStack_160 = uVar21;
  FUN_1000d46cc(lVar19,puVar10,(uint)uVar20 & ((int)(uint)uVar20 >> 0x1f ^ 0xffffffffU),uVar11,uVar7
                ,uVar21);
  uVar21 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef83dd0);
  uVar20 = uStack_110;
  uVar6 = uStack_110;
  func_0x000107c4980c();
  uStack_180 = (uint)uVar6;
  func_0x000107c61170(uVar21);
  uVar6 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010ef83df0);
  uVar21 = uVar20;
  func_0x000107c4980c();
  uStack_184 = (uint)uVar21;
  func_0x000107c61170(uVar6);
  uVar6 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef83e20);
  uVar21 = uVar20;
  func_0x000107c4980c();
  uStack_194 = (uint)uVar21;
  func_0x000107c61170(uVar6);
  uVar21 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef83e50);
  uVar6 = uVar20;
  func_0x000107c3ebd4();
  uStack_17c = (undefined4)uVar6;
  func_0x000107c61170(uVar21);
  uVar6 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef83e70);
  uVar21 = uVar20;
  func_0x000107c4980c();
  func_0x000107c61170(uVar6);
  uVar11 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef83e90);
  uVar6 = uVar20;
  func_0x000107c4980c();
  uStack_198 = (uint)uVar6;
  func_0x000107c61170(uVar11);
  uVar6 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef83eb0);
  uVar11 = uVar20;
  func_0x000107c4980c();
  uStack_1a8 = CONCAT44(uStack_1a8._4_4_,(int)uVar11);
  func_0x000107c61170(uVar6);
  uVar6 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef83ed0);
  uVar11 = uVar20;
  func_0x000107c4980c();
  func_0x000107c61170(uVar6);
  uVar6 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010ef83f00);
  uVar12 = uVar20;
  func_0x000107c4980c();
  func_0x000107c61170(uVar6);
  uVar6 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef83f20);
  uVar13 = uVar20;
  func_0x000107c4980c();
  func_0x000107c61170(uVar6);
  uVar14 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef83f40);
  uVar6 = uVar20;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar14);
  puVar15 = (ulong *)0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010ef83f60);
  func_0x000107c3ebd4();
  uStack_19c = (undefined4)uVar20;
  func_0x000107c61170();
  puVar16 = puVar15;
  puVar22 = (ulong *)0x0;
  if ((int)uVar6 != 0) {
    FUN_100083b20(&uStack_98);
    puVar16 = (ulong *)CONCAT71(uStack_97,uStack_98);
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar16) + 0x58))();
    func_0x000107c61170();
    puVar22 = puVar15;
  }
  func_0x0001000d4e14();
  puStack_190 = puVar22;
  uStack_170 = uVar7;
  lStack_108 = lVar19;
  if (*(char *)(*puVar16 + _DAT_11307c8d0) == '\x01') {
    func_0x0001000d4e54();
  }
  else {
    func_0x0001040bebd0();
  }
  func_0x000107c61428();
  puStack_1b8 = (undefined8 *)*puVar16;
  uStack_1c8 = puVar16[2];
  uStack_1ac = (uint)(byte)puVar16[3];
  uStack_1bc = (uint)(byte)puVar16[1];
  func_0x000107c61434();
  uStack_1d0 = (ulong)((uint)uVar13 & ((int)(uint)uVar13 >> 0x1f ^ 0xffffffffU));
  uStack_1d8 = (ulong)((uint)uVar12 & ((int)(uint)uVar12 >> 0x1f ^ 0xffffffffU));
  uStack_1e0 = (ulong)((uint)uVar11 & ((int)(uint)uVar11 >> 0x1f ^ 0xffffffffU));
  uStack_1a8 = (ulong)((uint)uStack_1a8 & ((int)(uint)uStack_1a8 >> 0x1f ^ 0xffffffffU));
  uStack_78 = (ulong)(uStack_198 & ((int)uStack_198 >> 0x1f ^ 0xffffffffU));
  uStack_70 = (ulong)((uint)uVar21 & ((int)(uint)uVar21 >> 0x1f ^ 0xffffffffU));
  uStack_80 = (ulong)(uStack_194 & ((int)uStack_194 >> 0x1f ^ 0xffffffffU));
  uStack_88 = (ulong)(uStack_184 & ((int)uStack_184 >> 0x1f ^ 0xffffffffU));
  pcVar1 = FUN_1000f3668;
  if ((int)pcStack_178 == 0) {
    pcVar1 = (code *)0x0;
  }
  uVar2 = uStack_180 & ((int)uStack_180 >> 0x1f ^ 0xffffffffU);
  lVar17 = 0;
  pcStack_178 = pcVar1;
  FUN_1000c2ae4(0);
  FUN_1000d4f60();
  lVar3 = lStack_140;
  (**(code **)(lStack_158 + 0x10))(lStack_140,lVar17 + _DAT_113813110,lStack_150);
  func_0x000107c61574(lVar17);
  lVar5 = lStack_138;
  FUN_1000d4fa0(lStack_138,uStack_120,uStack_118);
  lVar17 = lStack_148;
  (**(code **)(lStack_100 + 0x10))(lStack_148,lStack_108,lStack_f8);
  puVar18 = (undefined8 *)0x0;
  FUN_1000d5f48();
  puVar10 = puVar18;
  func_0x000107c613fc();
  FUN_1000d6158();
  puVar15 = puStack_190;
  ppuStack_b8 = &PTR_DAT_110744600;
  uStack_98 = (undefined1)uStack_17c;
  puVar16 = puStack_190;
  apuStack_d8[0] = puVar10;
  puStack_c0 = puVar18;
  uStack_90 = (ulong)uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar6 = 0;
  func_0x0001000d6180();
  func_0x000107c613fc();
  *(undefined8 *)(lVar19 + -0x10) = 0;
  *(code **)(lVar19 + -0x18) = pcStack_178;
  *(char *)(lVar19 + -0x20) = (char)uStack_19c;
  *(ulong **)(lVar19 + -0x28) = puVar16;
  *(ulong *)(lVar19 + -0x30) = uStack_1d0;
  *(ulong *)(lVar19 + -0x38) = uStack_1d8;
  *(ulong *)(lVar19 + -0x40) = uStack_1e0;
  uVar4 = uStack_1a8;
  *(undefined1 **)(lVar19 + -0x50) = &uStack_98;
  *(ulong *)(lVar19 + -0x48) = uVar4;
  puVar18 = puStack_1b8;
  FUN_1000d61a0(puStack_1b8,uStack_1bc,uStack_1c8,uStack_1ac,lVar3,lVar5,lVar17,apuStack_d8);
  puVar10 = puVar18;
  func_0x0001000aca5c();
  func_0x000107c61428();
  uVar20 = *puVar10;
  ppuStack_b8 = &PTR_DAT_1107449c8;
  apuStack_d8[0] = puVar18;
  puStack_c0 = (undefined8 *)uVar6;
  func_0x000107c6157c(uVar20);
  func_0x000107c6157c(puVar18);
  FUN_1000d6e24(apuStack_d8);
  func_0x000107c61574(uVar20);
  func_0x0001000834e4(apuStack_d8);
  func_0x000107c61428(puVar10,apuStack_d8,0,0);
  uVar20 = *puVar10;
  uVar6 = 0;
  FUN_1000acbe4();
  puVar10 = puStack_128;
  puStack_128[3] = uVar6;
  puStack_128[4] = &PTR_DAT_1107ad508;
  func_0x000107c6157c(uVar20);
  func_0x000107c61574(uStack_118);
  func_0x000107c61574(uStack_120);
  func_0x000107c61574(uStack_160);
  func_0x000107c61574(uStack_168);
  func_0x000107c61574(uStack_170);
  *puVar10 = uVar20;
  func_0x000107c61170(puVar15);
  func_0x000107c61574(puVar18);
  func_0x000107c615e8(uStack_110);
  func_0x000107c61170(lStack_130);
  (**(code **)(lStack_100 + 8))(lStack_108,lStack_f8);
  return;
}



/* Entry: 1000d43a0; end: 1000d443f; -[SCQueuePerformer queue] */

void FUN_1000d43a0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b6b18;
  func_0x000107c5a9bc(PTR_PTR_1126b6b18);
  func_0x000107c61180();
  func_0x000107c5d35c();
  func_0x000107c61170(puVar1);
  func_0x000107c611ec(param_1 + 0x44);
  *(undefined1 *)(param_1 + 0x40) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c60f5c(uVar2,0);
  if ((int)uVar2 != *(int *)(param_1 + 0x28)) {
    func_0x000107c3c58c(param_1);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x000107c611f0(param_1 + 0x44);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1000d4440; end: 1000d44f7; -[SCContextAwareQueuePerformerThrottler unregisterPerformer:withCompletionHandler:] */

void FUN_1000d4440(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1000d7b00;
  puStack_50 = &UNK_11084a9e8;
  uStack_48 = param_3;
  lStack_40 = param_1;
  uStack_38 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  FUN_10007380c(uVar1,&puStack_68);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1000d44f8; end: 1000d4533;  */

void FUN_1000d44f8(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),7);
  return;
}



/* Entry: 1000d4534; end: 1000d453b;  */

void FUN_1000d4534(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  puVar1 = PTR_PTR_1126adce0;
  func_0x000107c610f8();
  func_0x000107c46434();
  func_0x000107c615e8(uStack_38);
  *param_1 = puVar1;
  return;
}



/* Entry: 1000d453c; end: 1000d459b;  */

void FUN_1000d453c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  puVar1 = PTR_PTR_1126adce0;
  func_0x000107c610f8();
  func_0x000107c46434();
  func_0x000107c615e8(uStack_38);
  *param_1 = puVar1;
  return;
}



/* Entry: 1000d459c; end: 1000d460f; -[SCDeckServices initWithDeckService:] */

undefined1 * FUN_1000d459c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112706090;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000d4610; end: 1000d461f; -[SCDeckServices deckService] */

undefined8 FUN_1000d4610(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1000d4620; end: 1000d4673;  */

void FUN_1000d4620(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  uVar1 = 0;
  FUN_100093164(0);
  func_0x000107c610f8();
  FUN_1000d4674(uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1000d4674; end: 1000d46af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d4674(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_113097748) = param_1;
  FUN_100093164();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1000d46b0; end: 1000d46cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d46b0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + _DAT_113091bd8));
  return;
}



/* Entry: 1000d46cc; end: 1000d4c0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d46cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long alStack_c0 [2];
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  long *plStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  long *plStack_80;
  code *pcStack_78;
  long lStack_70;
  code *pcStack_68;
  
  lVar3 = 0x1130605d8;
  puStack_88 = (undefined8 *)param_4;
  plStack_80 = param_5;
  pcStack_78 = (code *)param_3;
  pcStack_68 = (code *)param_2;
  FUN_1000285a8(0x1130605d8,&UNK_10dcd5b00);
  lVar13 = *(long *)(lVar3 + -8);
  lVar14 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar14 + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)alStack_c0 - extraout_x8;
  lVar9 = 0x112e008e0;
  FUN_1000285a8(0x112e008e0,&UNK_10dad6870);
  lVar11 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = (undefined8 *)(lVar8 - extraout_x8_00);
  *puVar17 = 1;
  (**(code **)(lVar11 + 0x68))
            (puVar17,*(undefined4 *)
                      PTR___sScS12ContinuationV15BufferingPolicyO15bufferingNewestyADyx__GSicAFmlFWC_11034fd18
             ,lVar9);
  iVar2 = 2;
  FUN_100029b9c(2,0x11,0,0);
  if (iVar2 == 0) {
    func_0x0001040b9e44(param_1,lVar8,puVar17);
  }
  else {
    func_0x000107c5fd10(param_1,lVar8,PTR___sSbN_11034dd40,puVar17,PTR___sSbN_11034dd40);
  }
  (**(code **)(lVar11 + 8))(puVar17,lVar9);
  plVar4 = (long *)&UNK_100c7c574;
  FUN_1000bfde0(&UNK_100c7c574,0,&UNK_110775810);
  lVar11 = 0;
  FUN_1000d4c18();
  func_0x000107c613fc();
  *(undefined8 *)(lVar11 + _DAT_113060460) = 0;
  *(undefined8 *)(lVar11 + _DAT_113060468) = 0;
  *(code **)(lVar11 + _DAT_113060470) = pcStack_68;
  pcVar15 = *(code **)(lVar13 + 0x10);
  lStack_70 = lVar8;
  (*pcVar15)(lVar11 + _DAT_113060450,lVar8,lVar3);
  *(code **)(lVar11 + _DAT_113060458) = pcStack_78;
  uVar5 = 0;
  pcStack_68 = pcVar15;
  func_0x0001000c6560();
  func_0x000107c613fc();
  FUN_1000c6580();
  puStack_b0 = puVar17;
  uStack_a8 = uVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_a0 = lVar14 + 0xfU & 0xfffffffffffffff0;
  lVar9 = (long)puVar17 - uStack_a0;
  (*pcVar15)(lVar9,lVar8,lVar3);
  uVar16 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar12 = uVar16 + 0x10 & (uVar16 ^ 0xffffffffffffffff);
  puVar6 = &UNK_1107444f8;
  lStack_90 = lVar13;
  func_0x000107c613fc(&UNK_1107444f8,uVar12 + lVar14,uVar16 | 7);
  pcStack_78 = *(code **)(lVar13 + 0x20);
  (*pcStack_78)(puVar6 + uVar12,lVar9,lVar3);
  pcVar15 = *(code **)(*plVar4 + 0x70);
  plStack_98 = plVar4;
  func_0x000107c6157c(lVar11);
  puVar7 = &UNK_100c7c6fc;
  lVar9 = lVar11;
  (*pcVar15)(&UNK_100c7c6fc,lVar11,&UNK_1040ba064,puVar6);
  func_0x000107c61574(lVar11);
  func_0x000107c61574(puVar6);
  puVar17 = puStack_b0;
  puVar6 = puVar7;
  func_0x000107c614f0(puVar7);
  (**(code **)(lVar9 + 0x10))(uVar5,puVar6,lVar9);
  func_0x000107c615e8(puVar7);
  plVar4 = (long *)&UNK_1040b922c;
  FUN_1000bfde0(&UNK_1040b922c,0,PTR___sSbN_11034dd40);
  puStack_88 = puVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar1 = uStack_a0;
  lVar9 = (long)puVar17 - uStack_a0;
  alStack_c0[1] = lVar3;
  (*pcStack_68)(lVar9,lStack_70,lVar3);
  puVar6 = &UNK_110744520;
  func_0x000107c613fc(&UNK_110744520,uVar12 + lVar14,uVar16 | 7);
  (*pcStack_78)(puVar6 + uVar12,lVar9,lVar3);
  pcVar15 = *(code **)(*plVar4 + 0x70);
  func_0x000107c6157c(lVar11);
  puVar7 = &UNK_1040ba070;
  lVar3 = lVar11;
  (*pcVar15)(&UNK_1040ba070,lVar11,&UNK_1040ba078,puVar6);
  func_0x000107c61574(plVar4);
  func_0x000107c61574(lVar11);
  func_0x000107c61574(puVar6);
  puVar17 = puStack_88;
  puVar6 = puVar7;
  func_0x000107c614f0(puVar7);
  uVar5 = uStack_a8;
  (**(code **)(lVar3 + 0x10))(uStack_a8,puVar6,lVar3);
  func_0x000107c615e8(puVar7);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lStack_70;
  lVar3 = alStack_c0[1];
  (*pcStack_68)((long)puVar17 - uVar1,lStack_70,alStack_c0[1]);
  puVar6 = &UNK_110744548;
  func_0x000107c613fc(&UNK_110744548,uVar12 + lVar14,uVar16 | 7);
  (*pcStack_78)(puVar6 + uVar12,(long)puVar17 - uVar1,lVar3);
  pcVar15 = *(code **)(*plStack_80 + 0x70);
  func_0x000107c6157c(lVar11);
  puVar7 = &UNK_1040ba084;
  lVar8 = lVar11;
  (*pcVar15)(&UNK_1040ba084,lVar11,&UNK_1040ba0f0,puVar6);
  func_0x000107c61574(lVar11);
  func_0x000107c61574(puVar6);
  puVar6 = puVar7;
  func_0x000107c614f0(puVar7);
  (**(code **)(lVar8 + 0x10))(uVar5,puVar6,lVar8);
  func_0x000107c615e8(puVar7);
  uVar10 = *(undefined8 *)(lVar11 + _DAT_113060460);
  *(undefined8 *)(lVar11 + _DAT_113060460) = uVar5;
  func_0x000107c6157c(uVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c5fd1c(&UNK_1040ba144,lVar11,lVar3);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(plStack_98);
  (**(code **)(lStack_90 + 8))(lVar9,lVar3);
  return;
}



/* Entry: 1000d4c0c; end: 1000d4c17;  */

void FUN_1000d4c0c(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0x1130605d8;
  FUN_1000285a8(0x1130605d8,&UNK_10dcd5b00);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000d4c18; end: 1000d4c9f;  */

void FUN_1000d4c18(undefined8 param_1)

{
  if (lRam00000001130604a0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7ef428);
  return;
}



/* Entry: 1000d4ca0; end: 1000d4d27;  */

void FUN_1000d4ca0(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x0001000d4c50();
  if (param_2 < 0x40) {
    lStack_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_38 = &UNK_10dcd5ac8;
    puStack_30 = puStack_40;
    puStack_28 = puStack_40;
    func_0x000107c61630(param_1,0x100,5,&lStack_48,param_1 + 0x50);
  }
  return;
}



/* Entry: 1000d4d28; end: 1000d4df3;  */

undefined1  [16]
FUN_1000d4d28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *unaff_x20;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_48;
  
  uVar1 = 0;
  FUN_1000b64f8(0,*(undefined8 *)(*unaff_x20 + 0x50));
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  FUN_1000b6644(param_1,param_2,param_3,param_4);
  pcVar4 = *(code **)(*unaff_x20 + 0x58);
  puVar2 = &DAT_10dd3c740;
  uStack_48 = param_1;
  func_0x000107c61520(&DAT_10dd3c740,uVar1);
  puVar3 = &uStack_48;
  (*pcVar4)(puVar3,uVar1,puVar2);
  func_0x000107c61574(param_1);
  auVar5._8_8_ = uVar1;
  auVar5._0_8_ = puVar3;
  return auVar5;
}



/* Entry: 1000d4df4; end: 1000d4dff;  */

void FUN_1000d4df4(long param_1)

{
  undefined1 auStack_60 [16];
  long lStack_50;
  
  lStack_50 = param_1;
  FUN_100087bd4(*(undefined8 *)(param_1 + 0x10),FUN_1000d4e00,auStack_60,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 1000d4e00; end: 1000d4e93;  */

void FUN_1000d4e00(void)

{
  FUN_1000d2434();
  return;
}



/* Entry: 1000d4e94; end: 1000d4f5f;  */

void FUN_1000d4e94(void)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auStack_78 [72];
  
  FUN_1000285a8(0x112da15a8,&UNK_10d9448b0);
  lVar2 = 1;
  func_0x000107c602e8();
  func_0x000107c6068c(auStack_78,*(undefined8 *)(lVar2 + 0x28));
  uVar3 = 0;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar3 = uVar3 & (-1L << ((ulong)*(byte *)(lVar2 + 0x20) & 0x3f) ^ 0xffffffffffffffffU);
  uVar4 = uVar3 >> 6;
  uVar5 = *(ulong *)(lVar2 + 0x38 + uVar4 * 8);
  uVar3 = 1L << (uVar3 & 0x3f);
  if ((uVar3 & uVar5) == 0) {
    *(ulong *)(lVar2 + 0x38 + uVar4 * 8) = uVar3 | uVar5;
    if (SCARRY8(*(long *)(lVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d4f60);
      (*pcVar1)();
    }
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
  }
  uRam0000000113813120 = 0;
  uRam0000000113813128 = 1;
  lRam0000000113813130 = lVar2;
  uRam0000000113813138 = 0;
  return;
}



/* Entry: 1000d4f60; end: 1000d4f9f;  */

void FUN_1000d4f60(void)

{
  if (lRam0000000113060108 != -1) {
    func_0x000107c61568(0x113060108,FUN_1000c2b1c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uRam0000000113060110);
  return;
}



/* Entry: 1000d4fa0; end: 1000d514b;  */

void FUN_1000d4fa0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  undefined8 *puVar7;
  long lVar8;
  
  lVar1 = 0x1130600c0;
  FUN_1000285a8(0x1130600c0,&UNK_10dcd55d0);
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)(&stack0xffffffffffffffb0 + -extraout_x8);
  uVar2 = 0x1130600c8;
  FUN_1000285a8(0x1130600c8,&UNK_10dcd55d8);
  pcVar3 = FUN_1000d5684;
  FUN_1000bfde0(FUN_1000d5684,0,uVar2);
  pcVar4 = FUN_100877f20;
  FUN_1000d5158(FUN_100877f20,0,uVar2);
  lVar5 = 0x1130600d0;
  FUN_1000285a8(0x1130600d0,&UNK_10dcd55e0);
  func_0x0001000d5214();
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 5;
  *(undefined8 *)(lVar5 + 0x10) = 2;
  *(code **)(lVar5 + 0x20) = pcVar3;
  *(code **)(lVar5 + 0x28) = pcVar4;
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  lVar6 = lVar5;
  FUN_1000c19f0(lVar5);
  func_0x000107c61574(lVar5);
  FUN_1000d527c();
  FUN_1000c2068();
  func_0x000107c61574(lVar6);
  *puVar7 = 1;
  (**(code **)(lVar8 + 0x68))
            (puVar7,*(undefined4 *)
                     PTR___sScS12ContinuationV15BufferingPolicyO15bufferingNewestyADyx__GSicAFmlFWC_11034fd18
             ,lVar1);
  FUN_1000d52ec(param_1,puVar7);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(lVar5);
  (**(code **)(lVar8 + 8))(puVar7,lVar1);
  return;
}



/* Entry: 1000d514c; end: 1000d5157;  */

void FUN_1000d514c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e820310);
  return;
}



/* Entry: 1000d5158; end: 1000d51cb;  */

long * FUN_1000d5158(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = 0;
  FUN_1000d514c(0,*(undefined8 *)(*unaff_x20 + 0x50));
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  FUN_1000c0ea8(lVar1);
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
  return unaff_x20;
}



/* Entry: 1000d51cc; end: 1000d51cf;  */

void FUN_1000d51cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 1000d51d0; end: 1000d527b;  */

void FUN_1000d51d0(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___syycWV_11034f1c0 + 0x40;
  func_0x000107c61524(param_1,0,1,&puStack_18,param_1 + 0xb8);
  return;
}



/* Entry: 1000d527c; end: 1000d52eb;  */

void FUN_1000d527c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam00000001130600d8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1130600c8;
  FUN_10002969c(0x1130600c8,&UNK_10dcd55d8);
  uVar2 = uVar1;
  func_0x0001000c1a88();
  puVar3 = PTR___sxSgSQsSQRzlMc_11034f190;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sxSgSQsSQRzlMc_11034f190,uVar1,&uStack_28);
  puRam00000001130600d8 = puVar3;
  return;
}



/* Entry: 1000d52ec; end: 1000d538f;  */

void FUN_1000d52ec(undefined8 param_1,undefined8 param_2)

{
  long extraout_x8;
  long extraout_x12;
  long *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x50);
  func_0x000107c5fd20(0,uVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (**(code **)(extraout_x8 + 0x10))(&stack0xffffffffffffffc0 + -extraout_x12,param_2);
  func_0x000107c5fd48(param_1,uVar1,&stack0xffffffffffffffc0 + -extraout_x12,FUN_1000d5390);
  return;
}



/* Entry: 1000d5390; end: 1000d5397;  */

void FUN_1000d5390(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x12;
  ulong uVar5;
  long *unaff_x20;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  code *pcVar12;
  undefined8 uStack_70;
  
  uVar7 = *(undefined8 *)(*unaff_x20 + 0x50);
  lVar1 = 0;
  uStack_70 = param_1;
  func_0x000107c5fd30(0,uVar7);
  lVar10 = *(long *)(lVar1 + -8);
  lVar8 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)&uStack_70 - (lVar8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar12 = *(code **)(lVar10 + 0x10);
  (*pcVar12)(lVar9 - extraout_x12,param_1,lVar1);
  uVar6 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar5 = uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff);
  puVar2 = &UNK_1107ab228;
  func_0x000107c613fc(&UNK_1107ab228,uVar5 + lVar8,uVar6 | 7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  pcVar11 = *(code **)(lVar10 + 0x20);
  (*pcVar11)(puVar2 + uVar5,lVar9 - extraout_x12,lVar1);
  (*pcVar12)(lVar9,uStack_70,lVar1);
  puVar3 = &UNK_1107ab250;
  func_0x000107c613fc(&UNK_1107ab250,uVar5 + lVar8,uVar6 | 7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  (*pcVar11)(puVar3 + uVar5,lVar9,lVar1);
  pcVar11 = FUN_1000d5a68;
  puVar4 = puVar2;
  FUN_1000d4d28(FUN_1000d5a68,puVar2,&UNK_104886ac0,puVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  puVar2 = &UNK_1107ab278;
  func_0x000107c613fc(&UNK_1107ab278,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar11;
  *(undefined **)(puVar2 + 0x20) = puVar4;
  func_0x000107c5fd1c(&UNK_104886afc,puVar2,lVar1);
  return;
}



/* Entry: 1000d5398; end: 1000d553b;  */

void FUN_1000d5398(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x12;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  code *pcVar12;
  undefined8 uStack_70;
  long *plStack_68;
  
  uVar7 = *(undefined8 *)(*param_2 + 0x50);
  lVar1 = 0;
  uStack_70 = param_1;
  plStack_68 = param_2;
  func_0x000107c5fd30(0,uVar7);
  lVar10 = *(long *)(lVar1 + -8);
  lVar8 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)&uStack_70 - (lVar8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar12 = *(code **)(lVar10 + 0x10);
  (*pcVar12)(lVar9 - extraout_x12,param_1,lVar1);
  uVar6 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar5 = uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff);
  puVar2 = &UNK_1107ab228;
  func_0x000107c613fc(&UNK_1107ab228,uVar5 + lVar8,uVar6 | 7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  pcVar11 = *(code **)(lVar10 + 0x20);
  (*pcVar11)(puVar2 + uVar5,lVar9 - extraout_x12,lVar1);
  (*pcVar12)(lVar9,uStack_70,lVar1);
  puVar3 = &UNK_1107ab250;
  func_0x000107c613fc(&UNK_1107ab250,uVar5 + lVar8,uVar6 | 7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  (*pcVar11)(puVar3 + uVar5,lVar9,lVar1);
  pcVar11 = FUN_1000d5a68;
  puVar4 = puVar2;
  FUN_1000d4d28(FUN_1000d5a68,puVar2,&UNK_104886ac0,puVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  puVar2 = &UNK_1107ab278;
  func_0x000107c613fc(&UNK_1107ab278,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar11;
  *(undefined **)(puVar2 + 0x20) = puVar4;
  func_0x000107c5fd1c(&UNK_104886afc,puVar2,lVar1);
  return;
}



/* Entry: 1000d553c; end: 1000d553f;  */

void FUN_1000d553c(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  __sScS12ContinuationVMa(0,*(undefined8 *)(unaff_x20 + 0x10));
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000d5540; end: 1000d5563;  */

void FUN_1000d5540(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000d5564; end: 1000d5567;  */

void FUN_1000d5564(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  __sScS12ContinuationVMa(0,*(undefined8 *)(unaff_x20 + 0x10));
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000d5568; end: 1000d55af; +[SCCameraRequestHandlerEvent didTurnOff] */

void FUN_1000d5568(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b9d70;
  func_0x000107c610f4();
  puVar2 = puVar1;
  func_0x000107c498b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1000d55b0; end: 1000d55f3; -[SCCameraRequestHandlerEvent internalInit] */

void FUN_1000d55b0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x000107c61174();
  puStack_28 = PTR_PTR_112702bb8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1000d55f4; end: 1000d55f7;  */

void FUN_1000d55f4(long param_1,long param_2)

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



/* Entry: 1000d55f8; end: 1000d5683;  */

void FUN_1000d55f8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000d5684; end: 1000d57db;  */

void FUN_1000d5684(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *puVar6;
  long extraout_x8;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  lVar3 = 0;
  FUN_1000d0cdc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar5 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)(&stack0xffffffffffffffc0 + lVar5);
  func_0x000107c61174(*param_2);
  FUN_1000d0fb8(puVar7);
  puVar4 = puVar7;
  func_0x000107c614c4(puVar7,lVar3);
  iVar2 = (int)puVar4;
  if (iVar2 < 2) {
    if (iVar2 != 0) {
      uVar8 = *puVar7;
      func_0x000107c6142c(*(undefined8 *)(&stack0xffffffffffffffe8 + lVar5));
      lVar5 = 0x11305f560;
      FUN_1000285a8(0x11305f560,&UNK_10dcd48f8);
      iVar2 = *(int *)(lVar5 + 0x80);
      iVar1 = *(int *)(lVar5 + 0xa0);
      *param_1 = uVar8;
      *(undefined1 *)(param_1 + 1) = 0;
      lVar5 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar5 + -8) + 8))((undefined1 *)((long)puVar7 + (long)iVar1),lVar5);
      goto LAB_1000d57c0;
    }
    uVar8 = *puVar7;
    lVar5 = 0x112d7af10;
    puVar6 = &UNK_10dbcce80;
LAB_1000d5734:
    FUN_1000285a8(lVar5,puVar6);
    iVar2 = *(int *)(lVar5 + 0x50);
  }
  else {
    if (iVar2 == 2) {
      uVar8 = *(undefined8 *)(&stack0xffffffffffffffc8 + lVar5);
      lVar5 = 0x11305f568;
      puVar6 = &UNK_10dd3d7c0;
      goto LAB_1000d5734;
    }
    uVar8 = *(undefined8 *)(&stack0xffffffffffffffc8 + lVar5);
    lVar5 = 0x11305f558;
    FUN_1000285a8(0x11305f558,&UNK_10dcd48f0);
    iVar2 = *(int *)(lVar5 + 0x60);
  }
  *param_1 = uVar8;
  *(undefined1 *)(param_1 + 1) = 0;
LAB_1000d57c0:
  FUN_1000d1dcc((undefined1 *)((long)puVar7 + (long)iVar2));
  return;
}



/* Entry: 1000d57dc; end: 1000d5823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d57dc(void)

{
  func_0x000100087f6c();
  return;
}



/* Entry: 1000d5824; end: 1000d5a47;  */

void FUN_1000d5824(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar4 = *unaff_x20;
  lVar5 = *(long *)(lVar4 + 0x50);
  lVar1 = 0;
  uStack_a0 = param_1;
  func_0x000107c60188(0,lVar5);
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar6 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar6 - extraout_x12;
  lVar3 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  uVar8 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_98 = *(undefined8 *)((long)unaff_x20 + *(long *)(lVar4 + 0x70));
  FUN_10006c804();
  lVar7 = *(long *)(*unaff_x20 + 0x60);
  func_0x000107c61428((long)unaff_x20 + lVar7,auStack_78,0,0);
  (**(code **)(lVar11 + 0x10))(lVar9,(long)unaff_x20 + lVar7,lVar1);
  lVar4 = lVar9;
  (**(code **)(lVar3 + 0x30))(lVar9,1,lVar5);
  if ((int)lVar4 == 1) {
    (**(code **)(lVar11 + 8))(lVar9,lVar1);
    uVar10 = uStack_a0;
  }
  else {
    (**(code **)(lVar3 + 0x20))(uVar8,lVar9,lVar5);
    uVar10 = uStack_a0;
    uVar2 = uVar8;
    (**(code **)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68)))(uVar8,uStack_a0);
    if ((uVar2 & 1) != 0) {
      FUN_100070bfc();
      (**(code **)(lVar3 + 8))(uVar8,lVar5);
      return;
    }
    (**(code **)(lVar3 + 8))(uVar8,lVar5);
  }
  (**(code **)(lVar3 + 0x10))(lVar6,uVar10,lVar5);
  (**(code **)(lVar3 + 0x38))(lVar6,0,1,lVar5);
  func_0x000107c61428((long)unaff_x20 + lVar7,auStack_90,0x21,0);
  (**(code **)(lVar11 + 0x28))((long)unaff_x20 + lVar7,lVar6,lVar1);
  func_0x000107c614a8(auStack_90);
  FUN_100070bfc();
  func_0x000100087f6c(uVar10);
  return;
}



/* Entry: 1000d5a48; end: 1000d5a67;  */

void FUN_1000d5a48(void)

{
  FUN_1000d5824();
  return;
}



/* Entry: 1000d5a68; end: 1000d5ab7;  */

void FUN_1000d5a68(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = 0;
  func_0x000107c5fd30(0,lVar5);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  lVar7 = *(long *)(lVar5 + -8);
  lVar1 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(undefined8 *)(lVar7 + 0x40),param_1,
             unaff_x20 + (uVar4 + 0x18 & (uVar4 ^ 0xffffffffffffffff)));
  puVar6 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5fd18(0,lVar1);
  lVar1 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar7 + 0x10))(puVar6,param_1,lVar5);
  uVar3 = 0;
  func_0x000107c5fd30(0,lVar5);
  func_0x000107c5fd28((long)puVar6 - extraout_x8_00,puVar6,uVar3);
  (**(code **)(lVar1 + 8))((long)puVar6 - extraout_x8_00,lVar2);
  return;
}



/* Entry: 1000d5ab8; end: 1000d5b9b;  */

void FUN_1000d5ab8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_3 + -8);
  lVar5 = param_3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5fd18(0,lVar5);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar4 + 0x10))(puVar3,param_1,param_3);
  uVar2 = 0;
  func_0x000107c5fd30(0,param_3);
  func_0x000107c5fd28((long)puVar3 - extraout_x8_00,puVar3,uVar2);
  (**(code **)(lVar5 + 8))((long)puVar3 - extraout_x8_00,lVar1);
  return;
}



/* Entry: 1000d5b9c; end: 1000d5c0f; -[SCCameraRequestHandlerServices initWithRequestHandler:] */

undefined1 * FUN_1000d5b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112702b98;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000d5c10; end: 1000d5c1b;  */

void FUN_1000d5c10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e82037c);
  return;
}



/* Entry: 1000d5c1c; end: 1000d5cf3;  */

undefined1  [16] FUN_1000d5c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *unaff_x20;
  code *pcVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_48;
  
  plVar7 = (long *)unaff_x20[2];
  uVar3 = 0;
  FUN_1000d5c10(0,*(undefined8 *)(*unaff_x20 + 0xa8),*(undefined8 *)(*unaff_x20 + 0xb0));
  FUN_1000b693c(param_2,param_3);
  lVar1 = unaff_x20[3];
  lVar2 = unaff_x20[4];
  func_0x000107c6157c(lVar2);
  func_0x0001000d5de4(param_2,lVar1,lVar2);
  pcVar6 = *(code **)(*plVar7 + 0x58);
  puVar4 = &DAT_10dd3afd0;
  uStack_48 = param_2;
  func_0x000107c61520(&DAT_10dd3afd0,uVar3);
  puVar5 = &uStack_48;
  (*pcVar6)(puVar5,uVar3,puVar4);
  func_0x000107c61574(param_2);
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = puVar5;
  return auVar8;
}



/* Entry: 1000d5cf4; end: 1000d5cf7;  */

void FUN_1000d5cf4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 1000d5cf8; end: 1000d5d7f;  */

void FUN_1000d5cf8(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eec8();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___sBoWV_11034d678 + 0x40;
    puStack_28 = PTR___syycWV_11034f1c0 + 0x40;
    func_0x000107c61524(param_1,0,3,&lStack_38,param_1 + 0x60);
  }
  return;
}



/* Entry: 1000d5d80; end: 1000d5d87;  */

void FUN_1000d5d80(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  puVar2 = PTR_PTR_1126a7030;
  func_0x000107c610f8();
  func_0x000107c45d14();
  func_0x000107c61170(unaff_x20);
  if (puVar2 != (undefined *)0x0) {
    *param_1 = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d5de4);
  (*pcVar1)();
}



/* Entry: 1000d5d88; end: 1000d5e9f;  */

void FUN_1000d5d88(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  
  func_0x0001000ad7c4();
  puVar2 = PTR_PTR_1126a7030;
  func_0x000107c610f8();
  func_0x000107c45d14();
  func_0x000107c61170(param_2);
  if (puVar2 != (undefined *)0x0) {
    *param_1 = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d5de4);
  (*pcVar1)();
}



/* Entry: 1000d5ea0; end: 1000d5f47; -[SCAudioCaptureServices initWithCaptureSessionProviderLazy:] */

undefined1 * FUN_1000d5ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112702d20;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000d5f48; end: 1000d5f67;  */

void FUN_1000d5f48(void)

{
  func_0x000107c61168(&PTR_PTR_113060648);
  return;
}



/* Entry: 1000d5f68; end: 1000d5f6f;  */

void FUN_1000d5f68(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  uVar1 = 0;
  FUN_100099fc0(0);
  func_0x000107c610f8();
  FUN_1000d68dc(uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1000d5f70; end: 1000d5fc3;  */

void FUN_1000d5f70(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  uVar1 = 0;
  FUN_100099fc0(0);
  func_0x000107c610f8();
  FUN_1000d68dc(uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1000d5fc4; end: 1000d5fcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d5fc4(long *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_100083b20(&lStack_48,*(undefined8 *)(unaff_x20 + 0x10),uVar1,*(undefined8 *)(unaff_x20 + 0x20)
               );
  lVar3 = lStack_48;
  lVar4 = lStack_48;
  func_0x000107c4ec80();
  func_0x000107c61180();
  FUN_100083b20(&lStack_48);
  uVar8 = *(undefined8 *)(lStack_48 + _DAT_113092298);
  func_0x000107c615f0(uVar8);
  func_0x000107c61170(lStack_48);
  lVar5 = 0;
  FUN_1000d6888();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(long *)(lVar6 + _DAT_11304f740) = lVar4;
  *(undefined8 *)(lVar6 + _DAT_11304f748) = uVar1;
  *(undefined8 *)(lVar6 + _DAT_11304f750) = uVar8;
  puVar2 = PTR_s_init_1125d9248;
  lStack_58 = lVar6;
  lStack_50 = lVar5;
  func_0x000107c615f0(uVar8);
  func_0x000107c61174(lVar4);
  func_0x000107c6157c(uVar1);
  plVar7 = &lStack_58;
  func_0x000107c61154(plVar7,puVar2);
  func_0x000107c61170(lVar4);
  func_0x000107c615e8(uVar8);
  func_0x000107c61170(lVar3);
  *param_1 = (long)plVar7;
  return;
}



/* Entry: 1000d5fd0; end: 1000d60e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d5fd0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  FUN_100083b20(&lStack_48);
  lVar2 = lStack_48;
  lVar3 = lStack_48;
  func_0x000107c4ec80();
  func_0x000107c61180();
  FUN_100083b20(&lStack_48);
  uVar7 = *(undefined8 *)(lStack_48 + _DAT_113092298);
  func_0x000107c615f0(uVar7);
  func_0x000107c61170(lStack_48);
  lVar4 = 0;
  FUN_1000d6888();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_11304f740) = lVar3;
  *(undefined8 *)(lVar5 + _DAT_11304f748) = param_3;
  *(undefined8 *)(lVar5 + _DAT_11304f750) = uVar7;
  puVar1 = PTR_s_init_1125d9248;
  lStack_58 = lVar5;
  lStack_50 = lVar4;
  func_0x000107c615f0(uVar7);
  func_0x000107c61174(lVar3);
  func_0x000107c6157c(param_3);
  plVar6 = &lStack_58;
  func_0x000107c61154(plVar6,puVar1);
  func_0x000107c61170(lVar3);
  func_0x000107c615e8(uVar7);
  func_0x000107c61170(lVar2);
  *param_1 = (long)plVar6;
  return;
}



/* Entry: 1000d60e8; end: 1000d6157;  */

void FUN_1000d60e8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x0001000ad7c4(*(undefined8 *)(unaff_x20 + 0x10));
  uVar1 = param_2;
  func_0x0001000ad7c4();
  puVar2 = PTR_PTR_1126dc280;
  func_0x000107c610f8();
  func_0x000107c47fe4();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_2);
  *param_1 = puVar2;
  return;
}


