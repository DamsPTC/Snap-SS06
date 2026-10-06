/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108b8e184; end: 108b8e2c7;  */

undefined8 FUN_108b8e184(long param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  uint uVar1;
  long unaff_x19;
  undefined8 uVar2;
  ushort uStack_32;
  
  func_0x000108b8e898();
  if (param_1 == 0) {
    return 1;
  }
  if (3 < uStack_32) {
    if (*(char *)(param_1 + 1) == '\x02') {
      if ((uStack_32 == 0x14 && 0x1a < *param_4) && (uStack_32 != 0x14 || *param_4 != 0x1b)) {
        _bzero();
        *(undefined1 *)(unaff_x19 + 1) = 0x1e;
        *param_4 = 0x1c;
        *(undefined2 *)(unaff_x19 + 2) = *(undefined2 *)(param_1 + 2);
        uVar2 = *(undefined8 *)(param_1 + 4);
        *(undefined8 *)(unaff_x19 + 0x10) = *(undefined8 *)(param_1 + 0xc);
        *(undefined8 *)(unaff_x19 + 8) = uVar2;
        return 0;
      }
      uVar1 = 0x1c;
    }
    else {
      if (*(char *)(param_1 + 1) != '\x01') {
        return 4;
      }
      if ((uStack_32 == 8 && 0xe < *param_4) && (uStack_32 != 8 || *param_4 != 0xf)) {
        _bzero();
        *(undefined1 *)(unaff_x19 + 1) = 2;
        *param_4 = 0x10;
        *(undefined2 *)(unaff_x19 + 2) = *(undefined2 *)(param_1 + 2);
        *(undefined4 *)(unaff_x19 + 4) = *(undefined4 *)(param_1 + 4);
        return 0;
      }
      uVar1 = 0x10;
    }
    *param_4 = uVar1;
  }
  return 2;
}



/* Entry: 108b8e2c8; end: 108b8e353;  */

undefined8 FUN_108b8e2c8(long param_1,int *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ushort uStack_22;
  
  uStack_22 = 0;
  FUN_108b8dfec(param_1,9,&uStack_22);
  if (param_1 == 0) {
    uVar2 = 1;
  }
  else if (uStack_22 < 4) {
    uVar2 = 2;
  }
  else {
    uVar2 = 2;
    if ((*(byte *)(param_1 + 3) < 100) &&
       (uVar1 = *(byte *)(param_1 + 2) & 7, (0x87U >> (ulong)uVar1 & 1) == 0)) {
      uVar2 = 0;
      *param_2 = uVar1 * 100 + (uint)*(byte *)(param_1 + 3);
    }
  }
  return uVar2;
}



/* Entry: 108b8e354; end: 108b8e473;  */

ushort * FUN_108b8e354(long *param_1,uint param_2,long param_3)

{
  uint uVar1;
  ushort uVar2;
  long *plVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  
  uVar2 = *(ushort *)(param_1[1] + 2);
  uVar6 = ((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8) + 0x14;
  if ((int *)*param_1 != (int *)0x0) {
    uVar4 = 0x15;
    if (param_2 != 0x14) {
      uVar4 = param_2;
    }
    uVar1 = 0x14;
    if (param_2 != 0x15) {
      uVar1 = uVar4;
    }
    if (*(int *)*param_1 == 3) {
      param_2 = uVar1;
    }
  }
  if ((ulong)param_1[2] < param_3 + (ulong)(ushort)uVar6 + 4) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(param_1[1] + ((ulong)uVar6 & 0xffff));
    *puVar5 = (ushort)(param_2 >> 8) & 0xff | (ushort)((param_2 & 0xff00ff) << 8);
    uVar4 = (uint)param_3;
    if ((*param_1 == 0) || (-1 < *(char *)(*param_1 + 0x510))) {
      plVar3 = param_1;
      func_0x000108b8cea4();
      uVar1 = uVar4;
      if ((int)plVar3 == 0) {
        uVar1 = uVar4 + 3 & 0xfffc;
      }
      puVar5[1] = (ushort)(uVar1 >> 8) & 0xff | (ushort)((uVar1 & 0xff00ff) << 8);
      _memset((long)puVar5 + param_3 + 4,0x20,-uVar4 & 3);
      uVar6 = uVar6 + (-uVar4 & 3);
    }
    else {
      puVar5[1] = (ushort)((ulong)param_3 >> 8) & 0xff | (ushort)((uVar4 & 0xff00ff) << 8);
    }
    puVar5 = puVar5 + 2;
    uVar6 = (uVar4 + uVar6) - 0x10;
    *(ushort *)(param_1[1] + 2) = (ushort)(uVar6 >> 8) & 0xff | (ushort)((uVar6 & 0xff00ff) << 8);
  }
  return puVar5;
}



/* Entry: 108b8e474; end: 108b8e4cb;  */

