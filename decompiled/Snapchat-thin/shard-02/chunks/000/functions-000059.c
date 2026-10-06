/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1017775f4; end: 101777747;  */

void FUN_1017775f4(undefined8 param_1,byte param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  uVar6 = 0x800000010efbb620;
  uVar3 = 0xd000000000000017;
  if (param_2 != 5) {
    uVar6 = 0xe700000000000000;
    uVar3 = 0x6e776f6e6b6e75;
  }
  pcVar1 = "downloadIconError";
  uVar4 = 0xd000000000000019;
  if (param_2 != 3) {
    pcVar1 = "creatorsListDecodeError";
    uVar4 = 0xd000000000000011;
  }
  if (param_2 < 5) {
    uVar6 = (ulong)pcVar1 | 0x8000000000000000;
    uVar3 = uVar4;
  }
  pcVar1 = "downloadResourceError";
  uVar4 = 0xd00000000000001c;
  if (param_2 != 1) {
    pcVar1 = "downloadCreatorsListError";
    uVar4 = 0xd000000000000015;
  }
  pcVar2 = "fetchCreatorsPublicInfoError";
  uVar5 = 0xd000000000000017;
  if (param_2 != 0) {
    pcVar2 = pcVar1;
    uVar5 = uVar4;
  }
  if (param_2 < 3) {
    uVar6 = (ulong)pcVar2 | 0x8000000000000000;
    uVar3 = uVar5;
  }
  func_0x000107c5fb58(auStack_68,uVar3,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c606a8();
  return;
}



/* Entry: 101777748; end: 101777853;  */

void FUN_101777748(undefined8 *param_1)

{
  byte bVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20;
  uVar7 = 0x800000010efbb620;
  uVar4 = 0xd000000000000017;
  if (bVar1 != 5) {
    uVar7 = 0xe700000000000000;
    uVar4 = 0x6e776f6e6b6e75;
  }
  pcVar2 = "downloadIconError";
  uVar5 = 0xd000000000000019;
  if (bVar1 != 3) {
    pcVar2 = "creatorsListDecodeError";
    uVar5 = 0xd000000000000011;
  }
  if (bVar1 < 5) {
    uVar7 = (ulong)pcVar2 | 0x8000000000000000;
    uVar4 = uVar5;
  }
  pcVar2 = "downloadResourceError";
  uVar5 = 0xd00000000000001c;
  if (bVar1 != 1) {
    pcVar2 = "downloadCreatorsListError";
    uVar5 = 0xd000000000000015;
  }
  pcVar3 = "fetchCreatorsPublicInfoError";
  uVar6 = 0xd000000000000017;
  if (bVar1 != 0) {
    pcVar3 = pcVar2;
    uVar6 = uVar5;
  }
  if (bVar1 < 3) {
    uVar7 = (ulong)pcVar3 | 0x8000000000000000;
    uVar4 = uVar6;
  }
  *param_1 = uVar4;
  param_1[1] = uVar7;
  return;
}



/* Entry: 101777854; end: 1017778b3; -[_TtC35FetchCreatorsServicesImplementation24FetchCreatorsServiceImpl init] */

void FUN_101777854(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FetchCreatorsServicesImplementation.FetchCreatorsServiceImpl",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101777880);
  (*pcVar1)();
}



/* Entry: 1017778b4; end: 10177792b; -[_TtC35FetchCreatorsServicesImplementation24FetchCreatorsServiceImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001017778e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001017778e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1017778b4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dc9350));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dc9358));
  return;
}



/* Entry: 10177792c; end: 10177794b;  */

void FUN_10177792c(void)

{
  func_0x000107c61168(&PTR_PTR_1127e9a08);
  return;
}



/* Entry: 10177794c; end: 101777a5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10177794c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puVar4;
  long lStack_38;
  
  puVar4 = *(undefined **)(unaff_x20 + _DAT_112dc9378);
  func_0x000107c6157c(puVar4);
  func_0x0001000c74f0(&lStack_38);
  func_0x000107c61574(puVar4);
  if (lStack_38 == 0) {
    FUN_101777a5c();
    uVar2 = 0;
    FUN_10177a598(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    uVar3 = 0;
    func_0x000100775264(0,1,FUN_101777d48,0,uVar2);
    func_0x000107c61574(puVar4);
    func_0x00010488b12c();
    func_0x000107c61574(uVar3);
  }
  else {
    puVar4 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    lVar1 = lStack_38;
    func_0x000107c5fc48(lStack_38,&UNK_1107124a0);
    func_0x000107c6142c(lStack_38);
    func_0x000107c451b0(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  return puVar4;
}



/* Entry: 101777a5c; end: 101777d47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101777a5c(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  undefined8 uVar5;
  long alStack_68 [3];
  undefined8 uStack_50;
  
  func_0x0001000d224c(alStack_68);
  plVar1 = alStack_68;
  func_0x0001000a8868(plVar1,uStack_50);
  uVar5 = *(undefined8 *)(*plVar1 + 0x10);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efbb740);
  func_0x0001053ed428(uVar5,uVar2,1);
  func_0x000107c61170(uVar2);
  plVar1 = alStack_68;
  func_0x0001000834e4(plVar1);
  func_0x000101777e60();
  puVar3 = &UNK_1104076c8;
  func_0x000107c613fc(&UNK_1104076c8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  func_0x000107c61174();
  uVar5 = 0;
  func_0x0001048898b8(0,1,FUN_101778044,puVar3,PTR___s10Foundation4DataVN_110350ae0);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1104076f0;
  func_0x000107c613fc(&UNK_1104076f0,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  func_0x000107c61174();
  uVar2 = 0x112dc93a8;
  func_0x0001000285a8(0x112dc93a8,&UNK_10d98a420);
  uVar4 = 0;
  func_0x000100775264(0,1,FUN_101778340,puVar3,uVar2);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_110407718;
  func_0x000107c613fc(&UNK_110407718,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  func_0x000107c61174();
  uVar5 = 0;
  func_0x000100775264(0,1,FUN_101778358,puVar3,uVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_110407740;
  func_0x000107c613fc(&UNK_110407740,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  func_0x000107c61174();
  uVar2 = 0x112dc93b0;
  func_0x0001000285a8(0x112dc93b0,&UNK_10d98a428);
  uVar4 = 0;
  func_0x0001048898b8(0,1,FUN_1017786f4,puVar3,uVar2);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_110407768;
  func_0x000107c613fc(&UNK_110407768,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  func_0x000107c61174();
  uVar2 = 0;
  func_0x00010488a340(0,1,FUN_101778b38,puVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_110407790;
  func_0x000107c613fc(&UNK_110407790,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  func_0x000107c61174(unaff_x20);
  uVar5 = 0;
  func_0x00010488a3ec(0,1,FUN_101778c30,puVar3);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar3);
  return uVar5;
}



/* Entry: 101777d48; end: 101777d7f;  */

void FUN_101777d48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c5fc48(uVar1,&UNK_1107124a0);
  *param_1 = uVar1;
  return;
}



/* Entry: 101777d80; end: 101777de3; -[_TtC35FetchCreatorsServicesImplementation24FetchCreatorsServiceImpl fetchCreators] */

void FUN_101777d80(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10177794c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101777de4; end: 101777f8b; -[_TtC35FetchCreatorsServicesImplementation24FetchCreatorsServiceImpl prefetchCreators] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101777de4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112dc9378);
  func_0x000107c61174();
  func_0x000107c6157c(uVar1);
  func_0x000100075034(0x101777db4,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar1);
  FUN_101777a5c();
  func_0x000107c61574();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101777f8c; end: 101778043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101777f8c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long alStack_68 [3];
  undefined8 uStack_50;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  func_0x0001000d224c(alStack_68);
  plVar3 = alStack_68;
  func_0x0001000a8868(plVar3,uStack_50);
  uVar5 = *(undefined8 *)(*plVar3 + 0x10);
  uVar4 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efbb720);
  func_0x0001053ed428(uVar5,uVar4,1);
  func_0x000107c61170(uVar4);
  func_0x0001000834e4(alStack_68);
  FUN_10177805c(uVar1,uVar2);
  return;
}



/* Entry: 101778044; end: 10177805b;  */

