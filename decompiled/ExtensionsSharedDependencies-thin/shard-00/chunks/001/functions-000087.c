/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 001a3a34; end: 001a3af3;  */

void FUN_001a3a34(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007e14f0,0x41,&uStack_48,&lStack_40);
  puRam0000000000b65898 = puStack_38;
  lRam0000000000b65890 = lStack_40;
  puRam0000000000b658a8 = puStack_28;
  puRam0000000000b658a0 = puStack_30;
  puRam0000000000b658b8 = puStack_18;
  puRam0000000000b658b0 = puStack_20;
  return;
}



/* Entry: 001a3af4; end: 001a3b93;  */

void FUN_001a3af4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af2ab8 != -1) {
    _swift_once(0xaf2ab8,FUN_001a3a34);
  }
  uVar5 = uRam0000000000b658b8;
  uVar4 = uRam0000000000b658b0;
  uVar3 = uRam0000000000b658a8;
  uVar2 = uRam0000000000b658a0;
  uVar1 = uRam0000000000b65898;
  *param_1 = uRam0000000000b65890;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 001a3b94; end: 001a3d23;  */

/* WARNING: Removing unreachable block (ram,0x001a3ce0) */

void FUN_001a3b94(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 4) {
        if (lVar1 == 1) {
          pcVar5 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 == 2) {
            pcVar5 = *(code **)(param_3 + 0x1a0);
            FUN_001a8198();
            lVar2 = unaff_x20 + 0x10;
            puVar3 = &UNK_009b48e0;
            goto LAB_001a3c1c;
          }
          if (lVar1 != 3) goto LAB_001a3c30;
          pcVar5 = *(code **)(param_3 + 0x160);
        }
LAB_001a3cd0:
        (*pcVar5)();
      }
      else {
        if (lVar1 < 6) {
          if (lVar1 == 4) {
            pcVar5 = *(code **)(param_3 + 0x1a0);
            func_0x0014424c();
            lVar2 = unaff_x20 + 0x20;
            puVar3 = &UNK_009b4bc8;
          }
          else {
            if (lVar1 != 5) goto LAB_001a3c30;
            pcVar5 = *(code **)(param_3 + 0x198);
            FUN_00145594();
            lVar2 = unaff_x20 + 0x58;
            puVar3 = &UNK_009b3c08;
          }
        }
        else {
          if (lVar1 != 6) {
            if (lVar1 == 7) {
              pcVar5 = *(code **)(param_3 + 0x150);
              goto LAB_001a3cd0;
            }
            goto LAB_001a3c30;
          }
          pcVar5 = *(code **)(param_3 + 0x180);
          func_0x001442cc();
          lVar2 = unaff_x20 + 0x28;
          puVar3 = &UNK_009b47d0;
        }
LAB_001a3c1c:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_001a3c30:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 001a3d24; end: 001a3f33;  */

void FUN_001a3d24(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  ulong *unaff_x20;
  long unaff_x21;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar10 = uVar1 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar10 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar10 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar3);
  }
  if ((*(long *)(unaff_x20[2] + 0x10) != 0) && (FUN_001a17e0(unaff_x20[2],2), unaff_x21 != 0)) {
    return;
  }
  uVar10 = unaff_x20[3];
  lVar9 = *(long *)(uVar10 + 0x10);
  if (lVar9 != 0) {
    __ss6HasherV8_combineyySuF(3);
    __ss6HasherV8_combineyySuF(lVar9);
    puVar11 = (undefined8 *)(uVar10 + 0x28);
    do {
      uVar2 = puVar11[-1];
      uVar4 = *puVar11;
      _swift_bridgeObjectRetain(uVar4);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,uVar4);
      _swift_bridgeObjectRelease(uVar4);
      puVar11 = puVar11 + 2;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  if ((*(long *)(unaff_x20[4] + 0x10) != 0) && (FUN_0019cc98(unaff_x20[4],4), unaff_x21 != 0)) {
    return;
  }
  uVar10 = unaff_x20[0xc];
  if (uVar10 != 0) {
    uVar1 = unaff_x20[0xd];
    uVar3 = unaff_x20[0xe];
    uVar12 = unaff_x20[0xb];
    __ss6HasherV8_combineyySuF(5);
    _swift_bridgeObjectRetain(uVar10);
    func_0x00023304(uVar1,uVar3);
    func_0x00192fb8(param_1,uVar12,uVar10,uVar1,uVar3);
    FUN_00141808(uVar12,uVar10,uVar1,uVar3);
  }
  uVar10 = unaff_x20[5];
  if ((char)unaff_x20[6] == '\x01') {
    if (uVar10 != 0) {
      __ss6HasherV8_combineyySuF(6);
      bVar6 = uVar10 == 2;
      uVar10 = 1;
      if (bVar6) {
        uVar10 = 2;
      }
LAB_001a3e98:
      __ss6HasherV8_combineyySuF(uVar10);
    }
  }
  else if (uVar10 != 0) {
    __ss6HasherV8_combineyySuF(6);
    goto LAB_001a3e98;
  }
  uVar1 = unaff_x20[7];
  uVar3 = unaff_x20[8];
  uVar10 = uVar1 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar10 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar10 != 0) {
    __ss6HasherV8_combineyySuF(7);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar3);
  }
  uVar10 = unaff_x20[9];
  uVar5 = (uint)(unaff_x20[10] >> 0x20);
  uVar7 = uVar5 >> 0x1e;
  if (uVar5 >> 0x1e < 2) {
    if (uVar7 == 0) {
      if ((unaff_x20[10] & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_001a3f10;
    }
    lVar9 = (long)(int)uVar10;
    lVar8 = (long)uVar10 >> 0x20;
  }
  else {
    if (uVar7 != 2) {
      return;
    }
    lVar9 = *(long *)(uVar10 + 0x10);
    lVar8 = *(long *)(uVar10 + 0x18);
  }
  if (lVar9 == lVar8) {
    return;
  }
LAB_001a3f10:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 001a3f34; end: 001a40f7;  */

void FUN_001a3f34(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uStack_60;
  undefined1 uStack_58;
  
  uVar4 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar3 = uVar4 & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar3 = uVar1 >> 0x38 & 0xf;
  }
  if ((uVar3 == 0) || ((**(code **)(param_3 + 0x70))(uVar4,uVar1,1,param_2,param_3), unaff_x21 == 0)
     ) {
    uVar3 = unaff_x20[2];
    if (*(long *)(uVar3 + 0x10) != 0) {
      pcVar5 = *(code **)(param_3 + 0x118);
      FUN_001a8198();
      (*pcVar5)(uVar3,2,&UNK_009b48e0,uVar4,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    uVar3 = unaff_x20[3];
    if ((*(long *)(uVar3 + 0x10) == 0) ||
       ((**(code **)(param_3 + 0x100))(uVar3,3,param_2,param_3), unaff_x21 == 0)) {
      uVar4 = unaff_x20[4];
      if (*(long *)(uVar4 + 0x10) != 0) {
        pcVar5 = *(code **)(param_3 + 0x118);
        func_0x0014424c();
        (*pcVar5)(uVar4,4,&UNK_009b4bc8,uVar3,param_2,param_3);
        if (unaff_x21 != 0) {
          return;
        }
      }
      puVar2 = unaff_x20;
      FUN_001a40f8();
      if (unaff_x21 == 0) {
        if (unaff_x20[5] != 0) {
          uStack_58 = (undefined1)unaff_x20[6];
          pcVar5 = *(code **)(param_3 + 0x80);
          uStack_60 = unaff_x20[5];
          func_0x001442cc();
          (*pcVar5)(&uStack_60,6,&UNK_009b47d0,puVar2,param_2,param_3);
        }
        uVar4 = unaff_x20[8];
        uVar3 = unaff_x20[7] & 0xffffffffffff;
        if ((uVar4 & 0x2000000000000000) != 0) {
          uVar3 = uVar4 >> 0x38 & 0xf;
        }
        if (uVar3 != 0) {
          (**(code **)(param_3 + 0x70))(unaff_x20[7],uVar4,7,param_2,param_3);
        }
        FUN_0013ad2c(param_1,unaff_x20[9],unaff_x20[10],param_2,param_3);
      }
    }
  }
  return;
}



/* Entry: 001a40f8; end: 001a417b;  */

void FUN_001a40f8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x60);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x58);
    uStack_48 = *(undefined8 *)(param_1 + 0x70);
    uStack_50 = *(undefined8 *)(param_1 + 0x68);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_00145594();
    (*pcVar1)(&uStack_60,5,&UNK_009b3c08,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 001a417c; end: 001a417f;  */

uint FUN_001a417c(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_c0 [32];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar2 = *param_1;
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar2 & 1) != 0)) {
    uVar2 = param_1[2];
    FUN_00147834(uVar2,param_2[2]);
    if ((uVar2 & 1) != 0) {
      uVar2 = param_1[3];
      FUN_000aa78c(uVar2,param_2[3]);
      if ((uVar2 & 1) != 0) {
        uVar2 = param_1[4];
        FUN_001455e0(uVar2,param_2[4]);
        if ((uVar2 & 1) != 0) {
          uVar4 = param_1[0xc];
          uVar2 = param_1[0xb];
          uVar9 = param_1[0xe];
          uVar7 = param_1[0xd];
          uVar6 = param_2[0xc];
          uVar5 = param_2[0xb];
          uVar10 = param_2[0xe];
          uVar8 = param_2[0xd];
          uStack_a0 = uVar5;
          uStack_98 = uVar6;
          uStack_90 = uVar8;
          uStack_88 = uVar10;
          uStack_80 = uVar2;
          uStack_78 = uVar4;
          uStack_70 = uVar7;
          uStack_68 = uVar9;
          if (uVar4 == 0) {
            if (uVar6 != 0) goto LAB_001a7cd0;
            func_0x001a9e74(&uStack_80,auStack_c0,0xaf0660,&UNK_007daae0);
            func_0x001a9e74(&uStack_a0,auStack_c0,0xaf0660,&UNK_007daae0);
LAB_001a7d94:
            FUN_00141808(uVar2,uVar4,uVar7,uVar9);
            uVar2 = param_1[5];
            uVar4 = param_2[5];
            if ((char)param_2[6] == '\x01') {
              if (uVar4 == 0) {
                if (uVar2 == 0) goto LAB_001a7e50;
              }
              else if (uVar4 == 1) {
                if (uVar2 == 1) {
LAB_001a7e50:
                  uVar2 = param_1[7];
                  if (((uVar2 == param_2[7]) && (param_1[8] == param_2[8])) ||
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (), (uVar2 & 1) != 0)) {
                    uVar2 = param_1[9];
                    FUN_00038814(uVar2,param_1[10],param_2[9],param_2[10]);
                    uVar1 = (uint)uVar2;
                    goto LAB_001a7d34;
                  }
                }
              }
              else if (uVar2 == 2) goto LAB_001a7e50;
            }
            else if (uVar2 == uVar4) goto LAB_001a7e50;
          }
          else {
            if (uVar6 == 0) {
LAB_001a7cd0:
              func_0x001a9e74(&uStack_80,auStack_c0,0xaf0660,&UNK_007daae0);
              func_0x001a9e74(&uStack_a0,auStack_c0,0xaf0660,&UNK_007daae0);
              FUN_00141808(uVar2,uVar4,uVar7,uVar9);
              uVar2 = uVar5;
              uVar4 = uVar6;
              uVar7 = uVar8;
              uVar9 = uVar10;
            }
            else if (((uVar2 == uVar5) && (uVar4 == uVar6)) ||
                    (uVar3 = uVar2,
                    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (uVar2,uVar4,uVar5,uVar6,0), (uVar3 & 1) != 0)) {
              func_0x001a9e74(&uStack_80,auStack_c0,0xaf0660,&UNK_007daae0);
              func_0x001a9e74(&uStack_a0,auStack_c0,0xaf0660,&UNK_007daae0);
              uVar3 = uVar7;
              FUN_00038814(uVar7,uVar9,uVar8,uVar10);
              FUN_00141808(uVar5,uVar6,uVar8,uVar10);
              if ((uVar3 & 1) != 0) goto LAB_001a7d94;
            }
            else {
              func_0x001a9e74(&uStack_80,auStack_c0,0xaf0660,&UNK_007daae0);
              func_0x001a9e74(&uStack_a0,auStack_c0,0xaf0660,&UNK_007daae0);
              FUN_00141808(uVar5,uVar6,uVar8,uVar10);
            }
            FUN_00141808(uVar2,uVar4,uVar7,uVar9);
          }
        }
      }
    }
  }
  uVar1 = 0;
