/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103baea78; end: 103baeafb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103baea78(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + _DAT_112ff32c8);
}



/* Entry: 103baeafc; end: 103baeb5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103baeafc(long param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ff32b0);
  *(long *)(unaff_x20 + _DAT_112ff32b0) = param_1;
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1b2b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_setIsMuted__11264a4f8,*(undefined1 *)(unaff_x20 + _DAT_112ff32c8));
    return;
  }
  return;
}



/* Entry: 103baeb60; end: 103baecbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103baeb60(double param_1)

{
  long lVar1;
  long unaff_x20;
  float fVar2;
  double dVar3;
  float fVar4;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ff32b0);
  if ((lVar1 != 0) && ((*(byte *)(unaff_x20 + _DAT_112ff32c0) & 1) == 0)) {
    *(undefined1 *)(unaff_x20 + _DAT_112ff32c0) = 1;
    *(undefined1 *)(unaff_x20 + _DAT_112ff32b8) = 0;
    dVar3 = param_1;
    func_0x000107c615f0(lVar1);
    fVar2 = SUB84(dVar3,0);
    func_0x000107c5e028();
    fVar2 = 1.0 - fVar2;
    fVar4 = fVar2 / 10.0;
    func_0x000107c5e028(lVar1);
    FUN_103baecbc(fVar4,((1.0 - fVar2) * (float)param_1) / 10.0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 103baecbc; end: 103baee47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103baecbc(float param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  float fVar7;
  undefined4 uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  lVar2 = unaff_x20;
  fVar7 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112ff32c0;
  if ((*(char *)(unaff_x20 + _DAT_112ff32c0) == '\x01') &&
     (lVar6 = *(long *)(unaff_x20 + _DAT_112ff32b0), lVar6 != 0)) {
    func_0x000107c615f0(lVar6);
    func_0x000107c5e028();
    if (1.0 <= fVar7) {
      func_0x000107c5a604(0x3f800000,lVar6);
      func_0x000107c615e8(lVar6);
      *(undefined1 *)(unaff_x20 + lVar1) = 0;
    }
    else {
      func_0x000107c5e028(lVar6);
      uVar8 = NEON_fminnm(param_1 + fVar7,0x3f800000);
      func_0x000107c5a604(uVar8,lVar6);
      uVar5 = 0;
      func_0x000107c60714(lVar2,0);
      puVar3 = &UNK_1106dfb68;
      func_0x000107c613fc(&UNK_1106dfb68,0x20,7);
      *(long *)(puVar3 + 0x10) = unaff_x20;
      *(float *)(puVar3 + 0x18) = param_1;
      *(int *)(puVar3 + 0x1c) = (int)param_2;
      pcStack_70 = FUN_103baf210;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_1106dfb80;
      puStack_68 = puVar3;
      func_0x000107c60bc4(&puStack_90);
      puVar3 = puStack_68;
      func_0x000107c61174();
      func_0x000107c61574(puVar3);
      func_0x000107c5fb28(lVar2,uVar5);
      func_0x000107c6142c(uVar5);
      func_0x000100c749e0(param_2,lVar2 + 0x20,ppuVar4);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c615e8(lVar6);
      func_0x000107c61574(lVar2);
    }
  }
  return;
}



/* Entry: 103baee48; end: 103baefcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103baee48(float param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  float fVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  lVar2 = unaff_x20;
  fVar7 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112ff32b8;
  if ((*(char *)(unaff_x20 + _DAT_112ff32b8) == '\x01') &&
     (lVar6 = *(long *)(unaff_x20 + _DAT_112ff32b0), lVar6 != 0)) {
    func_0x000107c615f0(lVar6);
    func_0x000107c5e028();
    if (fVar7 <= 0.0) {
      func_0x000107c5a604(0,lVar6);
      func_0x000107c615e8(lVar6);
      *(undefined1 *)(unaff_x20 + lVar1) = 0;
    }
    else {
      func_0x000107c5e028(lVar6);
      fVar7 = fVar7 - param_1;
      if (fVar7 < 0.0) {
        fVar7 = 0.0;
      }
      func_0x000107c5a604(fVar7,lVar6);
      uVar5 = 0;
      func_0x000107c60714(lVar2,0);
      puVar3 = &UNK_1106dfb18;
      func_0x000107c613fc(&UNK_1106dfb18,0x20,7);
      *(long *)(puVar3 + 0x10) = unaff_x20;
      *(float *)(puVar3 + 0x18) = param_1;
      *(int *)(puVar3 + 0x1c) = (int)param_2;
      pcStack_60 = FUN_103baf1cc;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f6b44;
      puStack_68 = &UNK_1106dfb30;
      puStack_58 = puVar3;
      func_0x000107c60bc4(&puStack_80);
      puVar3 = puStack_58;
      func_0x000107c61174();
      func_0x000107c61574(puVar3);
      func_0x000107c5fb28(lVar2,uVar5);
      func_0x000107c6142c(uVar5);
      func_0x000100c749e0(param_2,lVar2 + 0x20,ppuVar4);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c615e8(lVar6);
      func_0x000107c61574(lVar2);
    }
  }
  return;
}



/* Entry: 103baefd0; end: 103baefeb;  */

undefined1  [16] FUN_103baefd0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1a7c90;
  auVar1._0_8_ = 0xd000000000000016;
  return auVar1;
}



/* Entry: 103baefec; end: 103baf067;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103baefec(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff32b0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ff32b8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ff32c0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ff32c8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ff32d0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103baf068; end: 103baf083; -[SCBaseVolumeController volume] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103baf068(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (undefined4)param_1;
  if (*(long *)(param_2 + _DAT_112ff32b0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c2a0dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_2 + _DAT_112ff32b0),PTR_s_volume_112685d98);
    return CONCAT44(uVar2,uVar1);
  }
  return 0;
}



/* Entry: 103baf084; end: 103baf0bb; -[SCBaseVolumeController setVolume:] */

