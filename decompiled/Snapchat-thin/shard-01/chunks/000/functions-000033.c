/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100c70f28; end: 100c70fab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c70f28(long param_1,undefined8 param_2,code *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da0890);
  puVar1 = &UNK_1103be638;
  func_0x000107c613fc(&UNK_1103be638,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  func_0x000107c61174(param_1);
  (*param_3)(0,0,uVar2,puVar1);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c70fac; end: 100c7148b;  */

/* WARNING: Possible PIC construction at 0x000100c71020: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c71050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c710a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c710dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c71174: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c71194: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c71298: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c71310: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c71338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c71284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c7143c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c71420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c71400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c713c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c713d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c713c4) */
/* WARNING: Removing unreachable block (ram,0x000100c71424) */
/* WARNING: Removing unreachable block (ram,0x000100c71288) */
/* WARNING: Removing unreachable block (ram,0x000100c71404) */
/* WARNING: Removing unreachable block (ram,0x000100c7143c) */
/* WARNING: Removing unreachable block (ram,0x000100c7133c) */
/* WARNING: Removing unreachable block (ram,0x000100c71314) */
/* WARNING: Removing unreachable block (ram,0x000100c7129c) */
/* WARNING: Removing unreachable block (ram,0x000100c71198) */
/* WARNING: Removing unreachable block (ram,0x000100c71178) */
/* WARNING: Removing unreachable block (ram,0x000100c710e0) */
/* WARNING: Removing unreachable block (ram,0x000100c71294) */
/* WARNING: Removing unreachable block (ram,0x000100c71154) */
/* WARNING: Removing unreachable block (ram,0x000100c710a4) */
/* WARNING: Removing unreachable block (ram,0x000100c71054) */
/* WARNING: Removing unreachable block (ram,0x000100c71460) */
/* WARNING: Removing unreachable block (ram,0x000100c71088) */
/* WARNING: Removing unreachable block (ram,0x000100c71024) */
/* WARNING: Removing unreachable block (ram,0x000100c713d8) */
/* WARNING: Removing unreachable block (ram,0x000100c713dc) */
/* WARNING: Removing unreachable block (ram,0x000100c71440) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c70fac(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  if (param_1 == 0) {
    puVar3 = &UNK_1103be908;
    func_0x000107c613fc(&UNK_1103be908,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,param_3);
    puVar1 = &UNK_1103beec0;
    func_0x000107c613fc(&UNK_1103beec0,0x28,7);
    *(undefined **)(puVar1 + 0x10) = puVar3;
    *(undefined8 *)(puVar1 + 0x18) = 0x101464e6c;
    *(ulong *)(puVar1 + 0x20) = param_4;
    uVar4 = *(ulong *)(param_3 + _DAT_112da0930);
    func_0x000107c61580(param_4,3);
    func_0x000107c6157c(puVar3);
    func_0x000107c49be8();
    if ((uVar4 & 1) == 0) {
      func_0x000107c61574(puVar3);
      puVar3 = &UNK_1103beee8;
      func_0x000107c613fc(&UNK_1103beee8,0x20,7);
      *(undefined8 *)(puVar3 + 0x10) = 0x1014653c8;
      *(undefined **)(puVar3 + 0x18) = puVar1;
      uStack_70 = 0x101465280;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_1103bef00;
      puStack_68 = puVar3;
      func_0x000107c60bc4(&puStack_90);
      puVar3 = puStack_68;
      func_0x000107c6157c(puVar1);
    }
    else {
      func_0x000107c61428(puVar3 + 0x10,&puStack_90,0,0);
      puVar2 = puVar3 + 0x10;
      func_0x000107c61618();
      if (puVar2 == (undefined *)0x0) {
        func_0x000107c61578(param_4,2);
      }
      else {
        uVar4 = param_4;
        func_0x000100c71498();
        if (((uVar4 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
          func_0x000107c61578(param_4,2);
        }
        else {
          FUN_100c3baf4();
          func_0x000107c61170(puVar2);
          puVar3 = puVar1;
        }
      }
    }
  }
  else {
    func_0x0001002e8978(0);
    puVar3 = *(undefined **)(param_3 + _DAT_112da0920);
    func_0x000107c61580(param_4,2);
    func_0x000100382e80(param_1,param_2);
    func_0x000107c6157c(puVar3);
    func_0x00010006c804();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 100c7148c; end: 100c714a3;  */

void FUN_100c7148c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c714a4; end: 100c7159f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_100c714a4(long param_1,code *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_112da0890);
    func_0x000107c61174();
    func_0x000107c61170(param_1);
    lVar1 = _DAT_112da0920;
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112da0920);
    func_0x000107c6157c(uVar4);
    func_0x00010006c804();
    func_0x000107c61574(uVar4);
    uVar5 = *(ulong *)(lVar3 + _DAT_112da0928);
    uVar4 = *(undefined8 *)(lVar3 + lVar1);
    func_0x000107c61174(uVar5);
    func_0x000107c6157c(uVar4);
    func_0x000100070bfc();
    func_0x000107c61170(lVar3);
    func_0x000107c61574(uVar4);
  }
  FUN_100c3b9b0(0);
  uVar2 = uVar5;
  (*param_2)(uVar5);
  func_0x000107c61170(uVar5);
  return uVar2 | 0x8000000000000000;
}



/* Entry: 100c715a0; end: 100c715a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c715a0(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_100c3b9b0();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined1 *)(lVar4 + _DAT_113076110) = 2;
  *(undefined8 *)(lVar4 + _DAT_113076118) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076120) = 0;
  *(long *)(lVar4 + _DAT_113076128) = param_1;
  *(undefined8 *)(lVar4 + _DAT_113076130) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076138) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076140) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076148);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076150);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076158);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113076160) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076168);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113076170) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_30,puVar2);
  return;
}



/* Entry: 100c715a4; end: 100c716e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c715a4(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_100c3b9b0();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined1 *)(lVar4 + _DAT_113076110) = 2;
  *(undefined8 *)(lVar4 + _DAT_113076118) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076120) = 0;
  *(long *)(lVar4 + _DAT_113076128) = param_1;
  *(undefined8 *)(lVar4 + _DAT_113076130) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076138) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076140) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076148);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076150);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076158);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113076160) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076168);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113076170) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_30,puVar2);
  return;
}



/* Entry: 100c716e4; end: 100c716e7; -[SCBlackCameraNoOutputDetectorImpl _capturerDidStartRunning] */

void FUN_100c716e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9ae50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__scheduleCheckIfNotInBackground_112584538);
  return;
}



/* Entry: 100c716e8; end: 100c717e7; -[SCBlackCameraNoOutputDetectorImpl _scheduleCheckIfNotInBackground] */

void FUN_100c716e8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3dfc0();
  func_0x000107c61170(puVar1);
  if (puVar2 != (undefined *)0x2) {
    func_0x000107c61144(auStack_38,param_1);
    func_0x000107c4f7e8(param_1);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_40,auStack_38);
    func_0x000107c4e524(param_1);
    func_0x000107c61170(param_1);
    func_0x000107c61120(auStack_40);
    func_0x000107c61120(auStack_38);
  }
  return;
}



