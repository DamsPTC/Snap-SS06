/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106ece5f8; end: 106ece643; -[GCDAsyncSocketPreBuffer dealloc] */

void FUN_106ece5f8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 8) != 0) {
    _free();
  }
  puStack_28 = PTR_PTR_1126f7bf0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106ece644; end: 106ece69f; -[GCDAsyncSocketPreBuffer ensureCapacityForWrite:] */

void FUN_106ece644(ulong param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = param_1;
  func_0x00010bf12a00();
  if (uVar2 <= param_3 && param_3 - uVar2 != 0) {
    lVar3 = *(long *)(param_1 + 8);
    lVar1 = *(long *)(param_1 + 0x10) + (param_3 - uVar2);
    _realloc(lVar3,lVar1);
    lVar4 = *(long *)(param_1 + 8);
    *(long *)(param_1 + 8) = lVar3;
    *(long *)(param_1 + 0x10) = lVar1;
    *(long *)(param_1 + 0x18) = lVar3 + (*(long *)(param_1 + 0x18) - lVar4);
    *(long *)(param_1 + 0x20) = lVar3 + (*(long *)(param_1 + 0x20) - lVar4);
  }
  return;
}



/* Entry: 106ece6a0; end: 106ece6ab; -[GCDAsyncSocketPreBuffer availableBytes] */

long FUN_106ece6a0(long param_1)

{
  return *(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18);
}



/* Entry: 106ece6ac; end: 106ece6b3; -[GCDAsyncSocketPreBuffer readBuffer] */

undefined8 FUN_106ece6ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106ece6b4; end: 106ece6e7; -[GCDAsyncSocketPreBuffer getReadBuffer:availableBytes:] */

void FUN_106ece6b4(long param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

{
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x18);
  }
  if (param_4 != (long *)0x0) {
    func_0x00010bf12620();
    *param_4 = param_1;
  }
  return;
}



/* Entry: 106ece6e8; end: 106ece70b; -[GCDAsyncSocketPreBuffer didRead:] */

void FUN_106ece6e8(long param_1,undefined8 param_2,long param_3)

{
  param_3 = *(long *)(param_1 + 0x18) + param_3;
  *(long *)(param_1 + 0x18) = param_3;
  if (param_3 != *(long *)(param_1 + 0x20)) {
    return;
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 8);
  return;
}



/* Entry: 106ece70c; end: 106ece71f; -[GCDAsyncSocketPreBuffer availableSpace] */

long FUN_106ece70c(long param_1)

{
  return (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 0x20)) + *(long *)(param_1 + 8);
}



/* Entry: 106ece720; end: 106ece727; -[GCDAsyncSocketPreBuffer writeBuffer] */

undefined8 FUN_106ece720(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106ece728; end: 106ece75b; -[GCDAsyncSocketPreBuffer getWriteBuffer:availableSpace:] */

void FUN_106ece728(long param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

{
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x20);
  }
  if (param_4 != (long *)0x0) {
    func_0x00010bf12a00();
    *param_4 = param_1;
  }
  return;
}



/* Entry: 106ece75c; end: 106ece76b; -[GCDAsyncSocketPreBuffer didWrite:] */

void FUN_106ece75c(long param_1,undefined8 param_2,long param_3)

{
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + param_3;
  return;
}



/* Entry: 106ece76c; end: 106ece777; -[GCDAsyncSocketPreBuffer reset] */

void FUN_106ece76c(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 8);
  return;
}



/* Entry: 106ece778; end: 106ece8bb; -[GCDAsyncReadPacket initWithData:startOffset:maxLength:timeout:readLength:terminator:tag:] */

undefined1 *
FUN_106ece778(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f7bf8;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar5);
    *(undefined8 *)((long)puVar1 + 0x50) = param_9;
    if (param_4 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
      _objc_alloc();
      func_0x00010c022640();
      uVar2 = *(undefined8 *)((long)puVar1 + 8);
      *(undefined **)((long)puVar1 + 8) = puVar3;
      _objc_release(uVar2);
      lVar4 = 0;
      *(undefined8 *)((long)puVar1 + 0x10) = 0;
      *(undefined1 *)((long)puVar1 + 0x40) = 1;
    }
    else {
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)puVar1 + 8);
      *(long *)((long)puVar1 + 8) = param_4;
      _objc_release(uVar2);
      *(undefined8 *)((long)puVar1 + 0x10) = param_5;
      *(undefined1 *)((long)puVar1 + 0x40) = 0;
      lVar4 = param_4;
      func_0x00010c08fa60();
    }
    *(long *)((long)puVar1 + 0x48) = lVar4;
  }
  _objc_release(param_8);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106ece8bc; end: 106ece907; -[GCDAsyncReadPacket ensureCapacityForAdditionalDataOfLength:] */

void FUN_106ece8bc(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c08fa60();
  uVar2 = lVar1 - (*(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x18));
  lVar1 = param_3 - uVar2;
  if (uVar2 <= param_3 && lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfec1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_increaseLengthBy__1125d8a40,lVar1);
    return;
  }
  return;
}



/* Entry: 106ece908; end: 106ece98f; -[GCDAsyncReadPacket optimalReadLengthWithDefault:shouldPreBuffer:] */

ulong FUN_106ece908(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar3 = *(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18), uVar3 <= param_3)) {
      param_3 = uVar3;
    }
    if (param_4 == 0) {
      return param_3;
    }
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c08fa60();
    bVar1 = (ulong)(lVar2 - (*(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x18))) < param_3;
  }
  else {
    param_3 = *(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x18);
    if (param_4 == 0) {
      return param_3;
    }
    bVar1 = false;
  }
  *(bool *)param_4 = bVar1;
  return param_3;
}



/* Entry: 106ece990; end: 106ece9bb; -[GCDAsyncReadPacket readLengthForNonTermWithHint:] */

ulong FUN_106ece990(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if ((lVar1 == 0) && (lVar1 = *(long *)(param_1 + 0x20), lVar1 == 0)) {
    return param_3;
  }
  uVar2 = lVar1 - *(long *)(param_1 + 0x18);
  if (uVar2 <= param_3) {
    param_3 = uVar2;
  }
  return param_3;
}



/* Entry: 106ece9bc; end: 106ecea27; -[GCDAsyncReadPacket readLengthForTermWithHint:shouldPreBuffer:] */

ulong FUN_106ece9bc(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (uVar2 = *(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18), uVar2 <= param_3)) {
    param_3 = uVar2;
  }
  if (param_4 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c08fa60();
    *(bool *)param_4 =
         (ulong)(lVar1 - (*(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x18))) < param_3;
  }
  return param_3;
}



/* Entry: 106ecea28; end: 106ecec33; -[GCDAsyncReadPacket readLengthForTermWithPreBuffer:found:] */

ulong FUN_106ecea28(ulong param_1,undefined8 param_2,ulong param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 uVar8;
  ulong uVar9;
  long unaff_x20;
  undefined1 *unaff_x23;
  undefined8 unaff_x24;
  ulong unaff_x26;
  ulong uVar10;
  long lVar11;
  undefined1 auStack_90 [8];
  undefined1 *puStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  long lStack_68;
  
  puVar1 = auStack_90;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = param_3;
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + 0x38);
  func_0x00010c08fa60();
  uVar10 = param_3;
  func_0x00010bf12620();
  if (uVar2 <= *(long *)(param_1 + 0x18) + uVar10) {
    uVar9 = *(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18);
    uVar4 = uVar10;
    if (uVar9 <= uVar10) {
      uVar4 = uVar9;
    }
    uVar9 = uVar10;
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar9 = uVar4;
    }
    puStack_70 = auStack_90;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    unaff_x23 = auStack_90 + -(uVar2 + 0xf & 0xfffffffffffffff0);
    unaff_x24 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf25f00();
    unaff_x26 = *(ulong *)(param_1 + 0x18);
    if (uVar2 - 1 <= *(ulong *)(param_1 + 0x18)) {
      unaff_x26 = uVar2 - 1;
    }
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010c0d3c60();
    lVar11 = *(long *)(param_1 + 0x10);
    lStack_80 = *(long *)(param_1 + 0x18);
    uVar4 = param_3;
    lStack_78 = lVar3;
    func_0x00010c121220();
    unaff_x20 = (uVar9 - uVar2) + unaff_x26 + 1;
    if (unaff_x20 == 0) {
      uVar8 = 0;
      uVar10 = uVar9;
      puVar1 = puStack_70;
    }
    else {
      uVar10 = uVar2 - unaff_x26;
      lVar11 = (lStack_78 + lVar11 + lStack_80) - unaff_x26;
      puStack_88 = param_4;
      do {
        uVar7 = uVar2;
        param_1 = uVar4;
        if (unaff_x26 == 0) {
          uVar5 = uVar4;
          _memcmp(uVar4,unaff_x24);
          if ((int)uVar5 == 0) {
            uVar10 = param_3;
            func_0x00010c121220();
            uVar10 = (uVar2 + uVar4) - uVar10;
            uVar8 = 1;
            param_4 = puStack_88;
            puVar1 = puStack_70;
            goto joined_r0x000106ecebb0;
          }
          unaff_x26 = 0;
          uVar4 = uVar4 + 1;
        }
        else {
          _memcpy(unaff_x23,lVar11,unaff_x26);
          _memcpy(unaff_x23 + unaff_x26,uVar4,uVar10);
          puVar1 = unaff_x23;
          _memcmp(unaff_x23,unaff_x24);
          if ((int)puVar1 == 0) {
            uVar8 = 1;
            param_4 = puStack_88;
            puVar1 = puStack_70;
            goto joined_r0x000106ecebb0;
          }
          lVar11 = lVar11 + 1;
          unaff_x26 = unaff_x26 - 1;
          uVar10 = uVar10 + 1;
        }
        unaff_x20 = unaff_x20 + -1;
      } while (unaff_x20 != 0);
      uVar8 = 0;
      uVar10 = uVar9;
      param_4 = puStack_88;
      param_1 = uVar4;
      puVar1 = puStack_70;
    }
