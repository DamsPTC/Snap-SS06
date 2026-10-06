/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b71a020; end: 10b71a16f; -[ZZDeflateOutputStream close] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b71a020(long param_1,undefined8 param_2,undefined *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uStack_478;
  undefined1 auStack_470 [1024];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (undefined8 *)(param_1 + _DAT_112792468);
  *puVar5 = 0;
  *(undefined4 *)(puVar5 + 1) = 0;
  do {
    puVar5[3] = auStack_470;
    *(undefined4 *)(puVar5 + 4) = 0x400;
    puVar2 = puVar5;
    _deflate(puVar5,4);
    if (*(uint *)(puVar5 + 4) < 0x400) {
      uStack_478 = 0;
      uVar9 = *(ulong *)(param_1 + _DAT_112792454);
      puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64a40();
      _objc_retainAutoreleasedReturnValue();
      param_4 = &uStack_478;
      param_3 = puVar3;
      func_0x00010c2bda20();
      _objc_release(puVar3);
      uVar8 = uStack_478;
      if ((uVar9 & 1) == 0) {
        *(undefined8 *)(param_1 + _DAT_11279245c) = 7;
        lVar10 = (long)_DAT_112792460;
        _objc_retain(uStack_478);
        uVar4 = *(undefined8 *)(param_1 + lVar10);
        *(undefined8 *)(param_1 + lVar10) = uVar8;
        _objc_release(uVar4);
      }
    }
  } while ((int)puVar2 == 0);
  _deflateEnd();
  *(undefined8 *)(param_1 + _DAT_11279245c) = 6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar2 = (undefined8 *)((long)puVar5 + (long)_DAT_112792468);
  puVar6 = puVar2;
  _deflateBound(puVar2,param_4);
  puVar3 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  _objc_alloc();
  func_0x00010c022640();
  *puVar2 = param_3;
  *(int *)(puVar2 + 1) = (int)param_4;
  puVar7 = puVar3;
  _objc_retainAutorelease();
  func_0x00010c0d3c60();
  puVar2[3] = puVar7;
  *(int *)(puVar2 + 4) = (int)puVar6;
  _deflate(puVar2,0);
  func_0x00010c1ba840(puVar3);
  puVar7 = puVar3;
  func_0x00010c08fa60();
  if (puVar7 != (undefined *)0x0) {
    uVar9 = *(ulong *)((long)puVar5 + (long)_DAT_112792454);
    func_0x00010c2bda20();
    if ((uVar9 & 1) == 0) {
      *(undefined8 *)((long)puVar5 + (long)_DAT_11279245c) = 7;
      lVar10 = (long)_DAT_112792460;
      _objc_retain(0);
      uVar8 = *(undefined8 *)((long)puVar5 + lVar10);
      *(undefined8 *)((long)puVar5 + lVar10) = 0;
      _objc_release(uVar8);
      param_4 = (undefined8 *)0xffffffffffffffff;
      goto LAB_10b71a284;
    }
  }
  param_4 = (undefined8 *)((long)param_4 - (ulong)*(uint *)(puVar2 + 1));
  lVar10 = (long)_DAT_112792464;
  uVar1 = *(undefined4 *)((long)puVar5 + lVar10);
  _crc32(uVar1,param_3,param_4);
  *(undefined4 *)((long)puVar5 + lVar10) = uVar1;
LAB_10b71a284:
  _objc_release(puVar3);
  return param_4;
}



/* Entry: 10b71a170; end: 10b71a2a7; -[ZZDeflateOutputStream write:maxLength:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b71a170(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112792468);
  puVar3 = puVar1;
  _deflateBound(puVar1,param_4);
  puVar4 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  _objc_alloc();
  func_0x00010c022640();
  *puVar1 = param_3;
  *(int *)(puVar1 + 1) = (int)param_4;
  puVar5 = puVar4;
  _objc_retainAutorelease();
  func_0x00010c0d3c60();
  puVar1[3] = puVar5;
  *(int *)(puVar1 + 4) = (int)puVar3;
  _deflate(puVar1,0);
  func_0x00010c1ba840(puVar4);
  puVar5 = puVar4;
  func_0x00010c08fa60();
  if (puVar5 != (undefined *)0x0) {
    uVar6 = *(ulong *)(param_1 + _DAT_112792454);
    func_0x00010c2bda20();
    if ((uVar6 & 1) == 0) {
      *(undefined8 *)(param_1 + _DAT_11279245c) = 7;
      lVar8 = (long)_DAT_112792460;
      _objc_retain(0);
      uVar7 = *(undefined8 *)(param_1 + lVar8);
      *(undefined8 *)(param_1 + lVar8) = 0;
      _objc_release(uVar7);
      param_4 = -1;
      goto LAB_10b71a284;
    }
  }
  param_4 = param_4 - (ulong)*(uint *)(puVar1 + 1);
  lVar8 = (long)_DAT_112792464;
  uVar2 = *(undefined4 *)(param_1 + lVar8);
  _crc32(uVar2,param_3,param_4);
  *(undefined4 *)(param_1 + lVar8) = uVar2;
LAB_10b71a284:
  _objc_release(puVar4);
  return param_4;
}



/* Entry: 10b71a2a8; end: 10b71a2af; -[ZZDeflateOutputStream hasSpaceAvailable] */

undefined8 FUN_10b71a2a8(void)

{
  return 1;
}



/* Entry: 10b71a2b0; end: 10b71a2bf; -[ZZDeflateOutputStream crc32] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10b71a2b0(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112792464);
}



/* Entry: 10b71a2c0; end: 10b71a2ff; -[ZZDeflateOutputStream .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b71a2c0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112792460,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112792454,0);
  return;
}



/* Entry: 10b71a300; end: 10b71a373; -[ZZFileChannel initWithURL:] */

