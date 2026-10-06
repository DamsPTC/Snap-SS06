/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104678ae0; end: 104678b53;  */

void FUN_104678ae0(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = &UNK_10dd25348;
  lVar1 = 0x13f;
  FUN_10467a0d4();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,2,&puStack_30,param_1 + 0x10);
  }
  return;
}



/* Entry: 104678b54; end: 104678b57;  */

void FUN_104678b54(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar3;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  ulong uVar4;
  undefined1 auStack_310 [8];
  long lStack_308;
  long lStack_300;
  undefined1 *puStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  ulong uStack_2c0;
  
  lVar1 = 0;
  lStack_2c8 = param_1;
  uStack_2c0 = param_2;
  __s10Foundation3URLVMa();
  lStack_2d8 = *(long *)(lVar1 + -8);
  lStack_2d0 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_2d8 + 0x40));
  puStack_2f8 = auStack_310 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = (long)(auStack_310 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lStack_2f0 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = lVar1 - extraout_x12_00;
  lStack_308 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = lVar1 - extraout_x12_01;
  lVar2 = 0;
  lStack_300 = lVar1;
  FUN_10467a0d4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar1 = lVar1 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_2e8 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = (lVar1 - extraout_x12_02) - extraout_x12_03;
  lStack_2e0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = 0x11308bb80;
  func_0x0001000285a8(0x11308bb80,&UNK_10dd25430);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = (((((lVar3 - extraout_x12_04) - extraout_x12_05) - extraout_x12_06) - extraout_x12_07) -
          extraout_x12_08) - extraout_x8_01;
  lVar1 = uVar4 + (long)*(int *)(lVar1 + 0x30);
  FUN_104677940(lStack_2c8,uVar4);
  lStack_2c8 = lVar1;
  FUN_104677940(uStack_2c0,lVar1);
  uStack_2c0 = uVar4;
  _swift_getEnumCaseMultiPayload(uVar4,lVar2);
                    /* WARNING: Could not recover jumptable at 0x000104678da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)*(ushort *)(&UNK_10dd25360 + (uVar4 & 0xffffffff) * 2) * 4 + 0x104678dac))();
  return;
}



/* Entry: 104678b58; end: 10467960b;  */

void FUN_104678b58(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar3;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  ulong uVar4;
  undefined1 auStack_310 [8];
  long lStack_308;
  long lStack_300;
  undefined1 *puStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  ulong uStack_2c0;
  
  lVar1 = 0;
  lStack_2c8 = param_1;
  uStack_2c0 = param_2;
  __s10Foundation3URLVMa();
  lStack_2d8 = *(long *)(lVar1 + -8);
  lStack_2d0 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_2d8 + 0x40));
  puStack_2f8 = auStack_310 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = (long)(auStack_310 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lStack_2f0 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = lVar1 - extraout_x12_00;
  lStack_308 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = lVar1 - extraout_x12_01;
  lVar2 = 0;
  lStack_300 = lVar1;
  FUN_10467a0d4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar1 = lVar1 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_2e8 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = (lVar1 - extraout_x12_02) - extraout_x12_03;
  lStack_2e0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = 0x11308bb80;
  func_0x0001000285a8(0x11308bb80,&UNK_10dd25430);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = (((((lVar3 - extraout_x12_04) - extraout_x12_05) - extraout_x12_06) - extraout_x12_07) -
          extraout_x12_08) - extraout_x8_01;
  lVar1 = uVar4 + (long)*(int *)(lVar1 + 0x30);
  FUN_104677940(lStack_2c8,uVar4);
  lStack_2c8 = lVar1;
  FUN_104677940(uStack_2c0,lVar1);
  uStack_2c0 = uVar4;
  _swift_getEnumCaseMultiPayload(uVar4,lVar2);
                    /* WARNING: Could not recover jumptable at 0x000104678da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)*(ushort *)(&UNK_10dd25360 + (uVar4 & 0xffffffff) * 2) * 4 + 0x104678dac))();
  return;
}



/* Entry: 10467960c; end: 104679943;  */

long * FUN_10467960c(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = *(long *)(param_3 + -8);
  uVar3 = *(uint *)(lVar10 + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    plVar5 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    iVar4 = (int)plVar5;
    if (iVar4 < 4) {
      if (iVar4 == 0) {
        *param_1 = *param_2;
        *(char *)(param_1 + 1) = (char)param_2[1];
        param_1[2] = param_2[2];
        *(char *)(param_1 + 3) = (char)param_2[3];
        param_1[4] = param_2[4];
        *(char *)(param_1 + 5) = (char)param_2[5];
        *(char *)(param_1 + 7) = (char)param_2[7];
        param_1[6] = param_2[6];
        lVar10 = param_2[8];
        *(char *)(param_1 + 9) = (char)param_2[9];
        param_1[8] = lVar10;
        *(undefined1 *)((long)param_1 + 0x49) = *(undefined1 *)((long)param_2 + 0x49);
        lVar10 = param_2[0xb];
        param_1[10] = param_2[10];
        param_1[0xb] = lVar10;
        lVar10 = param_2[0xd];
        param_1[0xc] = param_2[0xc];
        param_1[0xd] = lVar10;
        param_1[0xe] = param_2[0xe];
        *(char *)(param_1 + 0xf) = (char)param_2[0xf];
        lVar8 = param_2[0x10];
        *(char *)(param_1 + 0x11) = (char)param_2[0x11];
        param_1[0x10] = lVar8;
        *(char *)(param_1 + 0x13) = (char)param_2[0x13];
        param_1[0x12] = param_2[0x12];
        *(char *)(param_1 + 0x15) = (char)param_2[0x15];
        param_1[0x14] = param_2[0x14];
        *(char *)(param_1 + 0x17) = (char)param_2[0x17];
        param_1[0x16] = param_2[0x16];
        lVar8 = param_2[0x19];
        param_1[0x18] = param_2[0x18];
        param_1[0x19] = lVar8;
        lVar9 = param_2[0x1a];
        *(char *)(param_1 + 0x1b) = (char)param_2[0x1b];
        param_1[0x1a] = lVar9;
        lVar9 = param_2[0x1c];
        *(char *)(param_1 + 0x1d) = (char)param_2[0x1d];
        param_1[0x1c] = lVar9;
        lVar9 = param_2[0x1f];
        param_1[0x1e] = param_2[0x1e];
        param_1[0x1f] = lVar9;
        lVar1 = param_2[0x21];
        param_1[0x20] = param_2[0x20];
        param_1[0x21] = lVar1;
        lVar2 = param_2[0x23];
        param_1[0x22] = param_2[0x22];
        param_1[0x23] = lVar2;
        *(char *)(param_1 + 0x24) = (char)param_2[0x24];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(lVar10);
        _swift_bridgeObjectRetain(lVar8);
        _swift_bridgeObjectRetain(lVar9);
        _swift_bridgeObjectRetain(lVar1);
        _swift_bridgeObjectRetain(lVar2);
        uVar6 = 0;
      }
      else if (iVar4 == 1) {
        lVar10 = param_2[1];
        *param_1 = *param_2;
        param_1[1] = lVar10;
        lVar10 = param_2[2];
        lVar8 = param_2[3];
        param_1[2] = lVar10;
        param_1[3] = lVar8;
        *(short *)(param_1 + 4) = (short)param_2[4];
        _swift_bridgeObjectRetain();
        _objc_retain(lVar10);
        _objc_retain(lVar8);
        uVar6 = 1;
      }
      else {
        if (iVar4 != 2) {
LAB_104679874:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(lVar10 + 0x40));
          return param_1;
        }
        lVar10 = param_2[1];
        *param_1 = *param_2;
        param_1[1] = lVar10;
        lVar10 = param_2[3];
        param_1[2] = param_2[2];
        param_1[3] = lVar10;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(lVar10);
        uVar6 = 2;
      }
    }
    else if (iVar4 == 4) {
      lVar10 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar10 + -8) + 0x10))(param_1,param_2,lVar10);
      lVar10 = 0x11308b938;
      func_0x0001000285a8(0x11308b938,&UNK_10dd25320);
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x30)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x30));
      _objc_retain();
      uVar6 = 4;
    }
    else if (iVar4 == 5) {
      lVar10 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar10 + -8) + 0x10))(param_1,param_2,lVar10);
      lVar10 = 0x11308b938;
      func_0x0001000285a8(0x11308b938,&UNK_10dd25320);
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x30)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x30));
      _objc_retain();
      uVar6 = 5;
    }
    else {
      if (iVar4 != 6) goto LAB_104679874;
      lVar10 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar10;
      _swift_bridgeObjectRetain();
      uVar6 = 6;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar6);
  }
  else {
    lVar10 = *param_2;
    *param_1 = lVar10;
    uVar7 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar10 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 104679944; end: 104679a43;  */

void FUN_104679944(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = param_1;
  _swift_getEnumCaseMultiPayload();
  iVar1 = (int)lVar3;
  if (iVar1 < 4) {
    if (iVar1 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x58));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x68));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 200));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xf8));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x108));
      uVar2 = *(undefined8 *)(param_1 + 0x118);
    }
    else {
      if (iVar1 == 1) {
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
        _objc_release(*(undefined8 *)(param_1 + 0x10));
        uVar2 = *(undefined8 *)(param_1 + 0x18);
        goto LAB_104679a38;
      }
      if (iVar1 != 2) {
        return;
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
      uVar2 = *(undefined8 *)(param_1 + 0x18);
    }
  }
  else {
    if ((iVar1 == 4) || (iVar1 == 5)) {
      lVar3 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1,lVar3);
      lVar3 = 0x11308b938;
      func_0x0001000285a8(0x11308b938,&UNK_10dd25320);
      uVar2 = *(undefined8 *)(param_1 + *(int *)(lVar3 + 0x30));
LAB_104679a38:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
    if (iVar1 != 6) {
      return;
    }
    uVar2 = *(undefined8 *)(param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 104679a44; end: 10467a0d3;  */

undefined8 * FUN_104679a44(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar4 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  iVar3 = (int)puVar4;
  if (iVar3 < 4) {
    if (iVar3 == 0) {
      *param_1 = *param_2;
      *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
      param_1[2] = param_2[2];
      *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
      param_1[4] = param_2[4];
      *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
      *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
      param_1[6] = param_2[6];
      uVar6 = param_2[8];
      *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
      param_1[8] = uVar6;
      *(undefined1 *)((long)param_1 + 0x49) = *(undefined1 *)((long)param_2 + 0x49);
      uVar6 = param_2[0xb];
      param_1[10] = param_2[10];
      param_1[0xb] = uVar6;
      uVar6 = param_2[0xd];
      param_1[0xc] = param_2[0xc];
      param_1[0xd] = uVar6;
      param_1[0xe] = param_2[0xe];
      *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
      uVar7 = param_2[0x10];
      *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
      param_1[0x10] = uVar7;
      *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
      param_1[0x12] = param_2[0x12];
      *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
      param_1[0x14] = param_2[0x14];
      *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
      param_1[0x16] = param_2[0x16];
      uVar7 = param_2[0x19];
      param_1[0x18] = param_2[0x18];
      param_1[0x19] = uVar7;
      uVar8 = param_2[0x1a];
      *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_2 + 0x1b);
      param_1[0x1a] = uVar8;
      uVar8 = param_2[0x1c];
      *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
      param_1[0x1c] = uVar8;
      uVar8 = param_2[0x1f];
      param_1[0x1e] = param_2[0x1e];
      param_1[0x1f] = uVar8;
      uVar1 = param_2[0x21];
      param_1[0x20] = param_2[0x20];
      param_1[0x21] = uVar1;
      uVar2 = param_2[0x23];
      param_1[0x22] = param_2[0x22];
      param_1[0x23] = uVar2;
      *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar6);
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRetain(uVar8);
      _swift_bridgeObjectRetain(uVar1);
      _swift_bridgeObjectRetain(uVar2);
      uVar6 = 0;
    }
    else if (iVar3 == 1) {
      uVar6 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar6;
      uVar6 = param_2[2];
      uVar7 = param_2[3];
      param_1[2] = uVar6;
      param_1[3] = uVar7;
      *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
      _swift_bridgeObjectRetain();
      _objc_retain(uVar6);
      _objc_retain(uVar7);
      uVar6 = 1;
    }
    else {
      if (iVar3 != 2) {
LAB_104679c80:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_11034c658)
                  (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
        return param_1;
      }
      uVar6 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar6;
      uVar6 = param_2[3];
      param_1[2] = param_2[2];
      param_1[3] = uVar6;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar6);
      uVar6 = 2;
    }
  }
  else if (iVar3 == 4) {
    lVar5 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
    lVar5 = 0x11308b938;
    func_0x0001000285a8(0x11308b938,&UNK_10dd25320);
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x30));
    _objc_retain();
    uVar6 = 4;
  }
  else if (iVar3 == 5) {
    lVar5 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
    lVar5 = 0x11308b938;
    func_0x0001000285a8(0x11308b938,&UNK_10dd25320);
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x30));
    _objc_retain();
    uVar6 = 5;
  }
  else {
    if (iVar3 != 6) goto LAB_104679c80;
    uVar6 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar6;
    _swift_bridgeObjectRetain();
    uVar6 = 6;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar6);
  return param_1;
}



