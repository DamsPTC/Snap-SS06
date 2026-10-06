/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10336b164; end: 10336b167;  */

void FUN_10336b164(void)

{
  return;
}



/* Entry: 10336b168; end: 10336b1c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336b168(void)

{
  long in_x3;
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(in_x3 + 0x10,auStack_38,0,0);
  in_x3 = in_x3 + 0x10;
  func_0x000107c61618();
  if (in_x3 != 0) {
    uVar1 = *(undefined8 *)(in_x3 + _DAT_112f5ce48);
    *(undefined8 *)(in_x3 + _DAT_112f5ce48) = 0;
    func_0x000107c61170();
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 10336b1c8; end: 10336b243;  */

/* WARNING: Possible PIC construction at 0x00010336b220: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010336b224) */

void FUN_10336b1c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  (*pcVar1)(param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10336b244; end: 10336b48f;  */

void FUN_10336b244(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar4 = &puStack_90;
  ppuVar6 = &puStack_90;
  puVar2 = &UNK_110645360;
  func_0x000107c613fc(&UNK_110645360,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x10336b888;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_10336b890;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = (code *)0x10336b960;
  puStack_78 = &UNK_110645378;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar5 = puStack_68;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar5);
  pcStack_70 = FUN_10336b4e4;
  puStack_68 = (undefined *)0x0;
  puStack_90 = puVar7;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_10336b4e8;
  puStack_78 = &UNK_1106453a0;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  puVar5 = &UNK_1106453d8;
  func_0x000107c613fc(&UNK_1106453d8,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_10336b8b0;
  *(undefined8 *)(puVar5 + 0x18) = param_2;
  pcStack_70 = (code *)0x10336b950;
  puStack_90 = puVar7;
  uStack_88 = 0x42000000;
  pcStack_80 = (code *)0x10336b95c;
  puStack_78 = &UNK_1106453f0;
  puStack_68 = puVar5;
  func_0x000107c60bc4(&puStack_90);
  puVar7 = puStack_68;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar7);
  func_0x000107c4c7b8(param_1);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(param_2);
  puVar7 = puVar2;
  func_0x000107c61544(puVar2,"",0x68,0x4b,0x11,1);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10336b488);
    (*pcVar1)();
  }
  uVar8 = 0;
  func_0x000107c61544(0,"",0x68,0x4f,0x22,1);
  func_0x000107c61574(param_2);
  if ((uVar8 & 1) == 0) {
    puVar2 = puVar5;
    func_0x000107c61544(puVar5,"",0x68,0x51,0x25,1);
    func_0x000107c61574(puVar5);
    if (((ulong)puVar2 & 1) == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10336b490);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10336b48c);
  (*pcVar1)();
}



/* Entry: 10336b490; end: 10336b4e3;  */

void FUN_10336b490(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    FUN_10336af3c();
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 10336b4e4; end: 10336b4e7;  */

void FUN_10336b4e4(void)

{
  return;
}



/* Entry: 10336b4e8; end: 10336b57f;  */

/* WARNING: Possible PIC construction at 0x00010336b554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010336b564: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010336b558) */
/* WARNING: Removing unreachable block (ram,0x00010336b568) */

void FUN_10336b4e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  (*pcVar1)(param_2,param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10336b580; end: 10336b5df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336b580(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_3 + _DAT_112f5ce48);
    *(undefined8 *)(param_3 + _DAT_112f5ce48) = 0;
    func_0x000107c61170();
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 10336b5e0; end: 10336b62b;  */

void FUN_10336b5e0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10336b62c; end: 10336b703;  */

void FUN_10336b62c(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2;
  func_0x000107c614f0();
  lVar2 = param_2;
  func_0x000107c5b198();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4ca14();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
    uVar4 = param_3 + 0x10;
    func_0x000107c61618();
    if (uVar4 != 0) {
      uVar5 = uVar4;
      func_0x000107c61150();
      if ((uVar5 & 1) != 0) {
        func_0x000107c41a24(uVar4);
      }
      func_0x000107c615e8(uVar4);
    }
    param_1[3] = lVar1;
    *param_1 = param_2;
    func_0x000107c615f0(param_2);
  }
  return;
}



/* Entry: 10336b704; end: 10336b763; -[CaaSCameraCapturedMediaEntryPoint init] */

void FUN_10336b704(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCaaSCameraLaunchingImplementation.CaaSCameraCapturedMediaEntryPoint",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10336b730);
  (*pcVar1)();
}



/* Entry: 10336b764; end: 10336b833; -[CaaSCameraCapturedMediaEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010336b780: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010336b7a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010336b7c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010336b7a4) */
/* WARNING: Removing unreachable block (ram,0x00010336b784) */
/* WARNING: Removing unreachable block (ram,0x00010336b7c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336b764(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5ce50));
  return;
}



/* Entry: 10336b834; end: 10336b83b;  */

undefined8 FUN_10336b834(void)

{
  return 0;
}



/* Entry: 10336b83c; end: 10336b85b;  */

void FUN_10336b83c(void)

{
  func_0x000107c61168(&PTR_PTR_1128d0fa0);
  return;
}



/* Entry: 10336b85c; end: 10336b88f;  */

void FUN_10336b85c(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  puVar2 = &UNK_110645478;
  func_0x000107c613fc(&UNK_110645478,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x10336b8c0;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_10336b8c8;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_10336b090;
  puStack_78 = &UNK_110645490;
  ppuVar3 = &puStack_90;
  puStack_68 = puVar2;
  func_0x000107c60bc4();
  puVar5 = puStack_68;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar5);
  pcStack_70 = FUN_10336b164;
  puStack_68 = (undefined *)0x0;
  puStack_90 = puVar7;
  uStack_88 = 0x42000000;
  pcStack_80 = (code *)0x10336b958;
  puStack_78 = &UNK_1106454b8;
  ppuVar4 = &puStack_90;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_68);
  puVar5 = &UNK_1106454f0;
  func_0x000107c613fc(&UNK_1106454f0,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_10336b8e8;
  *(undefined8 *)(puVar5 + 0x18) = unaff_x20;
  pcStack_70 = FUN_10336b8f0;
  puStack_90 = puVar7;
  uStack_88 = 0x42000000;
  pcStack_80 = (code *)0x10336b954;
  puStack_78 = &UNK_110645508;
  ppuVar6 = &puStack_90;
  puStack_68 = puVar5;
  func_0x000107c60bc4();
  puVar7 = puStack_68;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar7);
  func_0x000107c4c5ec(param_1);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574();
  puVar7 = puVar2;
  func_0x000107c61544(puVar2,"",0x68,0x39,0x2e,1);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10336aee0);
    (*pcVar1)();
  }
  uVar8 = 0;
  func_0x000107c61544(0,"",0x68,0x3f,0x22,1);
  func_0x000107c61574();
  if ((uVar8 & 1) == 0) {
    puVar2 = puVar5;
    func_0x000107c61544(puVar5,"",0x68,0x41,0x25,1);
    func_0x000107c61574(puVar5);
    if (((ulong)puVar2 & 1) == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10336aee8);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10336aee4);
  (*pcVar1)();
}



