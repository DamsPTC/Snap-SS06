/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101130dcc; end: 101130e3b;  */

void FUN_101130dcc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1011314b0;
  FUN_100ffbb74(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 101130e3c; end: 101130fd3;  */

void FUN_101130e3c(double param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  lVar1 = *(long *)(unaff_x20 + 0x68);
  if (lVar1 != 0) {
    func_0x000107c61174();
    lVar2 = lVar1;
    func_0x000107c4c458();
    func_0x000107c61180();
    func_0x000107c59c08();
    func_0x000107c615e8(lVar2);
    func_0x000107c4ab14(param_2);
    dVar5 = param_1;
    func_0x000107c4c0e4(param_2);
    lVar2 = lVar1;
    dVar6 = dVar5;
    func_0x000107c4c458(lVar1);
    func_0x000107c61180();
    func_0x000107c5ea20();
    dVar7 = dVar6;
    func_0x000107c615e8(lVar2);
    dVar8 = 16.25;
    if (16.25 < dVar6) {
      lVar2 = lVar1;
      func_0x000107c4c458(lVar1);
      func_0x000107c61180();
      func_0x000107c5ea20();
      func_0x000107c615e8(lVar2);
      dVar8 = dVar7;
    }
    lVar2 = lVar1;
    func_0x000107c4c458(lVar1);
    func_0x000107c61180();
    puVar3 = &UNK_110386c88;
    func_0x000107c613fc(&UNK_110386c88,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    uStack_60 = 0x1011314c8;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_110387020;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    func_0x000107c532c4(param_1,dVar5,dVar8,lVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 101130fd4; end: 101130fdf;  */

void FUN_101130fd4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    FUN_10112f394(uVar1,1,uVar3,0);
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 101130fe0; end: 101131023;  */

long FUN_101130fe0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101131024; end: 10113102b;  */

void FUN_101131024(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar5 = &puStack_90;
  puVar2 = &UNK_1103882b8;
  func_0x000107c613fc(&UNK_1103882b8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x1011442d8;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_1011442e0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  uStack_80 = 0x10114375c;
  puStack_78 = &UNK_1103882d0;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar4 = puStack_68;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  puVar4 = &UNK_110388308;
  func_0x000107c613fc(&UNK_110388308,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_101144300;
  *(undefined8 *)(puVar4 + 0x18) = unaff_x20;
  pcStack_70 = FUN_101144308;
  puStack_90 = puVar6;
  uStack_88 = 0x42000000;
  uStack_80 = 0x1011437a4;
  puStack_78 = &UNK_110388320;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar6 = puStack_68;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c4c7c0(param_1);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574();
  puVar6 = puVar2;
  func_0x000107c61544(puVar2,"",0x6e,0x51,0x23,1);
  func_0x000107c61574();
  func_0x000107c61574(puVar2);
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101143ac4);
    (*pcVar1)();
  }
  puVar2 = puVar4;
  func_0x000107c61544(puVar4,"",0x6e,0x58,0x24,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar2 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101143ac8);
  (*pcVar1)();
}



/* Entry: 10113102c; end: 101131043;  */

void FUN_10113102c(void)

{
  FUN_10112fedc();
  return;
}



/* Entry: 101131044; end: 10113104b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101131044(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112d5fae8);
    *(undefined8 *)(lVar1 + _DAT_112d5fae8) = param_1;
    func_0x000107c61174(param_1);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_101143b24();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10113104c; end: 101131063;  */

void FUN_10113104c(void)

{
  func_0x000101130218();
  return;
}



/* Entry: 101131064; end: 1011310a7;  */

void FUN_101131064(code *param_1)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1011310a8; end: 1011310e7;  */

/* WARNING: Possible PIC construction at 0x00010112e178: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010112e17c) */
/* WARNING: Removing unreachable block (ram,0x00010112e184) */
/* WARNING: Removing unreachable block (ram,0x00010112e210) */
/* WARNING: Removing unreachable block (ram,0x00010112e220) */
/* WARNING: Removing unreachable block (ram,0x00010112e23c) */
/* WARNING: Removing unreachable block (ram,0x00010112e258) */
/* WARNING: Removing unreachable block (ram,0x00010112e2e4) */

void FUN_1011310a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  if (param_1 == 2) {
    func_0x00010112e2fc(param_2,param_2,*(undefined8 *)(unaff_x20 + 0x10),uVar1,
                        *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf5fb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_currentPosition_1125b5870);
  return;
}



/* Entry: 1011310e8; end: 10113112f;  */

void FUN_1011310e8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1011314b8;
  plVar3[2] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[3] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10112e9f8,lVar1,lVar2);
  return;
}



/* Entry: 101131130; end: 10113119f;  */

void FUN_101131130(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1011314b4;
  FUN_100f7cc44(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1011311a0; end: 101131223;  */

void FUN_1011311a0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1011311e8;
  plVar3[2] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[3] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10112ef88,lVar1,lVar2);
  return;
}



/* Entry: 101131224; end: 101131293;  */

void FUN_101131224(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1011314bc;
  FUN_100f7cc44(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 101131294; end: 1011312db;  */

void FUN_101131294(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1011314c0;
  plVar3[2] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[3] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10112e9f8,lVar1,lVar2);
  return;
}



/* Entry: 1011312dc; end: 10113134b;  */

void FUN_1011312dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1011314c4;
  FUN_100f7cc44(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10113134c; end: 101131373;  */

void FUN_10113134c(void)

{
  undefined8 uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  bVar2 = *(byte *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    lVar4 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    *(undefined8 *)(lVar4 + 0x20) = uVar1;
    *(undefined8 *)(lVar4 + 0x28) = uVar5;
    func_0x000107c61434(uVar5);
    FUN_10112f394(lVar4,bVar2 & 1,0,1);
    func_0x000107c61574(lVar3);
    func_0x000107c61574(lVar4);
  }
  return;
}



/* Entry: 101131374; end: 1011313b3;  */

void FUN_101131374(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1011313b4; end: 1011314cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011313b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if (param_3 == 0) {
      func_0x000107c61170();
    }
    else {
      puVar1 = (undefined8 *)(lVar2 + _DAT_112d5e598);
      uVar3 = puVar1[1];
      *puVar1 = param_2;
      puVar1[1] = param_3;
      func_0x000107c61434(param_3);
      func_0x000107c61170(lVar2);
      func_0x000107c6142c(uVar3);
    }
  }
  return;
}



/* Entry: 1011314cc; end: 1011315b3;  */

undefined * FUN_1011314cc(undefined *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  ulong uVar3;
  undefined *puVar4;
  
  puVar2 = param_1;
  FUN_101131c70();
  if ((ulong)puVar2 >> 0x3e == 0) {
    puVar4 = *(undefined **)(((ulong)puVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar4 = (undefined *)((ulong)puVar2 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar2) {
      puVar4 = puVar2;
    }
    func_0x000107c60480();
  }
  func_0x000107c6142c();
  if ((long)puVar4 <= (long)param_1) {
    puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIButton_1126aec48);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return puVar2;
  }
  uVar3 = *(ulong *)(unaff_x20 + 0xd8);
  if ((uVar3 & 0xc000000000000001) != 0) {
    func_0x000107c61434(uVar3);
    func_0x00010111c594(param_1,uVar3);
    func_0x000107c6142c(uVar3);
    return param_1;
  }
  if (-1 < (long)param_1) {
    if (param_1 < *(undefined **)((uVar3 & 0xffffffffffffff8) + 0x10)) {
      puVar2 = *(undefined **)(uVar3 + (long)param_1 * 8 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_retain_11034d2d8)(puVar2);
      return puVar2;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1011315b4);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011315b0);
  (*pcVar1)();
}



/* Entry: 1011315b4; end: 1011315ef; -[_TtC32MapFriendFocusViewImplementation33GroupFocusViewActionBarDataSource actionBarButtonAtIndex:] */

void FUN_1011315b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c6157c();
  FUN_1011314cc(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1011315f0; end: 10113163f; -[_TtC32MapFriendFocusViewImplementation33GroupFocusViewActionBarDataSource numberOfActionBarButtons] */

undefined8 FUN_1011315f0(ulong param_1)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1;
  func_0x000107c6157c();
  FUN_101131978();
  if ((uVar2 & 1) == 0) {
    func_0x000107c61574(param_1);
    uVar3 = 0;
  }
  else {
    cVar1 = *(char *)(param_1 + 0xb8);
    func_0x000107c61574(param_1);
    uVar3 = 1;
    if (cVar1 == '\0') {
      uVar3 = 2;
    }
  }
  return uVar3;
}



/* Entry: 101131640; end: 101131653; -[_TtC32MapFriendFocusViewImplementation33GroupFocusViewActionBarDataSource actionBarAlignment] */

undefined8 FUN_101131640(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 4;
  if (*(char *)(param_1 + 0xb8) == '\0') {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 101131654; end: 1011316af;  */

long FUN_101131654(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0xd0);
  lVar1 = lVar2;
  if (lVar2 == 1) {
    lVar1 = unaff_x20;
    FUN_1011316b0();
    uVar3 = *(undefined8 *)(unaff_x20 + 0xd0);
    *(long *)(unaff_x20 + 0xd0) = lVar1;
    func_0x000107c61174();
    FUN_101132f0c(uVar3);
  }
  func_0x000101132f1c(lVar2);
  return lVar1;
}



/* Entry: 1011316b0; end: 101131977;  */

long FUN_1011316b0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  lVar4 = *(long *)(param_3 + 200);
  if (lVar4 != 0) {
    func_0x000107c61174();
    lVar12 = lVar4;
    func_0x000107c3fc6c();
    func_0x000107c61180();
    if (lVar12 != 0) {
      lVar5 = lVar12;
      func_0x000107c5faec();
      func_0x000107c61170(lVar12);
      lVar6 = *(long *)(param_3 + 0x10);
      func_0x000107c4c3a4();
      func_0x000107c61180();
      lVar12 = lVar6;
      func_0x000107c5fc54();
      func_0x000107c61170(lVar6);
      uVar15 = 0;
      uVar16 = *(ulong *)(lVar12 + 0x10);
      lVar6 = *(long *)(param_3 + 0x28);
      puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
      do {
        puVar13 = (undefined8 *)(lVar12 + 0x28 + uVar15 * 0x10);
        do {
          if (uVar16 == uVar15) {
            func_0x000107c6142c(lVar12);
            func_0x000107c4077c(lVar4);
            lVar12 = *(long *)(param_3 + 0x58);
            func_0x000107c5c734();
            func_0x000107c61180();
            if (lVar12 != 0) {
              func_0x000107c5cfb8();
              func_0x000107c615e8(lVar12);
            }
            puVar10 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
            func_0x000107c6057c(PTR___sSuN_11034e220,
                                PTR___sSus23CustomStringConvertiblesWP_11034e240);
            func_0x000107c5fb78();
            func_0x000107c6142c(puVar10);
            func_0x000102661ce0(0);
            func_0x000107c610f8();
            func_0x000107c6157c(param_3);
            func_0x0001026619cc(param_1,param_2,lVar5,param_4,puVar11,0,0xe000000000000000,1,param_3
                               );
            func_0x000107c61170(lVar4);
            return lVar5;
          }
          if (*(ulong *)(lVar12 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101131978);
            (*pcVar3)();
          }
          uVar15 = uVar15 + 1;
          uVar7 = puVar13[-1];
          uVar2 = *puVar13;
          func_0x000107c61434(uVar2);
          func_0x000107c5fadc(uVar7,uVar2);
          lVar8 = lVar6;
          func_0x000107c4c39c();
          func_0x000107c61180();
          func_0x000107c6142c(uVar2);
          func_0x000107c61170(uVar7);
          puVar13 = puVar13 + 2;
        } while (lVar8 == 0);
        puVar10 = puVar11;
        func_0x000107c61550();
        if ((((int)puVar10 == 0) || ((long)puVar11 < 0)) ||
           (puVar10 = puVar11, ((ulong)puVar11 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar11 >> 0x3e == 0) {
            puVar9 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar9 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar11) {
              puVar9 = puVar11;
            }
            func_0x000107c60480(puVar9);
          }
          puVar10 = (undefined *)0x0;
          FUN_101136a20(0,puVar9 + 1,1,puVar11);
        }
        uVar14 = (ulong)puVar10 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar14 + 0x10);
        puVar11 = puVar10;
        if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar1) {
          puVar11 = (undefined *)(ulong)(1 < *(ulong *)(uVar14 + 0x18));
          FUN_101136a20(puVar11,uVar1 + 1,1,puVar10);
          uVar14 = (ulong)puVar11 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar14 + 0x10) = uVar1 + 1;
        *(long *)(uVar14 + uVar1 * 8 + 0x20) = lVar8;
      } while( true );
    }
    func_0x000107c61170(lVar4);
  }
  return 0;
}



/* Entry: 101131978; end: 101131c6f;  */

undefined8 FUN_101131978(void)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long unaff_x20;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  
  uVar2 = *(ulong *)(unaff_x20 + 200);
  if (uVar2 == 0) {
    uVar11 = 0;
  }
  else {
    lVar14 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c61174();
    func_0x000107c4c3a4();
    func_0x000107c61180();
    lVar15 = lVar14;
    puVar8 = PTR___sSSN_11034da80;
    func_0x000107c5fc54();
    func_0x000107c61170(lVar14);
    uVar16 = *(ulong *)(lVar15 + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar16 != 0) {
      uVar10 = 0;
      lVar14 = *(long *)(unaff_x20 + 0x20);
LAB_101131a00:
      plVar12 = (long *)(lVar15 + 0x28 + uVar10 * 0x10);
      uVar7 = uVar10;
      do {
        if (*(ulong *)(lVar15 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101131c70);
          (*pcVar1)();
        }
        lVar3 = plVar12[-1];
        puVar5 = (undefined *)*plVar12;
        func_0x000107c61434(puVar5);
        puVar9 = puVar5;
        func_0x000107c5fadc(lVar3);
        lVar4 = lVar14;
        func_0x000107c4e67c();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        puVar8 = puVar9;
        if (lVar4 != 0) {
          lVar3 = lVar4;
          func_0x000107c3fc6c();
          func_0x000107c61180();
          func_0x000107c61170(lVar4);
          puVar8 = puVar9;
          if (lVar3 != 0) goto code_r0x000101131a94;
        }
        uVar7 = uVar7 + 1;
        func_0x000107c6142c(puVar5);
        plVar12 = plVar12 + 2;
        if (uVar16 == uVar7) break;
      } while( true );
    }
LAB_101131b58:
    func_0x000107c6142c(lVar15);
    lVar15 = *(long *)(puVar6 + 0x10);
    if (lVar15 != 0) {
      plVar12 = (long *)(puVar6 + 0x28);
      do {
        uVar16 = plVar12[-1];
        puVar5 = (undefined *)*plVar12;
        func_0x000107c61434(puVar5);
        uVar10 = uVar2;
        func_0x000107c3fc6c();
        func_0x000107c61180();
        if (uVar10 == 0) {
          func_0x000107c61170(uVar2);
          func_0x000107c6142c(puVar6);
          uVar11 = 0;
          goto LAB_101131c40;
        }
        uVar7 = uVar10;
        func_0x000107c5faec();
        puVar9 = puVar8;
        func_0x000107c61170(uVar10);
        if ((uVar16 == uVar7) && (puVar5 == puVar8)) {
          func_0x000107c6142c(puVar5);
          func_0x000107c6142c(puVar8);
        }
        else {
          puVar9 = puVar5;
          func_0x000107c605b8(uVar16,puVar5,uVar7,puVar8,0);
          func_0x000107c6142c(puVar5);
          func_0x000107c6142c(puVar8);
          if ((uVar16 & 1) == 0) {
            func_0x000107c61170(uVar2);
            uVar11 = 0;
            puVar5 = puVar6;
            goto LAB_101131c40;
          }
        }
        plVar12 = plVar12 + 2;
        lVar15 = lVar15 + -1;
        puVar8 = puVar9;
      } while (lVar15 != 0);
    }
    func_0x000107c61170(uVar2);
    uVar11 = 1;
    puVar5 = puVar6;
LAB_101131c40:
    func_0x000107c6142c(puVar5);
  }
  return uVar11;
code_r0x000101131a94:
  lVar4 = lVar3;
  func_0x000107c5faec();
  puVar8 = puVar9;
  func_0x000107c61170(lVar3);
  func_0x000107c6142c(puVar5);
  puVar5 = puVar6;
  func_0x000107c61558();
  if (((ulong)puVar5 & 1) == 0) {
    puVar8 = (undefined *)(*(long *)(puVar6 + 0x10) + 1);
    puVar5 = (undefined *)0x0;
    func_0x0001000d182c(0,puVar8,1,puVar6);
    puVar6 = puVar5;
  }
  uVar13 = *(ulong *)(puVar6 + 0x10);
  puVar5 = (undefined *)(uVar13 + 1);
  if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar13) {
    puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
    puVar8 = puVar5;
    func_0x0001000d182c(puVar6,puVar5,1);
  }
  uVar10 = uVar7 + 1;
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(long *)(puVar6 + uVar13 * 0x10 + 0x20) = lVar4;
  *(undefined **)(puVar6 + uVar13 * 0x10 + 0x28) = puVar9;
  if (uVar16 - 1 == uVar7) goto LAB_101131b58;
  goto LAB_101131a00;
}



/* Entry: 101131c70; end: 101131ccb;  */

long FUN_101131c70(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0xd8);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = unaff_x20;
    FUN_101131ccc();
    uVar3 = *(undefined8 *)(unaff_x20 + 0xd8);
    *(long *)(unaff_x20 + 0xd8) = lVar2;
    func_0x000107c61434();
    func_0x000107c6142c(uVar3);
    lVar1 = 0;
  }
  func_0x000107c61434(lVar1);
  return lVar2;
}



