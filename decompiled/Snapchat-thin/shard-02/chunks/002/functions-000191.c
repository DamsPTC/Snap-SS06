/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101b1d628; end: 101b1d657;  */

void FUN_101b1d628(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 101b1d658; end: 101b1d67b;  */

void FUN_101b1d658(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b1d67c; end: 101b1d6d7;  */

undefined1  [16] FUN_101b1d67c(ulong param_1)

{
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x00010485773c();
  if ((param_1 & 1) != 0) {
    func_0x000100083b20(&uStack_30);
    func_0x000107c614f0(uStack_30);
    (**(code **)(lStack_28 + 0x10))();
    func_0x000107c615e8(uStack_30);
  }
  return ZEXT816(0);
}



/* Entry: 101b1d6d8; end: 101b1d703;  */

undefined ** FUN_101b1d6d8(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 101b1d704; end: 101b1d763;  */

void FUN_101b1d704(long param_1)

{
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_38 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_28 = PTR___sBoWV_11034d678 + 0x40;
  puStack_20 = &UNK_10d9d11d8;
  puStack_30 = puStack_38;
  puStack_18 = puStack_28;
  func_0x000107c61524(param_1,0,5,&puStack_38,param_1 + 0x58);
  return;
}



/* Entry: 101b1d764; end: 101b1d7e7;  */

undefined8
FUN_101b1d764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_101b1d7f8(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return unaff_x20;
}



/* Entry: 101b1d7e8; end: 101b1d7f7;  */

bool FUN_101b1d7e8(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x10) == 0;
}



/* Entry: 101b1d7f8; end: 101b1d9f7;  */

void FUN_101b1d7f8(long param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long *unaff_x20;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar6 = *(long *)(*unaff_x20 + 0x50);
  lVar1 = 0;
  uStack_68 = param_6;
  func_0x000103993790(0,lVar6);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_70 + -extraout_x8;
  unaff_x20[5] = 0;
  unaff_x20[6] = 0;
  unaff_x20[2] = param_1;
  unaff_x20[3] = param_2;
  lVar2 = 0;
  FUN_101b1e85c(0,lVar6);
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(puVar3,1,1,lVar6);
  func_0x000107c613fc(lVar2,*(undefined4 *)(lVar2 + 0x30),*(undefined2 *)(lVar2 + 0x34));
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_7);
  FUN_101b1e2c8(puVar3,param_1 == 0,param_4,param_5,uStack_68,param_7);
  unaff_x20[4] = (long)puVar3;
  func_0x000100087438(0,lVar1);
  func_0x000107c61580(puVar3,2);
  lVar1 = 0x101b1e87c;
  func_0x0001000b6400(0x101b1e87c,puVar3);
  func_0x000107c61574(puVar3);
  unaff_x20[7] = lVar1;
  puVar4 = &UNK_110443b00;
  func_0x000107c613fc(&UNK_110443b00,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  puVar5 = &UNK_110443b28;
  func_0x000107c613fc(&UNK_110443b28,0x20,7);
  *(long *)(puVar5 + 0x10) = lVar6;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  lVar1 = 0x101b1e880;
  puVar4 = puVar5;
  (**(code **)(*param_3 + 0x60))();
  func_0x000107c61574(puVar5);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_5);
  func_0x000107c61574(param_7);
  func_0x000107c61574(puVar3);
  lVar2 = unaff_x20[5];
  unaff_x20[5] = lVar1;
  unaff_x20[6] = (long)puVar4;
  func_0x000107c615e8(lVar2);
  return;
}



/* Entry: 101b1d9f8; end: 101b1da6f;  */

void FUN_101b1d9f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c613fc();
  FUN_101b1e2c8(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 101b1da70; end: 101b1dc6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101b1da70(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long *unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar1 = 0;
  func_0x000103993790(0,*(undefined8 *)(*unaff_x20 + 0x50));
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_80 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5eec8();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar9 = unaff_x20[2];
  func_0x000107c4b940(lVar9);
  (**(code **)(lVar11 + 0x10))(lVar10,param_1 + _DAT_1138154e8,lVar2);
  lStack_68 = param_1;
  func_0x000107c61428(unaff_x20 + 3,auStack_80,0x21,0);
  uVar3 = 0xff;
  func_0x0001000876dc(0xff,lVar1);
  uVar4 = uVar3;
  func_0x00010085581c();
  uVar5 = 0;
  func_0x000107c5fa34(0,lVar2,uVar3,uVar4);
  func_0x000107c6157c(param_1);
  func_0x000107c5fa44(&lStack_68,lVar10,uVar5);
  func_0x000107c614a8(auStack_80);
  FUN_101b1e44c(puVar8);
  func_0x000100087f6c(puVar8);
  (**(code **)(lVar12 + 8))(puVar8,lVar1);
  func_0x000107c5d278(lVar9);
  func_0x0001000b6d30(0);
  puVar6 = &UNK_110443b50;
  func_0x000107c613fc(&UNK_110443b50,0x18,7);
  func_0x000107c61644(puVar6 + 0x10);
  puVar7 = &UNK_110443b78;
  func_0x000107c613fc(&UNK_110443b78,0x20,7);
  *(undefined **)(puVar7 + 0x10) = puVar6;
  *(long *)(puVar7 + 0x18) = param_1;
  func_0x000107c6157c(param_1);
  uVar4 = 0x101b1e888;
  func_0x000104885df0(0x101b1e888,puVar7);
  func_0x000107c61574(puVar7);
  auVar13._8_8_ = &PTR_DAT_1107aaa40;
  auVar13._0_8_ = uVar4;
  return auVar13;
}



/* Entry: 101b1dc6c; end: 101b1dce3;  */

void FUN_101b1dc6c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(param_2);
    FUN_101b1dce4(param_1);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 101b1dce4; end: 101b1de8f;  */

void FUN_101b1dce4(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar2 = 0;
  func_0x000103993790(0,*(undefined8 *)(*unaff_x20 + 0x50));
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c4b940(unaff_x20[2]);
  lVar6 = *(long *)(*unaff_x20 + 0x68);
  func_0x000107c61428((long)unaff_x20 + lVar6,auStack_68,0,0);
  (**(code **)(lVar5 + 0x10))(auStack_80 + -extraout_x8,(long)unaff_x20 + lVar6,lVar2);
  lVar3 = lVar2;
  func_0x000103992dd0();
  (**(code **)(lVar5 + 8))(auStack_80 + -extraout_x8,lVar2);
  lVar4 = lVar2;
  func_0x000103992dd0();
  func_0x000107c61428((long)unaff_x20 + lVar6,auStack_80,0x21,0);
  (**(code **)(lVar5 + 0x18))((long)unaff_x20 + lVar6,param_1,lVar2);
  func_0x000107c614a8(auStack_80);
  FUN_101b1e4f4();
  if (((uint)lVar3 & 1) != ((uint)lVar4 & 1)) {
    pcVar1 = *(code **)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x88));
    lVar3 = lVar2;
    func_0x000103992dd0(lVar2);
    (*pcVar1)((uint)lVar3 & 1);
  }
  if (*(char *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80)) == '\x01') {
    *(undefined1 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80)) = 0;
    pcVar1 = *(code **)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x90));
    func_0x000103992dd0(lVar2);
    (*pcVar1)((uint)lVar2 & 1);
  }
  auStack_80[0] = 1;
  func_0x0001007d6d78(auStack_80);
  func_0x000107c5d278(unaff_x20[2]);
  return;
}



