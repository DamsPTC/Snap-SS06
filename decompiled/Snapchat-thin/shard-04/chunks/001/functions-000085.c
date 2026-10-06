/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1030f1920; end: 1030f199b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f1920(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + _DAT_112f3d150);
    if (lVar1 != 0) {
      func_0x000107c61174(lVar1);
      func_0x000107c61170(param_2);
      func_0x000107c5be54(lVar1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1030f199c; end: 1030f1a93;  */

/* WARNING: Possible PIC construction at 0x0001030f1a34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030f1a64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030f1a38) */
/* WARNING: Removing unreachable block (ram,0x0001030f1a40) */
/* WARNING: Removing unreachable block (ram,0x0001030f1a68) */
/* WARNING: Removing unreachable block (ram,0x0001030f1a50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f199c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  if ((*(char *)(unaff_x20 + _DAT_112f3d138) == '\x01') &&
     (lVar2 = *(long *)(unaff_x20 + _DAT_112f3d148), lVar2 != 0)) {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f3d130);
    puVar1 = PTR__OBJC_CLASS___AVPictureInPictureControllerContentSource_1126a9660;
    func_0x000107c610f8(PTR__OBJC_CLASS___AVPictureInPictureControllerContentSource_1126a9660);
    func_0x000107c61174(lVar2);
    func_0x000107c4554c(puVar1,param_2,lVar2,uVar3);
    puVar1 = PTR__OBJC_CLASS___AVPictureInPictureController_1126a9670;
    func_0x000107c610f8();
    func_0x000107c460f8();
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f3d150);
    *(undefined **)(unaff_x20 + _DAT_112f3d150) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 1030f1a94; end: 1030f1afb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f1a94(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_112f3d138) == '\x01') {
    *(undefined1 *)(unaff_x20 + _DAT_112f3d138) = 0;
    func_0x000107c42194(*(undefined8 *)(unaff_x20 + _DAT_112f3d128));
    lVar1 = _DAT_112f3d150;
    uVar2 = 0;
    if (*(long *)(unaff_x20 + _DAT_112f3d150) != 0) {
      func_0x000107c5be54();
      uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
    }
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1030f1afc; end: 1030f1bdb;  */

/* WARNING: Possible PIC construction at 0x0001030f1b24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030f1a34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030f1a64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030f1b28) */
/* WARNING: Removing unreachable block (ram,0x0001030f1b54) */
/* WARNING: Removing unreachable block (ram,0x0001030f1bac) */
/* WARNING: Removing unreachable block (ram,0x0001030f199c) */
/* WARNING: Removing unreachable block (ram,0x0001030f19c0) */
/* WARNING: Removing unreachable block (ram,0x0001030f1a84) */
/* WARNING: Removing unreachable block (ram,0x0001030f19d0) */
/* WARNING: Removing unreachable block (ram,0x0001030f1b68) */
/* WARNING: Removing unreachable block (ram,0x000107c5be54) */
/* WARNING: Removing unreachable block (ram,0x00010c2565a0) */
/* WARNING: Removing unreachable block (ram,0x0001030f1a38) */
/* WARNING: Removing unreachable block (ram,0x0001030f1a40) */
/* WARNING: Removing unreachable block (ram,0x0001030f1a68) */
/* WARNING: Removing unreachable block (ram,0x0001030f1a50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f1afc(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f3d148);
  *(undefined8 *)(unaff_x20 + _DAT_112f3d148) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1030f1bdc; end: 1030f1c3b; -[_TtC10CallUIImpl25OutOfAppPipCallController init] */

void FUN_1030f1bdc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CallUIImpl.OutOfAppPipCallController",0x24,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030f1c08);
  (*pcVar1)();
}



/* Entry: 1030f1c3c; end: 1030f1cb3; -[_TtC10CallUIImpl25OutOfAppPipCallController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1030f1c3c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f3d120));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f3d128));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f3d130));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f3d148));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f3d150));
  param_1 = param_1 + _DAT_112f3d160;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1030f1cb4; end: 1030f1cd3;  */

void FUN_1030f1cb4(void)

{
  func_0x000107c61168(&PTR_PTR_1128b7270);
  return;
}



/* Entry: 1030f1cd4; end: 1030f1d0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f1cd4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20 + _DAT_112f3d160;
  *(undefined8 *)(lVar1 + 8) = param_2;
  func_0x000107c61604(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1030f1d10; end: 1030f1d5b; -[_TtC10CallUIImpl25OutOfAppPipCallController pictureInPictureControllerWillStartPictureInPicture:] */

/* WARNING: Possible PIC construction at 0x0001030f1d44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030f1d48) */

void FUN_1030f1d10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001030f2054();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1030f1d5c; end: 1030f1da7; -[_TtC10CallUIImpl25OutOfAppPipCallController pictureInPictureControllerDidStartPictureInPicture:] */

/* WARNING: Possible PIC construction at 0x0001030f1d90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030f1d94) */

void FUN_1030f1d5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001030f2108();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1030f1da8; end: 1030f1e0b; -[_TtC10CallUIImpl25OutOfAppPipCallController pictureInPictureController:failedToStartPictureInPictureWithError:] */

/* WARNING: Possible PIC construction at 0x0001030f1dec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030f1df0) */

void FUN_1030f1da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1030f2178();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1030f1e0c; end: 1030f1e57; -[_TtC10CallUIImpl25OutOfAppPipCallController pictureInPictureControllerWillStopPictureInPicture:] */

/* WARNING: Possible PIC construction at 0x0001030f1e40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030f1e44) */

void FUN_1030f1e0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1030f2214();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1030f1e58; end: 1030f1f43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f1e58(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  long alStack_78 [3];
  long lStack_60;
  undefined **ppuStack_58;
  
  lVar1 = param_1;
  FUN_1030f1cb4();
  ppuStack_58 = &PTR_DAT_11060d548;
  pcVar7 = *(code **)(param_2 + 0x58);
  alStack_78[0] = param_1;
  lStack_60 = lVar1;
  func_0x000107c61174(param_1);
  (*pcVar7)(0);
  lVar6 = *(long *)(param_2 + 0x20);
  plVar2 = alStack_78;
  func_0x0001000a8868(plVar2,lVar1);
  uVar4 = *(undefined8 *)(*plVar2 + _DAT_112f3d130);
  uVar3 = *(undefined8 *)(lVar6 + 0x80);
  lVar1 = *(long *)(lVar6 + 0x88);
  func_0x000107c614f0(uVar3);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  pcVar7 = *(code **)(lVar1 + 8);
  func_0x000107c61174(uVar4);
  (*pcVar7)(uVar5,uVar4,uVar3,lVar1);
  func_0x000107c42c1c(*(undefined8 *)(lVar6 + 0x78));
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x0001000834e4(alStack_78);
  return;
}



/* Entry: 1030f1f44; end: 1030f2177;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f1f44(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = _DAT_112f3d128;
  puVar3 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar2 = _DAT_112f3d130;
  uVar4 = 0;
  FUN_1030f30d0();
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  *(undefined1 *)(unaff_x20 + _DAT_112f3d138) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f3d140) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f3d148) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f3d150) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f3d158) = 0;
  lVar1 = unaff_x20 + _DAT_112f3d160;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f3d120) = param_1;
  uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x000107c615f0(param_1);
  func_0x000107c57690(0x4061600000000000,0x4073000000000000,uVar4);
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030f2178; end: 1030f2213;  */

/* WARNING: Possible PIC construction at 0x0001030f21e8: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f2178(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  *(undefined1 *)(unaff_x20 + _DAT_112f3d140) = 0;
  FUN_1030f2384();
  lVar1 = unaff_x20 + _DAT_112f3d160;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + 0x20);
    lVar2 = *(long *)(lVar3 + 0x78);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar2 == 0) {
      (**(code **)(lVar1 + 0x58))(1);
    }
    else {
      func_0x000107c61170();
      func_0x000107c4ffe8(*(undefined8 *)(lVar3 + 0x78));
      func_0x000107c61180();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
    return;
  }
  return;
}



/* Entry: 1030f2214; end: 1030f22fb;  */

/* WARNING: Possible PIC construction at 0x0001030f2278: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030f1a34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030f1a64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030f227c) */
/* WARNING: Removing unreachable block (ram,0x0001030f1a38) */
/* WARNING: Removing unreachable block (ram,0x0001030f1a40) */
/* WARNING: Removing unreachable block (ram,0x0001030f1a68) */
/* WARNING: Removing unreachable block (ram,0x0001030f1a50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f2214(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  
  *(undefined1 *)(unaff_x20 + _DAT_112f3d140) = 0;
  lVar4 = *(long *)(unaff_x20 + _DAT_112f3d130);
  FUN_1030f2384();
  lVar3 = unaff_x20 + _DAT_112f3d160;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar2 = *(long *)(*(long *)(lVar3 + 0x20) + 0x78);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar2 != 0) goto code_r0x000107c61170;
    (**(code **)(lVar3 + 0x58))(1);
    func_0x000107c615e8(lVar3);
  }
  if (*(char *)(unaff_x20 + _DAT_112f3d158) != '\x01') {
    return;
  }
  *(undefined1 *)(unaff_x20 + _DAT_112f3d158) = 0;
  func_0x000107c61604(lVar4 + _DAT_112f3d198,*(undefined8 *)(unaff_x20 + _DAT_112f3d148));
  if ((*(char *)(unaff_x20 + _DAT_112f3d138) != '\x01') ||
     (lVar3 = *(long *)(unaff_x20 + _DAT_112f3d148), lVar3 == 0)) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___AVPictureInPictureControllerContentSource_1126a9660;
  func_0x000107c610f8(PTR__OBJC_CLASS___AVPictureInPictureControllerContentSource_1126a9660);
  func_0x000107c61174(lVar3);
  func_0x000107c4554c(puVar1);
  puVar1 = PTR__OBJC_CLASS___AVPictureInPictureController_1126a9670;
  func_0x000107c610f8();
  func_0x000107c460f8();
  *(undefined **)(unaff_x20 + _DAT_112f3d150) = puVar1;
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1030f22fc; end: 1030f231f;  */

undefined8 FUN_1030f22fc(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1030f2320; end: 1030f2343;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f2320(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112f3d150);
    if (lVar2 != 0) {
      func_0x000107c61174(lVar2);
      func_0x000107c61170(lVar1);
      func_0x000107c5be54(lVar2);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1030f2344; end: 1030f2383;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f2344(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _DAT_112f3d1a0) = 0;
  lVar1 = _DAT_112f3d1a8;
  uVar2 = 0;
  if (*(long *)(unaff_x20 + _DAT_112f3d1a8) != 0) {
    func_0x000107c4ff34();
    uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1030f2384; end: 1030f28a3;  */

/* WARNING: Possible PIC construction at 0x0001030f2400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030f2440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030f2484: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030f251c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030f253c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030f258c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030f25ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030f25fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030f261c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030f2680: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030f26a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030f26e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030f2814: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030f26a4) */
/* WARNING: Removing unreachable block (ram,0x0001030f2684) */
/* WARNING: Removing unreachable block (ram,0x0001030f2620) */
/* WARNING: Removing unreachable block (ram,0x0001030f28a0) */
/* WARNING: Removing unreachable block (ram,0x0001030f2654) */
/* WARNING: Removing unreachable block (ram,0x0001030f2600) */
/* WARNING: Removing unreachable block (ram,0x0001030f25b0) */
/* WARNING: Removing unreachable block (ram,0x0001030f289c) */
/* WARNING: Removing unreachable block (ram,0x0001030f25e4) */
/* WARNING: Removing unreachable block (ram,0x0001030f2590) */
/* WARNING: Removing unreachable block (ram,0x0001030f2540) */
/* WARNING: Removing unreachable block (ram,0x0001030f2898) */
/* WARNING: Removing unreachable block (ram,0x0001030f2574) */
/* WARNING: Removing unreachable block (ram,0x0001030f2520) */
/* WARNING: Removing unreachable block (ram,0x0001030f2488) */
/* WARNING: Removing unreachable block (ram,0x0001030f2894) */
/* WARNING: Removing unreachable block (ram,0x0001030f2504) */
/* WARNING: Removing unreachable block (ram,0x0001030f2444) */
/* WARNING: Removing unreachable block (ram,0x0001030f2844) */
/* WARNING: Removing unreachable block (ram,0x0001030f2858) */
/* WARNING: Removing unreachable block (ram,0x0001030f2448) */
/* WARNING: Removing unreachable block (ram,0x0001030f245c) */
/* WARNING: Removing unreachable block (ram,0x0001030f2460) */
/* WARNING: Removing unreachable block (ram,0x0001030f2890) */
/* WARNING: Removing unreachable block (ram,0x0001030f2474) */
/* WARNING: Removing unreachable block (ram,0x0001030f2404) */
/* WARNING: Removing unreachable block (ram,0x0001030f26e4) */
/* WARNING: Removing unreachable block (ram,0x0001030f2818) */
/* WARNING: Removing unreachable block (ram,0x0001030f2820) */
/* WARNING: Removing unreachable block (ram,0x0001030f2808) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f2384(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _DAT_112f3d1a0) = 1;
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1030f288c);
    (*pcVar1)();
  }
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c3ec60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030f2890);
  (*pcVar1)();
}



/* Entry: 1030f28a4; end: 1030f2a6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f28a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  
  ppuVar7 = &puStack_b0;
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffff80,PTR_s_viewDidLayoutSubviews_112684cc8);
  if (*(char *)(unaff_x20 + _DAT_112f3d1a0) == '\x01') {
    lVar3 = *(long *)(unaff_x20 + _DAT_112f3d1a8);
    if (lVar3 != 0) {
      func_0x000107c61174();
      lVar4 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1030f2a6c);
        (*pcVar1)();
      }
      func_0x000107c3ec60();
      uVar8 = param_1;
      uVar9 = param_2;
      uVar10 = param_3;
      uVar11 = param_4;
      func_0x000107c61170(lVar4);
      lVar4 = unaff_x20 + _DAT_112f3d198;
      func_0x000107c61618();
      if (lVar4 != 0) {
        func_0x000107c3ec60();
        func_0x000107c61170();
        iVar2 = (int)lVar4;
        func_0x000107c609ac(param_1,param_2,param_3,param_4,uVar8,uVar9,uVar10,uVar11);
        if (iVar2 != 0) {
          puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
          func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
          puVar6 = &UNK_11060d618;
          func_0x000107c613fc(&UNK_11060d618,0x18,7);
          *(long *)(puVar6 + 0x10) = lVar3;
          pcStack_90 = FUN_1030f34a4;
          puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a8 = 0x42000000;
          puStack_a0 = &UNK_1000f6b44;
          puStack_98 = &UNK_11060d630;
          puStack_88 = puVar6;
          func_0x000107c60bc4(&puStack_b0);
          puVar6 = puStack_88;
          func_0x000107c61174(lVar3);
          func_0x000107c61574(puVar6);
          func_0x000107c3dccc(0x3fc999999999999a,puVar5);
          func_0x000107c60bd0(ppuVar7);
        }
      }
      func_0x000107c61170(lVar3);
    }
  }
  return;
}



/* Entry: 1030f2a6c; end: 1030f2a93; -[_TtC10CallUIImpl29OutOfAppPipCallViewController viewDidLayoutSubviews] */

void FUN_1030f2a6c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1030f28a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030f2a94; end: 1030f2d93;  */

/* WARNING: Possible PIC construction at 0x0001030f2b18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030f2b3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030f2bd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030f2bf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030f2c58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030f2c78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030f2cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030f2d00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030f2d38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030f2d04) */
/* WARNING: Removing unreachable block (ram,0x0001030f2cc4) */
/* WARNING: Removing unreachable block (ram,0x0001030f2c7c) */
/* WARNING: Removing unreachable block (ram,0x0001030f2c5c) */
/* WARNING: Removing unreachable block (ram,0x0001030f2bf8) */
/* WARNING: Removing unreachable block (ram,0x0001030f2d90) */
/* WARNING: Removing unreachable block (ram,0x0001030f2c2c) */
/* WARNING: Removing unreachable block (ram,0x0001030f2bd8) */
/* WARNING: Removing unreachable block (ram,0x0001030f2b40) */
/* WARNING: Removing unreachable block (ram,0x0001030f2d8c) */
/* WARNING: Removing unreachable block (ram,0x0001030f2bbc) */
/* WARNING: Removing unreachable block (ram,0x0001030f2b1c) */
/* WARNING: Removing unreachable block (ram,0x0001030f2d3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f2a94(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar2 = unaff_x20 + _DAT_112f3d198;
  func_0x000107c61618();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c3ec60();
  lVar3 = lVar2;
  func_0x000107c5058c(lVar2,param_2,0);
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1030f2d8c);
      (*pcVar1)();
    }
    func_0x000107c3d89c();
    lVar2 = unaff_x20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1030f2d94; end: 1030f2e1f;  */

void FUN_1030f2d94(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_50 [48];
  
  uVar1 = param_1;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c56f8c(0);
  func_0x000107c61170(uVar1);
  func_0x000107c4aba4(param_1);
  func_0x000107c61180();
  func_0x000107c6088c(auStack_50,0x3fe0000000000000,0x3fe0000000000000);
  func_0x000107c52580(param_1,param_2,auStack_50);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1030f2e20; end: 1030f2f0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1030f2e20(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  *(undefined1 *)(unaff_x20 + _DAT_112f3d190) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112f3d198,0);
  *(undefined1 *)(unaff_x20 + _DAT_112f3d1a0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f3d1a8) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112f3d1b0,0);
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c6142c(param_2);
  }
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_initWithNibName_bundle__1125e9850,param_1,
                      param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1030f2f0c; end: 1030f302b; -[_TtC10CallUIImpl29OutOfAppPipCallViewController initWithNibName:bundle:] */

void FUN_1030f2f0c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_4);
  FUN_1030f2e20(param_3,param_2,param_4);
  return;
}



/* Entry: 1030f302c; end: 1030f3053; -[_TtC10CallUIImpl29OutOfAppPipCallViewController initWithCoder:] */

void FUN_1030f302c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x0001030f2f6c();
  return;
}