void FUN_103baf084(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_103bae980(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103baf0bc; end: 103baf0cb; -[SCBaseVolumeController isMuted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103baf0bc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ff32c8);
}



/* Entry: 103baf0cc; end: 103baf0ef; -[SCBaseVolumeController setIsMuted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103baf0cc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112ff32c8) = param_3;
  if (*(long *)(param_1 + _DAT_112ff32b0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1b2b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112ff32b0),PTR_s_setIsMuted__11264a4f8);
    return;
  }
  return;
}



/* Entry: 103baf0f0; end: 103baf127; -[SCBaseVolumeController fadeVolumeIn:] */

void FUN_103baf0f0(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_103baeb60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103baf128; end: 103baf15f; -[SCBaseVolumeController fadeVolumeOut:] */

void FUN_103baf128(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  func_0x000103baec14(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103baf160; end: 103baf1bb; -[SCBaseVolumeController init] */

void FUN_103baf160(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAVPlayerVolumeController.BaseVolumeController",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103baf18c);
  (*pcVar1)();
}



/* Entry: 103baf1bc; end: 103baf1cb; -[SCBaseVolumeController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103baf1bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ff32b0));
  return;
}



/* Entry: 103baf1cc; end: 103baf1f3;  */

void FUN_103baf1cc(void)

{
  long unaff_x20;
  
  FUN_103baee48(*(undefined8 *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x20 + 0x18),
                *(undefined4 *)(unaff_x20 + 0x1c));
  return;
}



/* Entry: 103baf1f4; end: 103baf20f;  */

void FUN_103baf1f4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103baf210; end: 103baf237;  */

void FUN_103baf210(void)

{
  long unaff_x20;
  
  FUN_103baecbc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x20 + 0x18),
                *(undefined4 *)(unaff_x20 + 0x1c));
  return;
}



/* Entry: 103baf238; end: 103baf23f;  */

void FUN_103baf238(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103baf240; end: 103baf287;  */

uint FUN_103baf240(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103baf288(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103baf288; end: 103baf413;  */

byte FUN_103baf288(double *param_1,double *param_2)

{
  double dVar1;
  byte bVar2;
  double dVar3;
  double dVar4;
  
  if (*param_1 == *param_2) {
    dVar3 = param_1[2];
    dVar1 = param_2[2];
    if (dVar3 == 0.0) {
      if (dVar1 == 0.0) {
LAB_103baf2f8:
        dVar3 = param_1[4];
        dVar1 = param_2[4];
        if (dVar3 == 0.0) {
          if (dVar1 == 0.0) {
LAB_103baf348:
            bVar2 = *(byte *)(param_1 + 5) ^ *(byte *)(param_2 + 5) ^ 1;
            goto LAB_103baf364;
          }
        }
        else if (dVar1 != 0.0) {
          dVar4 = param_1[3];
          if (((dVar4 == param_2[3]) && (dVar3 == dVar1)) ||
             (func_0x000107c605b8(dVar4,dVar3,param_2[3],dVar1,0), ((ulong)dVar4 & 1) != 0))
          goto LAB_103baf348;
        }
      }
    }
    else if (dVar1 != 0.0) {
      dVar4 = param_1[1];
      if ((dVar4 == param_2[1] && dVar3 == dVar1) ||
         (func_0x000107c605b8(dVar4,dVar3,param_2[1],dVar1,0), ((ulong)dVar4 & 1) != 0))
      goto LAB_103baf2f8;
    }
  }
  bVar2 = 0;
LAB_103baf364:
  return bVar2 & 1;
}



/* Entry: 103baf414; end: 103baf48f;  */

undefined8 * FUN_103baf414(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



/* Entry: 103baf490; end: 103baf4e3;  */

undefined8 * FUN_103baf490(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



/* Entry: 103baf4e4; end: 103baf613;  */

int FUN_103baf4e4(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103baf614; end: 103baf6ef;  */

bool FUN_103baf614(uint param_1,ulong param_2,long param_3,uint param_4,uint param_5,ulong param_6,
                  long param_7,uint param_8)

{
  bool bVar1;
  
  if (((param_1 ^ param_5) & 0x101) == 0) {
    if (param_3 == 0) {
      if (param_7 != 0) {
        return false;
      }
joined_r0x000103baf670:
      if (((param_4 ^ param_8) & 1) != 0) {
        return false;
      }
    }
    else {
      if (param_7 == 0) goto LAB_103baf630;
      if ((param_2 != param_6) || (param_3 != param_7)) {
        func_0x000107c605b8(param_2,param_3,param_6,param_7,0);
        if ((param_2 & 1) == 0) {
          return false;
        }
        goto joined_r0x000103baf670;
      }
      if (((param_4 ^ param_8) & 1) != 0) goto LAB_103baf630;
    }
    bVar1 = ((param_4 ^ param_8) & 0x100) == 0;
  }
  else {
LAB_103baf630:
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 103baf6f0; end: 103baf6f7;  */

void FUN_103baf6f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 103baf6f8; end: 103baf733;  */

undefined2 * FUN_103baf6f8(undefined2 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = uVar1;
  param_1[0xc] = param_2[0xc];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 103baf734; end: 103baf79f;  */

undefined1 * FUN_103baf734(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  return param_1;
}



/* Entry: 103baf7a0; end: 103baf7f3;  */

undefined1 * FUN_103baf7a0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  return param_1;
}



/* Entry: 103baf7f4; end: 103baf8b7;  */

int FUN_103baf7f4(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x1a) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103baf8b8; end: 103baf8c7; -[SCPlaybackSubtitlesState enabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103baf8b8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ff3300);
}



/* Entry: 103baf8c8; end: 103baf8d7; -[SCPlaybackSubtitlesState available] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103baf8c8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ff3308);
}



/* Entry: 103baf8d8; end: 103baf933; -[SCPlaybackSubtitlesState activeLanguageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103baf8d8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff3310))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff3310);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103baf934; end: 103baf943; -[SCPlaybackSubtitlesState isExternalSubtitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103baf934(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ff3318);
}



/* Entry: 103baf944; end: 103baf953; -[SCPlaybackSubtitlesState showSubtitlesOnSpotlightContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103baf944(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ff3320);
}



/* Entry: 103baf954; end: 103baf9ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103baf954(undefined1 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112ff3300) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112ff3308) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff3310);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_112ff3318) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_112ff3320) = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bafa00; end: 103bafac3; -[SCPlaybackSubtitlesState initWithEnabled:available:activeLanguageId:isExternalSubtitle:showSubtitlesOnSpotlightContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bafa00(long param_1,long param_2,undefined1 param_3,undefined1 param_4,long param_5,
                  undefined1 param_6,undefined1 param_7)

{
  long *plVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  *(undefined1 *)(param_1 + _DAT_112ff3300) = param_3;
  *(undefined1 *)(param_1 + _DAT_112ff3308) = param_4;
  plVar1 = (long *)(param_1 + _DAT_112ff3310);
  *plVar1 = param_5;
  plVar1[1] = param_2;
  *(undefined1 *)(param_1 + _DAT_112ff3318) = param_6;
  *(undefined1 *)(param_1 + _DAT_112ff3320) = param_7;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bafac4; end: 103bafb6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bafac4(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(byte *)(unaff_x20 + _DAT_112ff3300) = (byte)param_1 & 1;
  *(byte *)(unaff_x20 + _DAT_112ff3308) = (byte)((uint)param_1 >> 8) & 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff3310);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(byte *)(unaff_x20 + _DAT_112ff3318) = (byte)param_4 & 1;
  *(byte *)(unaff_x20 + _DAT_112ff3320) = (byte)((ulong)param_4 >> 8) & 1;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bafb70; end: 103bafba3; -[SCPlaybackSubtitlesState hash] */

undefined8 FUN_103bafb70(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103bafba4();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 103bafba4; end: 103bafc73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bafba4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  func_0x000107c606ac(auStack_78);
  func_0x000107c60694(*(undefined1 *)(unaff_x20 + _DAT_112ff3300));
  func_0x000107c60694(*(undefined1 *)(unaff_x20 + _DAT_112ff3308));
  if (((undefined8 *)(unaff_x20 + _DAT_112ff3310))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ff3310);
    func_0x000107c5fadc(uVar1);
    uVar2 = uVar1;
    func_0x000107c44c3c();
    func_0x000107c61170(uVar1);
  }
  func_0x000107c60690(uVar2);
  func_0x000107c60694(*(undefined1 *)(unaff_x20 + _DAT_112ff3318));
  func_0x000107c60694(*(undefined1 *)(unaff_x20 + _DAT_112ff3320));
  func_0x000107c606a4();
  return;
}



/* Entry: 103bafc74; end: 103bafddf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103bafc74(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  long unaff_x20;
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar10 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    plVar9 = &lStack_78;
    func_0x000107c6147c(plVar9,auStack_70,PTR___sypN_11034f1a8 + 8,lVar10,6);
    if (((ulong)plVar9 & 1) != 0) {
      bVar1 = *(byte *)(unaff_x20 + _DAT_112ff3300);
      bVar2 = *(byte *)(lStack_78 + _DAT_112ff3300);
      bVar3 = *(byte *)(unaff_x20 + _DAT_112ff3308);
      bVar4 = *(byte *)(lStack_78 + _DAT_112ff3308);
      lVar10 = ((long *)(unaff_x20 + _DAT_112ff3310))[1];
      lVar11 = ((long *)(lStack_78 + _DAT_112ff3310))[1];
      uVar13 = (uint)(lVar10 == 0 && lVar11 == 0);
      if (lVar10 != 0 && lVar11 != 0) {
        lVar12 = *(long *)(unaff_x20 + _DAT_112ff3310);
        if (lVar12 == *(long *)(lStack_78 + _DAT_112ff3310) && lVar10 == lVar11) {
          uVar13 = 1;
        }
        else {
          func_0x000107c605b8(lVar12);
          uVar13 = (uint)lVar12;
        }
      }
      bVar5 = *(byte *)(unaff_x20 + _DAT_112ff3318);
      bVar6 = *(byte *)(lStack_78 + _DAT_112ff3318);
      bVar7 = *(byte *)(unaff_x20 + _DAT_112ff3320);
      bVar8 = *(byte *)(lStack_78 + _DAT_112ff3320);
      func_0x000107c61170();
      uVar13 = ((byte)(bVar1 ^ bVar2 | bVar3 ^ bVar4) ^ 1) & uVar13 &
               ((bVar5 ^ bVar6) ^ 1) & ((bVar7 ^ bVar8) ^ 1);
      goto LAB_103bafdc0;
    }
  }
  uVar13 = 0;
LAB_103bafdc0:
  return uVar13 & 1;
}



/* Entry: 103bafde0; end: 103bafe5f; -[SCPlaybackSubtitlesState isEqual:] */

uint FUN_103bafde0(undefined8 param_1,undefined8 param_2,long param_3)

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
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_103bafc74(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103bafe60; end: 103bafe63; -[SCPlaybackSubtitlesState copyWithZone:] */

void FUN_103bafe60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103bafe64; end: 103bafe7f; -[SCPlaybackSubtitlesState description] */

void FUN_103bafe64(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bafe80; end: 103bafefb; -[SCPlaybackSubtitlesState init] */

void FUN_103bafe80(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "PlaybackSubtitlesModels/PlaybackSubtitlesStateWrapper.swift",0x3b,2,0x49,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bafec8);
  (*pcVar1)();
}



/* Entry: 103bafefc; end: 103baff0f; -[SCPlaybackSubtitlesState .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bafefc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ff3310 + 8))
  ;
  return;
}



/* Entry: 103baff10; end: 103baff2f;  */

void FUN_103baff10(void)

{
  func_0x000107c61168(&PTR_PTR_11293c058);
  return;
}



/* Entry: 103baff30; end: 103baff3f; -[SCPlaybackSubtitlesConfiguration fontSizeMultiplier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103baff30(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff3350);
}



/* Entry: 103baff40; end: 103baff4b; -[SCPlaybackSubtitlesConfiguration backgroundColorArgb] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103baff40(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff3358))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff3358);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103baff4c; end: 103baff57; -[SCPlaybackSubtitlesConfiguration fontColorArgb] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103baff4c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff3360))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff3360);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103baff58; end: 103baffaf;  */

void FUN_103baff58(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103baffb0; end: 103baffbf; -[SCPlaybackSubtitlesConfiguration isFontBold] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103baffb0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ff3368);
}



/* Entry: 103baffc0; end: 103bb0063;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103baffc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff3350) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff3358);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff3360);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_112ff3368) = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bb0064; end: 103bb0137; -[SCPlaybackSubtitlesConfiguration initWithFontSizeMultiplier:backgroundColorArgb:fontColorArgb:isFontBold:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb0064(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                  undefined1 param_6)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_2;
  func_0x000107c614f0();
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c5faec();
    lVar2 = param_3;
  }
  if (param_5 == 0) {
    param_5 = 0;
    param_3 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  *(undefined8 *)(param_2 + _DAT_112ff3350) = param_1;
  plVar1 = (long *)(param_2 + _DAT_112ff3358);
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_2 + _DAT_112ff3360);
  *plVar1 = param_5;
  plVar1[1] = param_3;
  *(undefined1 *)(param_2 + _DAT_112ff3368) = param_6;
  lStack_60 = param_2;
  lStack_58 = lVar3;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bb0138; end: 103bb01b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb0138(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff3350) = *param_1;
  uVar2 = param_1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff3358);
  puVar1[1] = param_1[2];
  *puVar1 = uVar2;
  uVar2 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff3360);
  puVar1[1] = param_1[4];
  *puVar1 = uVar2;
  *(undefined1 *)(unaff_x20 + _DAT_112ff3368) = *(undefined1 *)(param_1 + 5);
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bb01b8; end: 103bb01eb; -[SCPlaybackSubtitlesConfiguration hash] */

undefined8 FUN_103bb01b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103bb01ec();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 103bb01ec; end: 103bb02e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb01ec(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  double dVar3;
  undefined1 auStack_78 [72];
  
  func_0x000107c606ac(auStack_78);
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_112ff3350) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_112ff3350);
  }
  func_0x000107c606a0(dVar3);
  if (((undefined8 *)(unaff_x20 + _DAT_112ff3358))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ff3358);
    func_0x000107c5fadc(uVar1);
    uVar2 = uVar1;
    func_0x000107c44c3c();
    func_0x000107c61170(uVar1);
  }
  func_0x000107c60690(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_112ff3360))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ff3360);
    func_0x000107c5fadc(uVar1);
    uVar2 = uVar1;
    func_0x000107c44c3c();
    func_0x000107c61170(uVar1);
  }
  func_0x000107c60690(uVar2);
  func_0x000107c60694(*(undefined1 *)(unaff_x20 + _DAT_112ff3368));
  func_0x000107c606a4();
  return;
}



/* Entry: 103bb02e8; end: 103bb047b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103bb02e8(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long unaff_x20;
  uint uVar8;
  double dVar9;
  double dVar10;
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar5 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    plVar3 = &lStack_78;
    func_0x000107c6147c(plVar3,auStack_70,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar3 & 1) != 0) {
      dVar9 = *(double *)(unaff_x20 + _DAT_112ff3350);
      dVar10 = *(double *)(lStack_78 + _DAT_112ff3350);
      lVar5 = ((long *)(unaff_x20 + _DAT_112ff3358))[1];
      lVar6 = ((long *)(lStack_78 + _DAT_112ff3358))[1];
      uVar8 = (uint)(lVar5 == 0 && lVar6 == 0);
      if (lVar5 != 0 && lVar6 != 0) {
        lVar4 = *(long *)(unaff_x20 + _DAT_112ff3358);
        if (lVar4 == *(long *)(lStack_78 + _DAT_112ff3358) && lVar5 == lVar6) {
          uVar8 = 1;
        }
        else {
          func_0x000107c605b8();
          uVar8 = (uint)lVar4;
        }
      }
      lVar5 = ((long *)(unaff_x20 + _DAT_112ff3360))[1];
      lVar6 = ((long *)(lStack_78 + _DAT_112ff3360))[1];
      uVar7 = (uint)(lVar5 == 0 && lVar6 == 0);
      if (lVar5 != 0 && lVar6 != 0) {
        lVar4 = *(long *)(unaff_x20 + _DAT_112ff3360);
        if (lVar4 == *(long *)(lStack_78 + _DAT_112ff3360) && lVar5 == lVar6) {
          uVar7 = 1;
        }
        else {
          func_0x000107c605b8();
          uVar7 = (uint)lVar4;
        }
      }
      bVar1 = *(byte *)(unaff_x20 + _DAT_112ff3368);
      bVar2 = *(byte *)(lStack_78 + _DAT_112ff3368);
      func_0x000107c61170(lStack_78);
      if ((dVar9 == dVar10 & uVar8) == 1) {
        uVar7 = uVar7 & ((bVar1 ^ bVar2) ^ 1);
        goto LAB_103bb045c;
      }
    }
  }
  uVar7 = 0;
LAB_103bb045c:
  return uVar7 & 1;
}



/* Entry: 103bb047c; end: 103bb04fb; -[SCPlaybackSubtitlesConfiguration isEqual:] */

uint FUN_103bb047c(undefined8 param_1,undefined8 param_2,long param_3)

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
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_103bb02e8(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103bb04fc; end: 103bb04ff; -[SCPlaybackSubtitlesConfiguration copyWithZone:] */

void FUN_103bb04fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103bb0500; end: 103bb051b; -[SCPlaybackSubtitlesConfiguration description] */

void FUN_103bb0500(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bb051c; end: 103bb0597; -[SCPlaybackSubtitlesConfiguration init] */

void FUN_103bb051c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "PlaybackSubtitlesModels/PlaybackSubtitlesConfigurationWrapper.swift",0x43,2,
                      0x42,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bb0564);
  (*pcVar1)();
}



/* Entry: 103bb0598; end: 103bb05d7; -[SCPlaybackSubtitlesConfiguration .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103bb05b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bb05bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb0598(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ff3358 + 8))
  ;
  return;
}



/* Entry: 103bb05d8; end: 103bb05f7;  */

void FUN_103bb05d8(void)

{
  func_0x000107c61168(&PTR_PTR_11293c140);
  return;
}



/* Entry: 103bb05f8; end: 103bb065b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb05f8(undefined8 param_1,undefined1 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff3398) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112ff33a0) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bb065c; end: 103bb06cb; -[SCOperaVideoProgressLayer initWithViewModel:disableTapLeft:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb065c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ff3398) = param_3;
  *(undefined1 *)(param_1 + _DAT_112ff33a0) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 103bb06cc; end: 103bb06d3; -[SCOperaVideoProgressLayer type] */

undefined8 FUN_103bb06cc(void)

{
  return 0x19;
}



/* Entry: 103bb06d4; end: 103bb06db; -[SCOperaVideoProgressLayer layerContentType] */

undefined8 FUN_103bb06d4(void)

{
  return 3;
}



/* Entry: 103bb06dc; end: 103bb06f3; -[SCOperaVideoProgressLayer layerViewControllerClass] */

void FUN_103bb06dc(void)

{
  FUN_103bb1180(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 103bb06f4; end: 103bb07f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_103bb06f4(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  byte bVar5;
  long unaff_x20;
  ulong uVar6;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar3 = &lStack_68;
    func_0x000107c6147c(plVar3,auStack_60,PTR___sypN_11034f1a8 + 8,lVar2,6);
    if (((ulong)plVar3 & 1) != 0) {
      func_0x0001007bbbf8(0);
      uVar6 = *(ulong *)(unaff_x20 + _DAT_112ff3398);
      uVar4 = *(undefined8 *)(lStack_68 + _DAT_112ff3398);
      func_0x000107c61174(uVar4);
      func_0x000107c60118(uVar6,uVar4);
      func_0x000107c61170(uVar4);
      if ((uVar6 & 1) != 0) {
        bVar5 = *(byte *)(unaff_x20 + _DAT_112ff33a0);
        bVar1 = *(byte *)(lStack_68 + _DAT_112ff33a0);
        func_0x000107c61170(lStack_68);
        bVar5 = bVar5 ^ bVar1 ^ 1;
        goto LAB_103bb07d8;
      }
      func_0x000107c61170(lStack_68);
    }
  }
  bVar5 = 0;
LAB_103bb07d8:
  return bVar5 & 1;
}



/* Entry: 103bb07f4; end: 103bb0873; -[SCOperaVideoProgressLayer isEqual:] */

uint FUN_103bb07f4(undefined8 param_1,undefined8 param_2,long param_3)

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
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_103bb06f4(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103bb0874; end: 103bb08d3; -[SCOperaVideoProgressLayer init] */

void FUN_103bb0874(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCOperaVideoProgressLayer.OperaVideoProgressLayer",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bb08a0);
  (*pcVar1)();
}



/* Entry: 103bb08d4; end: 103bb08e3; -[SCOperaVideoProgressLayer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb08d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff3398));
  return;
}



/* Entry: 103bb08e4; end: 103bb0903;  */

void FUN_103bb08e4(void)

{
  func_0x000107c61168(&PTR_PTR_11293c220);
  return;
}



/* Entry: 103bb0904; end: 103bb095b; -[_TtC25SCOperaVideoProgressLayer27OperaVideoProgressLayerView initWithCoder:] */

void FUN_103bb0904(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCOperaVideoProgressLayer/OperaVideoProgressLayerView.swift",0x3b,2,10,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bb095c);
  (*pcVar1)();
}



/* Entry: 103bb095c; end: 103bb0bf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103bb095c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffff80;
  func_0x000107c614f0();
  puVar2 = PTR_PTR_1126d6a88;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112ff33d0) = puVar2;
  func_0x000107c5a050();
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff80,
                      PTR_s_initWithFrame__1125e2948);
  lVar1 = _DAT_112ff33d0;
  puVar4 = puVar3;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c3d89c();
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar5 = puVar2;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar5 + 0x18) = 9;
  *(undefined8 *)(puVar5 + 0x10) = 4;
  uVar6 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar7 = puVar4;
  func_0x000107c5cbe4(puVar4);
  func_0x000107c61180();
  uVar8 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar7);
  *(undefined8 *)(puVar5 + 0x20) = uVar8;
  uVar6 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar7 = puVar4;
  func_0x000107c4acb0(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  uVar8 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar7);
  *(undefined8 *)(puVar5 + 0x28) = uVar8;
  uVar6 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar7 = puVar4;
  func_0x000107c5ce8c(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  uVar8 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar7);
  *(undefined8 *)(puVar5 + 0x30) = uVar8;
  uVar6 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar8 = uVar6;
  func_0x000107c40290(0x4034000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  *(undefined8 *)(puVar5 + 0x38) = uVar8;
  uVar8 = 0;
  func_0x000100847984(0);
  puVar9 = puVar5;
  func_0x000107c5fc48(puVar5,uVar8);
  func_0x000107c61574(puVar5);
  func_0x000107c3d048(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar9);
  return puVar4;
}



/* Entry: 103bb0bf4; end: 103bb0c13; -[_TtC25SCOperaVideoProgressLayer27OperaVideoProgressLayerView initWithFrame:] */

void FUN_103bb0bf4(void)

{
  FUN_103bb095c();
  return;
}



/* Entry: 103bb0c14; end: 103bb0c47;  */

void FUN_103bb0c14(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bb0c48; end: 103bb0c57; -[_TtC25SCOperaVideoProgressLayer27OperaVideoProgressLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb0c48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff33d0));
  return;
}



/* Entry: 103bb0c58; end: 103bb0c77;  */

void FUN_103bb0c58(void)

{
  func_0x000107c61168(&PTR_PTR_11293c2e8);
  return;
}



/* Entry: 103bb0c78; end: 103bb0deb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_103bb0c78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long unaff_x20;
  
  puVar3 = (undefined8 *)&stack0xffffffffffffffa0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112ff3400) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ff3408) = 0;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_initWithConfiguration_layerViewC_1125de030,
                      param_1,param_2,param_3,param_4);
  if (puVar3 != (undefined8 *)0x0) {
    lVar4 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 6;
    *(undefined8 *)(lVar4 + 0x10) = 3;
    func_0x000107c61174();
    func_0x000107c61174();
    puVar5 = puVar3;
    FUN_103bb6b44();
    puVar6 = (undefined8 *)puVar5[1];
    *(undefined8 *)(lVar4 + 0x20) = *puVar5;
    *(undefined8 **)(lVar4 + 0x28) = puVar6;
    func_0x000107c61434();
    FUN_103bb6d50();
    puVar5 = (undefined8 *)puVar6[1];
    *(undefined8 *)(lVar4 + 0x30) = *puVar6;
    *(undefined8 **)(lVar4 + 0x38) = puVar5;
    func_0x000107c61434();
    FUN_103bb6d88();
    uVar1 = puVar5[1];
    *(undefined8 *)(lVar4 + 0x40) = *puVar5;
    *(undefined8 *)(lVar4 + 0x48) = uVar1;
    func_0x000107c61434();
    lVar7 = lVar4;
    func_0x000107c5fc48(lVar4,PTR___sSSN_11034da80);
    func_0x000107c61574(lVar4);
    func_0x000107c3d744(param_4);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c615e8(param_4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar7);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103bb0dec);
  (*pcVar2)();
}



/* Entry: 103bb0dec; end: 103bb0e67; -[_TtC25SCOperaVideoProgressLayer37OperaVideoProgressLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

void FUN_103bb0dec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  FUN_103bb0c78(param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 103bb0e68; end: 103bb0ed7; -[_TtC25SCOperaVideoProgressLayer37OperaVideoProgressLayerViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb0e68(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112ff3400) = 0;
  *(undefined1 *)(param_1 + _DAT_112ff3408) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCOperaVideoProgressLayer/OperaVideoProgressLayerViewController.swift",0x45,2
                      ,0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bb0ed8);
  (*pcVar1)();
}



/* Entry: 103bb0ed8; end: 103bb0f47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb0ed8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0;
  FUN_103bb0c58();
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ff3400);
  *(undefined8 *)(unaff_x20 + _DAT_112ff3400) = uVar1;
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  func_0x000107c5a378(uVar1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 103bb0f48; end: 103bb0f6f; -[_TtC25SCOperaVideoProgressLayer37OperaVideoProgressLayerViewController loadView] */

void FUN_103bb0f48(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103bb0ed8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103bb0f70; end: 103bb0fd3; -[_TtC25SCOperaVideoProgressLayer37OperaVideoProgressLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Possible PIC construction at 0x000103bb0fb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bb0fb8) */

void FUN_103bb0f70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000103bb1bfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103bb0fd4; end: 103bb107f; -[_TtC25SCOperaVideoProgressLayer37OperaVideoProgressLayerViewController teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb0fd4(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_teardown_112678538;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1);
  *(undefined1 *)(param_1 + _DAT_112ff3408) = 0;
  lVar3 = *(long *)(param_1 + _DAT_112ff3400);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112ff33d0);
    func_0x000107c61174();
    func_0x000107c57934(0,0,uVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103bb1080);
  (*pcVar2)();
}



/* Entry: 103bb1080; end: 103bb10df; -[_TtC25SCOperaVideoProgressLayer37OperaVideoProgressLayerViewController pageabilityForRelativePosition:navigationStyle:swipeDirection:gestureRecognizer:] */

undefined8
FUN_103bb1080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_1);
  FUN_103bb1ce8(param_3);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_1);
  return param_3;
}