/* Entry: 10467a0d4; end: 10467a10b;  */

void FUN_10467a0d4(undefined8 param_1)

{
  if (lRam000000011308bb48 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e8173d8);
  return;
}



/* Entry: 10467a10c; end: 10467a333;  */

long FUN_10467a10c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)lVar1 == 5) {
    lVar1 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_1,param_2,lVar1);
    lVar1 = 0x11308b938;
    func_0x0001000285a8(0x11308b938,&UNK_10dd25320);
    *(undefined8 *)(param_1 + *(int *)(lVar1 + 0x30)) =
         *(undefined8 *)(param_2 + *(int *)(lVar1 + 0x30));
    uVar2 = 5;
  }
  else {
    if ((int)lVar1 != 4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
      return param_1;
    }
    lVar1 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_1,param_2,lVar1);
    lVar1 = 0x11308b938;
    func_0x0001000285a8(0x11308b938,&UNK_10dd25320);
    *(undefined8 *)(param_1 + *(int *)(lVar1 + 0x30)) =
         *(undefined8 *)(param_2 + *(int *)(lVar1 + 0x30));
    uVar2 = 4;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar2);
  return param_1;
}



/* Entry: 10467a334; end: 10467a363;  */

void FUN_10467a334(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010467a33c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 10467a364; end: 10467a43f;  */

void FUN_10467a364(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puStack_80 = &UNK_10dd253b8;
  puStack_78 = &UNK_10dd253d0;
  puVar1 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_70 = &UNK_10dd253e8;
  lVar2 = 0x13f;
  puStack_68 = puVar1;
  __s10Foundation3URLVMa();
  if (param_2 < 0x40) {
    lVar2 = *(long *)(lVar2 + -8);
    _swift_getTupleTypeLayout2(auStack_a0,lVar2 + 0x40,&UNK_10dd25400);
    puStack_60 = auStack_a0;
    _swift_getTupleTypeLayout2(auStack_c0,lVar2 + 0x40,&UNK_10dd25400);
    puStack_50 = &UNK_10dd25418;
    puStack_58 = auStack_c0;
    puStack_48 = puVar1;
    _swift_initEnumMetadataMultiPayload(param_1,0x100,8,&puStack_80);
  }
  return;
}



/* Entry: 10467a440; end: 10467a487;  */

undefined8 FUN_10467a440(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x11308bb80;
  func_0x0001000285a8(0x11308bb80,&UNK_10dd25430);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10467a488; end: 10467a4eb;  */

uint FUN_10467a488(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x0001007bbbf8(0);
  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar4,uVar1);
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,uVar2);
    uVar3 = (uint)uVar5 & 1;
  }
  return uVar3;
}



