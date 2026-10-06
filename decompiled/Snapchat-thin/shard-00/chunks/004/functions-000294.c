/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10065b8c4; end: 10065b903;  */

undefined8 * FUN_10065b8c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  
  FUN_100563630();
  if (param_1 < (undefined8 *)unaff_x19[2]) {
    puVar1 = param_1 + 1;
    *param_1 = *param_2;
  }
  else {
    puVar1 = unaff_x19;
    FUN_10065b904();
  }
  unaff_x19[1] = puVar1;
  return puVar1 + -1;
}



/* Entry: 10065b904; end: 10065b997;  */

long FUN_10065b904(long param_1)

{
  long lVar1;
  long *unaff_x19;
  long lVar2;
  undefined8 *unaff_x20;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  FUN_1006564ac();
  FUN_10065b998();
  lVar2 = *unaff_x19;
  lVar1 = unaff_x19[1];
  plStack_58 = unaff_x19 + 2;
  plStack_38 = plStack_58;
  if (param_1 == 0) {
    plStack_58 = (long *)0x0;
  }
  else {
    FUN_10065b9f0();
  }
  puStack_50 = (undefined8 *)((long)plStack_58 + (lVar1 - lVar2));
  plStack_40 = plStack_58 + param_1;
  puStack_48 = puStack_50 + 1;
  *puStack_50 = *unaff_x20;
  FUN_100656464();
  FUN_10065ba20();
  lVar2 = unaff_x19[1];
  FUN_10065ba60(&plStack_58);
  return lVar2;
}



/* Entry: 10065b998; end: 10065b9ef;  */

/* WARNING: Possible PIC construction at 0x00010065ba00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010065ba04) */
/* WARNING: Removing unreachable block (ram,0x00010065ba18) */

ulong FUN_10065b998(long *param_1,ulong param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined1 *puVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3d == 0) {
    uVar2 = param_1[2] - *param_1 >> 2;
    if (uVar2 <= param_2) {
      uVar2 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      uVar2 = 0x1fffffffffffffff;
    }
    return uVar2;
  }
  puVar3 = &stack0xfffffffffffffff0;
  uVar4 = 0x10065b9d8;
  func_0x000104bef190();
  puVar1 = &stack0xfffffffffffffff0;
  while (param_2 >> 0x3d != 0) {
    *(undefined1 **)(puVar1 + -0x10) = puVar3;
    *(undefined8 *)(puVar1 + -8) = uVar4;
    func_0x000104bd35f4();
    *(undefined8 *)(puVar1 + -0x30) = unaff_x20;
    *(ulong *)(puVar1 + -0x28) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x20) = puVar1 + -0x10;
    *(code **)(puVar1 + -0x18) = FUN_10065b9f0;
    puVar3 = puVar1 + -0x20;
    uVar4 = 0x10065ba04;
    puVar1 = puVar1 + -0x30;
    unaff_x19 = param_2;
  }
  param_2 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2);
  return param_2;
}



/* Entry: 10065b9f0; end: 10065ba0f;  */

void FUN_10065b9f0(void)

{
  func_0x00010065b9d8();
  return;
}



/* Entry: 10065ba10; end: 10065ba1f;  */

void FUN_10065ba10(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 << 3);
  return;
}



/* Entry: 10065ba20; end: 10065ba57;  */

void FUN_10065ba20(long *param_1,long param_2)

{
  func_0x0001006567d0();
  func_0x000107c610b4(*(long *)(param_2 + 8) - (param_1[1] - *param_1));
  func_0x000100656920();
  return;
}



/* Entry: 10065ba58; end: 10065ba5f;  */

void FUN_10065ba58(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10065ba60; end: 10065ba8b;  */

long * FUN_10065ba60(long *param_1)

{
  FUN_10065ba58();
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 10065ba8c; end: 10065baa7;  */

void FUN_10065ba8c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10065baa8; end: 10065baeb;  */

undefined8 * FUN_10065baa8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cdf6b8;
  FUN_10014f860(param_1 + 1);
  return param_1;
}



/* Entry: 10065baec; end: 10065baf7;  */

void FUN_10065baec(void)

{
  return;
}



/* Entry: 10065baf8; end: 10065bb23;  */

void FUN_10065baf8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  FUN_10065baec();
  FUN_100657ca8();
  *(long *)(unaff_x19 + 8) = unaff_x20 + 0x3d0;
  return;
}



/* Entry: 10065bb24; end: 10065bb5f;  */

void FUN_10065bb24(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = param_1 + 2;
    FUN_10065b9f0();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2);
    return;
  }
  func_0x000104bef190();
  return;
}



/* Entry: 10065bb60; end: 10065bb67;  */

void FUN_10065bb60(void)

{
  return;
}



/* Entry: 10065bb68; end: 10065bccb; -[SCMusicStickerInjectorServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10065bb68(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1 + _DAT_1127273ec;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  param_1 = param_1 + _DAT_1127273f0;
  func_0x000107c61148();
  lVar1 = param_1;
  func_0x000107c5cd6c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar3 = PTR_PTR_1126ae720;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  puStack_60 = &UNK_1056700e4;
  puStack_58 = &UNK_110896830;
  lStack_50 = lVar2;
  lStack_48 = lVar1;
  func_0x000107c61174(lVar1);
  func_0x000107c61174(lVar2);
  func_0x000107c3e4fc(puVar3,param_2,&puStack_70);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ba8e8;
  func_0x000107c610f4(PTR_PTR_1126ba8e8);
  func_0x000107c46298();
  puVar5 = PTR_PTR_1126bc998;
  func_0x000107c610f4(PTR_PTR_1126bc998);
  func_0x000107c489f8();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lStack_48);
  func_0x000107c61170(lStack_50);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10065bccc; end: 10065bd13; -[SCMusicServices trackAssetLoaderObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10065bccc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11303ff38;
  func_0x000107c61428(param_1 + _DAT_11303ff38,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10065bd14; end: 10065bdb7; -[SCMusicStickerInjectorServices initWithStickerInjector:config:] */

undefined1 *
FUN_10065bd14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112702388;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10065bdb8; end: 10065bdeb;  */

void FUN_10065bdb8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10065bdec; end: 10065bdf3;  */

void FUN_10065bdec(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10065bdf4; end: 10065be47;  */

void FUN_10065bdf4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10065be48; end: 10065be4f;  */

void FUN_10065be48(undefined8 *param_1)

{
  undefined8 unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001cf380();
  func_0x000107c613fc();
  func_0x00010065beb0(uStack_38);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10065be50; end: 10065bf77;  */

void FUN_10065be50(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001cf380();
  func_0x000107c613fc();
  func_0x00010065beb0(uStack_38);
  *param_1 = param_2;
  return;
}



/* Entry: 10065bf78; end: 10065c00b; -[SCGenericImageStickerInjectorServiceProvider provide] */

void FUN_10065bf78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110896770);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ba8e8;
  func_0x000107c610f4(PTR_PTR_1126ba8e8);
  func_0x000107c46298();
  puVar3 = PTR_PTR_1126baa18;
  func_0x000107c610f4(PTR_PTR_1126baa18);
  func_0x000107c489f8();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10065c00c; end: 10065c0af; -[SCGenericImageStickerInjectorServices initWithStickerInjector:config:] */

undefined1 *
FUN_10065c00c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e8f00;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10065c0b0; end: 10065c0b7;  */

void FUN_10065c0b0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10065c0b8; end: 10065c10b;  */

void FUN_10065c0b8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10065c10c; end: 10065c113;  */

void FUN_10065c10c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001ce8e8();
  func_0x000107c613fc();
  func_0x00010065c174(uStack_38);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10065c114; end: 10065c23b;  */

void FUN_10065c114(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001ce8e8();
  func_0x000107c613fc();
  func_0x00010065c174(uStack_38);
  *param_1 = param_2;
  return;
}



/* Entry: 10065c23c; end: 10065c2d3; -[SCDiscoverDeeplinkStickerInjectorServiceProvider provide] */

void FUN_10065c23c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110896750);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ba8e8;
  func_0x000107c610f4(PTR_PTR_1126ba8e8);
  func_0x000107c46298();
  puVar3 = PTR_PTR_1126ba9e8;
  func_0x000107c610f4(PTR_PTR_1126ba9e8);
  func_0x000107c489f8();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10065c2d4; end: 10065c377; -[SCDiscoverDeeplinkStickerInjectorServices initWithStickerInjector:config:] */

undefined1 *
FUN_10065c2d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e8ef8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10065c378; end: 10065c37f;  */