undefined8 FUN_108b8e474(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  FUN_108b8e354(param_1,param_2,param_4);
  if (param_1 == 0) {
    uVar1 = 3;
  }
  else {
    uVar1 = 0;
    if ((param_3 != 0) && (param_4 != 0)) {
      _memcpy(param_1,param_3,param_4);
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* Entry: 108b8e4cc; end: 108b8e4d7;  */

/* WARNING: Removing unreachable block (ram,0x000108b8e4a0) */
/* WARNING: Removing unreachable block (ram,0x000108b8e4a4) */

undefined8 FUN_108b8e4cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_108b8e354(param_1,param_2,0);
  if (param_1 == 0) {
    uVar1 = 3;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 108b8e4d8; end: 108b8e54f;  */

void FUN_108b8e4d8(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uStack_14;
  
  uVar1 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
  uStack_14 = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_108b8e474(param_1,param_2,&uStack_14,4);
  return;
}



/* Entry: 108b8e550; end: 108b8e603;  */

undefined8 FUN_108b8e550(undefined1 *param_1,undefined8 param_2,long param_3,uint param_4)

{
  undefined2 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  int iVar5;
  
  if (param_4 < 0x10) {
    uVar2 = 2;
  }
  else {
    lVar3 = 4;
    if (*(char *)(param_3 + 1) == '\x02') {
      uVar4 = 1;
      iVar5 = 4;
    }
    else {
      if (*(char *)(param_3 + 1) != '\x1e') {
        return 4;
      }
      if (param_4 < 0x1c) {
        return 2;
      }
      uVar4 = 2;
      iVar5 = 0x10;
      lVar3 = 8;
    }
    uVar1 = *(undefined2 *)(param_3 + 2);
    FUN_108b8e354(param_1,param_2,iVar5 + 4);
    if (param_1 == (undefined1 *)0x0) {
      uVar2 = 3;
    }
    else {
      *param_1 = 0;
      param_1[1] = uVar4;
      *(undefined2 *)(param_1 + 2) = uVar1;
      _memcpy(param_1 + 4,param_3 + lVar3,iVar5);
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* Entry: 108b8e604; end: 108b8e737;  */

undefined2 * FUN_108b8e604(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  undefined2 *unaff_x20;
  undefined1 auStack_178 [128];
  undefined8 uStack_f8;
  undefined8 uStack_38;
  
  func_0x000108b8e8c8();
  func_0x000108b8e900();
  puVar4 = unaff_x20;
  func_0x000108b8e95c();
  if ((int)puVar4 == 0) {
    func_0x000108b8e8ec();
  }
  func_0x000108b8e8a8(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108b8e8c8();
    func_0x000108b8e900();
    puVar3 = auStack_178;
    func_0x000108b8e95c();
    puVar4 = unaff_x20;
    if ((int)unaff_x20 == 0) {
      func_0x000108b8e8ec();
      puVar4 = unaff_x20;
    }
    func_0x000108b8e8a8(uStack_f8);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      puVar1 = puVar3;
      FUN_108b8e738(puVar3);
      puVar2 = puVar1;
      _strlen();
      FUN_108b8e354(puVar4,9,puVar2 + 4);
      if (puVar4 == (undefined2 *)0x0) {
        puVar4 = (undefined2 *)0x3;
      }
      else {
        _div(puVar3,100);
        *puVar4 = 0;
        *(char *)(puVar4 + 1) = (char)puVar3;
        *(char *)((long)puVar4 + 3) = (char)((ulong)puVar3 >> 0x20);
        _memcpy(puVar4 + 2,puVar1,puVar2);
        puVar4 = (undefined2 *)0x0;
      }
      return puVar4;
    }
  }
  return puVar4;
}



/* Entry: 108b8e738; end: 108b8e867;  */

undefined * FUN_108b8e738(int param_1)

{
  int *piVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = 0x13;
  puVar4 = &UNK_10df94370;
  do {
    lVar3 = lVar3 + -1;
    if (lVar3 == 0) {
      return &UNK_10f503003;
    }
    puVar2 = puVar4 + 0x24;
    piVar1 = (int *)(puVar4 + 0x20);
    puVar4 = puVar2;
  } while (*piVar1 != param_1);
  return puVar2;
}



/* Entry: 108b8e868; end: 108b8e88b;  */

bool FUN_108b8e868(long param_1,undefined8 param_2)

{
  undefined1 auStack_12 [2];
  
  FUN_108b8dfec(param_1,param_2,auStack_12);
  return param_1 != 0;
}



/* Entry: 108b8e88c; end: 108b8e9fb;  */

void FUN_108b8e88c(void)

{
  return;
}



/* Entry: 108b8e9fc; end: 108b8ea07; +[SCTalkCoreFactory modulePath] */

undefined ** FUN_108b8e9fc(void)

{
  return &PTR____CFConstantStringClassReference_110ee8638;
}



/* Entry: 108b8ea08; end: 108b8ea0f; +[SCTalkCoreFactory asyncStrictMode] */

undefined8 FUN_108b8ea08(void)

{
  return 0;
}



/* Entry: 108b8ea10; end: 108b8ea53; -[SCTalkCoreFactory getPlatformCallingManager] */

void FUN_108b8ea10(long param_1)

{
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108b8edf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108b8ea54; end: 108b8eaff; +[SCTalkCoreFactory invokeWithJSRuntimeProvider:completionHandler:] */

void FUN_108b8ea54(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_108b8eb00;
  puStack_38 = &UNK_11084aaa8;
  lStack_30 = param_3;
  uStack_28 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_50);
  func_0x000108b8ee00();
  _objc_release(lStack_30);
  func_0x000108b8edf8();
  _objc_release(param_3);
  return;
}



/* Entry: 108b8eb00; end: 108b8eb87;  */

void FUN_108b8eb00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126da680;
  func_0x00010bfbc0e0(PTR_PTR_1126da680,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (**(code **)(puVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108b8eb88; end: 108b8ebab; +[SCTalkCoreFactory valdiMarshallableObjectDescriptor] */

void FUN_108b8eb88(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ab4c80;
  param_1[1] = &PTR_DAT_110ab4cb0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 108b8ebac; end: 108b8ebbf; +[SCTCAudioPublishStatus valdiMarshallableObjectDescriptor] */

void FUN_108b8ebac(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110ab4cc0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 108b8ebc0; end: 108b8ebd3; +[SCTCBackgroundImageState valdiMarshallableObjectDescriptor] */

void FUN_108b8ebc0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110ab4d38;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 108b8ebd4; end: 108b8ebe7; +[SCTCIncomingCallRequestDelegate valdiMarshallableObjectDescriptor] */

void FUN_108b8ebd4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ab4d80;
  param_1[1] = &PTR_DAT_110ab4db0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 108b8ebe8; end: 108b8ebfb; +[SCTCMediaPublishStatus valdiMarshallableObjectDescriptor] */

void FUN_108b8ebe8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ab4dc0;
  param_1[1] = &PTR_DAT_110ab4e20;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 108b8ebfc; end: 108b8ec0f; +[SCTCParticipant valdiMarshallableObjectDescriptor] */

void FUN_108b8ebfc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ab4e40;
  param_1[1] = &PTR_DAT_110ab4f18;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 108b8ec10; end: 108b8ec23; +[SCTCScreenPublishStatus valdiMarshallableObjectDescriptor] */

void FUN_108b8ec10(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ab4f48;
  param_1[1] = &PTR_DAT_110ab4f90;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 108b8ec24; end: 108b8ec47; +[SCTCTalkCoreTS valdiMarshallableObjectDescriptor] */

void FUN_108b8ec24(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ab4fe8;
  param_1[1] = &PTR_DAT_110ab50d8;
  param_1[2] = &PTR_DAT_110ab4fa0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 108b8ec48; end: 108b8ec6f;  */

undefined8 FUN_108b8ec48(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(undefined4 *)(param_2 + 2));
  return 0;
}



/* Entry: 108b8ec70; end: 108b8ecd3;  */

void FUN_108b8ec70(void)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x000108b8ede8(FUN_108b8ed78);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  func_0x000108b8ee00();
  func_0x000108b8edf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108b8ecd4; end: 108b8ecff;  */

undefined8 FUN_108b8ecd4(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(uint *)(param_2 + 2) & 1);
  return 0;
}



/* Entry: 108b8ed00; end: 108b8ed63;  */

void FUN_108b8ed00(void)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x000108b8ede8(0x108b8ed94);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  func_0x000108b8ee00();
  func_0x000108b8edf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108b8ed64; end: 108b8ed77; +[SCTCVideoPublishStatus valdiMarshallableObjectDescriptor] */

void FUN_108b8ed64(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ab5118;
  param_1[1] = &PTR_DAT_110ab5190;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 108b8ed78; end: 108b8edaf;  */

void FUN_108b8ed78(void)

{
  func_0x000108b8edd0();
  return;
}



/* Entry: 108b8edb0; end: 108b8ee13;  */

void FUN_108b8edb0(undefined8 *param_1)

{
  undefined8 in_x9;
  undefined8 in_x10;
  
  *param_1 = in_x9;
  param_1[1] = in_x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 108b8ee14; end: 108b8ee37; -[SCStopwatch pauseWithTime:] */

void FUN_108b8ee14(double param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    *(double *)(param_2 + 8) = *(double *)(param_2 + 8) + (param_1 - *(double *)(param_2 + 0x10));
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



/* Entry: 108b8ee38; end: 108b8ee6b; -[SCStopwatch resetAndStartWithTime:] */

void FUN_108b8ee38(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c137fe0();
                    /* WARNING: Could not recover jumptable at 0x00010c251c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,param_2,PTR_s_startWithTime__112672138);
  return;
}



/* Entry: 108b8ee6c; end: 108b8ee93; -[SCStopwatch pause] */

void FUN_108b8ee6c(long param_1)

{
  func_0x00010bf5fd80(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c0f6270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_pauseWithTime__11261b2b8);
  return;
}



/* Entry: 108b8ee94; end: 108b8ee9b; -[SCStopwatch isRunning] */

undefined1 FUN_108b8ee94(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 108b8ee9c; end: 108b8eeab; -[SCStopwatch deductTimeInterval:] */

void FUN_108b8ee9c(double param_1,long param_2)

{
  *(double *)(param_2 + 8) = *(double *)(param_2 + 8) - param_1;
  return;
}



/* Entry: 108b8eeac; end: 108b8eeb7; -[SCStopwatch .cxx_destruct] */

void FUN_108b8eeac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 108b8eeb8; end: 108b8ef73; +[SCAdsURLUtils _clickIDUpdatedURL:adServeItemId:configProvider:] */

void FUN_108b8eeb8(long param_1,undefined8 param_2,long param_3,long param_4,int param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf92540();
  if ((param_4 != 0) && (param_5 != 0)) {
    lVar1 = param_3;
    func_0x00010c11db20(param_3,param_2,&PTR____CFConstantStringClassReference_110eb1818);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010c28d6a0(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110eb1818,
                          param_4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108b8ef28;
    }
  }
  _objc_retain(param_3);
  param_1 = param_3;
LAB_108b8ef28:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108b8ef74; end: 108b8f1ef; +[SCAdsURLUtils overrideAdsURL:adKey:adId:adServeItemId:applicationPreferences:configProvider:allowClickId:] */

void FUN_108b8ef74(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,char param_9)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    if (param_9 != '\0') {
      func_0x00010bde1360(param_1,param_2,param_3,param_6,param_8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      param_3 = param_1;
    }
    lVar1 = param_3;
    func_0x00010beec820(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    if (param_4 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      func_0x00010bdc3100(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_4;
      func_0x00010c25cda0(param_4,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      func_0x00010c25cfc0(lVar1,param_2,&PTR____CFConstantStringClassReference_110ee8658,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      _objc_release(lVar2);
    }
    lVar1 = lVar3;
    if (param_5 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      func_0x00010bdc3100(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_5;
      func_0x00010c25cda0(param_5,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      func_0x00010c25cfc0(lVar3,param_2,&PTR____CFConstantStringClassReference_110ee8678,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    lVar3 = param_7;
    func_0x00010c2931c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar2 = lVar1;
      func_0x00010c25cfc0(lVar1,param_2,&PTR____CFConstantStringClassReference_110ee8698,lVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar1 = lVar2;
      func_0x00010c25cfc0(lVar2,param_2,&PTR____CFConstantStringClassReference_110ee86b8,lVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(param_3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108b8f1f0; end: 108b8f20f; +[SCAdsURLUtils overrideAdsURL:adKey:adResponse:applicationPreferences:configProvider:allowClickId:] */

void FUN_108b8f1f0(void)

{
  func_0x00010c0f0020();
  return;
}



/* Entry: 108b8f210; end: 108b8f3f3; +[SCAdsURLUtils overrideAdsURL:adKey:adResponse:applicationPreferences:configProvider:allowClickId:adConfigProviderV2:] */

void FUN_108b8f210(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf1f480(param_9,param_2,&PTR____CFConstantStringClassReference_110ddd098);
  uVar1 = param_5;
  uVar2 = param_5;
  if ((int)param_9 == 0) {
    func_0x00010bef2c20(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15ed20(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    func_0x00010c0effe0(param_1,param_2,param_3,param_4,uVar1,uVar2,param_6,param_7,(char)param_8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    _objc_release(param_4);
  }
  else {
    if (param_8 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = param_7;
      func_0x00010bf92540(param_7);
    }
    param_1 = PTR_PTR_1126dae40;
    func_0x00010bef2c20(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15ed20(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    uVar3 = param_6;
    func_0x00010c2931c0(param_6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    func_0x00010c0f0000(param_1,param_2,param_3,param_4,uVar1,uVar2,uVar3,uVar4,(char)param_8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(param_3);
    param_3 = uVar3;
  }
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108b8f3f4; end: 108b8f4b7; +[SCAdsURLUtils updatedURL:queryName:queryValue:] */

void FUN_108b8f3f4(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bdc2d80(param_3,param_2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25cf40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (puVar3 == (undefined *)0x0) {
    _objc_retain(param_3);
    puVar2 = param_3;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108b8f4b8; end: 108b8f5bf; +[SCAdsURLUtils initialRedirectQueryItemsToRetain:configProvider:] */

void FUN_108b8f4b8(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf924e0();
  if (param_4 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c11db20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
      func_0x00010c11d4c0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bff0ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 108b8f5c0; end: 108b8f5cf; -[SCOpenInSafariActivity init] */

void FUN_108b8f5c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff0ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithActivityType_onPerformAc_1125d9dc0,
             &PTR____CFConstantStringClassReference_110ee86d8,0);
  return;
}



/* Entry: 108b8f5d0; end: 108b8f68f; -[SCOpenInSafariActivity initWithActivityType:onPerformActivityHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108b8f5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126fd4e0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112777c9c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112777ca0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112777ca0) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108b8f690; end: 108b8f6bf; -[SCOpenInSafariActivity activityType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b8f690(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112777c9c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108b8f6c0; end: 108b8f6c3; -[SCOpenInSafariActivity activityTitle] */

void FUN_108b8f6c0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110eaf458;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110eaf458,
                      &PTR____CFConstantStringClassReference_110ee8958,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 108b8f6c4; end: 108b8f6d7; -[SCOpenInSafariActivity activityImage] */

void FUN_108b8f6c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe8230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIImage_1126aea68,PTR_s_imageNamed__1125d7a50,
             &PTR____CFConstantStringClassReference_110ee86f8);
  return;
}



/* Entry: 108b8f6d8; end: 108b8f83b; -[SCOpenInSafariActivity canPerformWithActivityItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108b8f6d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60();
  puVar6 = (undefined1 *)0x0;
  if (lVar1 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        puVar7 = *(undefined8 **)(lStack_128 + lVar10 * 8);
        puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
        _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
        puVar6 = (undefined1 *)puVar7;
        _objc_opt_isKindOfClass(puVar7,puVar2);
        if (((ulong)puVar6 & 1) != 0) {
          puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
          func_0x00010c22b720();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010bf2cf00();
          _objc_release(puVar2);
          if (((ulong)puVar3 & 1) != 0) {
            puVar6 = (undefined1 *)0x1;
            goto LAB_108b8f7ec;
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = param_3;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    puVar6 = (undefined1 *)0x0;
  }
LAB_108b8f7ec:
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar6;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar7);
  puVar6 = (undefined1 *)puVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar6 != (undefined1 *)0x0) {
    puVar11 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar7);
      }
      uVar8 = *(ulong *)((long)puVar11 * 8);
      puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
      _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
      uVar4 = uVar8;
      _objc_opt_isKindOfClass(uVar8,puVar2);
      if ((uVar4 & 1) != 0) {
        puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010bf2cf00();
        _objc_release(puVar2);
        if ((int)puVar3 != 0) {
          lVar10 = (long)_DAT_112777ca4;
          _objc_retain(uVar8);
          uVar5 = *(undefined8 *)(param_3 + lVar10);
          *(ulong *)(param_3 + lVar10) = uVar8;
          _objc_release(uVar5);
        }
      }
      puVar11 = puVar11 + 1;
    } while (puVar6 != puVar11);
    puVar6 = (undefined1 *)puVar7;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return (undefined1 *)puVar7;
  }
  ___stack_chk_fail();
  if (*(long *)((long)puVar7 + (long)_DAT_112777ca0) != 0) {
    (**(code **)(*(long *)((long)puVar7 + (long)_DAT_112777ca0) + 0x10))();
  }
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9b80();
  _objc_release(puVar2);
  return puVar2;
}



/* Entry: 108b8f83c; end: 108b8f9a3; -[SCOpenInSafariActivity prepareWithActivityItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b8f83c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar8 = *(ulong *)(lVar10 * 8);
      puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
      _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
      uVar4 = uVar8;
      _objc_opt_isKindOfClass(uVar8,puVar3);
      if ((uVar4 & 1) != 0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010bf2cf00();
        _objc_release(puVar3);
        if ((int)puVar5 != 0) {
          lVar9 = (long)_DAT_112777ca4;
          _objc_retain(uVar8);
          uVar6 = *(undefined8 *)(param_1 + lVar9);
          *(ulong *)(param_1 + lVar9) = uVar8;
          _objc_release(uVar6);
        }
      }
      lVar10 = lVar10 + 1;
    } while (lVar2 != lVar10);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_3 + _DAT_112777ca0) != 0) {
    (**(code **)(*(long *)(param_3 + _DAT_112777ca0) + 0x10))();
  }
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9b80();
  _objc_release(puVar3);
  return;
}



/* Entry: 108b8f9a4; end: 108b8fa4b; -[SCOpenInSafariActivity performActivity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b8f9a4(long param_1)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + _DAT_112777ca0) != 0) {
    (**(code **)(*(long *)(param_1 + _DAT_112777ca0) + 0x10))();
  }
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9b80();
  _objc_release(puVar1);
  return;
}



/* Entry: 108b8fa4c; end: 108b8fa57;  */

void FUN_108b8fa4c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef1510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_activityDidFinish__112599ee8,param_2);
  return;
}



/* Entry: 108b8fa58; end: 108b8fa67; -[SCOpenInSafariActivity activityTypeOverride] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108b8fa58(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112777c9c);
}



/* Entry: 108b8fa68; end: 108b8faa7; -[SCOpenInSafariActivity setActivityTypeOverride:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b8fa68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112777c9c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108b8faa8; end: 108b8fab7; -[SCOpenInSafariActivity onPerformActivityHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108b8faa8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112777ca0);
}



/* Entry: 108b8fab8; end: 108b8fac3; -[SCOpenInSafariActivity setOnPerformActivityHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b8fab8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108b8fac4; end: 108b8fb13; -[SCOpenInSafariActivity .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b8fac4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112777ca0,0);
  _objc_storeStrong(param_1 + _DAT_112777c9c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112777ca4,0);
  return;
}



/* Entry: 108b8fb14; end: 108b8fcbf;  */

/* WARNING: Removing unreachable block (ram,0x000108b8fc1c) */

bool FUN_108b8fb14(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain();
  func_0x00010c25d780(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  if ((uVar3 & 1) == 0) {
    uVar3 = param_1;
    func_0x00010c1504a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    if ((uVar4 & 1) == 0) {
      uVar4 = param_1;
      func_0x00010bfe4420();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_2);
      _objc_retain(uVar4);
      uVar5 = uVar4;
      func_0x00010c08fa60();
      if (uVar5 == 0) {
        bVar1 = false;
      }
      else {
        puVar6 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
        func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08fa60(uVar4);
        puVar7 = puVar6;
        func_0x00010bfb1800(puVar6);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = puVar7 != (undefined *)0x0;
        _objc_release();
        _objc_release(puVar6);
      }
      _objc_release(uVar4);
      _objc_release(param_2);
      _objc_release(uVar4);
    }
    else {
      bVar1 = true;
    }
    _objc_release(uVar3);
  }
  else {
    bVar1 = true;
  }
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 108b8fcc0; end: 108b8fe4f;  */

undefined ** FUN_108b8fcc0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = (undefined **)PTR____NSDictionary0__struct_11034ab58;
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    func_0x00010bf44780(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8,param_2,param_1,1);
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    puVar2 = puVar1;
    func_0x00010c11d4e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf52a60();
    ppuVar7 = (undefined **)PTR____NSDictionary0__struct_11034ab58;
    if (puVar3 != (undefined *)0x0) {
      lVar9 = *plStack_120;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(puVar2);
          }
          uVar4 = *(ulong *)(lStack_128 + (long)puVar10 * 8);
          func_0x00010c0d4f60();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c0b5ac0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c0720c0();
          _objc_release(uVar5);
          _objc_release(uVar4);
          if ((uVar6 & 1) != 0) goto LAB_108b8fdf4;
          puVar10 = puVar10 + 1;
        } while (puVar3 != puVar10);
        puVar3 = puVar2;
        func_0x00010bf52a60(puVar2,param_2,&uStack_130,auStack_f0,0x10);
      } while (puVar3 != (undefined *)0x0);
    }
    ppuVar7 = &PTR__OBJC_CLASS___NSConstantDictionary_111174f68;
LAB_108b8fdf4:
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
    func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar8);
    return ppuVar8;
  }
  return ppuVar7;
}



/* Entry: 108b8fe50; end: 108b8fea3;  */

void FUN_108b8fe50(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108b8fea4; end: 108b8ff07; +[SCWebBrowsingURLHelpers IsHypertextURL:] */

ulong FUN_108b8fea4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc8d78);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 108b8ff08; end: 108b8ff57; +[SCWebBrowsingUserAgentHelper osVersion] */

void FUN_108b8ff08(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be98380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6e6e0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108b8ff58; end: 108b9000f; +[SCWebBrowsingUserAgentHelper _osVersionFromInfoDictionary:] */

void FUN_108b8ff58(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110ee88b8);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126b2930;
    func_0x00010bf5e640(PTR_PTR_1126b2930);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c267460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
    _objc_retain(param_3);
    puVar2 = param_3;
  }
  _objc_release(param_3);
  puVar1 = puVar2;
  func_0x00010c25cfc0(puVar2,param_2,&PTR____CFConstantStringClassReference_110dad1f8,
                      &PTR____CFConstantStringClassReference_110dc1338);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108b90010; end: 108b90067; +[SCWebBrowsingUserAgentHelper _organicIdentifierStringWithIsAd:] */

void FUN_108b90010(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if ((param_3 & 1) == 0) {
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dae518);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108b90068; end: 108b900db; +[SCWebURLHelper encodeUrl:] */

void FUN_108b90068(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  func_0x00010bfb6840();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c25cda0(param_3,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108b900dc; end: 108b9013b; +[SCWebURLHelper isUrlUnEncoded:] */

undefined8 FUN_108b900dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c25cf40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(param_3);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 108b9013c; end: 108b901d3; +[SCWebURLHelper fragmentAndQueryAllowedCharacterSet] */

void FUN_108b9013c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableCharacterSet_1126af248;
  func_0x00010bf35a20(PTR__OBJC_CLASS___NSMutableCharacterSet_1126af248,param_2,
                      &PTR____CFConstantStringClassReference_110dbf518);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bdc2f20(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb57a0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bdc3100(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb57a0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108b901d4; end: 108b901eb;  */

void FUN_108b901d4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110eaf458;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110eaf458,
                      &PTR____CFConstantStringClassReference_110ee8958,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 108b901ec; end: 108b9039f; -[SCWebViewConfiguration initWithUrl:enableAutoFill:sharable:enablePreloading:disableSwipeDownToDismiss:delayLoadUntilWebviewScheduledToTakeOver:enableResourcePrefetch:prefetchHints:prefetchBaseUrl:redirectResolvedUrlMatchPrefix:expectedServerRedirectCount:prefetchHintsId:enableUsePrefetchHintsLoadedWebView:] */

undefined8 *
FUN_108b901ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined1 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126fd4e8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    *(undefined1 *)((long)puVar1 + 10) = param_6;
    *(undefined1 *)((long)puVar1 + 0xb) = param_7;
    *(undefined1 *)((long)puVar1 + 0xc) = param_8;
    *(undefined1 *)((long)puVar1 + 0xd) = param_9;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xe) = param_16;
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108b903a0; end: 108b903c3; -[SCWebViewConfiguration copyWithZone:] */

undefined8 FUN_108b903a0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108b903c4; end: 108b904a3; -[SCWebViewConfiguration hash] */

undefined8 * FUN_108b903c4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  ushort uVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  ulong uVar11;
  
  puVar4 = &uStack_90;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar9 = *(undefined4 *)(param_1 + 8);
  uVar10 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar9 >> 0x18),
                                           (uint6)(byte)((uint)uVar9 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar9) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar9 >> 8),(short)uVar10);
  uVar11 = CONCAT44((int)(uVar10 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar10 = CONCAT26((short)(uVar11 >> 0x30),CONCAT24((short)(uVar10 >> 0x20),(int)uVar11)) &
           0xff01ff01ffffffff;
  uVar8 = (ushort)(uVar10 >> 0x30);
  uStack_88 = (ulong)uVar1 & 0xff;
  uStack_80 = uVar10 >> 0x10 & 0xff;
  uStack_78 = (ulong)CONCAT24(uVar8,(uint)(ushort)(uVar10 >> 0x20)) & 0xffffffff;
  uStack_70 = (ulong)uVar8;
  uStack_68 = (ulong)*(byte *)(param_1 + 0xc);
  uStack_60 = (ulong)*(byte *)(param_1 + 0xd);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 0xe);
  uStack_38 = uVar3;
  func_0x000107c3191c(&uStack_90,0xd);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_108b905f4:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108b90600;
    puVar7 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((((ulong)puVar5 & 1) != 0) &&
         ((((*(char *)((long)puVar4 + 8) == param_3[8] &&
            (*(char *)((long)puVar4 + 9) == param_3[9])) &&
           (*(char *)((long)puVar4 + 10) == param_3[10])) &&
          ((*(char *)((long)puVar4 + 0xb) == param_3[0xb] &&
           (*(char *)((long)puVar4 + 0xc) == param_3[0xc])))))) &&
        (*(char *)((long)puVar4 + 0xd) == param_3[0xd])) &&
       (*(char *)((long)puVar4 + 0xe) == param_3[0xe])) {
      lVar6 = *(long *)((long)puVar4 + 0x10);
      if ((lVar6 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        lVar6 = *(long *)((long)puVar4 + 0x18);
        if ((lVar6 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = *(long *)((long)puVar4 + 0x20);
          if ((lVar6 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
            lVar6 = *(long *)((long)puVar4 + 0x28);
            if ((lVar6 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
              lVar6 = *(long *)((long)puVar4 + 0x30);
              if ((lVar6 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar6 != 0))
              {
                puVar7 = *(undefined1 **)((long)puVar4 + 0x38);
                if (puVar7 != *(undefined1 **)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_108b90600;
                }
                goto LAB_108b905f4;
              }
            }
          }
        }
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_108b90600:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 108b904a4; end: 108b9061b; -[SCWebViewConfiguration isEqual:] */

long FUN_108b904a4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108b905f4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108b90600;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
            (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
           (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
          ((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
           (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))))))) &&
        (*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd))) &&
       (*(char *)(param_1 + 0xe) == *(char *)(param_3 + 0xe))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if (lVar3 != *(long *)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_108b90600;
                }
                goto LAB_108b905f4;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108b90600:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108b9061c; end: 108b90623; -[SCWebViewConfiguration url] */

undefined8 FUN_108b9061c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108b90624; end: 108b9062b; -[SCWebViewConfiguration enableAutoFill] */

undefined1 FUN_108b90624(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108b9062c; end: 108b90633; -[SCWebViewConfiguration sharable] */

undefined1 FUN_108b9062c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108b90634; end: 108b9063b; -[SCWebViewConfiguration enablePreloading] */

undefined1 FUN_108b90634(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108b9063c; end: 108b90643; -[SCWebViewConfiguration disableSwipeDownToDismiss] */

undefined1 FUN_108b9063c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 108b90644; end: 108b9064b; -[SCWebViewConfiguration delayLoadUntilWebviewScheduledToTakeOver] */

undefined1 FUN_108b90644(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 108b9064c; end: 108b90653; -[SCWebViewConfiguration enableResourcePrefetch] */

undefined1 FUN_108b9064c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 108b90654; end: 108b9065b; -[SCWebViewConfiguration prefetchHints] */

undefined8 FUN_108b90654(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108b9065c; end: 108b90663; -[SCWebViewConfiguration prefetchBaseUrl] */

undefined8 FUN_108b9065c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108b90664; end: 108b9066b; -[SCWebViewConfiguration redirectResolvedUrlMatchPrefix] */

undefined8 FUN_108b90664(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108b9066c; end: 108b90673; -[SCWebViewConfiguration expectedServerRedirectCount] */

undefined8 FUN_108b9066c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108b90674; end: 108b9067b; -[SCWebViewConfiguration prefetchHintsId] */

undefined8 FUN_108b90674(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108b9067c; end: 108b90683; -[SCWebViewConfiguration enableUsePrefetchHintsLoadedWebView] */

undefined1 FUN_108b9067c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 108b90684; end: 108b906e3; -[SCWebViewConfiguration .cxx_destruct] */

void FUN_108b90684(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108b906e4; end: 108b906ff; +[SCWebViewConfigurationBuilder webViewConfiguration] */

void FUN_108b906e4(void)

{
  _objc_alloc_init(PTR_PTR_1126c7d40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108b90700; end: 108b90a1b; +[SCWebViewConfigurationBuilder webViewConfigurationFromExistingWebViewConfiguration:] */

void FUN_108b90700(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  
  puVar1 = PTR_PTR_1126c7d40;
  _objc_retain(param_3);
  func_0x00010c2a3de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2bc200(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf8f5c0(param_3);
  puVar5 = puVar3;
  func_0x00010c2ace60(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c22a6e0(param_3);
  puVar6 = puVar5;
  func_0x00010c2b85a0(puVar5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf91300(param_3);
  puVar7 = puVar6;
  func_0x00010c2acfe0(puVar6,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf80980(param_3);
  puVar8 = puVar7;
  func_0x00010c2ac580(puVar7,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf6aea0(param_3);
  puVar9 = puVar8;
  func_0x00010c2ac1e0(puVar8,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf916c0(param_3);
  puVar10 = puVar9;
  func_0x00010c2ad040(puVar9,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c107700();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c2b5ae0(puVar10,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c107360(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010c2b5aa0(puVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010c1249c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010c2b6ae0(puVar13,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010bf9c360(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010c2ad7a0(puVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010c107740(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar17;
  func_0x00010c2b5b00(puVar17,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_3;
  func_0x00010bf92340(param_3);
  _objc_release(param_3);
  puVar21 = puVar19;
  func_0x00010c2ad120(puVar19,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar19);
  _objc_release(uVar18);
  _objc_release(puVar17);
  _objc_release(uVar16);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(uVar4);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar21);
  return;
}



/* Entry: 108b90a1c; end: 108b90a8f; -[SCWebViewConfigurationBuilder build] */

void FUN_108b90a1c(void)

{
  _objc_alloc(PTR_PTR_1126dae50);
  func_0x00010c059fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108b90a90; end: 108b90ac7; -[SCWebViewConfigurationBuilder withUrl:] */

long FUN_108b90a90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108b90ac8; end: 108b90acf; -[SCWebViewConfigurationBuilder withEnableAutoFill:] */

void FUN_108b90ac8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 108b90ad0; end: 108b90ad7; -[SCWebViewConfigurationBuilder withSharable:] */

void FUN_108b90ad0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x11) = param_3;
  return;
}



/* Entry: 108b90ad8; end: 108b90adf; -[SCWebViewConfigurationBuilder withEnablePreloading:] */

void FUN_108b90ad8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x12) = param_3;
  return;
}



/* Entry: 108b90ae0; end: 108b90ae7; -[SCWebViewConfigurationBuilder withDisableSwipeDownToDismiss:] */

void FUN_108b90ae0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x13) = param_3;
  return;
}



/* Entry: 108b90ae8; end: 108b90aef; -[SCWebViewConfigurationBuilder withDelayLoadUntilWebviewScheduledToTakeOver:] */

void FUN_108b90ae8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x14) = param_3;
  return;
}



/* Entry: 108b90af0; end: 108b90af7; -[SCWebViewConfigurationBuilder withEnableResourcePrefetch:] */

void FUN_108b90af0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x15) = param_3;
  return;
}



/* Entry: 108b90af8; end: 108b90b2f; -[SCWebViewConfigurationBuilder withPrefetchHints:] */

long FUN_108b90af8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108b90b30; end: 108b90b67; -[SCWebViewConfigurationBuilder withPrefetchBaseUrl:] */

long FUN_108b90b30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108b90b68; end: 108b90b9f; -[SCWebViewConfigurationBuilder withRedirectResolvedUrlMatchPrefix:] */

long FUN_108b90b68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108b90ba0; end: 108b90bd7; -[SCWebViewConfigurationBuilder withExpectedServerRedirectCount:] */

long FUN_108b90ba0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}


