/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103a832c0; end: 103a832c3;  */

void FUN_103a832c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdbd08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc46380;
  func_0x000107c61520(&UNK_10dc46380,&UNK_1106c66a8);
  puRam0000000112fdbd08 = puVar1;
  return;
}



/* Entry: 103a832c4; end: 103a83303;  */

void FUN_103a832c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdbd08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc46380;
  func_0x000107c61520(&UNK_10dc46380,&UNK_1106c66a8);
  puRam0000000112fdbd08 = puVar1;
  return;
}



/* Entry: 103a83304; end: 103a83507;  */

int FUN_103a83304(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103a83380;
        goto LAB_103a83364;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103a83364:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_103a83380:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103a83508; end: 103a835b3;  */

void FUN_103a83508(void)

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



/* Entry: 103a835b4; end: 103a835b7;  */

void FUN_103a835b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdbd10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc46450;
  func_0x000107c61520(&UNK_10dc46450,&UNK_1106c6770);
  puRam0000000112fdbd10 = puVar1;
  return;
}



/* Entry: 103a835b8; end: 103a835f7;  */

void FUN_103a835b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdbd10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc46450;
  func_0x000107c61520(&UNK_10dc46450,&UNK_1106c6770);
  puRam0000000112fdbd10 = puVar1;
  return;
}



/* Entry: 103a835f8; end: 103a83783;  */

void FUN_103a835f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e085d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc46500;
  func_0x000107c61520(&UNK_10dc46500,&UNK_1106c6770);
  puRam0000000112e085d0 = puVar1;
  return;
}



/* Entry: 103a83784; end: 103a837af;  */

void FUN_103a83784(void)

{
  func_0x0001000285a8(0x112fdbd48,&UNK_10dc465c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 103a837b0; end: 103a837b7;  */

undefined8 FUN_103a837b0(void)

{
  return 1;
}



/* Entry: 103a837b8; end: 103a837f7;  */

void FUN_103a837b8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112fdbd48;
  func_0x0001000285a8(0x112fdbd48,&UNK_10dc465c0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103a837f8; end: 103a837ff;  */

undefined8 FUN_103a837f8(void)

{
  return 1;
}



/* Entry: 103a83800; end: 103a8387b;  */

void FUN_103a83800(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 103a8387c; end: 103a8387f;  */

void FUN_103a8387c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdbd58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc465d0;
  func_0x000107c61520(&UNK_10dc465d0,&UNK_1106c6890);
  puRam0000000112fdbd58 = puVar1;
  return;
}



/* Entry: 103a83880; end: 103a838eb;  */

void FUN_103a83880(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdbd58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc465d0;
  func_0x000107c61520(&UNK_10dc465d0,&UNK_1106c6890);
  puRam0000000112fdbd58 = puVar1;
  return;
}



/* Entry: 103a838ec; end: 103a838ef;  */

void FUN_103a838ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdbd70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc46678;
  func_0x000107c61520(&UNK_10dc46678,&UNK_1106c5d10);
  puRam0000000112fdbd70 = puVar1;
  return;
}



/* Entry: 103a838f0; end: 103a8395b;  */

void FUN_103a838f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdbd70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc46678;
  func_0x000107c61520(&UNK_10dc46678,&UNK_1106c5d10);
  puRam0000000112fdbd70 = puVar1;
  return;
}



/* Entry: 103a8395c; end: 103a839df;  */

void FUN_103a8395c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 103a839e0; end: 103a839e3;  */

void FUN_103a839e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdbd88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc466e8;
  func_0x000107c61520(&UNK_10dc466e8,&UNK_1106c5d10);
  puRam0000000112fdbd88 = puVar1;
  return;
}



/* Entry: 103a839e4; end: 103a83a23;  */

void FUN_103a839e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdbd88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc466e8;
  func_0x000107c61520(&UNK_10dc466e8,&UNK_1106c5d10);
  puRam0000000112fdbd88 = puVar1;
  return;
}



/* Entry: 103a83a24; end: 103a83a27;  */

void FUN_103a83a24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdbd90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc466a0;
  func_0x000107c61520(&UNK_10dc466a0,&UNK_1106c5d10);
  puRam0000000112fdbd90 = puVar1;
  return;
}



/* Entry: 103a83a28; end: 103a83a67;  */

void FUN_103a83a28(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdbd90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc466a0;
  func_0x000107c61520(&UNK_10dc466a0,&UNK_1106c5d10);
  puRam0000000112fdbd90 = puVar1;
  return;
}



/* Entry: 103a83a68; end: 103a83b6b;  */