/* Entry: 10336b890; end: 10336b8af;  */

void FUN_10336b890(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10336b8b0; end: 10336b8c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336b8b0(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112f5ce48);
    *(undefined8 *)(lVar1 + _DAT_112f5ce48) = 0;
    func_0x000107c61170();
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 10336b8c8; end: 10336b8e7;  */

void FUN_10336b8c8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10336b8e8; end: 10336b8ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336b8e8(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112f5ce48);
    *(undefined8 *)(lVar1 + _DAT_112f5ce48) = 0;
    func_0x000107c61170();
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 10336b8f0; end: 10336b90f;  */

void FUN_10336b8f0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10336b910; end: 10336b96b;  */

void FUN_10336b910(long param_1,long param_2)

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



/* Entry: 10336b96c; end: 10336ba5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336b96c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f5ce98) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112f5cea0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f5cea8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ceb0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ceb8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f5cec0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f5cec8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ced0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ced8) = param_7;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10336ba5c; end: 10336bd03;  */

/* WARNING: Possible PIC construction at 0x00010336bac4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010336bb3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010336bba4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010336bc40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010336bc70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010336bcac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010336bccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010336bce4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010336bcb0) */
/* WARNING: Removing unreachable block (ram,0x00010336bcb4) */
/* WARNING: Removing unreachable block (ram,0x00010336bc74) */
/* WARNING: Removing unreachable block (ram,0x00010336bc78) */
/* WARNING: Removing unreachable block (ram,0x00010336bcc8) */
/* WARNING: Removing unreachable block (ram,0x00010336bc88) */
/* WARNING: Removing unreachable block (ram,0x00010336bc44) */
/* WARNING: Removing unreachable block (ram,0x00010336bcd0) */
/* WARNING: Removing unreachable block (ram,0x00010336bc58) */
/* WARNING: Removing unreachable block (ram,0x00010336bb40) */
/* WARNING: Removing unreachable block (ram,0x00010336bac8) */
/* WARNING: Removing unreachable block (ram,0x00010336bacc) */
/* WARNING: Removing unreachable block (ram,0x00010336bb9c) */
/* WARNING: Removing unreachable block (ram,0x00010336badc) */
/* WARNING: Removing unreachable block (ram,0x00010336bb4c) */
/* WARNING: Removing unreachable block (ram,0x00010336bba0) */
/* WARNING: Removing unreachable block (ram,0x00010336bb0c) */
/* WARNING: Removing unreachable block (ram,0x00010336bce8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336ba5c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar2 = (int)*(undefined8 *)(unaff_x20 + _DAT_112f5cec0);
  func_0x000107c49cd8();
  if (iVar2 != 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112f5ceb8);
    lVar1 = lVar3;
    func_0x000107c4dff0();
    func_0x000107c61180();
    if (lVar1 == 0) {
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f5ced8);
      uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112f5ceb0) + _DAT_1130353e0);
      func_0x000107c615f0(uVar5);
      lVar1 = lVar3;
      func_0x000107c5d17c(lVar3);
      func_0x000107c61180();
      func_0x000107c501d0(lVar3);
      func_0x000107c61180();
      func_0x000107c3ed7c(uVar4,param_2,uVar5,lVar1,lVar3);
      func_0x000107c61180();
      func_0x000107c615e8(uVar5);
      func_0x000107c615e8(lVar1);
    }
    else {
      func_0x000107c4e1b8();
      func_0x000107c61180();
      lVar3 = lVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 10336bd04; end: 10336be13;  */

/* WARNING: Possible PIC construction at 0x00010336bd40: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336bd04(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  iVar1 = (int)*(undefined8 *)(unaff_x20 + _DAT_112f5ceb8);
  func_0x000107c3f27c();
  lVar2 = _DAT_112f5cea0;
  if (iVar1 == 0xd) {
    lVar3 = unaff_x20 + _DAT_112f5cea0;
    func_0x000107c61618();
    if (lVar3 != 0) {
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
      return;
    }
    lVar3 = *(long *)(*(long *)(unaff_x20 + _DAT_112f5ceb0) + _DAT_1130353e0);
    func_0x000107c4cc80();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c42e38();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
      func_0x000107c4cc80();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      if (lVar3 != 0) {
        func_0x000107c61604(unaff_x20 + lVar2,lVar3);
        func_0x000107c3d8b4(lVar3);
        func_0x000107c61170(lVar3);
        lVar2 = unaff_x20 + lVar2;
        func_0x000107c61618();
        if (lVar2 != 0) {
          func_0x000107c54514();
          goto code_r0x000107c615e8;
        }
      }
    }
  }
  return;
}



/* Entry: 10336be14; end: 10336be17;  */

void FUN_10336be14(void)

{
  return;
}



/* Entry: 10336be18; end: 10336be63; -[_TtC35SCCaaSCameraLaunchingImplementation20CaaSCameraEntryPoint didDismissCaptureFlow:] */

/* WARNING: Possible PIC construction at 0x00010336be4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010336be50) */

void FUN_10336be18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10336c180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10336be64; end: 10336bebf; -[_TtC35SCCaaSCameraLaunchingImplementation20CaaSCameraEntryPoint captureWorkflowDidDismissWithDidSendSnap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336be64(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112f5ceb8);
    func_0x000107c61174();
    func_0x000107c4168c();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c41d14();
      func_0x000107c615e8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10336bec0; end: 10336bf47; -[_TtC35SCCaaSCameraLaunchingImplementation20CaaSCameraEntryPoint captureWorkflowWillSetCameraViewConfiguration:] */

/* WARNING: Possible PIC construction at 0x00010336bf30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010336bf34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336bec0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  FUN_10336bd04();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f5ceb8);
  func_0x000107c501d0(uVar1);
  func_0x000107c61180();
  (**(code **)(param_3 + 0x10))
            (param_3,uVar1,*(undefined8 *)(*(long *)(param_1 + _DAT_112f5cec8) + _DAT_113082420),0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10336bf48; end: 10336bf9b; -[_TtC35SCCaaSCameraLaunchingImplementation20CaaSCameraEntryPoint captureWorkflowDidSaveSnapToMemories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336bf48(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112f5ceb8);
  func_0x000107c61174();
  func_0x000107c4168c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c41cf0();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10336bf9c; end: 10336c05f; -[_TtC35SCCaaSCameraLaunchingImplementation20CaaSCameraEntryPoint didTapSpotlightMemoriesSideButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336bf9c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  uVar1 = *(ulong *)(param_1 + _DAT_112f5ceb8);
  func_0x000107c4168c();
  func_0x000107c61180();
  if (uVar1 == 0) {
    func_0x000107c61170(param_1);
  }
  else {
    uVar2 = uVar1;
    func_0x000107c61150();
    if ((uVar2 & 1) != 0) {
      func_0x000107c41d98(uVar1);
    }
    func_0x000107c61170(param_1);
    func_0x000107c615e8(uVar1);
  }
  func_0x00010006e7f4(&uStack_40);
  return;
}



/* Entry: 10336c060; end: 10336c0bf; -[_TtC35SCCaaSCameraLaunchingImplementation20CaaSCameraEntryPoint init] */

void FUN_10336c060(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCaaSCameraLaunchingImplementation.CaaSCameraEntryPoint",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10336c08c);
  (*pcVar1)();
}



/* Entry: 10336c0c0; end: 10336c177; -[_TtC35SCCaaSCameraLaunchingImplementation20CaaSCameraEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10336c0c0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f5cea8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f5ceb8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f5cec8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f5cec0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f5ced8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f5ceb0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f5ced0));
  param_1 = param_1 + _DAT_112f5cea0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10336c178; end: 10336c17f;  */

undefined8 FUN_10336c178(void)

{
  return 0;
}



/* Entry: 10336c180; end: 10336c30f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336c180(void)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  ppuVar3 = &puStack_80;
  lVar1 = *(long *)(unaff_x20 + _DAT_112f5ceb8);
  func_0x000107c4dff0();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4e1b8();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c49820();
      if (lVar1 != -1) {
        lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112f5cea8) + _DAT_113074f60);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar1 != 0) {
          func_0x0001000dbbdc();
          pcStack_60 = FUN_10336be14;
          uStack_58 = 0;
          puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_78 = 0x42000000;
          puStack_70 = &UNK_1000f6b44;
          puStack_68 = &UNK_110645550;
          func_0x000107c60bc4(&puStack_80);
          uVar4 = 0xd000000000000023;
          func_0x000107c5fadc(0xd000000000000023,0x800000010f142b80);
          func_0x000107c540ac(lVar1);
          func_0x000107c61170(uVar4);
          func_0x000107c61170(lVar2);
          func_0x000107c60bd0(ppuVar3);
          func_0x000107c615e8(lVar1);
          goto LAB_10336c2d8;
        }
      }
      func_0x000107c61170(lVar2);
    }
  }
LAB_10336c2d8:
  func_0x000107c4ffe8(*(undefined8 *)(unaff_x20 + _DAT_112f5cec0));
  func_0x000107c61180();
  func_0x000107c615e8();
  return;
}



/* Entry: 10336c310; end: 10336c32f;  */

void FUN_10336c310(void)

{
  func_0x000107c61168(&PTR_PTR_1128d1088);
  return;
}



/* Entry: 10336c330; end: 10336c353;  */

undefined8 FUN_10336c330(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10336c354; end: 10336c36f;  */

void FUN_10336c354(long param_1,long param_2)

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



/* Entry: 10336c370; end: 10336c3bf;  */

void FUN_10336c370(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  return;
}



/* Entry: 10336c3c0; end: 10336c3cf;  */

void FUN_10336c3c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  return;
}



/* Entry: 10336c3d0; end: 10336c6eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336c3d0(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4dff0();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c3f2fc();
    func_0x000107c5ac1c();
    func_0x000107c41f00();
    func_0x000107c5abac();
    func_0x000107c5ac24();
    func_0x000107c5ac28();
    func_0x000107c5ac30();
    func_0x000107c42014();
    func_0x000107c61170(lVar3);
  }
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4dff0();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5ab98();
    func_0x000107c61170(lVar3);
  }
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4dff0();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar5 = lVar3;
    func_0x000107c4ad10();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar5 != 0) {
      lVar3 = lVar5;
      func_0x000107c49820(lVar5);
      func_0x000107c61170(lVar5);
      func_0x00010336d170(lVar3);
    }
  }
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c3f27c();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c42e48();
  func_0x000107c61180();
  FUN_10336c6ec();
  func_0x000107c3f2a8(*(undefined8 *)(unaff_x20 + 0x10));
  lVar5 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4dff0();
  func_0x000107c61180();
  if (lVar5 != 0) {
    func_0x000107c5abb0();
    func_0x000107c61170(lVar5);
  }
  uVar9 = 0;
  uVar10 = uVar4;
  func_0x000104509e9c();
  func_0x000107c615e8(uVar4);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4dff0();
  func_0x000107c61180();
  uVar4 = uVar6;
  func_0x000107c3ec14();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  lVar5 = _DAT_113082458;
  func_0x000107c61428(lVar3 + _DAT_113082458,auStack_78,1,0);
  uVar6 = *(undefined8 *)(lVar3 + lVar5);
  *(undefined8 *)(lVar3 + lVar5) = uVar4;
  func_0x000107c615e8(uVar6);
  func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + 0x20));
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar7 = 0;
  FUN_10336a9d4();
  lVar5 = lVar7;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar5 + _DAT_112f5ce10);
  *puVar1 = uVar9;
  puVar1[1] = uVar10;
  puVar2 = PTR_s_init_1125d9248;
  lStack_88 = lVar5;
  lStack_80 = lVar7;
  func_0x000107c615f0(uVar9);
  plVar8 = &lStack_88;
  func_0x000107c61154(plVar8,puVar2);
  func_0x000107c42c20(uVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c615e8(uVar9);
  func_0x000107c61170(plVar8);
  return;
}



/* Entry: 10336c6ec; end: 10336d10b;  */

long FUN_10336c6ec(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined **ppuVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined **ppuVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined **ppuVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined **ppuVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined **ppuVar36;
  long unaff_x20;
  long lVar37;
  long lVar38;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long alStack_80 [2];
  
  alStack_80[0] = 0;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c501d0();
  func_0x000107c61180();
  puVar4 = &UNK_1106455a8;
  func_0x000107c613fc(&UNK_1106455a8,0x18,7);
  *(long **)(puVar4 + 0x10) = alStack_80;
  puVar5 = &UNK_1106455d0;
  func_0x000107c613fc(&UNK_1106455d0,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_10336d1a0;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x10336d1cc;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1019dec28;
  puStack_98 = &UNK_1106455e8;
  ppuVar6 = &puStack_b0;
  puStack_88 = puVar5;
  func_0x000107c60bc4();
  puVar7 = puStack_88;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar7);
  puVar7 = &UNK_110645620;
  func_0x000107c613fc(&UNK_110645620,0x18,7);
  *(long **)(puVar7 + 0x10) = alStack_80;
  puVar8 = &UNK_110645648;
  func_0x000107c613fc(&UNK_110645648,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = 0x10336d310;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  uStack_90 = 0x10336d2f0;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1019e04bc;
  puStack_98 = &UNK_110645660;
  ppuVar9 = &puStack_b0;
  puStack_88 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar10 = puStack_88;
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar10);
  puVar10 = &UNK_110645698;
  func_0x000107c613fc(&UNK_110645698,0x18,7);
  *(long **)(puVar10 + 0x10) = alStack_80;
  puVar11 = &UNK_1106456c0;
  func_0x000107c613fc(&UNK_1106456c0,0x20,7);
  *(undefined8 *)(puVar11 + 0x10) = 0x10336d328;
  *(undefined **)(puVar11 + 0x18) = puVar10;
  uStack_90 = 0x10336d308;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1019e04c0;
  puStack_98 = &UNK_1106456d8;
  ppuVar12 = &puStack_b0;
  puStack_88 = puVar11;
  func_0x000107c60bc4();
  puVar13 = puStack_88;
  func_0x000107c6157c(puVar11);
  func_0x000107c61574(puVar13);
  puVar13 = &UNK_110645710;
  func_0x000107c613fc(&UNK_110645710,0x18,7);
  *(long **)(puVar13 + 0x10) = alStack_80;
  puVar14 = &UNK_110645738;
  func_0x000107c613fc(&UNK_110645738,0x20,7);
  *(undefined8 *)(puVar14 + 0x10) = 0x10336d314;
  *(undefined **)(puVar14 + 0x18) = puVar13;
  uStack_90 = 0x10336d2f4;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1019e04c4;
  puStack_98 = &UNK_110645750;
  ppuVar15 = &puStack_b0;
  puStack_88 = puVar14;
  func_0x000107c60bc4(ppuVar15);
  puVar16 = puStack_88;
  func_0x000107c6157c(puVar14);
  func_0x000107c61574(puVar16);
  puVar16 = &UNK_110645788;
  func_0x000107c613fc(&UNK_110645788,0x18,7);
  *(long **)(puVar16 + 0x10) = alStack_80;
  puVar17 = &UNK_1106457b0;
  func_0x000107c613fc(&UNK_1106457b0,0x20,7);
  *(undefined8 *)(puVar17 + 0x10) = 0x10336d318;
  *(undefined **)(puVar17 + 0x18) = puVar16;
  uStack_90 = 0x10336d2f8;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1019e04c8;
  puStack_98 = &UNK_1106457c8;
  ppuVar18 = &puStack_b0;
  puStack_88 = puVar17;
  func_0x000107c60bc4();
  puVar19 = puStack_88;
  func_0x000107c6157c(puVar17);
  func_0x000107c61574(puVar19);
  puVar19 = &UNK_110645800;
  func_0x000107c613fc(&UNK_110645800,0x18,7);
  *(long **)(puVar19 + 0x10) = alStack_80;
  puVar20 = &UNK_110645828;
  func_0x000107c613fc(&UNK_110645828,0x20,7);
  *(code **)(puVar20 + 0x10) = FUN_10336d208;
  *(undefined **)(puVar20 + 0x18) = puVar19;
  uStack_90 = 0x10336d234;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1019dec60;
  puStack_98 = &UNK_110645840;
  ppuVar21 = &puStack_b0;
  puStack_88 = puVar20;
  func_0x000107c60bc4();
  puVar22 = puStack_88;
  func_0x000107c6157c(puVar20);
  func_0x000107c61574(puVar22);
  puVar22 = &UNK_110645878;
  func_0x000107c613fc(&UNK_110645878,0x18,7);
  *(long **)(puVar22 + 0x10) = alStack_80;
  puVar23 = &UNK_1106458a0;
  func_0x000107c613fc(&UNK_1106458a0,0x20,7);
  *(undefined8 *)(puVar23 + 0x10) = 0x10336d31c;
  *(undefined **)(puVar23 + 0x18) = puVar22;
  uStack_90 = 0x10336d2fc;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1019e04cc;
  puStack_98 = &UNK_1106458b8;
  ppuVar24 = &puStack_b0;
  puStack_88 = puVar23;
  func_0x000107c60bc4();
  puVar25 = puStack_88;
  func_0x000107c6157c(puVar23);
  func_0x000107c61574(puVar25);
  puVar25 = &UNK_1106458f0;
  func_0x000107c613fc(&UNK_1106458f0,0x18,7);
  *(long **)(puVar25 + 0x10) = alStack_80;
  puVar26 = &UNK_110645918;
  func_0x000107c613fc(&UNK_110645918,0x20,7);
  *(undefined8 *)(puVar26 + 0x10) = 0x10336d320;
  *(undefined **)(puVar26 + 0x18) = puVar25;
  uStack_90 = 0x10336d300;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1019e04d0;
  puStack_98 = &UNK_110645930;
  ppuVar27 = &puStack_b0;
  puStack_88 = puVar26;
  func_0x000107c60bc4();
  puVar28 = puStack_88;
  func_0x000107c6157c(puVar26);
  func_0x000107c61574(puVar28);
  puVar28 = &UNK_110645968;
  func_0x000107c613fc(&UNK_110645968,0x18,7);
  *(long **)(puVar28 + 0x10) = alStack_80;
  puVar29 = &UNK_110645990;
  func_0x000107c613fc(&UNK_110645990,0x20,7);
  *(undefined8 *)(puVar29 + 0x10) = 0x10336d324;
  *(undefined **)(puVar29 + 0x18) = puVar28;
  uStack_90 = 0x10336d304;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1019e04d4;
  puStack_98 = &UNK_1106459a8;
  ppuVar30 = &puStack_b0;
  puStack_88 = puVar29;
  func_0x000107c60bc4();
  puVar31 = puStack_88;
  func_0x000107c6157c(puVar29);
  func_0x000107c61574(puVar31);
  puVar31 = &UNK_1106459e0;
  func_0x000107c613fc(&UNK_1106459e0,0x18,7);
  *(long **)(puVar31 + 0x10) = alStack_80;
  puVar32 = &UNK_110645a08;
  func_0x000107c613fc(&UNK_110645a08,0x20,7);
  *(undefined8 *)(puVar32 + 0x10) = 0x10336d254;
  *(undefined **)(puVar32 + 0x18) = puVar31;
  uStack_90 = 0x10336d280;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1019e04d8;
  puStack_98 = &UNK_110645a20;
  ppuVar33 = &puStack_b0;
  puStack_88 = puVar32;
  func_0x000107c60bc4();
  puVar34 = puStack_88;
  func_0x000107c6157c(puVar32);
  func_0x000107c61574(puVar34);
  puVar34 = &UNK_110645a58;
  func_0x000107c613fc(&UNK_110645a58,0x18,7);
  *(long **)(puVar34 + 0x10) = alStack_80;
  puVar35 = &UNK_110645a80;
  func_0x000107c613fc(&UNK_110645a80,0x20,7);
  *(undefined8 *)(puVar35 + 0x10) = 0x10336d32c;
  *(undefined **)(puVar35 + 0x18) = puVar34;
  uStack_90 = 0x10336d30c;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1019e04dc;
  puStack_98 = &UNK_110645a98;
  ppuVar36 = &puStack_b0;
  puStack_88 = puVar35;
  func_0x000107c60bc4();
  puVar1 = puStack_88;
  func_0x000107c6157c(puVar35);
  func_0x000107c61574(puVar1);
  func_0x000107c4c590(uVar3);
  func_0x000107c60bd0(ppuVar36);
  func_0x000107c60bd0(ppuVar33);
  func_0x000107c60bd0(ppuVar30);
  func_0x000107c60bd0(ppuVar27);
  func_0x000107c60bd0(ppuVar24);
  func_0x000107c60bd0(ppuVar21);
  func_0x000107c60bd0(ppuVar18);
  func_0x000107c60bd0(ppuVar15);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(uVar3);
  if (alStack_80[0] == 0) {
    lVar37 = 0;
    lVar38 = 0x14;
  }
  else {
    lVar38 = alStack_80[0];
    func_0x000107c4d534();
    lVar37 = alStack_80[0];
  }
  func_0x000107c61574(puVar4);
  func_0x000107c61170(lVar37);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x5d,0x56,0xd,1);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10336d0e4);
    (*pcVar2)();
  }
  puVar4 = puVar8;
  func_0x000107c61544(puVar8,"",0x5d,0x59,0x28,1);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar8);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10336d0e8);
    (*pcVar2)();
  }
  puVar4 = puVar11;
  func_0x000107c61544(puVar11,"",0x5d,0x5c,0x2d,1);
  func_0x000107c61574(puVar13);
  func_0x000107c61574(puVar11);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10336d0ec);
    (*pcVar2)();
  }
  puVar4 = puVar14;
  func_0x000107c61544(puVar14,"",0x5d,0x5f,0x25,1);
  func_0x000107c61574(puVar16);
  func_0x000107c61574(puVar14);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10336d0f0);
    (*pcVar2)();
  }
  puVar4 = puVar17;
  func_0x000107c61544(puVar17,"",0x5d,0x62,0x27,1);
  func_0x000107c61574(puVar19);
  func_0x000107c61574(puVar17);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10336d0f4);
    (*pcVar2)();
  }
  puVar4 = puVar20;
  func_0x000107c61544(puVar20,"",0x5d,0x65,0x25,1);
  func_0x000107c61574(puVar22);
  func_0x000107c61574(puVar20);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10336d0f8);
    (*pcVar2)();
  }
  puVar4 = puVar23;
  func_0x000107c61544(puVar23,"",0x5d,0x68,0x26,1);
  func_0x000107c61574(puVar25);
  func_0x000107c61574(puVar23);
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = puVar26;
    func_0x000107c61544(puVar26,"",0x5d,0x6b,0x27,1);
    func_0x000107c61574(puVar28);
    func_0x000107c61574(puVar26);
    if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10336d100);
      (*pcVar2)();
    }
    puVar4 = puVar29;
    func_0x000107c61544(puVar29,"",0x5d,0x6e,0x2e,1);
    func_0x000107c61574(puVar31);
    func_0x000107c61574(puVar29);
    if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10336d104);
      (*pcVar2)();
    }
    puVar4 = puVar32;
    func_0x000107c61544(puVar32,"",0x5d,0x71,0x2d,1);
    func_0x000107c61574(puVar34);
    func_0x000107c61574(puVar32);
    if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10336d108);
      (*pcVar2)();
    }
    puVar4 = puVar35;
    func_0x000107c61544(puVar35,"",0x5d,0x74,0x35,1);
    func_0x000107c61574(puVar35);
    if (((ulong)puVar4 & 1) == 0) {
      return lVar38;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10336d10c);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10336d0fc);
  (*pcVar2)();
}



