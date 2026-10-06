/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1036e3f64; end: 1036e40c7;  */

int FUN_1036e3f64(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1036e3fe0;
        goto LAB_1036e3fc4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1036e3fc4:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_1036e3fe0:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1036e40c8; end: 1036e4147;  */

undefined8 FUN_1036e40c8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1036e4148; end: 1036e4187;  */

/* WARNING: Possible PIC construction at 0x0001036e42c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4360: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e43b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4480: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e44bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4670: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e46ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e47dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e48c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4934: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e496c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e49a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e49dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4a18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4aa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4ae8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4b4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4b60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4b70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4b80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036e4b74) */
/* WARNING: Removing unreachable block (ram,0x0001036e4b64) */
/* WARNING: Removing unreachable block (ram,0x0001036e4b50) */
/* WARNING: Removing unreachable block (ram,0x0001036e4aec) */
/* WARNING: Removing unreachable block (ram,0x0001036e4aac) */
/* WARNING: Removing unreachable block (ram,0x0001036e4a1c) */
/* WARNING: Removing unreachable block (ram,0x0001036e49e0) */
/* WARNING: Removing unreachable block (ram,0x0001036e49a8) */
/* WARNING: Removing unreachable block (ram,0x0001036e4970) */
/* WARNING: Removing unreachable block (ram,0x0001036e4938) */
/* WARNING: Removing unreachable block (ram,0x0001036e48c8) */
/* WARNING: Removing unreachable block (ram,0x0001036e487c) */
/* WARNING: Removing unreachable block (ram,0x0001036e47e0) */
/* WARNING: Removing unreachable block (ram,0x0001036e46b0) */
/* WARNING: Removing unreachable block (ram,0x0001036e46bc) */
/* WARNING: Removing unreachable block (ram,0x0001036e46e4) */
/* WARNING: Removing unreachable block (ram,0x0001036e46ec) */
/* WARNING: Removing unreachable block (ram,0x0001036e4bb4) */
/* WARNING: Removing unreachable block (ram,0x0001036e46f4) */
/* WARNING: Removing unreachable block (ram,0x0001036e4708) */
/* WARNING: Removing unreachable block (ram,0x0001036e4674) */
/* WARNING: Removing unreachable block (ram,0x0001036e44c0) */
/* WARNING: Removing unreachable block (ram,0x0001036e4bc0) */
/* WARNING: Removing unreachable block (ram,0x0001036e4508) */
/* WARNING: Removing unreachable block (ram,0x0001036e4bec) */
/* WARNING: Removing unreachable block (ram,0x0001036e4538) */
/* WARNING: Removing unreachable block (ram,0x0001036e4c18) */
/* WARNING: Removing unreachable block (ram,0x0001036e4568) */
/* WARNING: Removing unreachable block (ram,0x0001036e4c40) */
/* WARNING: Removing unreachable block (ram,0x0001036e459c) */
/* WARNING: Removing unreachable block (ram,0x0001036e4c6c) */
/* WARNING: Removing unreachable block (ram,0x0001036e45cc) */
/* WARNING: Removing unreachable block (ram,0x0001036e4c98) */
/* WARNING: Removing unreachable block (ram,0x0001036e4600) */
/* WARNING: Removing unreachable block (ram,0x0001036e4cc0) */
/* WARNING: Removing unreachable block (ram,0x0001036e4630) */
/* WARNING: Removing unreachable block (ram,0x0001036e4484) */
/* WARNING: Removing unreachable block (ram,0x0001036e4444) */
/* WARNING: Removing unreachable block (ram,0x0001036e4404) */
/* WARNING: Removing unreachable block (ram,0x0001036e43b4) */
/* WARNING: Removing unreachable block (ram,0x0001036e4364) */
/* WARNING: Removing unreachable block (ram,0x0001036e431c) */
/* WARNING: Removing unreachable block (ram,0x0001036e42c4) */
/* WARNING: Removing unreachable block (ram,0x0001036e4b84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e4148(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112f885b0) = 0x4000000000000000;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f885b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f885c0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  if (*(long *)(unaff_x20 + _DAT_112f885c8) != 0) {
    func_0x000107c4ff30();
  }
  if (*(long *)(unaff_x20 + _DAT_112f885d0) != 0) {
    func_0x000107c4ff30();
  }
  if (*(long *)(unaff_x20 + _DAT_112f885e0) != 0) {
    func_0x000107c4ff30();
  }
  if (*(long *)(unaff_x20 + _DAT_112f885d8) != 0) {
    func_0x000107c4ff30();
  }
  func_0x000107c610f8(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  func_0x000107c453e4();
  func_0x000107c5a0f8();
  lVar2 = 0x112d38dc0;
  func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 0xe;
  *(undefined8 *)(lVar2 + 0x10) = 7;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c482a8(0x3fef9f9f9f9f9fa0,0x3fe8d8d8d8d8d8d9,0x3fe9f9f9f9f9f9fa,0x3ff0000000000000);
  func_0x000107c3ab24();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1036e4188; end: 1036e4ceb;  */

/* WARNING: Possible PIC construction at 0x0001036e42c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4360: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e43b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4480: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e44bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4670: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e46ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e47dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e48c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4934: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e496c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e49a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e49dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4a18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4aa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4ae8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4b4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4b60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4b70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4b80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036e4b74) */
/* WARNING: Removing unreachable block (ram,0x0001036e4b64) */
/* WARNING: Removing unreachable block (ram,0x0001036e4b50) */
/* WARNING: Removing unreachable block (ram,0x0001036e4aec) */
/* WARNING: Removing unreachable block (ram,0x0001036e4aac) */
/* WARNING: Removing unreachable block (ram,0x0001036e4a1c) */
/* WARNING: Removing unreachable block (ram,0x0001036e49e0) */
/* WARNING: Removing unreachable block (ram,0x0001036e49a8) */
/* WARNING: Removing unreachable block (ram,0x0001036e4970) */
/* WARNING: Removing unreachable block (ram,0x0001036e4938) */
/* WARNING: Removing unreachable block (ram,0x0001036e48c8) */
/* WARNING: Removing unreachable block (ram,0x0001036e487c) */
/* WARNING: Removing unreachable block (ram,0x0001036e47e0) */
/* WARNING: Removing unreachable block (ram,0x0001036e46b0) */
/* WARNING: Removing unreachable block (ram,0x0001036e46bc) */
/* WARNING: Removing unreachable block (ram,0x0001036e46e4) */
/* WARNING: Removing unreachable block (ram,0x0001036e46ec) */
/* WARNING: Removing unreachable block (ram,0x0001036e4bb4) */
/* WARNING: Removing unreachable block (ram,0x0001036e46f4) */
/* WARNING: Removing unreachable block (ram,0x0001036e4708) */
/* WARNING: Removing unreachable block (ram,0x0001036e4674) */
/* WARNING: Removing unreachable block (ram,0x0001036e44c0) */
/* WARNING: Removing unreachable block (ram,0x0001036e4bc0) */
/* WARNING: Removing unreachable block (ram,0x0001036e4508) */
/* WARNING: Removing unreachable block (ram,0x0001036e4bec) */
/* WARNING: Removing unreachable block (ram,0x0001036e4538) */
/* WARNING: Removing unreachable block (ram,0x0001036e4c18) */
/* WARNING: Removing unreachable block (ram,0x0001036e4568) */
/* WARNING: Removing unreachable block (ram,0x0001036e4c40) */
/* WARNING: Removing unreachable block (ram,0x0001036e459c) */
/* WARNING: Removing unreachable block (ram,0x0001036e4c6c) */
/* WARNING: Removing unreachable block (ram,0x0001036e45cc) */
/* WARNING: Removing unreachable block (ram,0x0001036e4c98) */
/* WARNING: Removing unreachable block (ram,0x0001036e4600) */
/* WARNING: Removing unreachable block (ram,0x0001036e4cc0) */
/* WARNING: Removing unreachable block (ram,0x0001036e4630) */
/* WARNING: Removing unreachable block (ram,0x0001036e4484) */
/* WARNING: Removing unreachable block (ram,0x0001036e4444) */
/* WARNING: Removing unreachable block (ram,0x0001036e4404) */
/* WARNING: Removing unreachable block (ram,0x0001036e43b4) */
/* WARNING: Removing unreachable block (ram,0x0001036e4364) */
/* WARNING: Removing unreachable block (ram,0x0001036e431c) */
/* WARNING: Removing unreachable block (ram,0x0001036e42c4) */
/* WARNING: Removing unreachable block (ram,0x0001036e4b84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e4188(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112f885c8) != 0) {
    func_0x000107c4ff30();
  }
  if (*(long *)(unaff_x20 + _DAT_112f885d0) != 0) {
    func_0x000107c4ff30();
  }
  if (*(long *)(unaff_x20 + _DAT_112f885e0) != 0) {
    func_0x000107c4ff30();
  }
  if (*(long *)(unaff_x20 + _DAT_112f885d8) != 0) {
    func_0x000107c4ff30();
  }
  func_0x000107c610f8(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  func_0x000107c453e4();
  func_0x000107c5a0f8();
  lVar1 = 0x112d38dc0;
  func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0xe;
  *(undefined8 *)(lVar1 + 0x10) = 7;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c482a8(0x3fef9f9f9f9f9fa0,0x3fe8d8d8d8d8d8d9,0x3fe9f9f9f9f9f9fa,0x3ff0000000000000);
  func_0x000107c3ab24();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1036e4cec; end: 1036e4d57; -[_TtC23LensPlusBrandingHelpers21LensPlusBrandingLayer setupWithRespectAppTheme:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e4cec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *(undefined8 *)(param_1 + _DAT_112f885b0) = 0x4000000000000000;
  puVar1 = (undefined8 *)(param_1 + _DAT_112f885b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(param_1 + _DAT_112f885c0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  func_0x000107c61174();
  FUN_1036e4188(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1036e4d58; end: 1036e4de7;  */

/* WARNING: Possible PIC construction at 0x0001036e4d94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e42c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4360: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e43b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4480: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e44bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4670: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e46ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e47dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e48c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4934: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e496c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e49a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e49dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4a18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4aa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4ae8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4b4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4b60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4b70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e4b80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036e4b74) */
/* WARNING: Removing unreachable block (ram,0x0001036e4b64) */
/* WARNING: Removing unreachable block (ram,0x0001036e4b50) */
/* WARNING: Removing unreachable block (ram,0x0001036e4aec) */
/* WARNING: Removing unreachable block (ram,0x0001036e4aac) */
/* WARNING: Removing unreachable block (ram,0x0001036e4a1c) */
/* WARNING: Removing unreachable block (ram,0x0001036e49e0) */
/* WARNING: Removing unreachable block (ram,0x0001036e49a8) */
/* WARNING: Removing unreachable block (ram,0x0001036e4970) */
/* WARNING: Removing unreachable block (ram,0x0001036e4938) */
/* WARNING: Removing unreachable block (ram,0x0001036e48c8) */
/* WARNING: Removing unreachable block (ram,0x0001036e487c) */
/* WARNING: Removing unreachable block (ram,0x0001036e47e0) */
/* WARNING: Removing unreachable block (ram,0x0001036e46b0) */
/* WARNING: Removing unreachable block (ram,0x0001036e46bc) */
/* WARNING: Removing unreachable block (ram,0x0001036e46e4) */
/* WARNING: Removing unreachable block (ram,0x0001036e46ec) */
/* WARNING: Removing unreachable block (ram,0x0001036e4bb4) */
/* WARNING: Removing unreachable block (ram,0x0001036e46f4) */
/* WARNING: Removing unreachable block (ram,0x0001036e4708) */
/* WARNING: Removing unreachable block (ram,0x0001036e4674) */
/* WARNING: Removing unreachable block (ram,0x0001036e44c0) */
/* WARNING: Removing unreachable block (ram,0x0001036e4bc0) */
/* WARNING: Removing unreachable block (ram,0x0001036e4508) */
/* WARNING: Removing unreachable block (ram,0x0001036e4bec) */
/* WARNING: Removing unreachable block (ram,0x0001036e4538) */
/* WARNING: Removing unreachable block (ram,0x0001036e4c18) */
/* WARNING: Removing unreachable block (ram,0x0001036e4568) */
/* WARNING: Removing unreachable block (ram,0x0001036e4c40) */
/* WARNING: Removing unreachable block (ram,0x0001036e459c) */
/* WARNING: Removing unreachable block (ram,0x0001036e4c6c) */
/* WARNING: Removing unreachable block (ram,0x0001036e45cc) */
/* WARNING: Removing unreachable block (ram,0x0001036e4c98) */
/* WARNING: Removing unreachable block (ram,0x0001036e4600) */
/* WARNING: Removing unreachable block (ram,0x0001036e4cc0) */
/* WARNING: Removing unreachable block (ram,0x0001036e4630) */
/* WARNING: Removing unreachable block (ram,0x0001036e4484) */
/* WARNING: Removing unreachable block (ram,0x0001036e4444) */
/* WARNING: Removing unreachable block (ram,0x0001036e4404) */
/* WARNING: Removing unreachable block (ram,0x0001036e43b4) */
/* WARNING: Removing unreachable block (ram,0x0001036e4364) */
/* WARNING: Removing unreachable block (ram,0x0001036e431c) */
/* WARNING: Removing unreachable block (ram,0x0001036e42c4) */
/* WARNING: Removing unreachable block (ram,0x0001036e4d98) */
/* WARNING: Removing unreachable block (ram,0x0001036e4188) */
/* WARNING: Removing unreachable block (ram,0x0001036e41d0) */
/* WARNING: Removing unreachable block (ram,0x0001036e41d4) */
/* WARNING: Removing unreachable block (ram,0x0001036e41e4) */
/* WARNING: Removing unreachable block (ram,0x0001036e41e8) */
/* WARNING: Removing unreachable block (ram,0x0001036e41fc) */
/* WARNING: Removing unreachable block (ram,0x0001036e4200) */
/* WARNING: Removing unreachable block (ram,0x0001036e4214) */
/* WARNING: Removing unreachable block (ram,0x0001036e4218) */
/* WARNING: Removing unreachable block (ram,0x0001036e4b84) */

void FUN_1036e4d58(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c51820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1036e4de8; end: 1036e4e1f; -[_TtC23LensPlusBrandingHelpers21LensPlusBrandingLayer setupForSpotlightWithCornerRadius:] */

void FUN_1036e4de8(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_1036e4d58(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1036e4e20; end: 1036e5067;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e4e20(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffff80,PTR_s_layoutSublayers_112539578);
  func_0x000107c3ec60();
  func_0x000107c609cc();
  if (0.0 < param_1) {
    func_0x000107c3ec60();
    func_0x000107c609b0();
    if (0.0 < param_1) {
      puVar1 = PTR__OBJC_CLASS___CATransaction_1126b5718;
      func_0x000107c61168(PTR__OBJC_CLASS___CATransaction_1126b5718);
      func_0x000107c3e740();
      func_0x000107c54144(puVar1);
      lVar5 = _DAT_112f885c8;
      lVar2 = *(long *)(unaff_x20 + _DAT_112f885c8);
      if (lVar2 != 0) {
        func_0x000107c61174();
        func_0x000107c3ec60();
        func_0x000107c54b80(lVar2);
        func_0x000107c61170(lVar2);
      }
      lVar2 = _DAT_112f885d0;
      lVar3 = *(long *)(unaff_x20 + _DAT_112f885d0);
      if (lVar3 != 0) {
        func_0x000107c61174();
        func_0x000107c3ec60();
        func_0x000107c54b80(lVar3);
        func_0x000107c61170(lVar3);
      }
      lVar3 = _DAT_112f885d8;
      lVar4 = *(long *)(unaff_x20 + _DAT_112f885d8);
      if (lVar4 != 0) {
        func_0x000107c61174();
        func_0x000107c3ec60();
        func_0x000107c54b80(lVar4);
        func_0x000107c61170(lVar4);
      }
      func_0x000107c3ec60();
      func_0x000107c609d0();
      lVar4 = _DAT_112f885e0;
      if (*(long *)(unaff_x20 + _DAT_112f885e0) != 0) {
        func_0x000107c54b80(param_1,param_2,param_3,param_4);
      }
      uVar6 = 0;
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_112f885b8) + 1) != '\x01') {
        uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f885b8);
      }
      if (*(long *)(unaff_x20 + lVar5) != 0) {
        func_0x000107c539d4(uVar6);
      }
      if (*(long *)(unaff_x20 + lVar2) != 0) {
        func_0x000107c539d4(uVar6);
      }
      if (*(long *)(unaff_x20 + lVar3) != 0) {
        func_0x000107c539d4(uVar6);
      }
      lVar5 = *(long *)(unaff_x20 + lVar4);
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_112f885c0) + 1) == '\x01') {
        if (lVar5 != 0) {
          func_0x000107c61174();
          func_0x000107c609b0(param_1,param_2,param_3,param_4);
          func_0x000107c539d4(param_1 * 0.5,lVar5);
          func_0x000107c61170(lVar5);
        }
      }
      else if (lVar5 != 0) {
        func_0x000107c539d4(*(undefined8 *)(unaff_x20 + _DAT_112f885c0));
      }
      func_0x000107c3fe58(puVar1);
    }
  }
  return;
}