uint FUN_103a83a68(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 103a83b6c; end: 103a83cf7;  */

undefined8 FUN_103a83b6c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  if ((*(byte *)(param_1 + 2) & 0xfc) != 0x6c) {
    return *param_1;
  }
  if ((*(byte *)(param_1 + 2) & 3) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
    return uVar1;
  }
  return *param_1;
}



/* Entry: 103a83cf8; end: 103a83d63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a83cf8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001002d0bf8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112fdbe28) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103a83d64; end: 103a83d6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a83d64(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001002d0bf8();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fdbe28) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 103a83d6c; end: 103a83e0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a83d6c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fdbe28) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a83e10; end: 103a83e6f; -[_TtC16MusicProviderAPI39MusicProviderPluginScopeFactoryServices init] */

void FUN_103a83e10(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MusicProviderAPI.MusicProviderPluginScopeFactoryServices",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a83e3c);
  (*pcVar1)();
}



/* Entry: 103a83e70; end: 103a83e7f;  */

undefined1  [16] FUN_103a83e70(void)

{
  return ZEXT816(0x1106c69a0);
}



/* Entry: 103a83e80; end: 103a83e8f; -[_TtC16MusicProviderAPI39MusicProviderPluginScopeFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a83e80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fdbe28));
  return;
}



/* Entry: 103a83e90; end: 103a83f67;  */

undefined * FUN_103a83e90(void)

{
  return &UNK_10dc46838;
}



/* Entry: 103a83f68; end: 103a83fb7; -[SCMusicUserDataPaginatedResult tracks] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a83f68(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fdbe58);
  func_0x000100fdda24(0);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a83fb8; end: 103a84103; -[SCMusicUserDataPaginatedResult pageToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a83fb8(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_112fdbe60))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112fdbe60);
    func_0x00010006c00c(uVar3,uVar2);
    uVar1 = uVar3;
    func_0x000107c5ee20(uVar3,uVar2);
    func_0x0001000b44c0(uVar3,uVar2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a84104; end: 103a841bf; -[SCMusicUserDataPaginatedResult initWithTracks:pageToken:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a84104(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar3 = 0;
  func_0x000100fdda24();
  func_0x000107c5fc54();
  if (param_4 == 0) {
    lVar3 = -0x1000000000000000;
  }
  else {
    lVar4 = param_4;
    func_0x000107c61174(param_4);
    func_0x000107c5ee30();
    func_0x000107c61170(lVar4);
  }
  *(undefined8 *)(param_1 + _DAT_112fdbe58) = param_3;
  plVar1 = (long *)(param_1 + _DAT_112fdbe60);
  *plVar1 = param_4;
  plVar1[1] = lVar3;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a841c0; end: 103a8421f; -[SCMusicUserDataPaginatedResult init] */

void FUN_103a841c0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMusicUserDataServices.MusicUserDataPaginatedResult",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a841ec);
  (*pcVar1)();
}



/* Entry: 103a84220; end: 103a8425b; -[SCMusicUserDataPaginatedResult .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a84220(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fdbe58));
  uVar2 = *(ulong *)(param_1 + _DAT_112fdbe60);
  uVar1 = ((ulong *)(param_1 + _DAT_112fdbe60))[1];
  if (0xe < uVar1 >> 0x3c) {
    return;
  }
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



/* Entry: 103a8425c; end: 103a8427b;  */

void FUN_103a8425c(void)

{
  func_0x000107c61168(&PTR_PTR_11291b250);
  return;
}



/* Entry: 103a8427c; end: 103a842c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a8427c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fdbe90) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a842c8; end: 103a8431f; -[SCMusicUserDataServices initWithWrapperFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a842c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fdbe90) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 103a84320; end: 103a8437f; -[SCMusicUserDataServices init] */

void FUN_103a84320(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMusicUserDataServices.SCMusicUserDataServices",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a8434c);
  (*pcVar1)();
}



/* Entry: 103a84380; end: 103a8438f; -[SCMusicUserDataServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a84380(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fdbe90));
  return;
}



/* Entry: 103a84390; end: 103a84417;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103a84390(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100aa4c18();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fdbec0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fdbec8) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a84418);
  (*pcVar1)();
}



/* Entry: 103a84418; end: 103a84477; -[_TtC38OperaActiveUserSessionScopeGraphBridge53OperaActiveUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103a84418(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("OperaActiveUserSessionScopeGraphBridge.OperaActiveUserSessionScopeGraphBridgeSaberEntryPoint"
                      ,0x5c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a84444);
  (*pcVar1)();
}



/* Entry: 103a84478; end: 103a844af; -[_TtC38OperaActiveUserSessionScopeGraphBridge53OperaActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a84494: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a84498) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a84478(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fdbec0));
  return;
}



/* Entry: 103a844b0; end: 103a844d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a844b0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fdbec8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fdbec0));
  return;
}



/* Entry: 103a844d8; end: 103a8453b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a844d8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fdc248);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a8453c; end: 103a84543;  */