void FUN_101778044(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101777f8c(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10177805c; end: 1017781a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10177805c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  func_0x0001000285a8(0x112dc93d0,&UNK_10d9ca9c0);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  lVar6 = *(long *)(unaff_x20 + _DAT_112dc9370);
  if (lVar6 != 0) {
    puVar2 = &UNK_1104077b8;
    func_0x000107c613fc(&UNK_1104077b8,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar3 = &UNK_110407858;
    func_0x000107c613fc(&UNK_110407858,0x30,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(long *)(puVar3 + 0x18) = lVar1;
    *(undefined8 *)(puVar3 + 0x20) = param_1;
    *(undefined8 *)(puVar3 + 0x28) = param_2;
    uStack_50 = 0x10177a584;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_110407870;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar2 = puStack_48;
    func_0x000107c6157c(lVar1);
    func_0x000107c61434(param_2);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(lVar6);
    func_0x000107c60bd0(ppuVar4);
  }
  uVar5 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c6157c(uVar5);
  func_0x000107c61574(lVar1);
  return uVar5;
}



/* Entry: 1017781a4; end: 10177833f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1017781a4(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 *unaff_x21;
  long alStack_68 [3];
  undefined8 uStack_50;
  
  puVar5 = (undefined1 *)*param_2;
  uVar1 = param_2[1];
  func_0x0001000d224c(alStack_68);
  plVar2 = alStack_68;
  func_0x0001000a8868(plVar2,uStack_50);
  uVar6 = *(undefined8 *)(*plVar2 + 0x10);
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010efbb700);
  func_0x0001053ed428(uVar6,uVar3,1);
  func_0x000107c61170(uVar3);
  func_0x0001000834e4(alStack_68);
  func_0x000107c610f8(PTR_PTR_1126a7bf0);
  func_0x00010006c00c(puVar5,uVar1);
  puVar4 = puVar5;
  FUN_10177a0e4(puVar5,uVar1);
  func_0x00010006c090(puVar5,uVar1);
  if (unaff_x21 == (undefined1 *)0x0) {
    puVar5 = puVar4;
    func_0x000107c40d28();
    func_0x000107c61180();
    func_0x000107c61170();
    if (puVar5 != (undefined1 *)0x0) {
      alStack_68[0] = 0;
      FUN_10177a598(0,0x112dc93e8,&PTR_PTR_1126b87a8);
      func_0x000107c61174();
      func_0x000107c5fc50();
      func_0x000107c61170(puVar5);
      func_0x000107c61170();
      puVar4 = puVar5;
      if (alStack_68[0] != 0) {
        *param_1 = alStack_68[0];
        return;
      }
    }
  }
  else {
    func_0x000107c614ac();
    puVar4 = unaff_x21;
  }
  FUN_101779e34();
  func_0x000107c613f8(&UNK_110407940,puVar4,0,0);
  *puVar4 = 5;
  func_0x000107c61654();
  return;
}



/* Entry: 101778340; end: 101778357;  */

void FUN_101778340(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1017781a4(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101778358; end: 101778393;  */

void FUN_101778358(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_101778394();
  *param_1 = uVar1;
  return;
}



/* Entry: 101778394; end: 10177863f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101778394(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uStack_60;
  ulong uStack_58;
  
  uStack_58 = param_1;
  func_0x000107c61434();
  func_0x0001000d224c(&uStack_60);
  uVar9 = uStack_60;
  uVar10 = uStack_60;
  func_0x000107c4f8dc();
  func_0x000107c615e8(uVar9);
  if (uVar10 == 1) {
    FUN_1017795b4();
    param_1 = uStack_58;
  }
  func_0x0001000d224c(&uStack_60);
  uVar9 = uStack_60;
  func_0x000107c4c8ac();
  func_0x000107c615e8(uStack_60);
  if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1017785e0);
    (*pcVar2)();
  }
  uVar10 = param_1 >> 0x3e;
  if (uVar10 == 0) {
    uVar3 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    uVar7 = uVar3;
    if (uVar9 <= uVar3) {
      uVar7 = uVar9;
    }
    uVar6 = 0;
    if (uVar9 != 0) {
      uVar6 = uVar7;
    }
    if ((long)uVar3 < (long)uVar6) {
LAB_101778628:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10177862c);
      (*pcVar2)();
    }
  }
  else {
    uVar7 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar7 = param_1;
    }
    uVar6 = uVar7;
    func_0x000107c60480();
    uVar3 = uVar7;
    func_0x000107c60480();
    if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101778640);
      (*pcVar2)();
    }
    uVar3 = uVar6;
    if ((long)uVar9 <= (long)uVar6) {
      uVar3 = uVar9;
    }
    uVar1 = uVar9;
    if (-1 < (long)uVar6) {
      uVar1 = uVar3;
    }
    uVar6 = 0;
    if (uVar9 != 0) {
      uVar6 = uVar1;
    }
    func_0x000107c60480();
    if ((long)uVar7 < (long)uVar6) goto LAB_101778628;
  }
  if (((param_1 & 0xc000000000000001) == 0) || (uVar6 == 0)) {
    func_0x000107c61434(param_1);
    if (uVar10 != 0) goto LAB_1017784cc;
LAB_1017784a4:
    uVar9 = 0;
    puVar8 = (undefined *)(param_1 & 0xffffffffffffff8);
    param_4 = uVar6 << 1;
  }
  else {
    uVar4 = 0;
    FUN_10177a598(0,0x112dc93e8,&PTR_PTR_1126b87a8);
    func_0x000107c61434(param_1);
    uVar9 = 0;
    do {
      uVar7 = uVar9 + 1;
      func_0x000107c60318(uVar9,param_1,uVar4);
      uVar9 = uVar7;
    } while (uVar6 != uVar7);
    if (uVar10 == 0) goto LAB_1017784a4;
LAB_1017784cc:
    func_0x000107c6142c(param_1);
    uVar9 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar9 = param_1;
    }
    puVar8 = (undefined *)0x0;
    func_0x000107c60484(0,uVar6);
    if ((param_4 & 1) == 0) goto LAB_1017784fc;
  }
  uVar4 = 0;
  func_0x000107c605fc(0);
  puVar5 = puVar8;
  func_0x000107c615f4(puVar8,2);
  func_0x000107c61480();
  if (puVar5 == (undefined *)0x0) {
    func_0x000107c615e8(puVar8);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  lVar11 = *(long *)(puVar5 + 0x10);
  func_0x000107c61574();
  if (SBORROW8(param_4 >> 1,uVar9)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101778630);
    (*pcVar2)();
  }
  if (lVar11 == (param_4 >> 1) - uVar9) {
    puVar5 = puVar8;
    func_0x000107c61480(puVar8,uVar4);
    if (puVar5 != (undefined *)0x0) {
      func_0x000107c615e8(puVar8);
      func_0x000107c6142c(param_1);
      return puVar5;
    }
    func_0x000107c6142c(param_1);
    func_0x000107c615ec(puVar8,2);
    return PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  func_0x000107c615e8();
LAB_1017784fc:
  puVar5 = puVar8;
  FUN_101779d20(puVar8);
  func_0x000107c6142c(param_1);
  func_0x000107c615e8(puVar8);
  return puVar5;
}



/* Entry: 101778640; end: 1017786f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101778640(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long alStack_68 [3];
  undefined8 uStack_50;
  
  uVar4 = *param_1;
  func_0x0001000d224c(alStack_68);
  plVar1 = alStack_68;
  func_0x0001000a8868(plVar1,uStack_50);
  uVar3 = *(undefined8 *)(*plVar1 + 0x10);
  uVar2 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efbb6e0);
  func_0x0001053ed428(uVar3,uVar2,1);
  func_0x000107c61170(uVar2);
  func_0x0001000834e4(alStack_68);
  FUN_10177870c(uVar4);
  return;
}



/* Entry: 1017786f4; end: 10177870b;  */

void FUN_1017786f4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101778640(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10177870c; end: 101778a5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10177870c(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long unaff_x20;
  ulong uVar15;
  ulong uVar16;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  func_0x0001000285a8(0x112dc93b8,&UNK_10d98a438);
  uVar12 = 0x18;
  func_0x000107c613fc();
  lVar2 = 0;
  func_0x00010095c380();
  uVar16 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar15 = *(ulong *)(uVar16 + 0x10);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar15 = uVar16;
    if (0x7fffffffffffffff < param_1) {
      uVar15 = param_1;
    }
    func_0x000107c60480();
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar8;
  if (uVar15 != 0) {
    uVar5 = 0;
    do {
      while( true ) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar16 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1017788c0);
            (*pcVar1)();
          }
          uVar3 = *(ulong *)(param_1 + uVar5 * 8 + 0x20);
          func_0x000107c61174();
          uVar13 = uVar12;
        }
        else {
          uVar3 = uVar5;
          uVar13 = param_1;
          FUN_101779e74(uVar5,param_1,&PTR_PTR_1126b87a8,0x112dc93e8);
        }
        if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1017788bc);
          (*pcVar1)();
        }
        uVar14 = uVar5 + 1;
        func_0x000107c61174();
        uVar4 = uVar3;
        func_0x000107c5d984();
        func_0x000107c61180();
        if (uVar4 == 0) break;
        uVar5 = uVar4;
        func_0x000107c5faec();
        uVar12 = uVar13;
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar4);
        puVar6 = puVar8;
        func_0x000107c61558();
        puVar7 = puVar8;
        if (((ulong)puVar6 & 1) == 0) {
          uVar12 = *(long *)(puVar8 + 0x10) + 1;
          puVar7 = (undefined *)0x0;
          func_0x0001000d182c(0,uVar12,1,puVar8);
        }
        uVar4 = *(ulong *)(puVar7 + 0x10);
        uVar3 = uVar4 + 1;
        puVar8 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar4) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
          uVar12 = uVar3;
          func_0x0001000d182c(puVar8,uVar3,1,puVar7);
        }
        *(ulong *)(puVar8 + 0x10) = uVar3;
        *(ulong *)(puVar8 + uVar4 * 0x10 + 0x20) = uVar5;
        *(ulong *)(puVar8 + uVar4 * 0x10 + 0x28) = uVar13;
        uVar5 = uVar14;
        if (uVar14 == uVar15) goto LAB_1017788e0;
      }
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar3);
      uVar12 = uVar13;
      uVar5 = uVar5 + 1;
    } while (uVar14 != uVar15);
  }