/* Entry: 103bb10e0; end: 103bb1107; -[_TtC25SCOperaVideoProgressLayer37OperaVideoProgressLayerViewController didTryPagingWhenPagingDisabled:] */

void FUN_103bb10e0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103bb1d54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103bb1108; end: 103bb110f; -[_TtC25SCOperaVideoProgressLayer37OperaVideoProgressLayerViewController layerViewContainerOption] */

undefined8 FUN_103bb1108(void)

{
  return 2;
}



/* Entry: 103bb1110; end: 103bb116f; -[_TtC25SCOperaVideoProgressLayer37OperaVideoProgressLayerViewController initWithNibName:bundle:] */

void FUN_103bb1110(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCOperaVideoProgressLayer.OperaVideoProgressLayerViewController",0x3f,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bb113c);
  (*pcVar1)();
}



/* Entry: 103bb1170; end: 103bb117f; -[_TtC25SCOperaVideoProgressLayer37OperaVideoProgressLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb1170(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff3400));
  return;
}



/* Entry: 103bb1180; end: 103bb119f;  */

void FUN_103bb1180(void)

{
  func_0x000107c61168(&PTR_PTR_112ff3450);
  return;
}



/* Entry: 103bb11a0; end: 103bb1717;  */

/* WARNING: Possible PIC construction at 0x000103bb17bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bb1864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bb187c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bb1440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bb1624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bb1668: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bb15bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bb1524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bb1590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bb16f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bb12f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bb135c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bb12fc) */
/* WARNING: Removing unreachable block (ram,0x000103bb16fc) */
/* WARNING: Removing unreachable block (ram,0x000103bb1594) */
/* WARNING: Removing unreachable block (ram,0x000103bb1528) */
/* WARNING: Removing unreachable block (ram,0x000103bb1538) */
/* WARNING: Removing unreachable block (ram,0x000103bb1564) */
/* WARNING: Removing unreachable block (ram,0x000103bb156c) */
/* WARNING: Removing unreachable block (ram,0x000103bb15c0) */
/* WARNING: Removing unreachable block (ram,0x000103bb166c) */
/* WARNING: Removing unreachable block (ram,0x000103bb1628) */
/* WARNING: Removing unreachable block (ram,0x000103bb1674) */
/* WARNING: Removing unreachable block (ram,0x000103bb1684) */
/* WARNING: Removing unreachable block (ram,0x000103bb16ac) */
/* WARNING: Removing unreachable block (ram,0x000103bb16b0) */
/* WARNING: Removing unreachable block (ram,0x000103bb16b4) */
/* WARNING: Removing unreachable block (ram,0x000103bb16b8) */
/* WARNING: Removing unreachable block (ram,0x000103bb1714) */
/* WARNING: Removing unreachable block (ram,0x000103bb16c8) */
/* WARNING: Removing unreachable block (ram,0x000103bb1444) */
/* WARNING: Removing unreachable block (ram,0x000103bb1454) */
/* WARNING: Removing unreachable block (ram,0x000103bb1484) */
/* WARNING: Removing unreachable block (ram,0x000103bb1488) */
/* WARNING: Removing unreachable block (ram,0x000103bb17c0) */
/* WARNING: Removing unreachable block (ram,0x000103bb17d4) */
/* WARNING: Removing unreachable block (ram,0x000103bb1800) */
/* WARNING: Removing unreachable block (ram,0x000103bb181c) */
/* WARNING: Removing unreachable block (ram,0x000103bb182c) */
/* WARNING: Removing unreachable block (ram,0x000103bb18a0) */
/* WARNING: Removing unreachable block (ram,0x000103bb183c) */
/* WARNING: Removing unreachable block (ram,0x000103bb1360) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb11a0(long *param_1,ulong param_2,undefined8 *param_3,ulong param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined **ppuVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *unaff_x20;
  ulong uVar10;
  undefined8 *puVar11;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  plVar4 = param_1;
  uVar8 = param_2;
  FUN_103bb6d88();
  if ((param_1 == (long *)*plVar4 && param_2 == plVar4[1]) ||
     (plVar4 = param_1, uVar8 = param_2, func_0x000107c605b8(), ((ulong)plVar4 & 1) != 0)) {
    func_0x000107c4e230();
    func_0x000107c61180();
    if (unaff_x20 == (undefined8 *)0x0) {
      func_0x00010006e7f4(&stack0xffffffffffffffa0);
      return;
    }
    uVar10 = *(ulong *)((long)unaff_x20 + _DAT_11307abc8);
    func_0x000107c61434(uVar10);
    func_0x000107c61170(unaff_x20);
    ppuVar7 = &PTR____CFConstantStringClassReference_110f0bcd8;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0bcd8);
    if (*(long *)(uVar10 + 0x10) == 0) {
      func_0x000107c6142c(uVar8);
    }
    else {
      func_0x000107c61434(uVar10);
      uVar9 = uVar8;
      func_0x000100029284(ppuVar7);
      if ((uVar9 & 1) != 0) {
        func_0x0001000bb420(*(long *)(uVar10 + 0x38) + (long)ppuVar7 * 0x20,&stack0xffffffffffffffa0
                           );
        uVar10 = uVar8;
      }
    }
    goto code_r0x000107c6142c;
  }
  puVar2 = unaff_x20;
  func_0x000107c4e230();
  func_0x000107c61180();
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  func_0x000107c3b9ac();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(puVar2);
  puVar2 = unaff_x20;
  func_0x000107c4e230();
  func_0x000107c61180();
  if (puVar2 == (undefined8 *)0x0) {
    if (param_3 != (undefined8 *)0x0) {
      uVar10 = 0;
      puVar11 = (undefined8 *)0x0;
      uVar9 = uVar8;
      goto LAB_103bb12b4;
    }
  }
  else {
    puVar3 = puVar2;
    func_0x000107c3b9ac();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    puVar11 = puVar3;
    func_0x000107c5faec();
    uVar9 = uVar8;
    func_0x000107c61170();
    uVar10 = uVar8;
    puVar2 = puVar3;
    if (param_3 != (undefined8 *)0x0) {
LAB_103bb12b4:
      func_0x000107c3b9ac();
      func_0x000107c61180();
      puVar3 = param_3;
      func_0x000107c5faec();
      func_0x000107c61170();
      puVar2 = param_3;
      uVar8 = uVar9;
      if (uVar10 != 0) {
        if ((uVar9 != 0) && ((puVar11 != puVar3 || (uVar10 != uVar9)))) {
          func_0x000107c605b8(puVar11,uVar10,puVar3,uVar9,0);
        }
        goto code_r0x000107c6142c;
      }
    }
    uVar10 = uVar8;
    if (uVar10 != 0) goto code_r0x000107c6142c;
  }
  FUN_103bb6b44();
  plVar4 = (long *)*puVar2;
  uVar10 = param_4;
  if (((plVar4 == param_1) && (puVar2[1] == param_2)) ||
     (func_0x000107c605b8(plVar4,puVar2[1],param_1,param_2,0), ((ulong)plVar4 & 1) != 0)) {
    FUN_103bb1960();
    lVar6 = _DAT_112ff3408;
    plVar5 = plVar4;
    if ((*(char *)((long)unaff_x20 + _DAT_112ff3408) == '\x01') && (((ulong)plVar4 & 1) == 0)) {
      if (*(long *)((long)unaff_x20 + _DAT_112ff3400) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103bb1714);
        (*pcVar1)();
      }
      plVar5 = *(long **)(*(long *)((long)unaff_x20 + _DAT_112ff3400) + _DAT_112ff33d0);
      func_0x000107c3fb08();
    }
    *(byte *)((long)unaff_x20 + lVar6) = (byte)plVar4 & 1;
    if (param_4 != 0) {
      FUN_103bb6fe0();
      if (*(long *)(param_4 + 0x10) == 0) {
        uStack_88 = 0;
        lStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        plVar4 = &lStack_90;
        func_0x00010006e7f4();
        FUN_103bb6df8();
        if (*(long *)(param_4 + 0x10) == 0) goto LAB_103bb1630;
        lVar6 = *plVar4;
        uVar8 = plVar4[1];
        func_0x000107c61434(param_4);
        func_0x000107c61434(uVar8);
        uVar9 = uVar8;
        func_0x000100029284(lVar6);
        if ((uVar9 & 1) != 0) {
          func_0x0001000bb420(*(long *)(param_4 + 0x38) + lVar6 * 0x20,&lStack_90);
          uVar10 = uVar8;
        }
      }
      else {
        lVar6 = *plVar5;
        uVar8 = plVar5[1];
        func_0x000107c61434(uVar8);
        func_0x000107c61434(param_4);
        uVar9 = uVar8;
        func_0x000100029284(lVar6);
        if ((uVar9 & 1) != 0) {
          func_0x0001000bb420(*(long *)(param_4 + 0x38) + lVar6 * 0x20,&lStack_90);
          uVar10 = uVar8;
        }
      }
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar10);
      return;
    }
    uStack_88 = 0;
    lStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    func_0x00010006e7f4(&lStack_90);
  }
  else {
    FUN_103bb6d50();
    plVar5 = (long *)*plVar4;
    if (((plVar5 != param_1) || (plVar4[1] != param_2)) &&
       (func_0x000107c605b8(plVar5,plVar4[1],param_1,param_2,0), ((ulong)plVar5 & 1) == 0)) {
      return;
    }
    if ((param_4 != 0) && (FUN_103bb765c(), *(long *)(param_4 + 0x10) != 0)) {
      lVar6 = *plVar5;
      uVar8 = plVar5[1];
      func_0x000107c61434(param_4);
      func_0x000107c61434(uVar8);
      uVar9 = uVar8;
      func_0x000100029284(lVar6);
      if ((uVar9 & 1) != 0) {
        func_0x0001000bb420(*(long *)(param_4 + 0x38) + lVar6 * 0x20,&lStack_90);
        uVar10 = uVar8;
      }
      goto code_r0x000107c6142c;
    }
  }
LAB_103bb1630:
  uStack_88 = 0;
  lStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  func_0x00010006e7f4(&lStack_90);
  return;
}



/* Entry: 103bb1718; end: 103bb18a3;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb1718(ulong param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  ulong auStack_68 [5];
  
  lVar2 = unaff_x20;
  func_0x000107c4e230();
  func_0x000107c61180();
  if (lVar2 == 0) {
    auStack_68[2] = 0;
    auStack_68[1] = 0;
    auStack_68[4] = 0;
    auStack_68[3] = 0;
  }
  else {
    lVar7 = *(long *)(lVar2 + _DAT_11307abc8);
    func_0x000107c61434(lVar7);
    func_0x000107c61170(lVar2);
    ppuVar3 = &PTR____CFConstantStringClassReference_110f0bcd8;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0bcd8);
    if (*(long *)(lVar7 + 0x10) != 0) {
      func_0x000107c61434(lVar7);
      uVar6 = param_2;
      func_0x000100029284(ppuVar3);
      if ((uVar6 & 1) != 0) {
        func_0x0001000bb420(*(long *)(lVar7 + 0x38) + (long)ppuVar3 * 0x20,auStack_68 + 1);
        func_0x000107c6142c(param_2);
        func_0x000107c61430(lVar7,2);
        if (auStack_68[4] != 0) {
          uVar4 = 0;
          func_0x0001002ed07c(0);
          puVar5 = auStack_68;
          func_0x000107c6147c(puVar5,auStack_68 + 1,PTR___sypN_11034f1a8 + 8,uVar4,6);
          if ((int)puVar5 == 0) {
            return;
          }
          uVar6 = auStack_68[0];
          func_0x000107c3ebcc();
          func_0x000107c61170(auStack_68[0]);
          if ((uVar6 & 1) == 0) {
            return;
          }
          FUN_103bb1aa8();
          if ((param_1 & 1) == 0) {
            return;
          }
          if (*(long *)(unaff_x20 + _DAT_112ff3400) != 0) {
            func_0x000107c3e040(*(undefined8 *)
                                 (*(long *)(unaff_x20 + _DAT_112ff3400) + _DAT_112ff33d0));
            return;
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103bb18a4);
          (*pcVar1)();
        }
        goto LAB_103bb1880;
      }
      func_0x000107c6142c(lVar7);
    }
    auStack_68[2] = 0;
    auStack_68[1] = 0;
    auStack_68[4] = 0;
    auStack_68[3] = 0;
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(lVar7);
  }
LAB_103bb1880:
  func_0x00010006e7f4(auStack_68 + 1);
  return;
}



/* Entry: 103bb18a4; end: 103bb195f; -[_TtC25SCOperaVideoProgressLayer37OperaVideoProgressLayerViewController operaViewDidSendEvent:page:params:] */