joined_r0x000106ecebb0:
    puStack_70 = puVar1;
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = uVar8;
    }
  }
  uVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar10;
  }
  ___stack_chk_fail();
  *(ulong *)(puVar1 + -0x50) = unaff_x26;
  *(ulong *)(puVar1 + -0x48) = param_1;
  *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
  *(undefined1 **)(puVar1 + -0x38) = unaff_x23;
  *(ulong *)(puVar1 + -0x30) = uVar2;
  *(ulong *)(puVar1 + -0x28) = uVar10;
  *(long *)(puVar1 + -0x20) = unaff_x20;
  *(ulong *)(puVar1 + -0x18) = param_3;
  *(undefined1 **)(puVar1 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(puVar1 + -8) = FUN_106ecec34;
  lVar11 = *(long *)(uVar4 + 8);
  func_0x00010c0d3c60();
  uVar2 = *(ulong *)(uVar4 + 0x18);
  uVar6 = *(undefined8 *)(uVar4 + 0x38);
  func_0x00010bf25f00(uVar6);
  uVar10 = *(ulong *)(uVar4 + 0x38);
  func_0x00010c08fa60();
  lVar3 = 0;
  if (uVar10 <= uVar2) {
    lVar3 = (uVar2 - uVar10) + 1;
  }
  lVar11 = lVar11 + lVar3;
  uVar9 = lVar3 + uVar10;
  do {
    if (uVar2 + uVar7 < uVar9) {
      return 0xffffffffffffffff;
    }
    lVar3 = lVar11 + *(long *)(uVar4 + 0x10);
    _memcmp(lVar3,uVar6,uVar10);
    lVar11 = lVar11 + 1;
    uVar9 = uVar9 + 1;
  } while ((int)lVar3 != 0);
  return ((uVar2 + uVar7) - uVar9) + 1;
}



/* Entry: 106ecec34; end: 106ecece3; -[GCDAsyncReadPacket searchForTermAfterPreBuffering:] */

long FUN_106ecec34(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0d3c60();
  uVar6 = *(ulong *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf25f00(uVar2);
  uVar3 = *(ulong *)(param_1 + 0x38);
  func_0x00010c08fa60();
  lVar4 = 0;
  if (uVar3 <= uVar6) {
    lVar4 = (uVar6 - uVar3) + 1;
  }
  lVar1 = lVar1 + lVar4;
  uVar5 = lVar4 + uVar3;
  do {
    if (uVar6 + param_3 < uVar5) {
      return -1;
    }
    lVar4 = lVar1 + *(long *)(param_1 + 0x10);
    _memcmp(lVar4,uVar2,uVar3);
    lVar1 = lVar1 + 1;
    uVar5 = uVar5 + 1;
  } while ((int)lVar4 != 0);
  return ((uVar6 + param_3) - uVar5) + 1;
}



/* Entry: 106ecece4; end: 106eced13; -[GCDAsyncReadPacket .cxx_destruct] */

void FUN_106ecece4(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106eced14; end: 106eceda7; -[GCDAsyncWritePacket initWithData:timeout:tag:] */

undefined1 *
FUN_106eced14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f7c00;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106eceda8; end: 106ecedb3; -[GCDAsyncWritePacket .cxx_destruct] */

void FUN_106eceda8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ecedb4; end: 106ecee2b; -[GCDAsyncSpecialPacket initWithTLSSettings:] */

undefined1 * FUN_106ecedb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7c08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ecee2c; end: 106ecee37; -[GCDAsyncSpecialPacket .cxx_destruct] */

void FUN_106ecee2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ecee38; end: 106ecee47; -[GCDAsyncSocket init] */

void FUN_106ecee38(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c00a6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithDelegate_delegateQueue_s_1125e0380,0,0,0);
  return;
}



/* Entry: 106ecee48; end: 106ecee57; -[GCDAsyncSocket initWithSocketQueue:] */

void FUN_106ecee48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c00a6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithDelegate_delegateQueue_s_1125e0380,0,0,param_3);
  return;
}



/* Entry: 106ecee58; end: 106ecee5f; -[GCDAsyncSocket initWithDelegate:delegateQueue:] */

void FUN_106ecee58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c00a6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithDelegate_delegateQueue_s_1125e0380,param_3,param_4,0);
  return;
}



/* Entry: 106ecee60; end: 106ecf017; -[GCDAsyncSocket initWithDelegate:delegateQueue:socketQueue:] */

undefined1 *
FUN_106ecee60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f7c10;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = 0xffffffffffffffff;
    *(undefined4 *)((long)puVar1 + 0x28) = 0xffffffff;
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = 0;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x38) = 0;
    if (param_5 == 0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110e8b0f8;
      func_0x00010bdc3520();
      _dispatch_queue_create();
      uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
      *(undefined ***)((long)puVar1 + 0x58) = ppuVar3;
    }
    else {
      _objc_retain(param_5);
      uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
      *(long *)((long)puVar1 + 0x58) = param_5;
    }
    _objc_release(uVar2);
    *(undefined1 **)((long)puVar1 + 0x128) = (undefined1 *)((long)puVar1 + 0x128);
    _dispatch_queue_set_specific
              (*(undefined8 *)((long)puVar1 + 0x58),(undefined1 *)((long)puVar1 + 0x128),puVar1,0);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bffc4a0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0xa0);
    *(undefined **)((long)puVar1 + 0xa0) = puVar4;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0xb0);
    *(undefined8 *)((long)puVar1 + 0xb0) = 0;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bffc4a0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0xa8);
    *(undefined **)((long)puVar1 + 0xa8) = puVar4;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0xb8);
    *(undefined8 *)((long)puVar1 + 0xb8) = 0;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126d31d8;
    _objc_alloc();
    func_0x00010bffc4a0();
    uVar2 = *(undefined8 *)((long)puVar1 + 200);
    *(undefined **)((long)puVar1 + 200) = puVar4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x138) = 0x3fd3333333333333;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ecf018; end: 106ecf0df; -[GCDAsyncSocket dealloc] */

void FUN_106ecf018(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x10000;
  lVar1 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar1 == 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_106ecf0e0;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x58),&puStack_48);
  }
  else {
    func_0x00010bf3df40(param_1);
  }
  _objc_storeWeak(param_1 + 0x10,0);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  _objc_release(uVar2);
  puStack_50 = PTR_PTR_1126f7c10;
  lStack_58 = param_1;
  _objc_msgSendSuper2(&lStack_58,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106ecf0e0; end: 106ecf0eb;  */

void FUN_106ecf0e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3df50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_closeWithError__1125ad178,0);
  return;
}



/* Entry: 106ecf0ec; end: 106ecf0ff; +[GCDAsyncSocket socketFromConnectedSocketFD:socketQueue:error:] */

void FUN_106ecf0ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2463b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_socketFromConnectedSocketFD_dele_11266f310,param_3,0,0,param_4,param_5);
  return;
}



/* Entry: 106ecf100; end: 106ecf10b; +[GCDAsyncSocket socketFromConnectedSocketFD:delegate:delegateQueue:error:] */

void FUN_106ecf100(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2463b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_socketFromConnectedSocketFD_dele_11266f310);
  return;
}



/* Entry: 106ecf10c; end: 106ecf263; +[GCDAsyncSocket socketFromConnectedSocketFD:delegate:delegateQueue:socketQueue:error:] */

