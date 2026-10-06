/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1012ee724; end: 1012ee757;  */

void FUN_1012ee724(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_28,0,0);
  func_0x000107c61618(unaff_x20 + 0x10);
  return;
}



/* Entry: 1012ee758; end: 1012ee78b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012ee758(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4dfe8();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112d71480);
    *(undefined8 *)(lVar1 + _DAT_112d71480) = param_1;
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 1012ee78c; end: 1012ee7f3;  */

void FUN_1012ee78c(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 1012ee7f4; end: 1012ee843;  */

void FUN_1012ee7f4(long param_1,long param_2)

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



/* Entry: 1012ee844; end: 1012ee8cb; -[_TtC16SCComposerSendTo23ShareDestinationFetcher fetch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012ee844(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112d71320);
  func_0x000107c61174(param_1);
  func_0x000107c4a8a4(puVar1,param_2,uVar3);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5cb24();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1012ee8cc; end: 1012ee92b; -[_TtC16SCComposerSendTo23ShareDestinationFetcher init] */

void FUN_1012ee8cc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCComposerSendTo.ShareDestinationFetcher",0x28,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012ee8f8);
  (*pcVar1)();
}



/* Entry: 1012ee92c; end: 1012ee93b; -[_TtC16SCComposerSendTo23ShareDestinationFetcher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012ee92c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d71320));
  return;
}



/* Entry: 1012ee93c; end: 1012ee95b;  */

void FUN_1012ee93c(void)

{
  func_0x000107c61168(&PTR_PTR_1127c5f68);
  return;
}



/* Entry: 1012ee95c; end: 1012eed33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1012ee95c(long param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uStack_70;
  
  if (param_1 == 0) {
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return puVar11;
  }
  func_0x000107c61174();
  uVar15 = param_3;
  func_0x000108f930fc();
  func_0x000107c61180();
  uVar3 = 0;
  func_0x0001002ed07c(0);
  uVar4 = uVar15;
  func_0x000107c5fc54(uVar15,uVar3);
  func_0x000107c61170(uVar15);
  uVar14 = *(ulong *)(param_1 + _DAT_113034af0);
  uVar5 = *(undefined8 *)(param_1 + _DAT_113034af8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  func_0x000108f95ed0(param_2);
  uVar15 = uVar14;
  func_0x000108f9423c(uVar14,uVar5,0,param_2,1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar5);
  func_0x000100120cb0();
  uVar14 = uVar15;
  func_0x000107c5fe10(uVar15,uVar3,uVar5);
  func_0x000107c61170(uVar15);
  if (uVar4 >> 0x3e == 0) {
    uVar15 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar15 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar15 = uVar4;
    }
    func_0x000107c60480();
  }
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uStack_70 = uVar4 & 0xffffffffffffff8;
  if (uVar15 != 0) {
    uVar16 = 0;
    do {
      while( true ) {
        if ((uVar4 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uStack_70 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1012eed18);
            (*pcVar1)();
          }
          uVar6 = *(ulong *)(uVar4 + 0x20 + uVar16 * 8);
          func_0x000107c61174();
        }
        else {
          uVar6 = uVar16;
          func_0x0001002ec9a0(uVar16,uVar4);
        }
        bVar2 = SCARRY8(uVar16,1);
        uVar16 = uVar16 + 1;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1012eed14);
          (*pcVar1)();
        }
        if ((uVar14 & 0xc000000000000001) != 0) break;
        if (*(long *)(uVar14 + 0x10) != 0) {
          uVar7 = *(ulong *)(uVar14 + 0x28);
          func_0x000107c60114();
          uVar13 = -1L << ((ulong)*(byte *)(uVar14 + 0x20) & 0x3f);
          uVar7 = uVar7 & (uVar13 ^ 0xffffffffffffffff);
          if ((*(ulong *)(uVar14 + 0x38 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0) {
            do {
              uVar8 = *(ulong *)(*(long *)(uVar14 + 0x30) + uVar7 * 8);
              func_0x000107c61174();
              uVar9 = uVar8;
              func_0x000107c60118();
              func_0x000107c61170(uVar8);
              if ((uVar9 & 1) != 0) goto LAB_1012eebc0;
              uVar7 = uVar7 + 1 & ~uVar13;
            } while ((*(ulong *)(uVar14 + 0x38 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0);
          }
        }
LAB_1012eeae0:
        func_0x000107c61170(uVar6);
        if (uVar16 == uVar15) goto LAB_1012eec78;
      }
      uVar7 = uVar6;
      func_0x000107c61174();
      uVar13 = uVar7;
      func_0x000107c602b0();
      func_0x000107c61170(uVar7);
      if ((uVar13 & 1) == 0) goto LAB_1012eeae0;
LAB_1012eebc0:
      puVar10 = puVar11;
      func_0x000107c61558();
      if (((ulong)puVar10 & 1) == 0) {
        func_0x0001002ecff4(0,*(long *)(puVar11 + 0x10) + 1,1);
      }
      uVar7 = *(ulong *)(puVar11 + 0x10);
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar7) {
        func_0x0001002ecff4(1 < *(ulong *)(puVar11 + 0x18),uVar7 + 1,1);
      }
      *(ulong *)(puVar11 + 0x10) = uVar7 + 1;
      *(ulong *)(puVar11 + uVar7 * 8 + 0x20) = uVar6;
    } while (uVar16 != uVar15);
  }
LAB_1012eec78:
  func_0x000107c6142c(uVar14);
  func_0x000107c6142c(uVar4);
  puVar10 = puVar11;
  FUN_1012e8fb0(puVar11);
  func_0x000107c61574(puVar11);
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar12 = puVar10;
  func_0x000107c5fc48(puVar10,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(puVar10);
  func_0x000107c45788(puVar11);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar12);
  return puVar11;
}



/* Entry: 1012eed34; end: 1012eee63;  */

void FUN_1012eed34(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long *plVar7;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long alStack_40 [2];
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c6157c(uVar6);
  uVar3 = 0x112d5d480;
  func_0x0001000285a8(0x112d5d480,&UNK_10d923b90);
  func_0x000100075034(&lStack_68,FUN_1012eeeec,0,uVar3);
  func_0x000107c61574(uVar6);
  lVar1 = lStack_68;
  if ((*(long *)(lStack_68 + 0x10) != 0) && (func_0x0001000d224c(alStack_40), alStack_40[0] != 0)) {
    plVar7 = *(long **)(lVar1 + 0x10);
    if (plVar7 == (long *)0x0) {
      func_0x000107c6142c(lVar1);
      plVar4 = (long *)PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      plVar4 = plVar7;
      FUN_10109b448(plVar7,0);
      plVar5 = &lStack_68;
      FUN_10109b930(plVar5,plVar4 + 4,plVar7,lVar1);
      FUN_10109bac0(lStack_68,uStack_60,uStack_58,uStack_50,uStack_48);
      if (plVar5 != plVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1012eedfc);
        (*pcVar2)();
      }
    }
    plVar7 = plVar4;
    func_0x000107c5fc48(plVar4,PTR___sSSN_11034da80);
    func_0x000107c61574(plVar4);
    func_0x000107c42b68(alStack_40[0]);
    func_0x000107c615e8(alStack_40[0]);
    func_0x000107c61170(plVar7);
    return;
  }
  func_0x000107c6142c(lVar1);
  return;
}



/* Entry: 1012eee64; end: 1012eeebf;  */

void FUN_1012eee64(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  
  func_0x000107c61434(param_4);
  pbVar1 = param_1 + 8;
  func_0x000100403b00(pbVar1,param_3,param_4);
  *param_1 = (byte)pbVar1 & 1;
  return;
}



/* Entry: 1012eeec0; end: 1012eeeeb;  */

void FUN_1012eeec0(undefined8 param_1,undefined8 param_2)

{
  FUN_1012eef50(param_2);
  return;
}



/* Entry: 1012eeeec; end: 1012eef03;  */

void FUN_1012eeeec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = PTR___swiftEmptySetSingleton_11034f1d8;
  *param_1 = uVar1;
  return;
}



/* Entry: 1012eef04; end: 1012eef4f;  */

void FUN_1012eef04(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1012eef50; end: 1012ef213;  */

void FUN_1012eef50(ulong param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  long *unaff_x20;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (*(long *)(*unaff_x20 + 0x10) == 0) {
    return;
  }
  puVar9 = (ulong *)(param_1 + 0x38);
  uVar11 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if (-uVar11 < 0x40) {
    uVar12 = ~(-1L << (-uVar11 & 0x3f));
  }
  uVar12 = uVar12 & *puVar9;
  func_0x000107c61434();
  lVar10 = 0;
  lVar1 = lVar10;
  while( true ) {
    for (; uVar12 != 0; uVar12 = uVar12 - 1 & uVar12) {
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      puVar2 = (undefined8 *)
               (*(long *)(param_1 + 0x30) + LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) * 0x10 +
               lVar1 * 0x400);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      func_0x000107c61434(uVar4);
      uVar8 = uVar4;
      FUN_1010af1e4(uVar3,uVar4);
      func_0x000107c6142c(uVar4);
      func_0x000107c6142c(uVar8);
      lVar10 = lVar1;
    }
    bVar7 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar7) break;
    if ((long)(0x3f - uVar11 >> 6) <= lVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff,puVar9,~uVar11,lVar10,0);
      return;
    }
    uVar12 = puVar9[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1012ef08c);
  (*pcVar6)();
}



/* Entry: 1012ef214; end: 1012ef2df;  */