/* Entry: 100c717e8; end: 100c718ff;  */

void FUN_100c717e8(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  puStack_58 = &UNK_10619caf0;
  puStack_50 = &UNK_110872b00;
  func_0x000107c6111c(auStack_48,param_1 + 0x58);
  func_0x000107c4dd14(param_2);
  func_0x000107c6111c(auStack_70,param_1 + 0x58);
  func_0x000107c4dbbc(param_2);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c71900; end: 100c719a3;  */

void FUN_100c71900(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_2);
  func_0x000107c6111c(auStack_38,param_1 + 0x20);
  func_0x000107c4dbbc(param_2);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c719a4; end: 100c719a7;  */

void FUN_100c719a4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c719a8; end: 100c719cb;  */

undefined8 FUN_100c719a8(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100c719cc; end: 100c71a73; -[SCCameraHardwareStartOperation .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c71a08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c71a38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c71a58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c71a3c) */
/* WARNING: Removing unreachable block (ram,0x000100c71a0c) */
/* WARNING: Removing unreachable block (ram,0x000100c71a5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c719cc(long param_1)

{
  FUN_100c719a8(param_1 + _DAT_112dd8858);
  FUN_100c719a8(param_1 + _DAT_112dd8860);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112dd8870));
  return;
}



/* Entry: 100c71a74; end: 100c71a7b;  */

void FUN_100c71a74(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100c71a7c; end: 100c71b1f;  */

void FUN_100c71a7c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_2);
  func_0x000107c6111c(auStack_38,param_1 + 0x20);
  func_0x000107c4dbc8(param_2);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c71b20; end: 100c71b67;  */

/* WARNING: Possible PIC construction at 0x000100c71b54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c71b58) */

void FUN_100c71b20(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c3b49c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c71b68; end: 100c71bcf; -[SCFeatureZoomFactorsImpl _didChangeCapturerState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c71b68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c5d1c4();
  *(char *)(param_1 + _DAT_11274151c) = (char)uVar1;
  uVar1 = param_3;
  func_0x000107c5c7b0();
  *(char *)(param_1 + _DAT_112741518) = (char)uVar1;
  func_0x000107c3c260(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c71bd0; end: 100c71bdf; -[SCManagedCapturerState ultraWideSupportedOnCurrentDevice] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_100c71bd0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113075c38);
}



/* Entry: 100c71be0; end: 100c71bef; -[SCManagedCapturerState telephotoSupportedOnCurrentDevice] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_100c71be0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113075c40);
}



/* Entry: 100c71bf0; end: 100c71cf7; -[SCFeatureZoomFactorsImpl _refreshZoomFactorsIfNeeded:] */

/* WARNING: Possible PIC construction at 0x000100c71c3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c71c80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c71cac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c71cdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c71c84) */
/* WARNING: Removing unreachable block (ram,0x000100c71c40) */
/* WARNING: Removing unreachable block (ram,0x000100c71c44) */
/* WARNING: Removing unreachable block (ram,0x000100c71cb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c71bf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  if (*(char *)(param_1 + _DAT_112741560) == '\x01') {
    func_0x000107c3e588(param_3);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100c71cf8; end: 100c71cff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_100c71cf8(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar3 = *(long *)(lVar1 + _DAT_112da07d0);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    lVar1 = _DAT_112da0920;
    uVar5 = *(undefined8 *)(lVar3 + _DAT_112da0920);
    func_0x000107c6157c(uVar5);
    func_0x00010006c804();
    func_0x000107c61574(uVar5);
    uVar4 = *(ulong *)(lVar3 + _DAT_112da0928);
    uVar5 = *(undefined8 *)(lVar3 + lVar1);
    func_0x000107c61174(uVar4);
    func_0x000107c6157c(uVar5);
    func_0x000100070bfc();
    func_0x000107c61170(lVar3);
    func_0x000107c61574(uVar5);
  }
  FUN_100c71df4(0);
  uVar2 = uVar4;
  FUN_100c71e14(uVar4);
  func_0x000107c61170(uVar4);
  return uVar2 | 0xa000000000000000;
}



/* Entry: 100c71d00; end: 100c71df3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_100c71d00(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_112da07d0);
    func_0x000107c61174();
    func_0x000107c61170(param_1);
    lVar1 = _DAT_112da0920;
    uVar5 = *(undefined8 *)(lVar3 + _DAT_112da0920);
    func_0x000107c6157c(uVar5);
    func_0x00010006c804();
    func_0x000107c61574(uVar5);
    uVar4 = *(ulong *)(lVar3 + _DAT_112da0928);
    uVar5 = *(undefined8 *)(lVar3 + lVar1);
    func_0x000107c61174(uVar4);
    func_0x000107c6157c(uVar5);
    func_0x000100070bfc();
    func_0x000107c61170(lVar3);
    func_0x000107c61574(uVar5);
  }
  FUN_100c71df4(0);
  uVar2 = uVar4;
  FUN_100c71e14(uVar4);
  func_0x000107c61170(uVar4);
  return uVar2 | 0xa000000000000000;
}



/* Entry: 100c71df4; end: 100c71e13;  */

void FUN_100c71df4(void)

{
  func_0x000107c61168(&PTR_PTR_1129ac5f8);
  return;
}



/* Entry: 100c71e14; end: 100c71e8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c71e14(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_113075f10) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113075f18) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113075f20);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61154(auStack_30,puVar2);
  return;
}



/* Entry: 100c71e90; end: 100c71f33;  */

void FUN_100c71e90(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_2);
  func_0x000107c6111c(auStack_38,param_1 + 0x20);
  func_0x000107c4dbb8(param_2);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c71f34; end: 100c71fcb; -[SCCapturerStateExposureUpdate onDidChangeAdjustingExposure:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c71f34(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + _DAT_113075f10);
  func_0x000107c61174();
  if (cVar1 == '\0') {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + _DAT_113075f18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100c71fcc; end: 100c720a3; -[SCManagedStillImageCapturerV2 _didChangeAdjustingExposureWithState:] */

void FUN_100c71fcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c61174(param_3);
  func_0x000107c4e590(uVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c720a4; end: 100c720c3; -[SCCapturerStateExposureUpdate .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c720a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113075f18));
  return;
}



/* Entry: 100c720c4; end: 100c720e7;  */

void FUN_100c720c4(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c720e8; end: 100c72157;  */

void FUN_100c720e8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 != 0) {
    func_0x000107c4d664(*(undefined8 *)(lVar1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100c72158; end: 100c7215b; -[SCCameraCaptureInitOperation publishState:] */

void FUN_100c72158(void)

{
  return;
}



/* Entry: 100c7215c; end: 100c72243; -[SCCameraCaptureInitOperation .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c7218c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c721a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c72220: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c721a8) */
/* WARNING: Removing unreachable block (ram,0x000100c72190) */
/* WARNING: Removing unreachable block (ram,0x000100c72224) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c7215c(long param_1)

{
  func_0x000107c6119c(param_1 + _DAT_112724664,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112724660);
  return;
}



/* Entry: 100c72244; end: 100c7225b;  */

void FUN_100c72244(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100c72254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 100c7225c; end: 100c722ab;  */

void FUN_100c7225c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar2 != 0) {
    uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x20);
    func_0x000107c3d9b8();
    *(undefined1 *)(lVar2 + 0x15) = uVar1;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c3d9b8(uVar3);
    func_0x000107c3b490(lVar2,param_2,uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100c722ac; end: 100c722bb; -[SCManagedCapturerState adjustingExposure] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_100c722ac(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113075ba0);
}



/* Entry: 100c722bc; end: 100c722f3; -[SCManagedStillImageCapturerV2 _didChangeAdjustingExposure:] */

void FUN_100c722bc(long param_1,undefined8 param_2,uint param_3)

{
  if (((param_3 & 1) == 0) && (*(char *)(param_1 + 0x16) == '\x01')) {
    func_0x000107c3f5bc(*(undefined8 *)(param_1 + 0x90));
    *(undefined1 *)(param_1 + 0x16) = 0;
  }
  return;
}



/* Entry: 100c722f4; end: 100c72303;  */

void FUN_100c722f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1afcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setIsCameraHardwareRequestHandle_112649958,
             *(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 100c72304; end: 100c72323; -[SCCaptureSessionFixer setIsCameraHardwareRequestHandlerTurnedOn:] */

void FUN_100c72304(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 0x98) == param_3) {
    return;
  }
  *(char *)(param_1 + 0x98) = (char)param_3;
  if ((param_3 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0e6630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_onSessionStartRunning_1126173a0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0e6650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_onSessionStopRunning_1126173a8);
  return;
}



/* Entry: 100c72324; end: 100c72327; -[SCCaptureSessionFixer onSessionStartRunning] */

void FUN_100c72324(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beadc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupLivenessConsistencyTimerIf_1125890c8);
  return;
}



/* Entry: 100c72328; end: 100c72423; -[SCCaptureSessionFixer _setupLivenessConsistencyTimerIfForeground] */

void FUN_100c72328(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + 0x60) == 0) {
    uVar1 = param_1 + 0x38;
    func_0x000107c61148();
    uVar2 = uVar1;
    func_0x000107c3ddc4();
    func_0x000107c61170(uVar1);
    if ((uVar2 & 1) == 0) {
      func_0x000107c61144(auStack_38,param_1);
      puVar3 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
      func_0x000107c6111c(auStack_40,auStack_38);
      func_0x000107c51924(0x3ff0000000000000);
      func_0x000107c61180();
      uVar4 = *(undefined8 *)(param_1 + 0x60);
      *(undefined **)(param_1 + 0x60) = puVar3;
      func_0x000107c61170(uVar4);
      func_0x000107c61120(auStack_40);
      func_0x000107c61120(auStack_38);
    }
  }
  return;
}



/* Entry: 100c72424; end: 100c72567;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c72424(undefined8 param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar5 = *(ulong *)(param_2 + _DAT_112ef66f0);
    if (uVar5 == 0) {
      func_0x000100b650a0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar3 = 0;
      func_0x000107c6010c();
      func_0x000107c61170(param_2);
    }
    else {
      uVar1 = uVar5;
      func_0x000107c615f0();
      func_0x000107c4a214();
      if ((uVar1 & 1) == 0) {
        func_0x000100b650a0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar3 = 0;
      }
      else {
        lVar2 = *(long *)(param_2 + _DAT_112ef66c0);
        if (lVar2 != 0) {
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar2 != 0) {
            func_0x000107c5d548();
            func_0x000107c615e8(lVar2);
          }
        }
        func_0x000100b650a0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar3 = 1;
      }
      func_0x000107c6010c();
      func_0x000107c61170(param_2);
      func_0x000107c615e8(uVar5);
    }
    uVar4 = *param_3;
    *param_3 = uVar3;
    func_0x000107c61170(uVar4);
  }
  return;
}



/* Entry: 100c72568; end: 100c7257f;  */

void FUN_100c72568(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100c72424(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 100c72580; end: 100c7265b; -[SCLocationManager locationManagerDidChangeAuthorization:] */

void FUN_100c72580(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined4 uStack_38;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126bc330;
  func_0x000107c5cd50(PTR_PTR_1126bc330,param_2,&PTR____CFConstantStringClassReference_110df1a18);
  func_0x000107c61180();
  func_0x000107c3e740();
  uVar2 = param_3;
  func_0x000107c3e488();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_100c7265c;
  puStack_58 = &UNK_110860758;
  uStack_38 = (undefined4)uVar2;
  lStack_50 = param_1;
  uStack_48 = param_3;
  puStack_40 = puVar1;
  func_0x000107c61174(puVar1);
  func_0x000107c61174(param_3);
  func_0x000107c4e524(uVar3,param_2,&puStack_70);
  func_0x000107c61170(puStack_40);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c7265c; end: 100c72a87;  */

void FUN_100c7265c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined **ppuVar12;
  long lVar13;
  long lVar14;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined4 uStack_178;
  undefined **ppuStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(ulong *)(param_1 + 0x20);
  if ((*(byte *)(uVar2 + 0x80) & 1) == 0) {
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    lVar11 = *(long *)(uVar2 + 0x88);
    func_0x000107c61174(lVar11);
    lVar5 = lVar11;
    func_0x000107c4080c();
    if (lVar5 != 0) {
      lVar13 = *plStack_100;
      do {
        lVar14 = 0;
        do {
          if (*plStack_100 != lVar13) {
            func_0x000107c61128(lVar11);
          }
          lVar3 = *(long *)(lStack_108 + lVar14 * 8);
          (**(code **)(lVar3 + 0x10))(lVar3,*(undefined4 *)(param_1 + 0x38));
          lVar14 = lVar14 + 1;
        } while (lVar5 != lVar14);
        lVar5 = lVar11;
        func_0x000107c4080c();
      } while (lVar5 != 0);
    }
    func_0x000107c61170(lVar11);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88) = 0;
    func_0x000107c61170(uVar4);
    uVar2 = *(ulong *)(param_1 + 0x20);
    if ((*(byte *)(uVar2 + 0x80) & 1) == 0) {
      if (*(uint *)(param_1 + 0x38) < 5) {
        ppuVar12 = (undefined **)(&PTR_PTR_11089ef18)[*(uint *)(param_1 + 0x38)];
      }
      else {
        ppuVar12 = &PTR____CFConstantStringClassReference_110db8b78;
      }
      FUN_100c72b54(*(undefined8 *)(uVar2 + 0x68),ppuVar12,1);
      puVar7 = PTR_PTR_1126ae4e0;
      func_0x000107c44034();
      uVar8 = SUB84(puVar7,0);
      FUN_100c72e0c(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68));
      goto LAB_100c727f8;
    }
  }
  uVar4 = *(undefined8 *)(uVar2 + 0x68);
  if (*(uint *)(param_1 + 0x38) < 5) {
    ppuVar12 = (undefined **)(&PTR_PTR_11089ef18)[*(uint *)(param_1 + 0x38)];
  }
  else {
    ppuVar12 = &PTR____CFConstantStringClassReference_110db8b78;
  }
  func_0x000107c4a994();
  if ((uint)uVar2 < 5) {
    ppuVar10 = (undefined **)(&PTR_PTR_11089ef18)[uVar2 & 0xffffffff];
  }
  else {
    ppuVar10 = &PTR____CFConstantStringClassReference_110db8b78;
  }
  func_0x000105604b80(uVar4,ppuVar12,ppuVar10,1);
  uVar8 = SUB84(ppuVar12,0);
LAB_100c727f8:
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x80) = 1;
  iVar9 = *(int *)(param_1 + 0x38);
  if (iVar9 == 0) {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    func_0x000107c5c734(uVar4);
    func_0x000107c61180();
    func_0x000107c52de0();
    func_0x000107c61170(uVar4);
    iVar9 = *(int *)(param_1 + 0x38);
  }
  uVar1 = iVar9 - 3;
  ppuVar12 = (undefined **)(ulong)(uVar1 < 2);
  func_0x000107c55a04(*(undefined8 *)(param_1 + 0x20));
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x000107c40808();
  if ((lVar5 != 0) && (*(int *)(param_1 + 0x38) != 0)) {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
    func_0x000107c40794();
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38) = 0;
    func_0x000107c61170(uVar6);
    puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_138 = 0xc2000000;
    puStack_130 = &UNK_1055fe2f4;
    puStack_128 = &UNK_110845ce0;
    uStack_120 = uVar4;
    uStack_118 = uVar1 < 2;
    func_0x000107c61174(uVar4);
    uVar8 = (int)&puStack_140;
    func_0x000100162d98("APPSTORE");
    ppuVar12 = *(undefined ***)(*(long *)(param_1 + 0x20) + 0x70);
    puVar7 = PTR_PTR_1126bc340;
    func_0x000107c41a34(PTR_PTR_1126bc340);
    func_0x000107c61180();
    func_0x000107c4d664(ppuVar12);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(uStack_120);
    func_0x000107c61170(uVar4);
  }
  lVar11 = *(long *)(param_1 + 0x28);
  func_0x000107c3cf58();
  lVar5 = 1;
  if (lVar11 == 0) {
    lVar5 = 2;
  }
  lVar11 = *(long *)(param_1 + 0x20);
  func_0x000107c4aa10();
  if (lVar5 == lVar11) {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
    puVar7 = PTR_PTR_1126bc348;
    func_0x000107c41de8();
    func_0x000107c61180();
  }
  else {
    func_0x000107c55a54();
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
    ppuVar12 = &PTR_PTR_1126bc000;
    puVar7 = PTR_PTR_1126bc348;
    func_0x000107c41de8(PTR_PTR_1126bc348);
    func_0x000107c61180();
    func_0x000107c4d664(uVar4);
    func_0x000107c61170(puVar7);
    puVar7 = PTR_PTR_1126bc348;
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
    func_0x000107c4b894();
    func_0x000107c41e18();
    func_0x000107c61180();
  }
  func_0x000107c4d664(uVar4);
  func_0x000107c61170(puVar7);
  if (1 < uVar1) {
    puVar7 = *(undefined **)(param_1 + 0x20);
    func_0x000107c4b88c();
    func_0x000107c61180();
    func_0x000107c61170();
    if (puVar7 != (undefined *)0x0) {
      func_0x000107c3b4e8(*(undefined8 *)(param_1 + 0x20));
    }
  }
  func_0x000107c3c224(*(undefined8 *)(param_1 + 0x20));
  lVar5 = *(long *)(param_1 + 0x30);
  func_0x000107c427dc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  pcStack_148 = FUN_100c72a88;
  lVar11 = lVar5 + 0x30;
  ppuStack_170 = ppuVar12;
  uStack_168 = uVar4;
  puStack_160 = puVar7;
  lStack_158 = param_1;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x000107c61148();
  if (lVar11 != 0) {
    func_0x000107c54ffc(lVar11);
    func_0x000107c55a04(lVar11);
    lVar13 = *(long *)(lVar5 + 0x28);
    if (lVar13 != 0) {
      uVar4 = *(undefined8 *)(lVar5 + 0x20);
      puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_198 = 0xc2000000;
      pcStack_190 = FUN_100c72cc8;
      puStack_188 = &UNK_110890350;
      func_0x000107c61174(lVar13);
      lStack_180 = lVar13;
      uStack_178 = uVar8;
      func_0x00010007380c(uVar4,&puStack_1a0);
      func_0x000107c61170(lStack_180);
    }
  }
  func_0x000107c61170(lVar11);
  return;
}



/* Entry: 100c72a88; end: 100c72b43;  */

void FUN_100c72a88(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined4 uStack_38;
  
  lVar1 = param_1 + 0x30;
  func_0x000107c61148();
  if (lVar1 != 0) {
    func_0x000107c54ffc(lVar1);
    func_0x000107c55a04(lVar1);
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_100c72cc8;
      puStack_48 = &UNK_110890350;
      func_0x000107c61174(lVar3);
      lStack_40 = lVar3;
      uStack_38 = param_2;
      func_0x00010007380c(uVar2,&puStack_60);
      func_0x000107c61170(lStack_40);
    }
  }
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 100c72b44; end: 100c72b4b; -[SCLocationManager setHasAuthorizationStatus:] */

void FUN_100c72b44(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb1) = param_3;
  return;
}



/* Entry: 100c72b4c; end: 100c72b53; -[SCLocationManager setLastAuthorizationStatus:] */

void FUN_100c72b4c(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xb4) = param_3;
  return;
}