/* Entry: 10336d10c; end: 10336d147;  */

void FUN_10336d10c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10336d148; end: 10336d167;  */

void FUN_10336d148(void)

{
  FUN_10336c3d0();
  return;
}



/* Entry: 10336d168; end: 10336d17f;  */

undefined8 FUN_10336d168(void)

{
  return 0;
}



/* Entry: 10336d180; end: 10336d19f;  */

void FUN_10336d180(void)

{
  func_0x000107c61168(&PTR_PTR_112f5cf48);
  return;
}



/* Entry: 10336d1a0; end: 10336d1eb;  */

void FUN_10336d1a0(undefined8 param_1)

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



/* Entry: 10336d1ec; end: 10336d207;  */

void FUN_10336d1ec(long param_1,long param_2)

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



/* Entry: 10336d208; end: 10336d29f;  */

void FUN_10336d208(undefined8 param_1)

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



/* Entry: 10336d2a0; end: 10336d32f;  */

void FUN_10336d2a0(long param_1,long param_2)

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



/* Entry: 10336d330; end: 10336d33b; -[SCCaaSCameraEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336d330(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5cfc0;
  func_0x000107c61428(param_1 + _DAT_112f5cfc0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10336d33c; end: 10336d347; -[SCCaaSCameraEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336d33c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5cfc0;
  func_0x000107c61428(param_1 + _DAT_112f5cfc0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10336d348; end: 10336d353; -[SCCaaSCameraEntryPoint cameraHardwareServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336d348(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5cfc8;
  func_0x000107c61428(param_1 + _DAT_112f5cfc8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10336d354; end: 10336d35f; -[SCCaaSCameraEntryPoint setCameraHardwareServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336d354(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5cfc8;
  func_0x000107c61428(param_1 + _DAT_112f5cfc8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10336d360; end: 10336d36b; -[SCCaaSCameraEntryPoint cameraScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336d360(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5cfd0;
  func_0x000107c61428(param_1 + _DAT_112f5cfd0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10336d36c; end: 10336d377; -[SCCaaSCameraEntryPoint setCameraScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336d36c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5cfd0;
  func_0x000107c61428(param_1 + _DAT_112f5cfd0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10336d378; end: 10336d383; -[SCCaaSCameraEntryPoint cameraUIScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336d378(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5cfd8;
  func_0x000107c61428(param_1 + _DAT_112f5cfd8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10336d384; end: 10336d38f; -[SCCaaSCameraEntryPoint setCameraUIScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336d384(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5cfd8;
  func_0x000107c61428(param_1 + _DAT_112f5cfd8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10336d390; end: 10336d39b; -[SCCaaSCameraEntryPoint lensCarouselLensInjectionServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336d390(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5cfe0;
  func_0x000107c61428(param_1 + _DAT_112f5cfe0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10336d39c; end: 10336d3a7; -[SCCaaSCameraEntryPoint setLensCarouselLensInjectionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336d39c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5cfe0;
  func_0x000107c61428(param_1 + _DAT_112f5cfe0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10336d3a8; end: 10336d3b3; -[SCCaaSCameraEntryPoint captureScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336d3a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5cfe8;
  func_0x000107c61428(param_1 + _DAT_112f5cfe8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10336d3b4; end: 10336d3f7;  */