/* Entry: 1036e5068; end: 1036e508f; -[_TtC23LensPlusBrandingHelpers21LensPlusBrandingLayer layoutSublayers] */

void FUN_1036e5068(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1036e4e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1036e5090; end: 1036e512f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e5090(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f885d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f885e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f885d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f885c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f885b0) = 0x4000000000000000;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f885b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f885c0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036e5130; end: 1036e514f; -[_TtC23LensPlusBrandingHelpers21LensPlusBrandingLayer init] */

void FUN_1036e5130(void)

{
  FUN_1036e5090();
  return;
}



/* Entry: 1036e5150; end: 1036e523f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1036e5150(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f885d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f885e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f885d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f885c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f885b0) = 0x4000000000000000;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f885b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f885c0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lVar2 = param_1;
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_initWithLayer__1125e60d8,lVar2);
  func_0x000107c615e8(lVar2);
  func_0x000100183ab8(param_1);
  return puVar3;
}



/* Entry: 1036e5240; end: 1036e528b; -[_TtC23LensPlusBrandingHelpers21LensPlusBrandingLayer initWithLayer:] */

void FUN_1036e5240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c60234(auStack_40,param_3);
  func_0x000107c615e8(param_3);
  FUN_1036e5150(auStack_40);
  return;
}



/* Entry: 1036e528c; end: 1036e5367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1036e528c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f885d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f885e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f885d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f885c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f885b0) = 0x4000000000000000;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f885b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f885c0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_initWithCoder__1125dd730,param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (puVar2 != (undefined1 *)0x0) {
    func_0x000107c61170(puVar2);
  }
  return puVar2;
}



/* Entry: 1036e5368; end: 1036e538f; -[_TtC23LensPlusBrandingHelpers21LensPlusBrandingLayer initWithCoder:] */