/* Entry: 100c72b54; end: 100c72cc7;  */

void FUN_100c72b54(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  if (param_1 != 0) {
    plVar2 = *(long **)(param_1 + 8);
    func_0x000107c61174(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f2de043;
    }
    else {
      puVar1 = param_2;
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_11089f6c0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      func_0x000107c60e14(auStack_60[0]);
    }
  }
  puVar1 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8();
                    /* WARNING: Could not recover jumptable at 0x000100c72cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + 0x20) + 0x10))
            (*(long *)(puVar1 + 0x20),*(undefined4 *)(puVar1 + 0x28));
  return;
}



/* Entry: 100c72cc8; end: 100c72cfb;  */

void FUN_100c72cc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100c72cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  return;
}



/* Entry: 100c72cfc; end: 100c72d57;  */

void FUN_100c72cfc(long param_1,int param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (param_2 != 0) {
    lStack_18 = *(long *)(param_1 + 0x20);
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    puStack_28 = &UNK_10b25fabc;
    puStack_20 = &UNK_110842e18;
    func_0x000107c4e5e8(*(undefined8 *)(lStack_18 + 0x10),param_2,&puStack_38);
  }
  return;
}



/* Entry: 100c72d58; end: 100c72d5b; +[SCAppLaunchSignaler getElapsedTimeMillisSinceAppDelegateInit] */