/* WARNING: Possible PIC construction at 0x000103bb1944: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bb1948) */

void FUN_103bb18a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  if (param_5 != 0) {
    func_0x000107c5f9e8(param_5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
  }
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_103bb11a0(param_3,param_2,param_4,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103bb1960; end: 103bb1aa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103bb1960(undefined8 param_1,ulong param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c4e230();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    lStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    lVar5 = *(long *)(unaff_x20 + _DAT_11307abc8);
    func_0x000107c61434(lVar5);
    func_0x000107c61170(unaff_x20);
    ppuVar1 = &PTR____CFConstantStringClassReference_110f0bcd8;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0bcd8);
    if (*(long *)(lVar5 + 0x10) != 0) {
      func_0x000107c61434(lVar5);
      uVar4 = param_2;
      func_0x000100029284(ppuVar1);
      if ((uVar4 & 1) != 0) {
        func_0x0001000bb420(*(long *)(lVar5 + 0x38) + (long)ppuVar1 * 0x20,&uStack_50);
        func_0x000107c6142c(param_2);
        func_0x000107c61430(lVar5,2);
        if (lStack_38 != 0) {
          uVar2 = 0;
          func_0x0001002ed07c(0);
          puVar3 = &uStack_58;
          func_0x000107c6147c(puVar3,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar2,6);
          if (((ulong)puVar3 & 1) == 0) {
            return 0;
          }
          uVar2 = uStack_58;
          func_0x000107c3ebcc(uStack_58);
          func_0x000107c61170(uStack_58);
          return uVar2;
        }
        goto LAB_103bb1a88;
      }
      func_0x000107c6142c(lVar5);
    }
    uStack_48 = 0;
    uStack_50 = 0;
    lStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(lVar5);
  }
LAB_103bb1a88:
  func_0x00010006e7f4(&uStack_50);
  return 0;
}



