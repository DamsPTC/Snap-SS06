/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108b65a20; end: 108b65a43;  */

undefined8 FUN_108b65a20(long param_1)

{
  if ((*(byte *)(param_1 + 0x139) & 1) == 0) {
    FUN_108b65654();
    if ((int)param_1 == 0) {
      return 0xffffffff;
    }
  }
  return 0;
}



/* Entry: 108b65a44; end: 108b65b6b;  */

undefined8 FUN_108b65a44(long param_1)

{
  int iVar1;
  int extraout_w8;
  long unaff_x19;
  
  if (*(char *)(param_1 + 0x139) == '\x01') {
    func_0x000108b6833c();
    iVar1 = (int)param_1;
    if (*(long *)(unaff_x19 + 0xf8) != 0) {
      *(undefined8 *)(*(long *)(unaff_x19 + 0xf8) + 0x28) = 0;
    }
    func_0x000108b68318();
    if (((*(int *)(unaff_x19 + 0x130) != 0) || (func_0x000108b68364(), extraout_w8 != 2)) ||
       (FUN_108b68ffc(), iVar1 == 0)) {
      *(undefined4 *)(unaff_x19 + 0x134) = 1;
      *(undefined8 *)(unaff_x19 + 0x168) = 0;
      *(undefined8 *)(unaff_x19 + 0x150) = 0;
      *(undefined8 *)(unaff_x19 + 0x158) = 0;
      return 0;
    }
    func_0x000108b68264();
    func_0x00010c22ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b68310();
    func_0x000108b682e4();
    func_0x000108b68168();
    FUN_108b62f20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b681a0();
    func_0x000108b68204();
    func_0x000108b68188();
    func_0x000108b68160();
  }
  return 0xffffffff;
}



/* Entry: 108b65b6c; end: 108b65ca3;  */

undefined8 FUN_108b65b6c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_38;
  
  if ((*(char *)(param_1 + 0x139) == '\x01') && (*(int *)(param_1 + 0x134) != 0)) {
    if (*(int *)(param_1 + 0x130) == 0) {
      FUN_108b65ca4(param_1);
    }
    *(undefined4 *)(param_1 + 0x134) = 0;
    lVar2 = *(long *)(param_1 + 0x150);
    if (lVar2 < 1) {
      lVar3 = 100000;
    }
    else {
      lVar3 = 0;
      if (lVar2 != 0) {
        lVar3 = *(long *)(param_1 + 0x168) / lVar2;
      }
    }
    if (lRam000000011372d5c0 == 0) {
      uStack_38 = 0;
      func_0x000108a0ccf4(0x11372d5c0,&uStack_38,0,5);
    }
    else {
      func_0x000108afd19c(lRam000000011372d5c0,lVar3);
    }
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000108b68168();
    FUN_108b62f20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b68188();
    FUN_108b62ed0(1,puVar1);
    func_0x000108b68160();
  }
  return 0;
}



/* Entry: 108b65ca4; end: 108b65d0f;  */

void FUN_108b65ca4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  FUN_108b6913c(uVar1);
  func_0x000108b68244();
  func_0x000108b68264();
  func_0x00010c22ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12be60();
  FUN_108b67234(param_1);
  *(undefined1 *)(param_1 + 0x139) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108b65d10; end: 108b65d17;  */

bool FUN_108b65d10(long param_1)

{
  return *(int *)(param_1 + 0x134) != 0;
}



/* Entry: 108b65d18; end: 108b65e2b;  */

undefined8 FUN_108b65d18(long param_1)

{
  int iVar1;
  int extraout_w8;
  long unaff_x19;
  
  if (*(char *)(param_1 + 0x139) == '\x01') {
    func_0x000108b6833c();
    iVar1 = (int)param_1;
    if (*(long *)(unaff_x19 + 0xf8) != 0) {
      *(undefined8 *)(*(long *)(unaff_x19 + 0xf8) + 0x58) = 0;
    }
    func_0x000108b68318();
    if (((*(int *)(unaff_x19 + 0x134) != 0) || (func_0x000108b68364(), extraout_w8 != 2)) ||
       (FUN_108b68ffc(), iVar1 == 0)) {
      *(undefined4 *)(unaff_x19 + 0x130) = 1;
      return 0;
    }
    func_0x000108b68264();
    func_0x00010c22ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b68310();
    func_0x000108b682e4();
    func_0x000108b68168();
    FUN_108b62f20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b681a0();
    func_0x000108b68204();
    func_0x000108b68188();
    func_0x000108b68160();
  }
  return 0xffffffff;
}



/* Entry: 108b65e2c; end: 108b65e7b;  */

undefined8 FUN_108b65e2c(long param_1)

{
  if ((*(char *)(param_1 + 0x139) == '\x01') && (*(int *)(param_1 + 0x130) != 0)) {
    if (*(int *)(param_1 + 0x134) == 0) {
      FUN_108b65ca4(param_1);
    }
    *(undefined4 *)(param_1 + 0x130) = 0;
  }
  return 0;
}



/* Entry: 108b65e7c; end: 108b65ea7;  */

bool FUN_108b65e7c(long param_1)

{
  return *(int *)(param_1 + 0x130) != 0;
}



/* Entry: 108b65ea8; end: 108b65f0b;  */

void FUN_108b65ea8(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x000108b68218();
  if (extraout_x8 != 0) {
    do {
      func_0x000108b68150();
    } while (extraout_w10 != 0);
  }
  func_0x000108b681b8(0x108b67000);
  func_0x000108b68110();
  func_0x000108b68100();
  func_0x000108b680bc();
  func_0x000108b680a8();
  func_0x000108b68210();
  return;
}



/* Entry: 108b65f0c; end: 108b65f13;  */

void FUN_108b65f0c(long param_1)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x000108b68218(param_1 + -8);
  if (extraout_x8 != 0) {
    do {
      func_0x000108b68150();
    } while (extraout_w10 != 0);
  }
  func_0x000108b681b8(0x108b67000);
  func_0x000108b68110();
  func_0x000108b68100();
  func_0x000108b680bc();
  func_0x000108b680a8();
  func_0x000108b68210();
  return;
}



/* Entry: 108b65f14; end: 108b65f77;  */

void FUN_108b65f14(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x000108b68218();
  if (extraout_x8 != 0) {
    do {
      func_0x000108b68150();
    } while (extraout_w10 != 0);
  }
  func_0x000108b681b8(0x108b67000);
  func_0x000108b68110();
  func_0x000108b68100();
  func_0x000108b680bc();
  func_0x000108b680a8();
  func_0x000108b68210();
  return;
}



/* Entry: 108b65f78; end: 108b65f7f;  */

void FUN_108b65f78(long param_1)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x000108b68218(param_1 + -8);
  if (extraout_x8 != 0) {
    do {
      func_0x000108b68150();
    } while (extraout_w10 != 0);
  }
  func_0x000108b681b8(0x108b67000);
  func_0x000108b68110();
  func_0x000108b68100();
  func_0x000108b680bc();
  func_0x000108b680a8();
  func_0x000108b68210();
  return;
}



/* Entry: 108b65f80; end: 108b65fe3;  */

void FUN_108b65f80(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x000108b68218();
  if (extraout_x8 != 0) {
    do {
      func_0x000108b68150();
    } while (extraout_w10 != 0);
  }
  func_0x000108b681b8(0x108b67000);
  func_0x000108b68110();
  func_0x000108b68100();
  func_0x000108b680bc();
  func_0x000108b680a8();
  func_0x000108b68210();
  return;
}



/* Entry: 108b65fe4; end: 108b65feb;  */

void FUN_108b65fe4(long param_1)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x000108b68218(param_1 + -8);
  if (extraout_x8 != 0) {
    do {
      func_0x000108b68150();
    } while (extraout_w10 != 0);
  }
  func_0x000108b681b8(0x108b67000);
  func_0x000108b68110();
  func_0x000108b68100();
  func_0x000108b680bc();
  func_0x000108b680a8();
  func_0x000108b68210();
  return;
}



/* Entry: 108b65fec; end: 108b6605f;  */

void FUN_108b65fec(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x000108b68218();
  if (extraout_x8 != 0) {
    do {
      func_0x000108b68150();
    } while (extraout_w10 != 0);
  }
  func_0x000108b68110();
  func_0x000108b68100();
  func_0x000108b680bc();
  func_0x000108b680a8();
  func_0x000108b68210();
  return;
}



/* Entry: 108b66060; end: 108b66067;  */

void FUN_108b66060(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x000108b68218();
  if (extraout_x8 != 0) {
    do {
      func_0x000108b68150();
    } while (extraout_w10 != 0);
  }
  func_0x000108b68110();
  func_0x000108b68100();
  func_0x000108b680bc();
  func_0x000108b680a8();
  func_0x000108b68210();
  return;
}



/* Entry: 108b66068; end: 108b660cb;  */

void FUN_108b66068(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x000108b68218();
  if (extraout_x8 != 0) {
    do {
      func_0x000108b68150();
    } while (extraout_w10 != 0);
  }
  func_0x000108b681b8(0x108b67000);
  func_0x000108b68110();
  func_0x000108b68100();
  func_0x000108b680bc();
  func_0x000108b680a8();
  func_0x000108b68210();
  return;
}



/* Entry: 108b660cc; end: 108b660d3;  */

void FUN_108b660cc(long param_1)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x000108b68218(param_1 + -8);
  if (extraout_x8 != 0) {
    do {
      func_0x000108b68150();
    } while (extraout_w10 != 0);
  }
  func_0x000108b681b8(0x108b67000);
  func_0x000108b68110();
  func_0x000108b68100();
  func_0x000108b680bc();
  func_0x000108b680a8();
  func_0x000108b68210();
  return;
}



/* Entry: 108b660d4; end: 108b66313;  */

undefined8
FUN_108b660d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  int extraout_w10;
  undefined8 uVar4;
  undefined1 uStack_b1;
  long lStack_b0;
  int iStack_a8;
  code *pcStack_a0;
  code *pcStack_98;
  long lStack_90;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined4 auStack_68 [2];
  undefined4 uStack_60;
  int iStack_5c;
  undefined8 uStack_58;
  
  if (*(int *)(param_1 + 0x130) == 0) {
    uVar2 = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x100) = 0;
    uVar3 = param_5 & 0xffffffff;
    func_0x000108a42b50(param_1 + 0x100,uVar3);
    uVar4 = param_3;
    func_0x000108b64850(param_3);
    auStack_68[0] = 1;
    iStack_5c = *(int *)(param_1 + 0x100) << 1;
    uStack_60 = (undefined4)*(undefined8 *)(param_1 + 0x98);
    uStack_58 = *(undefined8 *)(param_1 + 0x128);
    uVar2 = *(undefined8 *)(param_1 + 0xb0);
    FUN_108b69578(uVar2,param_2,param_3,param_4,param_5,auStack_68);
    if ((int)uVar2 == 0) {
      *(undefined1 *)(param_1 + 0x58) = 0;
      if (*(int *)(param_1 + 0x130) != 0) {
        _pthread_mutex_lock(param_1 + 0xb8);
        uVar1 = 0;
        if (*(long *)(param_1 + 0x100) != 0) {
          uVar1 = *(undefined8 *)(param_1 + 0x128);
        }
        func_0x000108a58c28(*(undefined8 *)(param_1 + 0xf8),uVar1,*(long *)(param_1 + 0x100),0x1e,
                            uVar4,uVar3 & 0xff);
        func_0x000108b68334();
      }
    }
    else {
      func_0x000108b682e4();
      func_0x000108b68168();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68370(0x1ba);
      func_0x00010c25d9e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68138();
      func_0x000108b681b0(3);
      func_0x000108b68198();
      if ((*(long *)(param_1 + 0x50) != 0) && ((*(byte *)(param_1 + 0x58) & 1) == 0)) {
        *(undefined1 *)(param_1 + 0x58) = 1;
        uVar4 = *(undefined8 *)(param_1 + 0x60);
        lStack_90 = *(long *)(param_1 + 0x178);
        if (lStack_90 != 0) {
          do {
            func_0x000108b68150();
          } while (extraout_w10 != 0);
        }
        pcStack_a0 = FUN_108981410;
        pcStack_98 = FUN_108b67ea4;
        lStack_b0 = param_1;
        iStack_a8 = (int)uVar2;
        func_0x000108a0c6ec(auStack_88,&lStack_90,&lStack_b0);
        FUN_10899d238(uVar4,auStack_88,&uStack_b1);
        func_0x000108b68180(uStack_78);
        func_0x000108b68180(pcStack_a0);
        FUN_10899d2a8(&lStack_90);
      }
    }
  }
  return uVar2;
}



/* Entry: 108b66314; end: 108b6631b;  */

undefined8
FUN_108b66314(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  int extraout_w10;
  undefined8 uVar4;
  undefined1 uStack_b1;
  long lStack_b0;
  int iStack_a8;
  code *pcStack_a0;
  code *pcStack_98;
  long lStack_90;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined4 auStack_68 [2];
  undefined4 uStack_60;
  int iStack_5c;
  undefined8 uStack_58;
  
  if (*(int *)(param_1 + 0x120) == 0) {
    uVar2 = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0xf0) = 0;
    uVar3 = param_5 & 0xffffffff;
    func_0x000108a42b50(param_1 + 0xf0,uVar3);
    uVar4 = param_3;
    func_0x000108b64850(param_3);
    auStack_68[0] = 1;
    iStack_5c = *(int *)(param_1 + 0xf0) << 1;
    uStack_60 = (undefined4)*(undefined8 *)(param_1 + 0x88);
    uStack_58 = *(undefined8 *)(param_1 + 0x118);
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    FUN_108b69578(uVar2,param_2,param_3,param_4,param_5,auStack_68);
    if ((int)uVar2 == 0) {
      *(undefined1 *)(param_1 + 0x48) = 0;
      if (*(int *)(param_1 + 0x120) != 0) {
        _pthread_mutex_lock(param_1 + 0xa8);
        uVar1 = 0;
        if (*(long *)(param_1 + 0xf0) != 0) {
          uVar1 = *(undefined8 *)(param_1 + 0x118);
        }
        func_0x000108a58c28(*(undefined8 *)(param_1 + 0xe8),uVar1,*(long *)(param_1 + 0xf0),0x1e,
                            uVar4,uVar3 & 0xff);
        func_0x000108b68334();
      }
    }
    else {
      func_0x000108b682e4();
      func_0x000108b68168();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68370(0x1ba);
      func_0x00010c25d9e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68138();
      func_0x000108b681b0(3);
      func_0x000108b68198();
      if ((*(long *)(param_1 + 0x40) != 0) && ((*(byte *)(param_1 + 0x48) & 1) == 0)) {
        *(undefined1 *)(param_1 + 0x48) = 1;
        uVar4 = *(undefined8 *)(param_1 + 0x50);
        lStack_90 = *(long *)(param_1 + 0x168);
        if (lStack_90 != 0) {
          do {
            func_0x000108b68150();
          } while (extraout_w10 != 0);
        }
        pcStack_a0 = FUN_108981410;
        pcStack_98 = FUN_108b67ea4;
        lStack_b0 = param_1 + -0x10;
        iStack_a8 = (int)uVar2;
        func_0x000108a0c6ec(auStack_88,&lStack_90,&lStack_b0);
        FUN_10899d238(uVar4,auStack_88,&uStack_b1);
        func_0x000108b68180(uStack_78);
        func_0x000108b68180(pcStack_a0);
        FUN_10899d2a8(&lStack_90);
      }
    }
  }
  return uVar2;
}



/* Entry: 108b6631c; end: 108b666d3;  */