undefined1 ** FUN_100c72d58(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  undefined8 *puVar6;
  undefined1 **ppuVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar6 = &uStack_30;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c6106c();
  uVar1 = param_1 - uRam0000000113813688;
  if (param_1 < uRam0000000113813688) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100c72e00);
    (*pcVar5)();
  }
  uStack_30 = 0;
  func_0x000107c6109c();
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uStack_30 & 0xffffffff;
  if (SUB168(auVar3 * auVar4,8) != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100c72e04);
    (*pcVar5)();
  }
  if (uStack_30._4_4_ == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100c72e08);
    (*pcVar5)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    uVar2 = 0;
    if ((ulong)uStack_30._4_4_ != 0) {
      uVar2 = (uVar1 * (uStack_30 & 0xffffffff)) / (ulong)uStack_30._4_4_;
    }
    return (undefined1 **)(uVar2 / 1000000);
  }
  func_0x000107c60e78();
  puStack_58 = (undefined1 *)&uStack_70;
  ppuVar7 = (undefined1 **)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    (**(code **)(**(long **)((long)puVar6 + 8) + 0x18))
              (*(long **)((long)puVar6 + 8),&UNK_11089f7b0,&uStack_70,param_2);
    ppuVar7 = &puStack_58;
    func_0x00010007e5dc(ppuVar7);
  }
  return ppuVar7;
}