/* Entry: 101131ccc; end: 101131ff3;  */

undefined * FUN_101131ccc(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_88;
  undefined4 uStack_7c;
  undefined1 auStack_78 [24];
  
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar6 = param_3;
  if ((*(byte *)(param_3 + 0xb8) & 1) != 0) goto LAB_101131e94;
  if (*(long *)(param_3 + 0xc0) == 0) {
    lStack_88 = 0;
    uVar10 = 0;
    uStack_7c = 1;
    if (*(long *)(param_3 + 200) == 0) goto LAB_101131d4c;
LAB_101131d20:
    func_0x000107c4077c();
    uVar11 = 0;
  }
  else {
    uVar10 = param_2;
    func_0x000107c4077c();
    uStack_7c = 0;
    param_2 = uVar10;
    lStack_88 = param_1;
    if (*(long *)(param_3 + 200) != 0) goto LAB_101131d20;
LAB_101131d4c:
    param_1 = 0;
    param_2 = 0;
    uVar11 = 1;
  }
  uVar12 = *(undefined8 *)(param_3 + 0x30);
  uVar2 = *(undefined8 *)(param_3 + 0x40);
  uVar3 = *(undefined8 *)(param_3 + 0x48);
  func_0x00010265dde8(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar12);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  func_0x000107c6157c(param_3);
  func_0x00010265cfec(lStack_88,uVar10,uStack_7c,param_1,param_2,uVar11,uVar12,uVar2,uVar3,param_3);
  func_0x000107c61174();
  if ((ulong)puVar8 >> 0x3e == 0) {
    puVar4 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar4 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar8) {
      puVar4 = puVar8;
    }
    func_0x000107c60480(puVar4);
  }
  puVar5 = (undefined *)0x0;
  func_0x000101136bfc(0,puVar4 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar9 = (ulong)puVar5 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar9 + 0x10);
  puVar8 = puVar5;
  if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar1) {
    puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
    func_0x000101136bfc(puVar8,uVar1 + 1,1,puVar5);
    uVar9 = (ulong)puVar8 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar9 + 0x10) = uVar1 + 1;
  *(long *)(uVar9 + uVar1 * 8 + 0x20) = lStack_88;
  uVar10 = *(undefined8 *)(param_3 + 0x98);
  *(long *)(param_3 + 0x98) = lStack_88;
  lVar6 = lStack_88;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61170(uVar10);
  func_0x000107c61428(param_3 + 0x60,auStack_78,0x21,0);
  uVar10 = *(undefined8 *)(param_3 + 0x78);
  lVar7 = *(long *)(param_3 + 0x80);
  func_0x0001000c6518(param_3 + 0x60,uVar10);
  (**(code **)(lVar7 + 0x10))(lStack_88,&PTR_DAT_11052eaf8,uVar10,lVar7);
  func_0x000107c614a8(auStack_78);
  func_0x000107c61170();
LAB_101131e94:
  FUN_101131654();
  if (lVar6 != 0) {
    uVar10 = *(undefined8 *)(param_3 + 0x38);
    func_0x0001026616a0(0);
    func_0x000107c610f8();
    func_0x000107c6157c(param_3);
    func_0x000107c61174();
    func_0x000107c61174(uVar10);
    lVar7 = lVar6;
    func_0x000102661264(lVar6,uVar10,param_3);
    func_0x000107c61180();
    puVar4 = puVar8;
    func_0x000107c61550();
    if ((((int)puVar4 == 0) || ((long)puVar8 < 0)) ||
       (puVar4 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar8 >> 0x3e == 0) {
        puVar5 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar5 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar8) {
          puVar5 = puVar8;
        }
        func_0x000107c60480(puVar5);
      }
      puVar4 = (undefined *)0x0;
      func_0x000101136bfc(0,puVar5 + 1,1,puVar8);
    }
    uVar9 = (ulong)puVar4 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar9 + 0x10);
    puVar8 = puVar4;
    if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
      func_0x000101136bfc(puVar8,uVar1 + 1,1,puVar4);
      uVar9 = (ulong)puVar8 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar9 + 0x10) = uVar1 + 1;
    *(long *)(uVar9 + uVar1 * 8 + 0x20) = lVar7;
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar7);
  }
  return puVar8;
}



/* Entry: 101131ff4; end: 1011320df;  */

void FUN_101131ff4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x0001000834e4(unaff_x20 + 0x60);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  FUN_101132f0c(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xd8));
  return;
}



/* Entry: 1011320e0; end: 10113214b; -[_TtC32MapFriendFocusViewImplementation33GroupFocusViewActionBarDataSource didEndSnapshot] */

/* WARNING: Possible PIC construction at 0x000101132128: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010113212c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_1011320e0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x000107c6157c();
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(*(undefined8 *)(param_1 + 0x38));
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10113214c; end: 10113218b; -[_TtC32MapFriendFocusViewImplementation33GroupFocusViewActionBarDataSource didTap:] */