LAB_1017788e0:
  lVar9 = *(long *)(unaff_x20 + _DAT_112dc9368);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar9 == 0) {
    func_0x000107c6142c(puVar8);
  }
  else {
    puVar7 = puVar8;
    func_0x000107c5fc48(puVar8,PTR___sSSN_11034da80);
    func_0x000107c6142c(puVar8);
    uVar10 = 0;
    FUN_10177a598(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    func_0x000107c5ffdc();
    puVar8 = &UNK_1104077b8;
    func_0x000107c613fc(&UNK_1104077b8,0x18,7);
    func_0x000107c61614(puVar8 + 0x10,unaff_x20);
    puVar6 = &UNK_1104077e0;
    func_0x000107c613fc(&UNK_1104077e0,0x28,7);
    *(undefined **)(puVar6 + 0x10) = puVar8;
    *(long *)(puVar6 + 0x18) = lVar2;
    *(ulong *)(puVar6 + 0x20) = param_1;
    pcStack_70 = FUN_101779e0c;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100f6151c;
    puStack_78 = &UNK_1104077f8;
    ppuVar11 = &puStack_90;
    puStack_68 = puVar6;
    func_0x000107c60bc4(ppuVar11);
    puVar8 = puStack_68;
    func_0x000107c6157c(lVar2);
    func_0x000107c61434(param_1);
    func_0x000107c61574(puVar8);
    func_0x000107c5b4fc(lVar9);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c615e8(lVar9);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(uVar10);
  }
  uVar10 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c6157c(uVar10);
  func_0x000107c61574(lVar2);
  return uVar10;
}



/* Entry: 101778a60; end: 101778b37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101778a60(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long alStack_60 [2];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar1 = alStack_60;
  uStack_50 = *param_1;
  uVar4 = *(undefined8 *)(param_2 + _DAT_112dc9378);
  func_0x000107c6157c(uVar4);
  func_0x000100075034(FUN_101778c38,alStack_60,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar4);
  func_0x0001000d224c(alStack_60);
  func_0x0001000a8868(alStack_60,uStack_48);
  uVar3 = *(undefined8 *)(*plVar1 + 0x10);
  uVar2 = 0;
  uVar4 = uStack_48;
  FUN_1017772ac(0);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar4);
  func_0x0001053ed428(uVar3,uVar2,1);
  func_0x000107c61170(uVar2);
  func_0x0001000834e4(alStack_60);
  return;
}



/* Entry: 101778b38; end: 101778b4f;  */

void FUN_101778b38(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101778a60(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101778b50; end: 101778c2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101778b50(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long alStack_60 [3];
  undefined8 uStack_48;
  byte bStack_31;
  
  plVar4 = alStack_60;
  alStack_60[0] = param_1;
  func_0x000107c614b0();
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  pbVar3 = &bStack_31;
  func_0x000107c6147c(pbVar3,alStack_60,uVar2,&UNK_110407940,6);
  func_0x0001000d224c(alStack_60);
  func_0x0001000a8868(alStack_60,uStack_48);
  uVar1 = bStack_31 | 0x100;
  if ((int)pbVar3 == 0) {
    uVar1 = 0x106;
  }
  uVar5 = (ulong)uVar1;
  uVar6 = *(undefined8 *)(*plVar4 + 0x10);
  uVar2 = uStack_48;
  FUN_1017772ac(uVar5);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar2);
  func_0x0001053ed428(uVar6,uVar5,1);
  func_0x000107c61170(uVar5);
  func_0x0001000834e4(alStack_60);
  return;
}



/* Entry: 101778c30; end: 101778c37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101778c30(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long alStack_60 [3];
  undefined8 uStack_48;
  byte bStack_31;
  
  plVar4 = alStack_60;
  alStack_60[0] = param_1;
  func_0x000107c614b0();
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  pbVar3 = &bStack_31;
  func_0x000107c6147c(pbVar3,alStack_60,uVar2,&UNK_110407940,6);
  func_0x0001000d224c(alStack_60);
  func_0x0001000a8868(alStack_60,uStack_48);
  uVar1 = bStack_31 | 0x100;
  if ((int)pbVar3 == 0) {
    uVar1 = 0x106;
  }
  uVar5 = (ulong)uVar1;
  uVar6 = *(undefined8 *)(*plVar4 + 0x10);
  uVar2 = uStack_48;
  FUN_1017772ac(uVar5);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar2);
  func_0x0001053ed428(uVar6,uVar5,1);
  func_0x000107c61170(uVar5);
  func_0x0001000834e4(alStack_60);
  return;
}



/* Entry: 101778c38; end: 101778c7b;  */

void FUN_101778c38(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6142c(*param_1);
  *param_1 = uVar1;
  func_0x000107c61434(uVar1);
  return;
}



/* Entry: 101778c7c; end: 101778e37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101778c7c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long alStack_80 [3];
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  plVar4 = alStack_80;
  plVar5 = alStack_80;
  plVar8 = alStack_80;
  uVar9 = *param_1;
  uVar1 = param_1[1];
  cVar2 = *(char *)(param_1 + 2);
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  puVar3 = (undefined *)(param_2 + 0x10);
  func_0x000107c61618();
  if (puVar3 == (undefined *)0x0) {
    FUN_101779e34();
    puVar7 = &UNK_110407940;
    func_0x000107c613f8(&UNK_110407940,puVar3,0,0);
    *puVar3 = 6;
    puVar3 = puVar7;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar7);
    func_0x000107c3fef8(param_3);
  }
  else {
    if (cVar2 == '\x01') {
      func_0x0001000d224c(alStack_80);
      func_0x0001000a8868(alStack_80,uStack_68);
      func_0x0001053ed59c(*(undefined8 *)(*plVar4 + 0x10),0,1);
      func_0x0001000834e4();
      FUN_101779e34();
      puVar6 = &UNK_110407940;
      func_0x000107c613f8(&UNK_110407940,plVar5,0,0);
      *(undefined1 *)plVar5 = 4;
      puVar7 = puVar6;
      func_0x000107c5ed2c();
      func_0x000107c614ac(puVar6);
      func_0x000107c3fef8(param_3);
    }
    else {
      func_0x0001000d224c(alStack_80);
      func_0x0001000a8868(alStack_80,uStack_68);
      func_0x0001053ed59c(*(undefined8 *)(*plVar8 + 0x10),1,1);
      func_0x0001000834e4(alStack_80);
      puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
      func_0x000107c5ee20(uVar9,uVar1);
      func_0x000107c4635c(puVar7);
      func_0x000107c61170(uVar9);
      func_0x000107c3fefc(param_3);
    }
    func_0x000107c61170(puVar7);
  }
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 101778e38; end: 10177909f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101778e38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  puVar2 = (undefined1 *)(param_1 + 0x10);
  func_0x000107c61618();
  if (puVar2 == (undefined1 *)0x0) {
    FUN_101779e34();
    puVar8 = &UNK_110407940;
    func_0x000107c613f8(&UNK_110407940,puVar2,0,0);
    *puVar2 = 6;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar8);
  }
  else {
    puVar8 = PTR_PTR_1126b08b0;
    func_0x000107c61168(PTR_PTR_1126b08b0);
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c3f71c(puVar8);
    func_0x000107c61180();
    func_0x000107c61170(param_3);
    func_0x000107c61174(puVar8);
    func_0x0001000d224c(&puStack_98);
    func_0x000107c40d2c(puStack_98);
    func_0x000107c615e8(puStack_98);
    puVar3 = PTR_PTR_1126b17d8;
    func_0x000107c610f8();
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
    func_0x000107c460ec();
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar4);
    if (puVar3 == (undefined *)0x0) {
      puVar3 = PTR_PTR_1126b17d8;
      func_0x000107c610f8(PTR_PTR_1126b17d8);
      func_0x000107c453e4();
    }
    lVar5 = *(long *)(puVar2 + _DAT_112dc9350);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar8);
    }
    else {
      uStack_78 = 0x10177a590;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      puStack_88 = &UNK_100f17d9c;
      puStack_80 = &UNK_110407898;
      ppuVar6 = &puStack_98;
      uStack_70 = param_2;
      func_0x000107c60bc4(ppuVar6);
      uVar1 = uStack_70;
      func_0x000107c6157c(param_2);
      func_0x000107c61574(uVar1);
      lVar7 = lVar5;
      func_0x000107c5078c(lVar5);
      func_0x000107c61180();
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar8);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c615e8(lVar7);
      func_0x000107c615e8(lVar5);
    }
  }
  return;
}



/* Entry: 1017790a0; end: 10177915f;  */

void FUN_1017790a0(undefined1 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = param_1;
  func_0x000107c44314();
  if (puVar1 == (undefined1 *)0x0) {
    func_0x000107c30a1c();
    func_0x000107c61180();
    puVar1 = (undefined1 *)0x0;
    if (param_1 != (undefined1 *)0x0) {
      puVar1 = param_1;
      func_0x000107c5ee30();
      func_0x000107c61170(param_1);
      puStack_40 = puVar1;
      uStack_38 = param_2;
      func_0x000100b60084(&puStack_40);
      func_0x00010006c090(puVar1,param_2);
      return;
    }
  }
  FUN_101779e34();
  puVar2 = &UNK_110407940;
  func_0x000107c613f8(&UNK_110407940,puVar1,0,0);
  *puVar1 = 2;
  func_0x00010488ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar2);
  return;
}