/* Entry: 100c72d5c; end: 100c72e0b;  */

undefined1 ** FUN_100c72d5c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  undefined8 *puVar6;
  undefined1 **ppuVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar6 = &uStack_30;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c6106c();
  uVar1 = param_1 - uRam0000000113813688;
  if (param_1 < uRam0000000113813688) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100c72e00);
    (*pcVar5)();
  }
  uStack_30 = 0;
  func_0x000107c6109c();
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uStack_30 & 0xffffffff;
  if (SUB168(auVar3 * auVar4,8) != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100c72e04);
    (*pcVar5)();
  }
  if (uStack_30._4_4_ == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100c72e08);
    (*pcVar5)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    uVar2 = 0;
    if ((ulong)uStack_30._4_4_ != 0) {
      uVar2 = (uVar1 * (uStack_30 & 0xffffffff)) / (ulong)uStack_30._4_4_;
    }
    return (undefined1 **)(uVar2 / 1000000);
  }
  func_0x000107c60e78();
  puStack_58 = (undefined1 *)&uStack_70;
  ppuVar7 = (undefined1 **)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    (**(code **)(**(long **)((long)puVar6 + 8) + 0x18))
              (*(long **)((long)puVar6 + 8),&UNK_11089f7b0,&uStack_70,param_2);
    ppuVar7 = &puStack_58;
    func_0x00010007e5dc(ppuVar7);
  }
  return ppuVar7;
}



/* Entry: 100c72e0c; end: 100c72e83;  */

void FUN_100c72e0c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11089f7b0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 100c72e84; end: 100c72ee7;  */

void FUN_100c72e84(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174(param_2);
  lVar1 = param_1 + 0x28;
  func_0x000107c61148(lVar1);
  lVar2 = lVar1;
  func_0x000107c3c7b0();
  func_0x000107c61170(param_2);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x000100c72ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar2);
  return;
}



/* Entry: 100c72ee8; end: 100c733ef; -[SCSpotlightBadgeProvider _shouldShowBadgeBasedOnDeliveredNotifications:] */

