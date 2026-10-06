/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104207d10; end: 104207dbb; -[SCAdServeRequestMetadata withChatFeedAdsOptInStatus:] */

void FUN_104207d10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_508 [408];
  undefined1 auStack_370 [400];
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [408];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_104276e78(auStack_370);
  uStack_1e0 = param_3;
  _memcpy(auStack_1d8,auStack_370,0x198);
  _objc_allocWithZone(uVar1);
  func_0x0001018ce650(auStack_1d8,auStack_508);
  puVar2 = auStack_1d8;
  FUN_1042763f0(puVar2);
  func_0x0001018ce68c(auStack_1d8);
  _objc_release(param_1);
  func_0x0001018ce68c(auStack_370);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104207dbc; end: 104209adb;  */

void FUN_104207dbc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x00010c067fc0();
  *param_1 = uVar1;
  return;
}



/* Entry: 104209adc; end: 10420a0db;  */

void FUN_104209adc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10420a0dc();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10420a0dc; end: 10420a217;  */

code * FUN_10420a0dc(ulong param_1,ulong param_2,ulong param_3,code *param_4,code *param_5,
                    undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10420a218);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  pcVar2 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    pcVar2 = param_5;
    func_0x00010420b304(param_5,param_6,param_7);
    _swift_allocObject();
    pcVar3 = pcVar2;
    _malloc_size();
    pcVar1 = pcVar3 + -0x19;
    if (0x1f < (long)pcVar3) {
      pcVar1 = pcVar3 + -0x20;
    }
    *(ulong *)(pcVar2 + 0x10) = uVar6;
    *(ulong *)(pcVar2 + 0x18) = ((long)pcVar1 >> 3) << 1 | 1;
  }
  pcVar1 = pcVar2 + 0x20;
  pcVar3 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar4 = 0;
    (*param_5)(0);
    _swift_arrayInitWithCopy(pcVar1,pcVar3,uVar6,uVar4);
  }
  else {
    if (pcVar2 != param_4 || pcVar3 + uVar6 * 8 <= pcVar1) {
      _memmove(pcVar1,pcVar3,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return pcVar2;
}



/* Entry: 10420a218; end: 10420ad3f;  */

undefined * FUN_10420a218(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10420a33c);
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
    puVar2 = (undefined *)0x112f0d8e0;
    func_0x0001000285a8(0x112f0d8e0,&UNK_10dce2c00);
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x170) * 2;
  }
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar2 + 0x20,param_4 + 0x20,uVar5,&UNK_110751a10);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar5 * 0x170 <= puVar2 + 0x20) {
      _memmove();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar2;
}



/* Entry: 10420ad40; end: 10420ae57;  */

undefined *
FUN_10420ad40(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = param_2;
  if ((param_3 & 1) != 0) {
    uVar3 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar3 < (long)param_2) {
      if ((long)(uVar3 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10420ae58);
        (*pcVar1)();
      }
      uVar3 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar3 <= (long)param_2) {
        uVar3 = param_2;
      }
    }
  }
  uVar4 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar3 <= (long)uVar4) {
    uVar3 = uVar4;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar3 != 0) {
    func_0x0001000285a8(param_5,param_6);
    _swift_allocObject();
    puVar2 = param_5;
    _malloc_size();
    *(ulong *)(param_5 + 0x10) = uVar4;
    *(long *)(param_5 + 0x18) = ((long)(puVar2 + -0x20) / 0x18) * 2;
    puVar2 = param_5;
  }
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar2 + 0x20,param_4 + 0x20,uVar4,param_7);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar4 * 0x18 <= puVar2 + 0x20) {
      _memmove();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar2;
}



/* Entry: 10420ae58; end: 10420afd3;  */

undefined * FUN_10420ae58(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10420afd4);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    puVar4 = (undefined *)0x113069648;
    func_0x0001000285a8(0x113069648,&UNK_10dce2b48);
    lVar5 = 0;
    FUN_10425412c();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    _malloc_size();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10420afcc);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10420afd0);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  FUN_10425412c();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      _swift_arrayInitWithTakeFrontToBack(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar4;
}



/* Entry: 10420afd4; end: 10420b36f;  */

undefined * FUN_10420afd4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10420b0d4);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x113069628;
    func_0x0001000285a8(0x113069628,&UNK_10dce2b28);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 4);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 10420b370; end: 10420b453;  */