undefined1 * FUN_10b71a300(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a1e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b71a374; end: 10b71a39b; -[ZZFileChannel URL] */

void FUN_10b71a374(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b71a39c; end: 10b71a483; -[ZZFileChannel temporaryChannel:] */

void FUN_10b71a39c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  func_0x00010bdc2ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (puVar1 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126e0650;
    _objc_alloc(PTR_PTR_1126e0650);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0899c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bdc2c60(puVar1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c057840(puVar4,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b71a484; end: 10b71a53f; -[ZZFileChannel replaceWithChannel:error:] */

undefined * FUN_10b71a484(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  uStack_48 = 0;
  _objc_retain(param_3);
  func_0x00010bf69bc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar2 = param_3;
  func_0x00010bdc2b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = puVar1;
  func_0x00010c130ee0(puVar1,param_2,uVar4,uVar2,0,0,&uStack_48,param_4);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 10b71a540; end: 10b71a5a3; -[ZZFileChannel removeAsTemporary] */

void FUN_10b71a540(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bdc2cc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc60(puVar1,param_2,uVar2,0);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b71a5a4; end: 10b71a5db; -[ZZFileChannel newInput:] */

void FUN_10b71a5a4(void)

{
  _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
                    /* WARNING: Could not recover jumptable at 0x00010c0040f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b71a5dc; end: 10b71a6af; -[ZZFileChannel newOutput:] */

undefined * FUN_10b71a5dc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bfad0c0();
  _open();
  _objc_release();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (iVar1 != -1) {
    puVar2 = PTR_PTR_1126e0658;
    _objc_alloc(PTR_PTR_1126e0658);
                    /* WARNING: Could not recover jumptable at 0x00010c012c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return puVar2;
  }
  if (param_3 != (undefined8 *)0x0) {
    ___error();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_3 = puVar2;
  }
  return (undefined *)0x0;
}



/* Entry: 10b71a6b0; end: 10b71a6bb; -[ZZFileChannel .cxx_destruct] */

void FUN_10b71a6b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b71a6bc; end: 10b71a703; -[ZZFileChannelOutput initWithFileDescriptor:] */

void FUN_10b71a6bc(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270a1e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10b71a704; end: 10b71a723; -[ZZFileChannelOutput offset] */

void FUN_10b71a704(long param_1)

{
  _lseek(*(undefined4 *)(param_1 + 8),0,1);
  return;
}



/* Entry: 10b71a724; end: 10b71a7ab; -[ZZFileChannelOutput seekToOffset:error:] */

bool FUN_10b71a724(long param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined *puVar2;
  
  uVar1 = (ulong)*(uint *)(param_1 + 8);
  _lseek(uVar1,param_3,0);
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((param_4 != (undefined8 *)0x0) && (uVar1 == 0xffffffffffffffff)) {
    ___error();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_4 = puVar2;
  }
  return uVar1 != 0xffffffffffffffff;
}



/* Entry: 10b71a7ac; end: 10b71a897; -[ZZFileChannelOutput writeData:error:] */

undefined8 FUN_10b71a7ac(long param_1,undefined8 param_2,ulong param_3,undefined8 *param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  _objc_retainAutorelease(param_3);
  func_0x00010bf25f00();
  uVar4 = param_3;
  func_0x00010c08fa60();
  if (0 < (long)uVar4) {
    do {
      uVar5 = (ulong)*(uint *)(param_1 + 8);
      uVar2 = uVar4;
      if (0x7ffffffe < uVar4) {
        uVar2 = 0x7fffffff;
      }
      _write(uVar5,uVar3,uVar2);
      puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
      if (uVar5 == 0xffffffffffffffff) {
        if (param_4 == (undefined8 *)0x0) {
          uVar7 = 0;
        }
        else {
          ___error();
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          uVar7 = 0;
          *param_4 = puVar6;
        }
        goto LAB_10b71a878;
      }
      uVar3 = uVar3 + uVar5;
      uVar2 = uVar4 - uVar5;
      bVar1 = (long)uVar5 <= (long)uVar4;
      uVar4 = uVar2;
    } while (uVar2 != 0 && bVar1);
  }
  uVar7 = 1;
LAB_10b71a878:
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 10b71a898; end: 10b71a91b; -[ZZFileChannelOutput truncateAtOffset:error:] */

bool FUN_10b71a898(long param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  _ftruncate(iVar1,param_3);
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((param_4 != (undefined8 *)0x0) && (iVar1 == -1)) {
    ___error();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_4 = puVar2;
  }
  return iVar1 != -1;
}



/* Entry: 10b71a91c; end: 10b71a923; -[ZZFileChannelOutput close] */

void FUN_10b71a91c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdd6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__close_11034bfc8)(*(undefined4 *)(param_1 + 8));
  return;
}



/* Entry: 10b71a924; end: 10b71a92b; -[ZZFileChannelOutput setOffset:] */

void FUN_10b71a924(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 10b71a92c; end: 10b71aa23; +[ZZInflateInputStream decompressData:withUncompressedSize:] */

void FUN_10b71a92c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined *puStack_88;
  undefined4 uStack_80;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  iVar1 = (int)&uStack_a0;
  _objc_retain(param_3);
  func_0x00010bf64b80();
  _objc_retainAutoreleasedReturnValue();
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uVar3 = param_3;
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  uVar4 = param_3;
  uStack_a0 = uVar3;
  func_0x00010c08fa60();
  _objc_release(param_3);
  uStack_98 = (undefined4)uVar4;
  puVar5 = puVar2;
  _objc_retainAutorelease();
  func_0x00010c0d3c60();
  puVar6 = puVar2;
  puStack_88 = puVar5;
  func_0x00010c08fa60();
  uStack_80 = SUB84(puVar6,0);
  _inflateInit2_(&uStack_a0,0xfffffff1,&UNK_10f45dced,0x70);
  _inflate(&uStack_a0,4);
  _inflateEnd(&uStack_a0);
  puVar5 = (undefined *)0x0;
  if (iVar1 == 1) {
    _objc_retain(puVar2);
    puVar5 = puVar2;
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10b71aa24; end: 10b71ab07; -[ZZInflateInputStream initWithStream:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b71aa24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270a1f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112792478;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_3;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    func_0x00010bf64b80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11279247c);
    *(undefined **)((long)puVar2 + (long)_DAT_11279247c) = puVar4;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar2 + (long)_DAT_112792480) = 0;
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112792484);
    *(undefined8 *)((long)puVar2 + (long)_DAT_112792484) = 0;
    _objc_release(uVar3);
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_112792488);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[8] = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 10b71ab08; end: 10b71ab17; -[ZZInflateInputStream streamStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b71ab08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112792480);
}



/* Entry: 10b71ab18; end: 10b71ab47; -[ZZInflateInputStream streamError] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b71ab18(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112792484);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b71ab48; end: 10b71ab9b; -[ZZInflateInputStream open] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b71ab48(long param_1)

{
  func_0x00010c0e8e20(*(undefined8 *)(param_1 + _DAT_112792478));
  *(undefined8 *)(param_1 + _DAT_112792480) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbedec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__inflateInit2__11034bc10)(param_1 + _DAT_112792488,0xfffffff1,&UNK_10f45dced,0x70);
  return;
}



/* Entry: 10b71ab9c; end: 10b71abe3; -[ZZInflateInputStream close] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b71ab9c(long param_1)

{
  _inflateEnd(param_1 + _DAT_112792488);
  func_0x00010bf3d9e0(*(undefined8 *)(param_1 + _DAT_112792478));
  *(undefined8 *)(param_1 + _DAT_112792480) = 6;
  return;
}



/* Entry: 10b71abe4; end: 10b71ad0b; -[ZZInflateInputStream read:maxLength:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b71abe4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112792488);
  if (*(int *)(puVar1 + 1) == 0) {
    lVar6 = (long)_DAT_112792478;
    lVar2 = *(long *)(param_1 + lVar6);
    func_0x00010c25c680();
    if (lVar2 - 1U < 2) {
      lVar2 = *(long *)(param_1 + lVar6);
      lVar7 = (long)_DAT_11279247c;
      func_0x00010c0d3c60(*(undefined8 *)(param_1 + lVar7));
      func_0x00010c121160();
      if (lVar2 < 0) {
        *(undefined8 *)(param_1 + _DAT_112792480) = 7;
        uVar3 = *(undefined8 *)(param_1 + lVar6);
        func_0x00010c25c4e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + _DAT_112792484);
        *(undefined8 *)(param_1 + _DAT_112792484) = uVar3;
        _objc_release(uVar5);
        return -1;
      }
      uVar3 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010bf25f00();
      *puVar1 = uVar3;
      *(int *)(puVar1 + 1) = (int)lVar2;
    }
  }
  if (0xfffffffe < param_4) {
    param_4 = 0xffffffff;
  }
  puVar1[3] = param_3;
  *(int *)(puVar1 + 4) = (int)param_4;
  puVar4 = puVar1;
  _inflate(puVar1,0);
  if ((int)puVar4 == 1) {
    *(undefined8 *)(param_1 + _DAT_112792480) = 5;
  }
  return param_4 - *(uint *)(puVar1 + 4);
}



/* Entry: 10b71ad0c; end: 10b71ad13; -[ZZInflateInputStream getBuffer:length:] */

undefined8 FUN_10b71ad0c(void)

{
  return 0;
}



/* Entry: 10b71ad14; end: 10b71ad1b; -[ZZInflateInputStream hasBytesAvailable] */

undefined8 FUN_10b71ad14(void)

{
  return 1;
}



/* Entry: 10b71ad1c; end: 10b71ad6b; -[ZZInflateInputStream .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b71ad1c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112792484,0);
  _objc_storeStrong(param_1 + _DAT_11279247c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112792478,0);
  return;
}



/* Entry: 10b71ad6c; end: 10b71ae1b; -[ZZStoreOutputStream initWithChannelOutput:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b71ad6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270a1f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11279248c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112792490) = 0;
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112792494);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112792494) = 0;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + (long)_DAT_112792498) = 0;
    *(undefined4 *)((long)puVar1 + (long)_DAT_11279249c) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b71ae1c; end: 10b71ae2b; -[ZZStoreOutputStream streamStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b71ae1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112792490);
}



/* Entry: 10b71ae2c; end: 10b71ae5b; -[ZZStoreOutputStream streamError] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b71ae2c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112792494);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b71ae5c; end: 10b71ae6f; -[ZZStoreOutputStream open] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b71ae5c(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_112792490) = 2;
  return;
}



/* Entry: 10b71ae70; end: 10b71ae83; -[ZZStoreOutputStream close] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b71ae70(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_112792490) = 6;
  return;
}



/* Entry: 10b71ae84; end: 10b71af77; -[ZZStoreOutputStream write:maxLength:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b71ae84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + _DAT_11279248c);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a40(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bda20();
  _objc_release(puVar2);
  if ((uVar4 & 1) == 0) {
    *(undefined8 *)(param_1 + _DAT_112792490) = 7;
    lVar5 = (long)_DAT_112792494;
    _objc_retain(0);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = 0;
    _objc_release(uVar3);
    param_4 = 0xffffffffffffffff;
  }
  else {
    lVar5 = (long)_DAT_112792498;
    uVar1 = *(undefined4 *)(param_1 + lVar5);
    _crc32(uVar1,param_3,param_4);
    *(undefined4 *)(param_1 + lVar5) = uVar1;
    *(int *)(param_1 + _DAT_11279249c) = *(int *)(param_1 + _DAT_11279249c) + (int)param_4;
  }
  return param_4;
}



/* Entry: 10b71af78; end: 10b71af7f; -[ZZStoreOutputStream hasSpaceAvailable] */

undefined8 FUN_10b71af78(void)

{
  return 1;
}



/* Entry: 10b71af80; end: 10b71af8f; -[ZZStoreOutputStream crc32] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10b71af80(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112792498);
}



/* Entry: 10b71af90; end: 10b71af9f; -[ZZStoreOutputStream size] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10b71af90(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11279249c);
}



/* Entry: 10b71afa0; end: 10b71afdf; -[ZZStoreOutputStream .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b71afa0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112792494,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11279248c,0);
  return;
}



/* Entry: 10b71afe0; end: 10b71b087; +[ZZArchive archiveWithURL:error:] */

void FUN_10b71afe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_alloc(param_1);
  puVar1 = PTR_PTR_1126e0650;
  _objc_alloc(PTR_PTR_1126e0650);
  func_0x00010c057840();
  func_0x00010bffd6e0(param_1,param_2,puVar1,0,param_4);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b71b088; end: 10b71b12f; +[ZZArchive archiveWithData:error:] */

void FUN_10b71b088(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_alloc(param_1);
  puVar1 = PTR_PTR_1126e0640;
  _objc_alloc(PTR_PTR_1126e0640);
  func_0x00010c008240();
  func_0x00010bffd6e0(param_1,param_2,puVar1,0,param_4);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b71b130; end: 10b71b1f3; -[ZZArchive initWithURL:options:error:] */

undefined8
FUN_10b71b130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126e0650;
  _objc_alloc(PTR_PTR_1126e0650);
  func_0x00010c057840();
  func_0x00010bffd6e0(param_1,param_2,puVar1,param_4,param_5);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10b71b1f4; end: 10b71b2b7; -[ZZArchive initWithData:options:error:] */

undefined8
FUN_10b71b1f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126e0640;
  _objc_alloc(PTR_PTR_1126e0640);
  func_0x00010c008240();
  func_0x00010bffd6e0(param_1,param_2,puVar1,param_4,param_5);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10b71b2b8; end: 10b71b3ef; -[ZZArchive initWithChannel:options:error:] */

undefined1 *
FUN_10b71b2b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_11270a200;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c09b000();
    _objc_release(uVar2);
    if ((int)puVar3 == 0) {
      puVar3 = (undefined1 *)0x0;
      goto LAB_10b71b380;
    }
  }
  _objc_retain(puVar1);
  puVar3 = (undefined1 *)puVar1;
LAB_10b71b380:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 10b71b3f0; end: 10b71b3f7; -[ZZArchive URL] */

void FUN_10b71b3f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc2b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_URL_11254e480);
  return;
}



/* Entry: 10b71b3f8; end: 10b71b913; -[ZZArchive unarchiveWithDirectoryURL:error:] */

ulong FUN_10b71b3f8(long param_1,ulong param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lStack_160;
  uint uStack_14c;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_3;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar5 = puVar2;
  func_0x00010bfacbe0();
  if ((((int)puVar5 == 0) || (puVar5 = puVar2, func_0x00010c12cc40(), ((ulong)puVar5 & 1) != 0)) &&
     (puVar5 = puVar2, func_0x00010bf55d80(), (int)puVar5 != 0)) {
    lStack_160 = *(long *)(param_1 + 0x20);
    _objc_retain(lStack_160);
    lVar6 = lStack_160;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (lVar6 == 0) {
      uStack_14c = 1;
    }
    else {
      uStack_14c = 1;
      do {
        lVar14 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lStack_160);
          }
          uVar13 = *(ulong *)(lVar14 * 8);
          uVar7 = uVar13;
          func_0x00010bfacec0();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010c25cfc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar7);
          uVar7 = uVar8;
          func_0x00010bfdcf80();
          uVar9 = uVar8;
          if ((int)uVar7 == 0) {
            func_0x00010c25ce80();
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            _objc_retain(uVar8);
          }
          uVar10 = uVar9;
          func_0x00010c08fa60();
          if (uVar10 == 0) {
LAB_10b71b660:
            if ((uVar7 & 1) == 0) {
              puVar3 = puVar4;
              func_0x00010c25ce00();
              _objc_retainAutoreleasedReturnValue();
              puVar11 = puVar3;
              func_0x00010c25d060();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar3);
              puVar3 = puVar11;
              func_0x00010bfda7c0();
              if (((ulong)puVar3 & 1) != 0) {
                func_0x00010c0d8860();
                if (uVar13 == 0) {
                  uStack_14c = 0;
                }
                else {
                  uVar7 = uVar13;
                  func_0x00010c2be500();
                  uStack_14c = (uint)uVar7 & uStack_14c;
                }
                _objc_release(uVar13);
                goto LAB_10b71b758;
              }
              if (param_4 != (undefined8 *)0x0) {
                puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
                func_0x00010bf99240();
                _objc_retainAutoreleasedReturnValue();
                _objc_autorelease();
                goto LAB_10b71b734;
              }
              goto LAB_10b71b744;
            }
          }
          else {
            puVar3 = puVar4;
            func_0x00010c25ce00();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar3;
            func_0x00010c25d060();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar3);
            puVar3 = puVar11;
            func_0x00010bfda7c0();
            if (((ulong)puVar3 & 1) == 0) {
              if (param_4 == (undefined8 *)0x0) goto LAB_10b71b744;
              puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
              func_0x00010bf99240();
              _objc_retainAutoreleasedReturnValue();
              _objc_autorelease();
LAB_10b71b734:
              uStack_14c = 0;
              *param_4 = puVar5;
            }
            else {
              puVar5 = puVar2;
              func_0x00010bfacc00();
              if ((int)puVar5 != 0) {
                func_0x00010c12cc40(puVar2);
              }
              puVar5 = puVar2;
              func_0x00010bf55d80();
              if ((int)puVar5 != 0) {
                _objc_release(puVar11);
                goto LAB_10b71b660;
              }
LAB_10b71b744:
              uStack_14c = 0;
            }
LAB_10b71b758:
            _objc_release(puVar11);
          }
          _objc_release(uVar9);
          _objc_release(uVar8);
          lVar14 = lVar14 + 1;
        } while (lVar6 != lVar14);
        lVar6 = lStack_160;
        func_0x00010bf52a60();
      } while (lVar6 != 0);
    }
    _objc_release(lStack_160);
  }
  else {
    uStack_14c = 0;
  }
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return (ulong)uStack_14c;
  }
  ___stack_chk_fail();
  _objc_release(lStack_160);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(param_2);
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *puVar3 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return param_2;
}



/* Entry: 10b71b914; end: 10b71b987;  */