LAB_001a7d34:
  return uVar1 & 1;
}



/* Entry: 001a4180; end: 001a420f;  */

/* WARNING: Removing unreachable block (ram,0x001a41d0) */

void FUN_001a4180(void)

{
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_80,0);
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_90 = uStack_40;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  FUN_001a3d24(&uStack_d0);
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_40 = uStack_90;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001a4210; end: 001a426b;  */

void FUN_001a4210(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  param_1[2] = PTR___swiftEmptyArrayStorage_0099b8f0;
  param_1[3] = puVar1;
  param_1[4] = puVar1;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[7] = 0;
  param_1[8] = 0xe000000000000000;
  param_1[10] = 0xc000000000000000;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  return;
}



/* Entry: 001a426c; end: 001a429b;  */

undefined1  [16] FUN_001a426c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x48);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x48),
                  *(undefined8 *)(unaff_x20 + 0x50));
  return auVar1;
}



/* Entry: 001a429c; end: 001a42cf;  */

void FUN_001a429c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50));
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  return;
}



/* Entry: 001a42d0; end: 001a42e3;  */

undefined1  [16] FUN_001a42d0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x48;
  auVar1._0_8_ = 0x1a42e0;
  return auVar1;
}



/* Entry: 001a42e4; end: 001a42f7;  */

void FUN_001a42e4(void)

{
  FUN_001a3b94();
  return;
}



/* Entry: 001a42f8; end: 001a4347;  */

void FUN_001a42f8(void)

{
  FUN_001a3f34();
  return;
}



/* Entry: 001a4348; end: 001a43e7;  */

void FUN_001a4348(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af2ab8 != -1) {
    _swift_once(0xaf2ab8,FUN_001a3a34);
  }
  uVar5 = uRam0000000000b658b8;
  uVar4 = uRam0000000000b658b0;
  uVar3 = uRam0000000000b658a8;
  uVar2 = uRam0000000000b658a0;
  uVar1 = uRam0000000000b65898;
  *param_1 = uRam0000000000b65890;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 001a43e8; end: 001a4423;  */

void FUN_001a43e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2c30;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2c30,&UNK_007e12a8);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 001a4424; end: 001a463b;  */

/* WARNING: Removing unreachable block (ram,0x001a44a0) */

void FUN_001a4424(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
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
  undefined8 uStack_40;
  
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_58 = unaff_x20[0xb];
  uStack_60 = unaff_x20[10];
  uStack_48 = unaff_x20[0xd];
  uStack_50 = unaff_x20[0xc];
  uStack_40 = unaff_x20[0xe];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  __ss6HasherV5_seedABSi_tcfC(&uStack_100,0);
  uStack_128 = uStack_d8;
  uStack_130 = uStack_e0;
  uStack_118 = uStack_c8;
  uStack_120 = uStack_d0;
  uStack_110 = uStack_c0;
  uStack_148 = uStack_f8;
  uStack_150 = uStack_100;
  uStack_138 = uStack_e8;
  uStack_140 = uStack_f0;
  FUN_001a3d24(&uStack_150);
  uStack_c8 = uStack_118;
  uStack_d0 = uStack_120;
  uStack_c0 = uStack_110;
  uStack_e8 = uStack_138;
  uStack_f0 = uStack_140;
  uStack_d8 = uStack_128;
  uStack_e0 = uStack_130;
  uStack_f8 = uStack_148;
  uStack_100 = uStack_150;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001a463c; end: 001a46bb;  */

uint FUN_001a463c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = 0;
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_b0 = param_1[0xe];
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  uStack_58 = param_2[9];
  uStack_60 = param_2[8];
  uStack_48 = param_2[0xb];
  uStack_50 = param_2[10];
  uStack_38 = param_2[0xd];
  uStack_40 = param_2[0xc];
  uStack_30 = param_2[0xe];
  FUN_001a7b70(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 001a46bc; end: 001a46e3;  */

undefined * FUN_001a46bc(void)

{
  return &UNK_009b4380;
}



/* Entry: 001a46e4; end: 001a47a3;  */

void FUN_001a46e4(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007e1480,0x65,&uStack_48,&lStack_40);
  puRam0000000000b658c8 = puStack_38;
  lRam0000000000b658c0 = lStack_40;
  puRam0000000000b658d8 = puStack_28;
  puRam0000000000b658d0 = puStack_30;
  puRam0000000000b658e8 = puStack_18;
  puRam0000000000b658e0 = puStack_20;
  return;
}



/* Entry: 001a47a4; end: 001a4843;  */

void FUN_001a47a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af2ac8 != -1) {
    _swift_once(0xaf2ac8,FUN_001a46e4);
  }
  uVar5 = uRam0000000000b658e8;
  uVar4 = uRam0000000000b658e0;
  uVar3 = uRam0000000000b658d8;
  uVar2 = uRam0000000000b658d0;
  uVar1 = uRam0000000000b658c8;
  *param_1 = uRam0000000000b658c0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 001a4844; end: 001a49bb;  */

/* WARNING: Removing unreachable block (ram,0x001a4988) */

void FUN_001a4844(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  uVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        pcVar3 = *(code **)(param_3 + 0x180);
        func_0x001a81d8();
        goto code_r0x001a4974;
      case 2:
        pcVar3 = *(code **)(param_3 + 0x180);
        func_0x001a8218();
        goto code_r0x001a4974;
      case 3:
        pcVar3 = *(code **)(param_3 + 0x48);
        lVar2 = unaff_x20 + 0x1c;
        break;
      case 4:
        pcVar3 = *(code **)(param_3 + 0x150);
        lVar2 = unaff_x20 + 0x20;
        break;
      default:
        goto LAB_001a48cc;
      case 6:
        pcVar3 = *(code **)(param_3 + 0x150);
        lVar2 = unaff_x20 + 0x30;
        break;
      case 7:
        pcVar3 = *(code **)(param_3 + 0x48);
        lVar2 = unaff_x20 + 0x40;
        break;
      case 8:
        pcVar3 = *(code **)(param_3 + 0x138);
        lVar2 = unaff_x20 + 0x44;
        break;
      case 9:
        pcVar3 = *(code **)(param_3 + 0x1a0);
        func_0x0014424c();
code_r0x001a4974:
        (*pcVar3)();
        goto LAB_001a48cc;
      case 10:
        pcVar3 = *(code **)(param_3 + 0x150);
        lVar2 = unaff_x20 + 0x50;
        break;
      case 0xb:
        pcVar3 = *(code **)(param_3 + 0x150);
        lVar2 = unaff_x20 + 0x60;
      }
      (*pcVar3)(lVar2,param_2,param_3);
LAB_001a48cc:
      uVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 001a49bc; end: 001a4b9f;  */