void FUN_10113214c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c6157c(param_1);
  FUN_101132bb4();
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10113218c; end: 101132293;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10113218c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x58);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c4c3a4();
    func_0x000107c61180();
    lVar3 = lVar2;
    if (lVar2 == 0) {
      func_0x000107c5fc54();
      lVar3 = lVar2;
      func_0x000107c5fc48();
      func_0x000107c6142c(lVar2);
    }
    func_0x000107c4bca0(lVar1);
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 101132294; end: 1011322d7; -[_TtC32MapFriendFocusViewImplementation33GroupFocusViewActionBarDataSource didTapDirectionButton:] */

void FUN_101132294(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_10113218c(param_3);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1011322d8; end: 10113232f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011322d8(undefined8 param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  if (param_2 == 0) {
    return;
  }
  lVar1 = *(long *)(unaff_x20 + 0x58);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c4c3a4();
    func_0x000107c61180();
    lVar3 = lVar2;
    if (lVar2 == 0) {
      func_0x000107c5fc54();
      lVar3 = lVar2;
      func_0x000107c5fc48();
      func_0x000107c6142c(lVar2);
    }
    func_0x000107c4bca0(lVar1);
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 101132330; end: 101132413;  */

void FUN_101132330(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x58);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c4c3a4();
    func_0x000107c61180();
    lVar3 = lVar2;
    if (lVar2 == 0) {
      func_0x000107c5fc54();
      lVar3 = lVar2;
      func_0x000107c5fc48();
      func_0x000107c6142c(lVar2);
    }
    func_0x000107c4bca0(lVar1);
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 101132414; end: 101132467; -[_TtC32MapFriendFocusViewImplementation33GroupFocusViewActionBarDataSource didCloseDirectionSheet:action:] */

void FUN_101132414(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_1011322d8(param_3,param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101132468; end: 1011326e7;  */

/* WARNING: Possible PIC construction at 0x0001011324fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101132534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101132560: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011325c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011326b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011325cc) */
/* WARNING: Removing unreachable block (ram,0x000101132564) */
/* WARNING: Removing unreachable block (ram,0x0001011325a0) */
/* WARNING: Removing unreachable block (ram,0x000101132538) */
/* WARNING: Removing unreachable block (ram,0x00010113253c) */
/* WARNING: Removing unreachable block (ram,0x00010113256c) */
/* WARNING: Removing unreachable block (ram,0x000101132574) */
/* WARNING: Removing unreachable block (ram,0x000101132550) */
/* WARNING: Removing unreachable block (ram,0x000101132500) */
/* WARNING: Removing unreachable block (ram,0x0001011326b4) */

void FUN_101132468(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0xa8);
  if (lVar2 != 0) {
    lVar3 = *(long *)(unaff_x20 + 0xb0);
    lVar1 = lVar2;
    func_0x000107c614f0(lVar2);
    pcVar4 = *(code **)(lVar3 + 8);
    func_0x000107c615f0(lVar2);
    (*pcVar4)(lVar1,lVar3);
    func_0x000107c615e8(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + 200);
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c61174();
  lVar1 = lVar2;
  func_0x000107c3fc6c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5faec();
    lVar2 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1011326e8; end: 1011327b7;  */

void FUN_1011326e8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c61428(param_2 + 0x60,auStack_98,0,0);
    FUN_101132b70(param_2 + 0x60,auStack_80);
    func_0x000107c61574(param_2);
    func_0x0001000a8868(auStack_80,uStack_68);
    (**(code **)(lStack_60 + 0x28))(param_3,param_4,param_5,param_6,uStack_68,lStack_60);
    func_0x0001000834e4(auStack_80);
  }
  return;
}



/* Entry: 1011327b8; end: 10113280b; -[_TtC32MapFriendFocusViewImplementation33GroupFocusViewActionBarDataSource onDirectionsRouteInfoLoadedWith:] */

void FUN_1011327b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001038be9b4(0);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c6157c(param_1);
  FUN_101132468(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 10113280c; end: 1011328d7;  */

void FUN_10113280c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x58);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c4c3a4();
    func_0x000107c61180();
    lVar3 = lVar2;
    if (lVar2 == 0) {
      func_0x000107c5fc54();
      lVar3 = lVar2;
      func_0x000107c5fc48();
      func_0x000107c6142c(lVar2);
    }
    func_0x000107c4bca0(lVar1);
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 1011328d8; end: 1011328ff; -[_TtC32MapFriendFocusViewImplementation33GroupFocusViewActionBarDataSource onDirectionsRouteLineDrawn] */

void FUN_1011328d8(undefined8 param_1)

{
  func_0x000107c6157c();
  FUN_10113280c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101132900; end: 101132b5f;  */

long FUN_101132900(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  undefined8 param_14)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = param_1;
  func_0x0001011320c0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x90) = param_2;
  *(undefined8 *)(lVar1 + 0x98) = 0;
  *(undefined8 *)(lVar1 + 0xa8) = 0;
  *(undefined8 *)(lVar1 + 0xb0) = 0;
  *(undefined8 *)(lVar1 + 0xd8) = 0;
  *(undefined8 *)(lVar1 + 0xd0) = 1;
  *(long *)(lVar1 + 0x10) = param_3;
  *(undefined8 *)(lVar1 + 0x18) = param_4;
  *(long *)(lVar1 + 0x20) = param_5;
  *(undefined8 *)(lVar1 + 0x28) = param_6;
  *(undefined8 *)(lVar1 + 0x30) = param_7;
  *(undefined8 *)(lVar1 + 0x38) = param_8;
  *(undefined8 *)(lVar1 + 0x48) = param_10;
  *(undefined8 *)(lVar1 + 0x40) = param_9;
  *(undefined8 *)(lVar1 + 0x50) = param_11;
  *(undefined8 *)(lVar1 + 0x58) = param_12;
  *(long *)(lVar1 + 0x88) = param_1;
  FUN_101132b70(param_13,lVar1 + 0x60);
  *(undefined8 *)(lVar1 + 0xa0) = param_14;
  func_0x000107c61174();
  func_0x000107c615f0(param_5);
  func_0x000107c61434(param_2);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
  lVar2 = param_5;
  func_0x000107c4e67c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  *(long *)(lVar1 + 0xc0) = lVar2;
  func_0x000107c61174();
  lVar3 = param_3;
  func_0x000107c4c3a4();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  lVar4 = lVar3;
  func_0x000107c5fc54(lVar3,PTR___sSSN_11034da80);
  func_0x000107c61170(lVar3);
  if (*(long *)(lVar4 + 0x10) == 0) {
    uVar7 = 0;
    uVar6 = 0xe000000000000000;
  }
  else {
    uVar7 = *(undefined8 *)(lVar4 + 0x20);
    uVar6 = *(undefined8 *)(lVar4 + 0x28);
    func_0x000107c61434(uVar6);
  }
  func_0x000107c6142c(lVar4);
  func_0x000107c5fadc(uVar7,uVar6);
  func_0x000107c6142c(uVar6);
  lVar3 = param_5;
  func_0x000107c4e67c();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c615e8(param_5);
  *(long *)(lVar1 + 200) = lVar3;
  if (lVar2 == 0) {
    func_0x000107c61174();
    func_0x0001000834e4(param_13);
    if (lVar3 == 0) {
      bVar5 = 1;
      goto LAB_101132b34;
    }
LAB_101132b28:
    bVar5 = 0;
  }
  else {
    if (lVar3 == 0) {
      func_0x0001000834e4(param_13);
      lVar3 = lVar2;
      goto LAB_101132b28;
    }
    FUN_101132f2c(0);
    func_0x000107c61174(lVar3);
    lVar4 = lVar2;
    func_0x000107c60118(lVar2,lVar3);
    bVar5 = (byte)lVar4;
    func_0x0001000834e4(param_13);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61170(lVar3);
LAB_101132b34:
  *(byte *)(lVar1 + 0xb8) = bVar5 & 1;
  return lVar1;
}



/* Entry: 101132b60; end: 101132b6f;  */

void FUN_101132b60(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    func_0x000107c61428(lVar4 + 0x60,auStack_98,0,0);
    FUN_101132b70(lVar4 + 0x60,auStack_80);
    func_0x000107c61574(lVar4);
    func_0x0001000a8868(auStack_80,uStack_68);
    (**(code **)(lStack_60 + 0x28))(uVar2,uVar1,uVar3,uVar5,uStack_68,lStack_60);
    func_0x0001000834e4(auStack_80);
  }
  return;
}



/* Entry: 101132b70; end: 101132bb3;  */

long FUN_101132b70(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101132bb4; end: 101132f0b;  */

/* WARNING: Possible PIC construction at 0x000101132bfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101132c74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101132d30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101132dc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101132eb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101132ecc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101132eb4) */
/* WARNING: Removing unreachable block (ram,0x000101132dc4) */
/* WARNING: Removing unreachable block (ram,0x000101132e14) */
/* WARNING: Removing unreachable block (ram,0x000101132dd0) */
/* WARNING: Removing unreachable block (ram,0x000101132e34) */
/* WARNING: Removing unreachable block (ram,0x000101132de4) */
/* WARNING: Removing unreachable block (ram,0x000101132dfc) */
/* WARNING: Removing unreachable block (ram,0x000101132d34) */
/* WARNING: Removing unreachable block (ram,0x000101132e58) */
/* WARNING: Removing unreachable block (ram,0x000101132d48) */
/* WARNING: Removing unreachable block (ram,0x000101132e88) */
/* WARNING: Removing unreachable block (ram,0x000101132e90) */
/* WARNING: Removing unreachable block (ram,0x000101132d58) */
/* WARNING: Removing unreachable block (ram,0x000101132ea4) */
/* WARNING: Removing unreachable block (ram,0x000101132eac) */
/* WARNING: Removing unreachable block (ram,0x000101132d64) */
/* WARNING: Removing unreachable block (ram,0x000101132d78) */
/* WARNING: Removing unreachable block (ram,0x000101132e00) */
/* WARNING: Removing unreachable block (ram,0x000101132e10) */
/* WARNING: Removing unreachable block (ram,0x000101132d7c) */
/* WARNING: Removing unreachable block (ram,0x000101132e84) */
/* WARNING: Removing unreachable block (ram,0x000101132d88) */
/* WARNING: Removing unreachable block (ram,0x000101132e80) */
/* WARNING: Removing unreachable block (ram,0x000101132d9c) */
/* WARNING: Removing unreachable block (ram,0x000101132c78) */
/* WARNING: Removing unreachable block (ram,0x000101132c88) */
/* WARNING: Removing unreachable block (ram,0x000101132c98) */
/* WARNING: Removing unreachable block (ram,0x000101132c9c) */
/* WARNING: Removing unreachable block (ram,0x000101132ca0) */
/* WARNING: Removing unreachable block (ram,0x000101132d14) */
/* WARNING: Removing unreachable block (ram,0x000101132d1c) */
/* WARNING: Removing unreachable block (ram,0x000101132ca8) */
/* WARNING: Removing unreachable block (ram,0x000101132cb0) */
/* WARNING: Removing unreachable block (ram,0x000101132cc8) */
/* WARNING: Removing unreachable block (ram,0x000101132cf0) */
/* WARNING: Removing unreachable block (ram,0x000101132ce0) */
/* WARNING: Removing unreachable block (ram,0x000101132c00) */
/* WARNING: Removing unreachable block (ram,0x000101132c1c) */
/* WARNING: Removing unreachable block (ram,0x000101132c20) */
/* WARNING: Removing unreachable block (ram,0x000101132d2c) */
/* WARNING: Removing unreachable block (ram,0x000101132c28) */
/* WARNING: Removing unreachable block (ram,0x000101132e7c) */
/* WARNING: Removing unreachable block (ram,0x000101132c34) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x000101132ed0) */

void FUN_101132bb4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4c3a4(uVar1);
  func_0x000107c61180();
  func_0x000107c5fc54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101132f0c; end: 101132f2b;  */

void FUN_101132f0c(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101132f2c; end: 101132f6f;  */

void FUN_101132f2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5ec90 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126bf100;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d5ec90 = puVar1;
  return;
}



/* Entry: 101132f70; end: 101132fef;  */

void FUN_101132f70(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 != 0) {
    uVar3 = 0;
    func_0x000101137284(0,0x112d5f6b8,&PTR_PTR_1126d5360);
    func_0x000107c5f9e8(param_2,PTR___sSSN_11034da80,uVar3,PTR___sSSSHsWP_11034da90);
  }
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101132ff0; end: 101133ebb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101132ff0(void)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  code *pcVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined *puVar18;
  char *pcVar19;
  long extraout_x8;
  long lVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  undefined **ppuVar24;
  long unaff_x20;
  undefined8 uVar25;
  long lVar26;
  ulong uVar27;
  undefined *puVar28;
  ulong uVar29;
  long lVar30;
  byte abStack_1b0 [16];
  long lStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  uint uStack_184;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined *puStack_128;
  ulong uStack_120;
  undefined *puStack_118;
  long lStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined *puStack_f8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  lVar9 = 0;
  func_0x000107c5eea4();
  lStack_160 = *(long *)(lVar9 + -8);
  lStack_158 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_160 + 0x40));
  lVar9 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar20 = (long)&lStack_1a0 + lVar9;
  uVar25 = *(undefined8 *)(unaff_x20 + _DAT_112d5f688);
  func_0x00010006c804();
  lStack_1a0 = _DAT_112d5f548;
  lStack_110 = *(long *)(unaff_x20 + _DAT_112d5f548);
  lStack_198 = _DAT_112d5f5a0;
  uStack_184 = (uint)*(byte *)(unaff_x20 + _DAT_112d5f5a0);
  func_0x000107c61174();
  uStack_190 = uVar25;
  func_0x000100070bfc();
  lVar26 = *(long *)(unaff_x20 + _DAT_112d5f4f0);
  lVar30 = lVar26;
  func_0x000107c3e884();
  func_0x000107c61180();
  lVar10 = lVar30;
  func_0x000107c5fc54();
  func_0x000107c61170(lVar30);
  lVar11 = *(long *)(unaff_x20 + _DAT_112d5f4e8);
  func_0x000107c4c3a4();
  func_0x000107c61180();
  lVar30 = lVar11;
  func_0x000107c5fc54();
  func_0x000107c61170(lVar11);
  uVar21 = *(ulong *)(lVar30 + 0x10);
  if (uVar21 == 0) {
    func_0x000107c6142c(lVar10);
    func_0x000107c6142c(lVar30);
    lVar9 = 0;
    puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    lStack_150 = 0;
    uVar29 = 0;
    lVar22 = *(long *)(unaff_x20 + _DAT_112d5f4f8);
    lVar11 = lVar30 + 0x20;
    lStack_130 = _DAT_112d5f5b8;
    lStack_168 = _DAT_112d5f5b0;
    uStack_120 = *(ulong *)(unaff_x20 + _DAT_112d5f518);
    puStack_128 = (undefined *)((ulong *)(unaff_x20 + _DAT_112d5f518))[1];
    uStack_178 = 2;
    uStack_180 = 1;
    puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lStack_148 = lVar10;
    lStack_140 = lVar30;
    lStack_138 = lVar26;
    do {
      if (*(ulong *)(lVar30 + 0x10) <= uVar29) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x101133d98);
        (*pcVar7)();
      }
      puVar1 = (ulong *)(lVar11 + uVar29 * 0x10);
      uVar17 = *puVar1;
      uVar4 = puVar1[1];
      func_0x000107c61434(uVar4);
      uVar23 = uVar17;
      func_0x000107c5fadc(uVar17,uVar4);
      lVar10 = lVar26;
      func_0x000107c4c39c();
      func_0x000107c61180();
      func_0x000107c61170(uVar23);
      if (lVar10 == 0) {
LAB_1011331f4:
        func_0x000107c6142c(uVar4);
      }
      else {
        uVar23 = uVar17;
        func_0x000107c5fadc(uVar17,uVar4);
        lVar12 = lVar22;
        func_0x000107c4e680();
        func_0x000107c61180();
        func_0x000107c61170(uVar23);
        if (lVar12 == 0) {
LAB_1011331ec:
          func_0x000107c61170(lVar10);
          goto LAB_1011331f4;
        }
        lVar30 = *(long *)(unaff_x20 + lStack_130);
        if ((lVar30 != 0) && (*(long *)(lVar30 + 0x10) != 0)) {
          func_0x000107c6068c(&puStack_b0,*(undefined8 *)(lVar30 + 0x28));
          func_0x000107c61434(lVar30);
          ppuVar24 = &puStack_b0;
          func_0x000107c5fb58(ppuVar24,uVar17,uVar4);
          func_0x000107c606a8();
          uVar23 = -1L << ((ulong)*(byte *)(lVar30 + 0x20) & 0x3f);
          uVar27 = (ulong)ppuVar24 & (uVar23 ^ 0xffffffffffffffff);
          if ((*(ulong *)(lVar30 + 0x38 + (uVar27 >> 6) * 8) >> (uVar27 & 0x3f) & 1) != 0) {
            do {
              puVar1 = (ulong *)(*(long *)(lVar30 + 0x30) + uVar27 * 0x10);
              uVar13 = *puVar1;
              uVar5 = puVar1[1];
              if ((uVar13 == uVar17 && uVar5 == uVar4) ||
                 (func_0x000107c605b8(uVar13,uVar5,uVar17,uVar4,0), (uVar13 & 1) != 0)) {
                func_0x000107c6142c(lVar30);
                func_0x000107c61170(lVar12);
                lVar26 = lStack_138;
                lVar30 = lStack_140;
                goto LAB_1011331ec;
              }
              uVar27 = uVar27 + 1 & ~uVar23;
            } while ((*(ulong *)(lVar30 + 0x38 + (uVar27 >> 6) * 8) >> (uVar27 & 0x3f) & 1) != 0);
          }
          func_0x000107c6142c(lVar30);
        }
        if (lStack_110 == 0) {
          func_0x00010006c804();
          func_0x000107c61174(lVar12);
          func_0x000100070bfc();
          lStack_110 = lVar12;
        }
        puVar14 = (undefined *)0x6565735f7473616c;
        puStack_f8 = puVar18;
        func_0x000107c5fadc(0x6565735f7473616c,0xee00657265685f6e);
        uVar27 = 0x6569567375636f46;
        func_0x000107c5fadc(0x6569567375636f46,0xe900000000000077);
        uVar25 = 0;
        func_0x000107c5fe40(0);
        puVar18 = puVar14;
        uVar23 = uVar27;
        func_0x0001000f6108(puVar14,uVar27,uVar25);
        func_0x000107c61180();
        func_0x000107c61170(puVar14);
        func_0x000107c61170(uVar27);
        func_0x000107c61170(uVar25);
        if (puVar18 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x101133ebc);
          (*pcVar7)();
        }
        puVar14 = puVar18;
        func_0x000107c5faec();
        func_0x000107c61170(puVar18);
        lVar30 = 0x112d36008;
        func_0x0001000285a8(0x112d36008,&UNK_10d900720);
        uVar25 = 0x48;
        func_0x000107c613fc();
        *(undefined8 *)(lVar30 + 0x18) = uStack_178;
        *(undefined8 *)(lVar30 + 0x10) = uStack_180;
        lVar26 = lVar12;
        func_0x000107c41324(lVar12);
        func_0x000107c61180();
        func_0x000107c5ee94(lVar20);
        func_0x000107c61170(lVar26);
        puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x000107c61168();
        puVar28 = puVar18;
        func_0x000107c5ee70();
        func_0x000107c43874(0x404e000000000000);
        func_0x000107c61180();
        func_0x000107c61170(puVar28);
        uStack_108 = uVar29;
        if (puVar18 == (undefined *)0x0) {
          puVar28 = (undefined *)0x0;
          uVar25 = 0xe000000000000000;
        }
        else {
          puVar28 = puVar18;
          func_0x000107c5faec();
          func_0x000107c61170(puVar18);
        }
        lVar26 = lVar20;
        (**(code **)(lStack_160 + 8))(lVar20,lStack_158);
        *(undefined **)(lVar30 + 0x38) = PTR___sSSN_11034da80;
        func_0x00010075bbf0();
        *(long *)(lVar30 + 0x40) = lVar26;
        *(undefined **)(lVar30 + 0x20) = puVar28;
        *(undefined8 *)(lVar30 + 0x28) = uVar25;
        uVar13 = uVar23;
        func_0x000107c5fb00(puVar14,uVar23,lVar30);
        func_0x000107c6142c(uVar23);
        uVar25 = 1;
        lVar30 = lVar22;
        FUN_101143528(lVar22,1);
        puVar1 = (ulong *)(lVar10 + _DAT_112fcd610);
        uVar29 = *puVar1;
        uVar23 = puVar1[1];
        uVar27 = uVar17;
        FUN_10111efa0(uVar17,uVar4);
        puVar28 = PTR_PTR_1126a63b0;
        func_0x000107c610f8();
        func_0x000107c5fadc(lVar30,uVar25);
        func_0x000107c6142c(uVar25);
        puStack_118 = puVar14;
        uStack_100 = uVar13;
        func_0x000107c5fadc(puVar14,uVar13);
        func_0x000107c5fadc(uVar29,uVar23);
        abStack_1b0[lVar9 + 1] = (byte)uVar27 & 1;
        abStack_1b0[lVar9] = 0;
        puVar18 = puVar14;
        func_0x000107c465e4();
        func_0x000107c61170(lVar30);
        func_0x000107c61170(puVar14);
        func_0x000107c61170(uVar29);
        uVar29 = *puVar1;
        if (((uVar29 == uStack_120) && ((undefined *)puVar1[1] == puStack_128)) ||
           (puVar18 = puStack_128,
           func_0x000107c605b8(uVar29,(undefined *)puVar1[1],uStack_120,puStack_128,0),
           (uVar29 & 1) != 0)) {
          uStack_184 = 1;
          func_0x000107c55818(puVar28);
        }
        lVar30 = lVar12;
        func_0x000107c3cf1c(lVar12);
        func_0x000107c61180();
        lVar15 = 0;
        ppuVar24 = &PTR_PTR_1126bf310;
        func_0x000101137284(0,0x112d5ecd0,&PTR_PTR_1126bf310);
        lVar26 = lVar30;
        func_0x000107c5fc54(lVar30);
        func_0x000107c61170(lVar30);
        func_0x0001026ea7b8(lVar26);
        uVar23 = uStack_100;
        uVar29 = uStack_108;
        if (lVar15 != 0) {
          func_0x000107c5fadc();
          func_0x000107c57338(puVar28);
          func_0x000107c61170(lVar26);
          if (puVar18 == (undefined *)0x0) {
            ppuVar24 = (undefined **)0x0;
          }
          else {
            func_0x000107c61434(puVar18);
            func_0x000107c5fadc(ppuVar24,puVar18);
            func_0x000107c61430(puVar18,2);
          }
          func_0x000107c6142c(lVar15);
          func_0x000107c57340(puVar28);
          func_0x000107c61170(ppuVar24);
        }
        lVar30 = ((undefined8 *)(lVar10 + _DAT_112fcd628))[1];
        if (lVar30 == 0) {
          uVar25 = 0;
        }
        else {
          uVar25 = *(undefined8 *)(lVar10 + _DAT_112fcd628);
          func_0x000107c61434(lVar30);
          func_0x000107c5fadc(uVar25,lVar30);
          func_0x000107c6142c(lVar30);
        }
        func_0x000107c52ae0(puVar28);
        func_0x000107c61170(uVar25);
        lVar30 = ((undefined8 *)(lVar10 + _DAT_112fcd630))[1];
        if (lVar30 == 0) {
          uVar25 = 0;
        }
        else {
          uVar25 = *(undefined8 *)(lVar10 + _DAT_112fcd630);
          func_0x000107c61434(lVar30);
          func_0x000107c5fadc(uVar25,lVar30);
          func_0x000107c6142c(lVar30);
        }
        func_0x000107c58e54(puVar28);
        func_0x000107c61170(uVar25);
        lVar30 = lStack_168;
        func_0x000107c61428(unaff_x20 + lStack_168,&puStack_b0,0x20,0);
        lVar30 = *(long *)(unaff_x20 + lVar30);
        if (*(long *)(lVar30 + 0x10) != 0) {
          func_0x000107c61434(lVar30);
          func_0x000100029284();
          func_0x000107c6142c(lVar30);
        }
        func_0x000107c614a8(&puStack_b0);
        func_0x000107c5557c(puVar28);
        uVar27 = uVar4;
        FUN_101134108(uVar17);
        puVar18 = puVar28;
        func_0x000107c591a8();
        func_0x000106875094();
        func_0x000107c61180();
        if (puVar18 != (undefined *)0x0) {
          puVar14 = puVar18;
          func_0x000107c5faec();
          func_0x000107c61170(puVar18);
          if ((puStack_118 != puVar14) || (uVar23 != uVar27)) {
            func_0x000107c605b8(puStack_118,uVar23,puVar14,uVar27,0);
          }
          func_0x000107c6142c(uVar23);
          uVar23 = uVar27;
        }
        func_0x000107c6142c(uVar23);
        func_0x000107c55810(puVar28);
        func_0x000107c61174();
        puVar18 = puStack_f8;
        puVar14 = puStack_f8;
        func_0x000107c61550();
        if ((((int)puVar14 == 0) || ((long)puVar18 < 0)) ||
           (puVar14 = puVar18, ((ulong)puVar18 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar18 >> 0x3e == 0) {
            puVar16 = *(undefined **)(((ulong)puVar18 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar16 = (undefined *)((ulong)puVar18 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar18) {
              puVar16 = puVar18;
            }
            func_0x000107c60480(puVar16);
          }
          puVar14 = (undefined *)0x0;
          FUN_101136c20(0,puVar16 + 1,1,puVar18,0x101145674,0x112d5ec98,&PTR_PTR_1126a63b0,
                        FUN_101136e68);
        }
        uVar27 = (ulong)puVar14 & 0xffffffffffffff8;
        uVar23 = *(ulong *)(uVar27 + 0x10);
        puVar18 = puVar14;
        if (*(ulong *)(uVar27 + 0x18) >> 1 <= uVar23) {
          puVar18 = (undefined *)(ulong)(1 < *(ulong *)(uVar27 + 0x18));
          FUN_101136c20(puVar18,uVar23 + 1,1,puVar14,0x101145674,0x112d5ec98,&PTR_PTR_1126a63b0,
                        FUN_101136e68);
          uVar27 = (ulong)puVar18 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar27 + 0x10) = uVar23 + 1;
        *(undefined **)(uVar27 + uVar23 * 8 + 0x20) = puVar28;
        func_0x000100077018(uVar17,uVar4,lStack_148);
        func_0x000107c6142c(uVar4);
        func_0x000107c61170(lVar10);
        func_0x000107c61170(puVar28);
        func_0x000107c61170(lVar12);
        lVar26 = lStack_138;
        lVar30 = lStack_140;
        if (((uVar17 & 1) != 0) &&
           (bVar8 = SCARRY8(lStack_150,1), lStack_150 = lStack_150 + 1, bVar8)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x101133d9c);
          (*pcVar7)();
        }
      }
      uVar29 = uVar29 + 1;
    } while (uVar29 != uVar21);
    func_0x000107c6142c(lStack_148);
    func_0x000107c6142c(lVar30);
    lVar9 = lStack_150;
    if (lStack_150 < 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x101133aac);
      (*pcVar7)();
    }
  }
  plVar2 = (long *)(unaff_x20 + _DAT_112d5f638);
  *plVar2 = lVar9;
  *(undefined1 *)(plVar2 + 1) = 0;
  if ((ulong)puVar18 >> 0x3e == 0) {
    puVar14 = *(undefined **)(((ulong)puVar18 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar14 = (undefined *)((ulong)puVar18 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar18) {
      puVar14 = puVar18;
    }
    func_0x000107c60480();
  }
  if ((long)puVar14 < 1) {
    lVar9 = unaff_x20 + _DAT_112d5f538;
    func_0x000107c61618();
    if (lVar9 == 0) {
      func_0x000107c6142c(puVar18);
      lVar9 = lStack_110;
    }
    else {
      pcVar19 = "shouldCloseGroupFocusView()";
      func_0x0001000c10c0("shouldCloseGroupFocusView()");
      func_0x000107c61180();
      puVar14 = &UNK_1103875b0;
      func_0x000107c613fc(&UNK_1103875b0,0x18,7);
      func_0x000107c61644(puVar14 + 0x10,lVar9);
      uStack_90 = 0x1011372f0;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0x42000000;
      puStack_a0 = &UNK_1000f6b44;
      puStack_98 = &UNK_1103875f0;
      ppuVar24 = &puStack_b0;
      puStack_88 = puVar14;
      func_0x000107c60bc4(ppuVar24);
      func_0x000107c61574(puStack_88);
      func_0x000107c4e524(pcVar19);
      func_0x000107c60bd0(ppuVar24);
      func_0x000107c6142c(puVar18);
      func_0x000107c615e8(lVar9);
      func_0x000107c615e8(pcVar19);
      lVar9 = lStack_110;
    }
  }
  else {
    uVar25 = *(undefined8 *)(unaff_x20 + _DAT_112d5f5a8);
    *(undefined **)(unaff_x20 + _DAT_112d5f5a8) = puVar18;
    func_0x000107c6142c(uVar25);
    func_0x000107c61434(puVar18);
    FUN_101134210();
    puVar28 = PTR_PTR_1126a6408;
    func_0x000107c610f8();
    uVar25 = 0;
    func_0x000101137284(0,0x112d5ec98,&PTR_PTR_1126a63b0);
    puVar14 = puVar18;
    func_0x000107c5fc48(puVar18,uVar25);
    func_0x000107c46a08();
    func_0x000107c61170(puVar14);
    func_0x00010006c804();
    lVar30 = lStack_110;
    uVar25 = *(undefined8 *)(unaff_x20 + lStack_1a0);
    *(long *)(unaff_x20 + lStack_1a0) = lStack_110;
    lVar9 = lStack_110;
    func_0x000107c61174(lStack_110);
    func_0x000107c61170(uVar25);
    uVar6 = uStack_184;
    *(byte *)(unaff_x20 + lStack_198) = (byte)uStack_184 & 1;
    uVar25 = *(undefined8 *)(unaff_x20 + _DAT_112d5f5e8);
    *(undefined **)(unaff_x20 + _DAT_112d5f5e8) = puVar28;
    func_0x000107c61174(puVar28);
    func_0x000107c61170(uVar25);
    func_0x000100070bfc();
    pcVar19 = "updateViewModel()";
    func_0x0001000c10c0("updateViewModel()");
    func_0x000107c61180();
    puVar14 = &UNK_110387628;
    func_0x000107c613fc(&UNK_110387628,0x18,7);
    func_0x000107c61614(puVar14 + 0x10,unaff_x20);
    uStack_90 = 0x1011361c8;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_1000f6b44;
    puStack_98 = &UNK_110387640;
    ppuVar24 = &puStack_b0;
    puStack_88 = puVar14;
    func_0x000107c60bc4(ppuVar24);
    func_0x000107c61574(puStack_88);
    func_0x000107c4e524(pcVar19);
    func_0x000107c60bd0(ppuVar24);
    func_0x000107c615e8(pcVar19);
    func_0x000107c4d664(*(undefined8 *)(unaff_x20 + _DAT_112d5f510));
    if ((uVar6 & 1) == 0 && lVar30 != 0) {
      puVar14 = &UNK_110387628;
      puVar16 = puVar14;
      func_0x000107c613fc(&UNK_110387628,0x18,7);
      func_0x000107c61614(puVar16 + 0x10,unaff_x20);
      func_0x000107c613fc(&UNK_110387628,0x18,7);
      func_0x000107c61614(puVar14 + 0x10,unaff_x20);
      lVar30 = lVar9;
      func_0x000107c61174(lVar9);
      func_0x000107c6157c(puVar16);
      func_0x000107c6157c(puVar14);
      FUN_10111f060(lVar30,0x1011361d0,puVar16,0x1011361d8,puVar14);
      func_0x000107c61170(lVar30);
      func_0x000107c61578(puVar16,2);
      func_0x000107c61578(puVar14,2);
    }
    else {
      puVar3 = (undefined8 *)(unaff_x20 + _DAT_112d5f640);
      *puVar3 = 0;
      *(undefined1 *)(puVar3 + 1) = 0;
      puVar3 = (undefined8 *)(unaff_x20 + _DAT_112d5f648);
      *puVar3 = 0;
      *(undefined1 *)(puVar3 + 1) = 0;
    }
    FUN_101133ebc();
    func_0x000107c6142c(puVar18);
    func_0x000107c61170(puVar28);
  }
  func_0x000107c61170(lVar9);
  return;
}



/* Entry: 101133ebc; end: 101134107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101133ebc(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  
  lVar2 = _DAT_112d5f650;
  if ((((((*(byte *)(unaff_x20 + _DAT_112d5f650) & 1) == 0) &&
        (*(char *)(unaff_x20 + _DAT_112d5f640 + 8) != '\x01')) &&
       (*(char *)(unaff_x20 + _DAT_112d5f648 + 8) != '\x01')) &&
      ((*(char *)(unaff_x20 + _DAT_112d5f638 + 8) != '\x01' &&
       (*(char *)(unaff_x20 + _DAT_112d5f630 + 8) != '\x01')))) &&
     (*(char *)(unaff_x20 + _DAT_112d5f620 + 8) != '\x01')) {
    lVar4 = *(long *)(unaff_x20 + _DAT_112d5f5f8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 != 0) {
      cVar1 = *(char *)(unaff_x20 + _DAT_112d5f5a0);
      lVar7 = *(long *)(unaff_x20 + _DAT_112d5f4e8);
      lVar6 = lVar7;
      func_0x000107c4c3a4();
      func_0x000107c61180();
      lVar5 = lVar6;
      func_0x000107c5fc54();
      func_0x000107c61170(lVar6);
      lVar6 = *(long *)(lVar5 + 0x10);
      func_0x000107c6142c(lVar5);
      if ((cVar1 == '\x01') && (lVar6 == 0)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101134108);
        (*pcVar3)();
      }
      lVar6 = lVar7;
      func_0x000107c4c3a4(lVar7);
      func_0x000107c61180();
      lVar5 = lVar6;
      func_0x000107c5fc54();
      func_0x000107c61170(lVar6);
      lVar6 = lVar5;
      FUN_10102c3b8(lVar5);
      func_0x000107c6142c(lVar5);
      lVar5 = lVar6;
      func_0x000107c5fc48(lVar6,PTR___sypN_11034f1a8 + 8);
      func_0x000107c6142c(lVar6);
      func_0x000107c5ea20(lVar7);
      func_0x000107c5b634();
      func_0x000107c5b674();
      func_0x000107c61180();
      func_0x000107c5d388();
      func_0x000107c61170(lVar7);
      func_0x000107c4bca8(param_1,lVar4);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(lVar5);
    }
    *(undefined1 *)(unaff_x20 + lVar2) = 1;
  }
  return;
}



/* Entry: 101134108; end: 10113420f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101134108(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  long unaff_x20;
  long lVar5;
  
  puVar1 = PTR_PTR_1126c7238;
  func_0x000107c61168(PTR_PTR_1126c7238);
  func_0x000107c5fadc(param_1,param_2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d5f518);
  func_0x000107c5fadc(uVar2,((undefined8 *)(unaff_x20 + _DAT_112d5f518))[1]);
  lVar5 = *(long *)(unaff_x20 + _DAT_112d5f5d0);
  func_0x000107c4b920(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c4ec80();
  func_0x000107c61180();
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    lVar3 = lVar5;
    func_0x000107c443c8();
    func_0x00010601db50(puVar1);
    func_0x000107c61170(lVar5);
    uVar4 = ((uint)puVar1 | (uint)lVar3) ^ 1;
  }
  return uVar4 & 1;
}



/* Entry: 101134210; end: 10113431f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101134210(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d5f500);
  lVar1 = *(long *)(unaff_x20 + _DAT_112d5f4e8);
  func_0x000107c4c3a4();
  func_0x000107c61180();
  lVar2 = lVar1;
  if (lVar1 == 0) {
    func_0x000107c5fc54();
    lVar2 = lVar1;
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
  puVar3 = &UNK_110387628;
  func_0x000107c613fc(&UNK_110387628,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  pcStack_40 = FUN_101137158;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_101132f70;
  puStack_48 = &UNK_110387690;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c5c070(uVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 101134320; end: 101134433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101134320(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  puVar2 = (undefined *)(param_1 + 0x10);
  func_0x000107c61618();
  if (puVar2 != (undefined *)0x0) {
    lVar3 = *(long *)(puVar2 + _DAT_112d5f4e8);
    func_0x000107c44520();
    func_0x000107c61180();
    lVar1 = _DAT_112d5f5e8;
    puVar5 = puVar2;
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(puVar2 + _DAT_112d5f5e8);
      func_0x000107c61174(uVar4);
      func_0x000107c54f50();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(lVar3);
      uVar4 = *(undefined8 *)(puVar2 + lVar1);
      func_0x000107c61174(uVar4);
      func_0x000107c44534();
      puVar5 = PTR___sSiN_11034deb0;
      puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar6);
      func_0x000107c54f54(uVar4);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(uVar4);
    }
    func_0x000107c61170(puVar5);
  }
  return;
}



/* Entry: 101134434; end: 101134523;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101134434(undefined8 param_1,char param_2,undefined8 param_3,char param_4,long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (param_2 != '\x01') {
    func_0x000107c61428(param_5 + 0x10,auStack_78,0,0);
    lVar2 = param_5 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      puVar1 = (undefined8 *)(lVar2 + _DAT_112d5f640);
      *puVar1 = param_1;
      *(undefined1 *)(puVar1 + 1) = 0;
      func_0x000107c61170();
    }
  }
  if (param_4 != '\x01') {
    func_0x000107c61428(param_5 + 0x10,auStack_60,0,0);
    lVar2 = param_5 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      puVar1 = (undefined8 *)(lVar2 + _DAT_112d5f648);
      *puVar1 = param_3;
      *(undefined1 *)(puVar1 + 1) = 0;
      func_0x000107c61170();
    }
  }
  func_0x000107c61428(param_5 + 0x10,auStack_48,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61618();
  if (param_5 != 0) {
    FUN_101133ebc();
    func_0x000107c61170(param_5);
  }
  return;
}



/* Entry: 101134524; end: 10113457f;  */

void FUN_101134524(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_101134580(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101134580; end: 101134ef7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101134580(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  undefined1 *puVar17;
  long unaff_x20;
  code *pcVar18;
  long lVar19;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  long lStack_98;
  undefined1 auStack_88 [40];
  
  func_0x0001011371cc(unaff_x20 + _DAT_112d5f670,auStack_b0,0x112d5ece0,&UNK_10d925bf0);
  if (lStack_98 == 0) {
    FUN_101136f84(auStack_b0);
  }
  else {
    puVar15 = auStack_88;
    FUN_10111d660(auStack_b0);
    puVar17 = *(undefined1 **)(param_1 + _DAT_112fa97b8);
    if ((ulong)puVar17 >> 0x3e == 0) {
      puVar6 = *(undefined1 **)(((ulong)puVar17 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar6 = (undefined1 *)((ulong)puVar17 & 0xffffffffffffff8);
      if ((undefined1 *)0x7fffffffffffffff < puVar17) {
        puVar6 = puVar17;
      }
      func_0x000107c60480();
    }
    if (puVar6 == (undefined1 *)0x0) {
      func_0x0001000834e4(auStack_88);
    }
    else {
      if (((ulong)puVar17 & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)puVar17 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x101134958);
          (*pcVar18)();
        }
        lVar7 = *(long *)(puVar17 + 0x20);
        func_0x000107c61174();
        puVar17 = puVar15;
      }
      else {
        lVar7 = 0;
        FUN_10111c37c();
      }
      lVar8 = *(long *)(lVar7 + _DAT_112fa9758);
      func_0x000107c61174();
      func_0x000107c61170(lVar7);
      uVar12 = *(undefined8 *)(lVar8 + _DAT_112fa98b0);
      uVar3 = ((undefined8 *)(lVar8 + _DAT_112fa98b0))[1];
      func_0x000107c61434(uVar3);
      func_0x000107c61170(lVar8);
      lVar8 = *(long *)(unaff_x20 + _DAT_112d5f4e8);
      lVar7 = lVar8;
      func_0x000107c3eca0();
      func_0x000107c61180();
      if (lVar7 == 0) {
        func_0x0001000834e4(auStack_88);
      }
      else {
        lVar9 = lVar7;
        func_0x000107c5faec();
        func_0x000107c61170(lVar7);
        plVar1 = (long *)(unaff_x20 + _DAT_112d5f678);
        lVar7 = *plVar1;
        if (lVar7 != 0) {
          lVar19 = plVar1[1];
          lVar10 = lVar7;
          func_0x000107c614f0(lVar7);
          pcVar18 = *(code **)(lVar19 + 8);
          func_0x000107c615f0(lVar7);
          (*pcVar18)(lVar10,lVar19);
          func_0x000107c615e8(lVar7);
        }
        lVar7 = *(long *)(unaff_x20 + _DAT_112d5f4f8);
        uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d5f518);
        uVar4 = ((undefined8 *)(unaff_x20 + _DAT_112d5f518))[1];
        uVar11 = uVar2;
        func_0x000107c5fadc(uVar2,uVar4);
        func_0x000107c4e680();
        func_0x000107c61180();
        func_0x000107c61170(uVar11);
        if (lVar7 == 0) {
          func_0x0001000834e4(auStack_88);
          func_0x000107c6142c(uVar3);
          func_0x000107c6142c(puVar17);
          return;
        }
        lVar10 = lVar7;
        func_0x000107c5bd58();
        func_0x000107c61180();
        if ((lVar10 != 0) &&
           (cVar5 = *(char *)(lVar10 + _DAT_1130728a0), func_0x000107c61170(), cVar5 != '\x01')) {
          func_0x000107c4c3a4();
          func_0x000107c61180();
          lVar10 = lVar8;
          func_0x000107c5fc54();
          func_0x000107c61170(lVar8);
          lVar19 = lVar10;
          func_0x000100403a6c();
          func_0x000107c6142c(lVar10);
          func_0x000107c61434(uVar4);
          func_0x000100403b00(auStack_b0,uVar2,uVar4);
          func_0x000107c6142c(uStack_a8);
          func_0x000102660d54(0);
          func_0x00010265f298(uVar12,uVar3);
          func_0x000107c6142c(uVar3);
          plVar13 = (long *)0x1;
          func_0x00010061b458();
          FUN_101132b70(auStack_88,auStack_b0);
          puVar14 = &UNK_110387678;
          func_0x000107c613fc(&UNK_110387678,0x58,7);
          FUN_10111d660(auStack_b0,puVar14 + 0x10);
          *(undefined8 *)(puVar14 + 0x38) = uVar12;
          *(long *)(puVar14 + 0x40) = lVar9;
          *(undefined1 **)(puVar14 + 0x48) = puVar17;
          *(long *)(puVar14 + 0x50) = lVar19;
          pcVar18 = *(code **)(*plVar13 + 0x68);
          func_0x000107c61434(lVar19);
          lVar8 = 0x1011370ec;
          puVar16 = puVar14;
          (*pcVar18)();
          func_0x000107c6142c(lVar19);
          func_0x000107c61574(plVar13);
          func_0x000107c61574(puVar14);
          func_0x000107c61170(lVar7);
          func_0x0001000834e4(auStack_88);
          lVar7 = *plVar1;
          *plVar1 = lVar8;
          plVar1[1] = (long)puVar16;
          func_0x000107c615e8(lVar7);
          return;
        }
        func_0x0001000834e4(auStack_88);
        func_0x000107c61170(lVar7);
        func_0x000107c6142c(puVar17);
      }
      func_0x000107c6142c(uVar3);
    }
  }
  return;
}



/* Entry: 101134ef8; end: 10113520b;  */

/* WARNING: Possible PIC construction at 0x000101134fc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101134fe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011351c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101134fe4) */
/* WARNING: Removing unreachable block (ram,0x000101134fc4) */
/* WARNING: Removing unreachable block (ram,0x0001011351c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101134ef8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112d5f4e8));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + _DAT_112d5f4f0));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + _DAT_112d5f4f8));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + _DAT_112d5f500));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + _DAT_112d5f508));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112d5f510));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + _DAT_112d5f518 + 8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112d5f520));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112d5f528));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112d5f530));
  func_0x0001011371a8(unaff_x20 + _DAT_112d5f538);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + _DAT_112d5f540));
  return;
}



/* Entry: 10113520c; end: 1011354f7; -[_TtC32MapFriendFocusViewImplementation27GroupFocusViewBusinessLogic .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011352dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011352fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011354dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101135300) */
/* WARNING: Removing unreachable block (ram,0x0001011352e0) */
/* WARNING: Removing unreachable block (ram,0x0001011354e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10113520c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d5f4e8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d5f4f0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d5f4f8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d5f500));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d5f508));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d5f510));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d5f518 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d5f520));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d5f528));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d5f530));
  func_0x0001011371a8(param_1 + _DAT_112d5f538);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d5f540));
  return;
}



/* Entry: 1011354f8; end: 101135517;  */

void FUN_1011354f8(void)

{
  func_0x000107c61168(&PTR_PTR_1127b0998);
  return;
}



/* Entry: 101135518; end: 101135643;  */

void FUN_101135518(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  puVar3 = &UNK_110387718;
  func_0x000107c613fc(&UNK_110387718,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  puVar4 = &UNK_110387740;
  func_0x000107c613fc(&UNK_110387740,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_101137168;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  uStack_50 = 0x101137188;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_10006eb60;
  puStack_58 = &UNK_110387758;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c4c6e4(param_1);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x76,0x321,0x47,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101135644);
  (*pcVar2)();
}



/* Entry: 101135644; end: 101135693; -[_TtC32MapFriendFocusViewImplementation27GroupFocusViewBusinessLogic didUpdateSummaryInfo:] */

/* WARNING: Possible PIC construction at 0x00010113567c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101135680) */

void FUN_101135644(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101135518(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101135694; end: 1011356db; -[_TtC32MapFriendFocusViewImplementation27GroupFocusViewBusinessLogic createChatScopeWantsToDismiss:] */

void FUN_101135694(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c5d17c();
  func_0x000107c61180();
  func_0x000107c41864();
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1011356dc; end: 101135727; -[_TtC32MapFriendFocusViewImplementation27GroupFocusViewBusinessLogic createChatScopeDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011356dc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d5f520);
  func_0x000107c61174();
  func_0x000107c4ffe8(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 101135728; end: 101135817;  */

void FUN_101135728(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  func_0x000107c5d17c();
  func_0x000107c61180();
  puVar1 = &UNK_110387628;
  func_0x000107c613fc(&UNK_110387628,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_1103876c8;
  func_0x000107c613fc(&UNK_1103876c8,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  uStack_40 = 0x101137160;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000b0c7c;
  puStack_48 = &UNK_1103876e0;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c41864(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 101135818; end: 10113595f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101135818(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar5 = *(long *)(lVar1 + _DAT_112d5f560);
    lVar2 = lVar5;
    func_0x000107c61174(lVar5);
    func_0x000107c61170(lVar1);
    if (lVar5 != 0) {
      func_0x000107c61428(param_1 + 0x10,auStack_70,0,0);
      param_1 = param_1 + 0x10;
      func_0x000107c61618();
      if (param_1 != 0) {
        func_0x000104523254(0);
        func_0x000107c610f8();
        uVar3 = 8;
        func_0x000104522fdc(8,0,1);
        puVar4 = PTR_PTR_1126b3530;
        func_0x000107c610f8(PTR_PTR_1126b3530);
        func_0x000107c4807c();
        func_0x000104520f00(param_2,uVar3,param_1,puVar4);
        func_0x000107c42c1c(*(undefined8 *)(param_1 + _DAT_112d5f528));
        func_0x000107c61170(param_1);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(puVar4);
        lVar2 = param_2;
      }
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 101135960; end: 1011359cb; -[_TtC32MapFriendFocusViewImplementation27GroupFocusViewBusinessLogic createChatScope:wantsToDismissWithNewChat:] */

/* WARNING: Possible PIC construction at 0x0001011359ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011359b0) */

void FUN_101135960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_101135728(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1011359cc; end: 101135a37; -[_TtC32MapFriendFocusViewImplementation27GroupFocusViewBusinessLogic chatScopeDidDismiss:] */

/* WARNING: Possible PIC construction at 0x000101135a08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101135a0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011359cc(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101135a38; end: 101135b57;  */

/* WARNING: Possible PIC construction at 0x000101135ab4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101135ab8) */
/* WARNING: Removing unreachable block (ram,0x000101135ae0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101135a38(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d5f530);
    func_0x000107c61174();
    uVar1 = uVar3;
    func_0x000107c49d24();
    if ((int)uVar1 != 0) {
      if (*(long *)(unaff_x20 + _DAT_112d5f5b8) == 0) {
        func_0x000107c4ffec(uVar3);
        func_0x000107c61180();
        func_0x000107c615e8();
        FUN_101132ff0();
        lVar2 = unaff_x20 + _DAT_112d5f538;
        func_0x000107c61618();
        if (lVar2 != 0) {
          FUN_101140a30();
          func_0x000107c615e8(lVar2);
        }
      }
      else {
        func_0x000107c61434(*(long *)(unaff_x20 + _DAT_112d5f5b8));
        func_0x000107c4c3a0(param_1);
        func_0x000107c61180();
        func_0x000107c5faec();
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 101135b58; end: 101135cc3; -[_TtC32MapFriendFocusViewImplementation27GroupFocusViewBusinessLogic focusViewScopeDidDismiss:] */

/* WARNING: Possible PIC construction at 0x000101135b94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101135b98) */

void FUN_101135b58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101135a38(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101135cc4; end: 101135ceb; -[_TtC32MapFriendFocusViewImplementation27GroupFocusViewBusinessLogic wantsToOpenBitmojiBuilder] */

void FUN_101135cc4(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000101135bac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101135cec; end: 101135d3f; -[_TtC32MapFriendFocusViewImplementation27GroupFocusViewBusinessLogic onFriendFocusViewTrayRestored] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101135cec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112d5f4e8);
  func_0x000107c61174();
  func_0x000107c4168c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4dc18();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101135d40; end: 101135d93; -[_TtC32MapFriendFocusViewImplementation27GroupFocusViewBusinessLogic wantsToShowBitmojiTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101135d40(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112d5f4e8);
  func_0x000107c61174();
  func_0x000107c4168c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5e0c4();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101135d94; end: 101135da3; -[_TtC32MapFriendFocusViewImplementation27GroupFocusViewBusinessLogic permissionsManagerWantsToPresentPermissionsPrompt:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101135d94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112d5f608),PTR_s_attachUI__1125a0c08);
  return;
}



/* Entry: 101135da4; end: 101135e27; -[_TtC32MapFriendFocusViewImplementation27GroupFocusViewBusinessLogic didEndSnapshot] */

/* WARNING: Possible PIC construction at 0x000101135de0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101135dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101135de4) */
/* WARNING: Removing unreachable block (ram,0x000101135e00) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101135da4(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101135e28; end: 101135efb;  */

long FUN_101135e28(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101135efc; end: 101135f0f;  */

/* WARNING: Possible PIC construction at 0x000101135f8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101135f90) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */

void FUN_101135efc(undefined8 *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 3);
  if (bVar1 < 4) {
    if (bVar1 < 2) {
      if ((bVar1 != 0) && (bVar1 != 1)) {
        return;
      }
    }
    else if ((bVar1 != 2) && (bVar1 != 3)) {
      return;
    }
  }
  else if (bVar1 < 6) {
    if ((bVar1 != 4) && (bVar1 != 5)) {
      return;
    }
  }
  else if (((bVar1 != 6) && (bVar1 != 7)) && (bVar1 != 8)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1,param_1[1],param_1[2]);
  return;
}



/* Entry: 101135f10; end: 101135fb7;  */

/* WARNING: Possible PIC construction at 0x000101135f8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101135f90) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */

void FUN_101135f10(void)

{
  byte in_w3;
  
  if (in_w3 < 4) {
    if (in_w3 < 2) {
      if ((in_w3 != 0) && (in_w3 != 1)) {
        return;
      }
    }
    else if ((in_w3 != 2) && (in_w3 != 3)) {
      return;
    }
  }
  else if (in_w3 < 6) {
    if ((in_w3 != 4) && (in_w3 != 5)) {
      return;
    }
  }
  else if (((in_w3 != 6) && (in_w3 != 7)) && (in_w3 != 8)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101135fb8; end: 10113607f;  */

undefined8 * FUN_101135fb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  func_0x000101135e54(uVar1,uVar2,uVar4,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar3;
  return param_1;
}



/* Entry: 101136080; end: 1011360cb;  */

undefined8 * FUN_101136080(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[2] = uVar6;
  uVar4 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar3;
  FUN_101135f10(uVar5,uVar1,uVar2,uVar4);
  return param_1;
}



/* Entry: 1011360cc; end: 101136207;  */

int FUN_1011360cc(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf6 < param_2) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 0xf7;
  }
  uVar1 = *(byte *)(param_1 + 6) ^ 0xff;
  if (*(byte *)(param_1 + 6) < 10) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101136208; end: 1011364cf;  */

void FUN_101136208(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8();
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_1011362d4;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c61174(uVar12);
        if (uVar8 != 0) break;
LAB_1011362d4:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101136368);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_101136340;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_101136340:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 1011364d0; end: 1011364f7;  */

void FUN_1011364d0(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  uVar6 = 0x112d5f6c8;
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(0x112d5f6c8,&UNK_10dac6110);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_101136758:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101136788);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_101136758;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10113678c);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 1011364f8; end: 101136a1f;  */

void FUN_1011364f8(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(param_3,param_4);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,param_3);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_101136758:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101136788);
          (*pcVar6)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_101136758;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar4);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar3,uVar4);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar5 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10113678c);
          (*pcVar6)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar5 = (bool)(uVar13 == uVar9 | bVar5);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 101136a20; end: 101136b47;  */

ulong FUN_101136a20(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101136b48);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_101145504(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101136b44);
      (*pcVar1)();
    }
    FUN_101136d70(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 101136b48; end: 101136c1f;  */

ulong FUN_101136b48(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101136d70);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_10114559c(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101136d6c);
      (*pcVar1)();
    }
    FUN_101136e68(0,uVar2,uVar3 + 0x20,param_4,0x112d5ecd8,&PTR_PTR_1126bf130);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 101136c20; end: 101136d6f;  */

ulong FUN_101136c20(ulong param_1,ulong param_2,ulong param_3,ulong param_4,code *param_5,
                   undefined8 param_6,undefined8 param_7,code *param_8)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101136d70);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  (*param_5)(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101136d6c);
      (*pcVar1)();
    }
    (*param_8)(0,uVar2,uVar3 + 0x20,param_4,param_6,param_7);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 101136d70; end: 101136e67;  */

long FUN_101136d70(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101136e64);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101136e68);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x000103a2db6c(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      func_0x000103a2db6c(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101136e60);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 101136e68; end: 101136f83;  */

long FUN_101136e68(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101136f80);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101136f84);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x000101137284(0,param_5,param_6);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      func_0x000101137284(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101136f7c);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 101136f84; end: 101136fcb;  */

undefined8 FUN_101136f84(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d5ece0;
  func_0x0001000285a8(0x112d5ece0,&UNK_10d925bf0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 101136fcc; end: 101136ff3;  */

undefined * FUN_101136fcc(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d5f6d0,&UNK_10d926250);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1011370e8);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1011370ec);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 101136ff4; end: 101137157;  */

undefined * FUN_101136ff4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(param_2,param_3);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1011370e8);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1011370ec);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 101137158; end: 101137167;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101137158(undefined1 *param_1)

{
  undefined1 *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  bool bVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  undefined8 uVar26;
  long unaff_x20;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  undefined1 *puVar30;
  long lStack_110;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_80,0,0);
  lVar10 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar10 == 0) {
    return;
  }
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001003d21d8();
  lVar7 = _DAT_112d5f628;
  puVar17 = auStack_98;
  func_0x000107c61428(lVar10 + _DAT_112d5f628,puVar17,1,0);
  uVar12 = *(undefined8 *)(lVar10 + lVar7);
  *(undefined **)(lVar10 + lVar7) = puVar11;
  func_0x000107c6142c(uVar12);
  lVar6 = _DAT_112d5f5a8;
  if (param_1 == (undefined1 *)0x0) {
    lStack_110 = 0;
    puVar3 = (undefined8 *)(lVar10 + _DAT_112d5f620);
    *puVar3 = 0;
    *(undefined1 *)(puVar3 + 1) = 0;
    goto LAB_101134e9c;
  }
  puVar20 = *(undefined1 **)(lVar10 + _DAT_112d5f5a8);
  if ((ulong)puVar20 >> 0x3e == 0) {
    puVar30 = *(undefined1 **)(((ulong)puVar20 & 0xffffffffffffff8) + 0x10);
    if (puVar30 != (undefined1 *)0x0) goto LAB_101134a08;
LAB_101134dec:
    lStack_110 = 0;
    lVar29 = 0;
  }
  else {
    puVar30 = (undefined1 *)((ulong)puVar20 & 0xffffffffffffff8);
    if ((undefined1 *)0x7fffffffffffffff < puVar20) {
      puVar30 = puVar20;
    }
    func_0x000107c60480();
    if (puVar30 == (undefined1 *)0x0) goto LAB_101134dec;
LAB_101134a08:
    lVar5 = _DAT_112d5f4f0;
    func_0x000107c61434();
    lStack_110 = 0;
    lVar29 = 0;
    lVar28 = 4;
    do {
      uVar23 = lVar28 - 4;
      if (((ulong)puVar20 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar20 & 0xffffffffffffff8) + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x101134dc0);
          (*pcVar8)();
        }
        uVar13 = *(ulong *)(puVar20 + lVar28 * 8);
        func_0x000107c61174();
      }
      else {
        uVar13 = uVar23;
        puVar17 = puVar20;
        FUN_10111c750();
      }
      puVar1 = (undefined1 *)(lVar28 + -3);
      if (SCARRY8(uVar23,1)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x101134db4);
        (*pcVar8)();
      }
      uVar24 = *(ulong *)(lVar10 + lVar5);
      uVar23 = uVar13;
      func_0x000107c5d984();
      func_0x000107c61180();
      puVar18 = puVar17;
      if (uVar23 == 0) {
        func_0x000107c5faec();
        puVar18 = puVar17;
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar17);
      }
      func_0x000107c4a52c();
      func_0x000107c61170(uVar23);
      if ((uVar24 & 1) == 0) {
        uVar23 = uVar13;
        func_0x000107c5d984();
        func_0x000107c61180();
        uVar24 = uVar23;
        func_0x000107c5faec();
        func_0x000107c61170(uVar23);
        if (*(long *)(param_1 + 0x10) != 0) {
          func_0x000107c61434(param_1);
          puVar17 = puVar18;
          func_0x000100029284();
          if (((ulong)puVar17 & 1) != 0) {
            lVar14 = *(long *)(*(long *)(param_1 + 0x38) + uVar24 * 8);
            func_0x000107c61174();
            func_0x000107c6142c(param_1);
            func_0x000107c6142c(puVar18);
            puVar11 = PTR_PTR_1126b4a40;
            func_0x000107c610f8(PTR_PTR_1126b4a40);
            func_0x000107c48448();
            func_0x000107c599a8(uVar13);
            func_0x000107c61170(puVar11);
            lVar22 = lVar14;
            func_0x000107c4d8c0();
            func_0x000107c61170(lVar14);
            bVar9 = SCARRY8(lStack_110,1);
            lStack_110 = lStack_110 + 1;
            if (bVar9) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x101134dc8);
              (*pcVar8)();
            }
            goto LAB_101134c14;
          }
          func_0x000107c6142c(puVar18);
          puVar18 = param_1;
        }
        func_0x000107c6142c(puVar18);
        lVar22 = 0;
      }
      else {
        lVar22 = 0;
      }