void FUN_10b71b914(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_1 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b71b988; end: 10b71bbc3; -[ZZArchive entryWithFileName:] */

char * FUN_10b71b988(long param_1,char *param_2,char *param_3,undefined ***param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  undefined **ppuVar14;
  char *pcVar15;
  char **ppcVar16;
  char **ppcVar17;
  char **ppcVar18;
  char **ppcVar19;
  undefined *puVar20;
  char *pcVar22;
  char *pcVar23;
  undefined **ppuVar24;
  undefined ***pppuVar25;
  long lVar26;
  int *piVar27;
  undefined8 uVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  char *pcVar32;
  char **ppcVar33;
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined *puStack_3b0;
  char *pcStack_3a8;
  undefined **ppuStack_3a0;
  undefined2 uStack_398;
  undefined2 uStack_396;
  int iStack_394;
  int iStack_390;
  undefined2 uStack_38c;
  undefined *puStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined *puStack_370;
  char *pcStack_368;
  undefined **ppuStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  code *pcStack_348;
  undefined *puStack_340;
  char *pcStack_338;
  undefined **ppuStack_330;
  undefined8 uStack_328;
  undefined *puStack_320;
  undefined8 uStack_318;
  code *pcStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  char **ppcStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined **ppuStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined **ppuStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  char acStack_1c4 [4];
  char *pcStack_1c0;
  undefined **ppuStack_1b8;
  char *pcStack_1b0;
  undefined **ppuStack_1a8;
  char *pcStack_1a0;
  long lStack_198;
  char acStack_130 [8];
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined **appuStack_e8 [16];
  long lStack_68;
  undefined *puVar21;
  
  pcVar11 = acStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar22 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  lVar8 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar8 == 0) {
LAB_10b71bb00:
    pcVar11 = (char *)0x0;
  }
  else {
    if (*(long *)(param_1 + 0x10) == 0) {
      puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      acStack_130[0] = '\0';
      acStack_130[1] = '\0';
      acStack_130[2] = '\0';
      acStack_130[3] = '\0';
      acStack_130[4] = '\0';
      acStack_130[5] = '\0';
      acStack_130[6] = '\0';
      acStack_130[7] = '\0';
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      lVar26 = *(long *)(param_1 + 0x20);
      _objc_retain(lVar26);
      param_4 = appuStack_e8;
      lVar8 = lVar26;
      func_0x00010bf52a60();
      if (lVar8 != 0) {
        lVar30 = *plStack_120;
        do {
          lVar31 = 0;
          do {
            if (*plStack_120 != lVar30) {
              _objc_enumerationMutation(lVar26);
            }
            uVar28 = *(undefined8 *)(lStack_128 + lVar31 * 8);
            func_0x00010bfacec0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar9);
            _objc_release(uVar28);
            lVar31 = lVar31 + 1;
          } while (lVar8 != lVar31);
          param_4 = appuStack_e8;
          lVar8 = lVar26;
          pcVar11 = acStack_130;
          func_0x00010bf52a60();
        } while (lVar8 != 0);
      }
      _objc_release(lVar26);
      puVar10 = puVar9;
      func_0x00010bf51e00();
      uVar28 = *(undefined8 *)(param_1 + 0x10);
      *(undefined **)(param_1 + 0x10) = puVar10;
      _objc_release(uVar28);
      _objc_release(puVar9);
      pcVar22 = pcVar11;
    }
    if (param_3 == (char *)0x0) goto LAB_10b71bb00;
    pcVar11 = *(char **)(param_1 + 0x10);
    pcVar22 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  pcVar23 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar11);
    return pcVar11;
  }
  ___stack_chk_fail();
  _objc_release(pcVar11);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  pcVar11 = pcVar23;
  __Unwind_Resume();
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_1c0 = (char *)0x0;
  pcVar12 = *(char **)(pcVar11 + 8);
  ppuVar24 = &pcStack_1c0;
  pppuVar25 = param_4;
  func_0x00010c0d8b40();
  if (pcVar12 == (char *)0x0) {
    if (((int)pcVar22 != 0) &&
       (pcVar11 = pcStack_1c0, func_0x00010bf3ec40(), pcVar11 == (char *)0x104)) {
      pcVar11 = pcStack_1c0;
      func_0x00010bf87dc0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar24 = *(undefined ***)PTR__NSCocoaErrorDomain_1103453f8;
      pcVar22 = pcVar11;
      func_0x00010c0720c0();
      _objc_release(pcVar11);
      if (((ulong)pcVar22 & 1) != 0) {
        pcVar11 = (char *)0x1;
        goto LAB_10b71be30;
      }
    }
    ppuStack_1a8 = *(undefined ***)PTR__NSUnderlyingErrorKey_110345660;
    pcStack_1a0 = pcStack_1c0;
    ppuVar24 = &pcStack_1a0;
    pppuVar25 = &ppuStack_1a8;
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    if (param_4 != (undefined ***)0x0) {
      ppuVar24 = &PTR____CFConstantStringClassReference_110f769f8;
      pppuVar25 = (undefined ***)0x0;
      ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_4 = ppuVar14;
    }
    _objc_release(puVar9);
    _objc_release(puVar9);
LAB_10b71be2c:
    pcVar11 = (char *)0x0;
  }
  else {
    _objc_retainAutorelease(pcVar12);
    pcVar23 = pcVar12;
    func_0x00010bf25f00();
    pcVar13 = pcVar12;
    func_0x00010c08fa60();
    pcVar2 = pcVar23 + (long)pcVar13;
    pcVar15 = pcVar2 + -0x10015;
    if (pcVar13 < (char *)0x10016) {
      pcVar15 = pcVar23;
    }
    pcVar4 = pcVar2 + -0x12;
    if (pcVar13 < (char *)0x13) {
      pcVar4 = pcVar23;
    }
    builtin_strncpy(acStack_1c4,"PK\x05\x06",4);
    pcVar13 = pcVar4;
    if (pcVar15 == pcVar4) {
LAB_10b71bd20:
      if (param_4 == (undefined ***)0x0) goto LAB_10b71be2c;
      ppuVar24 = &PTR____CFConstantStringClassReference_110f769f8;
      pppuVar25 = (undefined ***)0x1;
      ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      pcVar11 = (char *)0x0;
      *param_4 = ppuVar14;
    }
    else {
      do {
        pcVar32 = pcVar13;
        if (*pcVar15 == 'P') {
          lVar8 = 1;
          do {
            pcVar32 = pcVar15;
            if (lVar8 == 4) break;
            pcVar3 = pcVar15 + lVar8;
            pcVar32 = pcVar13;
            if (pcVar3 == pcVar4) goto LAB_10b71bccc;
            pcVar1 = acStack_1c4 + lVar8;
            lVar8 = lVar8 + 1;
          } while (*pcVar3 == *pcVar1);
        }
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar32;
      } while (pcVar15 != pcVar4);
LAB_10b71bccc:
      if ((((pcVar32 == pcVar4) || (*(short *)(pcVar32 + 4) != 0)) || (*(short *)(pcVar32 + 6) != 0)
          ) || ((((uint)*(ushort *)(pcVar32 + 8) != (uint)*(ushort *)(pcVar32 + 10) ||
                 (piVar27 = (int *)(pcVar23 + *(uint *)(pcVar32 + 0x10)),
                 pcVar32 < (char *)((long)piVar27 + (ulong)(uint)*(ushort *)(pcVar32 + 8) * 0x2e)))
                || (pcVar2 != pcVar32 + (ulong)*(ushort *)(pcVar32 + 0x14) + 0x16))))
      goto LAB_10b71bd20;
      pcVar22 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      if (*(short *)(pcVar32 + 10) != 0) {
        uVar29 = 0;
        do {
          if (((*piVar27 != 0x2014b50) || (*(short *)((long)piVar27 + 0x22) != 0)) ||
             ((uVar6 = *(uint *)((long)piVar27 + 0x2a),
              (ulong)*(uint *)(pcVar32 + 0x10) < (ulong)uVar6 + 0x1e ||
              (pcVar32 < (char *)((long)piVar27 +
                                 (ulong)*(ushort *)((long)piVar27 + 0x1e) +
                                 (ulong)*(ushort *)(piVar27 + 8) +
                                 (ulong)*(ushort *)(piVar27 + 7) + 0x2e))))) {
            ppuStack_1b8 = &PTR____CFConstantStringClassReference_110f76a18;
            pcVar23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840();
            _objc_retainAutoreleasedReturnValue();
            ppuVar24 = &pcStack_1b0;
            pppuVar25 = &ppuStack_1b8;
            pcVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            pcStack_1b0 = pcVar23;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            param_2 = pcVar11;
            FUN_10b71b914(param_4,pcVar11);
            _objc_release(pcVar11);
            pcVar11 = (char *)0x0;
            goto LAB_10b71bfdc;
          }
          ppcVar33 = (char **)PTR_PTR_1126e0660;
          _objc_alloc();
          pppuVar25 = (undefined ***)(pcVar23 + uVar6);
          func_0x00010bffd540();
          ppuVar24 = ppcVar33;
          func_0x00010befa120(pcVar22);
          _objc_release(ppcVar33);
          piVar27 = (int *)((long)piVar27 +
                           (ulong)*(ushort *)((long)piVar27 + 0x1e) +
                           (ulong)*(ushort *)(piVar27 + 8) + (ulong)*(ushort *)(piVar27 + 7) + 0x2e)
          ;
          uVar29 = uVar29 + 1;
        } while (uVar29 < *(ushort *)(pcVar32 + 10));
      }
      _objc_retain(pcVar12);
      uVar28 = *(undefined8 *)(pcVar11 + 0x18);
      *(char **)(pcVar11 + 0x18) = pcVar12;
      _objc_release(uVar28);
      _objc_retain(pcVar22);
      pcVar23 = *(char **)(pcVar11 + 0x20);
      *(char **)(pcVar11 + 0x20) = pcVar22;
      pcVar11 = (char *)0x1;
LAB_10b71bfdc:
      _objc_release(pcVar23);
      _objc_release(pcVar22);
    }
  }
LAB_10b71be30:
  pcVar15 = pcVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return pcVar11;
  }
  ___stack_chk_fail();
  _objc_release(pcVar11);
  _objc_release(pcVar23);
  _objc_release(pcVar22);
  _objc_release(pcVar12);
  __Unwind_Resume();
  lStack_250 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar24);
  ppcVar16 = *(char ***)(pcVar15 + 0x20);
  func_0x00010bf529e0();
  ppcVar17 = ppuVar24;
  func_0x00010bf529e0();
  ppcVar33 = (char **)0x0;
  ppcVar5 = ppcVar17;
  if (ppcVar16 <= ppcVar17) {
    ppcVar5 = ppcVar16;
  }
  ppcVar16 = ppcVar33;
  if (ppcVar5 != (char **)0x0) {
    do {
      ppcVar18 = ppuVar24;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      ppcVar19 = *(char ***)(pcVar15 + 0x20);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(ppcVar18);
      ppcVar16 = ppcVar33;
      if (ppcVar18 != ppcVar19) break;
      ppcVar33 = (char **)((long)ppcVar33 + 1);
      ppcVar16 = ppcVar5;
    } while (ppcVar5 != ppcVar33);
  }
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_320 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_318 = 0xc2000000;
  pcStack_310 = FUN_10b71cc60;
  puStack_308 = &UNK_110d59bd0;
  _objc_retain();
  puStack_300 = puVar10;
  ppcStack_2f8 = ppcVar16;
  func_0x00010bf97e80(ppuVar24);
  if (ppcVar16 == (char **)0x0) {
    iVar7 = 0;
  }
  else {
    puVar20 = puVar10;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar20;
    func_0x00010c0e1d80();
    iVar7 = (int)puVar21;
    _objc_release(puVar20);
  }
  uStack_328 = 0;
  pcVar22 = *(char **)(pcVar15 + 8);
  func_0x00010c26b220();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar22 == (char *)0x0) {
    uStack_260 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
    uStack_258 = uStack_328;
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    if (pppuVar25 != (undefined ***)0x0) {
      ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *pppuVar25 = ppuVar14;
    }
    _objc_release(puVar9);
    _objc_release(puVar9);
    pcVar11 = (char *)0x0;
    goto LAB_10b71c7d8;
  }
  puStack_358 = puVar9;
  uStack_350 = 0xc2000000;
  pcStack_348 = FUN_10b71ccb4;
  puStack_340 = &UNK_11087bb00;
  _objc_retain(pcVar22);
  ppuVar14 = &puStack_358;
  pcStack_338 = pcVar22;
  _objc_retainBlock();
  pcVar23 = pcVar22;
  ppuStack_330 = ppuVar14;
  func_0x00010c0d8d40();
  if (pcVar23 == (char *)0x0) {
    uStack_270 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
    uStack_268 = uStack_328;
    pcVar23 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    if (pppuVar25 != (undefined ***)0x0) {
      ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *pppuVar25 = ppuVar14;
    }
    _objc_release(pcVar23);
LAB_10b71c7bc:
    _objc_release(pcVar23);
    pcVar11 = (char *)0x0;
  }
  else {
    puStack_388 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_380 = 0xc2000000;
    uStack_378 = 0x10b71ccbc;
    puStack_370 = &UNK_11087bb00;
    _objc_retain(pcVar23);
    ppuVar14 = &puStack_388;
    pcStack_368 = pcVar23;
    _objc_retainBlock();
    ppuStack_360 = ppuVar14;
    if (ppcVar16 < ppcVar17) {
      do {
        puVar9 = puVar10;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = puVar9;
        func_0x00010c2bdfe0();
        _objc_release(puVar9);
        if (((ulong)puVar20 & 1) == 0) {
          uStack_290 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
          ppuStack_288 = &PTR____CFConstantStringClassReference_110f76a18;
          uStack_280 = uStack_328;
          puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          puVar20 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_278 = puVar9;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          if (pppuVar25 != (undefined ***)0x0) {
            ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99240();
            _objc_retainAutoreleasedReturnValue();
            _objc_autorelease();
            *pppuVar25 = ppuVar14;
          }
          _objc_release(puVar20);
          _objc_release(puVar20);
          _objc_release(puVar9);
          FUN_10b71cd24(&ppuStack_360);
          _objc_release(pcStack_368);
          goto LAB_10b71c7bc;
        }
        ppcVar16 = (char **)((long)ppcVar16 + 1);
      } while (ppcVar17 != ppcVar16);
    }
    ppuStack_3a0 = (undefined **)0x6054b50;
    uStack_398 = SUB82(ppcVar17,0);
    pcVar11 = pcVar23;
    uStack_396 = uStack_398;
    func_0x00010c0e1c40();
    iStack_390 = (int)pcVar11 + iVar7;
    if (ppcVar17 != (char **)0x0) {
      ppcVar33 = (char **)0x0;
      do {
        puVar9 = puVar10;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = puVar9;
        func_0x00010c2bd9e0();
        _objc_release(puVar9);
        if (((ulong)puVar20 & 1) == 0) {
          uStack_2b0 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
          ppuStack_2a8 = &PTR____CFConstantStringClassReference_110f76a18;
          uStack_2a0 = uStack_328;
          puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          puVar20 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_298 = puVar9;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          if (pppuVar25 != (undefined ***)0x0) {
            ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99240();
            _objc_retainAutoreleasedReturnValue();
            _objc_autorelease();
            *pppuVar25 = ppuVar14;
          }
          _objc_release(puVar20);
          goto LAB_10b71c798;
        }
        ppcVar33 = (char **)((long)ppcVar33 + 1);
      } while (ppcVar17 != ppcVar33);
    }
    pcVar11 = pcVar23;
    func_0x00010c0e1c40();
    iStack_394 = ((int)pcVar11 + iVar7) - iStack_390;
    uStack_38c = 0;
    puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a40(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    pcVar11 = pcVar23;
    func_0x00010c2bda20();
    _objc_release(puVar9);
    if (((ulong)pcVar11 & 1) == 0) {
      uStack_2c0 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
      uStack_2b8 = uStack_328;
      puVar20 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      puVar9 = puVar20;
      if (pppuVar25 != (undefined ***)0x0) {
        ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *pppuVar25 = ppuVar14;
      }
LAB_10b71c798:
      _objc_release(puVar20);
      _objc_release(puVar9);
      FUN_10b71cd24(&ppuStack_360);
      _objc_release(pcStack_368);
      goto LAB_10b71c7bc;
    }
    FUN_10b71cd24(&ppuStack_360);
    _objc_release(pcStack_368);
    _objc_release(pcVar23);
    pcVar23 = *(char **)(pcVar15 + 8);
    if (iVar7 != 0) {
      func_0x00010c0d8d40();
      if (pcVar23 == (char *)0x0) {
        uStack_2d0 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
        uStack_2c8 = uStack_328;
        pcVar23 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        if (pppuVar25 != (undefined ***)0x0) {
          ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *pppuVar25 = ppuVar14;
        }
        _objc_release(pcVar23);
      }
      else {
        puStack_3c8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_3c0 = 0xc2000000;
        uStack_3b8 = 0x10b71ccc4;
        puStack_3b0 = &UNK_11087bb00;
        _objc_retain(pcVar23);
        ppuVar14 = &puStack_3c8;
        pcStack_3a8 = pcVar23;
        _objc_retainBlock();
        pcVar11 = pcVar22;
        ppuStack_3a0 = ppuVar14;
        func_0x00010c0d8b40();
        if (((pcVar11 != (char *)0x0) &&
            (pcVar12 = pcVar23, func_0x00010c1571e0(), (int)pcVar12 != 0)) &&
           (pcVar12 = pcVar23, func_0x00010c2bda20(), (int)pcVar12 != 0)) {
          func_0x00010c0e1c40(pcVar23);
          pcVar12 = pcVar23;
          func_0x00010c27cb20();
          if (((ulong)pcVar12 & 1) != 0) {
            _objc_release(pcVar11);
            FUN_10b71cd24(&ppuStack_3a0);
            _objc_release(pcStack_3a8);
            _objc_release(pcVar23);
            goto LAB_10b71c848;
          }
        }
        uStack_2e0 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
        uStack_2d8 = uStack_328;
        puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        if (pppuVar25 != (undefined ***)0x0) {
          ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *pppuVar25 = ppuVar14;
        }
        _objc_release(puVar9);
        _objc_release(puVar9);
        _objc_release(pcVar11);
        FUN_10b71cd24(&ppuStack_3a0);
        _objc_release(pcStack_3a8);
      }
      goto LAB_10b71c7bc;
    }
    func_0x00010c1312c0();
    if (((ulong)pcVar23 & 1) == 0) {
      uStack_2f0 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
      uStack_2e8 = uStack_328;
      pcVar23 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      if (pppuVar25 != (undefined ***)0x0) {
        ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *pppuVar25 = ppuVar14;
      }
      _objc_release(pcVar23);
      goto LAB_10b71c7bc;
    }
LAB_10b71c848:
    _objc_retain(pcVar15);
    _objc_sync_enter(pcVar15);
    uVar28 = *(undefined8 *)(pcVar15 + 0x10);
    pcVar15[0x10] = '\0';
    pcVar15[0x11] = '\0';
    pcVar15[0x12] = '\0';
    pcVar15[0x13] = '\0';
    pcVar15[0x14] = '\0';
    pcVar15[0x15] = '\0';
    pcVar15[0x16] = '\0';
    pcVar15[0x17] = '\0';
    _objc_release(uVar28);
    _objc_sync_exit(pcVar15);
    _objc_release(pcVar15);
    pcVar11 = pcVar15;
    func_0x00010c09b000(pcVar15);
    pcVar23 = pcVar15;
  }
  FUN_10b71cd24(&ppuStack_330);
  _objc_release(pcStack_338);
  pcVar15 = pcVar23;
LAB_10b71c7d8:
  _objc_release(pcVar22);
  _objc_release(puStack_300);
  _objc_release(puVar10);
  ppcVar33 = ppuVar24;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_250) {
    return pcVar11;
  }
  ___stack_chk_fail();
  _objc_release(pcVar15);
  _objc_release(pcVar15);
  FUN_10b71cd24(&ppuStack_330);
  _objc_release(pcStack_338);
  _objc_release(pcVar22);
  _objc_release(puStack_300);
  _objc_release(puVar10);
  _objc_release(ppuVar24);
  __Unwind_Resume();
  pcVar22 = ppcVar33[4];
  func_0x00010c0d9680(param_2);
  func_0x00010befa120(pcVar22);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return param_2;
}



