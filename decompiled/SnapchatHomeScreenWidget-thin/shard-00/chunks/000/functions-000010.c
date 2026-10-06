/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100049574; end: 10004958b;  */

undefined8 * FUN_100049574(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10004958c; end: 1000495c3;  */

void FUN_10004958c(long *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_3 - param_2;
  }
  __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ();
  *param_1 = param_2;
  param_1[1] = lVar1;
  return;
}



/* Entry: 1000495c4; end: 100049dcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1000495c4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  uint uVar1;
  double dVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  double *pdVar17;
  double dVar18;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  double dStack_c0;
  ulong uStack_b8;
  byte bStack_a1;
  long lStack_a0;
  ulong uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  
  lVar8 = 0;
  uStack_c8 = param_4;
  __s10Foundation3URLVMa();
  lVar16 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar16 + 0x40));
  puVar14 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar15 = (long)puVar14 - extraout_x12;
  if (param_6 != 0) {
    dVar18 = *(double *)(param_6 + _DAT_1000c64f0);
    dVar2 = ((double *)(param_6 + _DAT_1000c64f0))[1];
    puStack_90 = &uStack_88;
    uStack_88 = 0;
    if (((ulong)dVar2 >> 0x3c & 1) == 0) {
      if (((ulong)dVar2 >> 0x3d & 1) == 0) {
        if (((ulong)dVar18 >> 0x3c & 1) == 0) goto LAB_100049b4c;
        pdVar17 = (double *)((long)dVar2 + 0x20);
        bVar3 = *(byte *)pdVar17;
        if (((bVar3 - 9 < 5) || (bVar3 == 0)) || (bVar3 == 0x20)) goto LAB_1000496e4;
        _objc_retain(param_6);
        _swift_bridgeObjectRetain(dVar2);
        __swift_stdlib_strtod_clocale(pdVar17,&uStack_88);
        if (pdVar17 != (double *)0x0) goto LAB_100049968;
LAB_1000496c4:
        bStack_a1 = 0;
      }
      else {
        uStack_b8 = (ulong)dVar2 & 0xffffffffffffff;
        uVar1 = SUB84(dVar18,0) & 0xff;
        dStack_c0 = dVar18;
        if (((uVar1 - 9 < 5) || (((ulong)dVar18 & 0xff) == 0)) || (uVar1 == 0x20)) {
LAB_1000496e4:
          bStack_a1 = 0;
          _objc_retain(param_6);
          _swift_bridgeObjectRetain(dVar2);
        }
        else {
          _objc_retain(param_6);
          _swift_bridgeObjectRetain(dVar2);
          pdVar17 = &dStack_c0;
          __swift_stdlib_strtod_clocale(pdVar17,&uStack_88);
          if (pdVar17 == (double *)0x0) goto LAB_1000496c4;
LAB_100049968:
          bStack_a1 = *(byte *)pdVar17 == 0;
        }
      }
    }
    else {
LAB_100049b4c:
      _objc_retain(param_6);
      _swift_bridgeObjectRetain(dVar2);
      __ss11_StringGutsV16_slowWithCStringyxxSPys4Int8VGKXEKlF
                (&bStack_a1,0x100049eac,&lStack_a0,dVar18,dVar2,PTR___sSbN_1000b11e8);
    }
    _swift_bridgeObjectRelease(dVar2);
    uVar12 = uStack_88;
    if ((bStack_a1 & 1) != 0) {
      dVar18 = *(double *)(param_6 + _DAT_1000c64f8);
      dVar2 = ((double *)(param_6 + _DAT_1000c64f8))[1];
      puStack_90 = &uStack_88;
      uStack_88 = 0;
      if (((ulong)dVar2 >> 0x3c & 1) == 0) {
        if (((ulong)dVar2 >> 0x3d & 1) == 0) {
          if (((ulong)dVar18 >> 0x3c & 1) == 0) goto LAB_100049b88;
          pdVar17 = (double *)((long)dVar2 + 0x20);
          bVar3 = *(byte *)pdVar17;
          if (((bVar3 - 9 < 5) || (bVar3 == 0)) || (bVar3 == 0x20)) goto LAB_100049788;
          _swift_bridgeObjectRetain(dVar2);
          __swift_stdlib_strtod_clocale(pdVar17,&uStack_88);
          if (pdVar17 != (double *)0x0) goto LAB_1000499c0;
LAB_100049768:
          bStack_a1 = 0;
        }
        else {
          uStack_b8 = (ulong)dVar2 & 0xffffffffffffff;
          uVar1 = SUB84(dVar18,0) & 0xff;
          dStack_c0 = dVar18;
          if (((uVar1 - 9 < 5) || (((ulong)dVar18 & 0xff) == 0)) || (uVar1 == 0x20)) {
LAB_100049788:
            bStack_a1 = 0;
            _swift_bridgeObjectRetain(dVar2);
          }
          else {
            _swift_bridgeObjectRetain(dVar2);
            pdVar17 = &dStack_c0;
            __swift_stdlib_strtod_clocale(pdVar17,&uStack_88);
            if (pdVar17 == (double *)0x0) goto LAB_100049768;
LAB_1000499c0:
            bStack_a1 = *(byte *)pdVar17 == 0;
          }
        }
      }
      else {
LAB_100049b88:
        _swift_bridgeObjectRetain(dVar2);
        __ss11_StringGutsV16_slowWithCStringyxxSPys4Int8VGKXEKlF
                  (&bStack_a1,0x100049ec0,&lStack_a0,dVar18,dVar2,PTR___sSbN_1000b11e8);
      }
      _swift_bridgeObjectRelease(dVar2);
      uVar7 = uStack_88;
      if ((bStack_a1 & 1) != 0) {
        puVar9 = PTR__OBJC_CLASS___CLLocation_1000c2118;
        _objc_allocWithZone(PTR__OBJC_CLASS___CLLocation_1000c2118);
        func_0x000100086d40(uVar12,uVar7);
        puVar10 = PTR__OBJC_CLASS___CLLocation_1000c2118;
        _objc_allocWithZone(PTR__OBJC_CLASS___CLLocation_1000c2118);
        dVar18 = param_1;
        func_0x000100086d40(param_1,param_2);
        func_0x000100086840(puVar9);
        _objc_release(puVar9);
        _objc_release(puVar10);
        if (ABS(dVar18) <= 50.0) {
          return param_6;
        }
      }
    }
    _objc_release(param_6);
  }
  if (param_5 == 0) {
    return 0;
  }
  func_0x000100087160(param_5);
  _objc_retainAutoreleasedReturnValue();
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar14);
  _objc_release(param_5);
  (**(code **)(lVar16 + 0x20))(lVar15,puVar14,lVar8);
  puVar9 = PTR__OBJC_CLASS___NSData_1000c2100;
  _objc_allocWithZone();
  puVar10 = puVar9;
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  func_0x000100086c80();
  _objc_release(puVar10);
  if (puVar9 == (undefined *)0x0) goto LAB_100049a24;
  uStack_98 = 0xf000000000000000;
  lStack_a0 = 0;
  __s10Foundation4DataV34_conditionallyBridgeFromObjectiveC_6resultSbSo6NSDataC_ACSgztFZ
            (puVar9,&lStack_a0);
  _objc_release(puVar9);
  uVar5 = uStack_98;
  lVar4 = lStack_a0;
  if (0xe < uStack_98 >> 0x3c) goto LAB_100049a24;
  lVar11 = lStack_a0;
  FUN_100046f58(lStack_a0,uStack_98);
  if (lVar11 == 0) {
    (**(code **)(lVar16 + 8))(lVar15,lVar8);
    FUN_1000275d4(lVar4,uVar5);
    return 0;
  }
  dVar18 = *(double *)(lVar11 + _DAT_1000c64f0);
  dVar2 = ((double *)(lVar11 + _DAT_1000c64f0))[1];
  puStack_90 = &uStack_88;
  uStack_88 = 0;
  if (((ulong)dVar2 >> 0x3c & 1) == 0) {
    if (((ulong)dVar2 >> 0x3d & 1) == 0) {
      if (((ulong)dVar18 >> 0x3c & 1) == 0) goto LAB_100049c7c;
      pdVar17 = (double *)((long)dVar2 + 0x20);
      if ((*(byte *)pdVar17 < 0x21) &&
         ((1L << ((ulong)*(byte *)pdVar17 & 0x3f) & 0x100003e01U) != 0)) goto LAB_100049a04;
      _swift_bridgeObjectRetain(dVar2);
LAB_100049a74:
      __swift_stdlib_strtod_clocale(pdVar17,&uStack_88);
      if (pdVar17 != (double *)0x0) {
        bVar3 = *(byte *)pdVar17;
        _swift_bridgeObjectRelease(dVar2);
        if (bVar3 == 0) goto LAB_100049a8c;
        goto LAB_100049a10;
      }
    }
    else {
      uStack_b8 = (ulong)dVar2 & 0xffffffffffffff;
      dStack_c0 = dVar18;
      if ((0x20 < (SUB84(dVar18,0) & 0xff)) || ((1L << ((ulong)dVar18 & 0x3f) & 0x100003e01U) == 0))
      {
        _swift_bridgeObjectRetain(dVar2);
        pdVar17 = &dStack_c0;
        goto LAB_100049a74;
      }
LAB_100049a04:
      _swift_bridgeObjectRetain(dVar2);
    }
    _swift_bridgeObjectRelease();
  }
  else {
LAB_100049c7c:
    _swift_bridgeObjectRetain(dVar2);
    __ss11_StringGutsV16_slowWithCStringyxxSPys4Int8VGKXEKlF
              (&bStack_a1,FUN_100049dcc,&lStack_a0,dVar18,dVar2,PTR___sSbN_1000b11e8);
    _swift_bridgeObjectRelease(dVar2);
    if ((bStack_a1 & 1) != 0) {
LAB_100049a8c:
      uVar12 = uStack_88;
      dVar18 = *(double *)(lVar11 + _DAT_1000c64f8);
      dVar2 = ((double *)(lVar11 + _DAT_1000c64f8))[1];
      puStack_90 = &uStack_88;
      uStack_88 = 0;
      if (((ulong)dVar2 >> 0x3c & 1) == 0) {
        if (((ulong)dVar2 >> 0x3d & 1) == 0) {
          if (((ulong)dVar18 >> 0x3c & 1) == 0) goto LAB_100049d8c;
          pdVar17 = (double *)((long)dVar2 + 0x20);
          if ((*(byte *)pdVar17 < 0x21) &&
             ((1L << ((ulong)*(byte *)pdVar17 & 0x3f) & 0x100003e01U) != 0)) goto LAB_100049b28;
          _swift_bridgeObjectRetain(dVar2);
LAB_100049bc8:
          __swift_stdlib_strtod_clocale(pdVar17,&uStack_88);
          if (pdVar17 != (double *)0x0) {
            bVar3 = *(byte *)pdVar17;
            _swift_bridgeObjectRelease(dVar2);
            if (bVar3 == 0) {
LAB_100049be0:
              uVar7 = uStack_88;
              puVar9 = PTR__OBJC_CLASS___CLLocation_1000c2118;
              _objc_allocWithZone(PTR__OBJC_CLASS___CLLocation_1000c2118);
              func_0x000100086d40(uVar12,uVar7);
              puVar10 = PTR__OBJC_CLASS___CLLocation_1000c2118;
              _objc_allocWithZone(PTR__OBJC_CLASS___CLLocation_1000c2118);
              dVar18 = param_1;
              func_0x000100086d40(param_1,param_2);
              func_0x000100086840(puVar9);
              _objc_release(puVar9);
              _objc_release(puVar10);
              if (20.0 < ABS(dVar18)) {
                (**(code **)(lVar16 + 8))(lVar15,lVar8);
                _objc_release(lVar11);
                FUN_1000275d4(lVar4,uVar5);
                return 0;
              }
              lStack_a0 = 0;
              uStack_98 = 0xe000000000000000;
              __ss11_StringGutsV4growyySiF(0x52);
              __sSS6appendyySSF(0xd000000000000042,0x800000010009dbb0);
              uVar12 = 0;
              dStack_c0 = param_1;
              uStack_b8 = param_2;
              func_0x000100045b90(0);
              __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                        (&dStack_c0,&lStack_a0,uVar12,
                         PTR___ss26DefaultStringInterpolationVN_1000b1408,
                         PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000b1410);
              __sSS6appendyySSF(0x646e65697266202c,0xec000000203a6449);
              __sSS6appendyySSF(param_3,uStack_c8);
              uVar6 = uStack_98;
              lVar13 = lStack_a0;
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_a0,uStack_98);
              _swift_bridgeObjectRelease(uVar6);
              FUN_1000275d4(lVar4,uVar5);
              _objc_release(lVar13);
              (**(code **)(lVar16 + 8))(lVar15,lVar8);
              return lVar11;
            }
            goto LAB_100049b34;
          }
        }
        else {
          uStack_b8 = (ulong)dVar2 & 0xffffffffffffff;
          dStack_c0 = dVar18;
          if ((0x20 < (SUB84(dVar18,0) & 0xff)) ||
             ((1L << ((ulong)dVar18 & 0x3f) & 0x100003e01U) == 0)) {
            _swift_bridgeObjectRetain(dVar2);
            pdVar17 = &dStack_c0;
            goto LAB_100049bc8;
          }
LAB_100049b28:
          _swift_bridgeObjectRetain(dVar2);
        }
        _swift_bridgeObjectRelease();
      }
      else {
LAB_100049d8c:
        _swift_bridgeObjectRetain(dVar2);
        __ss11_StringGutsV16_slowWithCStringyxxSPys4Int8VGKXEKlF
                  (&bStack_a1,FUN_100049e98,&lStack_a0,dVar18,dVar2,PTR___sSbN_1000b11e8);
        _swift_bridgeObjectRelease(dVar2);
        if ((bStack_a1 & 1) != 0) goto LAB_100049be0;
      }
LAB_100049b34:
      _objc_release(lVar11);
      FUN_1000275d4(lVar4,uVar5);
      goto LAB_100049a24;
    }
  }
LAB_100049a10:
  FUN_1000275d4(lVar4,uVar5);
  _objc_release(lVar11);
LAB_100049a24:
  (**(code **)(lVar16 + 8))(lVar15,lVar8);
  return 0;
}



/* Entry: 100049dcc; end: 100049ddf;  */

void FUN_100049dcc(void)

{
  FUN_100049de0();
  return;
}



/* Entry: 100049de0; end: 100049e57;  */

void FUN_100049de0(undefined1 *param_1,byte *param_2)

{
  bool bVar1;
  long unaff_x20;
  
  if (*param_2 < 0x21 && (1L << ((ulong)*param_2 & 0x3f) & 0x100003e01U) != 0) {
    *param_1 = 0;
    return;
  }
  __swift_stdlib_strtod_clocale(param_2,*(undefined8 *)(unaff_x20 + 0x10));
  if (param_2 == (byte *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = *param_2 == 0;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 100049e58; end: 100049e97;  */

void FUN_100049e58(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 100049e98; end: 100049f17;  */

void FUN_100049e98(void)

{
  FUN_100049dcc();
  return;
}



/* Entry: 100049f18; end: 100049ff7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100049f18(undefined8 *param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  code *pcVar15;
  long in_x6;
  undefined8 in_x7;
  uint uVar16;
  undefined *puVar17;
  undefined8 *unaff_x20;
  long lVar18;
  byte unaff_w21;
  undefined8 *puVar19;
  undefined8 *unaff_x22;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 auStack_f8 [3];
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  long lStack_c8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  plStack_38 = *(long **)PTR____stack_chk_guard_1000b0c78;
  puVar3 = PTR__OBJC_CLASS___NSKeyedArchiver_1000c2128;
  _objc_opt_self();
  uStack_40 = 0;
  pcVar15 = (code *)&uStack_40;
  uVar14 = 0;
  func_0x000100086420();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uStack_40;
  _objc_retain();
  if (puVar3 == (undefined *)0x0) {
    uVar5 = uVar4;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release(uVar4);
    _swift_willThrow();
    _swift_errorRelease(uVar5);
    puVar17 = (undefined *)0x0;
    lVar18 = -0x1000000000000000;
    lVar13 = param_2;
  }
  else {
    puVar17 = puVar3;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    lVar13 = param_2;
    _objc_release(puVar3);
    lVar18 = param_2;
  }
  if (*(long **)PTR____stack_chk_guard_1000b0c78 == plStack_38) {
    auVar20._8_8_ = lVar18;
    auVar20._0_8_ = puVar17;
    return auVar20;
  }
  ___stack_chk_fail();
  plVar2 = plStack_38;
  if ((ulong)param_1 >> 0x3c < 0xf) {
    uVar1 = (uint)((ulong)param_1 >> 0x20);
    uVar16 = uVar1 >> 0x1e;
    if (1 < uVar1 >> 0x1e) {
      if (uVar16 != 2) goto LAB_10004a25c;
      if (*(long *)(lVar13 + 0x10) != *(long *)(lVar13 + 0x18)) goto LAB_10004a088;
      goto LAB_10004a268;
    }
    if (uVar16 == 0) {
      if (((ulong)param_1 & 0xff000000000000) == 0) goto LAB_10004a25c;
    }
    else {
      if ((long)(int)lVar13 == lVar13 >> 0x20) goto LAB_10004a268;
LAB_10004a088:
      FUN_10004aa04(lVar13,param_1);
    }
    puVar6 = (undefined8 *)PTR__OBJC_CLASS___UIImage_1000c20c0;
    _objc_allocWithZone();
    func_0x00010001c120(lVar13,param_1);
    lVar18 = lVar13;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(lVar13,param_1);
    func_0x000100086ca0();
    _objc_release(lVar18);
    FUN_1000275d4(lVar13,param_1);
    if (puVar6 == (undefined8 *)0x0) {
LAB_10004a25c:
      FUN_1000275d4(lVar13,param_1);
      goto LAB_10004a268;
    }
    puVar19 = puVar6;
    _objc_retain();
    (*pcVar15)(puVar6);
    _objc_release(puVar19);
    _swift_beginAccess(in_x6 + 0x10,auStack_f8,0,0);
    in_x6 = in_x6 + 0x10;
    _swift_weakLoadStrong();
    if (in_x6 != 0) {
      FUN_10004aa18(in_x6 + 0x28,&uStack_e0);
      _swift_release(in_x6);
      uVar4 = uStack_40;
      if (lStack_c8 == 0) {
        FUN_1000275d4(lVar13,param_1);
        _objc_release(puVar19);
        puVar6 = (undefined8 *)0x1000c6668;
        puVar19 = &uStack_e0;
        FUN_10004aff8(puVar19,0x1000c6668,&UNK_10008c650);
        goto LAB_10004a3ac;
      }
      func_0x000100013de4();
      uStack_108 = uStack_48;
      uStack_100 = uVar4;
      _swift_bridgeObjectRetain(uVar4);
      __sSS6appendyySSF(0x44332d,0xe300000000000000);
      uVar14 = uStack_100;
      uVar4 = uStack_108;
      lVar7 = 0;
      func_0x000100045ab0();
      lVar18 = lVar7;
      _objc_allocWithZone();
      puVar6 = (undefined8 *)(lVar18 + _DAT_1000c60f8);
      *puVar6 = in_x7;
      puVar6[1] = uStack_50;
      puVar6 = (undefined8 *)(lVar18 + _DAT_1000c6100);
      *puVar6 = uVar4;
      puVar6[1] = uVar14;
      *(undefined8 **)(lVar18 + _DAT_1000c6108) = puVar19;
      puVar3 = PTR_s_init_1000c1bf0;
      lStack_118 = lVar18;
      lStack_110 = lVar7;
      _objc_retain();
      _swift_bridgeObjectRetain(uVar14);
      _swift_bridgeObjectRetain(uStack_50);
      plVar8 = &lStack_118;
      _objc_msgSendSuper2(plVar8,puVar3);
      plVar9 = plVar2;
      puVar6 = unaff_x22;
      FUN_100044f30();
      if (plVar9 == (long *)0x0) {
        _objc_release(puVar19);
        FUN_1000275d4(lVar13,param_1);
        puVar6 = param_1;
LAB_10004a424:
        _swift_bridgeObjectRelease(uVar14);
        plVar9 = plVar8;
      }
      else {
        plVar10 = plVar8;
        FUN_100049f18(plVar8);
        if (0xe < (ulong)puVar6 >> 0x3c) {
          _objc_release(puVar19);
          FUN_1000275d4(lVar13,param_1);
          _objc_release(plVar9);
          puVar6 = param_1;
          goto LAB_10004a424;
        }
        plVar12 = plVar10;
        __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF();
        func_0x000100087960(plVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(plVar12);
        uStack_108 = 0;
        uStack_100 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x66);
        __sSS6appendyySSF(0xd000000000000048,0x800000010009dc90);
        __sSS6appendyySSF(uVar4,uVar14);
        _swift_bridgeObjectRelease(uVar14);
        __sSS6appendyySSF(0x726174617661202c,0xec000000203a6449);
        __sSS6appendyySSF(in_x7,uStack_50);
        __sSS6appendyySSF(0x646e65697266202c,0xec000000203a6449);
        __sSS6appendyySSF(plVar2,unaff_x22);
        uVar4 = uStack_100;
        uVar14 = uStack_108;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_108,uStack_100);
        _objc_release(puVar19);
        _swift_bridgeObjectRelease(uVar4);
        FUN_1000275d4(lVar13,param_1);
        _objc_release(uVar14);
        _objc_release(plVar8);
        FUN_1000275d4(plVar10,puVar6);
      }
      _objc_release(plVar9);
      puVar19 = &uStack_e0;
      FUN_100012b94(puVar19);
      goto LAB_10004a3ac;
    }
    FUN_1000275d4(lVar13,param_1);
    puVar6 = param_1;
  }
  else {
LAB_10004a268:
    uStack_e0 = 0;
    puStack_d8 = (undefined8 *)0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x40);
    __sSS6appendyySSF(0xd00000000000003a,0x800000010009dc50);
    __sSS6appendyySSF(plVar2,unaff_x22);
    __sSS6appendyySSF(0x203a,0xe200000000000000);
    puVar3 = &UNK_10008c648;
    auStack_f8[0] = uVar14;
    func_0x0001000100d0(0x1000c6658,&UNK_10008c648);
    __sSq16debugDescriptionSSvg();
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar3);
    puVar19 = puStack_d8;
    puVar6 = puStack_d8;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_e0,puStack_d8);
    _objc_release();
    _swift_bridgeObjectRelease(puVar19);
    if ((unaff_w21 & 1) == 0) {
LAB_10004a34c:
      puVar19 = (undefined8 *)0x0;
    }
    else {
      puVar6 = &uStack_e0;
      _swift_beginAccess(in_x6 + 0x10,puVar6,0,0);
      in_x6 = in_x6 + 0x10;
      _swift_weakLoadStrong();
      if (in_x6 == 0) goto LAB_10004a34c;
      puVar11 = unaff_x20;
      if (unaff_x20 == (undefined8 *)0x0) {
        if (lRam00000001000c6660 != -1) {
          puVar6 = (undefined8 *)0x10004a8bc;
          _swift_once(0x1000c6660,0x10004a8bc);
        }
        puVar11 = puRam00000001000d0f38;
        _objc_retain(puRam00000001000d0f38);
      }
      _objc_retain(unaff_x20);
      puVar19 = puVar11;
      FUN_10004a8f8(puVar11);
      _swift_release(in_x6);
      _objc_release(puVar11);
    }
    (*pcVar15)(puVar19);
  }
  _objc_release(puVar19);
LAB_10004a3ac:
  auVar21._8_8_ = puVar6;
  auVar21._0_8_ = puVar19;
  return auVar21;
}



/* Entry: 100049ff8; end: 10004a857;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100049ff8(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,long *param_12,ulong param_13,
                  byte param_14,undefined4 param_15,undefined *param_16)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint uVar13;
  undefined *puVar14;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 auStack_a8 [3];
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  
  if (param_3 >> 0x3c < 0xf) {
    uVar2 = (uint)(param_3 >> 0x20);
    uVar13 = uVar2 >> 0x1e;
    if (uVar2 >> 0x1e < 2) {
      if (uVar13 == 0) {
        if ((param_3 & 0xff000000000000) == 0) goto LAB_10004a25c;
      }
      else {
        if ((long)(int)param_2 == param_2 >> 0x20) goto LAB_10004a268;
LAB_10004a088:
        FUN_10004aa04(param_2,param_3);
      }
      puVar4 = PTR__OBJC_CLASS___UIImage_1000c20c0;
      _objc_allocWithZone();
      func_0x00010001c120(param_2,param_3);
      lVar5 = param_2;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_2,param_3);
      func_0x000100086ca0();
      _objc_release(lVar5);
      FUN_1000275d4(param_2,param_3);
      if (puVar4 != (undefined *)0x0) {
        puVar14 = puVar4;
        _objc_retain();
        (*param_5)(puVar4);
        _objc_release(puVar14);
        _swift_beginAccess(param_7 + 0x10,auStack_a8,0,0);
        param_7 = param_7 + 0x10;
        _swift_weakLoadStrong();
        if (param_7 != 0) {
          FUN_10004aa18(param_7 + 0x28,&uStack_90);
          _swift_release(param_7);
          if (lStack_78 == 0) {
            FUN_1000275d4(param_2,param_3);
            _objc_release(puVar14);
            FUN_10004aff8(&uStack_90,0x1000c6668,&UNK_10008c650);
            return;
          }
          func_0x000100013de4();
          uStack_b8 = param_10;
          uStack_b0 = param_11;
          _swift_bridgeObjectRetain(param_11);
          __sSS6appendyySSF(0x44332d,0xe300000000000000);
          uVar11 = uStack_b0;
          uVar3 = uStack_b8;
          lVar6 = 0;
          func_0x000100045ab0();
          lVar5 = lVar6;
          _objc_allocWithZone();
          puVar1 = (undefined8 *)(lVar5 + _DAT_1000c60f8);
          *puVar1 = param_8;
          puVar1[1] = param_9;
          puVar1 = (undefined8 *)(lVar5 + _DAT_1000c6100);
          *puVar1 = uVar3;
          puVar1[1] = uVar11;
          *(undefined **)(lVar5 + _DAT_1000c6108) = puVar14;
          puVar4 = PTR_s_init_1000c1bf0;
          lStack_c8 = lVar5;
          lStack_c0 = lVar6;
          _objc_retain();
          _swift_bridgeObjectRetain(uVar11);
          _swift_bridgeObjectRetain(param_9);
          plVar7 = &lStack_c8;
          _objc_msgSendSuper2(plVar7,puVar4);
          plVar8 = param_12;
          uVar12 = param_13;
          FUN_100044f30();
          if (plVar8 == (long *)0x0) {
            _objc_release(puVar14);
            FUN_1000275d4(param_2,param_3);
          }
          else {
            plVar9 = plVar7;
            FUN_100049f18(plVar7);
            if (uVar12 >> 0x3c < 0xf) {
              plVar10 = plVar9;
              __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF();
              func_0x000100087960(plVar8);
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              _objc_release(plVar10);
              uStack_b8 = 0;
              uStack_b0 = 0xe000000000000000;
              __ss11_StringGutsV4growyySiF(0x66);
              __sSS6appendyySSF(0xd000000000000048,0x800000010009dc90);
              __sSS6appendyySSF(uVar3,uVar11);
              _swift_bridgeObjectRelease(uVar11);
              __sSS6appendyySSF(0x726174617661202c,0xec000000203a6449);
              __sSS6appendyySSF(param_8,param_9);
              __sSS6appendyySSF(0x646e65697266202c,0xec000000203a6449);
              __sSS6appendyySSF(param_12,param_13);
              uVar3 = uStack_b0;
              uVar11 = uStack_b8;
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_b8,uStack_b0);
              _objc_release(puVar14);
              _swift_bridgeObjectRelease(uVar3);
              FUN_1000275d4(param_2,param_3);
              _objc_release(uVar11);
              _objc_release(plVar7);
              FUN_1000275d4(plVar9,uVar12);
              goto LAB_10004a568;
            }
            _objc_release(puVar14);
            FUN_1000275d4(param_2,param_3);
            _objc_release(plVar8);
          }
          _swift_bridgeObjectRelease(uVar11);
          plVar8 = plVar7;
LAB_10004a568:
          _objc_release(plVar8);
          FUN_100012b94(&uStack_90);
          return;
        }
        FUN_1000275d4(param_2,param_3);
        goto LAB_10004a3a8;
      }
    }
    else if (uVar13 == 2) {
      if (*(long *)(param_2 + 0x10) != *(long *)(param_2 + 0x18)) goto LAB_10004a088;
      goto LAB_10004a268;
    }
LAB_10004a25c:
    FUN_1000275d4(param_2,param_3);
  }
LAB_10004a268:
  uStack_90 = 0;
  uStack_88 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x40);
  __sSS6appendyySSF(0xd00000000000003a,0x800000010009dc50);
  __sSS6appendyySSF(param_12,param_13);
  __sSS6appendyySSF(0x203a,0xe200000000000000);
  puVar4 = &UNK_10008c648;
  auStack_a8[0] = param_4;
  func_0x0001000100d0(0x1000c6658,&UNK_10008c648);
  __sSq16debugDescriptionSSvg();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  uVar3 = uStack_88;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_90,uStack_88);
  _objc_release();
  _swift_bridgeObjectRelease(uVar3);
  if ((param_14 & 1) == 0) {
LAB_10004a34c:
    puVar14 = (undefined *)0x0;
  }
  else {
    _swift_beginAccess(param_7 + 0x10,&uStack_90,0,0);
    param_7 = param_7 + 0x10;
    _swift_weakLoadStrong();
    if (param_7 == 0) goto LAB_10004a34c;
    puVar4 = param_16;
    if (param_16 == (undefined *)0x0) {
      if (lRam00000001000c6660 != -1) {
        _swift_once(0x1000c6660,0x10004a8bc);
      }
      puVar4 = puRam00000001000d0f38;
      _objc_retain(puRam00000001000d0f38);
    }
    _objc_retain(param_16);
    puVar14 = puVar4;
    FUN_10004a8f8(puVar4);
    _swift_release(param_7);
    _objc_release(puVar4);
  }
  (*param_5)(puVar14);
LAB_10004a3a8:
  _objc_release(puVar14);
  return;
}



/* Entry: 10004a858; end: 10004a8f7;  */

void FUN_10004a858(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_10004aff8(unaff_x20 + 0x28,0x1000c6668,&UNK_10008c650);
                    /* WARNING: Could not recover jumptable at 0x000100086090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_1000b1578)();
  return;
}



/* Entry: 10004a8f8; end: 10004aa03;  */

undefined * FUN_10004a8f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = 0xd000000000000021;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010009dce0);
  puVar2 = PTR__OBJC_CLASS___UIImage_1000c20c0;
  _objc_opt_self();
  func_0x000100086b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    _UIGraphicsBeginImageContext(0x4060000000000000,0x4060000000000000);
    func_0x000100086860(0,0,0x4060000000000000,0x4060000000000000,puVar2);
    func_0x000100087380(param_1);
    _UIRectFillUsingBlendMode(0,0,0x4060000000000000,0x4060000000000000,1);
    puVar3 = puVar2;
    func_0x000100086880(0,0,0x4060000000000000,0x4060000000000000,0x3ff0000000000000,puVar2);
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    _UIGraphicsEndImageContext();
    _objc_release(puVar2);
  }
  return puVar3;
}



/* Entry: 10004aa04; end: 10004aa17;  */

void FUN_10004aa04(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    _swift_retain();
  }
                    /* WARNING: Could not recover jumptable at 0x00010008624c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_1000b16a8)(param_2 & 0x3fffffffffffffff);
  return;
}



/* Entry: 10004aa18; end: 10004aa67;  */

undefined8 FUN_10004aa18(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x1000c6668;
  func_0x0001000100d0(0x1000c6668,&UNK_10008c650);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10004aa68; end: 10004afc3;  */

void FUN_10004aa68(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  
  ppuVar9 = &puStack_100;
  puVar1 = &UNK_1000b4b10;
  uVar10 = 0x20;
  _swift_allocObject(&UNK_1000b4b10,0x20,7);
  *(long *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  if (param_1 == 0) {
    _swift_retain(param_5);
    _objc_retain(param_6);
LAB_10004ac48:
    _swift_beginAccess(param_5 + 0x10,&puStack_100,1,0);
    uVar10 = *(undefined8 *)(param_5 + 0x10);
    *(undefined8 *)(param_5 + 0x10) = 0;
    _objc_release(uVar10);
    _dispatch_group_leave(param_6);
    _swift_release(puVar1);
    return;
  }
  _swift_retain(param_5);
  uVar2 = param_6;
  _objc_retain(param_6);
  func_0x000100086480();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) goto LAB_10004ac48;
  lVar3 = param_1;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(param_1);
  FUN_10004aa18(param_4 + 0x28,&puStack_100);
  if (puStack_e8 == (undefined *)0x0) {
    FUN_10004aff8(&puStack_100,0x1000c6668,&UNK_10008c650);
  }
  else {
    func_0x000100013de4();
    lVar4 = lVar3;
    func_0x000100044abc(lVar3,uVar10,param_2,param_3);
    FUN_100012b94(&puStack_100);
    if (lVar4 != 0) {
      puStack_100 = (undefined *)0x0;
      uStack_f8 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x61);
      __sSS6appendyySSF(0xd000000000000051,0x800000010009ddb0);
      __sSS6appendyySSF(lVar3,uVar10);
      _swift_bridgeObjectRelease(uVar10);
      __sSS6appendyySSF(0x646e65697266202c,0xec000000203a6449);
      __sSS6appendyySSF(param_2,param_3);
      uVar10 = uStack_f8;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_100,uStack_f8);
      _objc_release();
      _swift_bridgeObjectRelease(uVar10);
      _swift_beginAccess(param_5 + 0x10,&puStack_100,1,0);
      uVar10 = *(undefined8 *)(param_5 + 0x10);
      *(long *)(param_5 + 0x10) = lVar4;
      _objc_retain(lVar4);
      _objc_retain();
      _objc_release(uVar10);
      _dispatch_group_leave(uVar2);
      _swift_release(puVar1);
      _objc_release(lVar4);
      goto LAB_10004afa0;
    }
  }
  puStack_100 = (undefined *)0x0;
  uStack_f8 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x13);
  _swift_bridgeObjectRelease(uStack_f8);
  puStack_100 = (undefined *)0xd000000000000027;
  uStack_f8 = 0x800000010009dd10;
  __sSS6appendyySSF(lVar3,uVar10);
  __sSS6appendyySSF(0x2d,0xe100000000000000);
  __sSS6appendyySSF(0x31,0xe100000000000000);
  __sSS6appendyySSF(0x2e,0xe100000000000000);
  __sSS6appendyySSF(0x70626577,0xe400000000000000);
  uVar2 = uStack_f8;
  puVar5 = puStack_100;
  puStack_100 = (undefined *)0x0;
  uStack_f8 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x59);
  __sSS6appendyySSF(0xd000000000000049,0x800000010009dd40);
  __sSS6appendyySSF(lVar3,uVar10);
  __sSS6appendyySSF(0x646e65697266202c,0xec000000203a6449);
  __sSS6appendyySSF(param_2,param_3);
  uVar11 = uStack_f8;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_100,uStack_f8);
  _objc_release();
  _swift_bridgeObjectRelease(uVar11);
  uVar11 = *(undefined8 *)(param_4 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar5,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  lVar4 = 0x1000c6670;
  func_0x0001000100d0(0x1000c6670,&UNK_10008c658);
  _swift_initStackObject();
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  puVar7 = PTR___sSSN_1000b1180;
  puStack_100 = (undefined *)0x7275746165462d58;
  uStack_f8 = 0xe900000000000065;
  __ss11AnyHashableVyABxcSHRzlufC
            (lVar4 + 0x20,&puStack_100,PTR___sSSN_1000b1180,PTR___sSSSHsWP_1000b1188);
  *(undefined **)(lVar4 + 0x60) = puVar7;
  *(undefined8 *)(lVar4 + 0x48) = 0xd00000000000001a;
  *(undefined8 *)(lVar4 + 0x50) = 0x800000010009dd90;
  lVar6 = lVar4;
  FUN_1000533cc(lVar4);
  _swift_setDeallocating(lVar4);
  FUN_10004aff8(lVar4 + 0x20,0x1000c6678,&UNK_10008c660);
  lVar4 = lVar6;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (lVar6,PTR___ss11AnyHashableVN_1000b1278,PTR___sypN_1000b14c8 + 8,
             PTR___ss11AnyHashableVSHsWP_1000b1280);
  _swift_bridgeObjectRelease(lVar6);
  puVar7 = &UNK_1000b4b38;
  _swift_allocObject(&UNK_1000b4b38,0x18,7);
  _swift_weakInit(puVar7 + 0x10,param_4);
  puVar8 = &UNK_1000b4b60;
  _swift_allocObject(&UNK_1000b4b60,0x48,7);
  *(code **)(puVar8 + 0x10) = FUN_10004aff0;
  *(undefined **)(puVar8 + 0x18) = puVar1;
  *(undefined **)(puVar8 + 0x20) = puVar7;
  *(long *)(puVar8 + 0x28) = lVar3;
  *(undefined8 *)(puVar8 + 0x30) = uVar10;
  *(undefined8 *)(puVar8 + 0x38) = param_2;
  *(undefined8 *)(puVar8 + 0x40) = param_3;
  uStack_e0 = 0x10004b098;
  puStack_100 = PTR___NSConcreteStackBlock_1000b0c60;
  uStack_f8 = 0x42000000;
  pcStack_f0 = FUN_10004f034;
  puStack_e8 = &UNK_1000b4b78;
  puStack_d8 = puVar8;
  __Block_copy(&puStack_100);
  puVar7 = puStack_d8;
  _swift_retain(puVar1);
  _swift_bridgeObjectRetain(param_3);
  _swift_release(puVar7);
  func_0x000100087000(uVar11);
  __Block_release(ppuVar9);
  _swift_release(puVar1);
  _objc_release(puVar5);
LAB_10004afa0:
  _objc_release(lVar4);
  return;
}