void FUN_1036e5368(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1036e528c();
  return;
}



/* Entry: 1036e5390; end: 1036e53c3;  */

void FUN_1036e5390(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036e53c4; end: 1036e541b; -[_TtC23LensPlusBrandingHelpers21LensPlusBrandingLayer .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036e53e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e5400: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036e53e4) */
/* WARNING: Removing unreachable block (ram,0x0001036e5404) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e53c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f885d0));
  return;
}



/* Entry: 1036e541c; end: 1036e543b;  */

void FUN_1036e541c(void)

{
  func_0x000107c61168(&PTR_PTR_1128e32d0);
  return;
}



/* Entry: 1036e543c; end: 1036e54db;  */

int FUN_1036e543c(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1036e54dc; end: 1036e5557;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e54dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f88610);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f88618);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036e5558; end: 1036e55c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e5558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f88610);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f88618);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x0001036e55a8();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036e55c8; end: 1036e566b; -[SCLensPlusCTAViewModel initWithTitle:onTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e55c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lStack_40;
  undefined *puStack_38;
  
  func_0x000107c60bc4();
  func_0x000107c5faec();
  puVar2 = &UNK_110682f98;
  func_0x000107c613fc(&UNK_110682f98,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  puVar1 = (undefined8 *)(param_1 + _DAT_112f88610);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_112f88618);
  *puVar1 = FUN_1036e60a8;
  puVar1[1] = puVar2;
  func_0x0001036e55a8();
  lStack_40 = param_1;
  puStack_38 = puVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036e566c; end: 1036e56c7; -[SCLensPlusCTAViewModel init] */

void FUN_1036e566c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensPlusBrandingHelpers.LensPlusCTAViewModel",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036e5698);
  (*pcVar1)();
}



/* Entry: 1036e56c8; end: 1036e5707; -[SCLensPlusCTAViewModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e56c8(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f88610 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f88618 + 8));
  return;
}



/* Entry: 1036e5708; end: 1036e5803;  */

undefined8 FUN_1036e5708(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  char *pcVar3;
  undefined8 unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  func_0x000107c469a4(0,0,0,0);
  puVar1 = &UNK_110682f48;
  func_0x000107c613fc(&UNK_110682f48,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,unaff_x20);
  pcStack_40 = FUN_1036e5878;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_1036e5be4;
  puStack_48 = &UNK_110682f60;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  pcVar3 = "init(with:)";
  func_0x0001000c10c0("init(with:)");
  func_0x000107c61180();
  func_0x000107c5dc64(param_1);
  func_0x000107c615e8(pcVar3);
  func_0x000107c61170(param_1);
  func_0x000107c60bd0(ppuVar2);
  return unaff_x20;
}



/* Entry: 1036e5804; end: 1036e5877;  */