/* Entry: 10b71bbc4; end: 10b71c08b; -[ZZArchive loadCanMiss:error:] */

char * FUN_10b71bbc4(long param_1,char *param_2,char *param_3,undefined ***param_4)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  char *pcVar9;
  char **ppcVar10;
  char **ppcVar11;
  char **ppcVar12;
  char **ppcVar13;
  undefined *puVar14;
  undefined *puVar15;
  char *pcVar17;
  char *pcVar18;
  undefined8 uVar19;
  undefined **ppuVar20;
  undefined ***pppuVar21;
  long lVar22;
  char *pcVar23;
  char *unaff_x23;
  int *piVar24;
  ulong uVar25;
  char *pcVar26;
  char **ppcVar27;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  char *pcStack_278;
  undefined **ppuStack_270;
  undefined2 uStack_268;
  undefined2 uStack_266;
  int iStack_264;
  int iStack_260;
  undefined2 uStack_25c;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  char *pcStack_238;
  undefined **ppuStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  char *pcStack_208;
  undefined **ppuStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  char **ppcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined **ppuStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  char acStack_94 [4];
  char *pcStack_90;
  undefined **ppuStack_88;
  char *pcStack_80;
  undefined **ppuStack_78;
  char *pcStack_70;
  long lStack_68;
  undefined *puVar16;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_90 = (char *)0x0;
  pcVar6 = *(char **)(param_1 + 8);
  ppuVar20 = &pcStack_90;
  pppuVar21 = param_4;
  func_0x00010c0d8b40();
  if (pcVar6 == (char *)0x0) {
    if (((int)param_3 != 0) &&
       (pcVar23 = pcStack_90, func_0x00010bf3ec40(), pcVar23 == (char *)0x104)) {
      pcVar23 = pcStack_90;
      func_0x00010bf87dc0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar20 = *(undefined ***)PTR__NSCocoaErrorDomain_1103453f8;
      param_3 = pcVar23;
      func_0x00010c0720c0();
      _objc_release(pcVar23);
      if (((ulong)param_3 & 1) != 0) {
        pcVar23 = (char *)0x1;
        goto LAB_10b71be30;
      }
    }
    ppuStack_78 = *(undefined ***)PTR__NSUnderlyingErrorKey_110345660;
    pcStack_70 = pcStack_90;
    ppuVar20 = &pcStack_70;
    pppuVar21 = &ppuStack_78;
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    if (param_4 != (undefined ***)0x0) {
      ppuVar20 = &PTR____CFConstantStringClassReference_110f769f8;
      pppuVar21 = (undefined ***)0x0;
      ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_4 = ppuVar8;
    }
    _objc_release(puVar7);
    _objc_release(puVar7);
LAB_10b71be2c:
    pcVar23 = (char *)0x0;
  }
  else {
    _objc_retainAutorelease(pcVar6);
    unaff_x23 = pcVar6;
    func_0x00010bf25f00();
    pcVar17 = pcVar6;
    func_0x00010c08fa60();
    pcVar9 = unaff_x23 + (long)pcVar17;
    pcVar23 = pcVar9 + -0x10015;
    if (pcVar17 < (char *)0x10016) {
      pcVar23 = unaff_x23;
    }
    pcVar18 = pcVar9 + -0x12;
    if (pcVar17 < (char *)0x13) {
      pcVar18 = unaff_x23;
    }
    builtin_strncpy(acStack_94,"PK\x05\x06",4);
    pcVar17 = pcVar18;
    if (pcVar23 == pcVar18) {
LAB_10b71bd20:
      if (param_4 == (undefined ***)0x0) goto LAB_10b71be2c;
      ppuVar20 = &PTR____CFConstantStringClassReference_110f769f8;
      pppuVar21 = (undefined ***)0x1;
      ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      pcVar23 = (char *)0x0;
      *param_4 = ppuVar8;
    }
    else {
      do {
        pcVar26 = pcVar17;
        if (*pcVar23 == 'P') {
          lVar22 = 1;
          do {
            pcVar26 = pcVar23;
            if (lVar22 == 4) break;
            pcVar2 = pcVar23 + lVar22;
            pcVar26 = pcVar17;
            if (pcVar2 == pcVar18) goto LAB_10b71bccc;
            pcVar1 = acStack_94 + lVar22;
            lVar22 = lVar22 + 1;
          } while (*pcVar2 == *pcVar1);
        }
        pcVar23 = pcVar23 + 1;
        pcVar17 = pcVar26;
      } while (pcVar23 != pcVar18);
LAB_10b71bccc:
      if ((((pcVar26 == pcVar18) || (*(short *)(pcVar26 + 4) != 0)) ||
          (*(short *)(pcVar26 + 6) != 0)) ||
         ((((uint)*(ushort *)(pcVar26 + 8) != (uint)*(ushort *)(pcVar26 + 10) ||
           (piVar24 = (int *)(unaff_x23 + *(uint *)(pcVar26 + 0x10)),
           pcVar26 < (char *)((long)piVar24 + (ulong)(uint)*(ushort *)(pcVar26 + 8) * 0x2e))) ||
          (pcVar9 != pcVar26 + (ulong)*(ushort *)(pcVar26 + 0x14) + 0x16)))) goto LAB_10b71bd20;
      param_3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      if (*(short *)(pcVar26 + 10) != 0) {
        uVar25 = 0;
        do {
          if (((*piVar24 != 0x2014b50) || (*(short *)((long)piVar24 + 0x22) != 0)) ||
             ((uVar4 = *(uint *)((long)piVar24 + 0x2a),
              (ulong)*(uint *)(pcVar26 + 0x10) < (ulong)uVar4 + 0x1e ||
              (pcVar26 < (char *)((long)piVar24 +
                                 (ulong)*(ushort *)((long)piVar24 + 0x1e) +
                                 (ulong)*(ushort *)(piVar24 + 8) +
                                 (ulong)*(ushort *)(piVar24 + 7) + 0x2e))))) {
            ppuStack_88 = &PTR____CFConstantStringClassReference_110f76a18;
            unaff_x23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840();
            _objc_retainAutoreleasedReturnValue();
            ppuVar20 = &pcStack_80;
            pppuVar21 = &ppuStack_88;
            pcVar23 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            pcStack_80 = unaff_x23;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            param_2 = pcVar23;
            FUN_10b71b914(param_4,pcVar23);
            _objc_release(pcVar23);
            pcVar23 = (char *)0x0;
            goto LAB_10b71bfdc;
          }
          ppcVar27 = (char **)PTR_PTR_1126e0660;
          _objc_alloc();
          pppuVar21 = (undefined ***)(unaff_x23 + uVar4);
          func_0x00010bffd540();
          ppuVar20 = ppcVar27;
          func_0x00010befa120(param_3);
          _objc_release(ppcVar27);
          piVar24 = (int *)((long)piVar24 +
                           (ulong)*(ushort *)((long)piVar24 + 0x1e) +
                           (ulong)*(ushort *)(piVar24 + 8) + (ulong)*(ushort *)(piVar24 + 7) + 0x2e)
          ;
          uVar25 = uVar25 + 1;
        } while (uVar25 < *(ushort *)(pcVar26 + 10));
      }
      _objc_retain(pcVar6);
      uVar19 = *(undefined8 *)(param_1 + 0x18);
      *(char **)(param_1 + 0x18) = pcVar6;
      _objc_release(uVar19);
      _objc_retain(param_3);
      unaff_x23 = *(char **)(param_1 + 0x20);
      *(char **)(param_1 + 0x20) = param_3;
      pcVar23 = (char *)0x1;
LAB_10b71bfdc:
      _objc_release(unaff_x23);
      _objc_release(param_3);
    }
  }
