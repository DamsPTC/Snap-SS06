/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103f5bcfc; end: 103f5c13f;  */

undefined8 * FUN_103f5bcfc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar7 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  uVar7 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  uVar7 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  param_1[3] = param_2[3];
  uVar7 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  uVar7 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  uVar7 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  uVar7 = param_1[7];
  param_1[7] = param_2[7];
  _objc_retain();
  _objc_release(uVar7);
  param_1[8] = param_2[8];
  uVar7 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  uVar7 = param_1[10];
  param_1[10] = param_2[10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  param_1[0xb] = param_2[0xb];
  uVar7 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  uVar7 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  _objc_retain();
  _objc_release(uVar7);
  lVar8 = param_1[0x10];
  if (lVar8 == 1) {
    if (param_2[0x10] == 1) {
      uVar12 = param_2[0x10];
      uVar7 = param_2[0xf];
      uVar14 = param_2[0x12];
      uVar13 = param_2[0x11];
      *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
      param_1[0x12] = uVar14;
      param_1[0x11] = uVar13;
      param_1[0x10] = uVar12;
      param_1[0xf] = uVar7;
    }
    else {
      param_1[0xf] = param_2[0xf];
      param_1[0x10] = param_2[0x10];
      param_1[0x11] = param_2[0x11];
      uVar7 = param_2[0x12];
      param_1[0x12] = uVar7;
      *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar7);
    }
  }
  else if (param_2[0x10] == 1) {
    func_0x000103f5c140(param_1 + 0xf);
    uVar3 = *(undefined4 *)(param_2 + 0x13);
    uVar12 = param_2[0x12];
    uVar7 = param_2[0x11];
    uVar13 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar13;
    param_1[0x12] = uVar12;
    param_1[0x11] = uVar7;
    *(undefined4 *)(param_1 + 0x13) = uVar3;
  }
  else {
    param_1[0xf] = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar8);
    param_1[0x11] = param_2[0x11];
    uVar7 = param_1[0x12];
    param_1[0x12] = param_2[0x12];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar7);
    *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  }
  lVar9 = (long)*(int *)(param_3 + 0x44);
  lVar4 = 0;
  __s10Foundation4DateVMa();
  lVar10 = *(long *)(lVar4 + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  lVar8 = (long)param_1 + lVar9;
  (*pcVar11)(lVar8,1,lVar4);
  lVar5 = (long)param_2 + lVar9;
  (*pcVar11)(lVar5,1,lVar4);
  if ((int)lVar8 == 0) {
    if ((int)lVar5 != 0) {
      (**(code **)(lVar10 + 8))((long)param_1 + lVar9,lVar4);
      goto LAB_103f5bfac;
    }
    (**(code **)(lVar10 + 0x18))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar4);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar10 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar4);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar9,0,1,lVar4);
  }
  else {
LAB_103f5bfac:
    lVar8 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    _memcpy((long)param_1 + lVar9,(long)param_2 + lVar9,
            *(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  }
  lVar8 = (long)*(int *)(param_3 + 0x48);
  uVar7 = *(undefined8 *)((long)param_1 + lVar8);
  *(undefined8 *)((long)param_1 + lVar8) = *(undefined8 *)((long)param_2 + lVar8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  plVar1 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x4c));
  plVar2 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x4c));
  lVar5 = *plVar1;
  lVar8 = *plVar2;
  if (lVar5 == 0) {
    if (lVar8 == 0) {
      lVar5 = plVar2[1];
      lVar8 = *plVar2;
      lVar9 = plVar2[3];
      lVar4 = plVar2[2];
      plVar1[4] = plVar2[4];
      plVar1[1] = lVar5;
      *plVar1 = lVar8;
      plVar1[3] = lVar9;
      plVar1[2] = lVar4;
      return param_1;
    }
    *plVar1 = lVar8;
    plVar1[1] = plVar2[1];
    lVar8 = plVar2[2];
    plVar1[2] = lVar8;
    uVar6 = plVar2[4];
    _objc_retain();
    _swift_bridgeObjectRetain(lVar8);
  }
  else {
    if (lVar8 == 0) {
      func_0x000103f5c174(plVar1);
      lVar8 = plVar2[4];
      lVar9 = *plVar2;
      lVar4 = plVar2[3];
      lVar5 = plVar2[2];
      plVar1[1] = plVar2[1];
      *plVar1 = lVar9;
      plVar1[3] = lVar4;
      plVar1[2] = lVar5;
      plVar1[4] = lVar8;
      return param_1;
    }
    *plVar1 = lVar8;
    _objc_retain();
    _objc_release(lVar5);
    plVar1[1] = plVar2[1];
    lVar8 = plVar1[2];
    plVar1[2] = plVar2[2];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar8);
    uVar6 = plVar2[4];
    if ((ulong)plVar1[4] >> 0x3c < 0xf) {
      if (uVar6 >> 0x3c < 0xf) {
        lVar4 = plVar2[3];
        func_0x00010006c00c(lVar4,uVar6);
        lVar8 = plVar1[3];
        lVar5 = plVar1[4];
        plVar1[3] = lVar4;
        plVar1[4] = uVar6;
        func_0x00010006c090(lVar8,lVar5);
        return param_1;
      }
      func_0x0001006e5814(plVar1 + 3);
      goto LAB_103f5c09c;
    }
  }
  if (uVar6 >> 0x3c < 0xf) {
    lVar8 = plVar2[3];
    func_0x00010006c00c(lVar8,uVar6);
    plVar1[3] = lVar8;
    plVar1[4] = uVar6;
    return param_1;
  }
LAB_103f5c09c:
  lVar8 = plVar2[3];
  plVar1[4] = plVar2[4];
  plVar1[3] = lVar8;
  return param_1;
}



/* Entry: 103f5c140; end: 103f5c1a7;  */

undefined8 FUN_103f5c140(undefined8 param_1)

{
  (*(code *)&DAT_1043f0d68)();
  return param_1;
}



/* Entry: 103f5c1a8; end: 103f5c2ef;  */

