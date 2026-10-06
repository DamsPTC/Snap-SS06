/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101212944; end: 1012129ef; -[SCMusicSingleSectionPickerFeatureEntryPoint setValue:forIvarName:] */

void FUN_101212944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101212654(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1012129f0; end: 101212a9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012129f0(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d688a0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d688a8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d688b0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d688b8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d688c0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d688c8) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101212aa0; end: 101212abf; -[SCMusicSingleSectionPickerFeatureEntryPoint init] */

void FUN_101212aa0(void)

{
  FUN_1012129f0();
  return;
}



/* Entry: 101212ac0; end: 101212af3;  */

void FUN_101212ac0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101212af4; end: 101212b6b; -[SCMusicSingleSectionPickerFeatureEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101212af4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d688a0);
  func_0x000107c61610(param_1 + _DAT_112d688a8);
  func_0x000107c61610(param_1 + _DAT_112d688b0);
  func_0x000107c61610(param_1 + _DAT_112d688b8);
  func_0x000107c61610(param_1 + _DAT_112d688c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d688c8));
  return;
}



/* Entry: 101212b6c; end: 101212b8b;  */

void FUN_101212b6c(void)

{
  func_0x000107c61168(&PTR_PTR_1127bbac8);
  return;
}



/* Entry: 101212b8c; end: 101212c6b;  */

void FUN_101212b8c(long *param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = param_2;
  lVar2 = param_3;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  if (lVar4 == 0) {
    lVar3 = 0;
    lVar4 = 0;
    lVar6 = lVar2;
  }
  else {
    lVar3 = lVar4;
    func_0x000107c5faec();
    lVar6 = lVar2;
    func_0x000107c61170(lVar4);
    lVar4 = lVar2;
  }
  lVar2 = param_2;
  func_0x000107c434c4();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar5 = 0;
    lVar6 = 0;
  }
  else {
    lVar5 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
  }
  func_0x000107c5b634();
  uVar1 = (undefined1)(0x3020001 >> (ulong)(((uint)param_2 & 3) << 3));
  if (3 < (uint)param_2) {
    uVar1 = 0;
  }
  func_0x000107c4d268();
  *param_1 = lVar3;
  param_1[1] = lVar4;
  param_1[2] = lVar5;
  param_1[3] = lVar6;
  *(undefined1 *)(param_1 + 4) = uVar1;
  *(int *)((long)param_1 + 0x24) = (int)param_3;
  return;
}



/* Entry: 101212c6c; end: 101212cc7; -[_TtC27SCMusicPickerFeatureSupport25MusicPickerLayoutResponse response] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101212c6c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d68930);
  uVar2 = ((undefined8 *)(param_1 + _DAT_112d68930))[1];
  func_0x00010006c00c(uVar1,uVar2);
  uVar3 = uVar1;
  func_0x000107c5ee20(uVar1,uVar2);
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101212cc8; end: 101212d3b; -[_TtC27SCMusicPickerFeatureSupport25MusicPickerLayoutResponse setResponse:] */

/* WARNING: Possible PIC construction at 0x000101212d0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101212d10) */

void FUN_101212cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c5ee30(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101212d3c; end: 101212d4b; -[_TtC27SCMusicPickerFeatureSupport25MusicPickerLayoutResponse isCached] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_101212d3c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112d68938);
}



/* Entry: 101212d4c; end: 101212d5b; -[_TtC27SCMusicPickerFeatureSupport25MusicPickerLayoutResponse setIsCached:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101212d4c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112d68938) = param_3;
  return;
}



/* Entry: 101212d5c; end: 101212db7; -[_TtC27SCMusicPickerFeatureSupport25MusicPickerLayoutResponse init] */

void FUN_101212d5c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMusicPickerFeatureSupport.MusicPickerLayoutResponse",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101212d88);
  (*pcVar1)();
}



/* Entry: 101212db8; end: 101212dcb; -[_TtC27SCMusicPickerFeatureSupport25MusicPickerLayoutResponse .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101212db8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = *(ulong *)(param_1 + _DAT_112d68930);
  uVar1 = ((ulong *)(param_1 + _DAT_112d68930))[1];
  uVar3 = (uint)(uVar1 >> 0x3e);
  if (uVar3 == 1) {
    uVar2 = uVar1 & 0x3fffffffffffffff;
  }
  else if (uVar3 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 101212dcc; end: 101212e13;  */

void FUN_101212dcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c610f8();
  FUN_101212e14(param_1,param_2,param_3);
  return;
}



/* Entry: 101212e14; end: 101212fb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101212e14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar2 = &stack0xffffffffffffff70;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d688f8);
  *puVar1 = 0xd000000000000013;
  puVar1[1] = 0x800000010ef2eb70;
  *(undefined8 *)(unaff_x20 + _DAT_112d68900) = 0;
  func_0x000107c61174(param_3);
  func_0x0001000d224c(&uStack_80);
  FUN_101212b8c(&uStack_78,param_3,uStack_80);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(uStack_80);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d68908);
  puVar1[4] = uStack_58;
  puVar1[1] = uStack_70;
  *puVar1 = uStack_78;
  puVar1[3] = uStack_60;
  puVar1[2] = uStack_68;
  uVar4 = *(undefined8 *)(param_1 + _DAT_11303ff00);
  *(undefined8 *)(unaff_x20 + _DAT_112d68910) = uVar4;
  func_0x0001000285a8(0x112d68918,&UNK_10d92c580);
  func_0x000107c6157c(uVar4);
  uVar4 = param_2;
  func_0x0001000bda74();
  *(undefined8 *)(unaff_x20 + _DAT_112d68920) = uVar4;
  func_0x000107c61154(&stack0xffffffffffffff70,PTR_s_init_1125d9248);
  func_0x000107c61180();
  puVar3 = puVar2;
  FUN_101212fb4();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  uVar4 = *(undefined8 *)(puVar2 + _DAT_112d68900);
  *(undefined1 **)(puVar2 + _DAT_112d68900) = puVar3;
  func_0x000107c61170(puVar2);
  func_0x000107c61574(uVar4);
  return puVar2;
}



/* Entry: 101212fb4; end: 101213193;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101212fb4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long extraout_x12;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 auStack_a0 [2];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_74;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar13 = *(long *)(lVar4 + -8);
  lVar11 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar10 = auStack_90 + -(lVar11 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)puVar10 - extraout_x12;
  lStack_68 = lVar9;
  func_0x000107c5eea0(lVar9);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d68908);
  bVar3 = *(byte *)(puVar1 + 4);
  uStack_70 = 0x1f;
  if (1 < bVar3 - 1) {
    uStack_70 = 0xce;
  }
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112d68910);
  uStack_80 = *puVar1;
  uVar6 = puVar1[1];
  uStack_88 = puVar1[2];
  uVar2 = puVar1[3];
  uStack_74 = *(undefined4 *)((long)puVar1 + 0x24);
  (**(code **)(lVar13 + 0x10))(puVar10,lVar9,lVar4);
  uVar7 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar8 = uVar7 + 0x48 & (uVar7 ^ 0xffffffffffffffff);
  puVar5 = &UNK_110394748;
  func_0x000107c613fc(&UNK_110394748,uVar8 + lVar11,uVar7 | 7);
  *(undefined8 *)(puVar5 + 0x10) = uVar12;
  *(undefined8 *)(puVar5 + 0x18) = uStack_80;
  *(undefined8 *)(puVar5 + 0x20) = uVar6;
  *(undefined8 *)(puVar5 + 0x28) = uStack_88;
  *(undefined8 *)(puVar5 + 0x30) = uVar2;
  puVar5[0x38] = bVar3;
  *(undefined4 *)(puVar5 + 0x3c) = uStack_74;
  *(long *)(puVar5 + 0x40) = unaff_x20;
  (**(code **)(lVar13 + 0x20))(puVar5 + uVar8,puVar10,lVar4);
  func_0x000107c61434(uVar2);
  func_0x000107c61174();
  func_0x000107c6157c(uVar12);
  func_0x000107c61434(uVar6);
  uVar6 = 0x112d68928;
  func_0x0001000285a8(0x112d68928,&UNK_10d92c590);
  *(undefined8 *)(lVar9 + -0x10) = uVar6;
  uVar6 = uStack_70;
  func_0x000100859150(uStack_70,0,0x50,4,0,0,&UNK_10d92c648,puVar5);
  func_0x000107c61574(puVar5);
  (**(code **)(lVar13 + 8))(lStack_68,lVar4);
  return uVar6;
}



/* Entry: 101213194; end: 1012131f3; -[SCMusicPickerStartupLayoutLoader initWithMusicServices:musicLogger:scopeContext:] */