/* Entry: 101779160; end: 101779547;  */

void FUN_101779160(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined *puStack_b8;
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined2 uStack_68;
  
  func_0x000107c61428(param_3 + 0x10,auStack_b0,0,0);
  puVar4 = (undefined1 *)(param_3 + 0x10);
  func_0x000107c61618();
  if (puVar4 == (undefined1 *)0x0) {
    FUN_101779e34();
    puVar6 = &UNK_110407940;
    func_0x000107c613f8(&UNK_110407940,puVar4,0,0);
    *puVar4 = 6;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar6);
  }
  else {
    if (param_1 == 0) {
      puVar7 = puVar4;
      FUN_101779e34();
      puVar6 = &UNK_110407940;
      func_0x000107c613f8(&UNK_110407940,puVar7,0,0);
      *puVar7 = 1;
      func_0x00010488ade0();
      func_0x000107c614ac(puVar6);
    }
    else {
      FUN_10177a1a4(param_1,param_5);
      uVar8 = *(ulong *)(param_1 + 0x10);
      if (uVar8 == 0) {
        func_0x000107c6142c(param_1);
        puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        FUN_101779be4(0,uVar8,0);
        uVar10 = 0;
        puVar11 = (undefined8 *)(param_1 + 0x30);
        do {
          puVar6 = puStack_b8;
          if (*(ulong *)(param_1 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101779398);
            (*pcVar3)();
          }
          uVar5 = puVar11[-2];
          uVar2 = puVar11[-1];
          uVar9 = *puVar11;
          func_0x000107c61174(uVar5);
          func_0x000107c61434(uVar9);
          func_0x000101779398(&uStack_98,uVar5,uVar2,uVar9,puVar4);
          func_0x000107c6142c(uVar9);
          func_0x000107c61170(uVar5);
          uVar1 = *(ulong *)(puVar6 + 0x10);
          puStack_b8 = puVar6;
          if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
            FUN_101779be4(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
          }
          puVar6 = puStack_b8;
          uVar10 = uVar10 + 1;
          *(ulong *)(puStack_b8 + 0x10) = uVar1 + 1;
          *(undefined2 *)(puStack_b8 + uVar1 * 0x38 + 0x50) = uStack_68;
          *(undefined8 *)(puStack_b8 + uVar1 * 0x38 + 0x38) = uStack_80;
          *(undefined8 *)(puStack_b8 + uVar1 * 0x38 + 0x30) = uStack_88;
          *(undefined8 *)(puStack_b8 + uVar1 * 0x38 + 0x48) = uStack_70;
          *(undefined8 *)(puStack_b8 + uVar1 * 0x38 + 0x40) = uStack_78;
          *(undefined8 *)(puStack_b8 + uVar1 * 0x38 + 0x28) = uStack_90;
          *(undefined8 *)(puStack_b8 + uVar1 * 0x38 + 0x20) = uStack_98;
          puVar11 = puVar11 + 3;
        } while (uVar8 != uVar10);
        func_0x000107c6142c(param_1);
      }
      puStack_b8 = puVar6;
      func_0x000100b60084(&puStack_b8);
      func_0x000107c6142c(puVar6);
    }
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 101779548; end: 1017795b3;  */

void FUN_101779548(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_10177a598(0,0x112dc93e8,&PTR_PTR_1126b87a8);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112dc93f0;
  plVar5 = (long *)&UNK_10d98a468;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1017795b4; end: 1017797df;  */

void FUN_1017795b4(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *unaff_x20;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uStack_68;
  
  uVar10 = *unaff_x20;
  if (uVar10 >> 0x3e == 0) {
    uVar11 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    if (uVar11 < 2) {
      return;
    }
  }
  else {
    uVar11 = uVar10 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar10) {
      uVar11 = uVar10;
    }
    uVar12 = uVar11;
    func_0x000107c60480();
    if ((long)uVar12 < 2) {
      return;
    }
    func_0x000107c60480();
    if ((long)uVar11 < 2) {
      return;
    }
  }
  uVar12 = 0;
  uVar17 = uVar11 - 2;
  do {
    uStack_68 = 0;
    func_0x000107c61598(&uStack_68,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uStack_68;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar11;
    lVar8 = SUB168(auVar1 * auVar3,8);
    if (uStack_68 * uVar11 < uVar11) {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = -uVar11 / uVar11;
      }
      uVar13 = -uVar11 - uVar13 * uVar11;
      if (uStack_68 * uVar11 < uVar13) {
        do {
          uStack_68 = 0;
          func_0x000107c61598(&uStack_68,8);
        } while (uStack_68 * uVar11 < uVar13);
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uStack_68;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar11;
        lVar8 = SUB168(auVar2 * auVar4,8);
      }
    }
    uVar13 = uVar12 + lVar8;
    if (SCARRY8(uVar12,lVar8)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101779784);
      (*pcVar5)();
    }
    if (uVar12 != uVar13) {
      if ((uVar10 & 0xc000000000000001) == 0) {
        uVar9 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
        if (uVar9 <= uVar12) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101779788);
          (*pcVar5)();
        }
        if (uVar9 <= uVar13) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10177978c);
          (*pcVar5)();
        }
        uVar9 = *(ulong *)(uVar10 + 0x20 + uVar12 * 8);
        uVar16 = *(ulong *)(uVar10 + 0x20 + uVar13 * 8);
        func_0x000107c61174();
        func_0x000107c61174();
      }
      else {
        uVar9 = uVar12;
        FUN_101779e74(uVar12,uVar10,&PTR_PTR_1126b87a8,0x112dc93e8);
        uVar16 = uVar13;
        FUN_101779e74(uVar13,uVar10,&PTR_PTR_1126b87a8,0x112dc93e8);
      }
      uVar14 = uVar10;
      func_0x000107c61550();
      if ((((int)uVar14 == 0) || ((long)uVar10 < 0)) || ((uVar10 >> 0x3e & 1) != 0)) {
        FUN_10177a030();
        uVar15 = (uint)(uVar10 >> 0x3e) & 1;
      }
      else {
        uVar15 = 0;
      }
      uVar14 = uVar10 & 0xffffffffffffff8;
      lVar8 = uVar14 + uVar12 * 8;
      uVar7 = *(undefined8 *)(lVar8 + 0x20);
      *(ulong *)(lVar8 + 0x20) = uVar16;
      func_0x000107c61170(uVar7);
      if (((long)uVar10 < 0) || (uVar15 != 0)) {
        FUN_10177a030();
        uVar14 = uVar10 & 0xffffffffffffff8;
      }
      if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101779780);
        (*pcVar5)();
      }
      if (*(ulong *)(uVar14 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101779790);
        (*pcVar5)();
      }
      lVar8 = uVar14 + uVar13 * 8;
      uVar7 = *(undefined8 *)(lVar8 + 0x20);
      *(ulong *)(lVar8 + 0x20) = uVar9;
      func_0x000107c61170(uVar7);
      *unaff_x20 = uVar10;
    }
    uVar11 = uVar11 - 1;
    bVar6 = uVar12 == uVar17;
    uVar12 = uVar12 + 1;
    if (bVar6) {
      return;
    }
  } while( true );
}



/* Entry: 1017797e0; end: 101779a4b;  */

