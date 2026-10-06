/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106ed6a10; end: 106ed6b07; -[GCDAsyncSocket readDataToLength:withTimeout:buffer:bufferOffset:tag:] */

void FUN_106ed6a10(undefined8 param_1,long param_2,undefined8 param_3,long param_4,ulong param_5,
                  ulong param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_5);
  if ((param_4 != 0) && (uVar1 = param_5, func_0x00010c08fa60(), param_6 <= uVar1)) {
    puVar2 = PTR_PTR_1126d31e0;
    _objc_alloc();
    func_0x00010c008540(param_1);
    uVar3 = *(undefined8 *)(param_2 + 0x58);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106ed6b08;
    puStack_68 = &UNK_110841f80;
    lStack_60 = param_2;
    puStack_58 = puVar2;
    _objc_retain();
    func_0x00010007380c(uVar3,&puStack_80);
    _objc_release(puStack_58);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 106ed6b08; end: 106ed6b5b;  */

void FUN_106ed6b08(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  if ((*(uint *)(*(long *)(param_1 + 0x20) + 8) & 5) == 1) {
    func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0),param_2,
                        *(undefined8 *)(param_1 + 0x28));
    func_0x00010c0c3840(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106ed6b5c; end: 106ed6b6f; -[GCDAsyncSocket readDataToData:withTimeout:tag:] */

void FUN_106ed6b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c121390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_readDataToData_withTimeout_buffe_112625f00,param_3,0,0,0,param_4);
  return;
}



/* Entry: 106ed6b70; end: 106ed6b7b; -[GCDAsyncSocket readDataToData:withTimeout:buffer:bufferOffset:tag:] */

void FUN_106ed6b70(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c121390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_readDataToData_withTimeout_buffe_112625f00);
  return;
}



/* Entry: 106ed6b7c; end: 106ed6b8f; -[GCDAsyncSocket readDataToData:withTimeout:maxLength:tag:] */

void FUN_106ed6b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c121390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_readDataToData_withTimeout_buffe_112625f00,param_3,0,0,param_4,param_5);
  return;
}



/* Entry: 106ed6b90; end: 106ed6cb7; -[GCDAsyncSocket readDataToData:withTimeout:buffer:bufferOffset:maxLength:tag:] */

void FUN_106ed6b90(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,ulong param_5,
                  ulong param_6,ulong param_7)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010c08fa60();
  if (((uVar1 != 0) && (uVar1 = param_5, func_0x00010c08fa60(), param_6 <= uVar1)) &&
     ((param_7 == 0 || (uVar1 = param_4, func_0x00010c08fa60(), uVar1 <= param_7)))) {
    puVar2 = PTR_PTR_1126d31e0;
    _objc_alloc();
    func_0x00010c008540(param_1);
    uVar3 = *(undefined8 *)(param_2 + 0x58);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106ed6cb8;
    puStack_68 = &UNK_110841f80;
    lStack_60 = param_2;
    puStack_58 = puVar2;
    _objc_retain();
    func_0x00010007380c(uVar3,&puStack_80);
    _objc_release(puStack_58);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106ed6cb8; end: 106ed6d0b;  */

void FUN_106ed6cb8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  if ((*(uint *)(*(long *)(param_1 + 0x20) + 8) & 5) == 1) {
    func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0),param_2,
                        *(undefined8 *)(param_1 + 0x28));
    func_0x00010c0c3840(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106ed6d0c; end: 106ed6df3; -[GCDAsyncSocket progressOfReadReturningTag:bytesDone:total:] */

undefined4
FUN_106ed6d0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined **ppuVar1;
  long lVar2;
  undefined4 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puStack_70 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106ed6df4;
  puStack_80 = &UNK_110983228;
  ppuVar1 = &puStack_98;
  lStack_78 = param_1;
  uStack_68 = param_3;
  uStack_60 = param_4;
  uStack_58 = param_5;
  puStack_48 = puStack_70;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x58),ppuVar1);
  }
  else {
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  uVar3 = *(undefined4 *)(puStack_48 + 3);
  _objc_release(ppuVar1);
  __Block_object_dispose(&uStack_50,8);
  return uVar3;
}



/* Entry: 106ed6df4; end: 106ed6ec3;  */

void FUN_106ed6df4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  
  uVar4 = *(ulong *)(*(long *)(param_1 + 0x20) + 0xb0);
  if (uVar4 != 0) {
    puVar1 = PTR_PTR_1126d31e0;
    _objc_opt_class(PTR_PTR_1126d31e0);
    _objc_opt_isKindOfClass(uVar4,puVar1);
    if ((uVar4 & 1) != 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0xb0);
      uVar4 = *(ulong *)(lVar3 + 0x18);
      uVar2 = *(ulong *)(lVar3 + 0x30);
      if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x30) = *(undefined8 *)(lVar3 + 0x50);
      }
      if (*(ulong **)(param_1 + 0x38) != (ulong *)0x0) {
        **(ulong **)(param_1 + 0x38) = uVar4;
      }
      if (*(ulong **)(param_1 + 0x40) != (ulong *)0x0) {
        **(ulong **)(param_1 + 0x40) = uVar2;
      }
      if (uVar2 == 0) {
        fVar5 = 1.0;
      }
      else {
        fVar5 = (float)uVar4 / (float)uVar2;
      }
      goto LAB_106ed6ea4;
    }
  }
  if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x30) = 0;
  }
  if (*(undefined8 **)(param_1 + 0x38) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x38) = 0;
  }
  if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x40) = 0;
  }
  fVar5 = NAN;
LAB_106ed6ea4:
  *(float *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = fVar5;
  return;
}



/* Entry: 106ed6ec4; end: 106ed6ff3; -[GCDAsyncSocket maybeDequeueRead] */

void FUN_106ed6ec4(ulong param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  if ((*(long *)(param_1 + 0xb0) == 0) && ((*(byte *)(param_1 + 8) >> 1 & 1) != 0)) {
    lVar2 = *(long *)(param_1 + 0xa0);
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0xa0);
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0xb0);
      *(undefined8 *)(param_1 + 0xb0) = uVar3;
      _objc_release(uVar5);
      func_0x00010c12d3c0(*(undefined8 *)(param_1 + 0xa0));
      uVar6 = *(ulong *)(param_1 + 0xb0);
      puVar4 = PTR_PTR_1126d31e8;
      _objc_opt_class(PTR_PTR_1126d31e8);
      _objc_opt_isKindOfClass(uVar6,puVar4);
      if ((uVar6 & 1) != 0) {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x800;
                    /* WARNING: Could not recover jumptable at 0x00010c0c3a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_maybeStartTLS_11260e8b0);
        return;
      }
      func_0x00010c2292a0(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x28),param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf874d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_doReadData_1125bf6d8);
      return;
    }
    uVar1 = *(uint *)(param_1 + 8);
    if ((uVar1 >> 5 & 1) != 0) {
      if ((uVar1 >> 6 & 1) != 0) {
        lVar2 = *(long *)(param_1 + 0xa8);
        func_0x00010bf529e0();
        if (lVar2 != 0) {
          return;
        }
        if (*(long *)(param_1 + 0xb8) != 0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bf3df50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_closeWithError__1125ad178,0);
      return;
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      func_0x00010bfb3220(param_1);
      lVar2 = *(long *)(param_1 + 200);
      func_0x00010bf12620();
      if ((lVar2 == 0) && (uVar6 = param_1, func_0x00010c294ba0(), (uVar6 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c13d6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resumeReadSource_11262cfc8);
        return;
      }
    }
  }
  return;
}



/* Entry: 106ed6ff4; end: 106ed7187; -[GCDAsyncSocket flushSSLBuffers] */

void FUN_106ed6ff4(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(param_1 + 200);
  func_0x00010bf12620();
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010c294ba0();
    if ((int)lVar2 == 0) {
      puStack_58 = &uStack_50;
      uStack_50 = 0;
      uStack_40 = 0x2020000000;
      uStack_38 = 0;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_106ed7188;
      puStack_68 = &UNK_11084b9d0;
      ppuVar4 = &puStack_80;
      lStack_60 = param_1;
      puStack_48 = puStack_58;
      _objc_retainBlock();
      (*(code *)ppuVar4[2])();
      while( true ) {
        if (puStack_48[3] == 0) break;
        func_0x00010bf966a0(*(undefined8 *)(param_1 + 200));
        uVar3 = *(undefined8 *)(param_1 + 200);
        func_0x00010c2bd960(uVar3);
        lStack_88 = 0;
        uVar5 = *(undefined8 *)(param_1 + 0x108);
        _SSLRead(uVar5,uVar3,puStack_48[3],&lStack_88);
        if (lStack_88 != 0) {
          func_0x00010bf7ec00(*(undefined8 *)(param_1 + 200));
        }
        if ((int)uVar5 != 0) break;
        (*(code *)ppuVar4[2])(ppuVar4);
      }
      _objc_release(ppuVar4);
      __Block_object_dispose(&uStack_50,8);
    }
    else if ((*(byte *)(param_1 + 10) >> 3 & 1) != 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0xf8);
      _CFReadStreamHasBytesAvailable();
      if (iVar1 != 0) {
        func_0x00010bf966a0(*(undefined8 *)(param_1 + 200));
        uVar3 = *(undefined8 *)(param_1 + 200);
        func_0x00010c2bd960(uVar3);
        lVar2 = *(long *)(param_1 + 0xf8);
        _CFReadStreamRead(lVar2,uVar3,0x1000);
        if (0 < lVar2) {
          func_0x00010bf7ec00(*(undefined8 *)(param_1 + 200));
        }
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfff7ffff;
      }
    }
  }
  return;
}



/* Entry: 106ed7188; end: 106ed71f7;  */

void FUN_106ed7188(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0xc0);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x110);
  func_0x00010bf12620();
  *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = lVar1 + lVar2;
  lStack_28 = 0;
  _SSLGetBufferedReadSize(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x108),&lStack_28);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + lStack_28;
  return;
}



/* Entry: 106ed71f8; end: 106ed7b27; -[GCDAsyncSocket doReadData] */

/* WARNING: Possible PIC construction at 0x000106ed7338: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106ed733c) */