int * FUN_108b6631c(long *param_1,uint *param_2,double *param_3,undefined8 param_4,uint param_5,
                   long param_6)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  int *unaff_x24;
  int iVar8;
  double dVar9;
  double dVar10;
  undefined2 uStack_ca;
  long *plStack_c8;
  long lStack_c0;
  code *pcStack_b8;
  code *pcStack_b0;
  int *piStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  
  if (*(int *)((long)param_1 + 0x134) == 0) {
    uVar4 = *(uint *)(param_6 + 0xc);
    if (uVar4 >> 1 != param_5) {
      func_0x000108b68168();
      func_0x000108aed9a4();
      _objc_release();
      func_0x000108b681fc();
      if (*unaff_x24 != 0) {
        NEON_ucvtf(*(undefined8 *)(unaff_x24 + 4));
        return unaff_x24;
      }
      return unaff_x24;
    }
    *param_2 = *param_2 | 0x10;
    _bzero(*(undefined8 *)(param_6 + 0x10),uVar4);
  }
  else {
    param_1[0x2d] = param_1[0x2d] + 1;
    plVar6 = param_1;
    func_0x000108afcc58();
    dVar9 = *param_3;
    if (dVar9 != (double)param_5) {
      lVar7 = param_1[0x2c];
      FUN_108b666d4();
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      dVar9 = dVar9 * 1.6;
      iVar8 = (int)dVar9;
      if ((long)iVar8 < (long)plVar6 - lVar7) {
        func_0x000108b68168();
        FUN_108b62f20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25d9e0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x000108b681d4();
        func_0x000108b68348();
        func_0x000108b6827c();
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (((long)plVar6 - lVar7 < 0x79) || (0x77 < iVar8)) {
          lStack_c0 = (long)plVar6 - param_1[0x2c];
          lVar7 = param_1[0xc];
          piStack_a8 = (int *)param_1[0x2f];
          if (piStack_a8 != (int *)0x0) {
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piStack_a8,0x10);
              if (bVar3) {
                *piStack_a8 = *piStack_a8 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          pcStack_b8 = FUN_108981410;
          pcStack_b0 = FUN_108b67ebc;
          plStack_c8 = param_1;
          func_0x000108a0c6ec(auStack_a0,&piStack_a8,&plStack_c8);
          FUN_10899d238(lVar7,auStack_a0,&uStack_ca);
          func_0x000108b68180(uStack_90);
          func_0x000108b68180(pcStack_b8);
          FUN_10899d2a8(&piStack_a8);
        }
        else {
          func_0x000108b68168();
          FUN_108b62f20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25d9e0(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x000108b681d4();
          func_0x000108b68348(1);
          func_0x000108b6827c();
        }
      }
    }
    param_1[0x2c] = (long)plVar6;
    (**(code **)(*param_1 + 400))(param_1,&uStack_ca);
    if ((int)param_1[0xe] * 5 <= (int)param_1[0x34]) {
      func_0x000108b68264();
      func_0x00010c22ba80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eee80();
      param_1[0x33] = (long)dVar9;
      func_0x000108b681d4();
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    dVar10 = (double)param_1[0x33];
    FUN_108b666d4(param_1 + 0xe);
    _pthread_mutex_lock(param_1 + 0x17);
    uVar1 = 0;
    if (param_5 != 0) {
      uVar1 = *(undefined8 *)(param_6 + 0x10);
    }
    func_0x000108a58ad8(param_1[0x1f],uVar1,(ulong)param_5,uStack_ca);
    *(uint *)(param_1 + 0x34) = (int)param_1[0x34] + param_5;
    plVar6 = param_1 + 0x30;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + (ulong)param_5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar6 = param_1 + 0x31;
    uVar4 = 0;
    if (*(uint *)(param_1 + 0xe) != 0) {
      uVar4 = (param_5 * 1000) / *(uint *)(param_1 + 0xe);
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + (ulong)uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    param_1 = param_1 + 0x32;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = *param_1 + (long)((dVar10 + dVar9 * 0.001) * 1000.0 * (double)param_5);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    func_0x000108b68318();
  }
  return (int *)0x0;
}



/* Entry: 108b666d4; end: 108b66703;  */

double FUN_108b666d4(int *param_1)

{
  double dVar1;
  
  if (*param_1 != 0) {
    dVar1 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 4));
    return dVar1 / ((double)*param_1 / 1000.0);
  }
  return 0.0;
}



/* Entry: 108b66704; end: 108b6671f;  */

undefined8 FUN_108b66704(long param_1)

{
  FUN_108b6631c(param_1 + -0x10);
  return 0;
}



/* Entry: 108b66720; end: 108b667d7;  */

void FUN_108b66720(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x000108b682e4();
  func_0x000108b68168();
  FUN_108b62f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108b68138();
  func_0x000108b680d0();
  func_0x000108b68198();
  if (((uint)param_2 < 2) && (lVar1 = *(long *)(param_1 + 0x48), lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108b667b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    return;
  }
  return;
}



/* Entry: 108b667d8; end: 108b667df;  */

void FUN_108b667d8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x000108b682e4();
  func_0x000108b68168();
  FUN_108b62f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108b68138();
  func_0x000108b680d0();
  func_0x000108b68198();
  if (((uint)param_2 < 2) && (lVar1 = *(long *)(param_1 + 0x38), lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108b667b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    return;
  }
  return;
}



/* Entry: 108b667e0; end: 108b66a03;  */

void FUN_108b667e0(double param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  double dVar6;
  
  lVar2 = param_2;
  func_0x000108b68264();
  func_0x00010c22ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c149840();
  dVar6 = param_1;
  func_0x00010bdc1740(lVar2);
  func_0x000108b68168();
  FUN_108b62f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108b68250(0x301);
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108b68138();
  func_0x000108b680d0();
  func_0x000108b68198();
  func_0x00010c2a3ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c149840();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((param_1 <= 2.220446049250313e-16) && (0 < *(int *)(param_2 + 0x70))) {
    func_0x000108b68168();
    FUN_108b62f20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b68198();
    func_0x000108b68270();
    func_0x000108b681d4();
    param_1 = (double)*(int *)(param_2 + 0x70);
  }
  iVar4 = (int)param_1;
  lVar5 = (long)(dVar6 * (double)iVar4 + 0.5);
  *(int *)(param_2 + 0x70) = iVar4;
  *(long *)(param_2 + 0x80) = lVar5;
  *(long *)(param_2 + 0x88) = (long)(iVar4 / 100);
  *(int *)(param_2 + 0x90) = iVar4;
  *(long *)(param_2 + 0xa0) = lVar5;
  *(long *)(param_2 + 0xa8) = (long)(iVar4 / 100);
  _pthread_mutex_lock(param_2 + 0xb8);
  FUN_108b6559c(param_2);
  uVar3 = 0x90;
  __Znwm(0x90);
  func_0x000108a58a34();
  FUN_108b671d0(param_2 + 0xf8,uVar3);
  func_0x000108b68334();
  func_0x000108b681a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108b66a04; end: 108b6718b;  */

void FUN_108b66a04(long param_1,undefined *param_2)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 unaff_x30;
  
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000108b68168();
  FUN_108b62f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108b68228(0x34c);
  func_0x00010c25d9e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108b68160();
  func_0x000108b680d0();
  func_0x000108b68198();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (*(char *)(param_1 + 0x13a) == '\x01') {
    func_0x000108b68168();
    FUN_108b62f20();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b68228(0x34f);
    func_0x00010c25d9e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b680dc();
    func_0x000108b680e8();
  }
  else {
    if (*(char *)(param_1 + 0x139) != '\x01') {
LAB_108b6705c:
      func_0x000108b682c8();
      return;
    }
    switch(*(undefined4 *)(*(long *)(param_1 + 0xb0) + 0x18)) {
    case 0:
      func_0x000108b68168();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68228(0x361);
      func_0x00010c25d9e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b680dc();
      func_0x000108b680e8();
      break;
    case 1:
      func_0x000108b68168();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68228(0x365);
      func_0x00010c25d9e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68160();
      func_0x000108b680d0();
      func_0x000108b68198();
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if ((int)param_2 == 0) goto LAB_108b6705c;
      if (*(int *)(param_1 + 0x134) == 0) {
        bVar2 = *(int *)(param_1 + 0x130) != 0;
      }
      else {
        bVar2 = true;
      }
      func_0x000108b68168();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68228(0x379);
      func_0x00010c25d9e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b680dc();
      func_0x000108b680e8();
      func_0x000108b681a0();
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000108b68168();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68284(0x3a3);
      func_0x00010c25d9e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b680dc();
      func_0x000108b680e8();
      func_0x000108b681a0();
      param_2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (*(char *)(param_1 + 0x148) == '\x01') {
        func_0x000108b68168();
        FUN_108b62f20();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108b68284(0x3a5);
        func_0x00010c25d9e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x000108b680dc();
        func_0x000108b681cc(2);
      }
      else {
        puVar5 = PTR_PTR_1126da390;
        func_0x00010c22ba80();
        iVar3 = (int)puVar5;
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09fb60();
        func_0x00010bf47620();
        func_0x000108b6829c();
        param_2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (iVar3 == 0) {
          func_0x000108b68168();
          FUN_108b62f20();
          _objc_retainAutoreleasedReturnValue();
          func_0x000108b68284(0x3b1);
          func_0x00010c25d9e0(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x000108b68198();
          func_0x000108b680e8();
        }
        else {
          *(undefined1 *)(param_1 + 0x148) = 1;
          param_2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x000108b68168();
          FUN_108b62f20();
          _objc_retainAutoreleasedReturnValue();
          func_0x000108b68284(0x3af);
          func_0x00010c25d9e0(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x000108b68198();
          func_0x000108b680e8();
        }
        func_0x000108b681a0();
      }
      func_0x000108b68160();
      FUN_108b667e0(param_1);
      uVar4 = *(ulong *)(param_1 + 0xb0);
      FUN_108b68804((double)*(int *)(param_1 + 0x70));
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if ((uVar4 & 1) != 0) {
        if (!bVar2) goto LAB_108b6705c;
        goto code_r0x000108b66f5c;
      }
      func_0x000108b68168();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68228(0x37d);
      func_0x00010c25d9e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b680dc();
      func_0x000108b681cc(3);
      break;
    case 2:
      func_0x000108b68168();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68228(0x36b);
      func_0x00010c25d9e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68160();
      func_0x000108b680d0();
      func_0x000108b68198();
      if ((int)param_2 == 0) {
code_r0x000108b66c6c:
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x000108b68168();
        FUN_108b62f20();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108b68228(0x39b);
        func_0x00010c25d9e0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x000108b680dc();
        func_0x000108b680e8();
        func_0x000108b681a0();
        FUN_108b69280(*(undefined8 *)(param_1 + 0xb0));
        func_0x000108b682c8();
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x000108b68168();
        FUN_108b62f20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25d9e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108b680dc();
        func_0x000108b680e8();
        func_0x000108b681a0();
        puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if ((*(byte *)(param_1 + 0x148) & 1) == 0) {
          func_0x000108b68168();
          FUN_108b62f20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25d9e0(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x000108b680dc();
          func_0x000108b681cc(2);
        }
        else {
          func_0x000108b68264();
          func_0x00010c22ba80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c09fb60();
          func_0x00010c27f600(puVar5);
          func_0x00010bf95b80();
          func_0x000108b6829c();
          *(undefined1 *)(param_1 + 0x148) = 0;
          puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x000108b68168();
          FUN_108b62f20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25d9e0(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x000108b68188();
          func_0x000108b680e8();
          func_0x000108b681a0();
        }
        goto _objc_release;
      }
      if ((*(int *)(param_1 + 0x134) == 0) && (*(int *)(param_1 + 0x130) == 0)) goto LAB_108b6705c;
code_r0x000108b66f5c:
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000108b68168();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68228(899);
      func_0x00010c25d9e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b680dc();
      func_0x000108b680e8();
      func_0x000108b681a0();
      param_2 = PTR_PTR_1126da390;
      func_0x00010c22ba80();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68168();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68250(0x387);
      func_0x00010c25d9e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68138();
      func_0x000108b680d0();
      func_0x000108b68198();
      iVar3 = (int)*(undefined8 *)(param_1 + 0xb0);
      FUN_108b68ffc();
      if (iVar3 != 0) {
        func_0x000108b68310();
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x000108b68168();
        FUN_108b62f20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25d9e0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x000108b68138();
        func_0x000108b681b0(3);
        func_0x000108b68198();
      }
      break;
    case 3:
      func_0x000108b68168();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68228(0x371);
      func_0x00010c25d9e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68160();
      func_0x000108b680d0();
      func_0x000108b68198();
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (((ulong)param_2 & 1) != 0) goto LAB_108b6705c;
      func_0x000108b68168();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68228(0x391);
      func_0x00010c25d9e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b680dc();
      func_0x000108b680e8();
      func_0x000108b681a0();
      uVar4 = *(ulong *)(param_1 + 0xb0);
      FUN_108b6913c();
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if ((uVar4 & 1) != 0) goto code_r0x000108b66c6c;
      func_0x000108b68168();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68228(0x393);
      func_0x00010c25d9e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b680dc();
      func_0x000108b681cc(3);
      param_2 = puVar5;
      break;
    default:
      goto LAB_108b6705c;
    }
  }
  func_0x000108b682c8(param_2,unaff_x30);
_objc_release:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108b6718c; end: 108b671cf;  */

void FUN_108b6718c(undefined8 param_1)

{
  func_0x000108b68264();
  func_0x00010c22ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dd020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108b671d0; end: 108b671f7;  */

void FUN_108b671d0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x000108a58aa8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108b671f8; end: 108b67233;  */

void FUN_108b671f8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_108b6837c(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 108b67234; end: 108b673df;  */

void FUN_108b67234(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000108b68168();
  FUN_108b62f20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c25d9e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110ee80f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108b680dc();
  func_0x000108b680e8();
  func_0x000108b681a0();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((*(byte *)(param_1 + 0x148) & 1) == 0) {
    func_0x000108b68168();
    FUN_108b62f20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110ee8118);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b680dc();
    func_0x000108b681cc(2);
  }
  else {
    func_0x000108b68264();
    func_0x00010c22ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09fb60();
    func_0x00010c27f600(puVar2,param_2,0);
    func_0x00010bf95b80(puVar2,param_2,0);
    func_0x000108b6829c();
    *(undefined1 *)(param_1 + 0x148) = 0;
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000108b68168();
    FUN_108b62f20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110ee8138);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b68188();
    func_0x000108b680e8();
    func_0x000108b681a0();
    puVar3 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 108b673e0; end: 108b67433;  */

undefined8 FUN_108b673e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 0;
}



/* Entry: 108b67434; end: 108b674ff;  */

undefined8 FUN_108b67434(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0xb0);
  uVar3 = 0;
  if (uVar2 != 0) {
    if ((*(int *)(uVar2 + 0x18) == 3) &&
       (FUN_108b693c4(), puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0, (uVar2 & 1) == 0)) {
      func_0x000108b68168();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d9e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b680f4();
      func_0x000108b68204();
      func_0x000108b68188();
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* Entry: 108b67500; end: 108b6755b;  */

undefined8 FUN_108b67500(void)

{
  return 0xffffffff;
}



/* Entry: 108b6755c; end: 108b675a3;  */

undefined8 FUN_108b6755c(undefined8 param_1)

{
  FUN_108b671f8(param_1,0);
  return param_1;
}



/* Entry: 108b675a4; end: 108b676ff;  */

void FUN_108b675a4(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar3 = *param_1;
  func_0x000108b68168();
  FUN_108b62f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110ee7c58);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108b680f4();
  func_0x000108b68144();
  func_0x000108b68188();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((*(long *)(lVar3 + 0xb0) != 0) && (*(int *)(*(long *)(lVar3 + 0xb0) + 0x18) == 3)) {
    func_0x000108b68168();
    FUN_108b62f20();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b68228(0x23b);
    func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110ee7c78);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b680f4();
    func_0x000108b68144();
    func_0x000108b68188();
    uVar2 = *(ulong *)(lVar3 + 0xb0);
    FUN_108b6913c();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((uVar2 & 1) == 0) {
      func_0x000108b68168();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68228(0x23d);
      func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110ee7c98);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b680f4();
      func_0x000108b68204();
      func_0x000108b68188();
    }
  }
  *(undefined1 *)(lVar3 + 0x13a) = 1;
  return;
}



/* Entry: 108b67700; end: 108b6781f;  */

void FUN_108b67700(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  int extraout_w8;
  int extraout_w8_00;
  int iVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar5 = *param_1;
  func_0x000108b68168();
  FUN_108b62f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108b68188();
  func_0x000108b680e8();
  func_0x000108b681a0();
  *(undefined1 *)(lVar5 + 0x13a) = 0;
  if (*(long *)(lVar5 + 0xb0) != 0) {
    lVar2 = *(long *)(lVar5 + 0x20);
    func_0x0001089f8844(lVar2,&UNK_10f50043c,0x18);
    if ((int)lVar2 != 0) {
      func_0x000108b68364();
      iVar4 = extraout_w8;
      if (extraout_w8 == 3) {
        FUN_108b6913c();
        func_0x000108b68364();
        iVar4 = extraout_w8_00;
      }
      if (iVar4 == 2) {
        FUN_108b69280();
      }
      lVar2 = lVar5;
      FUN_108b667e0(lVar5);
    }
    func_0x000108b68264();
    func_0x00010c22ba80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf2d0e0();
    FUN_108b66a04(lVar5,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 108b67820; end: 108b67d73;  */

void FUN_108b67820(double param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  
  lVar7 = *param_2;
  puVar3 = PTR_PTR_1126da390;
  func_0x00010c22ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108b68168();
  FUN_108b62f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108b68250(0x260);
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108b68188();
  func_0x000108b680d0();
  func_0x000108b68198();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000108b68168();
  FUN_108b62f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108b68290(0x26b);
  func_0x00010c25d9e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108b68188();
  func_0x000108b680d0();
  func_0x000108b68198();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (*(char *)(lVar7 + 0x13a) == '\x01') {
    func_0x000108b68168();
    FUN_108b62f20();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b68290(0x26f);
    func_0x00010c25d9e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b68188();
    func_0x000108b680d0();
  }
  else {
    if ((*(long *)(lVar7 + 0xb0) == 0) || (*(int *)(*(long *)(lVar7 + 0xb0) + 0x18) < 2))
    goto LAB_108b67c70;
    puVar4 = PTR_PTR_1126da390;
    func_0x00010c22ba80(PTR_PTR_1126da390);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c149840();
    dVar10 = param_1;
    func_0x00010bdc1740(puVar4);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    iVar2 = *(int *)(lVar7 + 0x70);
    lVar8 = *(long *)(lVar7 + 0x80);
    func_0x000108b68168();
    FUN_108b62f20();
    _objc_retainAutoreleasedReturnValue();
    dVar10 = dVar10 * param_1 + 0.5;
    lVar9 = (long)dVar10;
    func_0x000108b68290(0x28b);
    func_0x00010c25d9e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b68198();
    FUN_108b62ed0(1,puVar5);
    func_0x000108b681d4();
    func_0x00010c0eee80(puVar4);
    *(double *)(lVar7 + 0x198) = dVar10;
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (ABS((double)iVar2 - param_1) <= 2.220446049250313e-16 && lVar8 == lVar9) {
      func_0x000108b68168();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68290(0x292);
      func_0x00010c25d9e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b6812c();
      func_0x000108b680d0();
    }
    else if (param_1 <= 0.0) {
      func_0x000108b68168();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68290(0x298);
      func_0x00010c25d9e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b6812c();
      func_0x000108b681b0(3);
    }
    else {
      func_0x000108b68168();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68290(0x29f);
      func_0x00010c25d9e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b6812c();
      func_0x000108b680d0();
      func_0x000108b68198();
      iVar2 = *(int *)(*(long *)(lVar7 + 0xb0) + 0x18);
      iVar1 = iVar2;
      if (iVar2 == 3) {
        FUN_108b6913c();
        iVar1 = *(int *)(*(long *)(lVar7 + 0xb0) + 0x18);
      }
      if (iVar1 == 2) {
        FUN_108b69280();
      }
      FUN_108b667e0(lVar7);
      uVar6 = *(ulong *)(lVar7 + 0xb0);
      FUN_108b68804((double)*(int *)(lVar7 + 0x70));
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if ((uVar6 & 1) == 0) {
        func_0x000108b68168();
        FUN_108b62f20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25d9e0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x000108b6812c();
        func_0x000108b681b0(3);
      }
      else {
        if (iVar2 == 3) {
          iVar2 = (int)*(undefined8 *)(lVar7 + 0xb0);
          FUN_108b68ffc();
          if (iVar2 != 0) {
            func_0x000108b68264();
            func_0x00010c22ba80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0dce20();
            puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x000108b68168();
            FUN_108b62f20();
            _objc_retainAutoreleasedReturnValue();
            func_0x000108b68290(0x2bd);
            func_0x00010c25d9e0(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x000108b6827c();
            func_0x000108b68270();
            func_0x000108b681d4();
            goto LAB_108b67c68;
          }
        }
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x000108b68168();
        FUN_108b62f20();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108b68290(0x2c1);
        func_0x00010c25d9e0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x000108b6812c();
        func_0x000108b680d0();
      }
    }
LAB_108b67c68:
    func_0x000108b68198();
  }
  func_0x000108b68188();
LAB_108b67c70:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 108b67d74; end: 108b67e13;  */

void FUN_108b67d74(long *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 unaff_x30;
  
  lVar6 = *param_1;
  bVar1 = *(byte *)(param_1 + 1);
  puVar7 = (undefined *)(ulong)bVar1;
  func_0x000108b682e4();
  func_0x000108b68168();
  FUN_108b62f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108b68138();
  func_0x000108b680d0();
  func_0x000108b68198();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000108b68168();
  FUN_108b62f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108b68228(0x34c);
  func_0x00010c25d9e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108b68160();
  func_0x000108b680d0();
  func_0x000108b68198();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (*(char *)(lVar6 + 0x13a) == '\x01') {
    func_0x000108b68168();
    FUN_108b62f20();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b68228(0x34f);
    func_0x00010c25d9e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b680dc();
    func_0x000108b680e8();
  }
  else {
    if (*(char *)(lVar6 + 0x139) != '\x01') {
LAB_108b6705c:
      func_0x000108b682c8();
      return;
    }
    switch(*(undefined4 *)(*(long *)(lVar6 + 0xb0) + 0x18)) {
    case 0:
      func_0x000108b68168();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68228(0x361);
      func_0x00010c25d9e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b680dc();
      func_0x000108b680e8();
      break;
    case 1:
      func_0x000108b68168();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68228(0x365);
      func_0x00010c25d9e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68160();
      func_0x000108b680d0();
      func_0x000108b68198();
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (bVar1 == 0) goto LAB_108b6705c;
      if (*(int *)(lVar6 + 0x134) == 0) {
        bVar2 = *(int *)(lVar6 + 0x130) != 0;
      }
      else {
        bVar2 = true;
      }
      func_0x000108b68168();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68228(0x379);
      func_0x00010c25d9e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b680dc();
      func_0x000108b680e8();
      func_0x000108b681a0();
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000108b68168();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68284(0x3a3);
      func_0x00010c25d9e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b680dc();
      func_0x000108b680e8();
      func_0x000108b681a0();
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (*(char *)(lVar6 + 0x148) == '\x01') {
        func_0x000108b68168();
        FUN_108b62f20();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108b68284(0x3a5);
        func_0x00010c25d9e0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x000108b680dc();
        func_0x000108b681cc(2);
      }
      else {
        puVar5 = PTR_PTR_1126da390;
        func_0x00010c22ba80();
        iVar3 = (int)puVar5;
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09fb60();
        func_0x00010bf47620();
        func_0x000108b6829c();
        puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (iVar3 == 0) {
          func_0x000108b68168();
          FUN_108b62f20();
          _objc_retainAutoreleasedReturnValue();
          func_0x000108b68284(0x3b1);
          func_0x00010c25d9e0(puVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x000108b68198();
          func_0x000108b680e8();
        }
        else {
          *(undefined1 *)(lVar6 + 0x148) = 1;
          puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x000108b68168();
          FUN_108b62f20();
          _objc_retainAutoreleasedReturnValue();
          func_0x000108b68284(0x3af);
          func_0x00010c25d9e0(puVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x000108b68198();
          func_0x000108b680e8();
        }
        func_0x000108b681a0();
      }
      func_0x000108b68160();
      FUN_108b667e0(lVar6);
      uVar4 = *(ulong *)(lVar6 + 0xb0);
      FUN_108b68804((double)*(int *)(lVar6 + 0x70));
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if ((uVar4 & 1) != 0) {
        if (!bVar2) goto LAB_108b6705c;
        goto code_r0x000108b66f5c;
      }
      func_0x000108b68168();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68228(0x37d);
      func_0x00010c25d9e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b680dc();
      func_0x000108b681cc(3);
      break;
    case 2:
      func_0x000108b68168();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68228(0x36b);
      func_0x00010c25d9e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68160();
      func_0x000108b680d0();
      func_0x000108b68198();
      if (bVar1 == 0) {
code_r0x000108b66c6c:
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x000108b68168();
        FUN_108b62f20();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108b68228(0x39b);
        func_0x00010c25d9e0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x000108b680dc();
        func_0x000108b680e8();
        func_0x000108b681a0();
        FUN_108b69280(*(undefined8 *)(lVar6 + 0xb0));
        func_0x000108b682c8();
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x000108b68168();
        FUN_108b62f20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25d9e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108b680dc();
        func_0x000108b680e8();
        func_0x000108b681a0();
        puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if ((*(byte *)(lVar6 + 0x148) & 1) == 0) {
          func_0x000108b68168();
          FUN_108b62f20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25d9e0(puVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x000108b680dc();
          func_0x000108b681cc(2);
        }
        else {
          func_0x000108b68264();
          func_0x00010c22ba80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c09fb60();
          func_0x00010c27f600(puVar5);
          func_0x00010bf95b80();
          func_0x000108b6829c();
          *(undefined1 *)(lVar6 + 0x148) = 0;
          puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x000108b68168();
          FUN_108b62f20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25d9e0(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x000108b68188();
          func_0x000108b680e8();
          func_0x000108b681a0();
        }
        goto _objc_release;
      }
      if ((*(int *)(lVar6 + 0x134) == 0) && (*(int *)(lVar6 + 0x130) == 0)) goto LAB_108b6705c;
code_r0x000108b66f5c:
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000108b68168();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68228(899);
      func_0x00010c25d9e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b680dc();
      func_0x000108b680e8();
      func_0x000108b681a0();
      puVar7 = PTR_PTR_1126da390;
      func_0x00010c22ba80();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68168();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68250(0x387);
      func_0x00010c25d9e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68138();
      func_0x000108b680d0();
      func_0x000108b68198();
      iVar3 = (int)*(undefined8 *)(lVar6 + 0xb0);
      FUN_108b68ffc();
      if (iVar3 != 0) {
        func_0x000108b68310();
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x000108b68168();
        FUN_108b62f20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25d9e0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x000108b68138();
        func_0x000108b681b0(3);
        func_0x000108b68198();
      }
      break;
    case 3:
      func_0x000108b68168();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68228(0x371);
      func_0x00010c25d9e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68160();
      func_0x000108b680d0();
      func_0x000108b68198();
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if ((bVar1 & 1) != 0) goto LAB_108b6705c;
      func_0x000108b68168();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68228(0x391);
      func_0x00010c25d9e0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b680dc();
      func_0x000108b680e8();
      func_0x000108b681a0();
      uVar4 = *(ulong *)(lVar6 + 0xb0);
      FUN_108b6913c();
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if ((uVar4 & 1) != 0) goto code_r0x000108b66c6c;
      func_0x000108b68168();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b68228(0x393);
      func_0x00010c25d9e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b680dc();
      func_0x000108b681cc(3);
      break;
    default:
      goto LAB_108b6705c;
    }
  }
  func_0x000108b682c8(puVar7,unaff_x30);
_objc_release:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108b67e14; end: 108b67ea3;  */

void FUN_108b67e14(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar2 = *param_1;
  func_0x000108b68168();
  FUN_108b62f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108b68370(0x2e3);
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110ee7e98);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108b680f4();
  func_0x000108b68144();
  func_0x000108b68188();
  func_0x000108afcc58();
  *(undefined **)(lVar2 + 0x170) = puVar1;
  return;
}



/* Entry: 108b67ea4; end: 108b67ebb;  */

void FUN_108b67ea4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108b67eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*param_1 + 0x50) + 0x10))(*(long *)(*param_1 + 0x50),(int)param_1[1]);
  return;
}



/* Entry: 108b67ebc; end: 108b680a7;  */

void FUN_108b67ebc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar6 = *param_1;
  if (*(char *)(lVar6 + 0x13a) == '\x01') {
    func_0x000108b68168();
    FUN_108b62f20();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b68370(0x2c9);
    func_0x00010c25d9e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b680f4();
    func_0x000108b68144();
  }
  else {
    lVar5 = param_1[1];
    lVar8 = *(long *)(lVar6 + 0x170);
    if ((lVar8 < 1) ||
       (func_0x000108afcc58(), puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0,
       1999 < (long)param_1 - lVar8)) {
      plVar1 = (long *)(lVar6 + 0x150);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar2 = (long *)(lVar6 + 0x158);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + lVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
        puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      } while (cVar3 != '\0');
      lVar6 = *plVar1;
      func_0x000108b68168();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d9e0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b680f4();
      func_0x000108b68144();
      func_0x000108b68188();
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc0000000;
      pcStack_48 = FUN_108b6718c;
      puStack_40 = &UNK_110848088;
      lStack_38 = lVar6;
      func_0x000107c27d8c(PTR___dispatch_main_q_11034be20,&puStack_58);
      return;
    }
    func_0x000108b68168();
    FUN_108b62f20();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b68370(0x2d0);
    func_0x00010c25d9e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b680f4();
    func_0x000108b68144();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 108b680a8; end: 108b6837b;  */

void FUN_108b680a8(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000108b680b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(1,&stack0x00000008,&stack0x00000008);
  return;
}



/* Entry: 108b6837c; end: 108b684a3;  */

void FUN_108b6837c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x18) != 2) {
    if (*(int *)(param_1 + 0x18) != 3) goto LAB_108b683c4;
    FUN_108b6913c(param_1);
  }
  FUN_108b69280(param_1);
LAB_108b683c4:
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000108b69698();
  FUN_108b62f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108b69724(0x231);
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110ee85d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108b69618();
  func_0x000108b69644();
  func_0x000108b696b4();
  iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
  _AudioComponentInstanceDispose();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (iVar2 != 0) {
    func_0x000108b69698();
    FUN_108b62f20();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b696dc();
    func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110ee85f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b69618();
    func_0x000108b69624();
    func_0x000108b696b4();
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 108b684a4; end: 108b687e3;  */

bool FUN_108b684a4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  long lStack_78;
  undefined4 uStack_6c;
  code *pcStack_68;
  long lStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  uStack_48 = 0x6170706c;
  uStack_50 = 0x7670696f61756f75;
  uStack_40 = 0;
  iVar1 = 0;
  _AudioComponentFindNext(0,&uStack_50);
  _AudioComponentInstanceNew();
  if (iVar1 == 0) {
    uStack_54 = 1;
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x000108b69678(uVar2,0x7d3,1);
    if ((int)uVar2 == 0) {
      uStack_58 = 1;
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      _AudioUnitSetProperty(uVar2,0x7d3,2,0,&uStack_58,4);
      if ((int)uVar2 == 0) {
        pcStack_68 = FUN_108b687e4;
        uVar2 = *(undefined8 *)(param_1 + 0x10);
        lStack_60 = param_1;
        _AudioUnitSetProperty(uVar2,0x17,1,0,&pcStack_68,0x10);
        if ((int)uVar2 == 0) {
          uStack_6c = 0;
          uVar2 = *(undefined8 *)(param_1 + 0x10);
          func_0x000108b69678(uVar2,0x33,2);
          if ((int)uVar2 == 0) {
            uStack_80 = 0x108b687f4;
            uVar2 = *(undefined8 *)(param_1 + 0x10);
            lStack_78 = param_1;
            _AudioUnitSetProperty(uVar2,0x7d5,0,1,&uStack_80,0x10);
            iVar1 = (int)uVar2;
            if (iVar1 != 0) {
              FUN_108b6837c();
              func_0x000108b69630();
              FUN_108b62f20();
              _objc_retainAutoreleasedReturnValue();
              func_0x000108b696a4((long)iVar1);
              func_0x00010c25d9e0(param_1);
              _objc_retainAutoreleasedReturnValue();
              func_0x000108b696b4();
              FUN_108b62ed0(3,param_1);
              _objc_release(param_1);
              return iVar1 == 0;
            }
            *(undefined4 *)(param_1 + 0x18) = 1;
            return true;
          }
          func_0x000108b696bc();
          func_0x000108b69630();
          FUN_108b62f20();
          _objc_retainAutoreleasedReturnValue();
          func_0x000108b696dc();
          func_0x000108b696a4();
          func_0x00010c25d9e0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x000108b69618();
          func_0x000108b69624();
        }
        else {
          func_0x000108b696bc();
          func_0x000108b69630();
          FUN_108b62f20();
          _objc_retainAutoreleasedReturnValue();
          func_0x000108b696dc();
          func_0x000108b696a4();
          func_0x00010c25d9e0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x000108b69618();
          func_0x000108b69624();
        }
      }
      else {
        func_0x000108b696bc();
        func_0x000108b69630();
        FUN_108b62f20();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108b696dc();
        func_0x000108b696a4();
        func_0x00010c25d9e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x000108b69618();
        func_0x000108b69624();
      }
    }
    else {
      func_0x000108b696bc();
      func_0x000108b69630();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b696dc();
      func_0x000108b696a4();
      func_0x00010c25d9e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b69618();
      func_0x000108b69624();
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x10) = 0;
    func_0x000108b69630();
    FUN_108b62f20();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b696dc();
    func_0x000108b696a4();
    func_0x00010c25d9e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b69618();
    func_0x000108b69624();
  }
  func_0x000108b696b4();
  return false;
}



/* Entry: 108b687e4; end: 108b68803;  */

void FUN_108b687e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108b687f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 8))();
  return;
}



/* Entry: 108b68804; end: 108b68f27;  */

undefined8 FUN_108b68804(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  int iVar8;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  char *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  func_0x000108b6965c();
  FUN_108b62f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108b69618();
  func_0x000108b69644();
  func_0x000108b696b4();
  uStack_88 = 0x100000002;
  uStack_90 = 0xc6c70636d;
  uStack_80 = 0x100000002;
  uStack_78 = 0x10;
  puVar2 = *(undefined **)(param_2 + 0x10);
  uStack_98 = param_1;
  _AudioUnitSetProperty(puVar2,8,2,1,&uStack_98,0x28);
  if ((int)puVar2 != 0) {
    func_0x000108b69630();
    FUN_108b62f20();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b696dc();
    func_0x00010c25d9e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b69618();
    func_0x000108b69624();
LAB_108b68974:
    _objc_release(puVar2);
    return 0;
  }
  puVar2 = *(undefined **)(param_2 + 0x10);
  _AudioUnitSetProperty(puVar2,8,1,0,&uStack_98,0x28);
  if ((int)puVar2 != 0) {
    func_0x000108b69630();
    FUN_108b62f20();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b696dc();
    func_0x00010c25d9e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b69618();
    func_0x000108b69624();
    goto LAB_108b68974;
  }
  iVar8 = 4;
  ppuVar7 = &PTR____CFConstantStringClassReference_110ee82b8;
  while( true ) {
    iVar1 = (int)*(undefined8 *)(param_2 + 0x10);
    _AudioUnitInitialize();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    FUN_108b62f20();
    _objc_retainAutoreleasedReturnValue();
    if (iVar1 == 0) break;
    func_0x00010c25d9e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b69704();
    FUN_108b62ed0(3,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    FUN_108b62f20();
    _objc_retainAutoreleasedReturnValue();
    if (iVar8 == 0) {
      func_0x00010c25d9e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b69704();
      FUN_108b62ed0(3,puVar2);
      goto LAB_108b68974;
    }
    func_0x00010c25d9e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b69704();
    FUN_108b62ed0(1,puVar2);
    _objc_release(puVar2);
    func_0x00010c23e800(0x3fb99999a0000000,PTR__OBJC_CLASS___NSThread_1126b47e0);
    iVar8 = iVar8 + -1;
  }
  func_0x00010c25d9e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108b69704();
  ppuVar3 = (undefined **)0x1;
  FUN_108b62ed0(1,puVar2);
  func_0x000108b69670();
  if ((param_2[1] & 1U) != 0) {
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc0000000;
    pcStack_b8 = FUN_108b68f28;
    puStack_b0 = &UNK_110ab3870;
    ppuVar3 = &puStack_c8;
    pcStack_a8 = param_2;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    uStack_a0 = ppuVar3;
    _AudioUnitSetProperty(uVar4,0x83a,0,0,&uStack_a0,8);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)uVar4 != 0) {
      func_0x000108b69698();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d9e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b69618();
      func_0x000108b69644();
      func_0x000108b696b4();
      ppuVar7 = (undefined **)puVar2;
    }
    ppuVar3 = uStack_a0;
    _objc_release();
  }
  if (*param_2 == '\x01') {
    uStack_a0 = (undefined **)CONCAT44(uStack_a0._4_4_,1);
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    func_0x000108b69678(uVar4,0x834,0);
    func_0x000108b6965c();
    FUN_108b62f20();
    _objc_retainAutoreleasedReturnValue();
    if ((int)uVar4 == 0) {
      func_0x00010c25d9e0(ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b69618();
      func_0x000108b69644();
    }
    else {
      func_0x00010c25d9e0(ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b69618();
      func_0x000108b69624();
    }
    goto LAB_108b68d94;
  }
  uStack_a0 = (undefined **)((ulong)uStack_a0._4_4_ << 0x20);
  func_0x000108b69718();
  if ((int)ppuVar3 == 0) {
    if ((int)uStack_a0 == 0) {
      ppuVar5 = *(undefined ***)(param_2 + 0x10);
      func_0x000108b69678(ppuVar5,0x835,0);
      ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      ppuVar3 = ppuVar5;
      if ((int)ppuVar5 != 0) {
        func_0x000108b69698();
        FUN_108b62f20();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108b696dc();
        func_0x00010c25d9e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108b69618();
        func_0x000108b69624();
        func_0x000108b696b4();
        ppuVar3 = ppuVar6;
        ppuVar7 = ppuVar5;
      }
      func_0x000108b69718();
      if ((int)ppuVar3 != 0) {
        func_0x000108b69698();
        FUN_108b62f20();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108b696dc();
        func_0x00010c25d9e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108b69618();
        func_0x000108b69624();
        goto LAB_108b68cc4;
      }
    }
  }
  else {
    func_0x000108b69698();
    FUN_108b62f20();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b696dc();
    func_0x00010c25d9e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b69618();
    func_0x000108b69624();
LAB_108b68cc4:
    func_0x000108b696b4();
    ppuVar7 = ppuVar3;
  }
  func_0x000108b6965c();
  FUN_108b62f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108b69618();
  func_0x000108b69644();
  func_0x000108b696b4();
  func_0x000108b6965c();
  FUN_108b62f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108b69618();
  func_0x000108b69644();
LAB_108b68d94:
  func_0x000108b696b4();
  param_2[0x18] = '\x02';
  param_2[0x19] = '\0';
  param_2[0x1a] = '\0';
  param_2[0x1b] = '\0';
  return 1;
}



/* Entry: 108b68f28; end: 108b68f3b;  */

void FUN_108b68f28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108b68f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x20) + 8) + 0x10))();
  return;
}



/* Entry: 108b68f3c; end: 108b68ffb;  */

undefined8 FUN_108b68f3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 uStack_34;
  
  uStack_34 = 4;
  _AudioUnitGetProperty(param_1,0x835,0,1,param_2,&uStack_34);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000108b69698();
  FUN_108b62f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108b69618();
  func_0x000108b69644();
  func_0x000108b696b4();
  return param_1;
}



/* Entry: 108b68ffc; end: 108b6913b;  */

undefined8 FUN_108b68ffc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000108b69698();
  FUN_108b62f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108b69724(0x181);
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110ee8438);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108b69618();
  func_0x000108b69644();
  func_0x000108b696b4();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _AudioOutputUnitStart();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000108b69698();
  FUN_108b62f20();
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar2 == 0) {
    func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110ee8478);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b69650();
    func_0x000108b696c8();
    func_0x000108b696f0();
    *(undefined4 *)(param_1 + 0x18) = 3;
  }
  else {
    func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110ee8458);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b69650();
    func_0x000108b696e8(3);
    func_0x000108b696f0();
  }
  return uVar2;
}