void FUN_1036e5804(long param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if (param_1 != 0) {
      func_0x000107c61174(param_1);
      FUN_1036e5880();
      func_0x000107c61170(param_3);
      param_3 = param_1;
    }
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 1036e5878; end: 1036e587f;  */

void FUN_1036e5878(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (param_1 != 0) {
      func_0x000107c61174(param_1);
      FUN_1036e5880();
      func_0x000107c61170(lVar1);
      lVar1 = param_1;
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1036e5880; end: 1036e5be3;  */

/* WARNING: Possible PIC construction at 0x0001036e591c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e5940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e598c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e5a7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e5ad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e5b24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e5b78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e5bc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036e5b7c) */
/* WARNING: Removing unreachable block (ram,0x0001036e5b28) */
/* WARNING: Removing unreachable block (ram,0x0001036e5ad4) */
/* WARNING: Removing unreachable block (ram,0x0001036e5a80) */
/* WARNING: Removing unreachable block (ram,0x0001036e5990) */
/* WARNING: Removing unreachable block (ram,0x0001036e5944) */
/* WARNING: Removing unreachable block (ram,0x0001036e5920) */
/* WARNING: Removing unreachable block (ram,0x0001036e5bc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e5880(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f88628);
  func_0x000107c3d89c();
  puVar1 = (undefined8 *)(param_1 + _DAT_112f88618);
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f88630);
  uVar3 = *puVar2;
  uVar4 = puVar2[1];
  uVar5 = puVar1[1];
  uVar7 = *puVar1;
  puVar2[1] = puVar1[1];
  *puVar2 = uVar7;
  func_0x000107c6157c(uVar5);
  func_0x00010058d43c(uVar3,uVar4);
  func_0x000107c4aba4(uVar6);
  func_0x000107c61180();
  func_0x000107c49770();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 1036e5be4; end: 1036e5c5b;  */

/* WARNING: Possible PIC construction at 0x0001036e5c40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036e5c44) */

void FUN_1036e5be4(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1036e5c5c; end: 1036e5c77;  */

void FUN_1036e5c5c(long param_1,long param_2)

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



/* Entry: 1036e5c78; end: 1036e5c9f; -[SCLensPlusCTAButton initWith:] */

void FUN_1036e5c78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1036e5708();
  return;
}



/* Entry: 1036e5ca0; end: 1036e5d6b; -[SCLensPlusCTAButton initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e5ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_5;
  func_0x000107c614f0();
  lVar2 = _DAT_112f88620;
  uVar4 = 0;
  FUN_1036e541c();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(param_5 + lVar2) = uVar4;
  lVar2 = _DAT_112f88628;
  puVar5 = PTR_PTR_1126aec40;
  func_0x000107c61168();
  func_0x000107c3ee98();
  func_0x000107c61180();
  *(undefined **)(param_5 + lVar2) = puVar5;
  puVar1 = (undefined8 *)(param_5 + _DAT_112f88630);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_60 = param_5;
  lStack_58 = lVar3;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&lStack_60,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 1036e5d6c; end: 1036e5e33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1036e5d6c(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  
  puVar5 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  lVar2 = _DAT_112f88620;
  uVar3 = 0;
  FUN_1036e541c();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112f88628;
  puVar4 = PTR_PTR_1126aec40;
  func_0x000107c61168();
  func_0x000107c3ee98();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f88630);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_initWithCoder__1125dd730,param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (puVar5 != (undefined1 *)0x0) {
    func_0x000107c61170(puVar5);
  }
  return puVar5;
}



/* Entry: 1036e5e34; end: 1036e5e5b; -[SCLensPlusCTAButton initWithCoder:] */

void FUN_1036e5e34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1036e5d6c();
  return;
}



/* Entry: 1036e5e5c; end: 1036e5ecb; -[SCLensPlusCTAButton handleTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e5e5c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112f88630);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_112f88630))[1];
  func_0x000107c61174();
  func_0x000100b64c10(pcVar1,uVar2);
  (*pcVar1)();
  func_0x000107c61170(param_1);
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1036e5ecc; end: 1036e5fa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e5ecc(double param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_layoutSubviews_112600e60);
  lVar2 = *(long *)(unaff_x20 + _DAT_112f88620);
  func_0x000107c3ec60();
  func_0x000107c54b80(lVar2);
  *(undefined8 *)(lVar2 + _DAT_112f885b0) = 0x4000000000000000;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f885b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f885c0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  FUN_1036e4188(0);
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c609b0();
  func_0x000107c539d4(param_1 * 0.5,unaff_x20);
  func_0x000107c61170(unaff_x20);
  return;
}



/* Entry: 1036e5fa4; end: 1036e5fcb; -[SCLensPlusCTAButton layoutSubviews] */

void FUN_1036e5fa4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1036e5ecc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1036e5fcc; end: 1036e5fff;  */

void FUN_1036e5fcc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036e6000; end: 1036e604b; -[SCLensPlusCTAButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e6000(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f88620));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f88628));
  if (*(long *)(param_1 + _DAT_112f88630) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112f88630))[1]);
    return;
  }
  return;
}



/* Entry: 1036e604c; end: 1036e606b;  */

void FUN_1036e604c(void)

{
  func_0x000107c61168(&PTR_PTR_1128e3480);
  return;
}



/* Entry: 1036e606c; end: 1036e60a7; -[SCLensPlusCTAButton gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

bool FUN_1036e606c(void)

{
  undefined *puVar1;
  long in_x3;
  
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  func_0x000107c61168(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x000107c6148c(in_x3,puVar1);
  return in_x3 != 0;
}



/* Entry: 1036e60a8; end: 1036e60b3;  */

void FUN_1036e60a8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001036e60b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 1036e60b4; end: 1036e612b;  */

void FUN_1036e60b4(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1036e612c(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1036e612c; end: 1036e616b;  */

void FUN_1036e612c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1036e616c; end: 1036e61b3;  */

void FUN_1036e616c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbfc320,0x23,2);
  uRam000000011380bac8 = uStack_38;
  uRam000000011380bac0 = uStack_40;
  uRam000000011380bad8 = uStack_28;
  uRam000000011380bad0 = uStack_30;
  uRam000000011380bae8 = uStack_18;
  uRam000000011380bae0 = uStack_20;
  return;
}



/* Entry: 1036e61b4; end: 1036e625f;  */

void FUN_1036e61b4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  while( true ) {
    lVar1 = param_2;
    lVar2 = param_3;
    (*pcVar4)();
    if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
      return;
    }
    if (lVar1 == 3) break;
    if (lVar1 == 2) {
      pcVar3 = *(code **)(param_3 + 0x150);
      goto LAB_1036e61f0;
    }
    if (lVar1 == 1) {
      pcVar3 = *(code **)(param_3 + 0x150);
LAB_1036e61f0:
      (*pcVar3)();
    }
  }
  pcVar3 = *(code **)(param_3 + 0x150);
  goto LAB_1036e61f0;
}



/* Entry: 1036e6260; end: 1036e6333;  */

void FUN_1036e6260(undefined8 param_1,undefined8 param_2,long param_3)

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
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[3];
    uVar1 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) {
      uVar2 = unaff_x20[5];
      uVar1 = unaff_x20[4] & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar1 = uVar2 >> 0x38 & 0xf;
      }
      if ((uVar1 == 0) ||
         ((**(code **)(param_3 + 0x70))(unaff_x20[4],uVar2,3,param_2,param_3), unaff_x21 == 0)) {
        func_0x000100076224(param_1,unaff_x20[6],unaff_x20[7],param_2,param_3);
      }
    }
  }
  return;
}