/* Entry: 10467a4ec; end: 10467a513;  */

void FUN_10467a4ec(undefined8 *param_1)

{
  _objc_release(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1[1]);
  return;
}



/* Entry: 10467a514; end: 10467a56f;  */

undefined8 * FUN_10467a514(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _objc_retain();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10467a570; end: 10467a5ab;  */

undefined8 * FUN_10467a570(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10467a5ac; end: 10467a647;  */

int FUN_10467a5ac(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10467a648; end: 10467a6ab;  */

uint FUN_10467a648(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x0001007bbbf8(0);
  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar4,uVar1);
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,uVar2);
    uVar3 = (uint)uVar5 & 1;
  }
  return uVar3;
}



/* Entry: 10467a6ac; end: 10467a6d3;  */

void FUN_10467a6ac(undefined8 *param_1)

{
  _objc_release(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1[1]);
  return;
}



/* Entry: 10467a6d4; end: 10467a72f;  */

undefined8 * FUN_10467a6d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _objc_retain();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10467a730; end: 10467a76b;  */

undefined8 * FUN_10467a730(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10467a76c; end: 10467a807;  */

int FUN_10467a76c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10467a808; end: 10467a86b;  */

uint FUN_10467a808(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x0001007bbbf8(0);
  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar4,uVar1);
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,uVar2);
    uVar3 = (uint)uVar5 & 1;
  }
  return uVar3;
}



/* Entry: 10467a86c; end: 10467a893;  */

void FUN_10467a86c(undefined8 *param_1)

{
  _objc_release(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1[1]);
  return;
}



/* Entry: 10467a894; end: 10467a8ef;  */

undefined8 * FUN_10467a894(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _objc_retain();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10467a8f0; end: 10467a92b;  */

undefined8 * FUN_10467a8f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10467a92c; end: 10467a9c7;  */

int FUN_10467a92c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10467a9c8; end: 10467aa2b;  */

uint FUN_10467a9c8(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x0001007bbbf8(0);
  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar4,uVar1);
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,uVar2);
    uVar3 = (uint)uVar5 & 1;
  }
  return uVar3;
}



/* Entry: 10467aa2c; end: 10467aa53;  */

void FUN_10467aa2c(undefined8 *param_1)

{
  _objc_release(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1[1]);
  return;
}



/* Entry: 10467aa54; end: 10467aaaf;  */

undefined8 * FUN_10467aa54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _objc_retain();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10467aab0; end: 10467aaeb;  */

undefined8 * FUN_10467aab0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10467aaec; end: 10467ab87;  */