undefined8 * FUN_103f5c1a8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[2] = param_2[2];
  uVar7 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar7;
  uVar7 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar7;
  param_1[7] = param_2[7];
  uVar7 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar7;
  param_1[10] = param_2[10];
  uVar7 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar7;
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  param_1[0xe] = param_2[0xe];
  uVar7 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar7;
  uVar7 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar7;
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  lVar5 = (long)*(int *)(param_3 + 0x44);
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar3 + -8);
  lVar4 = (long)param_2 + lVar5;
  (**(code **)(lVar6 + 0x30))(lVar4,1,lVar3);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar6 + 0x20))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar3);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar5,0,1,lVar3);
  }
  else {
    lVar4 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    _memcpy((long)param_1 + lVar5,(long)param_2 + lVar5,
            *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  }
  iVar2 = *(int *)(param_3 + 0x4c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x48)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x48));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar2);
  param_2 = (undefined8 *)((long)param_2 + (long)iVar2);
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  puVar1[1] = param_2[1];
  *puVar1 = uVar7;
  puVar1[3] = uVar9;
  puVar1[2] = uVar8;
  puVar1[4] = param_2[4];
  return param_1;
}



/* Entry: 103f5c2f0; end: 103f5c5b7;  */

undefined8 * FUN_103f5c2f0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  
  uVar3 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_2[4];
  uVar4 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar3;
  _swift_bridgeObjectRelease(uVar4);
  uVar3 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_1[7];
  param_1[7] = param_2[7];
  _objc_release(uVar3);
  uVar3 = param_2[9];
  uVar4 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar3;
  _swift_bridgeObjectRelease(uVar4);
  uVar3 = param_1[10];
  param_1[10] = param_2[10];
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_2[0xc];
  uVar4 = param_1[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar3;
  _swift_bridgeObjectRelease(uVar4);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  uVar3 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  _objc_release(uVar3);
  if (param_1[0x10] == 1) {
LAB_103f5c3ec:
    uVar3 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar3;
    uVar3 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar3;
    *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  }
  else {
    lVar7 = param_2[0x10];
    if (lVar7 == 1) {
      FUN_103f5c140(param_1 + 0xf);
      goto LAB_103f5c3ec;
    }
    param_1[0xf] = param_2[0xf];
    param_1[0x10] = lVar7;
    _swift_bridgeObjectRelease();
    uVar3 = param_2[0x12];
    uVar4 = param_1[0x12];
    param_1[0x11] = param_2[0x11];
    param_1[0x12] = uVar3;
    _swift_bridgeObjectRelease(uVar4);
    *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  }
  lVar9 = (long)*(int *)(param_3 + 0x44);
  lVar5 = 0;
  __s10Foundation4DateVMa();
  lVar10 = *(long *)(lVar5 + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  lVar7 = (long)param_1 + lVar9;
  (*pcVar11)(lVar7,1,lVar5);
  lVar6 = (long)param_2 + lVar9;
  (*pcVar11)(lVar6,1,lVar5);
  if ((int)lVar7 == 0) {
    if ((int)lVar6 == 0) {
      (**(code **)(lVar10 + 0x28))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar5);
      goto LAB_103f5c4dc;
    }
    (**(code **)(lVar10 + 8))((long)param_1 + lVar9,lVar5);
  }
  else if ((int)lVar6 == 0) {
    (**(code **)(lVar10 + 0x20))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar5);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar9,0,1,lVar5);
    goto LAB_103f5c4dc;
  }
  lVar7 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  _memcpy((long)param_1 + lVar9,(long)param_2 + lVar9,*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40))
  ;
LAB_103f5c4dc:
  lVar7 = (long)*(int *)(param_3 + 0x48);
  uVar3 = *(undefined8 *)((long)param_1 + lVar7);
  *(undefined8 *)((long)param_1 + lVar7) = *(undefined8 *)((long)param_2 + lVar7);
  _swift_bridgeObjectRelease(uVar3);
  plVar1 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x4c));
  plVar2 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x4c));
  if (*plVar1 != 0) {
    if (*plVar2 != 0) {
      *plVar1 = *plVar2;
      _objc_release();
      lVar7 = plVar2[2];
      lVar6 = plVar1[2];
      plVar1[1] = plVar2[1];
      plVar1[2] = lVar7;
      _swift_bridgeObjectRelease(lVar6);
      if ((ulong)plVar1[4] >> 0x3c < 0xf) {
        uVar8 = plVar2[4];
        if (uVar8 >> 0x3c < 0xf) {
          lVar7 = plVar1[3];
          plVar1[3] = plVar2[3];
          plVar1[4] = uVar8;
          func_0x00010006c090(lVar7);
          return param_1;
        }
        func_0x0001006e5814(plVar1 + 3);
      }
      lVar7 = plVar2[3];
      plVar1[4] = plVar2[4];
      plVar1[3] = lVar7;
      return param_1;
    }
    func_0x000103f5c174(plVar1);
  }
  lVar7 = *plVar2;
  lVar5 = plVar2[3];
  lVar6 = plVar2[2];
  plVar1[1] = plVar2[1];
  *plVar1 = lVar7;
  plVar1[3] = lVar5;
  plVar1[2] = lVar6;
  plVar1[4] = plVar2[4];
  return param_1;
}



/* Entry: 103f5c5b8; end: 103f5c5cf;  */

void FUN_103f5c5b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 103f5c5d0; end: 103f5c6d7;  */

void FUN_103f5c5d0(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR___sBbWV_11034d660 + 0x40;
  puStack_88 = &UNK_10dcaea98;
  puStack_70 = &UNK_10dcaeab0;
  puStack_68 = &UNK_10dcaea98;
  puStack_60 = &UNK_10dcaeab0;
  puStack_58 = &UNK_10dcaea98;
  puStack_50 = &UNK_10dcaeac8;
  puStack_48 = &UNK_10dcaeab0;
  puStack_40 = &UNK_10dcaeae0;
  lVar2 = 0x13f;
  puStack_a0 = puVar1;
  puStack_98 = puVar1;
  puStack_90 = puVar1;
  puStack_80 = puVar1;
  puStack_78 = puVar1;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar2 + -8) + 0x40;
    puStack_28 = &UNK_10dcaeaf8;
    puStack_30 = puVar1;
    _swift_initStructMetadata(param_1,0x100,0x10,&puStack_a0,param_1 + 0x10);
  }
  return;
}



