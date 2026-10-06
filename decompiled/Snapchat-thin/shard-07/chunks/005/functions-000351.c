/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10565e270; end: 10565e2c3;  */

undefined8 FUN_10565e270(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010c06c2c0(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10565e2c4; end: 10565e2cf; +[SCFriendshipFlashbackStory table] */

undefined * FUN_10565e2c4(void)

{
  return &UNK_10f2e3946;
}



/* Entry: 10565e2d0; end: 10565e84b; +[SCFriendshipFlashbackStory immutableObjectParse:bufferSize:] */

void FUN_10565e2d0(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  bool bVar6;
  undefined *puVar7;
  undefined4 uVar8;
  ushort uVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  uint *puVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  uVar5 = *param_3;
  piVar1 = (int *)((long)param_3 + (ulong)uVar5);
  puVar7 = PTR_PTR_1126bc780;
  _objc_alloc();
  lVar11 = (long)*piVar1;
  uVar9 = *(ushort *)((long)piVar1 - lVar11);
  if (uVar9 < 5) {
    puVar15 = (undefined *)0x0;
LAB_10565e3c8:
    puVar20 = (undefined *)0x0;
LAB_10565e3cc:
    puVar17 = (undefined *)0x0;
LAB_10565e3d4:
    uVar22 = 0;
    uVar23 = 0;
LAB_10565e3d8:
    puVar18 = (undefined *)0x0;
LAB_10565e3dc:
    puVar19 = (undefined *)0x0;
LAB_10565e3e0:
    uVar10 = 0;
    uVar8 = 0;
  }
  else {
    uVar14 = (ulong)((ushort *)((long)piVar1 - lVar11))[2];
    if (uVar14 == 0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar14);
      puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = (long)*piVar1;
      uVar9 = *(ushort *)((long)piVar1 - lVar11);
    }
    lVar11 = -lVar11;
    if (uVar9 < 7) goto LAB_10565e3c8;
    uVar14 = (ulong)*(ushort *)((long)piVar1 + lVar11 + 6);
    if (uVar14 == 0) {
      puVar20 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar14);
      puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = -(long)*piVar1;
      uVar9 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar9 < 9) goto LAB_10565e3cc;
    uVar14 = (ulong)*(ushort *)((long)piVar1 + lVar11 + 8);
    if (uVar14 == 0) {
      puVar17 = (undefined *)0x0;
    }
    else {
      uVar16 = (ulong)*(uint *)((long)piVar1 + uVar14);
      puVar2 = (uint *)((long)((long)piVar1 + uVar14) + uVar16);
      puVar18 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar2);
      _objc_retainAutoreleasedReturnValue();
      if (*puVar2 != 0) {
        lVar11 = (long)param_3 + uVar16 + uVar14 + (ulong)uVar5 + 0xc;
        do {
          uVar14 = (ulong)*(uint *)(lVar11 + -8);
          puVar17 = PTR_PTR_1126bc770;
          _objc_alloc(PTR_PTR_1126bc770);
          lVar3 = lVar11 + uVar14;
          lVar12 = (long)*(int *)(lVar3 + -8);
          lVar4 = lVar11 + (uVar14 - lVar12);
          uVar9 = *(ushort *)(lVar4 + -8);
          if (uVar9 < 5) {
            puVar19 = (undefined *)0x0;
LAB_10565e5b8:
            puVar21 = (undefined *)0x0;
LAB_10565e5bc:
            bVar6 = false;
          }
          else {
            uVar16 = (ulong)*(ushort *)(lVar4 + -4);
            if (uVar16 == 0) {
              puVar19 = (undefined *)0x0;
            }
            else {
              lVar4 = lVar11 + uVar14 + uVar16;
              puVar19 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                  lVar4 + (ulong)*(uint *)(lVar4 + -8) + -4);
              _objc_retainAutoreleasedReturnValue();
              lVar12 = (long)*(int *)(lVar3 + -8);
              uVar9 = *(ushort *)(lVar11 + (uVar14 - lVar12) + -8);
            }
            lVar12 = -lVar12;
            if (uVar9 < 7) goto LAB_10565e5b8;
            uVar16 = (ulong)*(ushort *)(lVar11 + lVar12 + uVar14 + -2);
            if (uVar16 == 0) {
              puVar21 = (undefined *)0x0;
            }
            else {
              lVar4 = lVar11 + uVar14 + uVar16;
              puVar21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                  lVar4 + (ulong)*(uint *)(lVar4 + -8) + -4);
              _objc_retainAutoreleasedReturnValue();
              lVar12 = -(long)*(int *)(lVar3 + -8);
              uVar9 = *(ushort *)(lVar11 + (uVar14 - (long)*(int *)(lVar3 + -8)) + -8);
            }
            if ((uVar9 < 9) || (uVar16 = (ulong)*(ushort *)(lVar11 + lVar12 + uVar14), uVar16 == 0))
            goto LAB_10565e5bc;
            bVar6 = *(char *)(lVar11 + uVar14 + uVar16 + -8) != '\0';
          }
          func_0x00010c02b6e0(puVar17,param_2,puVar19,puVar21,bVar6);
          _objc_release(puVar21);
          _objc_release(puVar19);
          func_0x00010befa120(puVar18,param_2,puVar17);
          _objc_release(puVar17);
          puVar13 = (uint *)(lVar11 + -4);
          lVar11 = lVar11 + 4;
        } while (puVar13 != puVar2 + (ulong)*puVar2 + 1);
      }
      puVar17 = puVar18;
      func_0x00010bf51e00(puVar18);
      _objc_release(puVar18);
      lVar11 = -(long)*piVar1;
      uVar9 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    uVar22 = 0;
    if (uVar9 < 0xb) goto LAB_10565e3d4;
    uVar14 = (ulong)*(ushort *)((long)piVar1 + lVar11 + 10);
    uVar24 = 0;
    if (uVar14 != 0) {
      uVar22 = *(undefined8 *)((long)piVar1 + uVar14);
    }
    uVar23 = 0;
    if (uVar9 < 0xd) goto LAB_10565e3d8;
    uVar14 = (ulong)*(ushort *)((long)piVar1 + lVar11 + 0xc);
    if (uVar14 != 0) {
      uVar24 = *(undefined8 *)((long)piVar1 + uVar14);
    }
    uVar23 = uVar24;
    if (uVar9 < 0xf) goto LAB_10565e3d8;
    uVar14 = (ulong)*(ushort *)((long)piVar1 + lVar11 + 0xe);
    if (uVar14 == 0) {
      puVar18 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar14);
      puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = -(long)*piVar1;
      uVar9 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar9 < 0x11) goto LAB_10565e3dc;
    uVar14 = (ulong)*(ushort *)((long)piVar1 + lVar11 + 0x10);
    if (uVar14 == 0) {
      puVar19 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar14);
      puVar19 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = -(long)*piVar1;
      uVar9 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar9 < 0x13) goto LAB_10565e3e0;
    uVar14 = (ulong)*(ushort *)((long)piVar1 + lVar11 + 0x12);
    if (uVar14 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)((long)piVar1 + uVar14);
    }
    if (uVar9 < 0x15) {
      uVar10 = 0;
    }
    else {
      uVar14 = (ulong)*(ushort *)((long)piVar1 + lVar11 + 0x14);
      uVar10 = 0;
      if (uVar14 != 0) {
        uVar10 = *(undefined4 *)((long)piVar1 + uVar14);
      }
      if (0x16 < uVar9) {
        uVar14 = (ulong)*(ushort *)((long)piVar1 + lVar11 + 0x16);
        bVar6 = false;
        if (uVar14 != 0) {
          bVar6 = *(char *)((long)piVar1 + uVar14) != '\0';
        }
        goto LAB_10565e3ec;
      }
    }
  }
  bVar6 = false;