LAB_10b71be30:
  pcVar9 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pcVar23;
  }
  ___stack_chk_fail();
  _objc_release(pcVar23);
  _objc_release(unaff_x23);
  _objc_release(param_3);
  _objc_release(pcVar6);
  __Unwind_Resume();
  lStack_120 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar20);
  ppcVar10 = *(char ***)(pcVar9 + 0x20);
  func_0x00010bf529e0();
  ppcVar11 = ppuVar20;
  func_0x00010bf529e0();
  ppcVar27 = (char **)0x0;
  ppcVar3 = ppcVar11;
  if (ppcVar10 <= ppcVar11) {
    ppcVar3 = ppcVar10;
  }
  ppcVar10 = ppcVar27;
  if (ppcVar3 != (char **)0x0) {
    do {
      ppcVar12 = ppuVar20;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      ppcVar13 = *(char ***)(pcVar9 + 0x20);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(ppcVar12);
      ppcVar10 = ppcVar27;
      if (ppcVar12 != ppcVar13) break;
      ppcVar27 = (char **)((long)ppcVar27 + 1);
      ppcVar10 = ppcVar3;
    } while (ppcVar3 != ppcVar27);
  }
  puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_1f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1e8 = 0xc2000000;
  pcStack_1e0 = FUN_10b71cc60;
  puStack_1d8 = &UNK_110d59bd0;
  _objc_retain();
  puStack_1d0 = puVar14;
  ppcStack_1c8 = ppcVar10;
  func_0x00010bf97e80(ppuVar20);
  if (ppcVar10 == (char **)0x0) {
    iVar5 = 0;
  }
  else {
    puVar15 = puVar14;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    func_0x00010c0e1d80();
    iVar5 = (int)puVar16;
    _objc_release(puVar15);
  }
  uStack_1f8 = 0;
  pcVar6 = *(char **)(pcVar9 + 8);
  func_0x00010c26b220();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar6 == (char *)0x0) {
    uStack_130 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
    uStack_128 = uStack_1f8;
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    if (pppuVar21 != (undefined ***)0x0) {
      ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *pppuVar21 = ppuVar8;
    }
    _objc_release(puVar7);
    _objc_release(puVar7);
    pcVar23 = (char *)0x0;
    goto LAB_10b71c7d8;
  }
  puStack_228 = puVar7;
  uStack_220 = 0xc2000000;
  pcStack_218 = FUN_10b71ccb4;
  puStack_210 = &UNK_11087bb00;
  _objc_retain(pcVar6);
  ppuVar8 = &puStack_228;
  pcStack_208 = pcVar6;
  _objc_retainBlock();
  pcVar17 = pcVar6;
  ppuStack_200 = ppuVar8;
  func_0x00010c0d8d40();
  if (pcVar17 == (char *)0x0) {
    uStack_140 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
    uStack_138 = uStack_1f8;
    pcVar17 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    if (pppuVar21 != (undefined ***)0x0) {
      ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *pppuVar21 = ppuVar8;
    }
    _objc_release(pcVar17);
LAB_10b71c7bc:
    _objc_release(pcVar17);
    pcVar23 = (char *)0x0;
  }
  else {
    puStack_258 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_250 = 0xc2000000;
    uStack_248 = 0x10b71ccbc;
    puStack_240 = &UNK_11087bb00;
    _objc_retain(pcVar17);
    ppuVar8 = &puStack_258;
    pcStack_238 = pcVar17;
    _objc_retainBlock();
    ppuStack_230 = ppuVar8;
    if (ppcVar10 < ppcVar11) {
      do {
        puVar7 = puVar14;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar7;
        func_0x00010c2bdfe0();
        _objc_release(puVar7);
        if (((ulong)puVar15 & 1) == 0) {
          uStack_160 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
          ppuStack_158 = &PTR____CFConstantStringClassReference_110f76a18;
          uStack_150 = uStack_1f8;
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_148 = puVar7;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          if (pppuVar21 != (undefined ***)0x0) {
            ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99240();
            _objc_retainAutoreleasedReturnValue();
            _objc_autorelease();
            *pppuVar21 = ppuVar8;
          }
          _objc_release(puVar15);
          _objc_release(puVar15);
          _objc_release(puVar7);
          FUN_10b71cd24(&ppuStack_230);
          _objc_release(pcStack_238);
          goto LAB_10b71c7bc;
        }
        ppcVar10 = (char **)((long)ppcVar10 + 1);
      } while (ppcVar11 != ppcVar10);
    }
    ppuStack_270 = (undefined **)0x6054b50;
    uStack_268 = SUB82(ppcVar11,0);
    pcVar23 = pcVar17;
    uStack_266 = uStack_268;
    func_0x00010c0e1c40();
    iStack_260 = (int)pcVar23 + iVar5;
    if (ppcVar11 != (char **)0x0) {
      ppcVar27 = (char **)0x0;
      do {
        puVar7 = puVar14;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar7;
        func_0x00010c2bd9e0();
        _objc_release(puVar7);
        if (((ulong)puVar15 & 1) == 0) {
          uStack_180 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
          ppuStack_178 = &PTR____CFConstantStringClassReference_110f76a18;
          uStack_170 = uStack_1f8;
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_168 = puVar7;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          if (pppuVar21 != (undefined ***)0x0) {
            ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99240();
            _objc_retainAutoreleasedReturnValue();
            _objc_autorelease();
            *pppuVar21 = ppuVar8;
          }
          _objc_release(puVar15);
          goto LAB_10b71c798;
        }
        ppcVar27 = (char **)((long)ppcVar27 + 1);
      } while (ppcVar11 != ppcVar27);
    }
    pcVar23 = pcVar17;
    func_0x00010c0e1c40();
    iStack_264 = ((int)pcVar23 + iVar5) - iStack_260;
    uStack_25c = 0;
    puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a40(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    pcVar23 = pcVar17;
    func_0x00010c2bda20();
    _objc_release(puVar7);
    if (((ulong)pcVar23 & 1) == 0) {
      uStack_190 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
      uStack_188 = uStack_1f8;
      puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      puVar7 = puVar15;
      if (pppuVar21 != (undefined ***)0x0) {
        ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *pppuVar21 = ppuVar8;
      }
LAB_10b71c798:
      _objc_release(puVar15);
      _objc_release(puVar7);
      FUN_10b71cd24(&ppuStack_230);
      _objc_release(pcStack_238);
      goto LAB_10b71c7bc;
    }
    FUN_10b71cd24(&ppuStack_230);
    _objc_release(pcStack_238);
    _objc_release(pcVar17);
    pcVar17 = *(char **)(pcVar9 + 8);
    if (iVar5 != 0) {
      func_0x00010c0d8d40();
      if (pcVar17 == (char *)0x0) {
        uStack_1a0 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
        uStack_198 = uStack_1f8;
        pcVar17 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        if (pppuVar21 != (undefined ***)0x0) {
          ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *pppuVar21 = ppuVar8;
        }
        _objc_release(pcVar17);
      }
      else {
        puStack_298 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_290 = 0xc2000000;
        uStack_288 = 0x10b71ccc4;
        puStack_280 = &UNK_11087bb00;
        _objc_retain(pcVar17);
        ppuVar8 = &puStack_298;
        pcStack_278 = pcVar17;
        _objc_retainBlock();
        pcVar23 = pcVar6;
        ppuStack_270 = ppuVar8;
        func_0x00010c0d8b40();
        if (((pcVar23 != (char *)0x0) &&
            (pcVar18 = pcVar17, func_0x00010c1571e0(), (int)pcVar18 != 0)) &&
           (pcVar18 = pcVar17, func_0x00010c2bda20(), (int)pcVar18 != 0)) {
          func_0x00010c0e1c40(pcVar17);
          pcVar18 = pcVar17;
          func_0x00010c27cb20();
          if (((ulong)pcVar18 & 1) != 0) {
            _objc_release(pcVar23);
            FUN_10b71cd24(&ppuStack_270);
            _objc_release(pcStack_278);
            _objc_release(pcVar17);
            goto LAB_10b71c848;
          }
        }
        uStack_1b0 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
        uStack_1a8 = uStack_1f8;
        puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        if (pppuVar21 != (undefined ***)0x0) {
          ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *pppuVar21 = ppuVar8;
        }
        _objc_release(puVar7);
        _objc_release(puVar7);
        _objc_release(pcVar23);
        FUN_10b71cd24(&ppuStack_270);
        _objc_release(pcStack_278);
      }
      goto LAB_10b71c7bc;
    }
    func_0x00010c1312c0();
    if (((ulong)pcVar17 & 1) == 0) {
      uStack_1c0 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
      uStack_1b8 = uStack_1f8;
      pcVar17 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      if (pppuVar21 != (undefined ***)0x0) {
        ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *pppuVar21 = ppuVar8;
      }
      _objc_release(pcVar17);
      goto LAB_10b71c7bc;
    }
LAB_10b71c848:
    _objc_retain(pcVar9);
    _objc_sync_enter(pcVar9);
    uVar19 = *(undefined8 *)(pcVar9 + 0x10);
    pcVar9[0x10] = '\0';
    pcVar9[0x11] = '\0';
    pcVar9[0x12] = '\0';
    pcVar9[0x13] = '\0';
    pcVar9[0x14] = '\0';
    pcVar9[0x15] = '\0';
    pcVar9[0x16] = '\0';
    pcVar9[0x17] = '\0';
    _objc_release(uVar19);
    _objc_sync_exit(pcVar9);
    _objc_release(pcVar9);
    pcVar23 = pcVar9;
    func_0x00010c09b000(pcVar9);
    pcVar17 = pcVar9;
  }
  FUN_10b71cd24(&ppuStack_200);
  _objc_release(pcStack_208);
  pcVar9 = pcVar17;
LAB_10b71c7d8:
  _objc_release(pcVar6);
  _objc_release(puStack_1d0);
  _objc_release(puVar14);
  ppcVar27 = ppuVar20;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_120) {
    return pcVar23;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  _objc_release(pcVar9);
  FUN_10b71cd24(&ppuStack_200);
  _objc_release(pcStack_208);
  _objc_release(pcVar6);
  _objc_release(puStack_1d0);
  _objc_release(puVar14);
  _objc_release(ppuVar20);
  __Unwind_Resume();
  pcVar6 = ppcVar27[4];
  func_0x00010c0d9680(param_2);
  func_0x00010befa120(pcVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return param_2;
}



/* Entry: 10b71c08c; end: 10b71cc5f; -[ZZArchive updateEntries:error:] */

undefined * FUN_10b71c08c(undefined *param_1,undefined *param_2,ulong param_3,undefined8 *param_4)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined **ppuStack_1d0;
  undefined2 uStack_1c8;
  undefined2 uStack_1c6;
  int iStack_1c4;
  int iStack_1c0;
  undefined2 uStack_1bc;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined **ppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined **ppuStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf529e0();
  uVar4 = param_3;
  func_0x00010bf529e0();
  uVar15 = 0;
  uVar1 = uVar4;
  if (uVar3 <= uVar4) {
    uVar1 = uVar3;
  }
  uVar3 = uVar15;
  if (uVar1 != 0) {
    do {
      uVar5 = param_3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(ulong *)(param_1 + 0x20);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar5);
      uVar3 = uVar15;
      if (uVar5 != uVar6) break;
      uVar15 = uVar15 + 1;
      uVar3 = uVar1;
    } while (uVar1 != uVar15);
  }
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_10b71cc60;
  puStack_138 = &UNK_110d59bd0;
  _objc_retain();
  puStack_130 = puVar7;
  uStack_128 = uVar3;
  func_0x00010bf97e80(param_3);
  if (uVar3 == 0) {
    iVar2 = 0;
  }
  else {
    puVar8 = puVar7;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar8;
    func_0x00010c0e1d80();
    iVar2 = (int)puVar11;
    _objc_release(puVar8);
  }
  uStack_158 = 0;
  puVar8 = *(undefined **)(param_1 + 8);
  func_0x00010c26b220();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 == (undefined *)0x0) {
    uStack_90 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
    uStack_88 = uStack_158;
    puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    if (param_4 != (undefined8 *)0x0) {
      puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_4 = puVar11;
    }
    _objc_release(puVar14);
    _objc_release(puVar14);
    puVar14 = (undefined *)0x0;
    goto LAB_10b71c7d8;
  }
  puStack_188 = puVar14;
  uStack_180 = 0xc2000000;
  pcStack_178 = FUN_10b71ccb4;
  puStack_170 = &UNK_11087bb00;
  _objc_retain(puVar8);
  ppuVar9 = &puStack_188;
  puStack_168 = puVar8;
  _objc_retainBlock();
  puVar11 = puVar8;
  ppuStack_160 = ppuVar9;
  func_0x00010c0d8d40();
  if (puVar11 == (undefined *)0x0) {
    uStack_a0 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
    uStack_98 = uStack_158;
    puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    if (param_4 != (undefined8 *)0x0) {
      puVar14 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_4 = puVar14;
    }
    _objc_release(puVar11);
LAB_10b71c7bc:
    _objc_release(puVar11);
    puVar14 = (undefined *)0x0;
  }
  else {
    puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b0 = 0xc2000000;
    uStack_1a8 = 0x10b71ccbc;
    puStack_1a0 = &UNK_11087bb00;
    _objc_retain(puVar11);
    ppuVar9 = &puStack_1b8;
    puStack_198 = puVar11;
    _objc_retainBlock();
    ppuStack_190 = ppuVar9;
    if (uVar3 < uVar4) {
      do {
        puVar14 = puVar7;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar14;
        func_0x00010c2bdfe0();
        _objc_release(puVar14);
        if (((ulong)puVar10 & 1) == 0) {
          uStack_c0 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
          ppuStack_b8 = &PTR____CFConstantStringClassReference_110f76a18;
          uStack_b0 = uStack_158;
          puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_a8 = puVar14;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          if (param_4 != (undefined8 *)0x0) {
            puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99240();
            _objc_retainAutoreleasedReturnValue();
            _objc_autorelease();
            *param_4 = puVar12;
          }
          _objc_release(puVar10);
          _objc_release(puVar10);
          _objc_release(puVar14);
          FUN_10b71cd24(&ppuStack_190);
          _objc_release(puStack_198);
          goto LAB_10b71c7bc;
        }
        uVar3 = uVar3 + 1;
      } while (uVar4 != uVar3);
    }
    ppuStack_1d0 = (undefined **)0x6054b50;
    uStack_1c8 = (undefined2)uVar4;
    puVar14 = puVar11;
    uStack_1c6 = uStack_1c8;
    func_0x00010c0e1c40();
    iStack_1c0 = (int)puVar14 + iVar2;
    if (uVar4 != 0) {
      uVar15 = 0;
      do {
        puVar14 = puVar7;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar14;
        func_0x00010c2bd9e0();
        _objc_release(puVar14);
        if (((ulong)puVar10 & 1) == 0) {
          uStack_e0 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
          ppuStack_d8 = &PTR____CFConstantStringClassReference_110f76a18;
          uStack_d0 = uStack_158;
          puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_c8 = puVar14;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          if (param_4 != (undefined8 *)0x0) {
            puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99240();
            _objc_retainAutoreleasedReturnValue();
            _objc_autorelease();
            *param_4 = puVar12;
          }
          _objc_release(puVar10);
          goto LAB_10b71c798;
        }
        uVar15 = uVar15 + 1;
      } while (uVar4 != uVar15);
    }
    puVar14 = puVar11;
    func_0x00010c0e1c40();
    iStack_1c4 = ((int)puVar14 + iVar2) - iStack_1c0;
    uStack_1bc = 0;
    puVar14 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a40(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar11;
    func_0x00010c2bda20();
    _objc_release(puVar14);
    if (((ulong)puVar10 & 1) == 0) {
      uStack_f0 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
      uStack_e8 = uStack_158;
      puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      puVar14 = puVar10;
      if (param_4 != (undefined8 *)0x0) {
        puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_4 = puVar12;
      }
LAB_10b71c798:
      _objc_release(puVar10);
      _objc_release(puVar14);
      FUN_10b71cd24(&ppuStack_190);
      _objc_release(puStack_198);
      goto LAB_10b71c7bc;
    }
    FUN_10b71cd24(&ppuStack_190);
    _objc_release(puStack_198);
    _objc_release(puVar11);
    puVar11 = *(undefined **)(param_1 + 8);
    if (iVar2 != 0) {
      func_0x00010c0d8d40();
      if (puVar11 == (undefined *)0x0) {
        uStack_100 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
        uStack_f8 = uStack_158;
        puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        if (param_4 != (undefined8 *)0x0) {
          puVar14 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *param_4 = puVar14;
        }
        _objc_release(puVar11);
      }
      else {
        puStack_1f8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1f0 = 0xc2000000;
        uStack_1e8 = 0x10b71ccc4;
        puStack_1e0 = &UNK_11087bb00;
        _objc_retain(puVar11);
        ppuVar9 = &puStack_1f8;
        puStack_1d8 = puVar11;
        _objc_retainBlock();
        puVar14 = puVar8;
        ppuStack_1d0 = ppuVar9;
        func_0x00010c0d8b40();
        if (((puVar14 != (undefined *)0x0) &&
            (puVar10 = puVar11, func_0x00010c1571e0(), (int)puVar10 != 0)) &&
           (puVar10 = puVar11, func_0x00010c2bda20(), (int)puVar10 != 0)) {
          func_0x00010c0e1c40(puVar11);
          puVar10 = puVar11;
          func_0x00010c27cb20();
          if (((ulong)puVar10 & 1) != 0) {
            _objc_release(puVar14);
            FUN_10b71cd24(&ppuStack_1d0);
            _objc_release(puStack_1d8);
            _objc_release(puVar11);
            goto LAB_10b71c848;
          }
        }
        uStack_110 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
        uStack_108 = uStack_158;
        puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        if (param_4 != (undefined8 *)0x0) {
          puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *param_4 = puVar12;
        }
        _objc_release(puVar10);
        _objc_release(puVar10);
        _objc_release(puVar14);
        FUN_10b71cd24(&ppuStack_1d0);
        _objc_release(puStack_1d8);
      }
      goto LAB_10b71c7bc;
    }
    func_0x00010c1312c0();
    if (((ulong)puVar11 & 1) == 0) {
      uStack_120 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
      uStack_118 = uStack_158;
      puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      if (param_4 != (undefined8 *)0x0) {
        puVar14 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_4 = puVar14;
      }
      _objc_release(puVar11);
      goto LAB_10b71c7bc;
    }
LAB_10b71c848:
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    uVar13 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar13);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    puVar14 = param_1;
    func_0x00010c09b000(param_1);
    puVar11 = param_1;
  }
  FUN_10b71cd24(&ppuStack_160);
  _objc_release(puStack_168);
  param_1 = puVar11;