void FUN_001a49bc(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long *unaff_x20;
  long unaff_x21;
  long lVar8;
  
  lVar8 = *unaff_x20;
  if (lVar8 != 0) {
    lVar7 = unaff_x20[1];
    __ss6HasherV8_combineyySuF(1);
    FUN_0019ca80(param_1,lVar8,(char)lVar7);
  }
  lVar8 = unaff_x20[2];
  if (lVar8 != 0) {
    __ss6HasherV8_combineyySuF(2);
    __ss6HasherV8_combineyySuF(lVar8);
  }
  iVar4 = *(int *)((long)unaff_x20 + 0x1c);
  if (iVar4 != 0) {
    __ss6HasherV8_combineyySuF(3);
    __ss6HasherV8_combineyys6UInt64VF((long)iVar4);
  }
  uVar2 = unaff_x20[4];
  uVar3 = unaff_x20[5];
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    __ss6HasherV8_combineyySuF(4);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,uVar3);
  }
  uVar2 = unaff_x20[6];
  uVar3 = unaff_x20[7];
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    __ss6HasherV8_combineyySuF(6);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,uVar3);
  }
  lVar8 = unaff_x20[8];
  if ((int)lVar8 != 0) {
    __ss6HasherV8_combineyySuF(7);
    __ss6HasherV8_combineyys6UInt64VF((long)(int)lVar8);
  }
  if ((*(byte *)((long)unaff_x20 + 0x44) & 1) != 0) {
    __ss6HasherV8_combineyySuF(8);
    __ss6HasherV8_combineyys5UInt8VF(1);
  }
  if ((*(long *)(unaff_x20[9] + 0x10) != 0) && (FUN_0019cc98(unaff_x20[9],9), unaff_x21 != 0)) {
    return;
  }
  uVar2 = unaff_x20[10];
  uVar3 = unaff_x20[0xb];
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    __ss6HasherV8_combineyySuF(10);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,uVar3);
  }
  uVar2 = unaff_x20[0xc];
  uVar3 = unaff_x20[0xd];
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    __ss6HasherV8_combineyySuF(0xb);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,uVar3);
  }
  lVar8 = unaff_x20[0xe];
  uVar5 = (uint)((ulong)unaff_x20[0xf] >> 0x20);
  uVar6 = uVar5 >> 0x1e;
  if (uVar5 >> 0x1e < 2) {
    if (uVar6 == 0) {
      if ((unaff_x20[0xf] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_001a4b80;
    }
    lVar7 = (long)(int)lVar8;
    lVar8 = lVar8 >> 0x20;
  }
  else {
    if (uVar6 != 2) {
      return;
    }
    lVar7 = *(long *)(lVar8 + 0x10);
    lVar8 = *(long *)(lVar8 + 0x18);
  }
  if (lVar7 == lVar8) {
    return;
  }
LAB_001a4b80:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 001a4ba0; end: 001a4df3;  */

void FUN_001a4ba0(undefined1 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  long *plVar3;
  ulong uVar4;
  long *unaff_x20;
  long unaff_x21;
  long lVar5;
  code *pcVar6;
  long lStack_60;
  undefined1 uStack_58;
  
  plVar3 = &lStack_60;
  puVar2 = param_1;
  if (*unaff_x20 != 0) {
    uStack_58 = (undefined1)unaff_x20[1];
    pcVar6 = *(code **)(param_3 + 0x80);
    lStack_60 = *unaff_x20;
    func_0x001a81d8();
    (*pcVar6)(&lStack_60,1,&UNK_009b49a0,puVar2,param_2,param_3);
    puVar2 = (undefined1 *)plVar3;
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (unaff_x20[2] != 0) {
    uStack_58 = (undefined1)unaff_x20[3];
    pcVar6 = *(code **)(param_3 + 0x80);
    lStack_60 = unaff_x20[2];
    func_0x001a8218();
    (*pcVar6)(&lStack_60,2,&UNK_009b4a30,puVar2,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if ((*(int *)((long)unaff_x20 + 0x1c) == 0) ||
     ((**(code **)(param_3 + 0x18))(*(int *)((long)unaff_x20 + 0x1c),3,param_2,param_3),
     unaff_x21 == 0)) {
    uVar1 = unaff_x20[5];
    uVar4 = unaff_x20[4] & 0xffffffffffff;
    if ((uVar1 & 0x2000000000000000) != 0) {
      uVar4 = uVar1 >> 0x38 & 0xf;
    }
    if ((uVar4 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[4],uVar1,4,param_2,param_3), unaff_x21 == 0)) {
      uVar1 = unaff_x20[7];
      uVar4 = unaff_x20[6] & 0xffffffffffff;
      if ((uVar1 & 0x2000000000000000) != 0) {
        uVar4 = uVar1 >> 0x38 & 0xf;
      }
      if (((uVar4 == 0) ||
          ((**(code **)(param_3 + 0x70))(unaff_x20[6],uVar1,6,param_2,param_3), unaff_x21 == 0)) &&
         ((uVar4 = (ulong)*(uint *)(unaff_x20 + 8), *(uint *)(unaff_x20 + 8) == 0 ||
          ((**(code **)(param_3 + 0x18))(uVar4,7,param_2,param_3), unaff_x21 == 0)))) {
        if (*(char *)((long)unaff_x20 + 0x44) == '\x01') {
          uVar4 = 1;
          (**(code **)(param_3 + 0x68))(1,8,param_2,param_3);
          if (unaff_x21 != 0) {
            return;
          }
        }
        lVar5 = unaff_x20[9];
        if (*(long *)(lVar5 + 0x10) != 0) {
          pcVar6 = *(code **)(param_3 + 0x118);
          func_0x0014424c();
          (*pcVar6)(lVar5,9,&UNK_009b4bc8,uVar4,param_2,param_3);
          if (unaff_x21 != 0) {
            return;
          }
        }
        uVar1 = unaff_x20[0xb];
        uVar4 = unaff_x20[10] & 0xffffffffffff;
        if ((uVar1 & 0x2000000000000000) != 0) {
          uVar4 = uVar1 >> 0x38 & 0xf;
        }
        if ((uVar4 == 0) ||
           ((**(code **)(param_3 + 0x70))(unaff_x20[10],uVar1,10,param_2,param_3), unaff_x21 == 0))
        {
          uVar1 = unaff_x20[0xd];
          uVar4 = unaff_x20[0xc] & 0xffffffffffff;
          if ((uVar1 & 0x2000000000000000) != 0) {
            uVar4 = uVar1 >> 0x38 & 0xf;
          }
          if ((uVar4 == 0) ||
             ((**(code **)(param_3 + 0x70))(unaff_x20[0xc],uVar1,0xb,param_2,param_3),
             unaff_x21 == 0)) {
            FUN_0013ad2c(param_1,unaff_x20[0xe],unaff_x20[0xf],param_2,param_3);
          }
        }
      }
    }
  }
  return;
}



/* Entry: 001a4df4; end: 001a4df7;  */

ulong FUN_001a4df4(ulong *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong *unaff_x20;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  uVar7 = *param_1;
  FUN_001a1d50(uVar7,(char)param_1[1],*param_2,*(undefined1 *)(param_2 + 1));
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  uVar7 = param_1[2];
  uVar14 = param_2[2];
  if (*(char *)(param_2 + 3) == '\x01') {
    if ((long)uVar14 < 2) {
      if (uVar14 == 0) {
        if (uVar7 != 0) {
          return 0;
        }
      }
      else if (uVar7 != 1) {
        return 0;
      }
    }
    else if (uVar14 == 2) {
      if (uVar7 != 2) {
        return 0;
      }
    }
    else if (uVar7 != 3) {
      return 0;
    }
  }
  else if (uVar7 != uVar14) {
    return 0;
  }
  if (*(int *)((long)param_1 + 0x1c) != *(int *)((long)param_2 + 0x1c)) {
    return 0;
  }
  uVar7 = param_1[4];
  if (((uVar7 != param_2[4]) || (param_1[5] != param_2[5])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar7 & 1) == 0)) {
    return 0;
  }
  uVar7 = param_1[6];
  if (((uVar7 != param_2[6]) || (param_1[7] != param_2[7])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar7 & 1) == 0)) {
    return 0;
  }
  if ((int)param_1[8] != *(int *)(param_2 + 8)) {
    return 0;
  }
  if (((*(byte *)((long)param_1 + 0x44) ^ *(byte *)((long)param_2 + 0x44)) & 1) != 0) {
    return 0;
  }
  uVar7 = param_1[9];
  FUN_001455e0(uVar7,param_2[9]);
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  uVar7 = param_1[10];
  if (((uVar7 != param_2[10]) || (param_1[0xb] != param_2[0xb])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar7 & 1) == 0)) {
    return 0;
  }
  uVar7 = param_1[0xc];
  if (((uVar7 != param_2[0xc]) || (param_1[0xd] != param_2[0xd])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar7 & 1) == 0)) {
    return 0;
  }
  uVar7 = param_1[0xe];
  pbVar8 = (byte *)param_1[0xf];
  lVar10 = param_2[0xe];
  uVar14 = param_2[0xf];
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar8 >> 0x20);
  uVar11 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar14 >> 0x20);
  uVar15 = uVar3 >> 0x1e;
  iVar5 = (int)uVar7;
  if ((ulong)pbVar8 >> 0x3e == 3) {
    uVar13 = 0;
    if (((uVar7 != 0) || (pbVar8 != (byte *)0xc000000000000000)) ||
       ((uVar14 >> 0x3e < 3 || ((uVar13 = 0, lVar10 != 0 || (uVar14 != 0xc000000000000000))))))
    goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar11 == 0) {
        uVar13 = (ulong)pbVar8 >> 0x30 & 0xff;
      }
      else {
        iVar12 = (int)(uVar7 >> 0x20);
        if (SBORROW4(iVar12,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar13 = (ulong)(iVar12 - iVar5);
      }
joined_r0x000389b8:
      if (1 < uVar3 >> 0x1e) goto LAB_00038898;
LAB_000388cc:
      if (uVar15 == 0) {
        uVar16 = uVar14 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar12 = (int)((ulong)lVar10 >> 0x20);
      if (SBORROW4(iVar12,(int)lVar10)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar13 != (long)(iVar12 - (int)lVar10)) goto LAB_0003899c;
    }
    else {
      if (uVar11 == 2) {
        uVar13 = *(long *)(uVar7 + 0x18) - *(long *)(uVar7 + 0x10);
        if (SBORROW8(*(long *)(uVar7 + 0x18),*(long *)(uVar7 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar13 = 0;
      if (uVar15 < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar15 != 2) {
        uVar7 = (ulong)(uVar13 == 0);
        goto LAB_00038af8;
      }
      uVar16 = *(long *)(lVar10 + 0x18) - *(long *)(lVar10 + 0x10);
      if (SBORROW8(*(long *)(lVar10 + 0x18),*(long *)(lVar10 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar13 != uVar16) {
LAB_0003899c:
        uVar7 = 0;
        goto LAB_00038af8;
      }
    }
    if (0 < (long)uVar13) {
      if (uVar11 < 2) {
        if (uVar11 == 0) {
          abStack_70[0] = (byte)uVar7;
          abStack_70[1] = (byte)(uVar7 >> 8);
          abStack_70[2] = (byte)(uVar7 >> 0x10);
          abStack_70[3] = (byte)(uVar7 >> 0x18);
          abStack_70[4] = (byte)(uVar7 >> 0x20);
          abStack_70[5] = (byte)(uVar7 >> 0x28);
          abStack_70[6] = (byte)(uVar7 >> 0x30);
          abStack_70[7] = (byte)(uVar7 >> 0x38);
          abStack_70[8] = (byte)pbVar8;
          abStack_70[9] = (byte)((ulong)pbVar8 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar8 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar8 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar8 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar8 >> 0x28);
          pbVar8 = abStack_70 + ((ulong)pbVar8 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar7 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        uVar13 = ((long)uVar7 >> 0x20) - lVar17;
        if ((long)uVar7 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar7 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          uVar7 = 0;
        }
        else {
          uVar16 = uVar7;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar16)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          uVar7 = (lVar17 - uVar16) + uVar7;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (uVar7 != 0) {
            if ((long)uVar13 <= (long)uVar16) {
              uVar16 = uVar13;
            }
            pbVar9 = (byte *)(uVar16 + uVar7);
            goto LAB_00038aec;
          }
        }
        pbVar9 = (byte *)0x0;
      }
      else {
        if (uVar11 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar8 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(uVar7 + 0x10);
        lVar1 = *(long *)(uVar7 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        uVar13 = uVar7;
        if (uVar7 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar13)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          uVar7 = (lVar17 - uVar13) + uVar7;
        }
        uVar16 = lVar1 - lVar17;
        if (SBORROW8(lVar1,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (uVar7 == 0) {
          pbVar9 = (byte *)0x0;
        }
        else {
          if ((long)uVar16 <= (long)uVar13) {
            uVar13 = uVar16;
          }
          pbVar9 = (byte *)(uVar13 + uVar7);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar8 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,uVar7,pbVar9,lVar10,uVar14);
      uVar7 = (ulong)abStack_70[0];
      pbVar8 = pbVar9;
      goto LAB_00038af8;
    }
  }
  uVar7 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar7;
  }
  ___stack_chk_fail();
  lVar17 = (long)pbVar8 - uVar7;
  if (SBORROW8((long)pbVar8,uVar7)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar16 = *unaff_x20;
  uVar13 = uVar16 & 0xffffffffffffff8;
  uVar7 = uVar13 + 0x20 + uVar7 * 8;
  uVar6 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar14 = uVar7;
  _swift_arrayDestroy(uVar7,lVar17,uVar6);
  lVar1 = lVar10 - lVar17;
  if (SBORROW8(lVar10,lVar17)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar1 != 0) {
    if (uVar16 >> 0x3e == 0) {
      uVar14 = *(ulong *)(uVar13 + 0x10);
      lVar17 = uVar14 - (long)pbVar8;
    }
    else {
      uVar14 = uVar13;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar14 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar17 = uVar14 - (long)pbVar8;
    }
    if (SBORROW8(uVar14,(long)pbVar8)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar7 = uVar7 + lVar10 * 8;
    uVar14 = uVar13 + 0x20 + (long)pbVar8 * 8;
    if (uVar7 != uVar14 || uVar14 + lVar17 * 8 <= uVar7) {
      _memmove(uVar7,uVar14,lVar17 << 3);
    }
    if (uVar16 >> 0x3e == 0) {
      uVar14 = *(ulong *)(uVar13 + 0x10);
    }
    else {
      uVar14 = uVar13;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar14 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar14,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar13 + 0x10) = uVar14 + lVar1;
  }
  if (lVar10 < 1) {
    return uVar14;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
  (*pcVar4)();
}



/* Entry: 001a4df8; end: 001a4e87;  */

/* WARNING: Removing unreachable block (ram,0x001a4e48) */

void FUN_001a4df8(void)

{
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_80,0);
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_90 = uStack_40;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  FUN_001a49bc(&uStack_d0);
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_40 = uStack_90;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001a4e88; end: 001a4ef3;  */

void FUN_001a4e88(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[6] = 0;
  param_1[7] = 0xe000000000000000;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  param_1[9] = PTR___swiftEmptyArrayStorage_0099b8f0;
  param_1[10] = 0;
  param_1[0xb] = 0xe000000000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0xe000000000000000;
  param_1[0xf] = 0xc000000000000000;
  param_1[0xe] = 0;
  return;
}



/* Entry: 001a4ef4; end: 001a4f23;  */

undefined1  [16] FUN_001a4ef4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x70);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x70),
                  *(undefined8 *)(unaff_x20 + 0x78));
  return auVar1;
}



/* Entry: 001a4f24; end: 001a4f57;  */

void FUN_001a4f24(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  *(undefined8 *)(unaff_x20 + 0x70) = param_1;
  *(undefined8 *)(unaff_x20 + 0x78) = param_2;
  return;
}



/* Entry: 001a4f58; end: 001a4f6b;  */

undefined1  [16] FUN_001a4f58(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x70;
  auVar1._0_8_ = 0x1a4f68;
  return auVar1;
}



/* Entry: 001a4f6c; end: 001a4f93;  */

void FUN_001a4f6c(void)

{
  FUN_001a4844();
  return;
}



/* Entry: 001a4f94; end: 001a5033;  */

void FUN_001a4f94(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af2ac8 != -1) {
    _swift_once(0xaf2ac8,FUN_001a46e4);
  }
  uVar5 = uRam0000000000b658e8;
  uVar4 = uRam0000000000b658e0;
  uVar3 = uRam0000000000b658d8;
  uVar2 = uRam0000000000b658d0;
  uVar1 = uRam0000000000b658c8;
  *param_1 = uRam0000000000b658c0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 001a5034; end: 001a506f;  */

void FUN_001a5034(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2c28;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2c28,&UNK_007e12a0);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 001a5070; end: 001a5273;  */

/* WARNING: Removing unreachable block (ram,0x001a50e4) */

void FUN_001a5070(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_58 = unaff_x20[0xb];
  uStack_60 = unaff_x20[10];
  uStack_48 = unaff_x20[0xd];
  uStack_50 = unaff_x20[0xc];
  uStack_38 = unaff_x20[0xf];
  uStack_40 = unaff_x20[0xe];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  __ss6HasherV5_seedABSi_tcfC(&uStack_100,0);
  uStack_128 = uStack_d8;
  uStack_130 = uStack_e0;
  uStack_118 = uStack_c8;
  uStack_120 = uStack_d0;
  uStack_110 = uStack_c0;
  uStack_148 = uStack_f8;
  uStack_150 = uStack_100;
  uStack_138 = uStack_e8;
  uStack_140 = uStack_f0;
  FUN_001a49bc(&uStack_150);
  uStack_c8 = uStack_118;
  uStack_d0 = uStack_120;
  uStack_c0 = uStack_110;
  uStack_e8 = uStack_138;
  uStack_f0 = uStack_140;
  uStack_d8 = uStack_128;
  uStack_e0 = uStack_130;
  uStack_f8 = uStack_148;
  uStack_100 = uStack_150;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001a5274; end: 001a52e3;  */

uint FUN_001a5274(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_a8 = param_1[0xf];
  uStack_b0 = param_1[0xe];
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  uStack_58 = param_2[9];
  uStack_60 = param_2[8];
  uStack_48 = param_2[0xb];
  uStack_50 = param_2[10];
  uStack_38 = param_2[0xd];
  uStack_40 = param_2[0xc];
  uStack_28 = param_2[0xf];
  uStack_30 = param_2[0xe];
  FUN_001a79f8(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 001a52e4; end: 001a53a3;  */

void FUN_001a52e4(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007e1380,0xf8,&uStack_48,&lStack_40);
  puRam0000000000b658f8 = puStack_38;
  lRam0000000000b658f0 = lStack_40;
  puRam0000000000b65908 = puStack_28;
  puRam0000000000b65900 = puStack_30;
  puRam0000000000b65918 = puStack_18;
  puRam0000000000b65910 = puStack_20;
  return;
}



/* Entry: 001a53a4; end: 001a54e3;  */

void FUN_001a53a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af2ae0 != -1) {
    _swift_once(0xaf2ae0,FUN_001a52e4);
  }
  uVar5 = uRam0000000000b65918;
  uVar4 = uRam0000000000b65910;
  uVar3 = uRam0000000000b65908;
  uVar2 = uRam0000000000b65900;
  uVar1 = uRam0000000000b658f8;
  *param_1 = uRam0000000000b658f0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 001a54e4; end: 001a55a3;  */

void FUN_001a54e4(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007e1320,0x59,&uStack_48,&lStack_40);
  puRam0000000000b65928 = puStack_38;
  lRam0000000000b65920 = lStack_40;
  puRam0000000000b65938 = puStack_28;
  puRam0000000000b65930 = puStack_30;
  puRam0000000000b65948 = puStack_18;
  puRam0000000000b65940 = puStack_20;
  return;
}



/* Entry: 001a55a4; end: 001a56e3;  */

void FUN_001a55a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af2ae8 != -1) {
    _swift_once(0xaf2ae8,FUN_001a54e4);
  }
  uVar5 = uRam0000000000b65948;
  uVar4 = uRam0000000000b65940;
  uVar3 = uRam0000000000b65938;
  uVar2 = uRam0000000000b65930;
  uVar1 = uRam0000000000b65928;
  *param_1 = uRam0000000000b65920;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 001a56e4; end: 001a570b;  */

undefined * FUN_001a56e4(void)

{
  return &UNK_009b4390;
}



/* Entry: 001a570c; end: 001a57cb;  */

void FUN_001a570c(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007e12e0,0x3c,&uStack_48,&lStack_40);
  puRam0000000000b65958 = puStack_38;
  lRam0000000000b65950 = lStack_40;
  puRam0000000000b65968 = puStack_28;
  puRam0000000000b65960 = puStack_30;
  puRam0000000000b65978 = puStack_18;
  puRam0000000000b65970 = puStack_20;
  return;
}



/* Entry: 001a57cc; end: 001a586b;  */

void FUN_001a57cc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af2af0 != -1) {
    _swift_once(0xaf2af0,FUN_001a570c);
  }
  uVar5 = uRam0000000000b65978;
  uVar4 = uRam0000000000b65970;
  uVar3 = uRam0000000000b65968;
  uVar2 = uRam0000000000b65960;
  uVar1 = uRam0000000000b65958;
  *param_1 = uRam0000000000b65950;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 001a586c; end: 001a59df;  */

/* WARNING: Removing unreachable block (ram,0x001a59a0) */

void FUN_001a586c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 4) {
        if (lVar1 != 1) {
          if (lVar1 == 2) {
            pcVar5 = *(code **)(param_3 + 0x1a0);
            func_0x001a8258();
            lVar2 = unaff_x20 + 0x10;
            puVar3 = &UNK_009b4b40;
          }
          else {
            if (lVar1 != 3) goto LAB_001a5908;
            pcVar5 = *(code **)(param_3 + 0x1a0);
            func_0x0014424c();
            lVar2 = unaff_x20 + 0x18;
            puVar3 = &UNK_009b4bc8;
          }
          goto LAB_001a58f4;
        }
        pcVar5 = *(code **)(param_3 + 0x150);
LAB_001a5990:
        (*pcVar5)();
      }
      else {
        if (lVar1 == 4) {
          pcVar5 = *(code **)(param_3 + 0x198);
          FUN_00145594();
          lVar2 = unaff_x20 + 0x50;
          puVar3 = &UNK_009b3c08;
        }
        else {
          if (lVar1 != 5) {
            if (lVar1 != 6) goto LAB_001a5908;
            pcVar5 = *(code **)(param_3 + 0x150);
            goto LAB_001a5990;
          }
          pcVar5 = *(code **)(param_3 + 0x180);
          func_0x001442cc();
          lVar2 = unaff_x20 + 0x20;
          puVar3 = &UNK_009b47d0;
        }
LAB_001a58f4:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_001a5908:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 001a59e0; end: 001a5ba7;  */

void FUN_001a59e0(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar8;
  ulong uVar9;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar8 = uVar1 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar8 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar8 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
  }
  if ((*(long *)(unaff_x20[2] + 0x10) != 0) && (FUN_001a1900(unaff_x20[2],2), unaff_x21 != 0)) {
    return;
  }
  if ((*(long *)(unaff_x20[3] + 0x10) != 0) && (FUN_0019cc98(unaff_x20[3],3), unaff_x21 != 0)) {
    return;
  }
  uVar8 = unaff_x20[0xb];
  if (uVar8 != 0) {
    uVar1 = unaff_x20[0xc];
    uVar2 = unaff_x20[0xd];
    uVar9 = unaff_x20[10];
    __ss6HasherV8_combineyySuF(4);
    _swift_bridgeObjectRetain(uVar8);
    func_0x00023304(uVar1,uVar2);
    func_0x00192fb8(param_1,uVar9,uVar8,uVar1,uVar2);
    FUN_00141808(uVar9,uVar8,uVar1,uVar2);
  }
  uVar8 = unaff_x20[4];
  if ((char)unaff_x20[5] == '\x01') {
    if (uVar8 != 0) {
      __ss6HasherV8_combineyySuF(5);
      bVar4 = uVar8 == 2;
      uVar8 = 1;
      if (bVar4) {
        uVar8 = 2;
      }
LAB_001a5b00:
      __ss6HasherV8_combineyySuF(uVar8);
    }
  }
  else if (uVar8 != 0) {
    __ss6HasherV8_combineyySuF(5);
    goto LAB_001a5b00;
  }
  uVar1 = unaff_x20[6];
  uVar2 = unaff_x20[7];
  uVar8 = uVar1 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar8 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar8 != 0) {
    __ss6HasherV8_combineyySuF(6);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
  }
  uVar8 = unaff_x20[8];
  uVar3 = (uint)(unaff_x20[9] >> 0x20);
  uVar5 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar5 == 0) {
      if ((unaff_x20[9] & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_001a5b80;
    }
    lVar6 = (long)(int)uVar8;
    lVar7 = (long)uVar8 >> 0x20;
  }
  else {
    if (uVar5 != 2) {
      return;
    }
    lVar6 = *(long *)(uVar8 + 0x10);
    lVar7 = *(long *)(uVar8 + 0x18);
  }
  if (lVar6 == lVar7) {
    return;
  }
LAB_001a5b80:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 001a5ba8; end: 001a5d47;  */

void FUN_001a5ba8(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar4;
  code *pcVar5;
  ulong uStack_60;
  undefined1 uStack_58;
  
  uVar2 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar4 = uVar2 & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar4 = uVar1 >> 0x38 & 0xf;
  }
  if ((uVar4 == 0) || ((**(code **)(param_3 + 0x70))(uVar2,uVar1,1,param_2,param_3), unaff_x21 == 0)
     ) {
    uVar4 = unaff_x20[2];
    if (*(long *)(uVar4 + 0x10) != 0) {
      pcVar5 = *(code **)(param_3 + 0x118);
      func_0x001a8258();
      (*pcVar5)(uVar4,2,&UNK_009b4b40,uVar2,param_2,param_3);
      uVar2 = uVar4;
      if (unaff_x21 != 0) {
        return;
      }
    }
    uVar4 = unaff_x20[3];
    if (*(long *)(uVar4 + 0x10) != 0) {
      pcVar5 = *(code **)(param_3 + 0x118);
      func_0x0014424c();
      (*pcVar5)(uVar4,3,&UNK_009b4bc8,uVar2,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    puVar3 = unaff_x20;
    FUN_001a5d48();
    if (unaff_x21 == 0) {
      if (unaff_x20[4] != 0) {
        uStack_58 = (undefined1)unaff_x20[5];
        pcVar5 = *(code **)(param_3 + 0x80);
        uStack_60 = unaff_x20[4];
        func_0x001442cc();
        (*pcVar5)(&uStack_60,5,&UNK_009b47d0,puVar3,param_2,param_3);
      }
      uVar2 = unaff_x20[7];
      uVar4 = unaff_x20[6] & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar4 = uVar2 >> 0x38 & 0xf;
      }
      if (uVar4 != 0) {
        (**(code **)(param_3 + 0x70))(unaff_x20[6],uVar2,6,param_2,param_3);
      }
      FUN_0013ad2c(param_1,unaff_x20[8],unaff_x20[9],param_2,param_3);
    }
  }
  return;
}



/* Entry: 001a5d48; end: 001a5dcb;  */

void FUN_001a5d48(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x58);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x50);
    uStack_48 = *(undefined8 *)(param_1 + 0x68);
    uStack_50 = *(undefined8 *)(param_1 + 0x60);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_00145594();
    (*pcVar1)(&uStack_60,4,&UNK_009b3c08,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 001a5dcc; end: 001a5dcf;  */

uint FUN_001a5dcc(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_c0 [32];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar2 = *param_1;
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar2 & 1) != 0)) {
    uVar2 = param_1[2];
    FUN_00147b98(uVar2,param_2[2]);
    if ((uVar2 & 1) != 0) {
      uVar2 = param_1[3];
      FUN_001455e0(uVar2,param_2[3]);
      if ((uVar2 & 1) != 0) {
        uVar4 = param_1[0xb];
        uVar2 = param_1[10];
        uVar9 = param_1[0xd];
        uVar7 = param_1[0xc];
        uVar6 = param_2[0xb];
        uVar5 = param_2[10];
        uVar10 = param_2[0xd];
        uVar8 = param_2[0xc];
        uStack_a0 = uVar5;
        uStack_98 = uVar6;
        uStack_90 = uVar8;
        uStack_88 = uVar10;
        uStack_80 = uVar2;
        uStack_78 = uVar4;
        uStack_70 = uVar7;
        uStack_68 = uVar9;
        if (uVar4 == 0) {
          if (uVar6 != 0) goto LAB_001a7fcc;
          func_0x001a9e74(&uStack_80,auStack_c0,0xaf0660,&UNK_007daae0);
          func_0x001a9e74(&uStack_a0,auStack_c0,0xaf0660,&UNK_007daae0);
LAB_001a8090:
          FUN_00141808(uVar2,uVar4,uVar7,uVar9);
          uVar2 = param_1[4];
          uVar4 = param_2[4];
          if ((char)param_2[5] == '\x01') {
            if (uVar4 == 0) {
              if (uVar2 == 0) goto LAB_001a814c;
            }
            else if (uVar4 == 1) {
              if (uVar2 == 1) {
LAB_001a814c:
                uVar2 = param_1[6];
                if (((uVar2 == param_2[6]) && (param_1[7] == param_2[7])) ||
                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (), (uVar2 & 1) != 0)) {
                  uVar2 = param_1[8];
                  FUN_00038814(uVar2,param_1[9],param_2[8],param_2[9]);
                  uVar1 = (uint)uVar2;
                  goto LAB_001a8030;
                }
              }
            }
            else if (uVar2 == 2) goto LAB_001a814c;
          }
          else if (uVar2 == uVar4) goto LAB_001a814c;
        }
        else {
          if (uVar6 == 0) {
LAB_001a7fcc:
            func_0x001a9e74(&uStack_80,auStack_c0,0xaf0660,&UNK_007daae0);
            func_0x001a9e74(&uStack_a0,auStack_c0,0xaf0660,&UNK_007daae0);
            FUN_00141808(uVar2,uVar4,uVar7,uVar9);
            uVar2 = uVar5;
            uVar4 = uVar6;
            uVar7 = uVar8;
            uVar9 = uVar10;
          }
          else if (((uVar2 == uVar5) && (uVar4 == uVar6)) ||
                  (uVar3 = uVar2,
                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (uVar2,uVar4,uVar5,uVar6,0), (uVar3 & 1) != 0)) {
            func_0x001a9e74(&uStack_80,auStack_c0,0xaf0660,&UNK_007daae0);
            func_0x001a9e74(&uStack_a0,auStack_c0,0xaf0660,&UNK_007daae0);
            uVar3 = uVar7;
            FUN_00038814(uVar7,uVar9,uVar8,uVar10);
            FUN_00141808(uVar5,uVar6,uVar8,uVar10);
            if ((uVar3 & 1) != 0) goto LAB_001a8090;
          }
          else {
            func_0x001a9e74(&uStack_80,auStack_c0,0xaf0660,&UNK_007daae0);
            func_0x001a9e74(&uStack_a0,auStack_c0,0xaf0660,&UNK_007daae0);
            FUN_00141808(uVar5,uVar6,uVar8,uVar10);
          }
          FUN_00141808(uVar2,uVar4,uVar7,uVar9);
        }
      }
    }
  }
  uVar1 = 0;
LAB_001a8030:
  return uVar1 & 1;
}



/* Entry: 001a5dd0; end: 001a5e5f;  */

/* WARNING: Removing unreachable block (ram,0x001a5e20) */

void FUN_001a5dd0(void)

{
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_80,0);
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_90 = uStack_40;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  FUN_001a59e0(&uStack_d0);
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_40 = uStack_90;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001a5e60; end: 001a5eb7;  */

void FUN_001a5e60(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  param_1[2] = PTR___swiftEmptyArrayStorage_0099b8f0;
  param_1[3] = puVar1;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  param_1[7] = 0xe000000000000000;
  param_1[9] = 0xc000000000000000;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  return;
}



/* Entry: 001a5eb8; end: 001a5ee7;  */

undefined1  [16] FUN_001a5eb8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x40);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x40),
                  *(undefined8 *)(unaff_x20 + 0x48));
  return auVar1;
}