ulong FUN_1017797e0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101779908);
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
  FUN_101779a4c(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101779904);
      (*pcVar1)();
    }
    FUN_101779acc(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 101779a4c; end: 101779acb;  */

undefined * FUN_101779a4c(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_101779548();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 101779acc; end: 101779be3;  */

long FUN_101779acc(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101779be0);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101779be4);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_10177a598(0,0x112dc93e8,&PTR_PTR_1126b87a8);
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
      FUN_10177a598(0,0x112dc93e8,&PTR_PTR_1126b87a8);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101779bdc);
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



/* Entry: 101779be4; end: 101779bff;  */

void FUN_101779be4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101779c00();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101779c00; end: 101779d1f;  */

undefined * FUN_101779c00(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101779d20);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    puVar2 = (undefined *)0x112dc93c8;
    func_0x0001000285a8(0x112dc93c8,&UNK_10d98a440);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x38) * 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar2 + 0x20,param_4 + 0x20,uVar5,&UNK_1107124a0);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar5 * 0x38 <= puVar2 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar2;
}



/* Entry: 101779d20; end: 101779e0b;  */

undefined * FUN_101779d20(undefined *param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  param_4 = param_4 >> 1;
  lVar1 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101779e0c);
    (*pcVar2)();
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    if (0 < lVar1) {
      FUN_101779548();
      func_0x000107c613fc();
      puVar3 = param_1;
      func_0x000107c610a4();
      puVar5 = puVar3 + -0x19;
      if (0x1f < (long)puVar3) {
        puVar5 = puVar3 + -0x20;
      }
      *(long *)(param_1 + 0x10) = lVar1;
      *(ulong *)(param_1 + 0x18) = ((long)puVar5 >> 3) << 1 | 1;
      puVar5 = param_1;
    }
    if (param_3 == param_4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101779e08);
      (*pcVar2)();
    }
    uVar4 = 0;
    FUN_10177a598(0,0x112dc93e8,&PTR_PTR_1126b87a8);
    func_0x000107c6140c(puVar5 + 0x20,param_2 + param_3 * 8,lVar1,uVar4);
  }
  return puVar5;
}



/* Entry: 101779e0c; end: 101779e33;  */

void FUN_101779e0c(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined *puStack_b8;
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined2 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_b0,0,0);
  puVar5 = (undefined1 *)(lVar2 + 0x10);
  func_0x000107c61618();
  if (puVar5 == (undefined1 *)0x0) {
    FUN_101779e34();
    puVar6 = &UNK_110407940;
    func_0x000107c613f8(&UNK_110407940,puVar5,0,0);
    *puVar5 = 6;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar6);
  }
  else {
    if (param_1 == 0) {
      puVar7 = puVar5;
      FUN_101779e34();
      puVar6 = &UNK_110407940;
      func_0x000107c613f8(&UNK_110407940,puVar7,0,0);
      *puVar7 = 1;
      func_0x00010488ade0();
      func_0x000107c614ac(puVar6);
    }
    else {
      FUN_10177a1a4(param_1,uVar8);
      uVar9 = *(ulong *)(param_1 + 0x10);
      if (uVar9 == 0) {
        func_0x000107c6142c(param_1);
        puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        FUN_101779be4(0,uVar9,0);
        uVar11 = 0;
        puVar12 = (undefined8 *)(param_1 + 0x30);
        do {
          puVar6 = puStack_b8;
          if (*(ulong *)(param_1 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101779398);
            (*pcVar4)();
          }
          uVar8 = puVar12[-2];
          uVar3 = puVar12[-1];
          uVar10 = *puVar12;
          func_0x000107c61174(uVar8);
          func_0x000107c61434(uVar10);
          func_0x000101779398(&uStack_98,uVar8,uVar3,uVar10,puVar5);
          func_0x000107c6142c(uVar10);
          func_0x000107c61170(uVar8);
          uVar1 = *(ulong *)(puVar6 + 0x10);
          puStack_b8 = puVar6;
          if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
            FUN_101779be4(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
          }
          puVar6 = puStack_b8;
          uVar11 = uVar11 + 1;
          *(ulong *)(puStack_b8 + 0x10) = uVar1 + 1;
          *(undefined2 *)(puStack_b8 + uVar1 * 0x38 + 0x50) = uStack_68;
          *(undefined8 *)(puStack_b8 + uVar1 * 0x38 + 0x38) = uStack_80;
          *(undefined8 *)(puStack_b8 + uVar1 * 0x38 + 0x30) = uStack_88;
          *(undefined8 *)(puStack_b8 + uVar1 * 0x38 + 0x48) = uStack_70;
          *(undefined8 *)(puStack_b8 + uVar1 * 0x38 + 0x40) = uStack_78;
          *(undefined8 *)(puStack_b8 + uVar1 * 0x38 + 0x28) = uStack_90;
          *(undefined8 *)(puStack_b8 + uVar1 * 0x38 + 0x20) = uStack_98;
          puVar12 = puVar12 + 3;
        } while (uVar9 != uVar11);
        func_0x000107c6142c(param_1);
      }
      puStack_b8 = puVar6;
      func_0x000100b60084(&puStack_b8);
      func_0x000107c6142c(puVar6);
    }
    func_0x000107c61170(puVar5);
  }
  return;
}



/* Entry: 101779e34; end: 101779e73;  */

void FUN_101779e34(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc93c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d98a524;
  func_0x000107c61520(&UNK_10d98a524,&UNK_110407940);
  puRam0000000112dc93c0 = puVar1;
  return;
}



/* Entry: 101779e74; end: 10177a02f;  */

ulong FUN_101779e74(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101779f58);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101779f5c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_10177a598(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10177a030);
  (*pcVar2)();
}



/* Entry: 10177a030; end: 10177a0e3;  */

/* WARNING: Removing unreachable block (ram,0x000101779814) */
/* WARNING: Removing unreachable block (ram,0x000101779838) */
/* WARNING: Removing unreachable block (ram,0x00010177981c) */
/* WARNING: Removing unreachable block (ram,0x000101779904) */
/* WARNING: Removing unreachable block (ram,0x000101779828) */
/* WARNING: Removing unreachable block (ram,0x000101779830) */
/* WARNING: Removing unreachable block (ram,0x000101779874) */
/* WARNING: Removing unreachable block (ram,0x000101779888) */
/* WARNING: Removing unreachable block (ram,0x000101779894) */
/* WARNING: Removing unreachable block (ram,0x00010177989c) */

ulong FUN_10177a030(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar3 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar3 = param_1;
    }
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar4 = param_1;
    }
    func_0x000107c60480(uVar4,uVar3);
  }
  uVar2 = uVar4;
  FUN_101779a4c(uVar4,uVar3);
  if (-1 < (long)uVar4) {
    FUN_101779acc(0,uVar4,uVar2 + 0x20,param_1);
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101779904);
  (*pcVar1)();
}



/* Entry: 10177a0e4; end: 10177a1a3;  */