/* Entry: 10004afc4; end: 10004afef;  */

void FUN_10004afc4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 10004aff0; end: 10004aff7;  */

void FUN_10004aff0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar1 + 0x10,auStack_48,1,0);
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  _objc_retain(param_1);
  _objc_release(uVar3);
  _dispatch_group_leave(uVar2);
  return;
}



/* Entry: 10004aff8; end: 10004b037;  */

undefined8 FUN_10004aff8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000100d0(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10004b038; end: 10004b0cb;  */

void FUN_10004b038(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 10004b0cc; end: 10004b0e7;  */

void FUN_10004b0cc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010008624c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_1000b16a8)(uVar1);
  return;
}



/* Entry: 10004b0e8; end: 10004b1b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10004b0e8(undefined1 *param_1,long param_2,long param_3)

{
  undefined8 ****ppppuVar1;
  undefined8 *puVar2;
  ulong uVar3;
  byte bVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long in_x6;
  undefined8 in_x7;
  uint uVar22;
  long extraout_x8;
  undefined **ppuVar23;
  undefined8 unaff_x19;
  long lVar24;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined *puVar25;
  undefined8 unaff_x24;
  undefined8 uVar26;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ****unaff_x29;
  code *pcVar27;
  undefined8 unaff_x30;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auStack_d0 [8];
  undefined1 *puStack_c8;
  undefined1 auStack_40 [8];
  long lStack_38;
  undefined8 ***pppuStack_30;
  undefined8 uStack_28;
  undefined1 auStack_20 [8];
  long lStack_18;
  
  ppppuVar1 = (undefined8 ****)&stack0xfffffffffffffff0;
  lStack_18 = *(long *)PTR____stack_chk_guard_1000b0c78;
  if (*(long *)PTR____stack_chk_guard_1000b0c78 != *(long *)PTR____stack_chk_guard_1000b0c78) {
    ___stack_chk_fail();
    pppuStack_30 = ppppuVar1;
    uStack_28 = 0x10004b12c;
    unaff_x29 = &pppuStack_30;
    lStack_38 = *(long *)PTR____stack_chk_guard_1000b0c78;
    if (*(long *)PTR____stack_chk_guard_1000b0c78 == *(long *)PTR____stack_chk_guard_1000b0c78) {
      unaff_x30 = 0x10004b12c;
      register0x00000008 = (BADSPACEBASE *)auStack_20;
      unaff_x29 = ppppuVar1;
    }
    else {
      ___stack_chk_fail();
      if (*(long *)PTR____stack_chk_guard_1000b0c78 != *(long *)PTR____stack_chk_guard_1000b0c78) {
        ___stack_chk_fail();
        lVar13 = 0;
        __s8Dispatch0A3QoSV0B6SClassOMa();
        lVar24 = *(long *)(lVar13 + -8);
        (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar24 + 0x40));
        *(undefined1 **)(unaff_x20 + 0x10) = param_1;
        *(long *)(unaff_x20 + 0x18) = param_2;
        *(long *)(unaff_x20 + 0x20) = param_3;
        if (param_3 == 0) {
          *(undefined8 *)(unaff_x20 + 0x30) = 0;
          *(undefined8 *)(unaff_x20 + 0x38) = 0;
          _objc_retain(param_1);
          param_2 = 0;
          uVar21 = 0;
          ppuVar23 = (undefined **)0x0;
        }
        else {
          uVar21 = 0;
          func_0x000100046e94();
          _swift_allocObject();
          _objc_retain(param_1);
          _swift_bridgeObjectRetain(param_3);
          FUN_100046754(param_2,param_3);
          ppuVar23 = &PTR_DAT_1000b4a90;
        }
        *(long *)(unaff_x20 + 0x28) = param_2;
        *(undefined8 *)(unaff_x20 + 0x40) = uVar21;
        *(undefined ***)(unaff_x20 + 0x48) = ppuVar23;
        puVar14 = param_1;
        func_0x0001000876a0();
        _objc_retainAutoreleasedReturnValue();
        puStack_c8 = param_1;
        if (puVar14 == (undefined1 *)0x0) {
          puVar25 = (undefined *)0x0;
        }
        else {
          puVar25 = PTR__OBJC_CLASS___SCExtensionGrpcAuthContextDelegate_1000c2160;
          _objc_allocWithZone(PTR__OBJC_CLASS___SCExtensionGrpcAuthContextDelegate_1000c2160);
          func_0x000100086de0();
          _swift_unknownObjectRelease(puVar14);
          _objc_retain(puVar25);
        }
        puVar15 = PTR_PTR_1000c2138;
        _objc_opt_self(PTR_PTR_1000c2138);
        func_0x000100086580();
        _objc_retainAutoreleasedReturnValue();
        uVar21 = 0xd000000000000014;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010009e1f0)
        ;
        puVar7 = puVar15;
        func_0x000100087360(puVar15);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar21);
        _objc_release(puVar7);
        func_0x000100087480(puVar15);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        func_0x000100087300(puVar15);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        func_0x0001000872e0(puVar15);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        (**(code **)(lVar24 + 0x68))
                  (auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                   *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_1000b1748
                   ,lVar13);
        puVar16 = PTR__OBJC_CLASS___SCQueuePerformer_1000c2140;
        _objc_allocWithZone(PTR__OBJC_CLASS___SCQueuePerformer_1000c2140);
        uVar21 = 0xd00000000000002b;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002b,0x800000010009e210)
        ;
        __s8Dispatch0A3QoSV0B6SClassO8rawValueSo11qos_class_tavg();
        func_0x000100086d20(puVar16);
        _objc_release(uVar21);
        (**(code **)(lVar24 + 8))(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar13);
        puVar17 = PTR__OBJC_CLASS___SCNativeDispatchQueue_1000c2148;
        _objc_allocWithZone(PTR__OBJC_CLASS___SCNativeDispatchQueue_1000c2148);
        func_0x000100086d80();
        uVar21 = 0xd000000000000025;
        uVar20 = 0x800000010009e240;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010009e240)
        ;
        puVar18 = PTR__OBJC_CLASS___SCNGrpcUnifiedGrpcService_1000c2150;
        _objc_opt_self();
        _objc_retain(puVar15);
        func_0x0001000866a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar21);
        _objc_release(puVar15);
        _objc_release(puVar25);
        *(undefined **)(unaff_x20 + 0x50) = puVar18;
        puVar7 = (undefined *)0x0;
        if (puVar18 != (undefined *)0x0) {
          puVar7 = PTR_PTR_1000c2158;
          _objc_allocWithZone();
          func_0x000100086e00();
        }
        _objc_release(puStack_c8);
        _objc_release(puVar17);
        _objc_release(puVar15);
        _objc_release(puVar16);
        _objc_release(puVar25);
        *(undefined **)(unaff_x20 + 0x58) = puVar7;
        auVar30._8_8_ = uVar20;
        auVar30._0_8_ = unaff_x20;
        return auVar30;
      }
      unaff_x30 = 0x10004b170;
      register0x00000008 = (BADSPACEBASE *)auStack_40;
    }
  }
  puVar6 = (undefined1 *)((long)register0x00000008 + -0x20);
  *(undefined8 *****)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar14 = (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)PTR____stack_chk_guard_1000b0c78;
  if (*(long *)PTR____stack_chk_guard_1000b0c78 == *(long *)((long)register0x00000008 + -0x18)) {
    puVar14 = *(undefined1 **)((long)register0x00000008 + -0x10);
    pcVar27 = *(code **)((long)register0x00000008 + -8);
    puVar6 = (undefined1 *)register0x00000008;
  }
  else {
    pcVar27 = FUN_100049f18;
    ___stack_chk_fail();
  }
  *(undefined8 *)(puVar6 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar6 + -0x28) = unaff_x21;
  *(long *)(puVar6 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar6 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar6 + -0x10) = puVar14;
  *(code **)(puVar6 + -8) = pcVar27;
  *(undefined8 *)(puVar6 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_1000b0c78;
  puVar25 = PTR__OBJC_CLASS___NSKeyedArchiver_1000c2128;
  _objc_opt_self();
  *(undefined8 *)(puVar6 + -0x40) = 0;
  pcVar27 = (code *)(puVar6 + -0x40);
  uVar21 = 0;
  func_0x000100086420();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = *(undefined **)(puVar6 + -0x40);
  _objc_retain();
  if (puVar25 == (undefined *)0x0) {
    puVar25 = puVar7;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release(puVar7);
    _swift_willThrow();
    _swift_errorRelease(puVar25);
    puVar7 = (undefined *)0x0;
    lVar24 = -0x1000000000000000;
    lVar13 = param_2;
  }
  else {
    puVar7 = puVar25;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    lVar13 = param_2;
    _objc_release(puVar25);
    lVar24 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_1000b0c78 == *(long *)(puVar6 + -0x38)) {
    auVar28._8_8_ = lVar24;
    auVar28._0_8_ = puVar7;
    return auVar28;
  }
  ___stack_chk_fail();
  *(undefined8 *)(puVar6 + -0xb0) = unaff_x28;
  *(undefined8 *)(puVar6 + -0xa8) = unaff_x27;
  *(undefined8 *)(puVar6 + -0xa0) = unaff_x26;
  *(undefined8 *)(puVar6 + -0x98) = unaff_x25;
  *(undefined8 *)(puVar6 + -0x90) = unaff_x24;
  *(undefined8 *)(puVar6 + -0x88) = unaff_x23;
  *(undefined8 *)(puVar6 + -0x80) = unaff_x22;
  *(undefined **)(puVar6 + -0x78) = puVar25;
  *(long *)(puVar6 + -0x70) = lVar24;
  *(undefined **)(puVar6 + -0x68) = puVar7;
  *(undefined1 **)(puVar6 + -0x60) = puVar6 + -0x10;
  *(code **)(puVar6 + -0x58) = FUN_100049ff8;
  puVar14 = *(undefined1 **)(puVar6 + -0x38);
  uVar3 = *(ulong *)(puVar6 + -0x30);
  if ((ulong)param_1 >> 0x3c < 0xf) {
    uVar5 = (uint)((ulong)param_1 >> 0x20);
    uVar22 = uVar5 >> 0x1e;
    if (1 < uVar5 >> 0x1e) {
      if (uVar22 != 2) goto LAB_10004a25c;
      if (*(long *)(lVar13 + 0x10) != *(long *)(lVar13 + 0x18)) goto LAB_10004a088;
      goto LAB_10004a268;
    }
    if (uVar22 == 0) {
      *(undefined8 *)(puVar6 + -0x120) = in_x7;
      if (((ulong)param_1 & 0xff000000000000) == 0) goto LAB_10004a25c;
    }
    else {
      if ((long)(int)lVar13 == lVar13 >> 0x20) goto LAB_10004a268;
LAB_10004a088:
      *(undefined8 *)(puVar6 + -0x120) = in_x7;
      FUN_10004aa04(lVar13,param_1);
    }
    puVar25 = PTR__OBJC_CLASS___UIImage_1000c20c0;
    _objc_allocWithZone();
    func_0x00010001c120(lVar13,param_1);
    lVar24 = lVar13;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(lVar13,param_1);
    func_0x000100086ca0();
    _objc_release(lVar24);
    FUN_1000275d4(lVar13,param_1);
    if (puVar25 == (undefined *)0x0) {
LAB_10004a25c:
      FUN_1000275d4(lVar13,param_1);
      goto LAB_10004a268;
    }
    puVar7 = puVar25;
    _objc_retain();
    (*pcVar27)(puVar25);
    _objc_release(puVar7);
    _swift_beginAccess(in_x6 + 0x10,puVar6 + -0xf8,0,0);
    in_x6 = in_x6 + 0x10;
    _swift_weakLoadStrong();
    if (in_x6 != 0) {
      FUN_10004aa18(in_x6 + 0x28,puVar6 + -0xe0);
      _swift_release(in_x6);
      if (*(long *)(puVar6 + -200) == 0) {
        FUN_1000275d4(lVar13,param_1);
        _objc_release(puVar7);
        param_1 = (undefined1 *)0x1000c6668;
        puVar7 = puVar6 + -0xe0;
        FUN_10004aff8(puVar7,0x1000c6668,&UNK_10008c650);
        goto LAB_10004a3ac;
      }
      uVar21 = *(undefined8 *)(puVar6 + -0x48);
      uVar20 = *(undefined8 *)(puVar6 + -0x40);
      uVar26 = *(undefined8 *)(puVar6 + -0x50);
      func_0x000100013de4();
      *(undefined8 *)(puVar6 + -0x108) = uVar21;
      *(undefined8 *)(puVar6 + -0x100) = uVar20;
      _swift_bridgeObjectRetain(uVar20);
      __sSS6appendyySSF(0x44332d,0xe300000000000000);
      uVar21 = *(undefined8 *)(puVar6 + -0x108);
      uVar20 = *(undefined8 *)(puVar6 + -0x100);
      lVar8 = 0;
      func_0x000100045ab0();
      lVar24 = lVar8;
      _objc_allocWithZone();
      puVar2 = (undefined8 *)(lVar24 + _DAT_1000c60f8);
      *puVar2 = *(undefined8 *)(puVar6 + -0x120);
      puVar2[1] = uVar26;
      puVar2 = (undefined8 *)(lVar24 + _DAT_1000c6100);
      *(undefined8 *)(puVar6 + -0x128) = uVar21;
      *puVar2 = uVar21;
      puVar2[1] = uVar20;
      *(undefined **)(lVar24 + _DAT_1000c6108) = puVar7;
      puVar25 = PTR_s_init_1000c1bf0;
      *(long *)(puVar6 + -0x118) = lVar24;
      *(long *)(puVar6 + -0x110) = lVar8;
      _objc_retain();
      _swift_bridgeObjectRetain(uVar20);
      _swift_bridgeObjectRetain(uVar26);
      puVar9 = puVar6 + -0x118;
      _objc_msgSendSuper2(puVar9,puVar25);
      puVar10 = puVar14;
      uVar19 = uVar3;
      FUN_100044f30();
      if (puVar10 == (undefined1 *)0x0) {
        _objc_release(puVar7);
        FUN_1000275d4(lVar13,param_1);
LAB_10004a424:
        _swift_bridgeObjectRelease(uVar20);
        puVar10 = puVar9;
      }
      else {
        *(undefined **)(puVar6 + -0x130) = puVar7;
        puVar11 = puVar9;
        FUN_100049f18(puVar9);
        if (0xe < uVar19 >> 0x3c) {
          _objc_release(*(undefined8 *)(puVar6 + -0x130));
          FUN_1000275d4(lVar13,param_1);
          _objc_release(puVar10);
          goto LAB_10004a424;
        }
        *(ulong *)(puVar6 + -0x138) = uVar19;
        puVar12 = puVar11;
        __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF();
        func_0x000100087960(puVar10);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar12);
        *(undefined8 *)(puVar6 + -0x108) = 0;
        *(undefined8 *)(puVar6 + -0x100) = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x66);
        *(undefined8 *)(puVar6 + -0x108) = *(undefined8 *)(puVar6 + -0x108);
        *(undefined8 *)(puVar6 + -0x100) = *(undefined8 *)(puVar6 + -0x100);
        __sSS6appendyySSF(0xd000000000000048,0x800000010009dc90);
        __sSS6appendyySSF(*(undefined8 *)(puVar6 + -0x128),uVar20);
        _swift_bridgeObjectRelease(uVar20);
        __sSS6appendyySSF(0x726174617661202c,0xec000000203a6449);
        __sSS6appendyySSF(*(undefined8 *)(puVar6 + -0x120),uVar26);
        __sSS6appendyySSF(0x646e65697266202c,0xec000000203a6449);
        __sSS6appendyySSF(puVar14,uVar3);
        uVar21 = *(undefined8 *)(puVar6 + -0x108);
        uVar20 = *(undefined8 *)(puVar6 + -0x100);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar21,uVar20);
        _objc_release(*(undefined8 *)(puVar6 + -0x130));
        _swift_bridgeObjectRelease(uVar20);
        FUN_1000275d4(lVar13,param_1);
        _objc_release(uVar21);
        _objc_release(puVar9);
        param_1 = *(undefined1 **)(puVar6 + -0x138);
        FUN_1000275d4(puVar11,param_1);
      }
      _objc_release(puVar10);
      puVar7 = puVar6 + -0xe0;
      FUN_100012b94(puVar7);
      goto LAB_10004a3ac;
    }
    FUN_1000275d4(lVar13,param_1);
  }
  else {
LAB_10004a268:
    bVar4 = puVar6[-0x28];
    *(undefined8 *)(puVar6 + -0xe0) = 0;
    *(undefined8 *)(puVar6 + -0xd8) = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x40);
    *(undefined8 *)(puVar6 + -0xe0) = *(undefined8 *)(puVar6 + -0xe0);
    *(undefined8 *)(puVar6 + -0xd8) = *(undefined8 *)(puVar6 + -0xd8);
    __sSS6appendyySSF(0xd00000000000003a,0x800000010009dc50);
    __sSS6appendyySSF(puVar14,uVar3);
    __sSS6appendyySSF(0x203a,0xe200000000000000);
    *(undefined8 *)(puVar6 + -0xf8) = uVar21;
    puVar25 = &UNK_10008c648;
    func_0x0001000100d0(0x1000c6658,&UNK_10008c648);
    __sSq16debugDescriptionSSvg();
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar25);
    puVar14 = *(undefined1 **)(puVar6 + -0xd8);
    param_1 = puVar14;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(*(undefined8 *)(puVar6 + -0xe0),puVar14);
    _objc_release();
    _swift_bridgeObjectRelease(puVar14);
    if ((bVar4 & 1) == 0) {
LAB_10004a34c:
      puVar7 = (undefined *)0x0;
    }
    else {
      param_1 = puVar6 + -0xe0;
      _swift_beginAccess(in_x6 + 0x10,param_1,0,0);
      in_x6 = in_x6 + 0x10;
      _swift_weakLoadStrong();
      if (in_x6 == 0) goto LAB_10004a34c;
      puVar7 = *(undefined **)(puVar6 + -0x20);
      puVar25 = puVar7;
      if (puVar7 == (undefined *)0x0) {
        if (lRam00000001000c6660 != -1) {
          param_1 = (undefined1 *)0x10004a8bc;
          _swift_once(0x1000c6660,0x10004a8bc);
        }
        puVar25 = puRam00000001000d0f38;
        _objc_retain(puRam00000001000d0f38);
      }
      _objc_retain(puVar7);
      puVar7 = puVar25;
      FUN_10004a8f8(puVar25);
      _swift_release(in_x6);
      _objc_release(puVar25);
    }
    (*pcVar27)(puVar7);
  }
  _objc_release(puVar7);
LAB_10004a3ac:
  auVar29._8_8_ = param_1;
  auVar29._0_8_ = puVar7;
  return auVar29;
}



/* Entry: 10004b1b4; end: 10004b51b;  */

void FUN_10004b1b4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined *puVar10;
  long lVar11;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar1 = 0;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar11 + 0x40));
  *(long *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(long *)(unaff_x20 + 0x20) = param_3;
  if (param_3 == 0) {
    *(undefined8 *)(unaff_x20 + 0x30) = 0;
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
    _objc_retain(param_1);
    param_2 = 0;
    uVar2 = 0;
    ppuVar9 = (undefined **)0x0;
  }
  else {
    uVar2 = 0;
    func_0x000100046e94();
    _swift_allocObject();
    _objc_retain(param_1);
    _swift_bridgeObjectRetain(param_3);
    FUN_100046754(param_2,param_3);
    ppuVar9 = &PTR_DAT_1000b4a90;
  }
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x40) = uVar2;
  *(undefined ***)(unaff_x20 + 0x48) = ppuVar9;
  lVar3 = param_1;
  func_0x0001000876a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_68 = param_1;
  if (lVar3 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR__OBJC_CLASS___SCExtensionGrpcAuthContextDelegate_1000c2160;
    _objc_allocWithZone(PTR__OBJC_CLASS___SCExtensionGrpcAuthContextDelegate_1000c2160);
    func_0x000100086de0();
    _swift_unknownObjectRelease(lVar3);
    _objc_retain(puVar10);
  }
  puVar4 = PTR_PTR_1000c2138;
  _objc_opt_self(PTR_PTR_1000c2138);
  func_0x000100086580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010009e1f0);
  puVar5 = puVar4;
  func_0x000100087360(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar5);
  func_0x000100087480(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x000100087300(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x0001000872e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  (**(code **)(lVar11 + 0x68))
            (auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_1000b1748,lVar1
            );
  puVar6 = PTR__OBJC_CLASS___SCQueuePerformer_1000c2140;
  _objc_allocWithZone(PTR__OBJC_CLASS___SCQueuePerformer_1000c2140);
  uVar2 = 0xd00000000000002b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002b,0x800000010009e210);
  __s8Dispatch0A3QoSV0B6SClassO8rawValueSo11qos_class_tavg();
  func_0x000100086d20(puVar6);
  _objc_release(uVar2);
  (**(code **)(lVar11 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  puVar7 = PTR__OBJC_CLASS___SCNativeDispatchQueue_1000c2148;
  _objc_allocWithZone(PTR__OBJC_CLASS___SCNativeDispatchQueue_1000c2148);
  func_0x000100086d80();
  uVar2 = 0xd000000000000025;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010009e240);
  puVar8 = PTR__OBJC_CLASS___SCNGrpcUnifiedGrpcService_1000c2150;
  _objc_opt_self();
  _objc_retain(puVar4);
  func_0x0001000866a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(puVar10);
  *(undefined **)(unaff_x20 + 0x50) = puVar8;
  puVar5 = (undefined *)0x0;
  if (puVar8 != (undefined *)0x0) {
    puVar5 = PTR_PTR_1000c2158;
    _objc_allocWithZone();
    func_0x000100086e00();
  }
  _objc_release(lStack_68);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar10);
  *(undefined **)(unaff_x20 + 0x58) = puVar5;
  return;
}



/* Entry: 10004b51c; end: 10004c0b3;  */

void FUN_10004b51c(long param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,code *param_7,undefined8 param_8)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  float fVar17;
  float fVar18;
  long alStack_1a0 [4];
  undefined8 uStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  code *pcStack_110;
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [8];
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 auStack_90 [32];
  
  lVar3 = 0x1000c6758;
  pcStack_110 = param_7;
  func_0x0001000100d0(0x1000c6758,&UNK_10008c6d0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)alStack_1a0 - extraout_x8;
  lVar3 = 0;
  FUN_10005cf80();
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar15 + 0x40));
  puVar16 = (undefined8 *)(lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  lVar4 = 0;
  __s10Foundation4DateVMa();
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lStack_138 = (long)puVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  if (param_2 != 0) {
    lStack_c0 = 0;
    uStack_b8 = 0xe000000000000000;
    _swift_errorRetain(param_2);
    __ss11_StringGutsV4growyySiF(0x47);
    __sSS6appendyySSF(0xd000000000000041,0x800000010009df20);
    __sSS6appendyySSF(param_5,param_6);
    __sSS6appendyySSF(0x203a,0xe200000000000000);
    _swift_getErrorValue(param_2,auStack_f0,auStack_108);
    uVar6 = uStack_f8;
    __ss5ErrorP10FoundationE20localizedDescriptionSSvg(uStack_100,uStack_f8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar6);
    uVar6 = uStack_b8;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_c0,uStack_b8);
    _objc_release();
    _swift_bridgeObjectRelease(uVar6);
    _swift_beginAccess(param_4 + 0x10,&lStack_c0,0,0);
    param_4 = param_4 + 0x10;
    _swift_weakLoadStrong();
    if (param_4 != 0) {
      _swift_errorRetain(param_2);
      _swift_retain(param_8);
      FUN_10004d208(param_5,param_6,param_4,pcStack_110,param_8,param_2);
      _swift_errorRelease(param_2);
      _swift_release(param_8);
      _swift_errorRelease(param_2);
      _swift_release(param_4);
      return;
    }
    _swift_errorRelease(param_2);
    return;
  }
  puStack_140 = puVar16;
  lStack_130 = extraout_x12;
  lStack_128 = lVar4;
  lStack_120 = lVar15;
  lStack_118 = lVar3;
  _swift_beginAccess(param_4 + 0x10,auStack_90,0,0);
  lVar3 = param_4 + 0x10;
  _swift_weakLoadStrong();
  if (lVar3 == 0) goto LAB_10004ba64;
  if (param_1 == 0) {
    _swift_release(lVar3);
    goto LAB_10004ba64;
  }
  lVar4 = param_1;
  uStack_148 = param_8;
  _objc_retain();
  lVar15 = lVar4;
  func_0x0001000869e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar15 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10004c0ac);
    (*pcVar2)();
  }
  lVar5 = lVar15;
  func_0x000100086960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  if (lVar5 == 0) {
    uStack_d8 = 0;
    lStack_e0 = 0;
    lStack_c8 = 0;
    uStack_d0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&lStack_e0,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  uStack_b8 = uStack_d8;
  lStack_c0 = lStack_e0;
  lStack_a8 = lStack_c8;
  uStack_b0 = uStack_d0;
  if (lStack_c8 == 0) {
    _swift_release(lVar3);
LAB_10004b9c0:
    _objc_release(lVar4);
    func_0x00010004dd7c(&lStack_c0,0x1000c49f8,&UNK_1000899e0);
  }
  else {
    uVar6 = 0;
    FUN_10004dbf4(0,0x1000c6768,&PTR_PTR_1000c2130);
    plVar7 = &lStack_e8;
    _swift_dynamicCast(plVar7,&lStack_c0,PTR___sypN_1000b14c8 + 8,uVar6,6);
    lVar15 = lStack_e8;
    if (((ulong)plVar7 & 1) == 0) {
      _swift_release(lVar3);
    }
    else {
      lVar5 = lStack_e8;
      func_0x000100086fa0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10004c0b0);
        (*pcVar2)();
      }
      lVar14 = lVar5;
      func_0x000100086960();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      if (lVar14 == 0) {
        uStack_d8 = 0;
        lStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&lStack_e0,lVar14);
        _swift_unknownObjectRelease(lVar14);
      }
      uStack_b8 = uStack_d8;
      lStack_c0 = lStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        _swift_release(lVar3);
        _objc_release(lVar15);
        goto LAB_10004b9c0;
      }
      uVar8 = 0;
      uVar6 = uStack_d0;
      FUN_10004dbf4(0,0x1000c6770,&PTR_PTR_1000c21f8);
      fVar17 = (float)uVar6;
      plVar7 = &lStack_e8;
      _swift_dynamicCast(plVar7,&lStack_c0,PTR___sypN_1000b14c8 + 8,uVar8,6);
      if (((ulong)plVar7 & 1) == 0) {
        _swift_release(lVar3);
      }
      else {
        lVar5 = lVar15;
        func_0x000100087940();
        _objc_retainAutoreleasedReturnValue();
        if (lVar5 == 0) {
          _swift_release(lVar3);
          _objc_release(lVar4);
          _objc_release(lVar15);
          lVar4 = lStack_e8;
          goto LAB_10004ba60;
        }
        lVar14 = lStack_e8;
        lStack_150 = lVar5;
        func_0x000100087880();
        _objc_retainAutoreleasedReturnValue();
        if (lVar14 == 0) {
          _swift_release(lVar3);
          _objc_release(lStack_150);
        }
        else {
          lStack_158 = lStack_e8;
          lStack_c0 = 0;
          __sSa10FoundationE34_conditionallyBridgeFromObjectiveC_6resultSbSo7NSArrayC_SayxGSgztFZ();
          _objc_release(lVar14);
          lVar5 = lStack_c0;
          if (lStack_c0 != 0) {
            if (*(long *)(lStack_c0 + 0x10) != 0) {
              uVar6 = *(undefined8 *)(lStack_c0 + 0x20);
              uStack_160 = *(undefined8 *)(lStack_c0 + 0x28);
              if (*(long *)(lStack_c0 + 0x10) == 1) {
                _swift_bridgeObjectRetain(uStack_160);
                _swift_bridgeObjectRelease(lVar5);
                uVar8 = 0;
                alStack_1a0[2] = 0;
              }
              else {
                uVar8 = *(undefined8 *)(lStack_c0 + 0x30);
                uVar1 = *(undefined8 *)(lStack_c0 + 0x38);
                _swift_bridgeObjectRetain(uStack_160);
                alStack_1a0[2] = uVar1;
                _swift_bridgeObjectRetain(uVar1);
                _swift_bridgeObjectRelease(lVar5);
              }
              lVar5 = lStack_158;
              lVar14 = lStack_158;
              func_0x000100086ae0();
              alStack_1a0[3] = uVar8;
              uStack_180 = uVar6;
              if ((int)lVar14 == 0) {
                lVar14 = 0;
                lVar12 = 0;
              }
              else {
                func_0x000100086f40();
                _objc_retainAutoreleasedReturnValue();
                if (lVar5 != 0) {
                  lVar14 = lVar5;
                  func_0x0001000876c0();
                  if ((0 < (int)lVar14) && (lVar14 = lVar5, func_0x000100087740(), 0 < (int)lVar14))
                  {
                    lVar14 = lVar5;
                    func_0x0001000876c0();
                    FUN_10004c0b4();
                    lVar12 = lVar5;
                    func_0x000100087740();
                    FUN_10004c0b4();
                    _objc_release(lVar5);
                    lVar5 = lStack_158;
                    goto LAB_10004bcc0;
                  }
                  _objc_release(lVar5);
                }
                lVar14 = 0;
                lVar12 = 0;
                lVar5 = lStack_158;
              }
LAB_10004bcc0:
              iVar11 = (int)lVar5;
              func_0x00010004dc34(lVar14,lVar12);
              func_0x000100086ac0();
              lStack_168 = lVar14;
              lVar5 = lVar12;
              if (iVar11 != 0) {
                lVar9 = lStack_158;
                func_0x0001000866e0();
                _objc_retainAutoreleasedReturnValue();
                if (lVar9 != 0) {
                  lVar10 = lVar9;
                  func_0x0001000876c0();
                  if (((int)lVar10 < 1) || (lVar10 = lVar9, func_0x000100087740(), (int)lVar10 < 1))
                  {
                    _objc_release(lVar9);
                  }
                  else {
                    lVar10 = lVar9;
                    func_0x0001000876c0();
                    FUN_10004c0b4();
                    lVar5 = lVar9;
                    lStack_168 = lVar10;
                    func_0x000100087740();
                    FUN_10004c0b4();
                    func_0x00010004dce0(lVar14,lVar12);
                    _objc_release(lVar9);
                  }
                }
              }
              lVar9 = lStack_150;
              lStack_178 = lVar15;
              alStack_1a0[1] = lVar14;
              lStack_170 = lVar3;
              func_0x000100086f20(lStack_150);
              fVar18 = fVar17;
              func_0x000100086f80(lVar9);
              lVar3 = lVar9;
              func_0x000100087700();
              _objc_retainAutoreleasedReturnValue();
              if (lVar3 != 0) {
                lVar14 = lVar3;
                func_0x000100087720();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar3);
                func_0x000100087840(lVar9);
                lVar3 = lStack_138;
                __s10Foundation4DateV21timeIntervalSince1970ACSd_tcfC
                          (lStack_138,(double)(lVar9 / 1000));
                lVar15 = lStack_118;
                puVar16 = puStack_140;
                (**(code **)(lStack_130 + 0x10))
                          ((long)puStack_140 + (long)*(int *)(lStack_118 + 0x20),lVar3,lStack_128);
                uVar6 = uStack_160;
                *puVar16 = uStack_180;
                puVar16[1] = uVar6;
                lVar3 = alStack_1a0[2];
                puVar16[2] = alStack_1a0[3];
                puVar16[3] = lVar3;
                puVar16[4] = (double)fVar17;
                puVar16[5] = (double)fVar18;
                puVar16[6] = lVar14;
                *(undefined1 *)((long)puVar16 + (long)*(int *)(lVar15 + 0x24)) = 0;
                plVar7 = (long *)((long)puVar16 + (long)*(int *)(lVar15 + 0x28));
                *plVar7 = alStack_1a0[1];
                plVar7[1] = lVar12;
                plVar7 = (long *)((long)puVar16 + (long)*(int *)(lVar15 + 0x2c));
                *plVar7 = lStack_168;
                plVar7[1] = lVar5;
                lStack_c0 = 0;
                uStack_b8 = 0xe000000000000000;
                __ss11_StringGutsV4growyySiF(0x55);
                __sSS6appendyySSF(0xd000000000000041,0x800000010009deb0);
                __sSS6appendyySSF(param_5,param_6);
                uVar6 = 0x800000010009df00;
                __sSS6appendyySSF(0xd000000000000010,0x800000010009df00);
                lVar3 = lVar4;
                func_0x000100086800(lVar4);
                _objc_retainAutoreleasedReturnValue();
                lVar15 = lVar3;
                __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
                _objc_release(lVar3);
                __sSS6appendyySSF(lVar15,uVar6);
                _swift_bridgeObjectRelease(uVar6);
                uVar6 = uStack_b8;
                __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_c0,uStack_b8);
                _objc_release();
                _swift_bridgeObjectRelease(uVar6);
                lVar3 = lStack_170;
                func_0x00010004ddbc(lStack_170 + 0x28,&lStack_c0,0x1000c6760,&UNK_10008c6d8);
                if (lStack_a8 == 0) {
                  func_0x00010004dd7c(&lStack_c0,0x1000c6760,&UNK_10008c6d8);
                }
                else {
                  func_0x000100013de4();
                  FUN_100046860(puVar16,param_5,param_6);
                  FUN_100012b94(&lStack_c0);
                }
                lVar5 = lStack_120;
                lVar15 = lStack_178;
                func_0x00010004dc60(puVar16,lVar13);
                (**(code **)(lVar5 + 0x38))(lVar13,0,1,lStack_118);
                (*pcStack_110)(lVar13,0,1,0);
                _swift_release(lVar3);
                _objc_release(lStack_150);
                _objc_release(lStack_158);
                _objc_release(lVar15);
                _objc_release(lVar4);
                func_0x00010004dd7c(lVar13,0x1000c6758,&UNK_10008c6d0);
                func_0x00010004dca4(puVar16);
                (**(code **)(lStack_130 + 8))(lStack_138,lStack_128);
                return;
              }
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10004c0b4);
              (*pcVar2)();
            }
            _swift_bridgeObjectRelease(lStack_c0);
          }
          _swift_release(lVar3);
          _objc_release(lStack_150);
          lStack_e8 = lStack_158;
        }
        _objc_release(lStack_e8);
      }
      _objc_release(lVar15);
    }
LAB_10004ba60:
    _objc_release(lVar4);
  }
LAB_10004ba64:
  _swift_beginAccess(param_4 + 0x10,&lStack_e0,0,0);
  lVar3 = param_4 + 0x10;
  _swift_weakLoadStrong();
  lVar4 = lStack_118;
  if (lVar3 != 0) {
    func_0x00010004ddbc(lVar3 + 0x28,&lStack_c0,0x1000c6760,&UNK_10008c6d8);
    _swift_release(lVar3);
    if (lStack_a8 == 0) {
      func_0x00010004dd7c(&lStack_c0,0x1000c6760,&UNK_10008c6d8);
    }
    else {
      func_0x000100013de4();
      lVar3 = param_5;
      FUN_100046da0(param_5,param_6);
      if (lVar3 == 0) {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000042,0x800000010009de60)
        ;
      }
      else {
        func_0x0001000867c0();
      }
      _objc_release();
      func_0x000100012b98(&lStack_c0);
    }
  }
  _swift_beginAccess(param_4 + 0x10,&lStack_c0,0,0);
  param_4 = param_4 + 0x10;
  _swift_weakLoadStrong();
  if (param_4 != 0) {
    FUN_10004d5c8(param_1,param_5,param_6);
    _swift_release(param_4);
  }
  (**(code **)(lStack_120 + 0x38))(lVar13,1,1,lVar4);
  (*pcStack_110)(lVar13,0,1,0);
  func_0x00010004dd7c(lVar13,0x1000c6758,&UNK_10008c6d0);
  return;
}