LAB_101134c14:
      bVar9 = SCARRY8(lVar29,lVar22);
      lVar29 = lVar29 + lVar22;
      if (bVar9) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x101134db8);
        (*pcVar8)();
      }
      puVar17 = auStack_b0;
      func_0x000107c61428(lVar10 + lVar7,puVar17,0x21,0);
      if (*(long *)(lVar10 + lVar7) == 0) {
        func_0x000107c614a8(auStack_b0);
      }
      else {
        uVar24 = uVar13;
        func_0x000107c5d984();
        func_0x000107c61180();
        uVar15 = uVar24;
        func_0x000107c5faec();
        uVar16 = *(ulong *)(lVar10 + lVar7);
        func_0x000107c61558();
        lVar25 = *(long *)(lVar10 + lVar7);
        *(undefined8 *)(lVar10 + lVar7) = 0x8000000000000000;
        uVar23 = uVar15;
        puVar18 = puVar17;
        func_0x000100029284();
        uVar21 = (ulong)~(uint)puVar18 & 1;
        lVar14 = *(long *)(lVar25 + 0x10) + uVar21;
        if (SCARRY8(*(long *)(lVar25 + 0x10),uVar21)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x101134dbc);
          (*pcVar8)();
        }
        if (*(long *)(lVar25 + 0x18) < lVar14) {
          func_0x00010113678c(lVar14,uVar16);
          uVar23 = uVar15;
          puVar19 = puVar17;
          func_0x000100029284();
          if (((uint)puVar18 & 1) != ((uint)puVar19 & 1)) {
            func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x101134ef8);
            (*pcVar8)();
          }
