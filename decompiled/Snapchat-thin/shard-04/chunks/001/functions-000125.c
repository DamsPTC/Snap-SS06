/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10319c86c; end: 10319c86f; -[_TtC36SCChatInputStopQueryPluginEntryPoint30SCChatInputStopQueryController didCollapseInputItem:] */

void FUN_10319c86c(void)

{
  return;
}



/* Entry: 10319c870; end: 10319c873; -[_TtC36SCChatInputStopQueryPluginEntryPoint30SCChatInputStopQueryController didUncollapseInputItem:] */

void FUN_10319c870(void)

{
  return;
}



/* Entry: 10319c874; end: 10319c8e7;  */

void FUN_10319c874(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c4dfe8(uVar1);
    func_0x000107c61180();
    FUN_10319c8e8();
    func_0x000107c61170(param_2);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 10319c8e8; end: 10319cb67;  */

/* WARNING: Possible PIC construction at 0x00010319c950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010319c984: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010319ca28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010319ca50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010319cb2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010319caa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010319ca00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010319cb30) */
/* WARNING: Removing unreachable block (ram,0x00010319ca54) */
/* WARNING: Removing unreachable block (ram,0x00010319cacc) */
/* WARNING: Removing unreachable block (ram,0x00010319ca8c) */
/* WARNING: Removing unreachable block (ram,0x00010319cad0) */
/* WARNING: Removing unreachable block (ram,0x00010319c988) */
/* WARNING: Removing unreachable block (ram,0x00010319c994) */
/* WARNING: Removing unreachable block (ram,0x00010319ca04) */
/* WARNING: Removing unreachable block (ram,0x00010319ca2c) */
/* WARNING: Removing unreachable block (ram,0x00010319ca18) */
/* WARNING: Removing unreachable block (ram,0x00010319c954) */
/* WARNING: Removing unreachable block (ram,0x00010319c9fc) */
/* WARNING: Removing unreachable block (ram,0x00010319c958) */
/* WARNING: Removing unreachable block (ram,0x00010319c95c) */
/* WARNING: Removing unreachable block (ram,0x00010319c960) */
/* WARNING: Removing unreachable block (ram,0x00010319ca9c) */
/* WARNING: Removing unreachable block (ram,0x00010319c964) */
/* WARNING: Removing unreachable block (ram,0x00010319caa4) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319c8e8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (param_1 == 0) {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f481e0);
    uVar2 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c6142c(uVar2);
    *(undefined1 *)(unaff_x20 + _DAT_112f481f0) = 0;
    param_1 = unaff_x20 + _DAT_112f481b8;
    func_0x000107c61618();
    if (param_1 == 0) {
      return;
    }
    func_0x000107c56654();
  }
  else {
    func_0x000107c61434(*(undefined8 *)(unaff_x20 + _DAT_112f481e0 + 8));
    func_0x000107c61174(param_1);
    func_0x000107c40674();
    func_0x000107c61180();
    func_0x000107c5faec();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10319cb68; end: 10319cc23;  */

void FUN_10319cb68(undefined **param_1,long param_2,undefined1 *param_3,ulong param_4,int param_5,
                  long param_6)

{
  undefined1 uVar1;
  undefined **ppuVar2;
  long lVar3;
  
  if ((param_4 & 1) == 0) {
LAB_10319cbdc:
    func_0x000107c4fa50();
    uVar1 = 0;
    if ((param_5 != 0) && (param_6 != 0)) {
      func_0x000107c4a5d8();
      uVar1 = (undefined1)param_6;
    }
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e12b58;
    lVar3 = param_2;
    func_0x000107c5faec();
    if (param_1 == ppuVar2 && param_2 == lVar3) {
      func_0x000107c6142c(lVar3);
    }
    else {
      func_0x000107c605b8(param_1,param_2,ppuVar2,lVar3,0);
      func_0x000107c6142c(lVar3);
      if (((ulong)param_1 & 1) == 0) goto LAB_10319cbdc;
    }
    uVar1 = 1;
  }
  *param_3 = uVar1;
  return;
}



/* Entry: 10319cc24; end: 10319cc27;  */

void FUN_10319cc24(void)

{
  return;
}



/* Entry: 10319cc28; end: 10319ccbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319cc28(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (*(char *)(param_2 + _DAT_112f481f0) == '\x01') {
      param_2 = param_2 + _DAT_112f481b8;
      func_0x000107c61618();
      if (param_2 != 0) {
        func_0x000107c56654(param_2);
        func_0x000107c61170(param_2);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10319ccbc; end: 10319cd1b; -[_TtC36SCChatInputStopQueryPluginEntryPoint30SCChatInputStopQueryController init] */

void FUN_10319ccbc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCChatInputStopQueryPluginEntryPoint.SCChatInputStopQueryController",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10319cce8);
  (*pcVar1)();
}



/* Entry: 10319cd1c; end: 10319cdb7; -[_TtC36SCChatInputStopQueryPluginEntryPoint30SCChatInputStopQueryController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010319cd58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010319cd78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010319cd5c) */
/* WARNING: Removing unreachable block (ram,0x00010319cd7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319cd1c(long param_1)

{
  func_0x000100d39b88(param_1 + _DAT_112f481b0);
  func_0x000100d39b88(param_1 + _DAT_112f481b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f481c0));
  return;
}



/* Entry: 10319cdb8; end: 10319cdd7;  */

void FUN_10319cdb8(void)

{
  func_0x000107c61168(&PTR_PTR_1128be0c0);
  return;
}



/* Entry: 10319cdd8; end: 10319ce83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319cdd8(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112f481b8;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = &UNK_1106194e0;
    func_0x000107c613fc(&UNK_1106194e0,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    func_0x00010075a04c(0,1,FUN_10319ce84,puVar2);
    func_0x000107c61574(puVar2);
    func_0x000107c56654(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10319ce84; end: 10319ceaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319ce84(undefined8 *param_1)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  long lVar12;
  long unaff_x20;
  long lVar13;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  puVar11 = (undefined *)*param_1;
  cVar1 = *(char *)(param_1 + 1);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  puVar4 = (undefined *)(unaff_x20 + 0x10);
  func_0x000107c61618();
  if (puVar4 == (undefined *)0x0) {
    return;
  }
  if (cVar1 == '\x01') {
    iVar3 = 2;
    puStack_a8 = puVar11;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar3 != 0) {
      uVar5 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(&puStack_a8,uVar5,PTR___ss5ErrorWS_11034ee10);
    }
  }
  else {
    func_0x000107c44174();
    func_0x000107c61180();
    if (puVar11 != (undefined *)0x0) {
      lVar12 = *(long *)((long)(puVar4 + _DAT_112f481e0) + 8);
      if (lVar12 != 0) {
        lVar13 = *(long *)(puVar4 + _DAT_112f481e0);
        FUN_10319cf04(0,0x112d4e810,&PTR_PTR_1126b0cd8);
        func_0x000107c61434(lVar12);
        func_0x000103c1912c(lVar13,lVar12);
        if (lVar13 != 0) {
          puVar6 = &UNK_110619508;
          func_0x000107c613fc(&UNK_110619508,0x18,7);
          *(long *)(puVar6 + 0x10) = lVar13;
          puVar7 = &UNK_110619530;
          func_0x000107c613fc(&UNK_110619530,0x18,7);
          *(long *)(puVar7 + 0x10) = lVar13;
          puVar8 = PTR_PTR_1126b2730;
          func_0x000107c610f8(PTR_PTR_1126b2730);
          puVar2 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_88 = 0x10319ce8c;
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          puStack_98 = &UNK_1000f6b44;
          puStack_90 = &UNK_110619548;
          ppuVar9 = &puStack_a8;
          puStack_80 = puVar6;
          func_0x000107c60bc4(ppuVar9);
          uStack_b8 = 0x10319ce90;
          puStack_d8 = puVar2;
          uStack_d0 = 0x42000000;
          puStack_c8 = &UNK_1011adf84;
          puStack_c0 = &UNK_110619570;
          ppuVar10 = &puStack_d8;
          puStack_b0 = puVar7;
          func_0x000107c60bc4(ppuVar10);
          func_0x000107c61174(lVar13);
          func_0x000107c61174();
          func_0x000107c48b60(puVar8);
          func_0x000107c60bd0(ppuVar10);
          func_0x000107c60bd0(ppuVar9);
          func_0x000107c61574(puStack_b0);
          func_0x000107c61574(puStack_80);
          func_0x000107c3f4e8(puVar11);
          func_0x000107c61170(puVar4);
          func_0x000107c61170(puVar11);
          func_0x000107c61170(lVar13);
          puVar4 = puVar8;
          goto LAB_10319c800;
        }
      }
      func_0x000107c61170(puVar4);
      puVar4 = puVar11;
    }
  }
LAB_10319c800:
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 10319ceb0; end: 10319cf03;  */