undefined8 FUN_10420b370(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10420b454; end: 10420b647;  */

undefined8 * FUN_10420b454(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar8 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar8;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined4 *)((long)param_1 + 0x12) = *(undefined4 *)((long)param_2 + 0x12);
  uVar8 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar8;
  uVar8 = *(undefined8 *)((long)param_2 + 0x22);
  *(undefined8 *)((long)param_1 + 0x2a) = *(undefined8 *)((long)param_2 + 0x2a);
  *(undefined8 *)((long)param_1 + 0x22) = uVar8;
  uVar8 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar8;
  lVar7 = param_2[10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar8);
  if (lVar7 == 1) {
    uVar8 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar8;
    uVar8 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar8;
    param_1[0xd] = param_2[0xd];
  }
  else {
    param_1[9] = param_2[9];
    param_1[10] = lVar7;
    param_1[0xb] = param_2[0xb];
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
    *(undefined2 *)((long)param_1 + 0x61) = *(undefined2 *)((long)param_2 + 0x61);
    param_1[0xd] = param_2[0xd];
    _swift_bridgeObjectRetain(lVar7);
  }
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  uVar8 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar8;
  uVar8 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar8;
  *(undefined2 *)(param_1 + 0x13) = *(undefined2 *)(param_2 + 0x13);
  uVar8 = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar8;
  param_1[0x16] = param_2[0x16];
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  uVar8 = param_2[0x19];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = uVar8;
  uVar8 = param_2[0x1a];
  uVar1 = param_2[0x1b];
  param_1[0x1a] = uVar8;
  param_1[0x1b] = uVar1;
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined2 *)((long)param_1 + 0xe1) = *(undefined2 *)((long)param_2 + 0xe1);
  uVar2 = param_2[0x1e];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = uVar2;
  uVar3 = param_2[0x20];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = uVar3;
  uVar4 = param_2[0x22];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = uVar4;
  uVar4 = param_2[0x23];
  uVar5 = param_2[0x24];
  param_1[0x23] = uVar4;
  param_1[0x24] = uVar5;
  *(undefined1 *)(param_1 + 0x2b) = *(undefined1 *)(param_2 + 0x2b);
  uVar9 = param_2[0x27];
  uVar11 = param_2[0x2a];
  uVar10 = param_2[0x29];
  param_1[0x28] = param_2[0x28];
  param_1[0x27] = uVar9;
  param_1[0x2a] = uVar11;
  param_1[0x29] = uVar10;
  uVar9 = param_2[0x25];
  param_1[0x26] = param_2[0x26];
  param_1[0x25] = uVar9;
  uVar9 = param_2[0x2d];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = uVar9;
  *(undefined1 *)(param_1 + 0x2e) = *(undefined1 *)(param_2 + 0x2e);
  uVar6 = *(undefined4 *)((long)param_2 + 0x174);
  *(undefined1 *)(param_1 + 0x2f) = *(undefined1 *)(param_2 + 0x2f);
  *(undefined4 *)((long)param_1 + 0x174) = uVar6;
  uVar6 = *(undefined4 *)((long)param_2 + 0x17c);
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  *(undefined4 *)((long)param_1 + 0x17c) = uVar6;
  uVar6 = *(undefined4 *)((long)param_2 + 0x184);
  *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)(param_2 + 0x31);
  *(undefined4 *)((long)param_1 + 0x184) = uVar6;
  param_1[0x32] = param_2[0x32];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar8);
  _objc_retain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar9);
  return param_1;
}



/* Entry: 10420b648; end: 10420b97f;  */

undefined8 * FUN_10420b648(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  *(undefined4 *)((long)param_1 + 0x12) = *(undefined4 *)((long)param_2 + 0x12);
  uVar4 = param_2[4];
  uVar2 = param_2[3];
  uVar5 = *(undefined8 *)((long)param_2 + 0x22);
  *(undefined8 *)((long)param_1 + 0x2a) = *(undefined8 *)((long)param_2 + 0x2a);
  *(undefined8 *)((long)param_1 + 0x22) = uVar5;
  param_1[4] = uVar4;
  param_1[3] = uVar2;
  param_1[7] = param_2[7];
  uVar2 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  lVar3 = param_1[10];
  if (lVar3 == 1) {
    if (param_2[10] == 1) {
      uVar4 = param_2[10];
      uVar2 = param_2[9];
      uVar6 = param_2[0xc];
      uVar5 = param_2[0xb];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar6;
      param_1[0xb] = uVar5;
      param_1[10] = uVar4;
      param_1[9] = uVar2;
    }
    else {
      param_1[9] = param_2[9];
      param_1[10] = param_2[10];
      param_1[0xb] = param_2[0xb];
      *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
      *(undefined1 *)((long)param_1 + 0x61) = *(undefined1 *)((long)param_2 + 0x61);
      *(undefined1 *)((long)param_1 + 0x62) = *(undefined1 *)((long)param_2 + 0x62);
      param_1[0xd] = param_2[0xd];
      _swift_bridgeObjectRetain();
    }
  }
  else if (param_2[10] == 1) {
    FUN_103de2efc(param_1 + 9);
    uVar2 = param_2[0xd];
    uVar5 = param_2[0xc];
    uVar4 = param_2[0xb];
    uVar6 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar6;
    param_1[0xc] = uVar5;
    param_1[0xb] = uVar4;
    param_1[0xd] = uVar2;
  }
  else {
    param_1[9] = param_2[9];
    param_1[10] = param_2[10];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar3);
    param_1[0xb] = param_2[0xb];
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
    *(undefined1 *)((long)param_1 + 0x61) = *(undefined1 *)((long)param_2 + 0x61);
    *(undefined1 *)((long)param_1 + 0x62) = *(undefined1 *)((long)param_2 + 0x62);
    param_1[0xd] = param_2[0xd];
  }
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  *(undefined1 *)((long)param_1 + 0x99) = *(undefined1 *)((long)param_2 + 0x99);
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  param_1[0x18] = param_2[0x18];
  uVar2 = param_1[0x19];
  param_1[0x19] = param_2[0x19];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[0x1a];
  param_1[0x1a] = param_2[0x1a];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[0x1b];
  param_1[0x1b] = param_2[0x1b];
  _objc_retain();
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined1 *)((long)param_1 + 0xe1) = *(undefined1 *)((long)param_2 + 0xe1);
  *(undefined1 *)((long)param_1 + 0xe2) = *(undefined1 *)((long)param_2 + 0xe2);
  param_1[0x1d] = param_2[0x1d];
  uVar2 = param_1[0x1e];
  param_1[0x1e] = param_2[0x1e];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  param_1[0x1f] = param_2[0x1f];
  uVar2 = param_1[0x20];
  param_1[0x20] = param_2[0x20];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  uVar2 = param_1[0x23];
  param_1[0x23] = param_2[0x23];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[0x24];
  param_1[0x24] = param_2[0x24];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar4 = param_2[0x26];
  uVar2 = param_2[0x25];
  uVar6 = param_2[0x28];
  uVar5 = param_2[0x27];
  uVar8 = param_2[0x2a];
  uVar7 = param_2[0x29];
  *(undefined1 *)(param_1 + 0x2b) = *(undefined1 *)(param_2 + 0x2b);
  param_1[0x28] = uVar6;
  param_1[0x27] = uVar5;
  param_1[0x2a] = uVar8;
  param_1[0x29] = uVar7;
  param_1[0x26] = uVar4;
  param_1[0x25] = uVar2;
  param_1[0x2c] = param_2[0x2c];
  uVar2 = param_1[0x2d];
  param_1[0x2d] = param_2[0x2d];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 0x2e) = *(undefined1 *)(param_2 + 0x2e);
  uVar1 = *(undefined4 *)((long)param_2 + 0x174);
  *(undefined1 *)(param_1 + 0x2f) = *(undefined1 *)(param_2 + 0x2f);
  *(undefined4 *)((long)param_1 + 0x174) = uVar1;
  uVar1 = *(undefined4 *)((long)param_2 + 0x17c);
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  *(undefined4 *)((long)param_1 + 0x17c) = uVar1;
  uVar1 = *(undefined4 *)((long)param_2 + 0x184);
  *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)(param_2 + 0x31);
  *(undefined4 *)((long)param_1 + 0x184) = uVar1;
  param_1[0x32] = param_2[0x32];
  return param_1;
}



