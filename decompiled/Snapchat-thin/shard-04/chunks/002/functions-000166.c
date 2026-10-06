/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10325c2c4; end: 10325c2d7;  */

void FUN_10325c2c4(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11062c388;
  if (lRam0000000112f4f000 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112f4f000 = param_1;
  }
  return;
}



/* Entry: 10325c2d8; end: 10325c31b;  */

void FUN_10325c2d8(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 10325c31c; end: 10325c483;  */

int FUN_10325c31c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10325c398;
        goto LAB_10325c37c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10325c37c:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_10325c398:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10325c484; end: 10325c4c3;  */

void FUN_10325c484(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4f008 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba2114;
  func_0x000107c61520(&UNK_10dba2114,&UNK_11062c470);
  puRam0000000112f4f008 = puVar1;
  return;
}



/* Entry: 10325c4c4; end: 10325c4d7;  */

bool FUN_10325c4c4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10325c4d8; end: 10325c583;  */

void FUN_10325c4d8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10325c584; end: 10325c627;  */

void FUN_10325c584(uint param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = param_1;
  func_0x0001007f8afc();
  if (uVar1 == 0) {
    if ((param_1 & 1) == 0) {
      func_0x0001008522a8();
    }
    else {
      lVar2 = param_2;
      if (param_2 == 0) {
        lVar2 = 0;
        func_0x0001008cd514();
        func_0x000107c61180();
        if (lVar2 == 0) {
          return;
        }
      }
      func_0x000107c61174(param_2);
      func_0x000107c515a0(lVar2);
      func_0x000107c61170(lVar2);
    }
  }
  else {
    func_0x000100478f84();
  }
  return;
}



/* Entry: 10325c628; end: 10325c703;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10325c628(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar1 = auStack_50;
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112f4f010) = param_5;
  func_0x000107c61154(param_1,param_2,param_3,param_4,auStack_50,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c5a378();
  uVar2 = 0x706f72646b636162;
  func_0x000107c5fadc(0x706f72646b636162,0xe800000000000000);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  FUN_10325c72c();
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 10325c704; end: 10325c72b; +[_TtC16SCContextOperaUI12BackdropView layerClass] */

void FUN_10325c704(void)

{
  FUN_10325d780(0,0x112d57230,&PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 10325c72c; end: 10325d223;  */

/* WARNING: Possible PIC construction at 0x00010325c7fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325c848: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325c884: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325d004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325cacc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325cb14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325cb50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325cb8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325cbcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325cc08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325cc48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325cc84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325ccc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325ccfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325cd38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325cd74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325cdb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325cdec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325ce28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325ce60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325ce9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325c944: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325c988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325c9cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325ca08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325d05c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325d078: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325d0bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325d0f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325d130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325d1cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010325d134) */
/* WARNING: Removing unreachable block (ram,0x00010325d0f8) */
/* WARNING: Removing unreachable block (ram,0x00010325d0c0) */
/* WARNING: Removing unreachable block (ram,0x00010325d07c) */
/* WARNING: Removing unreachable block (ram,0x00010325d060) */
/* WARNING: Removing unreachable block (ram,0x00010325ca0c) */
/* WARNING: Removing unreachable block (ram,0x00010325c9d0) */
/* WARNING: Removing unreachable block (ram,0x00010325c98c) */
/* WARNING: Removing unreachable block (ram,0x00010325c948) */
/* WARNING: Removing unreachable block (ram,0x00010325cea0) */
/* WARNING: Removing unreachable block (ram,0x00010325ce64) */
/* WARNING: Removing unreachable block (ram,0x00010325ce2c) */
/* WARNING: Removing unreachable block (ram,0x00010325cdf0) */
/* WARNING: Removing unreachable block (ram,0x00010325cdb4) */
/* WARNING: Removing unreachable block (ram,0x00010325cd78) */
/* WARNING: Removing unreachable block (ram,0x00010325cd3c) */
/* WARNING: Removing unreachable block (ram,0x00010325cd00) */
/* WARNING: Removing unreachable block (ram,0x00010325ccc4) */
/* WARNING: Removing unreachable block (ram,0x00010325cc88) */
/* WARNING: Removing unreachable block (ram,0x00010325cc4c) */
/* WARNING: Removing unreachable block (ram,0x00010325cc0c) */
/* WARNING: Removing unreachable block (ram,0x00010325cbd0) */
/* WARNING: Removing unreachable block (ram,0x00010325cb90) */
/* WARNING: Removing unreachable block (ram,0x00010325cb54) */
/* WARNING: Removing unreachable block (ram,0x00010325cb18) */
/* WARNING: Removing unreachable block (ram,0x00010325cad0) */
/* WARNING: Removing unreachable block (ram,0x00010325d008) */
/* WARNING: Removing unreachable block (ram,0x00010325c888) */
/* WARNING: Removing unreachable block (ram,0x00010325cfdc) */
/* WARNING: Removing unreachable block (ram,0x00010325c84c) */
/* WARNING: Removing unreachable block (ram,0x00010325c800) */
/* WARNING: Removing unreachable block (ram,0x00010325d1d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10325c72c(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *unaff_x20;
  
  func_0x000107c49908();
  puVar2 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  func_0x000107c61168(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  puVar4 = puVar2;
  func_0x000107c6148c(puVar2,puVar3);
  if (puVar4 != (undefined *)0x0) {
    bVar1 = unaff_x20[_DAT_112f4f010];
    lVar5 = 0x112d38dc0;
    func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        func_0x000107c613fc();
        *(undefined8 *)(lVar5 + 0x18) = 4;
        *(undefined8 *)(lVar5 + 0x10) = 2;
        puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x000107c610f8(PTR__OBJC_CLASS___UIColor_1126aea70);
        func_0x000107c495c4(0,0);
        func_0x000107c3ab24();
        func_0x000107c61180();
      }
      else {
        func_0x000107c613fc();
        *(undefined8 *)(lVar5 + 0x18) = 0x20;
        *(undefined8 *)(lVar5 + 0x10) = 0x10;
        puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x000107c610f8(PTR__OBJC_CLASS___UIColor_1126aea70);
        func_0x000107c495c4(0,0);
        func_0x000107c3ab24();
        func_0x000107c61180();
      }
    }
    else if (bVar1 == 2) {
      func_0x000107c613fc();
      *(undefined8 *)(lVar5 + 0x18) = 6;
      *(undefined8 *)(lVar5 + 0x10) = 3;
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c610f8(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c495c4(0,0);
      func_0x000107c3ab24();
      func_0x000107c61180();
    }
    else {
      func_0x000107c613fc();
      *(undefined8 *)(lVar5 + 0x18) = 6;
      *(undefined8 *)(lVar5 + 0x10) = 3;
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c5af88();
      func_0x000107c61180();
      func_0x000107c3fdd0(0);
      func_0x000107c61180();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10325d224; end: 10325d237;  */

bool FUN_10325d224(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10325d238; end: 10325d2e3;  */

void FUN_10325d238(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10325d2e4; end: 10325d3eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10325d2e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_60 [16];
  
  puVar1 = auStack_60;
  func_0x000107c614f0();
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112f4f010) = 0;
  func_0x000107c61154(param_1,param_2,param_3,param_4,auStack_60,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c5a378();
  uVar2 = 0x706f72646b636162;
  func_0x000107c5fadc(0x706f72646b636162,0xe800000000000000);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  FUN_10325c72c();
  func_0x000107c61170(puVar1);
  func_0x000107c614f0();
  func_0x000107c61464();
  return puVar1;
}



/* Entry: 10325d3ec; end: 10325d40b; -[_TtC16SCContextOperaUI12BackdropView initWithFrame:] */

void FUN_10325d3ec(void)

{
  FUN_10325d2e4();
  return;
}



/* Entry: 10325d40c; end: 10325d4e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10325d40c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  *(undefined1 *)(unaff_x20 + _DAT_112f4f010) = param_5;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffffb0,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c5a378();
  uVar2 = 0x706f72646b636162;
  func_0x000107c5fadc(0x706f72646b636162,0xe800000000000000);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  FUN_10325c72c();
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 10325d4e8; end: 10325d53f; -[_TtC16SCContextOperaUI12BackdropView initWithCoder:] */

void FUN_10325d4e8(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCContextOperaUI/BackdropView.swift",0x23,2,0x44,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10325d540);
  (*pcVar1)();
}



/* Entry: 10325d540; end: 10325d583; -[_TtC16SCContextOperaUI12BackdropView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10325d540(void)

{
  return;
}



/* Entry: 10325d584; end: 10325d5b7;  */

void FUN_10325d584(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10325d5b8; end: 10325d5bb;  */

void FUN_10325d5b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4f018 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba2160;
  func_0x000107c61520(&UNK_10dba2160,&UNK_11062c538);
  puRam0000000112f4f018 = puVar1;
  return;
}



/* Entry: 10325d5bc; end: 10325d61b;  */

void FUN_10325d5bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4f018 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba2160;
  func_0x000107c61520(&UNK_10dba2160,&UNK_11062c538);
  puRam0000000112f4f018 = puVar1;
  return;
}



/* Entry: 10325d61c; end: 10325d77f;  */

int FUN_10325d61c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10325d698;
        goto LAB_10325d67c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10325d67c:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_10325d698:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10325d780; end: 10325d7bf;  */

void FUN_10325d780(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 10325d7c0; end: 10325d82f; -[_TtC16SCContextOperaUI25ContentMaskBackgroundView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10325d7c0(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f4f048);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCContextOperaUI/ContentMaskBackgroundView.swift",0x30,2,0x18,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10325d830);
  (*pcVar2)();
}



/* Entry: 10325d830; end: 10325d847; +[_TtC16SCContextOperaUI25ContentMaskBackgroundView layerClass] */

void FUN_10325d830(void)

{
  func_0x00010325db10(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 10325d848; end: 10325da67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10325d848(undefined8 param_1,undefined8 param_2,double param_3,double param_4)

{
  double *pdVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_layoutSubviews_112600e60);
  func_0x000107c3ec60();
  pdVar1 = (double *)(unaff_x20 + _DAT_112f4f048);
  if (((*(char *)(pdVar1 + 2) == '\x01') || (param_3 != *pdVar1)) || (param_4 != pdVar1[1])) {
    *pdVar1 = param_3;
    pdVar1[1] = param_4;
    *(undefined1 *)(pdVar1 + 2) = 0;
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    func_0x000107c453e4();
    if ((unaff_x20[_DAT_112f4f050] & 1) == 0) {
      func_0x000107c4d154(0,0,puVar2);
      func_0x000107c3d80c(0x4030000000000000,0x4030000000000000,0,0x4030000000000000,puVar2);
      func_0x000107c3d738(param_3 - 16.0,0x4030000000000000,puVar2);
      func_0x000107c3d80c(param_3,0,param_3,0x4030000000000000,puVar2);
      func_0x000107c3d738(param_3,param_4,puVar2);
      func_0x000107c3d738(0,param_4,puVar2);
      func_0x000107c3fc28(puVar2);
    }
    else {
      puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
      func_0x000107c61168(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
      func_0x000107c3e8a8(0,0x4030000000000000,param_3,param_4 - 16.0);
      func_0x000107c61180();
      func_0x000107c61170(puVar2);
      puVar2 = puVar3;
    }
    puVar3 = PTR__OBJC_CLASS___CATransaction_1126b5718;
    func_0x000107c61168(PTR__OBJC_CLASS___CATransaction_1126b5718);
    func_0x000107c3e740();
    func_0x000107c54144(puVar3);
    func_0x000107c4aba4();
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x000107c61168(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
    puVar5 = unaff_x20;
    func_0x000107c6148c(unaff_x20,puVar4);
    puVar4 = unaff_x20;
    if (puVar5 != (undefined *)0x0) {
      puVar4 = puVar2;
      func_0x000107c3ab30(puVar2);
      func_0x000107c61180();
      func_0x000107c57274(puVar5);
      func_0x000107c61170(unaff_x20);
    }
    func_0x000107c61170(puVar4);
    func_0x000107c3fe58(puVar3);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 10325da68; end: 10325da8f; -[_TtC16SCContextOperaUI25ContentMaskBackgroundView layoutSubviews] */

void FUN_10325da68(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10325d848();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10325da90; end: 10325db53; -[_TtC16SCContextOperaUI25ContentMaskBackgroundView initWithFrame:] */

void FUN_10325da90(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextOperaUI.ContentMaskBackgroundView",0x2a,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10325dabc);
  (*pcVar1)();
}



/* Entry: 10325db54; end: 10325dbd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10325db54(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112f4f088) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112f4f090,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f4f098) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f4f0a0) = param_1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10325dbd8; end: 10325dc5b; -[SCContextUnifiedPresentationAnimator initWithSwipeDirection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10325dbd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined1 *)(param_1 + _DAT_112f4f088) = 0;
  func_0x000107c61614(param_1 + _DAT_112f4f090,0);
  *(undefined8 *)(param_1 + _DAT_112f4f098) = 0;
  *(undefined8 *)(param_1 + _DAT_112f4f0a0) = param_3;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10325dc5c; end: 10325dc63; -[SCContextUnifiedPresentationAnimator transitionDuration:] */

undefined8 FUN_10325dc5c(void)

{
  return 0x3fd0000000000000;
}



/* Entry: 10325dc64; end: 10325debf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10325dc64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  
  ppuVar6 = &puStack_c0;
  ppuVar7 = &puStack_c0;
  lVar2 = param_5;
  func_0x000107c5ded8(param_5,param_6,*(undefined8 *)PTR__UITransitionContextFromViewKey_110345e50);
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = param_5;
    func_0x000107c403bc(param_5);
    func_0x000107c61180();
    func_0x000107c3ec60();
    uVar8 = param_1;
    uVar9 = param_2;
    uVar10 = param_3;
    uVar11 = param_4;
    func_0x000107c438d4(lVar2);
    if (*(long *)(unaff_x20 + _DAT_112f4f0a0) == 1) {
      func_0x000107c609cc(param_1,param_2,param_3,param_4);
      uVar8 = param_1;
    }
    else if (*(long *)(unaff_x20 + _DAT_112f4f0a0) == 0) {
      func_0x000107c609b0(param_1,param_2,param_3,param_4);
      uVar9 = param_1;
    }
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar5 = &UNK_11062c590;
    func_0x000107c613fc(&UNK_11062c590,0x38,7);
    *(long *)(puVar5 + 0x10) = lVar2;
    *(undefined8 *)(puVar5 + 0x18) = uVar8;
    *(undefined8 *)(puVar5 + 0x20) = uVar9;
    *(undefined8 *)(puVar5 + 0x28) = uVar10;
    *(undefined8 *)(puVar5 + 0x30) = uVar11;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_a0 = FUN_10325e4b4;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    puStack_b0 = &UNK_1000f6b44;
    puStack_a8 = &UNK_11062c5a8;
    puStack_98 = puVar5;
    func_0x000107c60bc4(&puStack_c0);
    puVar5 = puStack_98;
    func_0x000107c61174(lVar2);
    func_0x000107c61574(puVar5);
    puVar5 = &UNK_11062c5e0;
    func_0x000107c613fc(&UNK_11062c5e0,0x18,7);
    *(long *)(puVar5 + 0x10) = param_5;
    pcStack_a0 = FUN_10325e4d4;
    puStack_c0 = puVar1;
    uStack_b8 = 0x42000000;
    puStack_b0 = &UNK_100288f10;
    puStack_a8 = &UNK_11062c5f8;
    puStack_98 = puVar5;
    func_0x000107c60bc4(&puStack_c0);
    puVar5 = puStack_98;
    func_0x000107c615f0(param_5);
    func_0x000107c61574(puVar5);
    func_0x000107c3dcd0(0x3fd0000000000000,puVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar6);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s_completeTransition__1125ae898,0);
  return;
}



/* Entry: 10325dec0; end: 10325e1b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10325dec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  
  ppuVar7 = &puStack_c0;
  ppuVar8 = &puStack_c0;
  lVar2 = param_5;
  func_0x000107c5de84(param_5,param_6,
                      *(undefined8 *)PTR__UITransitionContextToViewControllerKey_110345e58);
  func_0x000107c61180();
  if (lVar2 == 0) {
LAB_10325dfd0:
                    /* WARNING: Could not recover jumptable at 0x00010bf43bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s_completeTransition__1125ae898,0);
    return;
  }
  lVar3 = param_5;
  func_0x000107c5ded8();
  func_0x000107c61180();
  if (lVar3 == 0) {
    func_0x000107c61170(lVar2);
    goto LAB_10325dfd0;
  }
  lVar4 = param_5;
  func_0x000107c403bc(param_5);
  func_0x000107c61180();
  func_0x000107c43538(param_5);
  uVar9 = param_1;
  uVar10 = param_1;
  if (*(long *)(unaff_x20 + _DAT_112f4f0a0) == 0) {
    uVar12 = param_1;
    func_0x000107c3ec60(lVar4);
    func_0x000107c609b0();
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    func_0x000107c609b0(param_1,param_2,param_3,param_4);
    uVar11 = 0;
  }
  else {
    if (*(long *)(unaff_x20 + _DAT_112f4f0a0) != 1) goto LAB_10325e058;
    uVar11 = param_1;
    func_0x000107c3ec60(lVar4);
    func_0x000107c609cc();
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    func_0x000107c609b0(param_1,param_2,param_3,param_4);
    uVar12 = 0;
  }
  func_0x000107c54b80(uVar11,uVar12,uVar9,uVar10,lVar3);
LAB_10325e058:
  func_0x000107c3d89c(lVar4);
  puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar6 = &UNK_11062c630;
  func_0x000107c613fc(&UNK_11062c630,0x38,7);
  *(long *)(puVar6 + 0x10) = lVar3;
  *(undefined8 *)(puVar6 + 0x18) = param_1;
  *(undefined8 *)(puVar6 + 0x20) = param_2;
  *(undefined8 *)(puVar6 + 0x28) = param_3;
  *(undefined8 *)(puVar6 + 0x30) = param_4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x10325e52c;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_1000f6b44;
  puStack_a8 = &UNK_11062c648;
  puStack_98 = puVar6;
  func_0x000107c60bc4(&puStack_c0);
  puVar6 = puStack_98;
  func_0x000107c61174(lVar3);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_11062c680;
  func_0x000107c613fc(&UNK_11062c680,0x18,7);
  *(long *)(puVar6 + 0x10) = param_5;
  uStack_a0 = 0x10325e510;
  puStack_c0 = puVar1;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_100288f10;
  puStack_a8 = &UNK_11062c698;
  puStack_98 = puVar6;
  func_0x000107c60bc4(&puStack_c0);
  puVar6 = puStack_98;
  func_0x000107c615f0(param_5);
  func_0x000107c61574(puVar6);
  func_0x000107c3dcd0(0x3fd0000000000000,puVar5);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 10325e1b8; end: 10325e223; -[SCContextUnifiedPresentationAnimator animateTransition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10325e1b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + _DAT_112f4f088);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  if (cVar1 == '\x01') {
    FUN_10325dc64();
  }
  else {
    FUN_10325dec0(param_3);
  }
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10325e224; end: 10325e2bb; -[SCContextUnifiedPresentationAnimator animationControllerForPresentedController:presentingController:sourceController:] */

void FUN_10325e224(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10325e3b4(param_3);
  func_0x000107c615f0();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10325e2bc; end: 10325e2cf; -[SCContextUnifiedPresentationAnimator animationControllerForDismissedController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10325e2bc(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112f4f088) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10325e2d0; end: 10325e31b; -[SCContextUnifiedPresentationAnimator handleSwipeDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10325e2d0(long param_1)

{
  param_1 = param_1 + _DAT_112f4f090;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c420a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10325e31c; end: 10325e37b; -[SCContextUnifiedPresentationAnimator init] */

void FUN_10325e31c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextOperaUI.UnifiedPresentationAnimator",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10325e348);
  (*pcVar1)();
}



/* Entry: 10325e37c; end: 10325e3b3; -[SCContextUnifiedPresentationAnimator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10325e37c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f4f090);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4f098));
  return;
}



/* Entry: 10325e3b4; end: 10325e493;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10325e3b4(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _DAT_112f4f088) = 0;
  func_0x000107c61604(unaff_x20 + _DAT_112f4f090,param_1);
  lVar1 = _DAT_112f4f098;
  if (*(long *)(unaff_x20 + _DAT_112f4f098) == 0) {
    puVar3 = PTR__OBJC_CLASS___UISwipeGestureRecognizer_1126b3870;
    func_0x000107c610f8();
    func_0x000107c48c2c();
    if ((*(long *)(unaff_x20 + _DAT_112f4f0a0) == 0) || (*(long *)(unaff_x20 + _DAT_112f4f0a0) == 1)
       ) {
      func_0x000107c54118(puVar3);
    }
    func_0x000107c5de64();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10325e494);
      (*pcVar2)();
    }
    func_0x000107c3d6fc();
    func_0x000107c61170(param_1);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61170(uVar4);
  }
  return;
}



/* Entry: 10325e494; end: 10325e4b3;  */

void FUN_10325e494(void)

{
  func_0x000107c61168(&PTR_PTR_1128c3aa8);
  return;
}



/* Entry: 10325e4b4; end: 10325e4d3;  */

void FUN_10325e4b4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
             *(undefined8 *)(unaff_x20 + 0x10),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 10325e4d4; end: 10325e4ff;  */

void FUN_10325e4d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = uVar2;
  func_0x000107c5cf60(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf43bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_completeTransition__1125ae898,(uint)uVar1 ^ 1);
  return;
}



/* Entry: 10325e500; end: 10325e52f;  */

void FUN_10325e500(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
             *(undefined8 *)(unaff_x20 + 0x10),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 10325e530; end: 10325e8e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10325e530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  
  puVar6 = &stack0xffffffffffffff70;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f4f0d0) = 0x3fc999999999999a;
  lVar1 = _DAT_112f4f0d8;
  lVar2 = 0;
  func_0x00010325d5fc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_112f4f010) = 3;
  plVar4 = &lStack_80;
  lStack_80 = lVar3;
  lStack_78 = lVar2;
  func_0x000107c61154(0,0,0,0,plVar4,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c5a378();
  uVar5 = 0x706f72646b636162;
  func_0x000107c5fadc(0x706f72646b636162,0xe800000000000000);
  func_0x000107c520f4(plVar4);
  func_0x000107c61170(plVar4);
  func_0x000107c61170(uVar5);
  FUN_10325c72c();
  func_0x000107c61170(plVar4);
  *(long **)(unaff_x20 + lVar1) = plVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112f4f0e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f4f0e8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f4f0f0) = 0;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff70,
                      PTR_s_initWithFrame__1125e2948);
  lVar1 = _DAT_112f4f0d8;
  uVar5 = *(undefined8 *)(puVar6 + _DAT_112f4f0d8);
  puVar7 = puVar6;
  func_0x000107c61174();
  func_0x000107c5a050(uVar5);
  func_0x000107c61174(puVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c3d89c();
  puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar9 = puVar8;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar9 + 0x18) = 9;
  *(undefined8 *)(puVar9 + 0x10) = 4;
  uVar10 = *(undefined8 *)(puVar6 + lVar1);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar11 = puVar7;
  func_0x000107c5cbe4(puVar7);
  func_0x000107c61180();
  uVar5 = uVar10;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar11);
  *(undefined8 *)(puVar9 + 0x20) = uVar5;
  uVar10 = *(undefined8 *)(puVar6 + lVar1);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar11 = puVar7;
  func_0x000107c3ec1c(puVar7);
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  uVar5 = uVar10;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar11);
  *(undefined8 *)(puVar9 + 0x28) = uVar5;
  uVar10 = *(undefined8 *)(puVar6 + lVar1);
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar11 = puVar7;
  func_0x000107c4acb0(puVar7);
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  uVar5 = uVar10;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar11);
  *(undefined8 *)(puVar9 + 0x30) = uVar5;
  uVar10 = *(undefined8 *)(puVar6 + lVar1);
  func_0x000107c5e308();
  func_0x000107c61180();
  puVar11 = puVar7;
  func_0x000107c5e308(puVar7);
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  uVar5 = uVar10;
  func_0x000107c40288(0x4000000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar11);
  *(undefined8 *)(puVar9 + 0x38) = uVar5;
  uVar5 = 0;
  func_0x000100847984(0);
  puVar12 = puVar9;
  func_0x000107c5fc48(puVar9,uVar5);
  func_0x000107c61574(puVar9);
  func_0x000107c3d048(puVar8);
  func_0x000107c61170(puVar12);
  func_0x000107c526c0(0,puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar7);
  return puVar7;
}



/* Entry: 10325e8e4; end: 10325e903; -[SCContextHintOverlayContainer initWithFrame:] */

void FUN_10325e8e4(void)

{
  FUN_10325e530();
  return;
}



/* Entry: 10325e904; end: 10325e92b; -[SCContextHintOverlayContainer initWithCoder:] */

void FUN_10325e904(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_10325ef88();
  return;
}



/* Entry: 10325e92c; end: 10325ecc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10325e92c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  ppuVar14 = &puStack_90;
  lVar1 = *(long *)(unaff_x20 + _DAT_112f4f0e8);
  if (lVar1 != 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112f4f0f0) = 1;
    func_0x000107c61174();
    lVar2 = lVar1;
    func_0x00010440ea3c();
    lVar3 = lVar2;
    func_0x00010440eae4();
    lVar4 = 0;
    FUN_10325f680();
    lVar5 = lVar4;
    func_0x000107c610f8();
    lVar10 = _DAT_112f4f120;
    puVar6 = PTR_PTR_1126aea58;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar5 + lVar10) = puVar6;
    *(undefined8 *)(lVar5 + _DAT_112f4f128) = 0;
    plVar7 = &lStack_60;
    lStack_60 = lVar5;
    lStack_58 = lVar4;
    func_0x000107c61154(0,0,0,0,plVar7,PTR_s_initWithFrame__1125e2948);
    func_0x000107c61180();
    FUN_10325f168(lVar2,param_2,lVar3);
    func_0x000107c61170(plVar7);
    func_0x000107c6142c(param_2);
    func_0x000107c61170(lVar3);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c3d89c();
    func_0x000107c5a050(plVar7);
    puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168();
    puVar8 = puVar6;
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(puVar8 + 0x18) = 7;
    *(undefined8 *)(puVar8 + 0x10) = 3;
    plVar9 = plVar7;
    func_0x000107c3f764();
    func_0x000107c61180();
    lVar10 = unaff_x20;
    func_0x000107c3f764();
    func_0x000107c61180();
    plVar11 = plVar9;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(plVar9);
    func_0x000107c61170(lVar10);
    *(long **)(puVar8 + 0x20) = plVar11;
    plVar9 = plVar7;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(plVar7);
    lVar10 = unaff_x20;
    func_0x000107c4acb0();
    func_0x000107c61180();
    plVar11 = plVar9;
    func_0x000107c40294();
    func_0x000107c61180();
    func_0x000107c61170(plVar9);
    func_0x000107c61170(lVar10);
    *(long **)(puVar8 + 0x28) = plVar11;
    plVar9 = plVar7;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(plVar7);
    lVar10 = unaff_x20;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    plVar11 = plVar9;
    func_0x000107c40284(0xc032000000000000);
    func_0x000107c61180();
    func_0x000107c61170(plVar9);
    func_0x000107c61170(lVar10);
    *(long **)(puVar8 + 0x30) = plVar11;
    uVar12 = 0;
    func_0x000100847984(0);
    puVar13 = puVar8;
    func_0x000107c5fc48(puVar8,uVar12);
    func_0x000107c61574(puVar8);
    func_0x000107c3d048(puVar6);
    func_0x000107c61170(puVar13);
    uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f4f0e0);
    *(long **)(unaff_x20 + _DAT_112f4f0e0) = plVar7;
    func_0x000107c61174(plVar7);
    func_0x000107c61170(uVar12);
    puVar8 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar6 = &UNK_11062c6d0;
    func_0x000107c613fc(&UNK_11062c6d0,0x18,7);
    *(long *)(puVar6 + 0x10) = unaff_x20;
    pcStack_70 = FUN_10325ef34;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_11062c6e8;
    puStack_68 = puVar6;
    func_0x000107c60bc4(&puStack_90);
    puVar6 = puStack_68;
    func_0x000107c61174();
    func_0x000107c61574(puVar6);
    func_0x000107c3dccc(0x3fc999999999999a,puVar8);
    func_0x000107c60bd0(ppuVar14);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(plVar7);
  }
  return;
}



/* Entry: 10325ecc4; end: 10325eceb; -[SCContextHintOverlayContainer show] */

void FUN_10325ecc4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10325e92c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10325ecec; end: 10325ee67; -[SCContextHintOverlayContainer hide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10325ecec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  *(undefined1 *)(param_1 + _DAT_112f4f0f0) = 0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar2 = &UNK_11062c720;
  func_0x000107c613fc(&UNK_11062c720,0x18,7);
  *(long *)(puVar2 + 0x10) = param_1;
  uStack_40 = 0x10325f0d8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11062c738;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61574(puVar2);
  func_0x000107c3dccc(0x3fc999999999999a,puVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10325ee68; end: 10325eeb7; -[SCContextHintOverlayContainer setupHintWith:] */

/* WARNING: Possible PIC construction at 0x00010325eea0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010325eea4) */

void FUN_10325ee68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010325edd0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10325eeb8; end: 10325eeeb;  */

void FUN_10325eeb8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10325eeec; end: 10325ef33; -[SCContextHintOverlayContainer .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010325ef08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010325ef0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10325eeec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4f0d8));
  return;
}



/* Entry: 10325ef34; end: 10325ef67;  */

void FUN_10325ef34(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(unaff_x20 + 0x10),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10325ef68; end: 10325ef87;  */

void FUN_10325ef68(void)

{
  func_0x000107c61168(&PTR_PTR_1128c3b80);
  return;
}



/* Entry: 10325ef88; end: 10325f0d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10325ef88(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  *(undefined8 *)(unaff_x20 + _DAT_112f4f0d0) = 0x3fc999999999999a;
  lVar1 = _DAT_112f4f0d8;
  lVar3 = 0;
  func_0x00010325d5fc();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined1 *)(lVar4 + _DAT_112f4f010) = 3;
  plVar5 = &lStack_40;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  func_0x000107c61154(0,0,0,0,plVar5,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c5a378();
  uVar6 = 0x706f72646b636162;
  func_0x000107c5fadc(0x706f72646b636162,0xe800000000000000);
  func_0x000107c520f4(plVar5);
  func_0x000107c61170(plVar5);
  func_0x000107c61170(uVar6);
  FUN_10325c72c();
  func_0x000107c61170(plVar5);
  *(long **)(unaff_x20 + lVar1) = plVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112f4f0e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f4f0e8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f4f0f0) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCContextOperaUI/HintOverlayContainer.swift",0x2b,2,0x25,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10325f0d4);
  (*pcVar2)();
}



/* Entry: 10325f0d4; end: 10325f0df;  */

void FUN_10325f0d4(long param_1,long param_2)

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



/* Entry: 10325f0e0; end: 10325f167; -[_TtC16SCContextOperaUI8HintView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10325f0e0(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  
  lVar1 = _DAT_112f4f120;
  puVar3 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar3;
  *(undefined8 *)(param_1 + _DAT_112f4f128) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCContextOperaUI/HintView.swift",0x1f,2,0x1c,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10325f168);
  (*pcVar2)();
}



/* Entry: 10325f168; end: 10325f5eb;  */

/* WARNING: Possible PIC construction at 0x00010325f1cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325f220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325f2d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325f320: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325f334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325f350: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325f370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325f384: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325f3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325f420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325f440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325f474: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325f49c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325f4d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325f4f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325f52c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325f554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325f588: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325f5c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010325f58c) */
/* WARNING: Removing unreachable block (ram,0x00010325f558) */
/* WARNING: Removing unreachable block (ram,0x00010325f530) */
/* WARNING: Removing unreachable block (ram,0x00010325f4fc) */
/* WARNING: Removing unreachable block (ram,0x00010325f4d4) */
/* WARNING: Removing unreachable block (ram,0x00010325f4a0) */
/* WARNING: Removing unreachable block (ram,0x00010325f478) */
/* WARNING: Removing unreachable block (ram,0x00010325f444) */
/* WARNING: Removing unreachable block (ram,0x00010325f424) */
/* WARNING: Removing unreachable block (ram,0x00010325f388) */
/* WARNING: Removing unreachable block (ram,0x00010325f374) */
/* WARNING: Removing unreachable block (ram,0x00010325f354) */
/* WARNING: Removing unreachable block (ram,0x00010325f338) */
/* WARNING: Removing unreachable block (ram,0x00010325f324) */
/* WARNING: Removing unreachable block (ram,0x00010325f2d4) */
/* WARNING: Removing unreachable block (ram,0x00010325f224) */
/* WARNING: Removing unreachable block (ram,0x00010325f3a4) */
/* WARNING: Removing unreachable block (ram,0x00010325f298) */
/* WARNING: Removing unreachable block (ram,0x00010325f1d0) */
/* WARNING: Removing unreachable block (ram,0x00010325f5cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10325f168(void)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f4f120);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10325f5ec; end: 10325f647; -[_TtC16SCContextOperaUI8HintView initWithFrame:] */

void FUN_10325f5ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextOperaUI.HintView",0x19,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10325f618);
  (*pcVar1)();
}



/* Entry: 10325f648; end: 10325f67f; -[_TtC16SCContextOperaUI8HintView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010325f664: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010325f668) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10325f648(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4f120));
  return;
}



/* Entry: 10325f680; end: 10325f73f;  */

void FUN_10325f680(void)

{
  func_0x000107c61168(&PTR_PTR_1128c3c58);
  return;
}



/* Entry: 10325f740; end: 10325f753;  */

bool FUN_10325f740(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10325f754; end: 10325f7ff;  */

void FUN_10325f754(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10325f800; end: 10325f89b; -[SCContextTrayBackgroundView initWithFrame:] */

ulong FUN_10325f800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar1 = param_5;
  func_0x000107c614f0();
  uVar2 = uVar1;
  func_0x0001008522a8();
  func_0x000107c610f8(uVar1);
  uVar3 = (ulong)((uint)uVar2 ^ 1);
  FUN_10325f8fc(param_1,param_2,param_3,param_4,uVar3);
  uVar1 = param_5;
  func_0x000107c614f0(param_5);
  func_0x000107c61464(param_5,uVar1,0x12,7);
  return uVar3;
}



/* Entry: 10325f89c; end: 10325f8fb;  */

void FUN_10325f89c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c610f8();
  FUN_10325f8fc(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 10325f8fc; end: 10325fd63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10325f8fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             char param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffff80;
  func_0x000107c614f0();
  lVar1 = _DAT_112f4f160;
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined1 *)(unaff_x20 + _DAT_112f4f158) = 1;
  *(char *)(unaff_x20 + _DAT_112f4f168) = param_5;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff80,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  uVar5 = 0x79617274;
  func_0x000107c5fadc(0x79617274,0xe400000000000000);
  func_0x000107c520f4(puVar4);
  func_0x000107c61170(uVar5);
  if (param_5 == '\x01') {
    if (lRam0000000112f4f170 != -1) {
      func_0x000107c61568(0x112f4f170,0x10325f6a0);
    }
  }
  else if (lRam0000000112f4f178 != -1) {
    func_0x000107c61568(0x112f4f178,0x10325f6d8);
  }
  func_0x000107c52b50(puVar4);
  puVar6 = puVar4;
  func_0x000107c4aba4(puVar4);
  func_0x000107c61180();
  func_0x000107c562f8();
  func_0x000107c61170(puVar6);
  puVar6 = puVar4;
  func_0x000107c4aba4(puVar4);
  func_0x000107c61180();
  func_0x000107c539d4(0x402a000000000000);
  func_0x000107c61170(puVar6);
  lVar1 = _DAT_112f4f160;
  uVar5 = *(undefined8 *)(puVar4 + _DAT_112f4f160);
  func_0x000107c4aba4(uVar5);
  func_0x000107c61180();
  func_0x000107c539d4(0x4004000000000000);
  func_0x000107c61170(uVar5);
  lVar2 = lRam0000000112f4f180;
  uVar5 = *(undefined8 *)(puVar4 + lVar1);
  func_0x000107c61174(uVar5);
  if (lVar2 != -1) {
    func_0x000107c61568(0x112f4f180,0x10325f70c);
  }
  func_0x000107c52b50();
  func_0x000107c61170(uVar5);
  func_0x000107c5a050(*(undefined8 *)(puVar4 + lVar1));
  uVar5 = *(undefined8 *)(puVar4 + lVar1);
  func_0x000107c61174(uVar5);
  uVar7 = 0x6e61685f79617274;
  func_0x000107c5fadc(0x6e61685f79617274,0xeb00000000656c64);
  func_0x000107c520f4(uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c3d89c(puVar4);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar8 = puVar3;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar8 + 0x18) = 9;
  *(undefined8 *)(puVar8 + 0x10) = 4;
  uVar7 = *(undefined8 *)(puVar4 + lVar1);
  func_0x000107c5e308();
  func_0x000107c61180();
  uVar5 = uVar7;
  func_0x000107c40290(0x4042000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  *(undefined8 *)(puVar8 + 0x20) = uVar5;
  uVar7 = *(undefined8 *)(puVar4 + lVar1);
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar5 = uVar7;
  func_0x000107c40290(0x4014000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  *(undefined8 *)(puVar8 + 0x28) = uVar5;
  uVar7 = *(undefined8 *)(puVar4 + lVar1);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar6 = puVar4;
  func_0x000107c5cbe4(puVar4);
  func_0x000107c61180();
  uVar5 = uVar7;
  func_0x000107c40284(0x4020000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar6);
  *(undefined8 *)(puVar8 + 0x30) = uVar5;
  uVar7 = *(undefined8 *)(puVar4 + lVar1);
  func_0x000107c3f75c();
  func_0x000107c61180();
  puVar6 = puVar4;
  func_0x000107c3f75c(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  uVar5 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar6);
  *(undefined8 *)(puVar8 + 0x38) = uVar5;
  uVar5 = 0;
  func_0x000100847984(0);
  puVar9 = puVar8;
  func_0x000107c5fc48(puVar8,uVar5);
  func_0x000107c61574(puVar8);
  func_0x000107c3d048(puVar3);
  func_0x000107c61170(puVar9);
  puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  func_0x000107c610f8(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x000107c453e4();
  func_0x000107c3d6fc(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  return puVar4;
}



/* Entry: 10325fd64; end: 10325fdef; -[SCContextTrayBackgroundView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10325fd64(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  
  lVar1 = _DAT_112f4f160;
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar3;
  *(undefined1 *)(param_1 + _DAT_112f4f158) = 1;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCContextOperaUI/TrayBackgroundView.swift",0x29,2,0x5f,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10325fdf0);
  (*pcVar2)();
}



/* Entry: 10325fdf0; end: 10325fe23;  */

void FUN_10325fdf0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10325fe24; end: 10325fe37; -[SCContextTrayBackgroundView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10325fe24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4f160));
  return;
}



/* Entry: 10325fe38; end: 10325fe97;  */

void FUN_10325fe38(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4f188 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba2260;
  func_0x000107c61520(&UNK_10dba2260,&UNK_11062c7e0);
  puRam0000000112f4f188 = puVar1;
  return;
}



/* Entry: 10325fe98; end: 10325fffb;  */

int FUN_10325fe98(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10325ff14;
        goto LAB_10325fef8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10325fef8:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10325ff14:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10325fffc; end: 10326003f;  */

long FUN_10325fffc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103260040; end: 1032600af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103260040(undefined8 param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar1 = auStack_40;
  func_0x000107c610f8();
  FUN_10325fffc(param_1,unaff_x20 + _DAT_112f4f1b8);
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 1032600b0; end: 10326010f; -[SCContextActionItemsRendererPlugIn init] */

void FUN_1032600b0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextActionItemsRendererPlugInScope.ActionItemsRendererPlugInContainer",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032600dc);
  (*pcVar1)();
}



/* Entry: 103260110; end: 10326012f; -[SCContextActionItemsRendererPlugIn .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103260110(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_112f4f1b8))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f4f1b8));
  return;
}



/* Entry: 103260130; end: 10326014f;  */

void FUN_103260130(void)

{
  func_0x000107c61168(&PTR_PTR_1128c3e10);
  return;
}



/* Entry: 103260150; end: 1032602c7;  */

int FUN_103260150(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf6 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 9) {
      iVar2 = 4;
    }
    if (param_2 + 9 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1032601cc;
        goto LAB_1032601b0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1032601b0:
      return ((uint)*param_1 | uVar1 << 8) - 9;
    }
  }
LAB_1032601cc:
  iVar2 = *param_1 - 10;
  if (*param_1 < 10) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1032602c8; end: 103260373;  */

void FUN_1032602c8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103260374; end: 103260377;  */

void FUN_103260374(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4f1e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba23d0;
  func_0x000107c61520(&UNK_10dba23d0,&UNK_11062c9f8);
  puRam0000000112f4f1e8 = puVar1;
  return;
}



/* Entry: 103260378; end: 1032603b7;  */

void FUN_103260378(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4f1e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba23d0;
  func_0x000107c61520(&UNK_10dba23d0,&UNK_11062c9f8);
  puRam0000000112f4f1e8 = puVar1;
  return;
}



/* Entry: 1032603b8; end: 10326052f;  */

int FUN_1032603b8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103260434;
        goto LAB_103260418;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103260418:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103260434:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103260530; end: 1032605db;  */

void FUN_103260530(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1032605dc; end: 1032605df;  */

void FUN_1032605dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4f1f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba2460;
  func_0x000107c61520(&UNK_10dba2460,&UNK_11062cac0);
  puRam0000000112f4f1f0 = puVar1;
  return;
}



/* Entry: 1032605e0; end: 10326061f;  */

void FUN_1032605e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4f1f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba2460;
  func_0x000107c61520(&UNK_10dba2460,&UNK_11062cac0);
  puRam0000000112f4f1f0 = puVar1;
  return;
}



/* Entry: 103260620; end: 103260783;  */

int FUN_103260620(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf9 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 6) {
      iVar2 = 4;
    }
    if (param_2 + 6 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10326069c;
        goto LAB_103260680;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103260680:
      return ((uint)*param_1 | uVar1 << 8) - 6;
    }
  }
LAB_10326069c:
  iVar2 = *param_1 - 7;
  if (*param_1 < 7) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103260784; end: 1032607d3;  */

void FUN_103260784(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIViewController_1126af898;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIViewController_1126af898);
  func_0x000107c453e4();
  func_0x000107c5a568();
  func_0x000107c3e2c0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1032607d4; end: 10326085f;  */

void FUN_1032607d4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f4f230;
  func_0x0001000285a8(0x112f4f230,&UNK_10dba2530);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103260860; end: 1032608c3;  */

void FUN_103260860(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_103261000();
  lVar1 = param_2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_11062cb08;
  *param_1 = lVar1;
  return;
}



/* Entry: 1032608c4; end: 1032608cb;  */

void FUN_1032608c4(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_103261000();
  lVar1 = unaff_x20;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = unaff_x20;
  param_1[4] = (long)&PTR_DAT_11062cb08;
  *param_1 = lVar1;
  return;
}



/* Entry: 1032608cc; end: 1032608fb;  */

void FUN_1032608cc(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1032608fc; end: 103260a33;  */

undefined * FUN_1032608fc(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 uStack_a1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long alStack_78 [5];
  
  lVar6 = 0;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uStack_a1 = *(undefined1 *)(lVar6 + 0x112f4f220);
    func_0x00010008a7c8(alStack_78,&uStack_a1);
    lVar2 = alStack_78[0];
    if (alStack_78[0] == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
      uStack_80 = 0;
LAB_103260944:
      FUN_103260a34(&uStack_a0);
    }
    else {
      func_0x000100083b20(&uStack_a0);
      func_0x000107c61574(lVar2);
      if (lStack_88 == 0) goto LAB_103260944;
      FUN_103260a7c(&uStack_a0,alStack_78);
      puVar3 = puVar5;
      func_0x000107c61558();
      puVar4 = puVar5;
      if (((ulong)puVar3 & 1) == 0) {
        puVar4 = (undefined *)0x0;
        FUN_103260b9c(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
      }
      uVar1 = *(ulong *)(puVar4 + 0x10);
      puVar5 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
        FUN_103260b9c(puVar5,uVar1 + 1,1,puVar4);
      }
      *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
      FUN_103260a7c(alStack_78,puVar5 + uVar1 * 0x28 + 0x20);
    }
    lVar6 = lVar6 + 1;
    if (lVar6 == 10) {
      return puVar5;
    }
  } while( true );
}



/* Entry: 103260a34; end: 103260a7b;  */

undefined8 FUN_103260a34(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f4f240;
  func_0x0001000285a8(0x112f4f240,&UNK_10dba2540);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103260a7c; end: 103260a93;  */

undefined8 * FUN_103260a7c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103260a94; end: 103260ab7;  */

void FUN_103260a94(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103260ab8; end: 103260b9b;  */

void FUN_103260ab8(void)

{
  FUN_1032608fc();
  return;
}



/* Entry: 103260b9c; end: 103260cdf;  */

undefined * FUN_103260b9c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103260ce0);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112f4b2e8;
    func_0x0001000285a8(0x112f4b2e8,&UNK_10db9a7c0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112f4b2f0;
    func_0x0001000285a8(0x112f4b2f0,&UNK_10db9a7c8);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 103260ce0; end: 103260ce3;  */

void FUN_103260ce0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4f288 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba2550;
  func_0x000107c61520(&UNK_10dba2550,&UNK_11062cb98);
  puRam0000000112f4f288 = puVar1;
  return;
}



/* Entry: 103260ce4; end: 103260d4f;  */

void FUN_103260ce4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4f288 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba2550;
  func_0x000107c61520(&UNK_10dba2550,&UNK_11062cb98);
  puRam0000000112f4f288 = puVar1;
  return;
}



/* Entry: 103260d50; end: 103260d53;  */

void FUN_103260d50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4f2a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba2608;
  func_0x000107c61520(&UNK_10dba2608,&UNK_11062c950);
  puRam0000000112f4f2a0 = puVar1;
  return;
}



/* Entry: 103260d54; end: 103260dbf;  */

void FUN_103260d54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4f2a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba2608;
  func_0x000107c61520(&UNK_10dba2608,&UNK_11062c950);
  puRam0000000112f4f2a0 = puVar1;
  return;
}