/* Entry: 001a5ee8; end: 001a5f1b;  */

void FUN_001a5ee8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  *(undefined8 *)(unaff_x20 + 0x48) = param_2;
  return;
}



/* Entry: 001a5f1c; end: 001a5f2f;  */

undefined1  [16] FUN_001a5f1c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x40;
  auVar1._0_8_ = 0x1a5f2c;
  return auVar1;
}



/* Entry: 001a5f30; end: 001a5f43;  */

void FUN_001a5f30(void)

{
  FUN_001a586c();
  return;
}



/* Entry: 001a5f44; end: 001a5f8b;  */

void FUN_001a5f44(void)

{
  FUN_001a5ba8();
  return;
}



/* Entry: 001a5f8c; end: 001a602b;  */

void FUN_001a5f8c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af2af0 != -1) {
    _swift_once(0xaf2af0,FUN_001a570c);
  }
  uVar5 = uRam0000000000b65978;
  uVar4 = uRam0000000000b65970;
  uVar3 = uRam0000000000b65968;
  uVar2 = uRam0000000000b65960;
  uVar1 = uRam0000000000b65958;
  *param_1 = uRam0000000000b65950;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 001a602c; end: 001a6067;  */

void FUN_001a602c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2c20;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2c20,&UNK_007e1298);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 001a6068; end: 001a6267;  */