/* Entry: 108b6913c; end: 108b6927f;  */

bool FUN_108b6913c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000108b69698();
  FUN_108b62f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108b69724(400);
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110ee8498);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108b69618();
  func_0x000108b69644();
  func_0x000108b696b4();
  iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
  _AudioOutputUnitStop();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000108b69698();
  FUN_108b62f20();
  _objc_retainAutoreleasedReturnValue();
  if (iVar2 == 0) {
    func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110ee84d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b69650();
    func_0x000108b696c8();
    func_0x000108b696f0();
    *(undefined4 *)(param_1 + 0x18) = 2;
  }
  else {
    func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110ee84b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b69650();
    func_0x000108b696e8(3);
    func_0x000108b696f0();
  }
  return iVar2 == 0;
}



/* Entry: 108b69280; end: 108b693c3;  */

bool FUN_108b69280(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000108b69698();
  FUN_108b62f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108b69724(0x1a0);
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110ee84f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108b69618();
  func_0x000108b69644();
  func_0x000108b696b4();
  iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
  _AudioUnitUninitialize();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000108b69698();
  FUN_108b62f20();
  _objc_retainAutoreleasedReturnValue();
  if (iVar2 == 0) {
    func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110ee8538);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b69650();
    func_0x000108b696c8();
    func_0x000108b696f0();
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  else {
    func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110ee8518);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b69650();
    func_0x000108b696e8(3);
    func_0x000108b696f0();
  }
  return iVar2 == 0;
}