void FUN_1012ef214(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar1 = "launchMusicPicker()";
  func_0x0001000c10c0("launchMusicPicker()");
  func_0x000107c61180();
  puVar2 = &UNK_11039f708;
  func_0x000107c613fc(&UNK_11039f708,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  uStack_40 = 0x1012f03c8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11039f748;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1012ef2e0; end: 1012ef333;  */

void FUN_1012ef2e0(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1012ef334();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1012ef334; end: 1012ef677;  */

/* WARNING: Possible PIC construction at 0x0001012ef3a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ef3ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ef4cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ef548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ef5fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ef60c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ef62c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ef63c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ef64c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012ef640) */
/* WARNING: Removing unreachable block (ram,0x0001012ef630) */
/* WARNING: Removing unreachable block (ram,0x0001012ef610) */
/* WARNING: Removing unreachable block (ram,0x0001012ef600) */
/* WARNING: Removing unreachable block (ram,0x0001012ef54c) */
/* WARNING: Removing unreachable block (ram,0x0001012ef5a8) */
/* WARNING: Removing unreachable block (ram,0x0001012ef588) */
/* WARNING: Removing unreachable block (ram,0x0001012ef5ac) */
/* WARNING: Removing unreachable block (ram,0x0001012ef4d0) */
/* WARNING: Removing unreachable block (ram,0x0001012ef59c) */
/* WARNING: Removing unreachable block (ram,0x0001012ef5a4) */
/* WARNING: Removing unreachable block (ram,0x0001012ef504) */
/* WARNING: Removing unreachable block (ram,0x0001012ef514) */
/* WARNING: Removing unreachable block (ram,0x0001012ef524) */
/* WARNING: Removing unreachable block (ram,0x0001012ef3f0) */
/* WARNING: Removing unreachable block (ram,0x0001012ef420) */
/* WARNING: Removing unreachable block (ram,0x0001012ef42c) */
/* WARNING: Removing unreachable block (ram,0x0001012ef49c) */
/* WARNING: Removing unreachable block (ram,0x0001012ef45c) */
/* WARNING: Removing unreachable block (ram,0x0001012ef4a4) */
/* WARNING: Removing unreachable block (ram,0x0001012ef46c) */
/* WARNING: Removing unreachable block (ram,0x0001012ef4a8) */
/* WARNING: Removing unreachable block (ram,0x0001012ef3a8) */
/* WARNING: Removing unreachable block (ram,0x0001012ef650) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012ef334(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = unaff_x20 + _DAT_112d71408;
  func_0x000107c61618();
  if (lVar2 == 0) {
    return;
  }
  lVar1 = lVar2;
  func_0x0001012ef08c();
  if (lVar1 != 0) {
    func_0x000107c61174();
    lVar1 = lVar2;
    func_0x000107c4f078();
    func_0x000107c61180();
    if (lVar1 == 0) {
      lVar2 = *(long *)(unaff_x20 + _DAT_112d71488);
      *(undefined8 *)(unaff_x20 + _DAT_112d71488) = *(undefined8 *)(unaff_x20 + _DAT_112d71480);
      func_0x000107c61174();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1012ef678; end: 1012ef69f; -[_TtC16SCComposerSendTo27ComposerSendToPageCallbacks launchMusicPicker] */

void FUN_1012ef678(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1012ef214();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012ef6a0; end: 1012ef6a3; -[_TtC16SCComposerSendTo27ComposerSendToPageCallbacks musicPickerDidDismissAndPresentEditor] */

void FUN_1012ef6a0(void)

{
  return;
}



/* Entry: 1012ef6a4; end: 1012ef84f;  */

/* WARNING: Possible PIC construction at 0x0001012ef70c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ef7ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ef808: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ef764: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012ef7f0) */
/* WARNING: Removing unreachable block (ram,0x0001012ef710) */
/* WARNING: Removing unreachable block (ram,0x0001012ef728) */
/* WARNING: Removing unreachable block (ram,0x0001012ef768) */
/* WARNING: Removing unreachable block (ram,0x0001012ef76c) */
/* WARNING: Removing unreachable block (ram,0x0001012ef770) */
/* WARNING: Removing unreachable block (ram,0x0001012ef774) */
/* WARNING: Removing unreachable block (ram,0x0001012ef788) */
/* WARNING: Removing unreachable block (ram,0x0001012ef7fc) */
/* WARNING: Removing unreachable block (ram,0x0001012ef7b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012ef6a4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_112d71488;
  if (*(char *)(unaff_x20 + _DAT_112d71490) == '\x01') {
    lVar2 = *(long *)(unaff_x20 + _DAT_112d71488);
    if (lVar2 == 0) {
      lVar2 = *(long *)(unaff_x20 + _DAT_112d71480);
      if (lVar2 == 0) {
        *(undefined1 *)(unaff_x20 + _DAT_112d71490) = 0;
        lVar2 = *(long *)(unaff_x20 + lVar1);
        *(undefined8 *)(unaff_x20 + lVar1) = 0;
      }
      else {
        func_0x000107c51cc8();
        func_0x000107c61180();
        func_0x000107c5cda4();
      }
    }
    else {
      func_0x000107c51cc8(lVar2);
      func_0x000107c61180();
      func_0x000107c5cda4();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1012ef850; end: 1012ef8bf; -[_TtC16SCComposerSendTo27ComposerSendToPageCallbacks musicPickerDidDismiss] */

/* WARNING: Possible PIC construction at 0x0001012ef890: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012ef894) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012ef850(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112d71440);
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    FUN_1012ef6a4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1012ef8c0; end: 1012efc7b;  */

/* WARNING: Possible PIC construction at 0x0001012ef958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ef98c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ef9b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ef9ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012efa10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012efa40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012efa74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012efaa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012efb88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012efbf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012efc0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012efc34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012efc10) */
/* WARNING: Removing unreachable block (ram,0x0001012efc58) */
/* WARNING: Removing unreachable block (ram,0x0001012efc24) */
/* WARNING: Removing unreachable block (ram,0x0001012efb8c) */
/* WARNING: Removing unreachable block (ram,0x0001012efaa4) */
/* WARNING: Removing unreachable block (ram,0x0001012efbe4) */
/* WARNING: Removing unreachable block (ram,0x0001012efbec) */
/* WARNING: Removing unreachable block (ram,0x0001012efad0) */
/* WARNING: Removing unreachable block (ram,0x0001012efa78) */
/* WARNING: Removing unreachable block (ram,0x0001012efa44) */
/* WARNING: Removing unreachable block (ram,0x0001012efa14) */
/* WARNING: Removing unreachable block (ram,0x0001012ef9f0) */
/* WARNING: Removing unreachable block (ram,0x0001012ef9bc) */
/* WARNING: Removing unreachable block (ram,0x0001012ef9c0) */
/* WARNING: Removing unreachable block (ram,0x0001012ef9dc) */
/* WARNING: Removing unreachable block (ram,0x0001012ef990) */
/* WARNING: Removing unreachable block (ram,0x0001012ef95c) */
/* WARNING: Removing unreachable block (ram,0x0001012ef960) */
/* WARNING: Removing unreachable block (ram,0x0001012ef97c) */
/* WARNING: Removing unreachable block (ram,0x0001012efc38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012ef8c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined *puVar4;
  
  lVar1 = _DAT_112d71498;
  puVar4 = *(undefined **)(unaff_x20 + _DAT_112d71498);
  puVar3 = puVar4;
  puVar2 = PTR_PTR_1126c5058;
  if (puVar4 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126c5050;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar2 = PTR_PTR_1126c5058;
  }
  PTR_PTR_1126c5058 = puVar2;
  if (param_1 == 0) {
    func_0x000107c61174(puVar4);
    func_0x000107c56840(puVar3,param_2,0);
    func_0x000107c55744(puVar3,param_2,0);
    param_1 = *(long *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
  }
  else {
    func_0x000107c610f8(puVar2);
    func_0x000107c61174(puVar4);
    func_0x000107c61174(param_1);
    func_0x000107c453e4(puVar2);
    func_0x000107c5cdb0(param_1);
    func_0x000107c61180();
    func_0x000107c5ce2c();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012efc7c; end: 1012efcef; -[_TtC16SCComposerSendTo27ComposerSendToPageCallbacks musicPickerDidDownloadTrack:] */

/* WARNING: Possible PIC construction at 0x0001012efcc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012efcd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012efccc) */
/* WARNING: Removing unreachable block (ram,0x0001012efcdc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012efc7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d71480);
  *(undefined8 *)(param_1 + _DAT_112d71480) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1012efcf0; end: 1012efcf3; -[_TtC16SCComposerSendTo27ComposerSendToPageCallbacks musicPickerDidPreviewTrack:] */

void FUN_1012efcf0(void)

{
  return;
}



/* Entry: 1012efcf4; end: 1012efd7b;  */

/* WARNING: Possible PIC construction at 0x0001012efd24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012efd54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ef70c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ef7ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ef808: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ef764: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012ef7f0) */
/* WARNING: Removing unreachable block (ram,0x0001012ef710) */
/* WARNING: Removing unreachable block (ram,0x0001012ef728) */
/* WARNING: Removing unreachable block (ram,0x0001012efd58) */
/* WARNING: Removing unreachable block (ram,0x0001012efd28) */
/* WARNING: Removing unreachable block (ram,0x0001012efd6c) */
/* WARNING: Removing unreachable block (ram,0x0001012ef6a4) */
/* WARNING: Removing unreachable block (ram,0x0001012ef80c) */
/* WARNING: Removing unreachable block (ram,0x0001012ef6d8) */
/* WARNING: Removing unreachable block (ram,0x0001012ef72c) */
/* WARNING: Removing unreachable block (ram,0x0001012ef744) */
/* WARNING: Removing unreachable block (ram,0x0001012ef748) */
/* WARNING: Removing unreachable block (ram,0x0001012ef6ec) */
/* WARNING: Removing unreachable block (ram,0x0001012efd54) */
/* WARNING: Removing unreachable block (ram,0x0001012ef768) */
/* WARNING: Removing unreachable block (ram,0x0001012ef76c) */
/* WARNING: Removing unreachable block (ram,0x0001012ef770) */
/* WARNING: Removing unreachable block (ram,0x0001012ef828) */
/* WARNING: Removing unreachable block (ram,0x0001012ef774) */
/* WARNING: Removing unreachable block (ram,0x0001012ef788) */
/* WARNING: Removing unreachable block (ram,0x0001012ef7fc) */
/* WARNING: Removing unreachable block (ram,0x0001012ef7b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012efcf4(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d71480);
  *(undefined8 *)(unaff_x20 + _DAT_112d71480) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1012efd7c; end: 1012efdcf; -[_TtC16SCComposerSendTo27ComposerSendToPageCallbacks musicPickerDidUpdateSelection:] */

/* WARNING: Possible PIC construction at 0x0001012efdb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012efdbc) */

void FUN_1012efd7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1012efcf4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1012efdd0; end: 1012efe33;  */

void FUN_1012efdd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  lVar1 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x58) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x60) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012efe34,0,0);
  return;
}



/* Entry: 1012efe34; end: 1012eff93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012efe34(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  int *piVar7;
  long unaff_x22;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar4 = *(long *)(unaff_x22 + 0x40);
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  uVar6 = uVar2;
  func_0x0001000a8868(unaff_x22 + 0x10);
  lVar9 = lVar4;
  func_0x000107c5d7e8(lVar4);
  func_0x000107c61180();
  func_0x000107c5edb4(uVar8);
  func_0x000107c61170(lVar9);
  func_0x000107c427d4();
  func_0x000107c61180();
  if (lVar4 == 0) {
    lVar9 = 0;
    uVar10 = 0xf000000000000000;
    uVar8 = uVar6;
  }
  else {
    lVar9 = lVar4;
    func_0x000107c5ee30();
    uVar8 = uVar6;
    func_0x000107c61170(lVar4);
    uVar10 = uVar6;
  }
  *(long *)(unaff_x22 + 0x70) = lVar9;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar10;
  lVar4 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c427d0();
  func_0x000107c61180();
  if (lVar4 == 0) {
    lVar11 = 0;
    uVar8 = 0xf000000000000000;
  }
  else {
    lVar11 = lVar4;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar4);
  }
  *(long *)(unaff_x22 + 0x80) = lVar11;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar8;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1012eff94;
                    /* WARNING: Could not recover jumptable at 0x0001012eff90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (*(undefined8 *)(unaff_x22 + 0x68),lVar9,uVar10,lVar11,uVar8,uVar2,lVar3);
  return;
}



/* Entry: 1012eff94; end: 1012f002f;  */

void FUN_1012eff94(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *unaff_x22;
  
  lVar8 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar8 + 0x88);
  uVar2 = *(undefined8 *)(lVar8 + 0x78);
  uVar5 = *(undefined8 *)(lVar8 + 0x80);
  uVar3 = *(undefined8 *)(lVar8 + 0x68);
  uVar6 = *(undefined8 *)(lVar8 + 0x70);
  uVar4 = *(undefined8 *)(lVar8 + 0x58);
  lVar7 = *(long *)(lVar8 + 0x60);
  *(undefined8 *)(lVar8 + 0x98) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar8 + 0x90));
  func_0x0001000b44c0(uVar5,uVar1);
  func_0x0001000b44c0(uVar6,uVar2);
  (**(code **)(lVar7 + 8))(uVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012f0030,0,0);
  return;
}



/* Entry: 1012f0030; end: 1012f00f3;  */

void FUN_1012f0030(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x98);
  func_0x0001000834e4(unaff_x22 + 0x10);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
    puVar1 = PTR_PTR_1126b27a8;
    func_0x000107c61168();
    func_0x000107c45160();
    func_0x000107c61180();
    *(undefined **)(unaff_x22 + 0xa0) = puVar1;
    if (puVar1 != (undefined *)0x0) {
      uVar2 = 0;
      func_0x000107c5fcec();
      uVar4 = uVar2;
      func_0x000107c5fce8();
      *(undefined8 *)(unaff_x22 + 0xa8) = uVar4;
      func_0x000100eea164();
      func_0x000107c5fca8(uVar2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_1012f00f4,uVar2,uVar4);
      return;
    }
    func_0x000107c61170(uVar4);
  }
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x0001012f00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1012f00f4; end: 1012f016b;  */

/* WARNING: Removing unreachable block (ram,0x0001012f0130) */

void FUN_1012f00f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa8));
  FUN_1012f01ac(uVar2,uVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012f016c,0,0);
  return;
}



/* Entry: 1012f016c; end: 1012f01ab;  */

void FUN_1012f016c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xa0));
  func_0x000107c61170(uVar1);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x0001012f01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1012f01ac; end: 1012f02f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012f01ac(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  long lStack_48;
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112d71450);
    func_0x000107c6157c(lVar2);
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
      param_1 = param_1 + 0x10;
      func_0x000107c61618();
      if (param_1 != 0) {
        lVar3 = *(long *)(param_1 + _DAT_112d71498);
        lVar1 = lVar3;
        func_0x000107c61174();
        func_0x000107c61170(param_1);
        if (lVar3 != 0) {
          lVar3 = lVar1;
          func_0x000107c4d228();
          func_0x000107c61180();
          if ((lVar3 != 0) && (func_0x000107c61170(), lVar3 == param_2)) {
            func_0x000107c30e3c(param_3);
            func_0x000107c61180();
            func_0x000107c525e0(param_2);
            func_0x000107c61170(param_3);
            lStack_48 = lVar1;
            func_0x0001007d6d78(&lStack_48);
          }
          func_0x000107c61170(lVar1);
        }
      }
      func_0x000107c61574(lVar2);
    }
  }
  return;
}



/* Entry: 1012f02f4; end: 1012f036b;  */

void FUN_1012f02f4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  plVar6 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1012f036c;
  plVar6[9] = lVar1;
  plVar6[10] = lVar3;
  plVar6[7] = lVar4;
  plVar6[8] = lVar2;
  lVar4 = 0;
  func_0x000107c5ede0();
  plVar6[0xb] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar6[0xc] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0xd] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012efe34,0,0);
  return;
}



/* Entry: 1012f036c; end: 1012f03a7;  */

void FUN_1012f036c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001012f03a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1012f03a8; end: 1012f03eb;  */