/* Entry: 101b1de90; end: 101b1df0f;  */

void FUN_101b1de90(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x28);
  if (lVar2 != 0) {
    lVar3 = *(long *)(unaff_x20 + 0x30);
    lVar1 = lVar2;
    func_0x000107c614f0(lVar2);
    pcVar4 = *(code **)(lVar3 + 8);
    func_0x000107c615f0(lVar2);
    (*pcVar4)(lVar1,lVar3);
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 101b1df10; end: 101b1df2f;  */

void FUN_101b1df10(void)

{
  FUN_101b1de90();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b1df30; end: 101b1df3b;  */

void FUN_101b1df30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e674a50);
  return;
}



/* Entry: 101b1df3c; end: 101b1e013;  */

void FUN_101b1df3c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_60 = PTR___sBOWV_11034d658 + 0x40;
  puStack_58 = PTR___sBbWV_11034d660 + 0x40;
  uVar2 = *(ulong *)(param_1 + 0x50);
  lVar1 = 0x13f;
  func_0x000103993790();
  if (uVar2 < 0x40) {
    lStack_50 = *(long *)(lVar1 + -8) + 0x40;
    puStack_48 = &UNK_10d9d1238;
    puStack_40 = PTR___sBoWV_11034d678 + 0x40;
    puStack_38 = &UNK_10d9d1238;
    puStack_30 = PTR___syycWV_11034f1c0 + 0x40;
    puStack_28 = puStack_30;
    func_0x000107c61524(param_1,0,8,&puStack_60,param_1 + 0x58);
  }
  return;
}



/* Entry: 101b1e014; end: 101b1e0e3;  */

uint FUN_101b1e014(void)

{
  long lVar1;
  long extraout_x8;
  long *unaff_x20;
  long lVar2;
  long lVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar1 = 0;
  func_0x000103993790(0,*(undefined8 *)(*unaff_x20 + 0x50));
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c4b940(unaff_x20[2]);
  lVar2 = *(long *)(*unaff_x20 + 0x68);
  func_0x000107c61428((long)unaff_x20 + lVar2,auStack_58,0,0);
  (**(code **)(lVar3 + 0x10))(auStack_60 + -extraout_x8,(long)unaff_x20 + lVar2,lVar1);
  lVar2 = lVar1;
  func_0x000103992dd0(lVar1);
  (**(code **)(lVar3 + 8))(auStack_60 + -extraout_x8,lVar1);
  func_0x000107c5d278(unaff_x20[2]);
  return (uint)lVar2 & 1;
}



/* Entry: 101b1e0e4; end: 101b1e143;  */

undefined1 FUN_101b1e0e4(void)

{
  undefined1 uVar1;
  long unaff_x20;
  long *plVar2;
  
  plVar2 = *(long **)(unaff_x20 + 0x20);
  func_0x000107c4b940(plVar2[2]);
  uVar1 = *(undefined1 *)((long)plVar2 + *(long *)(*plVar2 + 0x70));
  func_0x000107c5d278(plVar2[2]);
  return uVar1;
}



/* Entry: 101b1e144; end: 101b1e19b;  */

/* WARNING: Removing unreachable block (ram,0x000101b1e174) */

undefined1 FUN_101b1e144(void)

{
  undefined1 uStack_31;
  
  func_0x000104886d18(&uStack_31);
  return uStack_31;
}



/* Entry: 101b1e19c; end: 101b1e217;  */

void FUN_101b1e19c(void)