undefined * FUN_10177a0e4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined *unaff_x20;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined *puStack_d8;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  uVar5 = 0;
  if (unaff_x20 == (undefined *)0x0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  uVar15 = param_2;
  if (uVar5 >> 0x3e == 0) {
    uVar21 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar21 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar21 = uVar5;
    }
    func_0x000107c60480();
  }
  puStack_d8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar21 != 0) {
    uVar19 = 0;
    uVar17 = param_2 & 0xffffffffffffff8;
    uVar2 = uVar17;
    if (0x7fffffffffffffff < param_2) {
      uVar2 = param_2;
    }
    do {
      if ((uVar5 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10177a530);
          (*pcVar3)();
        }
        uVar6 = *(ulong *)(uVar5 + 0x20 + uVar19 * 8);
        func_0x000107c61174();
        uVar13 = uVar15;
      }
      else {
        uVar6 = uVar19;
        uVar13 = uVar5;
        FUN_101779e74(uVar19,uVar5,&PTR_PTR_1126b15c8,0x112d4ed88);
      }
      bVar4 = SCARRY8(uVar19,1);
      uVar19 = uVar19 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10177a52c);
        (*pcVar3)();
      }
      uVar7 = uVar6;
      func_0x000107c40cdc();
      func_0x000107c61180();
      uVar15 = uVar13;
      if (uVar7 != 0) {
        uVar22 = uVar7;
        func_0x000107c4f3bc();
        uVar15 = uVar13;
        if ((int)uVar22 == 0) {
          uVar22 = uVar7;
          func_0x000107c4f3b8();
          func_0x000107c61180();
          uVar15 = uVar13;
          if (uVar22 != 0) {
            uVar8 = uVar22;
            func_0x000107c5faec();
            uVar15 = uVar13;
            func_0x000107c61170(uVar22);
            if (param_2 >> 0x3e == 0) {
              uVar22 = *(ulong *)(uVar17 + 0x10);
            }
            else {
              uVar22 = uVar2;
              func_0x000107c60480();
            }
            if (uVar22 != 0) {
              uVar23 = 0;
              do {
                if ((param_2 & 0xc000000000000001) == 0) {
                  if (*(ulong *)(uVar17 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x10177a528);
                    (*pcVar3)();
                  }
                  uVar9 = *(ulong *)(param_2 + uVar23 * 8 + 0x20);
                  func_0x000107c61174();
                }
                else {
                  uVar9 = uVar23;
                  uVar15 = param_2;
                  FUN_101779e74(uVar23,param_2,&PTR_PTR_1126b87a8,0x112dc93e8);
                }
                uVar1 = uVar23 + 1;
                if (SCARRY8(uVar23,1)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10177a524);
                  (*pcVar3)();
                }
                uVar20 = uVar9;
                func_0x000107c5d984();
                func_0x000107c61180();
                if (uVar20 == 0) {
                  uVar18 = 0;
                  uVar20 = 0;
                  uVar14 = uVar15;
                }
                else {
                  uVar18 = uVar20;
                  func_0x000107c5faec();
                  uVar14 = uVar15;
                  func_0x000107c61170(uVar20);
                  uVar20 = uVar15;
                }
                uVar10 = uVar6;
                func_0x000107c5d984();
                func_0x000107c61180();
                if (uVar10 != 0) {
                  uVar11 = uVar10;
                  func_0x000107c5faec();
                  uVar15 = uVar14;
                  func_0x000107c61170(uVar10);
                  if (uVar20 == 0) {
                    if (uVar14 != 0) {
                      func_0x000107c6142c(uVar14);
LAB_10177a340:
                      func_0x000107c61170(uVar9);
                      goto LAB_10177a348;
                    }
                  }
                  else {
                    if (uVar14 == 0) goto LAB_10177a410;
                    if ((uVar18 == uVar11) && (uVar20 == uVar14)) {
                      func_0x000107c6142c(uVar20);
                      func_0x000107c6142c(uVar14);
                    }
                    else {
                      uVar15 = uVar20;
                      func_0x000107c605b8(uVar18,uVar20,uVar11,uVar14,0);
                      func_0x000107c6142c(uVar20);
                      func_0x000107c6142c(uVar14);
                      if ((uVar18 & 1) == 0) goto LAB_10177a340;
                    }
                  }
LAB_10177a464:
                  func_0x000107c61174();
                  puVar12 = puStack_d8;
                  func_0x000107c61558();
                  if (((ulong)puVar12 & 1) == 0) {
                    uVar15 = *(long *)(puStack_d8 + 0x10) + 1;
                    puStack_d8 = (undefined *)0x0;
                    func_0x000101779908(0,uVar15,1);
                  }
                  uVar23 = *(ulong *)(puStack_d8 + 0x10);
                  uVar22 = uVar23 + 1;
                  if (*(ulong *)(puStack_d8 + 0x18) >> 1 <= uVar23) {
                    puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puStack_d8 + 0x18));
                    uVar15 = uVar22;
                    func_0x000101779908(puVar12,uVar22,1,puStack_d8);
                    puStack_d8 = puVar12;
                  }
                  *(ulong *)(puStack_d8 + 0x10) = uVar22;
                  *(ulong *)(puStack_d8 + uVar23 * 0x18 + 0x20) = uVar9;
                  *(ulong *)(puStack_d8 + uVar23 * 0x18 + 0x28) = uVar8;
                  *(ulong *)(puStack_d8 + uVar23 * 0x18 + 0x30) = uVar13;
                  func_0x000107c61170(uVar9);
                  goto LAB_10177a244;
                }
                uVar15 = uVar14;
                if (uVar20 == 0) goto LAB_10177a464;
LAB_10177a410:
                func_0x000107c61170(uVar9);
                func_0x000107c6142c(uVar20);
LAB_10177a348:
                uVar23 = uVar23 + 1;
              } while (uVar1 != uVar22);
            }
            func_0x000107c6142c(uVar13);
          }
        }
LAB_10177a244:
        func_0x000107c61170(uVar7);
      }
      func_0x000107c61170(uVar6);
    } while (uVar19 != uVar21);
  }
  return puStack_d8;
}



/* Entry: 10177a1a4; end: 10177a577;  */

undefined * FUN_10177a1a4(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined *puStack_98;
  
  uVar14 = param_2;
  if (param_1 >> 0x3e == 0) {
    uVar19 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar19 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar19 = param_1;
    }
    func_0x000107c60480();
  }
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar19 != 0) {
    uVar17 = 0;
    uVar15 = param_2 & 0xffffffffffffff8;
    uVar2 = uVar15;
    if (0x7fffffffffffffff < param_2) {
      uVar2 = param_2;
    }
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10177a530);
          (*pcVar3)();
        }
        uVar5 = *(ulong *)(param_1 + 0x20 + uVar17 * 8);
        func_0x000107c61174();
        uVar12 = uVar14;
      }
      else {
        uVar5 = uVar17;
        uVar12 = param_1;
        FUN_101779e74(uVar17,param_1,&PTR_PTR_1126b15c8,0x112d4ed88);
      }
      bVar4 = SCARRY8(uVar17,1);
      uVar17 = uVar17 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10177a52c);
        (*pcVar3)();
      }
      uVar6 = uVar5;
      func_0x000107c40cdc();
      func_0x000107c61180();
      uVar14 = uVar12;
      if (uVar6 != 0) {
        uVar20 = uVar6;
        func_0x000107c4f3bc();
        uVar14 = uVar12;
        if ((int)uVar20 == 0) {
          uVar20 = uVar6;
          func_0x000107c4f3b8();
          func_0x000107c61180();
          uVar14 = uVar12;
          if (uVar20 != 0) {
            uVar7 = uVar20;
            func_0x000107c5faec();
            uVar14 = uVar12;
            func_0x000107c61170(uVar20);
            if (param_2 >> 0x3e == 0) {
              uVar20 = *(ulong *)(uVar15 + 0x10);
            }
            else {
              uVar20 = uVar2;
              func_0x000107c60480();
            }
            if (uVar20 != 0) {
              uVar21 = 0;
              do {
                if ((param_2 & 0xc000000000000001) == 0) {
                  if (*(ulong *)(uVar15 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x10177a528);
                    (*pcVar3)();
                  }
                  uVar8 = *(ulong *)(param_2 + uVar21 * 8 + 0x20);
                  func_0x000107c61174();
                }
                else {
                  uVar8 = uVar21;
                  uVar14 = param_2;
                  FUN_101779e74(uVar21,param_2,&PTR_PTR_1126b87a8,0x112dc93e8);
                }
                uVar1 = uVar21 + 1;
                if (SCARRY8(uVar21,1)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10177a524);
                  (*pcVar3)();
                }
                uVar18 = uVar8;
                func_0x000107c5d984();
                func_0x000107c61180();
                if (uVar18 == 0) {
                  uVar16 = 0;
                  uVar18 = 0;
                  uVar13 = uVar14;
                }
                else {
                  uVar16 = uVar18;
                  func_0x000107c5faec();
                  uVar13 = uVar14;
                  func_0x000107c61170(uVar18);
                  uVar18 = uVar14;
                }
                uVar9 = uVar5;
                func_0x000107c5d984();
                func_0x000107c61180();
                if (uVar9 != 0) {
                  uVar10 = uVar9;
                  func_0x000107c5faec();
                  uVar14 = uVar13;
                  func_0x000107c61170(uVar9);
                  if (uVar18 == 0) {
                    if (uVar13 != 0) {
                      func_0x000107c6142c(uVar13);
LAB_10177a340:
                      func_0x000107c61170(uVar8);
                      goto LAB_10177a348;
                    }
                  }
                  else {
                    if (uVar13 == 0) goto LAB_10177a410;
                    if ((uVar16 == uVar10) && (uVar18 == uVar13)) {
                      func_0x000107c6142c(uVar18);
                      func_0x000107c6142c(uVar13);
                    }
                    else {
                      uVar14 = uVar18;
                      func_0x000107c605b8(uVar16,uVar18,uVar10,uVar13,0);
                      func_0x000107c6142c(uVar18);
                      func_0x000107c6142c(uVar13);
                      if ((uVar16 & 1) == 0) goto LAB_10177a340;
                    }
                  }
LAB_10177a464:
                  func_0x000107c61174();
                  puVar11 = puStack_98;
                  func_0x000107c61558();
                  if (((ulong)puVar11 & 1) == 0) {
                    uVar14 = *(long *)(puStack_98 + 0x10) + 1;
                    puStack_98 = (undefined *)0x0;
                    func_0x000101779908(0,uVar14,1);
                  }
                  uVar21 = *(ulong *)(puStack_98 + 0x10);
                  uVar20 = uVar21 + 1;
                  if (*(ulong *)(puStack_98 + 0x18) >> 1 <= uVar21) {
                    puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puStack_98 + 0x18));
                    uVar14 = uVar20;
                    func_0x000101779908(puVar11,uVar20,1,puStack_98);
                    puStack_98 = puVar11;
                  }
                  *(ulong *)(puStack_98 + 0x10) = uVar20;
                  *(ulong *)(puStack_98 + uVar21 * 0x18 + 0x20) = uVar8;
                  *(ulong *)(puStack_98 + uVar21 * 0x18 + 0x28) = uVar7;
                  *(ulong *)(puStack_98 + uVar21 * 0x18 + 0x30) = uVar12;
                  func_0x000107c61170(uVar8);
                  goto LAB_10177a244;
                }
                uVar14 = uVar13;
                if (uVar18 == 0) goto LAB_10177a464;
LAB_10177a410:
                func_0x000107c61170(uVar8);
                func_0x000107c6142c(uVar18);
LAB_10177a348:
                uVar21 = uVar21 + 1;
              } while (uVar1 != uVar20);
            }
            func_0x000107c6142c(uVar12);
          }
        }