void FUN_103a8453c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a84544; end: 103a845e3;  */

void FUN_103a84544(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a845e4; end: 103a84603;  */

void FUN_103a845e4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a84604; end: 103a84667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a84604(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fdc250);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a84668; end: 103a8466f;  */

void FUN_103a84668(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a84670; end: 103a8470f;  */

void FUN_103a84670(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a84710; end: 103a8472f;  */

void FUN_103a84710(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a84730; end: 103a84793;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a84730(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fdc258);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a84794; end: 103a8479b;  */

void FUN_103a84794(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a8479c; end: 103a8483b;  */

void FUN_103a8479c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a8483c; end: 103a8485b;  */

void FUN_103a8483c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a8485c; end: 103a848bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a8485c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fdc260);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a848c0; end: 103a848c7;  */

void FUN_103a848c0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a848c8; end: 103a84967;  */

void FUN_103a848c8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a84968; end: 103a84987;  */

void FUN_103a84968(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a84988; end: 103a84a13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a84988(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fdc248) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fdc250) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fdc258) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fdc260) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a84a14; end: 103a84a73; -[_TtC38OperaActiveUserSessionScopeGraphBridge46OperaActiveUserSessionScopeGraphBridgeServices init] */

void FUN_103a84a14(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("OperaActiveUserSessionScopeGraphBridge.OperaActiveUserSessionScopeGraphBridgeServices"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a84a40);
  (*pcVar1)();
}



/* Entry: 103a84a74; end: 103a84b27; -[_TtC38OperaActiveUserSessionScopeGraphBridge46OperaActiveUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a84a90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a84ab0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a84a94) */
/* WARNING: Removing unreachable block (ram,0x000103a84ab4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a84a74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fdc248));
  return;
}



/* Entry: 103a84b28; end: 103a84b5f;  */

undefined1  [16] FUN_103a84b28(void)

{
  return ZEXT816(0x1106c6c58);
}



/* Entry: 103a84b60; end: 103a84ba3; -[SCOperaActiveUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_103a84b60(undefined8 param_1)

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



/* Entry: 103a84ba4; end: 103a84bd7;  */

void FUN_103a84ba4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a84bd8; end: 103a84c1f; -[SCOperaActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a84c04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a84c08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a84bd8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fdc2b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fdc2c0));
  return;
}



/* Entry: 103a84c20; end: 103a84c3f;  */

void FUN_103a84c20(void)

{
  func_0x000107c61168(&PTR_PTR_11291b578);
  return;
}



/* Entry: 103a84c40; end: 103a84c4b; -[SCSCSnapDocOperaPageResolverServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a84c40(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdc2f8;
  func_0x000107c61428(param_1 + _DAT_112fdc2f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a84c4c; end: 103a84c57; -[SCSCSnapDocOperaPageResolverServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a84c4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdc2f8;
  func_0x000107c61428(param_1 + _DAT_112fdc2f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a84c58; end: 103a84c63; -[SCSCSnapDocOperaPageResolverServicesSaberServiceProvider operaActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a84c58(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdc300;
  func_0x000107c61428(param_1 + _DAT_112fdc300,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a84c64; end: 103a84ca7;  */

void FUN_103a84c64(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103a84ca8; end: 103a84cb3; -[SCSCSnapDocOperaPageResolverServicesSaberServiceProvider setOperaActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a84ca8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdc300;
  func_0x000107c61428(param_1 + _DAT_112fdc300,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a84cb4; end: 103a84d07;  */

void FUN_103a84cb4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a84d08; end: 103a84f1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103a84d08(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4de90();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103a84568();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fdc248);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fdc308);
      *(long *)(unaff_x20 + _DAT_112fdc308) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "OperaActiveUserSessionScopeGraphBridge/SCSCSnapDocOperaPageResolverServicesSaberServiceProvider.swift"
                      ,0x65,2,0x1f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a84e34);
  (*pcVar1)();
}



/* Entry: 103a84f1c; end: 103a84f4f; -[SCSCSnapDocOperaPageResolverServicesSaberServiceProvider provide] */

void FUN_103a84f1c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103a84d08();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a84f50; end: 103a84f83; -[SCSCSnapDocOperaPageResolverServicesSaberServiceProvider __safeProvide] */