{
  func_0x000101b1e1bc();
  return;
}



/* Entry: 101b1e218; end: 101b1e293;  */

/* WARNING: Possible PIC construction at 0x000101b1e248: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b1e24c) */
/* WARNING: Removing unreachable block (ram,0x000101b1e284) */
/* WARNING: Removing unreachable block (ram,0x000101b1e254) */

void FUN_101b1e218(void)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c4b940(*(undefined8 *)(lVar1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(lVar1 + 0x10),PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 101b1e294; end: 101b1e2ab;  */

bool FUN_101b1e294(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x10) == 0;
}



/* Entry: 101b1e2ac; end: 101b1e2bf;  */

void FUN_101b1e2ac(void)

{
  func_0x000101b1e868();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101b1e2c0; end: 101b1e2c7;  */

/* WARNING: Possible PIC construction at 0x000101b1e248: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b1e24c) */
/* WARNING: Removing unreachable block (ram,0x000101b1e284) */
/* WARNING: Removing unreachable block (ram,0x000101b1e254) */

void FUN_101b1e2c0(void)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c4b940(*(undefined8 *)(lVar1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(lVar1 + 0x10),PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 101b1e2c8; end: 101b1e44b;  */

void FUN_101b1e2c8(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  long *unaff_x20;
  long lVar9;
  undefined1 uStack_61;
  
  lVar9 = *unaff_x20;
  puVar2 = PTR__OBJC_CLASS___NSRecursiveLock_1126b3138;
  func_0x000107c610f8();
  func_0x000107c453e4();
  unaff_x20[2] = (long)puVar2;
  uVar3 = 0xff;
  func_0x000107c5eec8(0xff);
  lVar4 = 0xff;
  func_0x000103993790(0xff,*(undefined8 *)(lVar9 + 0x50));
  uVar5 = 0xff;
  func_0x0001000876dc(0xff,lVar4);
  uVar6 = 0;
  func_0x000107c61510(0,uVar3,uVar5,0,0);
  lVar7 = 0;
  func_0x000107c5fc6c(0,uVar6);
  lVar9 = lVar7;
  func_0x00010085581c();
  func_0x000107c5f9fc(lVar7,uVar3,uVar5,lVar9);
  unaff_x20[3] = lVar7;
  lVar9 = *(long *)(*unaff_x20 + 0x78);
  uStack_61 = 0;
  func_0x0001000285a8(0x112d61fd8,&UNK_10d927f90);
  func_0x000107c613fc();
  puVar8 = &uStack_61;
  func_0x00010042e6a0();
  *(undefined1 **)((long)unaff_x20 + lVar9) = puVar8;
  *(undefined1 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80)) = 1;
  (**(code **)(*(long *)(lVar4 + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68),param_1,lVar4);
  *(undefined1 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70)) = param_2;
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x88));
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x90));
  *puVar1 = param_5;
  puVar1[1] = param_6;
  return;
}



/* Entry: 101b1e44c; end: 101b1e4f3;  */

void FUN_101b1e44c(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar2 = *unaff_x20;
  if (*(char *)((long)unaff_x20 + *(long *)(lVar2 + 0x70)) == '\x01') {
    lVar3 = *(long *)(lVar2 + 0x68);
    func_0x000107c61428((long)unaff_x20 + lVar3,auStack_48,0,0);
    lVar1 = 0;
    func_0x000103993790(0,*(undefined8 *)(lVar2 + 0x50));
    (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,(long)unaff_x20 + lVar3,lVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101b1e4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(lVar2 + 0x50) + -8) + 0x38))(param_1,1,1);
  return;
}



/* Entry: 101b1e4f4; end: 101b1e683;  */

void FUN_101b1e4f4(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long extraout_x8;
  long *unaff_x20;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined1 auStack_70 [8];
  long alStack_68 [3];
  
  lVar3 = 0;
  func_0x000103993790(0,*(undefined8 *)(*unaff_x20 + 0x50));
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = auStack_70 + -extraout_x8;
  FUN_101b1e44c(puVar13);
  func_0x000107c61428(unaff_x20 + 3,alStack_68,0x20,0);
  lVar12 = unaff_x20[3];
  uVar4 = 0;
  func_0x000107c5eec8(0);
  uVar5 = 0;
  func_0x0001000876dc(0,lVar3);
  uVar6 = uVar5;
  func_0x00010085581c();
  func_0x000107c5fa14(lVar12,uVar4,uVar5,uVar6);
  func_0x000107c614a8(alStack_68);
  uVar7 = 0;
  alStack_68[0] = lVar12;
  func_0x000107c5fa0c(0,uVar4,uVar5,uVar6);
  puVar8 = PTR___sSD6ValuesVyxq__GSTsMc_11034d700;
  func_0x000107c61520(PTR___sSD6ValuesVyxq__GSTsMc_11034d700,uVar7);
  plVar9 = alStack_68;
  func_0x000107c5fc90(plVar9,uVar5,uVar7,puVar8);
  plVar10 = plVar9;
  func_0x000107c5fc7c();
  if (plVar10 != (long *)0x0) {
    lVar12 = 0;
    do {
      func_0x000107c5fc98(alStack_68,lVar12,plVar9,uVar5);
      lVar1 = alStack_68[0];
      plVar10 = (long *)(lVar12 + 1);
      if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b1e684);
        (*pcVar2)();
      }
      func_0x000100087f6c(puVar13);
      func_0x000107c61574(lVar1);
      plVar11 = plVar9;
      func_0x000107c5fc7c(plVar9,uVar5);
      lVar12 = lVar12 + 1;
    } while (plVar10 != plVar11);
  }
  func_0x000107c6142c(plVar9);
  (**(code **)(lVar14 + 8))(puVar13,lVar3);
  return;
}