LAB_10565e3ec:
  func_0x00010c0136e0(uVar22,uVar23,puVar7,param_2,puVar15,puVar20,puVar17,puVar18,puVar19,uVar8,
                      uVar10,bVar6);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar20);
  _objc_release(puVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10565e84c; end: 10565e85f; +[SCFriendshipFlashbackStory objectClassFunctionPointer] */

undefined1  [16] FUN_10565e84c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = FUN_10565e8c8;
  auVar1._0_8_ = FUN_10565e860;
  return auVar1;
}



/* Entry: 10565e860; end: 10565e8c7;  */

void FUN_10565e860(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 0xf274430;
  _strcmp("conversationId",param_1);
  if (iVar1 != 0) {
    iVar1 = 0xf2e3961;
    _strcmp(&DAT_10f2e3961,param_1);
    if (iVar1 != 0) {
      _strcmp(&DAT_10f2e3975,param_1);
    }
  }
  return;
}



/* Entry: 10565e8c8; end: 10565ea2f;  */

bool FUN_10565e8c8(int param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  ushort uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  if (param_1 == 2) {
    func_0x0001001b9e08(param_2,&UNK_10f2e3a57);
    _sqlite3_bind_int64();
    uVar6 = 0;
    if (0xc < *(ushort *)((long)piVar1 - (long)*piVar1)) {
      uVar4 = ((ushort *)((long)piVar1 - (long)*piVar1))[6];
joined_r0x00010565e9e4:
      uVar6 = 0;
      if ((ulong)uVar4 != 0) {
        uVar6 = *(undefined8 *)((long)piVar1 + (ulong)uVar4);
      }
    }
  }
  else {
    if (param_1 != 1) {
      if (param_1 != 0) {
        return false;
      }
      func_0x0001001b9e08(param_2,&UNK_10f2e3987);
      _sqlite3_bind_int64();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
         (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar5 == 0)) {
        _sqlite3_bind_null(param_2,2);
      }
      else {
        puVar2 = (uint *)((long)piVar1 + uVar5);
        puVar3 = (undefined4 *)((long)puVar2 + (ulong)*puVar2);
        _sqlite3_bind_text(param_2,2,puVar3 + 1,*puVar3,0);
      }
      goto LAB_10565ea10;
    }
    func_0x0001001b9e08(param_2,&UNK_10f2e39ea);
    _sqlite3_bind_int64();
    uVar6 = 0;
    if (10 < *(ushort *)((long)piVar1 - (long)*piVar1)) {
      uVar4 = ((ushort *)((long)piVar1 - (long)*piVar1))[5];
      goto joined_r0x00010565e9e4;
    }
  }
  _sqlite3_bind_double(uVar6,param_2,2);
LAB_10565ea10:
  _sqlite3_step(param_2);
  return (int)param_2 == 0x65;
}



/* Entry: 10565ea30; end: 10565ebcb;  */

undefined1 *
FUN_10565ea30(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined1 param_12)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_80;
  undefined *puStack_78;
  
  plVar1 = &lStack_80;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar3 = (undefined1 *)0x0;
  if (param_3 != 0) {
    puStack_78 = PTR_PTR_1126e97d8;
    lStack_80 = param_3;
    _objc_msgSendSuper2(&lStack_80,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_4;
      _objc_retain(param_5);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_5;
      _objc_release(uVar2);
      _objc_retain(param_6);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = param_6;
      _objc_release(uVar2);
      _objc_retain(param_7);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x30);
      *(undefined8 *)((long)plVar1 + 0x30) = param_7;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x38) = param_1;
      *(undefined8 *)((long)plVar1 + 0x40) = param_2;
      _objc_retain(param_8);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x48);
      *(undefined8 *)((long)plVar1 + 0x48) = param_8;
      _objc_release(uVar2);
      _objc_retain(param_9);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x50);
      *(undefined8 *)((long)plVar1 + 0x50) = param_9;
      _objc_release(uVar2);
      *(undefined4 *)((long)plVar1 + 0x18) = param_10;
      *(undefined4 *)((long)plVar1 + 0x1c) = param_11;
      *(undefined1 *)((long)plVar1 + 0x14) = param_12;
    }
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar3;
}



/* Entry: 10565ebcc; end: 10565ec3f;  */

void FUN_10565ebcc(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_10565ec40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 2;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10565ec40; end: 10565f133;  */

void FUN_10565ec40(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  _objc_retain();
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_2;
      func_0x00010bfb25e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar11,&UNK_10f2e3ac0);
        if (puVar11 != (undefined *)0x0) {
          puVar1 = param_2;
          func_0x00010bfb25e0(param_2);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar11,1,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = puVar11;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar11;
            _sqlite3_column_int64(puVar11,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126bc780);
            _sqlite3_column_blob(puVar11,1);
            _sqlite3_column_bytes(puVar11,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_2);
            _objc_release(puVar2);
            _sqlite3_reset(puVar11);
            if (puVar3 == (undefined *)0x0) goto LAB_10565f038;
            puVar11 = PTR_PTR_1126bc790;
            _objc_alloc(PTR_PTR_1126bc790);
            puVar2 = puVar3;
            func_0x00010bfb25e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010bf50280(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010bfb2600(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c251120(puVar3);
            uVar12 = param_1;
            func_0x00010bf95800(puVar3);
            puVar6 = puVar3;
            func_0x00010c2711a0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar3;
            func_0x00010c260dc0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar3;
            func_0x00010bfa34e0(puVar3);
            puVar9 = puVar3;
            func_0x00010c113c80();
            puVar10 = puVar3;
            func_0x00010c06c2c0();
            FUN_10565ea30(param_1,uVar12,puVar11,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7,puVar8,
                          (int)puVar9,(char)puVar10);
            goto LAB_10565edcc;
          }
        }
      }
    }
    else {
      puVar1 = param_2;
      func_0x00010c1422e0(param_2);
      puVar11 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126bc780);
      puVar3 = puVar11;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      _objc_release(puVar11);
      if (puVar3 != (undefined *)0x0) {
        puVar11 = PTR_PTR_1126bc790;
        _objc_alloc(PTR_PTR_1126bc790);
        puVar2 = puVar3;
        func_0x00010bfb25e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf50280(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010bfb2600(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c251120(puVar3);
        uVar12 = param_1;
        func_0x00010bf95800(puVar3);
        puVar6 = puVar3;
        func_0x00010c2711a0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c260dc0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar3;
        func_0x00010bfa34e0(puVar3);
        puVar9 = puVar3;
        func_0x00010c113c80();
        puVar10 = puVar3;
        func_0x00010c06c2c0();
        FUN_10565ea30(param_1,uVar12,puVar11,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7,puVar8,
                      (int)puVar9,(char)puVar10);
LAB_10565edcc:
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar2);
        param_2 = puVar3;
        goto LAB_10565f040;
      }
LAB_10565f038:
      param_2 = (undefined *)0x0;
    }
  }
  puVar11 = (undefined *)0x0;
LAB_10565f040:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10565f134; end: 10565f1a7;  */