/* Entry: 103f5c6d8; end: 103f5c8fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103f5c6d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  func_0x000100360b74();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_113034920;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_113034920,0);
  *(undefined8 *)(lVar4 + _DAT_113034930) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130348d8) = param_1;
  *(undefined8 *)(lVar4 + _DAT_1130348e0) = param_2;
  *(undefined8 *)(lVar4 + _DAT_1130348e8) = param_3;
  *(undefined8 *)(lVar4 + _DAT_1130348f0) = param_4;
  *(undefined8 *)(lVar4 + _DAT_1130348f8) = param_5;
  *(undefined8 *)(lVar4 + _DAT_113034900) = param_6;
  *(undefined8 *)(lVar4 + _DAT_113034908) = param_7;
  *(undefined8 *)(lVar4 + _DAT_113034910) = param_8;
  *(undefined1 *)(lVar4 + _DAT_113034918) = (undefined1)param_9;
  _swift_beginAccess(lVar4 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_11);
  *(undefined1 *)(lVar4 + _DAT_113034928) = param_9._1_1_;
  puVar1 = PTR_s_init_1125d9248;
  lStack_88 = lVar4;
  lStack_80 = lVar3;
  _swift_unknownObjectRetain(param_1);
  _swift_bridgeObjectRetain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  plVar5 = &lStack_88;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_a0[0] = plVar5;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  _swift_release(uStack_90);
  _swift_unknownObjectRelease(aplStack_a0[0]);
  return plVar5;
}



/* Entry: 103f5c8fc; end: 103f5ca77; -[_TtC13SCSendToScope21SCSendToScopeServices buildWithUIContainer:preSelectedItems:previewConfiguration:contentConfiguration:recipientConfiguration:storyConfiguration:shareSheetConfiguration:attribution:isLaunchedFromLegacySendTo:showSendToTray:delegate:] */

void FUN_103f5c8fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = 0;
  func_0x0001012db084(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,uVar1);
  _swift_unknownObjectRetain(param_3);
  uVar1 = param_5;
  _objc_retain();
  uVar2 = param_6;
  _objc_retain();
  _objc_retain(param_7);
  uVar3 = param_8;
  _objc_retain();
  uVar4 = param_9;
  _objc_retain();
  _objc_retain(param_10);
  _swift_unknownObjectRetain(param_13);
  _objc_retain(param_1);
  uVar5 = param_3;
  FUN_103f5c6d8(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  _swift_unknownObjectRelease(param_3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(param_10);
  _swift_unknownObjectRelease(param_13);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 103f5ca78; end: 103f5cad7; -[_TtC13SCSendToScope21SCSendToScopeServices init] */

void FUN_103f5ca78(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCSendToScope.SCSendToScopeServices",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f5caa4);
  (*pcVar1)();
}



/* Entry: 103f5cad8; end: 103f5cb07; -[_TtC13SCSendToScope21SCSendToScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5cad8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113034c68));
  return;
}



/* Entry: 103f5cb08; end: 103f5cb53; -[SCSendToAttribution sendToSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5cb08(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113034cb0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113034cb0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f5cb54; end: 103f5cb63; -[SCSendToAttribution snapSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f5cb54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113034cb8);
}



/* Entry: 103f5cb64; end: 103f5cb73; -[SCSendToAttribution messageType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f5cb64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113034cc0);
}



/* Entry: 103f5cb74; end: 103f5cb83; -[SCSendToAttribution mediaType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f5cb74(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113034cc8);
}



/* Entry: 103f5cb84; end: 103f5cb93; -[SCSendToAttribution sourcePageViewName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f5cb84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113034cd0);
}



/* Entry: 103f5cb94; end: 103f5cb9f; -[SCSendToAttribution captureSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5cb94(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113034cd8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113034cd8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f5cba0; end: 103f5cbab; -[SCSendToAttribution contextSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5cba0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113034ce0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113034ce0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f5cbac; end: 103f5cbb7; -[SCSendToAttribution commerceSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5cbac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113034ce8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113034ce8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f5cbb8; end: 103f5cbc3; -[SCSendToAttribution contentId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5cbb8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113034cf0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113034cf0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f5cbc4; end: 103f5cc1b;  */

void FUN_103f5cbc4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f5cc1c; end: 103f5cc6f; -[SCSendToAttribution lensIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5cc1c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113034cf8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103f5cc70; end: 103f5cc7f; -[SCSendToAttribution shouldDisplayPolaroidEducation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f5cc70(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113034d00);
}



/* Entry: 103f5cc80; end: 103f5cc8f; -[SCSendToAttribution remixPreviewConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5cc80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113034d08));
  return;
}



/* Entry: 103f5cc90; end: 103f5cf67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5cc90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined1 param_16,
                  undefined4 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034cb0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113034cb8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113034cc0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113034cc8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113034cd0) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034cd8);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034ce0);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034ce8);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034cf0);
  *puVar1 = param_13;
  puVar1[1] = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_113034cf8) = param_15;
  *(undefined1 *)(unaff_x20 + _DAT_113034d00) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_113034d08) = param_18;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f5cf68; end: 103f5d0d3; -[SCSendToAttribution initWithSendToSessionId:snapSource:messageType:mediaType:sourcePageViewName:captureSessionId:contextSessionId:commerceSessionId:contentId:lensIds:shouldDisplayPolaroidEducation:remixPreviewConfiguration:] */

void FUN_103f5cf68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9
                  ,long param_10,long param_11,long param_12,undefined1 param_13)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_8 == 0) {
    uStack_b0 = 0;
    uStack_a8 = 0;
    uVar5 = param_2;
  }
  else {
    uStack_b0 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar5 = uStack_b0;
    uStack_a8 = param_8;
  }
  if (param_9 == 0) {
    param_9 = 0;
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar1 = uVar5;
  }
  if (param_10 == 0) {
    uVar4 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar4 = uVar5;
  }
  lVar2 = param_11;
  _objc_retain();
  lVar3 = param_12;
  _objc_retain();
  _objc_retain();
  if (lVar2 == 0) {
    param_11 = 0;
    uVar5 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar2);
  }
  if (lVar3 == 0) {
    param_12 = 0;
  }
  else {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_12,PTR___sSSN_11034da80);
    _objc_release(lVar3);
  }
  func_0x000103f5cdfc(param_3,param_2,param_4,param_5,param_6,param_7,uStack_a8,uStack_b0,param_9,
                      uVar1,param_10,uVar4,param_11,uVar5,param_12,param_13);
  return;
}