/* Entry: 101b1e684; end: 101b1e7a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b1e684(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  uVar3 = *param_2;
  lVar1 = 0;
  func_0x000107c5eec8();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    func_0x000107c4b940(*(undefined8 *)(param_1 + 0x10));
    (**(code **)(lVar4 + 0x10))
              (auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
               (long)param_2 + _DAT_1138154e8,lVar1);
    uStack_60 = 0;
    lVar4 = param_1 + 0x18;
    func_0x000107c61428(lVar4,auStack_78,0x21,0);
    func_0x00010085581c();
    uVar2 = 0;
    func_0x000107c5fa34(0,lVar1,uVar3,lVar4);
    func_0x000107c5fa44(&uStack_60,auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uVar2);
    func_0x000107c614a8(auStack_78);
    func_0x000107c5d278(*(undefined8 *)(param_1 + 0x10));
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 101b1e7a4; end: 101b1e83b;  */

void FUN_101b1e7a4(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar2 = *unaff_x20;
  func_0x000107c61170(unaff_x20[2]);
  func_0x000107c6142c(unaff_x20[3]);
  lVar3 = *(long *)(*unaff_x20 + 0x68);
  lVar1 = 0;
  func_0x000103993790(0,*(undefined8 *)(lVar2 + 0x50));
  (**(code **)(*(long *)(lVar1 + -8) + 8))((long)unaff_x20 + lVar3,lVar1);
  func_0x000107c61574(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78)));
  func_0x000107c61574(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x88) + 8));
  func_0x000107c61574(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x90) + 8));
  return;
}



/* Entry: 101b1e83c; end: 101b1e85b;  */

void FUN_101b1e83c(void)

{
  FUN_101b1e7a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b1e85c; end: 101b1e897;  */

void FUN_101b1e85c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e674ab4);
  return;
}



/* Entry: 101b1e898; end: 101b1e9db;  */

void FUN_101b1e898(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  code *pcVar6;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar3 = lStack_38;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  lVar1 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar1 != 0) {
    uVar2 = 0xd000000000000023;
    func_0x000107c5fadc(0xd000000000000023,0x800000010effc3f0);
    lVar3 = lVar1;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar2);
    if (lVar3 != 0) {
      uVar2 = 0x112d373e8;
      func_0x0001000285a8(0x112d373e8,&UNK_10d97fd10);
      lVar3 = 0;
      func_0x000107c5eea4();
      uVar4 = param_1;
      func_0x000107c6147c(param_1,&lStack_38,uVar2,lVar3,6);
      pcVar6 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
      uVar5 = (uint)uVar4 ^ 1;
      goto LAB_101b1e9c4;
    }
  }
  lVar3 = 0;
  func_0x000107c5eea4();
  pcVar6 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  uVar5 = 1;
LAB_101b1e9c4:
  (*pcVar6)(param_1,uVar5,1,lVar3);
  return;
}



/* Entry: 101b1e9dc; end: 101b1eb87;  */

void FUN_101b1e9dc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar6 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)puVar6 - extraout_x8_00;
  func_0x000100083b20(&lStack_58);
  lVar2 = lStack_58;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c61170(lStack_58);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    func_0x0001009f0578(param_1,lVar7);
    lVar2 = lVar7;
    (**(code **)(lVar8 + 0x30))(lVar7,1,lVar1);
    if ((int)lVar2 == 1) {
      puVar5 = (undefined1 *)0x0;
    }
    else {
      puVar5 = puVar6;
      (**(code **)(lVar8 + 0x20))(puVar6,lVar7,lVar1);
      func_0x000107c5ee70();
      (**(code **)(lVar8 + 8))(puVar6,lVar1);
    }
    uVar4 = 0xd000000000000023;
    func_0x000107c5fadc(0xd000000000000023,0x800000010effc3f0);
    func_0x000107c56bcc(lVar3);
    func_0x000107c615e8(puVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar3);
  }
  func_0x0001000d1dcc(param_1);
  return;
}



/* Entry: 101b1eb88; end: 101b1ebc3;  */

