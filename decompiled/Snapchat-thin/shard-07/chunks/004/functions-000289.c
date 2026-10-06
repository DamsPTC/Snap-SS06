/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105536fc8; end: 1055378cf; +[SCConversationUrlPreview immutableObjectParse:bufferSize:] */

void FUN_105536fc8(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ushort uVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puStack_98;
  undefined *puStack_88;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  uVar3 = *param_3;
  piVar1 = (int *)((long)param_3 + (ulong)uVar3);
  puVar5 = PTR_PTR_1126ba790;
  _objc_alloc();
  lVar7 = (long)*piVar1;
  uVar9 = *(ushort *)((long)piVar1 - lVar7);
  if (uVar9 < 5) {
    puStack_68 = (undefined *)0x0;
LAB_1055370c0:
    puStack_70 = (undefined *)0x0;
LAB_1055370c4:
    puStack_78 = (undefined *)0x0;
LAB_1055370c8:
    puVar11 = (undefined *)0x0;
LAB_1055370cc:
    puVar14 = (undefined *)0x0;
LAB_1055370d0:
    puVar15 = (undefined *)0x0;
LAB_1055370d8:
    puVar16 = (undefined *)0x0;
  }
  else {
    if (((ushort *)((long)piVar1 - lVar7))[2] == 0) {
      puStack_68 = (undefined *)0x0;
    }
    else {
      puStack_68 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = (long)*piVar1;
      uVar9 = *(ushort *)((long)piVar1 - lVar7);
    }
    lVar7 = -lVar7;
    if (uVar9 < 7) goto LAB_1055370c0;
    if (*(short *)((long)piVar1 + lVar7 + 6) == 0) {
      puStack_70 = (undefined *)0x0;
    }
    else {
      puStack_70 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = -(long)*piVar1;
      uVar9 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar9 < 9) goto LAB_1055370c4;
    if (*(short *)((long)piVar1 + lVar7 + 8) == 0) {
      puStack_78 = (undefined *)0x0;
    }
    else {
      puStack_78 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = -(long)*piVar1;
      uVar9 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar9 < 0xb) goto LAB_1055370c8;
    if (*(short *)((long)piVar1 + lVar7 + 10) == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = -(long)*piVar1;
      uVar9 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar9 < 0xd) goto LAB_1055370cc;
    if (*(short *)((long)piVar1 + lVar7 + 0xc) == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = -(long)*piVar1;
      uVar9 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar9 < 0xf) goto LAB_1055370d0;
    if (*(short *)((long)piVar1 + lVar7 + 0xe) == 0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = -(long)*piVar1;
      uVar9 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar9 < 0x11) goto LAB_1055370d8;
    uVar10 = (ulong)*(ushort *)((long)piVar1 + lVar7 + 0x10);
    if (uVar10 == 0) {
      puVar16 = (undefined *)0x0;
    }
    else {
      uVar12 = (ulong)*(uint *)((long)piVar1 + uVar10);
      puVar2 = (uint *)((long)((long)piVar1 + uVar10) + uVar12);
      puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      if (*puVar2 != 0) {
        param_3 = (uint *)((long)param_3 + uVar12 + uVar10 + (ulong)uVar3 + 8);
        do {
          uVar10 = (ulong)param_3[-1];
          puVar16 = PTR_PTR_1126ba780;
          _objc_alloc(PTR_PTR_1126ba780);
          lVar7 = (long)*(int *)((long)param_3 + (uVar10 - 4));
          uVar9 = *(ushort *)((long)param_3 + (uVar10 - lVar7) + -4);
          if (uVar9 < 5) {
            puVar13 = (undefined *)0x0;
            puVar6 = (undefined *)0x0;
            puStack_98 = (undefined *)0x0;
          }
          else {
            if (*(short *)((long)param_3 + (uVar10 - lVar7)) == 0) {
              puStack_98 = (undefined *)0x0;
            }
            else {
              puStack_98 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x00010c25da80();
              _objc_retainAutoreleasedReturnValue();
              lVar7 = (long)*(int *)((long)param_3 + (uVar10 - 4));
              uVar9 = *(ushort *)((long)param_3 + (uVar10 - lVar7) + -4);
            }
            lVar7 = -lVar7;
            if (uVar9 < 7) {
              puVar13 = (undefined *)0x0;
              puVar6 = (undefined *)0x0;
            }
            else {
              if (*(short *)((long)param_3 + lVar7 + uVar10 + 2) == 0) {
                puVar6 = (undefined *)0x0;
              }
              else {
                puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
                _objc_retainAutoreleasedReturnValue();
                lVar8 = (long)*(int *)((long)param_3 + (uVar10 - 4));
                lVar7 = -lVar8;
                uVar9 = *(ushort *)((long)param_3 + (uVar10 - lVar8) + -4);
              }
              if ((uVar9 < 9) || (*(short *)((long)param_3 + lVar7 + uVar10 + 4) == 0)) {
                puVar13 = (undefined *)0x0;
              }
              else {
                puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
                _objc_retainAutoreleasedReturnValue();
              }
            }
          }
          func_0x00010c051420(puVar16);
          _objc_release(puVar13);
          _objc_release(puVar6);
          _objc_release(puStack_98);
          func_0x00010befa120(puVar17);
          _objc_release(puVar16);
          bVar4 = param_3 != puVar2 + (ulong)*puVar2 + 1;
          param_3 = param_3 + 1;
        } while (bVar4);
      }
      puVar16 = puVar17;
      func_0x00010bf51e00();
      _objc_release(puVar17);
      lVar7 = -(long)*piVar1;
      uVar9 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (((((0x14 < uVar9) && (0x16 < uVar9)) && (0x18 < uVar9)) &&
        ((0x1a < uVar9 && (0x1c < uVar9)))) &&
       (uVar10 = (ulong)*(ushort *)((long)piVar1 + lVar7 + 0x1c), uVar10 != 0)) {
      puVar2 = (uint *)((long)piVar1 + uVar10);
      uVar3 = *puVar2;
      puVar17 = PTR_PTR_1126ba788;
      _objc_alloc();
      piVar1 = (int *)((long)puVar2 + (ulong)uVar3);
      lVar7 = (long)*piVar1;
      uVar9 = *(ushort *)((long)piVar1 - lVar7);
      if (uVar9 < 5) {
        puVar6 = (undefined *)0x0;
        puStack_88 = (undefined *)0x0;
      }
      else {
        if (((ushort *)((long)piVar1 - lVar7))[2] == 0) {
          puStack_88 = (undefined *)0x0;
        }
        else {
          puStack_88 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = (long)*piVar1;
          uVar9 = *(ushort *)((long)piVar1 - lVar7);
        }
        if (uVar9 < 7) {
          puVar6 = (undefined *)0x0;
        }
        else if (uVar9 < 9) {
          puVar6 = (undefined *)0x0;
        }
        else if ((uVar9 < 0xb) || (*(short *)((long)piVar1 + (10 - lVar7)) == 0)) {
          puVar6 = (undefined *)0x0;
        }
        else {
          puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80();
          _objc_retainAutoreleasedReturnValue();
        }
      }
      func_0x00010c01abe0();
      _objc_release(puVar6);
      _objc_release(puStack_88);
      goto LAB_1055370f0;
    }
  }
  puVar17 = (undefined *)0x0;
LAB_1055370f0:
  func_0x00010c05a220();
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar11);
  _objc_release(puStack_78);
  _objc_release(puStack_70);
  _objc_release(puStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1055378d0; end: 1055378f3; +[SCConversationUrlPreview objectClassFunctionPointer] */

undefined1  [16] FUN_1055378d0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1055378ec;
  auVar1._0_8_ = 0x1055378e4;
  return auVar1;
}



/* Entry: 1055378f4; end: 105537b5f;  */

long * FUN_1055378f4(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                    long param_7,long param_8,long param_9,undefined4 param_10,undefined4 param_11,
                    long param_12,undefined1 param_13,undefined4 param_14,long param_15,
                    undefined1 param_16,undefined4 param_17,long param_18)

{
  long *plVar1;
  long lVar2;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_15);
  plVar1 = (long *)0x0;
  if (param_1 != 0) {
    puStack_68 = PTR_PTR_1126e8e70;
    plVar1 = &lStack_70;
    lStack_70 = param_1;
    _objc_msgSendSuper2(plVar1,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      plVar1[1] = param_2;
      _objc_retain(param_3);
      lVar2 = plVar1[4];
      plVar1[4] = param_3;
      _objc_release(lVar2);
      _objc_retain(param_4);
      lVar2 = plVar1[5];
      plVar1[5] = param_4;
      _objc_release(lVar2);
      _objc_retain(param_5);
      lVar2 = plVar1[6];
      plVar1[6] = param_5;
      _objc_release(lVar2);
      _objc_retain(param_6);
      lVar2 = plVar1[7];
      plVar1[7] = param_6;
      _objc_release(lVar2);
      _objc_retain(param_7);
      lVar2 = plVar1[8];
      plVar1[8] = param_7;
      _objc_release(lVar2);
      _objc_retain(param_8);
      lVar2 = plVar1[9];
      plVar1[9] = param_8;
      _objc_release(lVar2);
      _objc_retain(param_9);
      lVar2 = plVar1[10];
      plVar1[10] = param_9;
      _objc_release(lVar2);
      *(undefined1 *)((long)plVar1 + 0x14) = (undefined1)param_10;
      *(undefined1 *)((long)plVar1 + 0x15) = param_10._1_1_;
      plVar1[0xb] = param_12;
      *(undefined1 *)((long)plVar1 + 0x16) = param_13;
      _objc_retain(param_15);
      lVar2 = plVar1[0xc];
      plVar1[0xc] = param_15;
      _objc_release(lVar2);
      *(undefined1 *)((long)plVar1 + 0x17) = param_16;
      *(undefined4 *)(plVar1 + 3) = param_17;
      plVar1[0xd] = param_18;
    }
  }
  _objc_release(param_15);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return plVar1;
}