/* Entry: 103f5d0d4; end: 103f5d113;  */

undefined8 FUN_103f5d0d4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_103f5da84(param_1);
  FUN_103f5dc40(param_1);
  return uVar1;
}



/* Entry: 103f5d114; end: 103f5d117; -[SCSendToAttribution copyWithZone:] */

void FUN_103f5d114(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f5d118; end: 103f5d14b; -[SCSendToAttribution description] */

void FUN_103f5d118(void)

{
  undefined1 auStack_98 [136];
  
  FUN_103f5dc74(auStack_98);
  FUN_103f5dc40(auStack_98);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f5d14c; end: 103f5d193; -[SCSendToAttribution init] */

void FUN_103f5d14c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCSendToScope/SCSendToAttributionWrapper.swift",0x2e,2,0x5f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f5d194);
  (*pcVar1)();
}



/* Entry: 103f5d194; end: 103f5d1af; +[SCSendToAttributionBuilder sendToAttribution] */

void FUN_103f5d194(void)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x000107c453e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f5d1b0; end: 103f5d1ef; +[SCSendToAttributionBuilder sendToAttributionWithExistingSendToAttribution:] */

void FUN_103f5d1b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_103f5dda4(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103f5d1f0; end: 103f5d23f; -[SCSendToAttributionBuilder withSendToSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5d1f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_113034d10);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
  _objc_retain(param_1);
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 103f5d240; end: 103f5d257; -[SCSendToAttributionBuilder withSnapSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5d240(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113034d18);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 103f5d258; end: 103f5d26f; -[SCSendToAttributionBuilder withMessageType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5d258(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113034d20);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 103f5d270; end: 103f5d287; -[SCSendToAttributionBuilder withMediaType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5d270(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113034d28);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 103f5d288; end: 103f5d29f; -[SCSendToAttributionBuilder withSourcePageViewName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5d288(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113034d30);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 103f5d2a0; end: 103f5d2ab; -[SCSendToAttributionBuilder withCaptureSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5d2a0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113034d38);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 103f5d2ac; end: 103f5d2b7; -[SCSendToAttributionBuilder withContextSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5d2ac(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113034d40);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 103f5d2b8; end: 103f5d2c3; -[SCSendToAttributionBuilder withCommerceSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5d2b8(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113034d48);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 103f5d2c4; end: 103f5d2cf; -[SCSendToAttributionBuilder withContentId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5d2c4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113034d50);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 103f5d2d0; end: 103f5d333;  */

void FUN_103f5d2d0(long param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + *param_4);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 103f5d334; end: 103f5d397; -[SCSendToAttributionBuilder withLensIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5d334(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_3,PTR___sSSN_11034da80);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_113034d58);
  *(long *)(param_1 + _DAT_113034d58) = param_3;
  _objc_retain();
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 103f5d398; end: 103f5d3a7; -[SCSendToAttributionBuilder withShouldDisplayPolaroidEducation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5d398(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113034d60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 103f5d3a8; end: 103f5d407; -[SCSendToAttributionBuilder withRemixPreviewConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103f5d3a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113034d68);
  *(undefined8 *)(param_1 + _DAT_113034d68) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 103f5d408; end: 103f5d6f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5d408(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte bVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_70;
  long lStack_68;
  
  lVar14 = ((undefined8 *)(unaff_x20 + _DAT_113034d10))[1];
  if (lVar14 == 0) {
    FUN_103f5dffc(0x65536f54646e6573,0xef64496e6f697373);
    _swift_willThrow();
  }
  else {
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_113034d10);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034d18);
    if (*(char *)(puVar1 + 1) == '\x01') {
      uStack_88 = 0;
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 0;
    }
    else {
      uStack_88 = *puVar1;
    }
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034d20);
    if (*(char *)(puVar1 + 1) == '\x01') {
      uStack_90 = 0;
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 0;
    }
    else {
      uStack_90 = *puVar1;
    }
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034d28);
    if (*(char *)(puVar1 + 1) == '\x01') {
      uStack_98 = 0;
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 0;
    }
    else {
      uStack_98 = *puVar1;
    }
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034d30);
    if (*(char *)(puVar1 + 1) == '\x01') {
      uStack_a0 = 0;
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 0;
    }
    else {
      uStack_a0 = *puVar1;
    }
    bVar10 = *(byte *)(unaff_x20 + _DAT_113034d60);
    if (bVar10 == 2) {
      *(undefined1 *)(unaff_x20 + _DAT_113034d60) = 0;
    }
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113034d38);
    uVar6 = ((undefined8 *)(unaff_x20 + _DAT_113034d38))[1];
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113034d40);
    uVar7 = ((undefined8 *)(unaff_x20 + _DAT_113034d40))[1];
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113034d48);
    uVar8 = ((undefined8 *)(unaff_x20 + _DAT_113034d48))[1];
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113034d50);
    uVar9 = ((undefined8 *)(unaff_x20 + _DAT_113034d50))[1];
    uVar16 = *(undefined8 *)(unaff_x20 + _DAT_113034d58);
    uVar15 = *(undefined8 *)(unaff_x20 + _DAT_113034d68);
    FUN_103f5e1a4();
    lVar12 = param_1;
    _objc_allocWithZone();
    puVar1 = (undefined8 *)(lVar12 + _DAT_113034cb0);
    *puVar1 = uVar13;
    puVar1[1] = lVar14;
    *(undefined8 *)(lVar12 + _DAT_113034cb8) = uStack_88;
    *(undefined8 *)(lVar12 + _DAT_113034cc0) = uStack_90;
    *(undefined8 *)(lVar12 + _DAT_113034cc8) = uStack_98;
    *(undefined8 *)(lVar12 + _DAT_113034cd0) = uStack_a0;
    puVar1 = (undefined8 *)(lVar12 + _DAT_113034cd8);
    *puVar1 = uVar2;
    puVar1[1] = uVar6;
    puVar1 = (undefined8 *)(lVar12 + _DAT_113034ce0);
    *puVar1 = uVar3;
    puVar1[1] = uVar7;
    puVar1 = (undefined8 *)(lVar12 + _DAT_113034ce8);
    *puVar1 = uVar4;
    puVar1[1] = uVar8;
    puVar1 = (undefined8 *)(lVar12 + _DAT_113034cf0);
    *puVar1 = uVar5;
    puVar1[1] = uVar9;
    *(undefined8 *)(lVar12 + _DAT_113034cf8) = uVar16;
    *(byte *)(lVar12 + _DAT_113034d00) = bVar10 & 1;
    *(undefined8 *)(lVar12 + _DAT_113034d08) = uVar15;
    puVar11 = PTR_s_init_1125d9248;
    lStack_70 = lVar12;
    lStack_68 = param_1;
    _swift_bridgeObjectRetain(lVar14);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(uVar9);
    _swift_bridgeObjectRetain(uVar16);
    _objc_retain(uVar15);
    _objc_msgSendSuper2(&lStack_70,puVar11);
  }
  return;
}



/* Entry: 103f5d6f8; end: 103f5d763; -[SCSendToAttributionBuilder build] */

/* WARNING: Removing unreachable block (ram,0x000103f5d744) */

void FUN_103f5d6f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103f5d408();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103f5d764; end: 103f5d7f3; -[SCSendToAttributionBuilder safeBuildAndReturnError:] */

/* WARNING: Removing unreachable block (ram,0x000103f5d7a0) */
/* WARNING: Removing unreachable block (ram,0x000103f5d7d4) */
/* WARNING: Removing unreachable block (ram,0x000103f5d7a4) */

void FUN_103f5d764(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103f5d408();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103f5d7f4; end: 103f5d8f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5d7f4(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  _swift_getObjectType();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034d10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034d18);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034d20);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034d28);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034d30);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034d38);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034d40);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034d48);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034d50);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113034d58) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_113034d60) = 2;
  *(undefined8 *)(unaff_x20 + _DAT_113034d68) = 0;
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f5d8f4; end: 103f5d913; -[SCSendToAttributionBuilder init] */