void FUN_106ed71f8(ulong param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  uint uVar16;
  uint uVar17;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  byte bStack_5a;
  byte bStack_59;
  long lStack_58;
  
  if (*(long *)(param_1 + 0xb0) == 0 || (*(uint *)(param_1 + 8) & 8) != 0) {
    if ((*(uint *)(param_1 + 8) >> 0xd & 1) != 0) {
      func_0x00010bfb3220(param_1);
    }
    uVar13 = param_1;
    func_0x00010c294ba0();
    if ((uVar13 & 1) != 0) {
      return;
    }
    if (*(long *)(param_1 + 0xc0) == 0) {
      return;
    }
    goto code_r0x00010c264140;
  }
  uVar13 = param_1;
  func_0x00010c294ba0();
  if ((int)uVar13 == 0) {
    lVar4 = *(long *)(param_1 + 0xc0);
    if ((*(byte *)(param_1 + 9) >> 5 & 1) != 0) {
      lVar12 = *(long *)(param_1 + 0x110);
      func_0x00010bf12620();
      lStack_58 = 0;
      _SSLGetBufferedReadSize(*(undefined8 *)(param_1 + 0x108),&lStack_58);
      lVar4 = lVar12 + lVar4 + lStack_58;
    }
    if (lVar4 == 0) goto LAB_106ed72d8;
LAB_106ed72d0:
    uVar3 = 1;
  }
  else {
    if ((*(byte *)(param_1 + 10) >> 3 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0xf8);
      _CFReadStreamHasBytesAvailable();
      if (iVar2 != 0) goto LAB_106ed72d0;
    }
LAB_106ed72d8:
    lVar4 = *(long *)(param_1 + 200);
    func_0x00010bf12620();
    if (lVar4 == 0) goto LAB_106ed7914;
    uVar3 = 0;
  }
  if ((*(uint *)(param_1 + 8) >> 0xb & 1) != 0) {
    if ((*(uint *)(param_1 + 8) >> 0xc & 1) != 0) {
      uVar13 = param_1;
      func_0x00010c294c80();
      if ((int)uVar13 == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x124) != -0x264b) {
        return;
      }
      func_0x00010c24cda0(param_1);
      return;
    }
    uVar13 = param_1;
    func_0x00010c294ba0();
    if ((uVar13 & 1) != 0) {
      return;
    }
code_r0x00010c264140:
                    /* WARNING: Could not recover jumptable at 0x00010c264150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_suspendReadSource_112676a78);
    return;
  }
  bStack_59 = 0;
  lVar4 = *(long *)(param_1 + 200);
  func_0x00010bf12620();
  if (lVar4 == 0) {
    lVar4 = 0;
LAB_106ed7368:
    uVar13 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0xb0);
    if (*(long *)(lVar4 + 0x38) == 0) {
      func_0x00010bf12620(*(undefined8 *)(param_1 + 200));
      func_0x00010c1215c0();
    }
    else {
      func_0x00010c121600();
    }
    func_0x00010bf96680(*(undefined8 *)(param_1 + 0xb0));
    lVar5 = *(long *)(*(long *)(param_1 + 0xb0) + 8);
    func_0x00010c0d3c60(lVar5);
    lVar12 = *(long *)(*(long *)(param_1 + 0xb0) + 0x10);
    lVar1 = *(long *)(*(long *)(param_1 + 0xb0) + 0x18);
    uVar6 = *(undefined8 *)(param_1 + 200);
    func_0x00010c121220(uVar6);
    _memcpy(lVar5 + lVar12 + lVar1,uVar6,lVar4);
    func_0x00010bf78f40(*(undefined8 *)(param_1 + 200));
    *(long *)(*(long *)(param_1 + 0xb0) + 0x18) =
         *(long *)(*(long *)(param_1 + 0xb0) + 0x18) + lVar4;
    lVar12 = *(long *)(param_1 + 0xb0);
    if (*(long *)(lVar12 + 0x30) == 0) {
      if (*(long *)(lVar12 + 0x38) != 0) {
        if ((((bStack_59 & 1) != 0) || (*(ulong *)(lVar12 + 0x20) == 0)) ||
           (*(ulong *)(lVar12 + 0x18) < *(ulong *)(lVar12 + 0x20))) goto LAB_106ed7368;
        uVar13 = param_1;
        func_0x00010c121640();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_106ed7404;
      }
      if (*(long *)(lVar12 + 0x20) == 0) {
        bStack_59 = false;
      }
      else {
        bStack_59 = *(long *)(lVar12 + 0x18) == *(long *)(lVar12 + 0x20);
      }
    }
    else {
      bStack_59 = *(long *)(lVar12 + 0x18) == *(long *)(lVar12 + 0x30);
    }
    uVar13 = 0;
  }
LAB_106ed7404:
  uVar17 = *(uint *)(param_1 + 8) >> 0xe & 1;
  uVar11 = (uint)bStack_59;
  if (uVar13 != 0) {
    uVar11 = 1;
  }
  uVar16 = (uVar3 | uVar11 | uVar17) ^ 1;
  uVar14 = uVar13;
  if ((uVar3 & ((uVar11 | uVar17) ^ 1)) == 1) {
    bStack_5a = 0;
    uVar14 = param_1;
    if ((*(uint *)(param_1 + 8) >> 0xd & 1) == 0) {
      piVar7 = *(int **)(param_1 + 0xb0);
      if (*(long *)(piVar7 + 0xe) == 0) {
        func_0x00010c1215c0();
      }
      else {
        func_0x00010c1215e0();
      }
      if (bStack_5a == 1) {
        func_0x00010bf966a0(*(undefined8 *)(param_1 + 200));
        lVar12 = *(long *)(param_1 + 200);
        func_0x00010c2bd960(lVar12);
      }
      else {
        func_0x00010bf96680(*(undefined8 *)(param_1 + 0xb0));
        lVar12 = *(long *)(*(long *)(param_1 + 0xb0) + 8);
        func_0x00010c0d3c60(lVar12);
        lVar12 = lVar12 + *(long *)(*(long *)(param_1 + 0xb0) + 0x10) +
                          *(long *)(*(long *)(param_1 + 0xb0) + 0x18);
      }
      piVar9 = (int *)(ulong)*(uint *)(param_1 + 0x20);
      if ((*(uint *)(param_1 + 0x20) == 0xffffffff) &&
         (piVar9 = (int *)(ulong)*(uint *)(param_1 + 0x24), *(uint *)(param_1 + 0x24) == 0xffffffff)
         ) {
        piVar9 = (int *)(ulong)*(uint *)(param_1 + 0x28);
      }
      _read(piVar9,lVar12,piVar7);
      if ((long)piVar9 < 0) {
        ___error();
        if (*piVar9 == 0x23) {
          uVar14 = 0;
          uVar16 = 1;
        }
        else {
          ___error();
          func_0x00010bf992a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar13);
        }
        uVar17 = 0;
        *(undefined8 *)(param_1 + 0xc0) = 0;
      }
      else {
        if (piVar9 != (int *)0x0) {
          if (piVar9 < piVar7) {
            uVar3 = 1;
            lVar12 = 0;
          }
          else {
            piVar7 = *(int **)(param_1 + 0xc0);
            uVar3 = (uint)(piVar7 < piVar9 || (long)piVar7 - (long)piVar9 == 0);
            lVar12 = 0;
            if (piVar7 >= piVar9) {
              lVar12 = (long)piVar7 - (long)piVar9;
            }
          }
          uVar14 = 0;
          uVar17 = 0;
          *(long *)(param_1 + 0xc0) = lVar12;
          uVar16 = uVar3 | uVar16;
          goto LAB_106ed77d0;
        }
        uVar14 = 0;
        *(undefined8 *)(param_1 + 0xc0) = 0;
        uVar17 = 1;
      }
    }
    else {
      uVar8 = param_1;
      func_0x00010c294ba0();
      if ((int)uVar8 == 0) {
        piVar7 = *(int **)(param_1 + 0xb0);
        func_0x00010c0ec060();
        if (bStack_5a == 1) {
          func_0x00010bf966a0(*(undefined8 *)(param_1 + 200));
          lVar12 = *(long *)(param_1 + 200);
          func_0x00010c2bd960(lVar12);
        }
        else {
          func_0x00010bf96680(*(undefined8 *)(param_1 + 0xb0));
          lVar12 = *(long *)(*(long *)(param_1 + 0xb0) + 8);
          func_0x00010c0d3c60(lVar12);
          lVar12 = lVar12 + *(long *)(*(long *)(param_1 + 0xb0) + 0x10) +
                            *(long *)(*(long *)(param_1 + 0xb0) + 0x18);
        }
        piVar9 = (int *)0x0;
        do {
          lStack_58 = 0;
          uVar6 = *(undefined8 *)(param_1 + 0x108);
          _SSLRead(uVar6,lVar12 + (long)piVar9,(long)piVar7 - (long)piVar9,&lStack_58);
          piVar9 = (int *)(lStack_58 + (long)piVar9);
          uVar3 = (uint)uVar6;
        } while (uVar3 == 0 && piVar9 < piVar7);
        if (uVar3 == 0xffffd9b5) {
          uVar17 = 0;
          uVar14 = 0;
          uVar16 = 1;
        }
        else if (uVar3 == 0) {
          uVar17 = 0;
          uVar14 = 0;
        }
        else if (uVar3 >> 1 == 0x7fffecd9) {
          uVar14 = 0;
          *(uint *)(param_1 + 0x120) = uVar3;
          uVar17 = 1;
        }
        else {
          func_0x00010c24cc60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar13);
          uVar17 = 0;
        }
      }
      else {
        uVar6 = *(undefined8 *)(param_1 + 0xb0);
        func_0x00010c0ec060(uVar6);
        if (bStack_5a == 1) {
          func_0x00010bf966a0(*(undefined8 *)(param_1 + 200));
          lVar12 = *(long *)(param_1 + 200);
          func_0x00010c2bd960(lVar12);
        }
        else {
          func_0x00010bf96680(*(undefined8 *)(param_1 + 0xb0));
          lVar12 = *(long *)(*(long *)(param_1 + 0xb0) + 8);
          func_0x00010c0d3c60(lVar12);
          lVar12 = lVar12 + *(long *)(*(long *)(param_1 + 0xb0) + 0x10) +
                            *(long *)(*(long *)(param_1 + 0xb0) + 0x18);
        }
        piVar9 = *(int **)(param_1 + 0xf8);
        _CFReadStreamRead(piVar9,lVar12,uVar6);
        if ((long)piVar9 < 0) {
          uVar14 = *(ulong *)(param_1 + 0xf8);
          _CFReadStreamCopyError();
          _objc_release(uVar13);
          piVar9 = (int *)0x0;
          uVar17 = 0;
        }
        else {
          uVar14 = 0;
          uVar17 = (uint)(piVar9 == (int *)0x0);
          uVar16 = uVar16 | piVar9 != (int *)0x0;
        }
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfff7ffff;
      }
      if (piVar9 != (int *)0x0) {
LAB_106ed77d0:
        lVar12 = *(long *)(param_1 + 0xb0);
        if (*(long *)(lVar12 + 0x30) == 0) {
          if (*(long *)(lVar12 + 0x38) != 0) {
            if ((bStack_5a & 1) == 0) {
              func_0x00010c153a00();
              if (lVar12 != 0) {
                if (lVar12 < 1) {
                  *(long *)(*(long *)(param_1 + 0xb0) + 0x18) =
                       *(long *)(*(long *)(param_1 + 0xb0) + 0x18) + (long)piVar9;
                  bStack_59 = 0;
                  lVar4 = (long)piVar9 + lVar4;
                  goto LAB_106ed7aec;
                }
                piVar9 = (int *)((long)piVar9 - lVar12);
                func_0x00010bf966a0(*(undefined8 *)(param_1 + 200));
                func_0x00010c2bd960(*(undefined8 *)(param_1 + 200));
                _memcpy();
                func_0x00010bf7ec00(*(undefined8 *)(param_1 + 200));
              }
              *(long *)(*(long *)(param_1 + 0xb0) + 0x18) =
                   *(long *)(*(long *)(param_1 + 0xb0) + 0x18) + (long)piVar9;
              bStack_59 = 1;
              lVar4 = (long)piVar9 + lVar4;
            }
            else {
              func_0x00010bf7ec00(*(undefined8 *)(param_1 + 200));
              lVar5 = *(long *)(param_1 + 0xb0);
              func_0x00010c121600();
              func_0x00010bf96680(*(undefined8 *)(param_1 + 0xb0));
              lVar10 = *(long *)(*(long *)(param_1 + 0xb0) + 8);
              func_0x00010c0d3c60(lVar10);
              lVar12 = *(long *)(*(long *)(param_1 + 0xb0) + 0x10);
              lVar1 = *(long *)(*(long *)(param_1 + 0xb0) + 0x18);
              uVar6 = *(undefined8 *)(param_1 + 200);
              func_0x00010c121220(uVar6);
              _memcpy(lVar10 + lVar12 + lVar1,uVar6,lVar5);
              func_0x00010bf78f40(*(undefined8 *)(param_1 + 200));
              *(long *)(*(long *)(param_1 + 0xb0) + 0x18) =
                   *(long *)(*(long *)(param_1 + 0xb0) + 0x18) + lVar5;
              lVar4 = lVar5 + lVar4;
              if ((bStack_59 & 1) != 0) goto LAB_106ed7808;
LAB_106ed7aec:
              uVar13 = *(ulong *)(*(long *)(param_1 + 0xb0) + 0x20);
              if ((uVar13 != 0) && (uVar13 <= *(ulong *)(*(long *)(param_1 + 0xb0) + 0x18))) {
                uVar13 = param_1;
                func_0x00010c121640();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar14);
                uVar14 = uVar13;
              }
            }
            goto LAB_106ed7808;
          }
          if (bStack_5a != 0) {
            func_0x00010bf7ec00(*(undefined8 *)(param_1 + 200));
            func_0x00010bf96680(*(undefined8 *)(param_1 + 0xb0));
            lVar5 = *(long *)(*(long *)(param_1 + 0xb0) + 8);
            func_0x00010c0d3c60(lVar5);
            lVar12 = *(long *)(*(long *)(param_1 + 0xb0) + 0x10);
            lVar1 = *(long *)(*(long *)(param_1 + 0xb0) + 0x18);
            uVar6 = *(undefined8 *)(param_1 + 200);
            func_0x00010c121220(uVar6);
            _memcpy(lVar5 + lVar12 + lVar1,uVar6,piVar9);
            func_0x00010bf78f40(*(undefined8 *)(param_1 + 200));
            lVar12 = *(long *)(param_1 + 0xb0);
          }
          *(long *)(lVar12 + 0x18) = *(long *)(lVar12 + 0x18) + (long)piVar9;
          bStack_59 = true;
        }
        else {
          *(long *)(lVar12 + 0x18) = *(long *)(lVar12 + 0x18) + (long)piVar9;
          bStack_59 = *(long *)(*(long *)(param_1 + 0xb0) + 0x18) ==
                      *(long *)(*(long *)(param_1 + 0xb0) + 0x30);
        }
        lVar4 = (long)piVar9 + lVar4;
      }
    }
  }
LAB_106ed7808:
  if ((bStack_59 & 1) == 0) {
    if ((*(long *)(*(long *)(param_1 + 0xb0) + 0x30) == 0) &&
       (*(long *)(*(long *)(param_1 + 0xb0) + 0x38) == 0)) {
      bStack_59 = lVar4 != 0;
      if (lVar4 != 0) goto LAB_106ed780c;
    }
    else if (lVar4 != 0) {
      uVar13 = param_1 + 0x10;
      _objc_loadWeakRetained();
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar8 = uVar13,
         _objc_opt_respondsToSelector(uVar13,PTR_s_socket_didReadPartialDataOfLengt_11266f2c0),
         (uVar8 & 1) != 0)) {
        uVar15 = *(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x50);
        uVar6 = *(undefined8 *)(param_1 + 0x18);
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0xc2000000;
        pcStack_90 = FUN_106ed7b28;
        puStack_88 = &UNK_110844fe0;
        _objc_retain(uVar13);
        uStack_80 = uVar13;
        uStack_78 = param_1;
        lStack_70 = lVar4;
        uStack_68 = uVar15;
        func_0x00010007380c(uVar6,&puStack_a0);
        _objc_release(uStack_80);
      }
      _objc_release(uVar13);
      uVar16 = 1;
    }
    if (uVar14 != 0) goto LAB_106ed78e0;
    if (uVar17 != 0) goto LAB_106ed78fc;
  }
  else {
LAB_106ed780c:
    func_0x00010bf43880(param_1);
    if (uVar14 != 0) {
LAB_106ed78e0:
      func_0x00010bf3df40(param_1);
      _objc_release(uVar14);
      return;
    }
    if (uVar17 != 0) {
      lVar4 = *(long *)(param_1 + 200);
      func_0x00010bf12620();
      if (lVar4 != 0) {
        func_0x00010c0c3840(param_1);
      }
LAB_106ed78fc:
      func_0x00010bf874e0(param_1);
      return;
    }
    func_0x00010c0c3840(param_1);
  }
  if ((uVar16 & 1) == 0) {
    return;
  }
LAB_106ed7914:
  uVar13 = param_1;
  func_0x00010c294ba0();
  if ((uVar13 & 1) != 0) {
    return;
  }
  func_0x00010c13d6a0(param_1);
  return;
}



/* Entry: 106ed7b28; end: 106ed7b5b;  */

void FUN_106ed7b28(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c246260(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106ed7b5c; end: 106ed7d5b; -[GCDAsyncSocket doReadEOF] */

void FUN_106ed7b5c(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  ulong uStack_50;
  ulong uStack_48;
  int iStack_40;
  undefined4 uStack_3c;
  ushort uStack_3a;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = uVar1 | 0x4000;
  *(uint *)(param_1 + 8) = uVar2;
  if ((uVar1 >> 0xd & 1) != 0) {
    func_0x00010bfb3220(param_1);
    uVar2 = *(uint *)(param_1 + 8);
  }
  uVar4 = param_1;
  if ((uVar2 & 0x1800) == 0) {
    if ((uVar2 >> 0xf & 1) == 0) {
      lVar3 = *(long *)(param_1 + 200);
      func_0x00010bf12620();
      if (lVar3 == 0) {
        if ((*(ushort *)(param_1 + 0xc) >> 3 & 1) != 0) {
          iStack_40 = *(int *)(param_1 + 0x20);
          if ((iStack_40 == -1) && (iStack_40 = *(int *)(param_1 + 0x24), iStack_40 == -1)) {
            iStack_40 = *(int *)(param_1 + 0x28);
          }
          uStack_3c = 4;
          _poll(&iStack_40,1,0);
          if ((uStack_3a >> 2 & 1) != 0) {
            *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x8000;
            uVar5 = param_1 + 0x10;
            _objc_loadWeakRetained();
            if ((*(long *)(param_1 + 0x18) != 0) &&
               (uVar6 = uVar5,
               _objc_opt_respondsToSelector(uVar5,PTR_s_socketDidCloseReadStream__11266f2f8),
               (uVar6 & 1) != 0)) {
              uVar7 = *(undefined8 *)(param_1 + 0x18);
              puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_68 = 0xc2000000;
              pcStack_60 = FUN_106ed7d5c;
              puStack_58 = &UNK_110841f80;
              _objc_retain(uVar5);
              uStack_50 = uVar5;
              uStack_48 = param_1;
              func_0x00010007380c(uVar7,&puStack_70);
              _objc_release(uStack_50);
            }
            _objc_release(uVar5);
            goto LAB_106ed7be4;
          }
        }
        goto LAB_106ed7c40;
      }
    }
LAB_106ed7be4:
    func_0x00010c294ba0();
    if ((uVar4 & 1) == 0) {
      func_0x00010c264140();
      uVar4 = param_1;
    }
    goto LAB_106ed7c88;
  }
  uVar5 = param_1;
  func_0x00010c294c80();
  if ((uVar5 & 1) == 0) {
LAB_106ed7c40:
    uVar4 = param_1;
    func_0x00010c294c80();
    if ((((int)uVar4 == 0) || (*(int *)(param_1 + 0x120) == -0x264d)) ||
       (*(int *)(param_1 + 0x120) == 0)) {
      uVar4 = param_1;
      func_0x00010bf48b40();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar4 = param_1;
      func_0x00010c24cc60();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010c24cc60();
    _objc_retainAutoreleasedReturnValue();
    if (uVar4 == 0) goto LAB_106ed7c40;
  }
  func_0x00010bf3df40(param_1);
  _objc_release();
LAB_106ed7c88:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    uVar5 = uVar4;
    _objc_autoreleasePoolPush();
    func_0x00010c246340(*(undefined8 *)(uVar4 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(uVar5);
    return;
  }
  return;
}



/* Entry: 106ed7d5c; end: 106ed7d8b;  */

void FUN_106ed7d5c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c246340(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106ed7d8c; end: 106ed7f1b; -[GCDAsyncSocket completeCurrentRead] */

void FUN_106ed7d8c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  ulong uStack_60;
  long lStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  lVar3 = *(long *)(param_1 + 0xb0);
  uVar1 = *(ulong *)(lVar3 + 8);
  if (*(char *)(lVar3 + 0x40) == '\x01') {
    func_0x00010c1ba840(uVar1,param_2,*(undefined8 *)(lVar3 + 0x18));
    puVar4 = *(undefined **)(*(long *)(param_1 + 0xb0) + 8);
    _objc_retain(puVar4);
  }
  else {
    func_0x00010c08fa60();
    lVar3 = *(long *)(param_1 + 0xb0);
    if (*(ulong *)(lVar3 + 0x48) < uVar1) {
      func_0x00010c1ba840(*(undefined8 *)(lVar3 + 8));
      lVar3 = *(long *)(param_1 + 0xb0);
    }
    func_0x00010c0d3c60(*(undefined8 *)(lVar3 + 8));
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a40();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (uVar2 = uVar1, _objc_opt_respondsToSelector(uVar1,PTR_s_socket_didReadData_withTag__11266f2b8)
     , (uVar2 & 1) != 0)) {
    uVar5 = *(undefined8 *)(param_1 + 0xb0);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106ed7f1c;
    puStack_68 = &UNK_11084c4a0;
    _objc_retain(uVar1);
    uStack_60 = uVar1;
    lStack_58 = param_1;
    _objc_retain(puVar4);
    puStack_50 = puVar4;
    uStack_48 = uVar5;
    _objc_retain(uVar5);
    func_0x00010007380c(uVar6,&puStack_80);
    _objc_release(uStack_48);
    _objc_release(puStack_50);
    _objc_release(uStack_60);
    _objc_release(uVar5);
  }
  func_0x00010bf945a0(param_1);
  _objc_release(uVar1);
  _objc_release(puVar4);
  return;
}



/* Entry: 106ed7f1c; end: 106ed7f53;  */

void FUN_106ed7f1c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c246240(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106ed7f54; end: 106ed7f8f; -[GCDAsyncSocket endCurrentRead] */

void FUN_106ed7f54(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x90) != 0) {
    _dispatch_source_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = 0;
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ed7f90; end: 106ed8093; -[GCDAsyncSocket setupReadTimerWithTimeout:] */

void FUN_106ed7f90(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (0.0 <= param_1) {
    puVar1 = PTR___dispatch_source_type_timer_11034be38;
    _dispatch_source_create
              (PTR___dispatch_source_type_timer_11034be38,0,0,*(undefined8 *)(param_2 + 0x58));
    uVar2 = *(undefined8 *)(param_2 + 0x90);
    *(undefined **)(param_2 + 0x90) = puVar1;
    _objc_release(uVar2);
    _objc_initWeak(auStack_48,param_2);
    uVar2 = *(undefined8 *)(param_2 + 0x90);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106ed8094;
    puStack_58 = &UNK_1108434b0;
    _objc_copyWeak(auStack_50,auStack_48);
    _dispatch_source_set_event_handler(uVar2,&puStack_70);
    uVar2 = 0;
    _dispatch_time(0,(long)(param_1 * 1000000000.0));
    _dispatch_source_set_timer(*(undefined8 *)(param_2 + 0x90),uVar2,0xffffffffffffffff,0);
    _dispatch_resume(*(undefined8 *)(param_2 + 0x90));
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 106ed8094; end: 106ed80db;  */

void FUN_106ed8094(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf87500(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106ed80dc; end: 106ed81cb; -[GCDAsyncSocket doReadTimeout] */

void FUN_106ed80dc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  ulong uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
  uVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  if ((*(long *)(param_1 + 0x18) == 0) ||
     (uVar2 = uVar1,
     _objc_opt_respondsToSelector(uVar1,PTR_s_socket_shouldTimeoutReadWithTag__11266f2e0),
     (uVar2 & 1) == 0)) {
    func_0x00010bf87520(0,param_1);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0xb0);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106ed81cc;
    puStack_50 = &UNK_110848ba8;
    _objc_retain(uVar1);
    uStack_48 = uVar1;
    lStack_40 = param_1;
    uStack_38 = uVar3;
    _objc_retain(uVar3);
    func_0x00010007380c(uVar4,&puStack_68);
    _objc_release(uStack_38);
    _objc_release(uStack_48);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 106ed81cc; end: 106ed828f;  */

void FUN_106ed81cc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x28);
  func_0x00010c2462e0(*(undefined8 *)(param_1 + 0x20));
  lStack_30 = *(long *)(param_1 + 0x28);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x106ed825c;
  puStack_38 = &UNK_110848c48;
  uStack_28 = uVar2;
  func_0x00010007380c(*(undefined8 *)(lStack_30 + 0x58),&puStack_50);
  _objc_autoreleasePoolPop(lVar1);
  return;
}



/* Entry: 106ed8290; end: 106ed833f; -[GCDAsyncSocket doReadTimeoutWithExtension:] */

void FUN_106ed8290(double param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0xb0);
  if (lVar2 == 0) {
    return;
  }
  if (0.0 < param_1) {
    *(double *)(lVar2 + 0x28) = param_1 + *(double *)(lVar2 + 0x28);
    uVar1 = 0;
    _dispatch_time(0,(long)(param_1 * 1000000000.0));
    _dispatch_source_set_timer(*(undefined8 *)(param_2 + 0x90),uVar1,0xffffffffffffffff,0);
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffffff7;
                    /* WARNING: Could not recover jumptable at 0x00010bf874d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_doReadData_1125bf6d8);
    return;
  }
  lVar2 = param_2;
  func_0x00010c121a60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3df40(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106ed8340; end: 106ed840f; -[GCDAsyncSocket writeData:withTimeout:tag:] */

void FUN_106ed8340(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126d31f0;
    _objc_alloc();
    func_0x00010c008580(param_1);
    uVar3 = *(undefined8 *)(param_2 + 0x58);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106ed8410;
    puStack_58 = &UNK_110841f80;
    lStack_50 = param_2;
    puStack_48 = puVar2;
    _objc_retain();
    func_0x00010007380c(uVar3,&puStack_70);
    _objc_release(puStack_48);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 106ed8410; end: 106ed8463;  */

void FUN_106ed8410(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  if ((*(uint *)(*(long *)(param_1 + 0x20) + 8) & 5) == 1) {
    func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8),param_2,
                        *(undefined8 *)(param_1 + 0x28));
    func_0x00010c0c3880(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106ed8464; end: 106ed854b; -[GCDAsyncSocket progressOfWriteReturningTag:bytesDone:total:] */

undefined4
FUN_106ed8464(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined **ppuVar1;
  long lVar2;
  undefined4 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puStack_70 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106ed854c;
  puStack_80 = &UNK_110983228;
  ppuVar1 = &puStack_98;
  lStack_78 = param_1;
  uStack_68 = param_3;
  uStack_60 = param_4;
  uStack_58 = param_5;
  puStack_48 = puStack_70;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x58),ppuVar1);
  }
  else {
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  uVar3 = *(undefined4 *)(puStack_48 + 3);
  _objc_release(ppuVar1);
  __Block_object_dispose(&uStack_50,8);
  return uVar3;
}



/* Entry: 106ed854c; end: 106ed8617;  */

void FUN_106ed854c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  
  uVar4 = *(ulong *)(*(long *)(param_1 + 0x20) + 0xb8);
  if (uVar4 != 0) {
    puVar2 = PTR_PTR_1126d31f0;
    _objc_opt_class(PTR_PTR_1126d31f0);
    _objc_opt_isKindOfClass(uVar4,puVar2);
    if ((uVar4 & 1) != 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0xb8);
      uVar4 = *(ulong *)(lVar3 + 8);
      uVar1 = *(ulong *)(lVar3 + 0x10);
      func_0x00010c08fa60();
      if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x30) =
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 0xb8) + 0x18);
      }
      if (*(ulong **)(param_1 + 0x38) != (ulong *)0x0) {
        **(ulong **)(param_1 + 0x38) = uVar1;
      }
      if (*(ulong **)(param_1 + 0x40) != (ulong *)0x0) {
        **(ulong **)(param_1 + 0x40) = uVar4;
      }
      fVar5 = (float)uVar1 / (float)uVar4;
      goto LAB_106ed8600;
    }
  }
  if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x30) = 0;
  }
  if (*(undefined8 **)(param_1 + 0x38) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x38) = 0;
  }
  if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x40) = 0;
  }
  fVar5 = NAN;