joined_r0x000101134d14:
          uVar16 = (ulong)puVar18 & 1;
          puVar18 = puVar19;
          if (uVar16 == 0) goto LAB_101134d18;
LAB_101134cf4:
          *(long *)(*(long *)(lVar25 + 0x38) + uVar23 * 8) = lVar22;
          func_0x000107c6142c(puVar17);
        }
        else {
          puVar19 = puVar18;
          if ((uVar16 & 1) == 0) {
            func_0x000101136368();
            goto joined_r0x000101134d14;
          }
          if (((ulong)puVar18 & 1) != 0) goto LAB_101134cf4;
LAB_101134d18:
          lVar14 = lVar25 + (uVar23 >> 6) * 8;
          *(ulong *)(lVar14 + 0x40) = *(ulong *)(lVar14 + 0x40) | 1L << (uVar23 & 0x3f);
          puVar2 = (ulong *)(*(long *)(lVar25 + 0x30) + uVar23 * 0x10);
          *puVar2 = uVar15;
          puVar2[1] = (ulong)puVar17;
          *(long *)(*(long *)(lVar25 + 0x38) + uVar23 * 8) = lVar22;
          if (SCARRY8(*(long *)(lVar25 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x101134dc4);
            (*pcVar8)();
          }
          *(long *)(lVar25 + 0x10) = *(long *)(lVar25 + 0x10) + 1;
          puVar18 = puVar19;
        }
        *(long *)(lVar10 + lVar7) = lVar25;
        func_0x000107c614a8(auStack_b0);
        func_0x000107c61170(uVar24);
        puVar17 = puVar18;
      }
      func_0x000107c61170(uVar13);
      lVar28 = lVar28 + 1;
    } while (puVar1 != puVar30);
    func_0x000107c6142c(puVar20);
  }
  uVar26 = *(undefined8 *)(lVar10 + _DAT_112d5f5e8);
  uVar27 = *(undefined8 *)(lVar10 + lVar6);
  func_0x000101137284(0,0x112d5ec98,&PTR_PTR_1126a63b0);
  func_0x000107c61174(uVar26);
  uVar12 = uVar27;
  func_0x000107c61434(uVar27);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar27);
  func_0x000107c54be8(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar12);
  func_0x000107c4d664(*(undefined8 *)(lVar10 + _DAT_112d5f510));
  if (lVar29 < 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x101134ee4);
    (*pcVar8)();
  }
  plVar4 = (long *)(lVar10 + _DAT_112d5f620);
  *plVar4 = lVar29;
  *(undefined1 *)(plVar4 + 1) = 0;
  if (lStack_110 < 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x101134ee8);
    (*pcVar8)();
  }