undefined4 FUN_101b1eb88(ulong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 4;
  if (2000 < param_1) {
    uVar2 = 5;
  }
  uVar1 = 3;
  if (1000 < param_1) {
    uVar1 = uVar2;
  }
  uVar2 = 2;
  if (500 < param_1) {
    uVar2 = uVar1;
  }
  uVar1 = 1;
  if (100 < param_1) {
    uVar1 = uVar2;
  }
  uVar2 = 0;
  if (0x32 < (long)param_1) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 101b1ebc4; end: 101b1ed87;  */

void FUN_101b1ebc4(long *param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auStack_68 [24];
  
  lVar9 = *param_1;
  puVar5 = auStack_68;
  func_0x000107c61428(unaff_x20 + 0x98,puVar5,0x21,0);
  uVar2 = *(ulong *)(unaff_x20 + 0x98);
  func_0x000107c61558();
  uVar4 = (uint)uVar2;
  lVar7 = *(long *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x20 + 0x98) = 0x8000000000000000;
  lVar3 = lVar9;
  func_0x000101b0fc0c();
  uVar6 = (ulong)~(uint)puVar5 & 1;
  if (SCARRY8(*(long *)(lVar7 + 0x10),uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101b1ed18);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < (long)(*(long *)(lVar7 + 0x10) + uVar6)) {
    FUN_101b11464();
    lVar3 = lVar9;
    func_0x000101b0fc0c();
    if (((uint)puVar5 & 1) != (uVar4 & 1)) {
      func_0x000107c60624(&UNK_1106b5710);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b1ed88);
      (*pcVar1)();
    }
    *(long *)(unaff_x20 + 0x98) = lVar7;
  }
  else if ((uVar2 & 1) == 0) {
    FUN_101b109e0();
    *(long *)(unaff_x20 + 0x98) = lVar7;
  }
  else {
    *(long *)(unaff_x20 + 0x98) = lVar7;
  }
  if (((ulong)puVar5 & 1) == 0) {
    func_0x000101b1724c(lVar3,lVar9,PTR___swiftEmptyArrayStorage_11034f1c8,lVar7);
  }
  lVar7 = *(long *)(lVar7 + 0x38);
  uVar8 = *(ulong *)(lVar7 + lVar3 * 8);
  uVar2 = uVar8;
  func_0x000107c61558();
  *(ulong *)(lVar7 + lVar3 * 8) = uVar8;
  uVar6 = uVar8;
  if ((uVar2 & 1) == 0) {
    uVar6 = 0;
    FUN_101b0f7cc(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
    *(ulong *)(lVar7 + lVar3 * 8) = uVar6;
  }
  uVar2 = *(ulong *)(uVar6 + 0x10);
  uVar8 = uVar6;
  if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar2) {
    uVar8 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    FUN_101b0f7cc(uVar8,uVar2 + 1,1,uVar6);
    *(ulong *)(lVar7 + lVar3 * 8) = uVar8;
  }
  *(ulong *)(uVar8 + 0x10) = uVar2 + 1;
  lVar3 = uVar8 + uVar2 * 0x40;
  lVar9 = param_1[1];
  lVar7 = *param_1;
  lVar11 = param_1[3];
  lVar10 = param_1[2];
  lVar13 = param_1[5];
  lVar12 = param_1[4];
  uVar14 = *(undefined8 *)((long)param_1 + 0x29);
  *(undefined8 *)(lVar3 + 0x51) = *(undefined8 *)((long)param_1 + 0x31);
  *(undefined8 *)(lVar3 + 0x49) = uVar14;
  *(long *)(lVar3 + 0x38) = lVar11;
  *(long *)(lVar3 + 0x30) = lVar10;
  *(long *)(lVar3 + 0x48) = lVar13;
  *(long *)(lVar3 + 0x40) = lVar12;
  *(long *)(lVar3 + 0x28) = lVar9;
  *(long *)(lVar3 + 0x20) = lVar7;
  func_0x000107c614a8(auStack_68);
  return;
}



/* Entry: 101b1ed88; end: 101b1ee07;  */

void FUN_101b1ed88(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xe8));
  return;
}



/* Entry: 101b1ee08; end: 101b1ee47;  */

void FUN_101b1ee08(void)

{
  FUN_101b1ed88();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b1ee48; end: 101b1ee57;  */

undefined1  [16] FUN_101b1ee48(void)

{
  return ZEXT816(0x110443c18);
}



/* Entry: 101b1ee58; end: 101b1ee93;  */

/* WARNING: Possible PIC construction at 0x000101b1ee6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b1ee70) */
/* WARNING: Removing unreachable block (ram,0x000101b1ee88) */
/* WARNING: Removing unreachable block (ram,0x000101b1ee7c) */

void FUN_101b1ee58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101b1ee94; end: 101b1efa3;  */

undefined8 * FUN_101b1ee94(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  if (4 < uVar1) {
    func_0x000107c61434(uVar1);
  }
  uVar2 = param_2[4];
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return param_1;
}



/* Entry: 101b1efa4; end: 101b1efeb;  */

undefined8 FUN_101b1efa4(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112e00e98;
  func_0x0001000285a8(0x112e00e98,&UNK_10d9d1390);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 101b1efec; end: 101b1f06b;  */

undefined8 * FUN_101b1efec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  puVar3 = param_1 + 3;
  param_1[2] = param_2[2];
  uVar4 = param_2[3];
  if (4 < *puVar3) {
    if (4 < uVar4) {
      *puVar3 = uVar4;
      func_0x000107c6142c();
      goto LAB_101b1f050;
    }
    FUN_101b1efa4(puVar3);
  }
  *puVar3 = uVar4;
LAB_101b1f050:
  param_1[4] = param_2[4];
  return param_1;
}



/* Entry: 101b1f06c; end: 101b1f113;  */

int FUN_101b1f06c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101b1f114; end: 101b1f15f;  */

undefined8 * FUN_101b1f114(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[1] = param_2[1];
  return param_1;
}



/* Entry: 101b1f160; end: 101b1f19b;  */

undefined8 * FUN_101b1f160(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar1);
  param_1[1] = param_2[1];
  return param_1;
}



/* Entry: 101b1f19c; end: 101b1f44b;  */

int FUN_101b1f19c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101b1f44c; end: 101b1f47b;  */

/* WARNING: Possible PIC construction at 0x000101b1f460: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b1f464) */

void FUN_101b1f44c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101b1f47c; end: 101b1f5db;  */

undefined8 * FUN_101b1f47c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar3 = param_2[6];
  param_1[6] = uVar3;
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar2 = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[8] = uVar2;
  param_1[10] = param_2[10];
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  uVar2 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 101b1f5dc; end: 101b1f66f;  */