LAB_106ed8600:
  *(float *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = fVar5;
  return;
}



/* Entry: 106ed8618; end: 106ed8713; -[GCDAsyncSocket maybeDequeueWrite] */

void FUN_106ed8618(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if ((*(long *)(param_1 + 0xb8) == 0) && ((*(byte *)(param_1 + 8) >> 1 & 1) != 0)) {
    lVar1 = *(long *)(param_1 + 0xa8);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0xa8);
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0xb8);
      *(undefined8 *)(param_1 + 0xb8) = uVar2;
      _objc_release(uVar4);
      func_0x00010c12d3c0(*(undefined8 *)(param_1 + 0xa8));
      uVar5 = *(ulong *)(param_1 + 0xb8);
      puVar3 = PTR_PTR_1126d31e8;
      _objc_opt_class(PTR_PTR_1126d31e8);
      _objc_opt_isKindOfClass(uVar5,puVar3);
      if ((uVar5 & 1) != 0) {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x1000;
                    /* WARNING: Could not recover jumptable at 0x00010c0c3a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_maybeStartTLS_11260e8b0);
        return;
      }
      func_0x00010c229d40(*(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x20),param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf875f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_doWriteData_1125bf720);
      return;
    }
    if ((*(uint *)(param_1 + 8) >> 6 & 1) != 0) {
      if ((*(uint *)(param_1 + 8) >> 5 & 1) != 0) {
        lVar1 = *(long *)(param_1 + 0xa0);
        func_0x00010bf529e0();
        if (lVar1 != 0) {
          return;
        }
        if (*(long *)(param_1 + 0xb0) != 0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bf3df50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_closeWithError__1125ad178,0);
      return;
    }
  }
  return;
}



/* Entry: 106ed8714; end: 106ed8bc3; -[GCDAsyncSocket doWriteData] */

/* WARNING: Possible PIC construction at 0x000106ed8ad4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106ed8a08: Changing call to branch */

void FUN_106ed8714(ulong param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  bool bVar8;
  bool bVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  ulong uStack_90;
  ulong uStack_88;
  int *piStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  ulong uStack_50;
  long lStack_48;
  
  if ((*(long *)(param_1 + 0xb8) == 0) || (uVar1 = *(uint *)(param_1 + 8), (uVar1 >> 4 & 1) != 0)) {
    uVar7 = param_1;
    func_0x00010c294ba0();
    if ((uVar7 & 1) != 0) {
      return;
    }
    if (-1 < *(char *)(param_1 + 8)) {
      return;
    }
LAB_106ed8780:
                    /* WARNING: Could not recover jumptable at 0x00010c2642f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_suspendWriteSource_112676ae0);
    return;
  }
  if ((uVar1 >> 7 & 1) == 0) {
    uVar7 = param_1;
    func_0x00010c294ba0();
    if ((uVar7 & 1) != 0) {
      return;
    }
    goto code_r0x00010c13dbe0;
  }
  if ((uVar1 >> 0xc & 1) != 0) {
    if ((uVar1 >> 0xb & 1) != 0) {
      uVar7 = param_1;
      func_0x00010c294c80();
      if ((int)uVar7 == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x124) != -0x264b) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010c24cdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_ssl_continueSSLHandshake_112670d90);
      return;
    }
    uVar7 = param_1;
    func_0x00010c294ba0();
    if ((uVar7 & 1) != 0) {
      return;
    }
    goto LAB_106ed8780;
  }
  uVar7 = param_1;
  if ((uVar1 >> 0xd & 1) == 0) {
    piVar6 = (int *)(ulong)*(uint *)(param_1 + 0x20);
    if ((*(uint *)(param_1 + 0x20) == 0xffffffff) &&
       (piVar6 = (int *)(ulong)*(uint *)(param_1 + 0x24), *(uint *)(param_1 + 0x24) == 0xffffffff))
    {
      piVar6 = (int *)(ulong)*(uint *)(param_1 + 0x28);
    }
    lVar2 = *(long *)(*(long *)(param_1 + 0xb8) + 8);
    func_0x00010bf25f00(lVar2);
    lVar5 = *(long *)(*(long *)(param_1 + 0xb8) + 8);
    lVar3 = *(long *)(*(long *)(param_1 + 0xb8) + 0x10);
    func_0x00010c08fa60(lVar5);
    _write(piVar6,lVar2 + lVar3,lVar5 - *(long *)(*(long *)(param_1 + 0xb8) + 0x10));
    if ((long)piVar6 < 0) {
      ___error();
      if (*piVar6 != 0x23) {
        ___error();
        func_0x00010bf992a0();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_106ed8930;
      }
LAB_106ed88fc:
      piVar6 = (int *)0x0;
LAB_106ed89ec:
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffff7f;
      func_0x00010c294ba0();
      if ((uVar7 & 1) == 0) goto code_r0x00010c13dbe0;
      uVar7 = 0;
      bVar8 = true;
    }
    else {
LAB_106ed87f8:
      bVar8 = false;
      uVar7 = 0;
    }
joined_r0x000106ed8aa8:
    if (piVar6 == (int *)0x0) goto LAB_106ed8aac;
    *(long *)(*(long *)(param_1 + 0xb8) + 0x10) =
         *(long *)(*(long *)(param_1 + 0xb8) + 0x10) + (long)piVar6;
    lVar5 = *(long *)(*(long *)(param_1 + 0xb8) + 8);
    lVar3 = *(long *)(*(long *)(param_1 + 0xb8) + 0x10);
    func_0x00010c08fa60();
    if (lVar3 == lVar5) {
      func_0x00010bf438a0();
      if (uVar7 == 0) {
        puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_68 = 0xc2000000;
        pcStack_60 = FUN_106ed8bc4;
        puStack_58 = &UNK_110842e18;
        uStack_50 = param_1;
        func_0x00010007380c(*(undefined8 *)(param_1 + 0x58),&puStack_70);
        return;
      }
      goto LAB_106ed8b6c;
    }
    bVar9 = false;
  }
  else {
    uVar10 = param_1;
    func_0x00010c294ba0();
    if ((int)uVar10 == 0) {
      if (*(long *)(param_1 + 0x118) == 0) {
        piVar6 = (int *)0x0;
        lVar5 = *(long *)(param_1 + 0xb8);
      }
      else {
        lStack_48 = 0;
        uVar11 = *(undefined8 *)(param_1 + 0x108);
        _SSLWrite(uVar11,0,0,&lStack_48);
        if ((int)uVar11 != 0) {
          if ((int)uVar11 == -0x264b) goto LAB_106ed88fc;
          func_0x00010c24cc60();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_106ed8930;
        }
        piVar6 = *(int **)(param_1 + 0x118);
        *(undefined8 *)(param_1 + 0x118) = 0;
        lVar3 = *(long *)(*(long *)(param_1 + 0xb8) + 8);
        func_0x00010c08fa60();
        lVar5 = *(long *)(param_1 + 0xb8);
        if (lVar3 == *(long *)(lVar5 + 0x10) + (long)piVar6) goto LAB_106ed87f8;
      }
      lVar5 = *(long *)(lVar5 + 8);
      func_0x00010bf25f00(lVar5);
      lVar3 = *(long *)(*(long *)(param_1 + 0xb8) + 8);
      lVar5 = (long)piVar6 + lVar5 + *(long *)(*(long *)(param_1 + 0xb8) + 0x10);
      func_0x00010c08fa60();
      uVar10 = lVar3 - ((long)piVar6 + *(long *)(*(long *)(param_1 + 0xb8) + 0x10));
      do {
        uVar4 = uVar10;
        if (0x7fff < uVar10) {
          uVar4 = 0x8000;
        }
        lStack_48 = 0;
        uVar11 = *(undefined8 *)(param_1 + 0x108);
        _SSLWrite(uVar11,lVar5,uVar4,&lStack_48);
        if ((int)uVar11 != 0) {
          if ((int)uVar11 != -0x264b) {
            func_0x00010c24cc60();
            _objc_retainAutoreleasedReturnValue();
            bVar8 = false;
            goto joined_r0x000106ed8aa8;
          }
          *(ulong *)(param_1 + 0x118) = uVar4;
          goto LAB_106ed89ec;
        }
        lVar5 = lVar5 + lStack_48;
        piVar6 = (int *)(lStack_48 + (long)piVar6);
        uVar10 = uVar10 - lStack_48;
      } while (uVar10 != 0);
      goto LAB_106ed87f8;
    }
    lVar2 = *(long *)(*(long *)(param_1 + 0xb8) + 8);
    func_0x00010bf25f00(lVar2);
    lVar5 = *(long *)(*(long *)(param_1 + 0xb8) + 8);
    lVar3 = *(long *)(*(long *)(param_1 + 0xb8) + 0x10);
    func_0x00010c08fa60(lVar5);
    piVar6 = *(int **)(param_1 + 0x100);
    _CFWriteStreamWrite(piVar6,lVar2 + lVar3,lVar5 - *(long *)(*(long *)(param_1 + 0xb8) + 0x10));
    if (-1 < (long)piVar6) goto LAB_106ed89ec;
    uVar7 = *(ulong *)(param_1 + 0x100);
    _CFWriteStreamCopyError();
LAB_106ed8930:
    piVar6 = (int *)0x0;
    bVar8 = false;
LAB_106ed8aac:
    bVar9 = true;
  }
  if ((!bVar8) && (uVar7 == 0)) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffff7f;
    uVar10 = param_1;
    func_0x00010c294ba0();
    if ((uVar10 & 1) == 0) {
code_r0x00010c13dbe0:
                    /* WARNING: Could not recover jumptable at 0x00010c13dbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resumeWriteSource_11262d118);
      return;
    }
  }
  if (!bVar9) {
    uVar10 = param_1 + 0x10;
    _objc_loadWeakRetained();
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar4 = uVar10,
       _objc_opt_respondsToSelector(uVar10,PTR_s_socket_didWritePartialDataOfLeng_11266f2d8),
       (uVar4 & 1) != 0)) {
      uVar12 = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x18);
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      uStack_a0 = 0x106ed8bf4;
      puStack_98 = &UNK_110844fe0;
      _objc_retain(uVar10);
      uStack_90 = uVar10;
      uStack_88 = param_1;
      piStack_80 = piVar6;
      uStack_78 = uVar12;
      func_0x00010007380c(uVar11,&puStack_b0);
      _objc_release(uStack_90);
    }
    _objc_release();
  }
  if (uVar7 == 0) {
    return;
  }
LAB_106ed8b6c:
  ___error();
  uVar10 = param_1;
  func_0x00010bf992a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3df40(param_1);
  _objc_release(uVar10);
  _objc_release(uVar7);
  return;
}



/* Entry: 106ed8bc4; end: 106ed8c27;  */

void FUN_106ed8bc4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c0c3880(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106ed8c28; end: 106ed8ce7; -[GCDAsyncSocket completeCurrentWrite] */

void FUN_106ed8c28(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  ulong uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (uVar2 = uVar1, _objc_opt_respondsToSelector(uVar1,PTR_s_socket_didWriteDataWithTag__11266f2d0)
     , (uVar2 & 1) != 0)) {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x18);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106ed8ce8;
    puStack_50 = &UNK_110844b80;
    _objc_retain(uVar1);
    uStack_48 = uVar1;
    lStack_40 = param_1;
    uStack_38 = uVar4;
    func_0x00010007380c(uVar3,&puStack_68);
    _objc_release(uStack_48);
  }
  func_0x00010bf94600(param_1);
  _objc_release(uVar1);
  return;
}



/* Entry: 106ed8ce8; end: 106ed8d1b;  */

void FUN_106ed8ce8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c2462a0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106ed8d1c; end: 106ed8d57; -[GCDAsyncSocket endCurrentWrite] */

void FUN_106ed8d1c(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x98) != 0) {
    _dispatch_source_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = 0;
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ed8d58; end: 106ed8e5b; -[GCDAsyncSocket setupWriteTimerWithTimeout:] */

void FUN_106ed8d58(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (0.0 <= param_1) {
    puVar1 = PTR___dispatch_source_type_timer_11034be38;
    _dispatch_source_create
              (PTR___dispatch_source_type_timer_11034be38,0,0,*(undefined8 *)(param_2 + 0x58));
    uVar2 = *(undefined8 *)(param_2 + 0x98);
    *(undefined **)(param_2 + 0x98) = puVar1;
    _objc_release(uVar2);
    _objc_initWeak(auStack_48,param_2);
    uVar2 = *(undefined8 *)(param_2 + 0x98);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106ed8e5c;
    puStack_58 = &UNK_1108434b0;
    _objc_copyWeak(auStack_50,auStack_48);
    _dispatch_source_set_event_handler(uVar2,&puStack_70);
    uVar2 = 0;
    _dispatch_time(0,(long)(param_1 * 1000000000.0));
    _dispatch_source_set_timer(*(undefined8 *)(param_2 + 0x98),uVar2,0xffffffffffffffff,0);
    _dispatch_resume(*(undefined8 *)(param_2 + 0x98));
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 106ed8e5c; end: 106ed8ea3;  */

void FUN_106ed8e5c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf87600(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106ed8ea4; end: 106ed8f93; -[GCDAsyncSocket doWriteTimeout] */

void FUN_106ed8ea4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  ulong uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x10;
  uVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  if ((*(long *)(param_1 + 0x18) == 0) ||
     (uVar2 = uVar1,
     _objc_opt_respondsToSelector(uVar1,PTR_s_socket_shouldTimeoutWriteWithTag_11266f2e8),
     (uVar2 & 1) == 0)) {
    func_0x00010bf87620(0,param_1);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0xb8);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106ed8f94;
    puStack_50 = &UNK_110848ba8;
    _objc_retain(uVar1);
    uStack_48 = uVar1;
    lStack_40 = param_1;
    uStack_38 = uVar3;
    _objc_retain(uVar3);
    func_0x00010007380c(uVar4,&puStack_68);
    _objc_release(uStack_38);
    _objc_release(uStack_48);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 106ed8f94; end: 106ed9053;  */

void FUN_106ed8f94(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x20);
  func_0x00010c246300(*(undefined8 *)(param_1 + 0x20));
  lStack_30 = *(long *)(param_1 + 0x28);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x106ed9020;
  puStack_38 = &UNK_110848c48;
  uStack_28 = uVar2;
  func_0x00010007380c(*(undefined8 *)(lStack_30 + 0x58),&puStack_50);
  _objc_autoreleasePoolPop(lVar1);
  return;
}



/* Entry: 106ed9054; end: 106ed9103; -[GCDAsyncSocket doWriteTimeoutWithExtension:] */

void FUN_106ed9054(double param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0xb8);
  if (lVar2 == 0) {
    return;
  }
  if (0.0 < param_1) {
    *(double *)(lVar2 + 0x20) = param_1 + *(double *)(lVar2 + 0x20);
    uVar1 = 0;
    _dispatch_time(0,(long)(param_1 * 1000000000.0));
    _dispatch_source_set_timer(*(undefined8 *)(param_2 + 0x98),uVar1,0xffffffffffffffff,0);
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffffef;
                    /* WARNING: Could not recover jumptable at 0x00010bf875f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_doWriteData_1125bf720);
    return;
  }
  lVar2 = param_2;
  func_0x00010c2be4a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3df40(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106ed9104; end: 106ed91cb; -[GCDAsyncSocket startTLS:] */

void FUN_106ed9104(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    param_3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar1 = PTR_PTR_1126d31e8;
  _objc_alloc();
  func_0x00010c050100();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106ed91cc;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  puStack_38 = puVar1;
  _objc_retain();
  func_0x00010007380c(uVar2,&puStack_60);
  _objc_release(puStack_38);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106ed91cc; end: 106ed9243;  */

void FUN_106ed91cc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  if ((*(uint *)(*(long *)(param_1 + 0x20) + 8) & 0x405) == 1) {
    func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0),param_2,
                        *(undefined8 *)(param_1 + 0x28));
    func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8),param_2,
                        *(undefined8 *)(param_1 + 0x28));
    *(uint *)(*(long *)(param_1 + 0x20) + 8) = *(uint *)(*(long *)(param_1 + 0x20) + 8) | 0x400;
    func_0x00010c0c3840(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c0c3880(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106ed9244; end: 106ed932b; -[GCDAsyncSocket maybeStartTLS] */

void FUN_106ed9244(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  if (((*(uint *)(param_1 + 8) ^ 0xffffffff) & 0x1800) != 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0xb0);
  _objc_retain(lVar3);
  puVar4 = PTR____NSDictionary0__struct_11034ab58;
  if (lVar3 != 0) {
    puVar4 = *(undefined **)(lVar3 + 8);
    _objc_retain(puVar4);
  }
  puVar1 = puVar4;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  else {
    puVar2 = puVar1;
    func_0x00010bf1f3c0();
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(lVar3);
    if (((ulong)puVar2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf34b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_cf_startTLS_1125aac70);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c24cdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_ssl_startTLS_112670da0);
  return;
}



/* Entry: 106ed932c; end: 106ed94eb; -[GCDAsyncSocket sslReadWithBuffer:length:] */

undefined4 FUN_106ed932c(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  if (*(long *)(param_1 + 0xc0) == 0) {
    lVar2 = *(long *)(param_1 + 0x110);
    func_0x00010bf12620();
    if (lVar2 == 0) {
      func_0x00010c13d6a0(param_1);
      *param_4 = 0;
      return 0xffffd9b5;
    }
  }
  piVar8 = (int *)*param_4;
  piVar3 = *(int **)(param_1 + 0x110);
  func_0x00010bf12620();
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    if (piVar8 <= piVar3) {
      piVar3 = piVar8;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x110);
    func_0x00010c121220(uVar4);
    _memcpy(param_3,uVar4,piVar3);
    func_0x00010bf78f40(*(undefined8 *)(param_1 + 0x110));
    piVar8 = (int *)((long)piVar8 - (long)piVar3);
    if (piVar8 == (int *)0x0) {
      *param_4 = (long)piVar3;
      return 0;
    }
  }
  piVar5 = *(int **)(param_1 + 0xc0);
  if (piVar5 == (int *)0x0) {
    *param_4 = (long)piVar3;
  }
  else {
    piVar6 = (int *)(ulong)*(uint *)(param_1 + 0x20);
    if ((*(uint *)(param_1 + 0x20) == 0xffffffff) &&
       (piVar6 = (int *)(ulong)*(uint *)(param_1 + 0x24), *(uint *)(param_1 + 0x24) == 0xffffffff))
    {
      piVar6 = (int *)(ulong)*(uint *)(param_1 + 0x28);
    }
    if (piVar8 < piVar5) {
      func_0x00010bf966a0(*(undefined8 *)(param_1 + 0x110));
      piVar7 = *(int **)(param_1 + 0xc0);
      lVar2 = *(long *)(param_1 + 0x110);
      func_0x00010c2bd960(lVar2);
    }
    else {
      lVar2 = param_3 + (long)piVar3;
      piVar7 = piVar8;
    }
    _read(piVar6,lVar2,piVar7);
    if ((long)piVar6 < 0) {
      ___error();
      iVar1 = *piVar6;
      *(undefined8 *)(param_1 + 0xc0) = 0;
      *param_4 = (long)piVar3;
      if (iVar1 != 0x23) {
        return 0xffffd9b2;
      }
      return 0xffffd9b5;
    }
    if (piVar6 == (int *)0x0) {
      *(undefined8 *)(param_1 + 0xc0) = 0;
      *param_4 = (long)piVar3;
      return 0xffffd9b2;
    }
    lVar2 = 0;
    if (piVar6 <= *(int **)(param_1 + 0xc0)) {
      lVar2 = (long)*(int **)(param_1 + 0xc0) - (long)piVar6;
    }
    *(long *)(param_1 + 0xc0) = lVar2;
    piVar7 = piVar6;
    if (piVar8 < piVar5) {
      func_0x00010bf7ec00(*(undefined8 *)(param_1 + 0x110));
      piVar7 = piVar8;
      if (piVar6 <= piVar8) {
        piVar7 = piVar6;
      }
      uVar4 = *(undefined8 *)(param_1 + 0x110);
      func_0x00010c121220(uVar4);
      _memcpy(param_3 + (long)piVar3,uVar4,piVar7);
      func_0x00010bf78f40(*(undefined8 *)(param_1 + 0x110));
    }
    *param_4 = (long)piVar7 + (long)piVar3;
    if (piVar8 == piVar7) {
      return 0;
    }
  }
  return 0xffffd9b5;
}



/* Entry: 106ed94ec; end: 106ed95af; -[GCDAsyncSocket sslWriteWithBuffer:length:] */

undefined4 FUN_106ed94ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (*(char *)(param_1 + 8) < '\0') {
    piVar3 = (int *)*param_4;
    piVar2 = (int *)(ulong)*(uint *)(param_1 + 0x20);
    if ((*(uint *)(param_1 + 0x20) == 0xffffffff) &&
       (piVar2 = (int *)(ulong)*(uint *)(param_1 + 0x24), *(uint *)(param_1 + 0x24) == 0xffffffff))
    {
      piVar2 = (int *)(ulong)*(uint *)(param_1 + 0x28);
    }
    _write(piVar2,param_3,piVar3);
    if ((long)piVar2 < 0) {
      ___error();
      iVar1 = *piVar2;
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffff7f;
      *param_4 = 0;
      if (iVar1 == 0x23) {
        return 0xffffd9b5;
      }
      return 0xffffd9b2;
    }
    if (piVar2 != (int *)0x0) {
      *param_4 = piVar2;
      if (piVar2 == piVar3) {
        return 0;
      }
      return 0xffffd9b5;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffff7f;
  }
  else {
    func_0x00010c13dbe0(param_1);
  }
  *param_4 = 0;
  return 0xffffd9b5;
}



/* Entry: 106ed95b0; end: 106ed9e23; -[GCDAsyncSocket ssl_startTLS] */

void FUN_106ed95b0(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long extraout_x8;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined2 auStack_70 [4];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(param_1 + 0xb0);
  _objc_retain(lVar9);
  if (lVar9 == 0) {
    uVar10 = param_1;
    func_0x00010c0ede80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3df40(param_1);
    goto LAB_106ed96ec;
  }
  uVar10 = *(ulong *)(lVar9 + 8);
  _objc_retain(uVar10);
  uVar1 = uVar10;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  lVar2 = *(long *)PTR__kCFAllocatorDefault_11034ab78;
  _SSLCreateContext(lVar2,(uint)uVar11 ^ 1,0);
  *(long *)(param_1 + 0x108) = lVar2;
  if ((lVar2 != 0) && (_SSLSetIOFuncs(), (int)lVar2 == 0)) {
    uVar8 = *(undefined8 *)(param_1 + 0x108);
    _SSLSetConnection(uVar8,param_1);
    if ((int)uVar8 == 0) {
      uVar1 = uVar10;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010bf1f3c0();
      _objc_release(uVar1);
      if ((int)uVar3 == 0) {
LAB_106ed9794:
        uVar11 = uVar10;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        uVar1 = uVar11;
        _objc_opt_isKindOfClass(uVar11,puVar4);
        if ((uVar1 & 1) == 0) {
          if (uVar11 != 0) goto LAB_106ed9810;
        }
        else {
          uVar1 = uVar11;
          _objc_retainAutorelease(uVar11);
          func_0x00010bdc3520();
          uVar3 = uVar1;
          _strlen();
          uVar8 = *(undefined8 *)(param_1 + 0x108);
          _SSLSetPeerDomainName(uVar8,uVar1,uVar3);
          if ((int)uVar8 != 0) goto LAB_106ed9810;
        }
        uVar1 = uVar10;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar11);
        puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
        _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
        uVar11 = uVar1;
        _objc_opt_isKindOfClass(uVar1,puVar4);
        if ((uVar11 & 1) == 0) {
          if (uVar1 == 0) goto LAB_106ed98d8;
        }
        else {
          uVar8 = *(undefined8 *)(param_1 + 0x108);
          _SSLSetCertificate(uVar8,uVar1);
          if ((int)uVar8 == 0) {
LAB_106ed98d8:
            uVar3 = uVar10;
            func_0x00010c0dff20();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar1);
            puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
            _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
            uVar1 = uVar3;
            _objc_opt_isKindOfClass(uVar3,puVar4);
            if ((uVar1 & 1) == 0) {
              uVar11 = uVar3;
              if (uVar3 != 0) goto LAB_106ed9810;
            }
            else {
              _objc_retain(uVar3);
              uVar8 = *(undefined8 *)(param_1 + 0x108);
              uVar1 = uVar3;
              _objc_retainAutorelease(uVar3);
              func_0x00010bf25f00();
              uVar11 = uVar3;
              func_0x00010c08fa60(uVar3);
              _SSLSetPeerID(uVar8,uVar1,uVar11);
              if ((int)uVar8 != 0) {
                uVar1 = param_1;
                func_0x00010c0ede80(param_1);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf3df40(param_1);
                _objc_release(uVar1);
                uVar1 = uVar3;
                goto LAB_106ed9834;
              }
              _objc_release(uVar3);
            }
            uVar1 = uVar10;
            func_0x00010c0dff20();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar3);
            puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
            uVar11 = uVar1;
            _objc_opt_isKindOfClass(uVar1,puVar4);
            if ((uVar11 & 1) == 0) {
              if (uVar1 != 0) goto LAB_106ed98a8;
            }
            else {
              uVar11 = uVar1;
              func_0x00010c067ec0();
              if ((int)uVar11 != 0) {
                uVar8 = *(undefined8 *)(param_1 + 0x108);
                _SSLSetProtocolVersionMin(uVar8,uVar11);
                if ((int)uVar8 != 0) goto LAB_106ed98a8;
              }
            }
            uVar11 = uVar10;
            func_0x00010c0dff20();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar1);
            puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
            uVar1 = uVar11;
            _objc_opt_isKindOfClass(uVar11,puVar4);
            if ((uVar1 & 1) == 0) {
              if (uVar11 != 0) goto LAB_106ed9810;
            }
            else {
              uVar1 = uVar11;
              func_0x00010c067ec0();
              if ((int)uVar1 != 0) {
                uVar8 = *(undefined8 *)(param_1 + 0x108);
                _SSLSetProtocolVersionMax(uVar8,uVar1);
                if ((int)uVar8 != 0) goto LAB_106ed9810;
              }
            }
            uVar1 = uVar10;
            func_0x00010c0dff20();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar11);
            puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
            uVar11 = uVar1;
            _objc_opt_isKindOfClass(uVar1,puVar4);
            if ((uVar11 & 1) == 0) {
              if (uVar1 == 0) goto LAB_106ed9b04;
            }
            else {
              uVar8 = *(undefined8 *)(param_1 + 0x108);
              uVar11 = uVar1;
              func_0x00010bf1f3c0(uVar1);
              _SSLSetSessionOption(uVar8,3,uVar11);
              if ((int)uVar8 == 0) {
LAB_106ed9b04:
                uVar11 = uVar10;
                func_0x00010c0dff20();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar1);
                puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
                uVar1 = uVar11;
                _objc_opt_isKindOfClass(uVar11,puVar4);
                if ((uVar1 & 1) == 0) {
                  if (uVar11 != 0) goto LAB_106ed9810;
                }
                else {
                  uVar8 = *(undefined8 *)(param_1 + 0x108);
                  uVar1 = uVar11;
                  func_0x00010bf1f3c0(uVar11);
                  _SSLSetSessionOption(uVar8,4,uVar1);
                  if ((int)uVar8 != 0) goto LAB_106ed9810;
                }
                uVar3 = uVar10;
                func_0x00010c0dff20();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar11);
                puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
                _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
                uVar1 = uVar3;
                _objc_opt_isKindOfClass(uVar3,puVar4);
                if ((uVar1 & 1) == 0) {
                  uVar11 = uVar3;
                  if (uVar3 != 0) goto LAB_106ed9810;
                }
                else {
                  _objc_retain(uVar3);
                  uVar1 = uVar3;
                  func_0x00010bf529e0();
                  uVar11 = uVar1;
                  (*(code *)PTR____chkstk_darwin_11034bd40)(uVar1 * 2 + 0xf & 0xfffffffffffffff0);
                  if (uVar11 != 0) {
                    uVar11 = 0;
                    do {
                      uVar5 = uVar3;
                      func_0x00010c0dfd20();
                      _objc_retainAutoreleasedReturnValue();
                      uVar6 = uVar5;
                      func_0x00010c282760();
                      *(short *)(((long)auStack_70 - extraout_x8) + uVar11 * 2) = (short)uVar6;
                      _objc_release(uVar5);
                      uVar11 = uVar11 + 1;
                    } while (uVar1 != uVar11);
                  }
                  uVar8 = *(undefined8 *)(param_1 + 0x108);
                  _SSLSetEnabledCiphers(uVar8,(long)auStack_70 - extraout_x8,uVar1);
                  if ((int)uVar8 != 0) {
                    uVar1 = param_1;
                    func_0x00010c0ede80(param_1);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf3df40(param_1);
                    _objc_release(uVar1);
                    uVar1 = uVar3;
                    goto LAB_106ed9834;
                  }
                  _objc_release(uVar3);
                }
                uVar1 = uVar10;
                func_0x00010c0dff20();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar3);
                if (uVar1 == 0) {
                  uVar11 = uVar10;
                  func_0x00010c0dff20();
                  _objc_retainAutoreleasedReturnValue();
                  if (uVar11 != 0) goto LAB_106ed9810;
                  uVar11 = uVar10;
                  func_0x00010c0dff20();
                  _objc_retainAutoreleasedReturnValue();
                  if (uVar11 != 0) goto LAB_106ed9810;
                  uVar11 = uVar10;
                  func_0x00010c0dff20();
                  _objc_retainAutoreleasedReturnValue();
                  if (uVar11 == 0) goto LAB_106ed9d68;
                  goto LAB_106ed9810;
                }
              }
            }
          }
        }
LAB_106ed98a8:
        uVar11 = param_1;
        func_0x00010c0ede80(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3df40(param_1);
        _objc_release(uVar11);
        goto LAB_106ed96e8;
      }
      if ((uint)uVar11 == 0) {
        uVar8 = *(undefined8 *)(param_1 + 0x108);
        _SSLSetSessionOption(uVar8,0,1);
        if ((int)uVar8 == 0) goto LAB_106ed9794;
      }
    }
  }
  uVar1 = param_1;
  func_0x00010c0ede80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3df40(param_1);