LAB_10b71c7d8:
  _objc_release(puVar8);
  _objc_release(puStack_130);
  _objc_release(puVar7);
  uVar15 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_release(param_1);
    _objc_release(param_1);
    FUN_10b71cd24(&ppuStack_160);
    _objc_release(puStack_168);
    _objc_release(puVar8);
    _objc_release(puStack_130);
    _objc_release(puVar7);
    _objc_release(param_3);
    __Unwind_Resume();
    uVar13 = *(undefined8 *)(uVar15 + 0x20);
    func_0x00010c0d9680(param_2);
    func_0x00010befa120(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return param_2;
  }
  return puVar14;
}



/* Entry: 10b71cc60; end: 10b71ccb3;  */

void FUN_10b71cc60(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d9680(param_2,param_2,param_3 < *(ulong *)(param_1 + 0x28));
  func_0x00010befa120(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b71ccb4; end: 10b71cccb;  */

void FUN_10b71ccb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12b2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeAsTemporary_1126286c8);
  return;
}



/* Entry: 10b71cccc; end: 10b71ccd3; -[ZZArchive contents] */

undefined8 FUN_10b71cccc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b71ccd4; end: 10b71ccdb; -[ZZArchive entries] */

undefined8 FUN_10b71ccd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b71ccdc; end: 10b71cd23; -[ZZArchive .cxx_destruct] */

void FUN_10b71ccdc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b71cd24; end: 10b71cd5b;  */

long * FUN_10b71cd24(long *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  _objc_release(*param_1);
  return param_1;
}



/* Entry: 10b71cd5c; end: 10b71cf03; -[ZZNewArchiveEntry initWithFileName:fileMode:lastModified:compressionLevel:dataBlock:streamBlock:dataConsumerBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b71cd5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_11270a208;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_1127924b0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    *(undefined2 *)((long)puVar1 + (long)_DAT_1127924b4) = param_4;
    lVar4 = (long)_DAT_1127924b8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127924bc) = param_6;
    uVar2 = param_7;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127924c0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127924c0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127924c4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127924c4) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127924c8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127924c8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b71cf04; end: 10b71cf1b; -[ZZNewArchiveEntry compressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10b71cf04(long param_1)

{
  return *(long *)(param_1 + _DAT_1127924bc) != 0;
}



/* Entry: 10b71cf1c; end: 10b71cf4b; -[ZZNewArchiveEntry lastModified] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b71cf1c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127924b8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b71cf4c; end: 10b71cf5b; -[ZZNewArchiveEntry fileMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_10b71cf4c(long param_1)

{
  return *(undefined2 *)(param_1 + _DAT_1127924b4);
}



/* Entry: 10b71cf5c; end: 10b71cf6f; -[ZZNewArchiveEntry rawFileName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b71cf5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf64930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127924b0),PTR_s_dataUsingEncoding__1125b6bf0,4);
  return;
}



/* Entry: 10b71cf70; end: 10b71cf77; -[ZZNewArchiveEntry encoding] */

undefined8 FUN_10b71cf70(void)

{
  return 4;
}



/* Entry: 10b71cf78; end: 10b71cfe3; -[ZZNewArchiveEntry newWriterCanSkipLocalFile:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b71cf78(void)

{
  _objc_alloc(PTR_PTR_1126e0668);
  func_0x00010c012d00();
  return;
}



/* Entry: 10b71cfe4; end: 10b71d013; -[ZZNewArchiveEntry fileNameWithEncoding:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b71cfe4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127924b0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b71d014; end: 10b71d083; -[ZZNewArchiveEntry .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b71d014(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127924c8,0);
  _objc_storeStrong(param_1 + _DAT_1127924c4,0);
  _objc_storeStrong(param_1 + _DAT_1127924c0,0);
  _objc_storeStrong(param_1 + _DAT_1127924b8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127924b0,0);
  return;
}



/* Entry: 10b71d084; end: 10b71d46b; -[ZZNewArchiveEntryWriter initWithFileName:fileMode:lastModified:compressionLevel:dataBlock:streamBlock:dataConsumerBlock:] */

undefined8 *
FUN_10b71d084(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
             undefined8 param_5,long param_6,long param_7,long param_8,long param_9)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  ushort uVar12;
  undefined2 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_11270a210;
  puVar3 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    uVar15 = param_3;
    func_0x00010c08fac0();
    puVar4 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    _objc_alloc();
    func_0x00010c022640();
    uVar14 = puVar3[1];
    puVar3[1] = puVar4;
    _objc_release(uVar14);
    puVar4 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    _objc_alloc();
    func_0x00010c022640();
    uVar14 = puVar3[2];
    puVar3[2] = puVar4;
    _objc_release(uVar14);
    puVar5 = puVar3;
    func_0x00010bf34920();
    *(undefined4 *)puVar5 = 0x2014b50;
    puVar6 = puVar3;
    func_0x00010c09d8c0();
    *(undefined4 *)puVar6 = 0x4034b50;
    *(undefined4 *)((long)puVar5 + 4) = 0xa031e;
    *(undefined2 *)((long)puVar6 + 4) = 10;
    if (param_6 - 1U < 9) {
      uVar12 = *(ushort *)(&UNK_10e5d7a30 + (param_6 - 1U) * 2);
    }
    else {
      uVar12 = 0;
    }
    uVar1 = 0x800;
    if (param_9 != 0) {
      uVar1 = 0x808;
    }
    uVar2 = 0x808;
    if ((param_7 == 0 || param_6 == 0) && param_8 == 0) {
      uVar2 = uVar1;
    }
    *(ushort *)((long)puVar6 + 6) = uVar12 | uVar2;
    *(ushort *)(puVar5 + 1) = uVar12 | uVar2;
    uVar13 = 8;
    if (param_6 == 0) {
      uVar13 = 0;
    }
    *(undefined2 *)(puVar6 + 1) = uVar13;
    *(undefined2 *)((long)puVar5 + 10) = uVar13;
    puVar4 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
    _objc_alloc();
    func_0x00010bffabc0();
    puVar7 = puVar4;
    func_0x00010bf44640();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c154b60();
    puVar9 = puVar7;
    func_0x00010c0ce880();
    puVar10 = puVar7;
    func_0x00010bfe4740();
    uVar12 = (ushort)((int)puVar9 << 5) | (ushort)((int)puVar8 + 1U >> 1) |
             (ushort)((int)puVar10 << 0xb);
    *(ushort *)((long)puVar6 + 10) = uVar12;
    *(ushort *)((long)puVar5 + 0xc) = uVar12;
    puVar8 = puVar7;
    func_0x00010bf65700();
    puVar9 = puVar7;
    func_0x00010c0d0e40();
    puVar10 = puVar7;
    func_0x00010c2bedc0();
    uVar12 = (ushort)puVar8 | (ushort)((int)puVar9 << 5) | (short)puVar10 * 0x200 + 0x8800U;
    *(ushort *)((long)puVar6 + 0xc) = uVar12;
    *(ushort *)((long)puVar5 + 0xe) = uVar12;
    *(undefined4 *)(puVar5 + 2) = 0;
    *(undefined8 *)((long)puVar6 + 0xe) = 0;
    *(undefined4 *)((long)puVar6 + 0x16) = 0;
    *(undefined8 *)((long)puVar5 + 0x14) = 0;
    *(short *)((long)puVar6 + 0x1a) = (short)uVar15;
    *(short *)((long)puVar5 + 0x1c) = (short)uVar15;
    *(undefined2 *)((long)puVar6 + 0x1c) = 0;
    *(undefined8 *)((long)puVar5 + 0x1e) = 0;
    *(int *)((long)puVar5 + 0x26) = param_4 << 0x10;
    *(undefined4 *)((long)puVar5 + 0x2a) = 0;
    func_0x00010c08fa60();
    func_0x00010bfc3340(param_3);
    func_0x00010bfc3340(param_3);
    puVar3[3] = param_6;
    lVar11 = param_7;
    _objc_retainBlock();
    uVar15 = puVar3[4];
    puVar3[4] = lVar11;
    _objc_release(uVar15);
    lVar11 = param_8;
    _objc_retainBlock();
    uVar15 = puVar3[5];
    puVar3[5] = lVar11;
    _objc_release(uVar15);
    lVar11 = param_9;
    _objc_retainBlock();
    uVar15 = puVar3[6];
    puVar3[6] = lVar11;
    _objc_release(uVar15);
    _objc_release(puVar7);
    _objc_release(puVar4);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10b71d46c; end: 10b71d473; -[ZZNewArchiveEntryWriter centralFileHeader] */