LAB_10177a244:
        func_0x000107c61170(uVar6);
      }
      func_0x000107c61170(uVar5);
    } while (uVar17 != uVar19);
  }
  return puStack_98;
}



/* Entry: 10177a578; end: 10177a597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10177a578(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long unaff_x20;
  long alStack_80 [3];
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = alStack_80;
  plVar7 = alStack_80;
  plVar10 = alStack_80;
  uVar11 = *param_1;
  uVar2 = param_1[1];
  cVar4 = *(char *)(param_1 + 2);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0,*(undefined8 *)(unaff_x20 + 0x28));
  puVar5 = (undefined *)(lVar1 + 0x10);
  func_0x000107c61618();
  if (puVar5 == (undefined *)0x0) {
    FUN_101779e34();
    puVar9 = &UNK_110407940;
    func_0x000107c613f8(&UNK_110407940,puVar5,0,0);
    *puVar5 = 6;
    puVar5 = puVar9;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar9);
    func_0x000107c3fef8(uVar3);
  }
  else {
    if (cVar4 == '\x01') {
      func_0x0001000d224c(alStack_80);
      func_0x0001000a8868(alStack_80,uStack_68);
      func_0x0001053ed59c(*(undefined8 *)(*plVar6 + 0x10),0,1);
      func_0x0001000834e4();
      FUN_101779e34();
      puVar8 = &UNK_110407940;
      func_0x000107c613f8(&UNK_110407940,plVar7,0,0);
      *(undefined1 *)plVar7 = 4;
      puVar9 = puVar8;
      func_0x000107c5ed2c();
      func_0x000107c614ac(puVar8);
      func_0x000107c3fef8(uVar3);
    }
    else {
      func_0x0001000d224c(alStack_80);
      func_0x0001000a8868(alStack_80,uStack_68);
      func_0x0001053ed59c(*(undefined8 *)(*plVar10 + 0x10),1,1);
      func_0x0001000834e4(alStack_80);
      puVar9 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
      func_0x000107c5ee20(uVar11,uVar2);
      func_0x000107c4635c(puVar9);
      func_0x000107c61170(uVar11);
      func_0x000107c3fefc(uVar3);
    }
    func_0x000107c61170(puVar9);
  }
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 10177a598; end: 10177a5d7;  */

void FUN_10177a598(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10177a5d8; end: 10177a73f;  */

int FUN_10177a5d8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf9 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 6) {
      iVar2 = 4;
    }
    if (param_2 + 6 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10177a654;
        goto LAB_10177a638;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10177a638:
      return ((uint)*param_1 | uVar1 << 8) - 6;
    }
  }
LAB_10177a654:
  iVar2 = *param_1 - 7;
  if (*param_1 < 7) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10177a740; end: 10177a77f;  */

void FUN_10177a740(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc9400 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d98a484;
  func_0x000107c61520(&UNK_10d98a484,&UNK_110407940);
  puRam0000000112dc9400 = puVar1;
  return;
}



/* Entry: 10177a780; end: 10177a78f;  */

void FUN_10177a780(long param_1,long param_2)

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



/* Entry: 10177a790; end: 10177a82b;  */

void FUN_10177a790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  return;
}



/* Entry: 10177a82c; end: 10177a90b;  */

void FUN_10177a82c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar2 = &UNK_1104079e0;
  func_0x000107c613fc(&UNK_1104079e0,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  pcStack_40 = FUN_10177a970;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_10177abb8;
  puStack_48 = &UNK_1104079f8;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000100233fc4(0);
  func_0x000107c610f8();
  func_0x000103dcc920(puVar1);
  return;
}



/* Entry: 10177a90c; end: 10177a96f;  */

long FUN_10177a90c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    FUN_10177a978();
    func_0x000107c61574(param_1);
  }
  return lVar1;
}



/* Entry: 10177a970; end: 10177a977;  */

long FUN_10177a970(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    FUN_10177a978();
    func_0x000107c61574(lVar1);
  }
  return lVar2;
}



/* Entry: 10177a978; end: 10177abb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10177a978(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long unaff_x20;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10177abb4);
    (*pcVar2)();
  }
  puVar4 = &UNK_110407a58;
  func_0x000107c613fc(&UNK_110407a58,0x18,7);
  *(long *)(puVar4 + 0x10) = lVar3;
  func_0x0001000285a8(0x112dc95c0,&UNK_10d98a5b0);
  func_0x000107c613fc();
  func_0x000107c615f0(lVar3);
  pcVar2 = FUN_10177af50;
  func_0x0001000bdd8c(FUN_10177af50,puVar4);
  func_0x0001000285a8(0x112dc95c8,&UNK_10d98a5b8);
  func_0x000107c613fc();
  uVar5 = 0x10177ac54;
  func_0x0001000bdd8c(0x10177ac54,0);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5b034();
  func_0x000107c61180();
  lVar7 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c5b484();
  func_0x000107c61180();
  if (lVar7 != 0) {
    lVar8 = lVar7;
    func_0x00010177acb8();
    lVar9 = 0;
    FUN_10177792c();
    lVar10 = lVar9;
    func_0x000107c610f8();
    lVar1 = _DAT_112dc9378;
    uStack_68 = 0;
    func_0x0001000285a8(0x112dc95d0,&UNK_10d98a5c0);
    func_0x000107c613fc();
    puVar11 = &uStack_68;
    func_0x00010006c248();
    *(undefined8 **)(lVar10 + lVar1) = puVar11;
    *(undefined8 *)(lVar10 + _DAT_112dc9350) = uVar6;
    *(code **)(lVar10 + _DAT_112dc9358) = pcVar2;
    *(undefined8 *)(lVar10 + _DAT_112dc9360) = uVar5;
    *(long *)(lVar10 + _DAT_112dc9368) = lVar7;
    *(long *)(lVar10 + _DAT_112dc9370) = lVar8;
    puVar4 = PTR_s_init_1125d9248;
    lStack_78 = lVar10;
    lStack_70 = lVar9;
    func_0x000107c61174(uVar6);
    func_0x000107c6157c(pcVar2);
    func_0x000107c6157c(uVar5);
    func_0x000107c61174(lVar7);
    func_0x000107c615f0(lVar8);
    plVar12 = &lStack_78;
    func_0x000107c61154(plVar12,puVar4);
    func_0x000107c61170(uVar6);
    func_0x000107c61574(pcVar2);
    func_0x000107c61574(uVar5);
    func_0x000107c61170(lVar7);
    func_0x000107c615e8(lVar8);
    func_0x000107c615e8(lVar3);
    return plVar12;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10177abb8);
  (*pcVar2)();
}



/* Entry: 10177abb8; end: 10177abef;  */

void FUN_10177abb8(long param_1)

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



/* Entry: 10177abf0; end: 10177ac0b;  */

void FUN_10177abf0(long param_1,long param_2)

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



/* Entry: 10177ac0c; end: 10177ad5f;  */

void FUN_10177ac0c(undefined8 *param_1,undefined8 param_2)

{
  func_0x000103dbef3c(0);
  func_0x000107c610f8();
  func_0x000107c615f0();
  func_0x000103dbe718();
  *param_1 = param_2;
  return;
}



/* Entry: 10177ad60; end: 10177ad8b;  */

/* WARNING: Possible PIC construction at 0x00010177ad6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010177ad7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010177ad70) */
/* WARNING: Removing unreachable block (ram,0x00010177ad80) */