void FUN_103f5d8f4(void)

{
  FUN_103f5d7f4();
  return;
}



/* Entry: 103f5d914; end: 103f5d917;  */

void FUN_103f5d914(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f5d918; end: 103f5d9b3; -[SCSendToAttributionBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5d918(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113034d10 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113034d38 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113034d40 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113034d48 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113034d50 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113034d58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113034d68));
  return;
}



/* Entry: 103f5d9b4; end: 103f5d9e7;  */

void FUN_103f5d9b4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f5d9e8; end: 103f5da83; -[SCSendToAttribution .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5d9e8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113034cb0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113034cd8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113034ce0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113034ce8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113034cf0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113034cf8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113034d08));
  return;
}



/* Entry: 103f5da84; end: 103f5dc3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5da84(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_a0 [16];
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _swift_getObjectType();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034cb0);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  uVar2 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_113034cb8) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_113034cc0) = uVar2;
  uVar2 = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_113034cc8) = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_113034cd0) = uVar2;
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uVar2 = param_1[6];
  uStack_58 = param_1[9];
  uStack_60 = param_1[8];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034cd8);
  puVar1[1] = param_1[7];
  *puVar1 = uVar2;
  uVar2 = param_1[8];
  uStack_68 = param_1[0xb];
  uStack_70 = param_1[10];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034ce0);
  puVar1[1] = param_1[9];
  *puVar1 = uVar2;
  uVar2 = param_1[10];
  uStack_78 = param_1[0xd];
  uStack_80 = param_1[0xc];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034ce8);
  puVar1[1] = param_1[0xb];
  *puVar1 = uVar2;
  uVar2 = param_1[0xc];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034cf0);
  puVar1[1] = param_1[0xd];
  *puVar1 = uVar2;
  uStack_88 = param_1[0xe];
  *(undefined8 *)(unaff_x20 + _DAT_113034cf8) = uStack_88;
  *(undefined1 *)(unaff_x20 + _DAT_113034d00) = *(undefined1 *)(param_1 + 0xf);
  uStack_90 = param_1[0x10];
  *(undefined8 *)(unaff_x20 + _DAT_113034d08) = uStack_90;
  func_0x000100402194(&uStack_40,auStack_a0);
  FUN_103f5e1e4(&uStack_50,auStack_a0,0x112d35ff8,&UNK_10d900cd0);
  FUN_103f5e1e4(&uStack_60,auStack_a0,0x112d35ff8,&UNK_10d900cd0);
  FUN_103f5e1e4(&uStack_70,auStack_a0,0x112d35ff8,&UNK_10d900cd0);
  FUN_103f5e1e4(&uStack_80,auStack_a0,0x112d35ff8,&UNK_10d900cd0);
  FUN_103f5e1e4(&uStack_88,auStack_a0,0x112d445a8,&UNK_10d990150);
  FUN_103f5e1e4(&uStack_90,auStack_a0,0x113034dc0,&UNK_10dcaebf8);
  _objc_msgSendSuper2(&stack0xffffffffffffff50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f5dc40; end: 103f5dc73;  */

undefined8 FUN_103f5dc40(undefined8 param_1)

{
  (*(code *)(undefined *)0x103f58578)();
  return param_1;
}



/* Entry: 103f5dc74; end: 103f5dda3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5dc74(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar7 = *(undefined8 *)(param_2 + _DAT_113034cb8);
  uVar8 = *(undefined8 *)(param_2 + _DAT_113034cc0);
  uVar5 = ((undefined8 *)(param_2 + _DAT_113034cb0))[1];
  uVar9 = *(undefined8 *)(param_2 + _DAT_113034cc8);
  uVar10 = *(undefined8 *)(param_2 + _DAT_113034cd0);
  puVar1 = (undefined8 *)(param_2 + _DAT_113034cd8);
  puVar2 = (undefined8 *)(param_2 + _DAT_113034ce0);
  puVar3 = (undefined8 *)(param_2 + _DAT_113034ce8);
  uVar11 = *(undefined8 *)(param_2 + _DAT_113034cf8);
  puVar4 = (undefined8 *)(param_2 + _DAT_113034cf0);
  uVar6 = *(undefined1 *)(param_2 + _DAT_113034d00);
  uVar12 = *(undefined8 *)(param_2 + _DAT_113034d08);
  *param_1 = *(undefined8 *)(param_2 + _DAT_113034cb0);
  param_1[1] = uVar5;
  param_1[2] = uVar7;
  param_1[3] = uVar8;
  param_1[4] = uVar9;
  param_1[5] = uVar10;
  uVar7 = puVar1[1];
  uVar9 = *puVar1;
  uVar8 = puVar2[1];
  uVar13 = puVar2[1];
  uVar10 = *puVar2;
  param_1[7] = puVar1[1];
  param_1[6] = uVar9;
  param_1[9] = uVar13;
  param_1[8] = uVar10;
  uVar9 = puVar3[1];
  uVar13 = *puVar3;
  uVar10 = puVar4[1];
  uVar15 = puVar4[1];
  uVar14 = *puVar4;
  param_1[0xb] = puVar3[1];
  param_1[10] = uVar13;
  param_1[0xd] = uVar15;
  param_1[0xc] = uVar14;
  param_1[0xe] = uVar11;
  *(undefined1 *)(param_1 + 0xf) = uVar6;
  param_1[0x10] = uVar12;
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar12);
  return;
}



/* Entry: 103f5dda4; end: 103f5dffb;  */