/* Entry: 10004c0b4; end: 10004c187;  */

void FUN_10004c0b4(uint param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = 0;
  __s7SwiftUI5ColorV13RGBColorSpaceOMa();
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x68))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s7SwiftUI5ColorV13RGBColorSpaceO4sRGByA2EmFWC_1000b0760);
  __s7SwiftUI5ColorV_3red5green4blue7opacityA2C13RGBColorSpaceO_S4dtcfC
            ((double)(param_1 >> 0x18) / 255.0,(double)(param_1 >> 0x10 & 0xff) / 255.0,
             (double)(param_1 >> 8 & 0xff) / 255.0,(double)(param_1 & 0xff) / 255.0,
             &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  return;
}



/* Entry: 10004c188; end: 10004c1fb;  */

void FUN_10004c188(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_10004dd7c(unaff_x20 + 0x28,0x1000c6760,&UNK_10008c6d8);
  _objc_release(*(undefined8 *)(unaff_x20 + 0x50));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x000100086090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_1000b1578)();
  return;
}



/* Entry: 10004c1fc; end: 10004d207;  */

void FUN_10004c1fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9
                  ,undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined *param_13,
                  long param_14,undefined8 param_15,undefined8 param_16,long param_17,
                  undefined *param_18)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar11;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  code *pcVar17;
  long lVar18;
  long alStack_1c0 [8];
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  long lStack_158;
  long lStack_150;
  undefined *puStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  
  puStack_c0 = param_18;
  lStack_108 = param_17;
  uStack_128 = param_15;
  uStack_130 = param_11;
  lVar12 = 0x1000c6778;
  uStack_120 = param_9;
  uStack_118 = param_3;
  uStack_110 = param_4;
  uStack_100 = param_7;
  func_0x0001000100d0(0x1000c6778,&UNK_10008c810);
  lStack_168 = lVar12;
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = 0x1000c6758;
  puStack_160 = (undefined1 *)((long)&lStack_180 - extraout_x8);
  func_0x0001000100d0(0x1000c6758,&UNK_10008c6d0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  lVar11 = ((long)&lStack_180 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_158 = lVar11;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar11 = lVar11 - extraout_x12;
  lStack_d8 = lVar11;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar11 = lVar11 - extraout_x12_00;
  lStack_170 = lVar11;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar11 = lVar11 - extraout_x12_01;
  lStack_138 = lVar11;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar11 = lVar11 - extraout_x12_02;
  puVar5 = (undefined *)0x0;
  FUN_10005cf80();
  lVar18 = *(long *)(puVar5 + -8);
  puStack_f8 = puVar5;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar18 + 0x40));
  lVar12 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_150 = lVar12;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar12 = lVar12 - extraout_x12_03;
  lStack_178 = lVar12;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar12 = lVar12 - extraout_x12_04;
  lStack_140 = lVar12;
  func_0x00010004ddbc(param_5 + 0x28,&uStack_a0,0x1000c6760,&UNK_10008c6d8);
  lStack_d0 = param_14;
  uStack_f0 = param_16;
  puStack_e8 = param_13;
  uStack_e0 = param_12;
  uStack_c8 = param_10;
  uStack_b8 = param_8;
  if (lStack_88 == 0) {
    _swift_bridgeObjectRetain_n(param_16,2);
    _swift_retain_n(puStack_c0,2);
    _swift_retain_n(param_6,2);
    _swift_bridgeObjectRetain_n(param_8,2);
    _swift_bridgeObjectRetain_n(param_10,2);
    _swift_bridgeObjectRetain_n(param_12,2);
    _objc_retain(param_13);
    _objc_retain(param_14);
    _objc_retain(param_13);
    _objc_retain(param_14);
    func_0x00010004dd7c(&uStack_a0,0x1000c6760,&UNK_10008c6d8);
    puVar5 = puStack_f8;
    (**(code **)(lVar18 + 0x38))(lVar11,1,1,puStack_f8);
    uVar15 = uStack_118;
    uVar16 = uStack_110;
  }
  else {
    func_0x000100013de4();
    _swift_bridgeObjectRetain_n(param_16,2);
    _swift_retain_n(puStack_c0,2);
    _swift_retain_n(param_6,2);
    _swift_bridgeObjectRetain_n(param_8,2);
    _swift_bridgeObjectRetain_n(param_10,2);
    _swift_bridgeObjectRetain_n(param_12,2);
    _objc_retain();
    _objc_retain();
    _objc_retain();
    _objc_retain();
    uVar16 = uStack_110;
    uVar15 = uStack_118;
    FUN_100046a44(lVar11,uStack_118,uStack_110);
    FUN_100012b94(&uStack_a0);
    puVar5 = puStack_f8;
    pcVar17 = *(code **)(lVar18 + 0x30);
    lVar6 = lVar11;
    (*pcVar17)(lVar11,1,puStack_f8);
    lVar9 = lStack_140;
    if ((int)lVar6 != 1) {
      lStack_d8 = param_14;
      func_0x00010004dd0c(lVar11,lStack_140);
      uStack_a0 = 0;
      uStack_98 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x48);
      __sSS6appendyySSF(0xd000000000000042,0x800000010009dfb0);
      __sSS6appendyySSF(uVar15,uVar16);
      __sSS6appendyySSF(0x203a,0xe200000000000000);
      __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                (lVar9,&uStack_a0,puVar5,PTR___ss26DefaultStringInterpolationVN_1000b1408,
                 PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000b1410);
      uVar15 = uStack_98;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_a0,uStack_98);
      _objc_release();
      _swift_bridgeObjectRelease(uVar15);
      lVar6 = lStack_138;
      func_0x00010004dc60(lVar9,lStack_138);
      (**(code **)(lVar18 + 0x38))(lVar6,0,1,puVar5);
      puVar5 = &UNK_1000b4bf0;
      _swift_allocObject(&UNK_1000b4bf0,0x20,7);
      puVar14 = puStack_c0;
      lVar18 = lStack_108;
      *(long *)(puVar5 + 0x10) = lStack_108;
      *(undefined **)(puVar5 + 0x18) = puStack_c0;
      _swift_beginAccess(param_6 + 0x10,&uStack_a0,0,0);
      puVar7 = (undefined *)(param_6 + 0x10);
      _swift_weakLoadStrong();
      lVar11 = lStack_170;
      puStack_148 = param_13;
      if (puVar7 == (undefined *)0x0) {
        uStack_b0 = 0;
        uStack_a8 = 0xe000000000000000;
        _swift_retain_n(puVar14,2);
        _swift_retain(param_6);
        uVar13 = uStack_b8;
        _swift_bridgeObjectRetain(uStack_b8);
        _swift_bridgeObjectRetain(uStack_c8);
        uVar16 = uStack_e0;
        _swift_bridgeObjectRetain(uStack_e0);
        _objc_retain(param_13);
        lVar12 = lStack_d8;
        _objc_retain(lStack_d8);
        uVar15 = uStack_f0;
        _swift_bridgeObjectRetain(uStack_f0);
        __ss11_StringGutsV4growyySiF(0x4a);
        __sSS6appendyySSF(0xd000000000000048,0x800000010009e100);
        __sSS6appendyySSF(uStack_100,uVar13);
        uVar13 = uStack_a8;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_b0,uStack_a8);
        _objc_release();
        _swift_bridgeObjectRelease(uVar13);
        puVar1 = puStack_160;
        *puStack_160 = 0;
        _swift_storeEnumTagMultiPayload(puVar1,lStack_168,1);
        func_0x000100059210(puVar1,lVar18,puVar14);
        func_0x00010004dd7c(puVar1,0x1000c6778,&UNK_10008c810);
        _swift_bridgeObjectRelease(uVar16);
        _objc_release(param_13);
        _objc_release(lVar12);
        _swift_bridgeObjectRelease(uVar15);
        puVar8 = puVar14;
      }
      else {
        func_0x00010004ddbc(lVar6,lStack_170,0x1000c6758,&UNK_10008c6d0);
        lVar9 = lVar11;
        (*pcVar17)(lVar11,1,puStack_f8);
        uVar16 = uStack_c8;
        lVar18 = lStack_178;
        lStack_180 = param_6;
        if ((int)lVar9 == 1) {
          _swift_retain_n(puVar14,2);
          _swift_retain(param_6);
          uVar3 = uStack_b8;
          _swift_bridgeObjectRetain(uStack_b8);
          _swift_bridgeObjectRetain(uVar16);
          uVar2 = uStack_e0;
          _swift_bridgeObjectRetain(uStack_e0);
          _objc_retain();
          puStack_f8 = param_13;
          _objc_retain();
          uVar15 = uStack_f0;
          _swift_bridgeObjectRetain(uStack_f0);
          func_0x00010004dd7c(lVar11,0x1000c6758,&UNK_10008c6d0);
          uStack_b0 = 0;
          uStack_a8 = 0xe000000000000000;
          __ss11_StringGutsV4growyySiF(0x56);
          __sSS6appendyySSF(0xd000000000000054,0x800000010009e150);
          uVar13 = uStack_100;
          __sSS6appendyySSF(uStack_100,uVar3);
          uVar4 = uStack_a8;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_b0,uStack_a8);
          _objc_release();
          _swift_bridgeObjectRelease(uVar4);
          *(undefined8 *)(lVar12 + -0x10) = 0x10004de08;
          *(undefined **)(lVar12 + -8) = puVar5;
          *(undefined8 *)(lVar12 + -0x20) = 0;
          *(undefined8 *)(lVar12 + -0x18) = 0;
          *(undefined8 *)(lVar12 + -0x30) = uVar15;
          *(undefined8 *)(lVar12 + -0x28) = 0;
          FUN_100051d6c(uStack_120,uVar16,uVar13,uVar3,uStack_130,uVar2,puStack_e8,uStack_128);
          _swift_bridgeObjectRelease(uVar2);
          _objc_release(puStack_f8);
          param_6 = lStack_180;
          _objc_release(lStack_d8);
          _swift_bridgeObjectRelease(uVar15);
          _swift_release(puVar14);
          puVar8 = puVar5;
          puVar5 = puVar7;
        }
        else {
          func_0x00010004dd0c(lVar11,lStack_178);
          uStack_b0 = 0;
          uStack_a8 = 0xe000000000000000;
          _swift_retain_n(puVar14,2);
          _swift_retain(param_6);
          uVar4 = uStack_b8;
          _swift_bridgeObjectRetain(uStack_b8);
          _swift_bridgeObjectRetain(uVar16);
          uVar3 = uStack_e0;
          _swift_bridgeObjectRetain(uStack_e0);
          _objc_retain();
          puStack_f8 = param_13;
          _objc_retain();
          uVar15 = uStack_f0;
          _swift_bridgeObjectRetain(uStack_f0);
          __ss11_StringGutsV4growyySiF(0x38);
          __sSS6appendyySSF(0xd000000000000036,0x800000010009e1b0);
          uVar2 = uStack_100;
          __sSS6appendyySSF(uStack_100,uVar4);
          uVar13 = uStack_a8;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_b0,uStack_a8);
          _objc_release();
          _swift_bridgeObjectRelease(uVar13);
          *(undefined8 *)(lVar12 + -0x10) = 0x10004de08;
          *(undefined **)(lVar12 + -8) = puVar5;
          *(undefined8 *)(lVar12 + -0x20) = 0;
          *(undefined8 *)(lVar12 + -0x18) = 0;
          *(undefined8 *)(lVar12 + -0x30) = uVar15;
          *(undefined8 *)(lVar12 + -0x28) = 0;
          uVar13 = uStack_128;
          *(long *)(lVar12 + -0x40) = lVar18;
          *(undefined8 *)(lVar12 + -0x38) = uVar13;
          lVar12 = lStack_d8;
          param_6 = lStack_180;
          FUN_10004fb5c(param_1,param_2,uStack_120,uVar16,uVar2,uVar4,uStack_130,uVar3,puStack_e8,
                        lStack_d8);
          puVar14 = puStack_c0;
          _swift_release(puVar7);
          func_0x00010004dca4(lVar18);
          _swift_bridgeObjectRelease(uVar3);
          _objc_release(puStack_f8);
          _objc_release(lVar12);
          _swift_bridgeObjectRelease(uVar15);
          puVar8 = puVar14;
        }
      }
      _swift_release(puVar8);
      _swift_release(puVar5);
      _swift_release(param_6);
      _swift_bridgeObjectRelease(uStack_b8);
      uVar13 = uStack_c8;
      _swift_bridgeObjectRelease(uStack_c8);
      func_0x00010004dd7c(lStack_138,0x1000c6758,&UNK_10008c6d0);
      func_0x00010004dca4(lStack_140);
      puVar5 = puStack_148;
      uVar16 = uStack_e0;
      goto LAB_10004d178;
    }
  }
  func_0x00010004dd7c(lVar11,0x1000c6758,&UNK_10008c6d0);
  uStack_a0 = 0;
  uStack_98 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x37);
  __sSS6appendyySSF(0xd000000000000035,0x800000010009df70);
  __sSS6appendyySSF(uVar15,uVar16);
  uVar15 = uStack_98;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_a0,uStack_98);
  _objc_release();
  _swift_bridgeObjectRelease(uVar15);
  lVar6 = lStack_d8;
  (**(code **)(lVar18 + 0x38))(lStack_d8,1,1,puVar5);
  puVar7 = &UNK_1000b4bc8;
  _swift_allocObject(&UNK_1000b4bc8,0x20,7);
  puVar10 = puStack_c0;
  lVar9 = lStack_108;
  *(long *)(puVar7 + 0x10) = lStack_108;
  *(undefined **)(puVar7 + 0x18) = puStack_c0;
  _swift_beginAccess(param_6 + 0x10,&uStack_a0,0,0);
  puVar8 = (undefined *)(param_6 + 0x10);
  _swift_weakLoadStrong();
  uVar15 = uStack_f0;
  lVar11 = lStack_158;
  if (puVar8 == (undefined *)0x0) {
    uStack_b0 = 0;
    uStack_a8 = 0xe000000000000000;
    _swift_bridgeObjectRetain(uStack_f0);
    _swift_retain_n(puVar10,2);
    _swift_retain(param_6);
    uVar13 = uStack_b8;
    _swift_bridgeObjectRetain(uStack_b8);
    _swift_bridgeObjectRetain(uStack_c8);
    uVar16 = uStack_e0;
    _swift_bridgeObjectRetain(uStack_e0);
    puVar5 = puStack_e8;
    _objc_retain(puStack_e8);
    lVar12 = lStack_d0;
    _objc_retain(lStack_d0);
    __ss11_StringGutsV4growyySiF(0x4a);
    __sSS6appendyySSF(0xd000000000000048,0x800000010009e100);
    __sSS6appendyySSF(uStack_100,uVar13);
    uVar13 = uStack_a8;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_b0,uStack_a8);
    _objc_release();
    _swift_bridgeObjectRelease(uVar13);
    puVar1 = puStack_160;
    *puStack_160 = 0;
    _swift_storeEnumTagMultiPayload(puVar1,lStack_168,1);
    func_0x000100059210(puVar1,lVar9,puVar10);
    func_0x00010004dd7c(puVar1,0x1000c6778,&UNK_10008c810);
    _swift_bridgeObjectRelease(uVar16);
    _objc_release(puVar5);
    _objc_release(lVar12);
    _swift_bridgeObjectRelease(uVar15);
    puVar14 = puVar10;
  }
  else {
    func_0x00010004ddbc(lVar6,lStack_158,0x1000c6758,&UNK_10008c6d0);
    lVar9 = lVar11;
    (**(code **)(lVar18 + 0x30))(lVar11,1,puVar5);
    puVar5 = puStack_e8;
    if ((int)lVar9 == 1) {
      _swift_bridgeObjectRetain(uStack_f0);
      _swift_retain_n(puVar10,2);
      _swift_retain(param_6);
      uVar3 = uStack_b8;
      _swift_bridgeObjectRetain(uStack_b8);
      uVar2 = uStack_c8;
      _swift_bridgeObjectRetain(uStack_c8);
      uVar16 = uStack_e0;
      _swift_bridgeObjectRetain(uStack_e0);
      _objc_retain();
      lVar18 = lStack_d0;
      puStack_148 = puVar5;
      _objc_retain(lStack_d0);
      func_0x00010004dd7c(lVar11,0x1000c6758,&UNK_10008c6d0);
      uStack_b0 = 0;
      uStack_a8 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x56);
      __sSS6appendyySSF(0xd000000000000054,0x800000010009e150);
      uVar13 = uStack_100;
      __sSS6appendyySSF(uStack_100,uVar3);
      uVar15 = uStack_a8;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_b0,uStack_a8);
      _objc_release();
      _swift_bridgeObjectRelease(uVar15);
      *(code **)(lVar12 + -0x10) = FUN_10004dd74;
      *(undefined **)(lVar12 + -8) = puVar7;
      *(undefined8 *)(lVar12 + -0x20) = 0;
      *(undefined8 *)(lVar12 + -0x18) = 0;
      *(undefined8 *)(lVar12 + -0x28) = 0;
      uVar15 = uStack_f0;
      *(undefined8 *)(lVar12 + -0x30) = uStack_f0;
      FUN_100051d6c(uStack_120,uVar2,uVar13,uVar3,uStack_130,uVar16,puStack_e8,uStack_128);
      puVar14 = puStack_c0;
      _swift_bridgeObjectRelease(uVar16);
      puVar5 = puStack_148;
      _objc_release(puStack_148);
      _objc_release(lVar18);
      _swift_bridgeObjectRelease(uVar15);
      _swift_release(puVar14);
      puVar10 = puVar7;
      puVar7 = puVar8;
    }
    else {
      func_0x00010004dd0c(lVar11,lStack_150);
      uVar15 = uStack_f0;
      uStack_b0 = 0;
      uStack_a8 = 0xe000000000000000;
      _swift_bridgeObjectRetain(uStack_f0);
      _swift_retain_n(puVar10,2);
      _swift_retain(param_6);
      uVar3 = uStack_b8;
      _swift_bridgeObjectRetain(uStack_b8);
      uVar2 = uStack_c8;
      _swift_bridgeObjectRetain(uStack_c8);
      uVar16 = uStack_e0;
      puStack_f8 = puVar8;
      _swift_bridgeObjectRetain(uStack_e0);
      _objc_retain();
      lVar11 = lStack_d0;
      puStack_148 = puVar5;
      _objc_retain();
      lStack_108 = lVar11;
      __ss11_StringGutsV4growyySiF(0x38);
      __sSS6appendyySSF(0xd000000000000036,0x800000010009e1b0);
      uVar13 = uStack_100;
      __sSS6appendyySSF(uStack_100,uVar3);
      uVar4 = uStack_a8;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_b0,uStack_a8);
      _objc_release();
      _swift_bridgeObjectRelease(uVar4);
      *(code **)(lVar12 + -0x10) = FUN_10004dd74;
      *(undefined **)(lVar12 + -8) = puVar7;
      *(undefined8 *)(lVar12 + -0x20) = 0;
      *(undefined8 *)(lVar12 + -0x18) = 0;
      *(undefined8 *)(lVar12 + -0x30) = uVar15;
      *(undefined8 *)(lVar12 + -0x28) = 0;
      *(undefined8 *)(lVar12 + -0x38) = uStack_128;
      lVar11 = lStack_150;
      *(long *)(lVar12 + -0x40) = lStack_150;
      puVar8 = puStack_f8;
      lVar12 = lStack_108;
      FUN_10004fb5c(param_1,param_2,uStack_120,uVar2,uVar13,uVar3,uStack_130,uVar16,puStack_e8,
                    lStack_108);
      puVar10 = puStack_c0;
      puVar5 = puStack_148;
      _swift_release(puVar8);
      func_0x00010004dca4(lVar11);
      _swift_bridgeObjectRelease(uVar16);
      _objc_release(puVar5);
      _objc_release(lVar12);
      _swift_bridgeObjectRelease(uVar15);
      puVar14 = puVar10;
    }
  }
  _swift_release(puVar10);
  _swift_release(puVar7);
  _swift_release(param_6);
  _swift_bridgeObjectRelease(uStack_b8);
  uVar13 = uStack_c8;
  _swift_bridgeObjectRelease(uStack_c8);
  func_0x00010004dd7c(lStack_d8,0x1000c6758,&UNK_10008c6d0);
LAB_10004d178:
  _objc_release(puVar5);
  _swift_release_n(puVar14,2);
  _objc_release(puVar5);
  _swift_bridgeObjectRelease_n(uVar16,2);
  _swift_bridgeObjectRelease_n(uVar13,2);
  _swift_bridgeObjectRelease_n(uStack_b8,3);
  _swift_release_n(param_6,3);
  _swift_bridgeObjectRelease_n(uVar15,2);
  lVar12 = lStack_d0;
  _objc_release(lStack_d0);
  _objc_release(lVar12);
  return;
}



/* Entry: 10004d208; end: 10004d5c7;  */

void FUN_10004d208(undefined8 param_1,undefined8 param_2,long param_3,code *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_70;
  
  lVar1 = 0x1000c6758;
  uStack_d8 = param_5;
  pcStack_d0 = param_4;
  func_0x0001000100d0(0x1000c6758,&UNK_10008c6d0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar8 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar6 = (long)puVar8 - extraout_x12;
  lVar1 = 0;
  FUN_10005cf80();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar7 + 0x40));
  lVar9 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x00010004ddbc(param_3 + 0x28,&uStack_88,0x1000c6760,&UNK_10008c6d8);
  if (lStack_70 == 0) {
    func_0x00010004dd7c(&uStack_88,0x1000c6760,&UNK_10008c6d8);
    (**(code **)(lVar7 + 0x38))(lVar6,1,1,lVar1);
  }
  else {
    func_0x000100013de4();
    FUN_100046a44(lVar6,param_1,param_2);
    FUN_100012b94(&uStack_88);
    lVar2 = lVar6;
    (**(code **)(lVar7 + 0x30))(lVar6,1,lVar1);
    if ((int)lVar2 != 1) {
      func_0x00010004dd0c(lVar6,lVar9);
      uStack_88 = 0;
      uStack_80 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x48);
      __sSS6appendyySSF(0xd000000000000042,0x800000010009dfb0);
      __sSS6appendyySSF(param_1,param_2);
      __sSS6appendyySSF(0x203a,0xe200000000000000);
      __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                (lVar9,&uStack_88,lVar1,PTR___ss26DefaultStringInterpolationVN_1000b1408,
                 PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000b1410);
      uVar3 = uStack_80;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_88,uStack_80);
      _objc_release();
      _swift_bridgeObjectRelease(uVar3);
      func_0x00010004dc60(lVar9,puVar8);
      (**(code **)(lVar7 + 0x38))(puVar8,0,1,lVar1);
      _swift_getErrorValue(param_6,auStack_b0,auStack_c8);
      uVar3 = uStack_c0;
      uVar5 = uStack_b8;
      __ss5ErrorP10FoundationE20localizedDescriptionSSvg(uStack_c0,uStack_b8);
      __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_6);
      uVar4 = param_6;
      func_0x0001000865e0();
      _objc_release(param_6);
      (*pcStack_d0)(puVar8,uVar3,uVar5,uVar4);
      _swift_bridgeObjectRelease(uVar5);
      func_0x00010004dd7c(puVar8,0x1000c6758,&UNK_10008c6d0);
      func_0x00010004dca4(lVar9);
      return;
    }
  }
  func_0x00010004dd7c(lVar6,0x1000c6758,&UNK_10008c6d0);
  uStack_88 = 0;
  uStack_80 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x37);
  __sSS6appendyySSF(0xd000000000000035,0x800000010009df70);
  __sSS6appendyySSF(param_1,param_2);
  uVar3 = uStack_80;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_88,uStack_80);
  _objc_release();
  _swift_bridgeObjectRelease(uVar3);
  (**(code **)(lVar7 + 0x38))(puVar8,1,1,lVar1);
  _swift_getErrorValue(param_6,auStack_90,auStack_a8);
  uVar3 = uStack_a0;
  uVar5 = uStack_98;
  __ss5ErrorP10FoundationE20localizedDescriptionSSvg(uStack_a0,uStack_98);
  __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_6);
  uVar4 = param_6;
  func_0x0001000865e0();
  _objc_release(param_6);
  (*pcStack_d0)(puVar8,uVar3,uVar5,uVar4);
  _swift_bridgeObjectRelease(uVar5);
  func_0x00010004dd7c(puVar8,0x1000c6758,&UNK_10008c6d0);
  return;
}



/* Entry: 10004d5c8; end: 10004dbf3;  */

void FUN_10004d5c8(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  if (param_1 == (undefined *)0x0) {
    FUN_100053070(0,1,1,PTR___swiftEmptyArrayStorage_1000b14d0);
    uVar1 = *(ulong *)(param_1 + 0x10);
    puVar10 = param_1;
    if (*(ulong *)(param_1 + 0x18) >> 1 <= uVar1) {
      puVar10 = (undefined *)(ulong)(1 < *(ulong *)(param_1 + 0x18));
      FUN_100053070(puVar10,uVar1 + 1,1,param_1);
    }
    *(ulong *)(puVar10 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar10 + uVar1 * 0x10 + 0x20) = 0x65736e6f70736572;
    *(undefined8 *)(puVar10 + uVar1 * 0x10 + 0x28) = 0xef6c696e20736920;
    goto LAB_10004d9e8;
  }
  _objc_retain();
  puVar10 = param_1;
  func_0x0001000869e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10004dbf0);
    (*pcVar2)();
  }
  puVar8 = puVar10;
  func_0x000100086960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  if (puVar8 == (undefined *)0x0) {
    uStack_88 = 0;
    lStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&lStack_90,puVar8);
    _swift_unknownObjectRelease(puVar8);
  }
  uStack_68 = uStack_88;
  lStack_70 = lStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    FUN_10004dd7c(&lStack_70,0x1000c49f8,&UNK_1000899e0);
LAB_10004d75c:
    puVar8 = (undefined *)0x0;
    FUN_100053070(0,1,1,PTR___swiftEmptyArrayStorage_1000b14d0);
    uVar1 = *(ulong *)(puVar8 + 0x10);
    puVar10 = puVar8;
    if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
      puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
      FUN_100053070(puVar10,uVar1 + 1,1,puVar8);
    }
    *(ulong *)(puVar10 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar10 + uVar1 * 0x10 + 0x20) = 0xd000000000000024;
    *(undefined8 *)(puVar10 + uVar1 * 0x10 + 0x28) = 0x800000010009e040;
  }
  else {
    uVar3 = 0;
    FUN_10004dbf4(0,0x1000c6768,&PTR_PTR_1000c2130);
    puVar10 = PTR___sypN_1000b14c8;
    puVar4 = &uStack_98;
    _swift_dynamicCast(puVar4,&lStack_70,PTR___sypN_1000b14c8 + 8,uVar3,6);
    uVar1 = uStack_98;
    if (((ulong)puVar4 & 1) == 0) goto LAB_10004d75c;
    uVar5 = uStack_98;
    func_0x000100086fa0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10004dbf4);
      (*pcVar2)();
    }
    uVar6 = uVar5;
    func_0x000100086960();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    if (uVar6 == 0) {
      uStack_88 = 0;
      lStack_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&lStack_90,uVar6);
      _swift_unknownObjectRelease(uVar6);
    }
    uStack_68 = uStack_88;
    lStack_70 = lStack_90;
    lStack_58 = lStack_78;
    uStack_60 = uStack_80;
    if (lStack_78 == 0) {
      FUN_10004dd7c(&lStack_70,0x1000c49f8,&UNK_1000899e0);
LAB_10004d86c:
      puVar8 = (undefined *)0x0;
      FUN_100053070(0,1,1,PTR___swiftEmptyArrayStorage_1000b14d0);
      uVar5 = *(ulong *)(puVar8 + 0x10);
      puVar10 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar5) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        FUN_100053070(puVar10,uVar5 + 1,1,puVar8);
      }
      *(ulong *)(puVar10 + 0x10) = uVar5 + 1;
      *(undefined8 *)(puVar10 + uVar5 * 0x10 + 0x20) = 0xd000000000000025;
      *(undefined8 *)(puVar10 + uVar5 * 0x10 + 0x28) = 0x800000010009e0b0;
    }
    else {
      uVar3 = 0;
      FUN_10004dbf4(0,0x1000c6770,&PTR_PTR_1000c21f8);
      puVar4 = &uStack_98;
      _swift_dynamicCast(puVar4,&lStack_70,puVar10 + 8,uVar3,6);
      if (((ulong)puVar4 & 1) == 0) goto LAB_10004d86c;
      uVar5 = uStack_98;
      func_0x000100087880();
      _objc_retainAutoreleasedReturnValue();
      if (uVar5 == 0) {
LAB_10004d8bc:
        _objc_release(uStack_98);
        puVar10 = PTR___swiftEmptyArrayStorage_1000b14d0;
      }
      else {
        lStack_70 = 0;
        __sSa10FoundationE34_conditionallyBridgeFromObjectiveC_6resultSbSo7NSArrayC_SayxGSgztFZ();
        _objc_release(uVar5);
        lVar7 = lStack_70;
        if (lStack_70 == 0) goto LAB_10004d8bc;
        if (*(long *)(lStack_70 + 0x10) == 0) {
          _swift_bridgeObjectRelease(lStack_70);
          puVar8 = (undefined *)0x0;
          FUN_100053070(0,1,1,PTR___swiftEmptyArrayStorage_1000b14d0);
          uVar5 = *(ulong *)(puVar8 + 0x10);
          puVar10 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar5) {
            puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
            FUN_100053070(puVar10,uVar5 + 1,1,puVar8);
          }
          *(ulong *)(puVar10 + 0x10) = uVar5 + 1;
          *(undefined8 *)(puVar10 + uVar5 * 0x10 + 0x20) = 0x692073656c746974;
          *(undefined8 *)(puVar10 + uVar5 * 0x10 + 0x28) = 0xef7974706d652073;
          _objc_release(uStack_98);
        }
        else {
          _objc_release(uStack_98);
          _swift_bridgeObjectRelease(lVar7);
          puVar10 = PTR___swiftEmptyArrayStorage_1000b14d0;
        }
      }
    }
    uVar5 = uVar1;
    func_0x000100086b00();
    if ((uVar5 & 1) == 0) {
      puVar8 = puVar10;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar9 = puVar10;
      if (((ulong)puVar8 & 1) == 0) {
        puVar9 = (undefined *)0x0;
        FUN_100053070(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
      }
      uVar5 = *(ulong *)(puVar9 + 0x10);
      puVar10 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar5) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
        FUN_100053070(puVar10,uVar5 + 1,1,puVar9);
      }
      *(ulong *)(puVar10 + 0x10) = uVar5 + 1;
      *(undefined8 *)(puVar10 + uVar5 * 0x10 + 0x20) = 0xd000000000000010;
      *(undefined8 *)(puVar10 + uVar5 * 0x10 + 0x28) = 0x800000010009e0e0;
    }
    _objc_release(uVar1);
  }
  lStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x50);
  __sSS6appendyySSF(0xd00000000000003c,0x800000010009e070);
  __sSS6appendyySSF(param_2,param_3);
  uVar3 = 0x800000010009df00;
  __sSS6appendyySSF(0xd000000000000010,0x800000010009df00);
  puVar8 = param_1;
  func_0x000100086800(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(puVar8);
  __sSS6appendyySSF(puVar9,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = uStack_68;
  lVar7 = lStack_70;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_70,uStack_68);
  _objc_release(param_1);
  _objc_release(lVar7);
  _swift_bridgeObjectRelease(uVar3);
LAB_10004d9e8:
  lStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x43);
  __sSS6appendyySSF(0xd000000000000035,0x800000010009e000);
  __sSS6appendyySSF(param_2,param_3);
  __sSS6appendyySSF(0x73726f727245202e,0xea0000000000203a);
  puVar8 = PTR___sSSN_1000b1180;
  __sSa11descriptionSSvg(puVar10,PTR___sSSN_1000b1180);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar8);
  uVar3 = uStack_68;
  lVar7 = lStack_70;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_70,uStack_68);
  _swift_bridgeObjectRelease(puVar10);
  _objc_release(lVar7);
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 10004dbf4; end: 10004dd4f;  */