void FUN_10065c378(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10065c380; end: 10065c3d3;  */

void FUN_10065c380(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10065c3d4; end: 10065c3db;  */

void FUN_10065c3d4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001d3f98();
  func_0x000107c613fc();
  func_0x00010065c43c(uStack_38);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10065c3dc; end: 10065c503;  */

void FUN_10065c3dc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001d3f98();
  func_0x000107c613fc();
  func_0x00010065c43c(uStack_38);
  *param_1 = param_2;
  return;
}



/* Entry: 10065c504; end: 10065c59b; -[SCUVIndexStickerInjectorServiceProvider provide] */

void FUN_10065c504(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110896860);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ba8e8;
  func_0x000107c610f4(PTR_PTR_1126ba8e8);
  func_0x000107c46298();
  puVar3 = PTR_PTR_1126baae8;
  func_0x000107c610f4(PTR_PTR_1126baae8);
  func_0x000107c489f8();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10065c59c; end: 10065c63f; -[SCUVIndexStickerInjectorServices initWithStickerInjector:config:] */

undefined1 *
FUN_10065c59c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fda98;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10065c640; end: 10065c647;  */

void FUN_10065c640(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  FUN_1000285a8(0x112dc00a8,&UNK_10d97c2e0);
  func_0x000107c6157c();
  puVar2 = &UNK_1016af710;
  FUN_1000823a8();
  puVar3 = puVar2;
  func_0x0001000ad7c4();
  func_0x000107c61574(puVar2);
  puVar2 = PTR_PTR_1126ba8e8;
  func_0x000107c610f8();
  func_0x000107c46298();
  if (puVar2 != (undefined *)0x0) {
    uVar4 = 0;
    FUN_10020c15c(0);
    func_0x000107c610f8();
    func_0x00010065c710(puVar3,puVar2,uVar4);
    *param_1 = puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10065c710);
  (*pcVar1)();
}



/* Entry: 10065c648; end: 10065c773;  */

void FUN_10065c648(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  FUN_1000285a8(0x112dc00a8,&UNK_10d97c2e0);
  func_0x000107c6157c(param_2);
  puVar2 = &UNK_1016af710;
  FUN_1000823a8(&UNK_1016af710,param_2);
  puVar3 = puVar2;
  func_0x0001000ad7c4();
  func_0x000107c61574(puVar2);
  puVar2 = PTR_PTR_1126ba8e8;
  func_0x000107c610f8();
  func_0x000107c46298();
  if (puVar2 != (undefined *)0x0) {
    uVar4 = 0;
    FUN_10020c15c(0);
    func_0x000107c610f8();
    func_0x00010065c710(puVar3,puVar2,uVar4);
    *param_1 = puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10065c710);
  (*pcVar1)();
}



/* Entry: 10065c774; end: 10065c77b;  */

void FUN_10065c774(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  FUN_1000285a8(0x112dc00a8,&UNK_10d97c2e0);
  func_0x000107c6157c();
  puVar2 = &UNK_1016b0344;
  FUN_1000823a8();
  puVar3 = puVar2;
  func_0x0001000ad7c4();
  func_0x000107c61574(puVar2);
  puVar2 = PTR_PTR_1126ba8e8;
  func_0x000107c610f8();
  func_0x000107c46298();
  if (puVar2 != (undefined *)0x0) {
    uVar4 = 0;
    FUN_1001dd7f4(0);
    func_0x000107c610f8();
    func_0x00010065c844(puVar3,puVar2,uVar4);
    *param_1 = puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10065c844);
  (*pcVar1)();
}



/* Entry: 10065c77c; end: 10065c8a7;  */

void FUN_10065c77c(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  FUN_1000285a8(0x112dc00a8,&UNK_10d97c2e0);
  func_0x000107c6157c(param_2);
  puVar2 = &UNK_1016b0344;
  FUN_1000823a8(&UNK_1016b0344,param_2);
  puVar3 = puVar2;
  func_0x0001000ad7c4();
  func_0x000107c61574(puVar2);
  puVar2 = PTR_PTR_1126ba8e8;
  func_0x000107c610f8();
  func_0x000107c46298();
  if (puVar2 != (undefined *)0x0) {
    uVar4 = 0;
    FUN_1001dd7f4(0);
    func_0x000107c610f8();
    func_0x00010065c844(puVar3,puVar2,uVar4);
    *param_1 = puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10065c844);
  (*pcVar1)();
}



/* Entry: 10065c8a8; end: 10065c8af;  */

void FUN_10065c8a8(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  FUN_1000285a8(0x112dc00a8,&UNK_10d97c2e0);
  func_0x000107c6157c();
  puVar2 = &UNK_1016b236c;
  FUN_1000823a8();
  puVar3 = puVar2;
  func_0x0001000ad7c4();
  func_0x000107c61574(puVar2);
  puVar2 = PTR_PTR_1126ba8e8;
  func_0x000107c610f8();
  func_0x000107c46298();
  if (puVar2 != (undefined *)0x0) {
    uVar4 = 0;
    FUN_1001dea84(0);
    func_0x000107c610f8();
    func_0x00010065c978(puVar3,puVar2,uVar4);
    *param_1 = puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10065c978);
  (*pcVar1)();
}



/* Entry: 10065c8b0; end: 10065c9db;  */

void FUN_10065c8b0(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  FUN_1000285a8(0x112dc00a8,&UNK_10d97c2e0);
  func_0x000107c6157c(param_2);
  puVar2 = &UNK_1016b236c;
  FUN_1000823a8(&UNK_1016b236c,param_2);
  puVar3 = puVar2;
  func_0x0001000ad7c4();
  func_0x000107c61574(puVar2);
  puVar2 = PTR_PTR_1126ba8e8;
  func_0x000107c610f8();
  func_0x000107c46298();
  if (puVar2 != (undefined *)0x0) {
    uVar4 = 0;
    FUN_1001dea84(0);
    func_0x000107c610f8();
    func_0x00010065c978(puVar3,puVar2,uVar4);
    *param_1 = puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10065c978);
  (*pcVar1)();
}



/* Entry: 10065c9dc; end: 10065c9f7;  */

undefined8 FUN_10065c9dc(void)

{
  undefined8 *unaff_x19;
  
  return *(undefined8 *)*unaff_x19;
}



/* Entry: 10065c9f8; end: 10065cabf;  */

void FUN_10065c9f8(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  FUN_1000285a8(0x112dc00a8,&UNK_10d97c2e0);
  func_0x000107c6157c(param_2);
  puVar2 = &UNK_1016b5f44;
  FUN_1000823a8(&UNK_1016b5f44,param_2);
  puVar3 = puVar2;
  func_0x0001000ad7c4();
  func_0x000107c61574(puVar2);
  puVar2 = PTR_PTR_1126ba8e8;
  func_0x000107c610f8();
  func_0x000107c46298();
  if (puVar2 != (undefined *)0x0) {
    uVar4 = 0;
    FUN_1001dee50(0);
    func_0x000107c610f8();
    FUN_10065cbc8(puVar3,puVar2,uVar4);
    *param_1 = puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10065cac0);
  (*pcVar1)();
}



/* Entry: 10065cac0; end: 10065cac7;  */

void FUN_10065cac0(long param_1)

{
  if (*(char *)(param_1 + 0x3d8) == '\x01') {
    FUN_100657324();
  }
  return;
}



/* Entry: 10065cac8; end: 10065cae7;  */

void FUN_10065cac8(long param_1)

{
  if (*(char *)(param_1 + 0x3d0) == '\x01') {
    FUN_100657324();
  }
  return;
}



/* Entry: 10065cae8; end: 10065cb53;  */

undefined8 * FUN_10065cae8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_410 [8];
  undefined1 auStack_408 [984];
  
  func_0x000107c60ee4(auStack_410,0x3e0);
  FUN_10065cba0(param_1 + 1,auStack_410);
  FUN_10065cac8(auStack_408);
  uVar1 = *param_1;
  *param_1 = 0;
  FUN_10054cac4(uVar1);
  FUN_10065cac8(param_1 + 2);
  return param_1;
}



/* Entry: 10065cb54; end: 10065cb7b;  */

void FUN_10065cb54(long param_1,long param_2)

{
  undefined1 uVar1;
  char cVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  cVar2 = *(char *)(param_1 + 0x3d0);
  if (cVar2 != *(char *)(param_2 + 0x3d0)) {
    if (cVar2 != '\0') {
      if (*(char *)(param_1 + 0x3d0) == '\x01') {
        FUN_100657324();
        *(undefined1 *)(param_1 + 0x3d0) = 0;
      }
      return;
    }
    func_0x000100656cbc();
    *(undefined1 *)(param_1 + 0x3d0) = 1;
    return;
  }
  if (cVar2 != '\0') {
    FUN_1006564ac();
    func_0x00010065acbc();
    uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x31);
    *(undefined8 *)(unaff_x19 + 0x39) = *(undefined8 *)(unaff_x20 + 0x39);
    *(undefined8 *)(unaff_x19 + 0x31) = uVar7;
    *(undefined8 *)(unaff_x19 + 0x30) = uVar6;
    *(undefined8 *)(unaff_x19 + 0x28) = uVar5;
    *(undefined8 *)(unaff_x19 + 0x20) = uVar4;
    *(undefined8 *)(unaff_x19 + 0x18) = uVar3;
    FUN_1002a8208(unaff_x19 + 0x48,unaff_x20 + 0x48);
    func_0x000100656f60();
    FUN_10065ad24();
    FUN_100657000(unaff_x19 + 0x98,unaff_x20 + 0x98);
    *(undefined1 *)(unaff_x19 + 0xb0) = *(undefined1 *)(unaff_x20 + 0xb0);
    FUN_10065ad64(unaff_x19 + 0xb8,unaff_x20 + 0xb8);
    FUN_10065ad64(unaff_x19 + 0xd0,unaff_x20 + 0xd0);
    FUN_1005fcf54(unaff_x19 + 0xe8,unaff_x20 + 0xe8);
    uVar1 = *(undefined1 *)(unaff_x20 + 0x128);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x108);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x120);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x118);
    *(undefined8 *)(unaff_x19 + 0x110) = *(undefined8 *)(unaff_x20 + 0x110);
    *(undefined8 *)(unaff_x19 + 0x108) = uVar5;
    *(undefined8 *)(unaff_x19 + 0x120) = uVar4;
    *(undefined8 *)(unaff_x19 + 0x118) = uVar3;
    *(undefined1 *)(unaff_x19 + 0x128) = uVar1;
    FUN_1005fcf54(unaff_x19 + 0x130,unaff_x20 + 0x130);
    FUN_10065ae24(unaff_x19 + 0x150,unaff_x20 + 0x150);
    FUN_10065ae24(unaff_x19 + 0x168,unaff_x20 + 0x168);
    FUN_10065ae24(unaff_x19 + 0x180,unaff_x20 + 0x180);
    FUN_10065ae24(unaff_x19 + 0x198,unaff_x20 + 0x198);
    FUN_10065ad64(unaff_x19 + 0x1b0,unaff_x20 + 0x1b0);
    FUN_1006572fc();
    FUN_1005fcf54(unaff_x19 + 0x238,unaff_x20 + 0x238);
    uVar1 = *(undefined1 *)(unaff_x20 + 0x268);
    uVar3 = *(undefined8 *)(unaff_x20 + 600);
    *(undefined8 *)(unaff_x19 + 0x260) = *(undefined8 *)(unaff_x20 + 0x260);
    *(undefined8 *)(unaff_x19 + 600) = uVar3;
    *(undefined1 *)(unaff_x19 + 0x268) = uVar1;
    FUN_1005fcf54(unaff_x19 + 0x270,unaff_x20 + 0x270);
    FUN_1005fcf54(unaff_x19 + 0x290,unaff_x20 + 0x290);
    func_0x00010065730c();
    FUN_1005fcf54(unaff_x19 + 800,unaff_x20 + 800);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x358);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x350);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x368);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x360);
    uVar8 = *(undefined8 *)(unaff_x20 + 0x348);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x340);
    *(undefined1 *)(unaff_x19 + 0x370) = *(undefined1 *)(unaff_x20 + 0x370);
    *(undefined8 *)(unaff_x19 + 0x358) = uVar6;
    *(undefined8 *)(unaff_x19 + 0x350) = uVar5;
    *(undefined8 *)(unaff_x19 + 0x368) = uVar4;
    *(undefined8 *)(unaff_x19 + 0x360) = uVar3;
    *(undefined8 *)(unaff_x19 + 0x348) = uVar8;
    *(undefined8 *)(unaff_x19 + 0x340) = uVar7;
    FUN_10065ae24(unaff_x19 + 0x378,unaff_x20 + 0x378);
    FUN_1005fcf54(unaff_x19 + 0x390,unaff_x20 + 0x390);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x3c1);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x3b9);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x3b0);
    *(undefined8 *)(unaff_x19 + 0x3b8) = *(undefined8 *)(unaff_x20 + 0x3b8);
    *(undefined8 *)(unaff_x19 + 0x3b0) = uVar5;
    *(undefined8 *)(unaff_x19 + 0x3c1) = uVar4;
    *(undefined8 *)(unaff_x19 + 0x3b9) = uVar3;
    return;
  }
  return;
}



/* Entry: 10065cb7c; end: 10065cb9f;  */

undefined8 FUN_10065cb7c(undefined8 param_1)

{
  FUN_10065cb54();
  return param_1;
}



/* Entry: 10065cba0; end: 10065cbc7;  */

undefined8 * FUN_10065cba0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_10065cb7c(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 10065cbc8; end: 10065cc2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10065cbc8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112dddf48) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112dddf50) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10065cc2c; end: 10065cc47;  */

void FUN_10065cc2c(void)