/* WARNING: Removing unreachable block (ram,0x001a60dc) */

void FUN_001a6068(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uStack_48 = unaff_x20[0xb];
  uStack_50 = unaff_x20[10];
  uStack_38 = unaff_x20[0xd];
  uStack_40 = unaff_x20[0xc];
  uStack_98 = unaff_x20[1];
  uStack_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  __ss6HasherV5_seedABSi_tcfC(&uStack_f0,0);
  uStack_118 = uStack_c8;
  uStack_120 = uStack_d0;
  uStack_108 = uStack_b8;
  uStack_110 = uStack_c0;
  uStack_100 = uStack_b0;
  uStack_138 = uStack_e8;
  uStack_140 = uStack_f0;
  uStack_128 = uStack_d8;
  uStack_130 = uStack_e0;
  FUN_001a59e0(&uStack_140);
  uStack_b8 = uStack_108;
  uStack_c0 = uStack_110;
  uStack_b0 = uStack_100;
  uStack_d8 = uStack_128;
  uStack_e0 = uStack_130;
  uStack_c8 = uStack_118;
  uStack_d0 = uStack_120;
  uStack_e8 = uStack_138;
  uStack_f0 = uStack_140;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001a6268; end: 001a62cb;  */

uint FUN_001a6268(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_88 = param_1[0xd];
  uStack_90 = param_1[0xc];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  uStack_18 = param_2[0xd];
  uStack_20 = param_2[0xc];
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  func_0x001a7e84(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 001a62cc; end: 001a62f3;  */

undefined * FUN_001a62cc(void)

{
  return &UNK_009b43a0;
}



/* Entry: 001a62f4; end: 001a63b3;  */

void FUN_001a62f4(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007e12c0,0x18,&uStack_48,&lStack_40);
  puRam0000000000b65988 = puStack_38;
  lRam0000000000b65980 = lStack_40;
  puRam0000000000b65998 = puStack_28;
  puRam0000000000b65990 = puStack_30;
  puRam0000000000b659a8 = puStack_18;
  puRam0000000000b659a0 = puStack_20;
  return;
}



/* Entry: 001a63b4; end: 001a6453;  */

void FUN_001a63b4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af2b00 != -1) {
    _swift_once(0xaf2b00,FUN_001a62f4);
  }
  uVar5 = uRam0000000000b659a8;
  uVar4 = uRam0000000000b659a0;
  uVar3 = uRam0000000000b65998;
  uVar2 = uRam0000000000b65990;
  uVar1 = uRam0000000000b65988;
  *param_1 = uRam0000000000b65980;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 001a6454; end: 001a653b;  */

/* WARNING: Removing unreachable block (ram,0x001a6538) */

void FUN_001a6454(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        pcVar3 = *(code **)(param_3 + 0x1a0);
        func_0x0014424c();
        (*pcVar3)(unaff_x20 + 0x18,&UNK_009b4bc8,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x48);
        }
        else {
          if (lVar1 != 1) goto LAB_001a64e0;
          pcVar3 = *(code **)(param_3 + 0x150);
        }
        (*pcVar3)();
      }
LAB_001a64e0:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 001a653c; end: 001a6623;  */