void FUN_101213194(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  FUN_101212e14(param_3,param_4,param_5);
  return;
}



/* Entry: 1012131f4; end: 101213253; -[SCMusicPickerStartupLayoutLoader init] */

void FUN_1012131f4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMusicPickerFeatureSupport.MusicPickerStartupLayoutLoader",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101213220);
  (*pcVar1)();
}



/* Entry: 101213254; end: 1012132cf; -[SCMusicPickerStartupLayoutLoader .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001012132a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012132a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101213254(long param_1)

{
  undefined8 uVar1;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d688f8 + 8));
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d68908 + 0x18);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d68908 + 8));
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d68910));
  return;
}



/* Entry: 1012132d0; end: 1012132e7;  */

void FUN_1012132d0(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012132e8,0,0);
  return;
}



/* Entry: 1012132e8; end: 10121341f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012132e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x22;
  
  lVar4 = _DAT_112d68900;
  *(long *)(unaff_x22 + 0x28) = _DAT_112d68900;
  lVar4 = *(long *)(*(long *)(unaff_x22 + 0x20) + lVar4);
  *(long *)(unaff_x22 + 0x30) = lVar4;
  if (lVar4 == 0) {
    FUN_101212fb4();
    *(long *)(unaff_x22 + 0x48) = param_1;
    plVar5 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x50) = plVar5;
    uVar1 = 0x112d68928;
    func_0x0001000285a8(0x112d68928,&UNK_10d92c590);
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_1012134cc;
    lVar3 = unaff_x22 + 0x10;
  }
  else {
    plVar5 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
    func_0x000107c6157c(lVar4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x38) = plVar5;
    uVar1 = 0x112d68928;
    func_0x0001000285a8(0x112d68928,&UNK_10d92c590);
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_101213420;
    lVar3 = unaff_x22 + 0x18;
    param_1 = lVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT5valuexvg_11034fdb8)(lVar3,param_1,uVar1,uVar2,PTR___ss5ErrorWS_11034ee10);
  return;
}



/* Entry: 101213420; end: 10121347b;  */

void FUN_101213420(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x40) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x38));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10121347c;
  }
  else {
    pcVar1 = FUN_101213538;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10121347c; end: 1012134cb;  */

void FUN_10121347c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  lVar4 = *(long *)(unaff_x22 + 0x20);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(lVar4 + lVar1);
  *(undefined8 *)(lVar4 + lVar1) = 0;
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001012134c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}



/* Entry: 1012134cc; end: 10121352f;  */

void FUN_1012134cc(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x48);
  *(long *)(lVar3 + 0x58) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x50));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_101213530;
  }
  else {
    pcVar2 = (code *)0x101213588;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101213530; end: 101213537;  */

void FUN_101213530(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101213534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Entry: 101213538; end: 1012135cb;  */

void FUN_101213538(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  func_0x000107c614ac(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + *(long *)(unaff_x22 + 0x28));
  *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + *(long *)(unaff_x22 + 0x28)) = 0;
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101213584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 1012135cc; end: 1012136f7; -[SCMusicPickerStartupLayoutLoader getPickerLayoutWithCompletion:] */

void FUN_1012135cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_1103946d0;
  func_0x000107c613fc(&UNK_1103946d0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffd0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_1103946f8;
  func_0x000107c613fc(&UNK_1103946f8,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10d92c610;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_110394720;
  func_0x000107c613fc(&UNK_110394720,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10d92c620;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_1);
  FUN_100e8e0b0(0,0,&stack0xffffffffffffffd0 + -extraout_x8,&UNK_10d92c630,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 1012136f8; end: 101213753;  */

void FUN_1012136f8(undefined8 param_1,long param_2)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(long *)(unaff_x22 + 0x18) = param_2;
  plVar1 = (long *)0x60;
  func_0x000107c61174();
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101213754;
  plVar1[4] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012132e8,0,0);
  return;
}



/* Entry: 101213754; end: 1012137bf;  */

void FUN_101213754(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x18);
  lVar3 = *(long *)(lVar2 + 0x10);
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x20));
  func_0x000107c61170(uVar1);
  (**(code **)(lVar3 + 0x10))(lVar3,param_1);
  func_0x000107c615e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001012137bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Entry: 1012137c0; end: 1012137df;  */

void FUN_1012137c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_4;
  *(undefined8 *)(unaff_x22 + 0x68) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012137e0,0,0);
  return;
}



/* Entry: 1012137e0; end: 10121386b;  */