void FUN_106ecf10c(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  _objc_opt_class();
  _objc_alloc();
  func_0x00010c00a6c0();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_106ecf264;
  puStack_98 = &UNK_1109830a8;
  puStack_88 = &uStack_70;
  lStack_90 = param_1;
  uStack_80 = param_7;
  uStack_78 = param_3;
  _objc_retain();
  func_0x00010006eaa4(uVar2,&puStack_b0);
  lVar1 = 0;
  if (*(char *)(puStack_68 + 3) == '\0') {
    lVar1 = param_1;
  }
  _objc_retain(lVar1);
  _objc_release(lStack_90);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106ecf264; end: 106ecf41f;  */

void FUN_106ecf264(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  char cStack_47;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  _objc_autoreleasePoolPush();
  uStack_4c = 0x10;
  iVar1 = *(int *)(param_1 + 0x38);
  _getpeername(iVar1,&uStack_48,&uStack_4c);
  puVar5 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  if (iVar1 == 0) {
    if (cStack_47 == '\x02') {
      lVar7 = 0x20;
    }
    else {
      if (cStack_47 != '\x1e') {
        func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_106ecf2d8;
      }
      lVar7 = 0x24;
    }
    *(undefined4 *)(*(long *)(param_1 + 0x20) + lVar7) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(*(long *)(param_1 + 0x20) + 8) = 1;
    func_0x00010bf74240();
  }
  else {
    func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
    _objc_retainAutoreleasedReturnValue();
LAB_106ecf2d8:
    puVar3 = puVar5;
    func_0x00010c09e800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72040(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(param_1 + 0x30);
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
    if (lVar7 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      **(undefined8 **)(param_1 + 0x30) = puVar4;
    }
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  lVar7 = lVar2;
  _objc_autoreleasePoolPop();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_106ecf420;
  lVar6 = *(long *)(lVar7 + 0x128);
  lStack_70 = param_1;
  lStack_68 = lVar2;
  puStack_60 = &stack0xfffffffffffffff0;
  _dispatch_get_specific();
  if (lVar6 == 0) {
    puStack_a8 = &uStack_a0;
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    pcStack_88 = FUN_106ecf4f0;
    uStack_80 = 0x106ecf500;
    uStack_78 = 0;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_106ecf508;
    puStack_b8 = &UNK_11084b9d0;
    lStack_b0 = lVar7;
    puStack_98 = puStack_a8;
    func_0x00010006eaa4(*(undefined8 *)(lVar7 + 0x58),&puStack_d0);
    lVar7 = puStack_98[5];
    _objc_retain(lVar7);
    __Block_object_dispose(&uStack_a0,8);
    _objc_release(uStack_78);
  }
  else {
    lVar7 = lVar7 + 0x10;
    _objc_loadWeakRetained(lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 106ecf420; end: 106ecf4ef; -[GCDAsyncSocket delegate] */

void FUN_106ecf420(long param_1)

{
  long lVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar1 == 0) {
    puStack_58 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x3032000000;
    pcStack_38 = FUN_106ecf4f0;
    uStack_30 = 0x106ecf500;
    uStack_28 = 0;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106ecf508;
    puStack_68 = &UNK_11084b9d0;
    lStack_60 = param_1;
    puStack_48 = puStack_58;
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x58),&puStack_80);
    param_1 = puStack_48[5];
    _objc_retain(param_1);
    __Block_object_dispose(&uStack_50,8);
    _objc_release(uStack_28);
  }
  else {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106ecf4f0; end: 106ecf507;  */

void FUN_106ecf4f0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106ecf508; end: 106ecf543;  */

void FUN_106ecf508(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x10;
  _objc_loadWeakRetained();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106ecf544; end: 106ecf613; -[GCDAsyncSocket setDelegate:synchronously:] */

void FUN_106ecf544(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106ecf614;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  _objc_retain(param_3);
  uStack_38 = param_3;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    if (param_4 == 0) {
      func_0x00010007380c(*(undefined8 *)(param_1 + 0x58),ppuVar1);
    }
    else {
      func_0x00010006eaa4();
    }
  }
  else {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106ecf614; end: 106ecf61f;  */

void FUN_106ecf614(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)
            (*(long *)(param_1 + 0x20) + 0x10,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106ecf620; end: 106ecf627; -[GCDAsyncSocket setDelegate:] */

void FUN_106ecf620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18b670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setDelegate_synchronously__1126407b8,param_3,0);
  return;
}



/* Entry: 106ecf628; end: 106ecf62f; -[GCDAsyncSocket synchronouslySetDelegate:] */

void FUN_106ecf628(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18b670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setDelegate_synchronously__1126407b8,param_3,1);
  return;
}



/* Entry: 106ecf630; end: 106ecf733; -[GCDAsyncSocket delegateQueue] */

void FUN_106ecf630(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar1 == 0) {
    puStack_58 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x3032000000;
    pcStack_38 = FUN_106ecf4f0;
    uStack_30 = 0x106ecf500;
    uStack_28 = 0;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x106ecf700;
    puStack_68 = &UNK_11084b9d0;
    lStack_60 = param_1;
    puStack_48 = puStack_58;
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x58),&puStack_80);
    uVar2 = puStack_48[5];
    _objc_retain(uVar2);
    __Block_object_dispose(&uStack_50,8);
    _objc_release(uStack_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106ecf734; end: 106ecf803; -[GCDAsyncSocket setDelegateQueue:synchronously:] */

void FUN_106ecf734(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106ecf804;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  _objc_retain(param_3);
  uStack_38 = param_3;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    if (param_4 == 0) {
      func_0x00010007380c(*(undefined8 *)(param_1 + 0x58),ppuVar1);
    }
    else {
      func_0x00010006eaa4();
    }
  }
  else {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106ecf804; end: 106ecf82f;  */

void FUN_106ecf804(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106ecf830; end: 106ecf837; -[GCDAsyncSocket setDelegateQueue:] */

void FUN_106ecf830(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18b6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setDelegateQueue_synchronously__1126407d8,param_3,0);
  return;
}



/* Entry: 106ecf838; end: 106ecf83f; -[GCDAsyncSocket synchronouslySetDelegateQueue:] */

void FUN_106ecf838(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18b6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setDelegateQueue_synchronously__1126407d8,param_3,1);
  return;
}



/* Entry: 106ecf840; end: 106ecf977; -[GCDAsyncSocket getDelegate:delegateQueue:] */

void FUN_106ecf840(long param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar1 == 0) {
    puStack_a0 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_106ecf4f0;
    uStack_40 = 0x106ecf500;
    uStack_38 = 0;
    puStack_98 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_106ecf4f0;
    uStack_70 = 0x106ecf500;
    uStack_68 = 0;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_106ecf978;
    puStack_b0 = &UNK_110876070;
    lStack_a8 = param_1;
    puStack_88 = puStack_98;
    puStack_58 = puStack_a0;
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x58),&puStack_c8);
    if (param_3 != (long *)0x0) {
      lVar1 = puStack_58[5];
      _objc_retainAutorelease();
      *param_3 = lVar1;
    }
    if (param_4 != (undefined8 *)0x0) {
      uVar2 = puStack_88[5];
      _objc_retainAutorelease();
      *param_4 = uVar2;
    }
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  else {
    if (param_3 != (long *)0x0) {
      lVar1 = param_1 + 0x10;
      _objc_loadWeakRetained();
      _objc_autorelease();
      *param_3 = lVar1;
    }
    if (param_4 != (undefined8 *)0x0) {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      _objc_retainAutorelease();
      *param_4 = uVar2;
    }
  }
  return;
}



/* Entry: 106ecf978; end: 106ecf9d7;  */

void FUN_106ecf978(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_1 + 0x20) + 0x10;
  _objc_loadWeakRetained();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(long *)(lVar2 + 0x28) = lVar3;
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ecf9d8; end: 106ecfad7; -[GCDAsyncSocket setDelegate:delegateQueue:synchronously:] */

void FUN_106ecf9d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106ecfad8;
  puStack_60 = &UNK_110848ba8;
  lStack_58 = param_1;
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(param_4);
  ppuVar1 = &puStack_78;
  uStack_48 = param_4;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    if (param_5 == 0) {
      func_0x00010007380c(*(undefined8 *)(param_1 + 0x58),ppuVar1);
    }
    else {
      func_0x00010006eaa4();
    }
  }
  else {
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106ecfad8; end: 106ecfb17;  */

void FUN_106ecfad8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_storeWeak(*(long *)(param_1 + 0x20) + 0x10,*(undefined8 *)(param_1 + 0x28));
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(lVar2 + 0x18) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ecfb18; end: 106ecfb1f; -[GCDAsyncSocket setDelegate:delegateQueue:] */

void FUN_106ecfb18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18b610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setDelegate_delegateQueue_synchr_1126407a0,param_3,param_4,0);
  return;
}



/* Entry: 106ecfb20; end: 106ecfb27; -[GCDAsyncSocket synchronouslySetDelegate:delegateQueue:] */

void FUN_106ecfb20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18b610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setDelegate_delegateQueue_synchr_1126407a0,param_3,param_4,1);
  return;
}



/* Entry: 106ecfb28; end: 106ecfbcf; -[GCDAsyncSocket isIPv4Enabled] */

byte FUN_106ecfb28(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  
  lVar2 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    puStack_48 = &uStack_40;
    uStack_40 = 0;
    uStack_30 = 0x2020000000;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106ecfbd0;
    puStack_58 = &UNK_11084b9d0;
    lStack_50 = param_1;
    puStack_38 = puStack_48;
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x58),&puStack_70);
    bVar1 = *(byte *)(puStack_38 + 3);
    __Block_object_dispose(&uStack_40,8);
  }
  else {
    bVar1 = (*(ushort *)(param_1 + 0xc) & 1) == 0;
  }
  return bVar1 & 1;
}



/* Entry: 106ecfbd0; end: 106ecfbeb;  */

void FUN_106ecfbd0(long param_1)

{
  *(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       (*(byte *)(*(long *)(param_1 + 0x20) + 0xc) ^ 0xff) & 1;
  return;
}



/* Entry: 106ecfbec; end: 106ecfc7f; -[GCDAsyncSocket setIPv4Enabled:] */

void FUN_106ecfbec(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined1 uStack_28;
  
  ppuVar1 = &puStack_50;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106ecfc80;
  puStack_38 = &UNK_110845ce0;
  lStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    func_0x00010007380c(*(undefined8 *)(param_1 + 0x58),ppuVar1);
  }
  else {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  _objc_release(ppuVar1);
  return;
}



/* Entry: 106ecfc80; end: 106ecfc9b;  */

void FUN_106ecfc80(long param_1)

{
  *(ushort *)(*(long *)(param_1 + 0x20) + 0xc) =
       *(ushort *)(*(long *)(param_1 + 0x20) + 0xc) & 0xfffe |
       ~(ushort)*(byte *)(param_1 + 0x28) & 1;
  return;
}



/* Entry: 106ecfc9c; end: 106ecfd43; -[GCDAsyncSocket isIPv6Enabled] */

byte FUN_106ecfc9c(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  
  lVar2 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    puStack_48 = &uStack_40;
    uStack_40 = 0;
    uStack_30 = 0x2020000000;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106ecfd44;
    puStack_58 = &UNK_11084b9d0;
    lStack_50 = param_1;
    puStack_38 = puStack_48;
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x58),&puStack_70);
    bVar1 = *(byte *)(puStack_38 + 3);
    __Block_object_dispose(&uStack_40,8);
  }
  else {
    bVar1 = (*(ushort *)(param_1 + 0xc) & 2) == 0;
  }
  return bVar1 & 1;
}



/* Entry: 106ecfd44; end: 106ecfd5f;  */

void FUN_106ecfd44(long param_1)

{
  *(bool *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       (*(ushort *)(*(long *)(param_1 + 0x20) + 0xc) & 2) == 0;
  return;
}



/* Entry: 106ecfd60; end: 106ecfdf3; -[GCDAsyncSocket setIPv6Enabled:] */

void FUN_106ecfd60(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined1 uStack_28;
  
  ppuVar1 = &puStack_50;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106ecfdf4;
  puStack_38 = &UNK_110845ce0;
  lStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    func_0x00010007380c(*(undefined8 *)(param_1 + 0x58),ppuVar1);
  }
  else {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  _objc_release(ppuVar1);
  return;
}



/* Entry: 106ecfdf4; end: 106ecfe1b;  */

void FUN_106ecfdf4(long param_1)

{
  ushort uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = 2;
  }
  *(ushort *)(*(long *)(param_1 + 0x20) + 0xc) =
       *(ushort *)(*(long *)(param_1 + 0x20) + 0xc) & 0xfffd | uVar1;
  return;
}



/* Entry: 106ecfe1c; end: 106ecfec3; -[GCDAsyncSocket isIPv4PreferredOverIPv6] */