/* Entry: 105537b60; end: 105538647;  */

void FUN_105537b60(long param_1,undefined1 *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  
  _objc_retain();
  puVar13 = PTR_PTR_1126ba798;
  _objc_retain(param_1);
  _objc_opt_self(puVar13);
  _objc_retain(param_1);
  if (param_1 == 0) {
LAB_105538248:
    lVar6 = 0;
LAB_10553824c:
    _objc_release(lVar6);
  }
  else {
    lVar1 = param_1;
    func_0x00010c1422e0();
    if (lVar1 < 0) {
      lVar1 = param_1;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      lVar6 = param_1;
      if (lVar1 != 0) {
        puVar13 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar13;
        func_0x00010bf636c0();
        _objc_release(puVar13);
        func_0x0001001b9e08(puVar2,&UNK_10f2d07ed);
        if (puVar2 != (undefined *)0x0) {
          lVar1 = param_1;
          func_0x00010c28f340(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          lVar3 = lVar1;
          _objc_retainAutorelease(lVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar2,1,lVar3,0xffffffff,0xffffffffffffffff);
          _objc_release(lVar1);
          _objc_release(lVar1);
          puVar13 = puVar2;
          _sqlite3_step();
          if ((int)puVar13 == 100) {
            puVar13 = puVar2;
            _sqlite3_column_int64(puVar2,0);
            puVar4 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126ba790);
            _sqlite3_column_blob(puVar2,1);
            _sqlite3_column_bytes(puVar2,1);
            puVar5 = puVar4;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar4);
            _sqlite3_reset(puVar2);
            if (puVar5 == (undefined *)0x0) goto LAB_105538248;
            puVar2 = PTR_PTR_1126ba798;
            _objc_alloc();
            puStack_70 = puVar5;
            func_0x00010c28f340();
            _objc_retainAutoreleasedReturnValue();
            puStack_78 = puVar5;
            func_0x00010c13b100();
            _objc_retainAutoreleasedReturnValue();
            puStack_80 = puVar5;
            func_0x00010c2711a0();
            _objc_retainAutoreleasedReturnValue();
            puStack_88 = puVar5;
            func_0x00010c260dc0();
            _objc_retainAutoreleasedReturnValue();
            puStack_90 = puVar5;
            func_0x00010c26e500();
            _objc_retainAutoreleasedReturnValue();
            puStack_98 = puVar5;
            func_0x00010bfa0ea0();
            _objc_retainAutoreleasedReturnValue();
            puStack_a0 = puVar5;
            func_0x00010bf28a00();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar5;
            func_0x00010bfd6f80();
            func_0x00010bfdb440();
            func_0x00010bf9c820();
            func_0x00010c07efa0();
            puStack_a8 = puVar5;
            func_0x00010bfe4920();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c239a60();
            func_0x00010c0f6ca0();
            func_0x00010c0f6c60();
            FUN_1055378f4(puVar2,puVar13,puStack_70,puStack_78,puStack_80,puStack_88,puStack_90,
                          puStack_98,puStack_a0,(char)puVar4);
            goto LAB_105537d70;
          }
        }
      }
      goto LAB_10553824c;
    }
    lVar1 = param_1;
    func_0x00010c1422e0(param_1);
    puVar13 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126ba790);
    puVar5 = puVar13;
    func_0x00010c0dfea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(puVar13);
    if (puVar5 == (undefined *)0x0) goto LAB_105538248;
    puVar2 = PTR_PTR_1126ba798;
    _objc_alloc();
    puStack_70 = puVar5;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = puVar5;
    func_0x00010c13b100();
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = puVar5;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = puVar5;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = puVar5;
    func_0x00010c26e500();
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = puVar5;
    func_0x00010bfa0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = puVar5;
    func_0x00010bf28a00();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar5;
    func_0x00010bfd6f80();
    func_0x00010bfdb440();
    func_0x00010bf9c820();
    func_0x00010c07efa0();
    puStack_a8 = puVar5;
    func_0x00010bfe4920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c239a60();
    func_0x00010c0f6ca0();
    func_0x00010c0f6c60();
    FUN_1055378f4(puVar2,lVar1,puStack_70,puStack_78,puStack_80,puStack_88,puStack_90,puStack_98,
                  puStack_a0,(char)puVar13);
LAB_105537d70:
    _objc_release(puStack_a8);
    _objc_release(puStack_a0);
    _objc_release(puStack_98);
    _objc_release(puStack_90);
    _objc_release(puStack_88);
    _objc_release(puStack_80);
    _objc_release(puStack_78);
    _objc_release(puStack_70);
    _objc_release(puVar5);
    if (puVar2 != (undefined *)0x0) {
      *(undefined4 *)(puVar2 + 0x10) = 2;
      _objc_release(param_1);
      if (param_2 != (undefined1 *)0x0) {
        *param_2 = 0;
      }
      lVar1 = param_1;
      func_0x00010c28f340(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar2);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010c13b100(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar2);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010c2711a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar2);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010c260dc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar2);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010c26e500(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar2);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010bfa0ea0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar2);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010bf28a00(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar2);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010bfd6f80();
      puVar2[0x14] = (char)lVar1;
      lVar1 = param_1;
      func_0x00010bfdb440();
      puVar2[0x15] = (char)lVar1;
      lVar1 = param_1;
      func_0x00010bf9c820();
      *(long *)(puVar2 + 0x58) = lVar1;
      lVar1 = param_1;
      func_0x00010c07efa0();
      puVar2[0x16] = (char)lVar1;
      lVar1 = param_1;
      func_0x00010bfe4920(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar2);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010c239a60();
      puVar2[0x17] = (char)lVar1;
      lVar1 = param_1;
      func_0x00010c0f6ca0();
      *(int *)(puVar2 + 0x18) = (int)lVar1;
      lVar1 = param_1;
      func_0x00010c0f6c60();
      *(long *)(puVar2 + 0x68) = lVar1;
      _objc_retain(puVar2);
      puVar13 = puVar2;
      goto LAB_105538428;
    }
  }
  _objc_release(param_1);
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 1;
  }
  puVar13 = PTR_PTR_1126ba798;
  _objc_retain(param_1);
  _objc_opt_self(puVar13);
  puVar2 = PTR_PTR_1126ba798;
  if (param_1 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_1;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c13b100();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010c26e500();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010bfa0ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x00010bf28a00();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1;
    func_0x00010bfd6f80();
    func_0x00010bfdb440();
    func_0x00010bf9c820();
    func_0x00010c07efa0();
    lVar12 = param_1;
    func_0x00010bfe4920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c239a60();
    func_0x00010c0f6ca0();
    func_0x00010c0f6c60();
    FUN_1055378f4(puVar2,0xffffffffffffffff,lVar1,lVar6,lVar3,lVar7,lVar8,lVar9,lVar10,(char)lVar11)
    ;
    _objc_release(lVar12);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar3);
    _objc_release(lVar6);
    _objc_release(lVar1);
  }
  *(undefined4 *)(puVar2 + 0x10) = 1;
  _objc_release(param_1);
  puVar13 = (undefined *)0x0;
LAB_105538428:
  _objc_release(puVar13);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105538648; end: 1055386ef;  */