/* Entry: 1036e6334; end: 1036e6377;  */

void FUN_1036e6334(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[7] = 0xc000000000000000;
  param_1[6] = 0;
  return;
}



/* Entry: 1036e6378; end: 1036e63a7;  */

undefined1  [16] FUN_1036e6378(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x30);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38));
  return auVar1;
}



/* Entry: 1036e63a8; end: 1036e63db;  */

void FUN_1036e63a8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  return;
}



/* Entry: 1036e63dc; end: 1036e63ef;  */

undefined1  [16] FUN_1036e63dc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x30;
  auVar1._0_8_ = 0x1036e63ec;
  return auVar1;
}



/* Entry: 1036e63f0; end: 1036e6417;  */

void FUN_1036e63f0(void)

{
  FUN_1036e61b4();
  return;
}



/* Entry: 1036e6418; end: 1036e641b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1036e6418(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 1036e641c; end: 1036e6453;  */

uint FUN_1036e641c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_1036e6b00();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 1036e6454; end: 1036e649b;  */

uint FUN_1036e6454(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_18 = param_1[7];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  FUN_1036e66c4(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1036e649c; end: 1036e653b;  */

/* WARNING: Possible PIC construction at 0x0001036e64e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e64f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036e64ec) */
/* WARNING: Removing unreachable block (ram,0x0001036e64fc) */

void FUN_1036e649c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f88688 != -1) {
    func_0x000107c61568(0x112f88688,FUN_1036e616c);
  }
  uVar5 = uRam000000011380bae8;
  uVar4 = uRam000000011380bae0;
  uVar3 = uRam000000011380bad8;
  uVar2 = uRam000000011380bad0;
  uVar1 = uRam000000011380bac8;
  *param_1 = uRam000000011380bac0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1036e653c; end: 1036e6577;  */

void FUN_1036e653c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f886a8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f886a8,&UNK_10dbfc310);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1036e6578; end: 1036e667b;  */