byte FUN_106ecfe1c(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  
  lVar2 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    puStack_48 = &uStack_40;
    uStack_40 = 0;
    uStack_30 = 0x2020000000;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106ecfec4;
    puStack_58 = &UNK_11084b9d0;
    lStack_50 = param_1;
    puStack_38 = puStack_48;
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x58),&puStack_70);
    bVar1 = *(byte *)(puStack_38 + 3);
    __Block_object_dispose(&uStack_40,8);
  }
  else {
    bVar1 = (*(ushort *)(param_1 + 0xc) & 4) == 0;
  }
  return bVar1 & 1;
}



/* Entry: 106ecfec4; end: 106ecfedf;  */

void FUN_106ecfec4(long param_1)

{
  *(bool *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       (*(ushort *)(*(long *)(param_1 + 0x20) + 0xc) & 4) == 0;
  return;
}



/* Entry: 106ecfee0; end: 106ecff73; -[GCDAsyncSocket setIPv4PreferredOverIPv6:] */

void FUN_106ecfee0(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined1 uStack_28;
  
  ppuVar1 = &puStack_50;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106ecff74;
  puStack_38 = &UNK_110845ce0;
  lStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    func_0x00010007380c(*(undefined8 *)(param_1 + 0x58),ppuVar1);
  }
  else {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  _objc_release(ppuVar1);
  return;
}



/* Entry: 106ecff74; end: 106ecff9b;  */

void FUN_106ecff74(long param_1)

{
  ushort uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = 4;
  }
  *(ushort *)(*(long *)(param_1 + 0x20) + 0xc) =
       *(ushort *)(*(long *)(param_1 + 0x20) + 0xc) & 0xfffb | uVar1;
  return;
}



/* Entry: 106ecff9c; end: 106ed0077; -[GCDAsyncSocket alternateAddressDelay] */

undefined8 FUN_106ecff9c(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  
  ppuVar1 = &puStack_80;
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106ed0078;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x58),ppuVar1);
  }
  else {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  uVar3 = puStack_48[3];
  _objc_release(ppuVar1);
  __Block_object_dispose(&uStack_50,8);
  return uVar3;
}



/* Entry: 106ed0078; end: 106ed008b;  */

void FUN_106ed0078(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x138);
  return;
}



/* Entry: 106ed008c; end: 106ed011f; -[GCDAsyncSocket setAlternateAddressDelay:] */

void FUN_106ed008c(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  ppuVar1 = &puStack_50;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106ed0120;
  puStack_38 = &UNK_110848c48;
  lStack_30 = param_2;
  uStack_28 = param_1;
  _objc_retainBlock();
  lVar2 = *(long *)(param_2 + 0x128);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    func_0x00010007380c(*(undefined8 *)(param_2 + 0x58),ppuVar1);
  }
  else {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  _objc_release(ppuVar1);
  return;
}



/* Entry: 106ed0120; end: 106ed012f;  */

void FUN_106ed0120(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x138) = *(undefined8 *)(param_1 + 0x28);
  return;
}



/* Entry: 106ed0130; end: 106ed022b; -[GCDAsyncSocket userData] */

void FUN_106ed0130(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  ppuVar1 = &puStack_80;
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106ecf4f0;
  uStack_30 = 0x106ecf500;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106ed022c;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x58),ppuVar1);
  }
  else {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  uVar3 = puStack_48[5];
  _objc_retain(uVar3);
  _objc_release(ppuVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106ed022c; end: 106ed025f;  */

void FUN_106ed022c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x130);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ed0260; end: 106ed031f; -[GCDAsyncSocket setUserData:] */

void FUN_106ed0260(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106ed0320;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  _objc_retain(param_3);
  uStack_38 = param_3;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    func_0x00010007380c(*(undefined8 *)(param_1 + 0x58),ppuVar1);
  }
  else {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106ed0320; end: 106ed0363;  */

void FUN_106ed0320(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  if (*(long *)(lVar1 + 0x130) != lVar2) {
    _objc_retain(lVar2);
    uVar3 = *(undefined8 *)(lVar1 + 0x130);
    *(long *)(lVar1 + 0x130) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 106ed0364; end: 106ed0373; -[GCDAsyncSocket acceptOnPort:error:] */

void FUN_106ed0364(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010beecab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_acceptOnInterface_port_error__112598c50,0,param_3,param_4);
  return;
}



/* Entry: 106ed0374; end: 106ed0577; -[GCDAsyncSocket acceptOnInterface:port:error:] */

byte FUN_106ed0374(long param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined2 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  ppuVar4 = &puStack_140;
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf51e00();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_106ecf4f0;
  uStack_a0 = 0x106ecf500;
  uStack_98 = 0;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_106ed0578;
  puStack_d8 = &UNK_1109830d8;
  ppuVar3 = &puStack_f0;
  lStack_d0 = param_1;
  puStack_c8 = &uStack_c0;
  puStack_b8 = &uStack_c0;
  puStack_88 = &uStack_90;
  _objc_retainBlock();
  puStack_140 = puVar1;
  uStack_138 = 0xc2000000;
  pcStack_130 = FUN_106ed0728;
  puStack_128 = &UNK_110983108;
  lStack_120 = param_1;
  puStack_108 = &uStack_c0;
  _objc_retain(uVar2);
  uStack_118 = uVar2;
  uStack_f8 = param_4;
  _objc_retain(ppuVar3);
  ppuStack_110 = ppuVar3;
  puStack_100 = &uStack_90;
  _objc_retainBlock();
  lVar5 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar5 == 0) {
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x58),ppuVar4);
  }
  else {
    (**(code **)((long)ppuVar4 + 0x10))(ppuVar4);
  }
  bVar7 = *(byte *)(puStack_88 + 3);
  if ((param_5 != (undefined8 *)0x0) && ((bVar7 & 1) == 0)) {
    uVar6 = puStack_b8[5];
    _objc_retainAutorelease();
    *param_5 = uVar6;
    bVar7 = *(byte *)(puStack_88 + 3);
  }
  _objc_release(ppuVar4);
  _objc_release(ppuStack_110);
  _objc_release(uStack_118);
  _objc_release(ppuVar3);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uVar2);
  _objc_release(param_3);
  return bVar7 & 1;
}



/* Entry: 106ed0578; end: 106ed0727;  */

undefined8 FUN_106ed0578(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uStack_44;
  
  _objc_retain(param_3);
  _socket(param_2,1,0);
  if ((int)param_2 == -1) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    ___error();
    func_0x00010bf992a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = uVar4;
    _objc_release(uVar2);
  }
  else {
    uVar4 = param_2;
    _fcntl();
    if ((int)uVar4 == -1) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      ___error();
    }
    else {
      uStack_44 = 1;
      uVar4 = param_2;
      _setsockopt(param_2,0xffff,4,&uStack_44,4);
      if ((int)uVar4 != -1) {
        uVar4 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bf25f00();
        uVar2 = param_3;
        func_0x00010c08fa60(param_3);
        uVar1 = param_2;
        _bind(param_2,uVar4,uVar2);
        if (((int)uVar1 != -1) && (uVar4 = param_2, _listen(param_2,0x400), (int)uVar4 != -1))
        goto LAB_106ed0704;
      }
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      ___error();
    }
    func_0x00010bf992a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = uVar4;
    _objc_release(uVar2);
    _close(param_2);
  }
  param_2 = 0xffffffff;
LAB_106ed0704:
  _objc_release(param_3);
  return param_2;
}



/* Entry: 106ed0728; end: 106ed0beb;  */