void FUN_105538648(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126ba790;
    _objc_alloc(PTR_PTR_1126ba790);
    func_0x00010c05a220();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055386f0; end: 105538767; -[SCConversationUrlPreviewChangeRequest .cxx_destruct] */

void FUN_1055386f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 105538768; end: 105538773; -[SCConversationUrlPreviewChangeRequest table] */

undefined * FUN_105538768(void)

{
  return &UNK_10f2d07d2;
}



/* Entry: 105538774; end: 1055387bb; -[SCConversationUrlPreviewChangeRequest createTableWithSQLite:] */

void FUN_105538774(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10ddb1885,0x82,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 1055387bc; end: 105538b43; -[SCConversationUrlPreviewChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_1055387bc(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_105538648(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_105538b44(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f2d0868);
    if (lVar6 == 0) goto LAB_105538ae0;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_105538ae0;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126ba790);
    func_0x00010c21c9a0(puVar7);
LAB_105538ac8:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f2d0832);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126ba790);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_105538aec;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_105538aec;
    }
    FUN_105538648(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_105538b44(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f2d08a8);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar8);
      piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
      puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar7 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126ba790);
        func_0x00010c21c9a0(puVar7);
        goto LAB_105538ac8;
      }
    }
LAB_105538ae0:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_105538aec:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105538b44; end: 10553943f;  */

ulong FUN_105538b44(ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  ulong uVar6;
  undefined ***pppuVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  ulong uVar30;
  undefined8 uVar31;
  long lVar32;
  undefined4 *puVar33;
  undefined8 uVar34;
  ulong uStack_180;
  undefined4 *puStack_168;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  code *pcStack_108;
  undefined ***pppuStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  ppuStack_110 = &PTR_FUN_110896340;
  pcStack_108 = FUN_105539440;
  pppuStack_f8 = &ppuStack_110;
  uVar25 = param_2;
  func_0x00010bf28a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(uVar25);
  uVar6 = uVar25;
  func_0x00010bf52a60();
  lVar26 = lRam0000000000000000;
  if (uVar6 == 0) {
    puStack_168 = (undefined4 *)0x0;
    puVar28 = (undefined4 *)0x0;
  }
  else {
    puStack_168 = (undefined4 *)0x0;
    puVar28 = (undefined4 *)0x0;
    puVar29 = (undefined4 *)0x0;
    do {
      uVar30 = 0;
      do {
        if (lRam0000000000000000 != lVar26) {
          _objc_enumerationMutation(uVar25);
        }
        uVar31 = *(undefined8 *)(uVar30 * 8);
        _objc_retain(uVar31);
        _objc_retain(uVar31);
        uStack_118 = uVar31;
        if (pppuStack_f8 == (undefined ***)0x0) {
          func_0x000104bfeb48();
          goto LAB_1055392c0;
        }
        pppuVar7 = pppuStack_f8;
        (*(code *)(*pppuStack_f8)[6])(pppuStack_f8,param_1,&uStack_118);
        _objc_release(uStack_118);
        if (puVar28 < puVar29) {
          *puVar28 = (int)pppuVar7;
          puVar33 = puStack_168;
        }
        else {
          lVar32 = (long)puVar28 - (long)puStack_168;
          uVar9 = (lVar32 >> 2) + 1;
          if (uVar9 >> 0x3e != 0) {
            FUN_1055396e0();
LAB_1055392c0:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1055392c4);
            (*pcVar5)();
          }
          uVar27 = (long)puVar29 - (long)puStack_168 >> 1;
          if (uVar27 <= uVar9) {
            uVar27 = uVar9;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puVar29 - (long)puStack_168)) {
            uVar27 = 0x3fffffffffffffff;
          }
          if (uVar27 >> 0x3e != 0) {
            func_0x000104bd35f4();
            goto LAB_1055392c0;
          }
          lVar8 = uVar27 << 2;
          __Znwm();
          puVar28 = (undefined4 *)(lVar8 + lVar32);
          puVar29 = (undefined4 *)(lVar8 + uVar27 * 4);
          puVar33 = puVar28 + -(lVar32 >> 2);
          *puVar28 = (int)pppuVar7;
          _memcpy(puVar33,puStack_168,lVar32);
          if (puStack_168 != (undefined4 *)0x0) {
            __ZdlPv(puStack_168);
          }
        }
        puStack_168 = puVar33;
        puVar28 = puVar28 + 1;
        _objc_release(uVar31);
        uVar30 = uVar30 + 1;
      } while (uVar6 != uVar30);
      uVar6 = uVar25;
      func_0x00010bf52a60();
    } while (uVar6 != 0);
  }
  _objc_release(uVar25);
  _objc_release(uVar25);
  _objc_release(uVar25);
  if (pppuStack_f8 == &ppuStack_110) {
    lVar26 = 0x20;
  }
  else {
    if (pppuStack_f8 == (undefined ***)0x0) goto LAB_105538d74;
    lVar26 = 0x28;
  }
  (**(code **)((long)*pppuStack_f8 + lVar26))();
LAB_105538d74:
  uVar25 = param_2;
  func_0x00010bfe4920();
  _objc_retainAutoreleasedReturnValue();
  if (uVar25 == 0) {
    uStack_180 = 0;
  }
  else {
    uVar6 = param_2;
    func_0x00010bfe4920();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar30 = uVar6;
    func_0x00010bfe4900();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_1;
    FUN_1055395b0();
    uVar27 = uVar6;
    func_0x00010bfe49e0();
    uVar10 = uVar6;
    func_0x00010bfe4ae0(uVar6);
    uVar11 = uVar6;
    func_0x00010bfe4ac0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_1;
    FUN_1055395b0(param_1,uVar11);
    *(undefined1 *)(param_1 + 0x46) = 1;
    iVar2 = *(int *)(param_1 + 0x20);
    iVar3 = *(int *)(param_1 + 0x30);
    iVar4 = *(int *)(param_1 + 0x28);
    func_0x0001001ce170(param_1,8,uVar10,0);
    func_0x0001001ce170(param_1,6,uVar27,0);
    func_0x0001001ce2e4(param_1,10,uVar12 & 0xffffffff);
    func_0x0001001ce2e4(param_1,4,uVar9 & 0xffffffff);
    uStack_180 = param_1;
    func_0x0001001ce548(param_1,(iVar2 - iVar3) + iVar4);
    _objc_release(uVar11);
    _objc_release(uVar30);
    _objc_release(uVar6);
    _objc_release(uVar6);
    uStack_180 = uStack_180 & 0xffffffff;
  }
  _objc_release(uVar25);
  uVar6 = param_2;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = param_1;
  FUN_1055395b0();
  uVar9 = param_2;
  func_0x00010c13b100();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = param_1;
  FUN_1055395b0();
  uVar10 = param_2;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  FUN_1055395b0();
  uVar12 = param_2;
  func_0x00010c260dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_1;
  FUN_1055395b0();
  uVar14 = param_2;
  func_0x00010c26e500();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_1;
  FUN_1055395b0();
  uVar16 = param_2;
  func_0x00010bfa0ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_1;
  FUN_1055395b0(param_1,uVar16);
  uVar25 = (long)puVar28 - (long)puStack_168;
  puVar29 = (undefined4 *)&UNK_10ddb1b58;
  if (uVar25 != 0) {
    puVar29 = puStack_168;
  }
  *(undefined1 *)(param_1 + 0x46) = 1;
  func_0x0001001cddd0(param_1,uVar25,4);
  func_0x0001001cddd0(param_1,uVar25,4);
  if (puStack_168 != puVar28) {
    lVar26 = (long)uVar25 >> 2;
    do {
      iVar2 = puVar29[lVar26 + -1];
      func_0x0001001ce088(param_1,4);
      func_0x0001001ce0bc(param_1,(((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                                   *(int *)(param_1 + 0x28)) - iVar2) + 4);
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
  }
  *(undefined1 *)(param_1 + 0x46) = 0;
  uVar18 = param_1;
  func_0x0001001ce0bc(param_1,uVar25 >> 2);
  uVar25 = param_2;
  func_0x00010bfd6f80(param_2);
  uVar19 = param_2;
  func_0x00010bfdb440();
  uVar20 = param_2;
  func_0x00010bf9c820();
  uVar21 = param_2;
  func_0x00010c07efa0();
  uVar22 = param_2;
  func_0x00010c239a60();
  uVar23 = param_2;
  func_0x00010c0f6ca0();
  uVar24 = param_2;
  func_0x00010c0f6c60(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  uVar31 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar34 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001001ce170(param_1,0x22,uVar24,0);
  func_0x0001001ce170(param_1,0x18,uVar20,0);
  func_0x0001001ce354(param_1,0x20,uVar23,0);
  if (uStack_180 != 0) {
    func_0x0001001ce088(param_1,4);
    func_0x0001001ce354(param_1,0x1c,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)uStack_180) + 4,0);
  }
  if ((int)uVar18 != 0) {
    func_0x0001001ce088(param_1,4);
    func_0x0001001ce354(param_1,0x10,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)uVar18) + 4,0);
  }
  func_0x0001001ce2e4(param_1,0xe,(int)uVar17);
  func_0x0001001ce2e4(param_1,0xc,(int)uVar15);
  func_0x0001001ce2e4(param_1,10,uVar13 & 0xffffffff);
  func_0x0001001ce2e4(param_1,8,(int)uVar11);
  func_0x0001001ce2e4(param_1,6,(int)uVar27);
  func_0x0001001ce2e4(param_1,4,(int)uVar30);
  func_0x000100ab13ac(param_1,0x1e,uVar22,0);
  func_0x000100ab13ac(param_1,0x1a,uVar21,0);
  func_0x000100ab13ac(param_1,0x16,uVar19 & 0xffffffff,0);
  func_0x000100ab13ac(param_1,0x14,uVar25,0);
  uVar25 = (ulong)(uint)(((int)uVar34 - (int)uVar1) + (int)uVar31);
  func_0x0001001ce548(param_1,uVar25);
  _objc_release(uVar16);
  _objc_release(uVar14);
  _objc_release(uVar12);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar6);
  if (puStack_168 != (undefined4 *)0x0) {
    __ZdlPv();
  }
  uVar6 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_release(uVar21);
    _objc_release(uVar21);
    _objc_release(uVar13);
    if (puStack_168 != (undefined4 *)0x0) {
      __ZdlPv(puStack_168);
    }
    _objc_release(param_2);
    __Unwind_Resume();
    _objc_retain(uVar25);
    uVar30 = uVar25;
    func_0x00010c26b700(uVar25);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar6;
    FUN_1055395b0(uVar6,uVar30);
    uVar27 = uVar25;
    func_0x00010bfe5be0(uVar25);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar6;
    FUN_1055395b0(uVar6,uVar27);
    uVar11 = uVar25;
    func_0x00010c28f340(uVar25);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar6;
    FUN_1055395b0(uVar6,uVar11);
    *(undefined1 *)(uVar6 + 0x46) = 1;
    iVar2 = *(int *)(uVar6 + 0x20);
    iVar3 = *(int *)(uVar6 + 0x30);
    iVar4 = *(int *)(uVar6 + 0x28);
    func_0x0001001ce2e4(uVar6,8,uVar12 & 0xffffffff);
    func_0x0001001ce2e4(uVar6,6,uVar10 & 0xffffffff);
    func_0x0001001ce2e4(uVar6,4,uVar9 & 0xffffffff);
    func_0x0001001ce548(uVar6,(iVar2 - iVar3) + iVar4);
    _objc_release(uVar11);
    _objc_release(uVar27);
    _objc_release(uVar30);
    _objc_release(uVar25);
    return uVar6;
  }
  return param_1;
}



