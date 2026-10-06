/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100d71e20; end: 100d71e23;  */

void FUN_100d71e20(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100d71e24; end: 100d72083;  */

byte * FUN_100d71e24(byte *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  
  if ((int)param_2 == 0xfe) {
    uVar1 = 0;
    if (1 < *param_1) {
      uVar1 = (*param_1 + 0x7ffffffe & 0x7fffffff) + 1;
    }
    return (byte *)(ulong)uVar1;
  }
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  param_1 = param_1 + *(int *)(param_3 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x000100d71eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(param_1,param_2,lVar2);
  return param_1;
}



/* Entry: 100d72084; end: 100d72087;  */

undefined8 * FUN_100d72084(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Entry: 100d72088; end: 100d7226f;  */

ulong FUN_100d72088(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  
  lVar2 = 0x11302d5c0;
  func_0x0001000285a8(0x11302d5c0,&UNK_10dca9900);
  lVar3 = *(long *)(lVar2 + -8);
  iVar6 = (int)param_2;
  if (iVar6 == *(int *)(lVar3 + 0x54)) {
    lVar5 = (long)*(int *)(param_3 + 0x14);
  }
  else {
    lVar2 = 0x11302d5c8;
    func_0x0001000285a8(0x11302d5c8,&UNK_10dca9908);
    lVar3 = *(long *)(lVar2 + -8);
    if (iVar6 == *(int *)(lVar3 + 0x54)) {
      lVar5 = (long)*(int *)(param_3 + 0x1c);
    }
    else {
      lVar2 = 0x11302d5d0;
      func_0x0001000285a8(0x11302d5d0,&UNK_10dca9910);
      lVar3 = *(long *)(lVar2 + -8);
      if (iVar6 != *(int *)(lVar3 + 0x54)) {
        uVar4 = *(ulong *)(param_1 + *(int *)(param_3 + 0x34) + 8);
        if (0xfffffffe < uVar4) {
          uVar4 = 0xffffffff;
        }
        uVar1 = (int)uVar4 - 1;
        if (0x7fffffff < uVar1) {
          uVar1 = 0xffffffff;
        }
        return (ulong)(uVar1 + 1);
      }
      lVar5 = (long)*(int *)(param_3 + 0x20);
    }
  }
  uVar4 = param_1 + lVar5;
                    /* WARNING: Could not recover jumptable at 0x000100d72148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x30))(uVar4,param_2,lVar2);
  return uVar4;
}



/* Entry: 100d72270; end: 100d72287;  */

bool FUN_100d72270(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100d72288; end: 100d722af;  */

void FUN_100d72288(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c606a0(param_1,*unaff_x20);
  return;
}



/* Entry: 100d722b0; end: 100d722df;  */

void FUN_100d722b0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyys6UInt64VF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100d722e0; end: 100d7232b;  */

void FUN_100d722e0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if ((int)uVar1 + -1 < 0) {
    func_0x000107c61174(uVar2);
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 100d7232c; end: 100d7234f;  */

void FUN_100d7232c(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100d72350; end: 100d72353;  */

void FUN_100d72350(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100d72354; end: 100d72377;  */

void FUN_100d72354(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100d72378; end: 100d72393;  */

void FUN_100d72378(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100d72394; end: 100d723bb;  */

void FUN_100d72394(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100d723bc; end: 100d725d7;  */

void FUN_100d723bc(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100d725d8; end: 100d72637;  */

void FUN_100d725d8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0x10,0x100d725d8);
  (*pcVar1)();
}



/* Entry: 100d72638; end: 100d726cf;  */

void FUN_100d72638(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100d726d0; end: 100d726db;  */

void FUN_100d726d0(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR__swift_release_11034f4c0;
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  (*(code *)puVar1)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100d726dc; end: 100d726ff;  */

void FUN_100d726dc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100d72700; end: 100d7270f;  */

void FUN_100d72700(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 100d72710; end: 100d72757;  */

void FUN_100d72710(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100d72758; end: 100d72763;  */

void FUN_100d72758(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR__swift_unknownObjectRelease_11034f530;
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  (*(code *)puVar1)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100d72764; end: 100d72797;  */

void FUN_100d72764(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100d72798; end: 100d727b3;  */

void FUN_100d72798(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100d727b4; end: 100dafcc3;  */

ulong * FUN_100d727b4(long param_1,undefined8 *param_2,long param_3,undefined2 *param_4,
                     undefined8 *param_5,undefined8 *param_6,int param_7,uint param_8)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  
  if (param_8 == 0xf) {
    puVar2 = (undefined8 *)((long)param_5 + -2 + param_3);
    uVar10 = *(undefined4 *)((long)param_5 + 6);
    uVar9 = *puVar2;
    uVar11 = *(undefined4 *)(puVar2 + 1);
    *(undefined8 *)(param_1 + -0x22) = *(undefined8 *)((long)param_5 + -2);
    *(undefined4 *)(param_1 + -0x1a) = uVar10;
    *(undefined8 *)(param_1 + -0x12) = uVar9;
    *(undefined4 *)(param_1 + -10) = uVar11;
    puVar6 = (ulong *)(param_1 + -2);
    do {
      puVar7 = puVar6;
      uVar8 = *param_4;
      param_4 = param_4 + 1;
      uVar12 = *(undefined2 *)(param_2 + 1);
      uVar9 = *param_2;
      param_2 = (undefined8 *)((long)param_2 + param_3);
      iVar4 = param_7 + -1;
      *(undefined2 *)puVar7 = uVar8;
      *(undefined8 *)((long)puVar7 + 2) = uVar9;
      *(undefined2 *)((long)puVar7 + 10) = uVar12;
      puVar6 = puVar7 + 2;
      bVar1 = 0 < param_7;
      param_7 = iVar4;
    } while (iVar4 != 0 && bVar1);
    puVar3 = (ulong *)((long)param_6 + -2 + param_3);
    uVar11 = *(undefined4 *)((long)param_6 + 6);
    uVar14 = *puVar3;
    uVar5 = puVar3[1];
    *puVar6 = *(ulong *)((long)param_6 + -2);
    *(undefined4 *)(puVar7 + 3) = uVar11;
    puVar7[4] = uVar14;
    *(int *)(puVar7 + 5) = (int)uVar5;
    return puVar6;
  }
  puVar6 = (ulong *)(param_1 + -0x44);
  if ((param_8 & 4) == 0) {
    *(undefined2 *)puVar6 = 0x8000;
    *(undefined2 *)(param_1 + -0x42) = 0x8000;
    *(undefined2 *)(param_1 + -0x40) = 0x8000;
    *(undefined2 *)(param_1 + -0x3e) = 0x8000;
    *(undefined2 *)(param_1 + -0x3c) = 0x8000;
    *(undefined2 *)(param_1 + -0x3a) = 0x8000;
    *(undefined2 *)(param_1 + -0x38) = 0x8000;
    *(undefined2 *)(param_1 + -0x36) = 0x8000;
    *(undefined2 *)(param_1 + -0x34) = 0x8000;
    *(undefined2 *)(param_1 + -0x32) = 0x8000;
    *(undefined2 *)(param_1 + -0x30) = 0x8000;
    *(undefined2 *)(param_1 + -0x2e) = 0x8000;
    *(undefined2 *)(param_1 + -0x2c) = 0x8000;
    *(undefined2 *)(param_1 + -0x2a) = 0x8000;
    *(undefined2 *)(param_1 + -0x28) = 0x8000;
    *(undefined2 *)(param_1 + -0x26) = 0x8000;
    *(undefined2 *)(param_1 + -0x24) = 0x8000;
    *(undefined2 *)(param_1 + -0x22) = 0x8000;
    *(undefined2 *)(param_1 + -0x20) = 0x8000;
    *(undefined2 *)(param_1 + -0x1e) = 0x8000;
    *(undefined2 *)(param_1 + -0x1c) = 0x8000;
    *(undefined2 *)(param_1 + -0x1a) = 0x8000;
    *(undefined2 *)(param_1 + -0x18) = 0x8000;
    *(undefined2 *)(param_1 + -0x16) = 0x8000;
    *(undefined2 *)(param_1 + -0x14) = 0x8000;
    *(undefined2 *)(param_1 + -0x12) = 0x8000;
    *(undefined2 *)(param_1 + -0x10) = 0x8000;
    *(undefined2 *)(param_1 + -0xe) = 0x8000;
    *(undefined2 *)(param_1 + -0xc) = 0x8000;
    *(undefined2 *)(param_1 + -10) = 0x8000;
    *(undefined2 *)(param_1 + -8) = 0x8000;
    *(undefined2 *)(param_1 + -6) = 0x8000;
  }
  else {
    puVar2 = (undefined8 *)((long)param_5 + param_3);
    if ((param_8 & 1) == 0) {
      if ((param_8 & 2) == 0) {
        uVar9 = *param_5;
        uVar13 = *puVar2;
        *(undefined4 *)puVar6 = 0x80008000;
        *(ulong *)(param_1 + -0x38) =
             (ulong)CONCAT16((char)((ulong)uVar9 >> 0x38),
                             (uint6)CONCAT14((char)((ulong)uVar9 >> 0x30),
                                             (uint)CONCAT12((char)((ulong)uVar9 >> 0x28),
                                                            (ushort)(byte)((ulong)uVar9 >> 0x20))));
        *(ulong *)(param_1 + -0x40) =
             (ulong)CONCAT16((char)((ulong)uVar9 >> 0x18),
                             (uint6)CONCAT14((char)((ulong)uVar9 >> 0x10),
                                             (uint)(CONCAT12((char)((ulong)uVar9 >> 8),(short)uVar9)
                                                   & 0xff00ff)));
        *(undefined4 *)(param_1 + -0x30) = 0x80008000;
        *(undefined4 *)(param_1 + -0x24) = 0x80008000;
        *(ulong *)(param_1 + -0x18) =
             (ulong)CONCAT16((char)((ulong)uVar13 >> 0x38),
                             (uint6)CONCAT14((char)((ulong)uVar13 >> 0x30),
                                             (uint)CONCAT12((char)((ulong)uVar13 >> 0x28),
                                                            (ushort)(byte)((ulong)uVar13 >> 0x20))))
        ;
        *(ulong *)(param_1 + -0x20) =
             (ulong)CONCAT16((char)((ulong)uVar13 >> 0x18),
                             (uint6)CONCAT14((char)((ulong)uVar13 >> 0x10),
                                             (uint)(CONCAT12((char)((ulong)uVar13 >> 8),
                                                             (short)uVar13) & 0xff00ff)));
        *(undefined4 *)(param_1 + -0x10) = 0x80008000;
      }
      else {
        uVar9 = *param_5;
        uVar8 = *(undefined2 *)(param_5 + 1);
        uVar13 = *puVar2;
        uVar12 = *(undefined2 *)(puVar2 + 1);
        *(undefined4 *)puVar6 = 0x80008000;
        *(ulong *)(param_1 + -0x38) =
             (ulong)CONCAT16((char)((ulong)uVar9 >> 0x38),
                             (uint6)CONCAT14((char)((ulong)uVar9 >> 0x30),
                                             (uint)CONCAT12((char)((ulong)uVar9 >> 0x28),
                                                            (ushort)(byte)((ulong)uVar9 >> 0x20))));
        *(ulong *)(param_1 + -0x40) =
             (ulong)CONCAT16((char)((ulong)uVar9 >> 0x18),
                             (uint6)CONCAT14((char)((ulong)uVar9 >> 0x10),
                                             (uint)(CONCAT12((char)((ulong)uVar9 >> 8),(short)uVar9)
                                                   & 0xff00ff)));
        *(uint *)(param_1 + -0x30) = CONCAT12((char)((ushort)uVar8 >> 8),uVar8) & 0xffff00ff;
        *(undefined4 *)(param_1 + -0x24) = 0x80008000;
        *(ulong *)(param_1 + -0x18) =
             (ulong)CONCAT16((char)((ulong)uVar13 >> 0x38),
                             (uint6)CONCAT14((char)((ulong)uVar13 >> 0x30),
                                             (uint)CONCAT12((char)((ulong)uVar13 >> 0x28),
                                                            (ushort)(byte)((ulong)uVar13 >> 0x20))))
        ;
        *(ulong *)(param_1 + -0x20) =
             (ulong)CONCAT16((char)((ulong)uVar13 >> 0x18),
                             (uint6)CONCAT14((char)((ulong)uVar13 >> 0x10),
                                             (uint)(CONCAT12((char)((ulong)uVar13 >> 8),
                                                             (short)uVar13) & 0xff00ff)));
        *(uint *)(param_1 + -0x10) = (uint)(CONCAT12((char)((ushort)uVar12 >> 8),uVar12) & 0xff00ff)
        ;
      }
    }
    else if ((param_8 & 2) == 0) {
      uVar9 = *(undefined8 *)((long)param_5 + -2);
      uVar8 = *(undefined2 *)((long)param_5 + 6);
      uVar13 = *(undefined8 *)((long)puVar2 + -2);
      uVar12 = *(undefined2 *)((long)puVar2 + 6);
      *(ulong *)(param_1 + -0x3c) =
           (ulong)CONCAT16((char)((ulong)uVar9 >> 0x38),
                           (uint6)CONCAT14((char)((ulong)uVar9 >> 0x30),
                                           (uint)CONCAT12((char)((ulong)uVar9 >> 0x28),
                                                          (ushort)(byte)((ulong)uVar9 >> 0x20))));
      *puVar6 = (ulong)CONCAT16((char)((ulong)uVar9 >> 0x18),
                                (uint6)CONCAT14((char)((ulong)uVar9 >> 0x10),
                                                (uint)(CONCAT12((char)((ulong)uVar9 >> 8),
                                                                (short)uVar9) & 0xff00ff)));
      *(uint *)(param_1 + -0x34) = CONCAT12((char)((ushort)uVar8 >> 8),uVar8) & 0xffff00ff;
      *(undefined4 *)(param_1 + -0x30) = 0x80008000;
      *(ulong *)(param_1 + -0x1c) =
           (ulong)CONCAT16((char)((ulong)uVar13 >> 0x38),
                           (uint6)CONCAT14((char)((ulong)uVar13 >> 0x30),
                                           (uint)CONCAT12((char)((ulong)uVar13 >> 0x28),
                                                          (ushort)(byte)((ulong)uVar13 >> 0x20))));
      *(ulong *)(param_1 + -0x24) =
           (ulong)CONCAT16((char)((ulong)uVar13 >> 0x18),
                           (uint6)CONCAT14((char)((ulong)uVar13 >> 0x10),
                                           (uint)(CONCAT12((char)((ulong)uVar13 >> 8),(short)uVar13)
                                                 & 0xff00ff)));
      *(uint *)(param_1 + -0x14) = (uint)(CONCAT12((char)((ushort)uVar12 >> 8),uVar12) & 0xff00ff);
      *(undefined4 *)(param_1 + -0x10) = 0x80008000;
    }
    else {
      uVar9 = *(undefined8 *)((long)param_5 + -2);
      uVar10 = *(undefined4 *)((long)param_5 + 6);
      uVar13 = *(undefined8 *)((long)puVar2 + -2);
      uVar11 = *(undefined4 *)((long)puVar2 + 6);
      *(ulong *)(param_1 + -0x3c) =
           (ulong)CONCAT16((char)((ulong)uVar9 >> 0x38),
                           (uint6)CONCAT14((char)((ulong)uVar9 >> 0x30),
                                           (uint)CONCAT12((char)((ulong)uVar9 >> 0x28),
                                                          (ushort)(byte)((ulong)uVar9 >> 0x20))));
      *puVar6 = (ulong)CONCAT16((char)((ulong)uVar9 >> 0x18),
                                (uint6)CONCAT14((char)((ulong)uVar9 >> 0x10),
                                                (uint)(CONCAT12((char)((ulong)uVar9 >> 8),
                                                                (short)uVar9) & 0xff00ff)));
      *(ulong *)(param_1 + -0x34) =
           (ulong)CONCAT16((char)((uint)uVar10 >> 0x18),
                           (uint6)CONCAT14((char)((uint)uVar10 >> 0x10),
                                           (uint)CONCAT12((char)((uint)uVar10 >> 8),
                                                          (ushort)(byte)uVar10)));
      *(ulong *)(param_1 + -0x1c) =
           (ulong)CONCAT16((char)((ulong)uVar13 >> 0x38),
                           (uint6)CONCAT14((char)((ulong)uVar13 >> 0x30),
                                           (uint)CONCAT12((char)((ulong)uVar13 >> 0x28),
                                                          (ushort)(byte)((ulong)uVar13 >> 0x20))));
      *(ulong *)(param_1 + -0x24) =
           (ulong)CONCAT16((char)((ulong)uVar13 >> 0x18),
                           (uint6)CONCAT14((char)((ulong)uVar13 >> 0x10),
                                           (uint)(CONCAT12((char)((ulong)uVar13 >> 8),(short)uVar13)
                                                 & 0xff00ff)));
      *(ulong *)(param_1 + -0x14) =
           (ulong)CONCAT16((char)((uint)uVar11 >> 0x18),
                           (uint6)CONCAT14((char)((uint)uVar11 >> 0x10),
                                           (uint)CONCAT12((char)((uint)uVar11 >> 8),
                                                          (ushort)(byte)uVar11)));
    }
  }
  puVar6 = (ulong *)(param_1 + -4);
  if ((param_8 & 1) == 0) {
    if ((param_8 & 2) == 0) {
      do {
        uVar9 = *param_2;
        param_2 = (undefined8 *)((long)param_2 + param_3);
        iVar4 = param_7 + -1;
        *(uint *)puVar6 = 0x80008000;
        *(ulong *)((long)puVar6 + 0xc) =
             (ulong)CONCAT16((char)((ulong)uVar9 >> 0x38),
                             (uint6)CONCAT14((char)((ulong)uVar9 >> 0x30),
                                             (uint)CONCAT12((char)((ulong)uVar9 >> 0x28),
                                                            (ushort)(byte)((ulong)uVar9 >> 0x20))));
        *(ulong *)((long)puVar6 + 4) =
             (ulong)CONCAT16((char)((ulong)uVar9 >> 0x18),
                             (uint6)CONCAT14((char)((ulong)uVar9 >> 0x10),
                                             (uint)(CONCAT12((char)((ulong)uVar9 >> 8),(short)uVar9)
                                                   & 0xff00ff)));
        *(uint *)((long)puVar6 + 0x14) = 0x80008000;
        puVar6 = puVar6 + 4;
        bVar1 = 0 < param_7;
        param_7 = iVar4;
      } while (iVar4 != 0 && bVar1);
    }
    else {
      do {
        uVar8 = *(undefined2 *)(param_2 + 1);
        uVar9 = *param_2;
        param_2 = (undefined8 *)((long)param_2 + param_3);
        iVar4 = param_7 + -1;
        *(uint *)puVar6 = 0x80008000;
        *(ulong *)((long)puVar6 + 0xc) =
             (ulong)CONCAT16((char)((ulong)uVar9 >> 0x38),
                             (uint6)CONCAT14((char)((ulong)uVar9 >> 0x30),
                                             (uint)CONCAT12((char)((ulong)uVar9 >> 0x28),
                                                            (ushort)(byte)((ulong)uVar9 >> 0x20))));
        *(ulong *)((long)puVar6 + 4) =
             (ulong)CONCAT16((char)((ulong)uVar9 >> 0x18),
                             (uint6)CONCAT14((char)((ulong)uVar9 >> 0x10),
                                             (uint)(CONCAT12((char)((ulong)uVar9 >> 8),(short)uVar9)
                                                   & 0xff00ff)));
        *(uint *)((long)puVar6 + 0x14) = CONCAT12((char)((ushort)uVar8 >> 8),uVar8) & 0xffff00ff;
        puVar6 = puVar6 + 4;
        bVar1 = 0 < param_7;
        param_7 = iVar4;
      } while (iVar4 != 0 && bVar1);
    }
  }
  else if ((param_8 & 2) == 0) {
    do {
      uVar8 = *param_4;
      param_4 = param_4 + 1;
      uVar9 = *param_2;
      param_2 = (undefined8 *)((long)param_2 + param_3);
      iVar4 = param_7 + -1;
      *(uint *)puVar6 = CONCAT12((char)((ushort)uVar8 >> 8),uVar8) & 0xffff00ff;
      *(ulong *)((long)puVar6 + 0xc) =
           (ulong)CONCAT16((char)((ulong)uVar9 >> 0x38),
                           (uint6)CONCAT14((char)((ulong)uVar9 >> 0x30),
                                           (uint)CONCAT12((char)((ulong)uVar9 >> 0x28),
                                                          (ushort)(byte)((ulong)uVar9 >> 0x20))));
      *(ulong *)((long)puVar6 + 4) =
           (ulong)CONCAT16((char)((ulong)uVar9 >> 0x18),
                           (uint6)CONCAT14((char)((ulong)uVar9 >> 0x10),
                                           (uint)(CONCAT12((char)((ulong)uVar9 >> 8),(short)uVar9) &
                                                 0xff00ff)));
      *(uint *)((long)puVar6 + 0x14) = 0x80008000;
      puVar6 = puVar6 + 4;
      bVar1 = 0 < param_7;
      param_7 = iVar4;
    } while (iVar4 != 0 && bVar1);
  }
  else {
    do {
      uVar8 = *param_4;
      param_4 = param_4 + 1;
      uVar12 = *(undefined2 *)(param_2 + 1);
      uVar9 = *param_2;
      param_2 = (undefined8 *)((long)param_2 + param_3);
      iVar4 = param_7 + -1;
      *(uint *)puVar6 = CONCAT12((char)((ushort)uVar8 >> 8),uVar8) & 0xffff00ff;
      *(ulong *)((long)puVar6 + 0xc) =
           (ulong)CONCAT16((char)((ulong)uVar9 >> 0x38),
                           (uint6)CONCAT14((char)((ulong)uVar9 >> 0x30),
                                           (uint)CONCAT12((char)((ulong)uVar9 >> 0x28),
                                                          (ushort)(byte)((ulong)uVar9 >> 0x20))));
      *(ulong *)((long)puVar6 + 4) =
           (ulong)CONCAT16((char)((ulong)uVar9 >> 0x18),
                           (uint6)CONCAT14((char)((ulong)uVar9 >> 0x10),
                                           (uint)(CONCAT12((char)((ulong)uVar9 >> 8),(short)uVar9) &
                                                 0xff00ff)));
      *(uint *)((long)puVar6 + 0x14) = CONCAT12((char)((ushort)uVar12 >> 8),uVar12) & 0xffff00ff;
      puVar6 = puVar6 + 4;
      bVar1 = 0 < param_7;
      param_7 = iVar4;
    } while (iVar4 != 0 && bVar1);
  }
  if ((param_8 & 8) == 0) {
    *(undefined2 *)puVar6 = 0x8000;
    *(undefined2 *)((long)puVar6 + 2) = 0x8000;
    *(undefined2 *)((long)puVar6 + 4) = 0x8000;
    *(undefined2 *)((long)puVar6 + 6) = 0x8000;
    *(undefined2 *)(puVar6 + 1) = 0x8000;
    *(undefined2 *)((long)puVar6 + 10) = 0x8000;
    *(undefined2 *)((long)puVar6 + 0xc) = 0x8000;
    *(undefined2 *)((long)puVar6 + 0xe) = 0x8000;
    *(undefined2 *)(puVar6 + 2) = 0x8000;
    *(undefined2 *)((long)puVar6 + 0x12) = 0x8000;
    *(undefined2 *)((long)puVar6 + 0x14) = 0x8000;
    *(undefined2 *)((long)puVar6 + 0x16) = 0x8000;
    *(undefined2 *)(puVar6 + 3) = 0x8000;
    *(undefined2 *)((long)puVar6 + 0x1a) = 0x8000;
    *(undefined2 *)((long)puVar6 + 0x1c) = 0x8000;
    *(undefined2 *)((long)puVar6 + 0x1e) = 0x8000;
    *(undefined2 *)(puVar6 + 4) = 0x8000;
    *(undefined2 *)((long)puVar6 + 0x22) = 0x8000;
    *(undefined2 *)((long)puVar6 + 0x24) = 0x8000;
    *(undefined2 *)((long)puVar6 + 0x26) = 0x8000;
    *(undefined2 *)(puVar6 + 5) = 0x8000;
    *(undefined2 *)((long)puVar6 + 0x2a) = 0x8000;
    *(undefined2 *)((long)puVar6 + 0x2c) = 0x8000;
    *(undefined2 *)((long)puVar6 + 0x2e) = 0x8000;
    *(undefined2 *)(puVar6 + 6) = 0x8000;
    *(undefined2 *)((long)puVar6 + 0x32) = 0x8000;
    *(undefined2 *)((long)puVar6 + 0x34) = 0x8000;
    *(undefined2 *)((long)puVar6 + 0x36) = 0x8000;
    *(undefined2 *)(puVar6 + 7) = 0x8000;
    *(undefined2 *)((long)puVar6 + 0x3a) = 0x8000;
    *(undefined2 *)((long)puVar6 + 0x3c) = 0x8000;
    *(undefined2 *)((long)puVar6 + 0x3e) = 0x8000;
    return puVar6 + 8;
  }
  puVar2 = (undefined8 *)((long)param_6 + param_3);
  if ((param_8 & 1) == 0) {
    if ((param_8 & 2) == 0) {
      uVar9 = *param_6;
      uVar13 = *puVar2;
      *(uint *)puVar6 = 0x80008000;
      *(ulong *)((long)puVar6 + 0xc) =
           (ulong)CONCAT16((char)((ulong)uVar9 >> 0x38),
                           (uint6)CONCAT14((char)((ulong)uVar9 >> 0x30),
                                           (uint)CONCAT12((char)((ulong)uVar9 >> 0x28),
                                                          (ushort)(byte)((ulong)uVar9 >> 0x20))));
      *(ulong *)((long)puVar6 + 4) =
           (ulong)CONCAT16((char)((ulong)uVar9 >> 0x18),
                           (uint6)CONCAT14((char)((ulong)uVar9 >> 0x10),
                                           (uint)(CONCAT12((char)((ulong)uVar9 >> 8),(short)uVar9) &
                                                 0xff00ff)));
      *(uint *)((long)puVar6 + 0x14) = 0x80008000;
      *(uint *)(puVar6 + 4) = 0x80008000;
      *(ulong *)((long)puVar6 + 0x2c) =
           (ulong)CONCAT16((char)((ulong)uVar13 >> 0x38),
                           (uint6)CONCAT14((char)((ulong)uVar13 >> 0x30),
                                           (uint)CONCAT12((char)((ulong)uVar13 >> 0x28),
                                                          (ushort)(byte)((ulong)uVar13 >> 0x20))));
      *(ulong *)((long)puVar6 + 0x24) =
           (ulong)CONCAT16((char)((ulong)uVar13 >> 0x18),
                           (uint6)CONCAT14((char)((ulong)uVar13 >> 0x10),
                                           (uint)(CONCAT12((char)((ulong)uVar13 >> 8),(short)uVar13)
                                                 & 0xff00ff)));
      *(uint *)((long)puVar6 + 0x34) = 0x80008000;
      return puVar6 + 4;
    }
    uVar9 = *param_6;
    uVar8 = *(undefined2 *)(param_6 + 1);
    uVar13 = *puVar2;
    uVar12 = *(undefined2 *)(puVar2 + 1);
    *(uint *)puVar6 = 0x80008000;
    *(ulong *)((long)puVar6 + 0xc) =
         (ulong)CONCAT16((char)((ulong)uVar9 >> 0x38),
                         (uint6)CONCAT14((char)((ulong)uVar9 >> 0x30),
                                         (uint)CONCAT12((char)((ulong)uVar9 >> 0x28),
                                                        (ushort)(byte)((ulong)uVar9 >> 0x20))));
    *(ulong *)((long)puVar6 + 4) =
         (ulong)CONCAT16((char)((ulong)uVar9 >> 0x18),
                         (uint6)CONCAT14((char)((ulong)uVar9 >> 0x10),
                                         (uint)(CONCAT12((char)((ulong)uVar9 >> 8),(short)uVar9) &
                                               0xff00ff)));
    *(uint *)((long)puVar6 + 0x14) = CONCAT12((char)((ushort)uVar8 >> 8),uVar8) & 0xffff00ff;
    *(uint *)(puVar6 + 4) = 0x80008000;
    *(ulong *)((long)puVar6 + 0x2c) =
         (ulong)CONCAT16((char)((ulong)uVar13 >> 0x38),
                         (uint6)CONCAT14((char)((ulong)uVar13 >> 0x30),
                                         (uint)CONCAT12((char)((ulong)uVar13 >> 0x28),
                                                        (ushort)(byte)((ulong)uVar13 >> 0x20))));
    *(ulong *)((long)puVar6 + 0x24) =
         (ulong)CONCAT16((char)((ulong)uVar13 >> 0x18),
                         (uint6)CONCAT14((char)((ulong)uVar13 >> 0x10),
                                         (uint)(CONCAT12((char)((ulong)uVar13 >> 8),(short)uVar13) &
                                               0xff00ff)));
    *(uint *)((long)puVar6 + 0x34) = (uint)(CONCAT12((char)((ushort)uVar12 >> 8),uVar12) & 0xff00ff)
    ;
    return puVar6 + 4;
  }
  if ((param_8 & 2) == 0) {
    uVar9 = *(undefined8 *)((long)param_6 + -2);
    uVar8 = *(undefined2 *)((long)param_6 + 6);
    uVar13 = *(undefined8 *)((long)puVar2 + -2);
    uVar12 = *(undefined2 *)((long)puVar2 + 6);
    puVar6[1] = (ulong)CONCAT16((char)((ulong)uVar9 >> 0x38),
                                (uint6)CONCAT14((char)((ulong)uVar9 >> 0x30),
                                                (uint)CONCAT12((char)((ulong)uVar9 >> 0x28),
                                                               (ushort)(byte)((ulong)uVar9 >> 0x20))
                                               ));
    *puVar6 = (ulong)CONCAT16((char)((ulong)uVar9 >> 0x18),
                              (uint6)CONCAT14((char)((ulong)uVar9 >> 0x10),
                                              (uint)(CONCAT12((char)((ulong)uVar9 >> 8),(short)uVar9
                                                             ) & 0xff00ff)));
    *(uint *)(puVar6 + 2) = CONCAT12((char)((ushort)uVar8 >> 8),uVar8) & 0xffff00ff;
    *(uint *)((long)puVar6 + 0x14) = 0x80008000;
    puVar6[5] = (ulong)CONCAT16((char)((ulong)uVar13 >> 0x38),
                                (uint6)CONCAT14((char)((ulong)uVar13 >> 0x30),
                                                (uint)CONCAT12((char)((ulong)uVar13 >> 0x28),
                                                               (ushort)(byte)((ulong)uVar13 >> 0x20)
                                                              )));
    puVar6[4] = (ulong)CONCAT16((char)((ulong)uVar13 >> 0x18),
                                (uint6)CONCAT14((char)((ulong)uVar13 >> 0x10),
                                                (uint)(CONCAT12((char)((ulong)uVar13 >> 8),
                                                                (short)uVar13) & 0xff00ff)));
    *(uint *)(puVar6 + 6) = (uint)(CONCAT12((char)((ushort)uVar12 >> 8),uVar12) & 0xff00ff);
    *(uint *)((long)puVar6 + 0x34) = 0x80008000;
    return puVar6 + 4;
  }
  uVar9 = *(undefined8 *)((long)param_6 + -2);
  uVar10 = *(undefined4 *)((long)param_6 + 6);
  uVar13 = *(undefined8 *)((long)puVar2 + -2);
  uVar11 = *(undefined4 *)((long)puVar2 + 6);
  puVar6[1] = (ulong)CONCAT16((char)((ulong)uVar9 >> 0x38),
                              (uint6)CONCAT14((char)((ulong)uVar9 >> 0x30),
                                              (uint)CONCAT12((char)((ulong)uVar9 >> 0x28),
                                                             (ushort)(byte)((ulong)uVar9 >> 0x20))))
  ;
  *puVar6 = (ulong)CONCAT16((char)((ulong)uVar9 >> 0x18),
                            (uint6)CONCAT14((char)((ulong)uVar9 >> 0x10),
                                            (uint)(CONCAT12((char)((ulong)uVar9 >> 8),(short)uVar9)
                                                  & 0xff00ff)));
  puVar6[2] = (ulong)CONCAT16((char)((uint)uVar10 >> 0x18),
                              (uint6)CONCAT14((char)((uint)uVar10 >> 0x10),
                                              (uint)CONCAT12((char)((uint)uVar10 >> 8),
                                                             (ushort)(byte)uVar10)));
  puVar6[5] = (ulong)CONCAT16((char)((ulong)uVar13 >> 0x38),
                              (uint6)CONCAT14((char)((ulong)uVar13 >> 0x30),
                                              (uint)CONCAT12((char)((ulong)uVar13 >> 0x28),
                                                             (ushort)(byte)((ulong)uVar13 >> 0x20)))
                             );
  puVar6[4] = (ulong)CONCAT16((char)((ulong)uVar13 >> 0x18),
                              (uint6)CONCAT14((char)((ulong)uVar13 >> 0x10),
                                              (uint)(CONCAT12((char)((ulong)uVar13 >> 8),
                                                              (short)uVar13) & 0xff00ff)));
  puVar6[6] = (ulong)CONCAT16((char)((uint)uVar11 >> 0x18),
                              (uint6)CONCAT14((char)((uint)uVar11 >> 0x10),
                                              (uint)CONCAT12((char)((uint)uVar11 >> 8),
                                                             (ushort)(byte)uVar11)));
  return puVar6 + 4;
}



/* Entry: 100dafcc4; end: 100dafe87;  */

void FUN_100dafcc4(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_3 + 0x1c);
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
                    /* WARNING: Could not recover jumptable at 0x000100dafd14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(param_1 + iVar1,param_2,lVar2);
  return;
}



/* Entry: 100dafe88; end: 100dafeab;  */

void FUN_100dafe88(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dafeac; end: 100dafeb3;  */

void FUN_100dafeac(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dafeb4; end: 100daff13;  */

undefined1 * FUN_100dafeb4(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 100daff14; end: 100daff37;  */

void FUN_100daff14(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100daff38; end: 100daff3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100daff38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302f3a8);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  *param_1 = puVar4;
  return;
}



/* Entry: 100daff40; end: 100daff6b;  */

undefined8 * FUN_100daff40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 100daff6c; end: 100daff6f;  */

undefined8 * FUN_100daff6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 100daff70; end: 100daff93;  */

void FUN_100daff70(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100daff94; end: 100daff9f;  */

void FUN_100daff94(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 100daffa0; end: 100db0017;  */

undefined8 * FUN_100daffa0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100db0018; end: 100db003b;  */

void FUN_100db0018(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db003c; end: 100db0147;  */

ulong FUN_100db003c(ulong *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar2 = *param_1;
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)((int)uVar2 + 1);
  }
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar2 = (long)param_1 + (long)*(int *)(param_3 + 0x44);
                    /* WARNING: Could not recover jumptable at 0x000100db00c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(uVar2,param_2,lVar1);
  return uVar2;
}



/* Entry: 100db0148; end: 100db0157;  */

undefined1 FUN_100db0148(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 100db0158; end: 100db016f;  */

bool FUN_100db0158(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100db0170; end: 100db0197;  */

void FUN_100db0170(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100db0198; end: 100db01b3;  */

void FUN_100db0198(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100db01b4; end: 100db01db;  */

void FUN_100db01b4(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100db01dc; end: 100db0323;  */

void FUN_100db01dc(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100db0324; end: 100db0327;  */

undefined8 * FUN_100db0324(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Entry: 100db0328; end: 100db032f;  */

void FUN_100db0328(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db0330; end: 100db035b;  */

undefined8 * FUN_100db0330(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 100db035c; end: 100db0373;  */

bool FUN_100db035c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100db0374; end: 100db039b;  */

void FUN_100db0374(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100db039c; end: 100db03af;  */

void FUN_100db039c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100db03b0; end: 100db04bb;  */

ulong FUN_100db03b0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar2 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)((int)uVar2 + 1);
  }
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar2 = param_1 + *(int *)(param_3 + 0x1c);
                    /* WARNING: Could not recover jumptable at 0x000100db0438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(uVar2,param_2,lVar1);
  return uVar2;
}



/* Entry: 100db04bc; end: 100db04bf;  */

undefined8 * FUN_100db04bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x000103f707c4(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 100db04c0; end: 100db04c3;  */

void FUN_100db04c0(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100db04c4; end: 100db04e7;  */

void FUN_100db04c4(void)

{
  func_0x000107c60690(0);
  return;
}



/* Entry: 100db04e8; end: 100db0513;  */

void FUN_100db04e8(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100db0514; end: 100db055b;  */

void FUN_100db0514(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db055c; end: 100db055f;  */

undefined8 * FUN_100db055c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Entry: 100db0560; end: 100db058f;  */

undefined8 * FUN_100db0560(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 100db0590; end: 100db0653;  */

void FUN_100db0590(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db0654; end: 100db0677;  */

void FUN_100db0654(void)

{
  func_0x000103f8b9f0(0);
  return;
}



/* Entry: 100db0678; end: 100db06eb;  */

void FUN_100db0678(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db06ec; end: 100db06fb;  */

void FUN_100db06ec(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db06fc; end: 100db071f;  */

void FUN_100db06fc(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db0720; end: 100db072f;  */

void FUN_100db0720(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db0730; end: 100db075b;  */

undefined8 * FUN_100db0730(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c615f0();
  return param_1;
}



/* Entry: 100db075c; end: 100db075f;  */

undefined8 * FUN_100db075c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x000103f96650(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 100db0760; end: 100db07a3;  */

undefined8 * FUN_100db0760(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x000103f97018(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return param_1;
}



/* Entry: 100db07a4; end: 100db07a7;  */

undefined8 * FUN_100db07a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x000103f97200(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 100db07a8; end: 100db0813;  */

long FUN_100db07a8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100db0814; end: 100db0827;  */

void FUN_100db0814(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db0828; end: 100db084b;  */

void FUN_100db0828(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db084c; end: 100db087b;  */

undefined8 * FUN_100db084c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[2];
  _objc_retain();
  _swift_errorRetain(uVar1);
  param_1[2] = uVar1;
  return param_1;
}



/* Entry: 100db087c; end: 100db08b7;  */

void FUN_100db087c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (0xfffffffe < uVar1) {
    func_0x000107c614b0(uVar1);
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 100db08b8; end: 100db093f;  */

undefined8 * FUN_100db08b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x000101a69884(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return param_1;
}



/* Entry: 100db0940; end: 100db094b;  */

undefined8 * FUN_100db0940(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)((long)param_2 + 0x14);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 100db094c; end: 100db097f;  */

undefined8 * FUN_100db094c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 100db0980; end: 100db0983;  */

undefined8 * FUN_100db0980(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 100db0984; end: 100db09a7;  */

void FUN_100db0984(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db09a8; end: 100db09bb;  */

void FUN_100db09a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db09bc; end: 100db09d7;  */

void FUN_100db09bc(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100db09d8; end: 100db09ef;  */

bool FUN_100db09d8(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100db09f0; end: 100db0a17;  */

void FUN_100db09f0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100db0a18; end: 100db0a1b;  */

void FUN_100db0a18(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100db0a1c; end: 100db0a47;  */

void FUN_100db0a1c(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000100db0a54();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 100db0a48; end: 100db0a8b;  */

void FUN_100db0a48(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 100db0a8c; end: 100db0ab3;  */

void FUN_100db0a8c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100db0ab4; end: 100db0b3f;  */

void FUN_100db0ab4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100db0b40; end: 100db0b7b;  */

void FUN_100db0b40(undefined8 param_1)

{
  ulong uVar1;
  ulong *unaff_x20;
  
  uVar1 = (ulong)(*unaff_x20 != 0);
  if ((char)unaff_x20[1] != '\x01') {
    uVar1 = *unaff_x20;
  }
  func_0x000107c60690(param_1,uVar1);
  return;
}



/* Entry: 100db0b7c; end: 100db0c0f;  */

void FUN_100db0b7c(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar3 = *unaff_x20;
  uVar2 = unaff_x20[1];
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  uVar1 = (ulong)(uVar3 != 0);
  if ((char)uVar2 != '\x01') {
    uVar1 = uVar3;
  }
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100db0c10; end: 100db0c53;  */

undefined8 * FUN_100db0c10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return param_1;
}



/* Entry: 100db0c54; end: 100db0d43;  */

ulong FUN_100db0c54(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar2 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)((int)uVar2 + 1);
  }
  lVar1 = 0;
  func_0x000107c5eec8();
  uVar2 = param_1 + *(int *)(param_3 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000100db0ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(uVar2,param_2,lVar1);
  return uVar2;
}



/* Entry: 100db0d44; end: 100db0d5f;  */

undefined1 * FUN_100db0d44(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Entry: 100db0d60; end: 100db0d87;  */

void FUN_100db0d60(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100db0d88; end: 100db0daf;  */

void FUN_100db0d88(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100db0db0; end: 100db0dd7;  */

void FUN_100db0db0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100db0dd8; end: 100db0de7;  */

void FUN_100db0dd8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100db0de8; end: 100db0e13;  */

long FUN_100db0de8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100db0e14; end: 100db0e27;  */

void FUN_100db0e14(long param_1)

{
  *(ulong *)(param_1 + 0x30) = *(ulong *)(param_1 + 0x30) & 0xcfffffffffffffff;
  return;
}



/* Entry: 100db0e28; end: 100db0e5b;  */

void FUN_100db0e28(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db0e5c; end: 100db0e5f;  */

void FUN_100db0e5c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db0e60; end: 100db0ea3;  */

uint FUN_100db0e60(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  func_0x000103ffe9dc(&uStack_70,&uStack_40);
  return uVar1 & 1;
}