/* WARNING: Possible PIC construction at 0x000103f5ddd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103f5dddc) */

void FUN_103f5dda4(long param_1)

{
  if (param_1 == 0) {
    func_0x000103f5e1c4();
    _objc_allocWithZone();
  }
  else {
    func_0x000103f5e1c4();
    _objc_allocWithZone();
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 103f5dffc; end: 103f5e1a3;  */

undefined * FUN_103f5dffc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_90 [80];
  
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar6 = auStack_90;
  _swift_initStackObject();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  *(undefined1 **)(lVar2 + 0x28) = puVar6;
  __ss11_StringGutsV4growyySiF(0x33);
  __sSS6appendyySSF(0xd000000000000027,0x800000010f11f8b0);
  __sSS6appendyySSF(param_1,param_2);
  __sSS6appendyySSF(0x736e752073692027,0xea00000000007465);
  puVar1 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0xe000000000000000;
  lVar4 = lVar2;
  func_0x000100214a84(lVar2);
  _swift_setDeallocating(lVar2);
  func_0x000100f15a0c((undefined8 *)(lVar2 + 0x20));
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar3 = 0xd000000000000023;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f11f880);
  lVar2 = lVar4;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (lVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(lVar4);
  func_0x000107c466bc(puVar5);
  _objc_release(uVar3);
  _objc_release(lVar2);
  return puVar5;
}



/* Entry: 103f5e1a4; end: 103f5e1e3;  */

void FUN_103f5e1a4(void)

{
  _objc_opt_self(&PTR_PTR_11296a698);
  return;
}



/* Entry: 103f5e1e4; end: 103f5e22b;  */

undefined8 FUN_103f5e1e4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103f5e22c; end: 103f5e22f;  */

void FUN_103f5e22c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f5e230; end: 103f5e27b; -[SCSendToEducationPopupConfiguration title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5e230(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113034dc8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113034dc8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f5e27c; end: 103f5e287; -[SCSendToEducationPopupConfiguration subtitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5e27c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113034dd0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113034dd0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f5e288; end: 103f5e297; -[SCSendToEducationPopupConfiguration leadingIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5e288(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113034dd8));
  return;
}



/* Entry: 103f5e298; end: 103f5e2a7; -[SCSendToEducationPopupConfiguration trailingIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5e298(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113034de0));
  return;
}



/* Entry: 103f5e2a8; end: 103f5e2c7; -[SCSendToEducationPopupConfiguration delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5e2a8(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113034de8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f5e2c8; end: 103f5e2d3; -[SCSendToEducationPopupConfiguration trailingIconTapAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5e2c8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113034df0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113034df0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f5e2d4; end: 103f5e2e3; -[SCSendToEducationPopupConfiguration trailingIconColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5e2d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113034df8));
  return;
}



/* Entry: 103f5e2e4; end: 103f5e2ef; -[SCSendToEducationPopupConfiguration cellTapAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5e2e4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113034e00))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113034e00);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f5e2f0; end: 103f5e347;  */

void FUN_103f5e2f0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f5e348; end: 103f5e357; -[SCSendToEducationPopupConfiguration shouldShrinkCellHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f5e348(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113034e08);
}



/* Entry: 103f5e358; end: 103f5e597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5e358(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034dc8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034dd0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113034dd8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113034de0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113034de8) = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034df0);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_113034df8) = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034e00);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  *(undefined1 *)(unaff_x20 + _DAT_113034e08) = param_13;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f5e598; end: 103f5e6bb; -[SCSendToEducationPopupConfiguration initWithTitle:subtitle:leadingIcon:trailingIcon:delegate:trailingIconTapAction:trailingIconColor:cellTapAction:shouldShrinkCellHeight:] */

void FUN_103f5e598(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,long param_10,undefined1 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_4 == 0) {
    uStack_80 = 0;
    uVar3 = 0;
    uVar2 = param_2;
  }
  else {
    uVar3 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar2 = uVar3;
    uStack_80 = param_4;
  }
  if (param_8 == 0) {
    param_8 = 0;
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_8);
    uVar1 = uVar2;
  }
  if (param_10 == 0) {
    uVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_5);
  _objc_retain(param_6);
  _swift_unknownObjectRetain(param_7);
  _objc_retain();
  func_0x000103f5e478(param_3,param_2,uStack_80,uVar3,param_5,param_6,param_7,param_8,uVar1,param_9,
                      param_10,uVar2,param_11);
  return;
}



/* Entry: 103f5e6bc; end: 103f5e6fb;  */

undefined8 FUN_103f5e6bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_103f5e858(param_1);
  FUN_103f5eb5c(param_1);
  return uVar1;
}



/* Entry: 103f5e6fc; end: 103f5e6ff; -[SCSendToEducationPopupConfiguration copyWithZone:] */

void FUN_103f5e6fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f5e700; end: 103f5e733; -[SCSendToEducationPopupConfiguration description] */

void FUN_103f5e700(void)