/* Entry: 105539440; end: 1055395af;  */

ulong FUN_105539440(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c26b700(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_1055395b0(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010bfe5be0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_1055395b0(param_1,uVar6);
  uVar8 = param_2;
  func_0x00010c28f340(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  FUN_1055395b0(param_1,uVar8);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce2e4(param_1,8,uVar9 & 0xffffffff);
  func_0x0001001ce2e4(param_1,6,uVar7 & 0xffffffff);
  func_0x0001001ce2e4(param_1,4,uVar5 & 0xffffffff);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1055395b0; end: 1055396df;  */

undefined8 FUN_1055395b0(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_105539690;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_105539690;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_105539650;
    param_1 = 0;
  }
  else {
LAB_105539650:
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
LAB_105539690:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1055396e0; end: 1055396f3;  */

void FUN_1055396e0(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  return;
}



/* Entry: 1055396f4; end: 1055396fb;  */

void FUN_1055396f4(void)

{
  return;
}



/* Entry: 1055396fc; end: 10553972f;  */

void FUN_1055396fc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110896340;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 105539730; end: 10553976f;  */

void FUN_105539730(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110896340;
  param_2[1] = uVar1;
  return;
}



/* Entry: 105539770; end: 1055397ab;  */

long FUN_105539770(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1108963b0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1055397ac; end: 1055397b7;  */

undefined ** FUN_1055397ac(void)

{
  return &PTR_DAT_1108963b0;
}



/* Entry: 1055397b8; end: 105539807; -[SCCreativeToolsMemoriesResourceServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055397b8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112725754);
  _objc_destroyWeak(param_1 + _DAT_112725750);
  _objc_destroyWeak(param_1 + _DAT_11272574c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112725748);
  return;
}



/* Entry: 105539808; end: 10553987b; -[SCStickerSearchImpl initWithDatabase:] */

undefined1 * FUN_105539808(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8e78;
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



/* Entry: 10553987c; end: 105539913; -[SCStickerSearchImpl searchStickersWithText:completionHandler:] */

void FUN_10553987c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105539914;
  puStack_40 = &UNK_110859310;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c0f8480(uVar1,param_2,param_3,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 105539914; end: 105539b23;  */

void FUN_105539914(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010bf529e0(param_2);
  func_0x00010bffc4a0(puVar2);
  _objc_retain(param_2);
  lVar7 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar7 == 0) {
      _objc_release(param_2);
      lVar7 = *(long *)(param_1 + 0x20);
      if (lVar7 != 0) {
        (**(code **)(lVar7 + 0x10))(lVar7,puVar2);
      }
      _objc_release(puVar2);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
        return;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf3ad50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_2 + 8),PTR_s_clearCachedStickerSearchResults_1125ac4f8);
      return;
    }
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      lVar9 = *(long *)(lVar10 * 8);
      func_0x00010bf96f00();
      if (lVar9 == 5) {
        puVar3 = PTR_PTR_1126b0d08;
        _objc_alloc();
        func_0x00010bffa500();
        puVar4 = puVar3;
        func_0x00010c26b700();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126b61c0;
        if (puVar4 == (undefined *)0x0) {
LAB_105539a7c:
          func_0x00010befa120(puVar2);
        }
        else {
          puVar5 = puVar3;
          func_0x00010c26b700(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c080460();
          _objc_release(puVar5);
          _objc_release(puVar4);
          if ((int)puVar6 != 0) goto LAB_105539a7c;
        }
        _objc_release(puVar3);
      }
      else if (lVar9 == 1) {
        puVar3 = PTR_PTR_1126ba7a8;
        _objc_alloc(PTR_PTR_1126ba7a8);
        func_0x00010bffa520();
        goto LAB_105539a7c;
      }
      lVar10 = lVar10 + 1;
    } while (lVar7 != lVar10);
    lVar7 = param_2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105539b24; end: 105539b2b; -[SCStickerSearchImpl clearCachedStickerSearchResults] */

void FUN_105539b24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3ad50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_clearCachedStickerSearchResults_1125ac4f8);
  return;
}



/* Entry: 105539b2c; end: 105539b37; -[SCStickerSearchImpl .cxx_destruct] */

void FUN_105539b2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105539b38; end: 105539bc3;  */

void FUN_105539b38(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfecac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf5afa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126ba7b0;
  _objc_alloc(PTR_PTR_1126ba7b0);
  func_0x00010c0093e0();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105539bc4; end: 105539bfb; -[SCStickerSearchServicesImplServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105539bc4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272575c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112725760);
  return;
}



/* Entry: 105539bfc; end: 105539cc7; -[SCSearchTagsProviderImpl initWithContentFetching:circumstanceEngine:asyncQueueProvider:] */

undefined1 *
FUN_105539bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e8e80;
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



/* Entry: 105539cc8; end: 105539d17; -[SCSearchTagsProviderImpl searchTagFilePathsForStickerType:] */

void FUN_105539cc8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be4e640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf0ac0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105539d18; end: 105539eb7; -[SCSearchTagsProviderImpl _createObservableFromFuture:] */

void FUN_105539d18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae6b8;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105539db0;
  puStack_30 = &UNK_11088e668;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105539eb8; end: 10553a013; -[SCSearchTagsProviderImpl _configForStickerType:] */

void FUN_105539eb8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((param_3 != 4) && (param_3 != 2)) && (param_3 == 1)) {
    func_0x00010bee6540();
  }
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c25d780();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar1 + 0x10),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dea3b8,0,0);
  return;
}



/* Entry: 10553a014; end: 10553a02b; -[SCSearchTagsProviderImpl _useBitmojiTagFormatV2] */

void FUN_10553a014(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dea3b8,0,0);
  return;
}



/* Entry: 10553a02c; end: 10553a15b; -[SCSearchTagsProviderImpl _loadSearchFilePathsForType:] */