{
  FUN_1005ecb38();
  FUN_1005ecb64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 10065cc48; end: 10065cc63;  */

void FUN_10065cc48(void)

{
  func_0x00010065cc54(&stack0x00001360);
  FUN_10065cc98();
  return;
}



/* Entry: 10065cc64; end: 10065cc87;  */

void FUN_10065cc64(void)

{
  func_0x00010065cc54();
  FUN_10065cc98();
  return;
}



/* Entry: 10065cc88; end: 10065cc97;  */

void FUN_10065cc88(void)

{
  return;
}



/* Entry: 10065cc98; end: 10065ccc3;  */

void FUN_10065cc98(void)

{
  long extraout_x8;
  
  FUN_10065cc88();
  if (extraout_x8 != 0) {
    FUN_1006a252c();
    FUN_1006a2568();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10065ccc4; end: 10065ccdb;  */

void FUN_10065ccc4(void)

{
  return;
}



/* Entry: 10065ccdc; end: 10065cd73;  */

void FUN_10065ccdc(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010065ccd0();
  func_0x00010065cd08(*param_1);
  **(undefined1 **)(unaff_x20 + 8) = *(undefined1 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10065cd74; end: 10065cd97;  */

void FUN_10065cd74(void)

{
  undefined8 unaff_x23;
  
  func_0x00010002b82c();
  func_0x000107c613d0(unaff_x23);
  func_0x000107c60c50();
  return;
}



/* Entry: 10065cd98; end: 10065cf27;  */

void FUN_10065cd98(undefined8 param_1,undefined4 param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 *param_7)

{
  long *plVar1;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_68 = &PTR_DAT_110a609a8;
  uStack_60 = 0;
  uStack_48 = param_2;
  if ((char)param_3[1] == '\x01') {
    FUN_10002b838(auStack_80,&DAT_10f4b05df);
    FUN_1005504ac(&ppuStack_68,auStack_80,(&PTR_DAT_110a673d0)[*param_3]);
    FUN_10065cf28();
    func_0x000107c60ca0(auStack_80);
  }
  if ((param_6 & 1) != 0) {
    FUN_10002b838(auStack_98,&UNK_10f4b1428);
    FUN_1005e340c(&ppuStack_68,auStack_98,param_5);
    FUN_10065cf28();
    func_0x00010065cf38();
  }
  FUN_10002b838(auStack_b0,&UNK_10f4b2029);
  func_0x000107c60c94(auStack_c8,param_4);
  FUN_1005e3484(&ppuStack_68,auStack_b0,auStack_c8);
  FUN_10065cf28();
  func_0x000107c60ca0(auStack_c8);
  func_0x00010065cf30();
  plVar1 = (long *)*param_7;
  FUN_1005e3518();
  uStack_d0 = param_1;
  (**(code **)(*plVar1 + 0x18))(plVar1,&ppuStack_68,&uStack_d0);
  FUN_1005505e4(&ppuStack_68);
  return;
}



/* Entry: 10065cf28; end: 10065cf3f;  */

void FUN_10065cf28(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x29;
  
  lVar1 = unaff_x29 + -0x58;
  func_0x0001005fe13c(lVar1);
  func_0x0001006072c8(lVar1 + 8,param_2 + 8);
  *(undefined4 *)(unaff_x20 + 0x20) = *(undefined4 *)(unaff_x19 + 0x20);
  return;
}



/* Entry: 10065cf40; end: 10065cfc7;  */

void FUN_10065cf40(long *param_1,ulong param_2)

{
  undefined1 auStack_48 [40];
  
  if ((ulong)((param_1[2] - *param_1) / 0x18) < param_2) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      func_0x000104be0b88();
      func_0x000104befda8();
      FUN_100656978();
      func_0x000104befcc0();
      return;
    }
    func_0x000100656718(auStack_48,param_2,(param_1[1] - *param_1) / 0x18);
    FUN_10065cfc8();
    FUN_1006567dc();
    FUN_100656978(auStack_48);
  }
  return;
}



/* Entry: 10065cfc8; end: 10065cfd3;  */

void FUN_10065cfc8(void)

{
  return;
}



/* Entry: 10065cfd4; end: 10065d007;  */

void FUN_10065cfd4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_10054f8dc(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x18;
  return;
}



/* Entry: 10065d008; end: 10065d043;  */

long FUN_10065d008(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10065cfd4();
    lVar2 = uVar1 + 0x18;
  }
  else {
    lVar2 = param_1;
    func_0x000108659f7c();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x18;
}



/* Entry: 10065d044; end: 10065d06b;  */

void FUN_10065d044(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010065d050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0xc0))();
  return;
}



/* Entry: 10065d06c; end: 10065d18f;  */

void FUN_10065d06c(undefined8 param_1,long *param_2,int *param_3,long param_4)

{
  long lVar1;
  int iVar2;
  undefined8 *extraout_x8;
  long lVar3;
  code *extraout_x9;
  long lVar4;
  undefined1 auStack_378 [888];
  
  func_0x00010065d054();
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  *param_3 = 0;
  lVar1 = param_2[1];
  for (lVar4 = *param_2; lVar4 != lVar1; lVar4 = lVar4 + 0x3d0) {
    if ((*(byte *)(param_4 + 4) & 1) == 0) {
      FUN_10065d190(auStack_378);
      func_0x000107c32f0c();
      func_0x00010067184c();
      FUN_100671858();
    }
    else {
      FUN_10065d190(auStack_378);
      (*extraout_x9)();
      func_0x00010067184c();
      FUN_100671858();
    }
    FUN_100671d4c();
    lVar3 = extraout_x8[1];
    if (*(char *)(lVar3 + -0x1e0) == '\x01') {
      iVar2 = (int)((*(long *)(lVar3 + -0x1f0) - *(long *)(lVar3 + -0x1f8)) / 0x5d8);
    }
    else {
      iVar2 = 0;
    }
    *param_3 = *param_3 + iVar2;
  }
  return;
}



/* Entry: 10065d190; end: 10065d19b;  */

void FUN_10065d190(void)

{
  return;
}



/* Entry: 10065d19c; end: 10065d7af;  */

void FUN_10065d19c(long param_1,char *param_2,uint param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  char *pcVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  uint uVar14;
  long extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  long *plVar15;
  undefined8 uVar16;
  undefined1 auStack_530 [24];
  long alStack_518 [4];
  undefined4 uStack_4f8;
  undefined1 auStack_4f0 [88];
  ulong auStack_498 [15];
  ulong uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined4 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined1 uStack_3d8;
  undefined1 auStack_348 [24];
  uint uStack_330;
  char cStack_328;
  uint uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  uint uStack_314;
  ulong uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined4 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 uStack_2c8;
  byte bStack_2c0;
  undefined1 auStack_2b0 [112];
  byte bStack_240;
  long lStack_238;
  long lStack_230;
  char cStack_220;
  undefined1 auStack_1f8 [24];
  ulong auStack_1e0 [5];
  byte bStack_1b7;
  undefined8 uStack_1b8;
  undefined1 uStack_108;
  undefined8 uStack_100;
  char cStack_10;
  
  func_0x00010065d054();
  FUN_10007847c(auStack_1f8,&UNK_10f4b23cc);
  if (param_3 == 0) {
    auStack_1e0[3] = 0;
    uStack_1b8 = 0;
    auStack_1e0[1] = 0;
    auStack_1e0[0] = 0;
    auStack_1e0[2] = 0x100000000;
    auStack_1e0[4] = 0;
    FUN_10066c21c(&lStack_238,auStack_1e0);
    FUN_10066c3c4((ulong)auStack_1e0 | 8);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0xe8) + 0x10))
              (&lStack_238,*(long **)(param_1 + 0xe8),param_2);
    FUN_10066c438(*(undefined8 *)(param_1 + 0xf8));
    (*extraout_x8_00)();
  }
  FUN_10066ca48(auStack_2b0,param_2,param_1 + 0xb8,param_1 + 0x194);
  if (param_2[0x34c] == '\x01' && *(int *)(param_2 + 0x348) == 7) {
    func_0x000107c32f10(auStack_1e0,*(undefined8 *)(param_1 + 0xb8),param_2);
    if ((cStack_10 == '\x01') && ((bStack_1b7 >> 4 & 1) != 0)) {
      func_0x000107c29e34(&uStack_420,uStack_100);
      uStack_308 = uStack_418;
      uStack_310 = uStack_420;
      uStack_300 = uStack_410;
      uStack_420 = 0;
      uStack_418 = 0;
      uStack_2f8 = uStack_408;
      uStack_2e8 = uStack_3f8;
      uStack_2f0 = uStack_400;
      uStack_2e0 = uStack_3f0;
      uStack_410 = 0;
      uStack_400 = 0;
      uStack_3f8 = 0;
      uStack_3f0 = 0;
      uStack_2c8 = uStack_3d8;
      uStack_2d0 = uStack_3e0;
      uStack_2d8 = uStack_3e8;
      bStack_2c0 = 1;
      func_0x000104be1234(&uStack_420);
    }
    else {
      uStack_310 = uStack_310 & 0xffffffffffffff00;
      bStack_2c0 = 0;
    }
    FUN_10066b97c(auStack_1e0);
  }
  else {
    uStack_310 = uStack_310 & 0xffffffffffffff00;
    bStack_2c0 = 0;
  }
  uStack_320 = uStack_320 & 0xffffff00;
  uStack_314 = uStack_314 & 0xffffff00;
  puVar8 = *(ulong **)(param_1 + 0xb8);
  FUN_10066d6d8(auStack_348,puVar8,param_2);
  if (cStack_328 == '\x01') {
    uStack_320 = uStack_330;
    uStack_31c = 0;
    uStack_318 = 0;
    uStack_314 = CONCAT31(uStack_314._1_3_,1);
  }
  cVar1 = '\0';
  if (*(int *)(param_2 + 0x348) == 2) {
    cVar1 = param_2[0x34c];
  }
  auStack_1e0[0] = auStack_1e0[0] & 0xffffffffffffff00;
  uStack_108 = 0;
  if ((((bStack_240 & 1) != 0) || ((bStack_2c0 & 1) != 0)) || (cVar1 != '\0')) {
    FUN_10066dd50(auStack_498,auStack_2b0);
    FUN_10066dd94(auStack_4f0,&uStack_310);
    uVar2 = 0x100;
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    func_0x00010066ddd8(&uStack_420,auStack_498,auStack_4f0,uVar2);
    FUN_10066dee8(auStack_1e0,&uStack_420);
    FUN_10066dfa0(&uStack_420);
    FUN_10066df80(auStack_4f0);
    puVar8 = auStack_498;
    FUN_10066dfc8();
  }
  uVar16 = *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x10);
  uVar3 = *(undefined1 *)(*(long *)(param_1 + 0xa8) + 0x18);
  uVar2 = CONCAT44(uStack_31c,uStack_320);
  uVar4 = CONCAT44(uStack_314,uStack_318);
  FUN_10066dfe8();
  puVar9 = (undefined8 *)*puVar8;
  FUN_10066e034();
  if (((ulong)puVar9 & 1) == 0) {
    FUN_10066dfe8();
    uVar13 = *puVar9;
    FUN_10066e06c(uVar13);
  }
  else {
    uVar13 = 1;
  }
  pcVar10 = param_2;
  FUN_10066e1f0(extraout_x8,param_2,&lStack_238,uVar16,uVar3,auStack_1e0,uVar2,uVar4,uVar13);
  if (*(char *)(extraout_x8 + 0x148) == '\x01') {
    if (*(int *)(param_2 + 0x30) == 0x1e) {
      if (*(int *)(extraout_x8 + 0x128) != 0x14) goto LAB_10065d48c;
    }
    else if ((*(int *)(param_2 + 0x30) != 0x1d) || (*(int *)(extraout_x8 + 0x128) != 0x13))
    goto LAB_10065d48c;
    func_0x000107c32ef4();
    if (*pcVar10 != '\x01' || *(int *)(extraout_x8 + 0x240) == 2) {
      *(undefined4 *)(extraout_x8 + 0x128) = 1;
    }
  }
