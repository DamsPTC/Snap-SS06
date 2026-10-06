/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af79b54; end: 10af79bfb; -[SCSnapTokenKeychainDiskStorage _removeDataForKeyWithStatus:tokenType:] */

bool FUN_10af79b54(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  bool bVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    bVar4 = false;
  }
  else {
    puVar3 = PTR_PTR_1126aef90;
    func_0x00010c12bcc0(PTR_PTR_1126aef90,param_2,param_3);
    iVar1 = (int)puVar3;
    bVar4 = iVar1 == -0x62d4 || iVar1 == 0;
    if (iVar1 != -0x62d4 && iVar1 != 0) {
      func_0x00010c0afe40(*(undefined8 *)(param_1 + 8),param_2,0,(long)iVar1,param_4);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar4;
}



/* Entry: 10af79bfc; end: 10af79ca7; -[SCSnapTokenKeychainDiskStorage _setBackgroundDataWithStatus:forKey:tokenType:] */

undefined8
FUN_10af79bfc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126aef90;
    func_0x00010c16e560(PTR_PTR_1126aef90,param_2,param_3,param_4);
    if ((int)puVar2 == 0) {
      uVar3 = 1;
      goto LAB_10af79c7c;
    }
    func_0x00010c0afe80(*(undefined8 *)(param_1 + 8),param_2,0,(long)(int)puVar2,param_5);
  }
  uVar3 = 0;
LAB_10af79c7c:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10af79ca8; end: 10af79cd7; -[SCSnapTokenKeychainDiskStorage .cxx_destruct] */

void FUN_10af79ca8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af79cd8; end: 10af79d93; -[SCSnapTokenAccessTokenFetchOperation sendFailure:] */