void FUN_10336d3b4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10336d3f8; end: 10336d403; -[SCCaaSCameraEntryPoint setCaptureScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336d3f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5cfe8;
  func_0x000107c61428(param_1 + _DAT_112f5cfe8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10336d404; end: 10336d457;  */

void FUN_10336d404(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10336d458; end: 10336d49f; -[SCCaaSCameraEntryPoint captureScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336d458(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5cff0;
  func_0x000107c61428(param_1 + _DAT_112f5cff0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10336d4a0; end: 10336d503; -[SCCaaSCameraEntryPoint setCaptureScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336d4a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5cff0;
  func_0x000107c61428(param_1 + _DAT_112f5cff0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10336d504; end: 10336d7b3;  */

/* WARNING: Possible PIC construction at 0x00010336d6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010336d6d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010336d6e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010336d6fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010336d77c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010336d78c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010336d75c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010336d73c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010336d72c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010336d740) */
/* WARNING: Removing unreachable block (ram,0x00010336d760) */
/* WARNING: Removing unreachable block (ram,0x00010336d790) */
/* WARNING: Removing unreachable block (ram,0x00010336d780) */
/* WARNING: Removing unreachable block (ram,0x00010336d6e4) */
/* WARNING: Removing unreachable block (ram,0x00010336d6d4) */
/* WARNING: Removing unreachable block (ram,0x00010336d6c4) */
/* WARNING: Removing unreachable block (ram,0x00010336d730) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336d504(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c3f0f8();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = unaff_x20;
    func_0x000107c3f1f4();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar5 = unaff_x20;
      func_0x000107c3f284();
      func_0x000107c61180();
      if (lVar5 != 0) {
        lVar6 = unaff_x20;
        func_0x000107c3f5d0();
        func_0x000107c61180();
        if (lVar6 == 0) {
          func_0x000107c61170(lVar2);
          lVar2 = lVar3;
        }
        else {
          lVar7 = unaff_x20;
          func_0x000107c3f5dc();
          func_0x000107c61180();
          if (lVar7 == 0) {
            func_0x000107c61170(lVar2);
            lVar2 = lVar3;
          }
          else {
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c4aea0();
            func_0x000107c61180();
            lVar8 = 0;
            FUN_10336c310();
            lVar9 = lVar8;
            func_0x000107c610f8();
            *(undefined8 *)(lVar9 + _DAT_112f5ce98) = 0;
            func_0x000107c61614(lVar9 + _DAT_112f5cea0,0);
            *(long *)(lVar9 + _DAT_112f5cea8) = lVar3;
            *(long *)(lVar9 + _DAT_112f5ceb0) = lVar2;
            *(long *)(lVar9 + _DAT_112f5ceb8) = lVar4;
            *(long *)(lVar9 + _DAT_112f5cec0) = lVar6;
            *(long *)(lVar9 + _DAT_112f5cec8) = lVar5;
            *(long *)(lVar9 + _DAT_112f5ced0) = unaff_x20;
            *(long *)(lVar9 + _DAT_112f5ced8) = lVar7;
            puVar1 = PTR_s_init_1125d9248;
            lStack_70 = lVar9;
            lStack_68 = lVar8;
            func_0x000107c61174(lVar6);
            func_0x000107c61174(lVar7);
            func_0x000107c61154(&lStack_70,puVar1);
            FUN_10336ba5c();
            lVar2 = lVar7;
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10336d7b4; end: 10336d7db; -[SCCaaSCameraEntryPoint begin] */

void FUN_10336d7b4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10336d504();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10336d7dc; end: 10336d81f; -[SCCaaSCameraEntryPoint end] */

void FUN_10336d7dc(undefined8 param_1)

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



/* Entry: 10336d820; end: 10336dbdf;  */

void FUN_10336d820(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == -0x2fffffffffffffee && param_3 == -0x7ffffffef10ef650) ||
     (func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0), (uVar2 & 1) != 0
     )) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53720();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10ecf30)) ||
       (func_0x000107c605b8(0xd000000000000016,0x800000010ef130d0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53024();
    }
    else {
      uVar2 = 0x63536172656d6163;
      if (((param_2 == 0x63536172656d6163) && (param_3 == -0x14ffffffff9a8f91)) ||
         (func_0x000107c605b8(0x63536172656d6163,0xeb0000000065706f,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53098();
      }
      else {
        uVar2 = 0x49556172656d6163;
        if (((param_2 == 0x49556172656d6163) && (param_3 == -0x12ffff9a8f909cad)) ||
           (func_0x000107c605b8(0x49556172656d6163,0xed000065706f6353,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c530ec();
        }
        else {
          uVar2 = 0xd000000000000021;
          if (((param_2 == -0x2fffffffffffffdf) && (param_3 == -0x7ffffffef0f24720)) ||
             (func_0x000107c605b8(0xd000000000000021,0x800000010f0db8e0,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c55c4c();
          }
          else {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef0ebd450)) ||
               (func_0x000107c605b8(0xd000000000000014,0x800000010f142bb0,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c531ec();
            }
            else {
              if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef0ebd430)) {
                uVar2 = 0xd000000000000013;
                func_0x000107c605b8(0xd000000000000013,0x800000010f142bd0,param_2,param_3,0);
                if ((uVar2 & 1) == 0) {
                  func_0x000107c602fc(0x15);
                  func_0x000107c6142c(0xe000000000000000);
                  func_0x000107c5fb78(param_2,param_3);
                  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                      "SCCaaSCameraLaunchingImplementation/SCCaaSCameraEntryPoint.swift"
                                      ,0x40,2,0x43,0);
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x10336dbe0);
                  (*pcVar1)();
                }
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c531e0();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10336dbe0; end: 10336dc8b; -[SCCaaSCameraEntryPoint setValue:forIvarName:] */

void FUN_10336dbe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10336d820(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10336dc8c; end: 10336dd5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336dc8c(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f5cfc0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f5cfc8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f5cfd0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f5cfd8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f5cfe0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f5cfe8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f5cff0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5cff8) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10336dd5c; end: 10336dd7b; -[SCCaaSCameraEntryPoint init] */

void FUN_10336dd5c(void)

{
  FUN_10336dc8c();
  return;
}



/* Entry: 10336dd7c; end: 10336ddaf;  */

void FUN_10336dd7c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10336ddb0; end: 10336de47; -[SCCaaSCameraEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010336de2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010336de30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336ddb0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f5cfc0);
  func_0x000107c61610(param_1 + _DAT_112f5cfc8);
  func_0x000107c61610(param_1 + _DAT_112f5cfd0);
  func_0x000107c61610(param_1 + _DAT_112f5cfd8);
  func_0x000107c61610(param_1 + _DAT_112f5cfe0);
  func_0x000107c61610(param_1 + _DAT_112f5cfe8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5cff0));
  return;
}



/* Entry: 10336de48; end: 10336de67;  */

void FUN_10336de48(void)

{
  func_0x000107c61168(&PTR_PTR_1128d1188);
  return;
}



/* Entry: 10336de68; end: 10336de73; -[SCCaaSCameraCapturedMediaEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336de68(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5d028;
  func_0x000107c61428(param_1 + _DAT_112f5d028,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10336de74; end: 10336de7f; -[SCCaaSCameraCapturedMediaEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336de74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5d028;
  func_0x000107c61428(param_1 + _DAT_112f5d028,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10336de80; end: 10336de8b; -[SCCaaSCameraCapturedMediaEntryPoint cameraFeatureScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336de80(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5d030;
  func_0x000107c61428(param_1 + _DAT_112f5d030,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10336de8c; end: 10336de97; -[SCCaaSCameraCapturedMediaEntryPoint setCameraFeatureScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336de8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5d030;
  func_0x000107c61428(param_1 + _DAT_112f5d030,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10336de98; end: 10336dea3; -[SCCaaSCameraCapturedMediaEntryPoint caasCameraScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336de98(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5d038;
  func_0x000107c61428(param_1 + _DAT_112f5d038,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10336dea4; end: 10336deaf; -[SCCaaSCameraCapturedMediaEntryPoint setCaasCameraScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336dea4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5d038;
  func_0x000107c61428(param_1 + _DAT_112f5d038,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10336deb0; end: 10336debb; -[SCCaaSCameraCapturedMediaEntryPoint cameraSnapModelServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336deb0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5d040;
  func_0x000107c61428(param_1 + _DAT_112f5d040,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10336debc; end: 10336deff;  */

void FUN_10336debc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10336df00; end: 10336df0b; -[SCCaaSCameraCapturedMediaEntryPoint setCameraSnapModelServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336df00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5d040;
  func_0x000107c61428(param_1 + _DAT_112f5d040,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10336df0c; end: 10336df5f;  */

void FUN_10336df0c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10336df60; end: 10336e16f;  */

/* WARNING: Possible PIC construction at 0x00010336e0cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010336e0dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010336e0ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010336e140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010336e130: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010336e144) */
/* WARNING: Removing unreachable block (ram,0x00010336e0f0) */
/* WARNING: Removing unreachable block (ram,0x00010336e0e0) */
/* WARNING: Removing unreachable block (ram,0x00010336e134) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336df60(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  plVar7 = &lStack_70;
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c3f0d0();
  func_0x000107c61180();
  lVar8 = lVar1;
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3eed4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c3f21c();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        lVar4 = 0;
        FUN_10336b83c();
        lVar5 = lVar4;
        func_0x000107c610f8();
        lVar8 = _DAT_112f5ce40;
        puVar6 = PTR_PTR_1126ae810;
        func_0x000107c610f8();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c453e4();
        *(undefined **)(lVar5 + lVar8) = puVar6;
        *(undefined8 *)(lVar5 + _DAT_112f5ce48) = 0;
        *(long *)(lVar5 + _DAT_112f5ce50) = lVar1;
        *(long *)(lVar5 + _DAT_112f5ce58) = lVar2;
        *(long *)(lVar5 + _DAT_112f5ce60) = lVar3;
        *(long *)(lVar5 + _DAT_112f5ce68) = unaff_x20;
        lStack_70 = lVar5;
        lStack_68 = lVar4;
        func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
        lVar8 = *(long *)((long)plVar7 + _DAT_112f5ce60);
        func_0x000107c4dff0();
        func_0x000107c61180();
        if (lVar8 == 0) {
          func_0x000107c61170(lVar1);
          lVar8 = lVar2;
        }
        else {
          lVar1 = lVar8;
          func_0x000107c41f00();
          if ((int)lVar1 != 0) {
            FUN_10336aab4();
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar8);
  return;
}



/* Entry: 10336e170; end: 10336e197; -[SCCaaSCameraCapturedMediaEntryPoint begin] */

void FUN_10336e170(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10336df60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10336e198; end: 10336e1db; -[SCCaaSCameraCapturedMediaEntryPoint end] */

void FUN_10336e198(undefined8 param_1)

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



/* Entry: 10336e1dc; end: 10336e457;  */

void FUN_10336e1dc(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef650)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10da5c0)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000012,0x800000010ef25a40,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0x656d614373616163;
          if (((param_2 == 0x656d614373616163) && (param_3 == -0x109a8f909cac9e8e)) ||
             (func_0x000107c605b8(0x656d614373616163,0xef65706f63536172,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c52efc();
          }
          else {
            uVar2 = 0xd000000000000017;
            if (((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10db7d0)) &&
               (func_0x000107c605b8(0xd000000000000017,0x800000010ef24830,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "SCCaaSCameraLaunchingImplementation/SCCaaSCameraCapturedMediaEntryPoint.swift"
                                  ,0x4d,2,0x35,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10336e458);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c530b0();
          }
          goto LAB_10336e270;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53004();
      goto LAB_10336e270;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_10336e270:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10336e458; end: 10336e503; -[SCCaaSCameraCapturedMediaEntryPoint setValue:forIvarName:] */

void FUN_10336e458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10336e1dc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10336e504; end: 10336e59f; -[SCCaaSCameraCapturedMediaEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336e504(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f5d028,0);
  func_0x000107c61614(param_1 + _DAT_112f5d030,0);
  func_0x000107c61614(param_1 + _DAT_112f5d038,0);
  func_0x000107c61614(param_1 + _DAT_112f5d040,0);
  *(undefined8 *)(param_1 + _DAT_112f5d048) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10336e5a0; end: 10336e5d3;  */

void FUN_10336e5a0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10336e5d4; end: 10336e63b; -[SCCaaSCameraCapturedMediaEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336e5d4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f5d028);
  func_0x000107c61610(param_1 + _DAT_112f5d030);
  func_0x000107c61610(param_1 + _DAT_112f5d038);
  func_0x000107c61610(param_1 + _DAT_112f5d040);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5d048));
  return;
}



/* Entry: 10336e63c; end: 10336e65b;  */

void FUN_10336e63c(void)

{
  func_0x000107c61168(&PTR_PTR_1128d1278);
  return;
}



/* Entry: 10336e65c; end: 10336e6c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336e65c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001007d4ed0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f5d080) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10336e6c4; end: 10336e70f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336e6c4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f5d080) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10336e710; end: 10336e857; -[_TtC19SCCaptureScopeProxy22SCCaptureScopeServices buildWithPublicCameraFeatureCatalog:uiContainer:replyConfiguration:captureWorkflowDelegate:captureWorkflowResultDelegate:startRunningConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336e710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *apuStack_78 [2];
  undefined8 uStack_68;
  
  puVar1 = PTR_PTR_1126abed8;
  func_0x000107c610f8();
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c615f0(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  func_0x000107c481c8(puVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  apuStack_78[0] = puVar1;
  func_0x00010008a7c8(&uStack_68,apuStack_78);
  func_0x000100083b20(apuStack_78);
  func_0x000107c61574(uStack_68);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c615e8(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(apuStack_78[0]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10336e858; end: 10336e9fb; -[_TtC19SCCaptureScopeProxy22SCCaptureScopeServices buildWithPublicCameraFeatureCatalog:replyConfiguration:presentingViewController:captureWorkflowDelegate:captureWorkflowResultDelegate:lensDataProvider:timelineDataProvider:shortcutContextAction:startRunningConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336e858(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined *apuStack_78 [2];
  undefined8 uStack_68;
  
  puVar1 = PTR_PTR_1126abed8;
  func_0x000107c610f8();
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c615f0(param_7);
  func_0x000107c615f0(param_8);
  func_0x000107c615f0(param_9);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c481c4(puVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11);
  apuStack_78[0] = puVar1;
  func_0x00010008a7c8(&uStack_68,apuStack_78);
  func_0x000100083b20(apuStack_78);
  func_0x000107c61574(uStack_68);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c615e8(param_7);
  func_0x000107c615e8(param_8);
  func_0x000107c615e8(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(apuStack_78[0]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10336e9fc; end: 10336ea2f;  */

void FUN_10336e9fc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10336ea30; end: 10336ea5f; -[_TtC19SCCaptureScopeProxy22SCCaptureScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336ea30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f5d080));
  return;
}