undefined8 * FUN_101b1f5dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  func_0x000107c6142c(param_1[5]);
  uVar2 = param_1[6];
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[10] = param_2[10];
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  uVar2 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar2;
  return param_1;
}



/* Entry: 101b1f670; end: 101b1f77f;  */

int FUN_101b1f670(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101b1f780; end: 101b1f803;  */

void FUN_101b1f780(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101b1f804; end: 101b1f887;  */

bool FUN_101b1f804(ulong *param_1,ulong *param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  
  uVar2 = *param_1;
  uVar3 = *param_2;
  if ((long)uVar2 < 2) {
    if (uVar2 == 0) {
      if (uVar3 != 0) {
        return false;
      }
      return true;
    }
    if (uVar2 == 1) {
      if (uVar3 != 1) {
        return false;
      }
      return true;
    }
  }
  else {
    if (uVar2 == 2) {
      if (uVar3 != 2) {
        return false;
      }
      return true;
    }
    if (uVar2 == 3) {
      if (uVar3 != 3) {
        return false;
      }
      return true;
    }
    if (uVar2 == 4) {
      if (uVar3 != 4) {
        return false;
      }
      return true;
    }
  }
  if (uVar3 < 5) {
    return false;
  }
  lVar6 = *(long *)(uVar2 + 0x10);
  if (lVar6 == *(long *)(uVar3 + 0x10)) {
    if ((lVar6 != 0) && (uVar2 != uVar3)) {
      piVar4 = (int *)(uVar2 + 0x20);
      piVar5 = (int *)(uVar3 + 0x20);
      do {
        lVar6 = lVar6 + -1;
        bVar1 = *piVar4 == *piVar5;
        if (*piVar4 != *piVar5) {
          return bVar1;
        }
        piVar4 = piVar4 + 2;
        piVar5 = piVar5 + 2;
      } while (lVar6 != 0);
      return bVar1;
    }
    return true;
  }
  return false;
}



/* Entry: 101b1f888; end: 101b1f93b;  */

bool FUN_101b1f888(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  
  uVar1 = *param_1;
  dVar3 = (double)param_1[1];
  uVar2 = *param_2;
  dVar4 = (double)param_2[1];
  if ((long)uVar1 < 2) {
    if (uVar1 == 0) {
      if (uVar2 != 0) {
        return false;
      }
      goto LAB_101b1f920;
    }
    if (uVar1 == 1) {
      if (uVar2 != 1) {
        return false;
      }
      goto LAB_101b1f920;
    }
  }
  else {
    if (uVar1 == 2) {
      if (uVar2 != 2) {
        return false;
      }
      goto LAB_101b1f920;
    }
    if (uVar1 == 3) {
      if (uVar2 != 3) {
        return false;
      }
      goto LAB_101b1f920;
    }
    if (uVar1 == 4) {
      if (uVar2 != 4) {
        return false;
      }
      goto LAB_101b1f920;
    }
  }
  if ((uVar2 < 5) || (FUN_101b1f984(), (uVar1 & 1) == 0)) {
    return false;
  }
LAB_101b1f920:
  return dVar3 == dVar4;
}



/* Entry: 101b1f93c; end: 101b1f983;  */

uint FUN_101b1f93c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = param_2[4];
  func_0x000101b1f9fc(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101b1f984; end: 101b1fb6b;  */

bool FUN_101b1f984(long param_1,long param_2)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != *(long *)(param_2 + 0x10)) {
    return false;
  }
  if ((lVar4 != 0) && (param_1 != param_2)) {
    piVar2 = (int *)(param_1 + 0x20);
    piVar3 = (int *)(param_2 + 0x20);
    do {
      lVar4 = lVar4 + -1;
      bVar1 = *piVar2 == *piVar3;
      if (*piVar2 != *piVar3) {
        return bVar1;
      }
      piVar2 = piVar2 + 2;
      piVar3 = piVar3 + 2;
    } while (lVar4 != 0);
    return bVar1;
  }
  return true;
}



/* Entry: 101b1fb6c; end: 101b1fbc3;  */

/* WARNING: Possible PIC construction at 0x000101b1fb80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b1fb90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b1fba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b1fbb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b1fba4) */
/* WARNING: Removing unreachable block (ram,0x000101b1fb94) */
/* WARNING: Removing unreachable block (ram,0x000101b1fb84) */
/* WARNING: Removing unreachable block (ram,0x000101b1fbb4) */

void FUN_101b1fb6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101b1fbc4; end: 101b1fc67;  */

undefined8 * FUN_101b1fbc4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  uVar3 = param_2[4];
  uVar5 = param_2[5];
  param_1[4] = uVar3;
  param_1[5] = uVar5;
  uVar1 = param_2[6];
  uVar6 = param_2[7];
  param_1[6] = uVar1;
  param_1[7] = uVar6;
  uVar2 = param_2[8];
  uVar7 = param_2[9];
  param_1[8] = uVar2;
  param_1[9] = uVar7;
  param_1[10] = param_2[10];
  func_0x000107c61434();
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar7);
  return param_1;
}



/* Entry: 101b1fc68; end: 101b1fd6b;  */

undefined8 * FUN_101b1fc68(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[10] = param_2[10];
  return param_1;
}



/* Entry: 101b1fd6c; end: 101b1fe07;  */