void FUN_10004dbf4(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 10004dd50; end: 10004dd73;  */

void FUN_10004dd50(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 10004dd74; end: 10004dd7b;  */

void FUN_10004dd74(undefined8 param_1)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar8;
  char *pcVar9;
  long lVar10;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  lVar10 = 0x1000c6778;
  func_0x0001000100d0(0x1000c6778,&UNK_10008c810,*(undefined8 *)(unaff_x20 + 0x18));
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar9 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar3 = 0;
  FUN_10005a998();
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar8 = (long)pcVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x00010005b1e8(param_1,pcVar9,0x1000c6778,&UNK_10008c810);
  pcVar4 = pcVar9;
  _swift_getEnumCaseMultiPayload(pcVar9,lVar10);
  if ((int)pcVar4 == 1) {
    cVar2 = *pcVar9;
    __s10Foundation4DateVACycfC(lVar8);
    lVar10 = (long)*(int *)(lVar3 + 0x14);
    if (cVar2 != '\x01') {
      FUN_10005b118();
      puVar6 = &UNK_1000b5668;
      _swift_allocError(&UNK_1000b5668,pcVar4,0,0);
      *pcVar4 = cVar2;
      *(undefined **)(lVar8 + lVar10) = puVar6;
      uVar5 = 0x1000c69e0;
      func_0x0001000100d0(0x1000c69e0,&UNK_10008c9c0);
      uVar7 = 1;
      goto LAB_1000593b8;
    }
    uVar5 = 0;
    FUN_10005ee88(0);
    _swift_storeEnumTagMultiPayload(lVar8 + lVar10,uVar5,2);
    uVar5 = 0x1000c69e0;
    func_0x0001000100d0(0x1000c69e0,&UNK_10008c9c0);
  }
  else {
    lVar10 = (long)*(int *)(lVar3 + 0x14);
    func_0x00010005bb40(pcVar9,lVar8 + lVar10,FUN_10005ee88);
    __s10Foundation4DateVACycfC(lVar8);
    uVar5 = 0x1000c69e0;
    func_0x0001000100d0(0x1000c69e0,&UNK_10008c9c0);
  }
  uVar7 = 0;
LAB_1000593b8:
  _swift_storeEnumTagMultiPayload(lVar8 + lVar10,uVar5,uVar7);
  (*pcVar1)(lVar8);
  FUN_10005bac0(lVar8,FUN_10005a998);
  return;
}



/* Entry: 10004dd7c; end: 10004de03;  */

undefined8 FUN_10004dd7c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000100d0(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10004de04; end: 10004de0b;  */

void FUN_10004de04(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 10004de0c; end: 10004e5df;  */

void FUN_10004de0c(double param_1,double param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,char param_8,undefined8 param_9,
                  undefined8 param_10,ulong param_11,undefined8 param_12,undefined8 param_13,
                  code *param_14,undefined8 param_15)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_a0 [32];
  
  lVar5 = 0;
  __s7SwiftUI11ColorSchemeOMa();
  lVar16 = *(long *)(lVar5 + -8);
  lVar18 = *(long *)(lVar16 + 0x40);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar17 = (long)&lStack_160 - (lVar18 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_5 + 0x10,auStack_a0,0,0);
  param_5 = param_5 + 0x10;
  _swift_weakLoadStrong();
  if (param_5 == 0) {
    return;
  }
  uStack_118 = param_3;
  if ((param_4 == 0) || (param_8 == '\x01')) {
    (*param_14)(0);
LAB_10004ded8:
    _swift_release(param_5);
  }
  else {
    pcStack_130 = param_14;
    uStack_120 = param_11;
    uStack_148 = param_6;
    uStack_140 = param_7;
    FUN_10004ee40(param_5 + 0x30,&puStack_110);
    uStack_138 = param_13;
    uStack_128 = param_12;
    if (puStack_f8 == (undefined *)0x0) {
      _swift_bridgeObjectRetain(param_4);
      FUN_10004eff4(&puStack_110,0x1000c6860,&UNK_10008c738);
    }
    else {
      func_0x000100013de4();
      _swift_bridgeObjectRetain(param_4);
      uVar14 = uStack_120;
      FUN_100047584(param_6,param_7,uStack_120,param_12,param_13);
      FUN_100012b94(&puStack_110);
      if (uVar14 != 0) {
        _swift_bridgeObjectRelease(param_4);
        puStack_110 = (undefined *)0x0;
        uStack_108 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x5b);
        __sSS6appendyySSF(0xd00000000000004b,0x800000010009e320);
        __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                  (uStack_120,&puStack_110,lVar5,PTR___ss26DefaultStringInterpolationVN_1000b1408,
                   PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000b1410);
        __sSS6appendyySSF(0x646e65697266202c,0xec000000203a6449);
        __sSS6appendyySSF(uStack_128,uStack_138);
        uVar8 = uStack_108;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_110,uStack_108);
        _objc_release();
        _swift_bridgeObjectRelease(uVar8);
        uVar15 = uVar14;
        _objc_retain(uVar14);
        (*pcStack_130)(uVar14);
        _objc_release(uVar15);
        _objc_release(uVar15);
        goto LAB_10004ded8;
      }
    }
    uStack_150 = param_15;
    FUN_100082388(param_6,param_7,0x4028000000000000,0x4043000000000000,0,0,0);
    lVar6 = 0x1000c4360;
    func_0x0001000100d0(0x1000c4360,&UNK_100088f60);
    _swift_allocObject();
    *(undefined8 *)(lVar6 + 0x18) = 0xe;
    *(undefined8 *)(lVar6 + 0x10) = 7;
    (**(code **)(lVar16 + 0x68))
              (lVar17,*(undefined4 *)PTR___s7SwiftUI11ColorSchemeO5lightyA2CmFWC_1000b0270,lVar5);
    uVar14 = uStack_120;
    __s7SwiftUI11ColorSchemeO2eeoiySbAC_ACtFZ(uStack_120,lVar17);
    lVar13 = lVar17;
    lVar12 = lVar5;
    (**(code **)(lVar16 + 8))();
    if ((uVar14 & 1) == 0) {
      func_0x00010004ecf4();
    }
    else {
      FUN_10004ec60();
    }
    puVar9 = PTR___sSSN_1000b1180;
    *(undefined **)(lVar6 + 0x38) = PTR___sSSN_1000b1180;
    lVar7 = lVar13;
    FUN_100015590();
    *(long *)(lVar6 + 0x40) = lVar7;
    *(long *)(lVar6 + 0x20) = lVar13;
    *(long *)(lVar6 + 0x28) = lVar12;
    puVar1 = PTR___sSds7CVarArgsWP_1000b11f8;
    puVar10 = PTR___sSdN_1000b11f0;
    *(undefined **)(lVar6 + 0x60) = PTR___sSdN_1000b11f0;
    *(undefined **)(lVar6 + 0x68) = puVar1;
    *(undefined8 *)(lVar6 + 0x48) = param_7;
    puVar2 = PTR___sSfN_1000b1200;
    *(undefined **)(lVar6 + 0x88) = puVar10;
    *(undefined **)(lVar6 + 0x90) = puVar1;
    puVar10 = PTR___sSfs7CVarArgsWP_1000b1208;
    *(undefined **)(lVar6 + 0xb0) = puVar2;
    *(undefined **)(lVar6 + 0xb8) = puVar10;
    *(undefined4 *)(lVar6 + 0x98) = 0x41400000;
    *(undefined8 *)(lVar6 + 0x70) = param_6;
    puVar1 = PTR___sSis7CVarArgsWP_1000b1218;
    puVar10 = PTR___sSiN_1000b1210;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10004e5cc);
      (*pcVar4)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10004e5d0);
      (*pcVar4)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10004e5d4);
      (*pcVar4)();
    }
    *(undefined **)(lVar6 + 0xd8) = PTR___sSiN_1000b1210;
    *(undefined **)(lVar6 + 0xe0) = puVar1;
    *(long *)(lVar6 + 0xc0) = (long)param_1;
    if (0x7fefffffffffffff < (ulong)ABS(param_2)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10004e5d8);
      (*pcVar4)();
    }
    if (param_2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10004e5dc);
      (*pcVar4)();
    }
    if (9.223372036854776e+18 <= param_2) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10004e5e0);
      (*pcVar4)();
    }
    *(undefined **)(lVar6 + 0x100) = puVar10;
    *(undefined **)(lVar6 + 0x108) = puVar1;
    *(long *)(lVar6 + 0xe8) = (long)param_2;
    *(undefined **)(lVar6 + 0x128) = puVar9;
    *(long *)(lVar6 + 0x130) = lVar7;
    *(undefined8 *)(lVar6 + 0x110) = 0x6e61424e5a6e4a62;
    *(undefined8 *)(lVar6 + 0x118) = 0xeb00000000795131;
    uVar8 = 0xd000000000000042;
    lVar13 = -0x7ffffffefff61d90;
    __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(0xd000000000000042,0x800000010009e270,lVar6);
    lVar6 = 0x1000c6868;
    lStack_160 = lVar13;
    uStack_158 = uVar8;
    func_0x0001000100d0(0x1000c6868,&UNK_10008c748);
    _swift_initStackObject();
    *(undefined8 *)(lVar6 + 0x18) = 2;
    *(undefined8 *)(lVar6 + 0x10) = 1;
    *(undefined8 *)(lVar6 + 0x20) = 0xd000000000000013;
    *(undefined8 *)(lVar6 + 0x28) = 0x800000010009e2c0;
    *(undefined8 *)(lVar6 + 0x30) = uStack_118;
    *(long *)(lVar6 + 0x38) = param_4;
    lVar13 = lVar6;
    func_0x000100053504();
    _swift_setDeallocating(lVar6);
    FUN_10004eff4((undefined8 *)(lVar6 + 0x20),0x1000c6870,&UNK_10008c750);
    puStack_110 = (undefined *)0x0;
    uStack_108 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x4d);
    __sSS6appendyySSF(0xd00000000000003d,0x800000010009e2e0);
    uVar14 = uStack_120;
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (uStack_120,&puStack_110,lVar5,PTR___ss26DefaultStringInterpolationVN_1000b1408,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000b1410);
    __sSS6appendyySSF(0x646e65697266202c,0xec000000203a6449);
    uVar3 = uStack_138;
    __sSS6appendyySSF(uStack_128,uStack_138);
    uVar8 = uStack_108;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_110,uStack_108);
    _objc_release();
    _swift_bridgeObjectRelease(uVar8);
    lVar6 = lStack_160;
    uStack_118 = *(undefined8 *)(param_5 + 0x10);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_158,lStack_160);
    _swift_bridgeObjectRelease(lVar6);
    lVar6 = lVar13;
    FUN_10004e5e0();
    _swift_bridgeObjectRelease(lVar13);
    lVar13 = lVar6;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar6,PTR___ss11AnyHashableVN_1000b1278,PTR___sypN_1000b14c8 + 8,
               PTR___ss11AnyHashableVSHsWP_1000b1280);
    lStack_160 = lVar13;
    _swift_bridgeObjectRelease(lVar6);
    puVar9 = &UNK_1000b4c30;
    _swift_allocObject(&UNK_1000b4c30,0x18,7);
    _swift_weakInit(puVar9 + 0x10,param_5);
    (**(code **)(lVar16 + 0x10))(lVar17,uVar14,lVar5);
    uVar14 = (ulong)*(byte *)(lVar16 + 0x50);
    uVar15 = uVar14 + 0x38 & (uVar14 ^ 0xffffffffffffffff);
    uVar19 = lVar18 + uVar15 + 7 & 0xfffffffffffffff8;
    puVar10 = &UNK_1000b4c58;
    _swift_allocObject(&UNK_1000b4c58,uVar19 + 0x10,uVar14 | 7);
    uVar8 = uStack_150;
    *(code **)(puVar10 + 0x10) = pcStack_130;
    *(undefined8 *)(puVar10 + 0x18) = uStack_150;
    *(undefined **)(puVar10 + 0x20) = puVar9;
    *(undefined8 *)(puVar10 + 0x28) = uStack_148;
    *(undefined8 *)(puVar10 + 0x30) = uStack_140;
    (**(code **)(lVar16 + 0x20))(puVar10 + uVar15,lVar17,lVar5);
    *(undefined8 *)(puVar10 + uVar19) = uStack_128;
    *(undefined8 *)((long)(puVar10 + uVar19) + 8) = uVar3;
    uStack_f0 = 0x10004ef40;
    puStack_110 = PTR___NSConcreteStackBlock_1000b0c60;
    uStack_108 = 0x42000000;
    pcStack_100 = FUN_10004f034;
    puStack_f8 = &UNK_1000b4c70;
    ppuVar11 = &puStack_110;
    puStack_e8 = puVar10;
    __Block_copy(ppuVar11);
    puVar9 = puStack_e8;
    _swift_retain(uVar8);
    _swift_bridgeObjectRetain(uVar3);
    _swift_release(puVar9);
    uVar8 = uStack_158;
    lVar5 = lStack_160;
    func_0x000100087000(uStack_118);
    __Block_release(ppuVar11);
    _swift_release(param_5);
    _objc_release(uVar8);
    _objc_release(lVar5);
  }
  return;
}



/* Entry: 10004e5e0; end: 10004e8ff;  */

undefined * FUN_10004e5e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [32];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [40];
  undefined1 auStack_c0 [32];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  
  puVar12 = *(undefined **)(param_1 + 0x10);
  puVar13 = PTR___swiftEmptyDictionarySingleton_1000b14d8;
  if (puVar12 != (undefined *)0x0) {
    uVar5 = 0x1000c6878;
    func_0x0001000100d0(0x1000c6878,&UNK_10008c760);
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ(puVar12,uVar5);
    puVar13 = puVar12;
  }
  uVar9 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(param_1 + 0x40);
  _swift_retain(puVar13);
  _swift_bridgeObjectRetain(param_1);
  lVar15 = 0;
  while( true ) {
    for (; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
      uVar7 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = lVar15 << 10 | LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) << 4;
      puVar10 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar7);
      uStack_168 = *puVar10;
      uVar1 = puVar10[1];
      puVar10 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar7);
      uVar5 = *puVar10;
      uVar2 = puVar10[1];
      uStack_160 = uVar1;
      _swift_bridgeObjectRetain_n(uVar1,2);
      _swift_bridgeObjectRetain_n(uVar2,2);
      puVar12 = PTR___sSSN_1000b1180;
      _swift_dynamicCast(&uStack_158,&uStack_168,PTR___sSSN_1000b1180,
                         PTR___ss11AnyHashableVN_1000b1278,7);
      uStack_178 = uVar5;
      uStack_170 = uVar2;
      _swift_dynamicCast(auStack_130,&uStack_178,puVar12,PTR___sypN_1000b14c8 + 8,7);
      _swift_bridgeObjectRelease(uVar2);
      _swift_bridgeObjectRelease(uVar1);
      if (lStack_140 == 0) {
        _swift_release(param_1);
        FUN_10004eff4(&uStack_158,0x1000c6880,&UNK_10008c768);
        _swift_release(puVar13);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10004e900);
        (*pcVar3)();
      }
      uStack_108 = uStack_150;
      uStack_110 = uStack_158;
      lStack_f8 = lStack_140;
      uStack_100 = uStack_148;
      uStack_f0 = uStack_138;
      FUN_100036784(auStack_130,auStack_e8);
      uStack_98 = uStack_108;
      uStack_a0 = uStack_110;
      lStack_88 = lStack_f8;
      uStack_90 = uStack_100;
      uStack_80 = uStack_f0;
      FUN_100036784(auStack_e8,auStack_c0);
      uVar6 = *(ulong *)(puVar13 + 0x28);
      __ss11AnyHashableV13_rawHashValue4seedS2i_tF();
      uVar11 = -1L << ((ulong)(byte)puVar13[0x20] & 0x3f);
      uVar6 = uVar6 & (uVar11 ^ 0xffffffffffffffff);
      uVar8 = uVar6 >> 6;
      uVar7 = -1L << (uVar6 & 0x3f) & (*(ulong *)(puVar13 + uVar8 * 8 + 0x40) ^ 0xffffffffffffffff);
      if (uVar7 == 0) {
        bVar4 = false;
        uVar7 = 0x3f - uVar11 >> 6;
        do {
          uVar6 = uVar8 + 1;
          if ((uVar6 == uVar7) && (bVar4)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10004e8d4);
            (*pcVar3)();
          }
          uVar8 = 0;
          if (uVar6 != uVar7) {
            uVar8 = uVar6;
          }
          bVar4 = (bool)(uVar6 == uVar7 | bVar4);
        } while (*(ulong *)(puVar13 + uVar8 * 8 + 0x40) == 0xffffffffffffffff);
        uVar7 = ~*(ulong *)(puVar13 + uVar8 * 8 + 0x40);
        uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar8 << 6;
      }
      else {
        uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar6 & 0x7fffffffffffffc0;
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar13 + uVar8 + 0x40) = 1L << (uVar7 & 0x3f) | *(ulong *)(puVar13 + uVar8 + 0x40)
      ;
      puVar10 = (undefined8 *)(*(long *)(puVar13 + 0x30) + uVar7 * 0x28);
      puVar10[1] = uStack_98;
      *puVar10 = uStack_a0;
      puVar10[3] = lStack_88;
      puVar10[2] = uStack_90;
      puVar10[4] = uStack_80;
      FUN_100036784(auStack_c0,*(long *)(puVar13 + 0x38) + uVar7 * 0x20);
      *(long *)(puVar13 + 0x10) = *(long *)(puVar13 + 0x10) + 1;
    }
    bVar4 = SCARRY8(lVar15,1);
    lVar15 = lVar15 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10004e8d0);
      (*pcVar3)();
    }
    if ((long)(uVar9 + 0x3f >> 6) <= lVar15) break;
    uVar14 = ((ulong *)(param_1 + 0x40))[lVar15];
  }
  _swift_release(puVar13);
  _swift_release(param_1);
  return puVar13;
}



/* Entry: 10004e900; end: 10004ec5f;  */

void FUN_10004e900(undefined8 param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
                  long param_6,code *param_7,undefined8 param_8,long param_9,undefined8 param_10,
                  undefined8 param_11,undefined8 param_12)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long alStack_b0 [3];
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  
  if ((((param_6 != 0) || (param_3 == 0)) || (func_0x0001000876e0(), param_3 != 200)) ||
     (0xe < param_5 >> 0x3c)) goto LAB_10004e9c0;
  uVar1 = (uint)(param_5 >> 0x20);
  if (uVar1 >> 0x1e < 2) {
    if (uVar1 >> 0x1e == 0) {
      if ((param_5 & 0xff000000000000) != 0) goto LAB_10004eafc;
      goto LAB_10004e9a0;
    }
    if ((long)(int)param_4 == param_4 >> 0x20) goto LAB_10004e9c0;
  }
  else {
    if (uVar1 >> 0x1e != 2) {
LAB_10004e9a0:
      FUN_1000275d4(param_4,param_5);
LAB_10004e9c0:
      uStack_98 = 0;
      uStack_90 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x62);
      __sSS6appendyySSF(0xd000000000000048,0x800000010009e370);
      uVar2 = 0;
      __s7SwiftUI11ColorSchemeOMa(0);
      __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                (param_10,&uStack_98,uVar2,PTR___ss26DefaultStringInterpolationVN_1000b1408,
                 PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000b1410);
      __sSS6appendyySSF(0x646e65697266202c,0xec000000203a6449);
      __sSS6appendyySSF(param_11,param_12);
      __sSS6appendyySSF(0x203a726f72726520,0xe800000000000000);
      puVar3 = &UNK_10008c648;
      alStack_b0[0] = param_6;
      func_0x0001000100d0(0x1000c6658,&UNK_10008c648);
      __sSq16debugDescriptionSSvg();
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar3);
      uVar2 = uStack_90;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_98,uStack_90);
      _objc_release();
      _swift_bridgeObjectRelease(uVar2);
      (*param_7)(0);
      return;
    }
    if (*(long *)(param_4 + 0x10) == *(long *)(param_4 + 0x18)) goto LAB_10004e9c0;
  }
  FUN_10004aa04(param_4,param_5);
LAB_10004eafc:
  puVar3 = PTR__OBJC_CLASS___UIImage_1000c20c0;
  _objc_allocWithZone();
  func_0x00010001c120(param_4,param_5);
  lVar4 = param_4;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_4,param_5);
  func_0x000100086ca0();
  _objc_release(lVar4);
  FUN_1000275d4(param_4,param_5);
  (*param_7)(puVar3);
  if (puVar3 == (undefined *)0x0) {
    if (0xe < param_5 >> 0x3c) {
      return;
    }
    if (uVar1 >> 0x1e != 1) {
      if (uVar1 >> 0x1e != 2) {
        return;
      }
      _swift_release(param_4);
    }
                    /* WARNING: Could not recover jumptable at 0x000100086234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_1000b1698)(param_5 & 0x3fffffffffffffff);
    return;
  }
  _swift_beginAccess(param_9 + 0x10,alStack_b0,0,0);
  param_9 = param_9 + 0x10;
  _swift_weakLoadStrong();
  if (param_9 != 0) {
    FUN_10004ee40(param_9 + 0x30,&uStack_98);
    _swift_release(param_9);
    if (lStack_80 != 0) {
      func_0x000100013de4();
      FUN_100047254(param_1,param_2,puVar3,param_10,param_11,param_12);
      FUN_1000275d4(param_4,param_5);
      _objc_release(puVar3);
      FUN_100012b94(&uStack_98);
      return;
    }
    FUN_1000275d4(param_4,param_5);
    _objc_release(puVar3);
    FUN_10004eff4(&uStack_98,0x1000c6860,&UNK_10008c738);
    return;
  }
  FUN_1000275d4(param_4,param_5);
  _objc_release(puVar3);
  return;
}



/* Entry: 10004ec60; end: 10004edd3;  */

undefined1  [16] FUN_10004ec60(void)

{
  undefined1 *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  undefined1 auStack_48 [24];
  long lStack_30;
  
  FUN_10004ee40(unaff_x20 + 0x30,auStack_48);
  if (lStack_30 == 0) {
    FUN_10004eff4(auStack_48,0x1000c6860,&UNK_10008c738);
  }
  else {
    puVar1 = auStack_48;
    func_0x000100013de4();
    lVar2 = lStack_30;
    FUN_100047ad8();
    FUN_100012b94(auStack_48);
    if (lVar2 != 0) goto LAB_10004ece4;
  }
  lVar2 = -0x7ffffffefff61c10;
  puVar1 = (undefined1 *)0xd000000000000021;
LAB_10004ece4:
  auVar3._8_8_ = lVar2;
  auVar3._0_8_ = puVar1;
  return auVar3;
}



/* Entry: 10004edd4; end: 10004ee3f;  */

void FUN_10004edd4(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  FUN_10004eff4(unaff_x20 + 0x30,0x1000c6860,&UNK_10008c738);
                    /* WARNING: Could not recover jumptable at 0x000100086090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_1000b1578)();
  return;
}



/* Entry: 10004ee40; end: 10004ee8f;  */

undefined8 FUN_10004ee40(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x1000c6860;
  func_0x0001000100d0(0x1000c6860,&UNK_10008c738);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10004ee90; end: 10004eeb3;  */

void FUN_10004ee90(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 10004eeb4; end: 10004efd7;  */

void FUN_10004eeb4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  
  lVar1 = 0;
  __s7SwiftUI11ColorSchemeOMa();
  lVar3 = *(long *)(lVar1 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x38 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  lVar2 = *(long *)(lVar3 + 0x40);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,lVar1);
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + (lVar2 + uVar4 + 7 & 0xfffffffffffffff8) + 8));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 10004efd8; end: 10004eff3;  */

void FUN_10004efd8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010008624c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_1000b16a8)(uVar1);
  return;
}



/* Entry: 10004eff4; end: 10004f033;  */

undefined8 FUN_10004eff4(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000100d0(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10004f034; end: 10004f0ff;  */

void FUN_10004f034(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_3 == 0) {
    _swift_retain(uVar2);
    _objc_retain(param_2);
    uVar5 = 0xf000000000000000;
  }
  else {
    uVar5 = param_2;
    _swift_retain(uVar2);
    _objc_retain(param_2);
    lVar3 = param_3;
    _objc_retain(param_3);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_3);
    _objc_release(lVar3);
  }
  uVar4 = param_4;
  _objc_retain(param_4);
  (*pcVar1)(param_2,param_3,uVar5,param_4);
  _objc_release(uVar4);
  FUN_1000275d4(param_3,uVar5);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100085f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000b10c0)(param_2);
  return;
}



/* Entry: 10004f100; end: 10004f177;  */

void FUN_10004f100(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  uVar3 = param_2;
  _objc_retain(param_2);
  uVar4 = param_3;
  _objc_retain(param_3);
  (*pcVar1)(param_2,param_3);
  _swift_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100085f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000b10c0)(uVar4);
  return;
}



/* Entry: 10004f178; end: 10004f217;  */

void FUN_10004f178(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_2);
  _swift_retain(uVar2);
  (*pcVar1)(param_2,uVar3);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100086054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_1000b1550)(uVar3);
  return;
}



/* Entry: 10004f218; end: 10004f76f;  */

void FUN_10004f218(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  long unaff_x20;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long alStack_78 [3];
  long lStack_60;
  undefined **ppuStack_58;
  
  __s21SnapchatWidgetsShared12AppGroupDataO17loadCurrentUserIdSSSgyFZ();
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  puVar1 = PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_1000c2180;
  _objc_opt_self();
  func_0x000100087560();
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(unaff_x20 + 0x40) = puVar1;
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  lVar2 = 0;
  func_0x00010004a89c();
  lVar5 = 0x50;
  lVar11 = lVar2;
  _swift_allocObject();
  *(undefined **)(lVar11 + 0x10) = puVar1;
  *(undefined8 *)(lVar11 + 0x18) = uVar9;
  *(long *)(lVar11 + 0x20) = lVar7;
  if (lVar7 == 0) {
    *(undefined8 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    _objc_retain(puVar1);
    uVar9 = 0;
    uVar3 = 0;
    ppuVar6 = (undefined **)0x0;
  }
  else {
    uVar3 = 0;
    func_0x000100045a90();
    _swift_allocObject();
    _swift_bridgeObjectRetain_n(lVar7,2);
    _objc_retain(puVar1);
    FUN_1000441f4();
    ppuVar6 = &PTR_DAT_1000b48a8;
    lVar5 = lVar7;
  }
  *(undefined8 *)(lVar11 + 0x28) = uVar9;
  *(undefined8 *)(lVar11 + 0x40) = uVar3;
  *(undefined ***)(lVar11 + 0x48) = ppuVar6;
  *(long *)(unaff_x20 + 0x70) = lVar2;
  *(undefined ***)(unaff_x20 + 0x78) = &PTR_DAT_1000b4ae8;
  *(long *)(unaff_x20 + 0x58) = lVar11;
  puVar1 = PTR__OBJC_CLASS___SCExtensionSharedFile_1000c20d0;
  _objc_allocWithZone();
  func_0x000100086d60();
  if (puVar1 == (undefined *)0x0) {
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    *(undefined8 *)(unaff_x20 + 0x30) = 0;
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
    lVar7 = *(long *)(unaff_x20 + 0x20);
    if (lVar7 != 0) goto LAB_10004f3dc;
LAB_10004f3b8:
    *(undefined8 *)(unaff_x20 + 0xd0) = 0;
  }
  else {
    *(undefined **)(unaff_x20 + 0x28) = puVar1;
    puVar8 = PTR__OBJC_CLASS___SCAppGroupPlistStorage_1000c20d8;
    _objc_allocWithZone();
    _objc_retain(puVar1);
    func_0x000100086ce0();
    puVar4 = puVar8;
    func_0x000100087760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    if (puVar4 == (undefined *)0x0) {
      _objc_release(puVar1);
      puVar8 = (undefined *)0x0;
      lVar5 = 0;
    }
    else {
      puVar8 = puVar4;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(puVar4);
      _objc_release(puVar1);
    }
    *(undefined **)(unaff_x20 + 0x30) = puVar8;
    *(long *)(unaff_x20 + 0x38) = lVar5;
    lVar7 = *(long *)(unaff_x20 + 0x20);
    if (lVar7 == 0) goto LAB_10004f3b8;
LAB_10004f3dc:
    uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
    _swift_bridgeObjectRetain(lVar7);
    __s21SnapchatWidgetsShared12AppGroupDataO25loadSnapchatterRepository6userIdSo011SCExtensionhI0CSgSS_tFZ
              (uVar9,lVar7);
    _swift_bridgeObjectRelease(lVar7);
    *(undefined8 *)(unaff_x20 + 0xd0) = uVar9;
    lVar7 = *(long *)(unaff_x20 + 0x20);
    if (lVar7 != 0) {
      uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
      puVar1 = PTR__OBJC_CLASS___SCUserExtensionStorageServiceImpl_1000c2198;
      _objc_opt_self();
      _swift_bridgeObjectRetain(lVar7);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar9,lVar7);
      _swift_bridgeObjectRelease(lVar7);
      func_0x0001000875a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      puVar8 = puVar1;
      func_0x000100086400();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = puVar8;
      func_0x000100087800();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      if (puVar1 != (undefined *)0x0) {
        func_0x00010006b918(0);
        _swift_initStackObject();
        puVar8 = puVar1;
        FUN_10006b6f8(puVar1);
        puVar4 = puVar1;
        _swift_unknownObjectRetain();
        FUN_10006b704();
        _swift_release(puVar8);
        _swift_unknownObjectRelease(puVar1);
        if (puVar4 != (undefined *)0x0) goto LAB_10004f500;
      }
    }
  }
  func_0x00010006b6a8(0);
  _objc_allocWithZone();
  puVar4 = (undefined *)0x0;
  func_0x00010006b3e8();
LAB_10004f500:
  *(undefined **)(unaff_x20 + 0x10) = puVar4;
  lVar7 = *(long *)(unaff_x20 + 0x20);
  if ((lVar7 == 0) || (lVar11 = *(long *)(unaff_x20 + 0x38), lVar11 == 0)) {
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
    *(undefined8 *)(unaff_x20 + 0x50) = 0;
    *(undefined8 *)(unaff_x20 + 0x88) = 0;
    *(undefined8 *)(unaff_x20 + 0x80) = 0;
    *(undefined8 *)(unaff_x20 + 0x98) = 0;
    *(undefined8 *)(unaff_x20 + 0x90) = 0;
    *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  }
  else {
    uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x30);
    puVar1 = PTR__OBJC_CLASS___SCBlizzardExtensionLogger_1000c2188;
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(lVar7);
    _swift_bridgeObjectRetain(lVar11);
    uVar9 = uVar10;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar10,lVar7);
    uVar3 = uVar12;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar12,lVar11);
    func_0x000100086e20();
    _objc_release(uVar9);
    _objc_release(uVar3);
    *(undefined **)(unaff_x20 + 0x48) = puVar1;
    puVar8 = PTR__OBJC_CLASS___SCNotifExtUserSession_1000c2190;
    _objc_allocWithZone();
    _objc_retain(puVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar10,lVar7);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar12,lVar11);
    _swift_bridgeObjectRelease(lVar11);
    func_0x000100086e40();
    _objc_release(puVar1);
    _objc_release(uVar10);
    _objc_release(uVar12);
    *(undefined **)(unaff_x20 + 0x50) = puVar8;
    if (puVar8 == (undefined *)0x0) {
      _swift_bridgeObjectRelease(lVar7);
      *(undefined8 *)(unaff_x20 + 0xa0) = 0;
      *(undefined8 *)(unaff_x20 + 0x88) = 0;
      *(undefined8 *)(unaff_x20 + 0x80) = 0;
      *(undefined8 *)(unaff_x20 + 0x98) = 0;
      *(undefined8 *)(unaff_x20 + 0x90) = 0;
    }
    else {
      uVar9 = 0;
      func_0x00010004c1dc();
      _swift_allocObject();
      _objc_retain();
      _objc_retain();
      puVar1 = puVar8;
      FUN_10004b1b4();
      _objc_release(puVar8);
      *(undefined **)(unaff_x20 + 0x80) = puVar1;
      *(undefined8 *)(unaff_x20 + 0x98) = uVar9;
      *(undefined ***)(unaff_x20 + 0xa0) = &PTR_DAT_1000b4ba8;
    }
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x50);
  _swift_bridgeObjectRetain(lVar7);
  _objc_retain();
  func_0x0001000876a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = 0;
  func_0x00010004ee20();
  lVar11 = lVar5;
  _swift_allocObject();
  *(undefined8 *)(lVar11 + 0x10) = uVar3;
  *(undefined8 *)(lVar11 + 0x18) = uVar9;
  *(long *)(lVar11 + 0x20) = lVar7;
  *(undefined8 *)(lVar11 + 0x28) = uVar10;
  uVar3 = 0;
  if (lVar7 == 0) {
    uVar10 = 0;
    ppuVar6 = (undefined **)0x0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined8 *)(lVar11 + 0x40) = 0;
    uVar9 = uVar3;
  }
  else {
    func_0x0001000485fc();
    _swift_allocObject();
    _swift_bridgeObjectRetain(lVar7);
    FUN_1000470e8(uVar9,lVar7);
    ppuVar6 = &PTR_DAT_1000b4ab8;
    uVar10 = uVar3;
  }
  *(undefined8 *)(lVar11 + 0x30) = uVar9;
  *(undefined8 *)(lVar11 + 0x48) = uVar10;
  *(undefined ***)(lVar11 + 0x50) = ppuVar6;
  ppuStack_58 = &PTR_DAT_1000b4c10;
  alStack_78[0] = lVar11;
  lStack_60 = lVar5;
  FUN_1000550a4(alStack_78,unaff_x20 + 0xa8);
  return;
}



/* Entry: 10004f770; end: 10004fb5b;  */

void FUN_10004f770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,code *param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long alStack_140 [8];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [32];
  
  uStack_b0 = param_11;
  lVar4 = 0x1000c6758;
  uStack_c8 = param_6;
  uStack_c0 = param_5;
  uStack_b8 = param_4;
  pcStack_a8 = param_10;
  func_0x0001000100d0(0x1000c6758,&UNK_10008c6d0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&uStack_100 - extraout_x8;
  lVar5 = 0;
  FUN_10005cf80();
  lVar9 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x1000c6778;
  func_0x0001000100d0(0x1000c6778,&UNK_10008c810);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined1 *)(lVar8 - extraout_x8_01);
  _swift_beginAccess(param_7 + 0x10,auStack_90,0,0);
  param_7 = param_7 + 0x10;
  _swift_weakLoadStrong();
  pcVar2 = pcStack_a8;
  uVar1 = uStack_b0;
  if (param_7 == 0) {
    uStack_a0 = 0;
    uStack_98 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x4a);
    __sSS6appendyySSF(0xd000000000000048,0x800000010009e100);
    __sSS6appendyySSF(param_8,param_9);
    uVar1 = uStack_98;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_a0,uStack_98);
    _objc_release();
    _swift_bridgeObjectRelease(uVar1);
    *puVar7 = 0;
    _swift_storeEnumTagMultiPayload(puVar7,lVar4,1);
    (*pcStack_a8)(puVar7);
    FUN_100054aec(puVar7,0x1000c6778,&UNK_10008c810);
  }
  else {
    uStack_d0 = param_16;
    uStack_e0 = param_18;
    uStack_d8 = param_15;
    uStack_f0 = param_19;
    uStack_e8 = param_14;
    uStack_100 = param_12;
    uStack_f8 = param_13;
    FUN_100054b34(param_3,lVar6,0x1000c6758,&UNK_10008c6d0);
    lVar4 = lVar6;
    (**(code **)(lVar9 + 0x30))(lVar6,1,lVar5);
    if ((int)lVar4 == 1) {
      FUN_100054aec(lVar6,0x1000c6758,&UNK_10008c6d0);
      uStack_a0 = 0;
      uStack_98 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x56);
      __sSS6appendyySSF(0xd000000000000054,0x800000010009e150);
      __sSS6appendyySSF(param_8,param_9);
      uVar3 = uStack_98;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_a0,uStack_98);
      _objc_release();
      _swift_bridgeObjectRelease(uVar3);
      *(code **)(puVar7 + -0x10) = pcVar2;
      *(undefined8 *)(puVar7 + -8) = uVar1;
      *(undefined8 *)(puVar7 + -0x18) = uStack_c8;
      *(undefined8 *)(puVar7 + -0x20) = uStack_c0;
      *(undefined8 *)(puVar7 + -0x28) = uStack_b8;
      *(undefined8 *)(puVar7 + -0x30) = uStack_f0;
      FUN_100051d6c(uStack_100,uStack_f8,param_8,param_9,uStack_e8,uStack_d8,uStack_d0,uStack_e0);
      _swift_release(param_7);
    }
    else {
      func_0x00010004dd0c(lVar6,lVar8);
      uStack_a0 = 0;
      uStack_98 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x38);
      __sSS6appendyySSF(0xd000000000000036,0x800000010009e1b0);
      __sSS6appendyySSF(param_8,param_9);
      uVar3 = uStack_98;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_a0,uStack_98);
      _objc_release();
      _swift_bridgeObjectRelease(uVar3);
      *(code **)(puVar7 + -0x10) = pcVar2;
      *(undefined8 *)(puVar7 + -8) = uVar1;
      *(undefined8 *)(puVar7 + -0x18) = uStack_c8;
      *(undefined8 *)(puVar7 + -0x20) = uStack_c0;
      *(undefined8 *)(puVar7 + -0x28) = uStack_b8;
      *(undefined8 *)(puVar7 + -0x30) = uStack_f0;
      uVar1 = uStack_e0;
      *(long *)(puVar7 + -0x40) = lVar8;
      *(undefined8 *)(puVar7 + -0x38) = uVar1;
      FUN_10004fb5c(param_1,param_2,uStack_100,uStack_f8,param_8,param_9,uStack_e8,uStack_d8,
                    uStack_d0,param_17);
      _swift_release(param_7);
      func_0x000100055068(lVar8,FUN_10005cf80);
    }
  }
  return;
}



/* Entry: 10004fb5c; end: 10005151f;  */