void FUN_10553a02c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_1;
  func_0x00010bde45e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0dfd40(uVar1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c067fc0();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126ae560;
  _objc_opt_new();
  func_0x00010be4e660(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10553a15c;
  puStack_58 = &UNK_110896410;
  puStack_50 = puVar5;
  uStack_48 = uVar4;
  _objc_retain(puVar5);
  func_0x00010c297260(param_1,param_2,&puStack_70,0);
  puVar6 = puVar5;
  func_0x00010bfbc3e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_50);
  _objc_release(puVar5);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10553a15c; end: 10553a21b;  */

void FUN_10553a15c(long param_1,ulong param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    if (param_2 != 0) {
      puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
      _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
      uVar2 = param_2;
      _objc_opt_isKindOfClass(param_2,puVar1);
      if ((uVar2 & 1) == 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        puVar1 = PTR_PTR_1126ba7c0;
        _objc_alloc(PTR_PTR_1126ba7c0);
        func_0x00010c042b40();
        func_0x00010bf43d60(uVar3);
        _objc_release(puVar1);
        goto LAB_10553a200;
      }
    }
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
  }
LAB_10553a200:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10553a21c; end: 10553a41f; -[SCSearchTagsProviderImpl _loadSearchFilesForCofKey:] */

void FUN_10553a21c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bf529e0();
  puVar4 = PTR_PTR_1126b08b0;
  if (uVar3 < 2) {
    func_0x00010bf43d60(puVar1);
  }
  else {
    uVar3 = uVar2;
    func_0x00010c0dfd40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf33760(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126b17d8;
    _objc_alloc();
    func_0x00010c003a80();
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c11e0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar6);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10553a420;
    puStack_70 = &UNK_110848ba8;
    uStack_68 = uVar6;
    puStack_60 = puVar5;
    _objc_retain(puVar1);
    puStack_58 = puVar1;
    _objc_retain(puVar5);
    _objc_retain(uVar6);
    func_0x000100a0df38(uVar7,&puStack_88);
    _objc_release(puStack_58);
    _objc_release(puStack_60);
    _objc_release(uStack_68);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(uVar7);
    _objc_release(puVar4);
  }
  puVar4 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10553a420; end: 10553a5ff;  */

void FUN_10553a420(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x10553a4c4;
  puStack_40 = &UNK_110855f30;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uStack_38 = uVar2;
  func_0x00010c13e600(uVar3,param_2,uVar1,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uStack_38);
  return;
}



/* Entry: 10553a600; end: 10553a63b; -[SCSearchTagsProviderImpl .cxx_destruct] */

void FUN_10553a600(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10553a63c; end: 10553a7ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10553a63c(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126ba7c8;
  _objc_alloc(PTR_PTR_1126ba7c8);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = lVar2 + _DAT_112725774;
    _objc_loadWeakRetained(lVar7);
  }
  lVar3 = lVar7;
  func_0x00010c23c760(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar4 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = lVar4 + _DAT_112725778;
    _objc_loadWeakRetained(lVar8);
  }
  lVar5 = lVar8;
  func_0x00010bf398e0(lVar8);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_11272577c;
    _objc_loadWeakRetained(lVar9);
  }
  lVar6 = lVar9;
  func_0x00010bf0c120(lVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003540(puVar1,param_2,lVar3,lVar5,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar8);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10553a7ac; end: 10553a7fb; -[SCSearchTagsServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10553a7ac(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272577c);
  _objc_destroyWeak(param_1 + _DAT_112725778);
  _objc_destroyWeak(param_1 + _DAT_112725774);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112725770);
  return;
}



/* Entry: 10553a7fc; end: 10553a913; -[SCBitmojiStickerInjectorImpl initWithDefaultBitmojiPresentationModel:bitmojiAvatarProvider:friendmojiFilteredContainer:circumstanceEngine:] */

undefined1 *
FUN_10553a7fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e8e88;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10553a914; end: 10553a93f; -[SCBitmojiStickerInjectorImpl isConversionSupportedForStickerState:] */

bool FUN_10553a914(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010c27dd80(param_3);
    return param_3 == 3;
  }
  return false;
}



/* Entry: 10553a940; end: 10553a947; -[SCBitmojiStickerInjectorImpl isConversionSupportedForSOJUGallerySticker:] */