LAB_10065d48c:
  uVar5 = (uint)*(undefined8 *)(param_1 + 0x138);
  FUN_10066c438();
  (*extraout_x8_01)();
  if ((param_3 & uVar5) == 1) {
    (**(code **)(**(long **)(param_1 + 0x138) + 0x20))
              (&uStack_420,*(long **)(param_1 + 0x138),param_2);
    func_0x000107c610b4(extraout_x8 + 0x1c0,&uStack_420,0x41);
  }
  if (*(char *)(extraout_x8 + 0x120) == '\x01') {
    if (cStack_220 == '\x01') {
      if ((*(byte *)(extraout_x8 + 0x118) & 1) == 0) {
        *(undefined1 *)(extraout_x8 + 0x118) = 1;
      }
      *(long *)(extraout_x8 + 0x110) = (lStack_230 - lStack_238) / 0x5d8;
    }
    else {
      *(long *)(extraout_x8 + 0x110) =
           (*(long *)(param_2 + 0x170) - *(long *)(param_2 + 0x168) >> 3) +
           (*(long *)(param_2 + 0x158) - *(long *)(param_2 + 0x150) >> 3);
      *(undefined1 *)(extraout_x8 + 0x118) = 1;
    }
  }
  lVar11 = *(long *)(param_1 + 0x68);
  if (lVar11 != 0) {
    FUN_10054ea0c(lVar11,0x41);
    iVar6 = 0;
    if (*(int *)(param_2 + 0x234) == 2) {
      iVar6 = (int)lVar11;
    }
    if (iVar6 == 1) {
      *(undefined8 *)(extraout_x8 + 0x18) = 0;
    }
  }
  if (*(int *)(extraout_x8 + 0x240) == 2) {
    if ((bStack_2c0 & 1) == 0) {
      plVar15 = *(long **)(param_1 + 0x118);
      func_0x000107c32eb4();
      alStack_518[2] = 0;
      alStack_518[3] = 0;
      alStack_518[0] = extraout_x8_02 + 0x10;
      alStack_518[1] = 0;
      uStack_4f8 = 0x2d1;
      FUN_10002b838(auStack_530,"location");
      plVar12 = alStack_518;
      FUN_1005504ac(plVar12,auStack_530,&DAT_10f2fc4a4);
      func_0x0001005505a0(&uStack_420,plVar12);
      func_0x000107c32f1c(*(undefined8 *)(*plVar15 + 0x50));
      FUN_1005505e4(&uStack_420);
      func_0x000107c32f18();
      FUN_1005505e4(alStack_518);
    }
    if (*(char *)(extraout_x8 + 0x148) == '\x01') {
      if (*(uint *)(extraout_x8 + 0x128) < 0x15) {
        uVar5 = 0x1fdffd >> (ulong)(*(uint *)(extraout_x8 + 0x128) & 0x1f);
      }
      else {
        uVar5 = 0;
      }
    }
    else {
      uVar5 = 1;
    }
    if ((*(byte *)(extraout_x8 + 0x168) & 1) == 0) {
      if (*(char *)(extraout_x8 + 0xb8) == '\x01') {
        lVar11 = param_1 + 0x78;
        FUN_1006760a8(lVar11,extraout_x8 + 0xa0);
        uVar7 = (uint)lVar11;
        uVar14 = (uint)*(byte *)(extraout_x8 + 0x168);
      }
      else {
        uVar14 = 0;
        uVar7 = 0;
      }
      uVar5 = uVar5 | uVar7;
    }
    else {
      uVar14 = 1;
      uVar5 = 1;
    }
    if (uVar14 != (uVar5 & 1)) {
      *(char *)(extraout_x8 + 0x168) = (char)(uVar5 & 1);
    }
  }
  lVar11 = *(long *)(param_1 + 0x518);
  *(long *)(param_1 + 0x518) = lVar11 + 1;
  if ((*(byte *)(extraout_x8 + 0x270) & 1) == 0) {
    *(undefined1 *)(extraout_x8 + 0x270) = 1;
  }
  *(long *)(extraout_x8 + 0x268) = lVar11;
  FUN_10066d68c(auStack_1e0);
  FUN_10066dc24(auStack_348);
  FUN_10066df80(&uStack_310);
  FUN_10066dfc8(auStack_2b0);
  FUN_10066c37c(&lStack_238);
  FUN_100078bd8(auStack_1f8);
  return;
}



/* Entry: 10065d7b0; end: 10065d7bb;  */

void FUN_10065d7b0(void)

{
  return;
}



/* Entry: 10065d7bc; end: 10065e89f;  */

/* WARNING: Type propagation algorithm not settling */

undefined ***** FUN_10065d7bc(void)

