/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100952890; end: 100952a53; +[SCStoriesFriendMergedStoryPlaybackSequence immutableObjectParse:bufferSize:] */

void FUN_100952890(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint *puVar10;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126d9e48;
  func_0x000107c610f4(PTR_PTR_1126d9e48);
  lVar6 = (long)*piVar1;
  uVar3 = *(ushort *)((long)piVar1 - lVar6);
  if (uVar3 < 5) {
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)piVar1 - lVar6))[2];
    if (uVar7 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar10 = (uint *)((long)piVar1 + uVar7);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar10 + (ulong)*puVar10 + 4);
      func_0x000107c61180();
      lVar6 = (long)*piVar1;
      uVar3 = *(ushort *)((long)piVar1 - lVar6);
    }
    if ((8 < uVar3) && (uVar7 = (ulong)*(ushort *)((long)piVar1 + (8 - lVar6)), uVar7 != 0)) {
      puVar2 = (uint *)((long)piVar1 + uVar7);
      puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar2);
      func_0x000107c61180();
      puVar10 = puVar2 + 1;
      if (*puVar2 != 0) {
        do {
          lVar6 = (long)puVar10 + (ulong)*puVar10;
          FUN_100952a54(lVar6);
          func_0x000107c61180();
          func_0x000107c3d798(puVar5,param_2,lVar6);
          func_0x000107c61170(lVar6);
          puVar10 = puVar10 + 1;
        } while (puVar10 != puVar2 + 1 + *puVar2);
      }
      puVar9 = puVar5;
      func_0x000107c40794(puVar5);
      func_0x000107c61170(puVar5);
      goto LAB_1009529d0;
    }
  }
  puVar9 = (undefined *)0x0;