undefined * FUN_100c72ee8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  long lStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  long lStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  long lStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_188 [128];
  undefined1 auStack_108 [128];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  lVar1 = param_1;
  func_0x000107c3c898();
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e15c();
  func_0x000107c61180();
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  func_0x000107c61174(param_3);
  lStack_270 = param_3;
  func_0x000107c4080c(param_3,param_2,&uStack_1d0,auStack_108,0x10);
  if (lStack_270 != 0) {
    lVar11 = *plStack_1c0;
    do {
      lVar15 = 0;
      do {
        if (*plStack_1c0 != lVar11) {
          func_0x000107c61128(param_3);
        }
        puVar3 = PTR_PTR_1126b1370;
        func_0x000107c610f4();
        func_0x000107c492c4();
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puVar4 = puVar3;
        func_0x000107c4f6dc();
        func_0x000107c4d960(puVar5,param_2,puVar4);
        func_0x000107c61180();
        lVar12 = lVar1;
        func_0x000107c40404(lVar1,param_2,puVar5);
        func_0x000107c61170(puVar5);
        if ((int)lVar12 != 0) {
          if (*(char *)(param_1 + 0x41) == '\x01') {
            puVar5 = puVar3;
            func_0x000107c4153c();
            func_0x000107c61180();
            puVar4 = puVar5;
            func_0x000107c4adac();
            func_0x000107c61170(puVar5);
            puVar5 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
            if (puVar4 != (undefined *)0x0) {
              puVar4 = puVar3;
              func_0x000107c4153c(puVar3);
              func_0x000107c61180();
              func_0x000107c3ff58(puVar5,param_2,puVar4);
              func_0x000107c61180();
              func_0x000107c61170(puVar4);
              uStack_1d8 = 0;
              uStack_1e0 = 0;
              uStack_1f8 = 0;
              plStack_200 = (long *)0x0;
              uStack_1e8 = 0;
              uStack_1f0 = 0;
              lStack_208 = 0;
              uStack_210 = 0;
              puVar4 = puVar5;
              func_0x000107c4f764();
              func_0x000107c61180();
              puVar6 = puVar4;
              func_0x000107c4080c();
              if (puVar6 == (undefined *)0x0) {
                uVar13 = 0;
              }
              else {
                lVar12 = *plStack_200;
                do {
                  puVar14 = (undefined *)0x0;
                  do {
                    if (*plStack_200 != lVar12) {
                      func_0x000107c61128(puVar4);
                    }
                    uVar13 = *(ulong *)(lStack_208 + (long)puVar14 * 8);
                    uVar7 = uVar13;
                    func_0x000107c4d3e4();
                    func_0x000107c61180();
                    uVar8 = uVar7;
                    func_0x000107c49d0c();
                    func_0x000107c61170(uVar7);
                    if ((int)uVar8 != 0) {
                      func_0x000107c5dc0c();
                      func_0x000107c61180();
                      goto LAB_100c7318c;
                    }
                    puVar14 = puVar14 + 1;
                  } while (puVar6 != puVar14);
                  puVar6 = puVar4;
                  func_0x000107c4080c(puVar4,param_2,&uStack_210,auStack_188,0x10);
                } while (puVar6 != (undefined *)0x0);
                uVar13 = 0;
              }
LAB_100c7318c:
              func_0x000107c61170(puVar4);
              uVar7 = uVar13;
              func_0x000107c49d0c(uVar13,param_2,&PTR____CFConstantStringClassReference_110e1e478);
              func_0x000107c61170(uVar13);
              func_0x000107c61170(puVar5);
              if ((uVar7 & 1) != 0) goto LAB_100c731cc;
            }
          }
          func_0x000107c3d798(puVar2,param_2,puVar3);
        }
LAB_100c731cc:
        func_0x000107c61170(puVar3);
        lVar15 = lVar15 + 1;
      } while (lVar15 != lStack_270);
      lStack_270 = param_3;
      func_0x000107c4080c(param_3,param_2,&uStack_1d0,auStack_108,0x10);
    } while (lStack_270 != 0);
  }
  func_0x000107c61170(param_3);
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_238 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_230 = 0xc2000000;
  puStack_228 = &UNK_105b0d35c;
  puStack_220 = &UNK_1108d50d0;
  func_0x000107c61174(lVar1);
  lStack_218 = lVar1;
  func_0x000107c5b5b4(puVar2,param_2,&puStack_238);
  uVar9 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5bf34(uVar9);
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c40794();
  func_0x000107c591d4(uVar9,param_2,puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar9);
  uVar9 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5bf34();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c40808(puVar2);
  func_0x000107c591d0(uVar9,param_2,puVar3);
  func_0x000107c61170(uVar9);
  if (((*(char *)(param_1 + 0x40) == '\x01') && (*(long *)(param_1 + 0x38) != 0)) &&
     (puVar3 = puVar2, func_0x000107c40808(), puVar3 != (undefined *)0x0)) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    puStack_268 = puVar5;
    uStack_260 = 0xc2000000;
    puStack_258 = &UNK_105b0d434;
    puStack_250 = &UNK_1108d5100;
    func_0x000107c61174();
    puStack_248 = puVar3;
    lStack_240 = param_1;
    func_0x000107c429cc(puVar2,param_2,&puStack_268);
    puVar5 = puVar3;
    func_0x000107c40808();
    if (puVar5 != (undefined *)0x0) {
      uVar9 = *(undefined8 *)(param_1 + 0x80);
      func_0x000107c5c734();
      func_0x000107c61180();
      puVar5 = puVar3;
      func_0x000107c40794();
      func_0x000107c4ed54(uVar9,param_2,puVar5);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(uVar9);
    }
    func_0x000107c61170(puStack_248);
    func_0x000107c61170(puVar3);
  }
  puVar5 = puVar2;
  func_0x000107c40808();
  func_0x000107c61170(lStack_218);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    func_0x000107c60e78();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e178(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2f68);
    func_0x000107c61180();
    uVar10 = *(undefined8 *)(param_3 + 0x28);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar9 = uVar10;
    func_0x000107c3ebcc();
    func_0x000107c61170(uVar10);
    if ((int)uVar9 != 0) {
      func_0x000107c49740(puVar2,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2fc8,0);
    }
    puVar5 = puVar2;
    func_0x000107c40794(puVar2);
    func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  return puVar5;
}



/* Entry: 100c733f0; end: 100c734af; -[SCSpotlightBadgeProvider _spotlightNotificationInAppBadgingAllowlist] */

void FUN_100c733f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e178(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2f68);
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c3ebcc();
  func_0x000107c61170(uVar2);
  if ((int)uVar3 != 0) {
    func_0x000107c49740(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2fc8,0);
  }
  puVar4 = puVar1;
  func_0x000107c40794(puVar1);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100c734b0; end: 100c734ef;  */

void FUN_100c734b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c3ebd4(uVar2,param_2,&PTR____CFConstantStringClassReference_110e1e498,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 100c734f0; end: 100c734f7; -[SCLocationManager lastLocationAccuracy] */

undefined8 FUN_100c734f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 100c734f8; end: 100c734ff; -[SCLocationManager setLastLocationAccuracy:] */

void FUN_100c734f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xd8) = param_3;
  return;
}



/* Entry: 100c73500; end: 100c7355f; +[SCDeviceLocationPermissionsUpdate didUpdateAuthorizationWithAuthorized:status:] */

void FUN_100c73500(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bc348;
  func_0x000107c610f4();
  puVar2 = puVar1;
  func_0x000107c498b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[0x10] = param_3;
  *(undefined4 *)(puVar2 + 0x14) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c73560; end: 100c735c7; -[SCStoriesClientSideBadgingCoordinator setShowBadgeForNotificationsWithNotifs:] */

/* WARNING: Possible PIC construction at 0x000100c73598: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c7359c) */

void FUN_100c73560(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c611ec(param_1 + 0x38);
  func_0x000107c40794();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c735c8; end: 100c73613; -[SCStoriesClientSideBadgingCoordinator setShowBadgeForNotificationWithCount:] */

void FUN_100c735c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c56bcc(uVar2,param_2,puVar1,&PTR____CFConstantStringClassReference_110e15d18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c73614; end: 100c73657; -[SCDeviceLocationPermissionsUpdate internalInit] */

void FUN_100c73614(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x000107c61174();
  puStack_28 = PTR_PTR_112709e48;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c73658; end: 100c7374b;  */

void FUN_100c73658(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_100c73804;
  puStack_50 = &UNK_11089ef40;
  func_0x000107c6111c(auStack_48,param_1 + 0x20);
  func_0x000107c6111c(auStack_70,param_1 + 0x20);
  func_0x000107c4c600(param_2);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c7374c; end: 100c73803; -[SCDeviceLocationPermissionsUpdate matchDidUpdateAuthorization:didUpdateLocationAccuracy:didFail:] */

/* WARNING: Possible PIC construction at 0x000100c737e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c737e8) */

void FUN_100c7374c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5);
    }
  }
  else if (lVar1 == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x18));
    }
  }
  else if ((lVar1 == 0) && (param_3 != 0)) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined1 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 100c73804; end: 100c73837;  */