void FUN_10004fb5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,long param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long extraout_x8;
  long extraout_x8_00;
  long lVar21;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x13;
  long extraout_x13_00;
  long unaff_x20;
  ulong uVar22;
  code *pcVar23;
  long lVar24;
  code *pcVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  undefined8 *puStack_340;
  code *pcStack_338;
  code *pcStack_330;
  ulong uStack_328;
  code *pcStack_320;
  code *pcStack_318;
  ulong uStack_310;
  ulong uStack_308;
  long lStack_300;
  ulong uStack_2f8;
  long lStack_2f0;
  undefined *puStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  undefined *puStack_250;
  long *plStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  long lStack_210;
  long lStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  long alStack_b0 [3];
  long lStack_98;
  
  lStack_1e8 = param_11;
  lVar4 = 0;
  uStack_2c0 = param_3;
  uStack_2b8 = param_7;
  uStack_2b0 = param_4;
  uStack_2a8 = param_8;
  uStack_218 = param_10;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lStack_280 = *(long *)(lVar4 + -8);
  lStack_278 = lVar4;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lStack_280 + 0x40));
  lVar21 = (long)&puStack_340 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_288 = lVar21;
  __s8Dispatch0A3QoSVMa();
  lStack_298 = *(long *)(lVar4 + -8);
  lStack_290 = lVar4;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lStack_298 + 0x40));
  lVar21 = lVar21 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_2a0 = lVar21;
  FUN_10005cf80();
  lStack_2d8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar21 = lVar21 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_2d0 = extraout_x12;
  lStack_2c8 = lVar21;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lStack_270 = *(long *)(lVar4 + -8);
  lStack_260 = lVar4;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lStack_270 + 0x40));
  lVar21 = lVar21 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_268 = lVar21;
  __s10Foundation13URLComponentsVMa();
  lStack_300 = *(long *)(lVar4 + -8);
  uStack_2f8 = lVar4;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lStack_300 + 0x40));
  lVar21 = lVar21 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_2f0 = lVar21 - extraout_x8_03;
  __s10Foundation3URLVMa();
  lStack_258 = *(long *)(lVar4 + -8);
  puStack_250 = (undefined *)lVar4;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lStack_258 + 0x40));
  lVar4 = (lVar21 - extraout_x8_03) - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  puStack_2e8 = (undefined *)lVar4;
  __s7SwiftUI11ColorSchemeOMa();
  puStack_220 = *(undefined **)(lVar5 + -8);
  lStack_1f8 = lVar5;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar4 = lVar4 - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
  lStack_2e0 = lVar4;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar4 = lVar4 - extraout_x12_00;
  lStack_210 = lVar4;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar4 = lVar4 - extraout_x12_01;
  puStack_238 = (undefined *)lVar4;
  puStack_200 = (undefined *)extraout_x13_00;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  pcStack_228 = (code *)(lVar4 - extraout_x12_02);
  _dispatch_group_create();
  puVar8 = &UNK_1000b4de0;
  puVar6 = puVar8;
  _swift_allocObject(&UNK_1000b4de0,0x18,7);
  pcStack_338 = (code *)(puVar6 + 0x10);
  *(undefined8 *)pcStack_338 = 0;
  _dispatch_group_enter(lVar5);
  puVar7 = puVar8;
  _swift_allocObject(&UNK_1000b4de0,0x18,7);
  puStack_340 = (undefined8 *)(puVar7 + 0x10);
  *puStack_340 = 0;
  puStack_1f0 = puVar7;
  _dispatch_group_enter(lVar5);
  _swift_allocObject(&UNK_1000b4de0,0x18,7);
  plStack_248 = (long *)(puVar8 + 0x10);
  *plStack_248 = 0;
  _dispatch_group_enter(lVar5);
  FUN_10005496c(unaff_x20 + 0x58,alStack_b0);
  plVar9 = alStack_b0;
  func_0x000100013de4();
  lVar4 = lStack_98;
  if (param_9 == 0) {
LAB_10004fec8:
    lVar24 = 0;
    lVar28 = 0;
  }
  else {
    lVar10 = param_9;
    func_0x000100086460();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lStack_98;
    if (lVar10 == 0) goto LAB_10004fec8;
    lVar24 = lVar10;
    lVar28 = lStack_98;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar4 = lVar28;
    _objc_release(lVar10);
  }
  lVar10 = *(long *)(lStack_1e8 + 0x30);
  if (lVar10 == 0) {
LAB_10004ff10:
    lVar11 = 0;
    lVar4 = 0;
  }
  else {
    func_0x000100087080();
    _objc_retainAutoreleasedReturnValue();
    if (lVar10 == 0) goto LAB_10004ff10;
    lVar11 = lVar10;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar10);
  }
  lVar26 = param_9;
  func_0x000100087640();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = &UNK_1000b4ef8;
  _swift_allocObject(&UNK_1000b4ef8,0x20,7);
  *(undefined **)(puVar7 + 0x10) = puVar8;
  *(long *)(puVar7 + 0x18) = lVar5;
  lVar10 = lRam00000001000c6660;
  puStack_230 = puVar7;
  lStack_208 = param_9;
  if (lVar28 == 0) {
    if (lVar26 == 0) {
      _objc_retain(lVar5);
      _swift_retain(puVar8);
      if (lVar10 != -1) {
        _swift_once(0x1000c6660,0x10004a8bc);
      }
      lVar21 = lRam00000001000d0f38;
      _objc_retain();
    }
    else {
      _objc_retain(lVar5);
      _swift_retain(puVar8);
      lVar21 = lVar26;
    }
    _objc_retain(lVar26);
    lVar10 = lVar21;
    FUN_10004a8f8();
    _objc_release(lVar21);
    plVar9 = plStack_248;
    _swift_beginAccess(plStack_248,auStack_c8,1,0);
    lVar21 = *plVar9;
    *plVar9 = lVar10;
    _objc_retain(lVar10);
    _objc_release(lVar21);
    _dispatch_group_leave(lVar5);
    _objc_release(lVar26);
    _objc_release(lVar10);
    _swift_release(puStack_230);
    _swift_bridgeObjectRelease(lVar4);
  }
  else {
    uStack_310 = *plVar9;
    puStack_240 = (undefined *)0x3030373032323031;
    if (lVar4 != 0) {
      puStack_240 = (undefined *)lVar11;
    }
    lVar10 = -0x1800000000000000;
    if (lVar4 != 0) {
      lVar10 = lVar4;
    }
    uStack_308 = lVar26;
    FUN_100054b34(uStack_310 + 0x28,&puStack_140,0x1000c6668,&UNK_10008c650);
    if (puStack_128 == (undefined *)0x0) {
      _objc_retain(lVar5);
      _swift_retain(puVar8);
      _swift_bridgeObjectRetain(lVar28);
      _swift_bridgeObjectRetain(lVar4);
      FUN_100054aec(&puStack_140,0x1000c6668,&UNK_10008c650);
    }
    else {
      func_0x000100013de4();
      lVar11 = lVar5;
      _objc_retain();
      pcStack_320 = (code *)lVar11;
      _swift_retain(puVar8);
      _swift_bridgeObjectRetain(lVar28);
      _swift_bridgeObjectRetain(lVar4);
      puVar7 = puStack_240;
      func_0x000100044524(puStack_240,lVar10,lVar24,lVar28,param_5,param_6);
      FUN_100012b94(&puStack_140);
      if (puVar7 != (undefined *)0x0) {
        puStack_140 = (undefined *)0x0;
        uStack_138 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x61);
        __sSS6appendyySSF(0xd000000000000043,0x800000010009e7c0);
        __sSS6appendyySSF(puStack_240,lVar10);
        _swift_bridgeObjectRelease(lVar10);
        __sSS6appendyySSF(0x726174617661202c,0xec000000203a6449);
        __sSS6appendyySSF(lVar24,lVar28);
        _swift_bridgeObjectRelease(lVar28);
        __sSS6appendyySSF(0x646e65697266202c,0xec000000203a6449);
        __sSS6appendyySSF(param_5,param_6);
        uVar19 = uStack_138;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_140,uStack_138);
        _objc_release();
        _swift_bridgeObjectRelease(uVar19);
        plVar9 = plStack_248;
        _swift_beginAccess(plStack_248,auStack_c8,1,0);
        lVar21 = *plVar9;
        *plVar9 = (long)puVar7;
        _objc_retain(puVar7);
        _objc_retain();
        _objc_release(lVar21);
        _dispatch_group_leave(pcStack_320);
        _objc_release(uStack_308);
        _objc_release(puVar7);
        _objc_release(puVar7);
        _swift_bridgeObjectRelease(lVar28);
        _swift_bridgeObjectRelease(lVar4);
        _swift_release(puStack_230);
        goto LAB_100050858;
      }
    }
    pcStack_318 = (code *)lVar4;
    __s10Foundation13URLComponentsVACycfC(lVar21);
    __s10Foundation13URLComponentsV4hostSSSgvs(0xd000000000000010,0x800000010009e750);
    __s10Foundation13URLComponentsV6schemeSSSgvs(0x7370747468,0xe500000000000000);
    puStack_140 = (undefined *)0x646e65722f64332f;
    uStack_138 = 0xeb000000002f7265;
    __sSS6appendyySSF(puStack_240,lVar10);
    __sSS6appendyySSF(0x2d,0xe100000000000000);
    __sSS6appendyySSF(lVar24,lVar28);
    __sSS6appendyySSF(0x31762d,0xe300000000000000);
    __sSS6appendyySSF(0x676e702e,0xe400000000000000);
    __s10Foundation13URLComponentsV4pathSSvs(puStack_140,uStack_138);
    lVar4 = 0x1000c69c0;
    func_0x0001000100d0(0x1000c69c0,&UNK_10008c840);
    lVar11 = 0;
    __s10Foundation12URLQueryItemVMa();
    lVar26 = *(long *)(*(long *)(lVar11 + -8) + 0x48);
    uVar22 = (ulong)*(byte *)(*(long *)(lVar11 + -8) + 0x50);
    uVar27 = uVar22 + 0x20 & (uVar22 ^ 0xffffffffffffffff);
    _swift_allocObject(lVar4,uVar27 + lVar26 * 2,uVar22 | 7);
    *(undefined8 *)(lVar4 + 0x18) = 4;
    *(undefined8 *)(lVar4 + 0x10) = 2;
    lVar11 = lVar4 + uVar27;
    __s10Foundation12URLQueryItemV4name5valueACSSh_SSSghtcfC
              (lVar11,0x6175,0xe200000000000000,0x32,0xe100000000000000);
    __s10Foundation12URLQueryItemV4name5valueACSSh_SSSghtcfC
              (lVar11 + lVar26,0x656c616373,0xe500000000000000,0x31,0xe100000000000000);
    __s10Foundation13URLComponentsV10queryItemsSayAA12URLQueryItemVGSgvs(lVar4);
    lVar4 = lStack_2f0;
    __s10Foundation13URLComponentsV3urlAA3URLVSgvg(lStack_2f0);
    (**(code **)(lStack_300 + 8))(lVar21,uStack_2f8);
    puVar7 = puStack_250;
    lVar21 = lStack_258;
    lVar11 = lVar4;
    (**(code **)(lStack_258 + 0x30))(lVar4,1,puStack_250);
    if ((int)lVar11 == 1) {
      _swift_bridgeObjectRelease(lVar28);
      _swift_bridgeObjectRelease(lVar10);
      FUN_100054aec(lVar4,0x1000c4330,&UNK_1000890b0);
      uVar22 = uStack_308;
      uVar27 = uStack_308;
      if (uStack_308 == 0) {
        if (lRam00000001000c6660 != -1) {
          _swift_once(0x1000c6660,0x10004a8bc);
        }
        uVar27 = lRam00000001000d0f38;
        _objc_retain();
      }
      _objc_retain(uVar22);
      lVar4 = uVar27;
      FUN_10004a8f8();
      _objc_release(uVar27);
      plVar9 = plStack_248;
      _swift_beginAccess(plStack_248,auStack_c8,1,0);
      lVar21 = *plVar9;
      *plVar9 = lVar4;
      _objc_retain(lVar4);
      _objc_release(lVar21);
      _dispatch_group_leave(lVar5);
      _objc_release(uVar22);
      _objc_release(lVar4);
      _swift_bridgeObjectRelease(lVar28);
      _swift_bridgeObjectRelease(pcStack_318);
      _swift_release(puStack_230);
    }
    else {
      (**(code **)(lVar21 + 0x20))(puStack_2e8,lVar4,puVar7);
      puStack_140 = (undefined *)0x0;
      uStack_138 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x61);
      __sSS6appendyySSF(0xd000000000000043,0x800000010009e770);
      puVar14 = puStack_240;
      __sSS6appendyySSF(puStack_240,lVar10);
      __sSS6appendyySSF(0x726174617661202c,0xec000000203a6449);
      __sSS6appendyySSF(lVar24,lVar28);
      __sSS6appendyySSF(0x646e65697266202c,0xec000000203a6449);
      __sSS6appendyySSF(param_5,param_6);
      uVar19 = uStack_138;
      uVar18 = uStack_138;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_140,uStack_138);
      _objc_release();
      _swift_bridgeObjectRelease(uVar19);
      uVar22 = uStack_310;
      plStack_248 = *(long **)(uStack_310 + 0x10);
      __s10Foundation3URLV14absoluteStringSSvg();
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(uVar18);
      lVar4 = 0x1000c6670;
      func_0x0001000100d0(0x1000c6670,&UNK_10008c658);
      _swift_initStackObject();
      *(undefined8 *)(lVar4 + 0x18) = 2;
      *(undefined8 *)(lVar4 + 0x10) = 1;
      puVar7 = PTR___sSSN_1000b1180;
      puStack_140 = (undefined *)0x7275746165462d58;
      uStack_138 = 0xe900000000000065;
      __ss11AnyHashableVyABxcSHRzlufC
                (lVar4 + 0x20,&puStack_140,PTR___sSSN_1000b1180,PTR___sSSSHsWP_1000b1188);
      *(undefined **)(lVar4 + 0x60) = puVar7;
      *(undefined8 *)(lVar4 + 0x48) = 0xd00000000000001a;
      *(undefined8 *)(lVar4 + 0x50) = 0x800000010009dd90;
      lVar21 = lVar4;
      FUN_1000533cc(lVar4);
      _swift_setDeallocating(lVar4);
      FUN_100054aec(lVar4 + 0x20,0x1000c6678,&UNK_10008c660);
      lVar4 = lVar21;
      __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                (lVar21,PTR___ss11AnyHashableVN_1000b1278,PTR___sypN_1000b14c8 + 8,
                 PTR___ss11AnyHashableVSHsWP_1000b1280);
      _swift_bridgeObjectRelease(lVar21);
      puVar7 = &UNK_1000b4e80;
      _swift_allocObject(&UNK_1000b4e80,0x18,7);
      _swift_weakInit(puVar7 + 0x10,uVar22);
      puVar12 = &UNK_1000b5178;
      _swift_allocObject(&UNK_1000b5178,0x68,7);
      puVar17 = puStack_230;
      uVar22 = uStack_308;
      *(undefined8 *)(puVar12 + 0x10) = 0x10005511c;
      *(undefined **)(puVar12 + 0x18) = puStack_230;
      *(undefined **)(puVar12 + 0x20) = puVar7;
      *(long *)(puVar12 + 0x28) = lVar24;
      *(long *)(puVar12 + 0x30) = lVar28;
      *(undefined **)(puVar12 + 0x38) = puVar14;
      *(long *)(puVar12 + 0x40) = lVar10;
      *(undefined8 *)(puVar12 + 0x48) = param_5;
      *(undefined8 *)(puVar12 + 0x50) = param_6;
      puVar12[0x58] = 1;
      *(ulong *)(puVar12 + 0x60) = uStack_308;
      pcStack_120 = (code *)0x100055134;
      puStack_140 = PTR___NSConcreteStackBlock_1000b0c60;
      uStack_138 = 0x42000000;
      pcStack_130 = FUN_10004f034;
      puStack_128 = &UNK_1000b5190;
      ppuVar13 = &puStack_140;
      puStack_118 = puVar12;
      __Block_copy(ppuVar13);
      puVar7 = puStack_118;
      _swift_bridgeObjectRetain(param_6);
      _swift_retain(puVar17);
      _objc_retain(uVar22);
      _swift_release(puVar7);
      func_0x000100087000(plStack_248);
      __Block_release(ppuVar13);
      _swift_bridgeObjectRelease(lVar28);
      _swift_bridgeObjectRelease(pcStack_318);
      _swift_release(puVar17);
      _objc_release(uVar19);
      _objc_release(lVar4);
      (**(code **)(lStack_258 + 8))(puStack_2e8,puStack_250);
      _objc_release(uVar22);
    }
  }
LAB_100050858:
  func_0x000100012b98(alStack_b0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0xc0);
  plVar9 = (long *)(unaff_x20 + 0xa8);
  func_0x000100013de4();
  puStack_250 = *(undefined **)(lStack_1e8 + 0x20);
  lStack_258 = *(long *)(lStack_1e8 + 0x28);
  uVar19 = uStack_218;
  func_0x000100087900();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar19;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puStack_240 = (undefined *)uVar18;
  puStack_230 = (undefined *)uVar20;
  _objc_release(uVar19);
  lVar4 = lStack_1f8;
  puVar15 = puStack_220;
  pcVar23 = pcStack_228;
  pcStack_318 = *(code **)((long)puStack_220 + 0x68);
  (*pcStack_318)(pcStack_228,*(undefined4 *)PTR___s7SwiftUI11ColorSchemeO5lightyA2CmFWC_1000b0270,
                 lStack_1f8);
  puVar7 = &UNK_1000b4f20;
  _swift_allocObject(&UNK_1000b4f20,0x20,7);
  *(undefined **)(puVar7 + 0x10) = puVar6;
  *(long *)(puVar7 + 0x18) = lVar5;
  lVar21 = *plVar9;
  puVar12 = &UNK_1000b4f48;
  plStack_248 = (long *)lVar21;
  _swift_allocObject(&UNK_1000b4f48,0x18,7);
  _swift_weakInit(puVar12 + 0x10,lVar21);
  puVar17 = puStack_238;
  pcStack_320 = *(code **)((long)puVar15 + 0x10);
  (*pcStack_320)(puStack_238,pcVar23,lVar4);
  uStack_328 = (ulong)*(byte *)((long)puVar15 + 0x50);
  uVar27 = uStack_328 + 0x50 & (uStack_328 ^ 0xffffffffffffffff);
  uVar22 = (long)puStack_200 + uVar27 + 7 & 0xfffffffffffffff8;
  lVar21 = uVar22 + 0x10;
  puVar14 = &UNK_1000b4f70;
  _swift_allocObject(&UNK_1000b4f70,uVar22 + 0x20,uStack_328 | 7);
  puVar3 = puStack_230;
  *(undefined **)(puVar14 + 0x10) = puVar12;
  *(undefined **)(puVar14 + 0x18) = puStack_250;
  *(long *)(puVar14 + 0x20) = lStack_258;
  puVar14[0x28] = 0;
  *(undefined8 *)(puVar14 + 0x30) = param_1;
  *(undefined8 *)(puVar14 + 0x38) = param_2;
  *(undefined **)(puVar14 + 0x40) = puStack_240;
  *(undefined **)(puVar14 + 0x48) = puStack_230;
  pcStack_330 = *(code **)((long)puVar15 + 0x20);
  uStack_310 = uVar27;
  puStack_200 = puVar12;
  (*pcStack_330)(puVar14 + uVar27,puVar17,lVar4);
  puVar12 = puStack_200;
  *(undefined8 *)(puVar14 + uVar22) = param_5;
  *(undefined8 *)((long)(puVar14 + uVar22) + 8) = param_6;
  *(code **)(puVar14 + lVar21) = FUN_100054c5c;
  *(undefined **)((long)(puVar14 + lVar21) + 8) = puVar7;
  puVar17 = PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_1000b1750;
  uStack_308 = uVar22;
  lStack_300 = lVar21;
  if (*(long *)((long)plStack_248 + 0x28) == 0) {
    _swift_beginAccess(puStack_200 + 0x10,alStack_b0,0,0);
    puVar12 = puVar12 + 0x10;
    _swift_weakLoadStrong();
    lVar4 = lVar5;
    _objc_retain(lVar5);
    _swift_bridgeObjectRetain(param_6);
    _swift_retain(puVar6);
    if (puVar12 == (undefined *)0x0) {
      _swift_retain(puStack_200);
    }
    else {
      _swift_retain(puVar7);
      _swift_bridgeObjectRetain(puVar3);
      _swift_retain(puStack_200);
      _swift_release(puVar12);
      pcVar23 = pcStack_338;
      _swift_beginAccess(pcStack_338,auStack_e0,1,0);
      uVar19 = *(undefined8 *)pcVar23;
      *(undefined8 *)pcVar23 = 0;
      _objc_release(uVar19);
      _dispatch_group_leave(lVar4);
      _swift_bridgeObjectRelease(puVar3);
      _swift_release(puVar7);
    }
    _swift_release(puVar14);
  }
  else {
    puVar12 = &UNK_1000b50d8;
    lStack_2f0 = *(long *)((long)plStack_248 + 0x28);
    _swift_allocObject(&UNK_1000b50d8,0x20,7);
    *(undefined8 *)(puVar12 + 0x10) = 0x100054c78;
    *(undefined **)(puVar12 + 0x18) = puVar14;
    puVar15 = &UNK_1000b5100;
    puStack_240 = puVar12;
    _swift_allocObject(&UNK_1000b5100,0x20,7);
    *(undefined8 *)(puVar15 + 0x10) = 0x100054c78;
    *(undefined **)(puVar15 + 0x18) = puVar14;
    puStack_238 = puVar15;
    FUN_1000549b4(0,0x1000c49b0,&PTR__OBJC_CLASS___OS_dispatch_queue_1000c20c8);
    lVar24 = lStack_260;
    lVar10 = lStack_268;
    lVar21 = lStack_270;
    uStack_2f8 = CONCAT44(uStack_2f8._4_4_,*(undefined4 *)puVar17);
    pcStack_338 = *(code **)(lStack_270 + 0x68);
    puStack_2e8 = puVar7;
    (*pcStack_338)(lStack_268,*(undefined4 *)puVar17,lStack_260);
    _swift_retain_n(puVar14,2);
    _objc_retain(lVar5);
    _swift_bridgeObjectRetain(param_6);
    _swift_retain(puVar6);
    _swift_retain(puVar7);
    _swift_bridgeObjectRetain(puVar3);
    _swift_retain(puStack_200);
    lVar4 = lStack_2f0;
    _swift_unknownObjectRetain(lStack_2f0);
    lVar28 = lVar10;
    __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ();
    pcVar23 = *(code **)(lVar21 + 8);
    plStack_248 = (long *)lVar28;
    (*pcVar23)(lVar10,lVar24);
    (*pcStack_338)(lVar10,uStack_2f8 & 0xffffffff,lVar24);
    lVar21 = lVar10;
    __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ(lVar10);
    (*pcVar23)(lVar10,lVar24);
    puVar12 = puStack_240;
    puVar7 = PTR___NSConcreteStackBlock_1000b0c60;
    pcStack_120 = (code *)0x100055110;
    puStack_118 = puStack_240;
    puStack_140 = PTR___NSConcreteStackBlock_1000b0c60;
    uStack_138 = 0x42000000;
    pcStack_130 = FUN_10004f178;
    puStack_128 = &UNK_1000b5118;
    ppuVar13 = &puStack_140;
    __Block_copy(ppuVar13);
    puVar17 = puStack_118;
    _swift_retain(puVar12);
    _swift_release(puVar17);
    puVar17 = puStack_238;
    pcStack_120 = (code *)0x100055124;
    puStack_118 = puStack_238;
    puStack_140 = puVar7;
    uStack_138 = 0x42000000;
    pcStack_130 = (code *)0x10004f1cc;
    puStack_128 = &UNK_1000b5140;
    ppuVar16 = &puStack_140;
    __Block_copy(ppuVar16);
    puVar7 = puStack_118;
    _swift_retain(puVar17);
    _swift_release(puVar7);
    plVar9 = plStack_248;
    func_0x000100086940(lVar4);
    __Block_release(ppuVar16);
    __Block_release(ppuVar13);
    _swift_bridgeObjectRelease(puStack_230);
    _swift_release(puVar12);
    _swift_release(puVar17);
    _swift_release(puStack_2e8);
    _swift_release(puVar14);
    _swift_unknownObjectRelease(lVar4);
    _objc_release(plVar9);
    _objc_release(lVar21);
  }
  puVar12 = puStack_1f0;
  lVar10 = lStack_1f8;
  pcVar23 = pcStack_228;
  plStack_248 = (long *)param_18;
  uStack_2f8 = param_17;
  puStack_230 = (undefined *)param_16;
  puStack_238 = (undefined *)param_15;
  puStack_240 = (undefined *)param_14;
  puStack_2e8 = (undefined *)param_13;
  lStack_2f0 = param_12;
  pcStack_228 = *(code **)((long)puStack_220 + 8);
  (*pcStack_228)(pcVar23,lStack_1f8);
  _swift_release(puStack_200);
  uVar20 = *(undefined8 *)(unaff_x20 + 0xc0);
  plVar9 = (long *)(unaff_x20 + 0xa8);
  func_0x000100013de4();
  uVar19 = uStack_218;
  func_0x000100087900();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar19;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uStack_218 = uVar18;
  _objc_release(uVar19);
  lVar4 = lStack_210;
  (*pcStack_318)(lStack_210,*(undefined4 *)PTR___s7SwiftUI11ColorSchemeO4darkyA2CmFWC_1000b0268,
                 lVar10);
  puVar7 = &UNK_1000b4f98;
  _swift_allocObject(&UNK_1000b4f98,0x20,7);
  *(undefined **)(puVar7 + 0x10) = puVar12;
  *(long *)(puVar7 + 0x18) = lVar5;
  lVar24 = *plVar9;
  puVar12 = &UNK_1000b4f48;
  _swift_allocObject(&UNK_1000b4f48,0x18,7);
  _swift_weakInit(puVar12 + 0x10,lVar24);
  lVar21 = lStack_2e0;
  (*pcStack_320)(lStack_2e0,lVar4,lVar10);
  lVar4 = lStack_300;
  puVar14 = &UNK_1000b4fc0;
  _swift_allocObject(&UNK_1000b4fc0,lStack_300 + 0x10,uStack_328 | 7);
  *(undefined **)(puVar14 + 0x10) = puVar12;
  *(undefined **)(puVar14 + 0x18) = puStack_250;
  *(long *)(puVar14 + 0x20) = lStack_258;
  puVar14[0x28] = 0;
  *(undefined8 *)(puVar14 + 0x30) = param_1;
  *(undefined8 *)(puVar14 + 0x38) = param_2;
  *(undefined8 *)(puVar14 + 0x40) = uStack_218;
  *(undefined8 *)(puVar14 + 0x48) = uVar20;
  uStack_218 = uVar20;
  puStack_200 = puVar12;
  (*pcStack_330)(puVar14 + uStack_310,lVar21,lVar10);
  puVar12 = puStack_200;
  uVar19 = uStack_218;
  *(undefined8 *)(puVar14 + uStack_308) = param_5;
  *(undefined8 *)((long)(puVar14 + uStack_308) + 8) = param_6;
  *(undefined8 *)(puVar14 + lVar4) = 0x100055120;
  *(undefined **)((long)(puVar14 + lVar4) + 8) = puVar7;
  lVar4 = *(long *)(lVar24 + 0x28);
  puStack_220 = puVar7;
  if (lVar4 == 0) {
    _swift_beginAccess(puStack_200 + 0x10,auStack_f8,0,0);
    puVar17 = puVar12 + 0x10;
    _swift_weakLoadStrong();
    lVar4 = lVar5;
    _objc_retain(lVar5);
    _swift_bridgeObjectRetain(param_6);
    _swift_retain(puStack_1f0);
    if (puVar17 == (undefined *)0x0) {
      _swift_retain(puVar12);
    }
    else {
      _swift_retain(puVar7);
      _swift_bridgeObjectRetain(uVar19);
      _swift_retain(puVar12);
      _swift_release(puVar17);
      puVar2 = puStack_340;
      _swift_beginAccess(puStack_340,auStack_110,1,0);
      uVar18 = *puVar2;
      *puVar2 = 0;
      _objc_release(uVar18);
      _dispatch_group_leave(lVar4);
      _swift_bridgeObjectRelease(uVar19);
      _swift_release(puVar7);
    }
    _swift_release(puVar14);
  }
  else {
    puVar7 = &UNK_1000b5038;
    lStack_2e0 = lVar4;
    _swift_allocObject(&UNK_1000b5038,0x20,7);
    *(undefined8 *)(puVar7 + 0x10) = 0x100055138;
    *(undefined **)(puVar7 + 0x18) = puVar14;
    puVar12 = &UNK_1000b5060;
    _swift_allocObject(&UNK_1000b5060,0x20,7);
    *(undefined8 *)(puVar12 + 0x10) = 0x100055138;
    *(undefined **)(puVar12 + 0x18) = puVar14;
    puStack_250 = puVar12;
    FUN_1000549b4(0,0x1000c49b0,&PTR__OBJC_CLASS___OS_dispatch_queue_1000c20c8);
    lVar24 = lStack_260;
    lVar10 = lStack_268;
    lVar21 = lStack_270;
    uVar1 = *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_1000b1750;
    pcVar25 = *(code **)(lStack_270 + 0x68);
    (*pcVar25)(lStack_268,uVar1,lStack_260);
    _swift_retain_n(puVar14,2);
    _objc_retain(lVar5);
    _swift_bridgeObjectRetain(param_6);
    _swift_retain(puStack_1f0);
    _swift_retain(puStack_220);
    _swift_bridgeObjectRetain(uStack_218);
    _swift_retain(puStack_200);
    lVar4 = lStack_2e0;
    _swift_unknownObjectRetain(lStack_2e0);
    lVar28 = lVar10;
    __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ();
    pcVar23 = *(code **)(lVar21 + 8);
    lStack_258 = lVar28;
    (*pcVar23)(lVar10,lVar24);
    (*pcVar25)(lVar10,uVar1,lVar24);
    lVar28 = lVar10;
    __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ(lVar10);
    (*pcVar23)(lVar10,lVar24);
    puVar12 = PTR___NSConcreteStackBlock_1000b0c60;
    pcStack_120 = FUN_100054f84;
    puStack_140 = PTR___NSConcreteStackBlock_1000b0c60;
    uStack_138 = 0x42000000;
    pcStack_130 = FUN_10004f178;
    puStack_128 = &UNK_1000b5078;
    ppuVar13 = &puStack_140;
    puStack_118 = puVar7;
    __Block_copy(ppuVar13);
    puVar17 = puStack_118;
    _swift_retain(puVar7);
    _swift_release(puVar17);
    puVar17 = puStack_250;
    pcStack_120 = (code *)0x100054f8c;
    puStack_118 = puStack_250;
    puStack_140 = puVar12;
    uStack_138 = 0x42000000;
    pcStack_130 = (code *)0x10004f1cc;
    puStack_128 = &UNK_1000b50a0;
    ppuVar16 = &puStack_140;
    __Block_copy(ppuVar16);
    puVar12 = puStack_118;
    _swift_retain(puVar17);
    _swift_release(puVar12);
    lVar21 = lStack_258;
    func_0x000100086940(lVar4);
    __Block_release(ppuVar16);
    __Block_release(ppuVar13);
    _swift_bridgeObjectRelease(uStack_218);
    _swift_release(puVar7);
    _swift_release(puVar17);
    _swift_release(puStack_220);
    _swift_release(puVar14);
    _swift_unknownObjectRelease(lVar4);
    _objc_release(lVar21);
    puVar12 = puStack_200;
    _objc_release(lVar28);
  }
  (*pcStack_228)(lStack_210,lStack_1f8);
  _swift_release(puVar12);
  puStack_140 = (undefined *)0x0;
  uStack_138 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x47);
  __sSS6appendyySSF(0xd000000000000045,0x800000010009e810);
  __sSS6appendyySSF(param_5,param_6);
  uVar19 = uStack_138;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_140,uStack_138);
  _objc_release();
  _swift_bridgeObjectRelease(uVar19);
  uVar19 = 0;
  FUN_1000549b4(0,0x1000c49b0,&PTR__OBJC_CLASS___OS_dispatch_queue_1000c20c8);
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  puVar7 = &UNK_1000b4cf0;
  lStack_1f8 = uVar19;
  _swift_allocObject(&UNK_1000b4cf0,0x18,7);
  puStack_200 = puVar7;
  _swift_weakInit(puVar7 + 0x10,unaff_x20);
  lVar4 = lStack_2c8;
  FUN_100055024(lStack_1e8,lStack_2c8,FUN_10005cf80);
  uVar22 = (ulong)*(byte *)(lStack_2d8 + 0x50);
  uVar27 = uVar22 + 0xa0 & (uVar22 ^ 0xffffffffffffffff);
  puVar12 = &UNK_1000b4fe8;
  _swift_allocObject(&UNK_1000b4fe8,uVar27 + lStack_2d0,uVar22 | 7);
  puVar17 = puStack_1f0;
  uVar18 = uStack_2a8;
  uVar19 = uStack_2b0;
  puVar14 = puStack_2e8;
  *(undefined **)(puVar12 + 0x10) = puVar7;
  *(ulong *)(puVar12 + 0x18) = uStack_2f8;
  *(long **)(puVar12 + 0x20) = plStack_248;
  *(undefined **)(puVar12 + 0x28) = puStack_1f0;
  *(undefined **)(puVar12 + 0x30) = puVar6;
  *(undefined **)(puVar12 + 0x38) = puVar8;
  *(undefined8 *)(puVar12 + 0x40) = param_5;
  *(undefined8 *)(puVar12 + 0x48) = param_6;
  *(undefined8 *)(puVar12 + 0x50) = uStack_2c0;
  *(undefined8 *)(puVar12 + 0x58) = uStack_2b0;
  *(undefined8 *)(puVar12 + 0x60) = uStack_2b8;
  *(undefined8 *)(puVar12 + 0x68) = uStack_2a8;
  *(long *)(puVar12 + 0x70) = lStack_208;
  *(long *)(puVar12 + 0x78) = lStack_2f0;
  *(undefined **)(puVar12 + 0x80) = puStack_2e8;
  *(undefined **)(puVar12 + 0x88) = puStack_240;
  *(undefined **)(puVar12 + 0x90) = puStack_238;
  *(undefined **)(puVar12 + 0x98) = puStack_230;
  func_0x00010004dd0c(lVar4,puVar12 + uVar27);
  pcStack_120 = FUN_100054f20;
  puStack_140 = PTR___NSConcreteStackBlock_1000b0c60;
  uStack_138 = 0x42000000;
  pcStack_130 = FUN_100051d40;
  puStack_128 = &UNK_1000b5000;
  ppuVar13 = &puStack_140;
  puStack_118 = puVar12;
  __Block_copy(ppuVar13);
  _swift_bridgeObjectRetain(puVar14);
  _swift_retain(puVar8);
  _swift_bridgeObjectRetain(param_6);
  _swift_retain(puVar6);
  _swift_retain(puVar17);
  puVar7 = puStack_200;
  _swift_retain(puStack_200);
  _swift_retain(plStack_248);
  _swift_bridgeObjectRetain(uVar19);
  _swift_bridgeObjectRetain(uVar18);
  _objc_retain(lStack_208);
  puVar12 = puStack_240;
  FUN_100054a94(puStack_240,puStack_238,puStack_230);
  lVar4 = lStack_2a0;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lStack_2a0);
  puStack_148 = PTR___swiftEmptyArrayStorage_1000b14d0;
  FUN_100054aa8();
  uVar19 = 0x1000c4b98;
  func_0x0001000100d0(0x1000c4b98,&UNK_100089e30);
  uVar18 = uVar19;
  FUN_10001f91c();
  lVar10 = lStack_278;
  lVar21 = lStack_288;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lStack_288,&puStack_148,uVar19,uVar18,lStack_278,puVar12);
  lVar24 = lStack_1f8;
  __sSo17OS_dispatch_groupC8DispatchE6notify3qos5flags5queue7executeyAC0D3QoSV_AC0D13WorkItemFlagsVSo0a1_b1_H0CyyXBtF
            (lVar4,lVar21,lStack_1f8,ppuVar13);
  __Block_release(ppuVar13);
  _objc_release(lVar5);
  _objc_release(lVar24);
  (**(code **)(lStack_280 + 8))(lVar21,lVar10);
  (**(code **)(lStack_298 + 8))(lVar4,lStack_290);
  puVar12 = puStack_118;
  _swift_release(puVar6);
  _swift_release(puVar17);
  _swift_release(puVar8);
  _swift_release(puVar7);
  _swift_release(puVar12);
  return;
}



/* Entry: 100051520; end: 100051d3f;  */