undefined8 * FUN_101b1fd6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  func_0x000107c6142c(param_1[3]);
  uVar2 = param_1[4];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(param_1[5]);
  uVar2 = param_1[6];
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(param_1[7]);
  uVar2 = param_1[8];
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c6142c(uVar2);
  param_1[10] = param_2[10];
  return param_1;
}



/* Entry: 101b1fe08; end: 101b1ff83;  */

int FUN_101b1fe08(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x16] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101b1ff84; end: 101b200cb;  */

void FUN_101b1ff84(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  if (4 < uVar2) {
    func_0x000107c61434(uVar2);
  }
  uVar1 = param_2[1];
  *param_1 = uVar2;
  param_1[1] = uVar1;
  return;
}



/* Entry: 101b200cc; end: 101b20517;  */

int FUN_101b200cc(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffa < param_2) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + 0x7ffffffb;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 5;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101b20518; end: 101b20557;  */

void FUN_101b20518(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e00ea0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d1624;
  func_0x000107c61520(&UNK_10d9d1624,&UNK_110444500);
  puRam0000000112e00ea0 = puVar1;
  return;
}



/* Entry: 101b20558; end: 101b2055b;  */

void FUN_101b20558(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e00ea8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d168c;
  func_0x000107c61520(&UNK_10d9d168c,&UNK_110444470);
  puRam0000000112e00ea8 = puVar1;
  return;
}



/* Entry: 101b2055c; end: 101b2059b;  */

void FUN_101b2055c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e00ea8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d168c;
  func_0x000107c61520(&UNK_10d9d168c,&UNK_110444470);
  puRam0000000112e00ea8 = puVar1;
  return;
}



/* Entry: 101b2059c; end: 101b2059f;  */

void FUN_101b2059c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e00eb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d1734;
  func_0x000107c61520(&UNK_10d9d1734,&UNK_110444348);
  puRam0000000112e00eb0 = puVar1;
  return;
}



/* Entry: 101b205a0; end: 101b205df;  */

void FUN_101b205a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e00eb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d1734;
  func_0x000107c61520(&UNK_10d9d1734,&UNK_110444348);
  puRam0000000112e00eb0 = puVar1;
  return;
}



/* Entry: 101b205e0; end: 101b205e3;  */

void FUN_101b205e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e00eb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d175c;
  func_0x000107c61520(&UNK_10d9d175c,&UNK_1104442b8);
  puRam0000000112e00eb8 = puVar1;
  return;
}



/* Entry: 101b205e4; end: 101b20623;  */

void FUN_101b205e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e00eb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d175c;
  func_0x000107c61520(&UNK_10d9d175c,&UNK_1104442b8);
  puRam0000000112e00eb8 = puVar1;
  return;
}



/* Entry: 101b20624; end: 101b20627;  */

void FUN_101b20624(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e00ec0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d1814;
  func_0x000107c61520(&UNK_10d9d1814,&UNK_110444120);
  puRam0000000112e00ec0 = puVar1;
  return;
}



/* Entry: 101b20628; end: 101b20667;  */

void FUN_101b20628(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e00ec0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d1814;
  func_0x000107c61520(&UNK_10d9d1814,&UNK_110444120);
  puRam0000000112e00ec0 = puVar1;
  return;
}



/* Entry: 101b20668; end: 101b207d3;  */

int FUN_101b20668(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101b206e4;
        goto LAB_101b206c8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101b206c8:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_101b206e4:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101b207d4; end: 101b208c7;  */

ulong * FUN_101b207d4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = *param_2;
  if (uVar2 < 0xffffffff) {
    if (uVar1 < 0xffffffff) {
      *param_1 = uVar1;
    }
    else {
      *param_1 = uVar1;
      func_0x000107c61434();
    }
  }
  else if (uVar1 < 0xffffffff) {
    func_0x000107c6142c(uVar2);
    *param_1 = *param_2;
  }
  else {
    *param_1 = uVar1;
    func_0x000107c61434();
    func_0x000107c6142c(uVar2);
  }
  return param_1;
}



/* Entry: 101b208c8; end: 101b209bf;  */

int FUN_101b208c8(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffa < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffffb;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (5 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -4;
  }
  return iVar1;
}



/* Entry: 101b209c0; end: 101b209ff;  */

void FUN_101b209c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e00ec8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d18ec;
  func_0x000107c61520(&UNK_10d9d18ec,&UNK_110444590);
  puRam0000000112e00ec8 = puVar1;
  return;
}



/* Entry: 101b20a00; end: 101b20b87;  */