void FUN_1012137e0(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10121386c;
                    /* WARNING: Could not recover jumptable at 0x000101213868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(*(undefined8 *)(unaff_x22 + 0x58),uVar2,lVar3);
  return;
}



/* Entry: 10121386c; end: 1012138ef;  */

void FUN_10121386c(undefined8 param_1,undefined8 param_2,byte param_3)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x78) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x70));
  if (unaff_x20 == 0) {
    *(byte *)(lVar2 + 0x90) = param_3 & 1;
    *(undefined8 *)(lVar2 + 0x80) = param_2;
    *(undefined8 *)(lVar2 + 0x88) = param_1;
    pcVar1 = FUN_1012138f0;
  }
  else {
    pcVar1 = FUN_101213998;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1012138f0; end: 101213997;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012138f0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  undefined8 *puVar8;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar4 = *(undefined1 *)(unaff_x22 + 0x90);
  lVar5 = *(long *)(unaff_x22 + 0x68);
  puVar8 = *(undefined8 **)(unaff_x22 + 0x48);
  func_0x0001000834e4(unaff_x22 + 0x10);
  FUN_1012139cc(lVar5,uVar4);
  func_0x000101213b5c();
  lVar6 = lVar5;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar6 + _DAT_112d68930);
  *puVar1 = uVar3;
  puVar1[1] = uVar2;
  *(undefined1 *)(lVar6 + _DAT_112d68938) = uVar4;
  plVar7 = (long *)(unaff_x22 + 0x38);
  *plVar7 = lVar6;
  *(long *)(unaff_x22 + 0x40) = lVar5;
  func_0x000107c61154(plVar7,PTR_s_init_1125d9248);
  *puVar8 = plVar7;
                    /* WARNING: Could not recover jumptable at 0x000101213994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101213998; end: 1012139cb;  */