void FUN_100051520(long param_1,code *param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17,
                  undefined8 param_18,long param_19)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined1 *puVar17;
  long lVar18;
  undefined8 auStack_1c0 [6];
  long lStack_190;
  uint uStack_184;
  long alStack_180 [4];
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar8 = 0;
  uStack_130 = param_7;
  uStack_128 = param_8;
  pcStack_120 = param_2;
  FUN_10005e080();
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar18 = (long)&lStack_190 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0x1000c6778;
  func_0x0001000100d0(0x1000c6778,&UNK_10008c810);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = (undefined1 *)(lVar18 - extraout_x8_00);
  _swift_beginAccess(param_1 + 0x10,auStack_80,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 == 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000042,0x800000010009e860);
    _objc_release();
    *puVar17 = 0;
    _swift_storeEnumTagMultiPayload(puVar17,lVar9,1);
    (*pcStack_120)(puVar17);
    FUN_100054aec(puVar17,0x1000c6778,&UNK_10008c810);
  }
  else {
    uStack_148 = param_15;
    uStack_150 = param_14;
    uStack_138 = param_10;
    uStack_158 = param_9;
    uStack_140 = param_3;
    _swift_beginAccess(param_4 + 0x10,auStack_98,0,0);
    lVar15 = *(long *)(param_4 + 0x10);
    if (lVar15 == 0) {
      puStack_a0 = PTR___sSSN_1000b1180;
      uStack_b8 = 0x616e73206b726164;
      uStack_b0 = 0xed0000746f687370;
      puVar11 = (undefined *)0x0;
      func_0x000100053178(0,1,1,PTR___swiftEmptyArrayStorage_1000b14d0);
      uVar3 = *(ulong *)(puVar11 + 0x10);
      puVar13 = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar3) {
        puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
        func_0x000100053178(puVar13,uVar3 + 1,1,puVar11);
      }
      *(ulong *)(puVar13 + 0x10) = uVar3 + 1;
      FUN_100036784(&uStack_b8,puVar13 + uVar3 * 0x20 + 0x20);
    }
    else {
      _swift_beginAccess(param_5 + 0x10,auStack_100,0,0);
      lVar16 = *(long *)(param_5 + 0x10);
      puVar13 = PTR___swiftEmptyArrayStorage_1000b14d0;
      if (lVar16 != 0) {
        _swift_beginAccess(param_6 + 0x10,auStack_118,0,0);
        lStack_160 = *(long *)(param_6 + 0x10);
        puVar13 = PTR___swiftEmptyArrayStorage_1000b14d0;
        if (lStack_160 != 0) {
          uStack_b8 = 0;
          uStack_b0 = 0xe000000000000000;
          _objc_retain();
          _objc_retain();
          alStack_180[3] = lVar16;
          _objc_retain();
          alStack_180[2] = lVar15;
          __ss11_StringGutsV4growyySiF(0x3f);
          __sSS6appendyySSF(0xd00000000000003d,0x800000010009e900);
          uVar10 = uStack_128;
          __sSS6appendyySSF(uStack_130,uStack_128);
          uVar14 = uStack_b0;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_b8,uStack_b0);
          _objc_release();
          _swift_bridgeObjectRelease(uVar14);
          lVar15 = lVar18;
          FUN_100055024(param_19,lVar18,FUN_10005cf80);
          uVar14 = *(undefined8 *)(param_1 + 0x10);
          lVar16 = 0;
          FUN_10005cf80();
          iVar4 = *(int *)(lVar16 + 0x20);
          _swift_bridgeObjectRetain(uVar10);
          _swift_bridgeObjectRetain(uStack_138);
          _objc_retain();
          alStack_180[0] = uVar14;
          FUN_10005bbd8();
          uVar10 = 0;
          if (lVar15 != 0) {
            uVar10 = uVar14;
          }
          lVar2 = -0x2000000000000000;
          if (lVar15 != 0) {
            lVar2 = lVar15;
          }
          puVar1 = (undefined8 *)(lVar18 + *(int *)(lVar8 + 0x24));
          uStack_184 = (uint)*(byte *)(param_19 + *(int *)(lVar16 + 0x24));
          lVar15 = 0x1000c69c8;
          alStack_180[1] = param_1;
          func_0x0001000100d0(0x1000c69c8,&UNK_10008c850);
          iVar5 = *(int *)(lVar15 + 0x30);
          *puVar1 = uVar10;
          puVar1[1] = lVar2;
          lVar15 = 0;
          __s10Foundation4DateVMa();
          (**(code **)(*(long *)(lVar15 + -8) + 0x10))
                    ((long)puVar1 + (long)iVar5,param_19 + iVar4,lVar15);
          uVar10 = 0;
          FUN_10005fcd4(0);
          _swift_storeEnumTagMultiPayload(puVar1,uVar10,(uStack_184 ^ 0xffffffff) & 1);
          _objc_release(alStack_180[0]);
          uVar10 = uStack_128;
          puVar1 = (undefined8 *)(lVar18 + *(int *)(lVar8 + 0x14));
          *puVar1 = uStack_130;
          puVar1[1] = uVar10;
          *(long *)(lVar18 + *(int *)(lVar8 + 0x18)) = alStack_180[2];
          *(long *)(lVar18 + *(int *)(lVar8 + 0x1c)) = alStack_180[3];
          uVar10 = uStack_138;
          puVar1 = (undefined8 *)(lVar18 + *(int *)(lVar8 + 0x20));
          *puVar1 = uStack_158;
          puVar1[1] = uVar10;
          *(long *)(lVar18 + *(int *)(lVar8 + 0x28)) = lStack_160;
          uVar10 = uStack_148;
          puVar1 = (undefined8 *)(lVar18 + *(int *)(lVar8 + 0x2c));
          *puVar1 = uStack_150;
          puVar1[1] = uVar10;
          puVar1 = (undefined8 *)(lVar18 + *(int *)(lVar8 + 0x30));
          puVar1[1] = 1;
          *puVar1 = 0;
          puVar1[2] = 0;
          FUN_100055024(lVar18,puVar17,FUN_10005e080);
          uVar14 = 0;
          FUN_10005ee88(0);
          _swift_storeEnumTagMultiPayload(puVar17,uVar14,0);
          _swift_storeEnumTagMultiPayload(puVar17,lVar9,0);
          _swift_bridgeObjectRetain(uVar10);
          (*pcStack_120)(puVar17);
          _swift_release(alStack_180[1]);
          FUN_100054aec(puVar17,0x1000c6778,&UNK_10008c810);
          func_0x000100055068(lVar18,FUN_10005e080);
          return;
        }
      }
    }
    lStack_160 = param_12;
    alStack_180[3] = param_11;
    _swift_beginAccess(param_5 + 0x10,auStack_d0,0,0);
    if (*(long *)(param_5 + 0x10) == 0) {
      puStack_a0 = PTR___sSSN_1000b1180;
      uStack_b8 = 0x6e7320746867696c;
      uStack_b0 = 0xee00746f68737061;
      puVar11 = puVar13;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar12 = puVar13;
      if (((ulong)puVar11 & 1) == 0) {
        puVar12 = (undefined *)0x0;
        func_0x000100053178(0,*(long *)(puVar13 + 0x10) + 1,1,puVar13);
      }
      uVar3 = *(ulong *)(puVar12 + 0x10);
      puVar13 = puVar12;
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar3) {
        puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
        func_0x000100053178(puVar13,uVar3 + 1,1,puVar12);
      }
      *(ulong *)(puVar13 + 0x10) = uVar3 + 1;
      FUN_100036784(&uStack_b8,puVar13 + uVar3 * 0x20 + 0x20);
    }
    _swift_beginAccess(param_6 + 0x10,auStack_e8,0,0);
    if (*(long *)(param_6 + 0x10) == 0) {
      puStack_a0 = PTR___sSSN_1000b1180;
      uStack_b8 = 0x20696a6f6d746962;
      uStack_b0 = 0xed00006567616d69;
      puVar11 = puVar13;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar12 = puVar13;
      if (((ulong)puVar11 & 1) == 0) {
        puVar12 = (undefined *)0x0;
        func_0x000100053178(0,*(long *)(puVar13 + 0x10) + 1,1,puVar13);
      }
      uVar3 = *(ulong *)(puVar12 + 0x10);
      puVar13 = puVar12;
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar3) {
        puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
        func_0x000100053178(puVar13,uVar3 + 1,1,puVar12);
      }
      *(ulong *)(puVar13 + 0x10) = uVar3 + 1;
      FUN_100036784(&uStack_b8,puVar13 + uVar3 * 0x20 + 0x20);
    }
    uStack_b8 = 0;
    uStack_b0 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x54);
    __sSS6appendyySSF(0xd000000000000044,0x800000010009e8b0);
    puVar11 = PTR___sypN_1000b14c8 + 8;
    __sSa11descriptionSSvg(puVar13,puVar11);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar11);
    __sSS6appendyySSF(0x69726620726f6620,0xec00000020646e65);
    uVar14 = uStack_128;
    uVar10 = uStack_130;
    __sSS6appendyySSF(uStack_130,uStack_128);
    uVar7 = uStack_b0;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_b8,uStack_b0);
    _objc_release();
    _swift_bridgeObjectRelease(uVar7);
    *(undefined8 *)(puVar17 + -8) = uStack_140;
    pcVar6 = pcStack_120;
    *(undefined8 *)(puVar17 + -0x18) = param_18;
    *(code **)(puVar17 + -0x10) = pcVar6;
    *(undefined8 *)(puVar17 + -0x28) = param_16;
    *(undefined8 *)(puVar17 + -0x20) = param_17;
    *(undefined8 *)(puVar17 + -0x30) = uStack_148;
    FUN_100051d6c(uStack_158,uStack_138,uVar10,uVar14,alStack_180[3],lStack_160,param_13,uStack_150)
    ;
    _swift_bridgeObjectRelease(puVar13);
    _swift_release(param_1);
  }
  return;
}



/* Entry: 100051d40; end: 100051d6b;  */

void FUN_100051d40(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x000100086234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_1000b1698)(uVar2);
  return;
}



/* Entry: 100051d6c; end: 100052bdf;  */

void FUN_100051d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar15;
  long lVar16;
  long extraout_x8_02;
  long lVar17;
  long extraout_x8_03;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long unaff_x20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  undefined1 *puVar25;
  ulong uVar26;
  long lVar27;
  undefined *puVar28;
  undefined1 auStack_250 [8];
  undefined *puStack_248;
  long lStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [24];
  undefined *apuStack_90 [3];
  long lStack_78;
  
  lVar4 = 0;
  __s10Foundation13URLComponentsVMa();
  lStack_220 = *(long *)(lVar4 + -8);
  lStack_210 = lVar4;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lStack_220 + 0x40));
  puVar25 = auStack_250 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_218 = (long)puVar25 - extraout_x8_00;
  __s10Foundation3URLVMa();
  lStack_200 = *(long *)(lVar4 + -8);
  lStack_1f8 = lVar4;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lStack_200 + 0x40));
  lVar15 = ((long)puVar25 - extraout_x8_00) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_208 = lVar15;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar16 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar16 + 0x40));
  lVar15 = lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar5 = (undefined *)0x0;
  __s8Dispatch0A3QoSVMa();
  lVar17 = *(long *)(puVar5 + -8);
  puVar6 = puVar5;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar17 + 0x40));
  lVar18 = lVar15 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  _dispatch_group_create();
  puVar8 = &UNK_1000b4de0;
  puVar7 = puVar8;
  _swift_allocObject(&UNK_1000b4de0,0x18,7);
  *(undefined8 *)(puVar7 + 0x10) = 0;
  puStack_1c0 = puVar7;
  _dispatch_group_enter(puVar6);
  _swift_allocObject(&UNK_1000b4de0,0x18,7);
  plStack_1f0 = (long *)(puVar8 + 0x10);
  *plStack_1f0 = 0;
  _dispatch_group_enter(puVar6);
  FUN_10005496c(unaff_x20 + 0x58,apuStack_90);
  ppuVar9 = apuStack_90;
  func_0x000100013de4();
  if (param_7 == 0) {
LAB_100051ff4:
    lVar27 = 0;
    lVar20 = 0;
  }
  else {
    lVar21 = param_7;
    func_0x000100086460();
    _objc_retainAutoreleasedReturnValue();
    if (lVar21 == 0) goto LAB_100051ff4;
    lVar27 = lVar21;
    lVar20 = lStack_78;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar21);
  }
  uStack_1b8 = param_14;
  uStack_1e0 = param_13;
  uStack_1c8 = param_12;
  uStack_1d0 = param_11;
  uStack_1d8 = param_10;
  uStack_1e8 = param_9;
  lVar21 = param_7;
  func_0x000100087640();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = &UNK_1000b4e08;
  _swift_allocObject(&UNK_1000b4e08,0x20,7);
  *(undefined **)(puVar7 + 0x10) = puVar8;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  if (lVar20 == 0) {
    _swift_beginAccess(plStack_1f0,auStack_a8,1,0);
    uVar22 = *(undefined8 *)(puVar8 + 0x10);
    *(undefined8 *)(puVar8 + 0x10) = 0;
    puVar28 = puVar6;
    _objc_retain(puVar6);
    _swift_retain(puVar8);
    _objc_release(uVar22);
    _dispatch_group_leave(puVar28);
    _objc_release(lVar21);
    _swift_release(puVar7);
  }
  else {
    puVar28 = *ppuVar9;
    lVar24 = 0x3030373032323031;
    lStack_240 = lVar21;
    FUN_100054b34(puVar28 + 0x28,&puStack_d8,0x1000c6668,&UNK_10008c650);
    puStack_238 = puVar6;
    puStack_230 = puVar8;
    uStack_228 = param_3;
    if (puStack_c0 == (undefined *)0x0) {
      _objc_retain(puVar6);
      _swift_retain(puVar8);
      _swift_bridgeObjectRetain(lVar20);
      FUN_100054aec(&puStack_d8,0x1000c6668,&UNK_10008c650);
    }
    else {
      func_0x000100013de4();
      _objc_retain();
      puStack_248 = puVar6;
      _swift_retain(puVar8);
      _swift_bridgeObjectRetain(lVar20);
      func_0x000100044524(0x3030373032323031,0xe800000000000000,lVar27,lVar20,param_3,param_4);
      FUN_100012b94(&puStack_d8);
      if (lVar24 != 0) {
        puStack_d8 = (undefined *)0x0;
        uStack_d0 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x61);
        __sSS6appendyySSF(0xd000000000000043,0x800000010009e7c0);
        __sSS6appendyySSF(0x3030373032323031,0xe800000000000000);
        __sSS6appendyySSF(0x726174617661202c,0xec000000203a6449);
        __sSS6appendyySSF(lVar27,lVar20);
        _swift_bridgeObjectRelease(lVar20);
        __sSS6appendyySSF(0x646e65697266202c,0xec000000203a6449);
        param_3 = uStack_228;
        __sSS6appendyySSF(uStack_228,param_4);
        uVar22 = uStack_d0;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_d8,uStack_d0);
        _objc_release();
        _swift_bridgeObjectRelease(uVar22);
        plVar1 = plStack_1f0;
        _swift_beginAccess(plStack_1f0,auStack_a8,1,0);
        lVar21 = *plVar1;
        *plVar1 = lVar24;
        _objc_retain(lVar24);
        _objc_retain();
        _objc_release(lVar21);
        _dispatch_group_leave(puStack_248);
        _objc_release(lVar24);
        _objc_release(lVar24);
        _swift_bridgeObjectRelease(lVar20);
        _objc_release(lStack_240);
        _swift_release(puVar7);
        puVar6 = puStack_238;
        puVar8 = puStack_230;
        goto LAB_1000528a4;
      }
    }
    puStack_248 = puVar7;
    __s10Foundation13URLComponentsVACycfC(puVar25);
    __s10Foundation13URLComponentsV4hostSSSgvs(0xd000000000000010,0x800000010009e750);
    __s10Foundation13URLComponentsV6schemeSSSgvs(0x7370747468,0xe500000000000000);
    puStack_d8 = (undefined *)0x646e65722f64332f;
    uStack_d0 = 0xeb000000002f7265;
    __sSS6appendyySSF(0x3030373032323031,0xe800000000000000);
    __sSS6appendyySSF(0x2d,0xe100000000000000);
    __sSS6appendyySSF(lVar27,lVar20);
    __sSS6appendyySSF(0x31762d,0xe300000000000000);
    __sSS6appendyySSF(0x676e702e,0xe400000000000000);
    __s10Foundation13URLComponentsV4pathSSvs(puStack_d8,uStack_d0);
    lVar21 = 0x1000c69c0;
    func_0x0001000100d0(0x1000c69c0,&UNK_10008c840);
    lVar24 = 0;
    __s10Foundation12URLQueryItemVMa();
    lVar23 = *(long *)(*(long *)(lVar24 + -8) + 0x48);
    uVar19 = (ulong)*(byte *)(*(long *)(lVar24 + -8) + 0x50);
    uVar26 = uVar19 + 0x20 & (uVar19 ^ 0xffffffffffffffff);
    _swift_allocObject(lVar21,uVar26 + lVar23 * 2,uVar19 | 7);
    *(undefined8 *)(lVar21 + 0x18) = 4;
    *(undefined8 *)(lVar21 + 0x10) = 2;
    lVar24 = lVar21 + uVar26;
    __s10Foundation12URLQueryItemV4name5valueACSSh_SSSghtcfC
              (lVar24,0x6175,0xe200000000000000,0x32,0xe100000000000000);
    __s10Foundation12URLQueryItemV4name5valueACSSh_SSSghtcfC
              (lVar24 + lVar23,0x656c616373,0xe500000000000000,0x32,0xe100000000000000);
    __s10Foundation13URLComponentsV10queryItemsSayAA12URLQueryItemVGSgvs(lVar21);
    lVar21 = lStack_218;
    __s10Foundation13URLComponentsV3urlAA3URLVSgvg(lStack_218);
    (**(code **)(lStack_220 + 8))(puVar25,lStack_210);
    lVar23 = lStack_1f8;
    lVar24 = lStack_200;
    lVar10 = lVar21;
    (**(code **)(lStack_200 + 0x30))(lVar21,1,lStack_1f8);
    if ((int)lVar10 == 1) {
      _swift_bridgeObjectRelease(lVar20);
      FUN_100054aec(lVar21,0x1000c4330,&UNK_1000890b0);
      plVar1 = plStack_1f0;
      _swift_beginAccess(plStack_1f0,auStack_a8,1,0);
      lVar21 = *plVar1;
      *plVar1 = 0;
      _objc_release(lVar21);
      puVar6 = puStack_238;
      _dispatch_group_leave(puStack_238);
      _swift_bridgeObjectRelease(lVar20);
      _objc_release(lStack_240);
      _swift_release(puStack_248);
      param_3 = uStack_228;
      puVar8 = puStack_230;
    }
    else {
      (**(code **)(lVar24 + 0x20))(lStack_208,lVar21,lVar23);
      puStack_d8 = (undefined *)0x0;
      uStack_d0 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x61);
      __sSS6appendyySSF(0xd000000000000043,0x800000010009e770);
      __sSS6appendyySSF(0x3030373032323031,0xe800000000000000);
      __sSS6appendyySSF(0x726174617661202c,0xec000000203a6449);
      __sSS6appendyySSF(lVar27,lVar20);
      __sSS6appendyySSF(0x646e65697266202c,0xec000000203a6449);
      param_3 = uStack_228;
      __sSS6appendyySSF(uStack_228,param_4);
      uVar22 = uStack_d0;
      uVar14 = uStack_d0;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_d8,uStack_d0);
      _objc_release();
      _swift_bridgeObjectRelease(uVar22);
      plStack_1f0 = *(long **)(puVar28 + 0x10);
      __s10Foundation3URLV14absoluteStringSSvg();
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(uVar14);
      lVar21 = 0x1000c6670;
      func_0x0001000100d0(0x1000c6670,&UNK_10008c658);
      _swift_initStackObject();
      *(undefined8 *)(lVar21 + 0x18) = 2;
      *(undefined8 *)(lVar21 + 0x10) = 1;
      puVar8 = PTR___sSSN_1000b1180;
      puStack_d8 = (undefined *)0x7275746165462d58;
      uStack_d0 = 0xe900000000000065;
      __ss11AnyHashableVyABxcSHRzlufC
                (lVar21 + 0x20,&puStack_d8,PTR___sSSN_1000b1180,PTR___sSSSHsWP_1000b1188);
      *(undefined **)(lVar21 + 0x60) = puVar8;
      *(undefined8 *)(lVar21 + 0x48) = 0xd00000000000001a;
      *(undefined8 *)(lVar21 + 0x50) = 0x800000010009dd90;
      lVar23 = lVar21;
      FUN_1000533cc(lVar21);
      _swift_setDeallocating(lVar21);
      FUN_100054aec(lVar21 + 0x20,0x1000c6678,&UNK_10008c660);
      lVar10 = lVar23;
      __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                (lVar23,PTR___ss11AnyHashableVN_1000b1278,PTR___sypN_1000b14c8 + 8,
                 PTR___ss11AnyHashableVSHsWP_1000b1280);
      _swift_bridgeObjectRelease(lVar23);
      puVar8 = &UNK_1000b4e80;
      _swift_allocObject(&UNK_1000b4e80,0x18,7);
      _swift_weakInit(puVar8 + 0x10,puVar28);
      puVar6 = &UNK_1000b4ea8;
      _swift_allocObject(&UNK_1000b4ea8,0x68,7);
      lVar21 = lStack_240;
      puVar7 = puStack_248;
      *(undefined8 *)(puVar6 + 0x10) = 0x100055118;
      *(undefined **)(puVar6 + 0x18) = puStack_248;
      *(undefined **)(puVar6 + 0x20) = puVar8;
      *(long *)(puVar6 + 0x28) = lVar27;
      *(long *)(puVar6 + 0x30) = lVar20;
      *(undefined8 *)(puVar6 + 0x38) = 0x3030373032323031;
      *(undefined8 *)(puVar6 + 0x40) = 0xe800000000000000;
      *(undefined8 *)(puVar6 + 0x48) = param_3;
      *(undefined8 *)(puVar6 + 0x50) = param_4;
      puVar6[0x58] = 0;
      *(long *)(puVar6 + 0x60) = lStack_240;
      uStack_b8 = 0x100054b30;
      puStack_d8 = PTR___NSConcreteStackBlock_1000b0c60;
      uStack_d0 = 0x42000000;
      pcStack_c8 = FUN_10004f034;
      puStack_c0 = &UNK_1000b4ec0;
      ppuVar9 = &puStack_d8;
      puStack_b0 = puVar6;
      __Block_copy(ppuVar9);
      puVar8 = puStack_b0;
      _swift_retain(puVar7);
      _swift_bridgeObjectRetain(param_4);
      _objc_retain(lVar21);
      _swift_release(puVar8);
      func_0x000100087000(plStack_1f0);
      __Block_release(ppuVar9);
      _swift_bridgeObjectRelease(lVar20);
      _objc_release(lVar21);
      _swift_release(puVar7);
      _objc_release(uVar22);
      _objc_release(lVar10);
      (**(code **)(lVar24 + 8))(lStack_208,lStack_1f8);
      puVar6 = puStack_238;
      puVar8 = puStack_230;
    }
  }
LAB_1000528a4:
  func_0x000100012b98(apuStack_90);
  puVar11 = (undefined8 *)(unaff_x20 + 0x58);
  func_0x000100013de4(puVar11,*(undefined8 *)(unaff_x20 + 0x70));
  uVar22 = *puVar11;
  _objc_retain();
  puVar28 = puStack_1c0;
  _swift_retain(puStack_1c0);
  FUN_10004aa68(param_7,param_3,param_4,uVar22,puVar28,puVar6);
  _swift_release(puVar28);
  _objc_release(puVar6);
  puStack_d8 = (undefined *)0x0;
  uStack_d0 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x49);
  __sSS6appendyySSF(0xd000000000000047,0x800000010009e700);
  __sSS6appendyySSF(param_3,param_4);
  uVar22 = uStack_d0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_d8,uStack_d0);
  _objc_release();
  _swift_bridgeObjectRelease(uVar22);
  uVar12 = 0;
  FUN_1000549b4(0,0x1000c49b0,&PTR__OBJC_CLASS___OS_dispatch_queue_1000c20c8);
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  puVar7 = &UNK_1000b4e30;
  _swift_allocObject(&UNK_1000b4e30,0x80,7);
  uVar13 = uStack_1b8;
  uVar3 = uStack_1c8;
  uVar2 = uStack_1d0;
  uVar14 = uStack_1d8;
  uVar22 = uStack_1e8;
  *(undefined8 *)(puVar7 + 0x10) = param_5;
  *(undefined8 *)(puVar7 + 0x18) = param_6;
  *(undefined8 *)(puVar7 + 0x20) = param_1;
  *(undefined8 *)(puVar7 + 0x28) = param_2;
  *(undefined **)(puVar7 + 0x30) = puVar28;
  *(undefined **)(puVar7 + 0x38) = puVar8;
  *(undefined8 *)(puVar7 + 0x40) = param_8;
  *(undefined8 *)(puVar7 + 0x48) = uStack_1e8;
  *(long *)(puVar7 + 0x50) = param_7;
  *(undefined8 *)(puVar7 + 0x58) = uStack_1d8;
  *(undefined8 *)(puVar7 + 0x60) = uStack_1d0;
  *(undefined8 *)(puVar7 + 0x68) = uStack_1c8;
  *(undefined8 *)(puVar7 + 0x70) = uStack_1e0;
  *(undefined8 *)(puVar7 + 0x78) = uStack_1b8;
  uStack_b8 = 0x100054a58;
  puStack_d8 = PTR___NSConcreteStackBlock_1000b0c60;
  uStack_d0 = 0x42000000;
  pcStack_c8 = FUN_100051d40;
  puStack_c0 = &UNK_1000b4e48;
  ppuVar9 = &puStack_d8;
  puStack_b0 = puVar7;
  __Block_copy();
  _swift_bridgeObjectRetain(uVar22);
  _objc_retain(param_7);
  _swift_retain(puVar8);
  _swift_retain(puVar28);
  _swift_bridgeObjectRetain(param_6);
  _swift_bridgeObjectRetain(param_2);
  FUN_100054a94(uVar14,uVar2,uVar3);
  _swift_retain(uVar13);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar18);
  apuStack_90[0] = PTR___swiftEmptyArrayStorage_1000b14d0;
  FUN_100054aa8();
  uVar22 = 0x1000c4b98;
  func_0x0001000100d0(0x1000c4b98,&UNK_100089e30);
  uVar14 = uVar22;
  FUN_10001f91c();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar15,apuStack_90,uVar22,uVar14,lVar4,uVar13);
  __sSo17OS_dispatch_groupC8DispatchE6notify3qos5flags5queue7executeyAC0D3QoSV_AC0D13WorkItemFlagsVSo0a1_b1_H0CyyXBtF
            (lVar18,lVar15,uVar12,ppuVar9);
  __Block_release(ppuVar9);
  _objc_release(puVar6);
  _objc_release(uVar12);
  (**(code **)(lVar16 + 8))(lVar15,lVar4);
  (**(code **)(lVar17 + 8))(lVar18,puVar5);
  puVar6 = puStack_b0;
  _swift_release(puVar28);
  _swift_release(puVar8);
  _swift_release(puVar6);
  return;
}



/* Entry: 100052be0; end: 100052be3;  */

void FUN_100052be0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = param_1;
  _objc_retain(param_1);
  _objc_release(uVar1);
  _dispatch_group_leave(param_3);
  return;
}



/* Entry: 100052be4; end: 100052c4b;  */

void FUN_100052be4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = param_1;
  _objc_retain(param_1);
  _objc_release(uVar1);
  _dispatch_group_leave(param_3);
  return;
}



/* Entry: 100052c4c; end: 100052ec7;  */

void FUN_100052c4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9
                  ,undefined8 param_10,undefined8 param_11,undefined8 param_12,code *param_13,
                  undefined8 param_14)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long extraout_x8;
  undefined8 uVar18;
  undefined8 *puVar19;
  long alStack_1d0 [9];
  code *apcStack_188 [16];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  apcStack_188[1] = (code *)param_14;
  apcStack_188[0] = param_13;
  alStack_1d0[5] = param_12;
  alStack_1d0[4] = param_11;
  alStack_1d0[1] = param_9;
  lVar12 = 0x1000c6778;
  alStack_1d0[2] = param_3;
  alStack_1d0[3] = param_7;
  alStack_1d0[6] = param_2;
  alStack_1d0[7] = param_8;
  alStack_1d0[8] = param_4;
  func_0x0001000100d0(0x1000c6778,&UNK_10008c810);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  puVar19 = (undefined8 *)((long)alStack_1d0 + lVar1);
  lVar13 = 0x5f6568745f66666f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f6568745f66666f,0xec00000064697267);
  uVar14 = 0;
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF();
  lVar15 = lVar13;
  uVar17 = uVar14;
  _SCLocalizedString();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  _objc_release(uVar14);
  if (lVar15 == 0) {
    lVar13 = 0;
    uVar17 = 0;
  }
  else {
    lVar13 = lVar15;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar15);
  }
  _swift_beginAccess(param_5 + 0x10,auStack_f0,0,0);
  uVar18 = *(undefined8 *)(param_5 + 0x10);
  _swift_beginAccess(param_6 + 0x10,auStack_108,0,0);
  uVar14 = *(undefined8 *)(param_6 + 0x10);
  _objc_retain(uVar14);
  _objc_retain(uVar18);
  lVar16 = alStack_1d0[1];
  func_0x000100087640();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = alStack_1d0[8];
  lVar5 = alStack_1d0[7];
  lVar4 = alStack_1d0[6];
  lVar3 = alStack_1d0[5];
  lVar2 = alStack_1d0[4];
  lVar15 = alStack_1d0[2];
  uStack_d0 = alStack_1d0[6];
  uStack_c8 = alStack_1d0[2];
  uStack_c0 = alStack_1d0[8];
  uStack_98 = alStack_1d0[3];
  uStack_90 = alStack_1d0[7];
  uStack_80 = param_10;
  uStack_78 = alStack_1d0[4];
  uStack_70 = alStack_1d0[5];
  uStack_d8 = param_1;
  lStack_b8 = lVar13;
  uStack_b0 = uVar17;
  uStack_a8 = uVar18;
  uStack_a0 = uVar14;
  uStack_88 = lVar16;
  *(long *)((long)alStack_1d0 + lVar1 + 8) = alStack_1d0[6];
  *puVar19 = param_1;
  *(long *)((long)alStack_1d0 + lVar1 + 0x18) = lVar6;
  *(long *)((long)alStack_1d0 + lVar1 + 0x10) = lVar15;
  uVar11 = uStack_70;
  uVar10 = uStack_78;
  uVar9 = uStack_88;
  uVar8 = uStack_90;
  uVar7 = uStack_98;
  uVar18 = uStack_a0;
  uVar14 = uStack_a8;
  uVar17 = uStack_b0;
  lVar15 = lStack_b8;
  *(undefined8 *)((long)apcStack_188 + lVar1 + 0x10) = uStack_80;
  *(undefined8 *)((long)apcStack_188 + lVar1 + 8) = uVar9;
  *(undefined8 *)((long)apcStack_188 + lVar1 + 0x20) = uVar11;
  *(undefined8 *)((long)apcStack_188 + lVar1 + 0x18) = uVar10;
  *(undefined8 *)((long)alStack_1d0 + lVar1 + 0x38) = uVar18;
  *(undefined8 *)((long)alStack_1d0 + lVar1 + 0x30) = uVar14;
  *(undefined8 *)((long)apcStack_188 + lVar1) = uVar8;
  *(undefined8 *)((long)alStack_1d0 + lVar1 + 0x40) = uVar7;
  *(undefined8 *)((long)alStack_1d0 + lVar1 + 0x28) = uVar17;
  *(long *)((long)alStack_1d0 + lVar1 + 0x20) = lVar15;
  uVar17 = 0;
  FUN_10005ee88(0);
  _swift_storeEnumTagMultiPayload(puVar19,uVar17,1);
  _swift_storeEnumTagMultiPayload(puVar19,lVar12,0);
  FUN_100054a94(param_10,lVar2,lVar3);
  _swift_bridgeObjectRetain(lVar4);
  _swift_bridgeObjectRetain(lVar5);
  _swift_bridgeObjectRetain(lVar6);
  func_0x000100054bec(&uStack_d8,apcStack_188 + 2);
  (*apcStack_188[0])(puVar19);
  func_0x000100054c28(&uStack_d8);
  FUN_100054aec(puVar19,0x1000c6778,&UNK_10008c810);
  return;
}



/* Entry: 100052ec8; end: 100052f83;  */

void FUN_100052ec8(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x40));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x48));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x50));
  FUN_100012b94(unaff_x20 + 0x58);
  FUN_100054aec(unaff_x20 + 0x80,0x1000c6998,&UNK_10008c818);
  func_0x000100012b98(unaff_x20 + 0xa8);
  _objc_release(*(undefined8 *)(unaff_x20 + 0xd0));
  return;
}



/* Entry: 100052f84; end: 100052fb3;  */

undefined1  [16] FUN_100052f84(undefined8 param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long unaff_x20;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_78 [40];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x28);
  __ss11AnyHashableV13_rawHashValue4seedS2i_tF();
  uVar3 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    uVar4 = 0;
  }
  else {
    do {
      func_0x000100054b7c(*(long *)(unaff_x20 + 0x30) + uVar1 * 0x28,auStack_78);
      puVar2 = auStack_78;
      __ss11AnyHashableV2eeoiySbAB_ABtFZ(puVar2,param_1);
      uVar4 = (uint)puVar2;
      func_0x000100054bb8(auStack_78);
      if (((ulong)puVar2 & 1) != 0) break;
      uVar1 = uVar1 + 1 & ~uVar3;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  auVar5._8_4_ = uVar4 & 1;
  auVar5._0_8_ = uVar1;
  auVar5._12_4_ = 0;
  return auVar5;
}



/* Entry: 100052fb4; end: 10005306f;  */

undefined1  [16] FUN_100052fb4(undefined8 param_1,ulong param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  long unaff_x20;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_78 [40];
  
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    uVar3 = 0;
  }
  else {
    do {
      func_0x000100054b7c(*(long *)(unaff_x20 + 0x30) + param_2 * 0x28,auStack_78);
      puVar1 = auStack_78;
      __ss11AnyHashableV2eeoiySbAB_ABtFZ(puVar1,param_1);
      uVar3 = (uint)puVar1;
      func_0x000100054bb8(auStack_78);
      if (((ulong)puVar1 & 1) != 0) break;
      param_2 = param_2 + 1 & ~uVar2;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  }
  auVar4._8_4_ = uVar3 & 1;
  auVar4._0_8_ = param_2;
  auVar4._12_4_ = 0;
  return auVar4;
}



/* Entry: 100053070; end: 100053283;  */

undefined * FUN_100053070(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100053178);
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
  puVar3 = PTR___swiftEmptyArrayStorage_1000b14d0;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x1000c69b8;
    func_0x0001000100d0(0x1000c69b8,&UNK_10008c830);
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
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___sSSN_1000b1180);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 100053284; end: 1000532d3;  */

undefined * FUN_100053284(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_1000b14d8;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000100d0(0x1000c6578,&UNK_10008c5e8);
    puVar5 = puVar8;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    _swift_retain();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      _swift_bridgeObjectRetain(uVar3);
      _objc_retain();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100035e00();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000533c8);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000533cc);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Entry: 1000532d4; end: 1000533cb;  */

undefined * FUN_1000532d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_1000b14d8;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000100d0(param_2,param_3);
    puVar5 = puVar8;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    _swift_retain();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      _swift_bridgeObjectRetain(uVar3);
      _objc_retain();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100035e00();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000533c8);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000533cc);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Entry: 1000533cc; end: 100053613;  */

undefined * FUN_1000533cc(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  
  puVar6 = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptyDictionarySingleton_1000b14d8;
  if (puVar6 != (undefined *)0x0) {
    func_0x0001000100d0(0x1000c6878,&UNK_10008c760);
    puVar2 = puVar6;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      puVar5 = &uStack_a8;
      FUN_100054b34(param_1,puVar5,0x1000c6678,&UNK_10008c660);
      puVar3 = &uStack_a8;
      FUN_100052f84();
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100053500);
        (*pcVar1)();
      }
      uVar4 = (ulong)puVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar4 + 0x40) =
           *(ulong *)(puVar2 + uVar4 + 0x40) | 1L << ((ulong)puVar3 & 0x3f);
      puVar5 = (undefined8 *)(*(long *)(puVar2 + 0x30) + (long)puVar3 * 0x28);
      puVar5[4] = uStack_88;
      puVar5[1] = uStack_a0;
      *puVar5 = uStack_a8;
      puVar5[3] = uStack_90;
      puVar5[2] = uStack_98;
      FUN_100036784(auStack_80,*(long *)(puVar2 + 0x38) + (long)puVar3 * 0x20);
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100053504);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      param_1 = param_1 + 0x48;
      puVar6 = puVar6 + -1;
    } while (puVar6 != (undefined *)0x0);
    _swift_release(puVar2);
  }
  return puVar2;
}