void FUN_10b71d46c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d3c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_mutableBytes_112612930);
  return;
}



/* Entry: 10b71d474; end: 10b71d47b; -[ZZNewArchiveEntryWriter localFileHeader] */

void FUN_10b71d474(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d3c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_mutableBytes_112612930);
  return;
}



/* Entry: 10b71d47c; end: 10b71d483; -[ZZNewArchiveEntryWriter offsetToLocalFileEnd] */

undefined8 FUN_10b71d47c(void)

{
  return 0;
}



/* Entry: 10b71d484; end: 10b71db37; -[ZZNewArchiveEntryWriter writeLocalFileToChannelOutput:withInitialSkip:error:] */

uint FUN_10b71d484(long param_1,undefined8 param_2,ulong param_3,int param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined4 uVar12;
  long lVar13;
  uint uVar14;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined **ppuStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  _objc_retain(param_3);
  lVar4 = param_1;
  func_0x00010bf34920();
  uVar9 = param_3;
  func_0x00010c0e1c40();
  *(int *)(lVar4 + 0x2a) = (int)uVar9 + param_4;
  puVar11 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0;
  uStack_90 = 0x8074b50;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc0000000;
  pcStack_b0 = FUN_10b71db38;
  puStack_a8 = &UNK_110848088;
  ppuVar5 = &puStack_c0;
  puStack_a0 = param_5;
  _objc_retainBlock();
  ppuStack_98 = ppuVar5;
  if (*(long *)(param_1 + 0x18) == 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      uVar9 = param_3;
      func_0x00010c2bda20();
      if ((int)uVar9 == 0) goto LAB_10b71d840;
      puVar8 = PTR_PTR_1126e0678;
      _objc_alloc();
      func_0x00010bffd700();
      func_0x00010c0e8e20();
      puStack_168 = puVar11;
      uStack_160 = 0xc2000000;
      uStack_158 = 0x10b71dbac;
      puStack_150 = &UNK_11087bb00;
      _objc_retain(puVar8);
      ppuVar5 = &puStack_168;
      puStack_148 = puVar8;
      _objc_retainBlock();
      uVar9 = *(ulong *)(param_1 + 0x28);
      ppuStack_c8 = ppuVar5;
      if (uVar9 == 0) {
        if (*(long *)(param_1 + 0x30) != 0) {
          puVar10 = puVar8;
          _CGDataConsumerCreate(puVar8,&PTR_FUN_1133c8e10);
          puStack_190 = puVar11;
          uStack_188 = 0xc0000000;
          uStack_180 = 0x10b71dbb4;
          puStack_178 = &UNK_110848088;
          ppuVar5 = &puStack_190;
          puStack_170 = puVar10;
          _objc_retainBlock();
          lVar6 = *(long *)(param_1 + 0x30);
          ppuStack_100 = ppuVar5;
          (**(code **)(lVar6 + 0x10))(lVar6,puVar10,param_5);
          FUN_10b71cd24(&ppuStack_100);
          if ((int)lVar6 == 0) goto LAB_10b71da40;
        }
      }
      else {
        (**(code **)(uVar9 + 0x10))(uVar9,puVar8,param_5);
        if ((uVar9 & 1) == 0) {
LAB_10b71da40:
          FUN_10b71cd24(&ppuStack_c8);
          puVar11 = puStack_148;
          goto LAB_10b71d834;
        }
      }
      FUN_10b71cd24(&ppuStack_c8);
      _objc_release(puStack_148);
      puVar11 = puVar8;
      func_0x00010bf541e0();
      uVar2 = SUB84(puVar11,0);
      uStack_90 = CONCAT44(uVar2,(undefined4)uStack_90);
      puVar11 = puVar8;
      func_0x00010c23d0a0();
      uVar3 = SUB84(puVar11,0);
      uStack_88 = CONCAT44(uVar3,uVar3);
      uVar12 = uVar3;
    }
    else {
      _objc_autoreleasePoolPush();
      lVar6 = *(long *)(param_1 + 0x20);
      puStack_130 = (undefined *)0x0;
      (**(code **)(lVar6 + 0x10))(lVar6,&puStack_130);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puStack_130;
      _objc_retain(puStack_130);
      if (lVar6 == 0) {
        lVar13 = 0;
        uVar2 = 0;
        uVar14 = 1;
        puVar8 = puVar11;
      }
      else {
        lVar13 = lVar6;
        func_0x00010c08fa60();
        uVar12 = (undefined4)lVar13;
        uStack_88 = CONCAT44(uVar12,uVar12);
        lVar7 = lVar6;
        _objc_retainAutorelease(lVar6);
        func_0x00010bf25f00();
        uVar2 = 0;
        _crc32(0,lVar7,lVar13);
        uStack_90 = CONCAT44(uVar2,(undefined4)uStack_90);
        lVar7 = param_1;
        func_0x00010c09d8c0();
        *(undefined4 *)(lVar7 + 0xe) = uVar2;
        *(undefined4 *)(lVar7 + 0x12) = uVar12;
        *(undefined4 *)(lVar7 + 0x16) = uVar12;
        puStack_138 = (undefined *)0x0;
        uVar9 = param_3;
        func_0x00010c2bda20();
        puVar8 = puStack_138;
        _objc_retain(puStack_138);
        _objc_release(puVar11);
        if ((int)uVar9 == 0) {
          uVar14 = 1;
        }
        else {
          puStack_140 = (undefined *)0x0;
          uVar9 = param_3;
          func_0x00010c2bda20();
          puVar11 = puStack_140;
          _objc_retain(puStack_140);
          _objc_release(puVar8);
          uVar14 = (uint)uVar9 ^ 1;
          puVar8 = puVar11;
        }
      }
      uVar3 = (undefined4)lVar13;
      _objc_release(lVar6);
      _objc_autoreleasePoolPop(ppuVar5);
      uVar12 = uVar3;
      if (uVar14 != 0) {
        _objc_retainAutorelease(puVar8);
        *param_5 = puVar8;
LAB_10b71d838:
        _objc_release(puVar8);
        goto LAB_10b71d840;
      }
    }
  }
  else {
    uVar9 = param_3;
    func_0x00010c2bda20();
    if ((uVar9 & 1) == 0) {
LAB_10b71d840:
      FUN_10b71cd24(&ppuStack_98);
      uVar14 = 0;
      goto LAB_10b71da10;
    }
    puVar8 = PTR_PTR_1126e0670;
    _objc_alloc();
    func_0x00010bffd720();
    func_0x00010c0e8e20();
    puStack_f0 = puVar11;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_10b71db9c;
    puStack_d8 = &UNK_11087bb00;
    _objc_retain(puVar8);
    ppuVar5 = &puStack_f0;
    puStack_d0 = puVar8;
    _objc_retainBlock();
    ppuStack_c8 = ppuVar5;
    if (*(long *)(param_1 + 0x20) == 0) {
      uVar9 = *(ulong *)(param_1 + 0x28);
      if (uVar9 == 0) {
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_10b71d8b4;
        puVar10 = puVar8;
        _CGDataConsumerCreate(puVar8,&PTR_FUN_1133c8e10);
        puStack_128 = puVar11;
        uStack_120 = 0xc0000000;
        uStack_118 = 0x10b71dba4;
        puStack_110 = &UNK_110848088;
        ppuVar5 = &puStack_128;
        puStack_108 = puVar10;
        _objc_retainBlock();
        uVar9 = *(ulong *)(param_1 + 0x30);
        ppuStack_100 = ppuVar5;
        (**(code **)(uVar9 + 0x10))(uVar9,puVar10,param_5);
        FUN_10b71cd24(&ppuStack_100);
      }
      else {
        (**(code **)(uVar9 + 0x10))(uVar9,puVar8,param_5);
      }
      if ((uVar9 & 1) == 0) goto LAB_10b71d828;
    }
    else {
      _objc_autoreleasePoolPush();
      lVar6 = *(long *)(param_1 + 0x20);
      uStack_f8 = 0;
      (**(code **)(lVar6 + 0x10))(lVar6,&uStack_f8);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uStack_f8;
      _objc_retain(uStack_f8);
      if (lVar6 != 0) {
        _objc_retainAutorelease(lVar6);
        func_0x00010bf25f00();
        lVar13 = lVar6;
        func_0x00010c08fa60();
        for (; lVar13 != 0; lVar13 = lVar13 - (long)puVar11) {
          puVar11 = puVar8;
          func_0x00010c2bd840();
        }
      }
      _objc_release(lVar6);
      _objc_autoreleasePoolPop(ppuVar5);
      if (lVar6 == 0) {
        _objc_retainAutorelease(uVar1);
        *param_5 = uVar1;
        _objc_release();
LAB_10b71d828:
        FUN_10b71cd24(&ppuStack_c8);
        puVar11 = puStack_d0;
LAB_10b71d834:
        _objc_release(puVar11);
        goto LAB_10b71d838;
      }
      _objc_release(uVar1);
    }
LAB_10b71d8b4:
    FUN_10b71cd24(&ppuStack_c8);
    _objc_release(puStack_d0);
    puVar11 = puVar8;
    func_0x00010bf541e0();
    uVar2 = SUB84(puVar11,0);
    uStack_90 = CONCAT44(uVar2,(undefined4)uStack_90);
    puVar11 = puVar8;
    func_0x00010bf45720();
    uVar3 = SUB84(puVar11,0);
    uStack_88 = CONCAT44(uStack_88._4_4_,uVar3);
    puVar11 = puVar8;
    func_0x00010c27f5e0();
    uStack_88 = CONCAT44((int)puVar11,(undefined4)uStack_88);
    uVar12 = (int)puVar11;
  }
  _objc_release(puVar8);
  FUN_10b71cd24(&ppuStack_98);
  *(undefined4 *)(lVar4 + 0x10) = uVar2;
  *(undefined4 *)(lVar4 + 0x14) = uVar3;
  *(undefined4 *)(lVar4 + 0x18) = uVar12;
  if ((((*(long *)(param_1 + 0x20) == 0) && (*(long *)(param_1 + 0x28) == 0)) &&
      (*(long *)(param_1 + 0x30) == 0)) || ((*(ushort *)(lVar4 + 8) >> 3 & 1) == 0)) {
    uVar14 = 1;
  }
  else {
    puVar11 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a40(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_3;
    func_0x00010c2bda20(param_3);
    uVar14 = (uint)uVar9;
    _objc_release(puVar11);
  }
LAB_10b71da10:
  _objc_release(param_3);
  return uVar14 & 1;
}



/* Entry: 10b71db38; end: 10b71db9b;  */

void FUN_10b71db38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if ((*(long **)(param_1 + 0x20) != (long *)0x0) && (**(long **)(param_1 + 0x20) == 0)) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110f769f8,0xd,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    **(undefined8 **)(param_1 + 0x20) = puVar1;
    return;
  }
  return;
}



/* Entry: 10b71db9c; end: 10b71dbbb;  */

void FUN_10b71db9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3d9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_close_1125ad020);
  return;
}



/* Entry: 10b71dbbc; end: 10b71dbcb; -[ZZNewArchiveEntryWriter writeCentralFileHeaderToChannelOutput:error:] */

void FUN_10b71dbbc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2bda30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_writeData_error__11268d0b0,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10b71dbcc; end: 10b71dc1f; -[ZZNewArchiveEntryWriter .cxx_destruct] */

void FUN_10b71dbcc(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b71dc20; end: 10b71dc2b;  */

void FUN_10b71dc20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2bd850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_write_maxLength__11268d038,param_2,param_3);
  return;
}