void FUN_103a84f50(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103a84e34();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a84f84; end: 103a84fc7; -[SCSCSnapDocOperaPageResolverServicesSaberServiceProvider end] */

void FUN_103a84f84(undefined8 param_1)

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



/* Entry: 103a84fc8; end: 103a8515f;  */

void FUN_103a84fc8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0e6d050)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002e,0x800000010f192fb0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "OperaActiveUserSessionScopeGraphBridge/SCSCSnapDocOperaPageResolverServicesSaberServiceProvider.swift"
                            ,0x65,2,0x34,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103a85160);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c56ffc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103a85160; end: 103a8520b; -[SCSCSnapDocOperaPageResolverServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103a85160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103a84fc8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103a8520c; end: 103a8527f; -[SCSCSnapDocOperaPageResolverServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a8520c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fdc2f8,0);
  func_0x000107c61614(param_1 + _DAT_112fdc300,0);
  *(undefined8 *)(param_1 + _DAT_112fdc308) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a85280; end: 103a852b3;  */

void FUN_103a85280(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a852b4; end: 103a852fb; -[SCSCSnapDocOperaPageResolverServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a852b4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fdc2f8);
  func_0x000107c61610(param_1 + _DAT_112fdc300);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fdc308));
  return;
}



/* Entry: 103a852fc; end: 103a8531b;  */

void FUN_103a852fc(void)

{
  func_0x000107c61168(&PTR_PTR_112fdc350);
  return;
}



/* Entry: 103a8531c; end: 103a85327; -[SCSingleSnapPlayerAnalyticsServiceSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a8531c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdc3b8;
  func_0x000107c61428(param_1 + _DAT_112fdc3b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a85328; end: 103a85333; -[SCSingleSnapPlayerAnalyticsServiceSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a85328(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdc3b8;
  func_0x000107c61428(param_1 + _DAT_112fdc3b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a85334; end: 103a8533f; -[SCSingleSnapPlayerAnalyticsServiceSaberServiceProvider operaActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a85334(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdc3c0;
  func_0x000107c61428(param_1 + _DAT_112fdc3c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a85340; end: 103a85383;  */

void FUN_103a85340(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103a85384; end: 103a8538f; -[SCSingleSnapPlayerAnalyticsServiceSaberServiceProvider setOperaActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a85384(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdc3c0;
  func_0x000107c61428(param_1 + _DAT_112fdc3c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a85390; end: 103a853e3;  */

void FUN_103a85390(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a853e4; end: 103a855f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103a853e4(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4de90();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103a84694();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fdc250);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fdc3c8);
      *(long *)(unaff_x20 + _DAT_112fdc3c8) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "OperaActiveUserSessionScopeGraphBridge/SCSingleSnapPlayerAnalyticsServiceSaberServiceProvider.swift"
                      ,99,2,0x1f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a85510);
  (*pcVar1)();
}



/* Entry: 103a855f8; end: 103a8562b; -[SCSingleSnapPlayerAnalyticsServiceSaberServiceProvider provide] */

void FUN_103a855f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103a853e4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a8562c; end: 103a8565f; -[SCSingleSnapPlayerAnalyticsServiceSaberServiceProvider __safeProvide] */

void FUN_103a8562c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103a85510();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a85660; end: 103a856a3; -[SCSingleSnapPlayerAnalyticsServiceSaberServiceProvider end] */

void FUN_103a85660(undefined8 param_1)

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



/* Entry: 103a856a4; end: 103a8583b;  */

void FUN_103a856a4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0e6d050)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002e,0x800000010f192fb0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "OperaActiveUserSessionScopeGraphBridge/SCSingleSnapPlayerAnalyticsServiceSaberServiceProvider.swift"
                            ,99,2,0x34,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103a8583c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c56ffc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103a8583c; end: 103a858e7; -[SCSingleSnapPlayerAnalyticsServiceSaberServiceProvider setValue:forIvarName:] */

void FUN_103a8583c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103a856a4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103a858e8; end: 103a8595b; -[SCSingleSnapPlayerAnalyticsServiceSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a858e8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fdc3b8,0);
  func_0x000107c61614(param_1 + _DAT_112fdc3c0,0);
  *(undefined8 *)(param_1 + _DAT_112fdc3c8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a8595c; end: 103a8598f;  */

void FUN_103a8595c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a85990; end: 103a859d7; -[SCSingleSnapPlayerAnalyticsServiceSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a85990(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fdc3b8);
  func_0x000107c61610(param_1 + _DAT_112fdc3c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fdc3c8));
  return;
}



/* Entry: 103a859d8; end: 103a859f7;  */

void FUN_103a859d8(void)

{
  func_0x000107c61168(&PTR_PTR_112fdc410);
  return;
}