void FUN_101213998(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001012139c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1012139cc; end: 101213adf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012139cc(double param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  func_0x0001000d224c(&lStack_68);
  if (lStack_68 != 0) {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d688f8);
    func_0x000107c5fadc(uVar2,((undefined8 *)(unaff_x20 + _DAT_112d688f8))[1]);
    func_0x000107c5eea0(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee68(param_2);
    (**(code **)(lVar3 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
    func_0x000107c4bce0(param_1 * 1000.0,lStack_68);
    func_0x000107c615e8(lStack_68);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 101213ae0; end: 101213b9b;  */

void FUN_101213ae0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101213b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101213b9c; end: 101213bff;  */

void FUN_101213b9c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101213c00;
  plVar3[2] = lVar1;
  plVar3[3] = lVar2;
  plVar4 = (long *)0x60;
  func_0x000107c61174();
  func_0x000107c615b8();
  plVar3[4] = (long)plVar4;
  *plVar4 = (long)plVar3;
  plVar4[1] = (long)FUN_101213754;
  plVar4[4] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012132e8,0,0);
  return;
}



/* Entry: 101213c00; end: 101213c3b;  */

void FUN_101213c00(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101213c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101213c3c; end: 101213cb3;  */

void FUN_101213c3c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101213e34;
  FUN_100e8ded0(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101213cb4; end: 101213cdf;  */

void FUN_101213cb4(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101213ce0; end: 101213d63;  */

void FUN_101213ce0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101213e38;
  FUN_100e8df9c(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101213d64; end: 101213df3;  */

void FUN_101213d64(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x40);
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101213df4;
  plVar2[0xc] = lVar4;
  plVar2[0xd] = unaff_x20 + (uVar3 + 0x48 & (uVar3 ^ 0xffffffffffffffff));
  plVar2[10] = lVar1;
  plVar2[0xb] = unaff_x20 + 0x18;
  plVar2[9] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012137e0,0,0);
  return;
}



/* Entry: 101213df4; end: 101213e2f;  */

void FUN_101213df4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101213e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101213e30; end: 101213e3b;  */

void FUN_101213e30(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101213b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101213e3c; end: 101213e57;  */

void FUN_101213e3c(undefined8 param_1,undefined8 param_2)

{
  func_0x000108420984(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 101213e58; end: 101214053;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101213e58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  if ((*(byte *)(unaff_x20 + _DAT_112d689b0) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112d689b0) = 1;
    puVar1 = &UNK_110394848;
    func_0x000107c613fc(&UNK_110394848,0x18,7);
    func_0x000107c61614(puVar1 + 0x10);
    puVar2 = &UNK_1103949b0;
    func_0x000107c613fc(&UNK_1103949b0,0x21,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    *(undefined8 *)(puVar2 + 0x18) = param_1;
    puVar2[0x20] = (char)param_2;
    lVar3 = unaff_x20 + _DAT_112d68990;
    func_0x000107c61618();
    lVar4 = _DAT_112d68a18;
    if (lVar3 == 0) {
      func_0x000107c61428(puVar1 + 0x10,&puStack_98,0,0);
      puVar6 = puVar1 + 0x10;
      func_0x000107c61618();
      func_0x000101214e98(param_1,param_2);
      if (puVar6 != (undefined *)0x0) {
        func_0x000107c6157c(puVar1);
        func_0x0001012149e0(param_1,param_2);
        func_0x000107c61574(puVar1);
        func_0x000107c61170(puVar6);
      }
    }
    else {
      func_0x000107c61428(lVar3 + _DAT_112d68a18,auStack_68,0,0);
      lVar4 = lVar3 + lVar4;
      func_0x000107c61618();
      if (lVar4 != 0) {
        uStack_78 = 0x101214e8c;
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0x42000000;
        puStack_88 = &UNK_1000f6b44;
        puStack_80 = &UNK_1103949c8;
        ppuVar5 = &puStack_98;
        puStack_70 = puVar2;
        func_0x000107c60bc4(ppuVar5);
        puVar1 = puStack_70;
        func_0x000107c6157c(puVar2);
        func_0x000101214e98(param_1,param_2);
        func_0x000107c6157c(puVar2);
        func_0x000107c61574(puVar1);
        func_0x000107c4d258(lVar4);
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c615e8(lVar3);
        func_0x000107c61578(puVar2,2);
        func_0x000107c615e8(lVar4);
        return;
      }
      func_0x000101214e98(param_1,param_2);
      func_0x000107c615e8(lVar3);
    }
    func_0x000107c61574(puVar2);
  }
  return;
}



/* Entry: 101214054; end: 1012140f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101214054(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + _DAT_112d689b0) & 1) == 0) {
    lVar1 = param_1 + _DAT_112d68998;
    func_0x000107c61618();
    if (lVar1 != 0) {
      (**(code **)(param_1 + _DAT_112d689a8))(param_2,*(undefined8 *)(param_1 + _DAT_112d689a0));
      func_0x000107c4d254(lVar1);
      func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_2);
      return;
    }
  }
  return;
}



/* Entry: 1012140f4; end: 10121458f; -[_TtC19SCMusicPickerV2Host32MusicPickerV2ActionHandlerBridge onTrackNominatedWithTrack:] */

/* WARNING: Possible PIC construction at 0x000101214214: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101214218) */

void FUN_1012140f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_110394938;
  func_0x000107c613fc(&UNK_110394938,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  puVar2 = &UNK_110394848;
  func_0x000107c613fc(&UNK_110394848,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  puVar3 = &UNK_110394960;
  func_0x000107c613fc(&UNK_110394960,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(code **)(puVar3 + 0x18) = FUN_101214d74;
  *(undefined **)(puVar3 + 0x20) = puVar1;
  puVar2 = &UNK_110394988;
  func_0x000107c613fc(&UNK_110394988,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10d92c708;
  *(undefined **)(puVar2 + 0x18) = puVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar1);
  func_0x0001001ca524(0xc,3,0x50,3,0,0,&UNK_10d92c710,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101214590; end: 1012146d7; -[_TtC19SCMusicPickerV2Host32MusicPickerV2ActionHandlerBridge onDismissWithDismissalInfo:] */

/* WARNING: Possible PIC construction at 0x0001012146b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012146b4) */

void FUN_101214590(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_1103948c0;
  func_0x000107c613fc(&UNK_1103948c0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  puVar2 = &UNK_110394848;
  func_0x000107c613fc(&UNK_110394848,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  puVar3 = &UNK_1103948e8;
  func_0x000107c613fc(&UNK_1103948e8,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(code **)(puVar3 + 0x18) = FUN_101214c40;
  *(undefined **)(puVar3 + 0x20) = puVar1;
  puVar2 = &UNK_110394910;
  func_0x000107c613fc(&UNK_110394910,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10d92c6f8;
  *(undefined **)(puVar2 + 0x18) = puVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar1);
  func_0x0001001ca524(0xc,3,0x50,3,0,0,&UNK_10d92c700,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1012146d8; end: 10121474f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012146d8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((*(byte *)(param_1 + _DAT_112d689b0) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_112d689b0) = 1;
    uVar1 = param_1 + _DAT_112d68998;
    func_0x000107c61618();
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x000107c61150();
      if ((uVar2 & 1) != 0) {
        func_0x000107c4d240(uVar1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 101214750; end: 101214847; -[_TtC19SCMusicPickerV2Host32MusicPickerV2ActionHandlerBridge onDestroy] */

void FUN_101214750(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_110394848;
  func_0x000107c613fc(&UNK_110394848,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_110394870;
  func_0x000107c613fc(&UNK_110394870,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(code **)(puVar2 + 0x18) = FUN_1012146d8;
  *(undefined8 *)(puVar2 + 0x20) = 0;
  puVar1 = &UNK_110394898;
  func_0x000107c613fc(&UNK_110394898,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10d92c6e0;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  func_0x000107c61174(param_1);
  uVar3 = 0xc;
  func_0x0001001ca524(0xc,3,0x50,3,0,0,&UNK_10d92c6f0,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101214848; end: 10121484f; -[_TtC19SCMusicPickerV2Host32MusicPickerV2ActionHandlerBridge shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_101214848(void)

{
  return 1;
}



/* Entry: 101214850; end: 10121485b; -[_TtC19SCMusicPickerV2Host32MusicPickerV2ActionHandlerBridge pushToValdiMarshaller:] */

void FUN_101214850(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af99cf8(param_3,param_1);
  func_0x00010af99cf0();
  func_0x00010af99ce8();
  func_0x00010af99c50();
  func_0x00010af99c60();
  return;
}



/* Entry: 10121485c; end: 1012148cb;  */

void FUN_10121485c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012148cc,uVar1,uVar2);
  return;
}



/* Entry: 1012148cc; end: 101214933;  */

void FUN_1012148cc(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    (**(code **)(unaff_x22 + 0x30))();
    func_0x000107c61170(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000101214930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101214934; end: 10121496f;  */

void FUN_101214934(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010121496c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101214970; end: 101214aa3;  */

void FUN_101214970(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x0001012149e0(param_2,param_3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101214aa4; end: 101214b03; -[_TtC19SCMusicPickerV2Host32MusicPickerV2ActionHandlerBridge init] */

void FUN_101214aa4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMusicPickerV2Host.MusicPickerV2ActionHandlerBridge",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101214ad0);
  (*pcVar1)();
}



/* Entry: 101214b04; end: 101214b4f; -[_TtC19SCMusicPickerV2Host32MusicPickerV2ActionHandlerBridge .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101214b04(long param_1)

{
  FUN_100ca830c(param_1 + _DAT_112d68990);
  FUN_100ca830c(param_1 + _DAT_112d68998);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d689a8 + 8));
  return;
}



/* Entry: 101214b50; end: 101214b6f;  */

void FUN_101214b50(void)

{
  func_0x000107c61168(&PTR_PTR_1127bbd80);
  return;
}



/* Entry: 101214b70; end: 101214bcf;  */

void FUN_101214b70(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101214ecc;
  plVar3[6] = lVar1;
  plVar3[7] = lVar4;
  plVar3[5] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[8] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012148cc,lVar1,lVar2);
  return;
}



/* Entry: 101214bd0; end: 101214c3f;  */

void FUN_101214bd0(undefined8 param_1)

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
  plVar3[1] = 0x101214ec8;
  FUN_100f7cc44(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 101214c40; end: 101214c67;  */

void FUN_101214c40(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x00010121423c(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101214c68; end: 101214cc7;  */

void FUN_101214c68(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101214cc8;
  plVar3[6] = lVar1;
  plVar3[7] = lVar4;
  plVar3[5] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[8] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012148cc,lVar1,lVar2);
  return;
}



/* Entry: 101214cc8; end: 101214d03;  */

void FUN_101214cc8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101214d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101214d04; end: 101214d73;  */

void FUN_101214d04(undefined8 param_1)

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
  plVar3[1] = 0x101214ed0;
  FUN_100f7cc44(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 101214d74; end: 101214d7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101214d74(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if ((*(byte *)(param_1 + _DAT_112d689b0) & 1) == 0) {
    lVar1 = param_1 + _DAT_112d68998;
    func_0x000107c61618();
    if (lVar1 != 0) {
      (**(code **)(param_1 + _DAT_112d689a8))(uVar2,*(undefined8 *)(param_1 + _DAT_112d689a0));
      func_0x000107c4d254(lVar1);
      func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  return;
}



/* Entry: 101214d7c; end: 101214da7;  */

void FUN_101214d7c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101214da8; end: 101214e07;  */

void FUN_101214da8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101214ed4;
  plVar3[6] = lVar1;
  plVar3[7] = lVar4;
  plVar3[5] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[8] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012148cc,lVar1,lVar2);
  return;
}



/* Entry: 101214e08; end: 101214e77;  */

void FUN_101214e08(undefined8 param_1)

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
  plVar3[1] = 0x101214ed8;
  FUN_100f7cc44(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 101214e78; end: 101214edb;  */

void FUN_101214e78(undefined8 param_1,byte param_2)

{
  if (param_2 < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 101214edc; end: 101214f4b; -[_TtC19SCMusicPickerV2Host32MusicPickerV2SoundReportLauncher launchWithTrackId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101214edc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_112d689e8;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c502a0(*(undefined8 *)(param_1 + _DAT_112d689e0),param_2,param_3,1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 101214f4c; end: 101214fab; -[_TtC19SCMusicPickerV2Host32MusicPickerV2SoundReportLauncher init] */

void FUN_101214f4c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMusicPickerV2Host.MusicPickerV2SoundReportLauncher",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101214f78);
  (*pcVar1)();
}



/* Entry: 101214fac; end: 101214fe3; -[_TtC19SCMusicPickerV2Host32MusicPickerV2SoundReportLauncher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101214fac(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d689e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112d689e8);
  return;
}



/* Entry: 101214fe4; end: 101215003;  */

void FUN_101214fe4(void)

{
  func_0x000107c61168(&PTR_PTR_1127bbe60);
  return;
}



/* Entry: 101215004; end: 10121504b; -[SCMusicPickerV2ViewController dismissalDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101215004(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d68a18;
  func_0x000107c61428(param_1 + _DAT_112d68a18,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10121504c; end: 1012150a3; -[SCMusicPickerV2ViewController setDismissalDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121504c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d68a18;
  func_0x000107c61428(param_1 + _DAT_112d68a18,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012150a4; end: 10121563b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1012150a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined1 auStack_88 [16];
  long lStack_78;
  long lStack_70;
  
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112d68a18,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d68a20) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d68a28) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d68a30) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d68a38) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d68a40) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d68a48) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d68a50) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112d68a58) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112d68a60) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112d68a68) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112d68a70) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112d68a78) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112d68a80) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112d68a88) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112d68a90) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112d68a98) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112d68aa0) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112d68aa8) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_112d68ab0) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_112d68ab8) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_112d68ac0) = param_19;
  *(undefined8 *)(unaff_x20 + _DAT_112d68ac8) = param_20;
  *(undefined8 *)(unaff_x20 + _DAT_112d68ad0) = param_21;
  *(undefined8 *)(unaff_x20 + _DAT_112d68ad8) = param_22;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d68ae0);
  *puVar1 = param_23;
  puVar1[1] = param_24;
  *(undefined8 *)(unaff_x20 + _DAT_112d68ae8) = param_25;
  *(undefined8 *)(unaff_x20 + _DAT_112d68af0) = param_26;
  *(undefined8 *)(unaff_x20 + _DAT_112d68af8) = param_27;
  *(undefined8 *)(unaff_x20 + _DAT_112d68b00) = param_28;
  func_0x000107c61174();
  func_0x000107c615f0(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(param_13);
  func_0x000107c615f0(param_14);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(param_17);
  func_0x000107c615f0(param_18);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(param_22);
  func_0x000107c615f0(param_25);
  func_0x000107c615f0(param_26);
  func_0x000107c615f0(param_27);
  uVar3 = param_9;
  func_0x000107c5b664();
  lVar4 = 0;
  FUN_101214b50();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar2 = lVar5 + _DAT_112d68990;
  *(undefined8 *)(lVar2 + 8) = 0;
  func_0x000107c61614(lVar2,0);
  lVar2 = _DAT_112d68998;
  func_0x000107c61614(lVar5 + _DAT_112d68998,0);
  *(undefined1 *)(lVar5 + _DAT_112d689b0) = 0;
  func_0x000107c61604(lVar5 + lVar2,param_29);
  *(undefined8 *)(lVar5 + _DAT_112d689a0) = uVar3;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112d689a8);
  *puVar1 = FUN_101213e3c;
  puVar1[1] = 0;
  plVar6 = &lStack_78;
  lStack_78 = lVar5;
  lStack_70 = lVar4;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_112d68b08) = plVar6;
  puVar7 = auStack_88;
  func_0x000107c61154(puVar7,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c615e8(param_13);
  func_0x000107c615e8(param_14);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_16);
  func_0x000107c615e8(param_17);
  func_0x000107c615e8(param_18);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_21);
  func_0x000107c615e8(param_22);
  func_0x000107c615e8(param_25);
  func_0x000107c615e8(param_26);
  func_0x000107c615e8(param_27);
  func_0x000107c61170(param_28);
  func_0x000107c615e8(param_29);
  lVar2 = *(long *)(puVar7 + _DAT_112d68b08) + _DAT_112d68990;
  *(undefined ***)(lVar2 + 8) = &PTR_DAT_110394a40;
  func_0x000107c61604(lVar2,puVar7);
  return puVar7;
}



/* Entry: 10121563c; end: 1012159d3; -[SCMusicPickerV2ViewController initWithAudioDataLoader:playerFactory:audioFactory:musicGrpcService:searchGrpcService:boltUploader:temporaryFileWriterServices:selection:loggingInfo:musicFeatureLaunchServices:memoriesPickerV2ScopeExposer:memoriesPickerV2ScopeServices:runtime:composerApplication:composerCoreUIServices:musicFavoritesComposerServices:userInfoProvider:blizzardLogger:musicRecentsComposerServices:context:deepLinkInfo:audioRecorder:bitmojiAvatarId:musicPickerStartupLoader:musicPickerTweaks:soundReportManager:v2TopOverlayBottomEdge:v2Delegate:] */

undefined8
FUN_10121563c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             long param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_130;
  undefined8 uStack_120;
  
  if (param_25 == 0) {
    uStack_120 = 0;
    uStack_130 = 0;
  }
  else {
    func_0x000107c5faec();
    uStack_130 = param_2;
    uStack_120 = param_25;
  }
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c615f0(param_7);
  func_0x000107c615f0(param_8);
  func_0x000107c61174();
  uVar1 = param_10;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(param_15);
  func_0x000107c615f0(param_16);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(param_19);
  func_0x000107c615f0();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = param_23;
  func_0x000107c61174();
  func_0x000107c615f0(param_24);
  func_0x000107c615f0(param_26);
  func_0x000107c615f0(param_27);
  func_0x000107c615f0(param_28);
  uVar3 = param_29;
  func_0x000107c61174();
  func_0x000107c615f0(param_30);
  uVar4 = param_3;
  FUN_101216c18(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,
                param_13,param_14,param_15,param_16,param_17,param_18,param_19,param_20,param_21,
                param_22,param_23,param_24,uStack_120,uStack_130,param_26,param_27,param_28,param_29
                ,param_30);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c615e8(param_7);
  func_0x000107c615e8(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_14);
  func_0x000107c615e8(param_15);
  func_0x000107c615e8(param_16);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_18);
  func_0x000107c615e8(param_19);
  func_0x000107c615e8(param_20);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_22);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(param_24);
  func_0x000107c615e8(param_26);
  func_0x000107c615e8(param_27);
  func_0x000107c615e8(param_28);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(param_30);
  return uVar4;
}



/* Entry: 1012159d4; end: 101215a5f; -[SCMusicPickerV2ViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012159d4(long param_1)

{
  code *pcVar1;
  
  func_0x000107c61614(param_1 + _DAT_112d68a18,0);
  *(undefined8 *)(param_1 + _DAT_112d68a20) = 0;
  *(undefined8 *)(param_1 + _DAT_112d68a28) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCMusicPickerV2Host/MusicPickerV2ViewController.swift",0x35,2,0x9c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101215a60);
  (*pcVar1)();
}



/* Entry: 101215a60; end: 101215b47;  */

/* WARNING: Possible PIC construction at 0x000101215ab8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101215b00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101215abc) */
/* WARNING: Removing unreachable block (ram,0x000101215b40) */
/* WARNING: Removing unreachable block (ram,0x000101215ad0) */
/* WARNING: Removing unreachable block (ram,0x000101215b04) */
/* WARNING: Removing unreachable block (ram,0x000101215b44) */
/* WARNING: Removing unreachable block (ram,0x000101215b20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101215a60(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  
  FUN_101215b48();
  puVar1 = *(undefined **)(unaff_x20 + _DAT_112d68a20);
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x000107c453e4();
    puVar1 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar1);
  func_0x000107c5a568();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 101215b48; end: 101215c47;  */

/* WARNING: Possible PIC construction at 0x000101215c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101215c14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101215c24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101215c18) */
/* WARNING: Removing unreachable block (ram,0x000101215c04) */
/* WARNING: Removing unreachable block (ram,0x000101215c28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101215b48(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112d68a20) == 0) {
    FUN_101216030();
    puVar1 = param_1;
    FUN_1012162f0();
    if (puVar1 != (undefined *)0x0) {
      puVar1 = PTR_PTR_1126a66c0;
      func_0x000107c610f8(PTR_PTR_1126a66c0);
      func_0x000107c49520();
      param_1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c61174(puVar1);
      func_0x000107c3fa94(param_1);
      func_0x000107c61180();
      func_0x000107c52b50(puVar1,param_2,param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 101215c48; end: 101215c6f; -[SCMusicPickerV2ViewController loadView] */

void FUN_101215c48(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101215a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101215c70; end: 101215e2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101215c70(code *param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  long lVar6;
  code *pcVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar1 = _DAT_112d68a20;
  ppuVar5 = &puStack_80;
  lVar6 = *(long *)(unaff_x20 + _DAT_112d68a20);
  if (lVar6 == 0) {
    pcVar7 = param_1;
    FUN_101216030();
    pcVar2 = pcVar7;
    FUN_1012162f0();
    if (pcVar2 != (code *)0x0) {
      puVar3 = PTR_PTR_1126a66c0;
      func_0x000107c610f8();
      func_0x000107c49520();
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c61174();
      func_0x000107c3fa94(puVar4);
      func_0x000107c61180();
      func_0x000107c52b50(puVar3);
      func_0x000107c61170(puVar4);
      func_0x000107c56f90(puVar3);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(pcVar2);
      func_0x000107c61170(pcVar7);
      pcVar7 = *(code **)(unaff_x20 + lVar1);
      *(undefined **)(unaff_x20 + lVar1) = puVar3;
    }
    func_0x000107c61170(pcVar7);
    lVar6 = *(long *)(unaff_x20 + lVar1);
    if (lVar6 == 0) {
      if (param_1 == (code *)0x0) {
        return;
      }
      (*param_1)();
      return;
    }
  }
  puVar3 = &UNK_110394a00;
  func_0x000107c613fc(&UNK_110394a00,0x20,7);
  *(code **)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  pcStack_60 = FUN_101217080;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_110394a18;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c61174(lVar6);
  func_0x000100b64c10(param_1,param_2);
  func_0x000107c61574(puVar3);
  func_0x000107c5e078(lVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(lVar6);
  return;
}



/* Entry: 101215e2c; end: 101215eb7; -[SCMusicPickerV2ViewController prepareWithCompletion:] */

void FUN_101215e2c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar2 = (code *)0x0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_110394a60;
    func_0x000107c613fc(&UNK_110394a60,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    pcVar2 = FUN_101217108;
  }
  func_0x000107c61174(param_1);
  FUN_101215c70(pcVar2,puVar1);
  func_0x00010058d43c(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101215eb8; end: 101215f3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101215eb8(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112d68b08);
  if ((*(byte *)(lVar3 + _DAT_112d689b0) & 1) == 0) {
    *(undefined1 *)(lVar3 + _DAT_112d689b0) = 1;
    uVar1 = lVar3 + _DAT_112d68998;
    func_0x000107c61618();
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x000107c61150();
      if ((uVar2 & 1) != 0) {
        func_0x000107c4d240(uVar1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 101215f3c; end: 101215f63; -[SCMusicPickerV2ViewController handleNativeTeardown] */

void FUN_101215f3c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101215eb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101215f64; end: 101216023; -[SCMusicPickerV2ViewController topicPageTrackSelected:] */

/* WARNING: Possible PIC construction at 0x000101215fe8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101215fec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101215f64(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(*(long *)(param_1 + _DAT_112d68b08) + _DAT_112d689a8);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + _DAT_112d68b08) + _DAT_112d689a0);
  lVar2 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  (*pcVar1)(param_3,uVar3);
  if (param_3 == 0) {
    FUN_101213e58();
    func_0x000107c61170(param_1);
  }
  else {
    FUN_101213e58();
    lVar2 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101216024; end: 101216027; -[SCMusicPickerV2ViewController topicPagePresented:] */

void FUN_101216024(void)

{
  return;
}



/* Entry: 101216028; end: 10121602f; -[SCMusicPickerV2ViewController pageViewName] */

undefined8 FUN_101216028(void)

{
  return 0x9d;
}



/* Entry: 101216030; end: 1012162ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101216030(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  
  lVar10 = *(long *)(unaff_x20 + _DAT_112d68a70);
  lVar6 = lVar10;
  func_0x000107c5b664();
  func_0x000107c3125c();
  func_0x000107c61180();
  if (lVar6 != 0) {
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d68ac8);
    func_0x000107c5b634(uVar9);
    puVar2 = PTR_PTR_1126b2ee0;
    func_0x000107c610f8(PTR_PTR_1126b2ee0);
    func_0x000107c488f0();
    func_0x000107c61170(lVar6);
    func_0x000107c3f5f8(lVar10);
    func_0x000107c61180();
    func_0x000107c53200(puVar2,param_2,lVar10);
    func_0x000107c61170(lVar10);
    uVar3 = uVar9;
    func_0x000107c4b1dc(uVar9);
    func_0x000107c61180();
    func_0x000107c55d70(puVar2,param_2,uVar3);
    func_0x000107c61170(uVar3);
    uVar3 = uVar9;
    func_0x000107c434c4(uVar9);
    func_0x000107c61180();
    func_0x000107c549d8(puVar2,param_2,uVar3);
    func_0x000107c61170(uVar3);
    func_0x000107c44e38(uVar9);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c5511c(puVar2,param_2,puVar4);
    func_0x000107c61170(puVar4);
    puVar4 = PTR_PTR_1126b2fd8;
    func_0x000107c610f8(PTR_PTR_1126b2fd8);
    func_0x000107c453e4();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
    func_0x000107c5687c(puVar4,param_2,puVar5);
    func_0x000107c61170(puVar5);
    puVar5 = PTR_PTR_1126b2fe0;
    func_0x000107c610f8(PTR_PTR_1126b2fe0);
    func_0x000107c453e4();
    lVar6 = *(long *)(unaff_x20 + _DAT_112d68a68);
    if (lVar6 != 0) {
      func_0x000107c61174();
      lVar10 = lVar6;
      func_0x000107c5cda4();
      func_0x000107c2bb54();
      func_0x000107c61180();
      func_0x000107c58e20(puVar5,param_2,lVar10);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar10);
    }
    func_0x000107c545f0(puVar5,param_2,puVar2);
    func_0x000107c54790(puVar5,param_2,puVar4);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
    func_0x000107c59a2c(puVar5,param_2,puVar7);
    func_0x000107c61170(puVar7);
    func_0x000107c53f4c(puVar5,param_2,*(undefined8 *)(unaff_x20 + _DAT_112d68ad0));
    lVar6 = *(long *)(unaff_x20 + _DAT_112d68b00);
    puVar7 = (undefined *)0x0;
    if (lVar6 != 0) {
      puVar8 = PTR_PTR_1126ae6b8;
      func_0x000107c61168(PTR_PTR_1126ae6b8);
      func_0x000107c61174(lVar6);
      func_0x000107c4a8a4(puVar8,param_2,lVar6);
      func_0x000107c61180();
      puVar7 = puVar8;
      func_0x000107c5cb24();
      func_0x000107c61180();
      func_0x000107c61170(puVar8);
      func_0x000107c61170(lVar6);
    }
    func_0x000107c56854(puVar5,param_2,puVar7);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar7);
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012162f0);
  (*pcVar1)();
}



/* Entry: 1012162f0; end: 1012169ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1012162f0(double param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long *plVar8;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 auStack_d0 [2];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)&puStack_c0 + lVar1;
  puVar12 = PTR_PTR_1126aead8;
  func_0x000107c610f8();
  func_0x000107c4807c();
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d68a28);
  *(undefined **)(unaff_x20 + _DAT_112d68a28) = puVar12;
  func_0x000107c61174();
  func_0x000107c61170(uVar10);
  lVar11 = *(long *)(unaff_x20 + _DAT_112d68aa0);
  lVar15 = lVar11;
  func_0x000107c3dae4();
  func_0x000107c61180();
  lVar4 = lVar15;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar15);
  if (lVar4 == 0) {
    func_0x000107c61170(puVar12);
    puVar12 = (undefined *)0x0;
  }
  else {
    lVar15 = lVar4;
    lStack_a0 = lVar14;
    lStack_90 = lVar3;
    func_0x000107c4c1e0();
    func_0x000107c61180();
    lStack_98 = lVar15;
    func_0x000107c615e8(lVar4);
    puVar5 = PTR_PTR_1126b2fe8;
    func_0x000107c610f8();
    func_0x000107c48094();
    func_0x000107c3cfe0();
    func_0x000107c61180();
    lVar15 = lVar11;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar11);
    puStack_a8 = puVar5;
    if (lVar15 == 0) {
      lStack_88 = 0;
    }
    else {
      lVar4 = lVar15;
      func_0x000107c4c1e4();
      func_0x000107c61180();
      lStack_88 = lVar4;
      func_0x000107c615e8(lVar15);
    }
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d68a78);
    lVar15 = *(long *)(unaff_x20 + _DAT_112d68a70);
    func_0x000107c61174();
    func_0x000107c3f5f8();
    func_0x000107c61180();
    puStack_b0 = puVar12;
    if (lVar15 != 0) {
      func_0x000107c5faec();
      func_0x000107c61170(lVar15);
    }
    FUN_10121fa68(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    FUN_10121e664(uVar10,unaff_x20);
    puVar5 = PTR_PTR_1126afe50;
    func_0x000107c610f8();
    func_0x000107c4842c();
    func_0x000107c561c0();
    uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112d68ab8);
    puVar12 = PTR_PTR_1126a66c8;
    func_0x000107c610f8(PTR_PTR_1126a66c8);
    *(undefined8 *)((long)auStack_d0 + lVar1) = uVar16;
    lVar1 = lStack_98;
    func_0x000107c454d4();
    puStack_c0 = puVar5;
    func_0x000107c569fc();
    puVar5 = puStack_a8;
    func_0x000107c53090(puVar12);
    func_0x000107c58d28(puVar12);
    func_0x000107c5a364(puVar12);
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d68aa8);
    uVar16 = uVar9;
    func_0x000107c4d214(uVar9);
    func_0x000107c61180();
    uVar6 = uVar16;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar16);
    func_0x000107c548d8(puVar12);
    func_0x000107c615e8(uVar6);
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d68ac0);
    func_0x000107c4d270(uVar6);
    func_0x000107c61180();
    uVar16 = uVar6;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    func_0x000107c57bcc(puVar12);
    func_0x000107c615e8(uVar16);
    func_0x000107c52ddc(puVar12);
    func_0x000107c52188(puVar12);
    func_0x000107c52a04(puVar12);
    func_0x000107c5283c(puVar12);
    uStack_b8 = uVar10;
    func_0x000107c59f0c(puVar12);
    uVar10 = uVar9;
    func_0x000107c4d810(uVar9);
    func_0x000107c61180();
    uVar16 = uVar10;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    func_0x000107c56b20(puVar12);
    func_0x000107c615e8(uVar16);
    func_0x000107c4d220(uVar9);
    func_0x000107c61180();
    uVar10 = uVar9;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    func_0x000107c54914(puVar12);
    func_0x000107c615e8(uVar10);
    if (((undefined8 *)(unaff_x20 + _DAT_112d68ae0))[1] == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d68ae0);
      func_0x000107c5fadc(uVar10);
    }
    lVar15 = lStack_90;
    func_0x000107c52cc4(puVar12);
    func_0x000107c61170(uVar10);
    func_0x000107c5a0e0(puVar12);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c555f4(puVar12);
    func_0x000107c61170(puVar7);
    func_0x000107c5eea0(lVar13);
    func_0x000107c5ee8c();
    (**(code **)(lStack_a0 + 8))(lVar13,lVar15);
    param_1 = param_1 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012169a4);
      (*pcVar2)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012169a8);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012169ac);
      (*pcVar2)();
    }
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
    func_0x000107c59830(puVar12);
    func_0x000107c61170(puVar7);
    func_0x000107c57390(puVar12);
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d68af8);
    lVar3 = 0;
    FUN_101214fe4();
    lVar4 = lVar3;
    func_0x000107c610f8();
    lVar15 = _DAT_112d689e8;
    func_0x000107c61614(lVar4 + _DAT_112d689e8,0);
    *(undefined8 *)(lVar4 + _DAT_112d689e0) = uVar10;
    func_0x000107c61604(lVar4 + lVar15,unaff_x20);
    puVar7 = PTR_s_init_1125d9248;
    lStack_80 = lVar4;
    lStack_78 = lVar3;
    func_0x000107c615f0(uVar10);
    plVar8 = &lStack_80;
    func_0x000107c61154(plVar8,puVar7);
    func_0x000107c59544(puVar12);
    func_0x000107c61170(puStack_b0);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(puVar5);
    func_0x000107c615e8(lStack_88);
    func_0x000107c61170(uStack_b8);
    func_0x000107c61170(puStack_c0);
    func_0x000107c61170(plVar8);
  }
  return puVar12;
}



/* Entry: 1012169ac; end: 101216a0b; -[SCMusicPickerV2ViewController initWithNibName:bundle:] */

void FUN_1012169ac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMusicPickerV2Host.MusicPickerV2ViewController",0x2f,"init(nibName:bundle:)"
                      ,0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012169d8);
  (*pcVar1)();
}



/* Entry: 101216a0c; end: 101216c17; -[SCMusicPickerV2ViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101216a98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101216ab8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101216ad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101216b18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101216b58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101216b78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101216bdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101216bfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101216be0) */
/* WARNING: Removing unreachable block (ram,0x000101216b7c) */
/* WARNING: Removing unreachable block (ram,0x000101216b5c) */
/* WARNING: Removing unreachable block (ram,0x000101216b1c) */
/* WARNING: Removing unreachable block (ram,0x000101216adc) */
/* WARNING: Removing unreachable block (ram,0x000101216abc) */
/* WARNING: Removing unreachable block (ram,0x000101216a9c) */
/* WARNING: Removing unreachable block (ram,0x000101216c00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101216a0c(long param_1)

{
  FUN_1012170c4(param_1 + _DAT_112d68a18);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d68a30));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d68a38));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d68a40));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d68a48));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d68a50));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d68a58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d68a60));
  return;
}



/* Entry: 101216c18; end: 10121707f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101216c18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 *puVar6;
  long unaff_x20;
  long lStack_78;
  long lStack_70;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d68a18,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d68a20) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d68a28) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d68a30) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d68a38) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d68a40) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d68a48) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d68a50) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112d68a58) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112d68a60) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112d68a68) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112d68a70) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112d68a78) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112d68a80) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112d68a88) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112d68a90) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112d68a98) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112d68aa0) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112d68aa8) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_112d68ab0) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_112d68ab8) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_112d68ac0) = param_19;
  *(undefined8 *)(unaff_x20 + _DAT_112d68ac8) = param_20;
  *(undefined8 *)(unaff_x20 + _DAT_112d68ad0) = param_21;
  *(undefined8 *)(unaff_x20 + _DAT_112d68ad8) = param_22;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d68ae0);
  *puVar1 = param_23;
  puVar1[1] = param_24;
  *(undefined8 *)(unaff_x20 + _DAT_112d68ae8) = param_25;
  *(undefined8 *)(unaff_x20 + _DAT_112d68af0) = param_26;
  *(undefined8 *)(unaff_x20 + _DAT_112d68af8) = param_27;
  *(undefined8 *)(unaff_x20 + _DAT_112d68b00) = param_28;
  func_0x000107c61174();
  func_0x000107c615f0(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c615f0(param_13);
  func_0x000107c615f0(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c615f0(param_17);
  func_0x000107c615f0(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_20);
  func_0x000107c61174(param_21);
  func_0x000107c615f0(param_22);
  func_0x000107c615f0(param_25);
  func_0x000107c615f0(param_26);
  func_0x000107c615f0(param_27);
  func_0x000107c5b664();
  lVar3 = 0;
  FUN_101214b50();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = lVar4 + _DAT_112d68990;
  *(undefined8 *)(lVar2 + 8) = 0;
  func_0x000107c61614(lVar2,0);
  lVar2 = _DAT_112d68998;
  func_0x000107c61614(lVar4 + _DAT_112d68998,0);
  *(undefined1 *)(lVar4 + _DAT_112d689b0) = 0;
  func_0x000107c61604(lVar4 + lVar2,param_29);
  *(undefined8 *)(lVar4 + _DAT_112d689a0) = param_9;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112d689a8);
  *puVar1 = FUN_101213e3c;
  puVar1[1] = 0;
  plVar5 = &lStack_78;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_112d68b08) = plVar5;
  puVar6 = &stack0xffffffffffffff78;
  func_0x000107c61154(puVar6,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  lVar2 = *(long *)(puVar6 + _DAT_112d68b08) + _DAT_112d68990;
  *(undefined ***)(lVar2 + 8) = &PTR_DAT_110394a40;
  func_0x000107c61604(lVar2,puVar6);
  return puVar6;
}



/* Entry: 101217080; end: 1012170a7;  */

void FUN_101217080(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 1012170a8; end: 1012170c3;  */

void FUN_1012170a8(long param_1,long param_2)

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



/* Entry: 1012170c4; end: 1012170e7;  */

undefined8 FUN_1012170c4(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1012170e8; end: 101217107;  */

void FUN_1012170e8(void)

{
  func_0x000107c61168(&PTR_PTR_1127bbf28);
  return;
}



/* Entry: 101217108; end: 101217113;  */

void FUN_101217108(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000101217110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}