{
  undefined1 auStack_80 [112];
  
  FUN_103f5eb90(auStack_80);
  FUN_103f5eb5c(auStack_80);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f5e734; end: 103f5e7af; -[SCSendToEducationPopupConfiguration init] */

void FUN_103f5e734(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCSendToScope/SCSendToEducationPopupConfigurationWrapper.swift",0x3e,2,0x54,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f5e77c);
  (*pcVar1)();
}



/* Entry: 103f5e7b0; end: 103f5e857; -[SCSendToEducationPopupConfiguration .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5e7b0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113034dc8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113034dd0 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113034dd8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113034de0));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113034de8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113034df0 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113034df8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113034e00 + 8))
  ;
  return;
}



/* Entry: 103f5e858; end: 103f5eb5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5e858(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  long alStack_f0 [2];
  long alStack_e0 [2];
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  plVar3 = alStack_f0;
  _swift_getObjectType();
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113034dc8);
  puVar2[1] = uStack_58;
  *puVar2 = uStack_60;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113034dd0);
  puVar2[1] = uStack_68;
  *puVar2 = uStack_70;
  uStack_78 = param_1[4];
  uVar6 = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_113034dd8) = uStack_78;
  cVar1 = *(char *)(param_1 + 6);
  if (cVar1 == '\x01') {
    lVar5 = 0;
    FUN_103f5f68c();
    lVar4 = lVar5;
    _objc_allocWithZone();
    *(undefined1 *)(lVar4 + _DAT_113034ea0) = 1;
    *(undefined8 *)(lVar4 + _DAT_113034ea8) = 0;
    *(undefined8 *)(lVar4 + _DAT_113034eb0) = uVar6;
    func_0x000100402194(&uStack_60,&uStack_90);
    FUN_103f5ed40(&uStack_70,&uStack_90,0x112d35ff8,&UNK_10d900cd0);
    FUN_103f5ed40(&uStack_78,&uStack_90,0x113034e38,&UNK_10dcaec30);
    func_0x000103f58dec(uVar6,1);
    plVar3 = alStack_e0;
    alStack_e0[0] = lVar4;
  }
  else {
    if (cVar1 == -1) {
      func_0x000100402194(&uStack_60,&uStack_90);
      FUN_103f5ed40(&uStack_70,&uStack_90,0x112d35ff8,&UNK_10d900cd0);
      FUN_103f5ed40(&uStack_78,&uStack_90,0x113034e38,&UNK_10dcaec30);
      plVar3 = (long *)0x0;
      goto LAB_103f5ea50;
    }
    lVar5 = 0;
    FUN_103f5f68c();
    lVar4 = lVar5;
    _objc_allocWithZone();
    *(undefined1 *)(lVar4 + _DAT_113034ea0) = 0;
    *(undefined8 *)(lVar4 + _DAT_113034ea8) = uVar6;
    *(undefined8 *)(lVar4 + _DAT_113034eb0) = 0;
    func_0x000100402194(&uStack_60,&uStack_90);
    FUN_103f5ed40(&uStack_70,&uStack_90,0x112d35ff8,&UNK_10d900cd0);
    FUN_103f5ed40(&uStack_78,&uStack_90,0x113034e38,&UNK_10dcaec30);
    func_0x000103f58dec(uVar6,cVar1);
    alStack_f0[0] = lVar4;
  }
  plVar3[1] = lVar5;
  _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
LAB_103f5ea50:
  *(long **)(unaff_x20 + _DAT_113034de0) = plVar3;
  uStack_80 = param_1[7];
  *(undefined8 *)(unaff_x20 + _DAT_113034de8) = uStack_80;
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113034df0);
  puVar2[1] = uStack_88;
  *puVar2 = uStack_90;
  uStack_98 = param_1[10];
  *(undefined8 *)(unaff_x20 + _DAT_113034df8) = uStack_98;
  uVar6 = param_1[0xb];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113034e00);
  puVar2[1] = param_1[0xc];
  *puVar2 = uVar6;
  uStack_a8 = param_1[0xc];
  uStack_b0 = param_1[0xb];
  *(undefined1 *)(unaff_x20 + _DAT_113034e08) = *(undefined1 *)(param_1 + 0xd);
  FUN_103f5ed40(&uStack_80,auStack_c0,0x113034e40,&UNK_10dcaec38);
  FUN_103f5ed40(&uStack_90,auStack_c0,0x112d35ff8,&UNK_10d900cd0);
  FUN_103f5ed40(&uStack_98,auStack_c0,0x112ff3538,&UNK_10dc5f260);
  FUN_103f5ed40(&uStack_b0,auStack_c0,0x112d35ff8,&UNK_10d900cd0);
  _objc_msgSendSuper2(&stack0xffffffffffffff30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f5eb5c; end: 103f5eb8f;  */

undefined8 FUN_103f5eb5c(undefined8 param_1)

{
  (*(code *)(undefined *)0x103f58e2c)();
  return param_1;
}



/* Entry: 103f5eb90; end: 103f5ed1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5eb90(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  undefined8 uVar14;
  
  uVar9 = *(undefined8 *)(param_2 + _DAT_113034dc8);
  uVar3 = ((undefined8 *)(param_2 + _DAT_113034dc8))[1];
  puVar1 = (undefined8 *)(param_2 + _DAT_113034dd0);
  uVar7 = puVar1[1];
  uVar14 = puVar1[1];
  uVar10 = *puVar1;
  uVar8 = *(undefined8 *)(param_2 + _DAT_113034dd8);
  lVar6 = *(long *)(param_2 + _DAT_113034de0);
  if (lVar6 == 0) {
    lVar6 = 0;
    uVar13 = 0xff;
  }
  else {
    if (*(char *)(lVar6 + _DAT_113034ea0) == '\x01') {
      lVar6 = *(long *)(lVar6 + _DAT_113034eb0);
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x103f5ed1c);
        (*pcVar5)();
      }
      uVar13 = 1;
    }
    else {
      lVar6 = *(long *)(lVar6 + _DAT_113034ea8);
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x103f5ed20);
        (*pcVar5)();
      }
      uVar13 = 0;
    }
    _objc_retain(lVar6);
  }
  uVar11 = *(undefined8 *)(param_2 + _DAT_113034de8);
  puVar1 = (undefined8 *)(param_2 + _DAT_113034df0);
  uVar12 = *(undefined8 *)(param_2 + _DAT_113034df8);
  puVar2 = (undefined8 *)(param_2 + _DAT_113034e00);
  uVar4 = *(undefined1 *)(param_2 + _DAT_113034e08);
  *param_1 = uVar9;
  param_1[1] = uVar3;
  param_1[3] = uVar14;
  param_1[2] = uVar10;
  param_1[4] = uVar8;
  param_1[5] = lVar6;
  *(undefined1 *)(param_1 + 6) = uVar13;
  param_1[7] = uVar11;
  uVar9 = puVar1[1];
  uVar10 = *puVar1;
  param_1[9] = puVar1[1];
  param_1[8] = uVar10;
  param_1[10] = uVar12;
  uVar10 = puVar2[1];
  uVar14 = *puVar2;
  param_1[0xc] = puVar2[1];
  param_1[0xb] = uVar14;
  *(undefined1 *)(param_1 + 0xd) = uVar4;
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar7);
  _objc_retain(uVar8);
  _swift_unknownObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar9);
  _objc_retain(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar10);
  return;
}



/* Entry: 103f5ed20; end: 103f5ed3f;  */

void FUN_103f5ed20(void)

{
  _objc_opt_self(&PTR_PTR_11296a8c8);
  return;
}



/* Entry: 103f5ed40; end: 103f5ee27;  */

undefined8 FUN_103f5ed40(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103f5ee28; end: 103f5ee4b;  */

void FUN_103f5ee28(undefined8 param_1,long *param_2)

{
  *(bool *)param_1 = *param_2 != 0;
  return;
}



/* Entry: 103f5ee4c; end: 103f5ee97; -[SCSendToSearchQueryParameters description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5ee4c(long param_1)

{
  code *pcVar1;
  
  if (*(long *)(param_1 + _DAT_113034e48 + 8) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103f5ee94);
    (*pcVar1)();
  }
  if (*(char *)(param_1 + _DAT_113034e50) != '\x02') {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f5ee98);
  (*pcVar1)();
}



/* Entry: 103f5ee98; end: 103f5eedf; -[SCSendToSearchQueryParameters init] */

void FUN_103f5ee98(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCSendToScope/SCSendToSearchQueryParametersWrapper.swift",0x38,2,0x2c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f5eee0);
  (*pcVar1)();
}



/* Entry: 103f5eee0; end: 103f5eee3; -[SCSendToSearchQueryParameters copyWithZone:] */

void FUN_103f5eee0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f5eee4; end: 103f5ef9b; +[SCSendToSearchQueryParameters listWithListId:isContextual:title:subtext:] */

void FUN_103f5eee4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar2 = param_2;
  if (param_5 == 0) {
    param_5 = 0;
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
    uVar1 = uVar2;
  }
  if (param_6 == 0) {
    param_6 = 0;
    uVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
  }
  FUN_103f5f13c(param_3,param_2,param_4,param_5,uVar1,param_6,uVar2);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103f5ef9c; end: 103f5f0b3; -[SCSendToSearchQueryParameters matchList:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5ef9c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar5 = ((undefined8 *)(param_1 + _DAT_113034e48))[1];
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x103f5f0b0);
    (*pcVar4)();
  }
  bVar3 = *(byte *)(param_1 + _DAT_113034e50);
  if (bVar3 != 2) {
    uVar8 = *(undefined8 *)(param_1 + _DAT_113034e48);
    uVar6 = *(undefined8 *)(param_1 + _DAT_113034e58);
    lVar1 = ((undefined8 *)(param_1 + _DAT_113034e58))[1];
    uVar7 = *(undefined8 *)(param_1 + _DAT_113034e60);
    lVar2 = ((undefined8 *)(param_1 + _DAT_113034e60))[1];
    _objc_retain();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8,lVar5);
    if (lVar1 == 0) {
      uVar6 = 0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,lVar1);
    }
    if (lVar2 == 0) {
      uVar7 = 0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar7,lVar2);
    }
    (**(code **)(param_3 + 0x10))(param_3,uVar8,bVar3 & 1,uVar6,uVar7);
    _objc_release(param_1);
    _objc_release(uVar8);
    _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x103f5f0b4);
  (*pcVar4)();
}