/* Entry: 10420b980; end: 10420b987;  */

void FUN_10420b980(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,0x198);
  return;
}



/* Entry: 10420b988; end: 10420bbbb;  */

undefined8 * FUN_10420b988(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  *(undefined4 *)((long)param_1 + 0x12) = *(undefined4 *)((long)param_2 + 0x12);
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  uVar1 = *(undefined8 *)((long)param_2 + 0x22);
  *(undefined8 *)((long)param_1 + 0x2a) = *(undefined8 *)((long)param_2 + 0x2a);
  *(undefined8 *)((long)param_1 + 0x22) = uVar1;
  uVar1 = param_2[8];
  uVar2 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  if (param_1[10] != 1) {
    lVar3 = param_2[10];
    if (lVar3 != 1) {
      param_1[9] = param_2[9];
      param_1[10] = lVar3;
      _swift_bridgeObjectRelease();
      param_1[0xb] = param_2[0xb];
      *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
      *(undefined1 *)((long)param_1 + 0x61) = *(undefined1 *)((long)param_2 + 0x61);
      *(undefined1 *)((long)param_1 + 0x62) = *(undefined1 *)((long)param_2 + 0x62);
      param_1[0xd] = param_2[0xd];
      goto LAB_10420ba5c;
    }
    FUN_103de2efc(param_1 + 9);
  }
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  uVar1 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar1;
  param_1[0xd] = param_2[0xd];
LAB_10420ba5c:
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  uVar1 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar1;
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  *(undefined1 *)((long)param_1 + 0x99) = *(undefined1 *)((long)param_2 + 0x99);
  uVar1 = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar1;
  param_1[0x16] = param_2[0x16];
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  uVar1 = param_2[0x19];
  uVar2 = param_1[0x19];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_1[0x1a];
  param_1[0x1a] = param_2[0x1a];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[0x1b];
  param_1[0x1b] = param_2[0x1b];
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined1 *)((long)param_1 + 0xe1) = *(undefined1 *)((long)param_2 + 0xe1);
  *(undefined1 *)((long)param_1 + 0xe2) = *(undefined1 *)((long)param_2 + 0xe2);
  uVar1 = param_2[0x1e];
  uVar2 = param_1[0x1e];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[0x20];
  uVar2 = param_1[0x20];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  uVar1 = param_1[0x23];
  param_1[0x23] = param_2[0x23];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[0x24];
  param_1[0x24] = param_2[0x24];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[0x25];
  uVar4 = param_2[0x28];
  uVar2 = param_2[0x27];
  param_1[0x26] = param_2[0x26];
  param_1[0x25] = uVar1;
  param_1[0x28] = uVar4;
  param_1[0x27] = uVar2;
  uVar1 = param_2[0x29];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x29] = uVar1;
  *(undefined1 *)(param_1 + 0x2b) = *(undefined1 *)(param_2 + 0x2b);
  uVar2 = param_1[0x2d];
  uVar1 = param_2[0x2d];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 0x2e) = *(undefined1 *)(param_2 + 0x2e);
  *(undefined4 *)((long)param_1 + 0x174) = *(undefined4 *)((long)param_2 + 0x174);
  *(undefined1 *)(param_1 + 0x2f) = *(undefined1 *)(param_2 + 0x2f);
  *(undefined4 *)((long)param_1 + 0x17c) = *(undefined4 *)((long)param_2 + 0x17c);
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  *(undefined4 *)((long)param_1 + 0x184) = *(undefined4 *)((long)param_2 + 0x184);
  *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)(param_2 + 0x31);
  param_1[0x32] = param_2[0x32];
  return param_1;
}