LAB_106ed96e8:
  do {
    _objc_release(uVar1);
LAB_106ed96ec:
    while( true ) {
      _objc_release(uVar10);
      _objc_release(lVar9);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        return;
      }
      ___stack_chk_fail();
LAB_106ed9d68:
      uVar11 = uVar10;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      if (uVar11 != 0) break;
      puVar4 = PTR_PTR_1126d31d8;
      _objc_alloc();
      func_0x00010bffc4a0();
      uVar8 = *(undefined8 *)(param_1 + 0x110);
      *(undefined **)(param_1 + 0x110) = puVar4;
      _objc_release(uVar8);
      lVar2 = *(long *)(param_1 + 200);
      func_0x00010bf12620();
      if (lVar2 != 0) {
        func_0x00010bf966a0(*(undefined8 *)(param_1 + 0x110));
        uVar8 = *(undefined8 *)(param_1 + 0x110);
        func_0x00010c2bd960(uVar8);
        uVar7 = *(undefined8 *)(param_1 + 200);
        func_0x00010c121220(uVar7);
        _memcpy(uVar8,uVar7,lVar2);
        func_0x00010bf78f40(*(undefined8 *)(param_1 + 200));
        func_0x00010bf7ec00(*(undefined8 *)(param_1 + 0x110));
      }
      *(undefined8 *)(param_1 + 0x120) = 0;
      func_0x00010c24cda0(param_1);
    }