int FUN_10467aaec(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10467ab88; end: 10467abcf;  */

uint FUN_10467ab88(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_60 = param_1[2];
  uStack_58 = (undefined1)param_1[3];
  uStack_4f = *(undefined8 *)((long)param_1 + 0x21);
  uStack_57 = (undefined7)*(undefined8 *)((long)param_1 + 0x19);
  uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x19) >> 0x38);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  uStack_28 = (undefined1)param_2[3];
  uStack_1f = *(undefined8 *)((long)param_2 + 0x21);
  uStack_27 = (undefined7)*(undefined8 *)((long)param_2 + 0x19);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x19) >> 0x38);
  FUN_10467b080(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10467abd0; end: 10467ac6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467abd0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_30;
  long lStack_28;
  
  plVar3 = &lStack_30;
  lVar1 = 0;
  FUN_1046aa9c8();
  lVar2 = lVar1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar2 + _DAT_11308cf70) = 0;
  *(undefined1 *)(lVar2 + _DAT_11308cf78) = 0;
  *(undefined1 *)(lVar2 + _DAT_11308cf80) = 0;
  *(undefined8 *)(lVar2 + _DAT_11308cf88) = 0;
  *(undefined8 *)(lVar2 + _DAT_11308cf90) = 0;
  lStack_30 = lVar2;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  puRam00000001138151b8 = (undefined1 *)plVar3;
  return;
}



/* Entry: 10467ac6c; end: 10467acab; +[SCWebViewFirstGAInfo identity] */

void FUN_10467ac6c(void)

{
  if (lRam000000011308bb88 != -1) {
    _swift_once(0x11308bb88,FUN_10467abd0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138151b8);
  return;
}



/* Entry: 10467acac; end: 10467ad6f; -[SCWebViewFirstGAInfo withGaHitTypes:] */

void FUN_10467acac(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined1 auStack_90 [8];
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  long lStack_60;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 != 0) {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_3,PTR___sSSN_11034da80);
  }
  _objc_retain(param_1);
  FUN_1046aa8b0(auStack_90);
  func_0x000104662e60(auStack_90);
  uStack_58 = uStack_88;
  uStack_57 = uStack_87;
  uStack_50 = uStack_80;
  uStack_48 = uStack_78;
  uStack_40 = uStack_70;
  uStack_38 = uStack_68;
  lStack_60 = param_3;
  _objc_allocWithZone(uVar1);
  plVar2 = &lStack_60;
  FUN_1046aa5a0(plVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar2);
  return;
}



/* Entry: 10467ad70; end: 10467ae13; -[SCWebViewFirstGAInfo withHasGAPageViewHit:] */