/* Entry: 10b71dc2c; end: 10b71dd0f; -[ZZOldArchiveEntry initWithCentralFileHeader:localFileHeader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b71dc2c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270a218;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(long *)((long)puVar1 + (long)_DAT_1127924e4) = param_3;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127924e8) = param_4;
    if ((*(byte *)(param_3 + 8) & 1) != 0) {
      puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
      func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11f000();
      _objc_release(puVar2);
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b71dd10; end: 10b71dd4b; -[ZZOldArchiveEntry fileData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b71dd10(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_1127924e8);
                    /* WARNING: Could not recover jumptable at 0x00010bf64a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSData_1126ae778,PTR_s_dataWithBytesNoCopy_length_freeW_1125b6c38,
             lVar1 + (ulong)*(ushort *)(lVar1 + 0x1a) + (ulong)*(ushort *)(lVar1 + 0x1c) + 0x1e,
             *(undefined4 *)(*(long *)(param_1 + _DAT_1127924e4) + 0x14),0);
  return;
}



/* Entry: 10b71dd4c; end: 10b71dd5f; -[ZZOldArchiveEntry compressionMethod] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_10b71dd4c(long param_1)

{
  return *(undefined2 *)(*(long *)(param_1 + _DAT_1127924e4) + 10);
}



/* Entry: 10b71dd60; end: 10b71dd7b; -[ZZOldArchiveEntry compressed] */

bool FUN_10b71dd60(int param_1)

{
  func_0x00010bf45760();
  return param_1 != 0;
}



/* Entry: 10b71dd7c; end: 10b71de9b; -[ZZOldArchiveEntry lastModified] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b71dd7c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSDateComponents_1126aef68;
  _objc_alloc_init(PTR__OBJC_CLASS___NSDateComponents_1126aef68);
  lVar4 = (long)_DAT_1127924e4;
  func_0x00010c1f8e00();
  func_0x00010c1c8500(puVar1,param_2,*(ushort *)(*(long *)(param_1 + lVar4) + 0xc) >> 5 & 0x3f);
  func_0x00010c1a9320(puVar1,param_2,*(ushort *)(*(long *)(param_1 + lVar4) + 0xc) >> 0xb);
  func_0x00010c189d40(puVar1,param_2,*(ushort *)(*(long *)(param_1 + lVar4) + 0xe) & 0x1f);
  func_0x00010c1c8fc0(puVar1,param_2,*(ushort *)(*(long *)(param_1 + lVar4) + 0xe) >> 5 & 0xf);
  func_0x00010c2278a0(puVar1,param_2,(*(ushort *)(*(long *)(param_1 + lVar4) + 0xe) >> 9) + 0x7bc);
  puVar2 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  _objc_alloc(PTR__OBJC_CLASS___NSCalendar_1126aeec8);
  func_0x00010bffabc0();
  puVar3 = puVar2;
  func_0x00010bf650e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b71de9c; end: 10b71deaf; -[ZZOldArchiveEntry crc32] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10b71de9c(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + _DAT_1127924e4) + 0x10);
}



/* Entry: 10b71deb0; end: 10b71dec3; -[ZZOldArchiveEntry compressedSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10b71deb0(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + _DAT_1127924e4) + 0x14);
}



/* Entry: 10b71dec4; end: 10b71ded7; -[ZZOldArchiveEntry uncompressedSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10b71dec4(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + _DAT_1127924e4) + 0x18);
}



/* Entry: 10b71ded8; end: 10b71df2f; -[ZZOldArchiveEntry fileMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10b71ded8(long param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(*(long *)(param_1 + _DAT_1127924e4) + 0x26);
  cVar2 = *(char *)(*(long *)(param_1 + _DAT_1127924e4) + 5);
  if (cVar2 != '\n') {
    if (cVar2 == '\x03') {
      return uVar1 >> 0x10;
    }
    if (cVar2 != '\0') {
      return 0;
    }
  }
  uVar3 = 0x8000;
  if ((uVar1 & 0x18) != 0) {
    uVar3 = 0x4049;
  }
  return (uVar3 & 0xffffff00 | uVar3 & 0x7f | (uVar1 & 1) << 7) ^ 0x1a4;
}



/* Entry: 10b71df30; end: 10b71df53; -[ZZOldArchiveEntry rawFileName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b71df30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf64a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSData_1126ae778,PTR_s_dataWithBytes_length__1125b6c28,
             *(long *)(param_1 + _DAT_1127924e4) + 0x2e,
             *(undefined2 *)(*(long *)(param_1 + _DAT_1127924e4) + 0x1c));
  return;
}



/* Entry: 10b71df54; end: 10b71df77; -[ZZOldArchiveEntry encoding] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b71df54(long param_1)

{
  undefined8 uVar1;
  
  if ((*(ushort *)(*(long *)(param_1 + _DAT_1127924e4) + 8) >> 0xb & 1) == 0) {
    uVar1 = 0x400;
                    /* WARNING: Could not recover jumptable at 0x00010bdba7d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFStringConvertEncodingToNSStringEncoding_11034a870)(0x400);
    return uVar1;
  }
  return 4;
}



/* Entry: 10b71df78; end: 10b71e137; -[ZZOldArchiveEntry check:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b71df78(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  bool bVar5;
  undefined *puVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar12 = (long)_DAT_1127924e8;
  piVar7 = *(int **)(param_1 + lVar12);
  if ((*(ushort *)((long)piVar7 + 6) >> 3 & 1) == 0) {
    bVar5 = false;
    piVar8 = (int *)((long)piVar7 + 0xe);
    piVar9 = (int *)((long)piVar7 + 0x12);
    piVar10 = (int *)((long)piVar7 + 0x16);
  }
  else {
    lVar11 = (ulong)*(ushort *)(piVar7 + 7) + (ulong)*(uint *)((long)piVar7 + 0x12) +
             (ulong)*(ushort *)((long)piVar7 + 0x1a);
    piVar8 = (int *)((long)piVar7 + lVar11 + 0x22);
    piVar9 = (int *)((long)piVar7 + lVar11 + 0x26);
    piVar10 = (int *)((long)piVar7 + lVar11 + 0x2a);
    bVar5 = *(int *)((long)piVar7 + lVar11 + 0x1e) != 0x8074b50;
  }
  if (*piVar7 == 0x4034b50) {
    lVar13 = (long)_DAT_1127924e4;
    lVar11 = *(long *)(param_1 + lVar13);
    if (((short)piVar7[1] == *(short *)(lVar11 + 6)) &&
       (*(ushort *)((long)piVar7 + 6) == *(ushort *)(lVar11 + 8))) {
      iVar1 = *piVar10;
      iVar2 = *piVar9;
      iVar3 = *piVar8;
      uVar4 = *(ushort *)(piVar7 + 2);
      lVar11 = param_1;
      func_0x00010bf45760();
      if ((uint)uVar4 == (uint)lVar11) {
        lVar12 = *(long *)(param_1 + lVar12);
        lVar11 = *(long *)(param_1 + lVar13);
        if (((*(short *)(lVar12 + 0xc) == *(short *)(lVar11 + 0xe)) &&
            (*(short *)(lVar12 + 10) == *(short *)(lVar11 + 0xc))) &&
           (*(short *)(lVar12 + 0x1a) == *(short *)(lVar11 + 0x1c))) {
          lVar12 = lVar12 + 0x1e;
          _memcmp(lVar12,lVar11 + 0x2e);
          if (((!(bool)((int)lVar12 != 0 | bVar5)) && (iVar3 == *(int *)(lVar11 + 0x10))) &&
             ((iVar2 == *(int *)(lVar11 + 0x14) && (iVar1 == *(int *)(lVar11 + 0x18))))) {
            return 1;
          }
        }
      }
    }
  }
  if (param_3 != (undefined8 *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_3 = puVar6;
  }
  return 0;
}



/* Entry: 10b71e138; end: 10b71e17f; -[ZZOldArchiveEntry fileNameWithEncoding:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b71e138(void)

{
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010bffa180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71e180; end: 10b71e1f7; -[ZZOldArchiveEntry checkCompression:] */

undefined8 FUN_10b71e180(ulong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010bf45760();
  if ((param_1 & 0xfffffff7) == 0) {
    uVar1 = 1;
  }
  else if (param_3 == (undefined8 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110f769f8,9,
                        PTR____NSDictionary0__struct_11034ab58);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    uVar1 = 0;
    *param_3 = puVar2;
  }
  return uVar1;
}



/* Entry: 10b71e1f8; end: 10b71e28f; -[ZZOldArchiveEntry streamForData:error:] */

void FUN_10b71e1f8(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSInputStream_1126bc580;
  func_0x00010c065f80(PTR__OBJC_CLASS___NSInputStream_1126bc580);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf45760();
  if (param_1 == 0) {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  else if (param_1 == 8) {
    puVar2 = PTR_PTR_1126e0680;
    _objc_alloc(PTR_PTR_1126e0680);
    func_0x00010c04e6a0();
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b71e290; end: 10b71e303; -[ZZOldArchiveEntry newStreamWithError:] */

undefined8 FUN_10b71e290(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bfacb00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25c560(param_1,param_2,uVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b71e304; end: 10b71e3db; -[ZZOldArchiveEntry newDataWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10b71e304(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = param_1;
  func_0x00010bfacb00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf45760();
  if ((int)lVar2 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
    lVar2 = lVar1;
    _objc_retainAutorelease(lVar1);
    func_0x00010bf25f00();
    lVar3 = lVar1;
    func_0x00010c08fa60(lVar1);
    func_0x00010bffa160(puVar4,param_2,lVar2,lVar3);
  }
  else if ((int)lVar2 == 8) {
    puVar4 = PTR_PTR_1126e0680;
    func_0x00010bf67580(PTR_PTR_1126e0680,param_2,lVar1,
                        *(undefined4 *)(*(long *)(param_1 + _DAT_1127924e4) + 0x18));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  _objc_release(lVar1);
  return puVar4;
}



/* Entry: 10b71e3dc; end: 10b71e543; -[ZZOldArchiveEntry newDataProviderWithError:] */

undefined8 * FUN_10b71e3dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  code *pcStack_50;
  code *pcStack_48;
  code *pcStack_40;
  
  ppuVar4 = &puStack_90;
  puVar1 = param_1;
  func_0x00010bfacb00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010bf45760();
  if ((int)puVar2 == 0) {
    puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutorelease(puVar1);
    func_0x00010bf25f00();
    func_0x00010c08fa60(puVar1);
    func_0x00010bffa160(puVar2);
    puVar3 = puVar2;
    _CGDataProviderCreateWithCFData();
  }
  else {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10b71e544;
    puStack_78 = &UNK_110d59c00;
    puStack_70 = param_1;
    _objc_retain(puVar1);
    puStack_68 = puVar1;
    _objc_retain(&puStack_90);
    puVar3 = (undefined8 *)0x10;
    _malloc();
    _objc_retainBlock();
    _objc_release(&puStack_90);
    *puVar3 = ppuVar4;
    puVar3[1] = 0;
    pcStack_58 = FUN_10b71e598;
    uStack_60 = 0;
    pcStack_48 = FUN_10b71e704;
    pcStack_50 = FUN_10b71e624;
    pcStack_40 = FUN_10b71e730;
    _CGDataProviderCreateSequential(puVar3,&uStack_60);
    puVar2 = puStack_68;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 10b71e544; end: 10b71e553;  */

void FUN_10b71e544(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_streamForData_error__112674b80,
             *(undefined8 *)(param_1 + 0x28),0);
  return;
}



/* Entry: 10b71e554; end: 10b71e597; -[ZZOldArchiveEntry newWriterCanSkipLocalFile:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b71e554(void)

{
  _objc_alloc(PTR_PTR_1126e0688);
                    /* WARNING: Could not recover jumptable at 0x00010bffd570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b71e598; end: 10b71e623;  */

ulong FUN_10b71e598(long *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_1[1] == 0) {
    lVar2 = *param_1;
    (**(code **)(lVar2 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1[1];
    param_1[1] = lVar2;
    _objc_release(lVar3);
    func_0x00010c0e8e20(param_1[1]);
  }
  uVar1 = 0;
  do {
    uVar4 = uVar1;
    if (param_3 <= uVar4) {
      return uVar4;
    }
    lVar2 = param_1[1];
    func_0x00010c121160();
    uVar1 = lVar2 + uVar4;
  } while (0 < lVar2);
  return uVar4;
}



/* Entry: 10b71e624; end: 10b71e703;  */

ulong FUN_10b71e624(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = param_1;
  if (param_1[1] == 0) {
    lVar2 = *param_1;
    (**(code **)(lVar2 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1[1];
    param_1[1] = lVar2;
    _objc_release(lVar6);
    plVar3 = (long *)param_1[1];
    func_0x00010c0e8e20();
  }
  if ((long)param_2 < 1) {
    uVar4 = 0;
  }
  else {
    uVar1 = 0;
    do {
      uVar4 = uVar1;
      if (param_2 <= uVar4) break;
      plVar3 = (long *)param_1[1];
      func_0x00010c121160();
      uVar1 = (long)plVar3 + uVar4;
    } while (0 < (long)plVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return uVar4;
  }
  ___stack_chk_fail();
  func_0x00010bf3d9e0(plVar3[1]);
  uVar4 = plVar3[1];
  plVar3[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return uVar4;
}



/* Entry: 10b71e704; end: 10b71e72f;  */

void FUN_10b71e704(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf3d9e0(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b71e730; end: 10b71e76f;  */

void FUN_10b71e730(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1[1] != 0) {
    func_0x00010bf3d9e0();
    uVar1 = param_1[1];
  }
  _objc_release(uVar1);
  _objc_release(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}