/* Entry: 10420bbbc; end: 10420bce3;  */

int FUN_10420bbbc(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x33] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10420bce4; end: 10420c49f;  */

long FUN_10420bce4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10420c4a0; end: 10420c4b3;  */

bool FUN_10420c4a0(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10420c4b4; end: 10420c58b;  */

void FUN_10420c4b4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10420c58c; end: 10420c5ab;  */

void FUN_10420c58c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10420c5ac; end: 10420c5eb;  */

void FUN_10420c5ac(void)

{
  undefined *puVar1;
  
  if (puRam00000001130696d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce2c50;
  _swift_getWitnessTable(&UNK_10dce2c50,&UNK_110751cb0);
  puRam00000001130696d8 = puVar1;
  return;
}



/* Entry: 10420c5ec; end: 10420c60f;  */

undefined1  [16] FUN_10420c5ec(void)

{
  return ZEXT816(0x110751cb0);
}



/* Entry: 10420c610; end: 10420c63b;  */

void FUN_10420c610(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_10420c6f4();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 10420c63c; end: 10420c647;  */

void FUN_10420c63c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10420c648; end: 10420c6f3;  */

void FUN_10420c648(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10420c6f4; end: 10420c707;  */

undefined1  [16] FUN_10420c6f4(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 0xe) {
    uVar1 = param_1;
  }
  auVar2[8] = 0xd < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 10420c708; end: 10420c747;  */

void FUN_10420c708(void)

{
  undefined *puVar1;
  
  if (puRam00000001130696e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce2d10;
  _swift_getWitnessTable(&UNK_10dce2d10,&UNK_110751d28);
  puRam00000001130696e0 = puVar1;
  return;
}



/* Entry: 10420c748; end: 10420c797;  */

undefined1  [16] FUN_10420c748(void)

{
  return ZEXT816(0x110751d28);
}



/* Entry: 10420c798; end: 10420c7d7;  */

void FUN_10420c798(void)

{
  undefined *puVar1;
  
  if (puRam00000001130696e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce2de0;
  _swift_getWitnessTable(&UNK_10dce2de0,&UNK_110751da0);
  puRam00000001130696e8 = puVar1;
  return;
}



/* Entry: 10420c7d8; end: 10420c883;  */

void FUN_10420c7d8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10420c884; end: 10420c8a7;  */

undefined1  [16] FUN_10420c884(void)

{
  return ZEXT816(0x110751da0);
}



/* Entry: 10420c8a8; end: 10420c97f;  */

void FUN_10420c8a8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10420c980; end: 10420c99f;  */

void FUN_10420c980(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10420c9a0; end: 10420c9df;  */

void FUN_10420c9a0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130696f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce2eb0;
  _swift_getWitnessTable(&UNK_10dce2eb0,&UNK_110751e18);
  puRam00000001130696f0 = puVar1;
  return;
}



/* Entry: 10420c9e0; end: 10420c9ef;  */

undefined1  [16] FUN_10420c9e0(void)

{
  return ZEXT816(0x110751e18);
}



/* Entry: 10420c9f0; end: 10420c9f7; +[SCAdMediaVolumeConstants invalidValue] */

undefined8 FUN_10420c9f0(void)

{
  return 0xbff0000000000000;
}



/* Entry: 10420c9f8; end: 10420ca33; -[SCAdMediaVolumeConstants init] */

void FUN_10420c9f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10420ca34; end: 10420ca87;  */

void FUN_10420ca34(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10420ca88; end: 10420ca9b;  */

bool FUN_10420ca88(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10420ca9c; end: 10420cb73;  */

void FUN_10420ca9c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10420cb74; end: 10420cb83;  */

void FUN_10420cb74(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10420cb84; end: 10420cbc3;  */

void FUN_10420cb84(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069720 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce2f90;
  _swift_getWitnessTable(&UNK_10dce2f90,&UNK_110751e90);
  puRam0000000113069720 = puVar1;
  return;
}



/* Entry: 10420cbc4; end: 10420cbeb;  */

undefined1  [16] FUN_10420cbc4(void)

{
  return ZEXT816(0x110751e90);
}



/* Entry: 10420cbec; end: 10420cc2b;  */

void FUN_10420cbec(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069728 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce3050;
  _swift_getWitnessTable(&UNK_10dce3050,&UNK_110751f08);
  puRam0000000113069728 = puVar1;
  return;
}



/* Entry: 10420cc2c; end: 10420ccd7;  */

void FUN_10420cc2c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10420ccd8; end: 10420cd2b;  */

void FUN_10420ccd8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 10420cd2c; end: 10420cd6b;  */

void FUN_10420cd2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069730 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce3150;
  _swift_getWitnessTable(&UNK_10dce3150,&UNK_110751f80);
  puRam0000000113069730 = puVar1;
  return;
}



/* Entry: 10420cd6c; end: 10420cd6f;  */

void FUN_10420cd6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069738 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce3188;
  _swift_getWitnessTable(&UNK_10dce3188,&UNK_110751f80);
  puRam0000000113069738 = puVar1;
  return;
}



/* Entry: 10420cd70; end: 10420cdaf;  */

void FUN_10420cd70(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069738 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce3188;
  _swift_getWitnessTable(&UNK_10dce3188,&UNK_110751f80);
  puRam0000000113069738 = puVar1;
  return;
}



/* Entry: 10420cdb0; end: 10420cddb;  */

void FUN_10420cdb0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 10420cddc; end: 10420ce1b;  */

void FUN_10420cddc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069740 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce3250;
  _swift_getWitnessTable(&UNK_10dce3250,&UNK_110751f80);
  puRam0000000113069740 = puVar1;
  return;
}



/* Entry: 10420ce1c; end: 10420ce1f;  */

void FUN_10420ce1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069748 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce3278;
  _swift_getWitnessTable(&UNK_10dce3278,&UNK_110751f80);
  puRam0000000113069748 = puVar1;
  return;
}



/* Entry: 10420ce20; end: 10420ce5f;  */

void FUN_10420ce20(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069748 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce3278;
  _swift_getWitnessTable(&UNK_10dce3278,&UNK_110751f80);
  puRam0000000113069748 = puVar1;
  return;
}



/* Entry: 10420ce60; end: 10420cfdf;  */

void FUN_10420ce60(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10420cfe0; end: 10420d087;  */

void FUN_10420cfe0(ulong *param_1,long param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined1 auVar25 [16];
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  if (uVar2 == 0) {
    uVar7 = 0;
  }
  else {
    if (uVar2 < 4) {
      uVar4 = 0;
      uVar7 = 0;
    }
    else {
      uVar4 = uVar2 & 0x7ffffffffffffffc;
      puVar6 = (undefined8 *)(param_2 + 0x30);
      bVar8 = 0;
      bVar9 = 0;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = 0;
      bVar13 = 0;
      bVar14 = 0;
      bVar15 = 0;
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      uVar7 = uVar4;
      do {
        uVar42 = puVar6[-1];
        uVar41 = puVar6[-2];
        uVar44 = puVar6[1];
        uVar43 = *puVar6;
        bVar8 = (byte)uVar41 | bVar8;
        bVar9 = (byte)((ulong)uVar41 >> 8) | bVar9;
        bVar10 = (byte)((ulong)uVar41 >> 0x10) | bVar10;
        bVar11 = (byte)((ulong)uVar41 >> 0x18) | bVar11;
        bVar12 = (byte)((ulong)uVar41 >> 0x20) | bVar12;
        bVar13 = (byte)((ulong)uVar41 >> 0x28) | bVar13;
        bVar14 = (byte)((ulong)uVar41 >> 0x30) | bVar14;
        bVar15 = (byte)((ulong)uVar41 >> 0x38) | bVar15;
        bVar16 = (byte)uVar42 | bVar16;
        bVar17 = (byte)((ulong)uVar42 >> 8) | bVar17;
        bVar18 = (byte)((ulong)uVar42 >> 0x10) | bVar18;
        bVar19 = (byte)((ulong)uVar42 >> 0x18) | bVar19;
        bVar20 = (byte)((ulong)uVar42 >> 0x20) | bVar20;
        bVar21 = (byte)((ulong)uVar42 >> 0x28) | bVar21;
        bVar22 = (byte)((ulong)uVar42 >> 0x30) | bVar22;
        bVar23 = (byte)((ulong)uVar42 >> 0x38) | bVar23;
        bVar24 = (byte)uVar43 | bVar24;
        bVar26 = (byte)((ulong)uVar43 >> 8) | bVar26;
        bVar27 = (byte)((ulong)uVar43 >> 0x10) | bVar27;
        bVar28 = (byte)((ulong)uVar43 >> 0x18) | bVar28;
        bVar29 = (byte)((ulong)uVar43 >> 0x20) | bVar29;
        bVar30 = (byte)((ulong)uVar43 >> 0x28) | bVar30;
        bVar31 = (byte)((ulong)uVar43 >> 0x30) | bVar31;
        bVar32 = (byte)((ulong)uVar43 >> 0x38) | bVar32;
        bVar33 = (byte)uVar44 | bVar33;
        bVar34 = (byte)((ulong)uVar44 >> 8) | bVar34;
        bVar35 = (byte)((ulong)uVar44 >> 0x10) | bVar35;
        bVar36 = (byte)((ulong)uVar44 >> 0x18) | bVar36;
        bVar37 = (byte)((ulong)uVar44 >> 0x20) | bVar37;
        bVar38 = (byte)((ulong)uVar44 >> 0x28) | bVar38;
        bVar39 = (byte)((ulong)uVar44 >> 0x30) | bVar39;
        bVar40 = (byte)((ulong)uVar44 >> 0x38) | bVar40;
        puVar6 = puVar6 + 4;
        uVar7 = uVar7 - 4;
      } while (uVar7 != 0);
      bVar24 = bVar24 | bVar8;
      bVar26 = bVar26 | bVar9;
      bVar27 = bVar27 | bVar10;
      bVar28 = bVar28 | bVar11;
      bVar29 = bVar29 | bVar12;
      bVar30 = bVar30 | bVar13;
      bVar31 = bVar31 | bVar14;
      bVar32 = bVar32 | bVar15;
      auVar25[1] = bVar26;
      auVar25[0] = bVar24;
      auVar25[2] = bVar27;
      auVar25[3] = bVar28;
      auVar25[4] = bVar29;
      auVar25[5] = bVar30;
      auVar25[6] = bVar31;
      auVar25[7] = bVar32;
      auVar25[8] = bVar33 | bVar16;
      auVar25[9] = bVar34 | bVar17;
      auVar25[10] = bVar35 | bVar18;
      auVar25[0xb] = bVar36 | bVar19;
      auVar25[0xc] = bVar37 | bVar20;
      auVar25[0xd] = bVar38 | bVar21;
      auVar25[0xe] = bVar39 | bVar22;
      auVar25[0xf] = bVar40 | bVar23;
      auVar1[1] = bVar26;
      auVar1[0] = bVar24;
      auVar1[2] = bVar27;
      auVar1[3] = bVar28;
      auVar1[4] = bVar29;
      auVar1[5] = bVar30;
      auVar1[6] = bVar31;
      auVar1[7] = bVar32;
      auVar1[8] = bVar33 | bVar16;
      auVar1[9] = bVar34 | bVar17;
      auVar1[10] = bVar35 | bVar18;
      auVar1[0xb] = bVar36 | bVar19;
      auVar1[0xc] = bVar37 | bVar20;
      auVar1[0xd] = bVar38 | bVar21;
      auVar1[0xe] = bVar39 | bVar22;
      auVar1[0xf] = bVar40 | bVar23;
      auVar25 = NEON_ext(auVar25,auVar1,8,1);
      uVar7 = CONCAT17(bVar32 | auVar25[7],
                       CONCAT16(bVar31 | auVar25[6],
                                CONCAT15(bVar30 | auVar25[5],
                                         CONCAT14(bVar29 | auVar25[4],
                                                  CONCAT13(bVar28 | auVar25[3],
                                                           CONCAT12(bVar27 | auVar25[2],
                                                                    CONCAT11(bVar26 | auVar25[1],
                                                                             bVar24 | auVar25[0]))))
                                        )));
      if (uVar2 == uVar4) goto LAB_10420d074;
    }
    lVar3 = uVar2 - uVar4;
    puVar5 = (ulong *)(param_2 + uVar4 * 8 + 0x20);
    do {
      uVar7 = *puVar5 | uVar7;
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
LAB_10420d074:
  _swift_bridgeObjectRelease();
  *param_1 = uVar7;
  return;
}



/* Entry: 10420d088; end: 10420d0a3;  */

undefined1  [16] FUN_10420d088(void)

{
  return ZEXT816(0x110751f80);
}



/* Entry: 10420d0a4; end: 10420d0ef; -[SCAdTrackOption initWithRawValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10420d0a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113069750) = param_3;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10420d0f0; end: 10420d0ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10420d0f0(long param_1)

{
  long lVar1;
  long *plVar2;
  long lStack_40;
  long lStack_38;
  
  plVar2 = &lStack_40;
  FUN_10420d964();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113069750) = 0;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  puRam0000000113813320 = (undefined1 *)plVar2;
  return;
}



/* Entry: 10420d100; end: 10420d12b; +[SCAdTrackOption defaultOption] */

void FUN_10420d100(void)

{
  if (lRam0000000113069758 != -1) {
    _swift_once(0x113069758,FUN_10420d0f0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113813320);
  return;
}



/* Entry: 10420d12c; end: 10420d16b;  */

undefined8 FUN_10420d12c(void)

{
  if (lRam0000000113069760 != -1) {
    _swift_once(0x113069760,0x10420d11c);
  }
  return 0x113813328;
}



/* Entry: 10420d16c; end: 10420d187; +[SCAdTrackOption prodAdTrack] */

void FUN_10420d16c(void)

{
  if (lRam0000000113069760 != -1) {
    _swift_once(0x113069760,0x10420d11c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113813328);
  return;
}



/* Entry: 10420d188; end: 10420d1cb;  */

void FUN_10420d188(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  if (*param_3 == -1) {
    uVar1 = *param_4;
  }
  else {
    _swift_once(param_3,param_5);
    uVar1 = *param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uVar1);
  return;
}



/* Entry: 10420d1cc; end: 10420d1db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10420d1cc(long param_1)

{
  long lVar1;
  long *plVar2;
  long lStack_40;
  long lStack_38;
  
  plVar2 = &lStack_40;
  FUN_10420d964();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113069750) = 2;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  puRam0000000113813330 = (undefined1 *)plVar2;
  return;
}



/* Entry: 10420d1dc; end: 10420d21b;  */

undefined8 FUN_10420d1dc(void)

{
  if (lRam0000000113069768 != -1) {
    _swift_once(0x113069768,FUN_10420d1cc);
  }
  return 0x113813330;
}



/* Entry: 10420d21c; end: 10420d247; +[SCAdTrackOption spectrumAdTrack] */

void FUN_10420d21c(void)

{
  if (lRam0000000113069768 != -1) {
    _swift_once(0x113069768,FUN_10420d1cc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113813330);
  return;
}



/* Entry: 10420d248; end: 10420d2a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10420d248(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  long lStack_40;
  long lStack_38;
  
  plVar2 = &lStack_40;
  FUN_10420d964();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113069750) = param_2;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  *param_3 = plVar2;
  return;
}



/* Entry: 10420d2a8; end: 10420d2e7;  */

undefined8 FUN_10420d2a8(void)

{
  if (lRam0000000113069770 != -1) {
    _swift_once(0x113069770,0x10420d238);
  }
  return 0x113813338;
}



/* Entry: 10420d2e8; end: 10420d303; +[SCAdTrackOption shadowAdTrack] */

void FUN_10420d2e8(void)

{
  if (lRam0000000113069770 != -1) {
    _swift_once(0x113069770,0x10420d238);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113813338);
  return;
}



/* Entry: 10420d304; end: 10420d34f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10420d304(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113069750) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10420d350; end: 10420d3bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10420d350(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  uVar3 = *(ulong *)(unaff_x20 + _DAT_113069750);
  uVar2 = *(ulong *)(param_1 + _DAT_113069750);
  _objc_allocWithZone();
  *(ulong *)(lVar1 + _DAT_113069750) = uVar2 | uVar3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10420d3bc; end: 10420d427; -[SCAdTrackOption union:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10420d3bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  uVar4 = *(ulong *)(param_1 + _DAT_113069750);
  uVar3 = *(ulong *)(param_3 + _DAT_113069750);
  lVar2 = lVar1;
  _objc_allocWithZone();
  *(ulong *)(lVar2 + _DAT_113069750) = uVar3 | uVar4;
  lStack_40 = lVar2;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10420d428; end: 10420d443; -[SCAdTrackOption contains:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10420d428(long param_1,undefined8 param_2,long param_3)

{
  return (*(ulong *)(param_3 + _DAT_113069750) &
         (*(ulong *)(param_1 + _DAT_113069750) ^ 0xffffffffffffffff)) == 0;
}



/* Entry: 10420d444; end: 10420d45b; -[SCAdTrackOption isEmpty] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10420d444(long param_1)

{
  return *(long *)(param_1 + _DAT_113069750) == 0;
}



/* Entry: 10420d45c; end: 10420d4fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10420d45c(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar1 = &lStack_58;
    _swift_dynamicCast(plVar1,auStack_50,PTR___sypN_11034f1a8 + 8,lVar2,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x20 + _DAT_113069750);
      lVar3 = *(long *)(lStack_58 + _DAT_113069750);
      _objc_release();
      return lVar2 == lVar3;
    }
  }
  return false;
}



/* Entry: 10420d4fc; end: 10420d57b; -[SCAdTrackOption isEqual:] */

uint FUN_10420d4fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_10420d45c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10420d57c; end: 10420d58b; -[SCAdTrackOption hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10420d57c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb8d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSu9hashValueSivg_11034e218)(*(undefined8 *)(param_1 + _DAT_113069750));
  return;
}



/* Entry: 10420d58c; end: 10420d5e3; -[SCAdTrackOption description] */

void FUN_10420d58c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10420d5e4();
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,param_2);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10420d5e4; end: 10420d8fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10420d5e4(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  if (lRam0000000113069760 != -1) {
    _swift_once(0x113069760,0x10420d11c);
  }
  uVar9 = *(ulong *)(unaff_x20 + _DAT_113069750);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((*(ulong *)(lRam0000000113813328 + _DAT_113069750) & (uVar9 ^ 0xffffffffffffffff)) == 0) {
    puVar2 = (undefined *)0x0;
    func_0x0001000d182c(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar1 = *(ulong *)(puVar2 + 0x10);
    puVar7 = puVar2;
    if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
      puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar2 + 0x18));
      func_0x0001000d182c(puVar7,uVar1 + 1,1,puVar2);
    }
    *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar7 + uVar1 * 0x10 + 0x20) = 0x72546441646f7270;
    *(undefined8 *)(puVar7 + uVar1 * 0x10 + 0x28) = 0xeb000000006b6361;
  }
  if (lRam0000000113069768 != -1) {
    _swift_once(0x113069768,FUN_10420d1cc);
  }
  if ((*(ulong *)(lRam0000000113813330 + _DAT_113069750) & (uVar9 ^ 0xffffffffffffffff)) == 0) {
    puVar2 = puVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar6 = puVar7;
    if (((ulong)puVar2 & 1) == 0) {
      puVar6 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
    }
    uVar1 = *(ulong *)(puVar6 + 0x10);
    puVar7 = puVar6;
    if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
      puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
      func_0x0001000d182c(puVar7,uVar1 + 1,1,puVar6);
    }
    *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar7 + uVar1 * 0x10 + 0x20) = 0x6d75727463657073;
    *(undefined8 *)(puVar7 + uVar1 * 0x10 + 0x28) = 0xef6b636172546441;
  }
  if (lRam0000000113069770 != -1) {
    _swift_once(0x113069770,0x10420d238);
  }
  if ((*(ulong *)(lRam0000000113813338 + _DAT_113069750) & (uVar9 ^ 0xffffffffffffffff)) == 0) {
    puVar2 = puVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar6 = puVar7;
    if (((ulong)puVar2 & 1) == 0) {
      puVar6 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
    }
    uVar9 = *(ulong *)(puVar6 + 0x10);
    puVar7 = puVar6;
    if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar9) {
      puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
      func_0x0001000d182c(puVar7,uVar9 + 1,1,puVar6);
    }
    *(ulong *)(puVar7 + 0x10) = uVar9 + 1;
    *(undefined8 *)(puVar7 + uVar9 * 0x10 + 0x20) = 0x6441776f64616873;
    *(undefined8 *)(puVar7 + uVar9 * 0x10 + 0x28) = 0xed00006b63617254;
  }
  else if (*(long *)(puVar7 + 0x10) == 0) {
    _swift_bridgeObjectRelease(puVar7);
    uVar8 = 0xe700000000000000;
    uVar5 = 0x746c7561666564;
    goto LAB_10420d7d4;
  }
  uVar3 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar4 = uVar3;
  func_0x00010011d734();
  uVar5 = 0x202c;
  uVar8 = 0xe200000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x202c,0xe200000000000000,uVar3,uVar4);
  _swift_bridgeObjectRelease(puVar7);
LAB_10420d7d4:
  auVar10._8_8_ = uVar8;
  auVar10._0_8_ = uVar5;
  return auVar10;
}



/* Entry: 10420d8fc; end: 10420d8ff; -[SCAdTrackOption copyWithZone:] */

void FUN_10420d8fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10420d900; end: 10420d95f; -[SCAdTrackOption init] */

void FUN_10420d900(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AdDataServices.AdTrackOptionObjc",0x20,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10420d92c);
  (*pcVar1)();
}



/* Entry: 10420d960; end: 10420d963; -[SCAdTrackOption .cxx_destruct] */

void FUN_10420d960(void)

{
  return;
}



/* Entry: 10420d964; end: 10420db8b;  */

void FUN_10420d964(void)

{
  _objc_opt_self(&PTR_PTR_112991478);
  return;
}



/* Entry: 10420db8c; end: 10420db9f;  */

bool FUN_10420db8c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10420dba0; end: 10420dc77;  */

void FUN_10420dba0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10420dc78; end: 10420dc9f;  */

void FUN_10420dc78(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10420dca0; end: 10420dcdf;  */

void FUN_10420dca0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130697a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce32f0;
  _swift_getWitnessTable(&UNK_10dce32f0,&UNK_1107520c0);
  puRam00000001130697a0 = puVar1;
  return;
}



/* Entry: 10420dce0; end: 10420dd03;  */

undefined1  [16] FUN_10420dce0(void)

{
  return ZEXT816(0x1107520c0);
}



/* Entry: 10420dd04; end: 10420dd2f;  */

void FUN_10420dd04(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_10420dde8();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 10420dd30; end: 10420dd3b;  */

void FUN_10420dd30(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10420dd3c; end: 10420dde7;  */

void FUN_10420dd3c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10420dde8; end: 10420ddfb;  */

undefined1  [16] FUN_10420dde8(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 5) {
    uVar1 = param_1;
  }
  auVar2[8] = 4 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 10420ddfc; end: 10420de3b;  */

void FUN_10420ddfc(void)

{
  undefined *puVar1;
  
  if (puRam00000001130697a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce33e0;
  _swift_getWitnessTable(&UNK_10dce33e0,&UNK_110752148);
  puRam00000001130697a8 = puVar1;
  return;
}



/* Entry: 10420de3c; end: 10420de5f;  */

undefined1  [16] FUN_10420de3c(void)

{
  return ZEXT816(0x110752148);
}



/* Entry: 10420de60; end: 10420de8b;  */

void FUN_10420de60(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_10420df44();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 10420de8c; end: 10420de97;  */

void FUN_10420de8c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10420de98; end: 10420df43;  */

void FUN_10420de98(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10420df44; end: 10420df57;  */

undefined1  [16] FUN_10420df44(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = param_1;
  }
  auVar2[8] = 3 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 10420df58; end: 10420df97;  */

void FUN_10420df58(void)

{
  undefined *puVar1;
  
  if (puRam00000001130697b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce34a0;
  _swift_getWitnessTable(&UNK_10dce34a0,&UNK_1107521c0);
  puRam00000001130697b0 = puVar1;
  return;
}



/* Entry: 10420df98; end: 10420dfbb;  */

undefined1  [16] FUN_10420df98(void)

{
  return ZEXT816(0x1107521c0);
}



/* Entry: 10420dfbc; end: 10420dfe7;  */

void FUN_10420dfbc(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_10420e0a0();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 10420dfe8; end: 10420dff3;  */

void FUN_10420dfe8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10420dff4; end: 10420e09f;  */

void FUN_10420dff4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}