void FUN_100c73804(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c4dc78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c73838; end: 100c738cf;  */

void FUN_100c73838(long param_1,undefined8 param_2)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  puStack_48 = &UNK_105b0d038;
  puStack_40 = &UNK_11085da78;
  uStack_30 = param_2;
  func_0x000107c6111c(auStack_38,param_1 + 0x20);
  uStack_28 = *(undefined1 *)(param_1 + 0x28);
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 100c738d0; end: 100c73923; -[SCDeviceLocationPermissionsManager onLocationAuthorizationStatusChange:] */

void FUN_100c738d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126bc348;
  func_0x000107c41de8(PTR_PTR_1126bc348,param_2,(int)param_3 - 3U < 2,param_3);
  func_0x000107c61180();
  func_0x000107c4d664(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c73924; end: 100c73a57;  */

void FUN_100c73924(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_100c73a58;
  puStack_60 = &UNK_11089ef40;
  func_0x000107c6111c(auStack_58,param_1 + 0x20);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x100c73d4c;
  puStack_88 = &UNK_11085c360;
  func_0x000107c6111c(auStack_80,param_1 + 0x20);
  func_0x000107c6111c(auStack_a8,param_1 + 0x20);
  func_0x000107c4c600(param_2);
  func_0x000107c61120(auStack_a8);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c73a58; end: 100c73a8b;  */

void FUN_100c73a58(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3c054();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c73a8c; end: 100c73b33; -[SCUserLocationPermissionsManager _onAuthorizationStatusChange:] */

void FUN_100c73a8c(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c61144(auStack_28,param_1);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c43188(param_1);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
  return;
}



/* Entry: 100c73b34; end: 100c73bdf;  */

void FUN_100c73b34(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_2);
  func_0x000107c6111c(auStack_38,param_1 + 0x20);
  func_0x000107c4c600(param_2);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c73be0; end: 100c73c13;  */

void FUN_100c73be0(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c4b8dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c73c14; end: 100c73c17; -[SCLocationSharingServiceV2 locationProviderDidUpdateAuthorization:] */

void FUN_100c73c14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea4d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setIsLocationAuthorized__112586d00);
  return;
}



/* Entry: 100c73c18; end: 100c73c73; -[SCLocationSharingServiceV2 _setIsLocationAuthorized:] */

void FUN_100c73c18(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_100c78da8;
  puStack_28 = &UNK_110845ce0;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x000107c4e524(*(undefined8 *)(param_1 + 0x48),param_2,&puStack_40);
  return;
}



/* Entry: 100c73c74; end: 100c73c77; -[SCLocationManager locationAccuracy] */

void FUN_100c73c74(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0893d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_lastLocationAccuracy_1125fff00);
  return;
}



/* Entry: 100c73c78; end: 100c73cd3; +[SCDeviceLocationPermissionsUpdate didUpdateLocationAccuracyWithAccuracy:] */

void FUN_100c73c78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bc348;
  func_0x000107c610f4();
  puVar2 = puVar1;
  func_0x000107c498b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c73cd4; end: 100c73d07;  */

void FUN_100c73cd4(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c4dc74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c73d08; end: 100c73d7f; -[SCDeviceLocationPermissionsManager onLocationAccuracyChange:] */

void FUN_100c73d08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126bc348;
  func_0x000107c41e18(PTR_PTR_1126bc348);
  func_0x000107c61180();
  func_0x000107c4d664(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c73d80; end: 100c73dc3; -[SCUserLocationPermissionsManager onLocationAccuracyChange:] */

void FUN_100c73d80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126bc370;
  func_0x000107c41e18(PTR_PTR_1126bc370);
  func_0x000107c61180();
  func_0x000107c4d664(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c73dc4; end: 100c73e1f; +[SCUserLocationPermissionsUpdate didUpdateLocationAccuracyWithAccuracy:] */

void FUN_100c73dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bc370;
  func_0x000107c610f4();
  puVar2 = puVar1;
  func_0x000107c498b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c73e20; end: 100c73e63; -[SCUserLocationPermissionsUpdate internalInit] */

void FUN_100c73e20(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x000107c61174();
  puStack_28 = PTR_PTR_112709e50;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c73e64; end: 100c73f0f;  */

void FUN_100c73e64(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_2);
  func_0x000107c6111c(auStack_38,param_1 + 0x20);
  func_0x000107c4c600(param_2);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c73f10; end: 100c73fbf; -[SCUserLocationPermissionsUpdate matchDidUpdateAuthorization:didUpdateLocationAccuracy:didFail:] */

/* WARNING: Possible PIC construction at 0x000100c73fa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c73fa4) */

void FUN_100c73f10(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 2) {
    if (param_5 == 0) goto LAB_100c73f9c;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    pcVar3 = *(code **)(param_5 + 0x10);
    param_4 = param_5;
  }
  else if (lVar2 == 1) {
    if (param_4 == 0) goto LAB_100c73f9c;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    pcVar3 = *(code **)(param_4 + 0x10);
  }
  else {
    if ((lVar2 != 0) || (param_3 == 0)) goto LAB_100c73f9c;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_3 + 0x10);
    param_4 = param_3;
  }
  (*pcVar3)(param_4,uVar1);
LAB_100c73f9c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 100c73fc0; end: 100c73fcb; -[SCUserLocationPermissionsUpdate .cxx_destruct] */

void FUN_100c73fc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 100c73fcc; end: 100c741bb;  */

void FUN_100c73fcc(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  if (param_2 == 0) {
LAB_100c7401c:
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c3b520();
    func_0x000107c61180();
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x000107c49a8c();
    if (iVar1 != 0) {
      iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
      func_0x000107c3dc38();
      if (iVar1 == 0) goto LAB_100c7401c;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c3bdb4();
    func_0x000107c61180();
  }
  uVar3 = *(ulong *)(param_1 + 0x20);
  func_0x000107c5bcc0();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c49cec();
  func_0x000107c61170(uVar3);
  uVar5 = *(ulong *)(param_1 + 0x20);
  func_0x000107c5bcc0();
  func_0x000107c61180();
  uVar3 = uVar5;
  func_0x000107c5d70c();
  if ((uVar3 & 1) == 0) {
    uVar8 = uVar2;
    func_0x000107c5d70c();
    uVar9 = (undefined1)uVar8;
  }
  else {
    uVar9 = 0;
  }
  func_0x000107c61170(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5bcc0();
  func_0x000107c61180();
  uVar8 = uVar6;
  func_0x000107c5d70c();
  if ((int)uVar8 != 0) {
    func_0x000107c5d70c(uVar2);
  }
  func_0x000107c61170(uVar6);
  func_0x000107c427dc(*(undefined8 *)(param_1 + 0x28));
  if ((uVar4 & 1) == 0) {
    func_0x000107c59840(*(undefined8 *)(param_1 + 0x20));
    puVar7 = PTR_PTR_1126bc330;
    func_0x000107c5cd50();
    func_0x000107c61180();
    func_0x000107c3e740();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    puStack_80 = &UNK_1055fcfd4;
    puStack_78 = &UNK_110867cb8;
    uStack_68 = *(undefined8 *)(param_1 + 0x20);
    puStack_70 = puVar7;
    func_0x000107c61174(uVar2);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = uVar2;
    uStack_48 = uVar9;
    func_0x000107c61174(uVar6);
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    uStack_58 = uVar6;
    func_0x000107c61174(uVar8);
    uStack_50 = uVar8;
    func_0x000107c61174(puVar7);
    func_0x000100162d98("APPSTORE",&puStack_90);
    func_0x000107c61170(uStack_50);
    func_0x000107c61170(uStack_58);
    func_0x000107c61170(uStack_60);
    func_0x000107c61170(puStack_70);
    func_0x000107c61170(puVar7);
  }
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100c741bc; end: 100c741ff; -[SCLocationManager _disabledLocationManagerState] */

void FUN_100c741bc(void)

{
  func_0x000107c610f4(PTR_PTR_1126bc318);
  func_0x000107c4910c(*(undefined8 *)PTR__kCLLocationAccuracyThreeKilometers_110349b90,
                      *(undefined8 *)PTR__kCLDistanceFilterNone_110349b68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c74200; end: 100c7420b; -[SCLocationManager state] */

void FUN_100c74200(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0xd0,1);
  return;
}



/* Entry: 100c7420c; end: 100c7431b; -[SCLocationManagerState isEqual:] */

bool FUN_100c7420c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  
  func_0x000107c61174(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      func_0x000107c61158(param_1);
      uVar3 = param_3;
      func_0x000107c6115c(param_3,uVar2);
      if (((uVar3 & 1) != 0) &&
         (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
           (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
          (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))) {
        dVar5 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
        dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
          bVar1 = dVar5 < dVar4;
        }
        if (bVar1) {
          dVar4 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                  2.220446049250313e-16;
          if (dVar4 <= 2.2250738585072014e-308) {
            dVar4 = 2.2250738585072014e-308;
          }
          bVar1 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18)) < dVar4;
          goto LAB_100c74300;
        }
      }
      bVar1 = false;
    }
  }
LAB_100c74300:
  func_0x000107c61170(param_3);
  return bVar1;
}



/* Entry: 100c7431c; end: 100c74337; -[SCLocationManagerState updatingLocation] */

undefined1 FUN_100c7431c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 100c74338; end: 100c74393; -[SCMainAppSceneDelegate sceneDidBecomeActive:] */

/* WARNING: Possible PIC construction at 0x000100c74380: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c74384) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c74338(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  param_1 = param_1 + _DAT_11272091c;
  func_0x000107c61148(param_1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c5a9c4(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c61180();
  func_0x000107c3df84(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c74394; end: 100c7463b; -[SCMainAppDelegate applicationDidBecomeActive:] */

/* WARNING: Possible PIC construction at 0x000100c7441c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c74454: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c74478: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c744a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c744dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c74510: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c74544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c74578: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c745a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c745cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c745f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c74614: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c745f4) */
/* WARNING: Removing unreachable block (ram,0x000100c745d0) */
/* WARNING: Removing unreachable block (ram,0x000100c745a8) */
/* WARNING: Removing unreachable block (ram,0x000100c7457c) */
/* WARNING: Removing unreachable block (ram,0x000100c74548) */
/* WARNING: Removing unreachable block (ram,0x000100c74514) */
/* WARNING: Removing unreachable block (ram,0x000100c744e0) */
/* WARNING: Removing unreachable block (ram,0x000100c744a8) */
/* WARNING: Removing unreachable block (ram,0x000100c7447c) */
/* WARNING: Removing unreachable block (ram,0x000100c74458) */
/* WARNING: Removing unreachable block (ram,0x000100c74420) */
/* WARNING: Removing unreachable block (ram,0x000100c74618) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c74394(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  func_0x000107c61174(param_3);
  lVar5 = (long)_DAT_112720908;
  if (*(long *)(param_1 + lVar5) == 0) {
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
    func_0x000107c61180();
    func_0x000107c3e814();
  }
  else {
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c4102c();
    func_0x000107c49788(puVar1,param_2,uVar4,puVar3,&PTR____CFConstantStringClassReference_110dcdb78
                       );
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 100c7463c; end: 100c74693; -[SCApplicationState appDidBecomeActive] */

void FUN_100c7463c(long param_1,undefined8 param_2)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_100c74694;
  puStack_28 = &UNK_110848c48;
  uStack_18 = 0;
  lStack_20 = param_1;
  func_0x000107c4b944(*(undefined8 *)(param_1 + 8),param_2,&puStack_40);
  return;
}



/* Entry: 100c74694; end: 100c746ab;  */

void FUN_100c74694(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = 1;
  return;
}



/* Entry: 100c746ac; end: 100c746d3; -[SCSystemServicesProviderImplementation appOpenTrigger] */

void FUN_100c746ac(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100c746d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c746d4; end: 100c747f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c746d4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  long lStack_48;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  if (*(long *)(unaff_x20 + _DAT_112d7f128) != 0) {
    uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112d7f128) + _DAT_112d9d218);
    func_0x000107c6157c(uVar4);
    func_0x000100083b20(&lStack_48);
    func_0x000107c61574(uVar4);
    lVar2 = *(long *)(lStack_48 + _DAT_1130837d0);
    func_0x000107c61174();
    func_0x000107c61170(lStack_48);
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      func_0x000107c5eea0(auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x000107c5ee70();
      (**(code **)(lVar5 + 8))(auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
      func_0x000107c4ba04(lVar3);
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100c747f8; end: 100c7489b; -[SCApplicationLogger logApplicationOpenWithTriggerTs:] */

/* WARNING: Possible PIC construction at 0x000100c74864: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c74868) */
/* WARNING: Removing unreachable block (ram,0x000100c74870) */

void FUN_100c747f8(ulong param_1,undefined8 param_2,undefined *param_3)

{
  ulong uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_1;
  func_0x000107c5ad30();
  if ((uVar1 & 1) == 0) {
    if (lRam000000011383a308 == 2 && lRam000000011383a310 == 1) {
      func_0x000107c4ba08(param_1,param_2,3,param_3);
    }
    else {
      param_3 = PTR_PTR_1126aec70;
      func_0x000107c5a9f0(PTR_PTR_1126aec70);
      func_0x000107c61180();
      func_0x000107c419f8();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c7489c; end: 100c748b3; -[SCApplicationLogger shouldShortCircuitAAO] */

bool FUN_100c7489c(long param_1)

{
  bool bVar1;
  
  bVar1 = *(long *)(param_1 + 0x20) == 0;
  *(bool *)(param_1 + 0x39) = bVar1;
  return bVar1;
}



/* Entry: 100c748b4; end: 100c748bb; -[SCAppSession didBecomeActiveWithRemoteNotification] */

undefined1 FUN_100c748b4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x33);
}



/* Entry: 100c748bc; end: 100c74993; -[SCApplicationLogger logApplicationOpenWithType:triggerTs:] */

void FUN_100c748bc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  func_0x000107c61174(param_4);
  uVar1 = param_1;
  func_0x000107c5ad30();
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c3dfc0();
    func_0x000107c61170(puVar2);
    uVar4 = *(undefined8 *)(param_1 + 8);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x100c74bb4;
    puStack_68 = &UNK_110844fe0;
    uStack_60 = param_1;
    uStack_50 = param_3;
    puStack_48 = puVar3;
    func_0x000107c61174(param_4);
    uStack_58 = param_4;
    func_0x000107c4e524(uVar4,param_2,&puStack_80);
    func_0x000107c61170(uStack_58);
  }
  func_0x000107c61170(param_4);
  return;
}