LAB_106ed9810:
    uVar3 = param_1;
    func_0x00010c0ede80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3df40(param_1);
    uVar1 = uVar11;
LAB_106ed9834:
    _objc_release(uVar3);
  } while( true );
}



/* Entry: 106ed9e24; end: 106ed9e3b;  */

void FUN_106ed9e24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24ccd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_sslReadWithBuffer_length__112670d58,param_2,param_3);
  return;
}



/* Entry: 106ed9e3c; end: 106eda1a7; -[GCDAsyncSocket ssl_continueSSLHandshake] */

void FUN_106ed9e3c(ulong param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  ulong uStack_118;
  ulong uStack_110;
  undefined **ppuStack_108;
  undefined8 *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  ulong uStack_d8;
  undefined8 *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined4 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  iVar3 = (int)*(undefined8 *)(param_1 + 0x108);
  _SSLHandshake();
  *(int *)(param_1 + 0x124) = iVar3;
  if (iVar3 == -0x2671) {
    puStack_a8 = &uStack_b0;
    uStack_b0 = 0;
    uStack_a0 = 0x2020000000;
    uStack_98 = 0;
    uVar8 = *(undefined8 *)(param_1 + 0x108);
    _SSLCopyPeerTrust(uVar8,&uStack_98);
    if ((int)uVar8 == 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x38);
      uVar7 = *(ulong *)(param_1 + 0x58);
      _objc_retain(uVar7);
      _objc_initWeak(auStack_b8,param_1);
      puVar2 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_f0 = 0xc2000000;
      pcStack_e8 = FUN_106eda1d8;
      puStack_e0 = &UNK_110983288;
      _objc_retain(uVar7);
      puStack_d0 = &uStack_b0;
      uStack_d8 = uVar7;
      _objc_copyWeak(auStack_c8,auStack_b8);
      ppuVar4 = &puStack_f8;
      uStack_c0 = uVar1;
      _objc_retainBlock();
      uVar5 = param_1 + 0x10;
      _objc_loadWeakRetained();
      if ((*(long *)(param_1 + 0x18) == 0) ||
         (uVar6 = uVar5,
         _objc_opt_respondsToSelector(uVar5,PTR_s_socket_didReceiveTrust_completio_11266f2c8),
         (uVar6 & 1) == 0)) {
        if (puStack_a8[3] != 0) {
          _CFRelease();
          puStack_a8[3] = 0;
        }
        uVar6 = param_1;
        func_0x00010c0ede80(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3df40(param_1);
      }
      else {
        uVar8 = *(undefined8 *)(param_1 + 0x18);
        puStack_138 = puVar2;
        uStack_130 = 0xc2000000;
        pcStack_128 = FUN_106eda2fc;
        puStack_120 = &UNK_110883410;
        _objc_retain(uVar5);
        puStack_100 = &uStack_b0;
        uStack_118 = uVar5;
        uStack_110 = param_1;
        _objc_retain(ppuVar4);
        ppuStack_108 = ppuVar4;
        func_0x00010007380c(uVar8,&puStack_138);
        _objc_release(ppuStack_108);
        uVar6 = uStack_118;
      }
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(ppuVar4);
      _objc_destroyWeak(auStack_c8);
      _objc_release(uStack_d8);
      _objc_destroyWeak(auStack_b8);
    }
    else {
      uVar7 = param_1;
      func_0x00010c24cc60(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3df40(param_1);
    }
    _objc_release(uVar7);
    __Block_object_dispose(&uStack_b0,8);
  }
  else if (iVar3 != -0x264b) {
    if (iVar3 != 0) {
      uVar5 = param_1;
      func_0x00010c24cc60(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3df40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar5);
      return;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffc7ff | 0x2000;
    uVar5 = param_1 + 0x10;
    _objc_loadWeakRetained();
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar7 = uVar5, _objc_opt_respondsToSelector(uVar5,PTR_s_socketDidSecure__11266f308),
       (uVar7 & 1) != 0)) {
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_106eda1a8;
      puStack_78 = &UNK_110841f80;
      _objc_retain(uVar5);
      uStack_70 = uVar5;
      uStack_68 = param_1;
      func_0x00010007380c(uVar8,&puStack_90);
      _objc_release(uStack_70);
    }
    func_0x00010bf945a0(param_1);
    func_0x00010bf94600(param_1);
    func_0x00010c0c3840(param_1);
    func_0x00010c0c3880(param_1);
    _objc_release(uVar5);
  }
  return;
}