LAB_101134e9c:
  plVar4 = (long *)(lVar10 + _DAT_112d5f630);
  *plVar4 = lStack_110;
  *(undefined1 *)(plVar4 + 1) = 0;
  FUN_101133ebc();
  func_0x000107c61170(lVar10);
  return;
}



/* Entry: 101137168; end: 101137213;  */

void FUN_101137168(void)

{
  FUN_101132ff0();
  return;
}



/* Entry: 101137214; end: 10113723f;  */

void FUN_101137214(void)

{
  return;
}



/* Entry: 101137240; end: 1011372c3;  */

void FUN_101137240(void)

{
  long unaff_x20;
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c60690();
  func_0x000107c606a8();
  return;
}



/* Entry: 1011372c4; end: 1011372f3;  */

void FUN_1011372c4(long param_1,long param_2)

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



/* Entry: 1011372f4; end: 10113739f;  */

undefined * FUN_1011372f4(undefined *param_1,long param_2)

{
  undefined *puVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    param_1 = PTR_PTR_1126ae568;
    func_0x000107c610f8(PTR_PTR_1126ae568);
    func_0x000107c453e4();
    puVar1 = param_1;
    func_0x000107c5cb24();
    func_0x000107c61180();
  }
  else {
    FUN_101115fac(param_1);
    puVar1 = param_1;
    func_0x000107c5cb24();
    func_0x000107c61180();
    func_0x000107c615e8(param_2);
  }
  func_0x000107c61170(param_1);
  return puVar1;
}