/* Entry: 1030f3054; end: 1030f3087;  */

void FUN_1030f3054(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1030f3088; end: 1030f30cf; -[_TtC10CallUIImpl29OutOfAppPipCallViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001030f30a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030f30a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f3088(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112f3d198);
  return;
}



/* Entry: 1030f30d0; end: 1030f30ef;  */

void FUN_1030f30d0(void)

{
  func_0x000107c61168(&PTR_PTR_1128b7370);
  return;
}



/* Entry: 1030f30f0; end: 1030f33cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f30f0(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1030f33bc);
    (*pcVar1)();
  }
  func_0x000107c3d89c();
  func_0x000107c61170(lVar2);
  func_0x000107c5a050(param_1);
  puVar3 = &SUB_100847984;
  FUN_1030f3438(&SUB_100847984,0x112d36e78,&UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(puVar3 + 0x18) = 9;
  *(undefined8 *)(puVar3 + 0x10) = 4;
  uVar7 = param_1;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1030f33c0);
    (*pcVar1)();
  }
  lVar4 = lVar2;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  uVar5 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar4);
  *(undefined8 *)(puVar3 + 0x20) = uVar5;
  uVar7 = param_1;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1030f33c4);
    (*pcVar1)();
  }
  lVar4 = lVar2;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  uVar5 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar4);
  *(undefined8 *)(puVar3 + 0x28) = uVar5;
  uVar7 = param_1;
  func_0x000107c4ace0();
  func_0x000107c61180();
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar4 = lVar2;
    func_0x000107c4ace0();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    uVar5 = uVar7;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar4);
    *(undefined8 *)(puVar3 + 0x30) = uVar5;
    uVar7 = param_1;
    func_0x000107c50890();
    func_0x000107c61180();
    lVar2 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar2 != 0) {
      puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar4 = lVar2;
      func_0x000107c50890(lVar2);
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      uVar5 = uVar7;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar7);
      func_0x000107c61170(lVar4);
      *(undefined8 *)(puVar3 + 0x38) = uVar5;
      uVar7 = 0;
      func_0x000100847984(0);
      puVar8 = puVar3;
      func_0x000107c5fc48(puVar3,uVar7);
      func_0x000107c61574(puVar3);
      func_0x000107c3d048(puVar6);
      func_0x000107c61170(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(unaff_x20 + _DAT_112f3d1b0,param_1);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1030f33cc);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030f33c8);
  (*pcVar1)();
}



/* Entry: 1030f33cc; end: 1030f341b; -[_TtC10CallUIImpl29OutOfAppPipCallViewController attachView:] */

/* WARNING: Possible PIC construction at 0x0001030f3404: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030f3408) */

void FUN_1030f33cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1030f30f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1030f341c; end: 1030f3437;  */

void FUN_1030f341c(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112f3d1e0;
  plVar5 = (long *)&UNK_10db898d0;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*(code *)&SUB_1005f57cc)();
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1030f3438; end: 1030f34a3;  */

void FUN_1030f3438(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x112d36e60;
      param_3 = (long *)&UNK_10d901170;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1030f34a4; end: 1030f34db;  */

void FUN_1030f34a4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4aba4(uVar1);
  func_0x000107c61180();
  func_0x000107c56f8c(0x3f800000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1030f34dc; end: 1030f3517;  */

void FUN_1030f34dc(long param_1,long param_2)

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



/* Entry: 1030f3518; end: 1030f372b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1030f3518(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined *puVar7;
  code *pcVar8;
  long unaff_x20;
  undefined8 uVar9;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  lVar1 = _DAT_112f3d1f8;
  puVar3 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112f3d200;
  uVar4 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar4;
  *(undefined1 *)(unaff_x20 + _DAT_112f3d208) = 0;
  puVar3 = PTR_PTR_1126acc48;
  func_0x000107c610f8();
  func_0x000107c47404();
  *(undefined **)(unaff_x20 + _DAT_112f3d1e8) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f3d1f0) = param_4;
  puVar3 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_4);
  puVar5 = &stack0xffffffffffffff90;
  func_0x000107c61154(puVar5,puVar3);
  uVar4 = *(undefined8 *)(puVar5 + _DAT_112f3d1e8);
  func_0x000107c61174();
  func_0x000107c53fcc(uVar4);
  plVar6 = param_1;
  func_0x000107c614f0();
  func_0x00010446b05c();
  puVar3 = &UNK_11060d728;
  func_0x000107c613fc(&UNK_11060d728,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,puVar5);
  puVar7 = &UNK_11060d750;
  func_0x000107c613fc(&UNK_11060d750,0x20,7);
  *(undefined **)(puVar7 + 0x10) = puVar3;
  *(long *)(puVar7 + 0x18) = lVar2;
  uVar4 = 0x1030f3a3c;
  puVar3 = puVar7;
  (**(code **)(*plVar6 + 0x60))(0x1030f3a3c);
  func_0x000107c61574(plVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c614f0(uVar4);
  uVar9 = *(undefined8 *)(puVar5 + _DAT_112f3d200);
  pcVar8 = *(code **)(puVar3 + 0x18);
  func_0x000107c6157c(uVar9);
  (*pcVar8)();
  func_0x000107c61170(puVar5);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(uVar4);
  func_0x000107c61574(uVar9);
  return puVar5;
}



/* Entry: 1030f372c; end: 1030f382b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f372c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [16];
  long lStack_70;
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lStack_70 = param_2;
    lStack_50 = param_2;
    func_0x00010446dcb4(0x1030f3a44,auStack_60,0x1030f3a58,auStack_80);
    lVar1 = param_2;
    if ((*(byte *)(param_2 + _DAT_112f3d208) & 1) == 0) {
      func_0x000107c5bdf4(*(undefined8 *)(param_2 + _DAT_112f3d1e8));
      uVar2 = *(undefined8 *)(param_2 + _DAT_112f3d1f8);
      func_0x000104467c1c(0);
      func_0x000107c610f8();
      func_0x000107c61174(uVar2);
      lVar1 = 0;
      func_0x0001044677b8(0,0,0);
      func_0x000107c4d664(uVar2);
      func_0x000107c61170(param_2);
      func_0x000107c61170(uVar2);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1030f382c; end: 1030f383b; -[_TtC10CallUIImpl20SharedLensController toggleSelfStream:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f382c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112f3d1e8),PTR_s_toggleSelfStream__11267a530);
  return;
}



/* Entry: 1030f383c; end: 1030f3863; -[_TtC10CallUIImpl20SharedLensController onRemoteParticipantUpdated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f383c(long param_1)

{
  if (*(char *)(param_1 + _DAT_112f3d208) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112f3d1f8),PTR_s_next__112614028);
    return;
  }
  return;
}



/* Entry: 1030f3864; end: 1030f38c3; -[_TtC10CallUIImpl20SharedLensController init] */

void FUN_1030f3864(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CallUIImpl.SharedLensController",0x1f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030f3890);
  (*pcVar1)();
}



/* Entry: 1030f38c4; end: 1030f391b; -[_TtC10CallUIImpl20SharedLensController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f38c4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f3d1e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f3d1f0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f3d1f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f3d200));
  return;
}



/* Entry: 1030f391c; end: 1030f393b;  */

void FUN_1030f391c(void)

{
  func_0x000107c61168(&PTR_PTR_1128b7448);
  return;
}



/* Entry: 1030f393c; end: 1030f39b3; -[_TtC10CallUIImpl20SharedLensController connectedLensInTalkController:createStreamForVideoSinkId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f393c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112f3d1f0);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c40c18();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1030f39b4; end: 1030f39c3; -[_TtC10CallUIImpl20SharedLensController remoteParticipantObservableForConnectedLensInTalkController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f39b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f3d1f8));
  return;
}



/* Entry: 1030f39c4; end: 1030f39eb; -[_TtC10CallUIImpl20SharedLensController registerLocalPreviewViewFreezingManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f39c4(long param_1)

{
  if (*(char *)(param_1 + _DAT_112f3d208) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c1269d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112f3d1e8),
               PTR_s_registerLocalPreviewViewFreezing_112627490);
    return;
  }
  return;
}



/* Entry: 1030f39ec; end: 1030f3a13; -[_TtC10CallUIImpl20SharedLensController registerConnectedLensViewFreezer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f39ec(long param_1)

{
  if (*(char *)(param_1 + _DAT_112f3d208) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c126130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112f3d1e8),
               PTR_s_registerConnectedLensViewFreezer_112627268);
    return;
  }
  return;
}



/* Entry: 1030f3a14; end: 1030f3a6f; -[_TtC10CallUIImpl20SharedLensController registerRemoteParticipantViewFreezer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f3a14(long param_1)

{
  if (*(char *)(param_1 + _DAT_112f3d208) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c126f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112f3d1e8),
               PTR_s_registerRemoteParticipantViewFre_1126275f8);
    return;
  }
  return;
}



/* Entry: 1030f3a70; end: 1030f3ac7;  */

undefined * FUN_1030f3a70(void)

{
  ulong uVar1;
  undefined *puVar2;
  
  uVar1 = 0x372e3531;
  FUN_1030f3ac8(0x372e3531,0xe400000000000000);
  if ((uVar1 & 1) == 0) {
    uVar1 = 0x322e372e3531;
    FUN_1030f3ac8(0x322e372e3531,0xe600000000000000);
    if ((uVar1 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___AVPictureInPictureController_1126a9670;
      func_0x000107c61168(PTR__OBJC_CLASS___AVPictureInPictureController_1126a9670);
      func_0x000107c4a1ac();
      return puVar2;
    }
  }
  return (undefined *)0x0;
}



/* Entry: 1030f3ac8; end: 1030f3c07;  */

bool FUN_1030f3ac8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long lVar8;
  long alStack_70 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  lVar1 = 0x112d483a8;
  puVar7 = &UNK_10d910f00;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  lVar8 = (long)&uStack_60 + lVar1;
  puVar2 = PTR_PTR_1126b2930;
  func_0x000107c61168();
  func_0x000107c40efc();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5c650();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar2 = puVar3;
  func_0x000107c5faec();
  func_0x000107c61170(puVar3);
  lVar4 = 0;
  uStack_60 = param_1;
  uStack_58 = param_2;
  puStack_50 = puVar2;
  puStack_48 = puVar7;
  func_0x000107c5ef14();
  lVar5 = lVar8;
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar8,1,1,lVar4);
  func_0x000100e8b654();
  *(long *)((long)alStack_70 + lVar1) = lVar5;
  *(long *)((long)alStack_70 + lVar1 + 8) = lVar5;
  puVar6 = &uStack_60;
  func_0x000107c60224(puVar6,0x40,0,0,1,lVar8,PTR___sSSN_11034da80,PTR___sSSN_11034da80);
  func_0x000100eca640(lVar8);
  func_0x000107c6142c(puVar7);
  return puVar6 == (undefined8 *)0x0;
}



/* Entry: 1030f3c08; end: 1030f3c17;  */

undefined1  [16] FUN_1030f3c08(void)

{
  return ZEXT816(0x11060d820);
}



/* Entry: 1030f3c18; end: 1030f3c4b;  */

void FUN_1030f3c18(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  return;
}



/* Entry: 1030f3c4c; end: 1030f3c67;  */

void FUN_1030f3c4c(void)

{
  long unaff_x20;
  
  func_0x000107c5194c(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1030f3c68; end: 1030f3c73;  */

void FUN_1030f3c68(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_exposeScope__1125c4f30,param_1);
  return;
}



/* Entry: 1030f3c74; end: 1030f3eeb;  */

/* WARNING: Possible PIC construction at 0x0001030f3d08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030f3ddc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030f3e4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030f3e60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030f3ec0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030f3e64) */
/* WARNING: Removing unreachable block (ram,0x0001030f3e50) */
/* WARNING: Removing unreachable block (ram,0x0001030f3de0) */
/* WARNING: Removing unreachable block (ram,0x0001030f3d0c) */
/* WARNING: Removing unreachable block (ram,0x0001030f3ec4) */

void FUN_1030f3c74(code *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar3 = unaff_x20[3];
  if (lVar3 == 0) {
    lVar4 = *unaff_x20;
    lVar3 = unaff_x20[2];
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar3 == 0) {
      if (param_1 == (code *)0x0) {
        return;
      }
      (*param_1)();
      return;
    }
    puVar1 = &UNK_11060d8c0;
    func_0x000107c613fc(&UNK_11060d8c0,0x18,7);
    func_0x000107c61644(puVar1 + 0x10);
    puVar2 = &UNK_11060d8e8;
    func_0x000107c613fc(&UNK_11060d8e8,0x40,7);
    *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)(lVar4 + 0x50);
    *(undefined **)(puVar2 + 0x18) = puVar1;
    *(code **)(puVar2 + 0x20) = param_1;
    *(undefined **)(puVar2 + 0x28) = param_2;
    *(long *)(puVar2 + 0x30) = lVar3;
    *(long *)(puVar2 + 0x38) = lVar4;
    lVar4 = unaff_x20[2];
    func_0x000100d35758(param_1,param_2);
    func_0x000107c6157c(puVar1);
    func_0x000107c615f0(lVar3);
    func_0x000107c4ffe8();
    func_0x000107c61180();
    if (lVar4 == 0) {
      FUN_1030f3eec(puVar1,param_1,param_2,lVar3);
    }
  }
  else {
    if (param_1 == (code *)0x0) {
      return;
    }
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000b0c7c;
    puStack_68 = &UNK_11060d928;
    pcStack_60 = param_1;
    puStack_58 = param_2;
    func_0x000107c60bc4(&puStack_80);
    puVar1 = puStack_58;
    func_0x000100d35758(param_1,param_2);
    func_0x000100d35758(param_1,param_2);
    func_0x000107c615f0(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1030f3eec; end: 1030f3fbf;  */

void FUN_1030f3eec(long param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    if (param_2 != (code *)0x0) {
      (*param_2)();
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    func_0x000107c615e8(uVar1);
    func_0x000107c61428(param_1 + 0x20,auStack_70,0,0);
    pcVar2 = *(code **)(param_1 + 0x20);
    if (pcVar2 != (code *)0x0) {
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      func_0x000107c6157c(uVar1);
      (*pcVar2)(param_4);
      func_0x000100d35768(pcVar2,uVar1);
    }
    if (param_2 != (code *)0x0) {
      (*param_2)();
    }
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 1030f3fc0; end: 1030f3fe7;  */

void FUN_1030f3fc0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x18);
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 == 0) {
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
  }
  else {
    uVar4 = *(undefined8 *)(lVar3 + 0x18);
    *(undefined8 *)(lVar3 + 0x18) = 0;
    func_0x000107c615e8(uVar4);
    func_0x000107c61428(lVar3 + 0x20,auStack_70,0,0);
    pcVar5 = *(code **)(lVar3 + 0x20);
    if (pcVar5 != (code *)0x0) {
      uVar4 = *(undefined8 *)(lVar3 + 0x28);
      func_0x000107c6157c(uVar4);
      (*pcVar5)(uVar2);
      func_0x000100d35768(pcVar5,uVar4);
    }
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
    func_0x000107c61574(lVar3);
  }
  return;
}



/* Entry: 1030f3fe8; end: 1030f4033;  */

void FUN_1030f3fe8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100d35768(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 1030f4034; end: 1030f403b;  */

void FUN_1030f4034(long param_1,long param_2)

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



/* Entry: 1030f403c; end: 1030f4153;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1030f403c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar4 = auStack_70;
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_1030f489c();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_58);
    uVar1 = uStack_58;
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_3;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112f3d238) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112f3d240) = param_4;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1030f4154);
  (*pcVar2)();
}



/* Entry: 1030f4154; end: 1030f41b3; -[_TtC28CallUICameraScopeGraphBridge43CallUICameraScopeGraphBridgeSaberEntryPoint init] */

void FUN_1030f4154(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CallUICameraScopeGraphBridge.CallUICameraScopeGraphBridgeSaberEntryPoint",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030f4180);
  (*pcVar1)();
}



/* Entry: 1030f41b4; end: 1030f41eb; -[_TtC28CallUICameraScopeGraphBridge43CallUICameraScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001030f41d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030f41d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f41b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f3d238));
  return;
}



/* Entry: 1030f41ec; end: 1030f4213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f41ec(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f3d240),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f3d238));
  return;
}



/* Entry: 1030f4214; end: 1030f4233;  */

void FUN_1030f4214(void)

{
  func_0x000107c61168(&PTR_PTR_1128b7528);
  return;
}



/* Entry: 1030f4234; end: 1030f42cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1030f4234(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112f3d490);
  *(undefined8 *)(unaff_x20 + _DAT_112f3d270) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f3d278) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1030f42d0; end: 1030f432f; -[_TtC28CallUICameraScopeGraphBridge44CallUICameraViewfinderServiceSaberEntryPoint init] */

void FUN_1030f42d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CallUICameraScopeGraphBridge.CallUICameraViewfinderServiceSaberEntryPoint",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030f42fc);
  (*pcVar1)();
}



/* Entry: 1030f4330; end: 1030f43c3; -[_TtC28CallUICameraScopeGraphBridge44CallUICameraViewfinderServiceSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f4330(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f3d270));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f3d278));
  return;
}



/* Entry: 1030f43c4; end: 1030f43cb;  */

undefined8 FUN_1030f43c4(void)

{
  return 0;
}



/* Entry: 1030f43cc; end: 1030f43eb;  */

void FUN_1030f43cc(void)

{
  func_0x000107c61168(&PTR_PTR_1128b75f0);
  return;
}



/* Entry: 1030f43ec; end: 1030f444f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1030f43ec(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f3d498);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1030f4450; end: 1030f4457;  */

void FUN_1030f4450(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1030f4458; end: 1030f44f7;  */

void FUN_1030f4458(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1030f44f8; end: 1030f4517;  */

void FUN_1030f44f8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1030f4518; end: 1030f457b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1030f4518(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f3d4a0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1030f457c; end: 1030f4583;  */

void FUN_1030f457c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1030f4584; end: 1030f4623;  */

void FUN_1030f4584(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1030f4624; end: 1030f4643;  */

void FUN_1030f4624(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1030f4644; end: 1030f46cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1030f4644(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f3d448) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f3d450);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1030f46cc);
  (*pcVar2)();
}



/* Entry: 1030f46cc; end: 1030f47b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1030f46cc(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f3d448);
  *(undefined **)(unaff_x20 + _DAT_112f3d448) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f3d450);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f3d450))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11060db88;
  func_0x000107c613fc(&UNK_11060db88,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1030f47b8,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1030f47b4; end: 1030f47bf;  */

void FUN_1030f47b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1030f47c0; end: 1030f481f; -[_TtC28CallUICameraScopeGraphBridge41CallUICameraScopedServicesSaberEntryPoint init] */

void FUN_1030f47c0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CallUICameraScopeGraphBridge.CallUICameraScopedServicesSaberEntryPoint",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030f47ec);
  (*pcVar1)();
}



/* Entry: 1030f4820; end: 1030f4857; -[_TtC28CallUICameraScopeGraphBridge41CallUICameraScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f4820(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f3d450));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f3d448));
  return;
}



/* Entry: 1030f4858; end: 1030f485b;  */

void FUN_1030f4858(void)

{
  return;
}



/* Entry: 1030f485c; end: 1030f487b;  */

void FUN_1030f485c(void)

{
  FUN_1030f46cc();
  return;
}



/* Entry: 1030f487c; end: 1030f489b;  */

void FUN_1030f487c(void)

{
  func_0x000107c61168(&PTR_PTR_1128b76b8);
  return;
}



/* Entry: 1030f489c; end: 1030f496b;  */

undefined8 FUN_1030f489c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112f3d480,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_1030f496c();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1030f496c; end: 1030f498b;  */

void FUN_1030f496c(void)

{
  func_0x000107c61168(&PTR_PTR_1128b7780);
  return;
}



/* Entry: 1030f498c; end: 1030f4b23;  */

void FUN_1030f498c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f3d488,&UNK_10db89b58);
  puVar1 = &UNK_11060dbd0;
  func_0x000107c613fc(&UNK_11060dbd0,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_1030f4b24,puVar1);
  return;
}



/* Entry: 1030f4b24; end: 1030f4b33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f4b24(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar8 = &lStack_60;
  lVar6 = lVar1;
  FUN_1030f496c();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(long *)(lVar7 + _DAT_112f3d490) = lVar1;
  *(undefined8 *)(lVar7 + _DAT_112f3d498) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112f3d4a0) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112f3d4a8) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_112f3d4b0) = uVar9;
  puVar5 = PTR_s_init_1125d9248;
  lStack_60 = lVar7;
  lStack_58 = lVar6;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar9);
  func_0x000107c61154(&lStack_60,puVar5);
  *param_1 = plVar8;
  return;
}



/* Entry: 1030f4b34; end: 1030f4bcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f4b34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f3d490) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f3d498) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f3d4a0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f3d4a8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f3d4b0) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030f4bd0; end: 1030f4c2f; -[_TtC28CallUICameraScopeGraphBridge36CallUICameraScopeGraphBridgeServices init] */

void FUN_1030f4bd0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CallUICameraScopeGraphBridge.CallUICameraScopeGraphBridgeServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030f4bfc);
  (*pcVar1)();
}



