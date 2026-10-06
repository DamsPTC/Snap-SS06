/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102b1665c; end: 102b1670b; -[SCQuickReplyHandsFreeBridge destinationHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b1665c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + _DAT_112ef08b8);
  func_0x000107c61428(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    pcStack_68 = FUN_102b16d70;
    puStack_60 = &UNK_11059d348;
    ppuVar3 = &puStack_78;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    func_0x000107c60bc4(ppuVar3);
    lVar2 = lStack_50;
    func_0x000107c6157c(lVar4);
    func_0x000107c61574(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 102b1670c; end: 102b1671b;  */

void FUN_102b1670c(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 102b1671c; end: 102b167d7; -[SCQuickReplyHandsFreeBridge setDestinationHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b1671c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uVar5 = 0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_11059d330;
    func_0x000107c613fc(&UNK_11059d330,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    uVar5 = 0x102b16d4c;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112ef08b8);
  func_0x000107c61428(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = uVar5;
  puVar1[1] = puVar4;
  func_0x000107c61174(param_1);
  func_0x00010075bc30(uVar2,uVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102b167d8; end: 102b16817;  */

void FUN_102b167d8(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c610f8();
  func_0x00010075b7a0(param_1,param_2);
  return;
}



/* Entry: 102b16818; end: 102b168f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b16818(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_5 + 0x10,auStack_68,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61618();
  if (param_5 != 0) {
    puVar1 = (undefined8 *)(param_5 + _DAT_112ef08b8);
    func_0x000107c61428(puVar1,auStack_80,0,0);
    pcVar2 = (code *)*puVar1;
    if (pcVar2 == (code *)0x0) {
      func_0x000107c61170(param_5);
    }
    else {
      uVar3 = puVar1[1];
      FUN_102b1670c(pcVar2,uVar3);
      func_0x000107c61170(param_5);
      (*pcVar2)(param_1,param_2,param_3,param_4);
      func_0x00010075bc30(pcVar2,uVar3);
    }
  }
  return;
}



/* Entry: 102b168f8; end: 102b1695f; -[SCQuickReplyHandsFreeBridge sendBarDidBeginActivation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b168f8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ef08c0);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ef08c0))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x18);
  func_0x000107c61174(param_1);
  (*pcVar3)(uVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b16960; end: 102b169c7; -[SCQuickReplyHandsFreeBridge sendBarDidExit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b16960(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ef08c0);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ef08c0))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x20);
  func_0x000107c61174(param_1);
  (*pcVar3)(uVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b169c8; end: 102b16a83; -[SCQuickReplyHandsFreeBridge selectSnapchatterDestinationWithRecipient:index:] */

/* WARNING: Possible PIC construction at 0x000102b16a5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b16a60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b169c8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ef08c0);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ef08c0))[1];
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  if (param_4 == 0) {
    param_4 = 0;
    uVar3 = 0x21;
  }
  else {
    func_0x000107c61174(param_4);
    func_0x000107c5fe3c();
    uVar3 = 0x20;
  }
  func_0x000107c614f0(uVar2);
  (**(code **)(lVar1 + 0x28))(param_3,param_4,uVar3,uVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b16a84; end: 102b16a8b; -[SCQuickReplyHandsFreeBridge selectSpotlightDestinationWithIndex:] */

/* WARNING: Possible PIC construction at 0x000102b16b24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b16b28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b16a84(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112ef08c0);
  lVar2 = ((undefined8 *)(param_1 + _DAT_112ef08c0))[1];
  func_0x000107c61174();
  bVar1 = param_3 == 0;
  if (bVar1) {
    param_3 = 0;
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c5fe3c();
  }
  func_0x000107c614f0(uVar3);
  (**(code **)(lVar2 + 0x28))(param_3,bVar1,0x40,uVar3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b16a8c; end: 102b16a93; -[SCQuickReplyHandsFreeBridge selectPublicStoryDestinationWithIndex:] */

/* WARNING: Possible PIC construction at 0x000102b16b24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b16b28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b16a8c(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112ef08c0);
  lVar2 = ((undefined8 *)(param_1 + _DAT_112ef08c0))[1];
  func_0x000107c61174();
  bVar1 = param_3 == 0;
  if (bVar1) {
    param_3 = 0;
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c5fe3c();
  }
  func_0x000107c614f0(uVar3);
  (**(code **)(lVar2 + 0x28))(param_3,bVar1,0x60,uVar3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b16a94; end: 102b16a9b; -[SCQuickReplyHandsFreeBridge selectEmptyDestinationWithIndex:] */

/* WARNING: Possible PIC construction at 0x000102b16b24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b16b28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b16a94(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112ef08c0);
  lVar2 = ((undefined8 *)(param_1 + _DAT_112ef08c0))[1];
  func_0x000107c61174();
  bVar1 = param_3 == 0;
  if (bVar1) {
    param_3 = 0;
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c5fe3c();
  }
  func_0x000107c614f0(uVar3);
  (**(code **)(lVar2 + 0x28))(param_3,bVar1,0x80,uVar3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b16a9c; end: 102b16c03;  */

/* WARNING: Possible PIC construction at 0x000102b16b24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b16b28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b16a9c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112ef08c0);
  lVar2 = ((undefined8 *)(param_1 + _DAT_112ef08c0))[1];
  func_0x000107c61174();
  bVar1 = param_3 == 0;
  if (bVar1) {
    param_3 = 0;
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c5fe3c();
  }
  func_0x000107c614f0(uVar3);
  (**(code **)(lVar2 + 0x28))(param_3,bVar1,param_4,uVar3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b16c04; end: 102b16ccb; -[SCQuickReplyHandsFreeBridge dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b16c04(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ef08c0);
  lVar2 = ((undefined8 *)(param_1 + _DAT_112ef08c0))[1];
  func_0x000107c614f0(uVar1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112ef08c8);
  pcVar5 = *(code **)(lVar2 + 0x10);
  func_0x000107c61174();
  func_0x000107c615f0(uVar1);
  func_0x000107c61174(uVar4);
  (*pcVar5)();
  func_0x000107c615e8(uVar1);
  func_0x000107c61170(uVar4);
  lStack_60 = param_1;
  lStack_58 = lVar3;
  func_0x000107c61154(&lStack_60,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b16ccc; end: 102b16d17; -[SCQuickReplyHandsFreeBridge .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b16ccc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ef08c0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ef08c8));
  if (*(long *)(param_1 + _DAT_112ef08b8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112ef08b8))[1]);
    return;
  }
  return;
}



/* Entry: 102b16d18; end: 102b16d43; -[SCQuickReplyHandsFreeBridge init] */

void FUN_102b16d18(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCameraQuickReplyServiceAPI.SCQuickReplyHandsFreeBridge",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b16d44);
  (*pcVar1)();
}



/* Entry: 102b16d44; end: 102b16d6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b16d44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    puVar1 = (undefined8 *)(lVar2 + _DAT_112ef08b8);
    func_0x000107c61428(puVar1,auStack_80,0,0);
    pcVar3 = (code *)*puVar1;
    if (pcVar3 == (code *)0x0) {
      func_0x000107c61170(lVar2);
    }
    else {
      uVar4 = puVar1[1];
      FUN_102b1670c(pcVar3,uVar4);
      func_0x000107c61170(lVar2);
      (*pcVar3)(param_1,param_2,param_3,param_4);
      func_0x00010075bc30(pcVar3,uVar4);
    }
  }
  return;
}



/* Entry: 102b16d70; end: 102b16e0f;  */

/* WARNING: Possible PIC construction at 0x000102b16df0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b16df4) */

void FUN_102b16d70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = param_2;
  func_0x000107c5faec(param_2);
  func_0x000107c6157c(uVar2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  (*pcVar1)(param_2,uVar4,param_3,param_4);
  func_0x000107c61574(uVar2);
  func_0x000107c6142c(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102b16e10; end: 102b16e9f;  */

void FUN_102b16e10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  func_0x000107c5fadc();
  (**(code **)(param_5 + 0x10))(param_5,param_1,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b16ea0; end: 102b16eeb; -[SCQuickReplyListenerBridge tag] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b16ea0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ef08f8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ef08f8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102b16eec; end: 102b16f07; -[SCQuickReplyListenerBridge destinationHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b16eec(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + _DAT_112ef0900);
  func_0x000107c61428(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    pcStack_68 = FUN_102b16f08;
    puStack_60 = &UNK_11059d4a8;
    ppuVar3 = &puStack_78;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    func_0x000107c60bc4(ppuVar3);
    lVar2 = lStack_50;
    func_0x000107c6157c(lVar4);
    func_0x000107c61574(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 102b16f08; end: 102b16f7f;  */

void FUN_102b16f08(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = param_2;
  func_0x000107c5faec(param_2);
  func_0x000107c6157c(uVar2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,uVar4,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c6142c(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102b16f80; end: 102b1703b; -[SCQuickReplyListenerBridge setDestinationHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b16f80(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uVar5 = 0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_11059d490;
    func_0x000107c613fc(&UNK_11059d490,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    uVar5 = 0x102b17dcc;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112ef0900);
  func_0x000107c61428(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = uVar5;
  puVar1[1] = puVar4;
  func_0x000107c61174(param_1);
  func_0x000100d1ad68(uVar2,uVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102b1703c; end: 102b17057; -[SCQuickReplyListenerBridge destinationSelectionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b1703c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + _DAT_112ef0908);
  func_0x000107c61428(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    pcStack_68 = FUN_102b16d70;
    puStack_60 = &UNK_11059d458;
    ppuVar3 = &puStack_78;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    func_0x000107c60bc4(ppuVar3);
    lVar2 = lStack_50;
    func_0x000107c6157c(lVar4);
    func_0x000107c61574(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 102b17058; end: 102b17113; -[SCQuickReplyListenerBridge setDestinationSelectionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b17058(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_11059d440;
    func_0x000107c613fc(&UNK_11059d440,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    pcVar5 = FUN_102b17d7c;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112ef0908);
  func_0x000107c61428(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = pcVar5;
  puVar1[1] = puVar4;
  func_0x000107c61174(param_1);
  func_0x000100d1ad68(uVar2,uVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102b17114; end: 102b1712f; -[SCQuickReplyListenerBridge activationBeganHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b17114(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + _DAT_112ef0910);
  func_0x000107c61428(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_11059d408;
    ppuVar3 = &puStack_78;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    func_0x000107c60bc4(ppuVar3);
    lVar2 = lStack_50;
    func_0x000107c6157c(lVar4);
    func_0x000107c61574(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 102b17130; end: 102b171eb; -[SCQuickReplyListenerBridge setActivationBeganHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b17130(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uVar5 = 0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_11059d3f0;
    func_0x000107c613fc(&UNK_11059d3f0,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    uVar5 = 0x102b17e2c;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112ef0910);
  func_0x000107c61428(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = uVar5;
  puVar1[1] = puVar4;
  func_0x000107c61174(param_1);
  func_0x000100d1ad68(uVar2,uVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102b171ec; end: 102b17207; -[SCQuickReplyListenerBridge activationExitedHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b171ec(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + _DAT_112ef0918);
  func_0x000107c61428(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_11059d3b8;
    ppuVar3 = &puStack_78;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    func_0x000107c60bc4(ppuVar3);
    lVar2 = lStack_50;
    func_0x000107c6157c(lVar4);
    func_0x000107c61574(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 102b17208; end: 102b172ab;  */

void FUN_102b17208(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + *param_3);
  func_0x000107c61428(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    ppuVar3 = &puStack_78;
    uStack_68 = param_4;
    uStack_60 = param_5;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    func_0x000107c60bc4(ppuVar3);
    lVar2 = lStack_50;
    func_0x000107c6157c(lVar4);
    func_0x000107c61574(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 102b172ac; end: 102b17367; -[SCQuickReplyListenerBridge setActivationExitedHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b172ac(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uVar5 = 0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_11059d3a0;
    func_0x000107c613fc(&UNK_11059d3a0,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    uVar5 = 0x102b17d54;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112ef0918);
  func_0x000107c61428(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = uVar5;
  puVar1[1] = puVar4;
  func_0x000107c61174(param_1);
  func_0x000100d1ad68(uVar2,uVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102b17368; end: 102b173cf; -[SCQuickReplyListenerBridge lastDestinationKind] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b17368(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ef0920);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar3,uVar2);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102b173d0; end: 102b17437; -[SCQuickReplyListenerBridge setLastDestinationKind:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b173d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112ef0920);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 102b17438; end: 102b1747f; -[SCQuickReplyListenerBridge lastDestinationIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b17438(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef0928;
  func_0x000107c61428(param_1 + _DAT_112ef0928,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102b17480; end: 102b174e3; -[SCQuickReplyListenerBridge setLastDestinationIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b17480(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef0928;
  func_0x000107c61428(param_1 + _DAT_112ef0928,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102b174e4; end: 102b1750b; -[SCQuickReplyListenerBridge initWithTag:] */

void FUN_102b174e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x00010075b9a0();
  return;
}



/* Entry: 102b1750c; end: 102b17803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b1750c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if (lRam0000000112ef0930 != -1) {
    param_1 = 0x112ef0930;
    func_0x000107c61568(0x112ef0930,&UNK_10075bb8c);
  }
  uVar2 = uRam0000000112ef0938;
  func_0x000107c5ff7c();
  lVar5 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 2;
  *(undefined8 *)(lVar5 + 0x10) = 1;
  uStack_58 = 0;
  uStack_50 = 0xe000000000000000;
  func_0x000107c602fc(0x2f);
  func_0x000107c6142c(uStack_50);
  uStack_58 = 0xd00000000000002d;
  uStack_50 = 0x800000010f0ef630;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ef08f8);
  func_0x000107c5fb78(uVar6,((undefined8 *)(unaff_x20 + _DAT_112ef08f8))[1]);
  uVar4 = uStack_50;
  uVar3 = uStack_58;
  *(undefined **)(lVar5 + 0x38) = PTR___sSSN_11034da80;
  func_0x00010075bbf0();
  *(undefined8 *)(lVar5 + 0x40) = uVar6;
  *(undefined8 *)(lVar5 + 0x20) = uVar3;
  *(undefined8 *)(lVar5 + 0x28) = uVar4;
  func_0x000107c5f120("%{public}@",10,2,0x100000000,uVar2,param_1,lVar5);
  func_0x000107c61574(lVar5);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ef0910);
  func_0x000107c61428(puVar1,&uStack_58,0,0);
  pcVar7 = (code *)*puVar1;
  if (pcVar7 != (code *)0x0) {
    uVar6 = puVar1[1];
    func_0x000107c6157c(uVar6);
    (*pcVar7)();
    func_0x000100d1ad68(pcVar7,uVar6);
  }
  return;
}



/* Entry: 102b17804; end: 102b17c47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b17804(undefined8 param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  code *pcVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined1 auStack_c0 [24];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar2 = param_3 >> 5 & 7;
  if (uVar2 < 2) {
    if (uVar2 == 0) {
      param_2 = param_2 & 0xff;
      uVar13 = 0xe600000000000000;
      uVar14 = 0x6172656d6163;
      param_1 = 0;
    }
    else {
      param_2 = param_3 & 0x1f;
      func_0x000107c61174();
      uVar13 = 0xeb00000000726574;
      uVar14 = 0x7461686370616e73;
    }
  }
  else {
    uVar10 = 0xeb0000000079726f;
    uVar3 = 0x745363696c627570;
    if (uVar2 != 3) {
      uVar10 = 0xe500000000000000;
      uVar3 = 0x7974706d65;
    }
    param_2 = param_2 & 0xff;
    uVar13 = 0xe900000000000074;
    uVar14 = 0x6867696c746f7073;
    if (uVar2 != 2) {
      uVar13 = uVar10;
      uVar14 = uVar3;
    }
    param_1 = 0;
  }
  if (param_2 == 1) {
    puVar15 = (undefined *)0x0;
  }
  else {
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c46ed0();
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ef0920);
  func_0x000107c61428(puVar1,auStack_78,1,0);
  uVar10 = puVar1[1];
  *puVar1 = uVar14;
  puVar1[1] = uVar13;
  func_0x000107c6142c(uVar10);
  lVar7 = _DAT_112ef0928;
  func_0x000107c61428(unaff_x20 + _DAT_112ef0928,auStack_90,1,0);
  uVar10 = *(undefined8 *)(unaff_x20 + lVar7);
  *(undefined **)(unaff_x20 + lVar7) = puVar15;
  func_0x000107c61434(uVar13);
  puVar6 = puVar15;
  func_0x000107c61174(puVar15);
  func_0x000107c61170(uVar10);
  if (lRam0000000112ef0930 != -1) {
    uVar10 = 0x112ef0930;
    func_0x000107c61568(0x112ef0930,&UNK_10075bb8c);
  }
  uVar3 = uRam0000000112ef0938;
  func_0x000107c5ff7c();
  lVar7 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x18) = 2;
  *(undefined8 *)(lVar7 + 0x10) = 1;
  uStack_a8 = 0;
  uStack_a0 = 0xe000000000000000;
  func_0x000107c602fc(0x3b);
  func_0x000107c5fb78(0xd000000000000028,0x800000010f0ef690);
  func_0x000107c5fb78(*(undefined8 *)(unaff_x20 + _DAT_112ef08f8),
                      ((undefined8 *)(unaff_x20 + _DAT_112ef08f8))[1]);
  func_0x000107c5fb78(0x3d646e696b20,0xe600000000000000);
  func_0x000107c5fb78(uVar14,uVar13);
  func_0x000107c6142c(uVar13);
  uVar9 = 0xe700000000000000;
  func_0x000107c5fb78(0x3d7865646e6920);
  if (puVar15 == (undefined *)0x0) {
    uVar9 = 0xe300000000000000;
    puVar11 = (undefined *)0x6c696e;
  }
  else {
    puVar8 = puVar6;
    func_0x000107c5c1d4(puVar6);
    func_0x000107c61180();
    puVar11 = puVar8;
    func_0x000107c5faec();
    func_0x000107c61170(puVar8);
  }
  func_0x000107c5fb78(puVar11,uVar9);
  func_0x000107c6142c();
  uVar5 = uStack_a0;
  uVar4 = uStack_a8;
  *(undefined **)(lVar7 + 0x38) = PTR___sSSN_11034da80;
  func_0x00010075bbf0();
  *(undefined8 *)(lVar7 + 0x40) = uVar9;
  *(undefined8 *)(lVar7 + 0x20) = uVar4;
  *(undefined8 *)(lVar7 + 0x28) = uVar5;
  func_0x000107c5f120("%{public}@",10,2,0x100000000,uVar3,uVar10,lVar7);
  func_0x000107c61574(lVar7);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ef0900);
  func_0x000107c61428(puVar1,&uStack_a8,0,0);
  pcVar12 = (code *)*puVar1;
  if (pcVar12 != (code *)0x0) {
    uVar10 = puVar1[1];
    func_0x000107c6157c(uVar10);
    (*pcVar12)(uVar14,uVar13,puVar15);
    func_0x000100d1ad68(pcVar12,uVar10);
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ef0908);
  func_0x000107c61428(puVar1,auStack_c0,0,0);
  pcVar12 = (code *)*puVar1;
  if (pcVar12 == (code *)0x0) {
    func_0x000107c61170(puVar6);
  }
  else {
    uVar10 = puVar1[1];
    func_0x000107c6157c(uVar10);
    (*pcVar12)(uVar14,uVar13,puVar15,param_1);
    func_0x000107c61170(puVar6);
    func_0x000100d1ad68(pcVar12,uVar10);
  }
  func_0x000107c6142c(uVar13);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102b17c48; end: 102b17ca7; -[SCQuickReplyListenerBridge init] */

void FUN_102b17c48(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCameraQuickReplyServiceAPI.QuickReplyListenerBridge",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b17c74);
  (*pcVar1)();
}



/* Entry: 102b17ca8; end: 102b17d47; -[SCQuickReplyListenerBridge .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b17ca8(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ef08f8 + 8));
  func_0x000100d1ad68(*(undefined8 *)(param_1 + _DAT_112ef0900),
                      ((undefined8 *)(param_1 + _DAT_112ef0900))[1]);
  func_0x000100d1ad68(*(undefined8 *)(param_1 + _DAT_112ef0908),
                      ((undefined8 *)(param_1 + _DAT_112ef0908))[1]);
  func_0x000100d1ad68(*(undefined8 *)(param_1 + _DAT_112ef0910),
                      ((undefined8 *)(param_1 + _DAT_112ef0910))[1]);
  func_0x000100d1ad68(*(undefined8 *)(param_1 + _DAT_112ef0918),
                      ((undefined8 *)(param_1 + _DAT_112ef0918))[1]);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ef0920 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef0928));
  return;
}



/* Entry: 102b17d48; end: 102b17d7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b17d48(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  code *pcVar7;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if (lRam0000000112ef0930 != -1) {
    param_1 = 0x112ef0930;
    func_0x000107c61568(0x112ef0930,&UNK_10075bb8c);
  }
  uVar2 = uRam0000000112ef0938;
  func_0x000107c5ff7c();
  lVar5 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 2;
  *(undefined8 *)(lVar5 + 0x10) = 1;
  uStack_58 = 0;
  uStack_50 = 0xe000000000000000;
  func_0x000107c602fc(0x2f);
  func_0x000107c6142c(uStack_50);
  uStack_58 = 0xd00000000000002d;
  uStack_50 = 0x800000010f0ef630;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ef08f8);
  func_0x000107c5fb78(uVar6,((undefined8 *)(unaff_x20 + _DAT_112ef08f8))[1]);
  uVar4 = uStack_50;
  uVar3 = uStack_58;
  *(undefined **)(lVar5 + 0x38) = PTR___sSSN_11034da80;
  func_0x00010075bbf0();
  *(undefined8 *)(lVar5 + 0x40) = uVar6;
  *(undefined8 *)(lVar5 + 0x20) = uVar3;
  *(undefined8 *)(lVar5 + 0x28) = uVar4;
  func_0x000107c5f120("%{public}@",10,2,0x100000000,uVar2,param_1,lVar5);
  func_0x000107c61574(lVar5);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ef0910);
  func_0x000107c61428(puVar1,&uStack_58,0,0);
  pcVar7 = (code *)*puVar1;
  if (pcVar7 != (code *)0x0) {
    uVar6 = puVar1[1];
    func_0x000107c6157c(uVar6);
    (*pcVar7)();
    func_0x000100d1ad68(pcVar7,uVar6);
  }
  return;
}



/* Entry: 102b17d7c; end: 102b17e13;  */

void FUN_102b17d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b17e14; end: 102b17e43;  */

void FUN_102b17e14(long param_1,long param_2)

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



/* Entry: 102b17e44; end: 102b17f1b;  */

void FUN_102b17e44(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102b17f1c; end: 102b17f3b;  */

void FUN_102b17f1c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 102b17f3c; end: 102b17f7b;  */

void FUN_102b17f3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ef0970 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db20820;
  func_0x000107c61520(&UNK_10db20820,&UNK_11059d4e8);
  puRam0000000112ef0970 = puVar1;
  return;
}



/* Entry: 102b17f7c; end: 102b17fc3;  */

undefined1  [16] FUN_102b17f7c(void)

{
  return ZEXT816(0x11059d4e8);
}



/* Entry: 102b17fc4; end: 102b1805f;  */

undefined8 * FUN_102b17fc4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x000102b17f8c(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 102b18060; end: 102b180a3;  */

undefined8 * FUN_102b18060(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x000102b17fb0(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 102b180a4; end: 102b18193;  */

int FUN_102b180a4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7b < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0x7c;
  }
  uVar1 = ((uint)(*(byte *)(param_1 + 4) >> 5) | (*(byte *)(param_1 + 4) >> 1 & 0xf) << 3) ^ 0x7f;
  if (0x7a < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102b18194; end: 102b18547;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102b18194(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  func_0x000100b48260();
  if (lVar3 != 0) {
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_2;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_3;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_4;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_5;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_6;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_7;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_8;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_9;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_10;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_11;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_12;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uStack_78 = param_13;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(auStack_70[0]);
    *(long *)(unaff_x20 + _DAT_112ef0978) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112ef0980) = param_14;
    puVar4 = auStack_88;
    func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_13);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b18548);
  (*pcVar2)();
}



/* Entry: 102b18548; end: 102b185a7; -[_TtC26MainCameraScopeGraphBridge41MainCameraScopeGraphBridgeSaberEntryPoint init] */

void FUN_102b18548(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MainCameraScopeGraphBridge.MainCameraScopeGraphBridgeSaberEntryPoint",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b18574);
  (*pcVar1)();
}



/* Entry: 102b185a8; end: 102b185df; -[_TtC26MainCameraScopeGraphBridge41MainCameraScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b185c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b185c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b185a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef0978));
  return;
}



/* Entry: 102b185e0; end: 102b18607;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b185e0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ef0980),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ef0978));
  return;
}



/* Entry: 102b18608; end: 102b186a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102b18608(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112ef2138);
  *(undefined8 *)(unaff_x20 + _DAT_112ef09b0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ef09b8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102b186a4; end: 102b18703; -[_TtC26MainCameraScopeGraphBridge39ARBarIntegrationServicesSaberEntryPoint init] */

void FUN_102b186a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MainCameraScopeGraphBridge.ARBarIntegrationServicesSaberEntryPoint",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b186d0);
  (*pcVar1)();
}



/* Entry: 102b18704; end: 102b18797; -[_TtC26MainCameraScopeGraphBridge39ARBarIntegrationServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b18704(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ef09b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef09b8));
  return;
}



/* Entry: 102b18798; end: 102b1879f;  */

undefined8 FUN_102b18798(void)

{
  return 0;
}



/* Entry: 102b187a0; end: 102b1883b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102b187a0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112ef2160);
  *(undefined8 *)(unaff_x20 + _DAT_112ef09e8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ef09f0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102b1883c; end: 102b1889b; -[_TtC26MainCameraScopeGraphBridge37SCARBarAdapterServicesSaberEntryPoint init] */

void FUN_102b1883c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MainCameraScopeGraphBridge.SCARBarAdapterServicesSaberEntryPoint",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b18868);
  (*pcVar1)();
}



/* Entry: 102b1889c; end: 102b1892f; -[_TtC26MainCameraScopeGraphBridge37SCARBarAdapterServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b1889c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ef09e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef09f0));
  return;
}



/* Entry: 102b18930; end: 102b18937;  */

undefined8 FUN_102b18930(void)

{
  return 0;
}



/* Entry: 102b18938; end: 102b189d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102b18938(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112ef2170);
  *(undefined8 *)(unaff_x20 + _DAT_112ef0a20) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ef0a28) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102b189d4; end: 102b18a33; -[_TtC26MainCameraScopeGraphBridge30SCARBarServicesSaberEntryPoint init] */

void FUN_102b189d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MainCameraScopeGraphBridge.SCARBarServicesSaberEntryPoint",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b18a00);
  (*pcVar1)();
}



/* Entry: 102b18a34; end: 102b18ac7; -[_TtC26MainCameraScopeGraphBridge30SCARBarServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b18a34(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ef0a20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef0a28));
  return;
}



/* Entry: 102b18ac8; end: 102b18acf;  */

undefined8 FUN_102b18ac8(void)

{
  return 0;
}



/* Entry: 102b18ad0; end: 102b18b6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102b18ad0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112ef21b8);
  *(undefined8 *)(unaff_x20 + _DAT_112ef0a58) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ef0a60) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102b18b6c; end: 102b18bcb; -[_TtC26MainCameraScopeGraphBridge47SCMainCameraPresentationServicesSaberEntryPoint init] */

void FUN_102b18b6c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MainCameraScopeGraphBridge.SCMainCameraPresentationServicesSaberEntryPoint",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b18b98);
  (*pcVar1)();
}



/* Entry: 102b18bcc; end: 102b18c5f; -[_TtC26MainCameraScopeGraphBridge47SCMainCameraPresentationServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b18bcc(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ef0a58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef0a60));
  return;
}



/* Entry: 102b18c60; end: 102b18c67;  */

undefined8 FUN_102b18c60(void)

{
  return 0;
}



/* Entry: 102b18c68; end: 102b18d03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102b18c68(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112ef2230);
  *(undefined8 *)(unaff_x20 + _DAT_112ef0a90) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ef0a98) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102b18d04; end: 102b18d63; -[_TtC26MainCameraScopeGraphBridge58SCMainCameraScopedLensCarouselScopeServicesSaberEntryPoint init] */

void FUN_102b18d04(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MainCameraScopeGraphBridge.SCMainCameraScopedLensCarouselScopeServicesSaberEntryPoint"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b18d30);
  (*pcVar1)();
}



/* Entry: 102b18d64; end: 102b18df7; -[_TtC26MainCameraScopeGraphBridge58SCMainCameraScopedLensCarouselScopeServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b18d64(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ef0a90));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef0a98));
  return;
}



/* Entry: 102b18df8; end: 102b18dff;  */

undefined8 FUN_102b18df8(void)

{
  return 0;
}



/* Entry: 102b18e00; end: 102b18e9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102b18e00(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112ef2298);
  *(undefined8 *)(unaff_x20 + _DAT_112ef0ac8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ef0ad0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102b18e9c; end: 102b18efb; -[_TtC26MainCameraScopeGraphBridge65SCSponsoredSocialUnlockViewThroughTrackingServicesSaberEntryPoint init] */

void FUN_102b18e9c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MainCameraScopeGraphBridge.SCSponsoredSocialUnlockViewThroughTrackingServicesSaberEntryPoint"
                      ,0x5c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b18ec8);
  (*pcVar1)();
}



/* Entry: 102b18efc; end: 102b18f8f; -[_TtC26MainCameraScopeGraphBridge65SCSponsoredSocialUnlockViewThroughTrackingServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b18efc(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ef0ac8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef0ad0));
  return;
}



/* Entry: 102b18f90; end: 102b18f97;  */

undefined8 FUN_102b18f90(void)

{
  return 0;
}



/* Entry: 102b18f98; end: 102b18ffb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102b18f98(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112ef2140);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102b18ffc; end: 102b19003;  */

void FUN_102b18ffc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102b19004; end: 102b190a3;  */

void FUN_102b19004(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b190a4; end: 102b190c3;  */

void FUN_102b190a4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102b190c4; end: 102b19127;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102b190c4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112ef2148);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102b19128; end: 102b1912f;  */

void FUN_102b19128(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102b19130; end: 102b191cf;  */

void FUN_102b19130(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b191d0; end: 102b191ef;  */

void FUN_102b191d0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102b191f0; end: 102b19253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102b191f0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112ef2150);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102b19254; end: 102b1925b;  */

void FUN_102b19254(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102b1925c; end: 102b192fb;  */

void FUN_102b1925c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b192fc; end: 102b1931b;  */

void FUN_102b192fc(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102b1931c; end: 102b1937f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102b1931c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112ef2180);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102b19380; end: 102b19387;  */

void FUN_102b19380(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102b19388; end: 102b19427;  */

void FUN_102b19388(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b19428; end: 102b19447;  */

void FUN_102b19428(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102b19448; end: 102b194ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102b19448(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112ef2188);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102b194ac; end: 102b194b3;  */

void FUN_102b194ac(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102b194b4; end: 102b19553;  */

void FUN_102b194b4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b19554; end: 102b19573;  */

void FUN_102b19554(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102b19574; end: 102b195d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102b19574(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112ef21a8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102b195d8; end: 102b195df;  */

void FUN_102b195d8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102b195e0; end: 102b1967f;  */

void FUN_102b195e0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b19680; end: 102b1969f;  */

void FUN_102b19680(void)

{
  func_0x000100083b20();
  return;
}