/* Entry: 1011373a0; end: 1011373cf;  */

undefined * FUN_1011373a0(undefined *param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    param_1 = PTR_PTR_1126ae568;
    func_0x000107c610f8(PTR_PTR_1126ae568);
    func_0x000107c453e4();
    puVar2 = param_1;
    func_0x000107c5cb24();
    func_0x000107c61180();
  }
  else {
    uVar1 = 0;
    func_0x00010111bd60(0);
    FUN_10111bd80(param_1,uVar1,&PTR_DAT_1103860f0);
    puVar2 = param_1;
    func_0x000107c5cb24();
    func_0x000107c61180();
    func_0x000107c615e8(param_2);
  }
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1011373d0; end: 101137497;  */

undefined * FUN_1011373d0(undefined *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    param_1 = PTR_PTR_1126ae568;
    func_0x000107c610f8(PTR_PTR_1126ae568);
    func_0x000107c453e4();
    puVar2 = param_1;
    func_0x000107c5cb24();
    func_0x000107c61180();
  }
  else {
    pcVar3 = (code *)*param_3;
    uVar1 = 0;
    func_0x00010111bd60(0);
    (*pcVar3)(param_1,uVar1,&PTR_DAT_1103860f0);
    puVar2 = param_1;
    func_0x000107c5cb24();
    func_0x000107c61180();
    func_0x000107c615e8(param_2);
  }
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 101137498; end: 1011374f3;  */

void FUN_101137498(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_1011374f4(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}


