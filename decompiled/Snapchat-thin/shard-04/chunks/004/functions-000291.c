/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10347d650; end: 10347d65b;  */

void FUN_10347d650(void)

{
  return;
}



/* Entry: 10347d65c; end: 10347d6af;  */

void FUN_10347d65c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10347d6b0; end: 10347d6bf;  */

void FUN_10347d6b0(void)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 0x20))(uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 10347d6c0; end: 10347d6f7;  */

void FUN_10347d6c0(void)

{
  func_0x00010347d490();
  return;
}



/* Entry: 10347d6f8; end: 10347d70f;  */

void FUN_10347d6f8(undefined8 param_1)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 0x30))(param_1,uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 10347d710; end: 10347d80f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10347d710(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  func_0x000107c613fc();
  puVar1 = &UNK_11065aac8;
  func_0x000107c613fc(&UNK_11065aac8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  func_0x0001000285a8(0x112f70968,&UNK_10dbccdf0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  pcVar2 = FUN_10347d958;
  func_0x0001000bdd8c(FUN_10347d958,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  uVar4 = *(undefined8 *)(param_3 + _DAT_113097748);
  func_0x000107c615f0(uVar4);
  func_0x000107c61170(param_3);
  lVar3 = 0;
  func_0x00010347dc44();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = uVar4;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(code **)(lVar3 + 0x10) = pcVar2;
  *(long *)(unaff_x20 + 0x10) = lVar3;
  return unaff_x20;
}



/* Entry: 10347d810; end: 10347d907;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347d810(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  puVar1 = &UNK_11065aaf0;
  func_0x000107c613fc(&UNK_11065aaf0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  func_0x0001000285a8(0x112f70968,&UNK_10dbccdf0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  pcVar2 = FUN_10347d9f0;
  func_0x0001000bdd8c(FUN_10347d9f0,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  uVar4 = *(undefined8 *)(param_3 + _DAT_113097748);
  func_0x000107c615f0(uVar4);
  func_0x000107c61170(param_3);
  lVar3 = 0;
  func_0x00010347dc44();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = uVar4;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(code **)(lVar3 + 0x10) = pcVar2;
  *(long *)(unaff_x20 + 0x10) = lVar3;
  return;
}



/* Entry: 10347d908; end: 10347d957;  */

void FUN_10347d908(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c4b254();
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10347d958; end: 10347d95f;  */

void FUN_10347d958(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4b254();
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10347d960; end: 10347d97f;  */

void FUN_10347d960(void)

{
  FUN_10347d9f4();
  return;
}



/* Entry: 10347d980; end: 10347d9a3;  */

void FUN_10347d980(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10347d9a4; end: 10347d9c7;  */

void FUN_10347d9a4(void)

{
  FUN_10347d9f4();
  return;
}



/* Entry: 10347d9c8; end: 10347d9cf;  */

undefined8 FUN_10347d9c8(void)

{
  return 0;
}



/* Entry: 10347d9d0; end: 10347d9ef;  */

void FUN_10347d9d0(void)

{
  func_0x000107c61168(&PTR_PTR_112f709b0);
  return;
}



/* Entry: 10347d9f0; end: 10347d9f3;  */

void FUN_10347d9f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4b254();
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10347d9f4; end: 10347dc0f;  */

void FUN_10347d9f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c40fa4();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  pcStack_50 = FUN_10347dc64;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1013d3a70;
  puStack_58 = &UNK_11065ab28;
  uStack_48 = uVar4;
  func_0x000107c60bc4(&puStack_70);
  uVar3 = uStack_48;
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(uVar3);
  uVar3 = uVar1;
  func_0x000107c5c320(uVar1,param_2,ppuVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 10347dc10; end: 10347dc63;  */

void FUN_10347dc10(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10347dc64; end: 10347dc87;  */

void FUN_10347dc64(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  undefined *puVar6;
  long extraout_x8;
  int *piVar7;
  int aiStack_50 [2];
  long lStack_48;
  
  lVar3 = 0;
  func_0x0001000d0cdc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar5 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  piVar7 = (int *)((long)aiStack_50 + lVar5);
  func_0x000107c61174(param_1);
  func_0x0001000d0fb8(piVar7);
  piVar4 = piVar7;
  func_0x000107c614c4(piVar7,lVar3);
  if ((int)piVar4 == 0) {
    iVar1 = *piVar7;
    lVar3 = *(long *)((long)&lStack_48 + lVar5);
    lVar5 = 0x112d7af10;
    puVar6 = &UNK_10dbcce80;
    func_0x0001000285a8(0x112d7af10,&UNK_10dbcce80);
    iVar2 = *(int *)(lVar5 + 0x50);
    if ((iVar1 == 0x1f) && (lVar3 != 0xce && lVar3 != 0x1f)) {
      if (lVar3 == 0x11) {
        func_0x0001000d224c(&lStack_48);
        if (lStack_48 != 0) {
          func_0x000107c5cddc(lStack_48);
          func_0x000107c615e8(lStack_48);
        }
      }
      else {
        func_0x0001000d224c(&lStack_48);
        if (lStack_48 != 0) {
          func_0x0001000e48c0(lVar3);
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar6);
          func_0x000107c5cde0(lStack_48);
          func_0x000107c615e8(lStack_48);
          func_0x000107c61170(lVar3);
        }
      }
    }
    func_0x0001000d1dcc((long)piVar7 + (long)iVar2);
  }
  else {
    func_0x0001013d38bc(piVar7);
  }
  return;
}



/* Entry: 10347dc88; end: 10347dc93; -[SCLCCameraGesturesEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347dc88(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70ac0;
  func_0x000107c61428(param_1 + _DAT_112f70ac0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10347dc94; end: 10347dc9f; -[SCLCCameraGesturesEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347dc94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70ac0;
  func_0x000107c61428(param_1 + _DAT_112f70ac0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10347dca0; end: 10347dcab; -[SCLCCameraGesturesEntryPoint cameraUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347dca0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70ac8;
  func_0x000107c61428(param_1 + _DAT_112f70ac8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10347dcac; end: 10347dcb7; -[SCLCCameraGesturesEntryPoint setCameraUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347dcac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70ac8;
  func_0x000107c61428(param_1 + _DAT_112f70ac8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10347dcb8; end: 10347dcc3; -[SCLCCameraGesturesEntryPoint cameraUIScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347dcb8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70ad0;
  func_0x000107c61428(param_1 + _DAT_112f70ad0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10347dcc4; end: 10347dccf; -[SCLCCameraGesturesEntryPoint setCameraUIScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347dcc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70ad0;
  func_0x000107c61428(param_1 + _DAT_112f70ad0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10347dcd0; end: 10347dcdb; -[SCLCCameraGesturesEntryPoint cameraFeatureScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347dcd0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70ad8;
  func_0x000107c61428(param_1 + _DAT_112f70ad8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10347dcdc; end: 10347dce7; -[SCLCCameraGesturesEntryPoint setCameraFeatureScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347dcdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70ad8;
  func_0x000107c61428(param_1 + _DAT_112f70ad8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10347dce8; end: 10347dcf3; -[SCLCCameraGesturesEntryPoint lensPerformerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347dce8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70ae0;
  func_0x000107c61428(param_1 + _DAT_112f70ae0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10347dcf4; end: 10347dcff; -[SCLCCameraGesturesEntryPoint setLensPerformerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347dcf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70ae0;
  func_0x000107c61428(param_1 + _DAT_112f70ae0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10347dd00; end: 10347dd0b; -[SCLCCameraGesturesEntryPoint lensCarouselScopedLensCarouselManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347dd00(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70ae8;
  func_0x000107c61428(param_1 + _DAT_112f70ae8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10347dd0c; end: 10347dd4f;  */

void FUN_10347dd0c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10347dd50; end: 10347dd5b; -[SCLCCameraGesturesEntryPoint setLensCarouselScopedLensCarouselManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347dd50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70ae8;
  func_0x000107c61428(param_1 + _DAT_112f70ae8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10347dd5c; end: 10347ddaf;  */

void FUN_10347dd5c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10347ddb0; end: 10347e30b;  */

/* WARNING: Possible PIC construction at 0x00010347df60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010347e0ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010347e164: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010347e17c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010347e194: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010347e1a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010347e1b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010347e1c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010347e1d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010347e1f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010347e204: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010347e214: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010347e224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010347e2d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010347e2e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010347e2b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010347e294: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010347e284: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010347e298) */
/* WARNING: Removing unreachable block (ram,0x00010347e2b8) */
/* WARNING: Removing unreachable block (ram,0x00010347e2e8) */
/* WARNING: Removing unreachable block (ram,0x00010347e2d8) */
/* WARNING: Removing unreachable block (ram,0x00010347e228) */
/* WARNING: Removing unreachable block (ram,0x00010347e218) */
/* WARNING: Removing unreachable block (ram,0x00010347e208) */
/* WARNING: Removing unreachable block (ram,0x00010347e1f8) */
/* WARNING: Removing unreachable block (ram,0x00010347e1dc) */
/* WARNING: Removing unreachable block (ram,0x00010347e1cc) */
/* WARNING: Removing unreachable block (ram,0x00010347e1bc) */
/* WARNING: Removing unreachable block (ram,0x00010347e1ac) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x00010347e198) */
/* WARNING: Removing unreachable block (ram,0x00010347e180) */
/* WARNING: Removing unreachable block (ram,0x00010347e168) */
/* WARNING: Removing unreachable block (ram,0x00010347e0b0) */
/* WARNING: Removing unreachable block (ram,0x00010347df64) */
/* WARNING: Removing unreachable block (ram,0x00010347e288) */

void FUN_10347ddb0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar3 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar1 = unaff_x20;
  func_0x000107c3f2a4();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3f284();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar2 = unaff_x20;
      func_0x000107c3f0d0();
      func_0x000107c61180();
      if (lVar2 != 0) {
        lVar2 = unaff_x20;
        func_0x000107c4b2f4();
        func_0x000107c61180();
        if (lVar2 == 0) {
          func_0x000107c61170(lVar3);
          lVar3 = lVar1;
        }
        else {
          func_0x000107c4af24();
          func_0x000107c61180();
          if (unaff_x20 == 0) {
            func_0x000107c61170(lVar3);
            lVar3 = lVar1;
          }
          else {
            lVar3 = 0;
            FUN_10346b910();
            func_0x000107c613fc();
            *(undefined8 *)(lVar3 + 0x10) = 0;
            uVar4 = 0x112f6ea60;
            func_0x0001000285a8(0x112f6ea60,&UNK_10dbcbb20);
            func_0x000107c613fc();
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x0001000bdd8c(FUN_10346b5d8,0);
            func_0x000107c613fc(uVar4,0x18,7);
            func_0x0001000bdd8c(0x10346b5f0,0);
            func_0x000107c4aeb0(unaff_x20);
            func_0x000107c61180();
            func_0x000107c4aeb4();
            func_0x000107c61180();
            lVar3 = unaff_x20;
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10347e30c; end: 10347e31b;  */

void FUN_10347e30c(long *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x20;
  undefined1 uStack_41;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
    uStack_41 = (code)0x1;
    pcVar3 = (code *)&uStack_41;
    func_0x000100854cb0();
  }
  else {
    func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
    lVar1 = lVar4;
    func_0x000107c3d1a0(lVar4);
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x0001000b637c();
    func_0x000107c61170(lVar1);
    pcVar3 = (code *)0x10346b934;
    func_0x0001000bfde0(0x10346b934,0,PTR___sSbN_11034dd40);
    func_0x000107c61574(lVar2);
    func_0x000107c615e8(lVar4);
  }
  *param_1 = (long)pcVar3;
  return;
}



/* Entry: 10347e31c; end: 10347e343; -[SCLCCameraGesturesEntryPoint begin] */

void FUN_10347e31c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10347ddb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10347e344; end: 10347e3e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347e344(void)

{
  long unaff_x20;
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c614f0();
  lVar3 = *(long *)(unaff_x20 + _DAT_112f70af0);
  if ((lVar3 != 0) && (lVar1 = *(long *)(lVar3 + 0x10), lVar1 != 0)) {
    func_0x000107c6157c(lVar3);
    func_0x000107c6157c(lVar1);
    FUN_10346bac8(0,0);
    func_0x000107c61574(lVar1);
    uVar2 = *(undefined8 *)(lVar3 + 0x10);
    *(undefined8 *)(lVar3 + 0x10) = 0;
    func_0x000107c61574(lVar3);
    func_0x000107c61574(uVar2);
  }
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_end_1125c29d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10347e3e8; end: 10347e41b; -[SCLCCameraGesturesEntryPoint end] */

void FUN_10347e3e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10347e344();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10347e41c; end: 10347e76f;  */

void FUN_10347e41c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef650)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef10ecf90)) ||
         (func_0x000107c605b8(0xd000000000000010,0x800000010ef13070,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53104();
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
          if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10da5c0)) {
            uVar2 = 0;
            func_0x000107c605b8(0xd000000000000012,0x800000010ef25a40,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0xd000000000000015;
              if (((param_2 == -0x2fffffffffffffeb) && (param_3 == -0x7ffffffef10e0a10)) ||
                 (func_0x000107c605b8(0xd000000000000015,0x800000010ef1f5f0,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c55df4();
              }
              else {
                uVar2 = 0;
                if (((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef10da6a0)) &&
                   (func_0x000107c605b8(0xd000000000000030,0x800000010ef25960,param_2,param_3,0),
                   (uVar2 & 1) == 0)) {
                  func_0x000107c602fc(0x15);
                  func_0x000107c6142c(0xe000000000000000);
                  func_0x000107c5fb78(param_2,param_3);
                  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                      "SCLensCarouselIntegration/SCLCCameraGesturesEntryPoint.swift"
                                      ,0x3c,2,0x3d,0);
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x10347e770);
                  (*pcVar1)();
                }
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c55c80();
              }
              goto LAB_10347e4b0;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c53004();
        }
      }
      goto LAB_10347e4b0;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_10347e4b0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10347e770; end: 10347e81b; -[SCLCCameraGesturesEntryPoint setValue:forIvarName:] */

void FUN_10347e770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10347e41c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10347e81c; end: 10347e8df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347e81c(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f70ac0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f70ac8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f70ad0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f70ad8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f70ae0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f70ae8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f70af0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10347e8e0; end: 10347e8ff; -[SCLCCameraGesturesEntryPoint init] */

void FUN_10347e8e0(void)

{
  FUN_10347e81c();
  return;
}



/* Entry: 10347e900; end: 10347e933;  */

void FUN_10347e900(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10347e934; end: 10347e9bb; -[SCLCCameraGesturesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347e934(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f70ac0);
  func_0x000107c61610(param_1 + _DAT_112f70ac8);
  func_0x000107c61610(param_1 + _DAT_112f70ad0);
  func_0x000107c61610(param_1 + _DAT_112f70ad8);
  func_0x000107c61610(param_1 + _DAT_112f70ae0);
  func_0x000107c61610(param_1 + _DAT_112f70ae8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f70af0));
  return;
}



/* Entry: 10347e9bc; end: 10347e9db;  */

void FUN_10347e9bc(void)

{
  func_0x000107c61168(&PTR_PTR_1128dcfd0);
  return;
}



/* Entry: 10347e9dc; end: 10347e9e7; -[SCLensCarouselScopeEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347e9dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70b20;
  func_0x000107c61428(param_1 + _DAT_112f70b20,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10347e9e8; end: 10347e9f3; -[SCLensCarouselScopeEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347e9e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70b20;
  func_0x000107c61428(param_1 + _DAT_112f70b20,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10347e9f4; end: 10347e9ff; -[SCLensCarouselScopeEntryPoint lensCarouselInScopeControllingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347e9f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70b28;
  func_0x000107c61428(param_1 + _DAT_112f70b28,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10347ea00; end: 10347ea0b; -[SCLensCarouselScopeEntryPoint setLensCarouselInScopeControllingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347ea00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70b28;
  func_0x000107c61428(param_1 + _DAT_112f70b28,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10347ea0c; end: 10347ea17; -[SCLensCarouselScopeEntryPoint lensCarouselFeaturesScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347ea0c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70b30;
  func_0x000107c61428(param_1 + _DAT_112f70b30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10347ea18; end: 10347ea5b;  */

void FUN_10347ea18(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10347ea5c; end: 10347ea67; -[SCLensCarouselScopeEntryPoint setLensCarouselFeaturesScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347ea5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70b30;
  func_0x000107c61428(param_1 + _DAT_112f70b30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10347ea68; end: 10347eabb;  */

void FUN_10347ea68(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10347eabc; end: 10347eb03; -[SCLensCarouselScopeEntryPoint lensCarouselFeaturesScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347eabc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70b38;
  func_0x000107c61428(param_1 + _DAT_112f70b38,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10347eb04; end: 10347eb0f; -[SCLensCarouselScopeEntryPoint setLensCarouselFeaturesScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347eb04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70b38;
  func_0x000107c61428(param_1 + _DAT_112f70b38,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10347eb10; end: 10347eb57; -[SCLensCarouselScopeEntryPoint lensCarouselScopeInfoProvidingServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347eb10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70b40;
  func_0x000107c61428(param_1 + _DAT_112f70b40,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10347eb58; end: 10347eb63; -[SCLensCarouselScopeEntryPoint setLensCarouselScopeInfoProvidingServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347eb58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70b40;
  func_0x000107c61428(param_1 + _DAT_112f70b40,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10347eb64; end: 10347ebc3;  */

void FUN_10347eb64(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 10347ebc4; end: 10347efa7;  */

/* WARNING: Possible PIC construction at 0x00010347edc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010347eecc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010347eedc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010347eeec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010347eefc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010347ef70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010347ef80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010347ef60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010347ef84) */
/* WARNING: Removing unreachable block (ram,0x00010347ef74) */
/* WARNING: Removing unreachable block (ram,0x00010347ef00) */
/* WARNING: Removing unreachable block (ram,0x00010347eef0) */
/* WARNING: Removing unreachable block (ram,0x00010347eee0) */
/* WARNING: Removing unreachable block (ram,0x00010347eed0) */
/* WARNING: Removing unreachable block (ram,0x00010347edc4) */
/* WARNING: Removing unreachable block (ram,0x00010347ef64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347ebc4(void)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  undefined8 uVar9;
  long lStack_70;
  long lStack_68;
  
  plVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (plVar2 != (long *)0x0) {
    plVar3 = unaff_x20;
    func_0x000107c4ae90();
    func_0x000107c61180();
    if (plVar3 != (long *)0x0) {
      plVar4 = unaff_x20;
      func_0x000107c4ae84();
      func_0x000107c61180();
      if (plVar4 == (long *)0x0) {
        func_0x000107c61170(plVar2);
        plVar2 = plVar3;
      }
      else {
        plVar5 = unaff_x20;
        func_0x000107c4ae7c();
        func_0x000107c61180();
        if (plVar5 == (long *)0x0) {
          func_0x000107c61170(plVar2);
          plVar2 = plVar3;
        }
        else {
          func_0x000107c4af20();
          func_0x000107c61180();
          if (unaff_x20 != (long *)0x0) {
            lVar6 = 0;
            FUN_10347a280();
            func_0x000107c613fc();
            *(undefined8 *)(lVar6 + 0x20) = 0;
            *(undefined8 *)(lVar6 + 0x28) = 0;
            *(long **)(lVar6 + 0x10) = plVar2;
            uVar9 = *(undefined8 *)((long)plVar2 + _DAT_113081ca0);
            lVar7 = 0;
            FUN_103476d58();
            lVar8 = lVar7;
            func_0x000107c610f8();
            *(undefined8 *)(lVar8 + _DAT_112f70358) = uVar9;
            *(long **)(lVar8 + _DAT_112f70350) = plVar4;
            *(long **)(lVar8 + _DAT_112f70348) = plVar5;
            puVar1 = PTR_s_init_1125d9248;
            lStack_70 = lVar8;
            lStack_68 = lVar7;
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c615f0(uVar9);
            func_0x000107c61174();
            func_0x000107c61174(plVar5);
            plVar4 = &lStack_70;
            func_0x000107c61154(plVar4,puVar1);
            *(long **)(lVar6 + 0x18) = plVar4;
            uVar9 = *(undefined8 *)((long)plVar3 + _DAT_113038ac8);
            FUN_10347b150(0);
            func_0x000107c610f8();
            func_0x000107c61174();
            func_0x000107c6157c(uVar9);
            FUN_10347a2a0(plVar2,uVar9);
            FUN_10347a3a8();
            func_0x00010347a5fc();
            func_0x00010347a8ac();
            *(long **)(lVar6 + 0x20) = plVar2;
            uVar9 = *(undefined8 *)((long)plVar4 + _DAT_112f70358);
            func_0x000107c61174();
            func_0x000107c61174(plVar2);
            FUN_103484888(uVar9);
            func_0x000107c42c1c(*(undefined8 *)((long)plVar4 + _DAT_112f70348));
            plVar2 = plVar4;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(plVar2);
    return;
  }
  return;
}



/* Entry: 10347efa8; end: 10347efb7;  */

void FUN_10347efa8(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10347efb8; end: 10347efdf; -[SCLensCarouselScopeEntryPoint begin] */

void FUN_10347efb8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10347ebc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10347efe0; end: 10347f36f; -[SCLensCarouselScopeEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347efe0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar1 = param_1;
  func_0x000107c614f0();
  puVar5 = *(undefined1 **)(param_1 + _DAT_112f70b48);
  if (puVar5 == (undefined1 *)0x0) {
    func_0x000107c61174(param_1);
  }
  else {
    lVar2 = param_1;
    func_0x000107c61174(param_1);
    puVar3 = puVar5;
    func_0x000107c6157c();
    FUN_10347a048();
    func_0x000107c61574(puVar5);
    if (puVar3 != (undefined1 *)0x0) goto LAB_10347f074;
  }
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_end_1125c29d0);
  func_0x000107c61180();
  lVar2 = param_1;
  puVar3 = (undefined1 *)plVar4;
LAB_10347f074:
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10347f370; end: 10347f41b; -[SCLensCarouselScopeEntryPoint setValue:forIvarName:] */

void FUN_10347f370(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  func_0x00010347f094(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10347f41c; end: 10347f4bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347f41c(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f70b20,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f70b28,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f70b30,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f70b38) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f70b40) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f70b48) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10347f4bc; end: 10347f4db; -[SCLensCarouselScopeEntryPoint init] */

void FUN_10347f4bc(void)

{
  FUN_10347f41c();
  return;
}



/* Entry: 10347f4dc; end: 10347f50f;  */

void FUN_10347f4dc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10347f510; end: 10347f587; -[SCLensCarouselScopeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347f510(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f70b20);
  func_0x000107c61610(param_1 + _DAT_112f70b28);
  func_0x000107c61610(param_1 + _DAT_112f70b30);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f70b38));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f70b40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f70b48));
  return;
}



/* Entry: 10347f588; end: 10347f5a7;  */

void FUN_10347f588(void)

{
  func_0x000107c61168(&PTR_PTR_1128dd0b8);
  return;
}



/* Entry: 10347f5a8; end: 10347f5b3; -[SCLensCarouselInScopeControllingServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347f5a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70b78;
  func_0x000107c61428(param_1 + _DAT_112f70b78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10347f5b4; end: 10347f5bf; -[SCLensCarouselInScopeControllingServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347f5b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70b78;
  func_0x000107c61428(param_1 + _DAT_112f70b78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10347f5c0; end: 10347f5cb; -[SCLensCarouselInScopeControllingServiceProvider lensCarouselDataProviderControllingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347f5c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70b80;
  func_0x000107c61428(param_1 + _DAT_112f70b80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10347f5cc; end: 10347f5d7; -[SCLensCarouselInScopeControllingServiceProvider setLensCarouselDataProviderControllingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347f5cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70b80;
  func_0x000107c61428(param_1 + _DAT_112f70b80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10347f5d8; end: 10347f5e3; -[SCLensCarouselInScopeControllingServiceProvider lensCarouselInScopeActivatorDependenciesServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347f5d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70b88;
  func_0x000107c61428(param_1 + _DAT_112f70b88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10347f5e4; end: 10347f5ef; -[SCLensCarouselInScopeControllingServiceProvider setLensCarouselInScopeActivatorDependenciesServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347f5e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70b88;
  func_0x000107c61428(param_1 + _DAT_112f70b88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10347f5f0; end: 10347f5fb; -[SCLensCarouselInScopeControllingServiceProvider lensCarouselEventsHandlingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347f5f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70b90;
  func_0x000107c61428(param_1 + _DAT_112f70b90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10347f5fc; end: 10347f607; -[SCLensCarouselInScopeControllingServiceProvider setLensCarouselEventsHandlingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347f5fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70b90;
  func_0x000107c61428(param_1 + _DAT_112f70b90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10347f608; end: 10347f613; -[SCLensCarouselInScopeControllingServiceProvider lensFullScreenServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347f608(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70b98;
  func_0x000107c61428(param_1 + _DAT_112f70b98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10347f614; end: 10347f61f; -[SCLensCarouselInScopeControllingServiceProvider setLensFullScreenServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347f614(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70b98;
  func_0x000107c61428(param_1 + _DAT_112f70b98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10347f620; end: 10347f62b; -[SCLensCarouselInScopeControllingServiceProvider lensCarouselCollectionControllerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347f620(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70ba0;
  func_0x000107c61428(param_1 + _DAT_112f70ba0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10347f62c; end: 10347f637; -[SCLensCarouselInScopeControllingServiceProvider setLensCarouselCollectionControllerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347f62c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70ba0;
  func_0x000107c61428(param_1 + _DAT_112f70ba0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10347f638; end: 10347f643; -[SCLensCarouselInScopeControllingServiceProvider lensCarouselContextConfiguratorServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347f638(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70ba8;
  func_0x000107c61428(param_1 + _DAT_112f70ba8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10347f644; end: 10347f64f; -[SCLensCarouselInScopeControllingServiceProvider setLensCarouselContextConfiguratorServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347f644(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70ba8;
  func_0x000107c61428(param_1 + _DAT_112f70ba8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10347f650; end: 10347f65b; -[SCLensCarouselInScopeControllingServiceProvider lensCarouselViewModelCreatingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347f650(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70bb0;
  func_0x000107c61428(param_1 + _DAT_112f70bb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10347f65c; end: 10347f69f;  */

void FUN_10347f65c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10347f6a0; end: 10347f6ab; -[SCLensCarouselInScopeControllingServiceProvider setLensCarouselViewModelCreatingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347f6a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70bb0;
  func_0x000107c61428(param_1 + _DAT_112f70bb0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10347f6ac; end: 10347f6ff;  */

void FUN_10347f6ac(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10347f700; end: 10347fc77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347f700(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  code *pcVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4ae64();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4ae8c();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c4ae70();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          lVar1 = lVar3;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c4b18c();
          func_0x000107c61180();
          if (lVar5 == 0) {
            func_0x000107c61170(lVar1);
            func_0x000107c61170(lVar2);
            func_0x000107c61170(lVar3);
            lVar1 = lVar4;
          }
          else {
            lVar6 = unaff_x20;
            func_0x000107c4ae54();
            func_0x000107c61180();
            if (lVar6 == 0) {
              func_0x000107c61170(lVar1);
              func_0x000107c61170(lVar2);
              func_0x000107c61170(lVar3);
              func_0x000107c61170(lVar4);
              lVar1 = lVar5;
            }
            else {
              lVar7 = unaff_x20;
              func_0x000107c4ae60();
              func_0x000107c61180();
              if (lVar7 == 0) {
                func_0x000107c61170(lVar1);
                func_0x000107c61170(lVar2);
                func_0x000107c61170(lVar3);
                func_0x000107c61170(lVar4);
                func_0x000107c61170(lVar5);
                lVar1 = lVar6;
              }
              else {
                lVar8 = unaff_x20;
                func_0x000107c4af58();
                func_0x000107c61180();
                if (lVar8 != 0) {
                  lVar9 = 0;
                  func_0x000103478ec4();
                  func_0x000107c613fc();
                  uVar14 = *(undefined8 *)(lVar7 + _DAT_113038858);
                  func_0x0001000285a8(0x112f70408,&UNK_10dbccac0);
                  uVar16 = *(undefined8 *)(*(long *)(lVar3 + _DAT_1130389c8) + _DAT_113038a98);
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c6157c(uVar14);
                  func_0x000107c61174();
                  uVar10 = uVar16;
                  func_0x0001000bda74();
                  func_0x000107c61170(uVar16);
                  func_0x0001000285a8(0x112f70410,&UNK_10dbccac8);
                  uVar16 = *(undefined8 *)(*(long *)(lVar4 + _DAT_1130388a8) + _DAT_113038978);
                  func_0x000107c61174();
                  uVar11 = uVar16;
                  func_0x0001000bda74();
                  func_0x000107c61170(uVar16);
                  uVar15 = *(undefined8 *)(lVar6 + _DAT_113038e08);
                  puVar12 = &UNK_11065ac00;
                  func_0x000107c613fc(&UNK_11065ac00,0x20,7);
                  *(undefined8 *)(puVar12 + 0x10) = uVar15;
                  *(long *)(puVar12 + 0x18) = lVar5;
                  func_0x0001000285a8(0x112f70418,&UNK_10dbccad0);
                  func_0x000107c613fc();
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174();
                  pcVar13 = FUN_10347fc78;
                  func_0x0001000bdd8c(FUN_10347fc78,puVar12);
                  puVar12 = &UNK_11065ac28;
                  func_0x000107c613fc(&UNK_11065ac28,0x40,7);
                  *(undefined8 *)(puVar12 + 0x10) = uVar14;
                  *(undefined8 *)(puVar12 + 0x18) = uVar10;
                  *(code **)(puVar12 + 0x20) = pcVar13;
                  *(undefined8 *)(puVar12 + 0x28) = uVar11;
                  *(long *)(puVar12 + 0x30) = lVar2;
                  *(long *)(puVar12 + 0x38) = lVar8;
                  func_0x0001000285a8(0x112f70420,&UNK_10dbccad8);
                  func_0x000107c613fc();
                  func_0x000107c61174();
                  func_0x000107c61174(lVar8);
                  func_0x000107c6157c(uVar14);
                  func_0x000107c6157c(uVar10);
                  func_0x000107c6157c(pcVar13);
                  func_0x000107c6157c(uVar11);
                  uVar16 = 0x10347fc80;
                  func_0x0001000bdd8c(0x10347fc80,puVar12);
                  func_0x000107c61170(lVar7);
                  func_0x000107c61170(lVar3);
                  func_0x000107c61170(lVar4);
                  func_0x000107c61170(lVar6);
                  func_0x000107c61170(lVar1);
                  func_0x000107c61170(lVar2);
                  func_0x000107c61170(lVar5);
                  func_0x000107c61170(lVar8);
                  func_0x000107c61574(uVar11);
                  func_0x000107c61574(pcVar13);
                  func_0x000107c61574(uVar10);
                  func_0x000107c61574(uVar14);
                  func_0x000107c61170(uVar15);
                  *(undefined8 *)(lVar9 + 0x10) = uVar16;
                  uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112f70bb8);
                  *(long *)(unaff_x20 + _DAT_112f70bb8) = lVar9;
                  func_0x000107c6157c(lVar9);
                  func_0x000107c61574(uVar16);
                  uVar16 = *(undefined8 *)(lVar9 + 0x10);
                  func_0x000103f95a18(0);
                  func_0x000107c610f8();
                  func_0x000107c6157c(uVar16);
                  func_0x000103f9595c();
                  func_0x000107c61170(lVar1);
                  func_0x000107c61170(lVar2);
                  func_0x000107c61170(lVar3);
                  func_0x000107c61170(lVar4);
                  func_0x000107c61170(lVar5);
                  func_0x000107c61170(lVar6);
                  func_0x000107c61170(lVar7);
                  func_0x000107c61170(lVar8);
                  func_0x000107c61574(lVar9);
                  return;
                }
                func_0x000107c61170(lVar1);
                func_0x000107c61170(lVar2);
                func_0x000107c61170(lVar3);
                func_0x000107c61170(lVar4);
                func_0x000107c61170(lVar5);
                func_0x000107c61170(lVar6);
                lVar1 = lVar7;
              }
            }
          }
        }
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10347fc78; end: 10347fc8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347fc78(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar3 = 0x112f704f8;
  func_0x0001000285a8(0x112f704f8,&UNK_10dbccb28);
  func_0x0001000bda74(uVar2,uVar3);
  uVar3 = *(undefined8 *)(lVar1 + _DAT_112fcaa80);
  FUN_103474528(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar3);
  FUN_103473da8(uVar2,uVar3);
  *param_1 = uVar2;
  param_1[1] = &PTR_DAT_11065a378;
  return;
}



/* Entry: 10347fc90; end: 10347fd1b; -[SCLensCarouselInScopeControllingServiceProvider provide] */

void FUN_10347fc90(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_10347f700();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "SCLensCarouselIntegration/SCLensCarouselInScopeControllingServiceProvider.swift"
                      ,0x4f,2,0x2b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10347fd1c);
  (*pcVar1)();
}



/* Entry: 10347fd1c; end: 10347fd4f; -[SCLensCarouselInScopeControllingServiceProvider __safeProvide] */

void FUN_10347fd1c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10347f700();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10347fd50; end: 10347fd93; -[SCLensCarouselInScopeControllingServiceProvider end] */

void FUN_10347fd50(undefined8 param_1)

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



/* Entry: 10347fd94; end: 1034801ab;  */

void FUN_10347fd94(long param_1,long param_2,long param_3)

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
    uVar2 = 0xd00000000000002b;
    if (((param_2 == -0x2fffffffffffffd5) && (param_3 == -0x7ffffffef0ed9910)) ||
       (func_0x000107c605b8(0xd00000000000002b,0x800000010f1266f0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c55c24();
    }
    else {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffd0) && (param_3 == -0x7ffffffef0eaccc0)) ||
         (func_0x000107c605b8(0xd000000000000030,0x800000010f153340,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c55c40();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffde) && (param_3 == -0x7ffffffef0eacc80)) ||
           (func_0x000107c605b8(0xd000000000000022,0x800000010f153380,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c55c2c();
        }
        else {
          if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef0ed9240)) {
            uVar2 = 0;
            func_0x000107c605b8(0xd000000000000016,0x800000010f126dc0,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0;
              if (((param_2 == -0x2fffffffffffffd8) && (param_3 == -0x7ffffffef0eacc50)) ||
                 (func_0x000107c605b8(0xd000000000000028,0x800000010f1533b0,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c55c1c();
              }
              else {
                uVar2 = 0xd000000000000027;
                if (((param_2 == -0x2fffffffffffffd9) && (param_3 == -0x7ffffffef0ed98e0)) ||
                   (func_0x000107c605b8(0xd000000000000027,0x800000010f126720,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c55c20();
                }
                else {
                  uVar2 = 0xd000000000000025;
                  if (((param_2 != -0x2fffffffffffffdb) || (param_3 != -0x7ffffffef0eacc20)) &&
                     (func_0x000107c605b8(0xd000000000000025,0x800000010f1533e0,param_2,param_3,0),
                     (uVar2 & 1) == 0)) {
                    func_0x000107c602fc(0x15);
                    func_0x000107c6142c(0xe000000000000000);
                    func_0x000107c5fb78(param_2,param_3);
                    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                        "SCLensCarouselIntegration/SCLensCarouselInScopeControllingServiceProvider.swift"
                                        ,0x4f,2,0x4c,0);
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x1034801ac);
                    (*pcVar1)();
                  }
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c55c94();
                }
              }
              goto LAB_10347fe20;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c55d50();
        }
      }
    }
  }
LAB_10347fe20:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1034801ac; end: 103480257; -[SCLensCarouselInScopeControllingServiceProvider setValue:forIvarName:] */

void FUN_1034801ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10347fd94(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103480258; end: 103480343;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103480258(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f70b78,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f70b80,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f70b88,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f70b90,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f70b98,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f70ba0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f70ba8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f70bb0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f70bb8) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103480344; end: 103480363; -[SCLensCarouselInScopeControllingServiceProvider init] */

void FUN_103480344(void)

{
  FUN_103480258();
  return;
}



/* Entry: 103480364; end: 103480397;  */

void FUN_103480364(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103480398; end: 10348043f; -[SCLensCarouselInScopeControllingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103480398(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f70b78);
  func_0x000107c61610(param_1 + _DAT_112f70b80);
  func_0x000107c61610(param_1 + _DAT_112f70b88);
  func_0x000107c61610(param_1 + _DAT_112f70b90);
  func_0x000107c61610(param_1 + _DAT_112f70b98);
  func_0x000107c61610(param_1 + _DAT_112f70ba0);
  func_0x000107c61610(param_1 + _DAT_112f70ba8);
  func_0x000107c61610(param_1 + _DAT_112f70bb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f70bb8));
  return;
}



/* Entry: 103480440; end: 10348045f;  */

void FUN_103480440(void)

{
  func_0x000107c61168(&PTR_PTR_112f70c00);
  return;
}



/* Entry: 103480460; end: 10348046b; -[SCLensCarouselLegacyLensDelegateConfigurationEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103480460(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70c98;
  func_0x000107c61428(param_1 + _DAT_112f70c98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10348046c; end: 103480477; -[SCLensCarouselLegacyLensDelegateConfigurationEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10348046c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70c98;
  func_0x000107c61428(param_1 + _DAT_112f70c98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103480478; end: 103480483; -[SCLensCarouselLegacyLensDelegateConfigurationEntryPoint cameraFeatureScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103480478(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f70ca0;
  func_0x000107c61428(param_1 + _DAT_112f70ca0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