LAB_1009529d0:
  func_0x000107c49250(puVar4,param_2,puVar8,puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100952a54; end: 100953dc3;  */

void FUN_100952a54(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ushort uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ushort *puVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_118;
  undefined *puStack_a8;
  undefined *puStack_70;
  
  puVar3 = (undefined *)0x0;
  if (param_1 == (int *)0x0) goto LAB_100953894;
  puVar3 = PTR_PTR_1126cc4e0;
  func_0x000107c610f4();
  lVar21 = (long)*param_1;
  uVar19 = *(ushort *)((long)param_1 - lVar21);
  if (uVar19 < 5) {
    puVar34 = (undefined *)0x0;
LAB_100952b34:
    puVar36 = (undefined *)0x0;
  }
  else {
    if (((ushort *)((long)param_1 - lVar21))[2] == 0) {
      puVar34 = (undefined *)0x0;
    }
    else {
      puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200();
      func_0x000107c61180();
      lVar21 = (long)*param_1;
      uVar19 = *(ushort *)((long)param_1 - lVar21);
    }
    if ((uVar19 < 7) || (*(short *)((long)param_1 + (6 - lVar21)) == 0)) goto LAB_100952b34;
    puVar36 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200();
    func_0x000107c61180();
  }
  piVar4 = param_1;
  FUN_100953dc4();
  piVar5 = param_1;
  FUN_10095c9f4(param_1);
  piVar6 = param_1;
  func_0x00010095ca40(param_1);
  piVar7 = param_1;
  func_0x00010095ca8c(param_1);
  piVar8 = param_1;
  func_0x00010095cad8(param_1);
  piVar9 = param_1;
  func_0x00010095cb24(param_1);
  FUN_10095cb70(piVar4,piVar5,piVar6,piVar7,piVar8,piVar9);
  func_0x000107c61180();
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0xd) ||
     (uVar20 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[6], uVar20 == 0)) {
    lVar21 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_1 + uVar20);
    lVar21 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_10095ce5c();
  func_0x000107c61180();
  lVar22 = (long)*param_1;
  uVar19 = *(ushort *)((long)param_1 - lVar22);
  if (uVar19 < 0xf) {
    puStack_a8 = (undefined *)0x0;
LAB_100952ca0:
    puVar37 = (undefined *)0x0;
LAB_100952ca4:
    puVar35 = (undefined *)0x0;
LAB_100952ca8:
    lVar22 = 0;
  }
  else {
    if (((ushort *)((long)param_1 - lVar22))[7] == 0) {
      puStack_a8 = (undefined *)0x0;
    }
    else {
      puStack_a8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200();
      func_0x000107c61180();
      lVar22 = (long)*param_1;
      uVar19 = *(ushort *)((long)param_1 - lVar22);
    }
    lVar22 = -lVar22;
    if (uVar19 < 0x11) goto LAB_100952ca0;
    if (*(short *)((long)param_1 + lVar22 + 0x10) == 0) {
      puVar37 = (undefined *)0x0;
    }
    else {
      puVar37 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200();
      func_0x000107c61180();
      lVar22 = -(long)*param_1;
      uVar19 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar19 < 0x13) goto LAB_100952ca4;
    uVar20 = (ulong)*(ushort *)((long)param_1 + lVar22 + 0x12);
    if (uVar20 == 0) {
      puVar35 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar20);
      uVar2 = *puVar1;
      puVar35 = PTR_PTR_1126cf3b8;
      func_0x000107c610f4();
      piVar5 = (int *)((long)puVar1 + (ulong)uVar2);
      puVar25 = (ushort *)((long)piVar5 - (long)*piVar5);
      uVar19 = *puVar25;
      if (uVar19 < 5) {
        uVar41 = 0;
LAB_100953aa8:
        uVar42 = 0;
        uVar43 = 0;
      }
      else {
        uVar42 = 0;
        uVar41 = 0;
        if ((ulong)puVar25[2] != 0) {
          uVar41 = *(undefined8 *)((long)piVar5 + (ulong)puVar25[2]);
        }
        if ((uVar19 < 7) || (uVar19 < 9)) goto LAB_100953aa8;
        uVar43 = 0;
        if ((ulong)puVar25[4] != 0) {
          uVar42 = *(undefined8 *)((long)piVar5 + (ulong)puVar25[4]);
        }
        if ((10 < uVar19) && ((ulong)puVar25[5] != 0)) {
          uVar43 = *(undefined8 *)((long)piVar5 + (ulong)puVar25[5]);
        }
      }
      func_0x000107c46710(uVar41,uVar42,uVar43);
      lVar22 = -(long)*param_1;
      uVar19 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if ((uVar19 < 0x15) || (uVar20 = (ulong)*(ushort *)((long)param_1 + lVar22 + 0x14), uVar20 == 0)
       ) goto LAB_100952ca8;
    puVar1 = (uint *)((long)param_1 + uVar20);
    lVar22 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_10095d2b0();
  func_0x000107c61180();
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x17) ||
     (uVar20 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0xb], uVar20 == 0)) {
    lVar10 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_1 + uVar20);
    lVar10 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_10094d854();
  func_0x000107c61180();
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x19) ||
     (uVar20 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0xc], uVar20 == 0)) {
    lVar11 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_1 + uVar20);
    lVar11 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_10095ddb8();
  func_0x000107c61180();
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x1b) ||
     (uVar20 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0xd], uVar20 == 0)) {
    lVar12 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_1 + uVar20);
    lVar12 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_10095e0f0();
  func_0x000107c61180();
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x1d) ||
     (uVar20 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0xe], uVar20 == 0)) {
    lVar13 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_1 + uVar20);
    lVar13 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_10095e3c0();
  func_0x000107c61180();
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x1f) ||
     (uVar20 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0xf], uVar20 == 0)) {
    lVar14 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_1 + uVar20);
    lVar14 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_10095ecfc();
  func_0x000107c61180();
  lVar23 = (long)*param_1;
  uVar19 = *(ushort *)((long)param_1 - lVar23);
  if (uVar19 < 0x21) {
    puVar30 = (undefined *)0x0;
LAB_100952f50:
    puVar33 = (undefined *)0x0;
LAB_100952f54:
    puVar40 = (undefined *)0x0;
LAB_100952f58:
    lVar23 = 0;
  }
  else {
    uVar20 = (ulong)((ushort *)((long)param_1 - lVar23))[0x10];
    if (uVar20 == 0) {
      puVar30 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar20);
      uVar2 = *puVar1;
      puVar30 = PTR_PTR_1126cf3e8;
      func_0x000107c610f4();
      piVar5 = (int *)((long)puVar1 + (ulong)uVar2);
      puVar25 = (ushort *)((long)piVar5 - (long)*piVar5);
      if ((*puVar25 < 5) || (puVar25[2] == 0)) {
        puVar33 = (undefined *)0x0;
      }
      else {
        puVar33 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x000107c610f4(PTR__OBJC_CLASS___NSData_1126ae778);
        func_0x000107c45ae4();
      }
      func_0x000107c4825c();
      func_0x000107c61170(puVar33);
      lVar23 = (long)*param_1;
      uVar19 = *(ushort *)((long)param_1 - lVar23);
    }
    lVar23 = -lVar23;
    if (uVar19 < 0x23) goto LAB_100952f50;
    uVar20 = (ulong)*(ushort *)((long)param_1 + lVar23 + 0x22);
    if (uVar20 == 0) {
      puVar33 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar20);
      uVar2 = *puVar1;
      puVar33 = PTR_PTR_1126d9f38;
      func_0x000107c610f4();
      piVar5 = (int *)((long)puVar1 + (ulong)uVar2);
      puVar25 = (ushort *)((long)piVar5 - (long)*piVar5);
      if ((*puVar25 < 5) || (puVar25[2] == 0)) {
        puVar40 = (undefined *)0x0;
      }
      else {
        puVar40 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x000107c610f4(PTR__OBJC_CLASS___NSData_1126ae778);
        func_0x000107c45ae4();
      }
      func_0x000107c4825c();
      func_0x000107c61170(puVar40);
      lVar23 = -(long)*param_1;
      uVar19 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar19 < 0x25) goto LAB_100952f54;
    uVar20 = (ulong)*(ushort *)((long)param_1 + lVar23 + 0x24);
    if (uVar20 == 0) {
      puVar40 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar20);
      uVar2 = *puVar1;
      puVar40 = PTR_PTR_1126cf3f0;
      func_0x000107c610f4();
      piVar5 = (int *)((long)puVar1 + (ulong)uVar2);
      puVar25 = (ushort *)((long)piVar5 - (long)*piVar5);
      if ((*puVar25 < 5) || (puVar25[2] == 0)) {
        puVar32 = (undefined *)0x0;
      }
      else {
        puVar32 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x000107c610f4(PTR__OBJC_CLASS___NSData_1126ae778);
        func_0x000107c45ae4();
      }
      func_0x000107c4825c();
      func_0x000107c61170(puVar32);
      lVar23 = -(long)*param_1;
      uVar19 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if ((uVar19 < 0x27) || (uVar20 = (ulong)*(ushort *)((long)param_1 + lVar23 + 0x26), uVar20 == 0)
       ) goto LAB_100952f58;
    puVar1 = (uint *)((long)param_1 + uVar20);
    lVar23 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_10095ee68();
  func_0x000107c61180();
  lVar24 = (long)*param_1;
  uVar19 = *(ushort *)((long)param_1 - lVar24);
  if (uVar19 < 0x29) {
    puVar32 = (undefined *)0x0;
LAB_100953058:
    puVar39 = (undefined *)0x0;
LAB_10095305c:
    lVar24 = 0;
  }
  else {
    if (((ushort *)((long)param_1 - lVar24))[0x14] == 0) {
      puVar32 = (undefined *)0x0;
    }
    else {
      puVar32 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200();
      func_0x000107c61180();
      lVar24 = (long)*param_1;
      uVar19 = *(ushort *)((long)param_1 - lVar24);
    }
    lVar24 = -lVar24;
    if (uVar19 < 0x2b) goto LAB_100953058;
    uVar20 = (ulong)*(ushort *)((long)param_1 + lVar24 + 0x2a);
    if (uVar20 == 0) {
      puVar39 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar20);
      uVar2 = *puVar1;
      puVar39 = PTR_PTR_1126cf3f8;
      func_0x000107c610f4();
      piVar5 = (int *)((long)puVar1 + (ulong)uVar2);
      puVar25 = (ushort *)((long)piVar5 - (long)*piVar5);
      if ((*puVar25 < 5) || (puVar25[2] == 0)) {
        puVar31 = (undefined *)0x0;
      }
      else {
        puVar31 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
        func_0x000107c61180();
      }
      func_0x000107c488d0();
      func_0x000107c61170(puVar31);
      lVar24 = -(long)*param_1;
      uVar19 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if ((uVar19 < 0x2d) || (uVar20 = (ulong)*(ushort *)((long)param_1 + lVar24 + 0x2c), uVar20 == 0)
       ) goto LAB_10095305c;
    puVar1 = (uint *)((long)param_1 + uVar20);
    lVar24 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_10095f084();
  func_0x000107c61180();
  uVar19 = *(ushort *)((long)param_1 - (long)*param_1);
  if ((((uVar19 < 0x2f) || (uVar19 < 0x31)) || (uVar19 < 0x33)) ||
     (uVar20 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0x19], uVar20 == 0)) {
    lVar15 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_1 + uVar20);
    lVar15 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_10095f180();
  func_0x000107c61180();
  lVar26 = (long)*param_1;
  uVar19 = *(ushort *)((long)param_1 - lVar26);
  if (uVar19 < 0x35) {
    puStack_118 = (undefined *)0x0;
LAB_100953330:
    lVar26 = 0;
  }
  else {
    if (((ushort *)((long)param_1 - lVar26))[0x1a] == 0) {
      puStack_118 = (undefined *)0x0;
    }
    else {
      puStack_118 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x000107c610f4();
      func_0x000107c45ae4();
      lVar26 = (long)*param_1;
      uVar19 = *(ushort *)((long)param_1 - lVar26);
    }
    if ((uVar19 < 0x37) ||
       (uVar20 = (ulong)*(ushort *)((long)param_1 + (0x36 - lVar26)), uVar20 == 0))
    goto LAB_100953330;
    puVar1 = (uint *)((long)param_1 + uVar20);
    lVar26 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_10095f298();
  func_0x000107c61180();
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x39) ||
     (uVar20 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0x1c], uVar20 == 0)) {
    lVar16 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_1 + uVar20);
    lVar16 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_10095f3cc();
  func_0x000107c61180();
  lVar27 = (long)*param_1;
  uVar19 = *(ushort *)((long)param_1 - lVar27);
  if (uVar19 < 0x3b) {
    puStack_70 = (undefined *)0x0;
LAB_100953410:
    lVar27 = 0;
  }
  else {
    if (((ushort *)((long)param_1 - lVar27))[0x1d] == 0) {
      puStack_70 = (undefined *)0x0;
    }
    else {
      puStack_70 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200();
      func_0x000107c61180();
      lVar27 = (long)*param_1;
      uVar19 = *(ushort *)((long)param_1 - lVar27);
    }
    if ((uVar19 < 0x3d) ||
       (uVar20 = (ulong)*(ushort *)((long)param_1 + (0x3c - lVar27)), uVar20 == 0))
    goto LAB_100953410;
    puVar1 = (uint *)((long)param_1 + uVar20);
    lVar27 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_10095f5d0();
  func_0x000107c61180();
  lVar28 = (long)*param_1;
  uVar19 = *(ushort *)((long)param_1 - lVar28);
  if ((uVar19 < 0x3f) || (uVar19 < 0x41)) {
    puVar31 = (undefined *)0x0;
LAB_1009534b8:
    puStack_150 = (undefined *)0x0;
LAB_1009534bc:
    puStack_158 = (undefined *)0x0;
LAB_1009534c0:
    lVar28 = 0;
  }
  else {
    if (((ushort *)((long)param_1 - lVar28))[0x20] == 0) {
      puVar31 = (undefined *)0x0;
    }
    else {
      puVar31 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x000107c610f4();
      func_0x000107c45ae4();
      lVar28 = (long)*param_1;
      uVar19 = *(ushort *)((long)param_1 - lVar28);
    }
    lVar28 = -lVar28;
    if ((uVar19 < 0x43) || (uVar19 < 0x45)) goto LAB_1009534b8;
    if (*(short *)((long)param_1 + lVar28 + 0x44) == 0) {
      puStack_150 = (undefined *)0x0;
    }
    else {
      puStack_150 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200();
      func_0x000107c61180();
      lVar28 = -(long)*param_1;
      uVar19 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar19 < 0x47) goto LAB_1009534bc;
    if (*(short *)((long)param_1 + lVar28 + 0x46) == 0) {
      puStack_158 = (undefined *)0x0;
    }
    else {
      puStack_158 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200();
      func_0x000107c61180();
      lVar28 = -(long)*param_1;
      uVar19 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if ((uVar19 < 0x4b) || (uVar20 = (ulong)*(ushort *)((long)param_1 + lVar28 + 0x4a), uVar20 == 0)
       ) goto LAB_1009534c0;
    puVar1 = (uint *)((long)param_1 + uVar20);
    lVar28 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_10095f6ec();
  func_0x000107c61180();
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x4d) ||
     (uVar20 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0x26], uVar20 == 0)) {
    lVar17 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_1 + uVar20);
    lVar17 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_10095f920();
  func_0x000107c61180();
  lVar29 = (long)*param_1;
  uVar19 = *(ushort *)((long)param_1 - lVar29);
  if ((uVar19 < 0x4f) || (uVar19 < 0x51)) {
    puVar38 = (undefined *)0x0;
    lVar29 = 0;
  }
  else {
    if (((ushort *)((long)param_1 - lVar29))[0x28] == 0) {
      puVar38 = (undefined *)0x0;
    }
    else {
      puVar38 = PTR_PTR_1126d9f70;
      func_0x000107c610f4();
      func_0x000107c46f3c();
      lVar29 = (long)*param_1;
      uVar19 = *(ushort *)((long)param_1 - lVar29);
    }
    if ((uVar19 < 0x53) ||
       (uVar20 = (ulong)*(ushort *)((long)param_1 + (0x52 - lVar29)), uVar20 == 0)) {
      lVar29 = 0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar20);
      lVar29 = (long)puVar1 + (ulong)*puVar1;
    }
  }
  FUN_10095fa60();
  func_0x000107c61180();
  uVar19 = *(ushort *)((long)param_1 - (long)*param_1);
  if ((((uVar19 < 0x55) || (uVar19 < 0x57)) || (uVar19 < 0x59)) ||
     (uVar20 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0x2c], uVar20 == 0)) {
    lVar18 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_1 + uVar20);
    lVar18 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_10095fc0c();
  func_0x000107c61180();
  func_0x000107c485e0();
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar29);
  func_0x000107c61170(puVar38);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar28);
  func_0x000107c61170(puStack_158);
  func_0x000107c61170(puStack_150);
  func_0x000107c61170(puVar31);
  func_0x000107c61170(lVar27);
  func_0x000107c61170(puStack_70);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar26);
  func_0x000107c61170(puStack_118);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(puVar39);
  func_0x000107c61170(puVar32);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(puVar40);
  func_0x000107c61170(puVar33);
  func_0x000107c61170(puVar30);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(puVar35);
  func_0x000107c61170(puVar37);
  func_0x000107c61170(puStack_a8);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(piVar4);
  func_0x000107c61170(puVar36);
  func_0x000107c61170(puVar34);