void FUN_1036e6578(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b8 [72];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  uStack_38 = unaff_x20[7];
  uStack_40 = unaff_x20[6];
  func_0x000107c6068c(auStack_b8,0);
  func_0x000107c5fa50(auStack_b8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1036e667c; end: 1036e66c3;  */

uint FUN_1036e667c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  FUN_1036e66c4(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1036e66c4; end: 1036e6763;  */

/* WARNING: Possible PIC construction at 0x0001036e66f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e6738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x0001036e673c) */
/* WARNING: Removing unreachable block (ram,0x0001036e66f8) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1036e66c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  pbVar13 = (byte *)*param_1;
  pbVar16 = (byte *)param_1[1];
  pbVar17 = (byte *)*param_2;
  pbVar12 = (byte *)param_2[1];
  if (pbVar13 == pbVar17 && pbVar16 == pbVar12) {
    uVar14 = param_1[2];
    if ((uVar14 != param_2[2] || param_1[3] != param_2[3]) &&
       (func_0x000107c605b8(), (uVar14 & 1) == 0)) {
      return (byte *)0x0;
    }
    pbVar13 = (byte *)param_1[4];
    pbVar16 = (byte *)param_1[5];
    pbVar17 = (byte *)param_2[4];
    pbVar12 = (byte *)param_2[5];
    if ((pbVar13 == pbVar17) && (pbVar16 == pbVar12)) {
      pbVar10 = (byte *)param_1[6];
      pbVar25 = (byte *)param_1[7];
      lVar24 = param_2[6];
      uVar14 = param_2[7];
      puVar7 = (undefined1 *)register0x00000008;
      do {
        *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
        *(byte **)(puVar7 + -0x48) = unaff_x25;
        *(byte **)(puVar7 + -0x40) = unaff_x24;
        *(byte **)(puVar7 + -0x38) = unaff_x23;
        *(ulong *)(puVar7 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
        *(ulong *)(puVar7 + -0x20) = unaff_x20;
        *(byte **)(puVar7 + -0x18) = unaff_x19;
        *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar7 + -8) = unaff_x30;
        *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar4 = (uint)((ulong)pbVar25 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar14 >> 0x20);
        uVar21 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar15 = pbVar25;
        if ((ulong)pbVar25 >> 0x3e == 3) {
          uVar20 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
              (uVar14 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar14 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
            uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
          }
          else {
            iVar19 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar20 = (ulong)(iVar19 - iVar8);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar21 == 0) {
            uVar22 = uVar14 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar19 = (int)((ulong)lVar24 >> 0x20);
          if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar9 = (byte *)0x0;
        }
        else {
          if (uVar18 == 2) {
            uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar20 = 0;
          if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar21 == 2) {
            uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
            if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar20 < 1) goto code_r0x000100e26128;
            if (uVar18 < 2) {
              if (uVar18 == 0) {
                puVar7[-0x70] = (char)pbVar10;
                puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                puVar7[-0x68] = (char)pbVar25;
                puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
                puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
                puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
                puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
                puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
                pbVar15 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                goto code_r0x000100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar8;
              unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar6)();
              }
              func_0x000107c5ec30();
              unaff_x24 = pbVar25;
              if (pbVar10 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar10 = (byte *)0x0;
              }
              else {
                pbVar15 = pbVar10;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar15)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar15);
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar15) {
                    pbVar15 = unaff_x23;
                  }
                  pbVar15 = pbVar15 + (long)pbVar10;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar15 = (byte *)0x0;
            }
            else {
              if (uVar18 != 2) {
                *(undefined8 *)(puVar7 + -0x6a) = 0;
                *(undefined8 *)(puVar7 + -0x70) = 0;
                pbVar15 = puVar7 + -0x70;
                goto code_r0x000100e26260;
              }
              lVar26 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar15 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar26,(long)pbVar15)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar26 - (long)pbVar15);
              }
              unaff_x23 = unaff_x24 + -lVar26;
              if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar10;
              unaff_x25 = pbVar25;
              if (pbVar10 == (byte *)0x0) {
                pbVar15 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar15) {
                  pbVar15 = unaff_x23;
                }
                pbVar15 = pbVar15 + (long)pbVar10;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar15,lVar24,uVar14);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar14;
          }
          else {
            pbVar9 = (byte *)(ulong)(uVar20 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
          return pbVar9;
        }
        func_0x000107c60e78();
        *(byte **)(puVar7 + -0xc0) = unaff_x24;
        *(byte **)(puVar7 + -0xb8) = unaff_x23;
        *(ulong *)(puVar7 + -0xb0) = unaff_x22;
        *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
        *(ulong *)(puVar7 + -0xa0) = unaff_x20;
        *(byte **)(puVar7 + -0x98) = unaff_x19;
        *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
        *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
        pbVar13 = *(byte **)pbVar9;
        pbVar10 = *(byte **)(pbVar9 + 8);
        pbVar23 = *(byte **)(pbVar9 + 0x18);
        bVar27 = pbVar9[0x28];
        pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar16 = pbVar10;
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            if (pbVar15[0x28] == 0) {
              lVar24 = *(long *)pbVar15;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar13,lVar24,uVar11);
              return (byte *)(ulong)((uint)pbVar13 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar27 == 1) {
            if (pbVar15[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)(pbVar15 + 8);
            pbVar12 = *(byte **)(pbVar15 + 0x10);
            lVar24 = *(long *)pbVar15;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar13,lVar24,uVar11);
            if (((ulong)pbVar13 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar13 = pbVar10;
            pbVar16 = pbVar25;
            if ((pbVar10 == pbVar17) && (pbVar25 == pbVar12)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar15[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)pbVar15;
            pbVar12 = *(byte **)(pbVar15 + 8);
            lVar24 = *(long *)(pbVar15 + 0x18);
            if ((pbVar13 == pbVar17) && (pbVar10 == pbVar12)) {
              if (((pbVar9[0x10] ^ pbVar15[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar23 != (byte *)0x0) {
                if (lVar24 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar24);
                func_0x000107c61174();
                pbVar12 = pbVar23;
                func_0x000107c60118();
                func_0x000107c61170(pbVar23);
                func_0x000107c61170(lVar24);
                pbVar23 = pbVar12;
                goto joined_r0x000100e266a4;
              }
joined_r0x000100e26620:
              if (lVar24 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
          }
          break;
        }
        lVar26 = *(long *)(pbVar9 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar15[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)pbVar15;
            pbVar12 = *(byte **)(pbVar15 + 8);
            if (((pbVar13 == pbVar17) && (pbVar10 == pbVar12)) &&
               (pbVar13 = pbVar25, pbVar16 = pbVar23, pbVar17 = *(byte **)(pbVar15 + 0x10),
               pbVar12 = *(byte **)(pbVar15 + 0x18),
               pbVar25 == *(byte **)(pbVar15 + 0x10) && pbVar23 == *(byte **)(pbVar15 + 0x18))) {
              return (byte *)0x1;
            }
            break;
          }
          if (pbVar15[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar15 != ((uint)pbVar13 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar12 = *(byte **)(pbVar15 + 0x10);
          lVar24 = *(long *)(pbVar15 + 0x20);
          if (pbVar25 == (byte *)0x0) {
            if (pbVar12 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar12 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)(pbVar15 + 8);
            pbVar13 = pbVar10;
            pbVar16 = pbVar25;
            if ((pbVar10 != pbVar17) || (pbVar25 != pbVar12)) break;
          }
          if (lVar26 != 0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar23 == *(byte **)(pbVar15 + 0x18)) && (lVar26 == lVar24)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar15 + 0x18),lVar24,0);
joined_r0x000100e266a4:
            if (((ulong)pbVar23 & 1) == 0) {
              return (byte *)0x0;
            }
            return (byte *)0x1;
          }
          goto joined_r0x000100e26620;
        }
        if (bVar27 != 5) {
          if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
              lVar26 == 0) && pbVar25 == (byte *)0x0) {
            if (pbVar15[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar26 = *(long *)(pbVar15 + 0x20);
            lVar24 = *(long *)(pbVar15 + 0x18);
            bVar27 = pbVar15[8] | (byte)lVar24;
            bVar28 = pbVar15[9] | (byte)((ulong)lVar24 >> 8);
            bVar29 = pbVar15[10] | (byte)((ulong)lVar24 >> 0x10);
            bVar30 = pbVar15[0xb] | (byte)((ulong)lVar24 >> 0x18);
            bVar31 = pbVar15[0xc] | (byte)((ulong)lVar24 >> 0x20);
            bVar32 = pbVar15[0xd] | (byte)((ulong)lVar24 >> 0x28);
            bVar33 = pbVar15[0xe] | (byte)((ulong)lVar24 >> 0x30);
            bVar34 = pbVar15[0xf] | (byte)((ulong)lVar24 >> 0x38);
            bVar35 = pbVar15[0x10] | (byte)lVar26;
            bVar36 = pbVar15[0x11] | (byte)((ulong)lVar26 >> 8);
            bVar37 = pbVar15[0x12] | (byte)((ulong)lVar26 >> 0x10);
            bVar38 = pbVar15[0x13] | (byte)((ulong)lVar26 >> 0x18);
            bVar39 = pbVar15[0x14] | (byte)((ulong)lVar26 >> 0x20);
            bVar40 = pbVar15[0x15] | (byte)((ulong)lVar26 >> 0x28);
            bVar41 = pbVar15[0x16] | (byte)((ulong)lVar26 >> 0x30);
            bVar42 = pbVar15[0x17] | (byte)((ulong)lVar26 >> 0x38);
            auVar43[1] = bVar28;
            auVar43[0] = bVar27;
            auVar43[2] = bVar29;
            auVar43[3] = bVar30;
            auVar43[4] = bVar31;
            auVar43[5] = bVar32;
            auVar43[6] = bVar33;
            auVar43[7] = bVar34;
            auVar43[8] = bVar35;
            auVar43[9] = bVar36;
            auVar43[10] = bVar37;
            auVar43[0xb] = bVar38;
            auVar43[0xc] = bVar39;
            auVar43[0xd] = bVar40;
            auVar43[0xe] = bVar41;
            auVar43[0xf] = bVar42;
            auVar3[1] = bVar28;
            auVar3[0] = bVar27;
            auVar3[2] = bVar29;
            auVar3[3] = bVar30;
            auVar3[4] = bVar31;
            auVar3[5] = bVar32;
            auVar3[6] = bVar33;
            auVar3[7] = bVar34;
            auVar3[8] = bVar35;
            auVar3[9] = bVar36;
            auVar3[10] = bVar37;
            auVar3[0xb] = bVar38;
            auVar3[0xc] = bVar39;
            auVar3[0xd] = bVar40;
            auVar3[0xe] = bVar41;
            auVar3[0xf] = bVar42;
            auVar43 = NEON_ext(auVar43,auVar3,8,1);
            if (CONCAT17(bVar34 | auVar43[7],
                         CONCAT16(bVar33 | auVar43[6],
                                  CONCAT15(bVar32 | auVar43[5],
                                           CONCAT14(bVar31 | auVar43[4],
                                                    CONCAT13(bVar30 | auVar43[3],
                                                             CONCAT12(bVar29 | auVar43[2],
                                                                      CONCAT11(bVar28 | auVar43[1],
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar15 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar13 == (byte *)0x1) &&
             (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
              lVar26 == 0)) {
            if (pbVar15[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar15 != 1) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar15[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar15 != 2) {
              return (byte *)0x0;
            }
          }
          lVar26 = *(long *)(pbVar15 + 0x20);
          lVar24 = *(long *)(pbVar15 + 0x18);
          bVar27 = pbVar15[8] | (byte)lVar24;
          bVar28 = pbVar15[9] | (byte)((ulong)lVar24 >> 8);
          bVar29 = pbVar15[10] | (byte)((ulong)lVar24 >> 0x10);
          bVar30 = pbVar15[0xb] | (byte)((ulong)lVar24 >> 0x18);
          bVar31 = pbVar15[0xc] | (byte)((ulong)lVar24 >> 0x20);
          bVar32 = pbVar15[0xd] | (byte)((ulong)lVar24 >> 0x28);
          bVar33 = pbVar15[0xe] | (byte)((ulong)lVar24 >> 0x30);
          bVar34 = pbVar15[0xf] | (byte)((ulong)lVar24 >> 0x38);
          bVar35 = pbVar15[0x10] | (byte)lVar26;
          bVar36 = pbVar15[0x11] | (byte)((ulong)lVar26 >> 8);
          bVar37 = pbVar15[0x12] | (byte)((ulong)lVar26 >> 0x10);
          bVar38 = pbVar15[0x13] | (byte)((ulong)lVar26 >> 0x18);
          bVar39 = pbVar15[0x14] | (byte)((ulong)lVar26 >> 0x20);
          bVar40 = pbVar15[0x15] | (byte)((ulong)lVar26 >> 0x28);
          bVar41 = pbVar15[0x16] | (byte)((ulong)lVar26 >> 0x30);
          bVar42 = pbVar15[0x17] | (byte)((ulong)lVar26 >> 0x38);
          auVar1[1] = bVar28;
          auVar1[0] = bVar27;
          auVar1[2] = bVar29;
          auVar1[3] = bVar30;
          auVar1[4] = bVar31;
          auVar1[5] = bVar32;
          auVar1[6] = bVar33;
          auVar1[7] = bVar34;
          auVar1[8] = bVar35;
          auVar1[9] = bVar36;
          auVar1[10] = bVar37;
          auVar1[0xb] = bVar38;
          auVar1[0xc] = bVar39;
          auVar1[0xd] = bVar40;
          auVar1[0xe] = bVar41;
          auVar1[0xf] = bVar42;
          auVar2[1] = bVar28;
          auVar2[0] = bVar27;
          auVar2[2] = bVar29;
          auVar2[3] = bVar30;
          auVar2[4] = bVar31;
          auVar2[5] = bVar32;
          auVar2[6] = bVar33;
          auVar2[7] = bVar34;
          auVar2[8] = bVar35;
          auVar2[9] = bVar36;
          auVar2[10] = bVar37;
          auVar2[0xb] = bVar38;
          auVar2[0xc] = bVar39;
          auVar2[0xd] = bVar40;
          auVar2[0xe] = bVar41;
          auVar2[0xf] = bVar42;
          auVar43 = NEON_ext(auVar1,auVar2,8,1);
          lVar24 = CONCAT17(bVar34 | auVar43[7],
                            CONCAT16(bVar33 | auVar43[6],
                                     CONCAT15(bVar32 | auVar43[5],
                                              CONCAT14(bVar31 | auVar43[4],
                                                       CONCAT13(bVar30 | auVar43[3],
                                                                CONCAT12(bVar29 | auVar43[2],
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar15[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar15 + 8);
        uVar14 = *(ulong *)(pbVar15 + 0x10);
        lVar26 = *(long *)pbVar15;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar13,lVar26,uVar11);
        if (((ulong)pbVar13 & 1) == 0) {
          return (byte *)0x0;
        }
        unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
        unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
        unaff_x20 = *(ulong *)(puVar7 + -0xa0);
        unaff_x19 = *(byte **)(puVar7 + -0x98);
        unaff_x22 = *(ulong *)(puVar7 + -0xb0);
        unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
        unaff_x24 = *(byte **)(puVar7 + -0xc0);
        unaff_x23 = *(byte **)(puVar7 + -0xb8);
        puVar7 = puVar7 + -0x80;
      } while( true );
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(pbVar13,pbVar16,pbVar17,pbVar12,0);
  return pbVar13;
}



/* Entry: 1036e6764; end: 1036e67a3;  */

void FUN_1036e6764(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f88690 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbfc240;
  func_0x000107c61520(&UNK_10dbfc240,&UNK_1106830e0);
  puRam0000000112f88690 = puVar1;
  return;
}



/* Entry: 1036e67a4; end: 1036e67c7;  */

void FUN_1036e67a4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1036e67c8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1036e67c8; end: 1036e6807;  */

void FUN_1036e67c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f88698 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbfc218;
  func_0x000107c61520(&UNK_10dbfc218,&UNK_1106830e0);
  puRam0000000112f88698 = puVar1;
  return;
}



/* Entry: 1036e6808; end: 1036e6833;  */

void FUN_1036e6808(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1036e6764();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1036dd610();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1036e6834; end: 1036e6837;  */

void FUN_1036e6834(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f886a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbfc280;
  func_0x000107c61520(&UNK_10dbfc280,&UNK_1106830e0);
  puRam0000000112f886a0 = puVar1;
  return;
}



/* Entry: 1036e6838; end: 1036e6877;  */

void FUN_1036e6838(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f886a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbfc280;
  func_0x000107c61520(&UNK_10dbfc280,&UNK_1106830e0);
  puRam0000000112f886a0 = puVar1;
  return;
}



/* Entry: 1036e6878; end: 1036e68db;  */

long FUN_1036e6878(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1036e68dc; end: 1036e694b;  */

undefined8 * FUN_1036e68dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  uVar1 = param_2[6];
  uVar4 = param_2[7];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x00010006c00c(uVar1,uVar4);
  param_1[6] = uVar1;
  param_1[7] = uVar4;
  return param_1;
}



/* Entry: 1036e694c; end: 1036e69f3;  */

undefined8 * FUN_1036e694c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar4 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[2] = param_2[2];
  uVar4 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[4] = param_2[4];
  uVar4 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_2[6];
  uVar2 = param_2[7];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[6];
  uVar3 = param_1[7];
  param_1[6] = uVar4;
  param_1[7] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  return param_1;
}



/* Entry: 1036e69f4; end: 1036e6a57;  */

undefined8 * FUN_1036e69f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[6];
  uVar2 = param_1[7];
  uVar3 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 1036e6a58; end: 1036e6aff;  */

int FUN_1036e6a58(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1036e6b00; end: 1036e6b3f;  */

void FUN_1036e6b00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f886b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbfc1ec;
  func_0x000107c61520(&DAT_10dbfc1ec,&UNK_1106830e0);
  puRam0000000112f886b0 = puVar1;
  return;
}



/* Entry: 1036e6b40; end: 1036e6bab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e6b40(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1036e6f34();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f886c0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1036e6bac; end: 1036e6c17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e6bac(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f886c0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036e6c18; end: 1036e6c77; -[_TtC45SpectaclesBoomboxScopedFactoryServiceProvider33SCSpectaclesBoomboxScopedServices init] */

void FUN_1036e6c18(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesBoomboxScopedFactoryServiceProvider.SCSpectaclesBoomboxScopedServices"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036e6c44);
  (*pcVar1)();
}



/* Entry: 1036e6c78; end: 1036e6c87; -[_TtC45SpectaclesBoomboxScopedFactoryServiceProvider33SCSpectaclesBoomboxScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e6c78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f886c0));
  return;
}



/* Entry: 1036e6c88; end: 1036e6cf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036e6c88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110683328;
  func_0x000107c613fc(&UNK_110683328,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1036e6fcc,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1036e6cf4; end: 1036e6d8f;  */

void FUN_1036e6cf4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110683238;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110683238;
  return;
}



/* Entry: 1036e6d90; end: 1036e6dc7;  */

void FUN_1036e6d90(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1036e6dc8; end: 1036e6dcf;  */

undefined8 FUN_1036e6dc8(void)

{
  return 0x1b;
}



/* Entry: 1036e6dd0; end: 1036e6f03;  */

void FUN_1036e6dd0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110683350;
  func_0x000107c613fc(&UNK_110683350,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1036e6fa4;
  func_0x00010058fa64(FUN_1036e6fa4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1036e6f04; end: 1036e6f33;  */

undefined ** FUN_1036e6f04(void)

{
  return &PTR_DAT_113066ef8;
}



/* Entry: 1036e6f34; end: 1036e6f53;  */

void FUN_1036e6f34(void)

{
  func_0x000107c61168(&PTR_PTR_1128e3548);
  return;
}



/* Entry: 1036e6f54; end: 1036e6fa3;  */

undefined1  [16] FUN_1036e6f54(void)

{
  return ZEXT816(0x110683288);
}



/* Entry: 1036e6fa4; end: 1036e6fcb;  */

void FUN_1036e6fa4(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1036e6fcc; end: 1036e6fcf;  */

void FUN_1036e6fcc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1036e6fd0; end: 1036e70ff;  */

/* WARNING: Possible PIC construction at 0x0001036e70a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e70b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e70c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036e70d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036e70c4) */
/* WARNING: Removing unreachable block (ram,0x0001036e70b4) */
/* WARNING: Removing unreachable block (ram,0x0001036e70a4) */
/* WARNING: Removing unreachable block (ram,0x0001036e70d4) */

void FUN_1036e6fd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1106833d8;
  func_0x000107c613fc(&UNK_1106833d8,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  uVar2 = 0x112f88730;
  func_0x0001000285a8(0x112f88730,&UNK_10dbfc5c0);
  func_0x000107c613fc();
  uVar3 = 0x1036e75a0;
  func_0x0001000841fc(0x1036e75a0,puVar1,uVar2);
  func_0x000100084214(&UNK_10dbfc590,0x2f,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1036e7100; end: 1036e7133;  */

void FUN_1036e7100(void)

{
  long unaff_x20;
  
  FUN_1036e6fd0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1036e7134; end: 1036e7143;  */

undefined1  [16] FUN_1036e7134(void)

{
  return ZEXT816(0x1106833b8);
}



/* Entry: 1036e7144; end: 1036e753b;  */

void FUN_1036e7144(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112f88738,&UNK_10dbfc5c8);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1036e8f34();
  func_0x000100082720("SCMemoriesTrackingImageProcessCommandScopeExposerSubjectServiceProvider",0x47
                      ,2);
  puVar3 = puVar2;
  FUN_1036e8fc0();
  func_0x000100082720("SCMemoriesTrackingImageProcessCommandScopeExposerObservableServiceProvider",
                      0x4a,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1036e6d90;
  func_0x0001000823a8(FUN_1036e6d90,0);
  func_0x000100082720("SCSpectaclesBoomboxScopedServicesCleanupRelayServiceProvider",0x3c,2);
  puVar5 = puVar2;
  FUN_1036e8de8();
  func_0x000100082720("SpectaclesBoomboxScopeGraphBridgeServicesServiceProvider",0x38,2);
  func_0x0001000285a8(0x112f88740,&UNK_10dbfc5e0);
  puVar6 = &UNK_110683400;
  func_0x000107c613fc(&UNK_110683400,0x68,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(undefined8 *)(puVar6 + 0x28) = param_5;
  *(undefined8 *)(puVar6 + 0x30) = param_6;
  *(undefined8 *)(puVar6 + 0x38) = param_7;
  *(undefined8 *)(puVar6 + 0x40) = param_8;
  *(undefined8 *)(puVar6 + 0x48) = param_9;
  *(undefined8 *)(puVar6 + 0x50) = param_10;
  *(undefined8 *)(puVar6 + 0x58) = param_11;
  *(undefined8 **)(puVar6 + 0x60) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(puVar3);
  uVar10 = 0x1036e75d4;
  func_0x0001000823a8(0x1036e75d4,puVar6);
  func_0x000100082720("SCSpectaclesBoomboxEntryPointWrapperServiceProvider",0x33,2);
  func_0x0001000285a8(0x112f88748,&UNK_10dbfc5d0);
  puVar6 = &UNK_110683428;
  func_0x000107c613fc(&UNK_110683428,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar10;
  *(undefined8 **)(puVar6 + 0x18) = puVar1;
  *(code **)(puVar6 + 0x20) = pcVar4;
  *(undefined8 **)(puVar6 + 0x28) = puVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(puVar5);
  pcVar7 = FUN_1036e7610;
  func_0x0001000823a8(FUN_1036e7610,puVar6);
  func_0x000100082720("SCSpectaclesBoomboxScopeInitializationPluginRegistryServiceProvider",0x43,2);
  func_0x0001000285a8(0x112f886c8,&UNK_10dbfc360);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x1036e761c;
  func_0x0001000823a8(0x1036e761c,pcVar7);
  func_0x000100082720("SCSpectaclesBoomboxScopeInitializationServiceProvider",0x35,2);
  func_0x0001000285a8(0x112f886b8,&UNK_10dbfc350);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1036e7624;
  func_0x0001000823a8(0x1036e7624,uVar8);
  func_0x000100082720("SCSpectaclesBoomboxScopedServicesServiceProvider",0x30,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_110683450;
  func_0x000107c613fc(&UNK_110683450,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x1036e762c;
  func_0x0001000823a8(0x1036e762c,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCSpectaclesBoomboxScopeEntryPointProvider",0x2a,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 1036e753c; end: 1036e760f;  */

void FUN_1036e753c(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1036e7610; end: 1036e7633;  */

void FUN_1036e7610(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1036e8550(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCSpectaclesBoomboxScopeInitializationPluginRegistryServiceProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1036e7634; end: 1036e8307;  */

void FUN_1036e7634(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
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
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  FUN_1036e84a0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  *(undefined8 *)(param_2 + 0x58) = uStack_b0;
  *(undefined8 *)(param_2 + 0x60) = uStack_b8;
  func_0x0001000285a8(0x112e1ffe0,&UNK_10db1e9c0);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174(uStack_b0);
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar10 = uStack_c0;
  func_0x000107c6157c(uStack_c0);
  func_0x0001003b3b80();
  puVar11 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(param_2 + 0x18) = puVar11;
  puVar11 = PTR_PTR_1126ad4a0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar11;
  func_0x000107c61174();
  uVar10 = auStack_70[0];
  func_0x000107c61174();
  uVar12 = 0x53786f626d6f6f62;
  func_0x000107c5fadc(0x53786f626d6f6f62,0xec00000065706f63);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar12);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar14);
  uVar12 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(uVar14);
  uVar12 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f006f60);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(uVar14);
  uVar12 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f15a8b0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(uVar14);
  uVar12 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1de50);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1e710);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f00d550);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f00d360);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1df80);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f00d870);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar12);
  uVar12 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000002f;
  func_0x000107c5fadc(0xd00000000000002f,0x800000010f00d000);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c3e740(uVar14);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61574(uStack_c0);
  *param_1 = param_2;
  return;
}



/* Entry: 1036e8308; end: 1036e8393;  */

void FUN_1036e8308(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 1036e8394; end: 1036e839b;  */

undefined8 FUN_1036e8394(void)

{
  return 0x1b;
}



/* Entry: 1036e839c; end: 1036e841f;  */

void FUN_1036e839c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1036e84e0,param_2,FUN_1036e84e4,param_2,FUN_1036e850c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1036e8420; end: 1036e846f;  */

undefined8 FUN_1036e8420(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1036e8470; end: 1036e849f;  */

undefined ** FUN_1036e8470(void)

{
  return &PTR_DAT_113066ef8;
}



/* Entry: 1036e84a0; end: 1036e84bf;  */

void FUN_1036e84a0(void)

{
  func_0x000107c61168(&PTR_PTR_112f887b8);
  return;
}



/* Entry: 1036e84c0; end: 1036e84e3;  */

undefined1  [16] FUN_1036e84c0(void)

{
  return ZEXT816(0x1106834a8);
}