bool FUN_10553a940(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain();
  if ((param_3 == 0) || (lVar2 = param_3, func_0x00010c27dde0(), lVar2 != 0x24b0f4ce)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x00010c2540c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 != 0;
    _objc_release();
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10553a948; end: 10553a9b3;  */

bool FUN_10553a948(long param_1)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar2 = param_1, func_0x00010c27dde0(), lVar2 != 0x24b0f4ce)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010c2540c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 != 0;
    _objc_release();
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10553a9b4; end: 10553a9eb; -[SCBitmojiStickerInjectorImpl isConversionSupportedForCTItemInstance:] */

bool FUN_10553a9b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10553a9ec(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 10553a9ec; end: 10553aaa3;  */

void FUN_10553a9ec(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != 0) {
    _objc_retain(param_1);
    lVar1 = param_1;
    func_0x00010c0840e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf96ee0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    param_1 = lVar1;
    func_0x00010bf1c360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (param_1 != 0) {
      _objc_retain(param_1);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10553aaa4; end: 10553aaab; -[SCBitmojiStickerInjectorImpl isConversionSupportedForCTPItem:] */

uint FUN_10553aaa4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  
  _objc_retain();
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bf96f00(), lVar1 != 2)) {
    uVar4 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf96da0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ba800;
    _objc_opt_class(PTR_PTR_1126ba800);
    lVar3 = lVar1;
    _objc_opt_isKindOfClass(lVar1,puVar2);
    _objc_release(lVar1);
    uVar4 = (uint)lVar3 & (uint)(lVar1 != 0);
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10553aaac; end: 10553ab3f;  */

uint FUN_10553aaac(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar1 = param_1, func_0x00010bf96f00(), lVar1 != 2)) {
    uVar4 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf96da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ba800;
    _objc_opt_class(PTR_PTR_1126ba800);
    lVar3 = lVar1;
    _objc_opt_isKindOfClass(lVar1,puVar2);
    _objc_release(lVar1);
    uVar4 = (uint)lVar3 & (uint)(lVar1 != 0);
  }
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 10553ab40; end: 10553ad2b; -[SCBitmojiStickerInjectorImpl sojuGalleryStickerForStickerState:] */

void FUN_10553ab40(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar6 = param_3, func_0x00010c27dd80(), lVar6 != 3)) {
    lVar6 = 0;
    goto LAB_10553ad08;
  }
  lVar1 = param_3;
  func_0x000105d0b188(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21ace0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010c06c000(param_3);
  func_0x00010c1af2c0(lVar1,param_2,lVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010c0846e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf1c2e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf62ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar6);
  lVar6 = lVar5;
  func_0x00010c1306a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
LAB_10553acd4:
    _objc_release(lVar6);
  }
  else {
    lVar2 = lVar5;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar6);
    if (lVar3 != 0) {
      lVar6 = lVar5;
      func_0x00010c1306a0(lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1eab00(lVar1,param_2,lVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar6);
      lVar6 = lVar5;
      func_0x00010c26b700(lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c188dc0(lVar1,param_2,lVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      goto LAB_10553acd4;
    }
  }
  lVar6 = lVar1;
  func_0x00010bf21f60(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar1);
LAB_10553ad08:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 10553ad2c; end: 10553ae27; -[SCBitmojiStickerInjectorImpl stickerStateForSOJUGallerySticker:sojuGalleryInfoFilters:uniqueId:timelineSegmentTimeRanges:editCapabilities:] */

void FUN_10553ad2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_3;
  FUN_10553a948();
  if ((int)uVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010bf5cd00(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ba7d8;
    func_0x00010bf37800(PTR_PTR_1126ba7d8,param_2,param_3,3,0x24b0f4ce,param_1,param_6,param_5,0,
                        param_7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10553ae28; end: 10553b3af; -[SCBitmojiStickerInjectorImpl ctItemInstanceForSojuGallerySticker:sojuGalleryInfoFilters:] */

void FUN_10553ae28(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  int iVar16;
  undefined *puVar17;
  undefined *puVar18;
  
  _objc_retain(param_3);
  puVar17 = param_3;
  FUN_10553a948();
  if ((int)puVar17 == 0) {
    puVar17 = (undefined *)0x0;
    goto LAB_10553b384;
  }
  puVar1 = PTR_PTR_1126ba7e0;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126b37c0;
  _objc_opt_new();
  puVar3 = PTR_PTR_1126b0cb8;
  _objc_alloc_init();
  puVar4 = PTR_PTR_1126ba7e8;
  _objc_opt_new(PTR_PTR_1126ba7e8);
  puVar5 = PTR_PTR_1126b0cc0;
  _objc_opt_new();
  puVar17 = param_3;
  func_0x00010bf62920();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  func_0x00010c08fa60();
  if (puVar18 == (undefined *)0x0) {
    puVar18 = (undefined *)0x0;
  }
  else {
    puVar6 = param_3;
    func_0x00010c1306a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c08fa60();
    puVar18 = PTR_PTR_1126ba7f0;
    if (puVar7 == (undefined *)0x0) {
      puVar18 = (undefined *)0x0;
    }
    else {
      puVar7 = param_3;
      func_0x00010bf62920(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_3;
      func_0x00010c1306a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26cd80(puVar18,param_2,puVar7,puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar7);
    }
    _objc_release(puVar6);
  }
  _objc_release(puVar17);
  puVar17 = PTR_PTR_1126b5938;
  puVar6 = param_3;
  func_0x00010c2540c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbab60(puVar17,param_2,puVar6,puVar18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = puVar17;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c08fa60();
  _objc_release(puVar6);
  if (puVar7 == (undefined *)0x0) {
    puVar6 = PTR_PTR_1126b5938;
    _objc_alloc();
    puVar7 = puVar17;
    func_0x00010c26afc0(puVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar17;
    func_0x00010bfb7be0(puVar17);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar17;
    func_0x00010c14e120();
    puVar12 = puVar17;
    func_0x00010bfe8ee0(puVar17);
    puVar13 = puVar17;
    func_0x00010c06c000(puVar17);
    puVar14 = puVar17;
    func_0x00010bf62f20();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar17;
    func_0x00010c130220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c050fc0(puVar6,param_2,puVar7,uVar10,puVar8,puVar11,puVar12,puVar13,puVar14,puVar15)
    ;
    _objc_release(puVar17);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar8);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(puVar7);
    if (puVar6 == (undefined *)0x0) goto LAB_10553b348;
LAB_10553aff0:
    puVar17 = param_3;
    func_0x00010c06c0a0(param_3);
    func_0x00010c1af280(puVar1,param_2,puVar17);
    puVar17 = puVar6;
    func_0x00010c26afc0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17ece0(puVar1,param_2,puVar17);
    _objc_release(puVar17);
    puVar17 = puVar6;
    func_0x00010bfb7be0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21acc0(puVar1,param_2,puVar17 != (undefined *)0x0);
    _objc_release(puVar17);
    puVar17 = param_3;
    func_0x00010c1306a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar17;
    func_0x00010c08fa60();
    if (puVar7 == (undefined *)0x0) {
LAB_10553b114:
      _objc_release(puVar17);
    }
    else {
      puVar7 = param_3;
      func_0x00010bf62920();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c08fa60();
      _objc_release(puVar7);
      _objc_release(puVar17);
      if (puVar8 != (undefined *)0x0) {
        puVar17 = PTR_PTR_1126ba7f8;
        _objc_opt_new(PTR_PTR_1126ba7f8);
        puVar7 = param_3;
        func_0x00010c1306a0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1eab00(puVar17,param_2,puVar7);
        _objc_release(puVar7);
        puVar7 = param_3;
        func_0x00010bf62920(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c212f20(puVar17,param_2,puVar7);
        _objc_release(puVar7);
        func_0x00010c189160(puVar1,param_2,puVar17);
        goto LAB_10553b114;
      }
    }
    puVar17 = puVar6;
    func_0x00010c130220();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar17;
    func_0x00010c067ec0();
    _objc_release(puVar17);
    puVar17 = puVar6;
    func_0x00010bf12ea0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16da00(puVar4,param_2,puVar17);
    _objc_release(puVar17);
    puVar17 = puVar6;
    func_0x00010bfb7be0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19fa20(puVar4,param_2,puVar17);
    _objc_release(puVar17);
    puVar17 = param_3;
    func_0x00010bf62920(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c188dc0(puVar4,param_2,puVar17);
    _objc_release(puVar17);
    iVar16 = (int)puVar7;
    if (iVar16 != 3) {
      iVar16 = 0;
    }
    func_0x00010c1ea920(puVar4,param_2,iVar16);
    func_0x00010c171580(puVar2,param_2,puVar1);
    func_0x00010c196600(puVar3,param_2,puVar2);
    func_0x00010c1b5d40(puVar5,param_2,puVar3);
    puVar17 = puVar5;
    func_0x00010c0cc0c0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1715c0();
    _objc_release(puVar17);
    _objc_retain(puVar5);
    puVar17 = puVar5;
  }
  else {
    puVar6 = puVar17;
    if (puVar17 != (undefined *)0x0) goto LAB_10553aff0;
LAB_10553b348:
    puVar17 = (undefined *)0x0;
  }
  _objc_release(puVar6);
  _objc_release(puVar18);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
LAB_10553b384:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 10553b3b0; end: 10553b6ff; -[SCBitmojiStickerInjectorImpl sojuGalleryStickerForCTItemInstance:stickerTransformState:] */

void FUN_10553b3b0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  FUN_10553a9ec();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_3;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar10;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar8;
    func_0x00010bf1c2e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    _objc_release(lVar10);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar10 = lVar1;
    func_0x00010bfb7be0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00();
    if (((ulong)puVar3 & 1) == 0) {
      lVar8 = lVar1;
      func_0x00010bfb7be0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar8 = 0;
    }
    _objc_release(lVar10);
    lVar10 = lVar2;
    func_0x00010bf41a00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c06c000(lVar2);
    lVar5 = lVar1;
    func_0x00010bf12ea0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar10;
    func_0x00010b0e4c28(lVar10,lVar4,lVar5,lVar8,0xffffffffffffffff);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar10);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar10 = lVar2;
    func_0x00010bf62ee0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar10;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00();
    if (((ulong)puVar3 & 1) == 0) {
      lVar5 = lVar2;
      func_0x00010bf62ee0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar5;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
    }
    else {
      lVar9 = 0;
    }
    _objc_release(lVar4);
    _objc_release(lVar10);
    lVar4 = param_3;
    func_0x000105d0b870(param_3,param_4,lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21ace0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c06c000(lVar2);
    func_0x00010c1af2c0(lVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    if (lVar9 != 0) {
      lVar10 = lVar2;
      func_0x00010bf62ee0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar10;
      func_0x00010c1306a0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar5;
      func_0x00010c08fa60();
      _objc_release(lVar5);
      _objc_release(lVar10);
      if (lVar7 != 0) {
        func_0x00010c188dc0(lVar4);
        _objc_unsafeClaimAutoreleasedReturnValue();
        lVar10 = lVar2;
        func_0x00010bf62ee0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar10;
        func_0x00010c1306a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1eab00(lVar4);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(lVar5);
        _objc_release(lVar10);
      }
    }
    func_0x00010c1d7da0(lVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar10 = lVar4;
    func_0x00010bf21f60(lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar9);
    _objc_release(lVar6);
    _objc_release(lVar8);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar10);
  return;
}



/* Entry: 10553b700; end: 10553b707; -[SCBitmojiStickerInjectorImpl sojuGalleryInfoFilterForCTItemInstance:] */

undefined8 FUN_10553b700(void)

{
  return 0;
}



/* Entry: 10553b708; end: 10553b8a3; -[SCBitmojiStickerInjectorImpl ctItemInstanceForStickerState:infoFiltersState:] */

void FUN_10553b708(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c2465a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    uVar2 = param_4;
    func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_1108e5888);
    func_0x00010bf5cd00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar3 = param_3;
    func_0x00010bf5d7a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0844e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00();
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
    if (((ulong)puVar5 & 1) == 0) {
      uVar3 = param_3;
      func_0x00010bf5d7a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf649c0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1;
      func_0x00010c0840e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a99c0();
      _objc_release(lVar7);
      _objc_release(puVar6);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10553b8a4; end: 10553b9eb; -[SCBitmojiStickerInjectorImpl stickerForCTPItem:presentationModelProviderType:] */

void FUN_10553b8a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  FUN_10553aaac();
  if ((int)uVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_10553b9ec;
    uStack_40 = 0x10553b9fc;
    uStack_38 = 0;
    func_0x00010c0c11a0(param_4);
    puVar2 = PTR_PTR_1126ba7a8;
    _objc_alloc(PTR_PTR_1126ba7a8);
    func_0x00010bffa520();
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10553b9ec; end: 10553ba07;  */

void FUN_10553b9ec(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10553ba08; end: 10553ba5f;  */

void FUN_10553ba08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c284010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28),
             PTR_s_updateCTPItemImageSize__11267ea28,param_2);
  return;
}



/* Entry: 10553ba60; end: 10553ba97;  */

void FUN_10553ba60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10553ba98; end: 10553bafb; -[SCBitmojiStickerInjectorImpl stickerForCTItemInstance:presentationModelProviderType:] */

void FUN_10553ba98(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_10553a9ec();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126ba7a8;
    _objc_alloc(PTR_PTR_1126ba7a8);
    func_0x00010c020180();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10553bafc; end: 10553bc9b; -[SCBitmojiStickerInjectorImpl isContextUnlockSupportedForStickerState:] */

undefined8 FUN_10553bafc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (uVar1 = param_3, func_0x00010c27dd80(), uVar1 != 3)) {
LAB_10553bc78:
    uVar7 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010bf5d7a0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == 0) {
LAB_10553bbf8:
      func_0x00010c2465a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b5938;
      uVar7 = param_1;
      func_0x00010c2540c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfbab60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      puVar6 = puVar4;
      func_0x00010bfb7be0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar4);
      _objc_release(param_1);
      if (puVar6 != (undefined *)0x0) goto LAB_10553bc78;
    }
    else {
      uVar2 = param_3;
      func_0x00010bf5d7a0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126ba800;
      _objc_opt_class(PTR_PTR_1126ba800);
      uVar5 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar5 & 1) == 0) goto LAB_10553bbf8;
      uVar1 = param_3;
      func_0x00010bf5d7a0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      uVar1 = uVar2;
      func_0x00010bf1c500();
      _objc_release(uVar2);
      if (uVar1 == 2) goto LAB_10553bc78;
    }
    uVar7 = 1;
  }
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 10553bc9c; end: 10553bca3; -[SCBitmojiStickerInjectorImpl shouldPrepareItemInstanceForContextAction:] */

undefined8 FUN_10553bc9c(void)

{
  return 0;
}



/* Entry: 10553bca4; end: 10553bcab; -[SCBitmojiStickerInjectorImpl prepareItemInstanceForContextAction:] */

undefined8 FUN_10553bca4(void)

{
  return 0;
}



/* Entry: 10553bcac; end: 10553bcaf; -[SCBitmojiStickerInjectorImpl addLoggingParamsWithLoggingParamsBuilder:stickerViews:] */

void FUN_10553bcac(void)

{
  return;
}



/* Entry: 10553bcb0; end: 10553be4b; -[SCBitmojiStickerInjectorImpl shouldFilterCTPItem:presentationModelProvider:] */

undefined8 FUN_10553bcb0(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  FUN_10553aaac();
  if ((int)lVar2 == 0) {
    uVar9 = 1;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar3;
    func_0x00010bfd46e0();
    _objc_release(uVar3);
    lVar2 = param_3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ba808;
    if ((int)uVar9 == 0) {
      uVar9 = 1;
    }
    else {
      _objc_retain(param_4);
      _objc_opt_class(puVar4);
      uVar5 = param_4;
      _objc_opt_isKindOfClass(param_4,puVar4);
      uVar1 = param_4;
      if ((uVar5 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(param_4);
      uVar5 = uVar1;
      func_0x00010bf5d980();
      if (((uint)uVar5 >> 2 & 1) == 0) {
        lVar6 = *(long *)(param_1 + 0x18);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar6;
        func_0x00010c088c60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar6);
        if ((lVar8 == 0) && (lVar8 = lVar2, func_0x00010bf1c500(), lVar8 == 2)) {
          uVar9 = 1;
        }
        else {
          uVar9 = 0;
        }
      }
      else {
        uVar5 = uVar1;
        func_0x00010bf5ecc0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar5;
        func_0x00010c08fa60();
        if ((uVar7 == 0) && (lVar8 = lVar2, func_0x00010bf1c500(), lVar8 == 2)) {
          uVar9 = 1;
        }
        else {
          uVar9 = 0;
        }
        _objc_release(uVar5);
      }
      _objc_release(uVar1);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 10553be4c; end: 10553bec3; -[SCBitmojiStickerInjectorImpl isAnimatedItemInstance:] */

undefined8 FUN_10553be4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c0840e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1c2e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c06c000();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10553bec4; end: 10553bf17; -[SCBitmojiStickerInjectorImpl setDependencies:] */

void FUN_10553bec4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    func_0x00010c1196c0();
    _objc_retainAutoreleasedReturnValue();
    if (param_3 != 0) {
      _objc_retain(param_3);
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      *(long *)(param_1 + 0x30) = param_3;
      _objc_release(uVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 10553bf18; end: 10553bf23; -[SCBitmojiStickerInjectorImpl _ctpItemImageSizeForStickerInjectorImageQuality:] */

bool FUN_10553bf18(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 0;
}



/* Entry: 10553bf24; end: 10553bf83; -[SCBitmojiStickerInjectorImpl .cxx_destruct] */

void FUN_10553bf24(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10553bf84; end: 10553c027;  */

void FUN_10553bf84(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd46e0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126ba808;
    _objc_alloc(PTR_PTR_1126ba808);
    func_0x00010bff7e20();
  }
  puVar3 = PTR_PTR_1126ba810;
  _objc_alloc(PTR_PTR_1126ba810);
  func_0x00010c009f00();
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10553c028; end: 10553c077; -[SCBitmojiStickerInjectorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10553c028(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127257a0);
  _objc_destroyWeak(param_1 + _DAT_112725798);
  _objc_destroyWeak(param_1 + _DAT_11272579c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127257a4);
  return;
}



/* Entry: 10553c078; end: 10553c07b; -[SCCustomStickerInjectorImpl addLoggingParamsWithLoggingParamsBuilder:stickerViews:] */

void FUN_10553c078(void)

{
  return;
}



/* Entry: 10553c07c; end: 10553c0a7; -[SCCustomStickerInjectorImpl isConversionSupportedForStickerState:] */

bool FUN_10553c07c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010c27dd80(param_3);
    return param_3 == 5;
  }
  return false;
}



/* Entry: 10553c0a8; end: 10553c0af; -[SCCustomStickerInjectorImpl isConversionSupportedForSOJUGallerySticker:] */

bool FUN_10553c0a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  bVar1 = false;
  if (param_3 != 0) {
    _objc_retain();
    lVar2 = param_3;
    func_0x00010c27dde0(param_3);
    lVar3 = param_3;
    func_0x00010c2540c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(lVar3);
    bVar1 = lVar3 != 0 && lVar2 == -0x15e045b1;
  }
  return bVar1;
}



/* Entry: 10553c0b0; end: 10553c11f;  */

bool FUN_10553c0b0(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  bVar1 = false;
  if (param_1 != 0) {
    _objc_retain();
    lVar2 = param_1;
    func_0x00010c27dde0(param_1);
    lVar3 = param_1;
    func_0x00010c2540c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(lVar3);
    bVar1 = lVar3 != 0 && lVar2 == -0x15e045b1;
  }
  return bVar1;
}



/* Entry: 10553c120; end: 10553c157; -[SCCustomStickerInjectorImpl isConversionSupportedForCTItemInstance:] */

bool FUN_10553c120(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10553c158(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 10553c158; end: 10553c233;  */

void FUN_10553c158(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if (param_1 != 0) {
    lVar3 = param_1;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf96ee0();
    _objc_release(lVar1);
    _objc_release(lVar3);
    if ((int)lVar2 == 3) {
      lVar1 = param_1;
      func_0x00010c0840e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf61ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar3 != 0) {
        _objc_retain(lVar3);
      }
      _objc_release(lVar3);
      goto LAB_10553c218;
    }
  }
  lVar3 = 0;
LAB_10553c218:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10553c234; end: 10553c23b; -[SCCustomStickerInjectorImpl isConversionSupportedForCTPItem:] */

uint FUN_10553c234(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  
  _objc_retain();
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bf96f00(), lVar1 != 3)) {
    uVar4 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf96da0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ba838;
    _objc_opt_class(PTR_PTR_1126ba838);
    lVar3 = lVar1;
    _objc_opt_isKindOfClass(lVar1,puVar2);
    _objc_release(lVar1);
    uVar4 = (uint)lVar3 & (uint)(lVar1 != 0);
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10553c23c; end: 10553c2cf;  */

uint FUN_10553c23c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar1 = param_1, func_0x00010bf96f00(), lVar1 != 3)) {
    uVar4 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf96da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ba838;
    _objc_opt_class(PTR_PTR_1126ba838);
    lVar3 = lVar1;
    _objc_opt_isKindOfClass(lVar1,puVar2);
    _objc_release(lVar1);
    uVar4 = (uint)lVar3 & (uint)(lVar1 != 0);
  }
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 10553c2d0; end: 10553c383; -[SCCustomStickerInjectorImpl sojuGalleryStickerForStickerState:] */

void FUN_10553c2d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar2 = param_3, func_0x00010c27dd80(), lVar2 != 5)) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x000105d0b188(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21ace0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c06c000(param_3);
    func_0x00010c1af2c0(lVar1,param_2,lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf21f60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10553c384; end: 10553c47f; -[SCCustomStickerInjectorImpl stickerStateForSOJUGallerySticker:sojuGalleryInfoFilters:uniqueId:timelineSegmentTimeRanges:editCapabilities:] */

void FUN_10553c384(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_3;
  FUN_10553c0b0();
  if ((int)uVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010bf5cd00(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ba7d8;
    func_0x00010bf37800(PTR_PTR_1126ba7d8,param_2,param_3,5,0xffffffffea1fba4f,param_1,param_6,
                        param_5,0,param_7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10553c480; end: 10553c637; -[SCCustomStickerInjectorImpl ctItemInstanceForSojuGallerySticker:sojuGalleryInfoFilters:] */

void FUN_10553c480(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_10553c0b0();
  if ((int)lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126ba828;
    _objc_opt_new(PTR_PTR_1126ba828);
    lVar1 = param_3;
    func_0x00010c06c0a0(param_3);
    func_0x00010c1af280(puVar2,param_2,lVar1);
    lVar1 = param_3;
    func_0x00010bf9e600();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar3 != 0) {
      puVar6 = PTR_PTR_1126b0ce8;
      _objc_opt_new(PTR_PTR_1126b0ce8);
      lVar1 = param_3;
      func_0x00010bf9e600(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c182a60(puVar6,param_2,lVar1);
      _objc_release(lVar1);
      lVar1 = param_3;
      func_0x00010bf9e600(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c214440(puVar6,param_2,lVar1);
      _objc_release(lVar1);
      func_0x00010c1c4360(puVar2,param_2,puVar6);
      _objc_release(puVar6);
    }
    puVar4 = PTR_PTR_1126b37c0;
    _objc_opt_new(PTR_PTR_1126b37c0);
    func_0x00010c188860();
    puVar5 = PTR_PTR_1126b0cb8;
    _objc_opt_new(PTR_PTR_1126b0cb8);
    lVar1 = param_3;
    func_0x00010c2540c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x000109161630();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0(puVar5,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar1);
    func_0x00010c196600(puVar5,param_2,puVar4);
    puVar6 = PTR_PTR_1126b0cc0;
    _objc_opt_new(PTR_PTR_1126b0cc0);
    func_0x00010c1b5d40();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10553c638; end: 10553c80f; -[SCCustomStickerInjectorImpl sojuGalleryStickerForCTItemInstance:stickerTransformState:] */

void FUN_10553c638(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  FUN_10553c158();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_3;
    func_0x00010c0840e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010916182c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar6);
    lVar2 = param_3;
    func_0x000105d0b870(param_3,param_4,lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21ace0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1d7da0(lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c06c000(lVar1);
    func_0x00010c1af2c0(lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010c0c45e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar6;
    func_0x00010bf4db80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    _objc_release(lVar6);
    if (lVar5 != 0) {
      lVar6 = lVar1;
      func_0x00010c0c45e0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar6;
      func_0x00010bf4db80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c199840(lVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar6);
    }
    lVar6 = lVar2;
    func_0x00010bf21f60(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 10553c810; end: 10553c817; -[SCCustomStickerInjectorImpl sojuGalleryInfoFilterForCTItemInstance:] */

undefined8 FUN_10553c810(void)

{
  return 0;
}



/* Entry: 10553c818; end: 10553c8bb; -[SCCustomStickerInjectorImpl ctItemInstanceForStickerState:infoFiltersState:] */

void FUN_10553c818(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c2465a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    uVar2 = param_4;
    func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_1108e5888);
    func_0x00010bf5cd00(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10553c8bc; end: 10553c917; -[SCCustomStickerInjectorImpl stickerForCTPItem:presentationModelProviderType:] */

void FUN_10553c8bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_10553c23c();
  if ((int)uVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126ba830;
    _objc_alloc(PTR_PTR_1126ba830);
    func_0x00010bffa500();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10553c918; end: 10553c97b; -[SCCustomStickerInjectorImpl stickerForCTItemInstance:presentationModelProviderType:] */

void FUN_10553c918(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_10553c158();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126ba830;
    _objc_alloc(PTR_PTR_1126ba830);
    func_0x00010c020180();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10553c97c; end: 10553c9f3; -[SCCustomStickerInjectorImpl isAnimatedItemInstance:] */

undefined8 FUN_10553c97c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c0840e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf61ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c06c000();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10553c9f4; end: 10553ca0f;  */

void FUN_10553c9f4(void)

{
  _objc_alloc_init(PTR_PTR_1126ba840);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10553ca10; end: 10553ca1f; -[SCCustomStickerInjectorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10553ca10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127257a8);
  return;
}



/* Entry: 10553ca20; end: 10553ca23; -[SCEmojiStickerInjectorImpl addLoggingParamsWithLoggingParamsBuilder:stickerViews:] */

void FUN_10553ca20(void)

{
  return;
}



/* Entry: 10553ca24; end: 10553ca2b; -[SCEmojiStickerInjectorImpl isConversionSupportedForStickerState:] */

bool FUN_10553ca24(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain();
  if ((param_3 == 0) || (lVar2 = param_3, func_0x00010c27dd80(), lVar2 != 1)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x00010bf8e2c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 != 0;
    _objc_release();
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10553ca2c; end: 10553ca8f;  */

bool FUN_10553ca2c(long param_1)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar2 = param_1, func_0x00010c27dd80(), lVar2 != 1)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010bf8e2c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 != 0;
    _objc_release();
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10553ca90; end: 10553ca97; -[SCEmojiStickerInjectorImpl isConversionSupportedForSOJUGallerySticker:] */

bool FUN_10553ca90(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain();
  if ((param_3 == 0) || (lVar2 = param_3, func_0x00010c27dde0(), lVar2 != 0x3f08826)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x00010bf8e2c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 != 0;
    _objc_release();
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10553ca98; end: 10553cb03;  */

bool FUN_10553ca98(long param_1)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar2 = param_1, func_0x00010c27dde0(), lVar2 != 0x3f08826)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010bf8e2c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 != 0;
    _objc_release();
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10553cb04; end: 10553cb0b; -[SCEmojiStickerInjectorImpl isConversionSupportedForCTItemInstance:] */

bool FUN_10553cb04(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf96ee0();
    bVar1 = (int)lVar3 == 4;
    _objc_release(lVar2);
    _objc_release(param_3);
  }
  return bVar1;
}



/* Entry: 10553cb0c; end: 10553cb77;  */

bool FUN_10553cb0c(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf96ee0();
    bVar1 = (int)lVar3 == 4;
    _objc_release(lVar2);
    _objc_release(param_1);
  }
  return bVar1;
}



/* Entry: 10553cb78; end: 10553cb7f; -[SCEmojiStickerInjectorImpl isConversionSupportedForCTPItem:] */

uint FUN_10553cb78(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  
  _objc_retain();
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bf96f00(), lVar1 != 5)) {
    uVar4 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf96da0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ba858;
    _objc_opt_class(PTR_PTR_1126ba858);
    lVar3 = lVar1;
    _objc_opt_isKindOfClass(lVar1,puVar2);
    _objc_release(lVar1);
    uVar4 = (uint)lVar3 & (uint)(lVar1 != 0);
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10553cb80; end: 10553cc13;  */

uint FUN_10553cb80(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar1 = param_1, func_0x00010bf96f00(), lVar1 != 5)) {
    uVar4 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf96da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ba858;
    _objc_opt_class(PTR_PTR_1126ba858);
    lVar3 = lVar1;
    _objc_opt_isKindOfClass(lVar1,puVar2);
    _objc_release(lVar1);
    uVar4 = (uint)lVar3 & (uint)(lVar1 != 0);
  }
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 10553cc14; end: 10553ccd3; -[SCEmojiStickerInjectorImpl sojuGalleryStickerForStickerState:] */

void FUN_10553cc14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  FUN_10553ca2c();
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x000105d0b188(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21ace0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bf8e2c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c194460(uVar1,param_2,uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010bf21f60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10553ccd4; end: 10553cdbf; -[SCEmojiStickerInjectorImpl stickerStateForSOJUGallerySticker:sojuGalleryInfoFilters:uniqueId:timelineSegmentTimeRanges:editCapabilities:] */

void FUN_10553ccd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_3;
  FUN_10553ca98();
  if ((int)uVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010bf5cd00(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ba7d8;
    func_0x00010bf8e920(PTR_PTR_1126ba7d8,param_2,param_3,param_1,param_6,param_5,0,param_7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10553cdc0; end: 10553ced7; -[SCEmojiStickerInjectorImpl ctItemInstanceForSojuGallerySticker:sojuGalleryInfoFilters:] */

void FUN_10553cdc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_10553ca98();
  if ((int)uVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126b0cc0;
    _objc_opt_new(PTR_PTR_1126b0cc0);
    puVar2 = PTR_PTR_1126b0cb8;
    _objc_opt_new(PTR_PTR_1126b0cb8);
    puVar3 = PTR_PTR_1126b37c0;
    _objc_opt_new(PTR_PTR_1126b37c0);
    puVar4 = PTR_PTR_1126ba850;
    _objc_opt_new(PTR_PTR_1126ba850);
    uVar1 = param_3;
    func_0x00010bf8e2c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x000109163c84();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f40(puVar4,param_2,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar1);
    func_0x00010c194460(puVar3,param_2,puVar4);
    func_0x00010c196600(puVar2,param_2,puVar3);
    func_0x00010c1b5d40(puVar6,param_2,puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10553ced8; end: 10553d01f; -[SCEmojiStickerInjectorImpl sojuGalleryStickerForCTItemInstance:stickerTransformState:] */

void FUN_10553ced8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar4 = param_3;
  FUN_10553cb0c();
  if ((int)uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = param_3;
    func_0x00010c0840e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf8e2c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfe1140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar4);
    uVar1 = param_3;
    func_0x000105d0b870(param_3,param_4,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21ace0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x000109164214(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c194460(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = uVar1;
    func_0x00010bf21f60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}