void FUN_10565f134(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_10565ec40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10565f1a8; end: 10565f553;  */

void FUN_10565f1a8(undefined8 param_1,long param_2,undefined1 *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126bc790;
  FUN_10565ebcc(PTR_PTR_1126bc790,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
    puVar10 = PTR_PTR_1126bc790;
    _objc_retain(param_2);
    _objc_opt_self(puVar10);
    puVar10 = PTR_PTR_1126bc790;
    if (param_2 == 0) {
      _objc_opt_new();
      *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      lVar2 = param_2;
      func_0x00010bfb25e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_2;
      func_0x00010bf50280(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_2;
      func_0x00010bfb2600(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c251120(param_2);
      uVar11 = param_1;
      func_0x00010bf95800(param_2);
      lVar5 = param_2;
      func_0x00010c2711a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_2;
      func_0x00010c260dc0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_2;
      func_0x00010bfa34e0(param_2);
      lVar8 = param_2;
      func_0x00010c113c80();
      lVar9 = param_2;
      func_0x00010c06c2c0();
      FUN_10565ea30(param_1,uVar11,puVar10,0xffffffffffffffff,lVar2,lVar3,lVar4,lVar5,lVar6,lVar7,
                    (int)lVar8,(char)lVar9);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    *(undefined4 *)(puVar10 + 0x10) = 1;
    _objc_release(param_2);
  }
  else {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
    }
    lVar2 = param_2;
    func_0x00010bfb25e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bf50280(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bfb2600(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(lVar2);
    func_0x00010c251120(param_2);
    *(undefined8 *)(puVar1 + 0x38) = param_1;
    func_0x00010bf95800(param_2);
    *(undefined8 *)(puVar1 + 0x40) = param_1;
    lVar2 = param_2;
    func_0x00010c2711a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c260dc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bfa34e0();
    *(int *)(puVar1 + 0x18) = (int)lVar2;
    lVar2 = param_2;
    func_0x00010c113c80();
    *(int *)(puVar1 + 0x1c) = (int)lVar2;
    lVar2 = param_2;
    func_0x00010c06c2c0();
    puVar1[0x14] = (char)lVar2;
    _objc_retain(puVar1);
    puVar10 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10565f554; end: 10565f5d7;  */

void FUN_10565f554(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126bc780;
    _objc_alloc(PTR_PTR_1126bc780);
    func_0x00010c0136e0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10565f5d8; end: 10565f62b; -[SCFriendshipFlashbackStoryChangeRequest .cxx_destruct] */

void FUN_10565f5d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10565f62c; end: 10565f637; -[SCFriendshipFlashbackStoryChangeRequest table] */

undefined * FUN_10565f62c(void)

{
  return &UNK_10f2e3946;
}



/* Entry: 10565f638; end: 10565f7ab; -[SCFriendshipFlashbackStoryChangeRequest createTableWithSQLite:] */

void FUN_10565f638(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10ddb7cf9,0x92,&uStack_28,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_28);
    _sqlite3_finalize(uStack_28);
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10ddb7d8b,0x7d,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    uVar1 = param_3;
    _sqlite3_prepare_v2(param_3,&UNK_10ddb7e08,0x9a,&uStack_38,0);
    if ((int)uVar1 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10ddb7ea2,0x85,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    uVar1 = param_3;
    _sqlite3_prepare_v2(param_3,&UNK_10ddb7f27,0xa9,&uStack_38,0);
    if ((int)uVar1 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10ddb7fd0,0x81,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    _sqlite3_prepare_v2(param_3,&UNK_10ddb8051,0xa3,&uStack_38,0);
    if ((int)param_3 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  return;
}



/* Entry: 10565f7ac; end: 10566009b; -[SCFriendshipFlashbackStoryChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_10565f7ac(double param_1,undefined *param_2,undefined8 param_3,long param_4,long param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  uint *puVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  
  iVar3 = *(int *)(param_2 + 0x10);
  puVar7 = param_2;
  if (iVar3 == 1) {
    FUN_10565f554(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_5;
    FUN_10566009c(param_5,puVar7);
    func_0x0001001ce6fc(param_5,lVar8,0,0);
    puVar13 = *(uint **)(param_5 + 0x30);
    uVar4 = *puVar13;
    puVar9 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf636c0();
    FUN_105660a60();
    _objc_release(puVar9);
    lVar8 = param_4;
    func_0x0001001b9e08(param_4,&UNK_10f2e3c29);
    if (lVar8 == 0) goto LAB_10565ffa4;
    _sqlite3_bind_blob(lVar8,1,*(undefined8 *)(param_5 + 0x30),
                       (*(int *)(param_5 + 0x20) - (int)*(undefined8 *)(param_5 + 0x30)) +
                       *(int *)(param_5 + 0x28),0);
    piVar1 = (int *)((long)puVar13 + (ulong)uVar4);
    puVar13 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
    _sqlite3_bind_text(lVar8,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar8 != 0x65) goto LAB_10565ffa4;
    uVar12 = *(undefined8 *)(param_4 + 0x58);
    _sqlite3_last_insert_rowid();
    if (((ulong)puVar11 & 1) != 0) {
      lVar8 = param_4;
      func_0x0001001b9e08(param_4,&UNK_10f2e3987);
      _sqlite3_bind_int64();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
         (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar10 == 0)) {
        _sqlite3_bind_null(lVar8,2);
      }
      else {
        puVar13 = (uint *)((long)piVar1 + uVar10);
        puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
        _sqlite3_bind_text(lVar8,2,puVar2 + 1,*puVar2,0);
      }
      _sqlite3_step();
      if ((int)lVar8 != 0x65) goto LAB_10565ffa4;
    }
    if (((uint)puVar11 >> 8 & 1) != 0) {
      lVar8 = param_4;
      func_0x0001001b9e08(param_4,&UNK_10f2e39ea);
      _sqlite3_bind_int64();
      uVar16 = 0;
      if ((10 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
         (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5], uVar10 != 0)) {
        uVar16 = *(undefined8 *)((long)piVar1 + uVar10);
      }
      _sqlite3_bind_double(uVar16,lVar8,2);
      _sqlite3_step();
      if ((int)lVar8 != 0x65) goto LAB_10565ffa4;
    }
    if (((uint)puVar11 >> 0x10 & 1) != 0) {
      func_0x0001001b9e08(param_4,&UNK_10f2e3a57);
      _sqlite3_bind_int64();
      uVar16 = 0;
      if ((0xc < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
         (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6], uVar10 != 0)) {
        uVar16 = *(undefined8 *)((long)piVar1 + uVar10);
      }
      _sqlite3_bind_double(uVar16,param_4,2);
      _sqlite3_step();
      if ((int)param_4 != 0x65) goto LAB_10565ffa4;
    }
    *(undefined8 *)(param_2 + 8) = uVar12;
    func_0x00010c1eeb60(puVar7);
    puVar9 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bc780);
    func_0x00010c21c9a0(puVar9);
    puVar11 = puVar7;
LAB_10565ff7c:
    _objc_release(puVar9);
    _objc_retain(puVar11);
    puVar7 = puVar11;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_2 + 0x10) = 0;
        lVar8 = param_4;
        func_0x0001001b9e08(param_4,&UNK_10f2e3b0d);
        if (lVar8 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)lVar8 == 0x65) {
            lVar8 = param_4;
            func_0x0001001b9e08(param_4,&UNK_10f2e3b43);
            if (lVar8 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)lVar8 != 0x65) goto LAB_10565f948;
            }
            lVar8 = param_4;
            func_0x0001001b9e08(param_4,&UNK_10f2e3b8d);
            if (lVar8 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)lVar8 != 0x65) goto LAB_10565f948;
            }
            func_0x0001001b9e08(param_4,&UNK_10f2e3bdc);
            if (param_4 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)param_4 != 0x65) goto LAB_10565f948;
            }
            puVar7 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126bc780);
            func_0x00010c21c9a0(puVar7);
            _objc_release(puVar9);
            _objc_release(puVar7);
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10565ffb0;
          }
        }
      }
LAB_10565f948:
      puVar11 = (undefined *)0x0;
      goto LAB_10565ffb0;
    }
    FUN_10565f554();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_5;
    FUN_10566009c(param_5,puVar7);
    func_0x0001001ce6fc(param_5,lVar8,0,0);
    puVar13 = *(uint **)(param_5 + 0x30);
    uVar4 = *puVar13;
    uVar12 = *(undefined8 *)(param_2 + 8);
    _objc_retain(puVar7);
    lVar8 = param_4;
    func_0x0001001b9e08(param_4,&UNK_10f2e3c71);
    if (lVar8 != 0) {
      _sqlite3_bind_blob(lVar8,1,*(undefined8 *)(param_5 + 0x30),
                         (*(int *)(param_5 + 0x20) - (int)*(undefined8 *)(param_5 + 0x30)) +
                         *(int *)(param_5 + 0x28),0);
      _sqlite3_bind_int64(lVar8,2,uVar12);
      piVar1 = (int *)((long)puVar13 + (ulong)uVar4);
      puVar13 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
      _sqlite3_bind_text(lVar8,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)lVar8 == 0x65) {
        puVar9 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126bc780);
        puVar11 = puVar9;
        func_0x00010c0dfea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        puVar9 = puVar11;
        func_0x00010bf50280();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar7;
        func_0x00010bf50280();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar9);
        _objc_retain(puVar5);
        if (puVar9 == (undefined *)0x0 && puVar5 == (undefined *)0x0) {
LAB_10565fe38:
          func_0x00010c251120(puVar11);
          dVar14 = param_1;
          func_0x00010c251120(puVar7);
          if (param_1 != dVar14) {
            lVar8 = param_4;
            func_0x0001001b9e08(param_4,&UNK_10f2e3d26);
            dVar14 = 0.0;
            if ((10 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
               (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5], uVar10 != 0)) {
              dVar14 = *(double *)((long)piVar1 + uVar10);
            }
            _sqlite3_bind_double(lVar8,1);
            _sqlite3_bind_int64(lVar8,2,uVar12);
            _sqlite3_step();
            if ((int)lVar8 != 0x65) goto LAB_10565ff94;
          }
          func_0x00010bf95800(puVar11);
          dVar15 = dVar14;
          func_0x00010bf95800(puVar7);
          if (dVar14 != dVar15) {
            func_0x0001001b9e08(param_4,&UNK_10f2e3d93);
            uVar16 = 0;
            if ((0xc < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
               (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6], uVar10 != 0)) {
              uVar16 = *(undefined8 *)((long)piVar1 + uVar10);
            }
            _sqlite3_bind_double(uVar16,param_4,1);
            _sqlite3_bind_int64(param_4,2,uVar12);
            _sqlite3_step();
            if ((int)param_4 != 0x65) goto LAB_10565ff94;
          }
          _objc_release(puVar11);
          _objc_release(puVar7);
          puVar9 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0(PTR_PTR_1126b04a8);
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126bc780);
          func_0x00010c21c9a0(puVar9);
          puVar11 = puVar7;
          goto LAB_10565ff7c;
        }
        if ((puVar9 == (undefined *)0x0) || (puVar5 == (undefined *)0x0)) {
          _objc_release(puVar5);
          _objc_release(puVar9);
          _objc_release(puVar5);
          _objc_release(puVar9);
        }
        else {
          puVar6 = puVar9;
          func_0x00010c0720c0();
          _objc_release(puVar5);
          _objc_release(puVar9);
          _objc_release(puVar5);
          _objc_release(puVar9);
          if (((ulong)puVar6 & 1) != 0) goto LAB_10565fe38;
        }
        lVar8 = param_4;
        func_0x0001001b9e08(param_4,&UNK_10f2e3cc3);
        if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
           (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar10 == 0)) {
          _sqlite3_bind_null(lVar8,1);
        }
        else {
          puVar13 = (uint *)((long)piVar1 + uVar10);
          puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
          _sqlite3_bind_text(lVar8,1,puVar2 + 1,*puVar2,0);
        }
        _sqlite3_bind_int64(lVar8,2,uVar12);
        _sqlite3_step();
        if ((int)lVar8 == 0x65) goto LAB_10565fe38;
LAB_10565ff94:
        _objc_release(puVar11);
      }
    }
    _objc_release(puVar7);
LAB_10565ffa4:
    puVar11 = (undefined *)0x0;
  }
  _objc_release(puVar7);
LAB_10565ffb0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10566009c; end: 10566070f;  */

ulong FUN_10566009c(ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  undefined ***pppuVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  ulong uVar23;
  undefined8 uVar24;
  long lVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uStack_128;
  undefined **ppuStack_120;
  code *pcStack_118;
  undefined ***pppuStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  ppuStack_120 = &PTR_FUN_1108a4de8;
  pcStack_118 = FUN_105660710;
  pppuStack_108 = &ppuStack_120;
  uVar6 = param_2;
  func_0x00010bfb2600();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar28 = 0;
  _objc_retain(uVar6);
  uVar7 = uVar6;
  func_0x00010bf52a60();
  lVar18 = lRam0000000000000000;
  puVar21 = (undefined4 *)0x0;
  puVar26 = (undefined4 *)0x0;
  if (uVar7 != 0) {
    puVar27 = (undefined4 *)0x0;
    do {
      uVar23 = 0;
      puVar22 = puVar21;
      do {
        if (lRam0000000000000000 != lVar18) {
          _objc_enumerationMutation(uVar6);
        }
        uVar24 = *(undefined8 *)(uVar23 * 8);
        _objc_retain(uVar24);
        _objc_retain(uVar24);
        uStack_128 = uVar24;
        if (pppuStack_108 == (undefined ***)0x0) {
          func_0x000104bfeb48();
          goto LAB_1056605f8;
        }
        pppuVar8 = pppuStack_108;
        (*(code *)(*pppuStack_108)[6])(pppuStack_108,param_1,&uStack_128);
        _objc_release(uStack_128);
        if (puVar26 < puVar27) {
          *puVar26 = (int)pppuVar8;
          puVar21 = puVar22;
        }
        else {
          lVar25 = (long)puVar26 - (long)puVar22;
          uVar10 = (lVar25 >> 2) + 1;
          if (uVar10 >> 0x3e != 0) {
            FUN_105660988();
LAB_1056605f8:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1056605fc);
            (*pcVar5)();
          }
          uVar19 = (long)puVar27 - (long)puVar22 >> 1;
          if (uVar19 <= uVar10) {
            uVar19 = uVar10;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puVar27 - (long)puVar22)) {
            uVar19 = 0x3fffffffffffffff;
          }
          if (uVar19 >> 0x3e != 0) {
            func_0x000104bd35f4();
            goto LAB_1056605f8;
          }
          lVar9 = uVar19 << 2;
          __Znwm();
          puVar26 = (undefined4 *)(lVar9 + lVar25);
          puVar27 = (undefined4 *)(lVar9 + uVar19 * 4);
          puVar21 = puVar26 + -(lVar25 >> 2);
          *puVar26 = (int)pppuVar8;
          _memcpy(puVar21,puVar22,lVar25);
          if (puVar22 != (undefined4 *)0x0) {
            __ZdlPv(puVar22);
          }
        }
        puVar26 = puVar26 + 1;
        _objc_release(uVar24);
        uVar23 = uVar23 + 1;
        puVar22 = puVar21;
      } while (uVar7 != uVar23);
      uVar7 = uVar6;
      func_0x00010bf52a60();
    } while (uVar7 != 0);
  }
  _objc_release(uVar6);
  _objc_release(uVar6);
  _objc_release(uVar6);
  if (pppuStack_108 == &ppuStack_120) {
    lVar18 = 0x20;
  }
  else {
    if (pppuStack_108 == (undefined ***)0x0) goto LAB_1056602e4;
    lVar18 = 0x28;
  }
  (**(code **)((long)*pppuStack_108 + lVar18))();
LAB_1056602e4:
  uVar7 = param_2;
  func_0x00010bfb25e0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = param_1;
  FUN_105660858();
  uVar10 = param_2;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_1;
  FUN_105660858();
  uVar6 = (long)puVar26 - (long)puVar21;
  puVar27 = (undefined4 *)&UNK_10ddb82f9;
  if (uVar6 != 0) {
    puVar27 = puVar21;
  }
  *(undefined1 *)(param_1 + 0x46) = 1;
  func_0x0001001cddd0(param_1,uVar6,4);
  func_0x0001001cddd0(param_1,uVar6,4);
  if (puVar21 != puVar26) {
    lVar18 = (long)uVar6 >> 2;
    do {
      iVar4 = puVar27[lVar18 + -1];
      func_0x0001001ce088(param_1,4);
      func_0x0001001ce0bc(param_1,(((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                                   *(int *)(param_1 + 0x28)) - iVar4) + 4);
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  *(undefined1 *)(param_1 + 0x46) = 0;
  uVar11 = param_1;
  func_0x0001001ce0bc(param_1,uVar6 >> 2);
  func_0x00010c251120(param_2);
  uVar29 = uVar28;
  func_0x00010bf95800(param_2);
  uVar6 = param_2;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  FUN_105660858();
  uVar13 = param_2;
  func_0x00010c260dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_1;
  FUN_105660858(param_1,uVar13);
  uVar15 = param_2;
  func_0x00010bfa34e0();
  uVar16 = param_2;
  func_0x00010c113c80();
  uVar17 = param_2;
  func_0x00010c06c2c0();
  *(undefined1 *)(param_1 + 0x46) = 1;
  uVar24 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar20 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001001ce11c(uVar29,0,param_1,0xc);
  func_0x0001001ce11c(uVar28,0,param_1,10);
  func_0x0001001ce354(param_1,0x14,uVar16,0);
  func_0x0001001ce354(param_1,0x12,uVar15,0);
  func_0x0001001ce2e4(param_1,0x10,uVar14 & 0xffffffff);
  func_0x0001001ce2e4(param_1,0xe,uVar12 & 0xffffffff);
  if ((int)uVar11 != 0) {
    func_0x0001001ce088(param_1,4);
    func_0x0001001ce354(param_1,8,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)uVar11) + 4,0);
  }
  func_0x0001001ce2e4(param_1,6,(int)uVar19);
  func_0x0001001ce2e4(param_1,4,uVar23 & 0xffffffff);
  func_0x000100ab13ac(param_1,0x16,uVar17,0);
  uVar23 = (ulong)(uint)(((int)uVar20 - (int)uVar1) + (int)uVar24);
  func_0x0001001ce548(param_1,uVar23);
  _objc_release(uVar13);
  _objc_release(uVar6);
  _objc_release(uVar10);
  _objc_release(uVar7);
  if (puVar21 != (undefined4 *)0x0) {
    __ZdlPv(puVar21);
  }
  uVar6 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    if (puVar21 != (undefined4 *)0x0) {
      __ZdlPv(puVar21);
    }
    _objc_release(param_2);
    __Unwind_Resume();
    _objc_retain(uVar23);
    uVar7 = uVar23;
    func_0x00010c0cb5a0(uVar23);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar6;
    FUN_105660858(uVar6,uVar7);
    uVar19 = uVar23;
    func_0x00010bf5bbc0(uVar23);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar6;
    FUN_105660858(uVar6,uVar19);
    uVar12 = uVar23;
    func_0x00010c081dc0(uVar23);
    *(undefined1 *)(uVar6 + 0x46) = 1;
    iVar4 = *(int *)(uVar6 + 0x20);
    iVar2 = *(int *)(uVar6 + 0x30);
    iVar3 = *(int *)(uVar6 + 0x28);
    func_0x0001001ce2e4(uVar6,6,uVar11 & 0xffffffff);
    func_0x0001001ce2e4(uVar6,4,uVar10 & 0xffffffff);
    func_0x000100ab13ac(uVar6,8,uVar12,0);
    func_0x0001001ce548(uVar6,(iVar4 - iVar2) + iVar3);
    _objc_release(uVar19);
    _objc_release(uVar7);
    _objc_release(uVar23);
    return uVar6;
  }
  return param_1;
}



/* Entry: 105660710; end: 105660857;  */

ulong FUN_105660710(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c0cb5a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_105660858(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010bf5bbc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_105660858(param_1,uVar6);
  uVar8 = param_2;
  func_0x00010c081dc0(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce2e4(param_1,6,uVar7 & 0xffffffff);
  func_0x0001001ce2e4(param_1,4,uVar5 & 0xffffffff);
  func_0x000100ab13ac(param_1,8,uVar8,0);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105660858; end: 105660987;  */

undefined8 FUN_105660858(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_105660938;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_105660938;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_1056608f8;
    param_1 = 0;
  }
  else {
LAB_1056608f8:
    pcVar3 = pcVar1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar4 = pcVar1;
    func_0x00010c08fa60(pcVar1);
    pcVar2 = "";
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
    }
    func_0x0001001cde08(param_1,pcVar2,pcVar4);
  }
  _objc_release(pcVar1);
LAB_105660938:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105660988; end: 10566099b;  */

void FUN_105660988(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  return;
}



/* Entry: 10566099c; end: 1056609a3;  */

void FUN_10566099c(void)

{
  return;
}



/* Entry: 1056609a4; end: 1056609d7;  */

void FUN_1056609a4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1108a4de8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1056609d8; end: 105660a17;  */

void FUN_1056609d8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1108a4de8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 105660a18; end: 105660a53;  */

long FUN_105660a18(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1108a4e58);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 105660a54; end: 105660a5f;  */

undefined ** FUN_105660a54(void)

{
  return &PTR_DAT_1108a4e58;
}



/* Entry: 105660a60; end: 105660d2b;  */

ulong FUN_105660a60(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 ****ppppuVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puStack_90;
  undefined8 ***pppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  uint3 uStack_6c;
  undefined1 uStack_69;
  undefined8 *puStack_68;
  
  puStack_68 = &puStack_90;
  uStack_6c = 0;
  uVar8 = 0;
  if (param_1 != 0) {
    pppuStack_88 = (undefined8 ****)0x0;
    uStack_80 = 0;
    uStack_78 = 0;
    lVar4 = param_1 + 0x60;
    puStack_90 = param_2;
    func_0x0001000e9dd8(lVar4,&puStack_90,&UNK_10dd5b8f9,&puStack_68,&uStack_69);
    lVar12 = 0;
    puVar10 = (undefined8 *)0xffffffffffffffff;
    do {
      lVar5 = lVar4 + 0x18;
      func_0x00010055a52c(lVar5,param_3);
      if (lVar5 == 0) {
        if ((long)puVar10 < 0) {
          func_0x000100042ef0(&pppuStack_88,"SELECT MAX(rowid) FROM ");
          puVar10 = param_2;
          _strlen(param_2);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&pppuStack_88,param_2,puVar10);
          iVar1 = (int)uStack_80;
          ppppuVar2 = (undefined8 ****)pppuStack_88;
          if (-1 < uStack_78._7_1_) {
            iVar1 = (int)uStack_78._7_1_;
            ppppuVar2 = &pppuStack_88;
          }
          _sqlite3_prepare_v2(*(undefined8 *)(param_1 + 0x58),ppppuVar2,iVar1,&puStack_68,0);
          puVar10 = puStack_68;
          _sqlite3_step();
          if ((int)puVar10 == 100) {
            puVar10 = puStack_68;
            _sqlite3_column_int64(puStack_68,0);
          }
          else {
            puVar10 = (undefined8 *)0x0;
          }
          _sqlite3_finalize(puStack_68);
        }
        if ((long)uStack_78 < 0) {
          *(undefined1 *)pppuStack_88 = 0;
          uStack_80 = 0;
        }
        else {
          pppuStack_88 = (undefined8 ***)((ulong)pppuStack_88 & 0xffffffffffffff00);
          uStack_78 = uStack_78 & 0xffffffffffffff;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&pppuStack_88,"SELECT MAX(rowid) FROM index_",0x1d);
        puVar6 = param_2;
        _strlen(param_2);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&pppuStack_88,param_2,puVar6);
        uVar11 = *param_3;
        uVar7 = uVar11;
        _strlen(uVar11);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&pppuStack_88,uVar11,uVar7);
        uVar7 = *(undefined8 *)(param_1 + 0x58);
        iVar1 = (int)uStack_80;
        ppppuVar2 = (undefined8 ****)pppuStack_88;
        if (-1 < uStack_78._7_1_) {
          iVar1 = (int)uStack_78._7_1_;
          ppppuVar2 = &pppuStack_88;
        }
        _sqlite3_prepare_v2(uVar7,ppppuVar2,iVar1,&puStack_90,0);
        if ((int)uVar7 == 0) {
          if (puStack_90 != (undefined8 *)0x0) {
            puVar6 = puStack_90;
            _sqlite3_step();
            if ((int)puVar6 == 100) {
              puVar6 = puStack_90;
              _sqlite3_column_int64(puStack_90,0);
              bVar3 = puVar6 == puVar10;
            }
            else {
              bVar3 = puVar10 == (undefined8 *)0x0;
            }
            *(bool *)((long)&uStack_6c + lVar12) = bVar3;
            _sqlite3_finalize(puStack_90);
            lVar5 = lVar4 + 0x18;
            puStack_68 = param_3;
            FUN_10507ce00(lVar5,param_3,&UNK_10dd5b8f9,&puStack_68,&uStack_69);
            uVar9 = 1;
            if (bVar3) {
              uVar9 = 2;
            }
            *(undefined4 *)(lVar5 + 0x18) = uVar9;
            goto LAB_105660cb8;
          }
        }
        else {
          puStack_90 = (undefined8 *)0x0;
        }
        *(undefined1 *)((long)&uStack_6c + lVar12) = 0;
        lVar5 = lVar4 + 0x18;
        puStack_68 = param_3;
        FUN_10507ce00(lVar5,param_3,&UNK_10dd5b8f9,&puStack_68,&uStack_69);
        *(undefined4 *)(lVar5 + 0x18) = 0;
      }
      else {
        *(bool *)((long)&uStack_6c + lVar12) = *(int *)(lVar5 + 0x18) == 2;
      }
LAB_105660cb8:
      lVar12 = lVar12 + 1;
      param_3 = param_3 + 1;
    } while (lVar12 != 3);
    if ((long)uStack_78 < 0) {
      __ZdlPv(pppuStack_88);
    }
    uVar8 = (ulong)uStack_6c;
  }
  return uVar8;
}



/* Entry: 105660d2c; end: 105660d5b;  */

void FUN_105660d2c(void)

{
  _objc_alloc(PTR_PTR_1126bc798);
  func_0x00010c008820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105660d5c; end: 105660d8f;  */

void FUN_105660d5c(void)

{
  _objc_alloc(PTR_PTR_1126ae790);
  func_0x00010c021520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105660d90; end: 105660dc3;  */

void FUN_105660d90(void)

{
  _objc_alloc(PTR_PTR_1126bc7a0);
  func_0x00010c0088e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105660dc4; end: 105660dfb; -[SCMemoriesDBBridgeServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105660dc4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112727234);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112727230);
  return;
}



/* Entry: 105660dfc; end: 105660e6f; -[SCMemoriesBridgeDataModelFetcher initWithDataObjectContext:] */

undefined1 * FUN_105660dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e97e0;
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



/* Entry: 105660e70; end: 105660f17; -[SCMemoriesBridgeDataModelFetcher fetchMemoriesEntryWithEntryId:] */

void FUN_105660e70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126af4c0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0(puVar1,param_2,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar3);
  if (puVar1 == (undefined *)0x0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126bc7b0;
    _objc_alloc(PTR_PTR_1126bc7b0);
    func_0x00010c016de0();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105660f18; end: 10566101b; -[SCMemoriesBridgeDataModelFetcher fetchMemoriesEntryForSnapId:] */

void FUN_105660f18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126af4d0;
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa72e0(puVar1,param_2,param_3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126af4c0;
  if (puVar1 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7060(puVar2,param_2,puVar1,0,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR_PTR_1126bc7b0;
      _objc_alloc(PTR_PTR_1126bc7b0);
      func_0x00010c016de0();
    }
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10566101c; end: 10566106f; -[SCMemoriesBridgeDataModelFetcher fetchMemoriesSnapsForMemoriesEntry:] */

void FUN_10566101c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bfbcca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa88c0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105661070; end: 105661107; -[SCMemoriesBridgeDataModelFetcher fetchMemoriesSnapsForEntry:] */

void FUN_105661070(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126af4d0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7380(puVar1,param_2,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar3);
  puVar2 = puVar1;
  func_0x00010af25594(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105661108; end: 10566118f; -[SCMemoriesBridgeDataModelFetcher fetchGallerySnapDetailForMemoriesSnap:] */

void FUN_105661108(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126bc7b8;
  func_0x00010bfbd760(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7160(puVar2,param_2,param_3,0,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105661190; end: 105661243; -[SCMemoriesBridgeDataModelFetcher fetchMemoriesSnapDetailForMemoriesSnap:] */

void FUN_105661190(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126bc7b8;
  func_0x00010bfbd760(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7160(puVar2,param_2,param_3,0,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
  if (puVar2 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126bc7c0;
    _objc_alloc(PTR_PTR_1126bc7c0);
    func_0x00010c0171c0();
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105661244; end: 1056612eb; -[SCMemoriesBridgeDataModelFetcher fetchSnapMiniThumbnailWithSnapId:] */

void FUN_105661244(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bc7c8;
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa8b40(puVar1,param_2,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar3);
  if (puVar1 == (undefined *)0x0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126bc7d0;
    _objc_alloc(PTR_PTR_1126bc7d0);
    func_0x00010c017200();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1056612ec; end: 105661393; -[SCMemoriesBridgeDataModelFetcher fetchMemoriesSnapWithSnapID:] */

void FUN_1056612ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126af4d0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa72e0(puVar1,param_2,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar3);
  if (puVar1 == (undefined *)0x0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126bc7d8;
    _objc_alloc(PTR_PTR_1126bc7d8);
    func_0x00010c017020();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105661394; end: 10566142b; -[SCMemoriesBridgeDataModelFetcher fetchMemoriesSnapsWithSnapIds:] */

void FUN_105661394(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126af4d0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7580(puVar1,param_2,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar3);
  puVar2 = puVar1;
  func_0x00010af25594(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10566142c; end: 1056614cf; -[SCMemoriesBridgeDataModelFetcher fetchMemoriesBackupOperationSnapshotsWithTacomaOperationId:] */

void FUN_10566142c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126bc7e0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa5b40(puVar3,param_2,puVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = puVar3;
  func_0x00010af25a04(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1056614d0; end: 10566157b; -[SCMemoriesBridgeDataModelFetcher fetchMemoriesBackupOperationSnapshotWithRequestId:] */

void FUN_1056614d0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bc7e0;
  puVar2 = (undefined *)0x0;
  if (param_3 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa5ac0(puVar1,param_2,param_3,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(uVar3);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR_PTR_1126bc7e8;
      _objc_alloc(PTR_PTR_1126bc7e8);
      func_0x00010bfff380();
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10566157c; end: 10566161b; -[SCMemoriesBridgeDataModelFetcher fetchSyncedMemoriesSnapsForMemoriesEntry:] */

void FUN_10566157c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126af4d0;
  func_0x00010bfbcca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa74e0(puVar2,param_2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
  puVar3 = puVar2;
  func_0x00010af25594(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10566161c; end: 10566170b; -[SCMemoriesBridgeDataModelFetcher fetchMemoriesSnapsAndSnapDetailsBySnapIds:queue:completion:] */

void FUN_10566161c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126bc7f0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10566170c;
  puStack_50 = &UNK_110859310;
  uStack_48 = param_5;
  _objc_retain(param_5);
  func_0x00010bfaa4e0(puVar1,param_2,param_3,uVar2,param_4,&puStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uStack_48);
  _objc_release(param_5);
  return;
}



/* Entry: 10566170c; end: 105661757;  */

void FUN_10566170c(long param_1,undefined8 param_2)

{
  func_0x00010c0b8600(param_2,param_2,&PTR___NSConcreteGlobalBlock_1108a4f40);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105661758; end: 10566188f;  */

void FUN_105661758(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126bc7d8;
    _objc_alloc(PTR_PTR_1126bc7d8);
    lVar2 = param_2;
    func_0x00010bfb0d80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c017020(puVar4);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c154b60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126bc7c0;
    _objc_alloc(PTR_PTR_1126bc7c0);
    lVar2 = param_2;
    func_0x00010c154b60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0171c0(puVar5);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b60f8;
  func_0x00010c0f2b40(PTR_PTR_1126b60f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105661890; end: 10566193f; -[SCMemoriesBridgeDataModelFetcher fetchSyncedHighlightedMemoriesSnapsBySnapIds:] */

void FUN_105661890(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  puVar3 = PTR_PTR_1126af4d0;
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaac20(puVar3,param_2,param_3,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = puVar3;
    func_0x00010af25594(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105661940; end: 10566194b; -[SCMemoriesBridgeDataModelFetcher .cxx_destruct] */

void FUN_105661940(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10566194c; end: 105661a17; -[SCMemoriesBridgeDataModelMutator initWithDataObjectContext:fetcher:performer:] */

undefined1 *
FUN_10566194c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e97e8;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105661a18; end: 105661b27; -[SCMemoriesBridgeDataModelMutator updateMemoriesSnap:withMediaDownloadURL:] */

void FUN_105661a18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be71920(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105661b28; end: 105661b97;  */

void FUN_105661b28(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126bc7f8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfbd760(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf35100(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1c4520(puVar2,param_2,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105661b98; end: 105661ca7; -[SCMemoriesBridgeDataModelMutator updateMemoriesSnap:withGenericAssets:] */

void FUN_105661b98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be71920(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105661ca8; end: 105661d33;  */

void FUN_105661ca8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126bc7f8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfbd760(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf35100(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010af25990(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c203960(puVar2,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105661d34; end: 105661e43; -[SCMemoriesBridgeDataModelMutator updateMemoriesSnap:withThumbnailDownloadURL:] */

void FUN_105661d34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be71920(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105661e44; end: 105661eb3;  */

void FUN_105661e44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126bc7f8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfbd760(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf35100(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c213fc0(puVar2,param_2,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105661eb4; end: 105661fc3; -[SCMemoriesBridgeDataModelMutator updateMemoriesSnap:withOverlayDownloadURL:] */

void FUN_105661eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be71920(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105661fc4; end: 105662033;  */

void FUN_105661fc4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126bc7f8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfbd760(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf35100(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1d7560(puVar2,param_2,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105662034; end: 105662143; -[SCMemoriesBridgeDataModelMutator updateMemoriesSnap:withSnapDocData:] */

void FUN_105662034(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be71920(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105662144; end: 1056621b3;  */

void FUN_105662144(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126bc7f8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfbd760(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf35100(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c203f40(puVar2,param_2,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1056621b4; end: 1056622a7; -[SCMemoriesBridgeDataModelMutator updateMemoriesSnap:withHasSynced:] */

void FUN_1056621b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010be71920(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1056622a8; end: 105662317;  */

void FUN_1056622a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126bc7f8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfbd760(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf35100(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1a7000(puVar2,param_2,*(undefined1 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105662318; end: 105662427; -[SCMemoriesBridgeDataModelMutator updateMemoriesSnap:withMemDataIds:] */

void FUN_105662318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be71920(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105662428; end: 105662497;  */

void FUN_105662428(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126bc7f8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfbd760(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf35100(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1c5820(puVar2,param_2,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105662498; end: 105662737; -[SCMemoriesBridgeDataModelMutator deleteSyncedMemoriesEntry:] */

void FUN_105662498(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126af4d0;
  uVar6 = param_3;
  func_0x00010bfbcca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa74e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar6);
  puVar3 = PTR_PTR_1126bc800;
  uVar6 = param_3;
  func_0x00010bfbcca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar6);
  puVar4 = PTR_PTR_1126bc808;
  uVar6 = param_3;
  func_0x00010bfbcca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar6);
  puVar5 = puVar2;
  func_0x00010c0b8600(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126bc810;
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa72c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar6 = param_3;
  func_0x00010bf97200(param_3);
  _objc_retainAutoreleasedReturnValue();
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010be71920(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar6);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105662738; end: 10566273f;  */

void FUN_105662738(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 105662740; end: 10566288b;  */

void FUN_105662740(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010bf6bf00(PTR_PTR_1126bc818);
  }
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010bf6bea0(PTR_PTR_1126bc820);
  }
  puVar4 = PTR_PTR_1126bc828;
  if (*(long *)(param_1 + 0x30) != 0) {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6bec0(puVar4);
    _objc_release(puVar2);
  }
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010bf6bf20(PTR_PTR_1126bc7f8);
  }
  puVar4 = PTR_PTR_1126bc830;
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010bfbcca0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010bf6be80(puVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  puVar4 = PTR_PTR_1126bc810;
  puVar2 = puVar5;
  func_0x00010c241220(puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar2);
  puVar2 = puVar5;
  func_0x00010c241220(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar5);
  func_0x00010be71920(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(param_2);
  _objc_release(puVar2);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10566288c; end: 1056629db; -[SCMemoriesBridgeDataModelMutator deleteSyncedMemoriesSnap:] */

void FUN_10566288c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126bc810;
  uVar1 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010be71920(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1056629dc; end: 105662ad3;  */

void FUN_1056629dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lStack_40;
  long lStack_38;
  
  puVar3 = PTR_PTR_1126bc818;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_40 = *(long *)(param_1 + 0x20);
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6bf00(puVar3);
    _objc_release(puVar1);
  }
  puVar3 = PTR_PTR_1126bc7f8;
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010bfbd760();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6bf20(puVar3);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar6 = *(undefined8 *)(lVar2 + 0x10);
  _objc_retain(uVar6);
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar2 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar4);
  puVar5 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar6);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105662ad4; end: 105662c03; -[SCMemoriesBridgeDataModelMutator deleteMemoriesBackupOperationSnapshotsWithTacomaOperationID:] */

void FUN_105662ad4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar5);
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar3);
  puVar4 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105662c04; end: 105662d7f;  */

void FUN_105662c04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfa8800(*(undefined8 *)(param_1 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28),param_2,PTR____NSArray0__struct_11034ab48);
  }
  else {
    lVar2 = lVar3;
    func_0x00010af25ab0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    _NSStringFromSelector(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105662d80;
    puStack_70 = &UNK_110842e18;
    lStack_68 = lVar2;
    func_0x00010be71920(uVar5,param_2,uVar6,uVar4,7,&puStack_88);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puStack_b8 = puVar1;
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x105662d94;
    puStack_a0 = &UNK_1108a4f80;
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar6);
    uStack_98 = uVar6;
    lStack_90 = lVar3;
    func_0x00010c297280(uVar5,param_2,&puStack_b8,*(undefined8 *)(param_1 + 0x40),1);
    _objc_release(uStack_98);
    _objc_release(uVar5);
    _objc_release(lVar2);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 105662d80; end: 105662dab;  */

void FUN_105662d80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6b8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126bc838,PTR_s_deleteCloudSyncOperationSnapshot_1125b87d0,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105662dac; end: 105662f63; -[SCMemoriesBridgeDataModelMutator deleteMemoriesBackupOperationSnapshots:] */

void FUN_105662dac(undefined *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar4 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_3;
    func_0x00010c0b8600(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _NSStringFromSelector(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be71920(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    puVar4 = param_1;
    func_0x00010c0b8600(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(param_1);
    _objc_release(param_2);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105662f64; end: 105662f87;  */

void FUN_105662f64(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1356f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_requestID_11262afd8);
  return;
}



/* Entry: 105662f88; end: 105662faf;  */

void FUN_105662f88(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105662fb0; end: 10566309f; -[SCMemoriesBridgeDataModelMutator updateMemoriesEntry:withPendingSyncs:] */

void FUN_105662fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf97200(param_3);
  _objc_retainAutoreleasedReturnValue();
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010be71920(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1056630a0; end: 10566310f;  */

void FUN_1056630a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126bc830;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfbcca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf35080(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1da4e0(puVar2,param_2,*(undefined4 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105663110; end: 105663227; -[SCMemoriesBridgeDataModelMutator updateMemoriesEntry:withSeqNum:memDataId:] */

void FUN_105663110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010bf97200(param_3);
  _objc_retainAutoreleasedReturnValue();
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010be71920(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105663228; end: 1056632a3;  */

void FUN_105663228(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126bc830;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfbcca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf35080(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1c5800(puVar2,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010c1fce60(puVar2,param_2,*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1056632a4; end: 1056633b3; -[SCMemoriesBridgeDataModelMutator performChange:] */

void FUN_1056632a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1056633b4;
  puStack_50 = &UNK_110858d00;
  puStack_48 = puVar1;
  func_0x00010c0f8520(uVar2,param_2,param_3,uVar4,&puStack_68);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1056633b4; end: 105663407;  */

void FUN_1056633b4(long param_1,int param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if ((param_2 != 0) && (param_3 == 0)) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    _objc_opt_new(PTR__OBJC_CLASS___NSNull_1126aef28);
    func_0x00010bf43d60(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_completeWithError__1125ae8d0);
  return;
}



/* Entry: 105663408; end: 10566356b; -[SCMemoriesBridgeDataModelMutator _performCoreDataChangeWithObjectIdentifier:method:externalErrorCode:changeBlock:] */

void FUN_105663408(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_6);
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10566356c;
  puStack_70 = &UNK_1108a5040;
  uStack_68 = param_3;
  uStack_60 = param_4;
  puStack_58 = puVar1;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f8520(uVar2,param_2,param_6,uVar4,&puStack_88);
  _objc_release(param_6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10566356c; end: 1056635ff;  */

void FUN_10566356c(long param_1,int param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (*(undefined ***)(param_1 + 0x20) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_1 + 0x20);
  }
  if ((param_2 == 0) || (param_3 != 0)) {
    _objc_retain(ppuVar1);
    ppuVar2 = (undefined **)0x1;
    func_0x00010566363c(1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x30));
    _objc_release(ppuVar1);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(ppuVar1);
    func_0x00010bf43d60(uVar3);
    ppuVar2 = ppuVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 105663600; end: 10566367b; -[SCMemoriesBridgeDataModelMutator .cxx_destruct] */

void FUN_105663600(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10566367c; end: 10566370b; -[SCPhotoPermissionCoordinator initWithUserTrackedLogger:] */

undefined1 * FUN_10566367c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e97f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10566370c; end: 105663733; -[SCPhotoPermissionCoordinator isPhotoPermissionLimited] */

bool FUN_10566370c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010bf10fc0(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30,param_2,2);
  return puVar1 == (undefined *)0x4;
}



/* Entry: 105663734; end: 105663767; -[SCPhotoPermissionCoordinator isPhotoPermissionFullAccess] */

bool FUN_105663734(ulong param_1)

{
  bool bVar1;
  undefined *puVar2;
  
  func_0x00010c079f80();
  if ((param_1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010bf10fa0(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30);
    bVar1 = puVar2 == (undefined *)0x3;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 105663768; end: 105663773; -[SCPhotoPermissionCoordinator isPhotoPermissionUndetermined] */

void FUN_105663768(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06cab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126bc840,PTR_s_isAuthorizationStatusUndetermine_1125f8cb8);
  return;
}



/* Entry: 105663774; end: 105663867; -[SCPhotoPermissionCoordinator requestAuthorizationFromSourcePageType:completion:] */

void FUN_105663774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126bc840;
  _objc_retain(param_4);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c134ac0(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 105663868; end: 1056638f3;  */

void FUN_105663868(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    puVar1 = PTR_PTR_1126bc848;
    _objc_alloc(PTR_PTR_1126bc848);
    puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010bf10fa0(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30);
    func_0x00010c0355a0(puVar1,param_2,puVar2);
    func_0x00010c0d9840(uVar3,param_2,puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056638f4; end: 1056638ff; -[SCPhotoPermissionCoordinator requestAuthorizationWithCompletion:] */

void FUN_1056638f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c134a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_requestAuthorizationFromSourcePa_11262aca8,0xffffffffffffffff,param_3);
  return;
}



/* Entry: 105663900; end: 1056639ab; -[SCPhotoPermissionCoordinator promptChangeSettingsAlertWithTitle:message:buttonTitle:fromViewController:] */

void FUN_105663900(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  puVar1 = PTR_PTR_1126bc840;
  _objc_retain(param_4);
  _objc_retain(param_3);
  if (param_5 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110db6ad8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db6ad8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c118980(puVar1);
    _objc_release(param_4);
  }
  else {
    func_0x00010c118980(puVar1);
    ppuVar2 = param_3;
    param_3 = param_4;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 1056639ac; end: 1056639bf; -[SCPhotoPermissionCoordinator checkAndRequestAuthorizationWithSuccessBlock:failureBlock:showDeniedAlert:] */

void FUN_1056639ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf37cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126bc840,PTR_s_checkCameraAccessWithSuccessBloc_1125ab8e0);
  return;
}



/* Entry: 1056639c0; end: 1056639cb; -[SCPhotoPermissionCoordinator openSystemPermissionSettingsForPhotoPermission] */

void FUN_1056639c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e99b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126bc840,PTR_s_openSystemPermissionSettings_112618080);
  return;
}



/* Entry: 1056639cc; end: 1056639f3; -[SCPhotoPermissionCoordinator photoPermissionObservable] */

void FUN_1056639cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056639f4; end: 105663d9f; -[SCPhotoPermissionCoordinator presentLimitedLibraryPickerIfSupportedWithViewController:] */

void FUN_1056639f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = auStack_98;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126b10a0;
  func_0x000108dfdb24();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6e3c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_105663da0;
  puStack_a8 = &UNK_110852cd0;
  _objc_copyWeak(auStack_a0,auStack_98);
  puVar3 = puVar2;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar2 = PTR_PTR_1126b10a0;
  func_0x000108dfdb0c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6e3c0();
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = puVar4;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_105663de8;
  puStack_d8 = &UNK_110852d00;
  _objc_copyWeak(auStack_c8,auStack_98);
  _objc_retain(param_3);
  puVar4 = puVar2;
  lStack_d0 = param_3;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar2 = PTR_PTR_1126b10a0;
  _objc_alloc(PTR_PTR_1126b10a0);
  func_0x00010c04ea80();
  puVar1 = auStack_98;
  _objc_copyWeak(auStack_f8,puVar1);
  puVar5 = puVar2;
  func_0x00010bf1d200(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x000108dfdb3c();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c26c280(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(puVar6);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b10a8;
  _objc_alloc(PTR_PTR_1126b10a8);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar4;
  puStack_88 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019f40(puVar2);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar6);
  func_0x00010c10af80(param_3);
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_f8);
  _objc_release(puVar4);
  _objc_release(lStack_d0);
  _objc_destroyWeak(auStack_c8);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  __Unwind_Resume(param_3);
  _objc_retain(puVar1);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010be2fee0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105663da0; end: 105663de7;  */

void FUN_105663da0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2fee0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105663de8; end: 105663e3b;  */

void FUN_105663de8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2c6e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105663e3c; end: 105663e83;  */

void FUN_105663e3c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be289e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105663e84; end: 105663f3b; -[SCPhotoPermissionCoordinator _handleSettingsCellTap:] */

void FUN_105663e84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf83000(param_3);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105663f3c; end: 105663f6f;  */

void FUN_105663f3c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0e99c0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