/* Entry: 106eda1a8; end: 106eda1d7;  */

void FUN_106eda1a8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c246380(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106eda1d8; end: 106eda283;  */

void FUN_106eda1d8(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  undefined1 uStack_44;
  
  lVar2 = param_1;
  _objc_autoreleasePoolPush();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106eda284;
  puStack_60 = &UNK_110983258;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_50,param_1 + 0x30);
  uStack_48 = *(undefined4 *)(param_1 + 0x38);
  uStack_44 = param_2;
  func_0x00010007380c(uVar1,&puStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_autoreleasePoolPop(lVar2);
  return;
}



/* Entry: 106eda284; end: 106eda2fb;  */

void FUN_106eda284(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) != 0) {
    _CFRelease();
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  }
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    func_0x00010c24cdc0(lVar2,param_2,*(undefined1 *)(param_1 + 0x34),
                        *(undefined4 *)(param_1 + 0x30));
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106eda2fc; end: 106eda337;  */

void FUN_106eda2fc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c246280(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18),
                      *(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106eda338; end: 106eda3af; -[GCDAsyncSocket ssl_shouldTrustPeer:stateIndex:] */

void FUN_106eda338(long param_1,undefined8 param_2,int param_3,int param_4)

{
  long lVar1;
  
  if (param_4 != *(int *)(param_1 + 0x38)) {
    return;
  }
  *(int *)(param_1 + 0x38) = param_4 + 1;
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c24cdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_ssl_continueSSLHandshake_112670d90);
    return;
  }
  lVar1 = param_1;
  func_0x00010c24cc60(param_1,param_2,0xffffd99f);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3df40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106eda3b0; end: 106eda497; -[GCDAsyncSocket cf_finishSSLHandshake] */

void FUN_106eda3b0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  ulong uStack_40;
  long lStack_38;
  
  if (((*(uint *)(param_1 + 8) ^ 0xffffffff) & 0x1800) == 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffc7ff | 0x2000;
    uVar1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar2 = uVar1, _objc_opt_respondsToSelector(uVar1,PTR_s_socketDidSecure__11266f308),
       (uVar2 & 1) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_106eda498;
      puStack_48 = &UNK_110841f80;
      _objc_retain(uVar1);
      uStack_40 = uVar1;
      lStack_38 = param_1;
      func_0x00010007380c(uVar3,&puStack_60);
      _objc_release(uStack_40);
    }
    func_0x00010bf945a0(param_1);
    func_0x00010bf94600(param_1);
    func_0x00010c0c3840(param_1);
    func_0x00010c0c3880(param_1);
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 106eda498; end: 106eda4c7;  */