/* Entry: 100053614; end: 1000547eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100053614(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  long extraout_x8;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  undefined1 *puVar19;
  long lVar20;
  long alStack_1a0 [8];
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long alStack_a0 [3];
  undefined8 uStack_88;
  
  lVar17 = 0x1000c6778;
  func_0x0001000100d0(0x1000c6778,&UNK_10008c810);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar17 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = -extraout_x8;
  puVar19 = auStack_160 + lVar6;
  puVar16 = &UNK_1000b4cc8;
  _swift_allocObject(&UNK_1000b4cc8,0x20,7);
  *(undefined8 *)(puVar16 + 0x10) = param_5;
  *(undefined8 *)(puVar16 + 0x18) = param_6;
  lVar13 = 2;
  _swift_retain_n(param_6);
  func_0x0001000869c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == (undefined *)0x0) {
LAB_1000537a8:
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000056,0x800000010009e420);
    _objc_release();
    *puVar19 = 1;
    _swift_storeEnumTagMultiPayload(puVar19,lVar17,1);
    func_0x000100059210(puVar19,param_5,param_6);
    FUN_100054aec(puVar19,0x1000c6778,&UNK_10008c810);
  }
  else {
    puVar3 = param_3;
    func_0x000100086b40();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
LAB_1000537a0:
      _objc_release(param_3);
      goto LAB_1000537a8;
    }
    puVar11 = puVar3;
    uStack_e8 = param_5;
    puStack_d8 = puVar16;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = lVar13;
    puStack_f0 = puVar11;
    _objc_release(puVar3);
    puVar16 = *(undefined **)(param_4 + 0x18);
    lVar18 = *(long *)(param_4 + 0x20);
    _swift_bridgeObjectRetain(lVar18);
    puStack_e0 = param_3;
    func_0x0001000866c0();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar18;
    if (param_3 != (undefined *)0x0) {
      puVar3 = param_3;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(param_3);
      lVar20 = lVar2;
      if (lVar18 == 0) goto joined_r0x000100053770;
      if (lVar2 == 0) goto LAB_100053780;
      if ((puVar16 == puVar3) && (lVar18 == lVar2)) {
        _swift_bridgeObjectRelease(lVar18);
        _swift_bridgeObjectRelease(lVar2);
        goto LAB_100053868;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (puVar16,lVar18,puVar3,lVar2,0);
      _swift_bridgeObjectRelease(lVar18);
      _swift_bridgeObjectRelease(lVar2);
      if (((ulong)puVar16 & 1) != 0) goto LAB_100053868;
LAB_100053788:
      _swift_bridgeObjectRelease(lVar13);
      puVar16 = puStack_d8;
      param_3 = puStack_e0;
      param_5 = uStack_e8;
      goto LAB_1000537a0;
    }
joined_r0x000100053770:
    lVar18 = lVar20;
    if (lVar18 != 0) {
LAB_100053780:
      _swift_bridgeObjectRelease(lVar18);
      goto LAB_100053788;
    }
LAB_100053868:
    lVar18 = *(long *)(param_4 + 0xd0);
    if (lVar18 == 0) {
      puVar3 = (undefined *)0x0;
      FUN_100053070(0,1,1,PTR___swiftEmptyArrayStorage_1000b14d0);
      uVar1 = *(ulong *)(puVar3 + 0x10);
      puVar16 = puVar3;
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
        puVar16 = (undefined *)(ulong)(1 < *(ulong *)(puVar3 + 0x18));
        FUN_100053070(puVar16,uVar1 + 1,1,puVar3);
      }
      *(ulong *)(puVar16 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar16 + uVar1 * 0x10 + 0x20) = 0xd00000000000001c;
      *(undefined8 *)(puVar16 + uVar1 * 0x10 + 0x28) = 0x800000010009e480;
      if (*(long *)(param_4 + 0x50) != 0) goto LAB_100053a18;
LAB_10005398c:
      puVar3 = puVar16;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar11 = puVar16;
      if (((ulong)puVar3 & 1) == 0) {
        puVar11 = (undefined *)0x0;
        FUN_100053070(0,*(long *)(puVar16 + 0x10) + 1,1,puVar16);
      }
      uVar1 = *(ulong *)(puVar11 + 0x10);
      puVar16 = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar1) {
        puVar16 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
        FUN_100053070(puVar16,uVar1 + 1,1,puVar11);
      }
      *(ulong *)(puVar16 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar16 + uVar1 * 0x10 + 0x20) = 0xd000000000000012;
      *(undefined8 *)(puVar16 + uVar1 * 0x10 + 0x28) = 0x800000010009e4a0;
      if (lVar18 == 0) goto LAB_1000539d0;
LAB_100053a1c:
      puVar11 = puStack_f0;
      lVar6 = lVar13;
      FUN_10005be84();
      _swift_bridgeObjectRelease(lVar13);
      puVar3 = puStack_d8;
      if (puVar11 == (undefined *)0x0) {
LAB_100053acc:
        puVar3 = puStack_d8;
        puVar11 = puVar16;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar9 = puVar16;
        if (((ulong)puVar11 & 1) == 0) {
          puVar9 = (undefined *)0x0;
          FUN_100053070(0,*(long *)(puVar16 + 0x10) + 1,1,puVar16);
        }
        uVar1 = *(ulong *)(puVar9 + 0x10);
        puVar16 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
          puVar16 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
          FUN_100053070(puVar16,uVar1 + 1,1,puVar9);
        }
        *(ulong *)(puVar16 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puVar16 + uVar1 * 0x10 + 0x20) = 0xd000000000000012;
        *(undefined8 *)(puVar16 + uVar1 * 0x10 + 0x28) = 0x800000010009e4c0;
        puVar11 = (undefined *)0x0;
LAB_100053b10:
        puVar9 = puVar11;
        puVar11 = puVar16;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar10 = puVar16;
        if (((ulong)puVar11 & 1) == 0) {
          puVar10 = (undefined *)0x0;
          FUN_100053070(0,*(long *)(puVar16 + 0x10) + 1,1,puVar16);
        }
        uVar1 = *(ulong *)(puVar10 + 0x10);
        puVar16 = puVar10;
        if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
          puVar16 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
          FUN_100053070(puVar16,uVar1 + 1,1,puVar10);
        }
        *(ulong *)(puVar16 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puVar16 + uVar1 * 0x10 + 0x20) = 0xd000000000000010;
        *(undefined8 *)(puVar16 + uVar1 * 0x10 + 0x28) = 0x800000010009e4e0;
        puVar11 = puVar9;
        if (puVar9 != (undefined *)0x0) goto LAB_100053b54;
      }
      else {
        puVar9 = puVar11;
        _objc_retain();
        puVar10 = puVar9;
        func_0x000100086ee0();
        if (((ulong)puVar10 & 1) == 0) {
          puVar10 = puVar16;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar12 = puVar16;
          if (((ulong)puVar10 & 1) == 0) {
            lVar6 = *(long *)(puVar16 + 0x10) + 1;
            puVar12 = (undefined *)0x0;
            FUN_100053070(0,lVar6,1,puVar16);
          }
          uVar1 = *(ulong *)(puVar12 + 0x10);
          lVar13 = uVar1 + 1;
          puVar16 = puVar12;
          if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar1) {
            puVar16 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
            lVar6 = lVar13;
            FUN_100053070(puVar16,lVar13,1,puVar12);
          }
          *(long *)(puVar16 + 0x10) = lVar13;
          *(undefined8 *)(puVar16 + uVar1 * 0x10 + 0x20) = 0xd000000000000011;
          *(undefined8 *)(puVar16 + uVar1 * 0x10 + 0x28) = 0x800000010009e560;
        }
        _objc_release(puVar9);
        _objc_retain();
        FUN_10005c034();
        _objc_release(puVar9);
        if (lVar6 == 0) goto LAB_100053b10;
        _swift_bridgeObjectRelease(lVar6);
LAB_100053b54:
        _objc_retain();
        puVar10 = puVar9;
        func_0x000100087900();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        puVar9 = puVar11;
        if (puVar10 != (undefined *)0x0) {
          _objc_release(puVar10);
          goto LAB_100053bd0;
        }
      }
      puVar11 = puVar16;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar10 = puVar16;
      if (((ulong)puVar11 & 1) == 0) {
        puVar10 = (undefined *)0x0;
        FUN_100053070(0,*(long *)(puVar16 + 0x10) + 1,1,puVar16);
      }
      uVar1 = *(ulong *)(puVar10 + 0x10);
      puVar16 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
        puVar16 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
        FUN_100053070(puVar16,uVar1 + 1,1,puVar10);
      }
      *(ulong *)(puVar16 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar16 + uVar1 * 0x10 + 0x20) = 0x6920644972657375;
      *(undefined8 *)(puVar16 + uVar1 * 0x10 + 0x28) = 0xed00006c696e2073;
LAB_100053bd0:
      puStack_d0 = (undefined *)0x0;
      uStack_c8 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x55);
      __sSS6appendyySSF(0xd000000000000053,0x800000010009e500);
      puVar11 = PTR___sSSN_1000b1180;
      __sSa11descriptionSSvg(puVar16,PTR___sSSN_1000b1180);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar11);
      uVar7 = uStack_c8;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_d0,uStack_c8);
      _objc_release();
      _swift_bridgeObjectRelease(uVar7);
      *puVar19 = 0;
      _swift_storeEnumTagMultiPayload(puVar19,lVar17,1);
      func_0x000100059210(puVar19,uStack_e8,param_6);
      _objc_release(puStack_e0);
      _objc_release(puVar9);
      FUN_100054aec(puVar19,0x1000c6778,&UNK_10008c810);
      _swift_release(param_6);
      _swift_release(puVar3);
      _swift_bridgeObjectRelease(puVar16);
      return;
    }
    puVar16 = *(undefined **)(param_4 + 0x50);
    if (puVar16 == (undefined *)0x0) {
LAB_100053a08:
      puVar16 = PTR___swiftEmptyArrayStorage_1000b14d0;
      if (*(long *)(param_4 + 0x50) == 0) goto LAB_10005398c;
LAB_100053a18:
      if (lVar18 != 0) goto LAB_100053a1c;
LAB_1000539d0:
      _swift_bridgeObjectRelease(lVar13);
      goto LAB_100053acc;
    }
    lVar2 = lVar18;
    _objc_retain();
    _objc_retain();
    puVar3 = puStack_f0;
    lVar20 = lVar13;
    FUN_10005be84();
    if (puVar3 == (undefined *)0x0) {
      _objc_release(lVar2);
LAB_100053a04:
      _objc_release(puVar16);
      goto LAB_100053a08;
    }
    puVar11 = puVar3;
    func_0x000100086ee0();
    if ((((ulong)puVar11 & 1) == 0) || (FUN_10005c034(), lVar20 == 0)) {
      _objc_release(lVar2);
      _objc_release(puVar16);
      puVar16 = puVar3;
      goto LAB_100053a04;
    }
    puVar9 = puVar3;
    lVar14 = lVar20;
    puStack_f8 = puVar11;
    func_0x000100087900();
    _objc_retainAutoreleasedReturnValue();
    if (puVar9 == (undefined *)0x0) {
      _objc_release(lVar2);
      _objc_release(puVar16);
      _objc_release(puVar3);
      _swift_bridgeObjectRelease(lVar20);
      goto LAB_100053a08;
    }
    puVar11 = puVar9;
    puStack_108 = puVar16;
    lStack_100 = lVar20;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar18 = lVar14;
    puStack_110 = puVar11;
    _swift_bridgeObjectRelease(lVar13);
    _objc_release(puVar9);
    puVar16 = puVar3;
    func_0x000100087920();
    _objc_retainAutoreleasedReturnValue();
    if (puVar16 == (undefined *)0x0) {
      puStack_120 = (undefined *)0x0;
      lVar20 = 0;
      lVar13 = lVar18;
    }
    else {
      puVar11 = puVar16;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      lVar13 = lVar18;
      puStack_120 = puVar11;
      _objc_release(puVar16);
      lVar20 = lVar18;
    }
    puVar16 = puVar3;
    func_0x000100086520();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar3;
    puStack_f0 = puVar16;
    func_0x0001000878a0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar11 == (undefined *)0x0) {
      puStack_128 = (undefined *)0x0;
      lStack_118 = 0;
    }
    else {
      puVar16 = puVar11;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      puStack_128 = puVar16;
      lStack_118 = lVar13;
      _objc_release(puVar11);
    }
    lVar13 = lStack_100;
    if (*(char *)(*(long *)(param_4 + 0x10) + _DAT_1000c76c0) == '\x01') {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000051,0x800000010009e6a0);
      _objc_release();
      puVar11 = puStack_d8;
      lStack_130 = lVar20;
      *(code **)((long)alStack_1a0 + lVar6 + 0x30) = FUN_100054810;
      *(undefined **)((long)alStack_1a0 + lVar6 + 0x38) = puVar11;
      *(undefined8 *)((long)alStack_1a0 + lVar6 + 0x20) = 1;
      *(undefined8 *)((long)alStack_1a0 + lVar6 + 0x28) = 0;
      *(undefined8 *)((long)alStack_1a0 + lVar6 + 0x18) = 0;
      lVar17 = lStack_118;
      *(long *)((long)alStack_1a0 + lVar6 + 0x10) = lStack_118;
      puVar16 = puStack_f0;
      FUN_100051d6c(puStack_f8,lVar13,puStack_110,lVar14,puStack_120,lVar20,puStack_f0,puStack_128);
      _swift_release(param_6);
      _swift_release(puVar11);
      _objc_release(puStack_e0);
      _swift_bridgeObjectRelease(lVar14);
      _swift_bridgeObjectRelease(lVar13);
      _objc_release(puStack_108);
      _objc_release(puVar16);
      _objc_release(puVar3);
      _objc_release(lVar2);
      _swift_bridgeObjectRelease(lVar17);
                    /* WARNING: Could not recover jumptable at 0x000100086054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_1000b1550)(lStack_130);
      return;
    }
    FUN_100054b34(param_4 + 0x80,&puStack_d0,0x1000c6998,&UNK_10008c818);
    if (puStack_b8 == (undefined *)0x0) {
      FUN_100054aec(&puStack_d0,0x1000c6998,&UNK_10008c818);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000060,0x800000010009e580);
      _objc_release();
      *puVar19 = 0;
      _swift_storeEnumTagMultiPayload(puVar19,lVar17,1);
      func_0x000100059210(puVar19,uStack_e8,param_6);
      _objc_release(puStack_e0);
      _swift_bridgeObjectRelease(lVar14);
      _swift_bridgeObjectRelease(lVar13);
      _objc_release(puStack_108);
      _objc_release(puStack_f0);
      _objc_release(puVar3);
      _objc_release(lVar2);
      _swift_bridgeObjectRelease(lStack_118);
      _swift_bridgeObjectRelease(lVar20);
      FUN_100054aec(puVar19,0x1000c6778,&UNK_10008c810);
      _swift_release(param_6);
      puVar16 = puStack_d8;
      goto LAB_100053810;
    }
    lStack_148 = lVar2;
    FUN_1000550a4(&puStack_d0,alStack_a0);
    puStack_d0 = (undefined *)0x0;
    uStack_c8 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x48);
    __sSS6appendyySSF(0xd000000000000046,0x800000010009e5f0);
    puVar10 = puStack_110;
    __sSS6appendyySSF(puStack_110,lVar14);
    uVar7 = uStack_c8;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_d0,uStack_c8);
    _objc_release();
    _swift_bridgeObjectRelease(uVar7);
    plVar4 = alStack_a0;
    func_0x000100013de4(plVar4,uStack_88);
    puVar16 = &UNK_1000b4cf0;
    _swift_allocObject(&UNK_1000b4cf0,0x18,7);
    _swift_weakInit(puVar16 + 0x10,param_4);
    lVar18 = *plVar4;
    puVar11 = &UNK_1000b4d18;
    _swift_allocObject(&UNK_1000b4d18,0x20,7);
    *(undefined8 *)(puVar11 + 0x10) = uStack_e8;
    *(undefined8 *)(puVar11 + 0x18) = param_6;
    puVar9 = &UNK_1000b4d40;
    uVar15 = 7;
    _swift_allocObject(&UNK_1000b4d40,0x88);
    puVar5 = puStack_f0;
    puVar12 = puStack_108;
    *(undefined **)(puVar9 + 0x10) = puVar16;
    *(undefined **)(puVar9 + 0x18) = puVar10;
    *(long *)(puVar9 + 0x20) = lVar14;
    *(undefined8 *)(puVar9 + 0x28) = 0x100055114;
    *(undefined **)(puVar9 + 0x30) = puVar11;
    *(undefined **)(puVar9 + 0x38) = puStack_f8;
    *(long *)(puVar9 + 0x40) = lVar13;
    *(undefined **)(puVar9 + 0x48) = puStack_120;
    *(long *)(puVar9 + 0x50) = lVar20;
    *(undefined **)(puVar9 + 0x58) = puStack_f0;
    *(undefined **)(puVar9 + 0x60) = puStack_108;
    *(undefined8 *)(puVar9 + 0x68) = param_1;
    *(undefined8 *)(puVar9 + 0x70) = param_2;
    *(undefined **)(puVar9 + 0x78) = puStack_128;
    *(long *)(puVar9 + 0x80) = lStack_118;
    lVar17 = *(long *)(lVar18 + 0x58);
    lStack_150 = lVar18;
    lStack_140 = lVar14;
    puStack_138 = puVar16;
    if (lVar17 == 0) {
      lStack_130 = lVar20;
      _swift_bridgeObjectRetain_n(lStack_118,2);
      _swift_retain_n(param_6,2);
      _objc_retain(puVar12);
      _swift_retain_n(puStack_138,3);
      lVar17 = lStack_140;
      _swift_bridgeObjectRetain_n(lStack_140,3);
      _swift_bridgeObjectRetain_n(lStack_100,2);
      _swift_bridgeObjectRetain_n(lVar20,2);
      _objc_retain(puVar5);
      _swift_retain(puStack_d8);
      _swift_retain(puVar11);
      _objc_retain(puVar12);
      _objc_retain(puVar5);
LAB_100054224:
      puStack_d0 = (undefined *)0x0;
      uStack_c8 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x60);
      __sSS6appendyySSF(0xd00000000000005e,0x800000010009e640);
      __sSS6appendyySSF(puStack_110,lVar17);
      uVar7 = uStack_c8;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_d0,uStack_c8);
      _objc_release();
      _swift_bridgeObjectRelease(uVar7);
      _swift_retain(param_6);
      puVar5 = puStack_108;
      _objc_retain();
      puVar16 = puStack_138;
      _swift_retain(puStack_138);
      _swift_bridgeObjectRetain(lVar17);
      lVar18 = lStack_100;
      _swift_bridgeObjectRetain(lStack_100);
      lVar17 = lStack_130;
      _swift_bridgeObjectRetain(lStack_130);
      puVar12 = puStack_f0;
      puVar10 = puStack_f0;
      _objc_retain();
      lVar13 = lStack_118;
      puStack_158 = puVar10;
      _swift_bridgeObjectRetain(lStack_118);
      _swift_retain(puVar11);
      _swift_retain(puVar9);
      *(undefined8 *)((long)alStack_1a0 + lVar6 + 0x38) = param_6;
      uVar7 = uStack_e8;
      *(long *)((long)alStack_1a0 + lVar6 + 0x28) = lVar13;
      *(undefined8 *)((long)alStack_1a0 + lVar6 + 0x30) = uVar7;
      puVar10 = puStack_128;
      *(undefined **)((long)alStack_1a0 + lVar6 + 0x18) = puVar5;
      *(undefined **)((long)alStack_1a0 + lVar6 + 0x20) = puVar10;
      *(long *)((long)alStack_1a0 + lVar6 + 8) = lVar17;
      *(undefined **)((long)alStack_1a0 + lVar6 + 0x10) = puVar12;
      *(undefined **)((long)alStack_1a0 + lVar6) = puStack_120;
      lVar6 = lStack_140;
      FUN_10004c1fc(param_1,param_2,puStack_110,lStack_140,lStack_150,puVar16,puStack_110,lStack_140
                    ,puStack_f8,lVar18);
      _swift_release(puVar16);
      _swift_release_n(puVar9,2);
      _swift_release(puVar11);
      _swift_bridgeObjectRelease(lVar18);
      _swift_bridgeObjectRelease(lVar17);
      _objc_release(puStack_158);
      _objc_release(puVar5);
      _swift_bridgeObjectRelease(lVar13);
      _swift_release(param_6);
    }
    else {
      lStack_130 = lVar20;
      _swift_bridgeObjectRetain_n(lStack_118,2);
      _swift_retain_n(param_6,2);
      _objc_retain(puVar12);
      _swift_retain_n(puStack_138,3);
      lVar13 = lStack_140;
      _swift_bridgeObjectRetain_n(lStack_140,3);
      _swift_bridgeObjectRetain_n(lStack_100,2);
      _swift_bridgeObjectRetain_n(lVar20,2);
      _objc_retain(puVar5);
      _swift_retain(puStack_d8);
      puStack_158 = puVar11;
      _swift_retain(puVar11);
      _objc_retain();
      _objc_retain(puVar12);
      _objc_retain(puVar5);
      puVar16 = puStack_110;
      __s24SCUUIDHelperSwiftSupport12SCUUIDToBitsys6UInt64V04highE0_AD03lowE0tSgSSF
                (puStack_110,lVar13);
      if ((uVar15 & 0xff) == 1) {
        _objc_release(lVar17);
        puVar11 = puStack_158;
        lVar17 = lStack_140;
        goto LAB_100054224;
      }
      puVar12 = PTR__OBJC_CLASS___SCCOREUUID_1000c2168;
      _objc_allocWithZone();
      func_0x000100086bc0();
      func_0x0001000873c0();
      func_0x000100087400(puVar12);
      puVar5 = PTR_PTR_1000c2170;
      _objc_allocWithZone(PTR_PTR_1000c2170);
      func_0x000100086bc0();
      lVar6 = 0x1000c69a0;
      func_0x0001000100d0(0x1000c69a0,&UNK_10008c820);
      _swift_allocObject();
      *(undefined8 *)(lVar6 + 0x18) = 2;
      *(undefined8 *)(lVar6 + 0x10) = 1;
      uVar7 = 0;
      FUN_1000549b4(0,0x1000c69a8,&PTR__OBJC_CLASS___SCCOREUUID_1000c2168);
      *(undefined8 *)(lVar6 + 0x38) = uVar7;
      *(undefined **)(lVar6 + 0x20) = puVar12;
      FUN_1000549b4(0,0x1000c69b0,&PTR__OBJC_CLASS___NSMutableArray_1000c2178);
      _objc_retain(puVar12);
      __sSo7NSArrayC10FoundationE12arrayLiteralABypd_tcfC(lVar6);
      func_0x0001000873a0(puVar5);
      _objc_release(lVar6);
      func_0x0001000873e0(puVar5);
      puVar11 = &UNK_1000b4d68;
      _swift_allocObject(&UNK_1000b4d68,0x18,7);
      _swift_weakInit(puVar11 + 0x10,lStack_150);
      puVar10 = &UNK_1000b4d90;
      _swift_allocObject(&UNK_1000b4d90,0x40,7);
      lVar6 = lStack_140;
      *(long *)(puVar10 + 0x10) = lVar17;
      *(undefined **)(puVar10 + 0x18) = puVar11;
      *(undefined **)(puVar10 + 0x20) = puVar16;
      *(long *)(puVar10 + 0x28) = lStack_140;
      *(undefined8 *)(puVar10 + 0x30) = 0x100054874;
      *(undefined **)(puVar10 + 0x38) = puVar9;
      pcStack_b0 = FUN_10005491c;
      puStack_d0 = PTR___NSConcreteStackBlock_1000b0c60;
      uStack_c8 = 0x42000000;
      pcStack_c0 = FUN_10004f100;
      puStack_b8 = &UNK_1000b4da8;
      ppuVar8 = &puStack_d0;
      puStack_a8 = puVar10;
      __Block_copy(ppuVar8);
      puVar16 = puStack_a8;
      _swift_bridgeObjectRetain(lVar6);
      _objc_retain(lVar17);
      _swift_retain(puVar9);
      _swift_release(puVar16);
      func_0x000100086a40(lVar17);
      __Block_release(ppuVar8);
      _swift_release(puStack_138);
      _swift_release(puVar9);
      _objc_release(lVar17);
      _objc_release(puVar12);
      _objc_release(puVar5);
      lVar13 = lStack_118;
      puVar11 = puStack_158;
      lVar17 = lStack_130;
      lVar18 = lStack_100;
    }
    puVar16 = puStack_d8;
    puVar10 = puStack_f0;
    puVar9 = puStack_108;
    _swift_release(puStack_d8);
    _swift_release_n(puStack_138,2);
    _objc_release(puStack_e0);
    _swift_bridgeObjectRelease_n(lVar18,2);
    _swift_bridgeObjectRelease_n(lVar17,2);
    _objc_release(puVar9);
    _objc_release(puVar9);
    _swift_bridgeObjectRelease_n(lVar13,2);
    _objc_release(puVar10);
    _objc_release(puVar10);
    _objc_release(puVar3);
    _objc_release(lStack_148);
    _swift_release(param_6);
    _swift_release(puVar11);
    _swift_bridgeObjectRelease_n(lVar6,3);
    FUN_100012b94(alStack_a0);
  }
  _swift_release(param_6);
LAB_100053810:
  _swift_release(puVar16);
  return;
}



/* Entry: 1000547ec; end: 10005480f;  */

void FUN_1000547ec(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 100054810; end: 100054817;  */

void FUN_100054810(undefined8 param_1)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar8;
  char *pcVar9;
  long lVar10;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  lVar10 = 0x1000c6778;
  func_0x0001000100d0(0x1000c6778,&UNK_10008c810,*(undefined8 *)(unaff_x20 + 0x18));
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar9 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar3 = 0;
  FUN_10005a998();
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar8 = (long)pcVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x00010005b1e8(param_1,pcVar9,0x1000c6778,&UNK_10008c810);
  pcVar4 = pcVar9;
  _swift_getEnumCaseMultiPayload(pcVar9,lVar10);
  if ((int)pcVar4 == 1) {
    cVar2 = *pcVar9;
    __s10Foundation4DateVACycfC(lVar8);
    lVar10 = (long)*(int *)(lVar3 + 0x14);
    if (cVar2 != '\x01') {
      FUN_10005b118();
      puVar6 = &UNK_1000b5668;
      _swift_allocError(&UNK_1000b5668,pcVar4,0,0);
      *pcVar4 = cVar2;
      *(undefined **)(lVar8 + lVar10) = puVar6;
      uVar5 = 0x1000c69e0;
      func_0x0001000100d0(0x1000c69e0,&UNK_10008c9c0);
      uVar7 = 1;
      goto LAB_1000593b8;
    }
    uVar5 = 0;
    FUN_10005ee88(0);
    _swift_storeEnumTagMultiPayload(lVar8 + lVar10,uVar5,2);
    uVar5 = 0x1000c69e0;
    func_0x0001000100d0(0x1000c69e0,&UNK_10008c9c0);
  }
  else {
    lVar10 = (long)*(int *)(lVar3 + 0x14);
    func_0x00010005bb40(pcVar9,lVar8 + lVar10,FUN_10005ee88);
    __s10Foundation4DateVACycfC(lVar8);
    uVar5 = 0x1000c69e0;
    func_0x0001000100d0(0x1000c69e0,&UNK_10008c9c0);
  }
  uVar7 = 0;
LAB_1000593b8:
  _swift_storeEnumTagMultiPayload(lVar8 + lVar10,uVar5,uVar7);
  (*pcVar1)(lVar8);
  FUN_10005bac0(lVar8,FUN_10005a998);
  return;
}



/* Entry: 100054818; end: 10005491b;  */

void FUN_100054818(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x58));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x60));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 10005491c; end: 100054947;  */

void FUN_10005491c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  int iVar13;
  long unaff_x20;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  float fVar19;
  float fVar20;
  long alStack_1a0 [4];
  undefined8 uStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  code *pcStack_110;
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [8];
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 auStack_90 [32];
  
  lVar10 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  pcStack_110 = *(code **)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar5 = 0x1000c6758;
  func_0x0001000100d0(0x1000c6758,&UNK_10008c6d0,*(undefined8 *)(unaff_x20 + 0x10));
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = (long)alStack_1a0 - extraout_x8;
  lVar5 = 0;
  FUN_10005cf80();
  lVar17 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar17 + 0x40));
  puVar18 = (undefined8 *)(lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  lVar6 = 0;
  __s10Foundation4DateVMa();
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lStack_138 = (long)puVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  if (param_2 != 0) {
    lStack_c0 = 0;
    uStack_b8 = 0xe000000000000000;
    _swift_errorRetain(param_2);
    __ss11_StringGutsV4growyySiF(0x47);
    __sSS6appendyySSF(0xd000000000000041,0x800000010009df20);
    __sSS6appendyySSF(lVar1,uVar3);
    __sSS6appendyySSF(0x203a,0xe200000000000000);
    _swift_getErrorValue(param_2,auStack_f0,auStack_108);
    uVar9 = uStack_f8;
    __ss5ErrorP10FoundationE20localizedDescriptionSSvg(uStack_100,uStack_f8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar9);
    uVar9 = uStack_b8;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_c0,uStack_b8);
    _objc_release();
    _swift_bridgeObjectRelease(uVar9);
    _swift_beginAccess(lVar10 + 0x10,&lStack_c0,0,0);
    lVar10 = lVar10 + 0x10;
    _swift_weakLoadStrong();
    if (lVar10 != 0) {
      _swift_errorRetain(param_2);
      _swift_retain(uVar7);
      FUN_10004d208(lVar1,uVar3,lVar10,pcStack_110,uVar7,param_2);
      _swift_errorRelease(param_2);
      _swift_release(uVar7);
      _swift_errorRelease(param_2);
      _swift_release(lVar10);
      return;
    }
    _swift_errorRelease(param_2);
    return;
  }
  puStack_140 = puVar18;
  lStack_130 = extraout_x12;
  lStack_128 = lVar6;
  lStack_120 = lVar17;
  lStack_118 = lVar5;
  _swift_beginAccess(lVar10 + 0x10,auStack_90,0,0);
  lVar5 = lVar10 + 0x10;
  _swift_weakLoadStrong();
  if (lVar5 == 0) goto LAB_10004ba64;
  if (param_1 == 0) {
    _swift_release(lVar5);
    goto LAB_10004ba64;
  }
  lVar6 = param_1;
  uStack_148 = uVar7;
  _objc_retain();
  lVar17 = lVar6;
  func_0x0001000869e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar17 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10004c0ac);
    (*pcVar4)();
  }
  lVar16 = lVar17;
  func_0x000100086960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar17);
  if (lVar16 == 0) {
    uStack_d8 = 0;
    lStack_e0 = 0;
    lStack_c8 = 0;
    uStack_d0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&lStack_e0,lVar16);
    _swift_unknownObjectRelease(lVar16);
  }
  uStack_b8 = uStack_d8;
  lStack_c0 = lStack_e0;
  lStack_a8 = lStack_c8;
  uStack_b0 = uStack_d0;
  if (lStack_c8 == 0) {
    _swift_release(lVar5);
LAB_10004b9c0:
    _objc_release(lVar6);
    func_0x00010004dd7c(&lStack_c0,0x1000c49f8,&UNK_1000899e0);
  }
  else {
    uVar7 = 0;
    FUN_10004dbf4(0,0x1000c6768,&PTR_PTR_1000c2130);
    plVar8 = &lStack_e8;
    _swift_dynamicCast(plVar8,&lStack_c0,PTR___sypN_1000b14c8 + 8,uVar7,6);
    lVar17 = lStack_e8;
    if (((ulong)plVar8 & 1) == 0) {
      _swift_release(lVar5);
    }
    else {
      lVar16 = lStack_e8;
      func_0x000100086fa0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar16 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10004c0b0);
        (*pcVar4)();
      }
      lVar14 = lVar16;
      func_0x000100086960();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar16);
      if (lVar14 == 0) {
        uStack_d8 = 0;
        lStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&lStack_e0,lVar14);
        _swift_unknownObjectRelease(lVar14);
      }
      uStack_b8 = uStack_d8;
      lStack_c0 = lStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        _swift_release(lVar5);
        _objc_release(lVar17);
        goto LAB_10004b9c0;
      }
      uVar9 = 0;
      uVar7 = uStack_d0;
      FUN_10004dbf4(0,0x1000c6770,&PTR_PTR_1000c21f8);
      fVar19 = (float)uVar7;
      plVar8 = &lStack_e8;
      _swift_dynamicCast(plVar8,&lStack_c0,PTR___sypN_1000b14c8 + 8,uVar9,6);
      if (((ulong)plVar8 & 1) == 0) {
        _swift_release(lVar5);
      }
      else {
        lVar16 = lVar17;
        func_0x000100087940();
        _objc_retainAutoreleasedReturnValue();
        if (lVar16 == 0) {
          _swift_release(lVar5);
          _objc_release(lVar6);
          _objc_release(lVar17);
          lVar6 = lStack_e8;
          goto LAB_10004ba60;
        }
        lVar14 = lStack_e8;
        lStack_150 = lVar16;
        func_0x000100087880();
        _objc_retainAutoreleasedReturnValue();
        if (lVar14 == 0) {
          _swift_release(lVar5);
          _objc_release(lStack_150);
        }
        else {
          lStack_158 = lStack_e8;
          lStack_c0 = 0;
          __sSa10FoundationE34_conditionallyBridgeFromObjectiveC_6resultSbSo7NSArrayC_SayxGSgztFZ();
          _objc_release(lVar14);
          lVar16 = lStack_c0;
          if (lStack_c0 != 0) {
            if (*(long *)(lStack_c0 + 0x10) != 0) {
              uVar7 = *(undefined8 *)(lStack_c0 + 0x20);
              uStack_160 = *(undefined8 *)(lStack_c0 + 0x28);
              if (*(long *)(lStack_c0 + 0x10) == 1) {
                _swift_bridgeObjectRetain(uStack_160);
                _swift_bridgeObjectRelease(lVar16);
                uVar9 = 0;
                alStack_1a0[2] = 0;
              }
              else {
                uVar9 = *(undefined8 *)(lStack_c0 + 0x30);
                uVar2 = *(undefined8 *)(lStack_c0 + 0x38);
                _swift_bridgeObjectRetain(uStack_160);
                alStack_1a0[2] = uVar2;
                _swift_bridgeObjectRetain(uVar2);
                _swift_bridgeObjectRelease(lVar16);
              }
              lVar10 = lStack_158;
              lVar16 = lStack_158;
              func_0x000100086ae0();
              alStack_1a0[3] = uVar9;
              uStack_180 = uVar7;
              if ((int)lVar16 == 0) {
                lVar16 = 0;
                lVar14 = 0;
              }
              else {
                func_0x000100086f40();
                _objc_retainAutoreleasedReturnValue();
                if (lVar10 != 0) {
                  lVar16 = lVar10;
                  func_0x0001000876c0();
                  if ((0 < (int)lVar16) && (lVar16 = lVar10, func_0x000100087740(), 0 < (int)lVar16)
                     ) {
                    lVar16 = lVar10;
                    func_0x0001000876c0();
                    FUN_10004c0b4();
                    lVar14 = lVar10;
                    func_0x000100087740();
                    FUN_10004c0b4();
                    _objc_release(lVar10);
                    lVar10 = lStack_158;
                    goto LAB_10004bcc0;
                  }
                  _objc_release(lVar10);
                }
                lVar16 = 0;
                lVar14 = 0;
                lVar10 = lStack_158;
              }
LAB_10004bcc0:
              iVar13 = (int)lVar10;
              func_0x00010004dc34(lVar16,lVar14);
              func_0x000100086ac0();
              lStack_168 = lVar16;
              lVar10 = lVar14;
              if (iVar13 != 0) {
                lVar11 = lStack_158;
                func_0x0001000866e0();
                _objc_retainAutoreleasedReturnValue();
                if (lVar11 != 0) {
                  lVar12 = lVar11;
                  func_0x0001000876c0();
                  if (((int)lVar12 < 1) || (lVar12 = lVar11, func_0x000100087740(), (int)lVar12 < 1)
                     ) {
                    _objc_release(lVar11);
                  }
                  else {
                    lVar12 = lVar11;
                    func_0x0001000876c0();
                    FUN_10004c0b4();
                    lVar10 = lVar11;
                    lStack_168 = lVar12;
                    func_0x000100087740();
                    FUN_10004c0b4();
                    func_0x00010004dce0(lVar16,lVar14);
                    _objc_release(lVar11);
                  }
                }
              }
              lVar11 = lStack_150;
              lStack_178 = lVar17;
              alStack_1a0[1] = lVar16;
              lStack_170 = lVar5;
              func_0x000100086f20(lStack_150);
              fVar20 = fVar19;
              func_0x000100086f80(lVar11);
              lVar5 = lVar11;
              func_0x000100087700();
              _objc_retainAutoreleasedReturnValue();
              if (lVar5 != 0) {
                lVar16 = lVar5;
                func_0x000100087720();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar5);
                func_0x000100087840(lVar11);
                lVar5 = lStack_138;
                __s10Foundation4DateV21timeIntervalSince1970ACSd_tcfC
                          (lStack_138,(double)(lVar11 / 1000));
                lVar17 = lStack_118;
                puVar18 = puStack_140;
                (**(code **)(lStack_130 + 0x10))
                          ((long)puStack_140 + (long)*(int *)(lStack_118 + 0x20),lVar5,lStack_128);
                uVar7 = uStack_160;
                *puVar18 = uStack_180;
                puVar18[1] = uVar7;
                lVar5 = alStack_1a0[2];
                puVar18[2] = alStack_1a0[3];
                puVar18[3] = lVar5;
                puVar18[4] = (double)fVar19;
                puVar18[5] = (double)fVar20;
                puVar18[6] = lVar16;
                *(undefined1 *)((long)puVar18 + (long)*(int *)(lVar17 + 0x24)) = 0;
                plVar8 = (long *)((long)puVar18 + (long)*(int *)(lVar17 + 0x28));
                *plVar8 = alStack_1a0[1];
                plVar8[1] = lVar14;
                plVar8 = (long *)((long)puVar18 + (long)*(int *)(lVar17 + 0x2c));
                *plVar8 = lStack_168;
                plVar8[1] = lVar10;
                lStack_c0 = 0;
                uStack_b8 = 0xe000000000000000;
                __ss11_StringGutsV4growyySiF(0x55);
                __sSS6appendyySSF(0xd000000000000041,0x800000010009deb0);
                __sSS6appendyySSF(lVar1,uVar3);
                uVar7 = 0x800000010009df00;
                __sSS6appendyySSF(0xd000000000000010,0x800000010009df00);
                lVar5 = lVar6;
                func_0x000100086800(lVar6);
                _objc_retainAutoreleasedReturnValue();
                lVar10 = lVar5;
                __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
                _objc_release(lVar5);
                __sSS6appendyySSF(lVar10,uVar7);
                _swift_bridgeObjectRelease(uVar7);
                uVar7 = uStack_b8;
                __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_c0,uStack_b8);
                _objc_release();
                _swift_bridgeObjectRelease(uVar7);
                lVar5 = lStack_170;
                func_0x00010004ddbc(lStack_170 + 0x28,&lStack_c0,0x1000c6760,&UNK_10008c6d8);
                if (lStack_a8 == 0) {
                  func_0x00010004dd7c(&lStack_c0,0x1000c6760,&UNK_10008c6d8);
                }
                else {
                  func_0x000100013de4();
                  FUN_100046860(puVar18,lVar1,uVar3);
                  FUN_100012b94(&lStack_c0);
                }
                lVar1 = lStack_120;
                lVar10 = lStack_178;
                func_0x00010004dc60(puVar18,lVar15);
                (**(code **)(lVar1 + 0x38))(lVar15,0,1,lStack_118);
                (*pcStack_110)(lVar15,0,1,0);
                _swift_release(lVar5);
                _objc_release(lStack_150);
                _objc_release(lStack_158);
                _objc_release(lVar10);
                _objc_release(lVar6);
                func_0x00010004dd7c(lVar15,0x1000c6758,&UNK_10008c6d0);
                func_0x00010004dca4(puVar18);
                (**(code **)(lStack_130 + 8))(lStack_138,lStack_128);
                return;
              }
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10004c0b4);
              (*pcVar4)();
            }
            _swift_bridgeObjectRelease(lStack_c0);
          }
          _swift_release(lVar5);
          _objc_release(lStack_150);
          lStack_e8 = lStack_158;
        }
        _objc_release(lStack_e8);
      }
      _objc_release(lVar17);
    }