{
  uint uVar1;
  uint uVar2;
  undefined **ppuVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined8 ***pppuVar8;
  long lVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  undefined ****ppppuVar14;
  undefined **ppuVar15;
  long *plVar16;
  ulong *puVar17;
  long lVar18;
  undefined8 ****ppppuVar19;
  ulong uVar20;
  undefined4 extraout_w8;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  undefined *****pppppuVar21;
  undefined *****extraout_x8_02;
  uint uVar22;
  long extraout_x9;
  long extraout_x9_00;
  long lVar23;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x11;
  long extraout_x11_00;
  undefined *****unaff_x19;
  long *plVar24;
  ulong uVar25;
  undefined *****unaff_x20;
  undefined *****pppppuVar26;
  ulong uVar27;
  undefined8 ****ppppuVar28;
  undefined *****pppppuVar29;
  ulong unaff_x23;
  undefined *****pppppuVar30;
  long lVar31;
  undefined ****ppppuVar32;
  undefined *****unaff_x24;
  undefined4 uVar33;
  undefined8 ***pppuVar34;
  undefined8 ***pppuVar35;
  undefined8 ***pppuVar36;
  uint uStack_e60;
  uint uStack_e5c;
  uint uStack_e54;
  undefined8 ****ppppuStack_e40;
  undefined8 ****ppppuStack_e38;
  undefined ****ppppuStack_e30;
  long lStack_e28;
  long lStack_e20;
  long lStack_e10;
  long lStack_e08;
  long lStack_df8;
  long lStack_df0;
  undefined8 uStack_de8;
  uint auStack_de0 [6];
  byte bStack_dc8;
  undefined1 auStack_dc0 [464];
  byte bStack_bf0;
  undefined ****appppuStack_be8 [3];
  ulong uStack_bd0;
  ulong uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 ***pppuStack_bb8;
  undefined8 ***pppuStack_bb0;
  undefined8 uStack_ba8;
  undefined *****pppppuStack_ba0;
  undefined ****ppppuStack_b98;
  ulong uStack_b90;
  ulong uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  char cStack_9f8;
  int iStack_9f0;
  byte bStack_9d0;
  undefined *puStack_9c8;
  undefined ****ppppuStack_9c0;
  long lStack_9b8;
  byte bStack_818;
  undefined8 ****ppppuStack_810;
  undefined8 ****ppppuStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  ulong uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined1 uStack_668;
  undefined *puStack_230;
  undefined **ppuStack_228;
  undefined ****ppppuStack_220;
  undefined *****pppppuStack_218;
  long lStack_208;
  byte bStack_80;
  long lStack_78;
  
  FUN_10065d7b0();
  pppppuVar26 = (undefined *****)&ppppuStack_810;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10007847c(appppuStack_be8,&UNK_10f4b1ef6);
  auStack_dc0[0] = 0;
  bStack_bf0 = 0;
  if (*(char *)(unaff_x19 + 0x39) == '\x01') {
    func_0x000107c32b38();
    uStack_800 = (undefined *****)CONCAT44(extraout_w8,(undefined4)uStack_800);
    uStack_7f0 = uStack_7f0 & 0xff00000000000000;
    FUN_10066c210();
  }
  else {
    FUN_10065e964(auStack_de0,unaff_x20[0xb]);
    uVar22 = (uint)bStack_dc8;
    uVar1 = 0;
    if (auStack_de0[0] == 0) {
      uVar1 = uVar22;
    }
    uVar2 = 0;
    if (auStack_de0[0] < 3) {
      uVar2 = uVar22;
    }
    if (((*(int *)(unaff_x20 + 0x17) != 0) || (uVar22 == 0)) || (auStack_de0[0] != 2)) {
      lStack_df8 = 0;
      lStack_df0 = 0;
      uStack_de8 = 0;
      ppppuVar14 = unaff_x20[5];
      pppppuVar29 = unaff_x19;
      func_0x00010065eacc();
      if (((ulong)pppppuVar29 & 1) == 0) {
LAB_10065da1c:
        FUN_10065ebf0(&puStack_230,unaff_x20[5],unaff_x19);
        pppppuVar26 = unaff_x20 + 0x1c;
        pppppuVar29 = unaff_x19;
        func_0x00010065eccc();
        if (lStack_208 != 0) {
          func_0x000107c32b3c();
          plVar24 = (long *)(extraout_x10 + extraout_x9 * 8);
          if (extraout_x11 == extraout_x10) {
            pppppuVar30 = (undefined *****)0x0;
          }
          else {
            pppppuVar30 = (undefined *****)(*plVar24 + (extraout_x8 & 0x1ff) * 8);
          }
          ppppuVar14 = unaff_x20[3];
          ppuVar15 = &puStack_230;
          FUN_10065edd8(ppuVar15);
          uStack_800 = (undefined *****)0x0;
          ppppuStack_810 = (undefined8 ****)0x0;
          ppppuStack_808 = (undefined8 ****)0x0;
          plVar16 = plVar24;
          func_0x000107c29488(plVar24,pppppuVar30,ppuVar15,pppppuVar26);
          pppppuStack_ba0 = (undefined *****)&ppppuStack_810;
          ppppuStack_b98 = (undefined ****)((ulong)ppppuStack_b98 & 0xffffffffffffff00);
          if (plVar16 != (long *)0x0) {
            FUN_10065bb24(&ppppuStack_810);
            while (pppppuVar30 != pppppuVar26) {
              pppppuVar21 = pppppuVar30 + 1;
              *ppppuStack_808 = *pppppuVar30;
              if ((long)pppppuVar21 - *plVar24 == 0x1000) {
                plVar24 = plVar24 + 1;
                pppppuVar21 = (undefined *****)*plVar24;
              }
              ppppuStack_808 = ppppuStack_808 + 1;
              pppppuVar30 = pppppuVar21;
            }
          }
          ppppuStack_b98 = (undefined ****)CONCAT71(ppppuStack_b98._1_7_,1);
          func_0x000107c28a8c(&pppppuStack_ba0);
          func_0x000107c29f88(&puStack_9c8,ppppuVar14,unaff_x19,&ppppuStack_810,1);
          FUN_1006573e4(&ppppuStack_810);
          func_0x000100692a5c(unaff_x20[3]);
          FUN_100692d24();
          FUN_1005f66c4(&ppppuStack_810);
          pppppuStack_ba0 = (undefined *****)((ulong)pppppuStack_ba0 & 0xffffffffffffff00);
          bStack_9d0 = 0;
          pppppuVar26 = unaff_x20 + 0x19;
          FUN_10054f8dc(&uStack_bd0);
          func_0x000107c32b3c();
          plVar24 = (long *)(extraout_x10_00 + extraout_x9_00 * 8);
          if (extraout_x11_00 == extraout_x10_00) {
            pppppuVar30 = (undefined *****)0x0;
          }
          else {
            pppppuVar30 = (undefined *****)(*plVar24 + (extraout_x8_00 & 0x1ff) * 8);
          }
          FUN_10065edd8(&puStack_230);
          while (pppppuVar30 != pppppuVar26) {
            ppuVar15 = &puStack_9c8;
            func_0x0001006930c0(ppuVar15,pppppuVar30);
            if (ppuVar15 != (undefined **)0x0) {
              pppuVar34 = pppuStack_bb0;
              pppuVar36 = pppuStack_bb8;
              if (pppuStack_bb8 != pppuStack_bb0) {
                for (; pppuVar35 = pppuVar34, pppuVar36 != pppuVar34; pppuVar36 = pppuVar36 + 0x15)
                {
                  pppuVar8 = pppuVar34;
                  if (pppuVar36[3] == (undefined8 **)ppuVar15[6]) {
                    do {
                      pppuVar34 = pppuVar8 + -0x15;
                      pppuVar35 = pppuVar36;
                      if (pppuVar34 == pppuVar36) goto LAB_10065dbf8;
                      pppuVar35 = pppuVar8 + -0x12;
                      pppuVar8 = pppuVar34;
                    } while (*pppuVar35 == pppuVar36[3]);
                    func_0x000107c32b1c(pppuVar36);
                  }
                }
LAB_10065dbf8:
                pppuVar36 = pppuStack_bb0;
                if (pppuVar35 != pppuStack_bb0) {
                  func_0x000107c32b04();
                  func_0x000107c2948c();
                  pppuVar36 = pppuStack_bb0;
                }
                for (; pppuVar35 != pppuVar36; pppuVar35 = pppuVar35 + 0x15) {
                  func_0x000107c32b30();
                }
                func_0x000107c32b2c();
              }
              uVar22 = (int)ppuVar15 + 0x68;
              func_0x00010069317c();
              if ((*(char *)(ppuVar15 + 0x30) == '\x01') && (*(char *)(unaff_x20 + 0x18) != '\x01'))
              {
                uVar33 = 0xffffffff;
              }
              else {
                uVar33 = *(undefined4 *)(unaff_x20[5] + 1);
              }
              if ((uVar22 & 0xfffffffb) == 1) {
                ppuVar3 = &PTR_PTR_11326cb58;
                if ((undefined **)ppuVar15[0x10] != (undefined **)0x0) {
                  ppuVar3 = (undefined **)ppuVar15[0x10];
                }
                puVar17 = &uStack_bd0;
                FUN_1006933e4(puVar17,ppuVar3);
                if ((((uint)pppppuVar29 | (uint)puVar17 ^ 0xffffffff) & 1) != 0) {
                  puVar17 = &uStack_bd0;
                  FUN_100693498(puVar17,ppuVar15 + 0xd);
                  if ((int)puVar17 != 0) {
                    puVar17 = &uStack_bd0;
                    FUN_10069b72c(puVar17,ppuVar15 + 3,uVar33);
                    if (((ulong)puVar17 & 1) == 0) {
                      if ((bStack_9d0 & 1) == 0) {
                        FUN_100694108(unaff_x20[3]);
                        FUN_100695018();
                        FUN_10066b5d4(&ppppuStack_810);
                      }
                      func_0x000100695024(unaff_x20[0xf]);
                      FUN_10069e54c();
                      FUN_10069ea20();
                    }
                  }
                }
              }
            }
            pppppuVar30 = pppppuVar30 + 1;
            if ((long)pppppuVar30 - *plVar24 == 0x1000) {
              plVar24 = plVar24 + 1;
              pppppuVar30 = (undefined *****)*plVar24;
            }
          }
          FUN_100100fec(&uStack_bd0);
          func_0x00010069fd2c();
          FUN_10069fbf8();
          func_0x00010069fcb8(&puStack_9c8);
        }
        FUN_10065ed94(&puStack_230);
        uStack_e54 = (uint)(lStack_df8 == lStack_df0);
        if (((*(char *)(unaff_x19 + 0x20) == '\x01') &&
            (*(int *)(unaff_x19 + 7) == 1 && ((ulong)unaff_x19[6] & 0xfffffffb) == 1)) &&
           (((ulong)unaff_x19[8] & 1) == 0)) {
          pppppuVar26 = unaff_x19 + 0x1d;
          FUN_1006760d0(pppppuVar26,unaff_x20 + 0x19);
          iVar12 = (int)pppppuVar26;
          if ((((ulong)pppppuVar26 & 1) != 0) || (FUN_10067646c(), iVar12 != 0)) {
            FUN_100676178(&lStack_e10,unaff_x19 + 0x2d,5);
            FUN_100676178(&lStack_e28,unaff_x19 + 0x2a,1);
            ppppuStack_e40 = (undefined8 ****)0x0;
            ppppuStack_e38 = (undefined8 ****)0x0;
            ppppuStack_e30 = (undefined ****)0x0;
            FUN_100676114(&ppppuStack_e40,
                          (lStack_e20 - lStack_e28 >> 4) + (lStack_e08 - lStack_e10 >> 4));
            lVar23 = lStack_e28;
            lVar31 = lStack_e10;
            while( true ) {
              lVar9 = lStack_e08;
              lVar18 = lVar31;
              if (lVar23 != lStack_e20) {
                lVar9 = lStack_e20;
                lVar18 = lVar23;
              }
              if (lVar23 == lStack_e20 || lVar31 == lStack_e08) break;
              if (*(long *)(lVar31 + 8) < *(long *)(lVar23 + 8)) {
                FUN_100676398(&ppppuStack_e40,lVar31);
                lVar31 = lVar31 + 0x10;
              }
              else {
                FUN_100676398(&ppppuStack_e40,lVar23);
                lVar23 = lVar23 + 0x10;
              }
            }
            func_0x00010067642c(lVar18,lVar9,&ppppuStack_e40);
            uVar13 = (uint)lVar18;
            uVar22 = *(uint *)((long)unaff_x20 + 0xbc);
            uVar20 = (ulong)uVar22;
            if ((uVar22 != 0) &&
               (uVar22 < (uint)((ulong)((long)ppppuStack_e38 - (long)ppppuStack_e40) >> 4))) {
              uVar25 = (long)ppppuStack_e38 - (long)ppppuStack_e40 >> 4;
              if (uVar25 < uVar20) {
                uVar27 = uVar20 - uVar25;
                if ((ulong)((long)ppppuStack_e30 - (long)ppppuStack_e38 >> 4) < uVar27) {
                  pppppuVar26 = (undefined *****)&ppppuStack_e40;
                  func_0x000107c29474(pppppuVar26);
                  FUN_100676260(&ppppuStack_810,pppppuVar26,
                                (long)ppppuStack_e38 - (long)ppppuStack_e40 >> 4,&ppppuStack_e30);
                  ppppuVar19 = uStack_800 + uVar27 * 2;
                  ppppuVar28 = uStack_800;
                  for (lVar23 = uVar20 * 0x10 + uVar25 * -0x10; lVar23 != 0; lVar23 = lVar23 + -0x10
                      ) {
                    *ppppuVar28 = (undefined8 ***)0x0;
                    ppppuVar28[1] = (undefined8 ***)0x0;
                    ppppuVar28 = ppppuVar28 + 2;
                  }
                  ppppuVar28 = (undefined8 ****)
                               ((long)ppppuStack_808 - ((long)ppppuStack_e38 - (long)ppppuStack_e40)
                               );
                  func_0x000107c610b4(ppppuVar28);
                  ppppuVar14 = ppppuStack_e30;
                  ppppuStack_e30 = uStack_7f8;
                  uStack_800 = (undefined *****)ppppuStack_e40;
                  uStack_7f8 = ppppuVar14;
                  ppppuStack_808 = ppppuStack_e40;
                  ppppuStack_810 = ppppuStack_e40;
                  uVar13 = 0;
                  ppppuStack_e40 = ppppuVar28;
                  ppppuStack_e38 = ppppuVar19;
                  FUN_100676358();
                }
                else {
                  ppppuVar19 = ppppuStack_e38 + uVar27 * 2;
                  ppppuVar28 = ppppuStack_e38;
                  for (lVar23 = uVar20 * 0x10 + uVar25 * -0x10; ppppuStack_e38 = ppppuVar19,
                      lVar23 != 0; lVar23 = lVar23 + -0x10) {
                    *ppppuVar28 = (undefined8 ***)0x0;
                    ppppuVar28[1] = (undefined8 ***)0x0;
                    ppppuVar28 = ppppuVar28 + 2;
                  }
                }
              }
              else if (uVar20 < uVar25) {
                ppppuStack_e38 = ppppuStack_e40 + uVar20 * 2;
              }
            }
            uStack_bc8 = 0;
            uStack_bd0 = 0;
            uStack_bc0 = 0;
            pppppuStack_ba0 = (undefined *****)((ulong)pppppuStack_ba0 & 0xffffffffffffff00);
            bStack_9d0 = 0;
            bVar10 = lStack_df8 != lStack_df0;
            FUN_10067646c();
            ppppuStack_9c0 = (undefined ****)0x0;
            puStack_9c8 = (undefined *)0x0;
            lStack_9b8 = 0;
            FUN_100676478(&puStack_9c8,(long)ppppuStack_e38 - (long)ppppuStack_e40 >> 4);
            ppppuVar28 = ppppuStack_e38;
            for (ppppuVar19 = ppppuStack_e40; ppppuVar19 != ppppuVar28; ppppuVar19 = ppppuVar19 + 2)
            {
              ppppuStack_810 = (undefined8 ****)ppppuVar19[1];
              FUN_1006764fc(&puStack_9c8,&ppppuStack_810);
            }
            pppppuVar26 = unaff_x20 + 3;
            FUN_10067653c(&puStack_230,*pppppuVar26,unaff_x19,&puStack_9c8,1);
            func_0x000100692a5c(*pppppuVar26);
            FUN_100692d24();
            FUN_1005f66c4(&ppppuStack_810);
            ppppuVar28 = ppppuStack_e38;
            uStack_e60 = (uint)bVar10;
            uStack_e5c = 0;
            for (ppppuVar19 = ppppuStack_e40; ppppuVar19 != ppppuVar28; ppppuVar19 = ppppuVar19 + 2)
            {
              ppuVar15 = &puStack_230;
              func_0x0001006930c0(ppuVar15,ppppuVar19 + 1);
              if (ppuVar15 == (undefined **)0x0) {
                func_0x000107c32b08();
              }
              else {
                iVar12 = (int)ppuVar15 + 0x18;
                func_0x00010069315c();
                if (iVar12 == 0) {
                  pppuVar34 = pppuStack_bb0;
                  pppuVar36 = pppuStack_bb8;
                  if (pppuStack_bb8 != pppuStack_bb0) {
                    for (; pppuVar35 = pppuVar34, pppuVar36 != pppuVar34;
                        pppuVar36 = pppuVar36 + 0x15) {
                      pppuVar8 = pppuVar34;
                      if (pppuVar36[3] == (undefined8 **)ppuVar15[6]) {
                        do {
                          pppuVar34 = pppuVar8 + -0x15;
                          pppuVar35 = pppuVar36;
                          if (pppuVar34 == pppuVar36) goto LAB_10065e094;
                          pppuVar35 = pppuVar8 + -0x12;
                          pppuVar8 = pppuVar34;
                        } while (*pppuVar35 == pppuVar36[3]);
                        func_0x000107c32b1c(pppuVar36);
                      }
                    }
LAB_10065e094:
                    pppuVar36 = pppuStack_bb0;
                    if (pppuVar35 != pppuStack_bb0) {
                      func_0x000107c32b04();
                      func_0x000107c2947c();
                      pppuVar36 = pppuStack_bb0;
                    }
                    for (; pppuVar35 != pppuVar36; pppuVar35 = pppuVar35 + 0x15) {
                      func_0x000107c32b30();
                    }
                    func_0x000107c32b2c();
                  }
                  uVar22 = (int)ppuVar15 + 0x68;
                  func_0x00010069317c();
                  if ((uVar22 & 0xfffffffb) == 1) {
                    ppuVar3 = &PTR_PTR_11326cb58;
                    if ((undefined **)ppuVar15[0x10] != (undefined **)0x0) {
                      ppuVar3 = (undefined **)ppuVar15[0x10];
                    }
                    pppppuVar29 = unaff_x20 + 0x19;
                    FUN_1006933e4(pppppuVar29,ppuVar3);
                    if (((uVar13 | (uint)pppppuVar29 ^ 0xffffffff) & 1) != 0) {
                      pppppuVar29 = unaff_x20 + 0x19;
                      FUN_100693498(pppppuVar29,ppuVar15 + 0xd);
                      if ((int)pppppuVar29 == 0) {
                        if (!bVar10) {
                          ppppuVar14 = unaff_x20[7];
                          (*(code *)(*ppppuVar14)[2])(ppppuVar14,unaff_x19,ppuVar15[7]);
                          uStack_e60 = 2;
                          if ((uint)ppppuVar14 != 3) {
                            uStack_e60 = (uint)ppppuVar14;
                          }
                          uStack_e5c = uStack_e60 >> 8;
                        }
                        if ((bStack_9d0 & 1) == 0) {
                          FUN_100694108(*pppppuVar26);
                          FUN_100695018();
                          FUN_10066b5d4(&ppppuStack_810);
                        }
                        func_0x000100695024(unaff_x20[0xf]);
                        FUN_10069e54c();
                        FUN_10069ea20();
                        bVar10 = true;
                        goto LAB_10065e140;
                      }
                    }
                  }
                  func_0x000107c29458(&uStack_bd0);
                }
                else {
                  func_0x000107c32b08();
                }
              }
LAB_10065e140:
            }
            FUN_10069fbf8();
            func_0x00010069fcb8(&puStack_230);
            FUN_1006573e4(&puStack_9c8);
            func_0x00010069fd2c();
            if (!bVar10) {
              func_0x000107c32b0c();
              func_0x000107c32b40();
              func_0x000107c29454();
              func_0x000107c32afc();
            }
            if (uStack_bd0 != uStack_bc8) {
              ppppuStack_808 = (undefined8 ****)0x0;
              ppppuStack_810 = (undefined8 ****)0x0;
              ppppuVar14 = unaff_x20[0x16];
              ppppuStack_b98 = (undefined ****)0x0;
              pppppuStack_ba0 = (undefined *****)0x0;
              func_0x000107c29480(&pppppuStack_ba0);
              func_0x000107c29480(&ppppuStack_810);
              if ((ppppuVar14 != (undefined ****)0x0) &&
                 (pppppuVar29 = unaff_x19, FUN_10065eec4(unaff_x19,pppppuVar26),
                 ((ulong)pppppuVar29 & 1) == 0)) {
                ppppuVar14 = unaff_x20[0x13];
                ppppuStack_b98 = unaff_x20[0x16];
                pppppuStack_ba0 = (undefined *****)unaff_x20[0x15];
                if (unaff_x20[0x16] != (undefined ****)0x0) {
                  ppppuVar32 = unaff_x20[0x16] + 2;
                  do {
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(ppppuVar32,0x10);
                    if (bVar6) {
                      *ppppuVar32 = (undefined ***)((long)*ppppuVar32 + 1);
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                }
                uStack_b88 = uStack_bc8;
                uStack_b90 = uStack_bd0;
                uStack_b80 = uStack_bc0;
                uStack_bc0 = 0;
                uStack_bc8 = 0;
                uStack_bd0 = 0;
                FUN_10054f8dc(&uStack_b78,unaff_x19);
                uStack_7f8 = ppppuStack_b98;
                uStack_800 = pppppuStack_ba0;
                ppppuStack_810 = (undefined8 ****)&UNK_1086f73b0;
                ppppuStack_808 = (undefined8 ****)&PTR_DAT_110a673b8;
                pppppuStack_ba0 = (undefined *****)0x0;
                ppppuStack_b98 = (undefined ****)0x0;
                uStack_7e8 = uStack_b88;
                uStack_7f0 = uStack_b90;
                uStack_b90 = 0;
                uStack_b88 = 0;
                uStack_7d0 = uStack_b70;
                uStack_7d8 = uStack_b78;
                uStack_7e0 = uStack_b80;
                uStack_7c8 = uStack_b68;
                uStack_b70 = 0;
                uStack_b68 = 0;
                uStack_b80 = 0;
                uStack_b78 = 0;
                (*(code *)(*ppppuVar14)[2])(ppppuVar14,&ppppuStack_810);
                func_0x000107c32b24();
                func_0x000107c2945c(&pppppuStack_ba0);
              }
            }
            FUN_10069fd34(&uStack_bd0);
            if (bVar10) {
              uVar22 = uStack_e60 & 0xff | uStack_e5c << 8;
              if (uVar22 < 4) {
                uStack_e54 = *(uint *)(&UNK_10df49000 + (ulong)uVar22 * 4);
              }
              else {
                uStack_e54 = 0;
              }
            }
            FUN_10069fd34(&ppppuStack_e40);
            FUN_10069fd34(&lStack_e28);
            FUN_10069fd34(&lStack_e10);
          }
        }
        uVar13 = (uint)unaff_x20[5];
        FUN_10065ee5c();
        pppppuVar26 = unaff_x19;
        FUN_10065eec4(unaff_x19,unaff_x20 + 3);
        uVar22 = 0;
        if ((int)pppppuVar26 == 0) {
          uVar22 = uVar13;
        }
        ppppuVar14 = unaff_x20[5];
        FUN_10066c1b4(ppppuVar14,unaff_x19);
        pppuStack_bb0 = (undefined8 ***)0x0;
        pppuStack_bb8 = (undefined8 ***)0x0;
        uStack_ba8 = 0;
        if (lStack_df8 == lStack_df0) {
          uVar13 = uVar2;
          if ((uVar1 == 0) ||
             (pppppuVar26 = unaff_x19, func_0x000107c2946c(unaff_x19,unaff_x20 + 0x19),
             ((ulong)pppppuVar26 & 1) != 0)) {
            uStack_e54 = 1;
          }
          else {
            uStack_bc8 = 0;
            uStack_bd0 = 0;
            uStack_bc0 = 0;
            ppppuVar32 = unaff_x20[3];
            func_0x000107c32b0c();
            func_0x000107c29f8c(&pppppuStack_ba0,ppppuVar32,unaff_x19,&ppppuStack_810);
            func_0x000107c32afc();
            func_0x00010068e2b8(&puStack_230,&pppppuStack_ba0);
            func_0x000107c60ee4(&puStack_9c8,0x1b8);
            while ((((bStack_80 & 1) != 0 || ((bStack_818 & 1) != 0)) &&
                   (puStack_230 != puStack_9c8))) {
              ppuVar15 = &puStack_230;
              FUN_10068e438(ppuVar15);
              func_0x000107c29264(&ppppuStack_810,unaff_x20[0xf],ppuVar15);
              FUN_10069e558(&uStack_bd0,&ppppuStack_810);
              FUN_10069ea20();
              FUN_100678cb8(&puStack_230);
            }
            func_0x000107c32b10(&puStack_9c8);
            func_0x000107c32b10(&puStack_230);
            FUN_1006928f0(&pppppuStack_ba0);
            if (uStack_bd0 == uStack_bc8) {
              func_0x000107c32b0c();
              func_0x000107c32b40();
              func_0x000107c29454();
              func_0x000107c32afc();
            }
            FUN_10069ff50(&pppuStack_bb8,&uStack_bd0);
            func_0x00010066c3e8(&uStack_bd0);
            uStack_e54 = 4;
          }
        }
        else {
          FUN_10069ff50(&pppuStack_bb8,&lStack_df8);
          uVar13 = 0;
        }
        uVar7 = uVar22 - 1;
        unaff_x24 = (undefined *****)(ulong)uVar7;
        uVar4 = 2;
        if (1 < uVar7) {
          uVar4 = uVar13;
        }
        if (0 < (int)ppppuVar14) {
          uVar4 = 1;
        }
        unaff_x23 = (ulong)uVar4;
        if ((uVar4 == 0) && (((ulong)unaff_x19[6] & 0xfffffffb) == 1)) {
          pppppuVar26 = unaff_x19 + 0x1d;
          FUN_10069ffbc(pppppuVar26,unaff_x20 + 0x19);
          uVar11 = SUB81(pppppuVar26,0);
        }
        else {
          uVar11 = 0;
        }
        ppppuStack_808 = (undefined8 ****)0x0;
        ppppuStack_810 = &pppuStack_bb8;
        unaff_x20 = (undefined *****)&ppppuStack_810;
        uStack_800 = (undefined *****)((ulong)uStack_e54 << 0x20);
        uStack_7f8 = (undefined ****)(ulong)CONCAT14(uVar7 < 2,uVar4);
        uStack_7f0 = (ulong)CONCAT16(uVar11,CONCAT15(uVar4 == 1 & (byte)uVar2,
                                                     CONCAT14(uVar4 == 1 & (byte)uVar1,
                                                              (int)ppppuVar14)));
        uStack_7e8 = (ulong)uVar22;
        FUN_10066c210();
        FUN_10066c3c4(&ppppuStack_808);
        func_0x00010066c3e8(&pppuStack_bb8);
        pppppuVar26 = unaff_x19;
      }
      else {
        ppppuStack_810 = (undefined8 ****)((ulong)ppppuStack_810 & 0xffffffffffffff00);
        uStack_668 = 0;
        pppuStack_bb8 = (undefined8 ***)CONCAT44(pppuStack_bb8._4_4_,1);
        lStack_9b8 = (long)ppppuVar14 + 1;
        puStack_9c8 = (undefined *)CONCAT44(puStack_9c8._4_4_,3);
        puStack_230 = &UNK_1086f7344;
        ppuStack_228 = &PTR_DAT_110a673a0;
        ppppuStack_220 = (undefined ****)&pppuStack_bb8;
        pppppuStack_218 = (undefined *****)&ppppuStack_810;
        ppppuStack_9c0 = ppppuVar14;
        func_0x000107c28efc(unaff_x20[3],unaff_x19,&puStack_9c8,&puStack_230);
        func_0x000107c32b18();
        func_0x000107c28a98(&pppppuStack_ba0,&ppppuStack_810);
        iStack_9f0 = (int)pppuStack_bb8;
        FUN_1006928bc(&ppppuStack_810);
        if (cStack_9f8 != '\x01') {
          if (iStack_9f0 == 1) {
            func_0x000107c32b0c();
            func_0x000107c32b40();
            func_0x000107c29454();
LAB_10065da10:
            func_0x000107c32afc();
          }
          else if (iStack_9f0 == 2) {
            func_0x000107c32b0c();
            func_0x000107c32b40();
            func_0x000107c29454();
            goto LAB_10065da10;
          }
LAB_10065da14:
          FUN_1006928bc(&pppppuStack_ba0);
          goto LAB_10065da1c;
        }
        if ((bStack_bf0 & 1) != 0) {
LAB_10065d9a8:
          FUN_100695034(&ppppuStack_810,unaff_x20[0xf],&pppppuStack_ba0,auStack_dc0);
          FUN_10069e54c();
          FUN_10069ea20();
          goto LAB_10065da14;
        }
        FUN_10065ef7c(&ppppuStack_810,unaff_x20[3],unaff_x19,2);
        FUN_10066baec(auStack_dc0,&ppppuStack_810);
        FUN_10066b97c(&ppppuStack_810);
        if ((bStack_bf0 & 1) != 0) goto LAB_10065d9a8;
        func_0x000107c32b38();
        uStack_800 = (undefined *****)CONCAT44(1,(undefined4)uStack_800);
        uStack_7f0 = uStack_7f0 & 0xff00000000000000;
        FUN_10066c210();
        FUN_10066c3c4((ulong)&ppppuStack_810 | 8);
        FUN_1006928bc(&pppppuStack_ba0);
      }
      func_0x00010066c3e8(&lStack_df8);
      goto LAB_10065e5a4;
    }
    uStack_7e8 = 0;
    unaff_x20 = (undefined *****)&ppppuStack_810;
    ppppuStack_808 = (undefined8 ****)0x0;
    ppppuStack_810 = (undefined8 ****)0x0;
    uStack_800 = (undefined *****)0x100000000;
    uStack_7f8 = (undefined ****)(ulong)uVar2;
    uStack_7f0 = 0x10000000000;
    FUN_10066c210();
  }
  FUN_10066c3c4((ulong)&ppppuStack_810 | 8);
LAB_10065e5a4:
  FUN_10066b97c(auStack_dc0);
  pppppuVar29 = appppuStack_be8;
  FUN_100078bd8(pppppuVar29);
  uVar11 = *(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78;
  if ((bool)uVar11) {
    return pppppuVar29;
  }
  func_0x000107c60e78();
  func_0x000107c32af8();
  func_0x000107c60ca0();
  func_0x00010066c3e8(&uStack_bd0);
  func_0x00010066c3e8(&pppuStack_bb8);
  func_0x00010066c3e8(&lStack_df8);
  FUN_10066b97c(auStack_dc0);
  ppppuVar19 = appppuStack_be8;
  FUN_100078bd8();
  func_0x000107c32b14();
  pppppuVar29 = (undefined *****)ppppuVar19[1];
  if ((pppppuVar29 != (undefined *****)0x0) && (func_0x000107c32f70(), extraout_x8_01 != 0)) {
    func_0x000107c32f60();
    func_0x000107c32f64();
    if ((bool)uVar11) {
      pppppuVar30 = (undefined *****)((ulong)unaff_x20 & unaff_x23);
    }
    else {
      pppppuVar30 = unaff_x20;
      if (pppppuVar29 <= unaff_x20) {
        func_0x000107c32f6c();
        pppppuVar30 = unaff_x24;
      }
    }
    func_0x000107c32f68();
    if (pppppuVar26 == (undefined *****)0x0) {
      return (undefined *****)0x0;
    }
    do {
      while( true ) {
        pppppuVar26 = (undefined *****)*pppppuVar26;
        if (pppppuVar26 == (undefined *****)0x0) {
          return (undefined *****)0x0;
        }
        pppppuVar21 = (undefined *****)pppppuVar26[1];
        if (unaff_x20 != pppppuVar21) break;
        func_0x000107c32f5c();
        if ((int)ppppuVar19 != 0) {
          return pppppuVar26;
        }
      }
      if (((ulong)pppppuVar29 & unaff_x23) == 0) {
        pppppuVar21 = (undefined *****)((ulong)pppppuVar21 & unaff_x23);
      }
      else if (pppppuVar29 <= pppppuVar21) {
        func_0x000107c32f74();
        pppppuVar21 = extraout_x8_02;
      }
    } while (pppppuVar21 == pppppuVar30);
  }
  return (undefined *****)0x0;
}



/* Entry: 10065e8a0; end: 10065e947;  */

long FUN_10065e8a0(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  ulong uVar1;
  ulong extraout_x8_00;
  ulong unaff_x20;
  long *unaff_x21;
  ulong uVar2;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 != 0) && (func_0x000107c32f70(), extraout_x8 != 0)) {
    func_0x000107c32f60();
    func_0x000107c32f64();
    if ((bool)in_ZR) {
      uVar3 = unaff_x20 & unaff_x23;
    }
    else {
      uVar3 = unaff_x20;
      if (uVar2 <= unaff_x20) {
        func_0x000107c32f6c();
        uVar3 = unaff_x24;
      }
    }
    func_0x000107c32f68();
    if (unaff_x21 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        unaff_x21 = (long *)*unaff_x21;
        if (unaff_x21 == (long *)0x0) {
          return 0;
        }
        uVar1 = unaff_x21[1];
        if (unaff_x20 != uVar1) break;
        func_0x000107c32f5c();
        if ((int)param_1 != 0) {
          return (long)unaff_x21;
        }
      }
      if ((uVar2 & unaff_x23) == 0) {
        uVar1 = uVar1 & unaff_x23;
      }
      else if (uVar2 <= uVar1) {
        func_0x000107c32f74();
        uVar1 = extraout_x8_00;
      }
    } while (uVar1 == uVar3);
  }
  return 0;
}