/* Entry: 108b693c4; end: 108b69577;  */

bool FUN_108b693c4(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint *puVar5;
  uint uStack_58;
  uint uStack_54;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000108b69698();
  FUN_108b62f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108b696b4();
  func_0x000108b696c8();
  func_0x000108b696f0();
  bVar2 = *(char *)(param_1 + 1) != '\x01';
  if (bVar2) {
    uStack_58 = param_2 ^ 1;
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    puVar5 = &uStack_58;
    uVar4 = 0x7d3;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    puVar5 = &uStack_54;
    uVar4 = 0x838;
    uStack_54 = param_2;
  }
  func_0x000108b69678(uVar3,uVar4,bVar2,param_4,puVar5);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000108b69698();
  FUN_108b62f20();
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar3 == 0) {
    func_0x00010c25d9e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b69618();
    func_0x000108b69644();
  }
  else {
    func_0x00010c25d9e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b69618();
    func_0x000108b69624();
  }
  func_0x000108b696b4();
  return (int)uVar3 == 0;
}



/* Entry: 108b69578; end: 108b69617;  */

undefined8 FUN_108b69578(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _AudioUnitRender();
  if ((int)uVar1 != 0) {
    func_0x000108b6965c();
    FUN_108b62f20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b69618();
    func_0x000108b69624();
    func_0x000108b696b4();
  }
  return uVar1;
}



/* Entry: 108b69618; end: 108b6972f;  */