void FUN_1012f03a8(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1012f03ec; end: 1012f05bb;  */

/* WARNING: Possible PIC construction at 0x0001012f0448: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012f03ec(void)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  plVar1 = (long *)(unaff_x20 + _DAT_112d71590);
  lVar6 = *plVar1;
  if (lVar6 == 0) {
    plVar3 = (long *)0x1;
    func_0x00010061b458();
    puVar4 = &UNK_11039f780;
    func_0x000107c613fc(&UNK_11039f780,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    pcVar8 = FUN_1012f07b0;
    puVar5 = puVar4;
    (**(code **)(*plVar3 + 0x60))();
    func_0x000107c61574(plVar3);
    func_0x000107c61574(puVar4);
    lVar6 = *plVar1;
    *plVar1 = (long)pcVar8;
    plVar1[1] = (long)puVar5;
  }
  else {
    lVar7 = plVar1[1];
    lVar2 = lVar6;
    func_0x000107c614f0(lVar6);
    pcVar8 = *(code **)(lVar7 + 8);
    func_0x000107c615f0(lVar6);
    (*pcVar8)(lVar2,lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar6);
  return;
}



/* Entry: 1012f05bc; end: 1012f0787;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012f05bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  puVar1 = (undefined *)(param_1 + 0x10);
  func_0x000107c61618();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1 + _DAT_112d71408;
    func_0x000107c61618();
    puVar6 = puVar1;
    if (puVar2 != (undefined *)0x0) {
      puVar7 = *(undefined **)(puVar1 + _DAT_112d71458);
      puVar3 = puVar7;
      func_0x000107c5194c();
      func_0x000107c61180();
      puVar6 = puVar2;
      if (puVar3 == (undefined *)0x0) {
        func_0x000107c61174();
        puVar3 = puVar2;
        func_0x000107c4f078();
        func_0x000107c61180();
        puVar6 = puVar2;
        puVar4 = PTR_PTR_1126aead8;
        while (PTR_PTR_1126aead8 = puVar4, puVar3 != (undefined *)0x0) {
          func_0x000107c61170(puVar6);
          puVar4 = puVar3;
          func_0x000107c4f078();
          func_0x000107c61180();
          puVar6 = puVar3;
          puVar3 = puVar4;
          puVar4 = PTR_PTR_1126aead8;
        }
        func_0x000107c610f8();
        func_0x000107c4807c();
        puVar3 = &UNK_11039f7f8;
        func_0x000107c613fc(&UNK_11039f7f8,0x20,7);
        *(undefined **)(puVar3 + 0x10) = puVar4;
        *(undefined **)(puVar3 + 0x18) = puVar7;
        func_0x00010240fb0c(0);
        func_0x000107c610f8();
        func_0x000107c61174(puVar4);
        func_0x000107c61174();
        func_0x000107c61174(puVar7);
        func_0x000107c61174(param_2);
        puVar5 = puVar4;
        func_0x00010240f8e4(puVar4,param_2,0x65736f6c43,0xe500000000000000,FUN_1012f07dc,puVar3);
        func_0x000107c42c1c(puVar7);
        func_0x000107c61170(puVar1);
        func_0x000107c61170(puVar5);
        puVar1 = puVar4;
        puVar3 = puVar2;
      }
      func_0x000107c61170(puVar1);
      func_0x000107c61170(puVar3);
    }
    func_0x000107c61170(puVar6);
  }
  return;
}



/* Entry: 1012f0788; end: 1012f07af; -[_TtC16SCComposerSendTo27ComposerSendToPageCallbacks presentRecentsDebugView] */

void FUN_1012f0788(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1012f03ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012f07b0; end: 1012f07db;  */

void FUN_1012f07b0(undefined8 *param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  uVar4 = *param_1;
  pcVar1 = "presentRecentsDebugView()";
  func_0x0001000c10c0("presentRecentsDebugView()");
  func_0x000107c61180();
  puVar2 = &UNK_11039f7a8;
  func_0x000107c613fc(&UNK_11039f7a8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar2 + 0x18) = uVar4;
  uStack_50 = 0x1012f07b8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11039f7c0;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c();
  func_0x000107c61174(uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1012f07dc; end: 1012f080f;  */

void FUN_1012f07dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c41864(*(undefined8 *)(unaff_x20 + 0x10),param_2,0);
  func_0x000107c4ffe8(uVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 1012f0810; end: 1012f0837;  */

void FUN_1012f0810(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a6a10;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puRam0000000112d71400 = puVar1;
  return;
}



/* Entry: 1012f0838; end: 1012f09b3;  */

undefined * FUN_1012f0838(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  if (lRam0000000112d713f8 != -1) {
    func_0x000107c61568(0x112d713f8,FUN_1012f0810);
  }
  func_0x000105135f34(uRam0000000112d71400,1);
  pcVar2 = "presentSpotlightCreatePost(with:originalSoundOwnerName:)";
  func_0x0001000c10c0("presentSpotlightCreatePost(with:originalSoundOwnerName:)");
  func_0x000107c61180();
  puVar3 = &UNK_11039f820;
  func_0x000107c613fc(&UNK_11039f820,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_11039f848;
  func_0x000107c613fc(&UNK_11039f848,0x38,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined **)(puVar4 + 0x18) = puVar1;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  *(undefined8 *)(puVar4 + 0x28) = param_3;
  *(undefined8 *)(puVar4 + 0x30) = param_1;
  pcStack_60 = FUN_1012f16cc;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_11039f860;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c61434(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61174(puVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(pcVar2);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c615e8(pcVar2);
  return puVar1;
}



/* Entry: 1012f09b4; end: 1012f100f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012f09b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uStack_c8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar2 = (undefined *)(param_1 + _DAT_112d71408);
    func_0x000107c61618();
    lVar1 = _DAT_112d71448;
    if (puVar2 != (undefined *)0x0) {
      lVar3 = *(long *)(param_1 + _DAT_112d71448);
      func_0x000107c5194c();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c61170();
        if (lRam0000000112d713f8 != -1) {
          func_0x000107c61568(0x112d713f8,FUN_1012f0810);
        }
        uVar5 = uRam0000000112d71400;
        uVar4 = 0x63735f656c617473;
        func_0x000107c5fadc(0x63735f656c617473,0xeb0000000065706f);
        func_0x000105135fac(uVar5,uVar4,1);
        func_0x000107c61170(uVar4);
        uVar5 = *(undefined8 *)(param_1 + _DAT_112d714b0);
        *(undefined8 *)(param_1 + _DAT_112d714b0) = 0;
        func_0x000107c61170(uVar5);
        lVar3 = *(long *)(param_1 + lVar1);
        func_0x000107c5194c();
        func_0x000107c61180();
        if (lVar3 != 0) {
          func_0x000107c61170();
          func_0x000107c4ffe8(*(undefined8 *)(param_1 + lVar1));
          func_0x000107c61180();
          func_0x000107c615e8();
        }
      }
      lVar16 = _DAT_112d714a0;
      lVar3 = lRam0000000112d713f8;
      lVar6 = *(long *)(param_1 + _DAT_112d714a0);
      uVar5 = 0;
      if (lVar6 != 0) {
        func_0x000107c61174();
        if (lVar3 != -1) {
          func_0x000107c61568(0x112d713f8,FUN_1012f0810);
        }
        uVar5 = uRam0000000112d71400;
        uVar4 = 0xd000000000000010;
        func_0x000107c5fadc(0xd000000000000010,0x800000010ef353c0);
        func_0x000105135fac(uVar5,uVar4,1);
        func_0x000107c61170(uVar4);
        uVar5 = *(undefined8 *)(param_1 + lVar16);
        *(undefined8 *)(param_1 + lVar16) = 0;
        func_0x000107c61170(uVar5);
        puVar11 = PTR_PTR_1126a6a18;
        func_0x000107c610f8(PTR_PTR_1126a6a18);
        func_0x000107c454c4();
        func_0x000107c43b74(lVar6);
        func_0x000107c61170(lVar6);
        func_0x000107c61170(puVar11);
        uVar5 = *(undefined8 *)(param_1 + lVar16);
      }
      *(undefined8 *)(param_1 + lVar16) = param_2;
      func_0x000107c61170(uVar5);
      func_0x000107c61174(param_2);
      func_0x000107c61174();
      puVar7 = puVar2;
      func_0x000107c4f078();
      func_0x000107c61180();
      puVar11 = puVar2;
      while (puVar7 != (undefined *)0x0) {
        func_0x000107c61170(puVar11);
        puVar8 = puVar7;
        func_0x000107c4f078();
        func_0x000107c61180();
        puVar11 = puVar7;
        puVar7 = puVar8;
      }
      puVar7 = &UNK_11039f820;
      func_0x000107c613fc(&UNK_11039f820,0x18,7);
      func_0x000107c61614(puVar7 + 0x10,param_1);
      puVar9 = PTR_PTR_1126b5bb8;
      func_0x000107c610f8();
      uStack_88 = 0x1012f16f8;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_11039f888;
      ppuVar10 = &puStack_a8;
      puStack_80 = puVar7;
      func_0x000107c60bc4(ppuVar10);
      puVar8 = puStack_80;
      func_0x000107c6157c(puVar7);
      func_0x000107c61174(puVar11);
      func_0x000107c61574(puVar8);
      func_0x000107c48078(0x3feccccccccccccd);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c61574(puVar7);
      func_0x000107c61170(puVar11);
      uVar5 = *(undefined8 *)(param_1 + _DAT_112d714b0);
      *(undefined **)(param_1 + _DAT_112d714b0) = puVar9;
      func_0x000107c61174(puVar9);
      func_0x000107c61170(uVar5);
      lVar3 = *(long *)(param_1 + _DAT_112d71498);
      if (lVar3 != 0) {
        if (param_4 == 0) {
          func_0x000107c61174();
          param_3 = 0;
        }
        else {
          func_0x000107c61174();
          func_0x000107c5fadc(param_3,param_4);
        }
        func_0x000107c570c4(lVar3);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(param_3);
      }
      uVar12 = param_5;
      func_0x000107c4eb80();
      func_0x000107c61180();
      if (uVar12 != 0) {
        func_0x000107c59538();
        func_0x000107c61170(uVar12);
      }
      uVar12 = param_5;
      func_0x000107c4f0cc();
      func_0x000107c61180();
      uVar5 = 0;
      FUN_1012f1700(0);
      uVar13 = uVar12;
      func_0x000107c5fc54(uVar12,uVar5);
      func_0x000107c61170(uVar12);
      uVar12 = param_5;
      func_0x000107c4eb80();
      func_0x000107c61180();
      if (uVar12 == 0) {
        uStack_c8 = 0;
      }
      else {
        uStack_c8 = uVar12;
        FUN_1012f6cec();
        func_0x000107c61170(uVar12);
      }
      if (*(long *)(param_1 + _DAT_112d71428) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(*(long *)(param_1 + _DAT_112d71428) + _DAT_113034ab0);
        func_0x000107c61174(uVar5);
      }
      uVar12 = param_5;
      func_0x000107c5aea4();
      uVar14 = param_5;
      func_0x000107c5aefc(param_5);
      uVar15 = uVar14;
      func_0x0001012ef08c();
      func_0x000107c4c014();
      func_0x000107c61180();
      if ((*(long *)(param_1 + _DAT_112d71420) == 0) ||
         (lVar3 = *(long *)(*(long *)(param_1 + _DAT_112d71420) + _DAT_113034b58), lVar3 == 0)) {
        lVar3 = 0;
      }
      else {
        func_0x000107c5dc0c();
        func_0x000107c61180();
      }
      func_0x000103c055a0(0);
      func_0x000107c610f8();
      func_0x000107c61174(puVar9);
      lVar16 = param_1;
      func_0x000107c61174(param_1);
      puVar7 = puVar9;
      func_0x000103c052ac(puVar9,lVar16,uVar13,uStack_c8,uVar5,uVar12 & 0xffffffff,uVar14,uVar15,
                          param_5,lVar3);
      func_0x000107c61604(lVar16 + _DAT_112d714a8,puVar7);
      uVar5 = *(undefined8 *)(param_1 + lVar1);
      func_0x000107c61174(uVar5);
      func_0x000107c42c1c();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(lVar16);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar2);
      goto LAB_1012f0fa0;
    }
    func_0x000107c61170(param_1);
  }
  if (lRam0000000112d713f8 != -1) {
    func_0x000107c61568(0x112d713f8,FUN_1012f0810);
  }
  uVar5 = uRam0000000112d71400;
  uVar4 = 0x63765f6f6e;
  func_0x000107c5fadc(0x63765f6f6e,0xe500000000000000);
  func_0x000105135fac(uVar5,uVar4,1);
  func_0x000107c61170(uVar4);
  puVar11 = PTR_PTR_1126a6a18;
  func_0x000107c610f8(PTR_PTR_1126a6a18);
  func_0x000107c454c4();
  func_0x000107c43b74(param_2);
LAB_1012f0fa0:
  func_0x000107c61170(puVar11);
  return;
}



/* Entry: 1012f1010; end: 1012f10c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012f1010(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112d714b0);
    *(undefined8 *)(param_1 + _DAT_112d714b0) = 0;
    func_0x000107c61170(uVar2);
    lVar1 = _DAT_112d71448;
    lVar3 = *(long *)(param_1 + _DAT_112d71448);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar3 == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      func_0x000107c61170();
      uVar2 = *(undefined8 *)(param_1 + lVar1);
      func_0x000107c4ffe8(uVar2);
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      func_0x000107c615e8(uVar2);
    }
  }
  return;
}



/* Entry: 1012f10c4; end: 1012f1223; -[_TtC16SCComposerSendTo27ComposerSendToPageCallbacks presentSpotlightCreatePostWithViewModel:originalSoundOwnerName:] */

void FUN_1012f10c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1012f0838(param_3,param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1012f1224; end: 1012f1377;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012f1224(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [24];
  
  lVar6 = *(long *)(unaff_x20 + _DAT_112d714a0);
  if (lVar6 != 0) {
    *(undefined8 *)(unaff_x20 + _DAT_112d714a0) = 0;
    lVar2 = *(long *)(unaff_x20 + _DAT_112d71448);
    func_0x000107c5194c();
    func_0x000107c61180();
    lVar1 = _DAT_112ff74b0;
    if (lVar2 == 0) {
      uVar7 = 0;
    }
    else {
      func_0x000107c61428(lVar2 + _DAT_112ff74b0,auStack_58,0,0);
      uVar7 = *(undefined8 *)(lVar2 + lVar1);
      func_0x000107c61174(uVar7);
      func_0x000107c61170(lVar2);
    }
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d714b8);
    *(undefined8 *)(unaff_x20 + _DAT_112d714b8) = uVar7;
    func_0x000107c61170(uVar3);
    puVar4 = PTR_PTR_1126a6a18;
    func_0x000107c610f8(PTR_PTR_1126a6a18);
    func_0x000107c454c4();
    puVar5 = puVar4;
    FUN_1012f6f80();
    func_0x000107c575f8(puVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c43b74(lVar6);
    lVar1 = _DAT_112d714b0;
    lVar2 = *(long *)(unaff_x20 + _DAT_112d714b0);
    if (lVar2 != 0) {
      func_0x000107c61174();
      func_0x000107c41864();
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61170(lVar6);
    func_0x000107c61170(puVar4);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
    func_0x000107c61170(uVar7);
  }
  return;
}



/* Entry: 1012f1378; end: 1012f14c3; -[_TtC16SCComposerSendTo27ComposerSendToPageCallbacks createPostScope:didCreatePostWithConfig:] */

/* WARNING: Possible PIC construction at 0x0001012f13c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012f13c8) */

void FUN_1012f1378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x0001012f1154(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1012f14c4; end: 1012f165f; -[_TtC16SCComposerSendTo27ComposerSendToPageCallbacks createPostScope:didDismissWithConfig:] */

/* WARNING: Possible PIC construction at 0x0001012f1510: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012f1514) */

void FUN_1012f14c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x0001012f13e4(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1012f1660; end: 1012f16cb; -[_TtC16SCComposerSendTo27ComposerSendToPageCallbacks createPostScope:didSelectMusic:] */

/* WARNING: Possible PIC construction at 0x0001012f16ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012f16b0) */

void FUN_1012f1660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x0001012f1530(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1012f16cc; end: 1012f16ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012f16cc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long unaff_x20;
  undefined8 uVar21;
  ulong uStack_c8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar19 = *(long *)(unaff_x20 + 0x28);
  uVar20 = *(ulong *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar3 + 0x10,auStack_78,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    puVar4 = (undefined *)(lVar3 + _DAT_112d71408);
    func_0x000107c61618();
    lVar1 = _DAT_112d71448;
    if (puVar4 != (undefined *)0x0) {
      lVar5 = *(long *)(lVar3 + _DAT_112d71448);
      func_0x000107c5194c();
      func_0x000107c61180();
      if (lVar5 != 0) {
        func_0x000107c61170();
        if (lRam0000000112d713f8 != -1) {
          func_0x000107c61568(0x112d713f8,FUN_1012f0810);
        }
        uVar7 = uRam0000000112d71400;
        uVar6 = 0x63735f656c617473;
        func_0x000107c5fadc(0x63735f656c617473,0xeb0000000065706f);
        func_0x000105135fac(uVar7,uVar6,1);
        func_0x000107c61170(uVar6);
        uVar7 = *(undefined8 *)(lVar3 + _DAT_112d714b0);
        *(undefined8 *)(lVar3 + _DAT_112d714b0) = 0;
        func_0x000107c61170(uVar7);
        lVar5 = *(long *)(lVar3 + lVar1);
        func_0x000107c5194c();
        func_0x000107c61180();
        if (lVar5 != 0) {
          func_0x000107c61170();
          func_0x000107c4ffe8(*(undefined8 *)(lVar3 + lVar1));
          func_0x000107c61180();
          func_0x000107c615e8();
        }
      }
      lVar2 = _DAT_112d714a0;
      lVar5 = lRam0000000112d713f8;
      lVar8 = *(long *)(lVar3 + _DAT_112d714a0);
      uVar7 = 0;
      if (lVar8 != 0) {
        func_0x000107c61174();
        if (lVar5 != -1) {
          func_0x000107c61568(0x112d713f8,FUN_1012f0810);
        }
        uVar7 = uRam0000000112d71400;
        uVar6 = 0xd000000000000010;
        func_0x000107c5fadc(0xd000000000000010,0x800000010ef353c0);
        func_0x000105135fac(uVar7,uVar6,1);
        func_0x000107c61170(uVar6);
        uVar7 = *(undefined8 *)(lVar3 + lVar2);
        *(undefined8 *)(lVar3 + lVar2) = 0;
        func_0x000107c61170(uVar7);
        puVar13 = PTR_PTR_1126a6a18;
        func_0x000107c610f8(PTR_PTR_1126a6a18);
        func_0x000107c454c4();
        func_0x000107c43b74(lVar8);
        func_0x000107c61170(lVar8);
        func_0x000107c61170(puVar13);
        uVar7 = *(undefined8 *)(lVar3 + lVar2);
      }
      *(undefined8 *)(lVar3 + lVar2) = uVar21;
      func_0x000107c61170(uVar7);
      func_0x000107c61174(uVar21);
      func_0x000107c61174();
      puVar9 = puVar4;
      func_0x000107c4f078();
      func_0x000107c61180();
      puVar13 = puVar4;
      while (puVar9 != (undefined *)0x0) {
        func_0x000107c61170(puVar13);
        puVar10 = puVar9;
        func_0x000107c4f078();
        func_0x000107c61180();
        puVar13 = puVar9;
        puVar9 = puVar10;
      }
      puVar9 = &UNK_11039f820;
      func_0x000107c613fc(&UNK_11039f820,0x18,7);
      func_0x000107c61614(puVar9 + 0x10,lVar3);
      puVar11 = PTR_PTR_1126b5bb8;
      func_0x000107c610f8();
      uStack_88 = 0x1012f16f8;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_11039f888;
      ppuVar12 = &puStack_a8;
      puStack_80 = puVar9;
      func_0x000107c60bc4(ppuVar12);
      puVar10 = puStack_80;
      func_0x000107c6157c(puVar9);
      func_0x000107c61174(puVar13);
      func_0x000107c61574(puVar10);
      func_0x000107c48078(0x3feccccccccccccd);
      func_0x000107c60bd0(ppuVar12);
      func_0x000107c61574(puVar9);
      func_0x000107c61170(puVar13);
      uVar21 = *(undefined8 *)(lVar3 + _DAT_112d714b0);
      *(undefined **)(lVar3 + _DAT_112d714b0) = puVar11;
      func_0x000107c61174(puVar11);
      func_0x000107c61170(uVar21);
      lVar5 = *(long *)(lVar3 + _DAT_112d71498);
      if (lVar5 != 0) {
        if (lVar19 == 0) {
          func_0x000107c61174();
          uVar15 = 0;
        }
        else {
          func_0x000107c61174();
          func_0x000107c5fadc(uVar15,lVar19);
        }
        func_0x000107c570c4(lVar5);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(uVar15);
      }
      uVar14 = uVar20;
      func_0x000107c4eb80();
      func_0x000107c61180();
      if (uVar14 != 0) {
        func_0x000107c59538();
        func_0x000107c61170(uVar14);
      }
      uVar14 = uVar20;
      func_0x000107c4f0cc();
      func_0x000107c61180();
      uVar15 = 0;
      FUN_1012f1700(0);
      uVar16 = uVar14;
      func_0x000107c5fc54(uVar14,uVar15);
      func_0x000107c61170(uVar14);
      uVar14 = uVar20;
      func_0x000107c4eb80();
      func_0x000107c61180();
      if (uVar14 == 0) {
        uStack_c8 = 0;
      }
      else {
        uStack_c8 = uVar14;
        FUN_1012f6cec();
        func_0x000107c61170(uVar14);
      }
      if (*(long *)(lVar3 + _DAT_112d71428) == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = *(undefined8 *)(*(long *)(lVar3 + _DAT_112d71428) + _DAT_113034ab0);
        func_0x000107c61174(uVar15);
      }
      uVar14 = uVar20;
      func_0x000107c5aea4();
      uVar17 = uVar20;
      func_0x000107c5aefc(uVar20);
      uVar18 = uVar17;
      func_0x0001012ef08c();
      func_0x000107c4c014();
      func_0x000107c61180();
      if ((*(long *)(lVar3 + _DAT_112d71420) == 0) ||
         (lVar19 = *(long *)(*(long *)(lVar3 + _DAT_112d71420) + _DAT_113034b58), lVar19 == 0)) {
        lVar19 = 0;
      }
      else {
        func_0x000107c5dc0c();
        func_0x000107c61180();
      }
      func_0x000103c055a0(0);
      func_0x000107c610f8();
      func_0x000107c61174(puVar11);
      lVar5 = lVar3;
      func_0x000107c61174(lVar3);
      puVar9 = puVar11;
      func_0x000103c052ac(puVar11,lVar5,uVar16,uStack_c8,uVar15,uVar14 & 0xffffffff,uVar17,uVar18,
                          uVar20,lVar19);
      func_0x000107c61604(lVar5 + _DAT_112d714a8,puVar9);
      uVar15 = *(undefined8 *)(lVar3 + lVar1);
      func_0x000107c61174(uVar15);
      func_0x000107c42c1c();
      func_0x000107c61170(uVar15);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar11);
      func_0x000107c61170(puVar4);
      goto LAB_1012f0fa0;
    }
    func_0x000107c61170(lVar3);
  }
  if (lRam0000000112d713f8 != -1) {
    func_0x000107c61568(0x112d713f8,FUN_1012f0810);
  }
  uVar15 = uRam0000000112d71400;
  uVar7 = 0x63765f6f6e;
  func_0x000107c5fadc(0x63765f6f6e,0xe500000000000000);
  func_0x000105135fac(uVar15,uVar7,1);
  func_0x000107c61170(uVar7);
  puVar13 = PTR_PTR_1126a6a18;
  func_0x000107c610f8(PTR_PTR_1126a6a18);
  func_0x000107c454c4();
  func_0x000107c43b74(uVar21);
LAB_1012f0fa0:
  func_0x000107c61170(puVar13);
  return;
}



/* Entry: 1012f1700; end: 1012f1743;  */

void FUN_1012f1700(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d70b20 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126c5018;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d70b20 = puVar1;
  return;
}



/* Entry: 1012f1744; end: 1012f174b;  */

void FUN_1012f1744(long param_1,long param_2)

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



/* Entry: 1012f174c; end: 1012f1ba3;  */

/* WARNING: Removing unreachable block (ram,0x0001012f18d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1012f174c(double param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  code *pcVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined1 uVar14;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar5 = _DAT_112d714c0;
  if (*(long *)(unaff_x20 + _DAT_112d714c0) != 0) {
LAB_1012f1798:
    puVar13 = PTR_PTR_1126a6a20;
    func_0x000107c610f8(PTR_PTR_1126a6a20);
    func_0x000107c453e4();
    func_0x000107c43b74(puVar1);
    func_0x000107c61170(puVar13);
    return puVar1;
  }
  lVar2 = *(long *)(*(long *)(unaff_x20 + _DAT_112d71468) + _DAT_112fb49a8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) goto LAB_1012f1798;
  uVar11 = *(undefined8 *)(unaff_x20 + lVar5);
  *(undefined **)(unaff_x20 + lVar5) = puVar1;
  func_0x000107c61174(puVar1);
  func_0x000107c61170(uVar11);
  lVar5 = lVar2 + _DAT_112fb49d8;
  uVar11 = 1;
  func_0x000107c61428(lVar5,auStack_78,1,0);
  *(undefined ***)(lVar5 + 8) = &PTR_DAT_11039f8b0;
  puVar13 = unaff_x20;
  func_0x000107c61604(lVar5);
  if (param_2 == 0) {
LAB_1012f18e8:
    if ((*(long *)(unaff_x20 + _DAT_112d71420) == 0) ||
       (lVar5 = *(long *)(*(long *)(unaff_x20 + _DAT_112d71420) + _DAT_113034b58), lVar5 == 0)) {
joined_r0x0001012f1aa0:
      pcVar7 = (code *)0x0;
    }
    else {
      func_0x000107c5dc0c();
      func_0x000107c61180();
      if (lVar5 == 0) goto joined_r0x0001012f1aa0;
      puVar13 = &UNK_11039f928;
      func_0x000107c613fc(&UNK_11039f928,0x18,7);
      *(long *)(puVar13 + 0x10) = lVar5;
      func_0x0001000285a8(0x112d6d850,&UNK_10d931c10);
      uVar11 = 7;
      func_0x000107c613fc();
      func_0x000107c61174(lVar5);
      pcVar6 = (code *)0x1012f209c;
      func_0x0001000bdd8c();
      pcVar7 = pcVar6;
      func_0x0001003a5b88();
      func_0x000107c61574(pcVar6);
      func_0x000107c61170(lVar5);
      func_0x000107c61174(pcVar7);
    }
    if (param_2 == 0) {
      uVar12 = 0;
      puVar13 = (undefined *)0x0;
      uVar11 = 0;
      uVar14 = 1;
      goto LAB_1012f1ab4;
    }
  }
  else {
    lVar5 = param_2;
    func_0x000107c61174();
    lVar3 = lVar5;
    func_0x000107c5b198();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c3eea8();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    lVar3 = lVar4;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar4);
    func_0x000107c610f8(PTR_PTR_1126b25c0);
    lVar4 = lVar3;
    FUN_1010282b0(lVar3,puVar13);
    func_0x00010006c090(lVar3);
    if (lVar4 == 0) {
      func_0x000107c61170(lVar5);
      goto LAB_1012f18e8;
    }
    puVar13 = &UNK_11039f950;
    func_0x000107c613fc(&UNK_11039f950,0x18,7);
    *(long *)(puVar13 + 0x10) = lVar4;
    func_0x0001000285a8(0x112d6d850,&UNK_10d931c10);
    uVar11 = 7;
    func_0x000107c613fc();
    func_0x000107c61174(lVar4);
    pcVar6 = FUN_1012f20a8;
    func_0x0001000bdd8c();
    pcVar7 = pcVar6;
    func_0x0001003a5b88();
    func_0x000107c61574(pcVar6);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar5);
    func_0x000107c61174(pcVar7);
    param_2 = lVar5;
  }
  func_0x000107c5ca68(param_2);
  uVar12 = 1000;
  func_0x000107c600d0(param_1 / 1000.0);
  uVar14 = 0;
LAB_1012f1ab4:
  pcVar8 = "presentSpotlightTilePicker(withPriorEditedFrame:)";
  func_0x0001000c10c0("presentSpotlightTilePicker(withPriorEditedFrame:)");
  func_0x000107c61180();
  puVar9 = &UNK_11039f8d8;
  func_0x000107c613fc(&UNK_11039f8d8,0x41,7);
  *(long *)(puVar9 + 0x10) = lVar2;
  *(undefined **)(puVar9 + 0x18) = unaff_x20;
  *(code **)(puVar9 + 0x20) = pcVar7;
  *(undefined8 *)(puVar9 + 0x28) = uVar12;
  *(undefined **)(puVar9 + 0x30) = puVar13;
  *(undefined8 *)(puVar9 + 0x38) = uVar11;
  puVar9[0x40] = uVar14;
  pcStack_88 = FUN_1012f2040;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000f6b44;
  puStack_90 = &UNK_11039f8f0;
  ppuVar10 = &puStack_a8;
  puStack_80 = puVar9;
  func_0x000107c60bc4(ppuVar10);
  puVar13 = puStack_80;
  func_0x000107c61174(lVar2);
  func_0x000107c61174(unaff_x20);
  func_0x000107c61574(puVar13);
  func_0x000107c4e524(pcVar8);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(pcVar7);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c615e8(pcVar8);
  return puVar1;
}



/* Entry: 1012f1ba4; end: 1012f1c03; -[_TtC16SCComposerSendTo27ComposerSendToPageCallbacks presentSpotlightTilePickerWithPriorEditedFrame:] */

void FUN_1012f1ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1012f174c(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1012f1c04; end: 1012f1dfb;  */

/* WARNING: Possible PIC construction at 0x0001012f1c7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012f1cd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012f1d40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012f1d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012f1d70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012f1dcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012f1d74) */
/* WARNING: Removing unreachable block (ram,0x0001012f1d60) */
/* WARNING: Removing unreachable block (ram,0x0001012f1d44) */
/* WARNING: Removing unreachable block (ram,0x0001012f1cd8) */
/* WARNING: Removing unreachable block (ram,0x0001012f1c80) */
/* WARNING: Removing unreachable block (ram,0x0001012f1dd0) */
/* WARNING: Removing unreachable block (ram,0x0001012f1dd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012f1c04(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d714c0);
  if (lVar1 != 0) {
    *(undefined8 *)(unaff_x20 + _DAT_112d714c0) = 0;
    func_0x000107c41214();
    func_0x000107c61180();
    if (param_1 == 0) {
      func_0x000107c610f8(PTR_PTR_1126a6a20);
      func_0x000107c453e4();
      func_0x000107c43b74(lVar1);
    }
    else {
      func_0x000107c5ee30();
      lVar1 = param_1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1012f1dfc; end: 1012f1dff;  */

/* WARNING: Possible PIC construction at 0x0001012f1c7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012f1cd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012f1d40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012f1d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012f1d70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012f1dcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012f1d74) */
/* WARNING: Removing unreachable block (ram,0x0001012f1d60) */
/* WARNING: Removing unreachable block (ram,0x0001012f1d44) */
/* WARNING: Removing unreachable block (ram,0x0001012f1cd8) */
/* WARNING: Removing unreachable block (ram,0x0001012f1c80) */
/* WARNING: Removing unreachable block (ram,0x0001012f1dd0) */
/* WARNING: Removing unreachable block (ram,0x0001012f1dd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012f1dfc(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d714c0);
  if (lVar1 != 0) {
    *(undefined8 *)(unaff_x20 + _DAT_112d714c0) = 0;
    func_0x000107c41214();
    func_0x000107c61180();
    if (param_1 == 0) {
      func_0x000107c610f8(PTR_PTR_1126a6a20);
      func_0x000107c453e4();
      func_0x000107c43b74(lVar1);
    }
    else {
      func_0x000107c5ee30();
      lVar1 = param_1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1012f1e00; end: 1012f1e67;  */

/* WARNING: Possible PIC construction at 0x0001012f1e48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012f1e4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012f1e00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112d714c0);
  if (lVar2 != 0) {
    *(undefined8 *)(unaff_x20 + _DAT_112d714c0) = 0;
    puVar1 = PTR_PTR_1126a6a20;
    func_0x000107c610f8(PTR_PTR_1126a6a20);
    func_0x000107c453e4();
    func_0x000107c43b74(lVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1012f1e68; end: 1012f1feb;  */

/* WARNING: Possible PIC construction at 0x0001012f1e9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012f1ed4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012f1f28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012f1f40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012f1f84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012f1f44) */
/* WARNING: Removing unreachable block (ram,0x0001012f1f2c) */
/* WARNING: Removing unreachable block (ram,0x0001012f1ed8) */
/* WARNING: Removing unreachable block (ram,0x0001012f1ea0) */
/* WARNING: Removing unreachable block (ram,0x0001012f1fd0) */
/* WARNING: Removing unreachable block (ram,0x0001012f1ea4) */
/* WARNING: Removing unreachable block (ram,0x0001012f1ec0) */
/* WARNING: Removing unreachable block (ram,0x0001012f1f88) */
/* WARNING: Removing unreachable block (ram,0x0001012f1fb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012f1e68(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d714b8);
  *(undefined8 *)(unaff_x20 + _DAT_112d714b8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1012f1fec; end: 1012f203f; -[_TtC16SCComposerSendTo27ComposerSendToPageCallbacks updateSpotlightCoverTileWithEditedFrame:] */

/* WARNING: Possible PIC construction at 0x0001012f2028: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012f202c) */

void FUN_1012f1fec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1012f1e68(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1012f2040; end: 1012f207f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012f2040(void)

{
  long unaff_x20;
  
  func_0x000103940610(*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_112d71478),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined1 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 1012f2080; end: 1012f20a7;  */

void FUN_1012f2080(long param_1,long param_2)

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



/* Entry: 1012f20a8; end: 1012f2163;  */

void FUN_1012f20a8(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae558;
  func_0x000107c61168();
  func_0x000107c451b0();
  func_0x000107c61180();
  *param_1 = puVar1;
  return;
}



/* Entry: 1012f2164; end: 1012f2253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012f2164(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d71570);
  if (lVar2 != 0) {
    func_0x000107c615f0(lVar2);
    func_0x000107c44fcc();
    func_0x000107c61180();
    if (param_1 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    func_0x000108f94c24(param_1);
    func_0x000107c61170(param_1);
    pcStack_40 = FUN_1012f2254;
    uStack_38 = 0;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000b0c7c;
    puStack_48 = &UNK_11039fc68;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c44650(lVar2);
    func_0x000107c60bd0(ppuVar1);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 1012f2254; end: 1012f2257;  */

void FUN_1012f2254(void)

{
  return;
}



/* Entry: 1012f2258; end: 1012f22a7; -[_TtC16SCComposerSendTo27ComposerSendToPageCallbacks shareDestinationSelectedWithEntity:] */

/* WARNING: Possible PIC construction at 0x0001012f2290: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012f2294) */

void FUN_1012f2258(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1012f2164(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1012f22a8; end: 1012f23cf; -[_TtC16SCComposerSendTo27ComposerSendToPageCallbacks phoneNumberSelectedWithPhoneNumber:contactRowId:] */

void FUN_1012f22a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  func_0x0001012f673c(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1012f23d0; end: 1012f2557;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012f23d0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    return;
  }
  lVar3 = param_1 + _DAT_112d71408;
  func_0x000107c61618();
  if (lVar3 == 0) goto LAB_1012f2534;
  lVar8 = *(long *)(param_1 + _DAT_112d714f0);
  lVar4 = lVar8;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar4 == 0) {
    lVar4 = param_1 + _DAT_112d714f8;
    func_0x000107c61618();
    lVar7 = param_1;
    if (lVar4 != 0) {
      puVar5 = PTR_PTR_1126aead8;
      func_0x000107c610f8(PTR_PTR_1126aead8);
      func_0x000107c4807c();
      puVar1 = (undefined8 *)(*(long *)(param_1 + _DAT_112d71418) + _DAT_113034cb0);
      uVar6 = *puVar1;
      uVar2 = puVar1[1];
      func_0x000107c61434(uVar2);
      func_0x000107c5fadc(uVar6,uVar2);
      func_0x000107c6142c(uVar2);
      lVar7 = lVar4;
      func_0x000107c3eddc(lVar4);
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      func_0x000107c61170(uVar6);
      func_0x000107c42c1c(lVar8);
      func_0x000107c61170(param_1);
      param_1 = lVar3;
      lVar3 = lVar7;
      goto LAB_1012f251c;
    }
  }
  else {
LAB_1012f251c:
    func_0x000107c61170(param_1);
    lVar7 = lVar4;
  }
  param_1 = lVar3;
  func_0x000107c61170(lVar7);
LAB_1012f2534:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1012f2558; end: 1012f257f; -[_TtC16SCComposerSendTo27ComposerSendToPageCallbacks beginNewStoryCreationFlow] */

void FUN_1012f2558(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001012f2304();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012f2580; end: 1012f27ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1012f2580(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  
  puVar5 = *(undefined **)(unaff_x20 + _DAT_112d71558);
  if (puVar5 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar5 = PTR_PTR_1126a6a28;
    func_0x000107c610f8(PTR_PTR_1126a6a28);
    uVar3 = 0;
    FUN_1012f6c58(0,0x112d715c8,&PTR_PTR_1126a6a30);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar3);
    func_0x000107c48498(0,puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c4a8a4(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    puVar4 = puVar2;
    func_0x000107c5cb24(puVar2);
    func_0x000107c61180();
  }
  else {
    func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
    func_0x000107c615f0(puVar5);
    func_0x000107c5fadc(param_1,param_2);
    puVar4 = puVar5;
    func_0x000107c51afc(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    puVar2 = puVar4;
    func_0x0001000b637c(puVar4);
    func_0x000107c61170(puVar4);
    uVar1 = 0;
    FUN_1012f6c58(0,0x112d715d0,&PTR_PTR_1126a6a28);
    uVar3 = 0x1012f2734;
    func_0x0001000bfde0(0x1012f2734,0,uVar1);
    func_0x000107c61574(puVar2);
    func_0x0001004575f0();
    func_0x000107c61574(uVar3);
    puVar4 = puVar2;
    func_0x000107c5cb24(puVar2);
    func_0x000107c61180();
    func_0x000107c615e8(puVar5);
  }
  func_0x000107c61170(puVar2);
  return puVar4;
}



/* Entry: 1012f27f0; end: 1012f28ef; -[_TtC16SCComposerSendTo27ComposerSendToPageCallbacks searchRecipientsWithQuery:] */

void FUN_1012f27f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1012f2580(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1012f28f0; end: 1012f28fb; -[_TtC16SCComposerSendTo27ComposerSendToPageCallbacks groupCreatedWithGroupId:] */

void FUN_1012f28f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  (*(code *)0x1012f2858)(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1012f28fc; end: 1012f2a6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012f28fc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)&puStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = *(long *)(unaff_x20 + _DAT_112d71500);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    FUN_1012f6c58(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    (**(code **)(lVar6 + 0x68))
              (lVar5,*(undefined4 *)
                      PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar1);
    lVar3 = lVar5;
    func_0x000107c5fff0(lVar5);
    (**(code **)(lVar6 + 8))(lVar5,lVar1);
    pcStack_60 = FUN_1012f2a70;
    uStack_58 = 0;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_1012f2a74;
    puStack_68 = &UNK_11039fc18;
    ppuVar4 = &puStack_80;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c43268(lVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 1012f2a70; end: 1012f2a73;  */

void FUN_1012f2a70(void)

{
  return;
}



/* Entry: 1012f2a74; end: 1012f2ac3;  */

void FUN_1012f2a74(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1012f2ac4; end: 1012f2acf; -[_TtC16SCComposerSendTo27ComposerSendToPageCallbacks triggerStorySyncWithPublicationId:] */

void FUN_1012f2ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1012f28fc(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1012f2ad0; end: 1012f2c23;  */

void FUN_1012f2ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  (*param_4)(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1012f2c24; end: 1012f2c7f;  */

void FUN_1012f2c24(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1012f2c80(param_2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1012f2c80; end: 1012f30df;  */

/* WARNING: Possible PIC construction at 0x0001012f2cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012f2d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012f2d74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012f2edc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012f2eec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012f30b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012f2e60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012f2e78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012f3024: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012f3078: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012f3088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012f309c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012f308c) */
/* WARNING: Removing unreachable block (ram,0x0001012f307c) */
/* WARNING: Removing unreachable block (ram,0x0001012f3028) */
/* WARNING: Removing unreachable block (ram,0x0001012f302c) */
/* WARNING: Removing unreachable block (ram,0x0001012f3048) */
/* WARNING: Removing unreachable block (ram,0x0001012f2e7c) */
/* WARNING: Removing unreachable block (ram,0x0001012f2e64) */
/* WARNING: Removing unreachable block (ram,0x0001012f30b4) */
/* WARNING: Removing unreachable block (ram,0x0001012f2ef0) */
/* WARNING: Removing unreachable block (ram,0x0001012f2ee0) */
/* WARNING: Removing unreachable block (ram,0x0001012f2d78) */
/* WARNING: Removing unreachable block (ram,0x0001012f2ed0) */
/* WARNING: Removing unreachable block (ram,0x0001012f2d60) */
/* WARNING: Removing unreachable block (ram,0x0001012f2cc0) */
/* WARNING: Removing unreachable block (ram,0x0001012f2f00) */
/* WARNING: Removing unreachable block (ram,0x0001012f2f14) */
/* WARNING: Removing unreachable block (ram,0x0001012f2f38) */
/* WARNING: Removing unreachable block (ram,0x0001012f2f88) */
/* WARNING: Removing unreachable block (ram,0x0001012f2f4c) */
/* WARNING: Removing unreachable block (ram,0x0001012f2f8c) */
/* WARNING: Removing unreachable block (ram,0x0001012f30a8) */
/* WARNING: Removing unreachable block (ram,0x0001012f2fec) */
/* WARNING: Removing unreachable block (ram,0x0001012f2cc8) */
/* WARNING: Removing unreachable block (ram,0x0001012f2ddc) */
/* WARNING: Removing unreachable block (ram,0x0001012f2df0) */
/* WARNING: Removing unreachable block (ram,0x0001012f2e14) */
/* WARNING: Removing unreachable block (ram,0x0001012f2cd0) */
/* WARNING: Removing unreachable block (ram,0x0001012f2cd8) */
/* WARNING: Removing unreachable block (ram,0x0001012f2f6c) */
/* WARNING: Removing unreachable block (ram,0x0001012f2cec) */
/* WARNING: Removing unreachable block (ram,0x0001012f30bc) */
/* WARNING: Removing unreachable block (ram,0x0001012f2d10) */
/* WARNING: Removing unreachable block (ram,0x0001012f30a0) */
/* WARNING: Removing unreachable block (ram,0x0001012f30ac) */

void FUN_1012f2c80(undefined8 param_1)

{
  func_0x000107c42924();
  func_0x000107c61180();
  func_0x000107c5d0f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012f30e0; end: 1012f312f; -[_TtC16SCComposerSendTo27ComposerSendToPageCallbacks longPressCellWithSelectionItem:] */

/* WARNING: Possible PIC construction at 0x0001012f3118: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012f311c) */

void FUN_1012f30e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001012f2b2c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1012f3130; end: 1012f3237;  */

/* WARNING: Possible PIC construction at 0x0001012f31f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012f3208: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012f31fc) */
/* WARNING: Removing unreachable block (ram,0x0001012f320c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012f3130(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112d71408;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x0001030d21d8(0);
    func_0x000107c610f8();
    func_0x0001030d18f0(0,0,0x6f5420646e6553,0xe700000000000000,0);
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c4807c();
    func_0x000107c3ed9c(*(undefined8 *)(unaff_x20 + _DAT_112d71540));
    func_0x000107c61180();
    func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112d71538));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1012f3238; end: 1012f325f; -[_TtC16SCComposerSendTo27ComposerSendToPageCallbacks startContactSyncFlow] */

void FUN_1012f3238(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1012f3130();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012f3260; end: 1012f348f;  */

/* WARNING: Possible PIC construction at 0x0001012f335c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012f3404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012f3414: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012f3430: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012f3418) */
/* WARNING: Removing unreachable block (ram,0x0001012f3408) */
/* WARNING: Removing unreachable block (ram,0x0001012f3360) */
/* WARNING: Removing unreachable block (ram,0x0001012f33d4) */
/* WARNING: Removing unreachable block (ram,0x0001012f33b8) */
/* WARNING: Removing unreachable block (ram,0x0001012f33d8) */
/* WARNING: Removing unreachable block (ram,0x0001012f3434) */
/* WARNING: Removing unreachable block (ram,0x0001012f3468) */
/* WARNING: Removing unreachable block (ram,0x0001012f3460) */
/* WARNING: Removing unreachable block (ram,0x0001012f3464) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012f3260(int param_1)

{
  code *pcVar1;
  undefined **ppuVar2;
  long unaff_x20;
  long lVar3;
  undefined **ppuVar4;
  
  ppuVar2 = (undefined **)(unaff_x20 + _DAT_112d71408);
  func_0x000107c61618();
  if (ppuVar2 == (undefined **)0x0) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112d71548);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 == 0) {
    if (param_1 == 2) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110e3bed8;
    }
    else if (param_1 == 1) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110e3beb8;
    }
    else {
      if (param_1 != 0) {
        func_0x0001012ea110(0);
        func_0x000107c60614();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1012f3490);
        (*pcVar1)();
      }
      ppuVar4 = &PTR____CFConstantStringClassReference_110e3be98;
    }
    ppuVar2 = ppuVar4;
    func_0x000107c61174(ppuVar4);
    func_0x000107c5faec(ppuVar4);
  }
  else {
    func_0x000107c61170();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 1012f3490; end: 1012f35fb; -[_TtC16SCComposerSendTo27ComposerSendToPageCallbacks beginListsEditFlowWithIntent:listId:] */

void FUN_1012f3490(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  func_0x000107c61174(param_1);
  FUN_1012f3260(param_3,param_4,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1012f35fc; end: 1012f3663;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012f35fc(long param_1,undefined8 param_2,uint param_3)

{
  code *pcVar1;
  
  if (param_1 != 0) {
    if (4 < param_3) {
      func_0x0001012ea124(0);
      func_0x000107c60614();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1012f3664);
      (*pcVar1)();
    }
    if (*(long *)(param_1 + _DAT_112d70d50) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1dee90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(long *)(param_1 + _DAT_112d70d50),PTR_s_setPosition__1126555c8,
                 *(undefined8 *)(&UNK_10d932088 + (ulong)param_3 * 8));
      return;
    }
  }
  return;
}



/* Entry: 1012f3664; end: 1012f3693; -[_TtC16SCComposerSendTo27ComposerSendToPageCallbacks setTrayPositionWithPosition:] */

void FUN_1012f3664(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x0001012f3504(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012f3694; end: 1012f40e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012f3694(undefined8 *param_1,byte param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  undefined *puVar21;
  undefined *puVar22;
  long lVar23;
  long unaff_x20;
  undefined8 *puVar24;
  undefined8 uVar25;
  char *pcVar26;
  undefined8 *puVar27;
  undefined *puVar28;
  undefined8 *puVar29;
  undefined *puVar30;
  ulong uVar31;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_98 [56];
  
  puVar4 = param_1;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar3 = *puVar4;
  pcVar26 = "complete(with:shouldSend:)";
  uVar25 = 0xd000000000000023;
  if ((param_2 & 1) == 0) {
    pcVar26 = ".ComposerSendToPageCallbacks";
    uVar25 = 0xd000000000000025;
  }
  func_0x000107c61174(uVar3);
  func_0x0001048d85b4(uVar25,(ulong)pcVar26 | 0x8000000000000000);
  func_0x000107c61170(uVar3);
  func_0x000107c6142c((ulong)pcVar26 | 0x8000000000000000);
  lVar23 = *(long *)(unaff_x20 + _DAT_112d71560);
  puVar27 = param_1;
  func_0x000107c4a7d4();
  func_0x000107c61180();
  puVar4 = (undefined8 *)0x0;
  FUN_1012f6c58(0,0x112d70f68,&PTR_PTR_1126a69c8);
  puVar5 = puVar27;
  func_0x000107c5fc54();
  func_0x000107c61170(puVar27);
  puVar27 = (undefined8 *)((ulong)puVar5 & 0xffffffffffffff8);
  if ((ulong)puVar5 >> 0x3e == 0) {
    puVar29 = (undefined8 *)puVar27[2];
  }
  else {
    puVar29 = puVar27;
    if ((undefined8 *)0x7fffffffffffffff < puVar5) {
      puVar29 = puVar5;
    }
    func_0x000107c60480();
  }
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar29 != (undefined8 *)0x0) {
    puVar24 = (undefined8 *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar5 & 0xc000000000000001) == 0) {
          if ((undefined8 *)puVar27[2] <= puVar24) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012f39cc);
            (*pcVar2)();
          }
          puVar6 = (undefined8 *)puVar5[(long)puVar24 + 4];
          func_0x000107c61174();
        }
        else {
          puVar6 = puVar24;
          func_0x0001012fac30(puVar24,puVar5);
        }
        puVar1 = (undefined8 *)((long)puVar24 + 1);
        if (SCARRY8((long)puVar24,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1012f39c8);
          (*pcVar2)();
        }
        puVar7 = puVar6;
        func_0x000107c42924();
        func_0x000107c61180();
        puVar8 = puVar7;
        func_0x000107c5d0f0();
        func_0x000107c61170(puVar7);
        if ((int)puVar8 == 2) break;
        func_0x000107c61170(puVar6);
        puVar24 = (undefined8 *)((long)puVar24 + 1);
        if (puVar1 == puVar29) goto LAB_1012f38ac;
      }
      puVar28 = puVar13;
      func_0x000107c61558();
      puStack_d0 = puVar13;
      if (((ulong)puVar28 & 1) == 0) {
        func_0x0001012face0(0,*(long *)(puVar13 + 0x10) + 1,1);
      }
      uVar31 = *(ulong *)(puStack_d0 + 0x10);
      if (*(ulong *)(puStack_d0 + 0x18) >> 1 <= uVar31) {
        func_0x0001012face0(1 < *(ulong *)(puStack_d0 + 0x18),uVar31 + 1,1);
      }
      *(ulong *)(puStack_d0 + 0x10) = uVar31 + 1;
      *(undefined8 **)(puStack_d0 + uVar31 * 8 + 0x20) = puVar6;
      puVar24 = puVar1;
      puVar13 = puStack_d0;
    } while (puVar1 != puVar29);
  }
LAB_1012f38ac:
  func_0x000107c6142c(puVar5);
  if (((long)puVar13 < 0) || (((ulong)puVar13 >> 0x3e & 1) != 0)) {
    puVar28 = puVar13;
    func_0x000107c60480();
    if (puVar28 == (undefined *)0x0) goto LAB_1012f39f0;
LAB_1012f38c4:
    puStack_d0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar21 = (undefined *)((ulong)puVar28 & ((long)puVar28 >> 0x3f ^ 0xffffffffffffffffU));
    func_0x000100403514(0,puVar21,0);
    if ((long)puVar28 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012f40e8);
      (*pcVar2)();
    }
    puVar30 = (undefined *)0x0;
    do {
      puVar19 = puStack_d0;
      if (((ulong)puVar13 & 0xc000000000000001) == 0) {
        puVar9 = *(undefined **)(puVar13 + (long)puVar30 * 8 + 0x20);
        func_0x000107c61174();
        puVar22 = puVar21;
      }
      else {
        puVar9 = puVar30;
        puVar22 = puVar13;
        func_0x0001012fac30();
      }
      func_0x000107c61174();
      puVar10 = puVar9;
      func_0x000107c42924();
      func_0x000107c61180();
      puVar11 = puVar10;
      func_0x000107c44fcc();
      func_0x000107c61180();
      puVar12 = puVar11;
      func_0x000107c5faec();
      puVar21 = puVar22;
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar11);
      uVar31 = *(ulong *)(puVar19 + 0x10);
      puVar9 = (undefined *)(uVar31 + 1);
      puStack_d0 = puVar19;
      if (*(ulong *)(puVar19 + 0x18) >> 1 <= uVar31) {
        puVar21 = puVar9;
        func_0x000100403514(1 < *(ulong *)(puVar19 + 0x18),puVar9,1);
      }
      puVar19 = puStack_d0;
      puVar30 = puVar30 + 1;
      *(undefined **)(puStack_d0 + 0x10) = puVar9;
      *(undefined **)(puStack_d0 + uVar31 * 0x10 + 0x20) = puVar12;
      *(undefined **)(puStack_d0 + uVar31 * 0x10 + 0x28) = puVar22;
    } while (puVar28 != puVar30);
    func_0x000107c61574(puVar13);
  }
  else {
    puVar28 = *(undefined **)(puVar13 + 0x10);
    if (puVar28 != (undefined *)0x0) goto LAB_1012f38c4;
LAB_1012f39f0:
    func_0x000107c61574(puVar13);
    puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  puVar13 = puVar19;
  func_0x000100403a6c();
  func_0x000107c6142c(puVar19);
  if ((param_2 & 1) == 0) {
    func_0x000107c6142c(puVar13);
    goto LAB_1012f3b20;
  }
  uVar25 = *(undefined8 *)(lVar23 + 0x18);
  puStack_c0 = puVar13;
  func_0x000107c6157c(uVar25);
  func_0x000100075034(FUN_1012f6b88,&puStack_d0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar25);
  func_0x000107c6142c(puVar13);
  lVar14 = *(long *)(unaff_x20 + _DAT_112d714e0);
  func_0x000107c51e8c();
  func_0x000107c61180();
  lVar23 = lVar14;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar14);
  if (lVar23 != 0) {
    func_0x000107c4be68(lVar23);
    func_0x000107c615e8(lVar23);
  }
  puVar27 = param_1;
  func_0x000107c5b91c();
  func_0x000107c61180();
  if (puVar27 == (undefined8 *)0x0) {
LAB_1012f3b0c:
    puVar27 = (undefined8 *)0x2;
  }
  else {
    puVar5 = puVar27;
    func_0x000107c49a74();
    func_0x000107c61180();
    func_0x000107c61170(puVar27);
    if (puVar5 == (undefined8 *)0x0) goto LAB_1012f3b0c;
    puVar27 = puVar5;
    func_0x000107c3ebcc(puVar5);
    func_0x000107c61170(puVar5);
  }
  FUN_1012f40e8(puVar27);
  FUN_1012f41a4(param_1);
LAB_1012f3b20:
  lVar23 = _DAT_112d71568;
  func_0x000107c61428(unaff_x20 + _DAT_112d71568,auStack_98,0,0);
  uVar25 = *(undefined8 *)(unaff_x20 + lVar23);
  func_0x000107c61434();
  puVar27 = param_1;
  func_0x000107c4a7d4();
  func_0x000107c61180();
  puVar5 = puVar27;
  func_0x000107c5fc54();
  func_0x000107c61170(puVar27);
  if ((ulong)puVar5 >> 0x3e == 0) {
    puVar27 = *(undefined8 **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar27 = (undefined8 *)((ulong)puVar5 & 0xffffffffffffff8);
    if ((undefined8 *)0x7fffffffffffffff < puVar5) {
      puVar27 = puVar5;
    }
    func_0x000107c60480();
  }
  if (puVar27 != (undefined8 *)0x0) {
    uVar31 = 0;
    do {
      if (((ulong)puVar5 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10) <= uVar31) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1012f3c74);
          (*pcVar2)();
        }
        uVar15 = puVar5[uVar31 + 4];
        func_0x000107c61174();
      }
      else {
        uVar15 = uVar31;
        func_0x0001012fac30(uVar31,puVar5);
      }
      puVar29 = (undefined8 *)(uVar31 + 1);
      if (SCARRY8(uVar31,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1012f3c70);
        (*pcVar2)();
      }
      uVar16 = uVar15;
      func_0x000107c42924();
      func_0x000107c61180();
      uVar17 = uVar16;
      func_0x000107c5d0f0();
      func_0x000107c61170(uVar16);
      if ((int)uVar17 == 6) {
        uVar16 = uVar15;
        func_0x000107c5bfc0();
        func_0x000107c61180();
        if (uVar16 == 0) goto LAB_1012f3b94;
        uVar17 = uVar16;
        func_0x000107c5c080();
        func_0x000107c61170(uVar15);
        func_0x000107c615e8(uVar16);
        if ((int)uVar17 == 9) {
          func_0x000107c6142c(puVar5);
          lVar23 = _DAT_112d714b8;
          uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d714b8);
          func_0x000107c61174(uVar3);
          goto LAB_1012f3ca8;
        }
      }
      else {
LAB_1012f3b94:
        func_0x000107c61170(uVar15);
      }
      uVar31 = uVar31 + 1;
    } while (puVar29 != puVar27);
  }
  func_0x000107c6142c(puVar5);
  uVar3 = 0;
  lVar23 = _DAT_112d714b8;
LAB_1012f3ca8:
  *(undefined8 *)(unaff_x20 + lVar23) = 0;
  func_0x000107c61170();
  puVar13 = &UNK_11039f980;
  func_0x000107c613fc(&UNK_11039f980,0x18,7);
  func_0x000107c61614(puVar13 + 0x10,unaff_x20);
  puVar28 = &UNK_11039f9a8;
  func_0x000107c613fc(&UNK_11039f9a8,0x38,7);
  *(undefined **)(puVar28 + 0x10) = puVar13;
  *(undefined8 **)(puVar28 + 0x18) = param_1;
  *(undefined8 *)(puVar28 + 0x20) = uVar25;
  puVar28[0x28] = param_2 & 1;
  *(undefined8 *)(puVar28 + 0x30) = uVar3;
  uVar18 = uVar3;
  func_0x000107c61174();
  func_0x000107c61434(uVar25);
  func_0x000107c6157c(puVar13);
  func_0x000107c61174();
  puVar27 = param_1;
  func_0x000107c4a7d4();
  func_0x000107c61180();
  puVar5 = puVar27;
  func_0x000107c5fc54();
  func_0x000107c61170(puVar27);
  if ((ulong)puVar5 >> 0x3e == 0) {
    puVar27 = *(undefined8 **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar27 = (undefined8 *)((ulong)puVar5 & 0xffffffffffffff8);
    if ((undefined8 *)0x7fffffffffffffff < puVar5) {
      puVar27 = puVar5;
    }
    func_0x000107c60480();
  }
  if (puVar27 != (undefined8 *)0x0) {
    uVar31 = 0;
    do {
      if (((ulong)puVar5 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10) <= uVar31) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1012f3e68);
          (*pcVar2)();
        }
        uVar15 = puVar5[uVar31 + 4];
        func_0x000107c61174();
      }
      else {
        uVar15 = uVar31;
        puVar4 = puVar5;
        func_0x0001012fac30();
      }
      puVar29 = (undefined8 *)(uVar31 + 1);
      if (SCARRY8(uVar31,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1012f3e64);
        (*pcVar2)();
      }
      uVar16 = uVar15;
      func_0x000107c42924();
      func_0x000107c61180();
      uVar17 = uVar16;
      func_0x000107c5d0f0();
      func_0x000107c61170(uVar16);
      if ((int)uVar17 == 5) {
        func_0x000107c6142c(puVar5);
        uVar31 = uVar15;
        func_0x000107c42924();
        func_0x000107c61180();
        func_0x000107c61170(uVar15);
        uVar15 = uVar31;
        func_0x000107c44fcc();
        func_0x000107c61180();
        func_0x000107c61170(uVar31);
        uVar31 = uVar15;
        func_0x000107c5faec();
        func_0x000107c61170(uVar15);
        goto LAB_1012f3e90;
      }
      func_0x000107c61170(uVar15);
      uVar31 = uVar31 + 1;
    } while (puVar29 != puVar27);
  }
  func_0x000107c6142c(puVar5);
  uVar31 = 0;
  puVar4 = (undefined8 *)0xe000000000000000;
LAB_1012f3e90:
  uVar15 = uVar31;
  func_0x000107c5fadc(uVar31,puVar4);
  uVar16 = uVar15;
  func_0x000108f94c24();
  func_0x000107c61170(uVar15);
  if ((((param_2 & 1) == 0) ||
      (pcVar26 = *(char **)(unaff_x20 + _DAT_112d71570), pcVar26 == (char *)0x0)) || (uVar16 == 0))
  {
    func_0x000107c6142c(puVar4);
    pcVar26 = "complete(with:shouldSend:)";
    func_0x0001000c10c0("complete(with:shouldSend:)");
    func_0x000107c61180();
    puVar19 = &UNK_11039f9d0;
    func_0x000107c613fc(&UNK_11039f9d0,0x38,7);
    *(undefined **)(puVar19 + 0x10) = puVar13;
    *(undefined8 **)(puVar19 + 0x18) = param_1;
    *(undefined8 *)(puVar19 + 0x20) = uVar25;
    puVar19[0x28] = param_2 & 1;
    *(undefined8 *)(puVar19 + 0x30) = uVar3;
    uStack_b0 = 0x1012f6b50;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0x42000000;
    puStack_c0 = &UNK_1000f6b44;
    puStack_b8 = &UNK_11039f9e8;
    ppuVar20 = &puStack_d0;
    puStack_a8 = puVar19;
    func_0x000107c60bc4(ppuVar20);
    puVar19 = puStack_a8;
    func_0x000107c61434(uVar25);
    func_0x000107c6157c(puVar13);
    func_0x000107c61174(param_1);
    func_0x000107c61174(uVar18);
    func_0x000107c61574(puVar19);
    func_0x000107c4e524(pcVar26);
    func_0x000107c60bd0(ppuVar20);
    func_0x000107c61574(puVar13);
    func_0x000107c6142c(uVar25);
    func_0x000107c61170(uVar18);
    func_0x000107c61574(puVar28);
  }
  else {
    func_0x000107c615f0(pcVar26);
    func_0x000107c61574(puVar13);
    func_0x000107c6142c(uVar25);
    uVar25 = *(undefined8 *)(unaff_x20 + _DAT_112d71508);
    puVar13 = &UNK_11039fa20;
    func_0x000107c613fc(&UNK_11039fa20,0x40,7);
    *(undefined8 **)(puVar13 + 0x10) = param_1;
    *(code **)(puVar13 + 0x18) = FUN_1012f6b44;
    *(undefined **)(puVar13 + 0x20) = puVar28;
    *(ulong *)(puVar13 + 0x28) = uVar31;
    *(undefined8 **)(puVar13 + 0x30) = puVar4;
    *(undefined8 *)(puVar13 + 0x38) = uVar25;
    uStack_b0 = 0x1012f6b78;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0x42000000;
    puStack_c0 = &UNK_1000b0c7c;
    puStack_b8 = &UNK_11039fa38;
    ppuVar20 = &puStack_d0;
    puStack_a8 = puVar13;
    func_0x000107c60bc4(ppuVar20);
    puVar13 = puStack_a8;
    func_0x000107c61174(param_1);
    func_0x000107c61174(uVar25);
    func_0x000107c6157c(puVar28);
    func_0x000107c61574(puVar13);
    func_0x000107c44650(pcVar26);
    func_0x000107c61574(puVar28);
    func_0x000107c61170(uVar18);
    func_0x000107c60bd0(ppuVar20);
  }
  func_0x000107c615e8(pcVar26);
  return;
}



/* Entry: 1012f40e8; end: 1012f41a3;  */

/* WARNING: Possible PIC construction at 0x0001012f413c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012f4140) */
/* WARNING: Removing unreachable block (ram,0x0001012f4148) */
/* WARNING: Removing unreachable block (ram,0x0001012f414c) */
/* WARNING: Removing unreachable block (ram,0x0001012f4150) */
/* WARNING: Removing unreachable block (ram,0x0001012f4164) */
/* WARNING: Removing unreachable block (ram,0x0001012f416c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012f40e8(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112d714d8) + _DAT_112efa770);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5b940();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 1012f41a4; end: 1012f4b1f;  */

/* WARNING: Possible PIC construction at 0x0001012f48ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012f4a84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012f48b0) */
/* WARNING: Removing unreachable block (ram,0x0001012f4a8c) */
/* WARNING: Removing unreachable block (ram,0x0001012f48b8) */
/* WARNING: Removing unreachable block (ram,0x0001012f4a88) */
/* WARNING: Removing unreachable block (ram,0x0001012f4aa8) */

void FUN_1012f41a4(undefined *param_1)

{
  undefined *puVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar13;
  long lVar14;
  long extraout_x8_03;
  undefined *puVar15;
  long lVar16;
  undefined *puVar17;
  ulong uVar18;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  ulong uVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  code *pcVar24;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  
  lVar4 = 0;
  func_0x000107c5f7fc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar4 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar4 = 0;
  func_0x000107c5f804();
  lStack_138 = *(long *)(lVar4 + -8);
  lStack_130 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_138 + 0x40));
  lVar22 = (long)&lStack_140 +
           ((-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) -
            (extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  lVar4 = 0x112d373d8;
  lStack_140 = lVar22;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar22 = lVar22 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar22 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar16 - extraout_x12_00;
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar14 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar17 = (undefined *)(lVar13 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c4a7d4();
  func_0x000107c61180();
  puVar5 = (undefined *)0x0;
  FUN_1012f6c58(0,0x112d70f68,&PTR_PTR_1126a69c8);
  puVar15 = param_1;
  func_0x000107c5fc54();
  func_0x000107c61170(param_1);
  puVar20 = (undefined *)((ulong)puVar15 & 0xffffffffffffff8);
  if ((ulong)puVar15 >> 0x3e == 0) {
    puVar23 = *(undefined **)(puVar20 + 0x10);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar23 = puVar20;
    if ((undefined *)0x7fffffffffffffff < puVar15) {
      puVar23 = puVar15;
    }
    func_0x000107c60480();
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar3;
  if (puVar23 != (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar15 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar20 + 0x10) <= puVar9) {
                    /* WARNING: Does not return */
            pcVar24 = (code *)SoftwareBreakpoint(1,0x1012f44e8);
            (*pcVar24)();
          }
          puVar6 = *(undefined **)(puVar15 + (long)puVar9 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar6 = puVar9;
          puVar5 = puVar15;
          func_0x0001012fac30();
        }
        puVar1 = puVar9 + 1;
        if (SCARRY8((long)puVar9,1)) {
                    /* WARNING: Does not return */
          pcVar24 = (code *)SoftwareBreakpoint(1,0x1012f44e4);
          (*pcVar24)();
        }
        puVar7 = puVar6;
        func_0x000107c42924();
        func_0x000107c61180();
        puVar8 = puVar7;
        func_0x000107c5d0f0();
        func_0x000107c61170(puVar7);
        if ((int)puVar8 == 4) break;
        func_0x000107c61170(puVar6);
        puVar9 = puVar9 + 1;
        if (puVar1 == puVar23) goto LAB_1012f4508;
      }
      puVar9 = puVar3;
      func_0x000107c61558();
      if (((ulong)puVar9 & 1) == 0) {
        puVar5 = (undefined *)(*(long *)(puVar3 + 0x10) + 1);
        func_0x0001012face0(0,puVar5,1);
      }
      uVar19 = *(ulong *)(puVar3 + 0x10);
      puVar9 = (undefined *)(uVar19 + 1);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar19) {
        puVar5 = puVar9;
        func_0x0001012face0(1 < *(ulong *)(puVar3 + 0x18),puVar9,1);
      }
      *(undefined **)(puVar3 + 0x10) = puVar9;
      *(undefined **)(puVar3 + uVar19 * 8 + 0x20) = puVar6;
      puVar9 = puVar1;
    } while (puVar1 != puVar23);
  }
LAB_1012f4508:
  func_0x000107c6142c(puVar15);
  if (((long)puVar3 < 0) || (((ulong)puVar3 >> 0x3e & 1) != 0)) {
    puVar15 = puVar3;
    func_0x000107c60480();
    puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar15 = *(undefined **)(puVar3 + 0x10);
    puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar20;
  if (puVar15 != (undefined *)0x0) {
    func_0x000100bcbf04();
    func_0x000107c5eea0((long)puVar17 - extraout_x12_01);
    lVar21 = 4;
    do {
      uVar19 = lVar21 - 4;
      if (((ulong)puVar3 & 0xc000000000000001) == 0) {
        if (*(ulong *)(puVar3 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
          pcVar24 = (code *)SoftwareBreakpoint(1,0x1012f4ad0);
          (*pcVar24)();
        }
        uVar10 = *(ulong *)(puVar3 + lVar21 * 8);
        func_0x000107c61174();
        puVar23 = puVar5;
      }
      else {
        uVar10 = uVar19;
        puVar23 = puVar3;
        func_0x0001012fac30();
      }
      puVar9 = (undefined *)(lVar21 - 3);
      if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
        pcVar24 = (code *)SoftwareBreakpoint(1,0x1012f4acc);
        (*pcVar24)();
      }
      uVar19 = uVar10;
      func_0x000107c42924();
      func_0x000107c61180();
      uVar18 = uVar19;
      func_0x000107c44fcc();
      func_0x000107c61180();
      func_0x000107c61170(uVar19);
      uVar11 = uVar18;
      func_0x000107c5faec();
      puVar5 = puVar23;
      func_0x000107c61170(uVar18);
      uVar19 = uVar11 & 0xffffffffffff;
      if (((ulong)puVar23 & 0x2000000000000000) != 0) {
        uVar19 = (ulong)puVar23 >> 0x38 & 0xf;
      }
      if (uVar19 == 0) {
        func_0x000107c6142c(puVar23);
        func_0x000107c61170(uVar10);
      }
      else {
        (**(code **)(lVar14 + 0x10))(lVar13,(long)puVar17 - extraout_x12_01,lVar4);
        pcVar24 = *(code **)(lVar14 + 0x38);
        (*pcVar24)(lVar13,0,1,lVar4);
        func_0x0001003a4c00(lVar13,lVar16);
        lVar12 = lVar16;
        (**(code **)(lVar14 + 0x30))(lVar16,1,lVar4);
        if ((int)lVar12 == 1) {
          func_0x0001000d1dcc(lVar16);
          func_0x000107c61434(puVar20);
          puVar5 = puVar23;
          func_0x000100029284();
          func_0x000107c6142c(puVar20);
          if (((ulong)puVar5 & 1) == 0) {
            func_0x000107c6142c(puVar23);
            func_0x000107c61170(uVar10);
            puVar5 = (undefined *)0x1;
          }
          else {
            puVar5 = puVar20;
            func_0x000107c61558();
            if ((int)puVar5 == 0) {
              func_0x000100fdb034();
            }
            func_0x000107c6142c(*(undefined8 *)(*(long *)(puVar20 + 0x30) + uVar11 * 0x10 + 8));
            (**(code **)(lVar14 + 0x20))
                      (lVar22,*(long *)(puVar20 + 0x38) + *(long *)(lVar14 + 0x48) * uVar11,lVar4);
            func_0x000100fdc0d0(uVar11,puVar20);
            func_0x000107c6142c(puVar23);
            func_0x000107c61170(uVar10);
            puVar5 = (undefined *)0x0;
          }
          (*pcVar24)(lVar22,puVar5,1,lVar4);
          func_0x0001000d1dcc(lVar22);
        }
        else {
          pcVar24 = *(code **)(lVar14 + 0x20);
          (*pcVar24)(puVar17,lVar16,lVar4);
          puVar5 = puVar20;
          func_0x000107c61558();
          uVar19 = uVar11;
          puVar6 = puVar23;
          func_0x000100029284();
          uVar18 = (ulong)~(uint)puVar6 & 1;
          lVar12 = *(long *)(puVar20 + 0x10) + uVar18;
          if (SCARRY8(*(long *)(puVar20 + 0x10),uVar18)) {
                    /* WARNING: Does not return */
            pcVar24 = (code *)SoftwareBreakpoint(1,0x1012f4ad4);
            (*pcVar24)();
          }
          if (*(long *)(puVar20 + 0x18) < lVar12) {
            FUN_100fdb65c(lVar12,puVar5);
            uVar19 = uVar11;
            puVar5 = puVar23;
            func_0x000100029284();
            if (((uint)puVar6 & 1) != ((uint)puVar5 & 1)) {
              func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
              pcVar24 = (code *)SoftwareBreakpoint(1,0x1012f4b20);
              (*pcVar24)();
            }
          }
          else if (((ulong)puVar5 & 1) == 0) {
            func_0x000100fdb034();
          }
          puVar5 = puVar17;
          if (((ulong)puVar6 & 1) == 0) {
            *(ulong *)(puVar20 + (uVar19 >> 6) * 8 + 0x40) =
                 *(ulong *)(puVar20 + (uVar19 >> 6) * 8 + 0x40) | 1L << (uVar19 & 0x3f);
            puVar2 = (ulong *)(*(long *)(puVar20 + 0x30) + uVar19 * 0x10);
            *puVar2 = uVar11;
            puVar2[1] = (ulong)puVar23;
            (*pcVar24)(*(long *)(puVar20 + 0x38) + *(long *)(lVar14 + 0x48) * uVar19,puVar17,lVar4);
            func_0x000107c61170(uVar10);
            if (SCARRY8(*(long *)(puVar20 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar24 = (code *)SoftwareBreakpoint(1,0x1012f4ad8);
              (*pcVar24)();
            }
            *(long *)(puVar20 + 0x10) = *(long *)(puVar20 + 0x10) + 1;
          }
          else {
            (**(code **)(lVar14 + 0x28))
                      (*(long *)(puVar20 + 0x38) + *(long *)(lVar14 + 0x48) * uVar19,puVar17,lVar4);
            func_0x000107c6142c(puVar23);
            func_0x000107c61170(uVar10);
          }
        }
      }
      lVar21 = lVar21 + 1;
    } while (puVar9 != puVar15);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 1012f4b20; end: 1012f5053;  */

void FUN_1012f4b20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  pcVar1 = "complete(with:shouldSend:)";
  func_0x0001000c10c0("complete(with:shouldSend:)");
  func_0x000107c61180();
  puVar2 = &UNK_11039fb38;
  func_0x000107c613fc(&UNK_11039fb38,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  puVar2[0x28] = param_4;
  *(undefined8 *)(puVar2 + 0x30) = param_5;
  uStack_60 = 0x1012f6ce8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_11039fb50;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c61174(param_5);
  func_0x000107c6157c(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61434(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1012f5054; end: 1012f50cb;  */

/* WARNING: Possible PIC construction at 0x0001012f50b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012f50b4) */

void FUN_1012f5054(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1012f50cc; end: 1012f52d7;  */

/* WARNING: Possible PIC construction at 0x0001012f5134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012f51d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012f51ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012f528c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012f52a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012f5290) */
/* WARNING: Removing unreachable block (ram,0x0001012f51f0) */
/* WARNING: Removing unreachable block (ram,0x0001012f51dc) */
/* WARNING: Removing unreachable block (ram,0x0001012f5138) */
/* WARNING: Removing unreachable block (ram,0x0001012f52c0) */
/* WARNING: Removing unreachable block (ram,0x0001012f52c8) */
/* WARNING: Removing unreachable block (ram,0x0001012f5140) */
/* WARNING: Removing unreachable block (ram,0x0001012f5148) */
/* WARNING: Removing unreachable block (ram,0x0001012f5178) */
/* WARNING: Removing unreachable block (ram,0x0001012f5158) */
/* WARNING: Removing unreachable block (ram,0x0001012f52a4) */

void FUN_1012f50cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c4a7d4();
  func_0x000107c61180();
  uVar1 = 0;
  FUN_1012f6c58(0,0x112d70f68,&PTR_PTR_1126a69c8);
  func_0x000107c5fc54(param_1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012f52d8; end: 1012f532f; -[_TtC16SCComposerSendTo27ComposerSendToPageCallbacks completeWithSelectionState:shouldSend:] */

/* WARNING: Possible PIC construction at 0x0001012f5318: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012f531c) */

void FUN_1012f52d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1012f3694(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1012f5330; end: 1012f53b3;  */

void FUN_1012f5330(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_1 != 0) {
    uVar1 = 0;
    func_0x000107c5eea4(0);
    func_0x000107c5f9dc(param_2,PTR___sSSN_11034da80,uVar1,PTR___sSSSHsWP_11034da90);
    func_0x000107c5d4e4(param_1);
    func_0x000107c615e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1012f53b4; end: 1012f5413; -[_TtC16SCComposerSendTo27ComposerSendToPageCallbacks init] */

void FUN_1012f53b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCComposerSendTo.ComposerSendToPageCallbacks",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012f53e0);
  (*pcVar1)();
}



/* Entry: 1012f5414; end: 1012f573f; -[_TtC16SCComposerSendTo27ComposerSendToPageCallbacks .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001012f5480: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012f5500: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012f56c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012f56f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012f56c4) */
/* WARNING: Removing unreachable block (ram,0x0001012f5504) */
/* WARNING: Removing unreachable block (ram,0x0001012f5484) */
/* WARNING: Removing unreachable block (ram,0x0001012f56f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012f5414(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d71408);
  FUN_100cabfb4(param_1 + _DAT_112d71410);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d71418));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d71420));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d71428));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d71430));
  return;
}



/* Entry: 1012f5740; end: 1012f575f;  */

void FUN_1012f5740(void)

{
  func_0x000107c61168(&PTR_PTR_1127c6028);
  return;
}



/* Entry: 1012f5760; end: 1012f5a53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012f5760(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  ulong auStack_78 [3];
  
  lVar6 = *(long *)(unaff_x20 + _DAT_112d714f0);
  lVar2 = lVar6;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar6);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  puVar3 = PTR_PTR_1126a69f8;
  func_0x000107c610f8();
  func_0x000107c4853c();
  puVar4 = PTR_PTR_1126c52b8;
  func_0x000107c610f8(PTR_PTR_1126c52b8);
  lVar2 = param_1;
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c46d30(puVar4);
  func_0x000107c61170(lVar2);
  func_0x000107c53710(puVar3);
  func_0x000107c61170(puVar4);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d71508);
  lVar2 = 0x112d38dc0;
  func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar5 = 0;
  FUN_1012f6c58(0,0x112d71038,&PTR_PTR_1126a69f8);
  *(undefined8 *)(lVar2 + 0x38) = uVar5;
  *(undefined **)(lVar2 + 0x20) = puVar3;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61174(puVar3);
  lVar6 = lVar2;
  func_0x000107c5fc48(lVar2,PTR___sypN_11034f1a8 + 8);
  func_0x000107c61574(lVar2);
  func_0x000107c45788(puVar4);
  func_0x000107c61170(lVar6);
  func_0x000107c4d664(uVar7);
  func_0x000107c61170(puVar4);
  if (param_5 < 4) {
    uVar5 = *(undefined8 *)(&UNK_10d9320b0 + param_5 * 8);
    uVar7 = *(undefined8 *)(&UNK_10d9320d0 + param_5 * 8);
    func_0x0001043f7068(0);
    func_0x000107c610f8();
    func_0x000107c61438(param_2,2);
    func_0x000107c61434(param_4);
    lVar6 = param_1;
    func_0x0001043f664c(param_1,param_2,uVar7,uVar5,0,param_3,param_4,0);
    lVar2 = _DAT_112d71568;
    func_0x000107c61428(unaff_x20 + _DAT_112d71568,auStack_78,0x21,0);
    if (lVar6 == 0) {
      FUN_1012f5f74(param_1,param_2);
      func_0x000107c6142c(param_2);
      func_0x000107c61170(param_1);
    }
    else {
      uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
      func_0x000107c61558(uVar5);
      uVar7 = *(undefined8 *)(unaff_x20 + lVar2);
      *(undefined8 *)(unaff_x20 + lVar2) = 0x8000000000000000;
      FUN_1012f6030(lVar6,param_1,param_2,uVar5);
      func_0x000107c6142c(param_2);
      *(undefined8 *)(unaff_x20 + lVar2) = uVar7;
    }
    func_0x000107c614a8(auStack_78);
    func_0x000107c61170(puVar3);
    return;
  }
  auStack_78[0] = param_5;
  func_0x000107c60614(&UNK_1106dc328,auStack_78,&UNK_1106dc328,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012f5a54);
  (*pcVar1)();
}



/* Entry: 1012f5a54; end: 1012f5ae3; -[_TtC16SCComposerSendTo27ComposerSendToPageCallbacks didCreateCustomStoryWithPublicationId:displayName:type:] */

/* WARNING: Possible PIC construction at 0x0001012f5ac8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012f5acc) */

void FUN_1012f5a54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_1012f5760(param_3,param_2,param_4,uVar1,param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}