void FUN_106eda498(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c246380(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106eda4c8; end: 106eda4e7; -[GCDAsyncSocket cf_abortSSLHandshake:] */

void FUN_106eda4c8(long param_1)

{
  if (((*(uint *)(param_1 + 8) ^ 0xffffffff) & 0x1800) == 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffe7ff;
                    /* WARNING: Could not recover jumptable at 0x00010bf3df50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_closeWithError__1125ad178);
    return;
  }
  return;
}



/* Entry: 106eda4e8; end: 106eda65b; -[GCDAsyncSocket cf_startTLS] */

void FUN_106eda4e8(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = *(long *)(param_1 + 200);
  func_0x00010bf12620();
  if (lVar1 == 0) {
    func_0x00010c264140(param_1);
    func_0x00010c2642e0(param_1);
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfff3ff7f | 0x40000;
    uVar5 = param_1;
    func_0x00010bf58240();
    if ((((uVar5 & 1) != 0) && (uVar5 = param_1, func_0x00010c126660(), (uVar5 & 1) != 0)) &&
       (uVar5 = param_1, func_0x00010befbaa0(), (uVar5 & 1) != 0)) {
      uVar5 = *(ulong *)(param_1 + 0xb0);
      _objc_retain(uVar5);
      uVar6 = *(undefined8 *)(uVar5 + 8);
      uVar2 = *(undefined8 *)(param_1 + 0xf8);
      uVar7 = *(undefined8 *)PTR__kCFStreamPropertySSLSettings_11034bb50;
      _CFReadStreamSetProperty(uVar2,uVar7,uVar6);
      uVar3 = *(undefined8 *)(param_1 + 0x100);
      _CFWriteStreamSetProperty(uVar3,uVar7,uVar6);
      if (((((uint)uVar2 | (uint)uVar3) & 0xff) == 0) ||
         (uVar4 = param_1, func_0x00010c0e9900(), (uVar4 & 1) == 0)) {
        uVar4 = param_1;
        func_0x00010c0ede80(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3df40(param_1);
        _objc_release(uVar4);
      }
      goto LAB_106eda610;
    }
  }
  uVar5 = param_1;
  func_0x00010c0ede80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3df40(param_1);
LAB_106eda610:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 106eda65c; end: 106eda65f; +[GCDAsyncSocket ignore:] */

void FUN_106eda65c(void)

{
  return;
}



/* Entry: 106eda660; end: 106eda7b3; +[GCDAsyncSocket startCFStreamThreadIfNeeded] */

void FUN_106eda660(undefined8 param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if (lRam00000001136c8000 != -1) {
    func_0x00010002a2fc(0x1136c8000,&PTR___NSConcreteGlobalBlock_1109832b8);
  }
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  uStack_38 = 0x106eda72c;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  func_0x00010006eaa4(uRam00000001136c8010,&puStack_48);
  return;
}



/* Entry: 106eda7b4; end: 106eda82b; +[GCDAsyncSocket stopCFStreamThreadIfNeeded] */

void FUN_106eda7b4(void)

{
  _dispatch_time(0,30000000000);
  func_0x00010058c530();
  return;
}



/* Entry: 106eda82c; end: 106eda8e3;  */

void FUN_106eda82c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar3 = param_1;
  _objc_autoreleasePoolPush();
  if ((lRam00000001136c8008 != 0) &&
     (lRam00000001136c8008 = lRam00000001136c8008 + -1, lRam00000001136c8008 == 0)) {
    func_0x00010bf2dba0(uRam00000001136c8018);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_opt_class(uVar4);
    uVar2 = uRam00000001136c8018;
    puVar1 = PTR_s_ignore__112535d88;
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8ee0(uVar4,param_2,puVar1,uVar2,puVar5,0);
    _objc_release(puVar5);
    uVar2 = uRam00000001136c8018;
    uRam00000001136c8018 = 0;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar3);
  return;
}



/* Entry: 106eda8e4; end: 106edaa33; +[GCDAsyncSocket cfstreamThread] */

void FUN_106eda8e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  uVar1 = param_1;
  _objc_autoreleasePoolPush();
  puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010bf60460(PTR__OBJC_CLASS___NSThread_1126b47e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cafa0();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf87060(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3a0();
  func_0x00010c1503c0(puVar2,param_2,param_1,PTR_s_ignore__112535d88,0,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010bf60460();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010bf5fe80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c06e0e0();
  if (((ulong)puVar4 & 1) == 0) {
    uVar6 = *(undefined8 *)PTR__NSDefaultRunLoopMode_11034aa38;
    do {
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf87060(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c1428e0(puVar3,param_2,uVar6,puVar4);
      _objc_release(puVar4);
      if ((int)puVar5 == 0) break;
      puVar4 = puVar2;
      func_0x00010c06e0e0();
    } while ((int)puVar4 == 0);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(uVar1);
  return;
}



/* Entry: 106edaa34; end: 106edaa9b; +[GCDAsyncSocket scheduleCFStreams:] */

void FUN_106edaa34(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = param_3;
  _objc_retain(param_3);
  _CFRunLoopGetCurrent();
  puVar1 = PTR__kCFRunLoopDefaultMode_11034abe8;
  if (*(long *)(param_3 + 0xf8) != 0) {
    _CFReadStreamScheduleWithRunLoop
              (*(long *)(param_3 + 0xf8),lVar2,*(undefined8 *)PTR__kCFRunLoopDefaultMode_11034abe8);
  }
  if (*(long *)(param_3 + 0x100) != 0) {
    _CFWriteStreamScheduleWithRunLoop(*(long *)(param_3 + 0x100),lVar2,*(undefined8 *)puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106edaa9c; end: 106edab03; +[GCDAsyncSocket unscheduleCFStreams:] */

void FUN_106edaa9c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = param_3;
  _objc_retain(param_3);
  _CFRunLoopGetCurrent();
  puVar1 = PTR__kCFRunLoopDefaultMode_11034abe8;
  if (*(long *)(param_3 + 0xf8) != 0) {
    _CFReadStreamUnscheduleFromRunLoop
              (*(long *)(param_3 + 0xf8),lVar2,*(undefined8 *)PTR__kCFRunLoopDefaultMode_11034abe8);
  }
  if (*(long *)(param_3 + 0x100) != 0) {
    _CFWriteStreamUnscheduleFromRunLoop(*(long *)(param_3 + 0x100),lVar2,*(undefined8 *)puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106edab04; end: 106edac13; -[GCDAsyncSocket createReadAndWriteStream] */

void FUN_106edab04(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  
  plVar5 = (long *)(param_1 + 0xf8);
  if (*plVar5 != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x100) != 0) {
    return;
  }
  iVar6 = *(int *)(param_1 + 0x20);
  if (((iVar6 == -1) && (iVar6 = *(int *)(param_1 + 0x24), iVar6 == -1)) &&
     (iVar6 = *(int *)(param_1 + 0x28), iVar6 == -1)) {
    return;
  }
  lVar4 = param_1;
  func_0x00010c06f000();
  if ((int)lVar4 == 0) {
    return;
  }
  _CFStreamCreatePairWithSocket(0,iVar6,plVar5,param_1 + 0x100);
  puVar2 = PTR__kCFStreamPropertyShouldCloseNativeSocket_11034abf0;
  puVar1 = PTR__kCFBooleanFalse_11034ab88;
  if (*plVar5 != 0) {
    _CFReadStreamSetProperty
              (*plVar5,*(undefined8 *)PTR__kCFStreamPropertyShouldCloseNativeSocket_11034abf0,
               *(undefined8 *)PTR__kCFBooleanFalse_11034ab88);
  }
  if (*(long *)(param_1 + 0x100) == 0) {
    lVar4 = *plVar5;
    if (lVar4 == 0) {
      return;
    }
  }
  else {
    _CFWriteStreamSetProperty
              (*(long *)(param_1 + 0x100),*(undefined8 *)puVar2,*(undefined8 *)puVar1);
    lVar3 = *(long *)(param_1 + 0x100);
    lVar4 = *plVar5;
    if (lVar4 == 0) goto LAB_106edabf0;
    if (lVar3 != 0) {
      return;
    }
  }
  _CFReadStreamClose(lVar4);
  _CFRelease(*plVar5);
  *plVar5 = 0;
  lVar3 = *(long *)(param_1 + 0x100);
LAB_106edabf0:
  if (lVar3 != 0) {
    _CFWriteStreamClose();
    _CFRelease(*(undefined8 *)(param_1 + 0x100));
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  return;
}



/* Entry: 106edac14; end: 106edaf07; -[GCDAsyncSocket registerForStreamCallbacksIncludingReadWrite:] */

void FUN_106edac14(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(param_1 + 0xd0);
  *puVar3 = 0;
  uVar1 = 0x1a;
  if (param_3 == 0) {
    uVar1 = 0x18;
  }
  *(long *)(param_1 + 0xd8) = param_1;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0xf8);
  _CFReadStreamSetClient(uVar2,uVar1,0x106edaca0,puVar3);
  if ((int)uVar2 != 0) {
    uVar1 = 0x1c;
    if (param_3 == 0) {
      uVar1 = 0x18;
    }
    _CFWriteStreamSetClient(*(undefined8 *)(param_1 + 0x100),uVar1,0x106edadd4,puVar3);
  }
  return;
}



/* Entry: 106edaf08; end: 106edafc7; -[GCDAsyncSocket addStreamsToRunLoop] */

undefined8 FUN_106edaf08(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  if ((*(byte *)(param_1 + 10) >> 1 & 1) == 0) {
    _objc_opt_class();
    func_0x00010c24e040();
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x106edaf8c;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x00010006eaa4(uRam00000001136c8010,&puStack_48);
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x20000;
  }
  return 1;
}



/* Entry: 106edafc8; end: 106edb087; -[GCDAsyncSocket removeStreamsFromRunLoop] */

void FUN_106edafc8(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  if ((*(byte *)(param_1 + 10) >> 1 & 1) != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x106edb04c;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x00010006eaa4(uRam00000001136c8010,&puStack_48);
    _objc_opt_class(param_1);
    func_0x00010c255b20();
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffdffff;
  }
  return;
}



/* Entry: 106edb088; end: 106edb0ef; -[GCDAsyncSocket openStreams] */

undefined8 FUN_106edb088(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0xf8);
  _CFReadStreamGetStatus();
  lVar4 = *(long *)(param_1 + 0x100);
  _CFWriteStreamGetStatus();
  if (lVar3 == 0 || lVar4 == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0xf8);
    _CFReadStreamOpen();
    iVar2 = (int)*(undefined8 *)(param_1 + 0x100);
    _CFWriteStreamOpen();
    if (iVar1 == 0 || iVar2 == 0) {
      return 0;
    }
  }
  return 1;
}



/* Entry: 106edb0f0; end: 106edb197; -[GCDAsyncSocket autoDisconnectOnClosedReadStream] */

byte FUN_106edb0f0(long param_1)

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
    pcStack_60 = FUN_106edb198;
    puStack_58 = &UNK_11084b9d0;
    lStack_50 = param_1;
    puStack_38 = puStack_48;
    func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x58),&puStack_70);
    bVar1 = *(byte *)(puStack_38 + 3);
    __Block_object_dispose(&uStack_40,8);
  }
  else {
    bVar1 = (*(ushort *)(param_1 + 0xc) & 8) == 0;
  }
  return bVar1 & 1;
}



/* Entry: 106edb198; end: 106edb1b3;  */

void FUN_106edb198(long param_1)

{
  *(bool *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       (*(ushort *)(*(long *)(param_1 + 0x20) + 0xc) & 8) == 0;
  return;
}



/* Entry: 106edb1b4; end: 106edb247; -[GCDAsyncSocket setAutoDisconnectOnClosedReadStream:] */

void FUN_106edb1b4(long param_1,undefined8 param_2,undefined1 param_3)

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
  pcStack_40 = FUN_106edb248;
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



/* Entry: 106edb248; end: 106edb26f;  */

void FUN_106edb248(long param_1)

{
  ushort uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = 8;
  }
  *(ushort *)(*(long *)(param_1 + 0x20) + 0xc) =
       *(ushort *)(*(long *)(param_1 + 0x20) + 0xc) & 0xfff7 | uVar1;
  return;
}



/* Entry: 106edb270; end: 106edb287; -[GCDAsyncSocket markSocketQueueTargetQueue:] */

void FUN_106edb270(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdfac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_queue_set_specific_11034c100)
            (param_3,*(undefined8 *)(param_1 + 0x128),param_1,0);
  return;
}



/* Entry: 106edb288; end: 106edb29b; -[GCDAsyncSocket unmarkSocketQueueTargetQueue:] */

void FUN_106edb288(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdfac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_queue_set_specific_11034c100)
            (param_3,*(undefined8 *)(param_1 + 0x128),0,0);
  return;
}



/* Entry: 106edb29c; end: 106edb2e3; -[GCDAsyncSocket performBlock:] */

/* WARNING: Possible PIC construction at 0x00010006eb04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006eb08) */

void FUN_106edb29c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106edb2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  if ((bRam0000000113817d68 & 1) == 0) {
    iVar1 = 0x13817d68;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar2 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_sync");
      pcRam0000000113817d60 = pcVar2;
      func_0x000107c60e4c(0x113817d68);
    }
  }
  pcVar2 = pcRam0000000113817d60;
  func_0x00010002a3a8(param_3);
  func_0x000107c61180();
  (*pcVar2)(uVar4,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106edb2e4; end: 106edb323; -[GCDAsyncSocket socketFD] */

int FUN_106edb2e4(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 == -1) {
      iVar1 = *(int *)(param_1 + 0x24);
    }
  }
  return iVar1;
}



/* Entry: 106edb324; end: 106edb357; -[GCDAsyncSocket socket4FD] */

undefined4 FUN_106edb324(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x20);
  }
  return uVar1;
}



/* Entry: 106edb358; end: 106edb38b; -[GCDAsyncSocket socket6FD] */

undefined4 FUN_106edb358(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x24);
  }
  return uVar1;
}



/* Entry: 106edb38c; end: 106edb3c7; -[GCDAsyncSocket readStream] */

void FUN_106edb38c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0xf8) == 0)) {
    func_0x00010bf58240(param_1);
  }
  return;
}



/* Entry: 106edb3c8; end: 106edb403; -[GCDAsyncSocket writeStream] */

void FUN_106edb3c8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x100) == 0)) {
    func_0x00010bf58240(param_1);
  }
  return;
}



/* Entry: 106edb404; end: 106edb49f; -[GCDAsyncSocket enableBackgroundingOnSocketWithCaveat:] */