/* Entry: 10065e948; end: 10065e963;  */

bool FUN_10065e948(long param_1)

{
  FUN_10065e8a0();
  return param_1 != 0;
}



/* Entry: 10065e964; end: 10065ea3b;  */

void FUN_10065e964(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_48;
  
  lVar1 = param_2;
  FUN_10065e948();
  if ((lVar1 != 0) &&
     (lVar1 = param_2, func_0x000107c296e0(param_2,param_3), *(long *)(lVar1 + 0x48) != 0)) {
    uStack_48 = *(undefined8 *)(lVar1 + 8);
    puVar2 = &uStack_48;
    func_0x000107c296f0();
    if (*(uint *)((long)puVar2 + 0xc) < 0x1e &&
        (1 << (ulong)(*(uint *)((long)puVar2 + 0xc) & 0x1f) & 0x20218026U) != 0) {
      uVar6 = puVar2[1];
      lVar1 = param_2 + 0x28;
      func_0x000107c296e8(lVar1,param_3);
      if (lVar1 == 0) {
        uVar5 = 0;
        uVar4 = 2;
      }
      else {
        puVar2 = (undefined8 *)(param_2 + 0x28);
        func_0x000107c296dc(puVar2,param_3);
        uVar5 = puVar2[1];
        uVar4 = *puVar2;
      }
      *param_1 = uVar6;
      param_1[2] = uVar5;
      param_1[1] = uVar4;
      uVar3 = 1;
      goto LAB_10065ea20;
    }
  }
  uVar3 = 0;
  *(undefined1 *)param_1 = 0;
LAB_10065ea20:
  *(undefined1 *)(param_1 + 3) = uVar3;
  return;
}