void FUN_106ed0728(long param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  ushort uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined4 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [8];
  undefined4 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined4 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined4 uStack_88;
  undefined1 auStack_80 [8];
  long lStack_78;
  long lStack_70;
  
  lVar6 = param_1;
  _objc_autoreleasePoolPush();
  lVar13 = *(long *)(param_1 + 0x20) + 0x10;
  _objc_loadWeakRetained();
  _objc_release();
  uVar7 = *(ulong *)(param_1 + 0x20);
  if (((lVar13 != 0) && (*(long *)(uVar7 + 0x18) != 0)) &&
     (uVar3 = *(ushort *)(uVar7 + 0xc), ((uVar3 ^ 0xffff) & 3) != 0)) {
    func_0x00010c070b20();
    uVar4 = uVar7 & 1;
    uVar7 = *(ulong *)(param_1 + 0x20);
    if (uVar4 != 0) {
      func_0x00010c12adc0(*(undefined8 *)(*(ulong *)(param_1 + 0x20) + 0xa0));
      func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8));
      lStack_78 = 0;
      lStack_70 = 0;
      func_0x00010bfc6740(*(undefined8 *)(param_1 + 0x20));
      lVar10 = lStack_70;
      _objc_retain(lStack_70);
      lVar13 = lStack_78;
      _objc_retain(lStack_78);
      if (lVar10 == 0 && lVar13 == 0) {
        uVar8 = *(undefined8 *)(param_1 + 0x20);
LAB_106ed0898:
        func_0x00010bf15080();
        _objc_retainAutoreleasedReturnValue();
        lVar14 = *(long *)(*(long *)(param_1 + 0x38) + 8);
        uVar11 = *(undefined8 *)(lVar14 + 0x28);
        *(undefined8 *)(lVar14 + 0x28) = uVar8;
        _objc_release(uVar11);
      }
      else {
        if (((uVar3 & 1) != 0) && (lVar13 == 0)) {
          uVar8 = *(undefined8 *)(param_1 + 0x20);
          goto LAB_106ed0898;
        }
        if (((uVar3 >> 1 & 1) != 0) && (lVar10 == 0)) {
          uVar8 = *(undefined8 *)(param_1 + 0x20);
          goto LAB_106ed0898;
        }
        uVar1 = uVar3 >> 1 & 1;
        if (lVar13 == 0) {
          uVar1 = 1;
        }
        if ((uVar3 & 1) == 0 && lVar10 != 0) {
          lVar14 = *(long *)(param_1 + 0x30);
          (**(code **)(lVar14 + 0x10))(lVar14,2,lVar10);
          *(int *)(*(long *)(param_1 + 0x20) + 0x20) = (int)lVar14;
          lVar14 = *(long *)(param_1 + 0x20);
          iVar12 = *(int *)(lVar14 + 0x20);
          if (iVar12 != -1) {
            if (uVar1 == 0) {
              if (*(short *)(param_1 + 0x48) == 0) {
                lVar14 = lVar13;
                _objc_retainAutorelease();
                func_0x00010c0d3c60();
                uVar5 = (uint)*(undefined8 *)(param_1 + 0x20);
                func_0x00010c09dd80();
                *(ushort *)(lVar14 + 2) =
                     (ushort)(uVar5 >> 8) & 0xff | (ushort)((uVar5 & 0xff00ff) << 8);
              }
              goto LAB_106ed0948;
            }
LAB_106ed097c:
            puVar9 = PTR___dispatch_source_type_read_11034be30;
            _dispatch_source_create
                      (PTR___dispatch_source_type_read_11034be30,(long)iVar12,0,
                       *(undefined8 *)(lVar14 + 0x58));
            uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
            *(undefined **)(*(long *)(param_1 + 0x20) + 0x60) = puVar9;
            _objc_release(uVar8);
            uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x20);
            uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
            _objc_retain(uVar8);
            _objc_initWeak(auStack_80,*(undefined8 *)(param_1 + 0x20));
            puVar9 = PTR___NSConcreteStackBlock_11034bd00;
            uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
            puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_b0 = 0xc2000000;
            pcStack_a8 = FUN_106ed0bec;
            puStack_a0 = &UNK_110870610;
            _objc_copyWeak(auStack_90,auStack_80);
            uStack_98 = uVar8;
            uStack_88 = uVar2;
            _objc_retain(uVar8);
            _dispatch_source_set_event_handler(uVar11,&puStack_b8);
            puStack_e0 = puVar9;
            uStack_d8 = 0xc0000000;
            pcStack_d0 = FUN_106ed0c68;
            puStack_c8 = &UNK_1108c9a68;
            uStack_c0 = uVar2;
            _dispatch_source_set_cancel_handler
                      (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60),&puStack_e0);
            _dispatch_resume(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60));
            _objc_release(uStack_98);
            _objc_release(uVar8);
            _objc_destroyWeak(auStack_90);
            _objc_destroyWeak(auStack_80);
            lVar14 = *(long *)(param_1 + 0x20);
            if (uVar1 == 0) {
              iVar12 = *(int *)(lVar14 + 0x24);
LAB_106ed0a98:
              puVar9 = PTR___dispatch_source_type_read_11034be30;
              _dispatch_source_create
                        (PTR___dispatch_source_type_read_11034be30,(long)iVar12,0,
                         *(undefined8 *)(lVar14 + 0x58));
              uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
              *(undefined **)(*(long *)(param_1 + 0x20) + 0x68) = puVar9;
              _objc_release(uVar8);
              uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x24);
              uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
              _objc_retain(uVar8);
              _objc_initWeak(auStack_80,*(undefined8 *)(param_1 + 0x20));
              puVar9 = PTR___NSConcreteStackBlock_11034bd00;
              uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
              puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_110 = 0xc2000000;
              pcStack_108 = FUN_106ed0c70;
              puStack_100 = &UNK_110870610;
              _objc_copyWeak(auStack_f0,auStack_80);
              uStack_f8 = uVar8;
              uStack_e8 = uVar2;
              _objc_retain(uVar8);
              _dispatch_source_set_event_handler(uVar11,&puStack_118);
              puStack_140 = puVar9;
              uStack_138 = 0xc0000000;
              pcStack_130 = FUN_106ed0cec;
              puStack_128 = &UNK_1108c9a68;
              uStack_120 = uVar2;
              _dispatch_source_set_cancel_handler
                        (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68),&puStack_140);
              _dispatch_resume(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68));
              _objc_release(uStack_f8);
              _objc_release(uVar8);
              _objc_destroyWeak(auStack_f0);
              _objc_destroyWeak(auStack_80);
              goto LAB_106ed0ba8;
            }
            goto LAB_106ed0bac;
          }
        }
        else if (uVar1 == 0) {
LAB_106ed0948:
          lVar14 = *(long *)(param_1 + 0x30);
          (**(code **)(lVar14 + 0x10))(lVar14,0x1e,lVar13);
          *(int *)(*(long *)(param_1 + 0x20) + 0x24) = (int)lVar14;
          lVar14 = *(long *)(param_1 + 0x20);
          iVar12 = *(int *)(lVar14 + 0x24);
          if (iVar12 != -1) {
            if ((uVar3 & 1) == 0 && lVar10 != 0) {
              iVar12 = *(int *)(lVar14 + 0x20);
              goto LAB_106ed097c;
            }
            goto LAB_106ed0a98;
          }
          if (*(int *)(lVar14 + 0x20) != -1) {
            _close();
            *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x20) = 0xffffffff;
          }
        }
        else {
LAB_106ed0ba8:
          lVar14 = *(long *)(param_1 + 0x20);
LAB_106ed0bac:
          *(uint *)(lVar14 + 8) = *(uint *)(lVar14 + 8) | 1;
          *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = 1;
        }
      }
      _objc_release(lVar13);
      goto LAB_106ed0840;
    }
  }
  func_0x00010bf14fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  lVar10 = *(long *)(lVar13 + 0x28);
  *(ulong *)(lVar13 + 0x28) = uVar7;
LAB_106ed0840:
  _objc_release(lVar10);
  _objc_autoreleasePoolPop(lVar6);
  return;
}



/* Entry: 106ed0bec; end: 106ed0c67;  */

void FUN_106ed0bec(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar2 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    uVar4 = *(ulong *)(param_1 + 0x20);
    _dispatch_source_get_data();
    uVar6 = 1;
    do {
      lVar5 = lVar3;
      func_0x00010bf87340(lVar3,param_2,*(undefined4 *)(param_1 + 0x30));
      bVar1 = uVar6 < uVar4;
      uVar6 = uVar6 + 1;
    } while ((int)lVar5 != 0 && bVar1);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar2);
  return;
}



/* Entry: 106ed0c68; end: 106ed0c6f;  */

void FUN_106ed0c68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdd6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__close_11034bfc8)(*(undefined4 *)(param_1 + 0x20));
  return;
}



/* Entry: 106ed0c70; end: 106ed0ceb;  */

void FUN_106ed0c70(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar2 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    uVar4 = *(ulong *)(param_1 + 0x20);
    _dispatch_source_get_data();
    uVar6 = 1;
    do {
      lVar5 = lVar3;
      func_0x00010bf87340(lVar3,param_2,*(undefined4 *)(param_1 + 0x30));
      bVar1 = uVar6 < uVar4;
      uVar6 = uVar6 + 1;
    } while ((int)lVar5 != 0 && bVar1);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar2);
  return;
}



/* Entry: 106ed0cec; end: 106ed0cf3;  */

void FUN_106ed0cec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdd6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__close_11034bfc8)(*(undefined4 *)(param_1 + 0x20));
  return;
}



/* Entry: 106ed0cf4; end: 106ed0ed3; -[GCDAsyncSocket acceptOnUrl:error:] */

byte FUN_106ed0cf4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_106ecf4f0;
  uStack_90 = 0x106ecf500;
  uStack_88 = 0;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_106ed0ed4;
  puStack_c8 = &UNK_1109830d8;
  ppuVar2 = &puStack_e0;
  lStack_c0 = param_1;
  puStack_b8 = &uStack_b0;
  puStack_a8 = &uStack_b0;
  puStack_78 = &uStack_80;
  _objc_retainBlock();
  puStack_128 = puVar1;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_106ed1084;
  puStack_110 = &UNK_11084be40;
  lStack_108 = param_1;
  puStack_f0 = &uStack_b0;
  _objc_retain(param_3);
  uStack_100 = param_3;
  _objc_retain(ppuVar2);
  ppuVar3 = &puStack_128;
  ppuStack_f8 = ppuVar2;
  puStack_e8 = &uStack_80;
  _objc_retainBlock();
  lVar4 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar4 == 0) {
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x58),ppuVar3);
  }
  else {
    (*(code *)ppuVar3[2])(ppuVar3);
  }
  bVar6 = *(byte *)(puStack_78 + 3);
  if ((param_4 != (undefined8 *)0x0) && ((bVar6 & 1) == 0)) {
    uVar5 = puStack_a8[5];
    _objc_retainAutorelease();
    *param_4 = uVar5;
    bVar6 = *(byte *)(puStack_78 + 3);
  }
  _objc_release(ppuVar3);
  _objc_release(ppuStack_f8);
  _objc_release(uStack_100);
  _objc_release(ppuVar2);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(uStack_88);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(param_3);
  return bVar6 & 1;
}



/* Entry: 106ed0ed4; end: 106ed1083;  */

undefined8 FUN_106ed0ed4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uStack_44;
  
  _objc_retain(param_3);
  _socket(param_2,1,0);
  if ((int)param_2 == -1) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    ___error();
    func_0x00010bf992a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = uVar4;
    _objc_release(uVar2);
  }
  else {
    uVar4 = param_2;
    _fcntl();
    if ((int)uVar4 == -1) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      ___error();
    }
    else {
      uStack_44 = 1;
      uVar4 = param_2;
      _setsockopt(param_2,0xffff,4,&uStack_44,4);
      if ((int)uVar4 != -1) {
        uVar4 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bf25f00();
        uVar2 = param_3;
        func_0x00010c08fa60(param_3);
        uVar1 = param_2;
        _bind(param_2,uVar4,uVar2);
        if (((int)uVar1 != -1) && (uVar4 = param_2, _listen(param_2,0x400), (int)uVar4 != -1))
        goto LAB_106ed1060;
      }
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      ___error();
    }
    func_0x00010bf992a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = uVar4;
    _objc_release(uVar2);
    _close(param_2);
  }
  param_2 = 0xffffffff;
LAB_106ed1060:
  _objc_release(param_3);
  return param_2;
}



/* Entry: 106ed1084; end: 106ed13ab;  */