void FUN_106edb404(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010bf58240();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xf8);
    uVar4 = *(undefined8 *)PTR__kCFStreamNetworkServiceType_11034bb40;
    uVar5 = *(undefined8 *)PTR__kCFStreamNetworkServiceTypeVoIP_11034bb48;
    _CFReadStreamSetProperty(uVar2,uVar4,uVar5);
    uVar3 = *(undefined8 *)(param_1 + 0x100);
    _CFWriteStreamSetProperty(uVar3,uVar4,uVar5);
    if (((int)uVar2 != 0 && (int)uVar3 != 0) && ((param_3 & 1) == 0)) {
      func_0x00010c0e9900();
    }
  }
  return;
}



/* Entry: 106edb4a0; end: 106edb4db; -[GCDAsyncSocket enableBackgroundingOnSocket] */

void FUN_106edb4a0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf8f670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_enableBackgroundingOnSocketWithC_1125c1740,0);
    return;
  }
  return;
}



/* Entry: 106edb4dc; end: 106edb517; -[GCDAsyncSocket enableBackgroundingOnSocketWithCaveat] */

void FUN_106edb4dc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x128);
  _dispatch_get_specific();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf8f670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_enableBackgroundingOnSocketWithC_1125c1740,1);
    return;
  }
  return;
}



/* Entry: 106edb518; end: 106edb543; -[GCDAsyncSocket sslContext] */

void FUN_106edb518(void)

{
  _dispatch_get_specific();
  return;
}



/* Entry: 106edb544; end: 106edb857; +[GCDAsyncSocket lookupHost:port:error:] */

undefined *
FUN_106edb544(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined1 auStack_136 [46];
  long lStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined1 auStack_e8 [16];
  long lStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined2 uStack_78;
  ushort uStack_76;
  undefined4 uStack_74;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar6 = param_3;
  func_0x00010c0720c0();
  uVar1 = (ushort)((ulong)param_4 >> 8);
  if ((((ulong)puVar6 & 1) != 0) || (puVar6 = param_3, func_0x00010c0720c0(), (int)puVar6 != 0)) {
    uStack_78 = 0x210;
    uStack_76 = uVar1 & 0xff | (ushort)(((uint)param_4 & 0xff00ff) << 8);
    uStack_74 = 0x100007f;
    uStack_70 = 0;
    uStack_b0 = (ulong)CONCAT22(uStack_76,0x1e1c);
    uStack_a0 = *(undefined8 *)(PTR__in6addr_loopback_11034c498 + 8);
    uStack_a8 = *(undefined8 *)PTR__in6addr_loopback_11034c498;
    uStack_98 = (ulong)uStack_98._4_4_ << 0x20;
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    puVar6 = puVar3;
    func_0x00010befa120(puVar8);
    _objc_release(puVar3);
    _objc_release(puVar2);
    param_1 = 0;
    goto joined_r0x000106edb678;
  }
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uStack_c0 = param_4;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0x600000001;
  puVar6 = param_3;
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  puVar8 = puVar2;
  _objc_retainAutorelease(puVar2);
  func_0x00010bdc3520();
  _getaddrinfo(puVar6,puVar8,&uStack_b0,&uStack_78);
  if ((int)puVar6 == 0) {
    lVar5 = CONCAT44(uStack_74,CONCAT22(uStack_76,uStack_78));
    if (lVar5 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = (undefined *)0x0;
      do {
        if (*(int *)(lVar5 + 4) == 0x1e || *(int *)(lVar5 + 4) == 2) {
          puVar6 = puVar6 + 1;
        }
        lVar5 = *(long *)(lVar5 + 0x28);
      } while (lVar5 != 0);
    }
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = CONCAT44(uStack_74,CONCAT22(uStack_76,uStack_78));
    if (lVar5 == 0) {
      uVar4 = 0;
    }
    else {
      do {
        if (*(int *)(lVar5 + 4) == 0x1e) {
          if (*(short *)(*(long *)(lVar5 + 0x20) + 2) == 0) {
            *(ushort *)(*(long *)(lVar5 + 0x20) + 2) =
                 uVar1 & 0xff | (ushort)(((uint)param_4 & 0xff00ff) << 8);
          }
LAB_106edb7ec:
          puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
          func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar3;
          func_0x00010befa120(puVar8);
          _objc_release(puVar3);
        }
        else if (*(int *)(lVar5 + 4) == 2) goto LAB_106edb7ec;
        lVar5 = *(long *)(lVar5 + 0x28);
      } while (lVar5 != 0);
      uVar4 = CONCAT44(uStack_74,CONCAT22(uStack_76,uStack_78));
    }
    _freeaddrinfo(uVar4);
    puVar3 = puVar8;
    func_0x00010bf529e0();
    if (puVar3 == (undefined *)0x0) {
      puVar6 = (undefined *)0x4;
      goto LAB_106edb74c;
    }
    param_1 = 0;
  }
  else {
    puVar8 = (undefined *)0x0;
LAB_106edb74c:
    func_0x00010bfbcae0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
joined_r0x000106edb678:
  if (param_5 != (undefined8 *)0x0) {
    _objc_retainAutorelease(param_1);
    *param_5 = param_1;
  }
  _objc_release(param_1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_c8 = FUN_106edb858;
    lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar5 = 2;
    puStack_d0 = &stack0xfffffffffffffff0;
    _inet_ntop(2,puVar6 + 4,auStack_e8,0x10);
    if (lVar5 == 0) {
      auStack_e8[0] = 0;
    }
    puVar7 = auStack_e8;
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d8e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
      ___stack_chk_fail();
      pcStack_f8 = FUN_106edb8d4;
      lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar5 = 0x1e;
      ppuStack_100 = &puStack_d0;
      _inet_ntop(0x1e,puVar7 + 8,auStack_136,0x2e);
      if (lVar5 == 0) {
        auStack_136[0] = 0;
      }
      puVar7 = auStack_136;
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d8e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
        ___stack_chk_fail();
        return (undefined *)
               (ulong)((uint)(*(ushort *)(puVar7 + 2) >> 8) |
                      (*(ushort *)(puVar7 + 2) & 0xff00ff) << 8);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar8;
}



/* Entry: 106edb858; end: 106edb8d3; +[GCDAsyncSocket hostFromSockaddr4:] */

undefined * FUN_106edb858(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_76 [46];
  long lStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined1 auStack_28 [16];
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = 2;
  _inet_ntop(2,param_3 + 4,auStack_28,0x10);
  if (lVar1 == 0) {
    auStack_28[0] = 0;
  }
  puVar3 = auStack_28;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pcStack_38 = FUN_106edb8d4;
    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar1 = 0x1e;
    puStack_40 = &stack0xfffffffffffffff0;
    _inet_ntop(0x1e,puVar3 + 8,auStack_76,0x2e);
    if (lVar1 == 0) {
      auStack_76[0] = 0;
    }
    puVar3 = auStack_76;
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d8e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
      ___stack_chk_fail();
      return (undefined *)
             (ulong)((uint)(*(ushort *)(puVar3 + 2) >> 8) |
                    (*(ushort *)(puVar3 + 2) & 0xff00ff) << 8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar2;
}



/* Entry: 106edb8d4; end: 106edb94f; +[GCDAsyncSocket hostFromSockaddr6:] */

undefined * FUN_106edb8d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_46 [46];
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = 0x1e;
  _inet_ntop(0x1e,param_3 + 8,auStack_46,0x2e);
  if (lVar1 == 0) {
    auStack_46[0] = 0;
  }
  puVar3 = auStack_46;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar2;
  }
  ___stack_chk_fail();
  return (undefined *)
         (ulong)((uint)(*(ushort *)(puVar3 + 2) >> 8) | (*(ushort *)(puVar3 + 2) & 0xff00ff) << 8);
}



/* Entry: 106edb950; end: 106edb95f; +[GCDAsyncSocket portFromSockaddr4:] */

ushort FUN_106edb950(undefined8 param_1,undefined8 param_2,long param_3)

{
  return *(ushort *)(param_3 + 2) >> 8 | *(ushort *)(param_3 + 2) << 8;
}



/* Entry: 106edb960; end: 106edb96f; +[GCDAsyncSocket portFromSockaddr6:] */

ushort FUN_106edb960(undefined8 param_1,undefined8 param_2,long param_3)

{
  return *(ushort *)(param_3 + 2) >> 8 | *(ushort *)(param_3 + 2) << 8;
}



/* Entry: 106edb970; end: 106edb9cb; +[GCDAsyncSocket urlFromSockaddrUN:] */

void FUN_106edb970(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3 + 2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106edb9cc; end: 106edba37; +[GCDAsyncSocket hostFromAddress:] */

void FUN_106edb9cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  func_0x00010bfc63a0(param_1,param_2,&uStack_38,0,param_3);
  uVar1 = uStack_38;
  _objc_retain(uStack_38);
  uVar2 = 0;
  if ((int)param_1 != 0) {
    _objc_retain(uVar1);
    uVar2 = uVar1;
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106edba38; end: 106edba6f; +[GCDAsyncSocket portFromAddress:] */

undefined2 FUN_106edba38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 uStack_12;
  
  func_0x00010bfc63a0(param_1,param_2,0,&uStack_12,param_3);
  if ((int)param_1 == 0) {
    uStack_12 = 0;
  }
  return uStack_12;
}



/* Entry: 106edba70; end: 106edbad3; +[GCDAsyncSocket isIPv4Address:] */

undefined8 FUN_106edba70(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c08fa60();
  if (0xf < uVar1) {
    uVar1 = param_3;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    if (*(char *)(uVar1 + 1) == '\x02') {
      uVar2 = 1;
      goto LAB_106edbabc;
    }
  }
  uVar2 = 0;
LAB_106edbabc:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106edbad4; end: 106edbb37; +[GCDAsyncSocket isIPv6Address:] */

undefined8 FUN_106edbad4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c08fa60();
  if (0xf < uVar1) {
    uVar1 = param_3;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    if (*(char *)(uVar1 + 1) == '\x1e') {
      uVar2 = 1;
      goto LAB_106edbb20;
    }
  }
  uVar2 = 0;
LAB_106edbb20:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106edbb38; end: 106edbb43; +[GCDAsyncSocket getHost:port:fromAddress:] */

void FUN_106edbb38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc6390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_getHost_port_family_fromAddress__1125cf288,param_3,param_4,0,param_5);
  return;
}



/* Entry: 106edbb44; end: 106edbcbf; +[GCDAsyncSocket getHost:port:family:fromAddress:] */

undefined *
FUN_106edbb44(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined2 *param_4,
             undefined1 *param_5,ulong param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  uVar1 = param_6;
  func_0x00010c08fa60();
  if (uVar1 < 0x10) {
LAB_106edbc7c:
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar1 = param_6;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    if (*(char *)(uVar1 + 1) == '\x1e') {
      uVar1 = param_6;
      func_0x00010c08fa60();
      if (uVar1 < 0x1c) goto LAB_106edbc7c;
      if (param_3 != (undefined8 *)0x0) {
        uVar2 = param_1;
        func_0x00010bfe45c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_3 = uVar2;
      }
      if (param_4 != (undefined2 *)0x0) {
        func_0x00010c1040c0();
        *param_4 = (short)param_1;
      }
      if (param_5 != (undefined1 *)0x0) {
        uVar3 = 0x1e;
        goto LAB_106edbc70;
      }
    }
    else {
      if ((*(char *)(uVar1 + 1) != '\x02') || (uVar1 = param_6, func_0x00010c08fa60(), uVar1 < 0x10)
         ) goto LAB_106edbc7c;
      if (param_3 != (undefined8 *)0x0) {
        uVar2 = param_1;
        func_0x00010bfe45a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_3 = uVar2;
      }
      if (param_4 != (undefined2 *)0x0) {
        func_0x00010c1040a0();
        *param_4 = (short)param_1;
      }
      if (param_5 != (undefined1 *)0x0) {
        uVar3 = 2;
LAB_106edbc70:
        *param_5 = uVar3;
      }
    }
    puVar5 = (undefined *)0x1;
  }
  _objc_release(param_6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
                    /* WARNING: Could not recover jumptable at 0x00010bf64a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSData_1126ae778,PTR_s_dataWithBytes_length__1125b6c28,&DAT_10f3dfd0a
             ,2);
  return puVar5;
}



/* Entry: 106edbcc0; end: 106edbcd7; +[GCDAsyncSocket CRLFData] */

void FUN_106edbcc0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf64a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSData_1126ae778,PTR_s_dataWithBytes_length__1125b6c28,&DAT_10f3dfd0a
             ,2);
  return;
}



/* Entry: 106edbcd8; end: 106edbcef; +[GCDAsyncSocket CRData] */

void FUN_106edbcd8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf64a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSData_1126ae778,PTR_s_dataWithBytes_length__1125b6c28,"\r",1);
  return;
}



/* Entry: 106edbcf0; end: 106edbd07; +[GCDAsyncSocket LFData] */

void FUN_106edbcf0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf64a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSData_1126ae778,PTR_s_dataWithBytes_length__1125b6c28,&DAT_10f68f57e
             ,1);
  return;
}



/* Entry: 106edbd08; end: 106edbd1f; +[GCDAsyncSocket ZeroData] */

void FUN_106edbd08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf64a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSData_1126ae778,PTR_s_dataWithBytes_length__1125b6c28,"",1);
  return;
}


