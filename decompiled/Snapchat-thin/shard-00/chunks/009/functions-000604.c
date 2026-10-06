/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100b968a0; end: 100b96a43;  */

void FUN_100b968a0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_10033dc60();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_60;
  *(undefined8 *)(param_2 + 0x28) = uStack_68;
  FUN_1000285a8(0x112dbeec0,&UNK_10db88e60);
  func_0x000107c610f8();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c6157c(uStack_70);
  FUN_10017da58();
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar3);
  *(undefined **)(param_2 + 0x18) = puVar4;
  FUN_100b96a48(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar4);
  uVar3 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar3;
  FUN_100b96ac8();
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  uVar6 = uVar5;
  func_0x000107c6157c();
  FUN_100b96b04();
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uStack_70);
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  *param_1 = param_2;
  return;
}



/* Entry: 100b96a44; end: 100b96a47;  */

void FUN_100b96a44(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 100b96a48; end: 100b96ac7;  */

void FUN_100b96a48(undefined8 param_1)

{
  if (lRam0000000112f11d10 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e72c2d0);
  return;
}



/* Entry: 100b96ac8; end: 100b96b03;  */

void FUN_100b96ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return;
}



/* Entry: 100b96b04; end: 100b96e1f;  */

undefined * FUN_100b96b04(void)

{
  code *pcVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  code *pcStack_78;
  
  ppuVar4 = &puStack_a0;
  ppuVar6 = &puStack_a0;
  FUN_1000285a8(0x112f11cc8,&UNK_10db45710);
  func_0x000107c613fc();
  pcVar2 = FUN_100b975d8;
  FUN_1000bdd8c(FUN_100b975d8,0);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar10 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_100b975b4;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_102d5eba0;
  puStack_88 = &UNK_1105ca080;
  pcStack_78 = pcVar2;
  func_0x000107c60bc4(&puStack_a0);
  pcVar1 = pcStack_78;
  func_0x000107c6157c(pcVar2);
  func_0x000107c61574(pcVar1);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_80 = FUN_100b975b0;
  puStack_a0 = puVar10;
  uStack_98 = 0x42000000;
  puStack_90 = (undefined *)0x100b97570;
  puStack_88 = &UNK_1105ca0a8;
  pcStack_78 = pcVar2;
  func_0x000107c60bc4(&puStack_a0);
  pcVar1 = pcStack_78;
  func_0x000107c6157c(pcVar2);
  func_0x000107c61574(pcVar1);
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  puVar10 = &UNK_1105ca0e0;
  puVar7 = puVar10;
  func_0x000107c613fc(&UNK_1105ca0e0,0x18,7);
  func_0x000107c61644(puVar7 + 0x10);
  uVar8 = 0x112f11cd0;
  FUN_1000285a8(0x112f11cd0,&UNK_10db45718);
  func_0x000107c613fc();
  puVar9 = &UNK_102d5e908;
  FUN_1000bdd8c(&UNK_102d5e908,puVar7,uVar8);
  uVar8 = 0x112f11cd8;
  FUN_1000285a8(0x112f11cd8,&UNK_10db45720);
  puVar7 = &UNK_102d5e910;
  FUN_1000cb480(&UNK_102d5e910,0,uVar8);
  func_0x000107c613fc(&UNK_1105ca0e0,0x18,7);
  func_0x000107c61644(puVar10 + 0x10);
  puVar11 = &UNK_1105ca108;
  func_0x000107c613fc(&UNK_1105ca108,0x28,7);
  *(undefined **)(puVar11 + 0x10) = puVar10;
  *(undefined **)(puVar11 + 0x18) = puVar9;
  *(undefined **)(puVar11 + 0x20) = puVar7;
  FUN_1000285a8(0x112f11ce0,&UNK_10db45728);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar9);
  func_0x000107c6157c(puVar7);
  puVar10 = &UNK_102d5e9e4;
  FUN_1000bdd8c(&UNK_102d5e9e4,puVar11);
  puVar11 = puVar10;
  FUN_1000bf56c();
  puVar12 = puVar11;
  FUN_1000bf56c();
  puVar13 = PTR_PTR_1126ac368;
  func_0x000107c610f8(PTR_PTR_1126ac368);
  func_0x000107c473c4();
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar10);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar12);
  return puVar13;
}