void FUN_106ed1084(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined4 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = param_1;
  _objc_autoreleasePoolPush();
  lVar6 = *(long *)(param_1 + 0x20) + 0x10;
  _objc_loadWeakRetained();
  _objc_release();
  uVar3 = *(ulong *)(param_1 + 0x20);
  uVar4 = uVar3;
  if ((lVar6 != 0) && (*(long *)(uVar3 + 0x18) != 0)) {
    func_0x00010c070b20();
    uVar4 = *(ulong *)(param_1 + 0x20);
    if ((uVar3 & 1) != 0) {
      func_0x00010c12adc0(*(undefined8 *)(uVar4 + 0xa0));
      func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8));
      puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = *(long *)(param_1 + 0x28);
      func_0x00010c0f5800();
      _objc_retainAutoreleasedReturnValue();
      if ((lVar6 == 0) || (puVar7 = puVar5, func_0x00010bfacbe0(), (int)puVar7 == 0)) {
        uVar10 = 0;
LAB_106ed11fc:
        lVar11 = *(long *)(param_1 + 0x20);
        func_0x00010bfc6760();
        _objc_retainAutoreleasedReturnValue();
        if (lVar11 == 0) {
          uVar8 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010bf15080();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 8);
          uVar12 = *(undefined8 *)(lVar9 + 0x28);
          *(undefined8 *)(lVar9 + 0x28) = uVar8;
        }
        else {
          lVar9 = *(long *)(param_1 + 0x30);
          (**(code **)(lVar9 + 0x10))(lVar9,1,lVar11);
          *(int *)(*(long *)(param_1 + 0x20) + 0x28) = (int)lVar9;
          lVar9 = *(long *)(param_1 + 0x20);
          if (*(int *)(lVar9 + 0x28) == -1) goto LAB_106ed138c;
          uVar12 = *(undefined8 *)(param_1 + 0x28);
          _objc_retain(uVar12);
          uVar8 = *(undefined8 *)(lVar9 + 0x30);
          *(undefined8 *)(lVar9 + 0x30) = uVar12;
          _objc_release(uVar8);
          puVar7 = PTR___dispatch_source_type_read_11034be30;
          _dispatch_source_create
                    (PTR___dispatch_source_type_read_11034be30,
                     (long)*(int *)(*(long *)(param_1 + 0x20) + 0x28),0,
                     *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58));
          uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
          *(undefined **)(*(long *)(param_1 + 0x20) + 0x70) = puVar7;
          _objc_release(uVar8);
          uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x28);
          uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
          _objc_retain(uVar12);
          puVar7 = PTR___NSConcreteStackBlock_11034bd00;
          lStack_78 = *(long *)(param_1 + 0x20);
          uVar8 = *(undefined8 *)(lStack_78 + 0x70);
          puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_98 = 0xc2000000;
          pcStack_90 = FUN_106ed13ac;
          puStack_88 = &UNK_1108a7688;
          uStack_80 = uVar12;
          uStack_70 = uVar1;
          _objc_retain(uVar12);
          _dispatch_source_set_event_handler(uVar8,&puStack_a0);
          puStack_c8 = puVar7;
          uStack_c0 = 0xc0000000;
          pcStack_b8 = FUN_106ed1408;
          puStack_b0 = &UNK_1108c9a68;
          uStack_a8 = uVar1;
          _dispatch_source_set_cancel_handler
                    (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70),&puStack_c8);
          _dispatch_resume(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70));
          *(uint *)(*(long *)(param_1 + 0x20) + 8) = *(uint *)(*(long *)(param_1 + 0x20) + 8) | 1;
          *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = 1;
          _objc_release(uStack_80);
        }
        _objc_release(uVar12);
      }
      else {
        uStack_68 = 0;
        puVar7 = puVar5;
        func_0x00010c12cc60();
        uVar10 = uStack_68;
        _objc_retain(uStack_68);
        if (((ulong)puVar7 & 1) != 0) goto LAB_106ed11fc;
        uVar8 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c0ede80();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 8);
        lVar11 = *(long *)(lVar9 + 0x28);
        *(undefined8 *)(lVar9 + 0x28) = uVar8;
      }
LAB_106ed138c:
      _objc_release(lVar11);
      _objc_release(lVar6);
      _objc_release(puVar5);
      goto LAB_106ed11cc;
    }
  }
  func_0x00010bf14fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar10 = *(undefined8 *)(lVar6 + 0x28);
  *(ulong *)(lVar6 + 0x28) = uVar4;
LAB_106ed11cc:
  _objc_release(uVar10);
  _objc_autoreleasePoolPop(lVar2);
  return;
}



/* Entry: 106ed13ac; end: 106ed1407;  */

void FUN_106ed13ac(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  lVar2 = param_1;
  _objc_autoreleasePoolPush();
  uVar3 = *(ulong *)(param_1 + 0x20);
  _dispatch_source_get_data();
  uVar5 = 1;
  do {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf87340(uVar4,param_2,*(undefined4 *)(param_1 + 0x30));
    bVar1 = uVar5 < uVar3;
    uVar5 = uVar5 + 1;
  } while ((int)uVar4 != 0 && bVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar2);
  return;
}



/* Entry: 106ed1408; end: 106ed140f;  */

void FUN_106ed1408(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdd6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__close_11034bfc8)(*(undefined4 *)(param_1 + 0x20));
  return;
}



/* Entry: 106ed1410; end: 106ed1657; -[GCDAsyncSocket doAccept:] */

void FUN_106ed1410(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 unaff_x20;
  undefined *unaff_x21;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar8;
  undefined8 unaff_x24;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined4 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 auStack_c4 [27];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((int)param_3 == *(int *)(param_1 + 0x20)) {
    uStack_c8 = 0x10;
    _accept(param_3,auStack_c4,&uStack_c8);
    if ((int)param_3 != -1) {
      unaff_x21 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64a00();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = 0;
      goto LAB_106ed153c;
    }
  }
  else if ((int)param_3 == *(int *)(param_1 + 0x24)) {
    uStack_c8 = 0x1c;
    _accept(param_3,auStack_c4,&uStack_c8);
    if ((int)param_3 != -1) {
      unaff_x21 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64a00();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = 1;
LAB_106ed153c:
      uStack_110 = 4;
      uVar7 = param_3;
      _fcntl(param_3,4);
      unaff_x20 = param_3;
      if ((int)uVar7 != -1) {
        auStack_c4[0] = 1;
        _setsockopt(param_3,0xffff,0x1022,auStack_c4,4);
        if (*(long *)(param_1 + 0x18) != 0) {
          unaff_x22 = param_1 + 0x10;
          _objc_loadWeakRetained();
          unaff_x23 = *(undefined8 *)(param_1 + 0x18);
          puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_100 = 0xc2000000;
          pcStack_f8 = FUN_106ed1658;
          puStack_f0 = &UNK_11084d788;
          lStack_e8 = unaff_x22;
          _objc_retain(unaff_x21);
          uStack_d0 = (undefined4)unaff_x24;
          uStack_cc = (undefined4)param_3;
          puStack_e0 = unaff_x21;
          lStack_d8 = param_1;
          _objc_retain(unaff_x22);
          func_0x00010007380c(unaff_x23,&puStack_108);
          _objc_release(puStack_e0);
          _objc_release(lStack_e8);
          _objc_release(unaff_x22);
        }
        _objc_release(unaff_x21);
        lVar3 = 1;
        goto LAB_106ed1620;
      }
      _close(param_3);
      _objc_release(unaff_x21);
    }
  }
  else {
    uStack_c8 = 0x6a;
    _accept(param_3,auStack_c4,&uStack_c8);
    if ((int)param_3 != -1) {
      unaff_x21 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64a00();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = 2;
      goto LAB_106ed153c;
    }
  }
  lVar3 = 0;
LAB_106ed1620:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_106ed1658;
  lVar4 = lVar3;
  uStack_150 = unaff_x24;
  uStack_148 = unaff_x23;
  lStack_140 = unaff_x22;
  puStack_138 = unaff_x21;
  uStack_130 = unaff_x20;
  lStack_128 = param_1;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_autoreleasePoolPush();
  uVar5 = *(ulong *)(lVar3 + 0x20);
  _objc_opt_respondsToSelector(uVar5,PTR_s_newSocketQueueForConnectionFromA_112613e40);
  if ((uVar5 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lVar3 + 0x20);
    func_0x00010c0d90a0(uVar7);
  }
  lVar6 = *(long *)(lVar3 + 0x30);
  _objc_opt_class();
  _objc_alloc();
  func_0x00010c00a6c0();
  lVar1 = 0x24;
  if (*(int *)(lVar3 + 0x38) != 1) {
    lVar1 = 0x28;
  }
  lVar2 = 0x20;
  if (*(int *)(lVar3 + 0x38) != 0) {
    lVar2 = lVar1;
  }
  *(undefined4 *)(lVar6 + lVar2) = *(undefined4 *)(lVar3 + 0x3c);
  *(undefined4 *)(lVar6 + 8) = 3;
  uVar8 = *(undefined8 *)(lVar6 + 0x58);
  puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_106ed17a0;
  puStack_168 = &UNK_110868698;
  _objc_retain();
  uStack_158 = *(undefined4 *)(lVar3 + 0x3c);
  lStack_160 = lVar6;
  func_0x00010007380c(uVar8,&puStack_180);
  uVar5 = *(ulong *)(lVar3 + 0x20);
  _objc_opt_respondsToSelector(uVar5,PTR_s_socket_didAcceptNewSocket__11266f2a0);
  if ((uVar5 & 1) != 0) {
    func_0x00010c2461e0(*(undefined8 *)(lVar3 + 0x20));
  }
  _objc_release(lStack_160);
  _objc_release(lVar6);
  _objc_release(uVar7);
  _objc_autoreleasePoolPop(lVar4);
  return;
}



/* Entry: 106ed1658; end: 106ed179f;  */