/* Entry: 103f5f0b4; end: 103f5f0e7;  */

void FUN_103f5f0b4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f5f0e8; end: 103f5f13b; -[SCSendToSearchQueryParameters .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5f0e8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113034e48 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113034e58 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113034e60 + 8))
  ;
  return;
}



/* Entry: 103f5f13c; end: 103f5f207;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5f13c(long param_1,long param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_60;
  long lStack_58;
  
  lVar4 = param_1;
  FUN_103f5f208();
  lVar5 = lVar4;
  _objc_allocWithZone();
  plVar1 = (long *)(lVar5 + _DAT_113034e48);
  *plVar1 = param_1;
  plVar1[1] = param_2;
  *(undefined1 *)(lVar5 + _DAT_113034e50) = param_3;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113034e58);
  *puVar2 = param_4;
  puVar2[1] = param_5;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113034e60);
  *puVar2 = param_6;
  puVar2[1] = param_7;
  puVar3 = PTR_s_init_1125d9248;
  lStack_60 = lVar5;
  lStack_58 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_5);
  _swift_bridgeObjectRetain(param_7);
  _objc_msgSendSuper2(&lStack_60,puVar3);
  return;
}



/* Entry: 103f5f208; end: 103f5f227;  */

void FUN_103f5f208(void)

{
  _objc_opt_self(&PTR_PTR_11296a9d0);
  return;
}



/* Entry: 103f5f228; end: 103f5f317;  */

uint FUN_103f5f228(uint *param_1,int param_2)

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



/* Entry: 103f5f318; end: 103f5f357;  */

void FUN_103f5f318(void)

{
  undefined *puVar1;
  
  if (puRam0000000113034e98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaec84;
  _swift_getWitnessTable(&UNK_10dcaec84,&UNK_110725220);
  puRam0000000113034e98 = puVar1;
  return;
}



/* Entry: 103f5f358; end: 103f5f403;  */

void FUN_103f5f358(void)

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



/* Entry: 103f5f404; end: 103f5f443;  */

void FUN_103f5f404(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 103f5f444; end: 103f5f49b; -[SCSendToEducationCellIcon description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5f444(long param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_113034ea0) == '\x01') {
    if (*(long *)(param_1 + _DAT_113034eb0) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f5f46c);
      (*pcVar1)();
    }
  }
  else if (*(long *)(param_1 + _DAT_113034ea8) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103f5f49c);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f5f49c; end: 103f5f4e3; -[SCSendToEducationCellIcon init] */

void FUN_103f5f49c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCSendToScope/SCSendToEducationCellIconWrapper.swift",0x34,2,0x30,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f5f4e4);
  (*pcVar1)();
}



/* Entry: 103f5f4e4; end: 103f5f4e7; -[SCSendToEducationCellIcon copyWithZone:] */

void FUN_103f5f4e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}