void FUN_10af79cd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x30);
  if ((lVar1 != 0) && (lVar2 = *(long *)(param_1 + 0x20), lVar2 != 0)) {
    if (*(char *)(param_1 + 8) == '\x01') {
      (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    }
    else {
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_10af79d94;
      puStack_48 = &UNK_110841f80;
      lStack_40 = param_1;
      _objc_retain(param_3);
      uStack_38 = param_3;
      func_0x000107c27d8c(lVar2,&puStack_60);
      _objc_release(uStack_38);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10af79d94; end: 10af79da3;  */

void FUN_10af79d94(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010af79da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10af79da4; end: 10af79dab; -[SCSnapTokenAccessTokenFetchOperation isSyncBlockExecution] */

undefined1 FUN_10af79da4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10af79dac; end: 10af79db3; -[SCSnapTokenAccessTokenFetchOperation setIsSyncBlockExecution:] */

void FUN_10af79dac(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10af79db4; end: 10af79dbb; -[SCSnapTokenAccessTokenFetchOperation successQueue] */

undefined8 FUN_10af79db4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af79dbc; end: 10af79dc3; -[SCSnapTokenAccessTokenFetchOperation failureQueue] */

undefined8 FUN_10af79dbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af79dc4; end: 10af79dcb; -[SCSnapTokenAccessTokenFetchOperation successBlock] */

undefined8 FUN_10af79dc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af79dcc; end: 10af79dd3; -[SCSnapTokenAccessTokenFetchOperation setSuccessBlock:] */

void FUN_10af79dcc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10af79dd4; end: 10af79ddb; -[SCSnapTokenAccessTokenFetchOperation failureBlock] */

undefined8 FUN_10af79dd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10af79ddc; end: 10af79de3; -[SCSnapTokenAccessTokenFetchOperation setFailureBlock:] */

void FUN_10af79ddc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10af79de4; end: 10af79e87; -[SCSnapTokenStorageLatencyOperation initWithLogger:name:] */

undefined1 *
FUN_10af79de4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112702f70;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af79e88; end: 10af79eab; -[SCSnapTokenStorageLatencyOperation begin] */

void FUN_10af79e88(undefined8 param_1,long param_2)

{
  func_0x000107c31804();
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 10af79eac; end: 10af79eeb; -[SCSnapTokenStorageLatencyOperation end] */

void FUN_10af79eac(double param_1,long param_2)

{
  func_0x000107c31804();
  if (0.0 < param_1 - *(double *)(param_2 + 0x18)) {
                    /* WARNING: Could not recover jumptable at 0x00010c0aff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_2 + 8),PTR_s_logSnapTokenStorageLatency_forMe_1126099d8,
               *(undefined8 *)(param_2 + 0x10));
    return;
  }
  return;
}



/* Entry: 10af79eec; end: 10af79f1b; -[SCSnapTokenStorageLatencyOperation .cxx_destruct] */

void FUN_10af79eec(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af79f1c; end: 10af79f8f; -[SCSnapTokenLatencyInstrumentor initWithLogger:] */

undefined1 * FUN_10af79f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702f78;
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



/* Entry: 10af79f90; end: 10af79f97; -[SCSnapTokenLatencyInstrumentor beginStorageLatencyOperationWithName:] */

undefined8 FUN_10af79f90(void)

{
  return 0;
}



/* Entry: 10af79f98; end: 10af79fa3; -[SCSnapTokenLatencyInstrumentor .cxx_destruct] */

void FUN_10af79f98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af79fa4; end: 10af7a09f;  */

void FUN_10af79fa4(undefined8 param_1,ulong *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x3f800000;
  puVar3 = param_2;
  if ((*param_2 & 1) != 0) {
    puVar3 = (ulong *)(*param_2 + 7);
  }
  if ((int)param_2[1] != 0) {
    lVar2 = (long)(int)param_2[1] << 3;
    do {
      uVar1 = *puVar3;
      FUN_10af7a0a0(*(ulong *)(uVar1 + 0x18) & 0xfffffffffffffffc,
                    *(ulong *)(uVar1 + 0x10) & 0xfffffffffffffffc,*(undefined8 *)(uVar1 + 0x20),
                    *(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 0x18),param_6,
                    &uStack_70,param_5);
      lVar2 = lVar2 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar2 != 0);
  }
  FUN_10af7ac58(param_1,&uStack_70);
  func_0x00010af7abe4(&uStack_70);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 10af7a0a0; end: 10af7a373;  */

void FUN_10af7a0a0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined ***pppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined1 auStack_138 [88];
  undefined8 auStack_e0 [2];
  char cStack_c9;
  undefined **ppuStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined4 uStack_78;
  undefined *apuStack_70 [2];
  
  _objc_retain(param_6);
  _objc_retain(param_8);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bd360;
  func_0x00010beecde0();
  apuStack_70[0] = puVar3;
  if (puVar3 != (undefined *)0xc) {
    puVar4 = puVar3;
    func_0x000107c2bbec();
    ppuStack_c8 = &PTR_FUN_110c9b600;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    puStack_a0 = &DAT_11383d918;
    puStack_98 = &DAT_11383d918;
    puStack_90 = (undefined *)0x0;
    puStack_88 = (undefined *)0x0;
    puStack_80 = (undefined *)0x0;
    uStack_78 = 0;
    func_0x000107c30248(&puStack_a0,param_2,0);
    func_0x000107c2bbe8(auStack_e0,param_8);
    uVar5 = uStack_c0;
    if ((uStack_c0 & 1) != 0) {
      uVar5 = *(ulong *)(uStack_c0 & 0xfffffffffffffffe);
    }
    func_0x000107c3024c(&puStack_98,auStack_e0,uVar5);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
    puStack_80 = puVar4;
    if (param_3 != 0) {
      puVar6 = puVar4 + (param_3 - param_5);
      if ((long)puVar6 <= (long)puVar4) {
        func_0x00010c0a0300(param_6);
        puVar6 = (undefined *)(long)((double)(long)puVar4 + (double)(param_3 - param_4) * 0.8);
      }
      puStack_90 = puVar4 + (param_3 - param_4);
      puStack_88 = puVar6;
    }
    puVar4 = PTR_PTR_1126bd360;
    if (puVar3 == (undefined *)0xb) {
      func_0x000107c2bc10(auStack_138,0,&ppuStack_c8);
      func_0x00010bf9af60(puVar4);
      func_0x000107c2bc14(auStack_138);
    }
    else {
      func_0x000107c303b4(&uStack_b8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
      FUN_10af7a95c(param_7,puVar3,apuStack_70);
      pppuVar1 = (undefined ***)(param_7 + 0x18);
      if (&ppuStack_c8 != pppuVar1) {
        func_0x000107c2bc18(pppuVar1);
        FUN_10af824ec(pppuVar1,&ppuStack_c8);
      }
    }
    func_0x000107c2bc14(&ppuStack_c8);
  }
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release(param_6);
  return;
}



/* Entry: 10af7a374; end: 10af7a633;  */

void FUN_10af7a374(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 extraout_x8;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 auStack_190 [2];
  char cStack_179;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_100 = 0x3f800000;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  _objc_retain(param_2);
  puVar7 = &uStack_160;
  lVar1 = param_2;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar9 = *plStack_150;
    do {
      lVar8 = 0;
      do {
        if (*plStack_150 != lVar9) {
          _objc_enumerationMutation(param_2);
        }
        uVar10 = *(undefined8 *)(lStack_158 + lVar8 * 8);
        uVar2 = uVar10;
        func_0x00010c150520(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x000107c2bbe8(auStack_178);
        uVar3 = uVar10;
        func_0x00010beecce0(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x000107c2bbe8(auStack_190);
        func_0x00010bf9cb60(uVar10);
        uVar4 = param_4;
        func_0x00010bf8bee0(param_4);
        uVar5 = param_4;
        func_0x00010bf8bf00(param_4);
        FUN_10af7a0a0(auStack_178,auStack_190,uVar10,uVar4,uVar5,param_6,&uStack_120,param_5);
        if (cStack_179 < '\0') {
          __ZdlPv(auStack_190[0]);
        }
        _objc_release(uVar3);
        if (cStack_161 < '\0') {
          __ZdlPv(auStack_178[0]);
        }
        _objc_release(uVar2);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      puVar7 = &uStack_160;
      lVar1 = param_2;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_2);
  puVar6 = &uStack_120;
  FUN_10af7ac58(param_1,puVar6);
  func_0x00010af7abe4(&uStack_120);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  lVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010af7abe4(&uStack_120);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  __Unwind_Resume();
  _objc_retain(puVar7);
  _objc_retain(puVar6);
  FUN_10af79fa4(extraout_x8,lVar1 + 0x18);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 10af7a634; end: 10af7a6cb;  */

void FUN_10af7a634(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  FUN_10af79fa4(param_1,param_2 + 0x18);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af7a6cc; end: 10af7a7c7;  */

void FUN_10af7a6cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010c23f260(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfda780(param_2);
  uVar2 = param_2;
  func_0x00010c1076a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10af7a374(param_1,uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10af7a7c8; end: 10af7a943;  */

void FUN_10af7a7c8(long param_1,long param_2)

{
  undefined ***pppuVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined8 uStack_a0;
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  long lStack_38;
  
  if ((param_2 != 6) && (param_2 != 10)) {
    lVar2 = *(long *)(param_1 + 0x20);
    lStack_38 = param_2;
    func_0x000107c2bbf0(lVar2,&lStack_38);
    if (lVar2 == 0) {
      ppuStack_90 = &PTR_FUN_110c9b600;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      puStack_68 = &DAT_11383d918;
      puStack_60 = &DAT_11383d918;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      if ((undefined ***)(param_1 + 0x28) != &ppuStack_90) {
        func_0x000107c2bc18(&ppuStack_90);
        FUN_10af824ec(&ppuStack_90,(undefined ***)(param_1 + 0x28));
      }
      puVar3 = PTR_PTR_1126bd360;
      func_0x00010c15f460(PTR_PTR_1126bd360);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107c2bbe8(&uStack_a8);
      puVar4 = &uStack_80;
      func_0x000107c303b4();
      if (*(char *)((long)puVar4 + 0x17) < '\0') {
        __ZdlPv(*puVar4);
      }
      puVar4[2] = CONCAT17(uStack_91,uStack_98);
      puVar4[1] = uStack_a0;
      *puVar4 = CONCAT71(uStack_a7,uStack_a8);
      uStack_91 = 0;
      uStack_a8 = 0;
      _objc_release(puVar3);
      lVar2 = *(long *)(param_1 + 0x20);
      FUN_10af7a95c(lVar2,lStack_38,&lStack_38);
      pppuVar1 = (undefined ***)(lVar2 + 0x18);
      if (&ppuStack_90 != pppuVar1) {
        func_0x000107c2bc18(pppuVar1);
        FUN_10af824ec(pppuVar1,&ppuStack_90);
      }
      func_0x000107c2bc14(&ppuStack_90);
    }
  }
  return;
}



/* Entry: 10af7a944; end: 10af7a95b;  */

undefined8 * FUN_10af7a944(long param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = &PTR_FUN_110c9b600;
  if ((*(ulong *)(param_2 + 0x30) & 1) != 0) {
    func_0x000107c30374((undefined8 *)(param_1 + 0x30),
                        (*(ulong *)(param_2 + 0x30) & 0xfffffffffffffffe) + 8);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_2 + 0x40) != 0) {
    func_0x000100361cfc((undefined8 *)(param_1 + 0x38),param_2 + 0x38);
  }
  puVar2 = (ulong *)(param_2 + 0x50);
  puVar1 = (ulong *)*puVar2;
  if ((*puVar2 & 3) != 0) {
    func_0x0001002a0e78(puVar2,0);
    puVar1 = puVar2;
  }
  *(ulong **)(param_1 + 0x50) = puVar1;
  puVar2 = (ulong *)(param_2 + 0x58);
  puVar1 = (ulong *)*puVar2;
  if ((*puVar2 & 3) != 0) {
    func_0x0001002a0e78(puVar2,0);
    puVar1 = puVar2;
  }
  *(ulong **)(param_1 + 0x58) = puVar1;
  *(undefined4 *)(param_1 + 0x78) = 0;
  uVar4 = *(undefined8 *)(param_2 + 0x68);
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  return (undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af7a95c; end: 10af7ab9b;  */

long * FUN_10af7a95c(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong unaff_x24;
  
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar3 = uVar8 - 1;
    if ((uVar8 & uVar3) == 0) {
      unaff_x24 = uVar3 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar8 <= param_2) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = param_2 / uVar8;
        }
        unaff_x24 = param_2 - uVar6 * uVar8;
      }
    }
    plVar5 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        uVar6 = plVar5[1];
        if (uVar6 == param_2) {
          if (plVar5[2] == param_2) {
            return plVar5;
          }
        }
        else {
          if ((uVar8 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar8 <= uVar6) {
            uVar1 = 0;
            if (uVar8 != 0) {
              uVar1 = uVar6 / uVar8;
            }
            uVar6 = uVar6 - uVar1 * uVar8;
          }
          if (uVar6 != unaff_x24) break;
        }
      }
    }
  }
  plVar5 = param_1 + 2;
  plVar2 = (long *)0x70;
  __Znwm();
  *plVar2 = 0;
  plVar2[1] = param_2;
  lVar4 = *param_3;
  plVar2[4] = 0;
  plVar2[5] = 0;
  plVar2[2] = lVar4;
  plVar2[3] = (long)&PTR_FUN_110c9b600;
  plVar2[6] = 0;
  plVar2[7] = 0;
  plVar2[8] = (long)&DAT_11383d918;
  plVar2[9] = (long)&DAT_11383d918;
  plVar2[0xb] = 0;
  plVar2[0xc] = 0;
  plVar2[10] = 0;
  *(undefined4 *)(plVar2 + 0xd) = 0;
  if ((uVar8 == 0) || (*(float *)(param_1 + 4) * (float)uVar8 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar8) {
      uVar3 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar3 = uVar3 | uVar8 << 1;
    uVar8 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar8) {
      uVar3 = uVar8;
    }
    func_0x000107c2bbf4(param_1,uVar3);
    uVar8 = param_1[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x24 = uVar8 - 1 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar8 <= param_2) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = param_2 / uVar8;
        }
        unaff_x24 = param_2 - uVar3 * uVar8;
      }
    }
  }
  lVar4 = *param_1;
  plVar7 = *(long **)(lVar4 + unaff_x24 * 8);
  if (plVar7 == (long *)0x0) {
    *plVar2 = *plVar5;
    *plVar5 = (long)plVar2;
    *(long **)(lVar4 + unaff_x24 * 8) = plVar5;
    if (*plVar2 != 0) {
      uVar3 = *(ulong *)(*plVar2 + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar3 = uVar3 & uVar8 - 1;
      }
      else if (uVar8 <= uVar3) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar3 / uVar8;
        }
        uVar3 = uVar3 - uVar6 * uVar8;
      }
      *(long **)(lVar4 + uVar3 * 8) = plVar2;
    }
  }
  else {
    *plVar2 = *plVar7;
    *plVar7 = (long)plVar2;
  }
  param_1[3] = param_1[3] + 1;
  return plVar2;
}



/* Entry: 10af7ab9c; end: 10af7ac57;  */

void FUN_10af7ab9c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000107c2bc14(lVar1 + 0x18);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10af7ac58; end: 10af7accb;  */

undefined8 * FUN_10af7ac58(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  func_0x000107c2bbf4(param_1,*(undefined8 *)(param_2 + 8));
  for (plVar1 = *(long **)(param_2 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_10af7accc(param_1,plVar1 + 2,plVar1 + 2);
  }
  return param_1;
}



/* Entry: 10af7accc; end: 10af7aef7;  */

void FUN_10af7accc(long *param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x23;
  
  uVar9 = *param_2;
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar3 = uVar8 - 1;
    if ((uVar8 & uVar3) == 0) {
      unaff_x23 = uVar3 & uVar9;
    }
    else {
      unaff_x23 = uVar9;
      if (uVar8 <= uVar9) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar9 / uVar8;
        }
        unaff_x23 = uVar9 - uVar6 * uVar8;
      }
    }
    plVar5 = *(long **)(*param_1 + unaff_x23 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        uVar6 = plVar5[1];
        if (uVar6 == uVar9) {
          if (plVar5[2] == uVar9) {
            return;
          }
        }
        else {
          if ((uVar8 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar8 <= uVar6) {
            uVar1 = 0;
            if (uVar8 != 0) {
              uVar1 = uVar6 / uVar8;
            }
            uVar6 = uVar6 - uVar1 * uVar8;
          }
          if (uVar6 != unaff_x23) break;
        }
      }
    }
  }
  plVar5 = param_1 + 2;
  plVar2 = (long *)0x70;
  __Znwm();
  *plVar2 = 0;
  plVar2[1] = uVar9;
  plVar2[2] = *param_3;
  func_0x000107c2bc10(plVar2 + 3,0,param_3 + 1);
  if ((uVar8 == 0) || (*(float *)(param_1 + 4) * (float)uVar8 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar8) {
      uVar3 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar3 = uVar3 | uVar8 << 1;
    uVar8 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar8) {
      uVar3 = uVar8;
    }
    func_0x000107c2bbf4(param_1,uVar3);
    uVar8 = param_1[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x23 = uVar8 - 1 & uVar9;
    }
    else {
      unaff_x23 = uVar9;
      if (uVar8 <= uVar9) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar9 / uVar8;
        }
        unaff_x23 = uVar9 - uVar3 * uVar8;
      }
    }
  }
  lVar4 = *param_1;
  plVar7 = *(long **)(lVar4 + unaff_x23 * 8);
  if (plVar7 == (long *)0x0) {
    *plVar2 = *plVar5;
    *plVar5 = (long)plVar2;
    *(long **)(lVar4 + unaff_x23 * 8) = plVar5;
    if (*plVar2 != 0) {
      uVar9 = *(ulong *)(*plVar2 + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar9 = uVar9 & uVar8 - 1;
      }
      else if (uVar8 <= uVar9) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar9 / uVar8;
        }
        uVar9 = uVar9 - uVar3 * uVar8;
      }
      *(long **)(lVar4 + uVar9 * 8) = plVar2;
    }
  }
  else {
    *plVar2 = *plVar7;
    *plVar7 = (long)plVar2;
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10af7aef8; end: 10af7af27; -[SCSnapTokenManager initWithRequestsProvider:circumstanceEngine:logger:userId:snapTokenStorageBackedUp:source:] */

void FUN_10af7aef8(void)

{
  func_0x00010c03f640();
  return;
}



/* Entry: 10af7af28; end: 10af7af3f; -[SCSnapTokenManager initWithRequestsProvider:logger:userId:snapTokenStorageBackedUp:source:] */

void FUN_10af7af28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
                    /* WARNING: Could not recover jumptable at 0x00010c03f670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithRequestsProvider_circums_1125ed798,param_3,0,param_4,param_5,
             param_6,param_7);
  return;
}



/* Entry: 10af7af40; end: 10af7af67; -[SCSnapTokenManager snapTokenStore] */

void FUN_10af7af40(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af7af68; end: 10af7b0ab; -[SCSnapTokenManager fetchAccessTokenForAccessType:successQueue:failureQueue:successBlock:failureBlock:] */

void FUN_10af7af68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = &UNK_10f6ed7f7;
  func_0x000107c31820(&UNK_10f6ed7f7);
  puVar2 = PTR_PTR_1126ded28;
  _objc_alloc(PTR_PTR_1126ded28);
  func_0x00010bfefd00();
  func_0x00010bebf500(param_1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x000107c31828(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10af7b0ac; end: 10af7b0db;  */

void FUN_10af7b0ac(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010af7b0b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,1);
  return;
}



/* Entry: 10af7b0dc; end: 10af7b313; -[SCSnapTokenManager invalidate] */

void FUN_10af7b0dc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  puVar1 = &UNK_10f6ed886;
  func_0x000107c31818();
  puStack_38 = puVar1;
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f7fc0();
  }
  else {
    lVar2 = param_1;
    func_0x00010be37980();
    if ((int)lVar2 == 0) {
      func_0x00010c0f98a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f7fc0();
    }
    else {
      lVar3 = *(long *)(param_1 + 0x20);
      func_0x00010bf18ac0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c273260(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010c2923e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd14e0(lVar2);
      _objc_release(lVar4);
      _objc_release(lVar2);
      func_0x00010bf940a0(lVar3);
      func_0x00010c0f98a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f7fc0();
      _objc_release(param_1);
      param_1 = lVar3;
    }
  }
  _objc_release(param_1);
  __Block_object_dispose(&uStack_50,8);
  return;
}



/* Entry: 10af7b314; end: 10af7b3ab;  */

void FUN_10af7b314(long param_1)

{
  func_0x000107c3181c(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010c1ae810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setInvalidated__112649428,1);
  return;
}



/* Entry: 10af7b3ac; end: 10af7b5cb; -[SCSnapTokenManager getRefreshTokenWithCompletionBlock:] */

void FUN_10af7b3ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf18ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  lVar2 = param_1;
  func_0x00010be77900();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c273260(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2923e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(uVar1);
  _objc_retain(lVar2);
  _objc_retain(param_3);
  func_0x00010bfc9780(lVar3);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10af7b5cc; end: 10af7b64b;  */

void FUN_10af7b5cc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf940a0(*(undefined8 *)(param_1 + 0x20));
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10af7b64c; end: 10af7b7af; +[SCSnapTokenManager _createNSErrorWithCode:errorReason:origError:] */

void FUN_10af7b64c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c1d0640();
  puVar2 = PTR_PTR_1126decd8;
  func_0x00010bdc2480(PTR_PTR_1126decd8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,*(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568)
  ;
  _objc_release(puVar2);
  if (param_5 != 0) {
    func_0x00010c1d0640(puVar1,param_2,param_5,*(undefined8 *)PTR__NSUnderlyingErrorKey_110345660);
  }
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar3 = PTR_PTR_1126ded30;
  func_0x00010bf87dc0(PTR_PTR_1126ded30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240(puVar2,param_2,puVar3,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af7b7b0; end: 10af7b87f; -[SCSnapTokenManager _handleInvalidate] */

void FUN_10af7b7b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf18ac0(uVar1,param_2,&PTR____CFConstantStringClassReference_110f3dff8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c273260(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c2923e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd14e0(lVar2,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010bf940a0(uVar1);
  func_0x00010c1ae800(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af7b880; end: 10af7b933;  */

void FUN_10af7b880(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_90 [88];
  char cStack_38;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf940a0(*(undefined8 *)(param_1 + 0x20));
    func_0x000107c2bc00(auStack_90,param_2);
    func_0x00010be0f0e0(lVar1);
    if (cStack_38 == '\x01') {
      func_0x000107c2bc14(auStack_90);
    }
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10af7b934; end: 10af7b937;  */

void FUN_10af7b934(void)

{
  return;
}



/* Entry: 10af7b938; end: 10af7bd4b; -[SCSnapTokenManager _getRefreshTokenToExchangeForOp:] */

void FUN_10af7b938(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  puVar2 = &UNK_10f6edab0;
  func_0x000107c31818();
  puVar3 = puVar2;
  _dispatch_group_create();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf18ac0();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_10af7bd4c;
  uStack_88 = 0x10af7bd5c;
  uStack_80 = 0;
  _dispatch_group_enter(puVar3);
  lVar5 = param_1;
  func_0x00010c273260(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c2923e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_10af7bd64;
  puStack_c0 = &UNK_110c9b070;
  puStack_b0 = &uStack_a8;
  _objc_retain(puVar3);
  puStack_b8 = puVar3;
  func_0x00010bfc9780(lVar5);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x2020000000;
  uStack_e0 = 0;
  _dispatch_group_enter(puVar3);
  lVar5 = param_1;
  func_0x00010c273260(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c2923e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_128 = puVar1;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_10af7bdc0;
  puStack_110 = &UNK_110c9b070;
  puStack_100 = &uStack_f8;
  _objc_retain(puVar3);
  puStack_108 = puVar3;
  func_0x00010bfc3c00(lVar5);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_initWeak(auStack_130,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_180 = puVar1;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_10af7be24;
  puStack_168 = &UNK_110c9b0a0;
  _objc_copyWeak(auStack_140,auStack_130);
  puStack_150 = &uStack_a8;
  puStack_148 = &uStack_f8;
  uStack_160 = uVar4;
  uStack_158 = param_3;
  puStack_138 = puVar2;
  _objc_retain(param_3);
  _objc_retain(uVar4);
  func_0x000107c27d98(puVar3,lVar5,&puStack_180);
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(uStack_158);
  _objc_release(uStack_160);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_130);
  _objc_release(puStack_108);
  __Block_object_dispose(&uStack_f8,8);
  _objc_release(puStack_b8);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(puVar3);
  return;
}



/* Entry: 10af7bd4c; end: 10af7bd63;  */

void FUN_10af7bd4c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10af7bd64; end: 10af7bdbf;  */

void FUN_10af7bd64(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10af7bdc0; end: 10af7be23;  */

void FUN_10af7bdc0(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fa60();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = lVar1 == 0;
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10af7be24; end: 10af7be97;  */

void FUN_10af7be24(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf940a0(*(undefined8 *)(param_1 + 0x20));
    func_0x000107c3181c(*(undefined8 *)(param_1 + 0x48));
    func_0x00010be88b20(lVar1,param_2,*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28),
                        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10af7be98; end: 10af7bf37;  */

void FUN_10af7be98(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x40,param_2 + 0x40);
  return;
}



/* Entry: 10af7bf38; end: 10af7bfcf; -[SCSnapTokenManager _refreshTokenFetchDoneForOp:refreshToken:needsCloud1TLToken:] */

void FUN_10af7bf38(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010be2c520(param_1,param_2,param_3);
  }
  else {
    func_0x00010be62a20(param_1,param_2,param_3,param_4,param_5);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af7bfd0; end: 10af7c06f; -[SCSnapTokenManager _handleMissingRefreshTokenForOp:] */

void FUN_10af7bfd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  func_0x00010bdcf640(param_1);
  puVar1 = PTR_PTR_1126b65d0;
  func_0x00010bdf0560(PTR_PTR_1126b65d0,param_2,0,&PTR____CFConstantStringClassReference_110f3e0f8,0
                     );
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3e00(param_1,param_2,param_3,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af7c070; end: 10af7c2e7; -[SCSnapTokenManager _networkFetchAccessTokenForOp:refreshToken:needsCloud1TLToken:] */

void FUN_10af7c070(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c0f7260();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0f7260(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(lVar1);
  uVar3 = param_3;
  func_0x00010c0ccd80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a3620();
  _objc_release(uVar3);
  if (lVar2 == 0) {
    func_0x00010c0a02e0(*(undefined8 *)(param_1 + 8));
    _objc_initWeak(auStack_68,param_1);
    lVar1 = param_1;
    func_0x00010c0d7f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bd360;
    func_0x00010c113e00(PTR_PTR_1126bd360);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10af7c2e8;
    puStack_78 = &UNK_110c9b0d0;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_copyWeak(auStack_98,auStack_68);
    func_0x00010bfa4980(lVar1);
    _objc_release(param_1);
    _objc_release(puVar4);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10af7c2e8; end: 10af7c337;  */

void FUN_10af7c2e8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be25020(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10af7c338; end: 10af7c3f3;  */

void FUN_10af7c338(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126b65d0;
    func_0x00010bdf0560(PTR_PTR_1126b65d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be25000(param_1);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af7c3f4; end: 10af7c873; -[SCSnapTokenManager _handleAccessTokenNetworkFetchSuccessForResponse:] */

void FUN_10af7c3f4(undefined **param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined **ppuVar6;
  undefined *unaff_x20;
  undefined *puVar7;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **ppuVar8;
  undefined8 uVar9;
  long unaff_x27;
  undefined **unaff_x28;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_250;
  undefined1 auStack_248 [128];
  long lStack_1c8;
  undefined **ppuStack_1c0;
  long lStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined *puStack_190;
  undefined **ppuStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *apuStack_118 [21];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = param_1;
  func_0x00010c06a280();
  if ((int)ppuVar6 == 0) {
    ppuVar6 = param_1;
    func_0x00010c2923e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    FUN_10af7a634(apuStack_118,param_3,ppuVar6,param_1[1]);
    _objc_release(ppuVar6);
    puVar4 = param_1[4];
    func_0x00010bf18ac0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    unaff_x20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_170 = puVar4;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = unaff_x20;
    func_0x00010c08fa60();
    if (puVar4 != (undefined *)0x0) {
      ppuVar1 = param_1;
      func_0x00010c273260(param_1);
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = param_1;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17d760(ppuVar1);
      _objc_release(puVar4);
      _objc_release(unaff_x24);
      _objc_release(ppuVar1);
      func_0x00010bf3e180(param_1[2]);
    }
    ppuVar1 = param_1;
    func_0x00010c273260(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = param_1;
    func_0x00010c2923e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160e60(ppuVar1);
    _objc_release(ppuVar2);
    _objc_release(ppuVar1);
    func_0x00010bf940a0(puStack_170);
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    lStack_158 = 0;
    puStack_160 = (undefined *)0x0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    ppuVar2 = param_1;
    func_0x00010c0f7260();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &puStack_160;
    ppuVar8 = ppuVar2;
    func_0x00010bf52a60();
    if (ppuVar8 != (undefined **)0x0) {
      unaff_x27 = *plStack_150;
      unaff_x28 = &PTR_PTR_1126b6000;
      unaff_x24 = &PTR____CFConstantStringClassReference_110f3e178;
      do {
        ppuVar6 = (undefined **)0x0;
        do {
          if (*plStack_150 != unaff_x27) {
            _objc_enumerationMutation(ppuVar2);
          }
          uVar9 = *(undefined8 *)(lStack_158 + (long)ppuVar6 * 8);
          func_0x00010beecdc0();
          ppuVar1 = apuStack_118;
          uStack_168 = uVar9;
          FUN_10af7d470(ppuVar1,&uStack_168);
          if (ppuVar1 == (undefined **)0x0) {
            puVar4 = PTR_PTR_1126b65d0;
            func_0x00010bdf0560(PTR_PTR_1126b65d0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bdc3e00(param_1);
            _objc_release(puVar4);
          }
          else {
            func_0x00010bdc3e20(param_1);
          }
          ppuVar6 = (undefined **)((long)ppuVar6 + 1);
        } while (ppuVar8 != ppuVar6);
        ppuVar1 = &puStack_160;
        ppuVar8 = ppuVar2;
        func_0x00010bf52a60();
      } while (ppuVar8 != (undefined **)0x0);
    }
    unaff_x23 = (undefined **)0x0;
    _objc_release(ppuVar2);
    func_0x00010c0f7260();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12adc0();
    _objc_release(param_1);
    _objc_release(unaff_x20);
    _objc_release(puStack_170);
    ppuVar2 = apuStack_118;
    func_0x00010af7abe4();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
  }
  else {
    func_0x00010c0afe00(param_1[1]);
    ppuVar8 = (undefined **)PTR_PTR_1126b65d0;
    func_0x00010bdf0560();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar8;
    func_0x00010be25000();
    ppuVar2 = param_1;
    ppuVar6 = ppuVar8;
    param_1 = param_3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto code_r0x00010bdbf3e4;
  }
  ___stack_chk_fail();
  _objc_release(param_1);
  _objc_release(unaff_x24);
  _objc_release(unaff_x23);
  _objc_release(unaff_x20);
  _objc_release(puStack_170);
  func_0x00010af7abe4(apuStack_118);
  ppuVar3 = ppuVar2;
  __Unwind_Resume();
  ppuVar8 = &puStack_2b0;
  pcStack_178 = FUN_10af7c874;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1c0 = unaff_x28;
  lStack_1b8 = unaff_x27;
  ppuStack_1b0 = unaff_x24;
  ppuStack_1a8 = unaff_x23;
  ppuStack_1a0 = param_1;
  ppuStack_198 = ppuVar2;
  puStack_190 = unaff_x20;
  ppuStack_188 = ppuVar6;
  puStack_180 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar1);
  ppuVar6 = ppuVar1;
  func_0x00010bf3ec40();
  if ((ppuVar6 == (undefined **)0x1) && (*(char *)(ppuVar3 + 6) == '\x01')) {
    puVar4 = ppuVar3[4];
    func_0x00010bf18ac0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar3;
    func_0x00010c273260(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_250 = 0x3f800000;
    unaff_x23 = ppuVar3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2056a0(ppuVar6);
    _objc_release(unaff_x23);
    func_0x00010af7abe4(&uStack_270);
    _objc_release(ppuVar6);
    func_0x00010bf940a0(puVar4);
    _objc_release(puVar4);
  }
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_2a8 = 0;
  puStack_2b0 = (undefined *)0x0;
  uStack_298 = 0;
  puStack_2a0 = (undefined8 *)0x0;
  ppuVar6 = ppuVar3;
  func_0x00010c0f7260();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = auStack_248;
  ppuVar2 = ppuVar6;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    unaff_x23 = (undefined **)*puStack_2a0;
    do {
      ppuVar8 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_2a0 != unaff_x23) {
          _objc_enumerationMutation(ppuVar6);
        }
        func_0x00010bdc3e00(ppuVar3);
        ppuVar8 = (undefined **)((long)ppuVar8 + 1);
      } while (ppuVar2 != ppuVar8);
      puVar5 = auStack_248;
      ppuVar2 = ppuVar6;
      ppuVar8 = &puStack_2b0;
      func_0x00010bf52a60();
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(ppuVar6);
  func_0x00010c0f7260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(ppuVar3);
  ppuVar6 = ppuVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x23);
  func_0x00010af7abe4(&uStack_270);
  _objc_release(0);
  _objc_release(ppuVar3);
  _objc_release(ppuVar1);
  __Unwind_Resume();
  _objc_retain(ppuVar8);
  _objc_retain(puVar5);
  puVar4 = PTR_PTR_1126bd360;
  func_0x00010beecdc0(ppuVar8);
  func_0x00010c22d480(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = ppuVar6[1];
  func_0x00010bf3ec40(puVar5);
  ppuVar6 = ppuVar8;
  func_0x00010c0ccd80(ppuVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a0320(puVar7);
  _objc_release(ppuVar6);
  func_0x00010c15bca0(ppuVar8);
  _objc_release(puVar4);
  _objc_release(puVar5);
code_r0x00010bdbf3e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar8);
  return;
}



/* Entry: 10af7c874; end: 10af7cadf; -[SCSnapTokenManager _handleAccessTokenNetworkFetchForError:] */

void FUN_10af7c874(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long unaff_x23;
  long lVar9;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar7 = &uStack_140;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf3ec40();
  if ((lVar1 == 1) && (*(char *)(param_1 + 0x30) == '\x01')) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf18ac0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f3e198);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c273260(param_1);
    _objc_retainAutoreleasedReturnValue();
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_e0 = 0x3f800000;
    unaff_x23 = param_1;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2056a0(lVar1,param_2,0,&uStack_100,unaff_x23);
    _objc_release(unaff_x23);
    func_0x00010af7abe4(&uStack_100);
    _objc_release(lVar1);
    func_0x00010bf940a0(uVar2);
    _objc_release(uVar2);
  }
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  lVar1 = param_1;
  func_0x00010c0f7260();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = auStack_d8;
  lVar3 = lVar1;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    unaff_x23 = *plStack_130;
    do {
      lVar9 = 0;
      do {
        if (*plStack_130 != unaff_x23) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010bdc3e00(param_1,param_2,*(undefined8 *)(lStack_138 + lVar9 * 8),param_3);
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      puVar8 = auStack_d8;
      lVar3 = lVar1;
      puVar7 = &uStack_140;
      func_0x00010bf52a60(lVar1,param_2,&uStack_140,puVar8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar1);
  func_0x00010c0f7260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(param_1);
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x23);
  func_0x00010af7abe4(&uStack_100);
  _objc_release(0);
  _objc_release(param_1);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  puVar5 = PTR_PTR_1126bd360;
  puVar4 = (undefined1 *)puVar7;
  func_0x00010beecdc0(puVar7);
  func_0x00010c22d480(puVar5,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar1 + 8);
  puVar4 = puVar8;
  func_0x00010bf3ec40(puVar8);
  puVar6 = (undefined1 *)puVar7;
  func_0x00010c0ccd80(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a0320(uVar2,param_2,puVar4,puVar6);
  _objc_release(puVar6);
  func_0x00010c15bca0(puVar7,param_2,puVar8);
  _objc_release(puVar5);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 10af7cae0; end: 10af7cbe3; -[SCSnapTokenManager _accessTokenDoneWithErrorForOp:error:] */

void FUN_10af7cae0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126bd360;
  uVar1 = param_3;
  func_0x00010beecdc0(param_3);
  func_0x00010c22d480(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar1 = param_4;
  func_0x00010bf3ec40(param_4);
  uVar3 = param_3;
  func_0x00010c0ccd80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a0320(uVar4,param_2,uVar1,uVar3);
  _objc_release(uVar3);
  func_0x00010c15bca0(param_3,param_2,param_4);
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af7cbe4; end: 10af7cc6f; -[SCSnapTokenManager _assertMissingRefreshToken] */

long FUN_10af7cbe4(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1f440();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 10af7cc70; end: 10af7ccfb; -[SCSnapTokenManager _immediateSnaptokenStorageCleanupOnLogout] */

long FUN_10af7cc70(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1f440();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 10af7ccfc; end: 10af7ce63; -[SCSnapTokenManager cleanOldTokensOnLogin] */

void FUN_10af7ccfc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  puVar1 = &UNK_10f6edd25;
  func_0x000107c31820(&UNK_10f6edd25);
  lVar2 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf18ac0(uVar4,param_2,&PTR____CFConstantStringClassReference_110f3e198);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c273260(param_1);
    _objc_retainAutoreleasedReturnValue();
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_40 = 0x3f800000;
    func_0x00010c2923e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2056a0(lVar2,param_2,0,&uStack_60,param_1);
    _objc_release(param_1);
    func_0x00010af7abe4(&uStack_60);
    _objc_release(lVar2);
    func_0x00010bf940a0(uVar4);
    _objc_release(uVar4);
  }
  func_0x000107c31828(puVar1);
  return;
}



/* Entry: 10af7ce64; end: 10af7cfab; -[SCSnapTokenManager clearAccessTokens] */

bool FUN_10af7ce64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = &UNK_10f6edd3b;
  func_0x000107c31820(&UNK_10f6edd3b);
  lVar2 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf18ac0(uVar4,param_2,&PTR____CFConstantStringClassReference_110f3e1f8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c273260(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2923e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3a720(lVar2,param_2,param_1);
    _objc_release(param_1);
    _objc_release(lVar2);
    func_0x00010bf940a0(uVar4);
    _objc_release(uVar4);
  }
  func_0x000107c31828(puVar1);
  return lVar3 != 0;
}



/* Entry: 10af7cfac; end: 10af7d0f3; -[SCSnapTokenManager clearInMemoryAccessTokens] */

bool FUN_10af7cfac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = &UNK_10f6edd56;
  func_0x000107c31820(&UNK_10f6edd56);
  lVar2 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf18ac0(uVar4,param_2,&PTR____CFConstantStringClassReference_110f3e218);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c273260(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2923e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3a860(lVar2,param_2,param_1);
    _objc_release(param_1);
    _objc_release(lVar2);
    func_0x00010bf940a0(uVar4);
    _objc_release(uVar4);
  }
  func_0x000107c31828(puVar1);
  return lVar3 != 0;
}



/* Entry: 10af7d0f4; end: 10af7d3bf; -[SCSnapTokenManager invalidateApiGwAccessToken] */

bool FUN_10af7d0f4(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_110 [88];
  char cStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar2 = &UNK_10f6edd7c;
  func_0x000107c31820(&UNK_10f6edd7c);
  lVar7 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010c08fa60();
  _objc_release(lVar7);
  bVar1 = false;
  if (lVar3 == 0) goto LAB_10af7d2d4;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf18ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c273260();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c2923e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfc1e80(&uStack_b0,lVar7);
  }
  _objc_release(lVar3);
  _objc_release(lVar7);
  uVar5 = uVar4;
  func_0x00010bf940a0();
  if ((char)uStack_58 == '\x01') {
    lVar7 = (long)*(char *)((uStack_88 & 0xfffffffffffffffc) + 0x17);
    if (lVar7 < 0) {
      lVar7 = *(long *)((uStack_88 & 0xfffffffffffffffc) + 8);
    }
    bVar1 = lVar7 != 0;
    if (lVar7 != 0) {
      func_0x000107c2bbec();
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      uStack_78 = uVar5;
      func_0x00010bf18ac0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1;
      func_0x00010c273260(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2923e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107c2bc00(auStack_110,&uStack_b0);
      func_0x00010c160e20(lVar7);
      if (cStack_b8 == '\x01') {
        func_0x000107c2bc14(auStack_110);
      }
      _objc_release(param_1);
      _objc_release(lVar7);
      func_0x00010bf940a0(uVar6);
      _objc_release(uVar6);
      if ((char)uStack_58 != '\x01') {
        bVar1 = true;
        goto LAB_10af7d2cc;
      }
    }
    func_0x000107c2bc14(&uStack_b0);
  }
  else {
    bVar1 = false;
  }
LAB_10af7d2cc:
  _objc_release(uVar4);
LAB_10af7d2d4:
  func_0x000107c31828(puVar2);
  return bVar1;
}



/* Entry: 10af7d3c0; end: 10af7d3c7; -[SCSnapTokenManager pendingAccessTokenFetchWaiters] */

undefined8 FUN_10af7d3c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10af7d3c8; end: 10af7d3cf; -[SCSnapTokenManager setInvalidated:] */

void FUN_10af7d3c8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 10af7d3d0; end: 10af7d3d7; -[SCSnapTokenManager networkRequests] */

undefined8 FUN_10af7d3d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10af7d3d8; end: 10af7d46f; -[SCSnapTokenManager .cxx_destruct] */

void FUN_10af7d3d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af7d470; end: 10af7d517;  */

long * FUN_10af7d470(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if ((uVar2 != 0) && (param_1[3] != 0)) {
    uVar3 = *param_2;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar3 & uVar4;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar3 == uVar7) {
          if (plVar6[2] == uVar3) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10af7d518; end: 10af7d703; -[SCSnapTokenNetworkRequests fetchAccessTokensForServerScopeNames:refreshToken:needsCloud1TLToken:op:completionPerformer:successBlock:failureBlock:] */

void FUN_10af7d518(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar1 = param_1;
  func_0x00010beb24c0();
  if ((int)lVar1 == 0) {
    func_0x00010bdd6940(param_1);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_10af7d704;
    puStack_a8 = &UNK_110c9b130;
    lStack_a0 = param_1;
    _objc_retain(param_3);
    uStack_98 = param_3;
    _objc_retain(param_4);
    uStack_90 = param_4;
    uStack_68 = param_5;
    _objc_retain(param_6);
    uStack_88 = param_6;
    _objc_retain(param_7);
    uStack_80 = param_7;
    _objc_retain(param_8);
    uStack_78 = param_8;
    _objc_retain(param_9);
    uStack_70 = param_9;
    func_0x000107c27d8c(uVar2,&puStack_c0);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10af7d704; end: 10af7d73b;  */

void FUN_10af7d704(long param_1,undefined8 param_2)

{
  func_0x00010bdd6940(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  return;
}



/* Entry: 10af7d73c; end: 10af7d79f;  */

void FUN_10af7d73c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),7);
  return;
}



/* Entry: 10af7d7a0; end: 10af7dacb; -[SCSnapTokenNetworkRequests _buildRequestAndSubmitAccessTokenFetchWithServerScopeNames:refreshToken:needsCloud1TLToken:op:completionPerformer:successBlock:failureBlock:] */

void FUN_10af7d7a0(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined *puVar5;
  undefined8 in_stack_00000000;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [120];
  
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  _objc_retain(in_stack_00000000);
  func_0x00010bdd5a00(auStack_e8,param_1);
  puVar1 = auStack_e8;
  FUN_10af812a0(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x00010bf64b80(PTR__OBJC_CLASS___NSMutableData_1126b4958);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  _objc_retainAutorelease();
  func_0x00010c0d3c60();
  puVar3 = auStack_e8;
  FUN_10b4d1758(puVar3,puVar5,puVar1);
  if ((int)puVar3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    _objc_retainAutorelease(puVar2);
    puVar5 = puVar2;
  }
  _objc_release(puVar2);
  _objc_retain(puVar5);
  uVar4 = in_x5;
  func_0x00010c0ccd80(in_x5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cc7a0();
  _objc_release(uVar4);
  _objc_initWeak(auStack_f0,param_1);
  func_0x00010c137400(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_f8,auStack_f0);
  _objc_retain(in_x5);
  _objc_retain(in_x7);
  _objc_retain(in_stack_00000000);
  _objc_retain(in_x5);
  _objc_retain(in_stack_00000000);
  func_0x00010c25f480(param_1);
  _objc_release(param_1);
  _objc_release(in_stack_00000000);
  _objc_release(in_x5);
  _objc_release(in_stack_00000000);
  _objc_release(in_x7);
  _objc_release(in_x5);
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_f0);
  _objc_release(puVar5);
  FUN_10af80a74(auStack_e8);
  _objc_release(in_stack_00000000);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(in_x5);
  return;
}



/* Entry: 10af7dacc; end: 10af7db73;  */

void FUN_10af7dacc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0ccd80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cc1c0();
    _objc_release(uVar2);
    func_0x00010bdc3e60(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10af7db74; end: 10af7dc6b;  */

void FUN_10af7db74(long param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0ccd80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cc1c0();
  _objc_release(uVar1);
  if ((param_2 & 0xfffffffffffffffd) == 0x191) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a8e60(uVar1);
    _objc_release(puVar2);
    uVar1 = 4;
  }
  else {
    uVar1 = 3;
  }
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),uVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af7dc6c; end: 10af7ddbf; -[SCSnapTokenNetworkRequests _accessTokenHttpSuccessWithResponseData:successBlock:failureBlock:] */

void FUN_10af7dc6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined ***pppuVar3;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuStack_98 = &PTR_FUN_110c9b3f0;
  uStack_90 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  puStack_68 = &DAT_11383d918;
  uStack_60 = 0;
  uStack_58 = 0;
  _objc_retain(param_3);
  uVar1 = param_3;
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  uVar2 = param_3;
  func_0x00010c08fa60();
  lStack_48 = (long)(int)uVar2;
  pppuVar3 = &ppuStack_98;
  uStack_50 = uVar1;
  func_0x000107c30348(pppuVar3,&uStack_50);
  _objc_release(param_3);
  if (((ulong)pppuVar3 & 1) == 0) {
    (**(code **)(param_5 + 0x10))(param_5,5,0);
  }
  else {
    func_0x00010bdc3ec0(param_1);
  }
  FUN_10af81874(&ppuStack_98);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10af7ddc0; end: 10af7debb; -[SCSnapTokenNetworkRequests _accessTokenSuccessWithResponse:successBlock:failureBlock:] */

void FUN_10af7ddc0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  iVar1 = *(int *)(param_3 + 0x40);
  if (iVar1 - 2U < 3) {
    uVar2 = 1;
  }
  else if (iVar1 == 1) {
    if (*(int *)(param_3 + 0x20) != 0) {
      FUN_10af81798(auStack_78,0,param_3);
      (**(code **)(param_4 + 0x10))(param_4,auStack_78);
      FUN_10af81874(auStack_78);
      goto LAB_10af7de30;
    }
    uVar2 = 5;
  }
  else {
    uVar2 = 2;
    if (iVar1 != 5) {
      uVar2 = 5;
    }
  }
  (**(code **)(param_5 + 0x10))(param_5,uVar2,0);
LAB_10af7de30:
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10af7debc; end: 10af7e4c7; -[SCSnapTokenNetworkRequests _buildAccessTokenRequestForRefreshToken:serverScopeNames:needsCloud1TLToken:] */

long FUN_10af7debc(undefined8 *param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  int param_6)

{
  ulong *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined7 uStack_f8;
  char cStack_f1;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar12 = param_1 + 2;
  param_1[3] = 0;
  *puVar12 = 0;
  param_1[8] = &DAT_11383d918;
  *param_1 = &PTR_FUN_110c9b300;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  param_1[9] = &DAT_11383d918;
  param_1[10] = &DAT_11383d918;
  param_1[0xc] = &DAT_11383d918;
  param_1[0xb] = &DAT_11383d918;
  param_1[0xd] = &DAT_11383d918;
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  func_0x000107c2bbe8(&uStack_108,param_4);
  uVar8 = param_1[1];
  if ((uVar8 & 1) != 0) {
    uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
  }
  func_0x000107c3024c(param_1 + 8,&uStack_108,uVar8);
  if (cStack_f1 < '\0') {
    __ZdlPv(uStack_108);
  }
  _objc_retain(param_5);
  lVar7 = param_5;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  do {
    if (lVar7 == 0) {
      lVar10 = 0;
      _objc_release(param_5);
      lVar7 = param_2;
      func_0x00010c137400();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar7;
      func_0x00010bf70720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      if (lVar3 != 0) {
        func_0x000107c2bbe8(&uStack_108,lVar3);
        uVar8 = param_1[1];
        if ((uVar8 & 1) != 0) {
          uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
        }
        func_0x000107c3024c(param_1 + 9,&uStack_108,uVar8);
        if (cStack_f1 < '\0') {
          __ZdlPv(uStack_108);
        }
      }
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010af82634();
      func_0x00010c0df7c0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      if (puVar5 != (undefined *)0x0) {
        func_0x000107c2bbe8(&uStack_108,puVar5);
        uVar8 = param_1[1];
        if ((uVar8 & 1) != 0) {
          uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
        }
        func_0x000107c3024c(param_1 + 10,&uStack_108,uVar8);
        if (cStack_f1 < '\0') {
          __ZdlPv(uStack_108);
        }
      }
      if (param_6 != 0) {
        *(undefined1 *)(param_1 + 0xe) = 1;
      }
      lVar7 = param_2;
      func_0x00010beb24c0();
      if ((int)lVar7 != 0) {
        *(undefined1 *)((long)param_1 + 0x71) = 1;
        lVar10 = param_2;
        func_0x00010be1ab60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be1d020();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = param_2;
        func_0x00010c08fa60();
        if ((lVar7 != 0) && (lVar7 = lVar10, func_0x00010c08fa60(), lVar7 != 0)) {
          _objc_retainAutorelease(param_2);
          lVar7 = param_2;
          func_0x00010bf25f00();
          lVar6 = param_2;
          func_0x00010c08fa60(param_2);
          uVar8 = param_1[1];
          if ((uVar8 & 1) != 0) {
            uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
          }
          FUN_10b4bf088(param_1 + 0xc,lVar7,lVar6,uVar8);
          func_0x000107c2bbe8(&uStack_108,lVar10);
          uVar8 = param_1[1];
          if ((uVar8 & 1) != 0) {
            uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
          }
          func_0x000107c3024c(param_1 + 0xd,&uStack_108,uVar8);
          if (cStack_f1 < '\0') {
            __ZdlPv(uStack_108);
          }
        }
        _objc_release(param_2);
        _objc_release(lVar10);
      }
      _objc_release(puVar5);
      _objc_release(lVar3);
      _objc_release(param_5);
      lVar7 = param_4;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return lVar7;
      }
      ___stack_chk_fail();
      if (cStack_f1 < '\0') {
        __ZdlPv(uStack_108);
      }
      _objc_release(param_2);
      _objc_release(lVar10);
      _objc_release(puVar5);
      _objc_release(lVar3);
      FUN_10af80a74(param_1);
      _objc_release(param_5);
      _objc_release(param_4);
      __Unwind_Resume();
      lVar10 = *(long *)(lVar7 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      lVar3 = 0;
      if (lVar10 != 0) {
        lVar7 = *(long *)(lVar7 + 0x10);
        func_0x00010c269d40(lVar7);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar7;
        func_0x00010bf1f440();
        _objc_release(lVar7);
      }
      return lVar3;
    }
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(param_5);
      }
      uVar9 = *(undefined8 *)(lVar10 * 8);
      _objc_retain(uVar9);
      func_0x000107c2bbe8(&uStack_108,uVar9);
      iVar2 = *(int *)(param_1 + 3);
      uVar8 = param_1[2];
      if ((uVar8 & 1) == 0) {
        if (iVar2 < (int)(uint)(uVar8 != 0)) goto LAB_10af7e054;
        if (uVar8 != 0) {
LAB_10af7e0ac:
          func_0x000107c303a8(puVar12,1);
          uVar8 = *puVar12;
        }
LAB_10af7e0bc:
        if ((uVar8 & 1) != 0) {
          *(int *)(uVar8 - 1) = *(int *)(uVar8 - 1) + 1;
        }
        uVar8 = param_1[4];
        func_0x0001072efdd0(uVar8,&uStack_108);
        iVar2 = *(int *)(param_1 + 3);
        *(int *)(param_1 + 3) = iVar2 + 1;
        puVar1 = puVar12;
        if ((param_1[2] & 1) != 0) {
          puVar1 = (ulong *)(param_1[2] + (long)iVar2 * 8 + 7);
        }
        *puVar1 = uVar8;
        if (cStack_f1 < '\0') {
          __ZdlPv(uStack_108);
        }
      }
      else {
        if (*(int *)(uVar8 - 1) <= iVar2) {
          if (*(int *)((long)param_1 + 0x1c) < *(int *)(uVar8 - 1)) goto LAB_10af7e0ac;
          goto LAB_10af7e0bc;
        }
LAB_10af7e054:
        *(int *)(param_1 + 3) = iVar2 + 1;
        puVar1 = puVar12;
        if ((uVar8 & 1) != 0) {
          puVar1 = (ulong *)(uVar8 + (long)iVar2 * 8 + 7);
        }
        puVar11 = (undefined8 *)*puVar1;
        if (*(char *)((long)puVar11 + 0x17) < '\0') {
          __ZdlPv(*puVar11);
        }
        puVar11[2] = CONCAT17(cStack_f1,uStack_f8);
        puVar11[1] = uStack_100;
        *puVar11 = uStack_108;
      }
      _objc_release(uVar9);
      lVar10 = lVar10 + 1;
    } while (lVar7 != lVar10);
    lVar7 = param_5;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10af7e4c8; end: 10af7e54b; -[SCSnapTokenNetworkRequests _shouldAddAttestationOnAccessTokenRefresh] */

undefined8 FUN_10af7e4c8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar3 = 0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f440();
    _objc_release(uVar2);
  }
  return uVar3;
}



/* Entry: 10af7e54c; end: 10af7e607; -[SCSnapTokenNetworkRequests _generateAttestationRequestToken] */

void FUN_10af7e54c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = 8;
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25d900(PTR__OBJC_CLASS___NSMutableString_1126af7f8,param_2,8);
  _objc_retainAutoreleasedReturnValue();
  do {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f3e2d8;
    func_0x00010c08fa60(&PTR____CFConstantStringClassReference_110f3e2d8);
    _arc4random_uniform();
    func_0x00010bf35920(&PTR____CFConstantStringClassReference_110f3e2d8,param_2,
                        (ulong)ppuVar2 & 0xffffffff);
    func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dc1af8);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10af7e608; end: 10af7e7e3; -[SCSnapTokenNetworkRequests _getAttestationPayloadWithRequestToken:] */

void FUN_10af7e608(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    puVar2 = PTR_PTR_1126b7e50;
    _objc_alloc_init();
    func_0x00010c1ec1c0();
    func_0x00010c1ebf60(puVar2);
    func_0x00010c1ec220(puVar2);
    puVar3 = puVar2;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    _CACurrentMediaTime();
    puStack_88 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_10af7e7e4;
    uStack_60 = 0x10af7e7f4;
    uStack_58 = 0;
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    dVar5 = 1.60807493534087e-314;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10af7e7fc;
    puStack_a0 = &UNK_110994c48;
    puStack_78 = puStack_88;
    _objc_retain(puVar3);
    puStack_98 = puVar3;
    lStack_90 = param_2;
    func_0x000107c27da4(uVar4,&puStack_b8);
    _CACurrentMediaTime();
    func_0x00010c0a1360(dVar5 - param_1,*(undefined8 *)(param_2 + 8));
    uVar4 = puStack_78[5];
    _objc_retain(uVar4);
    _objc_release(puStack_98);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(uStack_58);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10af7e7e4; end: 10af7e7fb;  */

void FUN_10af7e7e4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10af7e7fc; end: 10af7e85f;  */

void FUN_10af7e7fc(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  dVar4 = param_1;
  func_0x000104b30cdc();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_2 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  _CACurrentMediaTime();
                    /* WARNING: Could not recover jumptable at 0x00010c0a1350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar4 - param_1,*(undefined8 *)(*(long *)(param_2 + 0x28) + 8),
             PTR_s_logAttestationGenerationLatencyW_112605ee0);
  return;
}



/* Entry: 10af7e860; end: 10af7e867; -[SCSnapTokenNetworkRequests requestsProvider] */

undefined8 FUN_10af7e860(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af7e868; end: 10af7e8bb; -[SCSnapTokenNetworkRequests .cxx_destruct] */

void FUN_10af7e868(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af7e8bc; end: 10af7e8cb; -[SCSnapTokenStorage setSnapSessionSyncWithRefreshToken:accessTokens:userId:] */

void FUN_10af7e8bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea7af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setSnapSessionSyncWithRefreshTo_112587860,param_3,param_4,0,param_5,1);
  return;
}



/* Entry: 10af7e8cc; end: 10af7e98b; -[SCSnapTokenStorage _setSnapSessionSyncWithRefreshToken:accessTokens:cloud1TLToken:userId:isSessionVerified:] */

void FUN_10af7e8cc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 == 0) {
    func_0x00010bddfd80(param_1,param_2,param_6);
  }
  else {
    func_0x00010bede6c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af7e98c; end: 10af7e9cb;  */

void FUN_10af7e98c(long param_1,long param_2)

{
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  if (*(char *)(param_2 + 0x88) == '\x01') {
    func_0x000107c2bc0c((undefined1 *)(param_1 + 0x30),param_2 + 0x30);
    *(undefined1 *)(param_1 + 0x88) = 1;
  }
  return;
}



/* Entry: 10af7e9cc; end: 10af7e9e3;  */

long FUN_10af7e9cc(long param_1)

{
  if (*(char *)(param_1 + 0x88) == '\x01') {
    if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
      func_0x0001053936ac();
    }
    func_0x000100067de0(param_1 + 0x58);
    func_0x000100067de0(param_1 + 0x60);
    func_0x0001000682a4(param_1 + 0x40);
    return param_1 + 0x30;
  }
  return param_1;
}



/* Entry: 10af7e9e4; end: 10af7ebbf; -[SCSnapTokenStorage getAccessTokenAsyncForFetchOperation:userId:completionPerformer:completion:] */

void FUN_10af7e9e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined1 auStack_130 [88];
  char cStack_d8;
  undefined1 auStack_d0 [88];
  char cStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  puVar1 = &UNK_10f6edef4;
  func_0x000107c31818();
  puStack_58 = puVar1;
  func_0x00010be4c860(auStack_d0,param_1);
  _objc_retain(param_6);
  func_0x000107c2bc00(auStack_130,auStack_d0);
  func_0x00010c0f7fc0(param_5);
  if (cStack_d8 == '\x01') {
    func_0x000107c2bc14(auStack_130);
  }
  _objc_release(param_6);
  if (cStack_78 == '\x01') {
    func_0x000107c2bc14(auStack_d0);
  }
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10af7ebc0; end: 10af7ec47;  */

void FUN_10af7ebc0(long param_1)

{
  long lVar1;
  undefined1 auStack_80 [88];
  char cStack_28;
  
  func_0x000107c3181c(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18));
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c2bc00(auStack_80,param_1 + 0x30);
  (**(code **)(lVar1 + 0x10))(lVar1,auStack_80);
  if (cStack_28 == '\x01') {
    func_0x000107c2bc14(auStack_80);
  }
  return;
}



/* Entry: 10af7ec48; end: 10af7ecb7;  */

void FUN_10af7ec48(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),7);
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  func_0x000107c2bc00(param_1 + 0x30,param_2 + 0x30);
  return;
}



/* Entry: 10af7ecb8; end: 10af7ecf7;  */

void FUN_10af7ecb8(long param_1)

{
  if (*(char *)(param_1 + 0x88) == '\x01') {
    func_0x000107c2bc14(param_1 + 0x30);
  }
  __Block_object_dispose(*(undefined8 *)(param_1 + 0x28),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10af7ecf8; end: 10af7ed87; -[SCSnapTokenStorage getAccessTokenSyncForAccessType:userId:] */

void FUN_10af7ecf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  func_0x000107c2bc04(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4c860(param_1,param_2,param_3,param_5,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10af7ed88; end: 10af7edfb; -[SCSnapTokenStorage setAccessTokensSyncWithUserId:accessTokens:] */

void FUN_10af7ed88(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_3);
  if (*(long *)(param_4 + 0x18) == 0) {
    func_0x00010bddfc60(param_1,param_2,param_3);
  }
  else {
    func_0x00010bed2520(param_1,param_2,param_4,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af7edfc; end: 10af7eeb3; -[SCSnapTokenStorage setAccessTokenSyncWithUserId:accessToken:accessType:] */

void FUN_10af7edfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_88 [88];
  
  _objc_retain(param_3);
  if (*(char *)(param_4 + 0x58) == '\x01') {
    func_0x000107c2bc10(auStack_88,0,param_4);
    func_0x00010bed2500(param_1);
    func_0x000107c2bc14(auStack_88);
  }
  else {
    func_0x00010bddfc40(param_1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10af7eeb4; end: 10af7ef33; -[SCSnapTokenStorage setCloud1TLTokenSyncWithUserId:cloud1TLToken:] */

void FUN_10af7eeb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010bed5560(param_1,param_2,param_4,param_3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af7ef34; end: 10af7ef8b; -[SCSnapTokenStorage handleInvalidationSyncForUserId:] */

void FUN_10af7ef34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c1ae800(param_1,param_2,1);
  func_0x00010bddfd80(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af7ef8c; end: 10af7f03b; -[SCSnapTokenStorage clearAllAccessTokensSyncWithUserId:] */

void FUN_10af7ef8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bd360;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10af7f03c;
  puStack_48 = &UNK_110c9b250;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bf9af60(puVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10af7f03c; end: 10af7f06f;  */

void FUN_10af7f03c(long param_1,undefined8 param_2)

{
  func_0x00010be8b300(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010be8b2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__removeAccessTokenFromDiskForAcc_112580658,
             param_2,*(undefined8 *)(param_1 + 0x28));
  return;
}