/* Entry: 10065ea3c; end: 10065ea57;  */

void FUN_10065ea3c(void)

{
  return;
}



/* Entry: 10065ea58; end: 10065eb07;  */

long FUN_10065ea58(int param_1)

{
  long lVar1;
  long unaff_x19;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  func_0x00010065ea4c();
  param_1 = param_1 + 0x18;
  FUN_10065ebb0();
  lVar1 = unaff_x19;
  if (param_1 != 0) {
    lVar1 = unaff_x19 + 0x18;
    func_0x000107c33d20(lVar1);
    func_0x000107c29d7c(auStack_48,lVar1);
    while ((lVar1 = unaff_x19, lStack_38 != 0 &&
           (lVar1 = *(long *)(lStack_38 + 0x18), *(int *)(lVar1 + 0x18) != 0))) {
      lStack_38 = *(long *)lStack_38;
    }
    func_0x000107c29d80(auStack_48);
  }
  return lVar1;
}



/* Entry: 10065eb08; end: 10065ebaf;  */

long FUN_10065eb08(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  ulong uVar1;
  ulong extraout_x8_00;
  ulong unaff_x20;
  long *unaff_x21;
  ulong uVar2;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 != 0) && (func_0x000107c33d38(), extraout_x8 != 0)) {
    func_0x000107c33cf4();
    func_0x000107c33d0c();
    if ((bool)in_ZR) {
      uVar3 = unaff_x20 & unaff_x23;
    }
    else {
      uVar3 = unaff_x20;
      if (uVar2 <= unaff_x20) {
        func_0x000107c33d34();
        uVar3 = unaff_x24;
      }
    }
    func_0x000107c33d3c();
    if (unaff_x21 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        unaff_x21 = (long *)*unaff_x21;
        if (unaff_x21 == (long *)0x0) {
          return 0;
        }
        uVar1 = unaff_x21[1];
        if (unaff_x20 != uVar1) break;
        func_0x000107c33cf0();
        if ((int)param_1 != 0) {
          return (long)unaff_x21;
        }
      }
      if ((uVar2 & unaff_x23) == 0) {
        uVar1 = uVar1 & unaff_x23;
      }
      else if (uVar2 <= uVar1) {
        func_0x000107c33d2c();
        uVar1 = extraout_x8_00;
      }
    } while (uVar1 == uVar3);
  }
  return 0;
}



/* Entry: 10065ebb0; end: 10065ebcb;  */

bool FUN_10065ebb0(long param_1)

{
  FUN_10065eb08();
  return param_1 != 0;
}



/* Entry: 10065ebcc; end: 10065ebef;  */

void FUN_10065ebcc(void)

{
  return;
}



/* Entry: 10065ebf0; end: 10065ecb7;  */