void FUN_108b69618(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108b69730; end: 108b719b3;  */

undefined8
FUN_108b69730(long param_1,int param_2,long param_3,undefined8 param_4,int param_5,
             undefined8 param_6,long param_7)

{
  long lVar1;
  int iVar2;
  char in_ZR;
  undefined8 uVar3;
  long extraout_x8;
  int extraout_w9;
  uint extraout_w9_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108b6a178();
  if ((((((param_5 < 1 || unaff_x20 == 0) || extraout_x8 == 0) || param_3 == 0) || in_ZR == '\0') ||
      unaff_x19 == 0) || extraout_w9 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    func_0x000108b6a0a8();
    lVar1 = param_1 + (int)(param_2 * ~extraout_w9_00);
    iVar2 = -param_2;
    if ((extraout_w9_00 & 0x80000000) == 0) {
      iVar2 = param_2;
    }
    if ((extraout_w9_00 & 0x80000000) == 0) {
      lVar1 = param_1;
    }
    if (param_7 != 0) {
      func_0x000108b6a210(lVar1,iVar2);
    }
    func_0x000108b6a194();
    func_0x000108b6a5cc();
    func_0x000108b6a15c();
    func_0x000108b6a5cc();
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 108b719b4; end: 108b72897;  */

void FUN_108b719b4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *extraout_x8;
  undefined **extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong extraout_x8_02;
  long *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined **extraout_x8_05;
  undefined8 extraout_x8_06;
  ulong extraout_x8_07;
  long *extraout_x8_08;
  undefined8 *extraout_x8_09;
  undefined **extraout_x8_10;
  undefined8 extraout_x8_11;
  ulong extraout_x8_12;
  long *extraout_x8_13;
  ulong extraout_x8_14;
  ulong uVar9;
  undefined **extraout_x8_15;
  undefined8 extraout_x8_16;
  undefined **ppuVar10;
  ulong extraout_x8_17;
  long *extraout_x8_18;
  undefined8 extraout_x9;
  long extraout_x9_00;
  long *extraout_x9_01;
  long *extraout_x9_02;
  long extraout_x9_03;
  undefined8 extraout_x9_04;
  long extraout_x9_05;
  long *extraout_x9_06;
  long *extraout_x9_07;
  long extraout_x9_08;
  undefined8 extraout_x9_09;
  long extraout_x9_10;
  long *extraout_x9_11;
  long *extraout_x9_12;
  long extraout_x9_13;
  undefined8 extraout_x9_14;
  long extraout_x9_15;
  undefined8 uVar11;
  long *plVar12;
  long *extraout_x9_16;
  long *extraout_x9_17;
  long extraout_x9_18;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  int extraout_w10_14;
  long extraout_x10;
  undefined8 *extraout_x10_00;
  undefined8 extraout_x10_01;
  long extraout_x10_02;
  undefined8 *extraout_x10_03;
  undefined8 extraout_x10_04;
  undefined8 *puVar13;
  long extraout_x10_05;
  undefined8 *extraout_x10_06;
  undefined8 *puVar14;
  undefined8 extraout_x10_07;
  undefined8 *puVar15;
  long extraout_x10_08;
  undefined8 *extraout_x10_09;
  undefined8 *puVar16;
  undefined8 extraout_x10_10;
  undefined8 *puVar17;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  undefined8 *unaff_x19;
  undefined8 *puVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  uint uVar21;
  undefined8 *unaff_x28;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  uint uStack_8c;
  ulong uStack_88;
  undefined8 *puStack_80;
  undefined8 *apuStack_78 [3];
  
  lVar6 = param_3;
  func_0x00010b9abfa4(param_3,0);
  lVar7 = param_3;
  func_0x00010b9abfa4(param_3,1);
  lVar8 = param_3;
  func_0x00010b9abfa4(param_3,2);
  func_0x00010b9abfa4(param_3,3);
  plVar19 = (long *)*param_2;
  uVar4 = (int)(*(byte *)(lVar6 + 8) - 1) < 0;
  if (*(byte *)(lVar6 + 8) < 2) {
    puStack_b0 = (undefined8 *)0x0;
    puStack_a8 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b9a9810(apuStack_78,lVar6);
    if (apuStack_78[0] == (undefined8 *)0x0) {
      puVar20 = (undefined8 *)0x0;
    }
    else {
      puVar20 = apuStack_78[0];
      func_0x000108b73eb0();
      func_0x000108b73da4();
    }
    func_0x000108b73c80();
    if (puVar20 == (undefined8 *)0x0) {
      func_0x00010b9a9810(&puStack_c0,lVar6);
      puStack_d0 = (undefined8 *)0x0;
      if (puStack_c0[4] != 0) {
        do {
          func_0x000108b73c94();
          puStack_d0 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      func_0x000108b73c68();
      puStack_e0 = (undefined8 *)CONCAT44(puStack_e0._4_4_,*(undefined4 *)(puStack_c0 + 3));
      lVar6 = 0x11328ad18;
      func_0x000104be7ae4(0x11328ad18,&puStack_e0);
      puVar20 = (undefined8 *)0x0;
      if (lVar6 == 0) {
LAB_108b71b30:
        func_0x000108b73d84();
        puVar13 = puVar20;
        func_0x000108b73e68(&PTR_FUN_110ab38b8);
        puVar13 = puVar13 + 3;
        ppuVar10 = &PTR_DAT_110ab3908;
        if (puStack_c0 == (undefined8 *)0x0) {
          uVar11 = 0;
LAB_108b71b8c:
          *puVar13 = ppuVar10;
          uStack_a0 = uVar11;
        }
        else {
          func_0x000108b73e5c();
          ppuVar10 = extraout_x8_00;
          uVar11 = extraout_x9;
          if (extraout_x10 == 0) goto LAB_108b71b8c;
          do {
            func_0x000108b73bec();
          } while (extraout_w11_00 != 0);
          func_0x000108b73e50();
          *puVar13 = extraout_x8_01;
          if (extraout_x9_00 != 0) {
            do {
              func_0x000108b73bdc();
            } while (extraout_w10_01 != 0);
          }
        }
        unaff_x26 = puVar20 + 4;
        apuStack_78[0] = puStack_c0;
        puVar15 = unaff_x26;
        func_0x000104bec750(unaff_x26,apuStack_78);
        func_0x000108b73c80();
        *puVar13 = &PTR_FUN_110ab3ff8;
        *unaff_x26 = &PTR_FUN_110ab4020;
        func_0x000108b73ca4();
        unaff_x28 = puRam000000011328ad20;
        uVar2 = (uint)puStack_e0;
        unaff_x19 = (undefined8 *)((ulong)puStack_e0 & 0xffffffff);
        unaff_x27 = puVar13;
        if (puRam000000011328ad20 != (undefined8 *)0x0) {
          uVar21 = (uint)puRam000000011328ad20;
          if (((ulong)puRam000000011328ad20 & (long)puRam000000011328ad20 - 1U) == 0) {
            unaff_x27 = (undefined8 *)(ulong)(uVar21 - 1 & (uint)puStack_e0);
            bVar5 = true;
            uVar4 = false;
          }
          else {
            uVar4 = (long)puRam000000011328ad20 - (long)unaff_x19 < 0;
            bVar5 = puRam000000011328ad20 == unaff_x19;
            unaff_x27 = unaff_x19;
            if (puRam000000011328ad20 <= unaff_x19) {
              uVar1 = 0;
              if (uVar21 != 0) {
                uVar1 = (uint)puStack_e0 / uVar21;
              }
              unaff_x27 = (undefined8 *)(ulong)((uint)puStack_e0 - uVar1 * uVar21);
            }
          }
          plVar12 = *(long **)(lRam000000011328ad18 + (long)unaff_x27 * 8);
          if (plVar12 != (long *)0x0) {
            do {
              while( true ) {
                bVar3 = bVar5;
                if (*plVar12 == 0) goto LAB_108b71c58;
                func_0x000108b73edc();
                if (!bVar3) break;
                func_0x000108b73ed0();
                bVar5 = false;
                plVar12 = extraout_x9_02;
                if (bVar3) goto LAB_108b71d60;
              }
              if (((ulong)unaff_x28 & extraout_x8_02) == 0) {
                puVar17 = (undefined8 *)((ulong)extraout_x10_00 & extraout_x8_02);
              }
              else {
                puVar17 = extraout_x10_00;
                if (unaff_x28 <= extraout_x10_00) {
                  uVar9 = 0;
                  if (unaff_x28 != (undefined8 *)0x0) {
                    uVar9 = (ulong)extraout_x10_00 / (ulong)unaff_x28;
                  }
                  puVar17 = (undefined8 *)((long)extraout_x10_00 - uVar9 * (long)unaff_x28);
                }
              }
              uVar4 = (long)puVar17 - (long)unaff_x27 < 0;
              bVar5 = true;
              plVar12 = extraout_x9_01;
            } while (puVar17 == unaff_x27);
          }
        }
LAB_108b71c58:
        func_0x000108b73db4();
        func_0x000108b73c14(0x11328ad28);
        puVar15[3] = unaff_x26;
        puVar15[4] = puVar20;
        do {
          func_0x000108b73bdc();
        } while (extraout_w10_02 != 0);
        func_0x000108b73ea4(lRam000000011328ad30);
        if ((unaff_x28 == (undefined8 *)0x0) || (func_0x000108b73e98(), (bool)uVar4)) {
          func_0x000108b73bfc((long)unaff_x28 << 1);
          unaff_x26 = (undefined8 *)0x11328ad18;
          func_0x000104bed8ac(0x11328ad18);
          unaff_x28 = puRam000000011328ad20;
          if (((ulong)puRam000000011328ad20 & (long)puRam000000011328ad20 - 1U) == 0) {
            unaff_x26 = (undefined8 *)0x11328ad18;
            unaff_x27 = (undefined8 *)(ulong)((int)puRam000000011328ad20 - 1U & uVar2);
          }
          else {
            unaff_x27 = unaff_x19;
            if (puRam000000011328ad20 <= unaff_x19) {
              uVar9 = 0;
              if (puRam000000011328ad20 != (undefined8 *)0x0) {
                uVar9 = (ulong)unaff_x19 / (ulong)puRam000000011328ad20;
              }
              unaff_x26 = (undefined8 *)0x11328ad18;
              unaff_x27 = (undefined8 *)((long)unaff_x19 - uVar9 * (long)puRam000000011328ad20);
            }
          }
        }
        if (*(long *)(lRam000000011328ad18 + (long)unaff_x27 * 8) == 0) {
          func_0x000108b73d00(apuStack_78[0]);
          *(undefined8 *)(extraout_x9_03 + (long)unaff_x27 * 8) = extraout_x10_01;
          if (*extraout_x8_03 != 0) {
            puVar15 = *(undefined8 **)(*extraout_x8_03 + 8);
            if (((ulong)unaff_x28 & (long)unaff_x28 - 1U) == 0) {
              puVar15 = (undefined8 *)((ulong)puVar15 & (long)unaff_x28 - 1U);
            }
            else if (unaff_x28 <= puVar15) {
              uVar9 = 0;
              if (unaff_x28 != (undefined8 *)0x0) {
                uVar9 = (ulong)puVar15 / (ulong)unaff_x28;
              }
              puVar15 = (undefined8 *)((long)puVar15 - uVar9 * (long)unaff_x28);
            }
            *(long **)(extraout_x9_03 + (long)puVar15 * 8) = extraout_x8_03;
          }
        }
        else {
          func_0x000108b73d18();
        }
        apuStack_78[0] = (undefined8 *)0x0;
        lRam000000011328ad30 = lRam000000011328ad30 + 1;
        func_0x000108b73d58();
LAB_108b71d60:
        puStack_b0 = puVar13;
        puStack_a8 = puVar20;
        func_0x000108b73e74();
        FUN_108b735f8();
      }
      else {
        func_0x000108b73c88();
        if (apuStack_78[0] == (undefined8 *)0x0) {
          func_0x000108b73cac();
          puVar20 = apuStack_78[0];
          goto LAB_108b71b30;
        }
        puVar20 = apuStack_78[0];
        func_0x000108b73cf0();
        func_0x000108b73d8c();
        puStack_a8 = (undefined8 *)0x0;
        if ((puVar20 != (undefined8 *)0x0) && (unaff_x19 != (undefined8 *)0x0)) {
          do {
            func_0x000108b73bdc();
            puStack_a8 = unaff_x19;
          } while (extraout_w10_00 != 0);
        }
        puStack_b0 = puVar20;
        func_0x000108b73e80();
        FUN_108b735f8();
        func_0x000108b73cac();
      }
      func_0x000108b73c74();
      func_0x000104bdbf78(&puStack_d0);
      func_0x000104be7e54(&puStack_c0);
    }
    else {
      puStack_a8 = (undefined8 *)puVar20[6];
      puStack_b0 = (undefined8 *)puVar20[5];
      if (puVar20[6] != 0) {
        do {
          func_0x000108b73bdc();
        } while (extraout_w10 != 0);
      }
    }
  }
  uVar4 = (int)(*(byte *)(lVar7 + 8) - 1) < 0;
  if (*(byte *)(lVar7 + 8) < 2) {
    puStack_c0 = (undefined8 *)0x0;
    puStack_b8 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b9a9810(apuStack_78,lVar7);
    if (apuStack_78[0] == (undefined8 *)0x0) {
      puVar20 = (undefined8 *)0x0;
    }
    else {
      puVar20 = apuStack_78[0];
      func_0x000108b73eb0();
      func_0x000108b73da4();
    }
    func_0x000108b73c80();
    if (puVar20 == (undefined8 *)0x0) {
      func_0x00010b9a9810(&puStack_d0,lVar7);
      puVar20 = (undefined8 *)0x0;
      if (puStack_d0[4] != 0) {
        do {
          func_0x000108b73c94();
          puVar20 = extraout_x8_04;
        } while (extraout_w11_01 != 0);
      }
      puStack_e0 = puVar20;
      func_0x000108b73c68();
      puStack_80 = (undefined8 *)CONCAT44(puStack_80._4_4_,*(undefined4 *)(puStack_d0 + 3));
      lVar6 = 0x11328ad18;
      func_0x000104be7ae4(0x11328ad18,&puStack_80);
      puVar20 = (undefined8 *)0x0;
      if (lVar6 == 0) {
LAB_108b71e90:
        puVar13 = puStack_d0;
        func_0x000108b73d84();
        puVar15 = puVar20;
        func_0x000108b73e68(&PTR_FUN_110ab3930);
        unaff_x26 = puVar15 + 3;
        ppuVar10 = &PTR_DAT_110ab3980;
        if (puVar13 == (undefined8 *)0x0) {
          uVar11 = 0;
LAB_108b71eec:
          *unaff_x26 = ppuVar10;
          uStack_a0 = uVar11;
        }
        else {
          func_0x000108b73e5c();
          ppuVar10 = extraout_x8_05;
          uVar11 = extraout_x9_04;
          if (extraout_x10_02 == 0) goto LAB_108b71eec;
          do {
            func_0x000108b73bec();
          } while (extraout_w11_02 != 0);
          func_0x000108b73e50();
          *unaff_x26 = extraout_x8_06;
          if (extraout_x9_05 != 0) {
            do {
              func_0x000108b73bdc();
            } while (extraout_w10_05 != 0);
          }
        }
        puVar15 = puVar20 + 4;
        apuStack_78[0] = puVar13;
        puVar13 = puVar15;
        func_0x000104bec750(puVar15,apuStack_78);
        func_0x000108b73c80();
        *unaff_x26 = &PTR_FUN_110ab3f30;
        *puVar15 = &PTR_FUN_110ab3fa0;
        func_0x000108b73ca4();
        unaff_x27 = puRam000000011328ad20;
        uVar2 = (uint)puStack_80;
        unaff_x19 = (undefined8 *)((ulong)puStack_80 & 0xffffffff);
        if (puRam000000011328ad20 != (undefined8 *)0x0) {
          uVar21 = (uint)puRam000000011328ad20;
          if (((ulong)puRam000000011328ad20 & (long)puRam000000011328ad20 - 1U) == 0) {
            unaff_x28 = (undefined8 *)(ulong)(uVar21 - 1 & (uint)puStack_80);
            bVar5 = true;
            uVar4 = false;
          }
          else {
            uVar4 = (long)puRam000000011328ad20 - (long)unaff_x19 < 0;
            bVar5 = puRam000000011328ad20 == unaff_x19;
            unaff_x28 = unaff_x19;
            if (puRam000000011328ad20 <= unaff_x19) {
              uVar1 = 0;
              if (uVar21 != 0) {
                uVar1 = (uint)puStack_80 / uVar21;
              }
              unaff_x28 = (undefined8 *)(ulong)((uint)puStack_80 - uVar1 * uVar21);
            }
          }
          plVar12 = *(long **)(lRam000000011328ad18 + (long)unaff_x28 * 8);
          if (plVar12 != (long *)0x0) {
            do {
              while( true ) {
                bVar3 = bVar5;
                if (*plVar12 == 0) goto LAB_108b71fb4;
                func_0x000108b73edc();
                if (!bVar3) break;
                func_0x000108b73ed0();
                bVar5 = false;
                plVar12 = extraout_x9_07;
                if (bVar3) goto LAB_108b720bc;
              }
              if (((ulong)unaff_x27 & extraout_x8_07) == 0) {
                puVar17 = (undefined8 *)((ulong)extraout_x10_03 & extraout_x8_07);
              }
              else {
                puVar17 = extraout_x10_03;
                if (unaff_x27 <= extraout_x10_03) {
                  uVar9 = 0;
                  if (unaff_x27 != (undefined8 *)0x0) {
                    uVar9 = (ulong)extraout_x10_03 / (ulong)unaff_x27;
                  }
                  puVar17 = (undefined8 *)((long)extraout_x10_03 - uVar9 * (long)unaff_x27);
                }
              }
              uVar4 = (long)puVar17 - (long)unaff_x28 < 0;
              bVar5 = true;
              plVar12 = extraout_x9_06;
            } while (puVar17 == unaff_x28);
          }
        }
LAB_108b71fb4:
        func_0x000108b73db4();
        func_0x000108b73c14(0x11328ad28);
        puVar13[3] = puVar15;
        puVar13[4] = puVar20;
        do {
          func_0x000108b73bdc();
        } while (extraout_w10_06 != 0);
        func_0x000108b73ea4(lRam000000011328ad30);
        if ((unaff_x27 == (undefined8 *)0x0) || (func_0x000108b73e98(), (bool)uVar4)) {
          func_0x000108b73bfc((long)unaff_x27 << 1);
          func_0x000104bed8ac(0x11328ad18);
          unaff_x27 = puRam000000011328ad20;
          if (((ulong)puRam000000011328ad20 & (long)puRam000000011328ad20 - 1U) == 0) {
            unaff_x28 = (undefined8 *)(ulong)((int)puRam000000011328ad20 - 1U & uVar2);
          }
          else {
            unaff_x28 = unaff_x19;
            if (puRam000000011328ad20 <= unaff_x19) {
              uVar9 = 0;
              if (puRam000000011328ad20 != (undefined8 *)0x0) {
                uVar9 = (ulong)unaff_x19 / (ulong)puRam000000011328ad20;
              }
              unaff_x28 = (undefined8 *)((long)unaff_x19 - uVar9 * (long)puRam000000011328ad20);
            }
          }
        }
        if (*(long *)(lRam000000011328ad18 + (long)unaff_x28 * 8) == 0) {
          func_0x000108b73d00(apuStack_78[0]);
          *(undefined8 *)(extraout_x9_08 + (long)unaff_x28 * 8) = extraout_x10_04;
          if (*extraout_x8_08 != 0) {
            puVar13 = *(undefined8 **)(*extraout_x8_08 + 8);
            if (((ulong)unaff_x27 & (long)unaff_x27 - 1U) == 0) {
              puVar13 = (undefined8 *)((ulong)puVar13 & (long)unaff_x27 - 1U);
            }
            else if (unaff_x27 <= puVar13) {
              uVar9 = 0;
              if (unaff_x27 != (undefined8 *)0x0) {
                uVar9 = (ulong)puVar13 / (ulong)unaff_x27;
              }
              puVar13 = (undefined8 *)((long)puVar13 - uVar9 * (long)unaff_x27);
            }
            *(long **)(extraout_x9_08 + (long)puVar13 * 8) = extraout_x8_08;
          }
        }
        else {
          func_0x000108b73d18();
        }
        apuStack_78[0] = (undefined8 *)0x0;
        lRam000000011328ad30 = lRam000000011328ad30 + 1;
        func_0x000108b73d58();
LAB_108b720bc:
        puStack_c0 = unaff_x26;
        puStack_b8 = puVar20;
        func_0x000108b73e74();
        FUN_108b73648();
      }
      else {
        func_0x000108b73c88();
        if (apuStack_78[0] == (undefined8 *)0x0) {
          puVar20 = apuStack_78[0];
          func_0x000108b73cac();
          goto LAB_108b71e90;
        }
        puVar20 = apuStack_78[0];
        func_0x000108b73cf0();
        func_0x000108b73d8c();
        puStack_b8 = (undefined8 *)0x0;
        if ((puVar20 != (undefined8 *)0x0) && (unaff_x19 != (undefined8 *)0x0)) {
          do {
            func_0x000108b73bdc();
            puStack_b8 = unaff_x19;
          } while (extraout_w10_04 != 0);
        }
        puStack_c0 = puVar20;
        func_0x000108b73e80();
        FUN_108b73648();
        func_0x000108b73cac();
      }
      func_0x000108b73c74();
      func_0x000104bdbf78(&puStack_e0);
      func_0x000104be7e54(&puStack_d0);
    }
    else {
      puStack_b8 = (undefined8 *)puVar20[6];
      puStack_c0 = (undefined8 *)puVar20[5];
      if (puVar20[6] != 0) {
        do {
          func_0x000108b73bdc();
        } while (extraout_w10_03 != 0);
      }
    }
  }
  uVar4 = (int)(*(byte *)(lVar8 + 8) - 1) < 0;
  if (*(byte *)(lVar8 + 8) < 2) {
    puStack_d0 = (undefined8 *)0x0;
    puStack_c8 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b9a9810(apuStack_78,lVar8);
    if (apuStack_78[0] == (undefined8 *)0x0) {
      puVar20 = (undefined8 *)0x0;
    }
    else {
      puVar20 = apuStack_78[0];
      func_0x000108b73eb0();
      func_0x000108b73da4();
    }
    func_0x000108b73c80();
    if (puVar20 == (undefined8 *)0x0) {
      func_0x00010b9a9810(&puStack_e0,lVar8);
      puVar20 = (undefined8 *)0x0;
      if (puStack_e0[4] != 0) {
        do {
          func_0x000108b73c94();
          puVar20 = extraout_x8_09;
        } while (extraout_w11_03 != 0);
      }
      puStack_80 = puVar20;
      func_0x000108b73c68();
      uStack_88 = CONCAT44(uStack_88._4_4_,*(undefined4 *)(puStack_e0 + 3));
      lVar6 = 0x11328ad18;
      func_0x000104be7ae4(0x11328ad18,&uStack_88);
      puVar20 = (undefined8 *)0x0;
      if (lVar6 == 0) {
LAB_108b721e8:
        puVar15 = puStack_e0;
        func_0x000108b73d84();
        puVar13 = puVar20;
        func_0x000108b73e68(&PTR_FUN_110ab39f0);
        puVar13 = puVar13 + 3;
        ppuVar10 = &PTR_DAT_110ab3a40;
        if (puVar15 == (undefined8 *)0x0) {
          uVar11 = 0;
LAB_108b72244:
          *puVar13 = ppuVar10;
          uStack_a0 = uVar11;
        }
        else {
          func_0x000108b73e5c();
          ppuVar10 = extraout_x8_10;
          uVar11 = extraout_x9_09;
          if (extraout_x10_05 == 0) goto LAB_108b72244;
          do {
            func_0x000108b73bec();
          } while (extraout_w11_04 != 0);
          func_0x000108b73e50();
          *puVar13 = extraout_x8_11;
          if (extraout_x9_10 != 0) {
            do {
              func_0x000108b73bdc();
            } while (extraout_w10_09 != 0);
          }
        }
        puVar17 = puVar20 + 4;
        apuStack_78[0] = puVar15;
        puVar15 = puVar17;
        func_0x000104bec750(puVar17,apuStack_78);
        func_0x000108b73c80();
        *puVar13 = &PTR_FUN_110ab3d10;
        *puVar17 = &PTR_FUN_110ab3d40;
        func_0x000108b73ca4();
        unaff_x26 = puRam000000011328ad20;
        uVar2 = (uint)uStack_88;
        unaff_x19 = (undefined8 *)(uStack_88 & 0xffffffff);
        if (puRam000000011328ad20 != (undefined8 *)0x0) {
          uVar21 = (uint)puRam000000011328ad20;
          if (((ulong)puRam000000011328ad20 & (long)puRam000000011328ad20 - 1U) == 0) {
            unaff_x27 = (undefined8 *)(ulong)(uVar21 - 1 & (uint)uStack_88);
            bVar5 = true;
            uVar4 = false;
          }
          else {
            uVar4 = (long)puRam000000011328ad20 - (long)unaff_x19 < 0;
            bVar5 = puRam000000011328ad20 == unaff_x19;
            unaff_x27 = unaff_x19;
            if (puRam000000011328ad20 <= unaff_x19) {
              uVar1 = 0;
              if (uVar21 != 0) {
                uVar1 = (uint)uStack_88 / uVar21;
              }
              unaff_x27 = (undefined8 *)(ulong)((uint)uStack_88 - uVar1 * uVar21);
            }
          }
          plVar12 = *(long **)(lRam000000011328ad18 + (long)unaff_x27 * 8);
          if (plVar12 != (long *)0x0) {
            do {
              while( true ) {
                bVar3 = bVar5;
                if (*plVar12 == 0) goto LAB_108b7230c;
                func_0x000108b73edc();
                if (!bVar3) break;
                func_0x000108b73ed0();
                bVar5 = false;
                plVar12 = extraout_x9_12;
                if (bVar3) goto LAB_108b72414;
              }
              if (((ulong)unaff_x26 & extraout_x8_12) == 0) {
                puVar14 = (undefined8 *)((ulong)extraout_x10_06 & extraout_x8_12);
              }
              else {
                puVar14 = extraout_x10_06;
                if (unaff_x26 <= extraout_x10_06) {
                  uVar9 = 0;
                  if (unaff_x26 != (undefined8 *)0x0) {
                    uVar9 = (ulong)extraout_x10_06 / (ulong)unaff_x26;
                  }
                  puVar14 = (undefined8 *)((long)extraout_x10_06 - uVar9 * (long)unaff_x26);
                }
              }
              uVar4 = (long)puVar14 - (long)unaff_x27 < 0;
              bVar5 = true;
              plVar12 = extraout_x9_11;
            } while (puVar14 == unaff_x27);
          }
        }
LAB_108b7230c:
        func_0x000108b73db4();
        func_0x000108b73c14(0x11328ad28);
        puVar15[3] = puVar17;
        puVar15[4] = puVar20;
        do {
          func_0x000108b73bdc();
        } while (extraout_w10_10 != 0);
        func_0x000108b73ea4(lRam000000011328ad30);
        if ((unaff_x26 == (undefined8 *)0x0) || (func_0x000108b73e98(), (bool)uVar4)) {
          func_0x000108b73bfc((long)unaff_x26 << 1);
          func_0x000104bed8ac(0x11328ad18);
          unaff_x26 = puRam000000011328ad20;
          if (((ulong)puRam000000011328ad20 & (long)puRam000000011328ad20 - 1U) == 0) {
            unaff_x27 = (undefined8 *)(ulong)((int)puRam000000011328ad20 - 1U & uVar2);
          }
          else {
            unaff_x27 = unaff_x19;
            if (puRam000000011328ad20 <= unaff_x19) {
              uVar9 = 0;
              if (puRam000000011328ad20 != (undefined8 *)0x0) {
                uVar9 = (ulong)unaff_x19 / (ulong)puRam000000011328ad20;
              }
              unaff_x27 = (undefined8 *)((long)unaff_x19 - uVar9 * (long)puRam000000011328ad20);
            }
          }
        }
        if (*(long *)(lRam000000011328ad18 + (long)unaff_x27 * 8) == 0) {
          func_0x000108b73d00(apuStack_78[0]);
          *(undefined8 *)(extraout_x9_13 + (long)unaff_x27 * 8) = extraout_x10_07;
          if (*extraout_x8_13 != 0) {
            puVar15 = *(undefined8 **)(*extraout_x8_13 + 8);
            if (((ulong)unaff_x26 & (long)unaff_x26 - 1U) == 0) {
              puVar15 = (undefined8 *)((ulong)puVar15 & (long)unaff_x26 - 1U);
            }
            else if (unaff_x26 <= puVar15) {
              uVar9 = 0;
              if (unaff_x26 != (undefined8 *)0x0) {
                uVar9 = (ulong)puVar15 / (ulong)unaff_x26;
              }
              puVar15 = (undefined8 *)((long)puVar15 - uVar9 * (long)unaff_x26);
            }
            *(long **)(extraout_x9_13 + (long)puVar15 * 8) = extraout_x8_13;
          }
        }
        else {
          func_0x000108b73d18();
        }
        apuStack_78[0] = (undefined8 *)0x0;
        lRam000000011328ad30 = lRam000000011328ad30 + 1;
        func_0x000108b73d58();
LAB_108b72414:
        puStack_d0 = puVar13;
        puStack_c8 = puVar20;
        func_0x000108b73e74();
        FUN_108b73698();
      }
      else {
        func_0x000108b73c88();
        if (apuStack_78[0] == (undefined8 *)0x0) {
          puVar20 = apuStack_78[0];
          func_0x000108b73cac();
          goto LAB_108b721e8;
        }
        puVar20 = apuStack_78[0];
        func_0x000108b73cf0();
        func_0x000108b73d8c();
        puStack_c8 = (undefined8 *)0x0;
        if ((puVar20 != (undefined8 *)0x0) && (unaff_x19 != (undefined8 *)0x0)) {
          do {
            func_0x000108b73bdc();
            puStack_c8 = unaff_x19;
          } while (extraout_w10_08 != 0);
        }
        puStack_d0 = puVar20;
        func_0x000108b73e80();
        FUN_108b73698();
        func_0x000108b73cac();
      }
      func_0x000108b73c74();
      func_0x000104bdbf78(&puStack_80);
      func_0x000104be7e54(&puStack_e0);
    }
    else {
      puStack_c8 = (undefined8 *)puVar20[6];
      puStack_d0 = (undefined8 *)puVar20[5];
      if (puVar20[6] != 0) {
        do {
          func_0x000108b73bdc();
        } while (extraout_w10_07 != 0);
      }
    }
  }
  uVar4 = (int)(*(byte *)(param_3 + 8) - 1) < 0;
  if (*(byte *)(param_3 + 8) < 2) {
    puStack_e0 = (undefined8 *)0x0;
    puStack_d8 = (undefined8 *)0x0;
    goto LAB_108b7278c;
  }
  func_0x00010b9a9810(apuStack_78,param_3);
  if (apuStack_78[0] == (undefined8 *)0x0) {
    puVar20 = (undefined8 *)0x0;
  }
  else {
    puVar20 = apuStack_78[0];
    func_0x000108b73eb0();
    func_0x000108b73da4();
  }
  func_0x000108b73c80();
  if (puVar20 != (undefined8 *)0x0) {
    puStack_d8 = (undefined8 *)puVar20[6];
    puStack_e0 = (undefined8 *)puVar20[5];
    if (puVar20[6] != 0) {
      do {
        func_0x000108b73bdc();
      } while (extraout_w10_11 != 0);
    }
    goto LAB_108b7278c;
  }
  func_0x00010b9a9810(&puStack_80,param_3);
  uVar9 = 0;
  if (puStack_80[4] != 0) {
    do {
      func_0x000108b73c94();
      uVar9 = extraout_x8_14;
    } while (extraout_w11_05 != 0);
  }
  uStack_88 = uVar9;
  func_0x000108b73c68();
  uStack_8c = *(uint *)(puStack_80 + 3);
  lVar6 = 0x11328ad18;
  func_0x000104be7ae4(0x11328ad18,&uStack_8c);
  puVar20 = (undefined8 *)0x0;
  if (lVar6 == 0) {
LAB_108b72540:
    puVar15 = puStack_80;
    func_0x000108b73d84();
    puVar13 = puVar20;
    func_0x000108b73e68(&PTR_FUN_110ab3a70);
    puVar13 = puVar13 + 3;
    ppuVar10 = &PTR_DAT_110ab3ac0;
    if (puVar15 == (undefined8 *)0x0) {
      uVar11 = 0;
LAB_108b7259c:
      *puVar13 = ppuVar10;
      uStack_a0 = uVar11;
    }
    else {
      func_0x000108b73e5c();
      ppuVar10 = extraout_x8_15;
      uVar11 = extraout_x9_14;
      if (extraout_x10_08 == 0) goto LAB_108b7259c;
      do {
        func_0x000108b73bec();
      } while (extraout_w11_06 != 0);
      func_0x000108b73e50();
      *puVar13 = extraout_x8_16;
      if (extraout_x9_15 != 0) {
        do {
          func_0x000108b73bdc();
        } while (extraout_w10_13 != 0);
      }
    }
    puVar17 = puVar20 + 4;
    apuStack_78[0] = puVar15;
    puVar14 = puVar17;
    func_0x000104bec750(puVar17,apuStack_78);
    func_0x000108b73c80();
    *puVar13 = &PTR_FUN_110ab3db0;
    *puVar17 = &PTR_FUN_110ab3e10;
    func_0x000108b73ca4();
    uVar2 = uStack_8c;
    puVar15 = puRam000000011328ad20;
    puVar18 = (undefined8 *)(ulong)uStack_8c;
    if (puRam000000011328ad20 != (undefined8 *)0x0) {
      uVar21 = (uint)puRam000000011328ad20;
      if (((ulong)puRam000000011328ad20 & (long)puRam000000011328ad20 - 1U) == 0) {
        unaff_x26 = (undefined8 *)(ulong)(uVar21 - 1 & uStack_8c);
        bVar5 = true;
        uVar4 = false;
      }
      else {
        uVar4 = (long)puRam000000011328ad20 - (long)puVar18 < 0;
        bVar5 = puRam000000011328ad20 == puVar18;
        unaff_x26 = puVar18;
        if (puRam000000011328ad20 <= puVar18) {
          uVar1 = 0;
          if (uVar21 != 0) {
            uVar1 = uStack_8c / uVar21;
          }
          unaff_x26 = (undefined8 *)(ulong)(uStack_8c - uVar1 * uVar21);
        }
      }
      plVar12 = *(long **)(lRam000000011328ad18 + (long)unaff_x26 * 8);
      if (plVar12 != (long *)0x0) {
        do {
          while( true ) {
            bVar3 = bVar5;
            if (*plVar12 == 0) goto LAB_108b72664;
            func_0x000108b73edc();
            if (!bVar3) break;
            func_0x000108b73ed0();
            bVar5 = false;
            plVar12 = extraout_x9_17;
            if (bVar3) goto LAB_108b7276c;
          }
          if (((ulong)puVar15 & extraout_x8_17) == 0) {
            puVar16 = (undefined8 *)((ulong)extraout_x10_09 & extraout_x8_17);
          }
          else {
            puVar16 = extraout_x10_09;
            if (puVar15 <= extraout_x10_09) {
              uVar9 = 0;
              if (puVar15 != (undefined8 *)0x0) {
                uVar9 = (ulong)extraout_x10_09 / (ulong)puVar15;
              }
              puVar16 = (undefined8 *)((long)extraout_x10_09 - uVar9 * (long)puVar15);
            }
          }
          uVar4 = (long)puVar16 - (long)unaff_x26 < 0;
          bVar5 = true;
          plVar12 = extraout_x9_16;
        } while (puVar16 == unaff_x26);
      }
    }
LAB_108b72664:
    func_0x000108b73db4();
    func_0x000108b73c14(0x11328ad28);
    puVar14[3] = puVar17;
    puVar14[4] = puVar20;
    do {
      func_0x000108b73bdc();
    } while (extraout_w10_14 != 0);
    func_0x000108b73ea4(lRam000000011328ad30);
    if ((puVar15 == (undefined8 *)0x0) || (func_0x000108b73e98(), (bool)uVar4)) {
      func_0x000108b73bfc((long)puVar15 << 1);
      func_0x000104bed8ac(0x11328ad18);
      puVar15 = puRam000000011328ad20;
      if (((ulong)puRam000000011328ad20 & (long)puRam000000011328ad20 - 1U) == 0) {
        unaff_x26 = (undefined8 *)(ulong)((int)puRam000000011328ad20 - 1U & uVar2);
      }
      else {
        unaff_x26 = puVar18;
        if (puRam000000011328ad20 <= puVar18) {
          uVar9 = 0;
          if (puRam000000011328ad20 != (undefined8 *)0x0) {
            uVar9 = (ulong)puVar18 / (ulong)puRam000000011328ad20;
          }
          unaff_x26 = (undefined8 *)((long)puVar18 - uVar9 * (long)puRam000000011328ad20);
        }
      }
    }
    if (*(long *)(lRam000000011328ad18 + (long)unaff_x26 * 8) == 0) {
      func_0x000108b73d00(apuStack_78[0]);
      *(undefined8 *)(extraout_x9_18 + (long)unaff_x26 * 8) = extraout_x10_10;
      if (*extraout_x8_18 != 0) {
        puVar17 = *(undefined8 **)(*extraout_x8_18 + 8);
        if (((ulong)puVar15 & (long)puVar15 - 1U) == 0) {
          puVar17 = (undefined8 *)((ulong)puVar17 & (long)puVar15 - 1U);
        }
        else if (puVar15 <= puVar17) {
          uVar9 = 0;
          if (puVar15 != (undefined8 *)0x0) {
            uVar9 = (ulong)puVar17 / (ulong)puVar15;
          }
          puVar17 = (undefined8 *)((long)puVar17 - uVar9 * (long)puVar15);
        }
        *(long **)(extraout_x9_18 + (long)puVar17 * 8) = extraout_x8_18;
      }
    }
    else {
      func_0x000108b73d18();
    }
    apuStack_78[0] = (undefined8 *)0x0;
    lRam000000011328ad30 = lRam000000011328ad30 + 1;
    func_0x000108b73d58();
LAB_108b7276c:
    puStack_e0 = puVar13;
    puStack_d8 = puVar20;
    func_0x000108b73e74();
    FUN_108b736e8();
  }
  else {
    func_0x000108b73c88();
    if (apuStack_78[0] == (undefined8 *)0x0) {
      puVar20 = apuStack_78[0];
      func_0x000108b73cac();
      goto LAB_108b72540;
    }
    puVar20 = apuStack_78[0];
    func_0x000108b73cf0();
    func_0x000108b73d8c();
    puStack_d8 = (undefined8 *)0x0;
    if ((puVar20 != (undefined8 *)0x0) && (unaff_x19 != (undefined8 *)0x0)) {
      do {
        func_0x000108b73bdc();
        puStack_d8 = unaff_x19;
      } while (extraout_w10_12 != 0);
    }
    puStack_e0 = puVar20;
    func_0x000108b73e80();
    FUN_108b736e8();
    func_0x000108b73cac();
  }
  func_0x000108b73c74();
  func_0x000104bdbf78(&uStack_88);
  func_0x000104be7e54(&puStack_80);
LAB_108b7278c:
  (**(code **)(*plVar19 + 0x10))(plVar19,&puStack_b0,&puStack_c0,&puStack_d0,&puStack_e0);
  func_0x000108938220(&puStack_e0);
  func_0x000108938028(&puStack_d0);
  func_0x0001089383c8(&puStack_c0);
  func_0x000108938004(&puStack_b0);
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = 0;
  return;
}



/* Entry: 108b72898; end: 108b72ad3;  */

void FUN_108b72898(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 **ppuVar4;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  int extraout_w11;
  int extraout_w11_00;
  int iVar5;
  undefined8 *apuStack_90 [2];
  undefined8 *puStack_80;
  undefined8 uStack_78;
  int iStack_70;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  (**(code **)(*(long *)*param_1 + 0x18))(apuStack_90);
  FUN_108b80734(apuStack_90[0],&UNK_10df92d24);
  if (apuStack_90[0] == (undefined8 *)0x0) {
    func_0x000108b73c38();
    goto LAB_108b72a8c;
  }
  puVar2 = apuStack_90[0];
  ___dynamic_cast(apuStack_90[0],&PTR_DAT_110a9a908,&PTR_DAT_1107e7dd0,0xfffffffffffffffe);
  if (puVar2 != (undefined8 *)0x0) {
    puStack_58 = (undefined8 *)puVar2[1];
    if ((puStack_58 != (undefined8 *)0x0) && (puStack_58[2] != 0)) {
      do {
        func_0x000108b73bec();
        puStack_58 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x000108b73cd0();
    func_0x000104be7e54(&puStack_58);
    goto LAB_108b72a8c;
  }
  func_0x000108b73d38();
  puStack_58 = apuStack_90[0];
  lVar1 = 0x11328ad40;
  func_0x000104bdbfcc(0x11328ad40,&puStack_58);
  if (lVar1 == 0) {
    iVar5 = 1;
LAB_108b729c8:
    FUN_108b7e93c(&puStack_60,apuStack_90);
    if (lVar1 == 0) {
      func_0x000104bf822c(&puStack_80,puStack_60);
      puVar2 = (undefined8 *)0x30;
      iStack_70 = iVar5;
      __Znwm();
      uStack_50 = 0x11328ad50;
      uStack_48 = 1;
      puVar2[2] = apuStack_90[0];
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[4] = uStack_78;
      puVar2[3] = puStack_80;
      puStack_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      *(int *)(puVar2 + 5) = iVar5;
      uVar3 = 0x11328ad58;
      puStack_58 = puVar2;
      func_0x000104bf7ea8();
      puVar2[1] = uVar3;
      func_0x000104bf7e44(0x11328ad40);
      if (((ulong)puVar2 & 1) != 0) {
        puStack_58 = (undefined8 *)0x0;
      }
      func_0x000104bdc220(&puStack_58);
      ppuVar4 = &puStack_80;
    }
    else {
      func_0x000104bf822c(&puStack_58,puStack_60);
      uStack_48 = CONCAT44(uStack_48._4_4_,iVar5);
      func_0x000104bf7db8(lVar1 + 0x18,&puStack_58);
      ppuVar4 = &puStack_58;
    }
    func_0x000104bdc2a0(ppuVar4);
    func_0x000108b73cd0();
    ppuVar4 = &puStack_60;
  }
  else {
    iVar5 = *(int *)(lVar1 + 0x28);
    func_0x000104bf7d80(&puStack_58,lVar1 + 0x18);
    if (puStack_58 == (undefined8 *)0x0) {
      iVar5 = iVar5 + 1;
      func_0x000104be7e54(&puStack_58);
      goto LAB_108b729c8;
    }
    puStack_80 = puStack_58;
    if (puStack_58[2] != 0) {
      do {
        func_0x000108b73bec();
        puStack_80 = extraout_x8_00;
      } while (extraout_w11_00 != 0);
    }
    func_0x000108b73cd0();
    func_0x000104be7e54(&puStack_80);
    ppuVar4 = &puStack_58;
  }
  func_0x000104be7e54(ppuVar4);
  func_0x000108b73d44();
LAB_108b72a8c:
  func_0x000108937570(apuStack_90);
  return;
}



/* Entry: 108b72ad4; end: 108b72ce7;  */

void FUN_108b72ad4(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  long lVar6;
  undefined1 auStack_e8 [16];
  undefined8 uStack_d8;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000108b73d28();
  uStack_38 = extraout_x8;
  FUN_108b7ee58();
  FUN_108b74c8c(param_1);
  FUN_108b77240(param_1);
  FUN_108b7a4ac(param_1);
  FUN_108b7c024(param_1);
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x11372d5c8);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x11372d5c8) = 1;
  if ((bVar1 & 1) != 0) goto LAB_108b72b50;
  if ((bRam000000011372d5d8 & 1) == 0) goto LAB_108b72b74;
  while( true ) {
    FUN_108b80888(0x11372d5f0,param_1);
LAB_108b72b50:
    func_0x000108b73c48(uStack_38);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_108b72b74:
    iVar2 = 0x1372d5d8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_108b72d80();
      puVar3 = &UNK_10f5016a2;
      func_0x000107c31088(&uStack_b0,&UNK_10f5016a2);
      func_0x000107c30f84(auStack_d0);
      FUN_108b7c15c();
      puVar4 = auStack_a8;
      func_0x000107c30f3c(puVar4,puVar3);
      FUN_108b7ac70();
      puVar5 = auStack_98;
      func_0x000107c30f3c(puVar5,puVar4);
      FUN_108b74e64();
      puVar4 = auStack_88;
      func_0x000107c30f3c(puVar4,puVar5);
      FUN_108b77738();
      func_0x000107c30f3c(auStack_78,puVar4);
      func_0x000104bdbd48(auStack_c0,auStack_d0,auStack_a8,4);
      uStack_68 = uStack_b0;
      uStack_b0 = 0;
      func_0x000107c30f40(auStack_60,auStack_c0);
      func_0x000107c31088(&uStack_d8,&UNK_10f5016b6);
      FUN_108b7f014();
      func_0x000108b73e14(auStack_e8);
      uStack_50 = uStack_d8;
      uStack_d8 = 0;
      func_0x000107c30f40(auStack_48,auStack_e8);
      func_0x000104bdbd44(0x11372d5f0,0x113828288,1,&uStack_68,2);
      lVar6 = 0x18;
      do {
        func_0x000107c27924(auStack_60 + lVar6 + -8);
        lVar6 = lVar6 + -0x18;
      } while (lVar6 != -0x18);
      func_0x000108b73dac(auStack_e8);
      func_0x000107c278f4(&uStack_d8);
      func_0x000108b73dac(auStack_c0);
      lVar6 = 0x38;
      do {
        func_0x000107c27900(auStack_a8 + lVar6);
        lVar6 = lVar6 + -0x10;
        in_ZR = lVar6 == -8;
      } while (!(bool)in_ZR);
      func_0x000108b73dac(auStack_d0);
      func_0x000107c278f4(&uStack_b0);
      ___cxa_guard_release(0x11372d5d8);
    }
  }
  return;
}



/* Entry: 108b72ce8; end: 108b72d7f;  */

undefined8 FUN_108b72ce8(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113828280 & 1) == 0) {
    iVar4 = 0x13828280;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_108b72d80();
      lStack_20 = lRam0000000113828288;
      if (lRam0000000113828288 != 0) {
        piVar1 = (int *)(lRam0000000113828288 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_18 = 0xff00;
      func_0x000107c30fa8(0x113828270,&lStack_20);
      func_0x000108b73e0c();
      ___cxa_guard_release(0x113828280);
    }
  }
  return 0x113828270;
}



/* Entry: 108b72d80; end: 108b72dd3;  */

void FUN_108b72d80(void)

{
  int iVar1;
  
  if ((bRam0000000113828290 & 1) == 0) {
    iVar1 = 0x13828290;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x113828288,&UNK_10f5016c9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113828290);
      return;
    }
  }
  return;
}