/* Entry: 100b96e20; end: 100b96e97;  */

void FUN_100b96e20(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b96e98; end: 100b96ebf;  */

undefined1  [16] FUN_100b96e98(void)

{
  return ZEXT816(0x110427388);
}



/* Entry: 100b96ec0; end: 100b96fbb; -[SCLensStoryLensProcessingServices initWithLensProcessingManager:lensProcessingUIContainer:lensProcessingLifecycle:lensProcessingUIGesturesManager:] */

undefined1 *
FUN_100b96ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126f6328;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100b96fbc; end: 100b96ff7;  */

void FUN_100b96fbc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b96ff8; end: 100b97003; -[SCLensStoryLensProcessingEntryPoint setLensStoryProcessingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b96ff8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d78d10;
  func_0x000107c61428(param_1 + _DAT_112d78d10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b97004; end: 100b9702b; -[SCLensStoryLensProcessingEntryPoint begin] */

void FUN_100b97004(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100b9702c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b9702c; end: 100b97197;  */

/* WARNING: Possible PIC construction at 0x000100b970f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b97108: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b97170: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b97160: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b97174) */
/* WARNING: Removing unreachable block (ram,0x000100b9710c) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000100b970fc) */
/* WARNING: Removing unreachable block (ram,0x000100b97164) */

void FUN_100b9702c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar1 = unaff_x20;
  func_0x000107c5d9f4();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4b2a8();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c4b454();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        lVar3 = 0;
        FUN_100b9720c();
        func_0x000107c613fc();
        *(long *)(lVar3 + 0x10) = lVar2;
        *(long *)(lVar3 + 0x18) = unaff_x20;
        *(long *)(lVar3 + 0x20) = lVar1;
        *(undefined8 *)(lVar3 + 0x28) = 0;
        func_0x000107c61174(lVar1);
        func_0x000107c61174(lVar2);
        func_0x000107c61174(unaff_x20);
        FUN_100b9724c();
        lVar3 = unaff_x20;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 100b97198; end: 100b971a3; -[SCLensStoryLensProcessingEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b97198(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d78cf8;
  func_0x000107c61428(param_1 + _DAT_112d78cf8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b971a4; end: 100b971e7;  */

void FUN_100b971a4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b971e8; end: 100b971f3; -[SCLensStoryLensProcessingEntryPoint userNavigationScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b971e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d78d00;
  func_0x000107c61428(param_1 + _DAT_112d78d00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b971f4; end: 100b971ff; -[SCLensStoryLensProcessingEntryPoint lensModeFactoryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b971f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d78d08;
  func_0x000107c61428(param_1 + _DAT_112d78d08,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b97200; end: 100b9720b; -[SCLensStoryLensProcessingEntryPoint lensStoryProcessingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b97200(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d78d10;
  func_0x000107c61428(param_1 + _DAT_112d78d10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b9720c; end: 100b9724b;  */

void FUN_100b9720c(void)

{
  func_0x000107c61168(&PTR_PTR_112d78ac0);
  return;
}



/* Entry: 100b9724c; end: 100b9734f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9724c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113036118);
  lVar1 = 0;
  func_0x000100b9722c();
  func_0x000107c613fc();
  FUN_10006a340(0);
  func_0x000107c613fc();
  func_0x000107c61174();
  uVar2 = uVar5;
  FUN_10006a360();
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x10) = uVar5;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c4b350();
  func_0x000107c61180();
  lVar3 = 0;
  FUN_100b97358();
  func_0x000107c613fc();
  puVar4 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar3 + 0x18) = puVar4;
  puVar4 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar3 + 0x20) = puVar4;
  *(undefined8 *)(lVar3 + 0x10) = uVar2;
  FUN_100b97378();
  FUN_100b97740(lVar1,lVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  *(long *)(unaff_x20 + 0x28) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 100b97350; end: 100b97357; -[SCLensStoryLensProcessingServices lensProcessingLifecycle] */

undefined8 FUN_100b97350(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100b97358; end: 100b97377;  */

void FUN_100b97358(void)

{
  func_0x000107c61168(&PTR_PTR_112d78b78);
  return;
}



/* Entry: 100b97378; end: 100b97547;  */

void FUN_100b97378(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  ppuVar7 = &puStack_90;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
    lVar3 = lVar2;
    func_0x000107c3d144();
    func_0x000107c61180();
    puVar4 = &UNK_1103ab450;
    func_0x000107c613fc(&UNK_1103ab450,0x18,7);
    *(undefined8 *)(puVar4 + 0x10) = uVar8;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_70 = &UNK_1013a0ac4;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1013a09a8;
    puStack_78 = &UNK_1103ab468;
    puStack_68 = puVar4;
    func_0x000107c60bc4(&puStack_90);
    puVar4 = puStack_68;
    func_0x000107c61174();
    func_0x000107c61574(puVar4);
    lVar6 = lVar3;
    func_0x000107c5c320(lVar3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar3);
    func_0x000107c3e924(lVar6);
    func_0x000107c61170(lVar6);
    lVar3 = lVar2;
    func_0x000107c4ed68(lVar2);
    func_0x000107c61180();
    puVar4 = &UNK_1103ab4a0;
    func_0x000107c613fc(&UNK_1103ab4a0,0x18,7);
    *(undefined8 *)(puVar4 + 0x10) = uVar8;
    puStack_70 = &UNK_1013a0ae8;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1013a09a8;
    puStack_78 = &UNK_1103ab4b8;
    puStack_68 = puVar4;
    func_0x000107c60bc4(&puStack_90);
    puVar4 = puStack_68;
    func_0x000107c61174(uVar8);
    func_0x000107c61574(puVar4);
    lVar6 = lVar3;
    func_0x000107c5c320(lVar3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(lVar3);
    func_0x000107c3e924(lVar6);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 100b97548; end: 100b9756b;  */

void FUN_100b97548(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b9756c; end: 100b97577;  */

void FUN_100b9756c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b97578; end: 100b975af;  */

void FUN_100b97578(long param_1)

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



/* Entry: 100b975b0; end: 100b975b3;  */

undefined8 FUN_100b975b0(void)

{
  undefined8 uStack_18;
  
  FUN_1000d224c(&uStack_18);
  return uStack_18;
}



/* Entry: 100b975b4; end: 100b975d7;  */

undefined8 FUN_100b975b4(void)

{
  undefined8 uStack_18;
  
  FUN_1000d224c(&uStack_18);
  return uStack_18;
}



/* Entry: 100b975d8; end: 100b97613;  */

void FUN_100b975d8(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100b96e78();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined1 *)(lVar1 + 0x20) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 100b97614; end: 100b9761f;  */

void FUN_100b97614(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100b97620; end: 100b9762b; -[_TtC35LensStoryLensProcessingServicesImpl30LensStoryLensProcessingManager activeLensIdsObservable] */

void FUN_100b97620(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    lVar1 = param_1;
    func_0x000107c6157c();
    (*(code *)&DAT_102d5e5e4)();
    FUN_1004575f0();
    func_0x000107c61574(lVar1);
    func_0x000107c61574(param_1);
  }
  else {
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    func_0x000107c42538();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b9762c; end: 100b976a7;  */

void FUN_100b9762c(long param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    lVar1 = param_1;
    func_0x000107c6157c();
    (*param_3)();
    FUN_1004575f0();
    func_0x000107c61574(lVar1);
    func_0x000107c61574(param_1);
  }
  else {
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    func_0x000107c42538();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b976a8; end: 100b976c3; +[SCObservable empty] */

void FUN_100b976a8(void)

{
  func_0x000107c610fc(PTR_PTR_1126e2fe8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b976c4; end: 100b976d7;  */

void FUN_100b976c4(long param_1,long param_2)

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



/* Entry: 100b976d8; end: 100b9772f; -[SCEmptyObservable subscribe:] */

void FUN_100b976d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c3fedc(param_3);
  puVar1 = PTR_PTR_1126e2fe0;
  func_0x000107c610f4(PTR_PTR_1126e2fe0);
  func_0x000107c47b64();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100b97730; end: 100b9773f; -[_TtC35LensStoryLensProcessingServicesImpl30LensStoryLensProcessingManager prefetchingLensIdsObservable] */

void FUN_100b97730(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    lVar1 = param_1;
    func_0x000107c6157c();
    (*(code *)&DAT_102d5e564)();
    FUN_1004575f0();
    func_0x000107c61574(lVar1);
    func_0x000107c61574(param_1);
  }
  else {
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    func_0x000107c42538();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b97740; end: 100b97877;  */

undefined8 FUN_100b97740(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *aplStack_80 [3];
  long lStack_68;
  undefined **ppuStack_60;
  undefined8 auStack_58 [3];
  long lStack_40;
  undefined **ppuStack_38;
  
  lVar4 = *param_2;
  lVar1 = 0;
  func_0x000100b9722c();
  ppuStack_38 = &PTR_DAT_1103ab3d0;
  ppuStack_60 = &PTR_DAT_1103ab430;
  uVar2 = 0;
  aplStack_80[0] = param_2;
  lStack_68 = lVar4;
  auStack_58[0] = param_1;
  lStack_40 = lVar1;
  FUN_100b97878(0);
  func_0x000107c613fc();
  FUN_1000c6518(auStack_58,lVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar5 = (undefined8 *)((long)aplStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar5);
  FUN_1000c6518(aplStack_80,lVar4);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar6 = (undefined8 *)((long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar6);
  uVar3 = *puVar5;
  FUN_100b97898(uVar3,*puVar6,uVar2);
  func_0x0001000834e4(aplStack_80);
  func_0x0001000834e4(auStack_58);
  return uVar3;
}



/* Entry: 100b97878; end: 100b97897;  */

void FUN_100b97878(void)

{
  func_0x000107c61168(&PTR_PTR_112d78c68);
  return;
}



/* Entry: 100b97898; end: 100b97967;  */

long FUN_100b97898(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_80 [3];
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined8 auStack_58 [3];
  undefined8 uStack_40;
  undefined **ppuStack_38;
  
  uVar1 = 0;
  func_0x000100b9722c();
  ppuStack_38 = &PTR_DAT_1103ab3d0;
  uVar2 = 0;
  auStack_58[0] = param_1;
  uStack_40 = uVar1;
  FUN_100b97358();
  ppuStack_60 = &PTR_DAT_1103ab430;
  puVar3 = PTR_PTR_1126ae810;
  auStack_80[0] = param_2;
  uStack_68 = uVar2;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_3 + 0x60) = puVar3;
  uVar1 = 0;
  FUN_10006a340();
  *(undefined8 *)(param_3 + 0x68) = 0;
  *(undefined8 *)(param_3 + 0x70) = 0;
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)(param_3 + 0x78) = uVar1;
  FUN_100b97968(auStack_58,param_3 + 0x10);
  FUN_100b97968(auStack_80,param_3 + 0x38);
  FUN_100b979ac();
  func_0x0001000834e4(auStack_80);
  func_0x0001000834e4(auStack_58);
  return param_3;
}



/* Entry: 100b97968; end: 100b979ab;  */

long FUN_100b97968(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100b979ac; end: 100b97aa3;  */

void FUN_100b979ac(void)

{
  long *plVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  plVar1 = (long *)(unaff_x20 + 0x38);
  FUN_1000a8868(plVar1,*(undefined8 *)(unaff_x20 + 0x50));
  uVar5 = *(undefined8 *)(*plVar1 + 0x18);
  puVar2 = &UNK_1103ab5b8;
  func_0x000107c613fc(&UNK_1103ab5b8,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puStack_40 = &UNK_1013a18d0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1013a11b4;
  puStack_48 = &UNK_1103ab5d0;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174(uVar5);
  func_0x000107c61574(puVar2);
  uVar4 = uVar5;
  func_0x000107c5c320(uVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c3e924(uVar4);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 100b97aa4; end: 100b97ac7;  */

void FUN_100b97aa4(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b97ac8; end: 100b97adb;  */

void FUN_100b97ac8(long param_1,long param_2)

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



/* Entry: 100b97adc; end: 100b97b5b; -[SCSCLensProcessingLensModeServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b97adc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ef8818,0);
  func_0x000107c61614(param_1 + _DAT_112ef8820,0);
  *(undefined8 *)(param_1 + _DAT_112ef8828) = 0;
  *(undefined8 *)(param_1 + _DAT_112ef8830) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b97b5c; end: 100b97c07; -[SCSCLensProcessingLensModeServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100b97b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b97c08(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b97c08; end: 100b97e0b;  */

void FUN_100b97c08(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0f0a9b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000022,0x800000010f0f5650,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000027;
        if (((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0f0a8a0)) &&
           (func_0x000107c605b8(0xd000000000000027,0x800000010f0f5760,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "ViewfinderScopeGraphBridge/SCSCLensProcessingLensModeServicesSaberEntryPoint.swift"
                              ,0x52,2,0x40,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100b97e0c);
          (*pcVar1)();
        }
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c584bc();
        goto LAB_100b97c94;
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a5b0();
  }
LAB_100b97c94:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b97e0c; end: 100b97e17; -[SCSCLensProcessingLensModeServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b97e0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef8818;
  func_0x000107c61428(param_1 + _DAT_112ef8818,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b97e18; end: 100b97e6b;  */

void FUN_100b97e18(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b97e6c; end: 100b97e77; -[SCSCLensProcessingLensModeServicesSaberEntryPoint setViewfinderScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b97e6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef8820;
  func_0x000107c61428(param_1 + _DAT_112ef8820,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b97e78; end: 100b97edb; -[SCSCLensProcessingLensModeServicesSaberEntryPoint setSCLensProcessingLensModeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b97e78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef8828;
  func_0x000107c61428(param_1 + _DAT_112ef8828,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b97edc; end: 100b97f03; -[SCSCLensProcessingLensModeServicesSaberEntryPoint begin] */

void FUN_100b97edc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100b97f04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b97f04; end: 100b98087;  */

/* WARNING: Possible PIC construction at 0x000100b98004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b98014: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b98030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b98008) */
/* WARNING: Removing unreachable block (ram,0x000100b98018) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b97f04(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5df78();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50f14();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100b9812c();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112ef8678);
        *(undefined8 *)(lVar2 + _DAT_112ef7f58) = uVar6;
        *(long *)(lVar2 + _DAT_112ef7f60) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112ef7f60);
        FUN_100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 100b98088; end: 100b98093; -[SCSCLensProcessingLensModeServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b98088(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef8818;
  func_0x000107c61428(param_1 + _DAT_112ef8818,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b98094; end: 100b980d7;  */

void FUN_100b98094(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b980d8; end: 100b980e3; -[SCSCLensProcessingLensModeServicesSaberEntryPoint viewfinderScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b980d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef8820;
  func_0x000107c61428(param_1 + _DAT_112ef8820,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b980e4; end: 100b9812b; -[SCSCLensProcessingLensModeServicesSaberEntryPoint sCLensProcessingLensModeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b980e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef8828;
  func_0x000107c61428(param_1 + _DAT_112ef8828,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b9812c; end: 100b9814b;  */

void FUN_100b9812c(void)

{
  func_0x000107c61168(&PTR_PTR_11288ea30);
  return;
}



/* Entry: 100b9814c; end: 100b9814f;  */

void FUN_100b9814c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de7110 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9b1f90;
  func_0x000107c61520(&UNK_10d9b1f90,&UNK_110427388);
  puRam0000000112de7110 = puVar1;
  return;
}



/* Entry: 100b98150; end: 100b9818f;  */

void FUN_100b98150(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de7110 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9b1f90;
  func_0x000107c61520(&UNK_10d9b1f90,&UNK_110427388);
  puRam0000000112de7110 = puVar1;
  return;
}



/* Entry: 100b98190; end: 100b98267;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b98190(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d5b2d8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5b2e0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5b2e8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5b2f0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5b2f8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5b300,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5b308,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d5b310) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b98268; end: 100b98287; -[SCLensVenuePostCaptureIntegrationEntryPoint init] */

void FUN_100b98268(void)

{
  FUN_100b98190();
  return;
}



/* Entry: 100b98288; end: 100b98333; -[SCLensVenuePostCaptureIntegrationEntryPoint setValue:forIvarName:] */

void FUN_100b98288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b98334(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b98334; end: 100b986df;  */

void FUN_100b98334(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == -0x2fffffffffffffee && param_3 == -0x7ffffffef10ef650) ||
     (func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0), (uVar2 & 1) != 0
     )) {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53720();
    goto LAB_100b983c4;
  }
  if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10ef1d0)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000016,0x800000010ef10e30,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0xd000000000000011;
      if (((param_2 == -0x2fffffffffffffef) && (param_3 == -0x7ffffffef10db870)) ||
         (func_0x000107c605b8(0xd000000000000011,0x800000010ef24790,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c55f00();
        goto LAB_100b983c4;
      }
      if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10dc330)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000016,0x800000010ef23cd0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0xd000000000000013;
          if (((param_2 == -0x2fffffffffffffed) && (param_3 == -0x7ffffffef10dfce0)) ||
             (func_0x000107c605b8(0xd000000000000013,0x800000010ef20320,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c577a8();
          }
          else {
            if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10db850)) {
              uVar2 = 0;
              func_0x000107c605b8(0xd000000000000016,0x800000010ef247b0,param_2,param_3,0);
              if ((uVar2 & 1) == 0) {
                uVar2 = 0;
                if (((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10ed550)) &&
                   (func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0),
                   (uVar2 & 1) == 0)) {
                  func_0x000107c602fc(0x15);
                  func_0x000107c6142c(0xe000000000000000);
                  func_0x000107c5fb78(param_2,param_3);
                  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                      "LensVenuePostCaptureIntegration/SCLensVenuePostCaptureIntegrationEntryPoint.swift"
                                      ,0x51,2,0x43,0);
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b986e0);
                  (*pcVar1)();
                }
                FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c53414();
                goto LAB_100b983c4;
              }
            }
            FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c593b0();
          }
          goto LAB_100b983c4;
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c55e20();
      goto LAB_100b983c4;
    }
  }
  FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52228();
LAB_100b983c4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b986e0; end: 100b986eb; -[SCLensVenuePostCaptureIntegrationEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b986e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5b2d8;
  func_0x000107c61428(param_1 + _DAT_112d5b2d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b986ec; end: 100b9873f;  */

void FUN_100b986ec(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b98740; end: 100b9874b; -[SCLensVenuePostCaptureIntegrationEntryPoint setActiveUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b98740(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5b2e0;
  func_0x000107c61428(param_1 + _DAT_112d5b2e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b9874c; end: 100b987bf; -[SCLensVenueServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9874c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ef89f8,0);
  func_0x000107c61614(param_1 + _DAT_112ef8a00,0);
  *(undefined8 *)(param_1 + _DAT_112ef8a08) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b987c0; end: 100b9886b; -[SCLensVenueServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100b987c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b9886c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b9886c; end: 100b98a03;  */

void FUN_100b9886c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0f0a9b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000022,0x800000010f0f5650,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ViewfinderScopeGraphBridge/SCLensVenueServicesSaberServiceProvider.swift"
                            ,0x48,2,0x42,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b98a04);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a5b0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b98a04; end: 100b98a0f; -[SCLensVenueServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b98a04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef89f8;
  func_0x000107c61428(param_1 + _DAT_112ef89f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b98a10; end: 100b98a63;  */

void FUN_100b98a10(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b98a64; end: 100b98a6f; -[SCLensVenueServicesSaberServiceProvider setViewfinderScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b98a64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef8a00;
  func_0x000107c61428(param_1 + _DAT_112ef8a00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b98a70; end: 100b98aa3; -[SCLensVenueServicesSaberServiceProvider __safeProvide] */

void FUN_100b98a70(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100b98aa4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b98aa4; end: 100b98b8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b98aa4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c5df78();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100b98be8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_112ef8640);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ef8a08);
      *(long *)(unaff_x20 + _DAT_112ef8a08) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      FUN_100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100b98b8c; end: 100b98b97; -[SCLensVenueServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b98b8c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef89f8;
  func_0x000107c61428(param_1 + _DAT_112ef89f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b98b98; end: 100b98bdb;  */

void FUN_100b98b98(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b98bdc; end: 100b98be7; -[SCLensVenueServicesSaberServiceProvider viewfinderScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b98bdc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef8a00;
  func_0x000107c61428(param_1 + _DAT_112ef8a00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b98be8; end: 100b98c63;  */

void FUN_100b98be8(undefined8 param_1)

{
  if (lRam0000000112ef8130 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e71aaa4);
  return;
}



/* Entry: 100b98c64; end: 100b98c6f; -[SCLensVenuePostCaptureIntegrationEntryPoint setLensVenueServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b98c64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5b2e8;
  func_0x000107c61428(param_1 + _DAT_112d5b2e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b98c70; end: 100b98ce3; -[SCSCLensProcessingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b98c70(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ef8cf8,0);
  func_0x000107c61614(param_1 + _DAT_112ef8d00,0);
  *(undefined8 *)(param_1 + _DAT_112ef8d08) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b98ce4; end: 100b98d8f; -[SCSCLensProcessingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100b98ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b98d90(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b98d90; end: 100b98f27;  */

void FUN_100b98d90(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0f0a9b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000022,0x800000010f0f5650,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ViewfinderScopeGraphBridge/SCSCLensProcessingServicesSaberServiceProvider.swift"
                            ,0x4f,2,0x42,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b98f28);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a5b0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b98f28; end: 100b98f33; -[SCSCLensProcessingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b98f28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef8cf8;
  func_0x000107c61428(param_1 + _DAT_112ef8cf8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b98f34; end: 100b98f87;  */

void FUN_100b98f34(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b98f88; end: 100b98f93; -[SCSCLensProcessingServicesSaberServiceProvider setViewfinderScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b98f88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef8d00;
  func_0x000107c61428(param_1 + _DAT_112ef8d00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b98f94; end: 100b98fc7; -[SCSCLensProcessingServicesSaberServiceProvider __safeProvide] */

void FUN_100b98f94(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100b98fc8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b98fc8; end: 100b990af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b98fc8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c5df78();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100b9910c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_112ef8690);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ef8d08);
      *(long *)(unaff_x20 + _DAT_112ef8d08) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      FUN_100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100b990b0; end: 100b990bb; -[SCSCLensProcessingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b990b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef8cf8;
  func_0x000107c61428(param_1 + _DAT_112ef8cf8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b990bc; end: 100b990ff;  */

void FUN_100b990bc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b99100; end: 100b9910b; -[SCSCLensProcessingServicesSaberServiceProvider viewfinderScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b99100(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef8d00;
  func_0x000107c61428(param_1 + _DAT_112ef8d00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b9910c; end: 100b99187;  */

void FUN_100b9910c(undefined8 param_1)

{
  if (lRam0000000112ef8470 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e71ac34);
  return;
}



/* Entry: 100b99188; end: 100b991bf;  */

void FUN_100b99188(long param_1)

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



/* Entry: 100b991c0; end: 100b991c3;  */

undefined8 FUN_100b991c0(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  return uStack_18;
}



/* Entry: 100b991c4; end: 100b991e7;  */

undefined8 FUN_100b991c4(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  return uStack_18;
}



/* Entry: 100b991e8; end: 100b991f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b991e8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined *puVar5;
  undefined1 auStack_a8 [24];
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_100083b20(&lStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = lStack_50;
  lVar2 = 0x6573616261746164;
  func_0x000107c5fadc(0x6573616261746164,0xe900000000000073);
  lStack_50 = 0;
  lVar3 = lVar1;
  lVar4 = lVar2;
  func_0x000107c421f4();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lStack_88 = lStack_50;
  if (lVar3 == 0) {
    lVar3 = lStack_50;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(lVar3);
    func_0x000107c61654();
    func_0x000107c615e8(lVar1);
    lVar3 = lStack_88;
    func_0x000107c614ac(lStack_88);
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x000107c61174();
    FUN_100083b20(&lStack_50);
    lVar2 = lStack_50;
    FUN_100083b20(&lStack_58);
    puVar5 = PTR_PTR_1126adc48;
    func_0x000107c610f8();
    lVar4 = lVar3;
    func_0x000107c463ec();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(lVar2);
    func_0x000107c615e8(lStack_58);
    func_0x000107c61170(lVar3);
    lStack_88 = lStack_58;
  }
  *param_1 = puVar5;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  lVar2 = _DAT_112d5b2f0;
  lStack_90 = lVar1;
  pcStack_68 = FUN_100b99364;
  puStack_80 = puVar5;
  puStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x000107c61428(lVar3 + _DAT_112d5b2f0,auStack_a8,1,0);
  func_0x000107c61604(lVar3 + lVar2,lVar4);
  return;
}



/* Entry: 100b991f4; end: 100b99363;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b991f4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 auStack_a8 [24];
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_100083b20(&lStack_50);
  lVar1 = lStack_50;
  lVar2 = 0x6573616261746164;
  func_0x000107c5fadc(0x6573616261746164,0xe900000000000073);
  lStack_50 = 0;
  lVar3 = lVar1;
  lVar4 = lVar2;
  func_0x000107c421f4();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lStack_88 = lStack_50;
  if (lVar3 == 0) {
    lVar3 = lStack_50;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(lVar3);
    func_0x000107c61654();
    func_0x000107c615e8(lVar1);
    lVar3 = lStack_88;
    func_0x000107c614ac(lStack_88);
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x000107c61174();
    FUN_100083b20(&lStack_50);
    lVar2 = lStack_50;
    FUN_100083b20(&lStack_58);
    puVar5 = PTR_PTR_1126adc48;
    func_0x000107c610f8();
    lVar4 = lVar3;
    func_0x000107c463ec();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(lVar2);
    func_0x000107c615e8(lStack_58);
    func_0x000107c61170(lVar3);
    lStack_88 = lStack_58;
  }
  *param_1 = puVar5;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  lVar2 = _DAT_112d5b2f0;
  lStack_90 = lVar1;
  pcStack_68 = FUN_100b99364;
  puStack_80 = puVar5;
  puStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x000107c61428(lVar3 + _DAT_112d5b2f0,auStack_a8,1,0);
  func_0x000107c61604(lVar3 + lVar2,lVar4);
  return;
}



/* Entry: 100b99364; end: 100b9936f; -[SCLensVenuePostCaptureIntegrationEntryPoint setLensProcessingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b99364(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5b2f0;
  func_0x000107c61428(param_1 + _DAT_112d5b2f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b99370; end: 100b993e3; -[SCPreviewLazyServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b99370(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fdddd0,0);
  func_0x000107c61614(param_1 + _DAT_112fdddd8,0);
  *(undefined8 *)(param_1 + _DAT_112fddde0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b993e4; end: 100b9948f; -[SCPreviewLazyServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100b993e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b99490(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b99490; end: 100b99627;  */

void FUN_100b99490(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef0e6bc40)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000030,0x800000010f1943c0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "PreviewActiveUserSessionScopeGraphBridge/SCPreviewLazyServicesSaberServiceProvider.swift"
                            ,0x58,2,0x38,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b99628);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57770();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b99628; end: 100b99633; -[SCPreviewLazyServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b99628(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdddd0;
  func_0x000107c61428(param_1 + _DAT_112fdddd0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}