void FUN_10177ad60(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10177ad8c; end: 10177ade7;  */

void FUN_10177ad8c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10177ade8; end: 10177ae67;  */

void FUN_10177ade8(undefined8 param_1)

{
  if (lRam0000000112dc9500 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6532e0);
  return;
}



/* Entry: 10177ae68; end: 10177af4f;  */

void FUN_10177ae68(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_1104079e0;
  func_0x000107c613fc(&UNK_1104079e0,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  uStack_40 = 0x10177af60;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_10177abb8;
  puStack_48 = &UNK_110407a20;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000100233fc4(0);
  func_0x000107c610f8();
  func_0x000103dcc920();
  *param_1 = puVar1;
  return;
}



/* Entry: 10177af50; end: 10177af63;  */

void FUN_10177af50(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000103dbef3c(0);
  func_0x000107c610f8();
  func_0x000107c615f0();
  func_0x000103dbe718();
  *param_1 = uVar1;
  return;
}



/* Entry: 10177af64; end: 10177af77;  */

uint FUN_10177af64(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 1;
  if (0x1c < uVar1) {
    uVar1 = 0x1d;
  }
  return uVar1;
}



/* Entry: 10177af78; end: 10177b0c3;  */

long FUN_10177af78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  func_0x00010040b31c(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010040b39c();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x00010040b3e4();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  return unaff_x20;
}



/* Entry: 10177b0c4; end: 10177b10f;  */

void FUN_10177b0c4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10177b110; end: 10177b153;  */

undefined1  [16] FUN_10177b110(void)

{
  return ZEXT816(0x110407b78);
}



/* Entry: 10177b154; end: 10177b1a7;  */

void FUN_10177b154(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10177b1a8; end: 10177b243;  */

void FUN_10177b1a8(long *param_1,long param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x0001001df14c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_1018dfdd8(0);
  func_0x000107c610f8();
  func_0x000107c61174(uStack_50);
  FUN_1018dfc30(uStack_48,uStack_50);
  *(undefined8 *)(param_2 + 0x10) = uStack_48;
  *param_1 = param_2;
  return;
}



/* Entry: 10177b244; end: 10177b24b;  */

void FUN_10177b244(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_50);
  func_0x0001001df14c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  FUN_1018dfdd8(0);
  func_0x000107c610f8();
  func_0x000107c61174(uStack_50);
  FUN_1018dfc30(uStack_48,uStack_50);
  *(undefined8 *)(lVar1 + 0x10) = uStack_48;
  *param_1 = lVar1;
  return;
}



/* Entry: 10177b24c; end: 10177b2b7;  */

long FUN_10177b24c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  FUN_1018dfdd8(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  FUN_1018dfc30(param_1,param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 10177b2b8; end: 10177b2e3;  */

void FUN_10177b2b8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10177b2e4; end: 10177b317;  */

undefined1  [16] FUN_10177b2e4(void)

{
  return ZEXT816(0x110407c40);
}



/* Entry: 10177b318; end: 10177b36b;  */

void FUN_10177b318(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10177b36c; end: 10177b4b7;  */

long FUN_10177b36c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  func_0x0001003cf4dc(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001003cf55c();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x0001003cf740();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  return unaff_x20;
}



/* Entry: 10177b4b8; end: 10177b503;  */

void FUN_10177b4b8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10177b504; end: 10177b547;  */

undefined1  [16] FUN_10177b504(void)

{
  return ZEXT816(0x110407ce8);
}



/* Entry: 10177b548; end: 10177b59b;  */

void FUN_10177b548(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10177b59c; end: 10177bd6b;  */

long FUN_10177b59c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  *(undefined8 *)(unaff_x20 + 0x78) = param_14;
  *(undefined8 *)(unaff_x20 + 0x80) = param_15;
  *(undefined8 *)(unaff_x20 + 0x88) = param_16;
  *(undefined8 *)(unaff_x20 + 0x90) = param_17;
  *(undefined8 *)(unaff_x20 + 0x98) = param_18;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_19;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_20;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_21;
  *(undefined8 *)(unaff_x20 + 0xb8) = param_22;
  *(undefined8 *)(unaff_x20 + 0xc0) = param_23;
  *(undefined8 *)(unaff_x20 + 200) = param_24;
  *(undefined8 *)(unaff_x20 + 0xd0) = param_25;
  *(undefined8 *)(unaff_x20 + 0xd8) = param_26;
  *(undefined8 *)(unaff_x20 + 0xe0) = param_27;
  *(undefined8 *)(unaff_x20 + 0xe8) = param_28;
  *(undefined8 *)(unaff_x20 + 0xf0) = param_29;
  *(undefined8 *)(unaff_x20 + 0xf8) = param_30;
  *(undefined8 *)(unaff_x20 + 0x100) = param_31;
  *(undefined8 *)(unaff_x20 + 0x108) = param_32;
  *(undefined8 *)(unaff_x20 + 0x110) = param_33;
  *(undefined8 *)(unaff_x20 + 0x118) = param_34;
  *(undefined8 *)(unaff_x20 + 0x120) = param_35;
  *(undefined8 *)(unaff_x20 + 0x128) = param_36;
  *(undefined8 *)(unaff_x20 + 0x130) = param_37;
  *(undefined8 *)(unaff_x20 + 0x138) = param_38;
  func_0x00010040ca9c();
  func_0x000107c613fc();
  uVar1 = param_28;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = param_1;
  func_0x00010040cb74(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11,param_12,param_13,param_14,param_15,param_16,param_17,
                      param_18,param_19,param_20,param_21,param_22,param_23,param_24,param_25,
                      param_26,param_27,param_28,param_29,param_30,param_31,param_32,param_33,
                      param_34,param_35,param_36,param_37,param_38);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  uVar3 = uVar2;
  func_0x000107c6157c();
  func_0x00010040cc40();
  func_0x000107c61574(uVar2);
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
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_26);
  func_0x000107c61170(param_27);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_29);
  func_0x000107c61170(param_30);
  func_0x000107c61170(param_31);
  func_0x000107c61170(param_32);
  func_0x000107c61170(param_33);
  func_0x000107c61170(param_34);
  func_0x000107c61170(param_35);
  func_0x000107c61170(param_36);
  func_0x000107c61170(param_37);
  func_0x000107c61170(param_38);
  *(undefined8 *)(unaff_x20 + 0x140) = uVar3;
  return unaff_x20;
}



/* Entry: 10177bd6c; end: 10177bed7;  */

void FUN_10177bd6c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x140));
  return;
}



/* Entry: 10177bed8; end: 10177bf1b;  */

undefined1  [16] FUN_10177bed8(void)

{
  return ZEXT816(0x110407db0);
}



/* Entry: 10177bf1c; end: 10177bf6f;  */

void FUN_10177bf1c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10177bf70; end: 10177bfdb;  */

long FUN_10177bf70(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x000100729ef8();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000100729fb8();
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  return unaff_x20;
}



/* Entry: 10177bfdc; end: 10177c007;  */

void FUN_10177bfdc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10177c008; end: 10177c04b;  */

undefined1  [16] FUN_10177c008(void)

{
  return ZEXT816(0x110407e50);
}



/* Entry: 10177c04c; end: 10177c09f;  */

void FUN_10177c04c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10177c0a0; end: 10177c1c3;  */

long FUN_10177c0a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  func_0x00010072a7e4(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010072a864();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x00010072a8c4();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  return unaff_x20;
}



/* Entry: 10177c1c4; end: 10177c207;  */

void FUN_10177c1c4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10177c208; end: 10177c24b;  */

undefined1  [16] FUN_10177c208(void)

{
  return ZEXT816(0x110407f18);
}



/* Entry: 10177c24c; end: 10177c29f;  */

void FUN_10177c24c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10177c2a0; end: 10177c357;  */

long FUN_10177c2a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x00010070be14(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010070bee8();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x00010070bef4();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return unaff_x20;
}



/* Entry: 10177c358; end: 10177c38b;  */

void FUN_10177c358(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10177c38c; end: 10177c3cf;  */

undefined1  [16] FUN_10177c38c(void)

{
  return ZEXT816(0x110407fe0);
}



/* Entry: 10177c3d0; end: 10177c423;  */

void FUN_10177c3d0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10177c424; end: 10177c5a3;  */

long FUN_10177c424(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  func_0x0001003cc3e0(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001003cc464();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x0001003cc478();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar2;
  return unaff_x20;
}



/* Entry: 10177c5a4; end: 10177c60f;  */

void FUN_10177c5a4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 10177c610; end: 10177c653;  */

undefined1  [16] FUN_10177c610(void)

{
  return ZEXT816(0x1104080a8);
}



/* Entry: 10177c654; end: 10177c6a7;  */

void FUN_10177c654(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10177c6a8; end: 10177c7f3;  */

long FUN_10177c6a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  func_0x00010040be04(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010040be88();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x00010040be9c();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  return unaff_x20;
}



/* Entry: 10177c7f4; end: 10177c83f;  */

void FUN_10177c7f4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10177c840; end: 10177c883;  */

undefined1  [16] FUN_10177c840(void)

{
  return ZEXT816(0x110408170);
}



/* Entry: 10177c884; end: 10177c8d7;  */

void FUN_10177c884(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}