void FUN_106ed1658(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined4 uStack_48;
  
  lVar3 = param_1;
  _objc_autoreleasePoolPush();
  uVar4 = *(ulong *)(param_1 + 0x20);
  _objc_opt_respondsToSelector(uVar4,PTR_s_newSocketQueueForConnectionFromA_112613e40);
  if ((uVar4 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0d90a0(uVar6);
  }
  lVar5 = *(long *)(param_1 + 0x30);
  _objc_opt_class();
  _objc_alloc();
  func_0x00010c00a6c0();
  lVar1 = 0x24;
  if (*(int *)(param_1 + 0x38) != 1) {
    lVar1 = 0x28;
  }
  lVar2 = 0x20;
  if (*(int *)(param_1 + 0x38) != 0) {
    lVar2 = lVar1;
  }
  *(undefined4 *)(lVar5 + lVar2) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(lVar5 + 8) = 3;
  uVar7 = *(undefined8 *)(lVar5 + 0x58);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106ed17a0;
  puStack_58 = &UNK_110868698;
  _objc_retain();
  uStack_48 = *(undefined4 *)(param_1 + 0x3c);
  lStack_50 = lVar5;
  func_0x00010007380c(uVar7,&puStack_70);
  uVar4 = *(ulong *)(param_1 + 0x20);
  _objc_opt_respondsToSelector(uVar4,PTR_s_socket_didAcceptNewSocket__11266f2a0);
  if ((uVar4 & 1) != 0) {
    func_0x00010c2461e0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(lStack_50);
  _objc_release(lVar5);
  _objc_release(uVar6);
  _objc_autoreleasePoolPop(lVar3);
  return;
}



/* Entry: 106ed17a0; end: 106ed17d3;  */

void FUN_106ed17a0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c229280(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined4 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106ed17d4; end: 106ed19a3; -[GCDAsyncSocket preConnectWithInterface:error:] */

undefined8 FUN_106ed17d4(ulong param_1,undefined8 param_2,long param_3,ulong *param_4)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  lVar3 = param_1 + 0x10;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar3 == 0) {
    if (param_4 != (ulong *)0x0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e8b458;
LAB_106ed1874:
      func_0x00010bf14fa0(param_1,param_2,ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      uVar6 = 0;
      *param_4 = param_1;
      goto LAB_106ed193c;
    }
  }
  else if (*(long *)(param_1 + 0x18) == 0) {
    if (param_4 != (ulong *)0x0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e8b478;
      goto LAB_106ed1874;
    }
  }
  else {
    uVar4 = param_1;
    func_0x00010c070b20();
    if ((uVar4 & 1) == 0) {
      if (param_4 != (ulong *)0x0) {
        ppuVar5 = &PTR____CFConstantStringClassReference_110e8b498;
        goto LAB_106ed1874;
      }
    }
    else {
      uVar1 = *(ushort *)(param_1 + 0xc);
      if (((uVar1 ^ 0xffff) & 3) == 0) {
        if (param_4 != (ulong *)0x0) {
          ppuVar5 = &PTR____CFConstantStringClassReference_110e8b378;
          goto LAB_106ed1874;
        }
      }
      else {
        if (param_3 == 0) {
LAB_106ed198c:
          func_0x00010c12adc0(*(undefined8 *)(param_1 + 0xa0));
          func_0x00010c12adc0(*(undefined8 *)(param_1 + 0xa8));
          uVar6 = 1;
          goto LAB_106ed193c;
        }
        lStack_50 = 0;
        lStack_48 = 0;
        func_0x00010bfc6740(param_1,param_2,&lStack_48,&lStack_50,param_3,0);
        lVar2 = lStack_48;
        _objc_retain(lStack_48);
        lVar3 = lStack_50;
        _objc_retain(lStack_50);
        if (lVar2 == 0 && lVar3 == 0) {
          if (param_4 != (ulong *)0x0) {
            ppuVar5 = &PTR____CFConstantStringClassReference_110e8b3b8;
LAB_106ed1910:
            func_0x00010bf15080(param_1,param_2,ppuVar5);
            _objc_retainAutoreleasedReturnValue();
            _objc_autorelease();
            *param_4 = param_1;
          }
        }
        else if (((uVar1 & 1) == 0) || (lVar3 != 0)) {
          if (((uVar1 >> 1 & 1) == 0) || (lVar2 != 0)) {
            uVar6 = *(undefined8 *)(param_1 + 0x40);
            *(long *)(param_1 + 0x40) = lVar2;
            _objc_retain(lVar2);
            _objc_release(uVar6);
            uVar6 = *(undefined8 *)(param_1 + 0x48);
            *(long *)(param_1 + 0x48) = lVar3;
            _objc_release(uVar6);
            _objc_release(lVar2);
            goto LAB_106ed198c;
          }
          if (param_4 != (ulong *)0x0) {
            ppuVar5 = &PTR____CFConstantStringClassReference_110e8b3f8;
            goto LAB_106ed1910;
          }
        }
        else if (param_4 != (ulong *)0x0) {
          ppuVar5 = &PTR____CFConstantStringClassReference_110e8b3d8;
          goto LAB_106ed1910;
        }
        _objc_release(lVar3);
        _objc_release(lVar2);
      }
    }
  }
  uVar6 = 0;
LAB_106ed193c:
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 106ed19a4; end: 106ed1adf; -[GCDAsyncSocket preConnectWithUrl:error:] */

bool FUN_106ed19a4(ulong param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_3);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar2 == 0) {
    if (param_4 == (ulong *)0x0) {
LAB_106ed1a8c:
      bVar1 = false;
      goto LAB_106ed1ac0;
    }
    ppuVar5 = &PTR____CFConstantStringClassReference_110e8b458;
  }
  else if (*(long *)(param_1 + 0x18) == 0) {
    if (param_4 == (ulong *)0x0) goto LAB_106ed1a8c;
    ppuVar5 = &PTR____CFConstantStringClassReference_110e8b478;
  }
  else {
    uVar3 = param_1;
    func_0x00010c070b20();
    if ((uVar3 & 1) != 0) {
      uVar3 = param_1;
      func_0x00010bfc6760(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = uVar3 != 0;
      if (uVar3 == 0) {
        if (param_4 != (ulong *)0x0) {
          func_0x00010bf15080(param_1,param_2,&PTR____CFConstantStringClassReference_110e8b3b8);
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *param_4 = param_1;
        }
      }
      else {
        _objc_retain(uVar3);
        uVar4 = *(undefined8 *)(param_1 + 0x50);
        *(ulong *)(param_1 + 0x50) = uVar3;
        _objc_release(uVar4);
        func_0x00010c12adc0(*(undefined8 *)(param_1 + 0xa0));
        func_0x00010c12adc0(*(undefined8 *)(param_1 + 0xa8));
      }
      _objc_release(uVar3);
      goto LAB_106ed1ac0;
    }
    if (param_4 == (ulong *)0x0) goto LAB_106ed1a8c;
    ppuVar5 = &PTR____CFConstantStringClassReference_110e8b498;
  }
  func_0x00010bf14fa0(param_1,param_2,ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  bVar1 = false;
  *param_4 = param_1;
LAB_106ed1ac0:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106ed1ae0; end: 106ed1ae7; -[GCDAsyncSocket connectToHost:onPort:error:] */

void FUN_106ed1ae0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf48430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0xbff0000000000000,param_1,PTR_s_connectToHost_onPort_withTimeout_1125afab0);
  return;
}



/* Entry: 106ed1ae8; end: 106ed1af3; -[GCDAsyncSocket connectToHost:onPort:withTimeout:error:] */

void FUN_106ed1ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf48410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_connectToHost_onPort_viaInterfac_1125afaa8,param_3,param_4,0,param_5);
  return;
}



/* Entry: 106ed1af4; end: 106ed1ce7; -[GCDAsyncSocket connectToHost:onPort:viaInterface:withTimeout:error:] */

undefined1
FUN_106ed1af4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined2 param_5,undefined8 param_6,undefined8 *param_7)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined2 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar2 = param_4;
  func_0x00010bf51e00();
  uVar3 = param_6;
  func_0x00010bf51e00();
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_106ecf4f0;
  uStack_a0 = 0x106ecf500;
  uStack_98 = 0;
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_106ed1ce8;
  puStack_100 = &UNK_110983168;
  puStack_b8 = &uStack_c0;
  puStack_88 = &uStack_90;
  _objc_retain(uVar2);
  uStack_f8 = uVar2;
  lStack_f0 = param_2;
  puStack_e0 = &uStack_c0;
  _objc_retain(uVar3);
  ppuVar4 = &puStack_118;
  uStack_e8 = uVar3;
  puStack_d8 = &uStack_90;
  uStack_d0 = param_1;
  uStack_c8 = param_5;
  _objc_retainBlock();
  lVar5 = *(long *)(param_2 + 0x128);
  _dispatch_get_specific();
  if (lVar5 == 0) {
    func_0x00010006eaa4(*(undefined8 *)(param_2 + 0x58),ppuVar4);
  }
  else {
    (*(code *)ppuVar4[2])(ppuVar4);
  }
  if (param_7 != (undefined8 *)0x0) {
    uVar6 = puStack_b8[5];
    _objc_retainAutorelease();
    *param_7 = uVar6;
  }
  uVar1 = *(undefined1 *)(puStack_88 + 3);
  _objc_release(ppuVar4);
  _objc_release(uStack_e8);
  _objc_release(uStack_f8);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_4);
  return uVar1;
}



/* Entry: 106ed1ce8; end: 106ed1eaf;  */

void FUN_106ed1ce8(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined4 uStack_58;
  undefined2 uStack_54;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  lVar2 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c08fa60();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  if (lVar3 == 0) {
    func_0x00010bf15080();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar6 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = uVar4;
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uStack_48 = *(undefined8 *)(lVar3 + 0x28);
    func_0x00010c105d20();
    uVar6 = uStack_48;
    _objc_retain(uStack_48);
    uVar5 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = uVar6;
    _objc_release(uVar5);
    if ((int)uVar4 == 0) goto LAB_106ed1e74;
    *(uint *)(*(long *)(param_1 + 0x28) + 8) = *(uint *)(*(long *)(param_1 + 0x28) + 8) | 1;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf51e00();
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x38);
    _objc_initWeak(auStack_50);
    uVar4 = 0;
    _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_106ed1eb0;
    puStack_78 = &UNK_110983138;
    uStack_70 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar6);
    uStack_54 = *(undefined2 *)(param_1 + 0x50);
    uStack_68 = uVar6;
    _objc_copyWeak(auStack_60,auStack_50);
    uStack_58 = uVar1;
    func_0x00010007380c(uVar4,&puStack_90);
    func_0x00010c24e5a0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x28));
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = 1;
    _objc_destroyWeak(auStack_60);
    _objc_release(uStack_68);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_50);
  }
  _objc_release(uVar6);