void FUN_001a653c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar4 = uVar1 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar4 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar4 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
  }
  uVar4 = unaff_x20[2];
  if ((int)uVar4 != 0) {
    __ss6HasherV8_combineyySuF(2);
    __ss6HasherV8_combineyys6UInt64VF((long)(int)uVar4);
  }
  if ((*(long *)(unaff_x20[3] + 0x10) != 0) && (FUN_0019cc98(unaff_x20[3],3), unaff_x21 != 0)) {
    return;
  }
  uVar4 = unaff_x20[4];
  uVar3 = (uint)(unaff_x20[5] >> 0x20);
  uVar5 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar5 == 0) {
      if ((unaff_x20[5] & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_001a6604;
    }
    lVar6 = (long)(int)uVar4;
    lVar7 = (long)uVar4 >> 0x20;
  }
  else {
    if (uVar5 != 2) {
      return;
    }
    lVar6 = *(long *)(uVar4 + 0x10);
    lVar7 = *(long *)(uVar4 + 0x18);
  }
  if (lVar6 == lVar7) {
    return;
  }
LAB_001a6604:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 001a6624; end: 001a6707;  */

void FUN_001a6624(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar2;
  code *pcVar3;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if (((uVar1 == 0) ||
      ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) &&
     ((uVar1 = (ulong)(uint)unaff_x20[2], (uint)unaff_x20[2] == 0 ||
      ((**(code **)(param_3 + 0x18))(uVar1,2,param_2,param_3), unaff_x21 == 0)))) {
    uVar2 = unaff_x20[3];
    if (*(long *)(uVar2 + 0x10) != 0) {
      pcVar3 = *(code **)(param_3 + 0x118);
      func_0x0014424c();
      (*pcVar3)(uVar2,3,&UNK_009b4bc8,uVar1,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    FUN_0013ad2c(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  }
  return;
}



/* Entry: 001a6708; end: 001a6783;  */

ulong FUN_001a6708(ulong *param_1,ulong *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong *unaff_x20;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  uVar8 = *param_1;
  if (((uVar8 != *param_2 || param_1[1] != param_2[1]) &&
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar8 & 1) == 0)) || ((int)param_1[2] != (int)param_2[2])) {
    return 0;
  }
  uVar8 = param_1[3];
  FUN_001455e0(uVar8,param_2[3]);
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  uVar8 = param_1[4];
  pbVar9 = (byte *)param_1[5];
  uVar11 = param_2[4];
  uVar7 = param_2[5];
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar9 >> 0x20);
  uVar12 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar7 >> 0x20);
  uVar15 = uVar3 >> 0x1e;
  iVar5 = (int)uVar8;
  if ((ulong)pbVar9 >> 0x3e == 3) {
    uVar14 = 0;
    if (((uVar8 != 0) || (pbVar9 != (byte *)0xc000000000000000)) ||
       ((uVar7 >> 0x3e < 3 || ((uVar14 = 0, uVar11 != 0 || (uVar7 != 0xc000000000000000))))))
    goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar12 == 0) {
        uVar14 = (ulong)pbVar9 >> 0x30 & 0xff;
      }
      else {
        iVar13 = (int)(uVar8 >> 0x20);
        if (SBORROW4(iVar13,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar14 = (ulong)(iVar13 - iVar5);
      }
joined_r0x000389b8:
      if (1 < uVar3 >> 0x1e) goto LAB_00038898;
LAB_000388cc:
      if (uVar15 == 0) {
        uVar16 = uVar7 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar13 = (int)(uVar11 >> 0x20);
      if (SBORROW4(iVar13,(int)uVar11)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar14 != (long)(iVar13 - (int)uVar11)) goto LAB_0003899c;
    }
    else {
      if (uVar12 == 2) {
        uVar14 = *(long *)(uVar8 + 0x18) - *(long *)(uVar8 + 0x10);
        if (SBORROW8(*(long *)(uVar8 + 0x18),*(long *)(uVar8 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar14 = 0;
      if (uVar15 < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar15 != 2) {
        uVar8 = (ulong)(uVar14 == 0);
        goto LAB_00038af8;
      }
      uVar16 = *(long *)(uVar11 + 0x18) - *(long *)(uVar11 + 0x10);
      if (SBORROW8(*(long *)(uVar11 + 0x18),*(long *)(uVar11 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar14 != uVar16) {
LAB_0003899c:
        uVar8 = 0;
        goto LAB_00038af8;
      }
    }
    if (0 < (long)uVar14) {
      if (uVar12 < 2) {
        if (uVar12 == 0) {
          abStack_70[0] = (byte)uVar8;
          abStack_70[1] = (byte)(uVar8 >> 8);
          abStack_70[2] = (byte)(uVar8 >> 0x10);
          abStack_70[3] = (byte)(uVar8 >> 0x18);
          abStack_70[4] = (byte)(uVar8 >> 0x20);
          abStack_70[5] = (byte)(uVar8 >> 0x28);
          abStack_70[6] = (byte)(uVar8 >> 0x30);
          abStack_70[7] = (byte)(uVar8 >> 0x38);
          abStack_70[8] = (byte)pbVar9;
          abStack_70[9] = (byte)((ulong)pbVar9 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar9 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar9 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar9 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar9 >> 0x28);
          pbVar9 = abStack_70 + ((ulong)pbVar9 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar8 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        uVar14 = ((long)uVar8 >> 0x20) - lVar17;
        if ((long)uVar8 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar8 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          uVar8 = 0;
        }
        else {
          uVar16 = uVar8;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar16)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          uVar8 = (lVar17 - uVar16) + uVar8;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (uVar8 != 0) {
            if ((long)uVar14 <= (long)uVar16) {
              uVar16 = uVar14;
            }
            pbVar10 = (byte *)(uVar16 + uVar8);
            goto LAB_00038aec;
          }
        }
        pbVar10 = (byte *)0x0;
      }
      else {
        if (uVar12 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar9 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(uVar8 + 0x10);
        lVar1 = *(long *)(uVar8 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        uVar14 = uVar8;
        if (uVar8 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar14)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          uVar8 = (lVar17 - uVar14) + uVar8;
        }
        uVar16 = lVar1 - lVar17;
        if (SBORROW8(lVar1,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (uVar8 == 0) {
          pbVar10 = (byte *)0x0;
        }
        else {
          if ((long)uVar16 <= (long)uVar14) {
            uVar14 = uVar16;
          }
          pbVar10 = (byte *)(uVar14 + uVar8);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar9 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,uVar8,pbVar10,uVar11,uVar7);
      uVar8 = (ulong)abStack_70[0];
      pbVar9 = pbVar10;
      goto LAB_00038af8;
    }
  }
  uVar8 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar8;
  }
  ___stack_chk_fail();
  lVar17 = (long)pbVar9 - uVar8;
  if (SBORROW8((long)pbVar9,uVar8)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar16 = *unaff_x20;
  uVar14 = uVar16 & 0xffffffffffffff8;
  uVar8 = uVar14 + 0x20 + uVar8 * 8;
  uVar6 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar7 = uVar8;
  _swift_arrayDestroy(uVar8,lVar17,uVar6);
  lVar1 = uVar11 - lVar17;
  if (SBORROW8(uVar11,lVar17)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar1 != 0) {
    if (uVar16 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar14 + 0x10);
      lVar17 = uVar7 - (long)pbVar9;
    }
    else {
      uVar7 = uVar14;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar7 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar17 = uVar7 - (long)pbVar9;
    }
    if (SBORROW8(uVar7,(long)pbVar9)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar8 = uVar8 + uVar11 * 8;
    uVar7 = uVar14 + 0x20 + (long)pbVar9 * 8;
    if (uVar8 != uVar7 || uVar7 + lVar17 * 8 <= uVar8) {
      _memmove(uVar8,uVar7,lVar17 << 3);
    }
    if (uVar16 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar14 + 0x10);
    }
    else {
      uVar7 = uVar14;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar7 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar7,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar14 + 0x10) = uVar7 + lVar1;
  }
  if ((long)uVar11 < 1) {
    return uVar7;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
  (*pcVar4)();
}



/* Entry: 001a6784; end: 001a6813;  */

/* WARNING: Removing unreachable block (ram,0x001a67d4) */

void FUN_001a6784(void)

{
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_80,0);
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_90 = uStack_40;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  FUN_001a653c(&uStack_d0);
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_40 = uStack_90;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001a6814; end: 001a6857;  */

void FUN_001a6814(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = PTR___swiftEmptyArrayStorage_0099b8f0;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 001a6858; end: 001a6887;  */

undefined1  [16] FUN_001a6858(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                  *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 001a6888; end: 001a68bb;  */

void FUN_001a6888(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 001a68bc; end: 001a68cf;  */

undefined1  [16] FUN_001a68bc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x1a68cc;
  return auVar1;
}



/* Entry: 001a68d0; end: 001a68f7;  */

void FUN_001a68d0(void)

{
  FUN_001a6454();
  return;
}



/* Entry: 001a68f8; end: 001a6997;  */

void FUN_001a68f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af2b00 != -1) {
    _swift_once(0xaf2b00,FUN_001a62f4);
  }
  uVar5 = uRam0000000000b659a8;
  uVar4 = uRam0000000000b659a0;
  uVar3 = uRam0000000000b65998;
  uVar2 = uRam0000000000b65990;
  uVar1 = uRam0000000000b65988;
  *param_1 = uRam0000000000b65980;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 001a6998; end: 001a69d3;  */

void FUN_001a6998(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2c18;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2c18,&UNK_007e1290);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 001a69d4; end: 001a6b9f;  */

/* WARNING: Removing unreachable block (ram,0x001a6a38) */

void FUN_001a69d4(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  __ss6HasherV5_seedABSi_tcfC(&uStack_b0,0);
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_c0 = uStack_70;
  uStack_f8 = uStack_a8;
  uStack_100 = uStack_b0;
  uStack_e8 = uStack_98;
  uStack_f0 = uStack_a0;
  FUN_001a653c(&uStack_100);
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_70 = uStack_c0;
  uStack_98 = uStack_e8;
  uStack_a0 = uStack_f0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  uStack_a8 = uStack_f8;
  uStack_b0 = uStack_100;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001a6ba0; end: 001a6c5b;  */

ulong FUN_001a6ba0(ulong *param_1,ulong *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  code *pcVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  byte *pbVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong *unaff_x20;
  byte *pbVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  uVar9 = *param_1;
  uVar19 = param_1[2];
  uVar14 = param_1[3];
  uVar7 = param_1[4];
  pbVar17 = (byte *)param_1[5];
  uVar4 = param_2[2];
  uVar16 = param_2[3];
  uVar11 = param_2[4];
  uVar18 = param_2[5];
  if ((((uVar9 != *param_2) || (param_1[1] != param_2[1])) &&
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar9 & 1) == 0)) ||
     (((int)uVar19 != (int)uVar4 || (FUN_001455e0(uVar14,uVar16), (uVar14 & 1) == 0)))) {
    return 0;
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar17 >> 0x20);
  uVar12 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar18 >> 0x20);
  uVar15 = uVar3 >> 0x1e;
  iVar6 = (int)uVar7;
  if ((ulong)pbVar17 >> 0x3e == 3) {
    uVar14 = 0;
    if (((uVar7 != 0) || (pbVar17 != (byte *)0xc000000000000000)) ||
       ((uVar18 >> 0x3e < 3 || ((uVar14 = 0, uVar11 != 0 || (uVar18 != 0xc000000000000000))))))
    goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar12 == 0) {
        uVar14 = (ulong)pbVar17 >> 0x30 & 0xff;
      }
      else {
        iVar13 = (int)(uVar7 >> 0x20);
        if (SBORROW4(iVar13,iVar6)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar5)();
        }
        uVar14 = (ulong)(iVar13 - iVar6);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar15 != 2) {
        uVar7 = (ulong)(uVar14 == 0);
        goto LAB_00038af8;
      }
      uVar16 = *(long *)(uVar11 + 0x18) - *(long *)(uVar11 + 0x10);
      if (SBORROW8(*(long *)(uVar11 + 0x18),*(long *)(uVar11 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar5)();
      }
LAB_000388d4:
      if (uVar14 != uVar16) {
LAB_0003899c:
        uVar7 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar12 == 2) {
        uVar14 = *(long *)(uVar7 + 0x18) - *(long *)(uVar7 + 0x10);
        if (SBORROW8(*(long *)(uVar7 + 0x18),*(long *)(uVar7 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar5)();
        }
        goto joined_r0x000389b8;
      }
      uVar14 = 0;
      if (1 < uVar15) goto LAB_00038898;
LAB_000388cc:
      if (uVar15 == 0) {
        uVar16 = uVar18 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar13 = (int)(uVar11 >> 0x20);
      if (SBORROW4(iVar13,(int)uVar11)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar5)();
      }
      if (uVar14 != (long)(iVar13 - (int)uVar11)) goto LAB_0003899c;
    }
    if (0 < (long)uVar14) {
      if (uVar12 < 2) {
        if (uVar12 == 0) {
          abStack_70[0] = (byte)uVar7;
          abStack_70[1] = (byte)(uVar7 >> 8);
          abStack_70[2] = (byte)(uVar7 >> 0x10);
          abStack_70[3] = (byte)(uVar7 >> 0x18);
          abStack_70[4] = (byte)(uVar7 >> 0x20);
          abStack_70[5] = (byte)(uVar7 >> 0x28);
          abStack_70[6] = (byte)(uVar7 >> 0x30);
          abStack_70[7] = (byte)(uVar7 >> 0x38);
          abStack_70[8] = (byte)pbVar17;
          abStack_70[9] = (byte)((ulong)pbVar17 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar17 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar17 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar17 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar17 >> 0x28);
          pbVar17 = abStack_70 + ((ulong)pbVar17 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar7 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar20 = (long)iVar6;
        uVar14 = ((long)uVar7 >> 0x20) - lVar20;
        if ((long)uVar7 >> 0x20 < lVar20) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar5)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar7 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          uVar7 = 0;
        }
        else {
          uVar16 = uVar7;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar20,uVar16)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar5)();
          }
          uVar7 = (lVar20 - uVar16) + uVar7;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (uVar7 != 0) {
            if ((long)uVar14 <= (long)uVar16) {
              uVar16 = uVar14;
            }
            pbVar10 = (byte *)(uVar16 + uVar7);
            goto LAB_00038aec;
          }
        }
        pbVar10 = (byte *)0x0;
      }
      else {
        if (uVar12 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar17 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar20 = *(long *)(uVar7 + 0x10);
        lVar1 = *(long *)(uVar7 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        uVar14 = uVar7;
        if (uVar7 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar20,uVar14)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar5)();
          }
          uVar7 = (lVar20 - uVar14) + uVar7;
        }
        uVar16 = lVar1 - lVar20;
        if (SBORROW8(lVar1,lVar20)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar5)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (uVar7 == 0) {
          pbVar10 = (byte *)0x0;
        }
        else {
          if ((long)uVar16 <= (long)uVar14) {
            uVar14 = uVar16;
          }
          pbVar10 = (byte *)(uVar14 + uVar7);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar17 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,uVar7,pbVar10,uVar11,uVar18);
      uVar7 = (ulong)abStack_70[0];
      pbVar17 = pbVar10;
      goto LAB_00038af8;
    }
  }
  uVar7 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar7;
  }
  ___stack_chk_fail();
  lVar20 = (long)pbVar17 - uVar7;
  if (SBORROW8((long)pbVar17,uVar7)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar5)();
  }
  uVar19 = *unaff_x20;
  uVar16 = uVar19 & 0xffffffffffffff8;
  uVar7 = uVar16 + 0x20 + uVar7 * 8;
  uVar8 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar14 = uVar7;
  _swift_arrayDestroy(uVar7,lVar20,uVar8);
  lVar1 = uVar11 - lVar20;
  if (SBORROW8(uVar11,lVar20)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar5)();
  }
  if (lVar1 != 0) {
    if (uVar19 >> 0x3e == 0) {
      uVar14 = *(ulong *)(uVar16 + 0x10);
      lVar20 = uVar14 - (long)pbVar17;
    }
    else {
      uVar14 = uVar16;
      if ((uVar19 & 0x8000000000000000) != 0) {
        uVar14 = uVar19;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar20 = uVar14 - (long)pbVar17;
    }
    if (SBORROW8(uVar14,(long)pbVar17)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar5)();
    }
    uVar7 = uVar7 + uVar11 * 8;
    uVar14 = uVar16 + 0x20 + (long)pbVar17 * 8;
    if (uVar7 != uVar14 || uVar14 + lVar20 * 8 <= uVar7) {
      _memmove(uVar7,uVar14,lVar20 << 3);
    }
    if (uVar19 >> 0x3e == 0) {
      uVar14 = *(ulong *)(uVar16 + 0x10);
    }
    else {
      uVar14 = uVar16;
      if ((uVar19 & 0x8000000000000000) != 0) {
        uVar14 = uVar19;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar14,lVar1)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar5)();
    }
    *(ulong *)(uVar16 + 0x10) = uVar14 + lVar1;
  }
  if (0 < (long)uVar11) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar5)();
  }
  return uVar14;
}



/* Entry: 001a6c5c; end: 001a6c83;  */

undefined * FUN_001a6c5c(void)

{
  return &UNK_009b43b0;
}



/* Entry: 001a6c84; end: 001a6d43;  */

void FUN_001a6c84(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007e12b0,0xe,&uStack_48,&lStack_40);
  puRam0000000000b659b8 = puStack_38;
  lRam0000000000b659b0 = lStack_40;
  puRam0000000000b659c8 = puStack_28;
  puRam0000000000b659c0 = puStack_30;
  puRam0000000000b659d8 = puStack_18;
  puRam0000000000b659d0 = puStack_20;
  return;
}