undefined1 FUN_101b20a00(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 101b20b88; end: 101b20c8f; -[_TtC33BadgeRankerServicesImplementation17SCBadgeRankerImpl registerSource:updateStrategy:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b20b88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000100083b20(&uStack_70);
  uVar1 = uStack_70;
  func_0x000107c614f0(uStack_70);
  func_0x000107c61174(param_4);
  uVar2 = param_4;
  func_0x000103993a64();
  pcVar4 = *(code **)(lStack_68 + 0x10);
  uVar3 = 0;
  func_0x0001007bbbf8(0);
  (*pcVar4)(param_3,uVar2,param_2,uVar3,uVar1,lStack_68);
  func_0x000107c615e8(uStack_70);
  func_0x000107c61574(param_2);
  func_0x000103992a5c(0);
  func_0x000107c610f8();
  func_0x0001039927c4(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101b20c90; end: 101b20cef; -[_TtC33BadgeRankerServicesImplementation17SCBadgeRankerImpl init] */

void FUN_101b20c90(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BadgeRankerServicesImplementation.SCBadgeRankerImpl",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b20cbc);
  (*pcVar1)();
}



/* Entry: 101b20cf0; end: 101b20d5b; -[_TtC33BadgeRankerServicesImplementation17SCBadgeRankerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b20cf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e00f50));
  return;
}



/* Entry: 101b20d5c; end: 101b20d87;  */

long FUN_101b20d5c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101b20d88; end: 101b20e27;  */

int FUN_101b20d88(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 101b20e28; end: 101b20e57;  */

void FUN_101b20e28(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  func_0x000101b217fc();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 101b20e58; end: 101b20e5f;  */

undefined8 FUN_101b20e58(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 101b20e60; end: 101b20ed3;  */

void FUN_101b20e60(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112e01018;
  func_0x0001000285a8(0x112e01018,&UNK_10d9d1ac0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101b20ed4; end: 101b20edf;  */

void FUN_101b20ed4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 101b20ee0; end: 101b20f8b;  */

void FUN_101b20ee0(void)

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



/* Entry: 101b20f8c; end: 101b20fcb;  */

bool FUN_101b20f8c(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101b20fcc; end: 101b21013;  */

void FUN_101b20fcc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9d1d60,100,2);
  uRam0000000113803a98 = uStack_38;
  uRam0000000113803a90 = uStack_40;
  uRam0000000113803aa8 = uStack_28;
  uRam0000000113803aa0 = uStack_30;
  uRam0000000113803ab8 = uStack_18;
  uRam0000000113803ab0 = uStack_20;
  return;
}



/* Entry: 101b21014; end: 101b2112b;  */

/* WARNING: Removing unreachable block (ram,0x000101b21110) */

void FUN_101b21014(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x48);
          goto LAB_101b2107c;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 400);
          FUN_101b21808();
          (*pcVar3)(unaff_x20 + 8,&UNK_110444a40,lVar1,param_2,param_3);
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x48);
        }
        else if (lVar1 == 4) {
          pcVar3 = *(code **)(param_3 + 0x60);
        }
        else {
          if (lVar1 != 5) goto LAB_101b2108c;
          pcVar3 = *(code **)(param_3 + 0x48);
        }
LAB_101b2107c:
        (*pcVar3)();
      }
LAB_101b2108c:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 101b2112c; end: 101b2123f;  */

void FUN_101b2112c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  uint *unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  
  uVar1 = (ulong)*unaff_x20;
  if ((*unaff_x20 == 0) || ((**(code **)(param_3 + 0x18))(uVar1,1,param_2,param_3), unaff_x21 == 0))
  {
    lVar2 = *(long *)(unaff_x20 + 2);
    if (*(long *)(lVar2 + 0x10) != 0) {
      pcVar3 = *(code **)(param_3 + 400);
      FUN_101b21808();
      (*pcVar3)(lVar2,2,&UNK_110444a40,uVar1,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    if ((((unaff_x20[4] == 0) ||
         ((**(code **)(param_3 + 0x18))(unaff_x20[4],3,param_2,param_3), unaff_x21 == 0)) &&
        ((*(long *)(unaff_x20 + 6) == 0 ||
         ((**(code **)(param_3 + 0x20))(*(long *)(unaff_x20 + 6),4,param_2,param_3), unaff_x21 == 0)
         ))) && ((unaff_x20[8] == 0 ||
                 ((**(code **)(param_3 + 0x18))(unaff_x20[8],5,param_2,param_3), unaff_x21 == 0))))
    {
      func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 10),*(undefined8 *)(unaff_x20 + 0xc),
                          param_2,param_3);
    }
  }
  return;
}



/* Entry: 101b21240; end: 101b2128f;  */

void FUN_101b21240(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined **)(param_1 + 2) = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[4] = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 0xc) = 0xc000000000000000;
  *(undefined8 *)(param_1 + 10) = 0;
  return;
}



/* Entry: 101b21290; end: 101b212bf;  */

undefined1  [16] FUN_101b21290(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x28);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  return auVar1;
}



/* Entry: 101b212c0; end: 101b212f3;  */

void FUN_101b212c0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Entry: 101b212f4; end: 101b21307;  */

undefined1  [16] FUN_101b212f4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x28;
  auVar1._0_8_ = 0x101b21304;
  return auVar1;
}



/* Entry: 101b21308; end: 101b2132f;  */

void FUN_101b21308(void)

{
  FUN_101b21014();
  return;
}



/* Entry: 101b21330; end: 101b21333;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101b21330(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 101b21334; end: 101b2136b;  */

uint FUN_101b21334(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_101b21e0c();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 101b2136c; end: 101b213c3;  */

uint FUN_101b2136c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_60 = unaff_x20[6];
  FUN_101b21848(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 101b213c4; end: 101b21463;  */

/* WARNING: Possible PIC construction at 0x000101b21410: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b21420: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b21414) */
/* WARNING: Removing unreachable block (ram,0x000101b21424) */

void FUN_101b213c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112e01020 != -1) {
    func_0x000107c61568(0x112e01020,FUN_101b20fcc);
  }
  uVar5 = uRam0000000113803ab8;
  uVar4 = uRam0000000113803ab0;
  uVar3 = uRam0000000113803aa8;
  uVar2 = uRam0000000113803aa0;
  uVar1 = uRam0000000113803a98;
  *param_1 = uRam0000000113803a90;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 101b21464; end: 101b2149f;  */

void FUN_101b21464(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112e01078;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112e01078,&UNK_10d9d1d08);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}