LAB_106ed1e74:
  _objc_autoreleasePoolPop(lVar2);
  return;
}



/* Entry: 106ed1eb0; end: 106ed217b;  */

void FUN_106ed1eb0(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  undefined4 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  long lStack_110;
  long lStack_108;
  undefined4 uStack_100;
  long lStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_opt_class();
  lStack_f8 = 0;
  func_0x00010c0b5660();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_f8;
  _objc_retain(lStack_f8);
  lVar5 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar5 != 0) {
    if (lVar1 == 0) {
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      lStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      plStack_160 = (long *)0x0;
      _objc_retain(lVar4);
      lVar6 = lVar4;
      func_0x00010bf52a60();
      if (lVar6 == 0) {
        lVar10 = 0;
        lVar12 = 0;
      }
      else {
        lVar10 = 0;
        lVar12 = 0;
        lVar14 = *plStack_160;
        do {
          lVar8 = 0;
          do {
            if (*plStack_160 != lVar14) {
              _objc_enumerationMutation(lVar4);
            }
            lVar13 = *(long *)(lStack_168 + lVar8 * 8);
            if (lVar10 == 0) {
              uVar7 = *(ulong *)(param_1 + 0x20);
              _objc_opt_class();
              func_0x00010c074ea0();
              lVar11 = lVar13;
              if ((uVar7 & 1) == 0) goto LAB_106ed2028;
LAB_106ed2044:
              _objc_retain(lVar13);
              lVar10 = lVar11;
            }
            else {
LAB_106ed2028:
              if (lVar12 == 0) {
                iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
                _objc_opt_class();
                func_0x00010c074f00();
                lVar11 = lVar10;
                lVar12 = lVar13;
                if (iVar2 != 0) goto LAB_106ed2044;
                lVar12 = 0;
              }
            }
            lVar8 = lVar8 + 1;
          } while (lVar6 != lVar8);
          lVar6 = lVar4;
          func_0x00010bf52a60();
        } while (lVar6 != 0);
      }
      _objc_release(lVar4);
      uVar9 = *(undefined8 *)(lVar5 + 0x58);
      puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1a8 = 0xc2000000;
      uStack_1a0 = 0x106ed21b0;
      puStack_198 = &UNK_110860758;
      _objc_retain(lVar5);
      uStack_178 = *(undefined4 *)(param_1 + 0x38);
      lStack_190 = lVar5;
      lStack_188 = lVar10;
      lStack_180 = lVar12;
      _objc_retain(lVar12);
      _objc_retain(lVar10);
      func_0x00010007380c(uVar9,&puStack_1b0);
      _objc_release(lStack_180);
      _objc_release(lStack_188);
      _objc_release(lStack_190);
      _objc_release(lVar12);
    }
    else {
      uVar9 = *(undefined8 *)(lVar5 + 0x58);
      puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_128 = 0xc2000000;
      pcStack_120 = FUN_106ed217c;
      puStack_118 = &UNK_1108a7688;
      _objc_retain(lVar5);
      uStack_100 = *(undefined4 *)(param_1 + 0x38);
      lStack_110 = lVar5;
      _objc_retain(lVar1);
      lStack_108 = lVar1;
      func_0x00010007380c(uVar9,&puStack_130);
      _objc_release(lStack_108);
      lVar10 = lStack_110;
    }
    _objc_release(lVar10);
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_autoreleasePoolPop();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar5 = lVar3;
    _objc_autoreleasePoolPush();
    func_0x00010c0b5600(*(undefined8 *)(lVar3 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar5);
    return;
  }
  return;
}



/* Entry: 106ed217c; end: 106ed21e7;  */

void FUN_106ed217c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c0b5600(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined4 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106ed21e8; end: 106ed21f7; -[GCDAsyncSocket connectToAddress:error:] */

void FUN_106ed21e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf483d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0xbff0000000000000,param_1,PTR_s_connectToAddress_viaInterface_wi_1125afa98,param_3,0,
             param_4);
  return;
}



/* Entry: 106ed21f8; end: 106ed2203; -[GCDAsyncSocket connectToAddress:withTimeout:error:] */

void FUN_106ed21f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf483d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_connectToAddress_viaInterface_wi_1125afa98,param_3,0,param_4);
  return;
}



/* Entry: 106ed2204; end: 106ed23f7; -[GCDAsyncSocket connectToAddress:viaInterface:withTimeout:error:] */

byte FUN_106ed2204(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  ppuVar3 = &puStack_110;
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010bf51e00();
  uVar2 = param_5;
  func_0x00010bf51e00();
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_106ecf4f0;
  uStack_a0 = 0x106ecf500;
  uStack_98 = 0;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_106ed23f8;
  puStack_f8 = &UNK_110983198;
  puStack_b8 = &uStack_c0;
  puStack_88 = &uStack_90;
  _objc_retain(uVar1);
  uStack_f0 = uVar1;
  lStack_e8 = param_2;
  puStack_d8 = &uStack_c0;
  _objc_retain(uVar2);
  uStack_e0 = uVar2;
  puStack_d0 = &uStack_90;
  uStack_c8 = param_1;
  _objc_retainBlock();
  lVar4 = *(long *)(param_2 + 0x128);
  _dispatch_get_specific();
  if (lVar4 == 0) {
    func_0x00010006eaa4(*(undefined8 *)(param_2 + 0x58),ppuVar3);
  }
  else {
    (**(code **)((long)ppuVar3 + 0x10))(ppuVar3);
  }
  bVar6 = *(byte *)(puStack_88 + 3);
  if ((param_6 != (undefined8 *)0x0) && ((bVar6 & 1) == 0)) {
    uVar5 = puStack_b8[5];
    _objc_retainAutorelease();
    *param_6 = uVar5;
    bVar6 = *(byte *)(puStack_88 + 3);
  }
  _objc_release(ppuVar3);
  _objc_release(uStack_e0);
  _objc_release(uStack_f0);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return bVar6 & 1;
}



/* Entry: 106ed23f8; end: 106ed25df;  */

void FUN_106ed23f8(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010c08fa60();
  if (uVar2 < 0x10) {
LAB_106ed2494:
    lVar10 = 0;
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    if (*(char *)(lVar3 + 1) != '\x1e') {
      if (*(char *)(lVar3 + 1) == '\x02') {
        lVar3 = *(long *)(param_1 + 0x20);
        func_0x00010c08fa60();
        if (lVar3 == 0x10) {
          lVar10 = 0;
          lVar3 = *(long *)(param_1 + 0x20);
          goto LAB_106ed248c;
        }
      }
      goto LAB_106ed2494;
    }
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010c08fa60();
    if (lVar3 != 0x1c) goto LAB_106ed2494;
    lVar3 = 0;
    lVar10 = *(long *)(param_1 + 0x20);
LAB_106ed248c:
    _objc_retain();
  }
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0 && lVar10 == 0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110e8b4d8;
  }
  else if ((lVar3 == 0) || ((*(ushort *)(lVar4 + 0xc) & 1) == 0)) {
    if (((*(ushort *)(lVar4 + 0xc) >> 1 & 1) == 0) || (lVar10 == 0)) {
      lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      uStack_58 = *(undefined8 *)(lVar9 + 0x28);
      func_0x00010c105d20(lVar4,param_2,*(undefined8 *)(param_1 + 0x30),&uStack_58);
      uVar8 = uStack_58;
      _objc_retain(uStack_58);
      uVar5 = *(undefined8 *)(lVar9 + 0x28);
      *(undefined8 *)(lVar9 + 0x28) = uVar8;
      _objc_release(uVar5);
      if ((int)lVar4 != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x28);
        lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
        uStack_60 = *(undefined8 *)(lVar4 + 0x28);
        func_0x00010bf484c0(uVar5,param_2,lVar3,lVar10,&uStack_60);
        uVar8 = uStack_60;
        _objc_retain(uStack_60);
        uVar6 = *(undefined8 *)(lVar4 + 0x28);
        *(undefined8 *)(lVar4 + 0x28) = uVar8;
        _objc_release(uVar6);
        if ((int)uVar5 != 0) {
          *(uint *)(*(long *)(param_1 + 0x28) + 8) = *(uint *)(*(long *)(param_1 + 0x28) + 8) | 1;
          func_0x00010c24e5a0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x28));
          *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = 1;
        }
      }
      goto LAB_106ed2500;
    }
    ppuVar7 = &PTR____CFConstantStringClassReference_110e8b518;
  }
  else {
    ppuVar7 = &PTR____CFConstantStringClassReference_110e8b4f8;
  }
  func_0x00010bf15080(lVar4,param_2,ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar8 = *(undefined8 *)(lVar9 + 0x28);
  *(long *)(lVar9 + 0x28) = lVar4;
  _objc_release(uVar8);
LAB_106ed2500:
  _objc_release(lVar10);
  _objc_release(lVar3);
  _objc_autoreleasePoolPop(lVar1);
  return;
}



/* Entry: 106ed25e0; end: 106ed276f; -[GCDAsyncSocket connectToUrl:withTimeout:error:] */

byte FUN_106ed25e0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_4);
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_106ecf4f0;
  uStack_80 = 0x106ecf500;
  uStack_78 = 0;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_106ed2770;
  puStack_d0 = &UNK_1109831c8;
  puStack_98 = &uStack_a0;
  puStack_68 = &uStack_70;
  _objc_retain(param_4);
  ppuVar1 = &puStack_e8;
  uStack_c8 = param_4;
  lStack_c0 = param_2;
  puStack_b8 = &uStack_a0;
  puStack_b0 = &uStack_70;
  uStack_a8 = param_1;
  _objc_retainBlock();
  lVar2 = *(long *)(param_2 + 0x128);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    func_0x00010006eaa4(*(undefined8 *)(param_2 + 0x58),ppuVar1);
  }
  else {
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  bVar4 = *(byte *)(puStack_68 + 3);
  if ((param_5 != (undefined8 *)0x0) && ((bVar4 & 1) == 0)) {
    uVar3 = puStack_98[5];
    _objc_retainAutorelease();
    *param_5 = uVar3;
    bVar4 = *(byte *)(puStack_68 + 3);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_c8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_4);
  return bVar4 & 1;
}