/* Entry: 001a6d44; end: 001a6de3;  */

void FUN_001a6d44(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af2b08 != -1) {
    _swift_once(0xaf2b08,FUN_001a6c84);
  }
  uVar5 = uRam0000000000b659d8;
  uVar4 = uRam0000000000b659d0;
  uVar3 = uRam0000000000b659c8;
  uVar2 = uRam0000000000b659c0;
  uVar1 = uRam0000000000b659b8;
  *param_1 = uRam0000000000b659b0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 001a6de4; end: 001a6eb7;  */

/* WARNING: Removing unreachable block (ram,0x001a6eb4) */

void FUN_001a6de4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        (**(code **)(param_3 + 0x150))();
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x198);
        FUN_000c735c();
        (*pcVar4)(unaff_x20 + 0x20,&UNK_009af680,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 001a6eb8; end: 001a7013;  */

void FUN_001a6eb8(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong *unaff_x20;
  ulong uVar7;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar7 = uVar1 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar7 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar7 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
  }
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uVar7 = unaff_x20[6];
  uStack_60 = uVar7;
  if (uVar7 != 0) {
    __ss6HasherV8_combineyySuF(2);
    _swift_beginAccess(uVar7 + 0x10,auStack_88,0,0);
    uVar1 = *(ulong *)(uVar7 + 0x10);
    uVar2 = *(ulong *)(uVar7 + 0x18);
    uVar7 = uVar1 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar7 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar7 != 0) {
      func_0x001a9e74(&uStack_70,auStack_a0,0xaf2aa8,&UNK_007e0a40);
      _swift_bridgeObjectRetain(uVar2);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
      func_0x001a9e34(&uStack_70,0xaf2aa8,&UNK_007e0a40);
      _swift_bridgeObjectRelease(uVar2);
    }
  }
  uVar7 = unaff_x20[2];
  uVar3 = (uint)(unaff_x20[3] >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 == 0) {
      if ((unaff_x20[3] & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_001a6fec;
    }
    lVar5 = (long)(int)uVar7;
    lVar6 = (long)uVar7 >> 0x20;
  }
  else {
    if (uVar4 != 2) {
      return;
    }
    lVar5 = *(long *)(uVar7 + 0x10);
    lVar6 = *(long *)(uVar7 + 0x18);
  }
  if (lVar5 == lVar6) {
    return;
  }
LAB_001a6fec:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 001a7014; end: 001a709f;  */

void FUN_001a7014(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if (((uVar1 == 0) ||
      ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) &&
     (FUN_001a70a0(), unaff_x21 == 0)) {
    FUN_0013ad2c(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 001a70a0; end: 001a711f;  */

void FUN_001a70a0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  lStack_50 = *(long *)(param_1 + 0x30);
  if (lStack_50 != 0) {
    uStack_58 = *(undefined8 *)(param_1 + 0x28);
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_000c735c();
    (*pcVar1)(&uStack_60,2,&UNK_009af680,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 001a7120; end: 001a7123;  */

uint FUN_001a7120(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_b8 [24];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar2 = *param_1;
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar2 & 1) != 0)) {
    uVar7 = param_1[5];
    uVar6 = param_1[4];
    uVar4 = param_1[6];
    uVar8 = param_2[5];
    uVar2 = param_2[4];
    uVar5 = param_2[6];
    uStack_a0 = uVar2;
    uStack_98 = uVar8;
    uStack_90 = uVar5;
    uStack_80 = uVar6;
    uStack_78 = uVar7;
    uStack_70 = uVar4;
    if (uVar4 == 0) {
      if (uVar5 != 0) goto LAB_001a789c;
      func_0x001a9e74(&uStack_80,auStack_b8,0xaf2aa8,&UNK_007e0a40);
      func_0x001a9e74(&uStack_a0,auStack_b8,0xaf2aa8,&UNK_007e0a40);
      func_0x0012cec0(uVar6,uVar7,0);
LAB_001a79a8:
      uVar2 = param_1[2];
      FUN_00038814(uVar2,param_1[3],param_2[2],param_2[3]);
      uVar1 = (uint)uVar2;
      goto LAB_001a79b4;
    }
    if (uVar5 == 0) {
LAB_001a789c:
      func_0x001a9e74(&uStack_80,auStack_b8,0xaf2aa8,&UNK_007e0a40);
      func_0x001a9e74(&uStack_a0,auStack_b8,0xaf2aa8,&UNK_007e0a40);
      func_0x0012cec0(uVar6,uVar7,uVar4);
LAB_001a78f0:
      func_0x0012cec0(uVar2,uVar8,uVar5);
    }
    else {
      if (uVar4 == uVar5) {
        func_0x001a9e74(&uStack_80,auStack_b8,0xaf2aa8,&UNK_007e0a40);
        func_0x001a9e74(&uStack_a0,auStack_b8,0xaf2aa8,&UNK_007e0a40);
      }
      else {
        func_0x001a9e74(&uStack_80,auStack_b8,0xaf2aa8,&UNK_007e0a40);
        func_0x001a9e74(&uStack_a0,auStack_b8,0xaf2aa8,&UNK_007e0a40);
        uVar3 = uVar5;
        FUN_000c46a8();
        if ((uVar3 & 1) == 0) {
          func_0x0012cec0(uVar2,uVar8,uVar5);
          uVar2 = uVar6;
          uVar8 = uVar7;
          uVar5 = uVar4;
          goto LAB_001a78f0;
        }
      }
      uVar3 = uVar6;
      FUN_00038814(uVar6,uVar7,uVar2,uVar8);
      func_0x0012cec0(uVar2,uVar8,uVar5);
      func_0x0012cec0(uVar6,uVar7,uVar4);
      if ((uVar3 & 1) != 0) goto LAB_001a79a8;
    }
  }
  uVar1 = 0;
LAB_001a79b4:
  return uVar1 & 1;
}



/* Entry: 001a7124; end: 001a71b3;  */

/* WARNING: Removing unreachable block (ram,0x001a7174) */

void FUN_001a7124(void)

{
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_80,0);
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_90 = uStack_40;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  FUN_001a6eb8(&uStack_d0);
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_40 = uStack_90;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001a71b4; end: 001a71ef;  */

void FUN_001a71b4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  return;
}



/* Entry: 001a71f0; end: 001a721f;  */

undefined1  [16] FUN_001a71f0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                  *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 001a7220; end: 001a7253;  */

void FUN_001a7220(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 001a7254; end: 001a7267;  */

undefined1  [16] FUN_001a7254(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x1a7264;
  return auVar1;
}



/* Entry: 001a7268; end: 001a727b;  */

void FUN_001a7268(void)

{
  FUN_001a6de4();
  return;
}



/* Entry: 001a727c; end: 001a72bb;  */

void FUN_001a727c(void)

{
  FUN_001a7014();
  return;
}



/* Entry: 001a72bc; end: 001a735b;  */

void FUN_001a72bc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af2b08 != -1) {
    _swift_once(0xaf2b08,FUN_001a6c84);
  }
  uVar5 = uRam0000000000b659d8;
  uVar4 = uRam0000000000b659d0;
  uVar3 = uRam0000000000b659c8;
  uVar2 = uRam0000000000b659c0;
  uVar1 = uRam0000000000b659b8;
  *param_1 = uRam0000000000b659b0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 001a735c; end: 001a7397;  */

void FUN_001a735c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2c10;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2c10,&UNK_007e1288);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 001a7398; end: 001a757b;  */

/* WARNING: Removing unreachable block (ram,0x001a7404) */

void FUN_001a7398(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  uStack_40 = unaff_x20[6];
  __ss6HasherV5_seedABSi_tcfC(&uStack_c0,0);
  uStack_e8 = uStack_98;
  uStack_f0 = uStack_a0;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_d0 = uStack_80;
  uStack_108 = uStack_b8;
  uStack_110 = uStack_c0;
  uStack_f8 = uStack_a8;
  uStack_100 = uStack_b0;
  FUN_001a6eb8(&uStack_110);
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  uStack_80 = uStack_d0;
  uStack_a8 = uStack_f8;
  uStack_b0 = uStack_100;
  uStack_98 = uStack_e8;
  uStack_a0 = uStack_f0;
  uStack_b8 = uStack_108;
  uStack_c0 = uStack_110;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001a757c; end: 001a75d3;  */

uint FUN_001a757c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = param_2[6];
  func_0x001a77d8(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 001a75d4; end: 001a79f7;  */

/* WARNING: Removing unreachable block (ram,0x001a7790) */

void FUN_001a75d4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  code *pcVar8;
  bool bVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar12 = 1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(param_2 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(param_2 + 0x40);
  _swift_bridgeObjectRetain(param_2);
  uStack_150 = 0;
  lVar13 = 0;
  while( true ) {
    while (uVar14 == 0) {
      bVar9 = SCARRY8(lVar13,1);
      lVar13 = lVar13 + 1;
      if (bVar9) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1a77d8);
        (*pcVar8)();
      }
      if ((long)(uVar12 + 0x3f >> 6) <= lVar13) goto LAB_001a77a0;
      uVar14 = ((ulong *)(param_2 + 0x40))[lVar13];
    }
    uVar10 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
    uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar13 << 6;
    puVar11 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar10 * 0x10);
    uVar1 = *puVar11;
    lVar4 = puVar11[1];
    puVar11 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar10 * 0x30);
    uVar2 = *puVar11;
    uVar5 = puVar11[1];
    uVar15 = puVar11[2];
    bVar7 = *(byte *)(puVar11 + 3);
    uVar3 = puVar11[4];
    uVar6 = puVar11[5];
    _swift_bridgeObjectRetain(lVar4);
    FUN_000f2290(uVar2,uVar5,uVar15,(ulong)bVar7);
    func_0x00023304(uVar3,uVar6);
    if (lVar4 == 0) break;
    uStack_c8 = param_1[5];
    uStack_d0 = param_1[4];
    uStack_b8 = param_1[7];
    uStack_c0 = param_1[6];
    uStack_b0 = param_1[8];
    uStack_e8 = param_1[1];
    uStack_f0 = *param_1;
    uStack_d8 = param_1[3];
    uStack_e0 = param_1[2];
    uStack_a0 = uVar2;
    uStack_98 = uVar5;
    uStack_90 = uVar15;
    uStack_88 = (ulong)bVar7;
    uStack_80 = uVar3;
    uStack_78 = uVar6;
    __sSS4hash4intoys6HasherVz_tF(&uStack_f0,uVar1,lVar4);
    _swift_bridgeObjectRelease(lVar4);
    uStack_118 = uStack_c8;
    uStack_120 = uStack_d0;
    uStack_108 = uStack_b8;
    uStack_110 = uStack_c0;
    uStack_100 = uStack_b0;
    uStack_138 = uStack_e8;
    uStack_140 = uStack_f0;
    uStack_128 = uStack_d8;
    uStack_130 = uStack_e0;
    FUN_00197e9c(&uStack_140);
    uVar14 = uVar14 - 1 & uVar14;
    puVar11 = &uStack_a0;
    func_0x000f23d0();
    uStack_b8 = uStack_108;
    uStack_c0 = uStack_110;
    uStack_b0 = uStack_100;
    uStack_d8 = uStack_128;
    uStack_e0 = uStack_130;
    uStack_c8 = uStack_118;
    uStack_d0 = uStack_120;
    uStack_e8 = uStack_138;
    uStack_f0 = uStack_140;
    __ss6HasherV9_finalizeSiyF();
    uStack_150 = (ulong)puVar11 ^ uStack_150;
  }
LAB_001a77a0:
  _swift_release(param_2);
  __ss6HasherV8_combineyySuF(uStack_150);
  return;
}



/* Entry: 001a79f8; end: 001a7b6f;  */