LAB_100953894:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100953dc4; end: 100953e0f;  */

long FUN_100953dc4(int *param_1)

{
  uint *puVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)((long)param_1 - (long)*param_1);
  if ((((8 < *puVar2) && ((ulong)puVar2[4] != 0)) &&
      (10 < *puVar2 && *(char *)((long)param_1 + (ulong)puVar2[4]) == '\x01')) &&
     ((ulong)puVar2[5] != 0)) {
    puVar1 = (uint *)((long)param_1 + (ulong)puVar2[5]);
    return (long)puVar1 + (ulong)*puVar1;
  }
  return 0;
}



/* Entry: 100953e10; end: 100953e97;  */

undefined8 FUN_100953e10(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  FUN_1000d224c(&uStack_38);
  uVar1 = 0xd00000000000002f;
  func_0x000107c5fadc(0xd00000000000002f,0x800000010f00ba30);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 100953e98; end: 100953ea3;  */

void FUN_100953e98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  FUN_100740458(0);
  func_0x000107c615f0(uVar2);
  func_0x000107c610f8(uVar1);
  func_0x000107c6157c();
  FUN_1007404f4();
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100953ea4; end: 100953ee7;  */

void FUN_100953ea4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100953ee8; end: 100953f0f;  */

undefined ** FUN_100953ee8(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100953f10; end: 100953f4f;  */

void FUN_100953f10(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100953ef4();
  FUN_100082720("LensPreviewConfiguringServiceProviderWrapperScopeInitializationPluginProvider",0x4d
                ,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100953f50; end: 100953f57;  */

void FUN_100953f50(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ce59e0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100953f58; end: 100953fdb;  */

void FUN_100953f58(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ce59e0,param_2,&UNK_101ce59e4,param_2,&UNK_101ce5a0c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100953fdc; end: 100954003;  */

undefined ** FUN_100953fdc(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100954004; end: 100954043;  */

void FUN_100954004(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100953fe8();
  FUN_100082720("LensRemoteApiAsyncTaskCompletionAnnouncerServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x60,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100954044; end: 10095404b;  */

void FUN_100954044(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ce5b18);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10095404c; end: 1009540cf;  */

void FUN_10095404c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ce5b18,param_2,&UNK_101ce5b1c,param_2,&UNK_101ce5b44,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009540d0; end: 1009540f7;  */

undefined ** FUN_1009540d0(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 1009540f8; end: 100954137;  */

void FUN_1009540f8(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009540dc();
  FUN_100082720("LensViewCountServiceProviderWrapperScopeInitializationPluginProvider",0x44,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100954138; end: 10095413f;  */

void FUN_100954138(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ce5e18);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100954140; end: 1009541c3;  */

void FUN_100954140(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ce5e18,param_2,&UNK_101ce5e1c,param_2,&UNK_101ce5e44,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009541c4; end: 1009541cf;  */

undefined ** FUN_1009541c4(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 1009541d0; end: 10095425b;  */

void FUN_1009541d0(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10095425c,param_1);
  return;
}



/* Entry: 10095425c; end: 100954263;  */

void FUN_10095425c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101ca5434);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100954264; end: 1009542e7;  */

void FUN_100954264(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101ca5434,param_2,FUN_1009542e8,param_2,&UNK_101ca5438,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009542e8; end: 10095430f;  */

void FUN_1009542e8(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 100954310; end: 10095431f;  */

void FUN_100954310(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_1002ae68c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  FUN_1009544f8(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  uVar7 = uStack_68;
  func_0x000107c61174();
  uVar8 = uVar7;
  FUN_100954518();
  *(undefined8 *)(lVar1 + 0x10) = uVar8;
  func_0x000107c6157c();
  func_0x00010095457c();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(uVar8);
  *param_1 = lVar1;
  return;
}



/* Entry: 100954320; end: 1009544f7;  */

void FUN_100954320(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_1002ae68c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  FUN_1009544f8(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar6;
  FUN_100954518();
  *(undefined8 *)(param_2 + 0x10) = uVar7;
  func_0x000107c6157c();
  func_0x00010095457c();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61574(uVar7);
  *param_1 = param_2;
  return;
}



/* Entry: 1009544f8; end: 100954517;  */

void FUN_1009544f8(void)

{
  func_0x000107c61168(&PTR_PTR_112e130e0);
  return;
}



/* Entry: 100954518; end: 10095478f;  */

void FUN_100954518(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined1 *)(unaff_x20 + 0x50) = 2;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_4;
  *(undefined8 *)(unaff_x20 + 0x18) = param_5;
  *(undefined8 *)(unaff_x20 + 0x20) = param_6;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61170(param_1);
  *(undefined **)(unaff_x20 + 0x38) = puVar1;
  return;
}



/* Entry: 100954790; end: 1009547db;  */

void FUN_100954790(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009547dc; end: 100954873;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1009547dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar3 = (uint)*(byte *)(unaff_x20 + 0x50);
  if (*(byte *)(unaff_x20 + 0x50) == 2) {
    uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x30) + _DAT_113092298);
    func_0x000107c615f0(uVar4);
    uVar1 = 0xd000000000000031;
    func_0x000107c5fadc(0xd000000000000031,0x800000010f008fb0);
    uVar2 = uVar4;
    func_0x000107c3ebd4();
    uVar3 = (uint)uVar2;
    func_0x000107c615e8(uVar4);
    func_0x000107c61170(uVar1);
    *(char *)(unaff_x20 + 0x50) = (char)uVar2;
  }
  return uVar3 & 1;
}



/* Entry: 100954874; end: 1009548ff;  */

void FUN_100954874(void)

{
  FUN_1001ca300();
  return;
}



/* Entry: 100954900; end: 100954a7b;  */

void FUN_100954900(undefined8 *param_1,byte param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,code *param_8)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  
  lVar1 = 0x112d453c8;
  FUN_1000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffa0 + -extraout_x8;
  if (param_2 < 2) {
    if (param_2 == 0) {
      func_0x000107c5fcf8(puVar3);
    }
    else {
      func_0x000107c5fd04(puVar3,0x15);
    }
  }
  else if (param_2 == 2) {
    func_0x000107c5fcfc(puVar3);
  }
  else {
    if (param_2 != 3) {
      lVar1 = 0;
      func_0x000107c5fd0c();
      uVar2 = 1;
      goto LAB_1009549f0;
    }
    func_0x000107c5fcf4(puVar3);
  }
  lVar1 = 0;
  func_0x000107c5fd0c();
  uVar2 = 0;
LAB_1009549f0:
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar3,uVar2,1);
  func_0x000107c613fc(param_6,0x38,7);
  *(undefined8 *)(param_6 + 0x10) = 0;
  *(undefined8 *)(param_6 + 0x18) = 0;
  *(undefined8 *)(param_6 + 0x20) = param_5;
  *(undefined8 *)(param_6 + 0x28) = param_3;
  *(undefined8 *)(param_6 + 0x30) = param_4;
  func_0x000107c6157c(param_4);
  uVar2 = 0;
  (*param_8)(0,0,puVar3,param_7,param_6,param_5);
  func_0x0001000abe54(puVar3);
  *param_1 = uVar2;
  return;
}



/* Entry: 100954a7c; end: 100954ab3;  */

void FUN_100954a7c(void)

{
  long unaff_x20;
  
  FUN_100954900(*(undefined1 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10),&UNK_1107acb40,
                &UNK_10dd3d018,FUN_100954abc);
  return;
}



/* Entry: 100954ab4; end: 100954abb;  */

void FUN_100954ab4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100954abc; end: 100954ccb;  */

void FUN_100954abc(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long extraout_x8;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 auStack_b0 [2];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  lVar1 = 0x112d453c8;
  FUN_1000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  puVar7 = auStack_a0 + lVar1;
  uStack_70 = param_4;
  uStack_68 = param_5;
  FUN_1000abe04(param_3,puVar7);
  lVar2 = 0;
  func_0x000107c5fd0c();
  lVar10 = *(long *)(lVar2 + -8);
  puVar3 = puVar7;
  (**(code **)(lVar10 + 0x30))(puVar7,1,lVar2);
  uVar9 = param_5;
  func_0x000107c6157c(param_5);
  if ((int)puVar3 == 1) {
    func_0x0001000abe54(puVar7);
    uVar9 = 0x1000;
  }
  else {
    func_0x000107c5fd08();
    (**(code **)(lVar10 + 8))(puVar7,lVar2);
    uVar9 = uVar9 & 0xff | 0x1000;
  }
  lVar2 = *(long *)(param_5 + 0x10);
  lVar10 = *(long *)(param_5 + 0x18);
  func_0x000107c615f0(lVar2);
  func_0x000107c61574(param_5);
  if (lVar2 == 0) {
    lVar8 = 0;
    lVar10 = 0;
  }
  else {
    lVar8 = lVar2;
    func_0x000107c614f0();
    func_0x000107c5fca8();
    func_0x000107c615e8(lVar2);
  }
  if (param_2 == 0) {
    puVar4 = &UNK_1107acb68;
    func_0x000107c613fc(&UNK_1107acb68,0x28,7);
    *(undefined8 *)(puVar4 + 0x10) = param_6;
    *(undefined8 *)(puVar4 + 0x18) = param_4;
    *(ulong *)(puVar4 + 0x20) = param_5;
    if (lVar10 == 0 && lVar8 == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      uStack_90 = 0;
      uStack_88 = 0;
      puVar6 = &uStack_90;
      lStack_80 = lVar8;
      lStack_78 = lVar10;
    }
    func_0x000107c615bc(uVar9,puVar6,param_6,&UNK_10dd3d028,puVar4);
  }
  else {
    func_0x000107c5fb28(param_1,param_2);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)((long)auStack_b0 + lVar1) = &UNK_1107acb90;
    *(undefined **)((long)auStack_b0 + lVar1 + 8) = &UNK_10dd3d030;
    func_0x000104890d1c(auStack_98,param_1 + 0x20,uVar5,uVar9,lVar8,lVar10,&uStack_70,param_6);
    func_0x000107c61574(param_5);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 100954ccc; end: 100954cef;  */

void FUN_100954ccc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100954cf0; end: 100954cf3;  */

void FUN_100954cf0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100954cf4; end: 100954d3f;  */

void FUN_100954cf4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100954d40; end: 100954d67;  */

undefined ** FUN_100954d40(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100954d68; end: 100954da7;  */

void FUN_100954d68(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100954d4c();
  FUN_100082720("LockedCameraCaptureStorageManagementServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x5b,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100954da8; end: 100954daf;  */

void FUN_100954da8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ca557c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100954db0; end: 100954e33;  */

void FUN_100954db0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ca557c,param_2,&UNK_101ca5580,param_2,&UNK_101ca55a8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100954e34; end: 100954e5b;  */

undefined ** FUN_100954e34(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100954e5c; end: 100954e9b;  */

void FUN_100954e5c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100954e40();
  FUN_100082720("MapAdsAdRequestProviderServiceProviderWrapperScopeInitializationPluginProvider",
                0x4e,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100954e9c; end: 100954ea3;  */

void FUN_100954e9c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101c96918);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100954ea4; end: 100954f27;  */

void FUN_100954ea4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101c96918,param_2,&UNK_101c9691c,param_2,&UNK_101c96944,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100954f28; end: 100954f4b;  */

undefined ** FUN_100954f28(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100954f4c; end: 100954fcb;  */

void FUN_100954f4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106bfe50;
  func_0x000107c613fc(&UNK_1106bfe50,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100954fcc,puVar1);
  return;
}



/* Entry: 100954fcc; end: 100954fd3;  */

void FUN_100954fcc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fcbe40,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fcbe40,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106bfee8;
  func_0x000107c613fc(&UNK_1106bfee8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103a1f698;
  FUN_10058fa64(&UNK_103a1f698,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 100954fd4; end: 1009550cb;  */

void FUN_100954fd4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fcbe40,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fcbe40,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106bfee8;
  func_0x000107c613fc(&UNK_1106bfee8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103a1f698;
  FUN_10058fa64(&UNK_103a1f698,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009550cc; end: 1009550ef;  */

void FUN_1009550cc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009550f0; end: 100955393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009550f0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_78;
  long lStack_70;
  
  lVar2 = param_2;
  FUN_1002d21f8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fcbe50) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112fcbe58) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112fcbe60) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112fcbe68) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112fcbe70) = param_6;
  *(undefined8 *)(lVar3 + _DAT_112fcbe78) = param_7;
  *(undefined8 *)(lVar3 + _DAT_112fcbe80) = param_8;
  *(undefined8 *)(lVar3 + _DAT_112fcbe88) = param_9;
  *(undefined8 *)(lVar3 + _DAT_112fcbe90) = param_10;
  *(undefined8 *)(lVar3 + _DAT_112fcbe98) = param_11;
  *(undefined8 *)(lVar3 + _DAT_112fcbea0) = param_12;
  *(undefined8 *)(lVar3 + _DAT_112fcbea8) = param_13;
  *(undefined8 *)(lVar3 + _DAT_112fcbeb0) = param_14;
  *(undefined8 *)(lVar3 + _DAT_112fcbeb8) = param_15;
  *(undefined8 *)(lVar3 + _DAT_112fcbec0) = param_16;
  *(undefined8 *)(lVar3 + _DAT_112fcbec8) = param_17;
  *(undefined8 *)(lVar3 + _DAT_112fcbed0) = param_18;
  *(undefined8 *)(lVar3 + _DAT_112fcbed8) = param_19;
  *(undefined8 *)(lVar3 + _DAT_112fcbee0) = param_20;
  *(undefined8 *)(lVar3 + _DAT_112fcbee8) = param_21;
  *(undefined8 *)(lVar3 + _DAT_112fcbef0) = param_22;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar3;
  lStack_70 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  plVar4 = &lStack_78;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 100955394; end: 1009554cf;  */

void FUN_100955394(void)

{
  long unaff_x20;
  
  FUN_1009550f0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0));
  return;
}



/* Entry: 1009554d0; end: 1009554f3;  */

undefined ** FUN_1009554d0(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 1009554f4; end: 100955573;  */

void FUN_1009554f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106c1388;
  func_0x000107c613fc(&UNK_1106c1388,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100955574,puVar1);
  return;
}



/* Entry: 100955574; end: 10095557b;  */

void FUN_100955574(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fce4e8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fce4e8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106c1420;
  func_0x000107c613fc(&UNK_1106c1420,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103a305e4;
  FUN_10058fa64(&UNK_103a305e4,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10095557c; end: 100955673;  */

void FUN_10095557c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fce4e8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fce4e8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106c1420;
  func_0x000107c613fc(&UNK_1106c1420,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103a305e4;
  FUN_10058fa64(&UNK_103a305e4,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 100955674; end: 100955697;  */

void FUN_100955674(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100955698; end: 1009558f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100955698(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_78;
  long lStack_70;
  
  lVar2 = param_2;
  FUN_1002c54bc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fce4f8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112fce500) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112fce508) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112fce510) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112fce518) = param_6;
  *(undefined8 *)(lVar3 + _DAT_112fce520) = param_7;
  *(undefined8 *)(lVar3 + _DAT_112fce528) = param_8;
  *(undefined8 *)(lVar3 + _DAT_112fce530) = param_9;
  *(undefined8 *)(lVar3 + _DAT_112fce538) = param_10;
  *(undefined8 *)(lVar3 + _DAT_112fce540) = param_11;
  *(undefined8 *)(lVar3 + _DAT_112fce548) = param_12;
  *(undefined8 *)(lVar3 + _DAT_112fce550) = param_13;
  *(undefined8 *)(lVar3 + _DAT_112fce558) = param_14;
  *(undefined8 *)(lVar3 + _DAT_112fce560) = param_15;
  *(undefined8 *)(lVar3 + _DAT_112fce568) = param_16;
  *(undefined8 *)(lVar3 + _DAT_112fce570) = param_17;
  *(undefined8 *)(lVar3 + _DAT_112fce578) = param_18;
  *(undefined8 *)(lVar3 + _DAT_112fce580) = param_19;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar3;
  lStack_70 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  plVar4 = &lStack_78;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 1009558f4; end: 100955a0f;  */

void FUN_1009558f4(void)

{
  long unaff_x20;
  
  FUN_100955698(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98));
  return;
}



/* Entry: 100955a10; end: 100955a33;  */

undefined ** FUN_100955a10(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100955a34; end: 100955ab3;  */

void FUN_100955a34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106c25c0;
  func_0x000107c613fc(&UNK_1106c25c0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100955ab4,puVar1);
  return;
}



/* Entry: 100955ab4; end: 100955abb;  */

void FUN_100955ab4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fd4490,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fd4490,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106c2658;
  func_0x000107c613fc(&UNK_1106c2658,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103a41150;
  FUN_10058fa64(&UNK_103a41150,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 100955abc; end: 100955bb3;  */

void FUN_100955abc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fd4490,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fd4490,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106c2658;
  func_0x000107c613fc(&UNK_1106c2658,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103a41150;
  FUN_10058fa64(&UNK_103a41150,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 100955bb4; end: 100955bd7;  */

void FUN_100955bb4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100955bd8; end: 100955d47;  */

void FUN_100955bd8(void)

{
  long unaff_x20;
  
  FUN_100955d48(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230),*(undefined8 *)(unaff_x20 + 0x238));
  return;
}



/* Entry: 100955d48; end: 1009568b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100955d48(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69,undefined8 param_70,undefined8 param_71)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  long lStack_78;
  long lStack_70;
  
  lVar2 = param_2;
  FUN_1002d0b8c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fd44a0) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112fd44a8) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112fd44b0) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112fd44b8) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112fd44c0) = param_6;
  *(undefined8 *)(lVar3 + _DAT_112fd44c8) = param_7;
  *(undefined8 *)(lVar3 + _DAT_112fd44d0) = param_8;
  *(undefined8 *)(lVar3 + _DAT_112fd44d8) = param_9;
  *(undefined8 *)(lVar3 + _DAT_112fd44e0) = param_10;
  *(undefined8 *)(lVar3 + _DAT_112fd44e8) = param_11;
  *(undefined8 *)(lVar3 + _DAT_112fd44f0) = param_12;
  *(undefined8 *)(lVar3 + _DAT_112fd44f8) = param_13;
  *(undefined8 *)(lVar3 + _DAT_112fd4500) = param_14;
  *(undefined8 *)(lVar3 + _DAT_112fd4508) = param_15;
  *(undefined8 *)(lVar3 + _DAT_112fd4510) = param_16;
  *(undefined8 *)(lVar3 + _DAT_112fd4518) = param_17;
  *(undefined8 *)(lVar3 + _DAT_112fd4520) = param_18;
  *(undefined8 *)(lVar3 + _DAT_112fd4528) = param_19;
  *(undefined8 *)(lVar3 + _DAT_112fd4530) = param_20;
  *(undefined8 *)(lVar3 + _DAT_112fd4538) = param_21;
  *(undefined8 *)(lVar3 + _DAT_112fd4540) = param_22;
  *(undefined8 *)(lVar3 + _DAT_112fd4548) = param_23;
  *(undefined8 *)(lVar3 + _DAT_112fd4550) = param_24;
  *(undefined8 *)(lVar3 + _DAT_112fd4558) = param_25;
  *(undefined8 *)(lVar3 + _DAT_112fd4560) = param_26;
  *(undefined8 *)(lVar3 + _DAT_112fd4568) = param_27;
  *(undefined8 *)(lVar3 + _DAT_112fd4570) = param_28;
  *(undefined8 *)(lVar3 + _DAT_112fd4578) = param_29;
  *(undefined8 *)(lVar3 + _DAT_112fd4580) = param_30;
  *(undefined8 *)(lVar3 + _DAT_112fd4588) = param_31;
  *(undefined8 *)(lVar3 + _DAT_112fd4590) = param_32;
  *(undefined8 *)(lVar3 + _DAT_112fd4598) = param_33;
  *(undefined8 *)(lVar3 + _DAT_112fd45a0) = param_34;
  *(undefined8 *)(lVar3 + _DAT_112fd45a8) = param_35;
  *(undefined8 *)(lVar3 + _DAT_112fd45b0) = param_36;
  *(undefined8 *)(lVar3 + _DAT_112fd45b8) = param_37;
  *(undefined8 *)(lVar3 + _DAT_112fd45c0) = param_38;
  *(undefined8 *)(lVar3 + _DAT_112fd45c8) = param_39;
  *(undefined8 *)(lVar3 + _DAT_112fd45d0) = param_40;
  *(undefined8 *)(lVar3 + _DAT_112fd45d8) = param_41;
  *(undefined8 *)(lVar3 + _DAT_112fd45e0) = param_42;
  *(undefined8 *)(lVar3 + _DAT_112fd45e8) = param_43;
  *(undefined8 *)(lVar3 + _DAT_112fd45f0) = param_44;
  *(undefined8 *)(lVar3 + _DAT_112fd45f8) = param_45;
  *(undefined8 *)(lVar3 + _DAT_112fd4600) = param_46;
  *(undefined8 *)(lVar3 + _DAT_112fd4608) = param_47;
  *(undefined8 *)(lVar3 + _DAT_112fd4610) = param_48;
  *(undefined8 *)(lVar3 + _DAT_112fd4618) = param_49;
  *(undefined8 *)(lVar3 + _DAT_112fd4620) = param_50;
  *(undefined8 *)(lVar3 + _DAT_112fd4628) = param_51;
  *(undefined8 *)(lVar3 + _DAT_112fd4630) = param_52;
  *(undefined8 *)(lVar3 + _DAT_112fd4638) = param_53;
  *(undefined8 *)(lVar3 + _DAT_112fd4640) = param_54;
  *(undefined8 *)(lVar3 + _DAT_112fd4648) = param_55;
  *(undefined8 *)(lVar3 + _DAT_112fd4650) = param_56;
  *(undefined8 *)(lVar3 + _DAT_112fd4658) = param_57;
  *(undefined8 *)(lVar3 + _DAT_112fd4660) = param_58;
  *(undefined8 *)(lVar3 + _DAT_112fd4668) = param_59;
  *(undefined8 *)(lVar3 + _DAT_112fd4670) = param_60;
  *(undefined8 *)(lVar3 + _DAT_112fd4678) = param_61;
  *(undefined8 *)(lVar3 + _DAT_112fd4680) = param_62;
  *(undefined8 *)(lVar3 + _DAT_112fd4688) = param_63;
  *(undefined8 *)(lVar3 + _DAT_112fd4690) = param_64;
  *(undefined8 *)(lVar3 + _DAT_112fd4698) = param_65;
  *(undefined8 *)(lVar3 + _DAT_112fd46a0) = param_66;
  *(undefined8 *)(lVar3 + _DAT_112fd46a8) = param_67;
  *(undefined8 *)(lVar3 + _DAT_112fd46b0) = param_68;
  *(undefined8 *)(lVar3 + _DAT_112fd46b8) = param_69;
  *(undefined8 *)(lVar3 + _DAT_112fd46c0) = param_70;
  *(undefined8 *)(lVar3 + _DAT_112fd46c8) = param_71;
  *(undefined8 *)(lVar3 + _DAT_112fd46d0) = in_stack_000001f0;
  *(undefined8 *)(lVar3 + _DAT_112fd46d8) = in_stack_000001f8;
  *(undefined8 *)(lVar3 + _DAT_112fd46e0) = in_stack_00000200;
  *(undefined8 *)(lVar3 + _DAT_112fd46e8) = in_stack_00000208;
  *(undefined8 *)(lVar3 + _DAT_112fd46f0) = in_stack_00000210;
  *(undefined8 *)(lVar3 + _DAT_112fd46f8) = in_stack_00000218;
  *(undefined8 *)(lVar3 + _DAT_112fd4700) = in_stack_00000220;
  *(undefined8 *)(lVar3 + _DAT_112fd4708) = in_stack_00000228;
  *(undefined8 *)(lVar3 + _DAT_112fd4710) = in_stack_00000230;
  *(undefined8 *)(lVar3 + _DAT_112fd4718) = in_stack_00000238;
  *(undefined8 *)(lVar3 + _DAT_112fd4720) = in_stack_00000240;
  *(undefined8 *)(lVar3 + _DAT_112fd4728) = in_stack_00000248;
  *(undefined8 *)(lVar3 + _DAT_112fd4730) = in_stack_00000250;
  *(undefined8 *)(lVar3 + _DAT_112fd4738) = in_stack_00000258;
  *(undefined8 *)(lVar3 + _DAT_112fd4740) = in_stack_00000260;
  *(undefined8 *)(lVar3 + _DAT_112fd4748) = in_stack_00000268;
  *(undefined8 *)(lVar3 + _DAT_112fd4750) = in_stack_00000270;
  *(undefined8 *)(lVar3 + _DAT_112fd4758) = in_stack_00000278;
  *(undefined8 *)(lVar3 + _DAT_112fd4760) = in_stack_00000280;
  *(undefined8 *)(lVar3 + _DAT_112fd4768) = in_stack_00000288;
  *(undefined8 *)(lVar3 + _DAT_112fd4770) = in_stack_00000290;
  *(undefined8 *)(lVar3 + _DAT_112fd4778) = in_stack_00000298;
  *(undefined8 *)(lVar3 + _DAT_112fd4780) = in_stack_000002a0;
  *(undefined8 *)(lVar3 + _DAT_112fd4788) = in_stack_000002a8;
  *(undefined8 *)(lVar3 + _DAT_112fd4790) = in_stack_000002b0;
  *(undefined8 *)(lVar3 + _DAT_112fd4798) = in_stack_000002b8;
  *(undefined8 *)(lVar3 + _DAT_112fd47a0) = in_stack_000002c0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar3;
  lStack_70 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(param_42);
  func_0x000107c6157c(param_43);
  func_0x000107c6157c(param_44);
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(param_46);
  func_0x000107c6157c(param_47);
  func_0x000107c6157c(param_48);
  func_0x000107c6157c(param_49);
  func_0x000107c6157c(param_50);
  func_0x000107c6157c(param_51);
  func_0x000107c6157c(param_52);
  func_0x000107c6157c(param_53);
  func_0x000107c6157c(param_54);
  func_0x000107c6157c(param_55);
  func_0x000107c6157c(param_56);
  func_0x000107c6157c(param_57);
  func_0x000107c6157c(param_58);
  func_0x000107c6157c(param_59);
  func_0x000107c6157c(param_60);
  func_0x000107c6157c(param_61);
  func_0x000107c6157c(param_62);
  func_0x000107c6157c(param_63);
  func_0x000107c6157c(param_64);
  func_0x000107c6157c(param_65);
  func_0x000107c6157c(param_66);
  func_0x000107c6157c(param_67);
  func_0x000107c6157c(param_68);
  func_0x000107c6157c(param_69);
  func_0x000107c6157c(param_70);
  func_0x000107c6157c(param_71);
  func_0x000107c6157c(in_stack_000001f0);
  func_0x000107c6157c(in_stack_000001f8);
  func_0x000107c6157c(in_stack_00000200);
  func_0x000107c6157c(in_stack_00000208);
  func_0x000107c6157c(in_stack_00000210);
  func_0x000107c6157c(in_stack_00000218);
  func_0x000107c6157c(in_stack_00000220);
  func_0x000107c6157c(in_stack_00000228);
  func_0x000107c6157c(in_stack_00000230);
  func_0x000107c6157c(in_stack_00000238);
  func_0x000107c6157c(in_stack_00000240);
  func_0x000107c6157c(in_stack_00000248);
  func_0x000107c6157c(in_stack_00000250);
  func_0x000107c6157c(in_stack_00000258);
  func_0x000107c6157c(in_stack_00000260);
  func_0x000107c6157c(in_stack_00000268);
  func_0x000107c6157c(in_stack_00000270);
  func_0x000107c6157c(in_stack_00000278);
  func_0x000107c6157c(in_stack_00000280);
  func_0x000107c6157c(in_stack_00000288);
  func_0x000107c6157c(in_stack_00000290);
  func_0x000107c6157c(in_stack_00000298);
  func_0x000107c6157c(in_stack_000002a0);
  func_0x000107c6157c(in_stack_000002a8);
  func_0x000107c6157c(in_stack_000002b0);
  func_0x000107c6157c(in_stack_000002b8);
  func_0x000107c6157c(in_stack_000002c0);
  plVar4 = &lStack_78;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1009568b4; end: 100956c03;  */

void FUN_1009568b4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x310));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100956c04; end: 100956c2b;  */

undefined ** FUN_100956c04(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100956c2c; end: 100956c6b;  */

void FUN_100956c2c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100956c10();
  FUN_100082720("MemPlatBackupCleanupStepServiceProviderWrapperScopeInitializationPluginProvider",
                0x4f,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100956c6c; end: 100956c73;  */

void FUN_100956c6c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101d1e36c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100956c74; end: 100956cf7;  */

void FUN_100956c74(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101d1e36c,param_2,&UNK_101d1e370,param_2,&UNK_101d1e398,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100956cf8; end: 100956d1f;  */

undefined ** FUN_100956cf8(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100956d20; end: 100956d5f;  */

void FUN_100956d20(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100956d04();
  FUN_100082720("MemPlatBackupFlipperServiceProviderWrapperScopeInitializationPluginProvider",0x4b,2
               );
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100956d60; end: 100956d67;  */

void FUN_100956d60(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101d1e638);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100956d68; end: 100956deb;  */

void FUN_100956d68(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101d1e638,param_2,&UNK_101d1e63c,param_2,&UNK_101d1e664,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100956dec; end: 100956e13;  */

undefined ** FUN_100956dec(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100956e14; end: 100956e53;  */

void FUN_100956e14(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100956df8();
  FUN_100082720("MemPlatBackupGenerateThumbnailStepServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x59,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100956e54; end: 100956e5b;  */

void FUN_100956e54(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101d1ea8c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100956e5c; end: 100956edf;  */

void FUN_100956e5c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101d1ea8c,param_2,&UNK_101d1ea90,param_2,&UNK_101d1eab8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100956ee0; end: 100956f07;  */

undefined ** FUN_100956ee0(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100956f08; end: 100956f47;  */

void FUN_100956f08(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100956eec();
  FUN_100082720("MemPlatBackupJobSchedulingServiceProviderWrapperScopeInitializationPluginProvider",
                0x51,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100956f48; end: 100956f4f;  */

void FUN_100956f48(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101d1ee5c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100956f50; end: 100956fd3;  */

void FUN_100956f50(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101d1ee5c,param_2,&UNK_101d1ee60,param_2,&UNK_101d1ee88,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100956fd4; end: 100956ffb;  */

undefined ** FUN_100956fd4(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100956ffc; end: 10095703b;  */

void FUN_100956ffc(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100956fe0();
  FUN_100082720("MemPlatBackupMemoriesServiceProviderWrapperScopeInitializationPluginProvider",0x4c,
                2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10095703c; end: 100957043;  */

void FUN_10095703c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101d1f6bc);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100957044; end: 1009570c7;  */

void FUN_100957044(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101d1f6bc,param_2,&UNK_101d1f6c0,param_2,&UNK_101d1f6e8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009570c8; end: 1009570ef;  */

undefined ** FUN_1009570c8(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 1009570f0; end: 10095712f;  */

void FUN_1009570f0(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009570d4();
  FUN_100082720("MemPlatBackupMonitorServiceProviderWrapperScopeInitializationPluginProvider",0x4b,2
               );
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100957130; end: 100957137;  */

void FUN_100957130(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101d1f7ec);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100957138; end: 1009571bb;  */

void FUN_100957138(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101d1f7ec,param_2,&UNK_101d1f7f0,param_2,&UNK_101d1f818,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009571bc; end: 1009571e3;  */

undefined ** FUN_1009571bc(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 1009571e4; end: 100957223;  */

void FUN_1009571e4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009571c8();
  FUN_100082720("MemPlatBackupServiceProviderWrapperScopeInitializationPluginProvider",0x44,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100957224; end: 10095722b;  */

void FUN_100957224(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101d1f9e8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10095722c; end: 1009572af;  */

void FUN_10095722c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101d1f9e8,param_2,&UNK_101d1f9ec,param_2,&UNK_101d1fa14,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009572b0; end: 1009572d7;  */

undefined ** FUN_1009572b0(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 1009572d8; end: 100957317;  */

void FUN_1009572d8(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009572bc();
  FUN_100082720("MemPlatBackupSyncedMediaURLServicesProviderWrapperScopeInitializationPluginProvider"
                ,0x53,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100957318; end: 10095731f;  */

void FUN_100957318(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101d1fe08);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100957320; end: 1009573a3;  */

void FUN_100957320(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101d1fe08,param_2,&UNK_101d1fe0c,param_2,&UNK_101d1fe34,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009573a4; end: 1009573cb;  */

undefined ** FUN_1009573a4(void)

{
  return &PTR_DAT_113082b10;
}