LAB_10004ba60:
    _objc_release(lVar6);
  }
LAB_10004ba64:
  _swift_beginAccess(lVar10 + 0x10,&lStack_e0,0,0);
  lVar5 = lVar10 + 0x10;
  _swift_weakLoadStrong();
  lVar6 = lStack_118;
  if (lVar5 != 0) {
    func_0x00010004ddbc(lVar5 + 0x28,&lStack_c0,0x1000c6760,&UNK_10008c6d8);
    _swift_release(lVar5);
    if (lStack_a8 == 0) {
      func_0x00010004dd7c(&lStack_c0,0x1000c6760,&UNK_10008c6d8);
    }
    else {
      func_0x000100013de4();
      lVar5 = lVar1;
      FUN_100046da0(lVar1,uVar3);
      if (lVar5 == 0) {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000042,0x800000010009de60)
        ;
      }
      else {
        func_0x0001000867c0();
      }
      _objc_release();
      func_0x000100012b98(&lStack_c0);
    }
  }
  _swift_beginAccess(lVar10 + 0x10,&lStack_c0,0,0);
  lVar10 = lVar10 + 0x10;
  _swift_weakLoadStrong();
  if (lVar10 != 0) {
    FUN_10004d5c8(param_1,lVar1,uVar3);
    _swift_release(lVar10);
  }
  (**(code **)(lStack_120 + 0x38))(lVar15,1,1,lVar6);
  (*pcStack_110)(lVar15,0,1,0);
  func_0x00010004dd7c(lVar15,0x1000c6758,&UNK_10008c6d0);
  return;
}



/* Entry: 100054948; end: 10005496b;  */

void FUN_100054948(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 10005496c; end: 1000549af;  */

long FUN_10005496c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1000549b0; end: 1000549b3;  */

void FUN_1000549b0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 1000549b4; end: 1000549f3;  */

void FUN_1000549b4(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 1000549f4; end: 100054a93;  */

void FUN_1000549f4(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x50));
  if (*(long *)(unaff_x20 + 0x60) != 1) {
    _swift_bridgeObjectRelease();
  }
  _swift_release(*(undefined8 *)(unaff_x20 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 100054a94; end: 100054aa7;  */

void FUN_100054a94(undefined8 param_1,long param_2)

{
  if (param_2 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010008606c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_1000b1560)(param_2);
  return;
}



/* Entry: 100054aa8; end: 100054aeb;  */

void FUN_100054aa8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000c4b90 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  __s8Dispatch0A13WorkItemFlagsVMa(0xff);
  puVar2 = PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_1000b1740;
  _swift_getWitnessTable(PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_1000b1740,uVar1);
  puRam00000001000c4b90 = puVar2;
  return;
}



/* Entry: 100054aec; end: 100054b2b;  */

undefined8 FUN_100054aec(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000100d0(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100054b2c; end: 100054b33;  */

void FUN_100054b2c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 100054b34; end: 100054c5b;  */

undefined8 FUN_100054b34(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000100d0(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 100054c5c; end: 100054c73;  */

void FUN_100054c5c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100052be4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 100054c74; end: 100054c7b;  */

void FUN_100054c74(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = 0;
  __s7SwiftUI11ColorSchemeOMa();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50) + 0x50 &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  uVar4 = *(long *)(lVar2 + 0x40) + uVar3 + 7 & 0xfffffffffffffff8;
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  (**(code **)(lVar2 + 8))(unaff_x20 + uVar3,lVar1);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + uVar4 + 8));
  _swift_release(*(undefined8 *)(unaff_x20 + uVar4 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 100054c7c; end: 100054ca7;  */

void FUN_100054c7c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 100054ca8; end: 100054d4f;  */

void FUN_100054ca8(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = 0;
  __s7SwiftUI11ColorSchemeOMa();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50) + 0x50 &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  uVar4 = *(long *)(lVar2 + 0x40) + uVar3 + 7 & 0xfffffffffffffff8;
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  (**(code **)(lVar2 + 8))(unaff_x20 + uVar3,lVar1);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + uVar4 + 8));
  _swift_release(*(undefined8 *)(unaff_x20 + uVar4 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 100054d50; end: 100054def;  */

void FUN_100054d50(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  
  lVar3 = 0;
  __s7SwiftUI11ColorSchemeOMa();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar5 = uVar4 + 0x50 & (uVar4 ^ 0xffffffffffffffff);
  uVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + uVar5 + 7 & 0xfffffffffffffff8;
  puVar1 = (undefined8 *)(unaff_x20 + uVar4);
  puVar2 = (undefined8 *)(unaff_x20 + uVar4 + 0x10);
  FUN_10004de0c(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),param_1,param_2,
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                unaff_x20 + uVar5,*puVar1,puVar1[1],*puVar2,puVar2[1]);
  return;
}



/* Entry: 100054df0; end: 100054f1f;  */

void FUN_100054df0(void)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  ulong uVar6;
  
  lVar4 = 0;
  FUN_10005cf80();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x68));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x80));
  if (*(long *)(unaff_x20 + 0x90) != 1) {
    _swift_bridgeObjectRelease();
  }
  lVar1 = unaff_x20 + (uVar6 + 0xa0 & (uVar6 ^ 0xffffffffffffffff));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
  _objc_release(*(undefined8 *)(lVar1 + 0x30));
  iVar3 = *(int *)(lVar4 + 0x20);
  lVar5 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar5 + -8) + 8))(lVar1 + iVar3,lVar5);
  plVar2 = (long *)(lVar1 + *(int *)(lVar4 + 0x28));
  if (*plVar2 != 0) {
    _swift_release();
    _swift_release(plVar2[1]);
  }
  plVar2 = (long *)(lVar1 + *(int *)(lVar4 + 0x2c));
  if (*plVar2 != 0) {
    _swift_release();
    _swift_release(plVar2[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 100054f20; end: 100054f83;  */

void FUN_100054f20(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_10005cf80();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  FUN_100051520(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                unaff_x20 + (uVar2 + 0xa0 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 100054f84; end: 100054f93;  */

void FUN_100054f84(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100054f94; end: 100055023;  */

void FUN_100054f94(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 100055024; end: 1000550a3;  */

undefined8 FUN_100055024(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1000550a4; end: 10005514f;  */

undefined8 * FUN_1000550a4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 100055150; end: 100055627;  */

long * FUN_100055150(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  code *pcVar22;
  undefined8 uVar23;
  
  uVar6 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar6 >> 0x11 & 1) != 0) {
    lVar10 = *param_2;
    *param_1 = lVar10;
    uVar17 = (ulong)uVar6 & 0xff;
    _swift_retain();
    return (long *)(lVar10 + (uVar17 + 0x10 & (uVar17 ^ 0xffffffffffffffff)));
  }
  uVar16 = 0x1000c69d8;
  func_0x0001000100d0(0x1000c69d8,&UNK_10008c870);
  plVar9 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,uVar16);
  bVar8 = (int)plVar9 != 1;
  if (bVar8) {
    *param_1 = *param_2;
    _swift_retain();
  }
  else {
    lVar10 = 0;
    __s7SwiftUI11ColorSchemeOMa();
    (**(code **)(*(long *)(lVar10 + -8) + 0x10))(param_1,param_2,lVar10);
  }
  _swift_storeEnumTagMultiPayload(param_1,uVar16,!bVar8);
  lVar10 = (long)param_1 + (long)*(int *)(param_3 + 0x14);
  lVar14 = (long)param_2 + (long)*(int *)(param_3 + 0x14);
  lVar11 = 0;
  __s10Foundation4DateVMa();
  pcVar22 = *(code **)(*(long *)(lVar11 + -8) + 0x10);
  (*pcVar22)(lVar10,lVar14,lVar11);
  lVar12 = 0;
  FUN_10005a998();
  puVar1 = (undefined8 *)(lVar10 + *(int *)(lVar12 + 0x14));
  puVar2 = (undefined8 *)(lVar14 + *(int *)(lVar12 + 0x14));
  lVar10 = 0x1000c69e0;
  func_0x0001000100d0(0x1000c69e0,&UNK_10008c9c0);
  puVar13 = puVar2;
  _swift_getEnumCaseMultiPayload(puVar2,lVar10);
  if ((int)puVar13 == 1) {
    uVar16 = *puVar2;
    _swift_errorRetain(uVar16);
    *puVar1 = uVar16;
    uVar16 = 1;
    goto LAB_100055600;
  }
  if ((int)puVar13 != 0) {
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
    return param_1;
  }
  lVar14 = 0;
  FUN_10005ee88();
  puVar13 = puVar2;
  _swift_getEnumCaseMultiPayload(puVar2,lVar14);
  if ((int)puVar13 == 1) {
    uVar16 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar16;
    uVar5 = puVar2[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar5;
    uVar23 = puVar2[5];
    puVar1[4] = puVar2[4];
    puVar1[5] = uVar23;
    uVar16 = puVar2[6];
    uVar18 = puVar2[7];
    puVar1[6] = uVar16;
    puVar1[7] = uVar18;
    uVar19 = puVar2[9];
    puVar1[8] = puVar2[8];
    puVar1[9] = uVar19;
    uVar20 = puVar2[10];
    puVar1[10] = uVar20;
    lVar11 = puVar2[0xc];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar23);
    _objc_retain(uVar16);
    _objc_retain(uVar18);
    _swift_bridgeObjectRetain(uVar19);
    _objc_retain(uVar20);
    if (lVar11 == 1) {
      uVar16 = puVar2[0xb];
      puVar1[0xc] = puVar2[0xc];
      puVar1[0xb] = uVar16;
      puVar1[0xd] = puVar2[0xd];
    }
    else {
      puVar1[0xb] = puVar2[0xb];
      puVar1[0xc] = lVar11;
      puVar1[0xd] = puVar2[0xd];
      _swift_bridgeObjectRetain();
    }
    uVar16 = 1;
LAB_1000555f0:
    _swift_storeEnumTagMultiPayload(puVar1,lVar14,uVar16);
  }
  else {
    if ((int)puVar13 == 0) {
      uVar16 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar16;
      uVar5 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar5;
      uVar23 = puVar2[4];
      puVar1[5] = puVar2[5];
      puVar1[4] = uVar23;
      uVar23 = puVar2[6];
      puVar1[6] = uVar23;
      lVar12 = 0;
      FUN_10005cf80();
      iVar7 = *(int *)(lVar12 + 0x20);
      _swift_bridgeObjectRetain(uVar16);
      _swift_bridgeObjectRetain(uVar5);
      _objc_retain(uVar23);
      (*pcVar22)((long)puVar1 + (long)iVar7,(long)puVar2 + (long)iVar7,lVar11);
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x24)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x24));
      plVar9 = (long *)((long)puVar1 + (long)*(int *)(lVar12 + 0x28));
      plVar3 = (long *)((long)puVar2 + (long)*(int *)(lVar12 + 0x28));
      if (*plVar3 == 0) {
        lVar21 = *plVar3;
        plVar9[1] = plVar3[1];
        *plVar9 = lVar21;
      }
      else {
        lVar21 = plVar3[1];
        *plVar9 = *plVar3;
        plVar9[1] = lVar21;
        _swift_retain();
        _swift_retain(lVar21);
      }
      plVar9 = (long *)((long)puVar1 + (long)*(int *)(lVar12 + 0x2c));
      plVar3 = (long *)((long)puVar2 + (long)*(int *)(lVar12 + 0x2c));
      if (*plVar3 == 0) {
        lVar12 = *plVar3;
        plVar9[1] = plVar3[1];
        *plVar9 = lVar12;
      }
      else {
        lVar12 = plVar3[1];
        *plVar9 = *plVar3;
        plVar9[1] = lVar12;
        _swift_retain();
        _swift_retain(lVar12);
      }
      lVar21 = 0;
      FUN_10005e080();
      puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar21 + 0x14));
      puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar21 + 0x14));
      uVar16 = puVar4[1];
      *puVar13 = *puVar4;
      puVar13[1] = uVar16;
      uVar18 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar21 + 0x18));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar21 + 0x18)) = uVar18;
      uVar19 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar21 + 0x1c));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar21 + 0x1c)) = uVar19;
      puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar21 + 0x20));
      puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar21 + 0x20));
      uVar5 = puVar4[1];
      *puVar13 = *puVar4;
      puVar13[1] = uVar5;
      puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar21 + 0x24));
      puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar21 + 0x24));
      uVar23 = 0;
      FUN_10005fcd4();
      _swift_bridgeObjectRetain(uVar16);
      _objc_retain(uVar18);
      _objc_retain(uVar19);
      _swift_bridgeObjectRetain(uVar5);
      puVar15 = puVar4;
      _swift_getEnumCaseMultiPayload(puVar4,uVar23);
      uVar16 = puVar4[1];
      *puVar13 = *puVar4;
      puVar13[1] = uVar16;
      _swift_bridgeObjectRetain();
      lVar12 = 0x1000c69c8;
      func_0x0001000100d0(0x1000c69c8,&UNK_10008c850);
      (*pcVar22)((long)puVar13 + (long)*(int *)(lVar12 + 0x30),
                 (long)puVar4 + (long)*(int *)(lVar12 + 0x30),lVar11);
      _swift_storeEnumTagMultiPayload(puVar13,uVar23,(int)puVar15 == 1);
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar21 + 0x28)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar21 + 0x28));
      puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar21 + 0x2c));
      puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar21 + 0x2c));
      uVar16 = puVar4[1];
      *puVar13 = *puVar4;
      puVar13[1] = uVar16;
      puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar21 + 0x30));
      puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar21 + 0x30));
      lVar11 = puVar2[1];
      _objc_retain();
      _swift_bridgeObjectRetain(uVar16);
      if (lVar11 == 1) {
        uVar16 = *puVar2;
        puVar13[1] = puVar2[1];
        *puVar13 = uVar16;
        puVar13[2] = puVar2[2];
      }
      else {
        *puVar13 = *puVar2;
        puVar13[1] = lVar11;
        puVar13[2] = puVar2[2];
        _swift_bridgeObjectRetain(lVar11);
      }
      uVar16 = 0;
      goto LAB_1000555f0;
    }
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
  }
  uVar16 = 0;
LAB_100055600:
  _swift_storeEnumTagMultiPayload(puVar1,lVar10,uVar16);
  return param_1;
}



/* Entry: 100055628; end: 1000558b7;  */

void FUN_100055628(undefined8 *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  
  uVar8 = 0x1000c69d8;
  func_0x0001000100d0(0x1000c69d8,&UNK_10008c870);
  puVar3 = param_1;
  _swift_getEnumCaseMultiPayload(param_1,uVar8);
  if ((int)puVar3 == 1) {
    lVar4 = 0;
    __s7SwiftUI11ColorSchemeOMa();
    (**(code **)(*(long *)(lVar4 + -8) + 8))(param_1,lVar4);
  }
  else {
    _swift_release(*param_1);
  }
  lVar4 = (long)param_1 + (long)*(int *)(param_2 + 0x14);
  lVar5 = 0;
  __s10Foundation4DateVMa();
  pcVar9 = *(code **)(*(long *)(lVar5 + -8) + 8);
  (*pcVar9)(lVar4,lVar5);
  lVar6 = 0;
  FUN_10005a998();
  puVar3 = (undefined8 *)(lVar4 + *(int *)(lVar6 + 0x14));
  uVar8 = 0x1000c69e0;
  func_0x0001000100d0(0x1000c69e0,&UNK_10008c9c0);
  puVar7 = puVar3;
  _swift_getEnumCaseMultiPayload(puVar3,uVar8);
  if ((int)puVar7 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001000860d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_1000b15a8)(*puVar3);
    return;
  }
  if ((int)puVar7 == 0) {
    uVar8 = 0;
    FUN_10005ee88(0);
    puVar7 = puVar3;
    _swift_getEnumCaseMultiPayload(puVar3,uVar8);
    if ((int)puVar7 == 1) {
      _swift_bridgeObjectRelease(puVar3[1]);
      _swift_bridgeObjectRelease(puVar3[3]);
      _swift_bridgeObjectRelease(puVar3[5]);
      _objc_release(puVar3[6]);
      _objc_release(puVar3[7]);
      _swift_bridgeObjectRelease(puVar3[9]);
      _objc_release(puVar3[10]);
      lVar4 = puVar3[0xc];
    }
    else {
      if ((int)puVar7 != 0) {
        return;
      }
      _swift_bridgeObjectRelease(puVar3[1]);
      _swift_bridgeObjectRelease(puVar3[3]);
      _objc_release(puVar3[6]);
      lVar4 = 0;
      FUN_10005cf80();
      (*pcVar9)((long)puVar3 + (long)*(int *)(lVar4 + 0x20),lVar5);
      plVar1 = (long *)((long)puVar3 + (long)*(int *)(lVar4 + 0x28));
      if (*plVar1 != 0) {
        _swift_release();
        _swift_release(plVar1[1]);
      }
      plVar1 = (long *)((long)puVar3 + (long)*(int *)(lVar4 + 0x2c));
      if (*plVar1 != 0) {
        _swift_release();
        _swift_release(plVar1[1]);
      }
      lVar6 = 0;
      FUN_10005e080();
      _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar3 + (long)*(int *)(lVar6 + 0x14) + 8));
      _objc_release(*(undefined8 *)((long)puVar3 + (long)*(int *)(lVar6 + 0x18)));
      _objc_release(*(undefined8 *)((long)puVar3 + (long)*(int *)(lVar6 + 0x1c)));
      _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar3 + (long)*(int *)(lVar6 + 0x20) + 8));
      iVar2 = *(int *)(lVar6 + 0x24);
      FUN_10005fcd4(0);
      _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar3 + (long)iVar2 + 8));
      lVar4 = 0x1000c69c8;
      func_0x0001000100d0(0x1000c69c8,&UNK_10008c850);
      (*pcVar9)((long)puVar3 + (long)*(int *)(lVar4 + 0x30) + (long)iVar2,lVar5);
      _objc_release(*(undefined8 *)((long)puVar3 + (long)*(int *)(lVar6 + 0x28)));
      _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar3 + (long)*(int *)(lVar6 + 0x2c) + 8));
      lVar4 = *(long *)((long)puVar3 + (long)*(int *)(lVar6 + 0x30) + 8);
    }
    if (lVar4 != 1) {
                    /* WARNING: Could not recover jumptable at 0x000100086054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_1000b1550)();
      return;
    }
  }
  return;
}



/* Entry: 1000558b8; end: 1000568c3;  */

undefined8 * FUN_1000558b8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  code *pcVar20;
  undefined8 uVar21;
  
  uVar15 = 0x1000c69d8;
  func_0x0001000100d0(0x1000c69d8,&UNK_10008c870);
  puVar8 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,uVar15);
  bVar7 = (int)puVar8 != 1;
  if (bVar7) {
    *param_1 = *param_2;
    _swift_retain();
  }
  else {
    lVar9 = 0;
    __s7SwiftUI11ColorSchemeOMa();
    (**(code **)(*(long *)(lVar9 + -8) + 0x10))(param_1,param_2,lVar9);
  }
  _swift_storeEnumTagMultiPayload(param_1,uVar15,!bVar7);
  lVar9 = (long)param_1 + (long)*(int *)(param_3 + 0x14);
  lVar13 = (long)param_2 + (long)*(int *)(param_3 + 0x14);
  lVar10 = 0;
  __s10Foundation4DateVMa();
  pcVar20 = *(code **)(*(long *)(lVar10 + -8) + 0x10);
  (*pcVar20)(lVar9,lVar13,lVar10);
  lVar11 = 0;
  FUN_10005a998();
  puVar8 = (undefined8 *)(lVar9 + *(int *)(lVar11 + 0x14));
  puVar1 = (undefined8 *)(lVar13 + *(int *)(lVar11 + 0x14));
  lVar9 = 0x1000c69e0;
  func_0x0001000100d0(0x1000c69e0,&UNK_10008c9c0);
  puVar12 = puVar1;
  _swift_getEnumCaseMultiPayload(puVar1,lVar9);
  if ((int)puVar12 == 1) {
    uVar15 = *puVar1;
    _swift_errorRetain(uVar15);
    *puVar8 = uVar15;
    uVar15 = 1;
    goto LAB_100055d3c;
  }
  if ((int)puVar12 != 0) {
    _memcpy(puVar8,puVar1,*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
    return param_1;
  }
  lVar13 = 0;
  FUN_10005ee88();
  puVar12 = puVar1;
  _swift_getEnumCaseMultiPayload(puVar1,lVar13);
  if ((int)puVar12 == 1) {
    uVar15 = puVar1[1];
    *puVar8 = *puVar1;
    puVar8[1] = uVar15;
    uVar5 = puVar1[3];
    puVar8[2] = puVar1[2];
    puVar8[3] = uVar5;
    uVar21 = puVar1[5];
    puVar8[4] = puVar1[4];
    puVar8[5] = uVar21;
    uVar15 = puVar1[6];
    uVar16 = puVar1[7];
    puVar8[6] = uVar15;
    puVar8[7] = uVar16;
    uVar17 = puVar1[9];
    puVar8[8] = puVar1[8];
    puVar8[9] = uVar17;
    uVar18 = puVar1[10];
    puVar8[10] = uVar18;
    lVar10 = puVar1[0xc];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar21);
    _objc_retain(uVar15);
    _objc_retain(uVar16);
    _swift_bridgeObjectRetain(uVar17);
    _objc_retain(uVar18);
    if (lVar10 == 1) {
      uVar15 = puVar1[0xb];
      puVar8[0xc] = puVar1[0xc];
      puVar8[0xb] = uVar15;
      puVar8[0xd] = puVar1[0xd];
    }
    else {
      puVar8[0xb] = puVar1[0xb];
      puVar8[0xc] = lVar10;
      puVar8[0xd] = puVar1[0xd];
      _swift_bridgeObjectRetain();
    }
    uVar15 = 1;
LAB_100055d2c:
    _swift_storeEnumTagMultiPayload(puVar8,lVar13,uVar15);
  }
  else {
    if ((int)puVar12 == 0) {
      uVar15 = puVar1[1];
      *puVar8 = *puVar1;
      puVar8[1] = uVar15;
      uVar5 = puVar1[3];
      puVar8[2] = puVar1[2];
      puVar8[3] = uVar5;
      uVar21 = puVar1[4];
      puVar8[5] = puVar1[5];
      puVar8[4] = uVar21;
      uVar21 = puVar1[6];
      puVar8[6] = uVar21;
      lVar11 = 0;
      FUN_10005cf80();
      iVar6 = *(int *)(lVar11 + 0x20);
      _swift_bridgeObjectRetain(uVar15);
      _swift_bridgeObjectRetain(uVar5);
      _objc_retain(uVar21);
      (*pcVar20)((long)puVar8 + (long)iVar6,(long)puVar1 + (long)iVar6,lVar10);
      *(undefined1 *)((long)puVar8 + (long)*(int *)(lVar11 + 0x24)) =
           *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x24));
      plVar2 = (long *)((long)puVar8 + (long)*(int *)(lVar11 + 0x28));
      plVar3 = (long *)((long)puVar1 + (long)*(int *)(lVar11 + 0x28));
      if (*plVar3 == 0) {
        lVar19 = *plVar3;
        plVar2[1] = plVar3[1];
        *plVar2 = lVar19;
      }
      else {
        lVar19 = plVar3[1];
        *plVar2 = *plVar3;
        plVar2[1] = lVar19;
        _swift_retain();
        _swift_retain(lVar19);
      }
      plVar2 = (long *)((long)puVar8 + (long)*(int *)(lVar11 + 0x2c));
      plVar3 = (long *)((long)puVar1 + (long)*(int *)(lVar11 + 0x2c));
      if (*plVar3 == 0) {
        lVar11 = *plVar3;
        plVar2[1] = plVar3[1];
        *plVar2 = lVar11;
      }
      else {
        lVar11 = plVar3[1];
        *plVar2 = *plVar3;
        plVar2[1] = lVar11;
        _swift_retain();
        _swift_retain(lVar11);
      }
      lVar19 = 0;
      FUN_10005e080();
      puVar12 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar19 + 0x14));
      puVar4 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar19 + 0x14));
      uVar15 = puVar4[1];
      *puVar12 = *puVar4;
      puVar12[1] = uVar15;
      uVar16 = *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar19 + 0x18));
      *(undefined8 *)((long)puVar8 + (long)*(int *)(lVar19 + 0x18)) = uVar16;
      uVar17 = *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar19 + 0x1c));
      *(undefined8 *)((long)puVar8 + (long)*(int *)(lVar19 + 0x1c)) = uVar17;
      puVar12 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar19 + 0x20));
      puVar4 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar19 + 0x20));
      uVar5 = puVar4[1];
      *puVar12 = *puVar4;
      puVar12[1] = uVar5;
      puVar12 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar19 + 0x24));
      puVar4 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar19 + 0x24));
      uVar21 = 0;
      FUN_10005fcd4();
      _swift_bridgeObjectRetain(uVar15);
      _objc_retain(uVar16);
      _objc_retain(uVar17);
      _swift_bridgeObjectRetain(uVar5);
      puVar14 = puVar4;
      _swift_getEnumCaseMultiPayload(puVar4,uVar21);
      uVar15 = puVar4[1];
      *puVar12 = *puVar4;
      puVar12[1] = uVar15;
      _swift_bridgeObjectRetain();
      lVar11 = 0x1000c69c8;
      func_0x0001000100d0(0x1000c69c8,&UNK_10008c850);
      (*pcVar20)((long)puVar12 + (long)*(int *)(lVar11 + 0x30),
                 (long)puVar4 + (long)*(int *)(lVar11 + 0x30),lVar10);
      _swift_storeEnumTagMultiPayload(puVar12,uVar21,(int)puVar14 == 1);
      *(undefined8 *)((long)puVar8 + (long)*(int *)(lVar19 + 0x28)) =
           *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar19 + 0x28));
      puVar12 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar19 + 0x2c));
      puVar4 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar19 + 0x2c));
      uVar15 = puVar4[1];
      *puVar12 = *puVar4;
      puVar12[1] = uVar15;
      puVar12 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar19 + 0x30));
      puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar19 + 0x30));
      lVar10 = puVar1[1];
      _objc_retain();
      _swift_bridgeObjectRetain(uVar15);
      if (lVar10 == 1) {
        uVar15 = *puVar1;
        puVar12[1] = puVar1[1];
        *puVar12 = uVar15;
        puVar12[2] = puVar1[2];
      }
      else {
        *puVar12 = *puVar1;
        puVar12[1] = lVar10;
        puVar12[2] = puVar1[2];
        _swift_bridgeObjectRetain(lVar10);
      }
      uVar15 = 0;
      goto LAB_100055d2c;
    }
    _memcpy(puVar8,puVar1,*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  }
  uVar15 = 0;
LAB_100055d3c:
  _swift_storeEnumTagMultiPayload(puVar8,lVar9,uVar15);
  return param_1;
}



/* Entry: 1000568c4; end: 1000568cf;  */

void FUN_1000568c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_1000b15c8)();
  return;
}



/* Entry: 1000568d0; end: 10005694f;  */

void FUN_1000568d0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar1 = 0x1000c69e8;
  func_0x0001000100d0(0x1000c69e8,&UNK_10008c878);
  if ((int)param_2 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 0x30);
  }
  else {
    lVar1 = 0;
    FUN_10005a998();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 0x30);
    param_1 = param_1 + *(int *)(param_3 + 0x14);
  }
                    /* WARNING: Could not recover jumptable at 0x00010005694c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,lVar1);
  return;
}



/* Entry: 100056950; end: 10005695b;  */

void FUN_100056950(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_1000b16d8)();
  return;
}



/* Entry: 10005695c; end: 1000569e3;  */

void FUN_10005695c(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar1 = 0x1000c69e8;
  func_0x0001000100d0(0x1000c69e8,&UNK_10008c878);
  if (param_3 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 0x38);
  }
  else {
    lVar1 = 0;
    FUN_10005a998();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 0x38);
    param_1 = param_1 + *(int *)(param_4 + 0x14);
  }
                    /* WARNING: Could not recover jumptable at 0x0001000569e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_2,lVar1);
  return;
}



/* Entry: 1000569e4; end: 100056a1b;  */

void FUN_1000569e4(undefined8 param_1)

{
  if (lRam00000001000c6a48 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10009088c);
  return;
}



/* Entry: 100056a1c; end: 100056af3;  */

void FUN_100056a1c(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = 0x13f;
  func_0x000100056aa0();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    lVar1 = 0x13f;
    FUN_10005a998();
    if (param_2 < 0x40) {
      lStack_28 = *(long *)(lVar1 + -8) + 0x40;
      _swift_initStructMetadata(param_1,0x100,2,&lStack_30,param_1 + 0x10);
    }
  }
  return;
}



/* Entry: 100056af4; end: 100056b03;  */

void FUN_100056af4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100086168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_1000b1608)(param_1,&UNK_1000908b4,1);
  return;
}



/* Entry: 100056b04; end: 100056ceb;  */

void FUN_100056b04(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  lVar2 = 0;
  FUN_10005ee88();
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar5 = (undefined8 *)(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar2 = 0x1000c69e0;
  func_0x0001000100d0(0x1000c69e0,&UNK_10008c9c0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)((long)puVar5 - extraout_x8_00);
  lVar3 = 0;
  FUN_1000569e4();
  iVar1 = *(int *)(lVar3 + 0x14);
  lVar3 = 0;
  FUN_10005a998();
  func_0x000100057fa0(unaff_x20 + iVar1 + (long)*(int *)(lVar3 + 0x14),puVar7,0x1000c69e0,
                      &UNK_10008c9c0);
  puVar4 = puVar7;
  _swift_getEnumCaseMultiPayload(puVar7,lVar2);
  iVar1 = (int)puVar4;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      FUN_100057e98(puVar7,puVar5,FUN_10005ee88);
      puVar4 = puVar5;
      FUN_100056cec();
      func_0x000100057f64(puVar5,FUN_10005ee88);
    }
    else {
      uVar6 = *puVar7;
      FUN_100057c2c();
      _swift_errorRelease(uVar6);
    }
  }
  else {
    if (iVar1 == 2) {
      uVar6 = 0x6e69676f6c;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e69676f6c,0xe500000000000000);
      puVar5 = (undefined8 *)PTR__OBJC_CLASS___UIImage_1000c20c0;
      _objc_opt_self();
      func_0x000100086b60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      puVar4 = puVar5;
      FUN_100057438(puVar5,0,0);
    }
    else {
      puVar5 = (undefined8 *)0xd00000000000005d;
      FUN_100057124(0xd00000000000005d,0x800000010009e950);
      puVar4 = puVar5;
      FUN_100057438();
    }
    _objc_release(puVar5);
  }
  *param_1 = puVar4;
  return;
}



/* Entry: 100056cec; end: 100057113;  */

void FUN_100056cec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 *puVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  ulong uVar19;
  undefined8 auStack_100 [2];
  long lStack_f0;
  ulong uStack_e0;
  long lStack_d8;
  undefined *apuStack_d0 [13];
  undefined8 uStack_68;
  
  lVar3 = 0;
  __s7SwiftUI11ColorSchemeOMa();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar14 + 0x40));
  uVar19 = (long)&lStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_e0 = uVar19;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar17 = uVar19 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  uVar19 = lVar17 - extraout_x12_00;
  lVar4 = 0;
  FUN_100065a0c();
  lStack_d8 = lVar4;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar12 = uVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_10005e080();
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar16 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  FUN_10005ee88();
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar13 = (undefined8 *)(lVar16 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  func_0x000100057edc(param_1,puVar13);
  puVar10 = puVar13;
  _swift_getEnumCaseMultiPayload(puVar13,lVar5);
  if ((int)puVar10 == 0) {
    func_0x000100057e98(puVar13,lVar16,FUN_10005e080);
    lStack_f0 = lVar12;
    func_0x000100057edc(lVar16,lVar12,FUN_10005e080);
    FUN_100057a1c(uVar19);
    uVar2 = *(undefined4 *)PTR___s7SwiftUI11ColorSchemeO5lightyA2CmFWC_1000b0270;
    pcVar18 = *(code **)(lVar14 + 0x68);
    (*pcVar18)(lVar17,uVar2,lVar3);
    uVar6 = uVar19;
    __s7SwiftUI11ColorSchemeO2eeoiySbAC_ACtFZ(uVar19,lVar17);
    pcVar15 = *(code **)(lVar14 + 8);
    (*pcVar15)(lVar17,lVar3);
    (*pcVar15)(uVar19,lVar3);
    lVar5 = 0x1c;
    if ((uVar6 & 1) == 0) {
      lVar5 = 0x18;
    }
    uVar9 = *(undefined8 *)(lVar16 + *(int *)(lVar4 + lVar5));
    _objc_retain();
    uVar19 = uStack_e0;
    FUN_100057a1c(uStack_e0);
    (*pcVar18)(lVar17,uVar2,lVar3);
    uVar6 = uVar19;
    __s7SwiftUI11ColorSchemeO2eeoiySbAC_ACtFZ(uVar19,lVar17);
    (*pcVar15)(lVar17,lVar3);
    (*pcVar15)(uVar19,lVar3);
    lVar12 = 0;
    FUN_10005cf80();
    lVar5 = lStack_d8;
    lVar4 = lStack_f0;
    lVar3 = 0x28;
    if ((uVar6 & 1) == 0) {
      lVar3 = 0x2c;
    }
    puVar10 = (undefined8 *)(lVar16 + *(int *)(lVar12 + lVar3));
    uVar11 = *puVar10;
    uVar1 = puVar10[1];
    *(undefined8 *)(lStack_f0 + *(int *)(lStack_d8 + 0x14)) = uVar9;
    puVar10 = (undefined8 *)(lStack_f0 + *(int *)(lStack_d8 + 0x18));
    *puVar10 = uVar11;
    puVar10[1] = uVar1;
    func_0x00010004dc34();
    FUN_100057f20();
    __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(lVar4,lVar5,uVar11);
    FUN_100057f64(lVar16,FUN_10005e080);
  }
  else {
    if ((int)puVar10 == 1) {
      apuStack_d0[9] = (undefined *)puVar13[9];
      apuStack_d0[8] = (undefined *)puVar13[8];
      apuStack_d0[0xb] = (undefined *)puVar13[0xb];
      apuStack_d0[10] = (undefined *)puVar13[10];
      uStack_68 = puVar13[0xd];
      apuStack_d0[0xc] = (undefined *)puVar13[0xc];
      apuStack_d0[1] = (undefined *)puVar13[1];
      apuStack_d0[0] = (undefined *)*puVar13;
      apuStack_d0[3] = (undefined *)puVar13[3];
      apuStack_d0[2] = (undefined *)puVar13[2];
      apuStack_d0[5] = (undefined *)puVar13[5];
      apuStack_d0[4] = (undefined *)puVar13[4];
      apuStack_d0[7] = (undefined *)puVar13[7];
      apuStack_d0[6] = (undefined *)puVar13[6];
      func_0x000100057e58();
      puVar8 = &UNK_1000b59a8;
    }
    else {
      puVar7 = (undefined *)0xd00000000000005d;
      FUN_100057124(0xd00000000000005d,0x800000010009e9b0);
      puVar8 = PTR__OBJC_CLASS___NSBundle_1000c2230;
      _objc_opt_self(PTR__OBJC_CLASS___NSBundle_1000c2230);
      func_0x000100086fe0();
      _objc_retainAutoreleasedReturnValue();
      puVar13[-2] = 0x800000010009ea30;
      uVar11 = 0x800000010009ea10;
      uVar9 = 0xd000000000000011;
      __s10Foundation17NSLocalizedString_9tableName6bundle5value7commentS2S_SSSgSo8NSBundleCS2StF
                (0xd000000000000011,0x800000010009ea10,0,0,puVar8,0,0xe000000000000000,
                 0xd000000000000011);
      _objc_release(puVar8);
      puVar10 = (undefined8 *)0x6e6970;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e6970,0xe300000000000000);
      puVar8 = PTR__OBJC_CLASS___UIImage_1000c20c0;
      _objc_opt_self();
      func_0x000100086b60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      apuStack_d0[0] = puVar7;
      apuStack_d0[1] = (undefined *)uVar9;
      apuStack_d0[2] = (undefined *)uVar11;
      apuStack_d0[3] = puVar8;
      func_0x000100057e18();
      puVar8 = &UNK_1000b5b88;
    }
    __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(apuStack_d0,puVar8,puVar10);
  }
  return;
}



/* Entry: 100057114; end: 100057123;  */

void FUN_100057114(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000853dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000b06f8
  )();
  return;
}