/* Entry: 1030f4c30; end: 1030f4cd7; -[_TtC28CallUICameraScopeGraphBridge36CallUICameraScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001030f4c4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030f4c6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030f4c50) */
/* WARNING: Removing unreachable block (ram,0x0001030f4c70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f4c30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f3d490));
  return;
}



/* Entry: 1030f4cd8; end: 1030f4ce3;  */

void FUN_1030f4cd8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1030f5084,param_1);
  return;
}



/* Entry: 1030f4ce4; end: 1030f4d6f;  */

void FUN_1030f4ce4(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1030f508c,0);
  return;
}



/* Entry: 1030f4d70; end: 1030f4d7b;  */

void FUN_1030f4d70(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1030f4dd4,param_1);
  return;
}



/* Entry: 1030f4d7c; end: 1030f4dd3;  */

void FUN_1030f4d7c(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 1030f4dd4; end: 1030f4e07;  */

void FUN_1030f4dd4(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1030f4e08; end: 1030f4e0f;  */

undefined8 FUN_1030f4e08(void)

{
  return 0x1b;
}



/* Entry: 1030f4e10; end: 1030f4f87;  */

void FUN_1030f4e10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11060dbf8;
  func_0x000107c613fc(&UNK_11060dbf8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1030f4f88,puVar1);
  return;
}



/* Entry: 1030f4f88; end: 1030f4f8f;  */

void FUN_1030f4f88(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112f3d480,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f3d480,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11060dd10;
  func_0x000107c613fc(&UNK_11060dd10,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1030f507c;
  func_0x00010058fa64(0x1030f507c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}