/* Entry: 108b72dd4; end: 108b72f73;  */

void FUN_108b72dd4(long *param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  int iVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  int extraout_w11;
  long lVar3;
  undefined1 *puStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined **appuStack_70 [3];
  undefined ***pppuStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000108b73d28();
  uStack_38 = extraout_x8;
  func_0x000107c31088(auStack_80,&UNK_10f501660);
  func_0x000107c31088(&uStack_98,&UNK_10f501688);
  FUN_108b72ce8();
  func_0x000108b73e14(auStack_a8);
  uStack_50 = uStack_98;
  uStack_98 = 0;
  func_0x000107c30f40(auStack_48,auStack_a8);
  func_0x000104bdbd44(auStack_90,auStack_80,0,&uStack_50,1);
  func_0x000107c27924(&uStack_50);
  func_0x000107c27900(auStack_a0);
  func_0x000107c278f4(&uStack_98);
  func_0x000107c278f4(auStack_80);
  pppuStack_58 = appuStack_70;
  appuStack_70[0] = &PTR_DAT_110ab3c08;
  FUN_108b807f0(&uStack_50,auStack_90,appuStack_70);
  func_0x000107c27938(appuStack_70);
  func_0x000107c30f7c(auStack_b0,auStack_48);
  FUN_108b72f74(auStack_80,FUN_108b72fe0);
  func_0x000104bdb9bc(&uStack_98,auStack_b0,auStack_80,1);
  func_0x00010b9a8f60(auStack_a8,&uStack_98);
  lVar3 = *param_1;
  func_0x000107c31088(auStack_b8,&UNK_10f501694);
  func_0x000104bd9bd4(lVar3 + 0x10,auStack_b8);
  iVar2 = (int)auStack_a8;
  func_0x00010b9a9020();
  func_0x000107c278f4(auStack_b8);
  func_0x00010b9a8d98(auStack_a8);
  func_0x000104bdbf78(&uStack_98);
  func_0x00010b9a8d98(auStack_80);
  func_0x000107c27928(auStack_b0);
  puVar1 = auStack_48;
  func_0x000107c27900();
  func_0x000108b73dac(auStack_90);
  func_0x000108b73c48(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (iVar2 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    pcStack_c8 = FUN_108b72f74;
    puStack_f8 = puVar1;
    puStack_e0 = &uStack_50;
    lStack_d8 = lVar3;
    puStack_d0 = &stack0xfffffffffffffff0;
    FUN_108b73a88(&lStack_f0,&puStack_f8);
    uStack_e8 = 0;
    if (lStack_f0 != 0) {
      do {
        func_0x000108b73c94();
        uStack_e8 = extraout_x8_01;
      } while (extraout_w11 != 0);
    }
    func_0x00010b9a8ef8(extraout_x8_00,&uStack_e8);
    func_0x000104bda388(&uStack_e8);
    func_0x000104bda3d0(&lStack_f0);
    return;
  }
  return;
}



/* Entry: 108b72f74; end: 108b72fdf;  */

void FUN_108b72f74(undefined8 param_1,undefined8 param_2)

{
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  uStack_38 = param_2;
  FUN_108b73a88(&lStack_30,&uStack_38);
  uStack_28 = 0;
  if (lStack_30 != 0) {
    do {
      func_0x000108b73c94();
      uStack_28 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  func_0x00010b9a8ef8(param_1,&uStack_28);
  func_0x000104bda388(&uStack_28);
  func_0x000104bda3d0(&lStack_30);
  return;
}



/* Entry: 108b72fe0; end: 108b735f7;  */

void FUN_108b72fe0(void)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined ***pppuVar7;
  undefined8 extraout_x8;
  undefined **extraout_x8_00;
  undefined **extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w11;
  int extraout_w11_00;
  code **extraout_x11;
  code **ppcVar8;
  undefined **unaff_x22;
  long lVar9;
  int iVar10;
  undefined **unaff_x24;
  undefined **ppuVar11;
  undefined **ppuStack_130;
  undefined *puStack_128;
  undefined **ppuStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  int aiStack_b0 [4];
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  code *pcStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined8 uStack_70;
  
  func_0x000108b73d28();
  uStack_70 = extraout_x8;
  FUN_108939c1c(&ppuStack_130);
  FUN_108b80734(ppuStack_130,&UNK_10df92d64);
  if (ppuStack_130 == (undefined **)0x0) {
    func_0x000108b73c38();
  }
  else {
    ppuVar5 = ppuStack_130;
    ___dynamic_cast(ppuStack_130,&PTR_DAT_110a9aac8,&PTR_DAT_1107e7dd0,0xfffffffffffffffe);
    if (ppuVar5 == (undefined **)0x0) {
      func_0x000108b73d38();
      ppuStack_a0 = ppuStack_130;
      unaff_x22 = (undefined **)0x11328ad40;
      func_0x000104bdbfcc(0x11328ad40,&ppuStack_a0);
      if (unaff_x22 == (undefined **)0x0) {
        iVar10 = 1;
      }
      else {
        iVar10 = *(int *)(unaff_x22 + 5);
        func_0x000104bf7d80(&ppuStack_a0,unaff_x22 + 3);
        if (ppuStack_a0 != (undefined **)0x0) {
          ppuStack_c0 = ppuStack_a0;
          if (ppuStack_a0[2] != (undefined *)0x0) {
            do {
              func_0x000108b73bec();
              ppuStack_c0 = extraout_x8_01;
            } while (extraout_w11_00 != 0);
          }
          func_0x000108b73cd0();
          func_0x000104be7e54(&ppuStack_c0);
          pppuVar7 = &ppuStack_a0;
          goto LAB_108b73450;
        }
        iVar10 = iVar10 + 1;
        func_0x000104be7e54(&ppuStack_a0);
      }
      if ((bRam000000011372d5d0 & 1) == 0) goto LAB_108b73490;
      goto LAB_108b73120;
    }
    ppuStack_a0 = (undefined **)ppuVar5[1];
    if ((ppuStack_a0 != (undefined **)0x0) && (ppuStack_a0[2] != (undefined *)0x0)) {
      do {
        func_0x000108b73bec();
        ppuStack_a0 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    func_0x000108b73cd0();
    func_0x000104be7e54(&ppuStack_a0);
  }
  do {
    iVar10 = (int)unaff_x24;
    FUN_108b73738(&ppuStack_130);
    func_0x000108b73c48(uStack_70);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
LAB_108b73490:
    iVar4 = 0x1372d5d0;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_108b72d80();
      FUN_108b72ad4(0);
      FUN_108b72ad4(1);
      func_0x00010b9941f8(&ppuStack_c0);
      func_0x00010b993b40(&ppuStack_a0,ppuStack_c0,0x113828288);
      if (((ulong)pcStack_90 & 1) == 0) {
        func_0x000104bdc2c8();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x108b73510);
        (*pcVar3)();
      }
      func_0x000107c30f3c(0x11372d5e0,&ppuStack_a0);
      func_0x000107c27930(&ppuStack_a0);
      func_0x000104bdc2fc(&ppuStack_c0);
      ___cxa_guard_release(0x11372d5d0);
    }
LAB_108b73120:
    ppuVar5 = (undefined **)0x11372d5e8;
    func_0x000107c30f7c(auStack_f0);
    pcStack_108 = FUN_108b719b4;
    ppcVar8 = &pcStack_108;
    if (puStack_128 != (undefined *)0x0) {
      do {
        func_0x000108b73bdc();
        ppcVar8 = extraout_x11;
      } while (extraout_w10 != 0);
    }
    ppuStack_e0 = (undefined **)FUN_108b719b4;
    ppcVar8[1] = (code *)0x0;
    ppcVar8[2] = (code *)0x0;
    func_0x000108b73e04();
    ppuStack_a0 = (undefined **)FUN_108b7375c;
    ppuStack_98 = &PTR_FUN_110ab3b10;
    pcStack_90 = FUN_108b719b4;
    ppuStack_88 = ppuStack_130;
    puStack_80 = puStack_128;
    puStack_d8 = (undefined *)0x0;
    uStack_d0 = 0;
    func_0x00010b9ac22c();
    ppuStack_120 = ppuVar5;
    func_0x000108b73e8c();
    (*extraout_x8_02)(&ppuStack_98);
    ppuVar11 = ppuVar5 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
      if (bVar2) {
        *ppuVar11 = *ppuVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    ppuStack_a0 = ppuVar5;
    func_0x00010b9a8ef8(&ppuStack_c0,&ppuStack_a0);
    func_0x000104bda388(&ppuStack_a0);
    func_0x000104bda3d0(&ppuStack_120);
    ppuVar5 = &puStack_d8;
    FUN_108b73738();
    ppuStack_120 = (undefined **)FUN_108b72898;
    if (puStack_128 != (undefined *)0x0) {
      do {
        func_0x000108b73bdc();
      } while (extraout_w10_00 != 0);
    }
    ppuStack_e0 = (undefined **)FUN_108b72898;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x000108b73e04();
    ppuStack_a0 = (undefined **)FUN_108b73818;
    ppuStack_98 = &PTR_FUN_110ab3b30;
    pcStack_90 = FUN_108b72898;
    ppuStack_88 = ppuStack_130;
    puStack_80 = puStack_128;
    puStack_d8 = (undefined *)0x0;
    uStack_d0 = 0;
    func_0x00010b9ac22c();
    ppuStack_c8 = ppuVar5;
    func_0x000108b73e8c();
    (*extraout_x8_03)(&ppuStack_98);
    ppuVar11 = ppuVar5 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
      if (bVar2) {
        *ppuVar11 = *ppuVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    ppuStack_a0 = ppuVar5;
    func_0x00010b9a8ef8(aiStack_b0,&ppuStack_a0);
    func_0x000104bda388(&ppuStack_a0);
    func_0x000104bda3d0(&ppuStack_c8);
    FUN_108b73738(&puStack_d8);
    func_0x000104bdb9bc(auStack_e8,auStack_f0,&ppuStack_c0,2);
    lVar9 = 0x10;
    do {
      func_0x00010b9a8d98((long)&ppuStack_c0 + lVar9);
      lVar9 = lVar9 + -0x10;
      in_ZR = lVar9 == -0x10;
    } while (!(bool)in_ZR);
    FUN_108b73738(&uStack_118);
    FUN_108b73738(auStack_100);
    func_0x000107c27928(auStack_f0);
    unaff_x24 = (undefined **)0x50;
    __Znwm();
    ppuVar11 = unaff_x24 + 1;
    *ppuVar11 = (undefined *)0x0;
    unaff_x24[2] = (undefined *)0x0;
    *unaff_x24 = (undefined *)&PTR_DAT_110ab3b60;
    ppuVar5 = unaff_x24 + 3;
    func_0x00010b9ace44(ppuVar5,auStack_e8);
    unaff_x24[3] = (undefined *)&PTR_DAT_110ab3bb0;
    unaff_x24[8] = (undefined *)ppuStack_130;
    unaff_x24[9] = puStack_128;
    if (puStack_128 != (undefined *)0x0) {
      do {
        func_0x000108b73bdc();
      } while (extraout_w10_01 != 0);
    }
    if ((unaff_x24[5] == (undefined *)0x0) ||
       (in_ZR = *(long *)(unaff_x24[5] + 8) == -1, (bool)in_ZR)) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
        if (bVar2) {
          *ppuVar11 = *ppuVar11 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      ppuStack_a0 = ppuVar5;
      ppuStack_98 = unaff_x24;
      func_0x000107c278e4(unaff_x24 + 4,&ppuStack_a0);
      func_0x000107c278ec(&ppuStack_a0);
      if (unaff_x24[5] != (undefined *)0x0) goto LAB_108b73378;
    }
    else {
LAB_108b73378:
      do {
        func_0x000108b73bdc();
      } while (extraout_w10_02 != 0);
    }
    ppuStack_e0 = ppuVar5;
    func_0x000107c3105c(ppuVar5);
    func_0x000104bdbf78(auStack_e8);
    if (unaff_x22 == (undefined **)0x0) {
      func_0x000104bf822c(&ppuStack_c0,ppuVar5);
      unaff_x22 = (undefined **)0x30;
      aiStack_b0[0] = iVar10;
      __Znwm();
      ppuStack_98 = (undefined **)0x11328ad50;
      pcStack_90 = (code *)0x1;
      unaff_x22[2] = (undefined *)ppuStack_130;
      *unaff_x22 = (undefined *)0x0;
      unaff_x22[1] = (undefined *)0x0;
      unaff_x22[4] = puStack_b8;
      unaff_x22[3] = (undefined *)ppuStack_c0;
      ppuStack_c0 = (undefined **)0x0;
      puStack_b8 = (undefined *)0x0;
      *(int *)(unaff_x22 + 5) = iVar10;
      puVar6 = (undefined *)0x11328ad58;
      ppuStack_a0 = unaff_x22;
      func_0x000104bf7ea8();
      unaff_x22[1] = puVar6;
      ppuVar5 = unaff_x22;
      func_0x000104bf7e44(0x11328ad40);
      if (((ulong)ppuVar5 & 1) != 0) {
        ppuStack_a0 = (undefined **)0x0;
      }
      func_0x000104bdc220(&ppuStack_a0);
      pppuVar7 = &ppuStack_c0;
    }
    else {
      func_0x000104bf822c(&ppuStack_a0,ppuVar5);
      pcStack_90 = (code *)CONCAT44(pcStack_90._4_4_,iVar10);
      func_0x000104bf7db8(unaff_x22 + 3,&ppuStack_a0);
      pppuVar7 = &ppuStack_a0;
    }
    func_0x000104bdc2a0(pppuVar7);
    func_0x000108b73cd0();
    pppuVar7 = &ppuStack_e0;
LAB_108b73450:
    func_0x000104be7e54(pppuVar7);
    func_0x000108b73d44();
  } while( true );
}



/* Entry: 108b735f8; end: 108b7361b;  */

void FUN_108b735f8(long param_1)

{
  func_0x000108b73ddc();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108b7361c; end: 108b7361f;  */

void FUN_108b7361c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab38b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108b73620; end: 108b73633;  */

void FUN_108b73620(void)

{
  func_0x000108b7363c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108b73634; end: 108b73647;  */

void FUN_108b73634(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108b73c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108b73648; end: 108b7366b;  */

void FUN_108b73648(long param_1)

{
  func_0x000108b73ddc();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108b7366c; end: 108b7366f;  */

void FUN_108b7366c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab3930;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108b73670; end: 108b73683;  */

void FUN_108b73670(void)

{
  func_0x000108b7368c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108b73684; end: 108b73697;  */

void FUN_108b73684(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108b73c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108b73698; end: 108b736bb;  */

void FUN_108b73698(long param_1)

{
  func_0x000108b73ddc();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108b736bc; end: 108b736bf;  */

void FUN_108b736bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab39f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108b736c0; end: 108b736d3;  */

void FUN_108b736c0(void)

{
  func_0x000108b736dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108b736d4; end: 108b736e7;  */

void FUN_108b736d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108b73c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108b736e8; end: 108b7370b;  */

void FUN_108b736e8(long param_1)

{
  func_0x000108b73ddc();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108b7370c; end: 108b7370f;  */

void FUN_108b7370c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab3a70;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108b73710; end: 108b73723;  */

void FUN_108b73710(void)

{
  func_0x000108b7372c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108b73724; end: 108b73737;  */

void FUN_108b73724(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108b73c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108b73738; end: 108b7375b;  */

void FUN_108b73738(long param_1)

{
  func_0x000108b73ddc();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108b7375c; end: 108b737cb;  */

void FUN_108b7375c(undefined8 param_1,long param_2)

{
  (**(code **)(param_2 + 0x10))(param_2 + 0x18,param_1);
  return;
}



/* Entry: 108b737cc; end: 108b73817;  */

void FUN_108b737cc(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x000108b73ddc();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108b73818; end: 108b738cf;  */

void FUN_108b73818(undefined8 param_1,long param_2)

{
  (**(code **)(param_2 + 0x10))(param_2 + 0x18,param_1);
  return;
}



/* Entry: 108b738d0; end: 108b738f3;  */

void FUN_108b738d0(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x000108b73ddc();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108b738f4; end: 108b73907;  */

void FUN_108b738f4(void)

{
  FUN_108b739c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108b73908; end: 108b73913;  */

void FUN_108b73908(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108b73c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108b73914; end: 108b73927;  */

void FUN_108b73914(void)

{
  FUN_108b73938();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108b73928; end: 108b73937;  */

undefined1  [16] FUN_108b73928(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = "Djinni C++ Proxy";
  return auVar1;
}



/* Entry: 108b73938; end: 108b739c7;  */

void FUN_108b73938(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  
  *param_1 = &PTR_DAT_110ab3bb0;
  func_0x000108b73d38();
  puVar3 = param_1 + 5;
  uStack_28 = *puVar3;
  lVar2 = 0x11328ad40;
  func_0x000104bdbfcc(0x11328ad40,&uStack_28);
  iVar1 = *(int *)(lVar2 + 0x28) + -1;
  *(int *)(lVar2 + 0x28) = iVar1;
  if (iVar1 == 0) {
    uStack_28 = *puVar3;
    func_0x000104bdc09c(0x11328ad40,&uStack_28);
  }
  func_0x000108b73d44();
  FUN_108b73738(puVar3);
  func_0x00010b9ace94(param_1);
  return;
}



/* Entry: 108b739c8; end: 108b739db;  */

void FUN_108b739c8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ab3b60;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108b739dc; end: 108b739ff;  */

void FUN_108b739dc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110ab3c08;
  return;
}



/* Entry: 108b73a00; end: 108b73a27;  */

void FUN_108b73a00(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110ab3c08;
  return;
}



/* Entry: 108b73a28; end: 108b73a43;  */

void FUN_108b73a28(void)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  long lVar6;
  undefined1 auStack_e8 [16];
  undefined8 uStack_d8;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_108b72ad4(0);
  func_0x000108b73d28();
  uStack_38 = extraout_x8;
  FUN_108b7ee58();
  FUN_108b74c8c(1);
  FUN_108b77240(1);
  FUN_108b7a4ac(1);
  FUN_108b7c024(1);
  bVar1 = bRam000000011372d5c9;
  bRam000000011372d5c9 = 1;
  if ((bVar1 & 1) != 0) goto LAB_108b72b50;
  if ((bRam000000011372d5d8 & 1) == 0) goto LAB_108b72b74;
  while( true ) {
    FUN_108b80888(0x11372d5f0,1);
LAB_108b72b50:
    func_0x000108b73c48(uStack_38);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_108b72b74:
    iVar2 = 0x1372d5d8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_108b72d80();
      puVar3 = &UNK_10f5016a2;
      func_0x000107c31088(&uStack_b0,&UNK_10f5016a2);
      func_0x000107c30f84(auStack_d0);
      FUN_108b7c15c();
      puVar4 = auStack_a8;
      func_0x000107c30f3c(puVar4,puVar3);
      FUN_108b7ac70();
      puVar5 = auStack_98;
      func_0x000107c30f3c(puVar5,puVar4);
      FUN_108b74e64();
      puVar4 = auStack_88;
      func_0x000107c30f3c(puVar4,puVar5);
      FUN_108b77738();
      func_0x000107c30f3c(auStack_78,puVar4);
      func_0x000104bdbd48(auStack_c0,auStack_d0,auStack_a8,4);
      uStack_68 = uStack_b0;
      uStack_b0 = 0;
      func_0x000107c30f40(auStack_60,auStack_c0);
      func_0x000107c31088(&uStack_d8,&UNK_10f5016b6);
      FUN_108b7f014();
      func_0x000108b73e14(auStack_e8);
      uStack_50 = uStack_d8;
      uStack_d8 = 0;
      func_0x000107c30f40(auStack_48,auStack_e8);
      func_0x000104bdbd44(0x11372d5f0,0x113828288,1,&uStack_68,2);
      lVar6 = 0x18;
      do {
        func_0x000107c27924(auStack_60 + lVar6 + -8);
        lVar6 = lVar6 + -0x18;
      } while (lVar6 != -0x18);
      func_0x000108b73dac(auStack_e8);
      func_0x000107c278f4(&uStack_d8);
      func_0x000108b73dac(auStack_c0);
      lVar6 = 0x38;
      do {
        func_0x000107c27900(auStack_a8 + lVar6);
        lVar6 = lVar6 + -0x10;
        in_ZR = lVar6 == -8;
      } while (!(bool)in_ZR);
      func_0x000108b73dac(auStack_d0);
      func_0x000107c278f4(&uStack_b0);
      ___cxa_guard_release(0x11372d5d8);
    }
  }
  return;
}



/* Entry: 108b73a44; end: 108b73a7b;  */

long FUN_108b73a44(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110ab3c68);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108b73a7c; end: 108b73a87;  */

undefined ** FUN_108b73a7c(void)

{
  return &PTR_DAT_110ab3c68;
}



/* Entry: 108b73a88; end: 108b73b1f;  */

void FUN_108b73a88(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  code **ppcVar3;
  undefined8 extraout_x8;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_38;
  
  puVar1 = param_2;
  func_0x000108b73d28();
  uStack_38 = extraout_x8;
  func_0x000108b73e04();
  pcStack_68 = FUN_108b73b20;
  ppuStack_60 = &PTR_FUN_110ab3c78;
  uStack_58 = *param_2;
  ppcVar3 = &pcStack_68;
  puVar2 = puVar1;
  func_0x00010b9ac22c();
  *param_1 = puVar1;
  func_0x000108b73d94();
  func_0x000108b73c48(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108b73d94();
  __ZdlPv(puVar1);
  __Unwind_Resume(puVar2);
  (*ppcVar3[2])();
  return;
}



/* Entry: 108b73b20; end: 108b73bcf;  */

void FUN_108b73b20(undefined8 param_1,long param_2)

{
  (**(code **)(param_2 + 0x10))();
  return;
}



/* Entry: 108b73bd0; end: 108b73ee7;  */

void FUN_108b73bd0(void)

{
  return;
}



/* Entry: 108b73ee8; end: 108b74097;  */

undefined1 * FUN_108b73ee8(undefined8 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined *puVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_340 [8];
  undefined1 auStack_338 [8];
  undefined1 auStack_330 [8];
  undefined1 auStack_328 [8];
  undefined1 auStack_320 [8];
  undefined1 auStack_318 [8];
  undefined1 auStack_310 [8];
  undefined1 auStack_308 [8];
  undefined1 auStack_300 [8];
  undefined1 auStack_2f8 [8];
  undefined1 auStack_2f0 [8];
  undefined1 auStack_2e8 [8];
  undefined1 auStack_2e0 [8];
  undefined1 auStack_2d8 [8];
  undefined1 auStack_2d0 [8];
  undefined1 auStack_2c8 [24];
  undefined1 auStack_2b0 [24];
  undefined1 auStack_298 [24];
  undefined1 auStack_280 [24];
  undefined1 auStack_268 [24];
  undefined1 auStack_250 [24];
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined8 uStack_178;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined4 auStack_128 [2];
  undefined2 uStack_120;
  undefined4 uStack_118;
  undefined2 uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined1 uStack_ff;
  undefined4 uStack_f8;
  undefined2 uStack_f0;
  undefined4 uStack_e8;
  undefined2 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined2 uStack_c0;
  undefined4 uStack_b8;
  undefined2 uStack_b0;
  undefined8 uStack_a8;
  undefined2 uStack_a0;
  undefined4 uStack_98;
  undefined2 uStack_90;
  undefined4 uStack_88;
  undefined2 uStack_80;
  undefined4 uStack_78;
  undefined2 uStack_70;
  undefined4 uStack_68;
  undefined2 uStack_60;
  undefined4 uStack_58;
  undefined2 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_108b74098();
  func_0x000107c30f7c(auStack_138,0x1138282a0);
  uStack_120 = 4;
  auStack_128[0] = *param_2;
  uStack_118 = param_2[1];
  uStack_110 = 4;
  if (*(char *)(param_2 + 3) == '\x01') {
    uStack_108 = CONCAT44(uStack_108._4_4_,param_2[2]);
    uStack_100 = 4;
  }
  else {
    uStack_108 = 0;
    uStack_100 = 1;
  }
  uStack_ff = 0;
  uStack_f0 = 4;
  uStack_f8 = param_2[4];
  uStack_e8 = param_2[5];
  uStack_e0 = 4;
  func_0x0001052808e4(auStack_d8,param_2 + 6);
  uStack_c8 = *(undefined8 *)(param_2 + 0xc);
  uStack_c0 = 6;
  uStack_b8 = param_2[0xe];
  uStack_b0 = 4;
  uStack_a8 = *(undefined8 *)(param_2 + 0x10);
  uStack_a0 = 6;
  uStack_90 = 4;
  uStack_98 = param_2[0x12];
  uStack_88 = param_2[0x13];
  uStack_80 = 4;
  uStack_70 = 4;
  uStack_78 = param_2[0x14];
  uStack_68 = param_2[0x15];
  uStack_60 = 4;
  uStack_58 = param_2[0x16];
  uStack_50 = 4;
  func_0x000104bdb9bc(auStack_130,auStack_138,auStack_128,0xe);
  lVar9 = 0xd0;
  do {
    func_0x00010b9a8d98((long)auStack_128 + lVar9);
    lVar9 = lVar9 + -0x10;
    uVar1 = lVar9 == -0x10;
  } while (!(bool)uVar1);
  func_0x000107c27928(auStack_138);
  puVar7 = auStack_130;
  func_0x00010b9a8f60(param_1);
  puVar3 = auStack_130;
  func_0x000104bdbf78();
  FUN_108b74450(uStack_48);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  lVar9 = 0xd0;
  do {
    func_0x00010b9a8d98((long)auStack_128 + lVar9);
    iVar6 = (int)puVar7;
    lVar9 = lVar9 + -0x10;
    uVar1 = lVar9 == -0x10;
  } while (!(bool)uVar1);
  func_0x000107c27928(auStack_138);
  __Unwind_Resume(puVar3);
  uStack_178 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam000000011372d600 & 1) == 0) {
    iVar2 = 0x1372d600;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107c31088(auStack_2d0,&UNK_10f5016e9);
      pcVar4 = "durationMs";
      func_0x000107c31088(auStack_2d8,"durationMs");
      func_0x000104bef760();
      func_0x000107c27e98(auStack_2c8,auStack_2d8,pcVar4);
      puVar5 = &UNK_10f50170b;
      func_0x000107c31088(auStack_2e0,&UNK_10f50170b);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_2b0,auStack_2e0,puVar5);
      puVar5 = &UNK_10f50171b;
      func_0x000107c31088(auStack_2e8,&UNK_10f50171b);
      func_0x000104bef494();
      func_0x000107c27e98(auStack_298,auStack_2e8,puVar5);
      puVar5 = &UNK_10f501722;
      func_0x000107c31088(auStack_2f0,&UNK_10f501722);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_280,auStack_2f0,puVar5);
      puVar5 = &UNK_10f501736;
      func_0x000107c31088(auStack_2f8,&UNK_10f501736);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_268,auStack_2f8,puVar5);
      puVar5 = &UNK_10f501745;
      func_0x000107c31088(auStack_300,&UNK_10f501745);
      func_0x000104bdbd7c();
      func_0x000107c27e98(auStack_250,auStack_300,puVar5);
      puVar5 = &UNK_10f501752;
      func_0x000107c31088(auStack_308,&UNK_10f501752);
      FUN_108b743f8();
      func_0x000107c27e98(auStack_238,auStack_308,puVar5);
      puVar5 = &UNK_10f50176b;
      func_0x000107c31088(auStack_310,&UNK_10f50176b);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_220,auStack_310,puVar5);
      puVar5 = &UNK_10f501784;
      func_0x000107c31088(auStack_318,&UNK_10f501784);
      FUN_108b743f8();
      func_0x000107c27e98(auStack_208,auStack_318,puVar5);
      puVar5 = &UNK_10f501796;
      func_0x000107c31088(auStack_320,&UNK_10f501796);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_1f0,auStack_320,puVar5);
      puVar5 = &UNK_10f5017a7;
      func_0x000107c31088(auStack_328,&UNK_10f5017a7);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_1d8,auStack_328,puVar5);
      puVar5 = &UNK_10f5017b3;
      func_0x000107c31088(auStack_330,&UNK_10f5017b3);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_1c0,auStack_330,puVar5);
      puVar5 = &UNK_10f5017c3;
      func_0x000107c31088(auStack_338,&UNK_10f5017c3);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_1a8,auStack_338,puVar5);
      puVar5 = &UNK_10f5017d4;
      func_0x000107c31088(auStack_340,&UNK_10f5017d4);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_190,auStack_340,puVar5);
      uVar8 = 0;
      func_0x000104bdbd44(0x113828298,auStack_2d0,0,auStack_2c8,0xe);
      lVar9 = 0x138;
      do {
        func_0x000107c27924(auStack_2c8 + lVar9);
        iVar6 = (int)uVar8;
        lVar9 = lVar9 + -0x18;
        uVar1 = lVar9 == -0x18;
      } while (!(bool)uVar1);
      func_0x000107c278f4(auStack_340);
      func_0x000107c278f4(auStack_338);
      func_0x000107c278f4(auStack_330);
      func_0x000107c278f4(auStack_328);
      func_0x000107c278f4(auStack_320);
      func_0x000107c278f4(auStack_318);
      func_0x000107c278f4(auStack_310);
      func_0x000107c278f4(auStack_308);
      func_0x000107c278f4(auStack_300);
      func_0x000107c278f4(auStack_2f8);
      func_0x000107c278f4(auStack_2f0);
      func_0x000107c278f4(auStack_2e8);
      func_0x000107c278f4(auStack_2e0);
      func_0x000107c278f4(auStack_2d8);
      func_0x000107c278f4(auStack_2d0);
      ___cxa_guard_release(0x11372d600);
    }
  }
  FUN_108b74450(uStack_178);
  if ((bool)uVar1) {
    return (undefined1 *)0x113828298;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam000000011328aba8 & 1) == 0) {
    iVar6 = 0x1328aba8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107c30f9c(0x11328ab98);
      ___cxa_guard_release(0x11328aba8);
    }
  }
  return (undefined1 *)0x11328ab98;
}