/* Entry: 103bb1aa8; end: 103bb1ce7;  */

uint FUN_103bb1aa8(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong unaff_x20;
  uint uVar5;
  
  uVar1 = unaff_x20;
  func_0x000107c4e230();
  func_0x000107c61180();
  if (uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    func_0x000107c3b9ac();
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c61170(uVar1);
    if (param_1 == 0) {
      uVar5 = 1;
    }
    else {
      func_0x000107c3b9ac();
      func_0x000107c61180();
      uVar2 = param_1;
      func_0x000107c5faec();
      uVar4 = param_2;
      func_0x000107c61170(param_1);
      uVar1 = uVar2 & 0xffffffffffff;
      if ((param_2 & 0x2000000000000000) != 0) {
        uVar1 = param_2 >> 0x38 & 0xf;
      }
      if (uVar1 == 0) {
        uVar5 = 1;
      }
      else {
        func_0x000107c4e230();
        func_0x000107c61180();
        if (unaff_x20 == 0) {
          uVar5 = 0;
        }
        else {
          uVar1 = unaff_x20;
          func_0x000107c3b9ac();
          func_0x000107c61180();
          func_0x000107c61170(unaff_x20);
          uVar3 = uVar1;
          func_0x000107c5faec();
          func_0x000107c61170(uVar1);
          if ((uVar2 == uVar3) && (param_2 == uVar4)) {
            uVar5 = 1;
          }
          else {
            func_0x000107c605b8(uVar2,param_2,uVar3,uVar4,0);
            uVar5 = (uint)uVar2;
          }
          func_0x000107c6142c(param_2);
          param_2 = uVar4;
        }
      }
      func_0x000107c6142c(param_2);
    }
  }
  return uVar5 & 1;
}



/* Entry: 103bb1ce8; end: 103bb1d53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103bb1ce8(ulong param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  long unaff_x20;
  
  if (4 < param_1) {
    if (param_1 == 5) {
      return 1;
    }
    if (param_1 == 6) {
      func_0x000107c4aba4();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        uVar1 = *(undefined1 *)(unaff_x20 + _DAT_112ff33a0);
        func_0x000107c61170();
        return uVar1;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103bb1d54);
      (*pcVar2)();
    }
  }
  return 0;
}



/* Entry: 103bb1d54; end: 103bb1dd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb1d54(undefined8 *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  FUN_103bb6d88();
  uVar3 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c3dd24();
  func_0x000107c61170(uVar3);
  if (*(long *)(unaff_x20 + _DAT_112ff3400) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf088d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112ff3400) + _DAT_112ff33d0),
               PTR_s_applySkipAttemptHighlight_11259fbd8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103bb1dd4);
  (*pcVar2)();
}