void FUN_10467ad70(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_90;
  undefined1 uStack_87;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  FUN_1046aa8b0(&uStack_90);
  uStack_60 = uStack_90;
  uStack_57 = uStack_87;
  uStack_50 = uStack_80;
  uStack_48 = uStack_78;
  uStack_40 = uStack_70;
  uStack_38 = uStack_68;
  uStack_58 = param_3;
  _objc_allocWithZone(uVar1);
  puVar2 = &uStack_60;
  FUN_1046aa5a0(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10467ae14; end: 10467aeb7; -[SCWebViewFirstGAInfo withHasGAPageViewHitInLandingPage:] */

void FUN_10467ae14(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  FUN_1046aa8b0(&uStack_90);
  uStack_60 = uStack_90;
  uStack_58 = uStack_88;
  uStack_50 = uStack_80;
  uStack_48 = uStack_78;
  uStack_40 = uStack_70;
  uStack_38 = uStack_68;
  uStack_57 = param_3;
  _objc_allocWithZone(uVar1);
  puVar2 = &uStack_60;
  FUN_1046aa5a0(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10467aeb8; end: 10467af9b; -[SCWebViewFirstGAInfo withFirstGAHitLatency:] */

void FUN_10467aeb8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined1 uStack_a7;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined1 uStack_77;
  long lStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046aa8b0(&uStack_b0,param_1);
  uStack_68 = param_3 == 0;
  if ((bool)uStack_68) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c0b4ca0();
  }
  uStack_80 = uStack_b0;
  uStack_78 = uStack_a8;
  uStack_77 = uStack_a7;
  uStack_60 = uStack_90;
  uStack_58 = uStack_88;
  lStack_70 = lVar2;
  _objc_allocWithZone(uVar1);
  puVar3 = &uStack_80;
  FUN_1046aa5a0(puVar3);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10467af9c; end: 10467b07f; -[SCWebViewFirstGAInfo withFirstGATsMs:] */

void FUN_10467af9c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined1 uStack_a7;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined8 uStack_70;
  undefined1 uStack_68;
  long lStack_60;
  undefined1 uStack_58;
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046aa8b0(&uStack_b0,param_1);
  uStack_58 = param_3 == 0;
  if ((bool)uStack_58) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c0b4ca0();
  }
  uStack_80 = uStack_b0;
  uStack_78 = uStack_a8;
  uStack_77 = uStack_a7;
  uStack_70 = uStack_a0;
  uStack_68 = uStack_98;
  lStack_60 = lVar2;
  _objc_allocWithZone(uVar1);
  puVar3 = &uStack_80;
  FUN_1046aa5a0(puVar3);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10467b080; end: 10467b1b7;  */

undefined8 FUN_10467b080(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  lVar2 = *param_1;
  lVar3 = *param_2;
  if (lVar2 == 0) {
    if (lVar3 != 0) {
      return 0;
    }
  }
  else {
    if (lVar3 == 0) {
      return 0;
    }
    lVar4 = *(long *)(lVar2 + 0x10);
    if (lVar4 != *(long *)(lVar3 + 0x10)) {
      return 0;
    }
    if (lVar4 != 0 && lVar2 != lVar3) {
      plVar5 = (long *)(lVar3 + 0x28);
      plVar6 = (long *)(lVar2 + 0x28);
      do {
        uVar1 = plVar6[-1];
        if ((uVar1 != plVar5[-1] || *plVar6 != *plVar5) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar1 & 1) == 0)) {
          return 0;
        }
        plVar5 = plVar5 + 2;
        plVar6 = plVar6 + 2;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  if ((((*(byte *)(param_1 + 1) ^ *(byte *)(param_2 + 1)) & 1) == 0) &&
     (((*(byte *)((long)param_1 + 9) ^ *(byte *)((long)param_2 + 9)) & 1) == 0)) {
    if ((char)param_1[3] == '\x01') {
      if ((char)param_2[3] != '\x01') {
        return 0;
      }
    }
    else {
      if ((char)param_2[3] == '\x01') {
        return 0;
      }
      if (param_1[2] != param_2[2]) {
        return 0;
      }
    }
    if ((char)param_1[5] == '\x01') {
      if ((char)param_2[5] == '\x01') {
        return 1;
      }
    }
    else if (((char)param_2[5] != '\x01') && (param_1[4] == param_2[4])) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 10467b1b8; end: 10467b1e3;  */

long FUN_10467b1b8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10467b1e4; end: 10467b1eb;  */

void FUN_10467b1e4(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 10467b1ec; end: 10467b23f;  */

undefined8 * FUN_10467b1ec(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 10467b240; end: 10467b2b3;  */

undefined8 * FUN_10467b240(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  uVar1 = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[2] = uVar1;
  uVar1 = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = uVar1;
  return param_1;
}



/* Entry: 10467b2b4; end: 10467b317;  */

undefined8 * FUN_10467b2b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



/* Entry: 10467b318; end: 10467b3e3;  */

int FUN_10467b318(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x29) != '\0')) {
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



/* Entry: 10467b3e4; end: 10467b3f3; -[SCAdAdToMessageEvent common] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467b3e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308bb90));
  return;
}



/* Entry: 10467b3f4; end: 10467b403; -[SCAdAdToMessageEvent type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10467b3f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308bb98);
}



/* Entry: 10467b404; end: 10467b467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467b404(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308bb90) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308bb98) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10467b468; end: 10467b4d7; -[SCAdAdToMessageEvent initWithCommon:type:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467b468(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308bb90) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308bb98) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 10467b4d8; end: 10467b5a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467b4d8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_198 [8];
  undefined1 auStack_188 [168];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_allocWithZone();
  uStack_78 = param_1[0xd];
  uStack_80 = param_1[0xc];
  uStack_68 = param_1[0xf];
  uStack_70 = param_1[0xe];
  uStack_58 = param_1[0x11];
  uStack_60 = param_1[0x10];
  uStack_48 = param_1[0x13];
  uStack_50 = param_1[0x12];
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  uStack_98 = param_1[9];
  uStack_a0 = param_1[8];
  uStack_88 = param_1[0xb];
  uStack_90 = param_1[10];
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  FUN_10469d938(0);
  _objc_allocWithZone();
  FUN_10467b888(param_1,auStack_188);
  puVar1 = &uStack_e0;
  FUN_10469d28c();
  *(undefined8 **)(unaff_x20 + _DAT_11308bb90) = puVar1;
  func_0x00010466e524(param_1);
  *(undefined8 *)(unaff_x20 + _DAT_11308bb98) = param_1[0x14];
  _objc_msgSendSuper2(auStack_198,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10467b5a4; end: 10467b61f; -[SCAdAdToMessageEvent hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10467b5a4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  _objc_retain();
  FUN_10469c63c();
  __ss6HasherV8_combineyySuF();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308bb98);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10467b620; end: 10467b707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10467b620(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_58;
  undefined8 auStack_50 [3];
  long lStack_38;
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar2 = &lStack_58;
    _swift_dynamicCast(plVar2,auStack_50,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      uVar5 = *(undefined8 *)(lStack_58 + _DAT_11308bb90);
      uVar3 = 0;
      FUN_10469d938();
      auStack_50[0] = uVar5;
      lStack_38 = uVar3;
      _objc_retain(uVar5);
      puVar4 = auStack_50;
      FUN_10469c8c4(puVar4);
      func_0x00010006e7f4(auStack_50);
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308bb98);
      uVar5 = *(undefined8 *)(lStack_58 + _DAT_11308bb98);
      _objc_release(lStack_58);
      return (uint)puVar4 & (uint)((int)uVar3 == (int)uVar5);
    }
  }
  return 0;
}



/* Entry: 10467b708; end: 10467b787; -[SCAdAdToMessageEvent isEqual:] */

uint FUN_10467b708(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10467b620(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10467b788; end: 10467b78b; -[SCAdAdToMessageEvent copyWithZone:] */

void FUN_10467b788(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10467b78c; end: 10467b7fb; -[SCAdAdToMessageEvent description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467b78c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [160];
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308bb90);
  _objc_retain();
  _objc_retain(uVar1);
  FUN_10469d68c(auStack_c8);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308bb98);
  _objc_release(param_1);
  uStack_28 = uVar1;
  func_0x00010466e524(auStack_c8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10467b7fc; end: 10467b877; -[SCAdAdToMessageEvent init] */

void FUN_10467b7fc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdAdToMessageEventWrapper.swift",0x38,2,0x3b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10467b844);
  (*pcVar1)();
}



/* Entry: 10467b878; end: 10467b887; -[SCAdAdToMessageEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467b878(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308bb90));
  return;
}



/* Entry: 10467b888; end: 10467b8c3;  */

undefined8 FUN_10467b888(undefined8 param_1,undefined8 param_2)

{
  FUN_1046604f0(param_2,param_1);
  return param_2;
}



/* Entry: 10467b8c4; end: 10467b8e3;  */

void FUN_10467b8c4(void)

{
  _objc_opt_self(&PTR_PTR_1129cef68);
  return;
}



/* Entry: 10467b8e4; end: 10467b8f3; -[SCAdAdToMessageEventV2 common] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467b8e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308bbc8));
  return;
}



/* Entry: 10467b8f4; end: 10467b90b; -[SCAdAdToMessageEventV2 event] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467b8f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308bbd0));
  return;
}



/* Entry: 10467b90c; end: 10467ba4b; -[SCAdAdToMessageEventV2 initWithCommon:event:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467b90c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308bbc8) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308bbd0) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 10467ba4c; end: 10467bacf; -[SCAdAdToMessageEventV2 hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10467ba4c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308bbc8);
  _objc_retain();
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308bbd0);
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10467bad0; end: 10467bba7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10467bad0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar2 = &lStack_58;
    _swift_dynamicCast(plVar2,auStack_50,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308bbc8);
      func_0x00010c071ae0(uVar3);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308bbd0);
      uVar4 = *(undefined8 *)(lStack_58 + _DAT_11308bbd0);
      _objc_retain(uVar4);
      func_0x00010c071ae0(uVar5);
      _objc_release(uVar4);
      _objc_release(lStack_58);
      return (uint)uVar3 & (uint)uVar5;
    }
  }
  return 0;
}



/* Entry: 10467bba8; end: 10467bc27; -[SCAdAdToMessageEventV2 isEqual:] */

uint FUN_10467bba8(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10467bad0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10467bc28; end: 10467bc2b; -[SCAdAdToMessageEventV2 copyWithZone:] */

void FUN_10467bc28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10467bc2c; end: 10467bc47; -[SCAdAdToMessageEventV2 description] */

void FUN_10467bc2c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10467bc48; end: 10467bcc3; -[SCAdAdToMessageEventV2 init] */

void FUN_10467bc48(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdAdToMessageEventV2Wrapper.swift",0x3a,2,0x3b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10467bc90);
  (*pcVar1)();
}



/* Entry: 10467bcc4; end: 10467bcfb; -[SCAdAdToMessageEventV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467bcc4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308bbc8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308bbd0));
  return;
}



/* Entry: 10467bcfc; end: 10467bd1b;  */

void FUN_10467bcfc(void)

{
  _objc_opt_self(&PTR_PTR_1129cf038);
  return;
}



/* Entry: 10467bd1c; end: 10467bd1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467bd1c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308bbc8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308bbd0) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10467bd20; end: 10467bd2f; -[SCAdAppInstallEvent common] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467bd20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308bc00));
  return;
}



/* Entry: 10467bd30; end: 10467bd3f; -[SCAdAppInstallEvent type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467bd30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308bc08));
  return;
}



/* Entry: 10467bd40; end: 10467bda3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467bd40(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308bc00) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308bc08) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10467bda4; end: 10467be1b; -[SCAdAppInstallEvent initWithCommon:type:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467bda4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308bc00) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308bc08) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 10467be1c; end: 10467bef3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467be1c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a0 [192];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_allocWithZone();
  uStack_78 = param_1[0xd];
  uStack_80 = param_1[0xc];
  uStack_68 = param_1[0xf];
  uStack_70 = param_1[0xe];
  uStack_58 = param_1[0x11];
  uStack_60 = param_1[0x10];
  uStack_48 = param_1[0x13];
  uStack_50 = param_1[0x12];
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  uStack_98 = param_1[9];
  uStack_a0 = param_1[8];
  uStack_88 = param_1[0xb];
  uStack_90 = param_1[10];
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  FUN_10469d938(0);
  _objc_allocWithZone();
  func_0x00010467c25c(param_1,auStack_1a0);
  puVar1 = &uStack_e0;
  FUN_10469d28c();
  *(undefined8 **)(unaff_x20 + _DAT_11308bc00) = puVar1;
  uVar2 = param_1[0x14];
  FUN_10467cf54(uVar2,param_1[0x15],param_1[0x16],*(undefined1 *)(param_1 + 0x17));
  func_0x00010466e558(param_1);
  *(undefined8 *)(unaff_x20 + _DAT_11308bc08) = uVar2;
  _objc_msgSendSuper2(auStack_1b0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10467bef4; end: 10467bf73; -[SCAdAppInstallEvent hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10467bef4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  _objc_retain();
  uVar1 = param_1;
  FUN_10469c63c();
  __ss6HasherV8_combineyySuF();
  FUN_10467c2b8();
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10467bf74; end: 10467c083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10467bf74(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 unaff_x20;
  undefined8 uVar6;
  long lStack_58;
  undefined8 auStack_50 [3];
  long lStack_38;
  
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar1 = &lStack_58;
    _swift_dynamicCast(plVar1,auStack_50,PTR___sypN_11034f1a8 + 8,unaff_x20,6);
    if (((ulong)plVar1 & 1) != 0) {
      uVar6 = *(undefined8 *)(lStack_58 + _DAT_11308bc00);
      uVar2 = 0;
      FUN_10469d938();
      auStack_50[0] = uVar6;
      lStack_38 = uVar2;
      _objc_retain(uVar6);
      puVar3 = auStack_50;
      FUN_10469c8c4(puVar3);
      func_0x00010006e7f4(auStack_50);
      uVar6 = *(undefined8 *)(lStack_58 + _DAT_11308bc08);
      uVar2 = 0;
      FUN_10467d854();
      auStack_50[0] = uVar6;
      lStack_38 = uVar2;
      _objc_retain(uVar6);
      puVar4 = auStack_50;
      FUN_10467c4f8(puVar4);
      _objc_release(lStack_58);
      func_0x00010006e7f4(auStack_50);
      uVar5 = (uint)puVar3 & (uint)puVar4;
      goto LAB_10467c06c;
    }
  }
  uVar5 = 0;
LAB_10467c06c:
  return uVar5 & 1;
}



/* Entry: 10467c084; end: 10467c103; -[SCAdAppInstallEvent isEqual:] */

uint FUN_10467c084(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10467bf74(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10467c104; end: 10467c107; -[SCAdAppInstallEvent copyWithZone:] */

void FUN_10467c104(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10467c108; end: 10467c1a7; -[SCAdAppInstallEvent description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467c108(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_100 [160];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308bc00);
  _objc_retain();
  _objc_retain(uVar1);
  FUN_10469d68c(auStack_100);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308bc08);
  _objc_retain();
  func_0x00010467d19c();
  _objc_release(param_1);
  uStack_60 = uVar1;
  uStack_58 = param_2;
  uStack_50 = param_3;
  uStack_48 = param_4;
  func_0x00010466e558(auStack_100);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10467c1a8; end: 10467c223; -[SCAdAppInstallEvent init] */

void FUN_10467c1a8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdAppInstallEventWrapper.swift",0x37,2,0x3b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10467c1f0);
  (*pcVar1)();
}



/* Entry: 10467c224; end: 10467c297; -[SCAdAppInstallEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467c224(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308bc00));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308bc08));
  return;
}



/* Entry: 10467c298; end: 10467c2b7;  */

void FUN_10467c298(void)

{
  _objc_opt_self(&PTR_PTR_1129cf108);
  return;
}



/* Entry: 10467c2b8; end: 10467c4f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467c2b8(void)

{
  ulong uVar1;
  byte bVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_11308bc38));
  if ((char)((ulong *)(unaff_x20 + _DAT_11308bc40))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *(ulong *)(unaff_x20 + _DAT_11308bc40);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar4 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar4;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  bVar2 = *(byte *)(unaff_x20 + _DAT_11308bc48);
  if (bVar2 == 2) {
    bVar2 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar2 = bVar2 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar2);
  bVar2 = *(byte *)(unaff_x20 + _DAT_11308bc50);
  if (bVar2 == 2) {
    bVar2 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar2 = bVar2 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_11308bc58);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  if ((char)((ulong *)(unaff_x20 + _DAT_11308bc60))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *(ulong *)(unaff_x20 + _DAT_11308bc60);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar4 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar4;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  bVar2 = *(byte *)(unaff_x20 + _DAT_11308bc68);
  if (bVar2 == 2) {
    bVar2 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar2 = bVar2 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar2);
  bVar2 = *(byte *)(unaff_x20 + _DAT_11308bc70);
  if (bVar2 == 2) {
    bVar2 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar2 = bVar2 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_11308bc78);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10467c4f8; end: 10467c7bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10467c4f8(undefined8 param_1)

{
  char cVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar6 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar3 = &lStack_68;
    _swift_dynamicCast(plVar3,auStack_60,PTR___sypN_11034f1a8 + 8,lVar6,6);
    if (((ulong)plVar3 & 1) != 0) {
      bVar2 = *(byte *)(unaff_x20 + _DAT_11308bc38);
      if (bVar2 != *(byte *)(lStack_68 + _DAT_11308bc38)) goto LAB_10467c794;
      if (1 < bVar2) {
        _objc_release();
        uVar5 = 1;
        goto LAB_10467c79c;
      }
      if (bVar2 == 0) {
        cVar1 = *(char *)((double *)(lStack_68 + _DAT_11308bc40) + 1);
        if (*(char *)((double *)(unaff_x20 + _DAT_11308bc40) + 1) == '\x01') {
          if (cVar1 == '\x01') {
LAB_10467c614:
            bVar2 = *(byte *)(lStack_68 + _DAT_11308bc48);
            if (*(byte *)(unaff_x20 + _DAT_11308bc48) == 2) {
              if (bVar2 == 2) {
LAB_10467c684:
                bVar2 = *(byte *)(lStack_68 + _DAT_11308bc50);
                lVar6 = _DAT_11308bc58;
                if (*(byte *)(unaff_x20 + _DAT_11308bc50) == 2) {
joined_r0x00010467c6d4:
                  if (bVar2 == 2) {
LAB_10467c710:
                    lVar7 = *(long *)(unaff_x20 + lVar6);
                    lVar6 = *(long *)(lStack_68 + lVar6);
                    if (lVar7 != 0) {
                      uVar5 = 0;
                      if (lVar6 != 0) {
                        func_0x0001002ed07c(0);
                        _objc_retain(lVar6);
                        _objc_retain(lVar7);
                        lVar4 = lVar7;
                        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
                        uVar5 = (uint)lVar4;
                        _objc_release(lVar7);
                        _objc_release(lVar6);
                      }
                      _objc_release(lStack_68);
                      goto LAB_10467c79c;
                    }
                    lVar7 = lVar6;
                    _objc_retain(lVar6);
                    _objc_release(lStack_68);
                    lStack_68 = lVar7;
                    if (lVar6 == 0) {
                      uVar5 = 1;
                      goto LAB_10467c79c;
                    }
                  }
                }
                else if (bVar2 != 2) {
                  bVar2 = *(byte *)(unaff_x20 + _DAT_11308bc50) ^ bVar2;
                  goto joined_r0x00010467c704;
                }
              }
            }
            else if ((bVar2 != 2) && (((*(byte *)(unaff_x20 + _DAT_11308bc48) ^ bVar2) & 1) == 0))
            goto LAB_10467c684;
          }
        }
        else if ((cVar1 != '\x01') &&
                (*(double *)(unaff_x20 + _DAT_11308bc40) == *(double *)(lStack_68 + _DAT_11308bc40))
                ) goto LAB_10467c614;
      }
      else {
        cVar1 = *(char *)((double *)(lStack_68 + _DAT_11308bc60) + 1);
        if (*(char *)((double *)(unaff_x20 + _DAT_11308bc60) + 1) == '\x01') {
          if (cVar1 == '\x01') {
LAB_10467c650:
            bVar2 = *(byte *)(lStack_68 + _DAT_11308bc68);
            if (*(byte *)(unaff_x20 + _DAT_11308bc68) == 2) {
              if (bVar2 == 2) {
LAB_10467c6b8:
                bVar2 = *(byte *)(lStack_68 + _DAT_11308bc70);
                lVar6 = _DAT_11308bc78;
                if (*(byte *)(unaff_x20 + _DAT_11308bc70) == 2) goto joined_r0x00010467c6d4;
                if (bVar2 == 2) goto LAB_10467c794;
                bVar2 = *(byte *)(unaff_x20 + _DAT_11308bc70) ^ bVar2;
joined_r0x00010467c704:
                if ((bVar2 & 1) == 0) goto LAB_10467c710;
              }
            }
            else if ((bVar2 != 2) && (((*(byte *)(unaff_x20 + _DAT_11308bc68) ^ bVar2) & 1) == 0))
            goto LAB_10467c6b8;
          }
        }
        else if ((cVar1 != '\x01') &&
                (*(double *)(unaff_x20 + _DAT_11308bc60) == *(double *)(lStack_68 + _DAT_11308bc60))
                ) goto LAB_10467c650;
      }
LAB_10467c794:
      _objc_release(lStack_68);
    }
  }
  uVar5 = 0;
LAB_10467c79c:
  return uVar5 & 1;
}



/* Entry: 10467c7c0; end: 10467c893;  */

void FUN_10467c7c0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10467c894; end: 10467c8b3;  */

void FUN_10467c894(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 10467c8b4; end: 10467c8d7; -[SCAdAppInstallEventType description] */

void FUN_10467c8b4(void)

{
  _objc_retain();
  func_0x00010467d19c();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10467c8d8; end: 10467c91f; -[SCAdAppInstallEventType init] */

void FUN_10467c8d8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdAppInstallEventTypeWrapper.swift",0x3b,2,0x60,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10467c920);
  (*pcVar1)();
}



/* Entry: 10467c920; end: 10467c953; -[SCAdAppInstallEventType hash] */

undefined8 FUN_10467c920(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10467c2b8();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10467c954; end: 10467c9d3; -[SCAdAppInstallEventType isEqual:] */

uint FUN_10467c954(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10467c4f8(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10467c9d4; end: 10467c9d7; -[SCAdAppInstallEventType copyWithZone:] */

void FUN_10467c9d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10467c9d8; end: 10467ca3f; +[SCAdAppInstallEventType storeViewClosedWithVisibleLoadTimeSec:pageLoadedOnExit:pageLoadedOnEntry:collectionItemIndex:] */

void FUN_10467c9d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = param_6;
  _objc_retain(param_6);
  FUN_10467d5ac(param_1,param_4,param_5,param_6);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 10467ca40; end: 10467caa7; +[SCAdAppInstallEventType storeViewLoadedWithVisibleLoadTimeSec:pageLoadedOnExit:pageLoadedOnEntry:collectionItemIndex:] */

void FUN_10467ca40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = param_6;
  _objc_retain(param_6);
  func_0x00010467d69c(param_1,param_4,param_5,param_6);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 10467caa8; end: 10467cabf; +[SCAdAppInstallEventType storeViewOpened] */

void FUN_10467caa8(void)

{
  FUN_10467d78c(2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10467cac0; end: 10467cad7; +[SCAdAppInstallEventType storeViewWillClose] */

void FUN_10467cac0(void)

{
  FUN_10467d78c(3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10467cad8; end: 10467caef; +[SCAdAppInstallEventType storeViewWillOpen] */

void FUN_10467cad8(void)

{
  FUN_10467d78c(4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10467caf0; end: 10467ce5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10467caf0(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7,undefined8 param_8,code *param_9)

{
  code *pcVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long lVar3;
  long unaff_x20;
  undefined1 *puVar4;
  undefined1 *puVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_c0 [8];
  undefined1 *puStack_b8;
  undefined1 auStack_b0 [24];
  long lStack_98;
  long alStack_90 [3];
  undefined8 uStack_78;
  
  bVar6 = *(byte *)(unaff_x20 + _DAT_11308bc38);
  if (1 < bVar6) {
    if (bVar6 == 2) {
      (*param_5)();
      return;
    }
    if (bVar6 == 3) {
      (*param_7)();
      return;
    }
    (*param_9)();
    return;
  }
  if (bVar6 == 0) {
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308bc40) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10467ce4c);
      (*pcVar1)();
    }
    bVar6 = *(byte *)(unaff_x20 + _DAT_11308bc48);
    if (bVar6 == 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10467ce54);
      (*pcVar1)();
    }
    bVar7 = *(byte *)(unaff_x20 + _DAT_11308bc50);
    if (bVar7 == 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10467ce5c);
      (*pcVar1)();
    }
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_11308bc40);
    lVar3 = *(long *)(unaff_x20 + _DAT_11308bc58);
    param_3 = param_1;
    if (lVar3 != 0) {
      uVar2 = 0;
      func_0x0001002ed07c();
      alStack_90[0] = lVar3;
      uStack_78 = uVar2;
      func_0x000100672b50(alStack_90,auStack_b0);
      if (lStack_98 == 0) {
        _objc_retain(lVar3);
        _objc_retain();
        puVar4 = (undefined1 *)0x0;
      }
      else {
        func_0x0001006732c8(auStack_b0,lStack_98);
        lVar8 = *(long *)(lStack_98 + -8);
        puStack_b8 = auStack_c0;
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
        puVar5 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
        (**(code **)(lVar8 + 0x10))(puVar5);
        _objc_retain(lVar3);
        _objc_retain();
        puVar4 = puVar5;
        __ss27_bridgeAnythingToObjectiveCyyXlxlF(puVar5,lStack_98);
        (**(code **)(lVar8 + 8))(puVar5,lStack_98);
        func_0x000100183ab8(auStack_b0);
      }
      _swift_getObjCClassFromMetadata(uVar2);
      func_0x00010c2972c0();
LAB_10467cde8:
      _objc_retainAutoreleasedReturnValue();
      _swift_unknownObjectRelease(puVar4);
      func_0x00010006e7f4(alStack_90);
      _objc_release(lVar3);
      goto LAB_10467ce08;
    }
  }
  else {
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308bc60) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10467ce50);
      (*pcVar1)();
    }
    bVar6 = *(byte *)(unaff_x20 + _DAT_11308bc68);
    if (bVar6 == 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10467ce58);
      (*pcVar1)();
    }
    bVar7 = *(byte *)(unaff_x20 + _DAT_11308bc70);
    if (bVar7 == 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10467ce60);
      (*pcVar1)();
    }
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_11308bc60);
    lVar3 = *(long *)(unaff_x20 + _DAT_11308bc78);
    if (lVar3 != 0) {
      uVar2 = 0;
      func_0x0001002ed07c();
      alStack_90[0] = lVar3;
      uStack_78 = uVar2;
      func_0x000100672b50(alStack_90,auStack_b0);
      if (lStack_98 == 0) {
        _objc_retain(lVar3);
        _objc_retain();
        puVar4 = (undefined1 *)0x0;
      }
      else {
        func_0x0001006732c8(auStack_b0,lStack_98);
        lVar8 = *(long *)(lStack_98 + -8);
        puStack_b8 = auStack_c0;
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
        puVar5 = auStack_c0 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
        (**(code **)(lVar8 + 0x10))(puVar5);
        _objc_retain(lVar3);
        _objc_retain();
        puVar4 = puVar5;
        __ss27_bridgeAnythingToObjectiveCyyXlxlF(puVar5,lStack_98);
        (**(code **)(lVar8 + 8))(puVar5,lStack_98);
        func_0x000100183ab8(auStack_b0);
      }
      _swift_getObjCClassFromMetadata(uVar2);
      func_0x00010c2972c0();
      goto LAB_10467cde8;
    }
  }
  uVar2 = 0;
LAB_10467ce08:
  (*param_3)(uVar9,bVar6 & 1,bVar7 & 1,uVar2);
  _objc_release(uVar2);
  return;
}