void FUN_10065ebf0(int param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *extraout_x8;
  long unaff_x21;
  long *plVar5;
  
  func_0x00010065ebe4();
  extraout_x8[3] = 0;
  extraout_x8[2] = 0;
  extraout_x8[5] = 0;
  extraout_x8[4] = 0;
  extraout_x8[1] = 0;
  *extraout_x8 = 0;
  FUN_10065ecb8();
  if (param_1 != 0) {
    lVar1 = unaff_x21 + 0x28;
    func_0x000107c33d20();
    plVar5 = (long *)(lVar1 + 0x10);
    while (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0) {
      if ((*(int *)(plVar5[3] + 0x18) == 2) && ((*(byte *)(plVar5[3] + 0x78) & 1) == 0)) {
        puVar2 = extraout_x8;
        func_0x00010065ecf4(extraout_x8);
        puVar3 = extraout_x8;
        puVar4 = param_2;
        FUN_10065edd8(extraout_x8);
        func_0x000107c29d4c(puVar2,param_2,puVar3,puVar4,plVar5 + 2);
        func_0x000107c29d50(extraout_x8,puVar2,param_2,plVar5 + 2);
        param_2 = puVar2;
      }
    }
  }
  return;
}



/* Entry: 10065ecb8; end: 10065ed17;  */

bool FUN_10065ecb8(long param_1)

{
  param_1 = param_1 + 0x28;
  FUN_10065eb08(param_1);
  return param_1 != 0;
}



/* Entry: 10065ed18; end: 10065ed93;  */

void FUN_10065ed18(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  func_0x00010065ecf4();
  FUN_10065edd8(param_1);
  *(undefined8 *)(param_1 + 0x28) = 0;
  puVar1 = *(undefined8 **)(param_1 + 8);
  while (uVar3 = *(long *)(param_1 + 0x10) - (long)puVar1 >> 3, 2 < uVar3) {
    func_0x000107c60e14(*puVar1);
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  if (uVar3 == 1) {
    uVar2 = 0x100;
  }
  else {
    if (uVar3 != 2) {
      return;
    }
    uVar2 = 0x200;
  }
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  return;
}



/* Entry: 10065ed94; end: 10065edd7;  */

long * FUN_10065ed94(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_10065ed18();
  puVar1 = (undefined8 *)param_1[2];
  for (puVar2 = (undefined8 *)param_1[1]; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    func_0x000107c60e14(*puVar2);
  }
  func_0x00010065ee00();
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 10065edd8; end: 10065ee07;  */

void FUN_10065edd8(long param_1)

{
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 10065ee08; end: 10065ee33;  */

long * FUN_10065ee08(long *param_1)

{
  func_0x00010065ee00();
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 10065ee34; end: 10065ee5b;  */

void FUN_10065ee34(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10065ee5c; end: 10065eec3;  */

void FUN_10065ee5c(long param_1)

{
  long *plVar1;
  long lVar2;
  
  func_0x00010065ee50();
  FUN_10065ecb8();
  if ((int)param_1 != 0) {
    func_0x000107c33d24();
    plVar1 = (long *)(param_1 + 0x10);
    do {
      plVar1 = (long *)*plVar1;
      if (plVar1 == (long *)0x0) {
        return;
      }
      lVar2 = plVar1[3];
    } while (((*(int *)(lVar2 + 0x18) != 1) || ((*(byte *)(lVar2 + 0x78) & 1) != 0)) ||
            (*(int *)(lVar2 + 0x88) != 1));
  }
  return;
}



/* Entry: 10065eec4; end: 10065eef7;  */

undefined1 * FUN_10065eec4(long param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_1f8 [472];
  
  if (*(char *)(param_1 + 0x34c) != '\x01' || *(int *)(param_1 + 0x348) != 5) {
    puVar1 = (undefined1 *)0x0;
    if ((*param_2 != 0) && ((*(byte *)(param_1 + 0x34c) & 1) != 0)) {
      if (*(int *)(param_1 + 0x348) == 5 || *(int *)(param_1 + 0x348) == 2) {
        func_0x00010065eef0(auStack_1f8,*param_2,param_1);
        puVar1 = auStack_1f8;
        FUN_10066bccc(puVar1);
        FUN_10066b97c(auStack_1f8);
      }
      else {
        puVar1 = (undefined1 *)0x0;
      }
    }
    return puVar1;
  }
  return (undefined1 *)0x1;
}



/* Entry: 10065eef8; end: 10065ef7b;  */

undefined1 * FUN_10065eef8(undefined8 param_1,int *param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_1f8 [472];
  
  puVar1 = (undefined1 *)0x0;
  if ((*param_3 != 0) && ((*(byte *)(param_2 + 1) & 1) != 0)) {
    if (*param_2 == 5 || *param_2 == 2) {
      func_0x00010065eef0(auStack_1f8,*param_3,param_1);
      puVar1 = auStack_1f8;
      FUN_10066bccc(puVar1);
      FUN_10066b97c(auStack_1f8);
    }
    else {
      puVar1 = (undefined1 *)0x0;
    }
  }
  return puVar1;
}



/* Entry: 10065ef7c; end: 10065f08b;  */

void FUN_10065ef7c(long param_1,undefined8 param_2,int param_3)

{
  undefined1 in_ZR;
  undefined1 *unaff_x19;
  undefined1 auStack_438 [488];
  undefined8 uStack_250;
  undefined8 uStack_248;
  byte bStack_e0;
  byte bStack_80;
  undefined1 auStack_58 [24];
  
  func_0x000100635cf8();
  if ((bool)in_ZR) {
    FUN_10065f08c();
    func_0x0001005ecc7c();
    if (!(bool)in_ZR) {
      func_0x000100458ae4();
      uStack_250 = 0;
      uStack_248 = 0;
      func_0x000107c34210();
      func_0x000107c34374(auStack_58);
      func_0x000107c34310();
      FUN_10054f908();
      func_0x000107c34480();
      func_0x000107c34538();
      func_0x000107c34478();
      func_0x000107c344e4();
      func_0x000107c34468();
      func_0x000107c34460();
    }
  }
  FUN_10065f0a0(auStack_438,*(long *)(param_1 + 0x20) + 0x578,param_2);
  FUN_10066b80c(&uStack_250,auStack_438);
  func_0x00010066ba20();
  if ((bStack_80 & 1) == 0) {
    *unaff_x19 = 0;
    unaff_x19[0x1d0] = 0;
  }
  else {
    if ((param_3 == 2) && ((bStack_e0 & 1) != 0)) {
      FUN_10066b94c(&uStack_250);
    }
    FUN_10066bca0();
  }
  FUN_10066b97c(&uStack_250);
  return;
}



/* Entry: 10065f08c; end: 10065f09f;  */

void FUN_10065f08c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010065f09c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___tlv_bootstrap_11340e260)(*(undefined8 *)(unaff_x22 + 8));
  return;
}



/* Entry: 10065f0a0; end: 10065f0c3;  */

void FUN_10065f0a0(void)

{
  func_0x0001005ed940();
  FUN_10065f0c4();
  func_0x0001005edc50();
  func_0x0001005edc5c();
  FUN_10065f1e8();
  func_0x0001005edd60();
  FUN_10065f5a4();
  return;
}



/* Entry: 10065f0c4; end: 10065f16f;  */

undefined8 * FUN_10065f0c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 in_ZR;
  long lVar1;
  long extraout_x10;
  long unaff_x19;
  long unaff_x20;
  undefined8 auStack_c8 [19];
  
  func_0x0001005ec5b4();
  FUN_1005ec6a8();
  do {
    func_0x0001005ec6b4();
    if ((bool)in_ZR) {
      func_0x0001005ec6c0();
      func_0x0001005ec6c8();
      if (param_4 < 0) {
        lVar1 = *(long *)(unaff_x19 + 0x48);
      }
      else {
        lVar1 = unaff_x19 + 0x48;
      }
      param_1 = auStack_c8;
      FUN_10065f170(param_1,param_2,lVar1);
      func_0x0001005ec6f4();
      func_0x0001005ec700();
      func_0x0001005ec708();
      func_0x0001005ec710();
      func_0x0001005ec720();
      goto LAB_10065f13c;
    }
    func_0x0001005ed218();
  } while (extraout_x10 != 0);
  func_0x0001005ed224();
  if (!(bool)in_ZR) {
    FUN_1005f6f68();
  }
LAB_10065f13c:
  func_0x0001005ec750();
  func_0x0001005ec760();
  if ((bool)in_ZR) {
    return (undefined8 *)(unaff_x20 + 0x10);
  }
  func_0x000107c60e78();
  func_0x00010061eec8();
  func_0x000107c34360();
  FUN_10054bfa4();
  *param_1 = &PTR_DAT_110a7d3e8;
  return param_1;
}



/* Entry: 10065f170; end: 10065f18f;  */

void FUN_10065f170(undefined8 *param_1)

{
  FUN_10054bfa4();
  *param_1 = &PTR_DAT_110a7d3e8;
  return;
}



/* Entry: 10065f190; end: 10065f1e7;  */

void FUN_10065f190(void)

{
  func_0x0001005edc5c();
  FUN_10065f1e8();
  func_0x0001005edd60();
  FUN_10065f5a4();
  return;
}



/* Entry: 10065f1e8; end: 10065f1f3;  */

void FUN_10065f1e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  FUN_1005ed240(&ppuStack_48,param_2);
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    ppuStack_48 = &ppuStack_48;
  }
  FUN_1005ecd60(param_1,1,ppuStack_48,uStack_40);
  func_0x00010061fa30();
  return;
}



/* Entry: 10065f1f4; end: 10065f267;  */

void FUN_10065f1f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  FUN_1005ed240(&ppuStack_48,param_3);
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    ppuStack_48 = &ppuStack_48;
  }
  FUN_1005ecd60(param_1,param_2,ppuStack_48,uStack_40);
  func_0x00010061fa30();
  return;
}



/* Entry: 10065f268; end: 10065f4cf;  */

undefined8 FUN_10065f268(long param_1)

{
  code *pcVar1;
  
  if (*(int *)(param_1 + 0x1e0) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(0,0x10065f288);
    (*pcVar1)();
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0x1e0) = 1;
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0,0x10065f294);
  (*pcVar1)();
}



/* Entry: 10065f4d0; end: 10065f5a3;  */

void FUN_10065f4d0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_90 [72];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x0001004b62b4(&uStack_48,0);
  FUN_100460de4(auStack_90);
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(lVar1 + 0x18);
  FUN_100460448(lVar1 + 0x600);
  *(undefined1 *)(lVar1 + 0x48) = 1;
  *(undefined1 *)(lVar1 + 0x55) = 1;
  if (*(long *)(lVar1 + 0x40) != 0) {
    FUN_100460314();
    *(undefined8 *)(lVar1 + 0x40) = 0;
  }
  if ((*(char *)(lVar2 + 0x18) != '\0') && (*(char *)(lVar1 + 100) != '\0')) {
    FUN_10065fba4(param_1);
  }
  func_0x000100466b80(lVar1 + 0x600);
  FUN_100617338(lVar1);
  FUN_100467a48(auStack_90);
  FUN_1004b6ddc(&uStack_48);
  return;
}



/* Entry: 10065f5a4; end: 10065f5c7;  */

void FUN_10065f5a4(void)

{
  FUN_1005ec7e4();
  FUN_10065f5c8();
  return;
}