void FUN_10319ceb0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f48228 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10319cf04(0xff,0x112f48230,&PTR_PTR_1126dabe8);
  puVar2 = PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0;
  func_0x000107c61520(PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0,uVar1);
  puRam0000000112f48228 = puVar2;
  return;
}



/* Entry: 10319cf04; end: 10319cf43;  */

void FUN_10319cf04(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10319cf44; end: 10319cf63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319cf44(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + _DAT_112f481f0) == '\x01') {
      lVar1 = lVar1 + _DAT_112f481b8;
      func_0x000107c61618();
      if (lVar1 != 0) {
        func_0x000107c56654(lVar1);
        func_0x000107c61170(lVar1);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10319cf64; end: 10319cf6f; -[_TtC36SCChatInputStopQueryPluginEntryPoint24ChatInputStopQueryPlugin inputContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319cf64(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f48238;
  func_0x000107c61428(param_1 + _DAT_112f48238,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10319cf70; end: 10319cf7b; -[_TtC36SCChatInputStopQueryPluginEntryPoint24ChatInputStopQueryPlugin setInputContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319cf70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f48238;
  func_0x000107c61428(param_1 + _DAT_112f48238,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10319cf7c; end: 10319cf87; -[_TtC36SCChatInputStopQueryPluginEntryPoint24ChatInputStopQueryPlugin inputItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319cf7c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f48240;
  func_0x000107c61428(param_1 + _DAT_112f48240,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10319cf88; end: 10319cfcb;  */

void FUN_10319cf88(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10319cfcc; end: 10319cfd7; -[_TtC36SCChatInputStopQueryPluginEntryPoint24ChatInputStopQueryPlugin setInputItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319cfcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f48240;
  func_0x000107c61428(param_1 + _DAT_112f48240,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10319cfd8; end: 10319d02b;  */

void FUN_10319cfd8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10319d02c; end: 10319d033; -[_TtC36SCChatInputStopQueryPluginEntryPoint24ChatInputStopQueryPlugin position] */

undefined8 FUN_10319d02c(void)

{
  return 0;
}



/* Entry: 10319d034; end: 10319d03b; -[_TtC36SCChatInputStopQueryPluginEntryPoint24ChatInputStopQueryPlugin pluginType] */

undefined8 FUN_10319d034(void)

{
  return 2;
}



/* Entry: 10319d03c; end: 10319d1b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319d03c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_112f48240;
  func_0x000107c61428(unaff_x20 + _DAT_112f48240,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  uVar5 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f12bcf0);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  puVar4 = puVar3;
  func_0x000107c450cc();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  uVar5 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f12bd10);
  func_0x000107c450cc();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  if ((puVar4 != (undefined *)0x0) && (puVar3 != (undefined *)0x0)) {
    func_0x000107c5525c(param_1);
  }
  func_0x000107c5357c(param_1);
  func_0x000107c5a5e8(param_1);
  puVar6 = param_1;
  func_0x000107c55b74();
  func_0x000104397d48();
  uVar5 = *puVar6;
  uVar1 = puVar6[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar5,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c54938(param_1);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 10319d1b4; end: 10319d203; -[_TtC36SCChatInputStopQueryPluginEntryPoint24ChatInputStopQueryPlugin configureInputItem:] */

/* WARNING: Possible PIC construction at 0x00010319d1ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010319d1f0) */

void FUN_10319d1b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10319d03c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10319d204; end: 10319d20b; -[_TtC36SCChatInputStopQueryPluginEntryPoint24ChatInputStopQueryPlugin createDrawer] */

void FUN_10319d204(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 10319d20c; end: 10319d42b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10319d20c(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  code *pcVar9;
  code *pcVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lStack_70;
  long lStack_68;
  
  plVar6 = &lStack_70;
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112f48248);
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112f48250);
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f48258);
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f48260);
  lVar3 = 0;
  FUN_10319cdb8();
  lVar4 = lVar3;
  func_0x000107c610f8();
  func_0x000107c61614(lVar4 + _DAT_112f481b0,0);
  func_0x000107c61614(lVar4 + _DAT_112f481b8,0);
  puVar1 = (undefined8 *)(lVar4 + _DAT_112f481e0);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_112f481e8;
  uVar5 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(lVar4 + lVar2) = uVar5;
  *(undefined1 *)(lVar4 + _DAT_112f481f0) = 0;
  *(undefined8 *)(lVar4 + _DAT_112f481c0) = uVar15;
  *(undefined8 *)(lVar4 + _DAT_112f481c8) = uVar14;
  *(undefined8 *)(lVar4 + _DAT_112f481d0) = uVar13;
  *(undefined8 *)(lVar4 + _DAT_112f481d8) = uVar12;
  puVar8 = PTR_s_init_1125d9248;
  lStack_70 = lVar4;
  lStack_68 = lVar3;
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(uVar12);
  func_0x000107c61154(&lStack_70,puVar8);
  plVar7 = plVar6;
  FUN_10317f5ec();
  func_0x000107c61174();
  func_0x000104884898();
  puVar8 = &UNK_1106195a8;
  func_0x000107c613fc(&UNK_1106195a8,0x18,7);
  func_0x000107c61614(puVar8 + 0x10,plVar6);
  pcVar9 = FUN_10319d538;
  puVar11 = puVar8;
  (**(code **)(*plVar7 + 0x60))(FUN_10319d538);
  func_0x000107c61574(plVar7);
  func_0x000107c61574(puVar8);
  pcVar10 = pcVar9;
  func_0x000107c614f0(pcVar9);
  (**(code **)(puVar11 + 0x18))(*(undefined8 *)((long)plVar6 + _DAT_112f481e8),pcVar10,puVar11);
  func_0x000107c615e8(pcVar9);
  FUN_10319c478();
  func_0x000107c61170(plVar6);
  return plVar6;
}



/* Entry: 10319d42c; end: 10319d45f; -[_TtC36SCChatInputStopQueryPluginEntryPoint24ChatInputStopQueryPlugin createItemController] */

void FUN_10319d42c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10319d20c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10319d460; end: 10319d4bf; -[_TtC36SCChatInputStopQueryPluginEntryPoint24ChatInputStopQueryPlugin init] */

void FUN_10319d460(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCChatInputStopQueryPluginEntryPoint.ChatInputStopQueryPlugin",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10319d48c);
  (*pcVar1)();
}



/* Entry: 10319d4c0; end: 10319d537; -[_TtC36SCChatInputStopQueryPluginEntryPoint24ChatInputStopQueryPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010319d4fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010319d51c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010319d500) */
/* WARNING: Removing unreachable block (ram,0x00010319d520) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319d4c0(long param_1)

{
  func_0x000100d39bd4(param_1 + _DAT_112f48238);
  func_0x000100d39bd4(param_1 + _DAT_112f48240);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f48248));
  return;
}



/* Entry: 10319d538; end: 10319d53f;  */

void FUN_10319d538(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4dfe8(uVar2);
    func_0x000107c61180();
    FUN_10319c8e8();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 10319d540; end: 10319d55f;  */

void FUN_10319d540(void)

{
  func_0x000107c61168(&PTR_PTR_1128be1c0);
  return;
}



/* Entry: 10319d560; end: 10319d567; -[_TtC36SCChatInputStopQueryPluginEntryPoint32ChatInputStopQueryPluginProvider providerType] */

undefined8 FUN_10319d560(void)

{
  return 1;
}



/* Entry: 10319d568; end: 10319d64f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319d568(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f48290) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f48298) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f482a0) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10319d650; end: 10319d6c3; -[_TtC36SCChatInputStopQueryPluginEntryPoint32ChatInputStopQueryPluginProvider createPluginWithActiveConversationInformation:replyAllGroupId:] */

void FUN_10319d650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10319d774(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10319d6c4; end: 10319d6cb; -[_TtC36SCChatInputStopQueryPluginEntryPoint32ChatInputStopQueryPluginProvider createObserverWithActiveConversationInformation:replyAllGroupId:] */

void FUN_10319d6c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 10319d6cc; end: 10319d72b; -[_TtC36SCChatInputStopQueryPluginEntryPoint32ChatInputStopQueryPluginProvider init] */

void FUN_10319d6cc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCChatInputStopQueryPluginEntryPoint.ChatInputStopQueryPluginProvider",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10319d6f8);
  (*pcVar1)();
}



/* Entry: 10319d72c; end: 10319d773; -[_TtC36SCChatInputStopQueryPluginEntryPoint32ChatInputStopQueryPluginProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010319d748: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010319d74c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319d72c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f48290));
  return;
}



/* Entry: 10319d774; end: 10319d89b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319d774(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_50;
  long lStack_48;
  
  uVar4 = 0x112d3b7d0;
  func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
  func_0x0001000b637c(param_1,uVar4);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f48290);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f48298);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f482a0);
  lVar2 = 0;
  FUN_10319d540();
  lVar3 = lVar2;
  func_0x000107c610f8();
  func_0x000107c61614(lVar3 + _DAT_112f48238,0);
  func_0x000107c61614(lVar3 + _DAT_112f48240,0);
  *(undefined8 *)(lVar3 + _DAT_112f48248) = param_1;
  *(undefined8 *)(lVar3 + _DAT_112f48250) = uVar5;
  *(undefined8 *)(lVar3 + _DAT_112f48258) = uVar6;
  *(undefined8 *)(lVar3 + _DAT_112f48260) = uVar4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar4);
  func_0x000107c61154(&lStack_50,puVar1);
  return;
}



/* Entry: 10319d89c; end: 10319d8bb;  */

void FUN_10319d89c(void)

{
  func_0x000107c61168(&PTR_PTR_1128be2a8);
  return;
}



/* Entry: 10319d8bc; end: 10319d8eb;  */

void FUN_10319d8bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10319d8ec; end: 10319e167;  */

void FUN_10319d8ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f467d8,&UNK_10db93a70);
  puVar1 = &UNK_110619678;
  func_0x000107c613fc(&UNK_110619678,0xb8,7);
  *(undefined8 *)(puVar1 + 0x10) = param_10;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_12;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x30) = param_19;
  *(undefined8 *)(puVar1 + 0x38) = param_20;
  *(undefined8 *)(puVar1 + 0x40) = param_16;
  *(undefined8 *)(puVar1 + 0x48) = param_17;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_7;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_5;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_21;
  *(undefined8 *)(puVar1 + 0x80) = param_13;
  *(undefined8 *)(puVar1 + 0x88) = param_8;
  *(undefined8 *)(puVar1 + 0x90) = param_6;
  *(undefined8 *)(puVar1 + 0x98) = param_1;
  *(undefined8 *)(puVar1 + 0xa0) = param_18;
  *(undefined8 *)(puVar1 + 0xa8) = param_15;
  *(undefined8 *)(puVar1 + 0xb0) = param_4;
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(0x10319dad0,puVar1);
  return;
}



/* Entry: 10319e168; end: 10319e177;  */

undefined1  [16] FUN_10319e168(void)

{
  return ZEXT816(0x1106196a0);
}



/* Entry: 10319e178; end: 10319e2af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10319e178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  puVar4 = auStack_70;
  func_0x000107c610f8();
  lVar2 = _DAT_112f48370;
  func_0x000107c61614(unaff_x20 + _DAT_112f48370,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f48378) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f48380) = param_1;
  FUN_1031a0ba4(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  uVar3 = param_2;
  func_0x000107c615f0();
  func_0x00010319f23c();
  *(undefined8 *)(unaff_x20 + _DAT_112f48388) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f48390) = param_3;
  func_0x000107c61604(unaff_x20 + lVar2,param_4);
  *(undefined8 *)(unaff_x20 + _DAT_112f48398) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_3);
  func_0x000107c61154(auStack_70,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  return puVar4;
}



/* Entry: 10319e2b0; end: 10319e367; -[SCChatCommandMenuPresenter initWithScopeExposer:inputContext:textInputObservable:delegate:container:] */

undefined8
FUN_10319e2b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c615f0(param_7);
  uVar1 = param_3;
  FUN_10319ea70(param_3,param_4,param_5,param_6,param_7);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(param_6);
  return uVar1;
}



/* Entry: 10319e368; end: 10319e493;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319e368(void)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  lVar1 = _DAT_112f48378;
  ppuVar2 = &puStack_70;
  if (*(long *)(unaff_x20 + _DAT_112f48378) == 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f48390);
    pcStack_50 = FUN_10319e58c;
    uStack_48 = 0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_10319e74c;
    puStack_58 = &UNK_110619738;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c4c280();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar2);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f48398);
    FUN_1031a2d7c(0);
    func_0x000107c610f8();
    func_0x000107c615f0(uVar5);
    lVar3 = unaff_x20;
    func_0x000107c61174();
    func_0x0001031a2c04();
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = uVar4;
    func_0x000107c61174();
    func_0x000107c61170(uVar5);
    func_0x000107c42c1c(*(undefined8 *)(lVar3 + _DAT_112f48380));
    func_0x000107c61170(uVar4);
  }
  return;
}



/* Entry: 10319e494; end: 10319e4bb; -[SCChatCommandMenuPresenter presentChatCommandMenu] */

void FUN_10319e494(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10319e368();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10319e4bc; end: 10319e563;  */

/* WARNING: Possible PIC construction at 0x00010319e538: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010319e53c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319e4bc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  FUN_1031a06b4();
  lVar1 = *(long *)(unaff_x20 + _DAT_112f48378);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112f484e0);
    func_0x000107c61174();
    func_0x000107c41864(uVar2,param_2,0);
    func_0x000107c4ffec(*(undefined8 *)(unaff_x20 + _DAT_112f48380),param_2,lVar1);
    func_0x000107c61180();
    func_0x000107c615e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10319e564; end: 10319e58b; -[SCChatCommandMenuPresenter dismissChatCommandMenu] */

void FUN_10319e564(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10319e4bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10319e58c; end: 10319e74b;  */

void FUN_10319e58c(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar4 = param_2;
  func_0x000107c4db20();
  func_0x000107c61180();
  if (lVar4 == 0) {
    lVar6 = 0;
    lVar4 = 0;
    lVar1 = param_3;
  }
  else {
    lVar6 = lVar4;
    func_0x000107c5faec();
    lVar1 = param_3;
    func_0x000107c61170(lVar4);
    lVar4 = param_3;
  }
  lVar7 = param_2;
  func_0x000107c5d6f4();
  func_0x000107c61180();
  if (lVar7 == 0) {
    lVar5 = 0;
    lVar7 = 0;
    lVar9 = lVar1;
  }
  else {
    lVar5 = lVar7;
    func_0x000107c5faec();
    lVar9 = lVar1;
    func_0x000107c61170(lVar7);
    lVar7 = lVar1;
  }
  lVar1 = param_2;
  func_0x000107c3d970();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar8 = 0;
    lVar9 = 0;
  }
  else {
    lVar8 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
  }
  func_0x000107c3f7d8(param_2);
  if (lVar4 == 0) {
    lVar6 = 0;
  }
  else {
    func_0x000107c5fadc(lVar6,lVar4);
    func_0x000107c6142c(lVar4);
  }
  if (lVar7 == 0) {
    lVar5 = 0;
  }
  else {
    func_0x000107c5fadc(lVar5,lVar7);
    func_0x000107c6142c(lVar7);
  }
  if (lVar9 == 0) {
    lVar8 = 0;
  }
  else {
    func_0x000107c5fadc(lVar8,lVar9);
    func_0x000107c6142c(lVar9);
  }
  puVar2 = PTR_PTR_1126acd38;
  func_0x000107c610f8();
  func_0x000107c47bc8();
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar8);
  uVar3 = 0;
  FUN_10319ebd8(0,0x112f483c8,&PTR_PTR_1126acd38);
  param_1[3] = uVar3;
  *param_1 = puVar2;
  return;
}



/* Entry: 10319e74c; end: 10319e7cf;  */

void FUN_10319e74c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar3 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_50);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  func_0x0001006732c8(auStack_50,uStack_38);
  func_0x000107c605b0();
  func_0x000100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10319e7d0; end: 10319e82b; -[SCChatCommandMenuPresenter didSelectChatCommandWithType:replacementRange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319e7d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174();
  FUN_10319f364(param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10319e82c; end: 10319e85f; -[SCChatCommandMenuPresenter didDismissChatCommandMenu] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319e82c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10319fbbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10319e860; end: 10319e8a3; -[SCChatCommandMenuPresenter willShowChatCommandMenu] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319e860(long param_1)

{
  param_1 = param_1 + _DAT_112f48370;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c3f848();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 10319e8a4; end: 10319e8e7; -[SCChatCommandMenuPresenter didHideChatCommandMenu] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319e8a4(long param_1)

{
  param_1 = param_1 + _DAT_112f48370;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c3f844();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 10319e8e8; end: 10319e963; -[SCChatCommandMenuPresenter styleCommandTokens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319e8e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10319ebd8(0,0x112d657d8,&PTR_PTR_1126a6548);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  FUN_10319fc50(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 10319e964; end: 10319e997; -[SCChatCommandMenuPresenter clearCommandTokenStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319e964(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1031a06b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10319e998; end: 10319e9f7; -[SCChatCommandMenuPresenter init] */

void FUN_10319e998(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCChatCommandMenuPresenter.SCChatCommandMenuPresenter",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10319e9c4);
  (*pcVar1)();
}



/* Entry: 10319e9f8; end: 10319ea6f; -[SCChatCommandMenuPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010319ea14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010319ea34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010319ea18) */
/* WARNING: Removing unreachable block (ram,0x00010319ea38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319e9f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f48380));
  return;
}



/* Entry: 10319ea70; end: 10319eb77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319ea70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar2 = _DAT_112f48370;
  func_0x000107c61614(unaff_x20 + _DAT_112f48370,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f48378) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f48380) = param_1;
  FUN_1031a0ba4(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c615f0();
  func_0x00010319f23c();
  *(undefined8 *)(unaff_x20 + _DAT_112f48388) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f48390) = param_3;
  func_0x000107c61604(unaff_x20 + lVar2,param_4);
  *(undefined8 *)(unaff_x20 + _DAT_112f48398) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&stack0xffffffffffffff90,puVar1);
  return;
}



/* Entry: 10319eb78; end: 10319eb93;  */

void FUN_10319eb78(long param_1,long param_2)

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



/* Entry: 10319eb94; end: 10319ebb7;  */

undefined8 FUN_10319eb94(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10319ebb8; end: 10319ebd7;  */

void FUN_10319ebb8(void)

{
  func_0x000107c61168(&PTR_PTR_1128be378);
  return;
}



/* Entry: 10319ebd8; end: 10319ec17;  */

void FUN_10319ebd8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10319ec18; end: 10319ec4b;  */

void FUN_10319ec18(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f12be20);
  uRam0000000113806f18 = uVar1;
  return;
}



/* Entry: 10319ec4c; end: 10319ec67; +[SCChatCommandAttributes commandTypeKey] */

void FUN_10319ec4c(void)

{
  if (lRam0000000112f483d0 != -1) {
    func_0x000107c61568(0x112f483d0,FUN_10319ec18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113806f18);
  return;
}



/* Entry: 10319ec68; end: 10319ec9b;  */

void FUN_10319ec68(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f12be00);
  uRam0000000113806f20 = uVar1;
  return;
}



/* Entry: 10319ec9c; end: 10319ecb7; +[SCChatCommandAttributes styleMarkerKey] */

void FUN_10319ec9c(void)

{
  if (lRam0000000112f483d8 != -1) {
    func_0x000107c61568(0x112f483d8,FUN_10319ec68);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113806f20);
  return;
}



/* Entry: 10319ecb8; end: 10319ecfb;  */

void FUN_10319ecb8(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  if (*param_3 == -1) {
    uVar1 = *param_4;
  }
  else {
    func_0x000107c61568(param_3,param_5);
    uVar1 = *param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uVar1);
  return;
}



/* Entry: 10319ecfc; end: 10319ef1f;  */

/* WARNING: Possible PIC construction at 0x00010319edf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010319edf4) */
/* WARNING: Removing unreachable block (ram,0x00010319ef04) */
/* WARNING: Removing unreachable block (ram,0x00010319ee5c) */
/* WARNING: Removing unreachable block (ram,0x00010319ef08) */
/* WARNING: Removing unreachable block (ram,0x00010319ee6c) */

void FUN_10319ecfc(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  puVar1 = param_1;
  func_0x000107c4adac();
  if (0 < (long)puVar1) {
    puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    func_0x000107c610f8();
    func_0x000107c45820();
    func_0x000107c4adac(param_1);
    if (lRam0000000112f483d8 != -1) {
      func_0x000107c61568(0x112f483d8,FUN_10319ec68);
    }
    puVar2 = &UNK_1106197f8;
    func_0x000107c613fc(&UNK_1106197f8,0x20,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
    puVar3 = &UNK_110619820;
    func_0x000107c613fc(&UNK_110619820,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = 0x10319f0e4;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    pcStack_60 = FUN_10319f0ec;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_101abda9c;
    puStack_68 = &UNK_110619838;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    param_1 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 10319ef20; end: 10319f00b;  */

/* WARNING: Possible PIC construction at 0x00010319ef68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010319efac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010319ef6c) */
/* WARNING: Removing unreachable block (ram,0x00010319eff4) */
/* WARNING: Removing unreachable block (ram,0x00010319ef7c) */
/* WARNING: Removing unreachable block (ram,0x00010319efb0) */

void FUN_10319ef20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    if (lRam0000000112f483d8 != -1) {
      func_0x000107c61568(0x112f483d8,FUN_10319ec68);
    }
                    /* WARNING: Could not recover jumptable at 0x00010c12b3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_5,PTR_s_removeAttribute_range__112628710,uRam0000000113806f20,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 10319f00c; end: 10319f02b;  */

void FUN_10319f00c(void)

{
  code *in_x4;
  
  (*in_x4)();
  return;
}



/* Entry: 10319f02c; end: 10319f06f; +[SCChatCommandAttributes textByRemovingChatCommandAttributes:] */

void FUN_10319f02c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c614ec();
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_10319ecfc();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10319f070; end: 10319f0ab; -[SCChatCommandAttributes init] */

void FUN_10319f070(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10319f0ac; end: 10319f0df;  */

void FUN_10319f0ac(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10319f0e0; end: 10319f0eb; -[SCChatCommandAttributes .cxx_destruct] */

void FUN_10319f0e0(void)

{
  return;
}



/* Entry: 10319f0ec; end: 10319f10b;  */

void FUN_10319f0ec(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10319f10c; end: 10319f127;  */

void FUN_10319f10c(long param_1,long param_2)

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



/* Entry: 10319f128; end: 10319f147;  */

void FUN_10319f128(void)

{
  func_0x000107c61168(&PTR_PTR_1128be460);
  return;
}



/* Entry: 10319f148; end: 10319f15b;  */

void FUN_10319f148(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110619870;
  if (lRam0000000112f48408 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112f48408 = param_1;
  }
  return;
}



/* Entry: 10319f15c; end: 10319f19f;  */

void FUN_10319f15c(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 10319f1a0; end: 10319f2d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10319f1a0(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  lVar1 = _DAT_112f48410;
  func_0x000107c61614(unaff_x20 + _DAT_112f48410,0);
  *(undefined **)(unaff_x20 + _DAT_112f48418) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + _DAT_112f48420) = 0;
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  return puVar2;
}



/* Entry: 10319f2d8; end: 10319f363; -[SCChatCommandManager initWithInputContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319f2d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112f48410;
  func_0x000107c61614(param_1 + _DAT_112f48410,0);
  *(undefined **)(param_1 + _DAT_112f48418) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(param_1 + _DAT_112f48420) = 0;
  func_0x000107c61604(param_1 + lVar1,param_3);
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10319f364; end: 10319f457;  */

void FUN_10319f364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  uVar1 = unaff_x20;
  func_0x000107c614f0();
  pcVar2 = "selectChatCommand(withType:replacementRange:)";
  func_0x0001000c10c0("selectChatCommand(withType:replacementRange:)");
  func_0x000107c61180();
  puVar3 = &UNK_110619890;
  func_0x000107c613fc(&UNK_110619890,0x38,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  *(undefined8 *)(puVar3 + 0x28) = param_1;
  *(undefined8 *)(puVar3 + 0x30) = uVar1;
  pcStack_50 = FUN_10319f768;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1106198a8;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c61174();
  func_0x000107c61574(puVar3);
  func_0x000107c4e590(pcVar2);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 10319f458; end: 10319f767;  */

/* WARNING: Possible PIC construction at 0x00010319f72c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010319f730) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319f458(long param_1,long param_2,long param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  lVar2 = param_1 + _DAT_112f48410;
  func_0x000107c61618();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = lVar2;
  func_0x000107c5c8a8();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5c8a0();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar4;
  func_0x000107c4adac();
  func_0x000107c61170(lVar4);
  if ((((-1 < param_2) && (-1 < param_3)) && (param_2 <= lVar3)) && (param_3 <= lVar3 - param_2)) {
    if (param_4 == 0) {
      uVar9 = 0xe400000000000000;
      uVar5 = 0x7a697571;
    }
    else {
      if (param_4 != 1) goto code_r0x000107c615e8;
      uVar9 = 0xea00000000007364;
      uVar5 = 0x7261636873616c66;
    }
    func_0x000107c5fb78(uVar5,uVar9);
    func_0x000107c6142c(uVar9);
    func_0x000107c5fb78(0x20,0xe100000000000000);
    lVar3 = 0x2f;
    lVar4 = lVar3;
    func_0x000107c5fadc(0x2f,0xe100000000000000);
    lVar6 = lVar4;
    func_0x000107c4adac();
    func_0x000107c61170(lVar4);
    puVar7 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
    func_0x000107c5fadc(0x2f,0xe100000000000000);
    func_0x000107c6142c(0xe100000000000000);
    func_0x000107c48af4(puVar7);
    func_0x000107c61170(lVar3);
    FUN_10319f76c(param_4);
    uVar9 = 0;
    func_0x000100eca28c(0);
    uVar5 = uVar9;
    func_0x000100ecbdec();
    lVar3 = param_4;
    func_0x000107c5f9dc(param_4,uVar9,PTR___sypN_11034f1a8 + 8,uVar5);
    func_0x000107c6142c(param_4);
    if (SBORROW8(lVar6,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10319f760);
      (*pcVar1)();
    }
    func_0x000107c529d4(puVar7);
    func_0x000107c61170(lVar3);
    func_0x000107c49718(lVar2);
    if (SCARRY8(param_2,lVar6)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10319f764);
      (*pcVar1)();
    }
    if (SBORROW8(param_2 + lVar6,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10319f768);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c5068c();
    func_0x0001011ce4f8();
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 3;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    puVar8 = PTR_PTR_1126a6548;
    func_0x000107c610f8();
    func_0x000107c48ee8();
    *(undefined **)(lVar3 + 0x20) = puVar8;
    uVar5 = *(undefined8 *)(param_1 + _DAT_112f48418);
    *(long *)(param_1 + _DAT_112f48418) = lVar3;
    func_0x000107c6142c(uVar5);
    lVar3 = lVar2;
    func_0x000107c5c8a8(lVar2);
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c8a0();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c4adac(lVar4);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(puVar7);
  }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 10319f768; end: 10319f76b;  */

/* WARNING: Possible PIC construction at 0x00010319f72c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010319f730) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319f768(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long unaff_x20;
  undefined8 uVar12;
  
  lVar11 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  lVar9 = *(long *)(unaff_x20 + 0x28);
  lVar3 = lVar11 + _DAT_112f48410;
  func_0x000107c61618();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = lVar3;
  func_0x000107c5c8a8();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c5c8a0();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  lVar4 = lVar5;
  func_0x000107c4adac();
  func_0x000107c61170(lVar5);
  if ((((-1 < lVar1) && (-1 < lVar8)) && (lVar1 <= lVar4)) && (lVar8 <= lVar4 - lVar1)) {
    if (lVar9 == 0) {
      uVar12 = 0xe400000000000000;
      uVar6 = 0x7a697571;
    }
    else {
      if (lVar9 != 1) goto code_r0x000107c615e8;
      uVar12 = 0xea00000000007364;
      uVar6 = 0x7261636873616c66;
    }
    func_0x000107c5fb78(uVar6,uVar12);
    func_0x000107c6142c(uVar12);
    func_0x000107c5fb78(0x20,0xe100000000000000);
    lVar8 = 0x2f;
    lVar4 = lVar8;
    func_0x000107c5fadc(0x2f,0xe100000000000000);
    lVar5 = lVar4;
    func_0x000107c4adac();
    func_0x000107c61170(lVar4);
    puVar7 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
    func_0x000107c5fadc(0x2f,0xe100000000000000);
    func_0x000107c6142c(0xe100000000000000);
    func_0x000107c48af4(puVar7);
    func_0x000107c61170(lVar8);
    FUN_10319f76c(lVar9);
    uVar12 = 0;
    func_0x000100eca28c(0);
    uVar6 = uVar12;
    func_0x000100ecbdec();
    lVar8 = lVar9;
    func_0x000107c5f9dc(lVar9,uVar12,PTR___sypN_11034f1a8 + 8,uVar6);
    func_0x000107c6142c(lVar9);
    if (SBORROW8(lVar5,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10319f760);
      (*pcVar2)();
    }
    func_0x000107c529d4(puVar7);
    func_0x000107c61170(lVar8);
    func_0x000107c49718(lVar3);
    if (SCARRY8(lVar1,lVar5)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10319f764);
      (*pcVar2)();
    }
    if (SBORROW8(lVar1 + lVar5,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10319f768);
      (*pcVar2)();
    }
    lVar8 = lVar3;
    func_0x000107c5068c();
    func_0x0001011ce4f8();
    func_0x000107c613fc();
    *(undefined8 *)(lVar8 + 0x18) = 3;
    *(undefined8 *)(lVar8 + 0x10) = 1;
    puVar10 = PTR_PTR_1126a6548;
    func_0x000107c610f8();
    func_0x000107c48ee8();
    *(undefined **)(lVar8 + 0x20) = puVar10;
    uVar6 = *(undefined8 *)(lVar11 + _DAT_112f48418);
    *(long *)(lVar11 + _DAT_112f48418) = lVar8;
    func_0x000107c6142c(uVar6);
    lVar11 = lVar3;
    func_0x000107c5c8a8(lVar3);
    func_0x000107c61180();
    lVar8 = lVar11;
    func_0x000107c5c8a0();
    func_0x000107c61180();
    func_0x000107c61170(lVar11);
    func_0x000107c4adac(lVar8);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(puVar7);
  }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
  return;
}



/* Entry: 10319f76c; end: 10319fa93;  */

undefined8 * FUN_10319f76c(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *apuStack_108 [3];
  long lStack_f0;
  undefined8 auStack_e8 [18];
  undefined8 *puStack_58;
  
  puVar1 = (undefined8 *)0x112d48380;
  func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
  func_0x000107c61534();
  puVar1[3] = 4;
  puVar1[2] = 2;
  uVar6 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar4 = puVar1 + 4;
  *puVar4 = uVar6;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c61174(uVar6);
  func_0x000107c5af88();
  func_0x000107c61180();
  uVar6 = 0;
  FUN_1031a13f8(0,0x112d48390,&PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar1[8] = uVar6;
  puVar1[5] = puVar2;
  if (lRam0000000112f483d8 != -1) {
    func_0x000107c61568(0x112f483d8,FUN_10319ec68);
  }
  puVar1[9] = uRam0000000113806f20;
  puVar1[0xd] = PTR___sSbN_11034dd40;
  *(undefined1 *)(puVar1 + 10) = 1;
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000100ecbca8();
  func_0x000107c61588(puVar1);
  uVar6 = 0x112d48398;
  func_0x0001000285a8(0x112d48398,&UNK_10d90f130);
  func_0x000107c61408(puVar4,2,uVar6);
  puStack_58 = puVar3;
  if ((param_1 == 0) || (param_1 == 1)) {
    puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c46ecc();
    puVar4 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      if (lRam0000000112f483d0 != -1) {
        func_0x000107c61568(0x112f483d0,FUN_10319ec18);
      }
      puVar4 = puRam0000000113806f18;
      lVar5 = 0;
      FUN_1031a13f8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      apuStack_108[0] = puVar1;
      lStack_f0 = lVar5;
      if (lVar5 == 0) {
        func_0x000107c61174(puVar4);
        func_0x00010006e7f4(apuStack_108);
        func_0x000101aa2560(auStack_e8,puVar4);
        func_0x000107c61170(puVar4);
        puVar4 = auStack_e8;
        func_0x00010006e7f4();
      }
      else {
        func_0x000100102924(apuStack_108,auStack_e8);
        func_0x000107c61174();
        puVar1 = puVar3;
        func_0x000107c61558(puVar3);
        apuStack_108[0] = puVar3;
        func_0x000101aa2624(auStack_e8,puVar4,puVar1);
        func_0x000107c61170();
        puStack_58 = apuStack_108[0];
      }
    }
  }
  FUN_1031a09bc();
  if (puVar4 != (undefined8 *)0x0) {
    uVar6 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    lVar5 = 0;
    FUN_1031a13f8(0,0x112d48388,&PTR__OBJC_CLASS___UIFont_1126aec38);
    apuStack_108[0] = puVar4;
    lStack_f0 = lVar5;
    if (lVar5 == 0) {
      func_0x000107c61174(uVar6);
      func_0x00010006e7f4(apuStack_108);
      func_0x000101aa2560(auStack_e8,uVar6);
      func_0x000107c61170(uVar6);
      func_0x00010006e7f4(auStack_e8);
    }
    else {
      func_0x000100102924(apuStack_108,auStack_e8);
      func_0x000107c61174(uVar6);
      puVar1 = puStack_58;
      puVar4 = puStack_58;
      func_0x000107c61558(puStack_58);
      apuStack_108[0] = puVar1;
      func_0x000101aa2624(auStack_e8,uVar6,puVar4);
      func_0x000107c61170(uVar6);
      puStack_58 = apuStack_108[0];
    }
  }
  return puStack_58;
}



/* Entry: 10319fa94; end: 10319faaf;  */

void FUN_10319fa94(long param_1,long param_2)

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



/* Entry: 10319fab0; end: 10319fbbb; -[SCChatCommandManager selectChatCommandWithType:replacementRange:] */

void FUN_10319fab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  uVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61174();
  pcVar2 = "selectChatCommand(withType:replacementRange:)";
  func_0x0001000c10c0("selectChatCommand(withType:replacementRange:)");
  func_0x000107c61180();
  puVar3 = &UNK_110619ac0;
  func_0x000107c613fc(&UNK_110619ac0,0x38,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  *(undefined8 *)(puVar3 + 0x20) = param_5;
  *(undefined8 *)(puVar3 + 0x28) = param_3;
  *(undefined8 *)(puVar3 + 0x30) = uVar1;
  uStack_50 = 0x1031a14d8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110619ad8;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar3);
  func_0x000107c4e590(pcVar2);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 10319fbbc; end: 10319fbdf;  */

void FUN_10319fbbc(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  pcVar1 = "clearInput()";
  puVar2 = &UNK_1106198e0;
  ppuVar3 = &puStack_70;
  func_0x0001000c10c0("clearInput()");
  func_0x000107c61180();
  func_0x000107c613fc(&UNK_1106198e0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
  pcStack_50 = FUN_10319fc24;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1106198f8;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174();
  func_0x000107c61574(puVar2);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 10319fbe0; end: 10319fc23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319fbe0(long param_1)

{
  param_1 = param_1 + _DAT_112f48410;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c3fb20();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 10319fc24; end: 10319fc2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319fc24(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10) + _DAT_112f48410;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c3fb20();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 10319fc2c; end: 10319fc4f; -[SCChatCommandManager clearInput] */

void FUN_10319fc2c(undefined8 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  pcVar1 = "clearInput()";
  puVar2 = &UNK_110619a70;
  ppuVar3 = &puStack_70;
  func_0x000107c61174();
  func_0x0001000c10c0("clearInput()");
  func_0x000107c61180();
  func_0x000107c613fc(&UNK_110619a70,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  uStack_50 = 0x1031a14c4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110619a88;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 10319fc50; end: 10319fd3f;  */

void FUN_10319fc50(undefined8 param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  uVar1 = unaff_x20;
  func_0x000107c614f0();
  pcVar2 = "styleCommandTokens(_:)";
  func_0x0001000c10c0("styleCommandTokens(_:)");
  func_0x000107c61180();
  puVar3 = &UNK_110619930;
  func_0x000107c613fc(&UNK_110619930,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = uVar1;
  pcStack_50 = FUN_1031a0248;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110619948;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c61174();
  func_0x000107c61434(param_1);
  func_0x000107c61574(puVar3);
  func_0x000107c4e590(pcVar2);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 10319fd40; end: 1031a0247;  */

/* WARNING: Possible PIC construction at 0x00010319fdb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010319ff50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010319ff84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031a0114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031a0048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031a01a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010319fef0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031a01a4) */
/* WARNING: Removing unreachable block (ram,0x0001031a004c) */
/* WARNING: Removing unreachable block (ram,0x0001031a0118) */
/* WARNING: Removing unreachable block (ram,0x0001031a0130) */
/* WARNING: Removing unreachable block (ram,0x0001031a0134) */
/* WARNING: Removing unreachable block (ram,0x0001031a0138) */
/* WARNING: Removing unreachable block (ram,0x00010319fff8) */
/* WARNING: Removing unreachable block (ram,0x0001031a0160) */
/* WARNING: Removing unreachable block (ram,0x0001031a0168) */
/* WARNING: Removing unreachable block (ram,0x0001031a0000) */
/* WARNING: Removing unreachable block (ram,0x0001031a0008) */
/* WARNING: Removing unreachable block (ram,0x0001031a0020) */
/* WARNING: Removing unreachable block (ram,0x0001031a013c) */
/* WARNING: Removing unreachable block (ram,0x0001031a0034) */
/* WARNING: Removing unreachable block (ram,0x00010319ff88) */
/* WARNING: Removing unreachable block (ram,0x00010319fdb4) */
/* WARNING: Removing unreachable block (ram,0x00010319fdb8) */
/* WARNING: Removing unreachable block (ram,0x0001031a01f4) */
/* WARNING: Removing unreachable block (ram,0x0001031a01fc) */
/* WARNING: Removing unreachable block (ram,0x00010319fde4) */
/* WARNING: Removing unreachable block (ram,0x00010319fdec) */
/* WARNING: Removing unreachable block (ram,0x0001031a020c) */
/* WARNING: Removing unreachable block (ram,0x0001031a0214) */
/* WARNING: Removing unreachable block (ram,0x0001031a0224) */
/* WARNING: Removing unreachable block (ram,0x00010319fdf8) */
/* WARNING: Removing unreachable block (ram,0x00010319fe08) */
/* WARNING: Removing unreachable block (ram,0x0001031a022c) */
/* WARNING: Removing unreachable block (ram,0x0001031a0238) */
/* WARNING: Removing unreachable block (ram,0x00010319fe1c) */
/* WARNING: Removing unreachable block (ram,0x00010319fe28) */
/* WARNING: Removing unreachable block (ram,0x00010319fe38) */
/* WARNING: Removing unreachable block (ram,0x00010319fef4) */
/* WARNING: Removing unreachable block (ram,0x00010319fe5c) */
/* WARNING: Removing unreachable block (ram,0x00010319ff28) */
/* WARNING: Removing unreachable block (ram,0x00010319ff54) */
/* WARNING: Removing unreachable block (ram,0x00010319ff70) */
/* WARNING: Removing unreachable block (ram,0x00010319ff80) */
/* WARNING: Removing unreachable block (ram,0x00010319fe68) */
/* WARNING: Removing unreachable block (ram,0x00010319ff08) */
/* WARNING: Removing unreachable block (ram,0x00010319fe74) */
/* WARNING: Removing unreachable block (ram,0x0001031a01ec) */
/* WARNING: Removing unreachable block (ram,0x00010319fe84) */
/* WARNING: Removing unreachable block (ram,0x00010319fe8c) */
/* WARNING: Removing unreachable block (ram,0x0001031a01e8) */
/* WARNING: Removing unreachable block (ram,0x00010319fe98) */
/* WARNING: Removing unreachable block (ram,0x00010319feb0) */
/* WARNING: Removing unreachable block (ram,0x00010319fea0) */
/* WARNING: Removing unreachable block (ram,0x00010319fec0) */
/* WARNING: Removing unreachable block (ram,0x00010319ff18) */
/* WARNING: Removing unreachable block (ram,0x00010319fec4) */
/* WARNING: Removing unreachable block (ram,0x0001031a01f0) */
/* WARNING: Removing unreachable block (ram,0x00010319fed0) */
/* WARNING: Removing unreachable block (ram,0x00010319fed8) */
/* WARNING: Removing unreachable block (ram,0x00010319feac) */
/* WARNING: Removing unreachable block (ram,0x00010319ff3c) */
/* WARNING: Removing unreachable block (ram,0x00010319ff04) */
/* WARNING: Removing unreachable block (ram,0x00010319ffac) */
/* WARNING: Removing unreachable block (ram,0x00010319ffbc) */
/* WARNING: Removing unreachable block (ram,0x0001031a0174) */
/* WARNING: Removing unreachable block (ram,0x0001031a017c) */
/* WARNING: Removing unreachable block (ram,0x00010319ffd0) */
/* WARNING: Removing unreachable block (ram,0x0001031a018c) */
/* WARNING: Removing unreachable block (ram,0x0001031a0194) */
/* WARNING: Removing unreachable block (ram,0x00010319ffdc) */
/* WARNING: Removing unreachable block (ram,0x0001031a0228) */
/* WARNING: Removing unreachable block (ram,0x00010319ffe4) */
/* WARNING: Removing unreachable block (ram,0x0001031a0054) */
/* WARNING: Removing unreachable block (ram,0x0001031a0068) */
/* WARNING: Removing unreachable block (ram,0x0001031a0058) */
/* WARNING: Removing unreachable block (ram,0x0001031a0074) */
/* WARNING: Removing unreachable block (ram,0x0001031a0090) */
/* WARNING: Removing unreachable block (ram,0x0001031a0094) */
/* WARNING: Removing unreachable block (ram,0x0001031a009c) */
/* WARNING: Removing unreachable block (ram,0x0001031a0040) */
/* WARNING: Removing unreachable block (ram,0x0001031a00a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319fd40(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112f48410;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c5c8a8();
    func_0x000107c61180();
    func_0x000107c615e8(param_1);
    func_0x000107c5c8a0(lVar1);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1031a0248; end: 1031a0253;  */

/* WARNING: Possible PIC construction at 0x00010319fdb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010319ff50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010319ff84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031a0114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031a0048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031a01a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010319fef0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031a01a4) */
/* WARNING: Removing unreachable block (ram,0x0001031a004c) */
/* WARNING: Removing unreachable block (ram,0x0001031a0118) */
/* WARNING: Removing unreachable block (ram,0x0001031a0130) */
/* WARNING: Removing unreachable block (ram,0x0001031a0134) */
/* WARNING: Removing unreachable block (ram,0x0001031a0138) */
/* WARNING: Removing unreachable block (ram,0x00010319fff8) */
/* WARNING: Removing unreachable block (ram,0x0001031a0160) */
/* WARNING: Removing unreachable block (ram,0x0001031a0168) */
/* WARNING: Removing unreachable block (ram,0x0001031a0000) */
/* WARNING: Removing unreachable block (ram,0x0001031a0008) */
/* WARNING: Removing unreachable block (ram,0x0001031a0020) */
/* WARNING: Removing unreachable block (ram,0x0001031a013c) */
/* WARNING: Removing unreachable block (ram,0x0001031a0034) */
/* WARNING: Removing unreachable block (ram,0x00010319ff88) */
/* WARNING: Removing unreachable block (ram,0x00010319fdb4) */
/* WARNING: Removing unreachable block (ram,0x00010319fdb8) */
/* WARNING: Removing unreachable block (ram,0x0001031a01f4) */
/* WARNING: Removing unreachable block (ram,0x0001031a01fc) */
/* WARNING: Removing unreachable block (ram,0x00010319fde4) */
/* WARNING: Removing unreachable block (ram,0x00010319fdec) */
/* WARNING: Removing unreachable block (ram,0x0001031a020c) */
/* WARNING: Removing unreachable block (ram,0x0001031a0214) */
/* WARNING: Removing unreachable block (ram,0x0001031a0224) */
/* WARNING: Removing unreachable block (ram,0x00010319fdf8) */
/* WARNING: Removing unreachable block (ram,0x00010319fe08) */
/* WARNING: Removing unreachable block (ram,0x0001031a022c) */
/* WARNING: Removing unreachable block (ram,0x0001031a0238) */
/* WARNING: Removing unreachable block (ram,0x00010319fe1c) */
/* WARNING: Removing unreachable block (ram,0x00010319fe28) */
/* WARNING: Removing unreachable block (ram,0x00010319fe38) */
/* WARNING: Removing unreachable block (ram,0x00010319fef4) */
/* WARNING: Removing unreachable block (ram,0x00010319fe5c) */
/* WARNING: Removing unreachable block (ram,0x00010319ff28) */
/* WARNING: Removing unreachable block (ram,0x00010319ff54) */
/* WARNING: Removing unreachable block (ram,0x00010319ff70) */
/* WARNING: Removing unreachable block (ram,0x00010319ff80) */
/* WARNING: Removing unreachable block (ram,0x00010319fe68) */
/* WARNING: Removing unreachable block (ram,0x00010319ff08) */
/* WARNING: Removing unreachable block (ram,0x00010319fe74) */
/* WARNING: Removing unreachable block (ram,0x0001031a01ec) */
/* WARNING: Removing unreachable block (ram,0x00010319fe84) */
/* WARNING: Removing unreachable block (ram,0x00010319fe8c) */
/* WARNING: Removing unreachable block (ram,0x0001031a01e8) */
/* WARNING: Removing unreachable block (ram,0x00010319fe98) */
/* WARNING: Removing unreachable block (ram,0x00010319feb0) */
/* WARNING: Removing unreachable block (ram,0x00010319fea0) */
/* WARNING: Removing unreachable block (ram,0x00010319fec0) */
/* WARNING: Removing unreachable block (ram,0x00010319ff18) */
/* WARNING: Removing unreachable block (ram,0x00010319fec4) */
/* WARNING: Removing unreachable block (ram,0x0001031a01f0) */
/* WARNING: Removing unreachable block (ram,0x00010319fed0) */
/* WARNING: Removing unreachable block (ram,0x00010319fed8) */
/* WARNING: Removing unreachable block (ram,0x00010319feac) */
/* WARNING: Removing unreachable block (ram,0x00010319ff3c) */
/* WARNING: Removing unreachable block (ram,0x00010319ff04) */
/* WARNING: Removing unreachable block (ram,0x00010319ffac) */
/* WARNING: Removing unreachable block (ram,0x00010319ffbc) */
/* WARNING: Removing unreachable block (ram,0x0001031a0174) */
/* WARNING: Removing unreachable block (ram,0x0001031a017c) */
/* WARNING: Removing unreachable block (ram,0x00010319ffd0) */
/* WARNING: Removing unreachable block (ram,0x0001031a018c) */
/* WARNING: Removing unreachable block (ram,0x0001031a0194) */
/* WARNING: Removing unreachable block (ram,0x00010319ffdc) */
/* WARNING: Removing unreachable block (ram,0x0001031a0228) */
/* WARNING: Removing unreachable block (ram,0x00010319ffe4) */
/* WARNING: Removing unreachable block (ram,0x0001031a0054) */
/* WARNING: Removing unreachable block (ram,0x0001031a0068) */
/* WARNING: Removing unreachable block (ram,0x0001031a0058) */
/* WARNING: Removing unreachable block (ram,0x0001031a0074) */
/* WARNING: Removing unreachable block (ram,0x0001031a0090) */
/* WARNING: Removing unreachable block (ram,0x0001031a0094) */
/* WARNING: Removing unreachable block (ram,0x0001031a009c) */
/* WARNING: Removing unreachable block (ram,0x0001031a0040) */
/* WARNING: Removing unreachable block (ram,0x0001031a00a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a0248(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10) + _DAT_112f48410;
  func_0x000107c61618(lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5c8a8();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    func_0x000107c5c8a0(lVar2);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1031a0254; end: 1031a057b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a0254(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  lVar7 = unaff_x20 + _DAT_112f48410;
  func_0x000107c61618();
  if (lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    lVar8 = lVar7;
    func_0x000107c5c8a8();
    func_0x000107c61180();
    func_0x000107c615e8(lVar7);
    lVar7 = lVar8;
    func_0x000107c43770();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c4adac(param_1);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lRam0000000112f483d8 != -1) {
    func_0x000107c61568(0x112f483d8,FUN_10319ec68);
  }
  puVar3 = &UNK_110619b10;
  func_0x000107c613fc(&UNK_110619b10,0x18,7);
  *(undefined ***)(puVar3 + 0x10) = &puStack_68;
  puVar4 = &UNK_110619b38;
  func_0x000107c613fc(&UNK_110619b38,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x1031a14a8;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  uStack_78 = 0x1031a0c00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_101abda9c;
  puStack_80 = &UNK_110619b50;
  ppuVar5 = &puStack_98;
  puStack_70 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar6 = puStack_70;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c429b4(param_1);
  func_0x000107c60bd0(ppuVar5);
  puVar6 = puVar4;
  func_0x000107c61544(puVar4,"",0x72,0xbc,0x6a,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar6 & 1) == 0) {
    lVar8 = *(long *)(puStack_68 + 0x10);
    if (lVar8 == 0) {
      func_0x000107c61170(puVar2);
      func_0x000107c61170(lVar7);
    }
    else {
      puVar4 = puStack_68;
      func_0x000107c61434();
      do {
        func_0x000107c4fe9c(param_1);
        if (lRam0000000112f483d0 != -1) {
          func_0x000107c61568(0x112f483d0,FUN_10319ec18);
        }
        func_0x000107c4fe9c(param_1);
        func_0x000107c4fe9c(param_1);
        if (lVar7 != 0) {
          func_0x000107c3d5c4(param_1);
        }
        func_0x000107c3d5c4(param_1);
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(puVar2);
      func_0x000107c6142c(puVar4);
    }
    puVar2 = puStack_68;
    func_0x000107c61574(puVar3);
    func_0x000107c6142c(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031a057c);
  (*pcVar1)();
}



/* Entry: 1031a057c; end: 1031a06b3; -[SCChatCommandManager styleCommandTokens:] */

void FUN_1031a057c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  uVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = 0;
  FUN_1031a13f8(0,0x112d657d8,&PTR_PTR_1126a6548);
  func_0x000107c5fc54(param_3,uVar2);
  func_0x000107c61174();
  pcVar3 = "styleCommandTokens(_:)";
  func_0x0001000c10c0("styleCommandTokens(_:)");
  func_0x000107c61180();
  puVar4 = &UNK_110619a20;
  func_0x000107c613fc(&UNK_110619a20,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  *(undefined8 *)(puVar4 + 0x20) = uVar1;
  uStack_50 = 0x1031a14dc;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110619a38;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_3);
  func_0x000107c61574(puVar4);
  func_0x000107c4e590(pcVar3);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  func_0x000107c615e8(pcVar3);
  return;
}



/* Entry: 1031a06b4; end: 1031a06d7;  */

void FUN_1031a06b4(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  pcVar1 = "clearCommandTokenStyle()";
  puVar2 = &UNK_110619980;
  ppuVar3 = &puStack_70;
  func_0x0001000c10c0("clearCommandTokenStyle()");
  func_0x000107c61180();
  func_0x000107c613fc(&UNK_110619980,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
  pcStack_50 = FUN_1031a08b0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110619998;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174();
  func_0x000107c61574(puVar2);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1031a06d8; end: 1031a08af;  */

void FUN_1031a06d8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  ppuVar2 = &puStack_70;
  func_0x0001000c10c0();
  func_0x000107c61180();
  func_0x000107c613fc(param_2,0x18,7);
  *(undefined8 *)(param_2 + 0x10) = unaff_x20;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  uStack_58 = param_4;
  uStack_50 = param_3;
  lStack_48 = param_2;
  func_0x000107c60bc4(&puStack_70);
  lVar1 = lStack_48;
  func_0x000107c61174();
  func_0x000107c61574(lVar1);
  func_0x000107c4e590(param_1);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c615e8(param_1);
  return;
}