ulong FUN_001a79f8(ulong *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong *unaff_x20;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  uVar7 = *param_1;
  FUN_001a1d50(uVar7,(char)param_1[1],*param_2,*(undefined1 *)(param_2 + 1));
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  uVar7 = param_1[2];
  uVar14 = param_2[2];
  if (*(char *)(param_2 + 3) == '\x01') {
    if ((long)uVar14 < 2) {
      if (uVar14 == 0) {
        if (uVar7 != 0) {
          return 0;
        }
      }
      else if (uVar7 != 1) {
        return 0;
      }
    }
    else if (uVar14 == 2) {
      if (uVar7 != 2) {
        return 0;
      }
    }
    else if (uVar7 != 3) {
      return 0;
    }
  }
  else if (uVar7 != uVar14) {
    return 0;
  }
  if (*(int *)((long)param_1 + 0x1c) != *(int *)((long)param_2 + 0x1c)) {
    return 0;
  }
  uVar7 = param_1[4];
  if (((uVar7 != param_2[4]) || (param_1[5] != param_2[5])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar7 & 1) == 0)) {
    return 0;
  }
  uVar7 = param_1[6];
  if (((uVar7 != param_2[6]) || (param_1[7] != param_2[7])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar7 & 1) == 0)) {
    return 0;
  }
  if ((int)param_1[8] != *(int *)(param_2 + 8)) {
    return 0;
  }
  if (((*(byte *)((long)param_1 + 0x44) ^ *(byte *)((long)param_2 + 0x44)) & 1) != 0) {
    return 0;
  }
  uVar7 = param_1[9];
  FUN_001455e0(uVar7,param_2[9]);
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  uVar7 = param_1[10];
  if (((uVar7 != param_2[10]) || (param_1[0xb] != param_2[0xb])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar7 & 1) == 0)) {
    return 0;
  }
  uVar7 = param_1[0xc];
  if (((uVar7 != param_2[0xc]) || (param_1[0xd] != param_2[0xd])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar7 & 1) == 0)) {
    return 0;
  }
  uVar7 = param_1[0xe];
  pbVar8 = (byte *)param_1[0xf];
  lVar10 = param_2[0xe];
  uVar14 = param_2[0xf];
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar8 >> 0x20);
  uVar11 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar14 >> 0x20);
  uVar15 = uVar3 >> 0x1e;
  iVar5 = (int)uVar7;
  if ((ulong)pbVar8 >> 0x3e == 3) {
    uVar13 = 0;
    if (((uVar7 != 0) || (pbVar8 != (byte *)0xc000000000000000)) ||
       ((uVar14 >> 0x3e < 3 || ((uVar13 = 0, lVar10 != 0 || (uVar14 != 0xc000000000000000))))))
    goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar11 == 0) {
        uVar13 = (ulong)pbVar8 >> 0x30 & 0xff;
      }
      else {
        iVar12 = (int)(uVar7 >> 0x20);
        if (SBORROW4(iVar12,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar13 = (ulong)(iVar12 - iVar5);
      }
joined_r0x000389b8:
      if (1 < uVar3 >> 0x1e) goto LAB_00038898;
LAB_000388cc:
      if (uVar15 == 0) {
        uVar16 = uVar14 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar12 = (int)((ulong)lVar10 >> 0x20);
      if (SBORROW4(iVar12,(int)lVar10)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar13 != (long)(iVar12 - (int)lVar10)) goto LAB_0003899c;
    }
    else {
      if (uVar11 == 2) {
        uVar13 = *(long *)(uVar7 + 0x18) - *(long *)(uVar7 + 0x10);
        if (SBORROW8(*(long *)(uVar7 + 0x18),*(long *)(uVar7 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar13 = 0;
      if (uVar15 < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar15 != 2) {
        uVar7 = (ulong)(uVar13 == 0);
        goto LAB_00038af8;
      }
      uVar16 = *(long *)(lVar10 + 0x18) - *(long *)(lVar10 + 0x10);
      if (SBORROW8(*(long *)(lVar10 + 0x18),*(long *)(lVar10 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar13 != uVar16) {
LAB_0003899c:
        uVar7 = 0;
        goto LAB_00038af8;
      }
    }
    if (0 < (long)uVar13) {
      if (uVar11 < 2) {
        if (uVar11 == 0) {
          abStack_70[0] = (byte)uVar7;
          abStack_70[1] = (byte)(uVar7 >> 8);
          abStack_70[2] = (byte)(uVar7 >> 0x10);
          abStack_70[3] = (byte)(uVar7 >> 0x18);
          abStack_70[4] = (byte)(uVar7 >> 0x20);
          abStack_70[5] = (byte)(uVar7 >> 0x28);
          abStack_70[6] = (byte)(uVar7 >> 0x30);
          abStack_70[7] = (byte)(uVar7 >> 0x38);
          abStack_70[8] = (byte)pbVar8;
          abStack_70[9] = (byte)((ulong)pbVar8 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar8 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar8 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar8 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar8 >> 0x28);
          pbVar8 = abStack_70 + ((ulong)pbVar8 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar7 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        uVar13 = ((long)uVar7 >> 0x20) - lVar17;
        if ((long)uVar7 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar7 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          uVar7 = 0;
        }
        else {
          uVar16 = uVar7;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar16)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          uVar7 = (lVar17 - uVar16) + uVar7;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (uVar7 != 0) {
            if ((long)uVar13 <= (long)uVar16) {
              uVar16 = uVar13;
            }
            pbVar9 = (byte *)(uVar16 + uVar7);
            goto LAB_00038aec;
          }
        }
        pbVar9 = (byte *)0x0;
      }
      else {
        if (uVar11 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar8 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(uVar7 + 0x10);
        lVar1 = *(long *)(uVar7 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        uVar13 = uVar7;
        if (uVar7 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar13)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          uVar7 = (lVar17 - uVar13) + uVar7;
        }
        uVar16 = lVar1 - lVar17;
        if (SBORROW8(lVar1,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (uVar7 == 0) {
          pbVar9 = (byte *)0x0;
        }
        else {
          if ((long)uVar16 <= (long)uVar13) {
            uVar13 = uVar16;
          }
          pbVar9 = (byte *)(uVar13 + uVar7);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar8 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,uVar7,pbVar9,lVar10,uVar14);
      uVar7 = (ulong)abStack_70[0];
      pbVar8 = pbVar9;
      goto LAB_00038af8;
    }
  }
  uVar7 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar7;
  }
  ___stack_chk_fail();
  lVar17 = (long)pbVar8 - uVar7;
  if (SBORROW8((long)pbVar8,uVar7)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar16 = *unaff_x20;
  uVar13 = uVar16 & 0xffffffffffffff8;
  uVar7 = uVar13 + 0x20 + uVar7 * 8;
  uVar6 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar14 = uVar7;
  _swift_arrayDestroy(uVar7,lVar17,uVar6);
  lVar1 = lVar10 - lVar17;
  if (SBORROW8(lVar10,lVar17)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar1 != 0) {
    if (uVar16 >> 0x3e == 0) {
      uVar14 = *(ulong *)(uVar13 + 0x10);
      lVar17 = uVar14 - (long)pbVar8;
    }
    else {
      uVar14 = uVar13;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar14 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar17 = uVar14 - (long)pbVar8;
    }
    if (SBORROW8(uVar14,(long)pbVar8)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar7 = uVar7 + lVar10 * 8;
    uVar14 = uVar13 + 0x20 + (long)pbVar8 * 8;
    if (uVar7 != uVar14 || uVar14 + lVar17 * 8 <= uVar7) {
      _memmove(uVar7,uVar14,lVar17 << 3);
    }
    if (uVar16 >> 0x3e == 0) {
      uVar14 = *(ulong *)(uVar13 + 0x10);
    }
    else {
      uVar14 = uVar13;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar14 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar14,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar13 + 0x10) = uVar14 + lVar1;
  }
  if (lVar10 < 1) {
    return uVar14;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
  (*pcVar4)();
}



/* Entry: 001a7b70; end: 001a817f;  */

uint FUN_001a7b70(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_c0 [32];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar2 = *param_1;
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar2 & 1) != 0)) {
    uVar2 = param_1[2];
    FUN_00147834(uVar2,param_2[2]);
    if ((uVar2 & 1) != 0) {
      uVar2 = param_1[3];
      FUN_000aa78c(uVar2,param_2[3]);
      if ((uVar2 & 1) != 0) {
        uVar2 = param_1[4];
        FUN_001455e0(uVar2,param_2[4]);
        if ((uVar2 & 1) != 0) {
          uVar4 = param_1[0xc];
          uVar2 = param_1[0xb];
          uVar9 = param_1[0xe];
          uVar7 = param_1[0xd];
          uVar6 = param_2[0xc];
          uVar5 = param_2[0xb];
          uVar10 = param_2[0xe];
          uVar8 = param_2[0xd];
          uStack_a0 = uVar5;
          uStack_98 = uVar6;
          uStack_90 = uVar8;
          uStack_88 = uVar10;
          uStack_80 = uVar2;
          uStack_78 = uVar4;
          uStack_70 = uVar7;
          uStack_68 = uVar9;
          if (uVar4 == 0) {
            if (uVar6 != 0) goto LAB_001a7cd0;
            func_0x001a9e74(&uStack_80,auStack_c0,0xaf0660,&UNK_007daae0);
            func_0x001a9e74(&uStack_a0,auStack_c0,0xaf0660,&UNK_007daae0);
LAB_001a7d94:
            FUN_00141808(uVar2,uVar4,uVar7,uVar9);
            uVar2 = param_1[5];
            uVar4 = param_2[5];
            if ((char)param_2[6] == '\x01') {
              if (uVar4 == 0) {
                if (uVar2 == 0) goto LAB_001a7e50;
              }
              else if (uVar4 == 1) {
                if (uVar2 == 1) {
LAB_001a7e50:
                  uVar2 = param_1[7];
                  if (((uVar2 == param_2[7]) && (param_1[8] == param_2[8])) ||
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (), (uVar2 & 1) != 0)) {
                    uVar2 = param_1[9];
                    FUN_00038814(uVar2,param_1[10],param_2[9],param_2[10]);
                    uVar1 = (uint)uVar2;
                    goto LAB_001a7d34;
                  }
                }
              }
              else if (uVar2 == 2) goto LAB_001a7e50;
            }
            else if (uVar2 == uVar4) goto LAB_001a7e50;
          }
          else {
            if (uVar6 == 0) {
LAB_001a7cd0:
              func_0x001a9e74(&uStack_80,auStack_c0,0xaf0660,&UNK_007daae0);
              func_0x001a9e74(&uStack_a0,auStack_c0,0xaf0660,&UNK_007daae0);
              FUN_00141808(uVar2,uVar4,uVar7,uVar9);
              uVar2 = uVar5;
              uVar4 = uVar6;
              uVar7 = uVar8;
              uVar9 = uVar10;
            }
            else if (((uVar2 == uVar5) && (uVar4 == uVar6)) ||
                    (uVar3 = uVar2,
                    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (uVar2,uVar4,uVar5,uVar6,0), (uVar3 & 1) != 0)) {
              func_0x001a9e74(&uStack_80,auStack_c0,0xaf0660,&UNK_007daae0);
              func_0x001a9e74(&uStack_a0,auStack_c0,0xaf0660,&UNK_007daae0);
              uVar3 = uVar7;
              FUN_00038814(uVar7,uVar9,uVar8,uVar10);
              FUN_00141808(uVar5,uVar6,uVar8,uVar10);
              if ((uVar3 & 1) != 0) goto LAB_001a7d94;
            }
            else {
              func_0x001a9e74(&uStack_80,auStack_c0,0xaf0660,&UNK_007daae0);
              func_0x001a9e74(&uStack_a0,auStack_c0,0xaf0660,&UNK_007daae0);
              FUN_00141808(uVar5,uVar6,uVar8,uVar10);
            }
            FUN_00141808(uVar2,uVar4,uVar7,uVar9);
          }
        }
      }
    }
  }
  uVar1 = 0;
LAB_001a7d34:
  return uVar1 & 1;
}



/* Entry: 001a8180; end: 001a8197;  */

void FUN_001a8180(void)

{
  return;
}



/* Entry: 001a8198; end: 001a8297;  */

void FUN_001a8198(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2ac0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_007e0e30;
  _swift_getWitnessTable(&DAT_007e0e30,&UNK_009b48e0);
  puRam0000000000af2ac0 = puVar1;
  return;
}



/* Entry: 001a8298; end: 001a82ab;  */

void FUN_001a8298(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001a82ac();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1a82ec)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}


