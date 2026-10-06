/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109eb5594; end: 109eb56cb;  */

void FUN_109eb5594(undefined8 param_1,char *param_2)

{
  byte bVar1;
  char *pcVar2;
  undefined *puVar3;
  
  if (param_2[4] != '\x11') {
    if (param_2[4] != '\x13') {
      bVar1 = param_2[0xc];
      goto LAB_109eb5618;
    }
    _fwrite(&UNK_10f614be7,7,1,param_1);
    FUN_109eb5594(param_1,*(undefined8 *)(param_2 + 0x30));
    puVar3 = &UNK_10f614bef;
    goto LAB_109eb56b0;
  }
  bVar1 = param_2[0xc];
  if ((bVar1 >> 1 & 1) == 0) {
    pcVar2 = param_2;
    FUN_109eca058();
    if (pcVar2 != (char *)0x0) goto LAB_109eb5660;
LAB_109eb5688:
    FUN_109eca058();
  }
  else {
    pcVar2 = &UNK_10e05bf38 + *(long *)(param_2 + 0x18);
LAB_109eb5660:
    if (((*pcVar2 == 'g') && (pcVar2[1] == 'l')) && (pcVar2[2] == '_')) {
LAB_109eb5618:
      if ((bVar1 >> 1 & 1) == 0) {
        FUN_109eca058(param_2);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__fputs_11034c300)();
      return;
    }
    if ((bVar1 >> 1 & 1) == 0) goto LAB_109eb5688;
  }
  puVar3 = &UNK_10f614bf4;
LAB_109eb56b0:
  _fprintf(param_1,puVar3);
  return;
}



/* Entry: 109eb56cc; end: 109eb5737;  */

undefined8 * FUN_109eb56cc(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110b64928;
  if (param_1[1] != 0) {
    lVar1 = param_1[1] + -0x30;
    FUN_109f65aa4(lVar1);
    FUN_109f65ae0(lVar1);
  }
  func_0x000109f61a2c(param_1[2]);
  if (param_1[3] != 0) {
    lVar1 = param_1[3] + -0x30;
    FUN_109f65aa4(lVar1);
    FUN_109f65ae0(lVar1);
  }
  return param_1;
}



/* Entry: 109eb5738; end: 109eb574b;  */

void FUN_109eb5738(void)

{
  FUN_109eb56cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109eb574c; end: 109eb58b3;  */

void FUN_109eb574c(long param_1)

{
  int iVar1;
  
  if (0 < *(int *)(param_1 + 0x28)) {
    iVar1 = 0;
    do {
      _fwrite(&DAT_10f4944be,2,1,*(undefined8 *)(param_1 + 0x20));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x28));
  }
  return;
}



/* Entry: 109eb58b4; end: 109eb58cb;  */

void FUN_109eb58b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fwrite_11034c3a0)("error",5,1,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 109eb58cc; end: 109eb5dd7;  */

void FUN_109eb58cc(long *param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
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
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _fwrite(&UNK_10f6149c2,9,1,param_1[4]);
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (*(short *)(param_2 + 0x4e) != 0) {
    _snprintf(&uStack_60,0x20,&UNK_10f6149cc);
  }
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (*(int *)(param_2 + 0x50) != -1) {
    _snprintf(&uStack_80,0x20,&UNK_10f6149d8);
  }
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if ((*(uint *)(param_2 + 0x40) & 0x30100000) != 0) {
    _snprintf(&uStack_a0,0x20,&UNK_10f6149e5);
  }
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uVar2 = *(uint *)(param_2 + 0x58);
  if ((int)uVar2 < 0) {
    if ((uVar2 & 0x7fffffff) == 0) goto LAB_109eb59f0;
    puVar4 = &UNK_10f6149f3;
  }
  else {
    if (uVar2 == 0) goto LAB_109eb59f0;
    puVar4 = &UNK_10f614a08;
  }
  _snprintf(&uStack_c0,0x20,puVar4);
LAB_109eb59f0:
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (*(int *)(param_2 + 0x48) != 0) {
    _snprintf(&uStack_e0,0x20,&UNK_10f614a12);
  }
  _fprintf(param_1[4],&UNK_10f614aaf);
  FUN_109eb5594(param_1[4],*(undefined8 *)(param_2 + 0x20));
  plVar7 = (long *)param_1[4];
  func_0x000109eb57ac(param_1,param_2);
  puVar4 = &UNK_10f614add;
  _fprintf();
  if (*(long *)(param_2 + 0x78) != 0) {
    _fputc(0x20,param_1[4]);
    puVar4 = *(undefined **)(param_2 + 0x78);
    plVar7 = param_1;
    (**(code **)(*param_1 + 0x68))();
  }
  if (*(long *)(param_2 + 0x70) != 0) {
    _fputc(0x20,param_1[4]);
    puVar4 = *(undefined **)(param_2 + 0x70);
    (**(code **)(*param_1 + 0x68))();
    plVar7 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  FUN_109f61740(plVar7[2]);
  _fwrite(&UNK_10f614ae2,0xb,1,plVar7[4]);
  *(int *)(plVar7 + 5) = (int)plVar7[5] + 1;
  FUN_109eb5594(plVar7[4],*(undefined8 *)(puVar4 + 0x20));
  _fputc(10,plVar7[4]);
  func_0x000109eb574c(plVar7);
  _fwrite(&UNK_10f614aee,0xc,1,plVar7[4]);
  iVar5 = (int)plVar7[5];
  *(int *)(plVar7 + 5) = iVar5 + 1;
  plVar8 = *(long **)(puVar4 + 0x28);
  if (*plVar8 != 0) {
    do {
      func_0x000109eb574c(plVar7);
      (**(code **)(plVar8[-1] + 0x10))(plVar8 + -1,plVar7);
      _fputc(10,plVar7[4]);
      plVar8 = (long *)*plVar8;
    } while (*plVar8 != 0);
    iVar5 = (int)plVar7[5] + -1;
  }
  *(int *)(plVar7 + 5) = iVar5;
  func_0x000109eb574c(plVar7);
  _fwrite(&UNK_10f5af2ca,2,1,plVar7[4]);
  func_0x000109eb574c(plVar7);
  _fwrite(&UNK_10f6149ac,2,1,plVar7[4]);
  iVar5 = (int)plVar7[5];
  *(int *)(plVar7 + 5) = iVar5 + 1;
  plVar8 = *(long **)(puVar4 + 0x50);
  if (*plVar8 != 0) {
    do {
      func_0x000109eb574c(plVar7);
      (**(code **)(plVar8[-1] + 0x10))(plVar8 + -1,plVar7);
      _fputc(10,plVar7[4]);
      plVar8 = (long *)*plVar8;
    } while (*plVar8 != 0);
    iVar5 = (int)plVar7[5] + -1;
  }
  *(int *)(plVar7 + 5) = iVar5;
  func_0x000109eb574c(plVar7);
  _fwrite(&UNK_10f614afb,3,1,plVar7[4]);
  *(int *)(plVar7 + 5) = (int)plVar7[5] + -1;
  plVar7 = (long *)plVar7[2];
  puVar1 = (undefined8 *)((long *)plVar7[1])[1];
  plVar7[1] = *(long *)plVar7[1];
  *(int *)(plVar7 + 2) = (int)plVar7[2] + -1;
  _free();
  while (puVar1 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)puVar1[2];
    lVar9 = *plVar7;
    uVar10 = *puVar1;
    uVar3 = uVar10;
    (**(code **)(lVar9 + 8))(uVar10);
    FUN_109f64fdc(lVar9,uVar3,uVar10);
    if (puVar1[1] == 0) {
      if (lVar9 != 0) {
        lVar6 = *plVar7;
        *(undefined8 *)(lVar9 + 8) = *(undefined8 *)(lVar6 + 0x18);
        *(ulong *)(lVar6 + 0x40) =
             CONCAT44((int)((ulong)*(undefined8 *)(lVar6 + 0x40) >> 0x20) + 1,
                      (int)*(undefined8 *)(lVar6 + 0x40) + -1);
      }
    }
    else {
      *(undefined8 *)(lVar9 + 0x10) = puVar1[1];
    }
    _free(puVar1);
    puVar1 = puVar11;
  }
  return;
}



/* Entry: 109eb5dd8; end: 109eb5ea7;  */

void FUN_109eb5dd8(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  
  _fprintf(*(undefined8 *)(param_1 + 0x20),&UNK_10f614aff);
  iVar1 = *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x28) = iVar1 + 1;
  plVar2 = *(long **)(param_2 + 0x28);
  if (*plVar2 != 0) {
    do {
      FUN_109eb574c(param_1);
      (**(code **)(plVar2[-1] + 0x10))(plVar2 + -1,param_1);
      _fputc(10,*(undefined8 *)(param_1 + 0x20));
      plVar2 = (long *)*plVar2;
    } while (*plVar2 != 0);
    iVar1 = *(int *)(param_1 + 0x28) + -1;
  }
  *(int *)(param_1 + 0x28) = iVar1;
  FUN_109eb574c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fwrite_11034c3a0)(&UNK_10f591ebd,3,1,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 109eb5ea8; end: 109eb5f67;  */

void FUN_109eb5ea8(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  
  _fwrite(&UNK_10f614b10,0xc,1,*(undefined8 *)(param_1 + 0x20));
  FUN_109eb5594(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x20));
  _fprintf(*(undefined8 *)(param_1 + 0x20),&UNK_10f614b1d);
  if (*(char *)(param_2 + 0x50) != '\0') {
    uVar2 = 0;
    do {
      plVar1 = *(long **)(param_2 + 0x30 + uVar2 * 8);
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(byte *)(param_2 + 0x50));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fwrite_11034c3a0)(&UNK_10f48d1ae,2,1,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 109eb5f68; end: 109eb626f;  */

void FUN_109eb5f68(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  
  _fprintf(*(undefined8 *)(param_1 + 0x20),&UNK_10f614b22);
  if (*(int *)(param_2 + 0x28) == 0xb) {
    (**(code **)(**(long **)(param_2 + 0x30) + 0x10))(*(long **)(param_2 + 0x30),param_1);
    _fputc(0x20,*(undefined8 *)(param_1 + 0x20));
    plVar3 = *(long **)(param_2 + 0x38);
  }
  else {
    FUN_109eb5594(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x20));
    _fputc(0x20,*(undefined8 *)(param_1 + 0x20));
    (**(code **)(**(long **)(param_2 + 0x30) + 0x10))(*(long **)(param_2 + 0x30),param_1);
    _fputc(0x20,*(undefined8 *)(param_1 + 0x20));
    uVar1 = *(uint *)(param_2 + 0x28);
    if ((10 < uVar1) || ((1 << (ulong)(uVar1 & 0x1f) & 0x640U) == 0)) {
      (**(code **)(**(long **)(param_2 + 0x38) + 0x10))(*(long **)(param_2 + 0x38),param_1);
      _fputc(0x20,*(undefined8 *)(param_1 + 0x20));
      if ((*(int *)(param_2 + 0x28) != 7) && (*(int *)(param_2 + 0x28) != 0xb)) {
        _fprintf(*(undefined8 *)(param_1 + 0x20),&UNK_10f6132f0);
      }
      plVar3 = *(long **)(param_2 + 0x50);
      if (plVar3 == (long *)0x0) {
        _fputc(0x30,*(undefined8 *)(param_1 + 0x20));
      }
      else {
        (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
      }
      _fputc(0x20,*(undefined8 *)(param_1 + 0x20));
      uVar1 = *(uint *)(param_2 + 0x28);
    }
    if ((10 < uVar1) || ((1 << (ulong)(uVar1 & 0x1f) & 0x770U) == 0)) {
      plVar3 = *(long **)(param_2 + 0x40);
      if (plVar3 == (long *)0x0) {
        _fputc(0x31,*(undefined8 *)(param_1 + 0x20));
      }
      else {
        (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
      }
      if (*(long *)(param_2 + 0x48) == 0) {
        _fwrite(&UNK_10f614b27,3,1);
      }
      else {
        _fputc(0x20,*(undefined8 *)(param_1 + 0x20));
        (**(code **)(**(long **)(param_2 + 0x48) + 0x10))(*(long **)(param_2 + 0x48),param_1);
      }
    }
    if ((*(uint *)(param_2 + 0x28) < 4) && (*(uint *)(param_2 + 0x28) != 2)) {
      if (*(long *)(param_2 + 0x58) == 0) {
        _fwrite(&UNK_10f614b27,3,1);
      }
      else {
        _fputc(0x20,*(undefined8 *)(param_1 + 0x20));
        (**(code **)(**(long **)(param_2 + 0x58) + 0x10))(*(long **)(param_2 + 0x58),param_1);
      }
    }
    _fputc(0x20,*(undefined8 *)(param_1 + 0x20));
    iVar2 = *(int *)(param_2 + 0x28);
    if (iVar2 < 4) {
      if ((iVar2 != 1) && (iVar2 != 2)) {
        if (iVar2 == 3) {
          _fputc(0x28,*(undefined8 *)(param_1 + 0x20));
          (**(code **)(**(long **)(param_2 + 0x60) + 0x10))(*(long **)(param_2 + 0x60),param_1);
          _fputc(0x20,*(undefined8 *)(param_1 + 0x20));
          (**(code **)(**(long **)(param_2 + 0x68) + 0x10))(*(long **)(param_2 + 0x68),param_1);
          _fputc(0x29,*(undefined8 *)(param_1 + 0x20));
        }
        goto LAB_109eb61e8;
      }
    }
    else if (iVar2 < 6) {
      if ((iVar2 != 4) && (iVar2 != 5)) goto LAB_109eb61e8;
    }
    else if ((iVar2 != 6) && (iVar2 != 8)) goto LAB_109eb61e8;
    plVar3 = *(long **)(param_2 + 0x60);
  }
  (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
LAB_109eb61e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbe270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fputc_11034c2f8)(0x29,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 109eb6270; end: 109eb6387;  */

void FUN_109eb6270(long param_1,long param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uStack_60;
  ulong uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(ushort *)(param_2 + 0x30);
  uVar2 = CONCAT22(uVar1 >> 2,uVar1);
  uVar6 = NEON_ushl(CONCAT26(uVar1,CONCAT24(uVar1,CONCAT22(uVar1,uVar1))),0xfffafffc,2);
  uVar7 = CONCAT44((int)uVar6,uVar2) & 0x3000300030003;
  uStack_60 = (ulong)(CONCAT24((short)(uVar7 >> 0x10),uVar2) & 0xffff00000003);
  uStack_58 = (ulong)CONCAT24((short)(uVar7 >> 0x30),(uint)(ushort)(uVar7 >> 0x20));
  _fwrite(&UNK_10f614b2b,6,1,*(undefined8 *)(param_1 + 0x20));
  if ((*(ushort *)(param_2 + 0x30) & 0x700) != 0) {
    uVar7 = 0;
    do {
      _fputc((long)(char)(&UNK_10f6101d0)[*(uint *)((long)&uStack_60 + uVar7 * 4)],
             *(undefined8 *)(param_1 + 0x20));
      uVar7 = uVar7 + 1;
    } while (uVar7 < ((ulong)*(byte *)(param_2 + 0x31) & 7));
  }
  _fputc(0x20,*(undefined8 *)(param_1 + 0x20));
  plVar3 = *(long **)(param_2 + 0x28);
  (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
  plVar4 = *(long **)(param_1 + 0x20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__fputc_11034c2f8)(0x29);
    return;
  }
  ___stack_chk_fail();
  (**(code **)(*plVar4 + 0x40))(plVar4);
  lVar5 = plVar3[4];
  func_0x000109eb57ac(plVar3,plVar4);
  _fprintf(lVar5,&UNK_10f614b32);
  return;
}



/* Entry: 109eb6388; end: 109eb65bb;  */

void FUN_109eb6388(long param_1,long *param_2)

{
  undefined8 uVar1;
  
  (**(code **)(*param_2 + 0x40))(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000109eb57ac(param_1,param_2);
  _fprintf(uVar1,&UNK_10f614b32);
  return;
}



/* Entry: 109eb65bc; end: 109eb691f;  */

void FUN_109eb65bc(double param_1,double param_2,float param_3,long param_4,long param_5)

{
  code *pcVar1;
  uint uVar2;
  code cVar3;
  undefined1 uVar4;
  long *plVar5;
  undefined8 uVar6;
  int iVar7;
  code *pcVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  float fVar16;
  
  _fwrite(&UNK_10f614b6f,10,1,*(undefined8 *)(param_4 + 0x20));
  FUN_109eb5594(*(undefined8 *)(param_4 + 0x20),*(undefined8 *)(param_5 + 0x20));
  _fwrite(&UNK_10f466b5a,2,1,*(undefined8 *)(param_4 + 0x20));
  pcVar8 = *(code **)(param_5 + 0x20);
  cVar3 = pcVar8[4];
  if (cVar3 == (code)0x13) {
    uVar15 = *(uint *)(pcVar8 + 0x10);
    if (uVar15 != 0) {
      uVar10 = 0;
      do {
        uVar2 = uVar10;
        if (uVar15 - 1 <= uVar10) {
          uVar2 = uVar15 - 1;
        }
        uVar15 = 0;
        if (-1 < (int)uVar10) {
          uVar15 = uVar2;
        }
        plVar5 = *(long **)(*(long *)(param_5 + 0xa8) + (ulong)uVar15 * 8);
        (**(code **)(*plVar5 + 0x10))(plVar5,param_4);
        uVar10 = uVar10 + 1;
        uVar15 = *(uint *)(*(long *)(param_5 + 0x20) + 0x10);
      } while (uVar10 < uVar15);
    }
  }
  else {
    uVar4 = (int)((byte)cVar3 - 0x11) < 0;
    if ((byte)cVar3 == 0x11) {
      if (*(int *)(pcVar8 + 0x10) != 0) {
        lVar11 = 0;
        uVar12 = 0;
        do {
          _fprintf(*(undefined8 *)(param_4 + 0x20),&UNK_10f614b22);
          plVar5 = *(long **)(*(long *)(param_5 + 0xa8) + (lVar11 >> 0x1d));
          (**(code **)(*plVar5 + 0x10))(plVar5,param_4);
          _fputc(0x29,*(undefined8 *)(param_4 + 0x20));
          uVar12 = uVar12 + 1;
          lVar11 = lVar11 + 0x100000000;
        } while (uVar12 < *(uint *)(*(long *)(param_5 + 0x20) + 0x10));
      }
    }
    else if ((uint)(byte)pcVar8[0xe] * (uint)(byte)pcVar8[0xd] != 0) {
      lVar13 = 0;
      lVar14 = 0;
      uVar12 = 0;
      lVar11 = param_5 + 0x28;
      do {
        if (uVar12 != 0) {
          _fputc(0x20,*(undefined8 *)(param_4 + 0x20));
          pcVar8 = *(code **)(param_5 + 0x20);
        }
        fVar16 = SUB84(param_2,0);
        pcVar1 = pcVar8 + 4;
        pcVar8 = (code *)(ulong)(byte)*pcVar1;
        uVar9 = (ulong)(byte)pcVar8[0x10e06bda0] * 4 + 0x109eb6784;
        switch(*pcVar1) {
        case (code)0x0:
          break;
        case (code)0x1:
        case (code)0x10:
        case (code)0x23:
        case (code)0x81:
        case (code)0x8e:
        case (code)0x8f:
        case (code)0x90:
        case (code)0xbe:
        case (code)0xcb:
        case (code)0xe7:
        case (code)0xf4:
        case (code)0x37:
        case (code)0x38:
        case (code)0x50:
        case (code)0x82:
        case (code)0x9e:
        case (code)0xbf:
        case (code)0xcc:
        case (code)0xcd:
        case (code)0xe8:
        case (code)0xf5:
code_r0x000109eb684c:
code_r0x000109eb6850:
          break;
        case (code)0x2:
          uVar6 = *(undefined8 *)(param_4 + 0x20);
          uVar15 = *(uint *)(lVar11 + lVar13);
          goto code_r0x000109eb681c;
        case (code)0x3:
          uVar6 = *(undefined8 *)(param_4 + 0x20);
          uVar15 = (uint)*(short *)(lVar11 + uVar12 * 2);
          fVar16 = (float)((uVar15 & 0x7fff) << 0xd) * 5.192297e+33;
          param_2 = 5.92666793179754e-315;
          if (65536.0 <= fVar16) {
            fVar16 = (float)((uint)fVar16 | 0x7f800000);
          }
          uVar15 = (uint)fVar16 | uVar15 & 0x80000000;
code_r0x000109eb681c:
          param_1 = (double)(ulong)uVar15;
          FUN_109eb6920(uVar6);
          goto code_r0x000109eb6870;
        case (code)0x4:
          param_1 = *(double *)(lVar11 + lVar14);
          if (param_1 != 0.0) goto code_r0x000109eb6898;
          break;
        case (code)0x5:
        case (code)0x6:
        case (code)0xc:
        case (code)0xe:
        case (code)0xae:
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x109eb6920);
          (*pcVar8)();
        case (code)0x7:
          break;
        case (code)0x8:
          goto code_r0x000109eb684c;
        case (code)0x9:
        case (code)0xd:
        case (code)0xf:
        case (code)0x22:
        case (code)0x36:
        case (code)0x4f:
        case (code)0x69:
        case (code)0x6a:
        case (code)0x6b:
        case (code)0x6c:
        case (code)0x6d:
        case (code)0x6e:
        case (code)0x6f:
        case (code)0x70:
        case (code)0x71:
        case (code)0x72:
        case (code)0x73:
        case (code)0x9d:
        case (code)0xbc:
        case (code)0xe5:
          break;
        case (code)0xa:
        case (code)0x11:
        case (code)0xf6:
code_r0x000109eb6860:
code_r0x000109eb6864:
          break;
        case (code)0xb:
          goto code_r0x000109eb684c;
        case (code)0x12:
        case (code)0x17:
        case (code)0x1c:
        case (code)0x1e:
        case (code)0x25:
        case (code)0x30:
        case (code)0x32:
        case (code)0x39:
        case (code)0x49:
        case (code)0x4b:
        case (code)0x52:
        case (code)0x63:
        case (code)0x65:
        case (code)0x91:
        case (code)0x97:
        case (code)0xa0:
        case (code)0xa6:
        case (code)0xb6:
        case (code)0xb8:
        case (code)0xd6:
        case (code)0xd9:
        case (code)0xde:
        case (code)0xe0:
        case (code)0xfd:
          if (SUB84(param_1,0) != 0.0) {
            fVar16 = ABS(SUB84(param_1,0));
            goto code_r0x000109eb694c;
          }
        case (code)0x2b:
        case (code)0x3f:
        case (code)0x58:
        case (code)0x96:
        case (code)0xa9:
        case (code)0xce:
        case (code)0xd7:
        case (code)0xf7:
code_r0x000109eb693c:
code_r0x000109eb6940:
code_r0x000109eb6944:
LAB_109eb698c:
          _fprintf();
          return;
        case (code)0x13:
        case (code)0x16:
        case (code)0x21:
        case (code)0x26:
        case (code)0x28:
        case (code)0x35:
        case (code)0x3a:
        case (code)0x3c:
        case (code)0x4e:
        case (code)0x53:
        case (code)0x55:
        case (code)0x60:
        case (code)0x68:
        case (code)0x92:
        case (code)0xa1:
        case (code)0xa5:
        case (code)0xac:
        case (code)0xbb:
        case (code)0xd2:
        case (code)0xe3:
        case (code)0xfb:
code_r0x000109eb694c:
          pcVar8 = (code *)&UNK_10de75000;
        case (code)0x1d:
        case (code)0x31:
        case (code)0x45:
        case (code)0x4a:
        case (code)0x64:
        case (code)0xb7:
        case (code)0xdb:
        case (code)0xdf:
        case (code)0xff:
          param_3 = *(float *)(pcVar8 + 0x7d8);
code_r0x000109eb6954:
code_r0x000109eb6958:
          uVar4 = false;
          if (!NAN(fVar16) && !NAN(param_3)) {
            uVar4 = fVar16 < param_3;
          }
code_r0x000109eb695c:
          if ((bool)uVar4) {
code_r0x000109eb6960:
            goto LAB_109eb698c;
          }
          if (1e+06 < fVar16) goto LAB_109eb698c;
          goto code_r0x000109eb693c;
        default:
          goto code_r0x000109eb6900;
        case (code)0x15:
          goto code_r0x000109eb6944;
        case (code)0x18:
        case (code)0x5d:
        case (code)0xb2:
        case (code)0xda:
        case (code)0xfe:
          goto code_r0x000109eb693c;
        case (code)0x19:
        case (code)0x1f:
        case (code)0x33:
        case (code)0x4c:
        case (code)0x5e:
        case (code)0x66:
        case (code)0x9a:
        case (code)0xb3:
        case (code)0xb9:
        case (code)0xd8:
        case (code)0xe1:
          goto code_r0x000109eb6954;
        case (code)0x1b:
        case (code)0x29:
        case (code)0x2f:
        case (code)0x3d:
        case (code)0x48:
        case (code)0x56:
        case (code)0x62:
        case (code)0x94:
        case (code)0xa3:
        case (code)0xb5:
        case (code)0xdd:
          goto code_r0x000109eb695c;
        case (code)0x20:
        case (code)0x34:
        case (code)0x4d:
        case (code)0x67:
        case (code)0xb0:
        case (code)0xba:
        case (code)0xcf:
        case (code)0xe2:
        case (code)0xf8:
          goto code_r0x000109eb6940;
        case (code)0x24:
          goto code_r0x000109eb6860;
        case (code)0x2a:
        case (code)0x3e:
        case (code)0x44:
        case (code)0x57:
        case (code)0x95:
        case (code)0x99:
        case (code)0xa4:
        case (code)0xa7:
          goto code_r0x000109eb6908;
        case (code)0x2c:
        case (code)0x40:
        case (code)0x59:
        case (code)0xb1:
        case (code)0xd5:
          goto code_r0x000109eb6958;
        case (code)0x2d:
        case (code)0x41:
        case (code)0x46:
        case (code)0x5a:
        case (code)0x5c:
        case (code)0x5f:
        case (code)0x9b:
        case (code)0xaa:
        case (code)0xad:
        case (code)0xd1:
        case (code)0xfa:
          goto code_r0x000109eb6918;
        case (code)0x43:
        case (code)0xa8:
        case (code)0xd4:
          goto code_r0x000109eb690c;
        case (code)0x51:
          goto code_r0x000109eb6850;
        case (code)0x74:
        case (code)0x75:
        case (code)0x76:
        case (code)0x77:
        case (code)0x79:
        case (code)0x7a:
        case (code)0x7b:
        case (code)0x7d:
        case (code)0x7e:
        case (code)0x7f:
          goto code_r0x000109eb6b80;
        case (code)0x78:
          goto code_r0x000109eb6b7c;
        case (code)0x7c:
          (*pcVar8)();
code_r0x000109eb6b7c:
code_r0x000109eb6b80:
          _fwrite(&UNK_10f6149ac,2,1);
          iVar7 = *(int *)(param_4 + 0x28);
          *(int *)(param_4 + 0x28) = iVar7 + 1;
          plVar5 = *(long **)(param_5 + 0x28);
          if (*plVar5 != 0) {
            do {
              FUN_109eb574c(param_4);
              (**(code **)(plVar5[-1] + 0x10))(plVar5 + -1,param_4);
              _fputc(10,*(undefined8 *)(param_4 + 0x20));
              plVar5 = (long *)*plVar5;
            } while (*plVar5 != 0);
            iVar7 = *(int *)(param_4 + 0x28) + -1;
          }
          *(int *)(param_4 + 0x28) = iVar7;
          FUN_109eb574c(param_4);
          _fwrite(&UNK_10f5af2ca,2,1,*(undefined8 *)(param_4 + 0x20));
          FUN_109eb574c(param_4);
          if (*(long *)(param_5 + 0x48) != param_5 + 0x58) {
            _fwrite(&UNK_10f6149ac,2,1,*(undefined8 *)(param_4 + 0x20));
            iVar7 = *(int *)(param_4 + 0x28);
            *(int *)(param_4 + 0x28) = iVar7 + 1;
            plVar5 = *(long **)(param_5 + 0x48);
            if (*plVar5 != 0) {
              do {
                FUN_109eb574c(param_4);
                (**(code **)(plVar5[-1] + 0x10))(plVar5 + -1,param_4);
                _fputc(10,*(undefined8 *)(param_4 + 0x20));
                plVar5 = (long *)*plVar5;
              } while (*plVar5 != 0);
              iVar7 = *(int *)(param_4 + 0x28) + -1;
            }
            *(int *)(param_4 + 0x28) = iVar7;
            FUN_109eb574c(param_4);
          }
          goto code_r0x00010bdbe364;
        case (code)0x80:
        case (code)0x8c:
        case (code)0xbd:
        case (code)0xc9:
        case (code)0xe6:
        case (code)0xf2:
          goto code_r0x000109eb68bc;
        case (code)0x84:
        case (code)0xc1:
        case (code)0xea:
          goto code_r0x000109eb68a0;
        case (code)0x85:
        case (code)0x89:
        case (code)0xc2:
        case (code)0xc6:
        case (code)0xeb:
        case (code)0xef:
          goto code_r0x000109eb68b4;
        case (code)0x86:
        case (code)0xc3:
        case (code)0xec:
          goto code_r0x000109eb68c0;
        case (code)0x87:
        case (code)0xc4:
        case (code)0xed:
          goto code_r0x000109eb688c;
        case (code)0x88:
        case (code)0xc5:
        case (code)0xee:
          goto code_r0x000109eb6888;
        case (code)0x98:
          goto code_r0x000109eb6914;
        case (code)0x9c:
        case (code)0xe4:
code_r0x000109eb6898:
          param_2 = ABS(param_1);
          uVar4 = false;
          if (!NAN(param_2)) {
            uVar4 = param_2 < 1e-06;
          }
code_r0x000109eb68a0:
          if ((bool)uVar4) {
code_r0x000109eb68b4:
          }
          else {
code_r0x000109eb68bc:
code_r0x000109eb68c0:
          }
          break;
        case (code)0x9f:
          goto code_r0x000109eb6864;
        case (code)0xaf:
          goto code_r0x000109eb6910;
        case (code)0xd0:
        case (code)0xf9:
          goto code_r0x000109eb6960;
        }
        _fprintf();
code_r0x000109eb6870:
        uVar12 = uVar12 + 1;
        pcVar8 = *(code **)(param_5 + 0x20);
        uVar9 = (ulong)(byte)pcVar8[0xe] * (ulong)(byte)pcVar8[0xd];
        lVar14 = lVar14 + 8;
code_r0x000109eb6888:
        lVar13 = lVar13 + 4;
code_r0x000109eb688c:
        uVar4 = (long)(uVar12 - uVar9) < 0;
      } while (uVar12 < uVar9);
    }
  }
code_r0x000109eb6900:
code_r0x000109eb6908:
code_r0x000109eb690c:
code_r0x000109eb6910:
code_r0x000109eb6914:
code_r0x000109eb6918:
code_r0x00010bdbe364:
                    /* WARNING: Could not recover jumptable at 0x00010bdbe36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fwrite_11034c3a0)();
  return;
}



/* Entry: 109eb6920; end: 109eb699b;  */

void FUN_109eb6920(float param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (param_1 != 0.0) {
    if (ABS(param_1) < 1e-06) {
      puVar1 = &UNK_10f5af5ff;
      goto LAB_109eb698c;
    }
    if (1e+06 < ABS(param_1)) {
      puVar1 = &UNK_10f614b7f;
      goto LAB_109eb698c;
    }
  }
  puVar1 = &DAT_10f2e3e8d;
LAB_109eb698c:
  _fprintf(param_2,puVar1);
  return;
}



/* Entry: 109eb699c; end: 109eb6b1f;  */

void FUN_109eb699c(long param_1,long param_2)

{
  long *plVar1;
  
  _fprintf(*(undefined8 *)(param_1 + 0x20),&UNK_10f614b86);
  plVar1 = *(long **)(param_2 + 0x20);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
  }
  _fwrite(&UNK_10f466b5a,2,1,*(undefined8 *)(param_1 + 0x20));
  for (plVar1 = *(long **)(param_2 + 0x30); *plVar1 != 0; plVar1 = (long *)*plVar1) {
    (**(code **)(plVar1[-1] + 0x10))(plVar1 + -1,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fwrite_11034c3a0)(&UNK_10f614afb,3,1,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 109eb6b20; end: 109eb6b37;  */

void FUN_109eb6b20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fwrite_11034c3a0)(&UNK_10f614ba2,8,1,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 109eb6b38; end: 109eb6ccf;  */

void FUN_109eb6b38(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long *plVar5;
  
  _fwrite(&UNK_10f614bab,4,1,*(undefined8 *)(param_1 + 0x20));
  (**(code **)(**(long **)(param_2 + 0x20) + 0x10))(*(long **)(param_2 + 0x20),param_1);
  _fwrite(&UNK_10f6149ac,2,1,*(undefined8 *)(param_1 + 0x20));
  iVar4 = *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x28) = iVar4 + 1;
  plVar5 = *(long **)(param_2 + 0x28);
  if (*plVar5 != 0) {
    do {
      FUN_109eb574c(param_1);
      (**(code **)(plVar5[-1] + 0x10))(plVar5 + -1,param_1);
      _fputc(10,*(undefined8 *)(param_1 + 0x20));
      plVar5 = (long *)*plVar5;
    } while (*plVar5 != 0);
    iVar4 = *(int *)(param_1 + 0x28) + -1;
  }
  *(int *)(param_1 + 0x28) = iVar4;
  FUN_109eb574c(param_1);
  _fwrite(&UNK_10f5af2ca,2,1,*(undefined8 *)(param_1 + 0x20));
  FUN_109eb574c(param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (*(long *)(param_2 + 0x48) == param_2 + 0x58) {
    puVar1 = &UNK_10f614bb0;
    uVar2 = 4;
  }
  else {
    _fwrite(&UNK_10f6149ac,2,1,uVar3);
    iVar4 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x28) = iVar4 + 1;
    plVar5 = *(long **)(param_2 + 0x48);
    if (*plVar5 != 0) {
      do {
        FUN_109eb574c(param_1);
        (**(code **)(plVar5[-1] + 0x10))(plVar5 + -1,param_1);
        _fputc(10,*(undefined8 *)(param_1 + 0x20));
        plVar5 = (long *)*plVar5;
      } while (*plVar5 != 0);
      iVar4 = *(int *)(param_1 + 0x28) + -1;
    }
    *(int *)(param_1 + 0x28) = iVar4;
    FUN_109eb574c(param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = &UNK_10f614afb;
    uVar2 = 3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fwrite_11034c3a0)(puVar1,uVar2,1,uVar3);
  return;
}



/* Entry: 109eb6cd0; end: 109eb6d7b;  */

void FUN_109eb6cd0(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  
  _fwrite(&UNK_10f614bb5,8,1,*(undefined8 *)(param_1 + 0x20));
  iVar1 = *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x28) = iVar1 + 1;
  plVar2 = *(long **)(param_2 + 0x20);
  if (*plVar2 != 0) {
    do {
      FUN_109eb574c(param_1);
      (**(code **)(plVar2[-1] + 0x10))(plVar2 + -1,param_1);
      _fputc(10,*(undefined8 *)(param_1 + 0x20));
      plVar2 = (long *)*plVar2;
    } while (*plVar2 != 0);
    iVar1 = *(int *)(param_1 + 0x28) + -1;
  }
  *(int *)(param_1 + 0x28) = iVar1;
  FUN_109eb574c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fwrite_11034c3a0)(&UNK_10f614afb,3,1,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 109eb6d7c; end: 109eb6da3;  */

void FUN_109eb6d7c(long param_1,long param_2)

{
  char *pcVar1;
  
  pcVar1 = "break";
  if (*(int *)(param_2 + 0x1c) != 0) {
    pcVar1 = "continue";
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fputs_11034c300)(pcVar1,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 109eb6da4; end: 109eb6e63;  */

void FUN_109eb6da4(long param_1,long param_2)

{
  _fwrite(&UNK_10f614bbe,0xd,1,*(undefined8 *)(param_1 + 0x20));
  (**(code **)(**(long **)(param_2 + 0x20) + 0x10))(*(long **)(param_2 + 0x20),param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fwrite_11034c3a0)(&UNK_10f5af2ca,2,1,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 109eb6e64; end: 109eb6e7b;  */

void FUN_109eb6e64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fwrite_11034c3a0)(&UNK_10f614bdc,10,1,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 109eb6e7c; end: 109eb6f5b;  */

undefined8 FUN_109eb6e7c(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  (**(code **)(*param_1 + 0x130))(param_1,param_2 + 0x38);
  (**(code **)(*param_1 + 0x130))(param_1,param_2 + 0x40);
  (**(code **)(*param_1 + 0x130))(param_1,param_2 + 0x48);
  (**(code **)(*param_1 + 0x130))(param_1,param_2 + 0x50);
  (**(code **)(*param_1 + 0x130))(param_1,param_2 + 0x58);
  uVar1 = *(uint *)(param_2 + 0x28);
  if (uVar1 < 9) {
    if ((1 << (ulong)(uVar1 & 0x1f) & 0x176U) == 0) {
      if (uVar1 != 3) {
        return 0;
      }
      (**(code **)(*param_1 + 0x130))(param_1,param_2 + 0x60);
      lVar2 = 0x68;
    }
    else {
      lVar2 = 0x60;
    }
    (**(code **)(*param_1 + 0x130))(param_1,param_2 + lVar2);
  }
  return 0;
}



/* Entry: 109eb6f5c; end: 109eb6fff;  */

undefined8 FUN_109eb6f5c(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plStack_48;
  
  plVar4 = *(long **)(param_2 + 0x30);
  plVar1 = (long *)*plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    while( true ) {
      plVar2 = plVar1;
      lVar5 = *plVar2;
      plStack_48 = plVar4 + -1;
      (**(code **)(*param_1 + 0x130))(param_1,&plStack_48);
      if (plStack_48 != plVar4 + -1) {
        puVar3 = (undefined8 *)plVar4[1];
        lVar6 = *plVar4;
        plStack_48[2] = plVar4[1];
        plStack_48[1] = lVar6;
        plVar1 = (long *)0x0;
        if (plStack_48 != (long *)0x0) {
          plVar1 = plStack_48 + 1;
        }
        *puVar3 = plVar1;
        *(long **)(*plVar4 + 8) = plVar1;
      }
      if (lVar5 == 0) break;
      plVar1 = (long *)*plVar2;
      plVar4 = plVar2;
    }
  }
  return 0;
}



/* Entry: 109eb7000; end: 109eb7063;  */

undefined8 FUN_109eb7000(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (*(char *)(param_2 + 0x50) != '\0') {
    uVar2 = 0;
    lVar1 = param_2 + 0x30;
    do {
      (**(code **)(*param_1 + 0x130))(param_1,lVar1);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 8;
    } while (uVar2 < *(byte *)(param_2 + 0x50));
  }
  return 0;
}



/* Entry: 109eb7064; end: 109eb709f;  */

undefined8 FUN_109eb7064(void)

{
  FUN_109eb6e7c();
  return 0;
}



/* Entry: 109eb70a0; end: 109eb70fb;  */

undefined8 FUN_109eb70a0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1[6];
  *(undefined1 *)(param_1 + 6) = 0;
  (**(code **)(*param_1 + 0x130))(param_1,param_2 + 0x30);
  *(char *)(param_1 + 6) = (char)lVar1;
  (**(code **)(*param_1 + 0x130))(param_1,param_2 + 0x28);
  return 0;
}



/* Entry: 109eb70fc; end: 109eb720f;  */

undefined8 FUN_109eb70fc(long *param_1,long param_2)

{
  (**(code **)(*param_1 + 0x130))(param_1,param_2 + 0x28);
  return 0;
}



/* Entry: 109eb7210; end: 109eb7273;  */

undefined8 FUN_109eb7210(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (*(char *)(param_2 + 0x50) != '\0') {
    uVar2 = 0;
    lVar1 = param_2 + 0x30;
    do {
      (**(code **)(*param_1 + 0x130))(param_1,lVar1);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 8;
    } while (uVar2 < *(byte *)(param_2 + 0x50));
  }
  return 0;
}



/* Entry: 109eb7274; end: 109eb72af;  */

undefined8 FUN_109eb7274(void)

{
  FUN_109eb6e7c();
  return 0;
}



/* Entry: 109eb72b0; end: 109eb730b;  */

undefined8 FUN_109eb72b0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1[6];
  *(undefined1 *)(param_1 + 6) = 0;
  (**(code **)(*param_1 + 0x130))(param_1,param_2 + 0x30);
  *(char *)(param_1 + 6) = (char)lVar1;
  (**(code **)(*param_1 + 0x130))(param_1,param_2 + 0x28);
  return 0;
}



/* Entry: 109eb730c; end: 109eb741f;  */

undefined8 FUN_109eb730c(long *param_1,long param_2)

{
  (**(code **)(*param_1 + 0x130))(param_1,param_2 + 0x28);
  return 0;
}



/* Entry: 109eb7420; end: 109eb7557;  */

void FUN_109eb7420(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined8 uStack_97;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  
  iVar1 = 0xf614bfa;
  _getenv();
  FUN_109f68700();
  FUN_109f68808();
  if (iVar1 != 0) {
    uStack_97 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_9f = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    ppuStack_c0 = &PTR_FUN_110b64b00;
    uVar2 = 0;
    FUN_109f6695c(0,0x109f65648,FUN_109f65684);
    uStack_88 = 0;
    uStack_b0 = 0x109eb75a8;
    uStack_a0 = (undefined1)uVar2;
    uStack_9f = (undefined7)((ulong)uVar2 >> 8);
    uStack_80 = uVar2;
    FUN_109eb4670(&ppuStack_c0,param_1);
    param_1 = (long *)*param_1;
    lVar3 = *param_1;
    while (lVar3 != 0) {
      uStack_48 = 0;
      uStack_70 = 0;
      ppuStack_78 = &PTR_FUN_110b646d0;
      pcStack_68 = FUN_109eb7558;
      uStack_58 = 0;
      uStack_57 = 0;
      uStack_50 = 0;
      uStack_4f = 0;
      uStack_60 = 0;
      (**(code **)(param_1[-1] + 0x18))(param_1 + -1,&ppuStack_78);
      param_1 = (long *)*param_1;
      lVar3 = *param_1;
    }
    ppuStack_c0 = &PTR_FUN_110b64b00;
    func_0x000109f66a2c(uStack_80,0);
  }
  return;
}



/* Entry: 109eb7558; end: 109eb77ef;  */

void FUN_109eb7558(long param_1)

{
  if (0x14 < *(int *)(param_1 + 0x18)) {
    _puts(&UNK_10f6150fd);
    FUN_109eb54dc(param_1,*(undefined8 *)PTR____stdoutp_11034bdd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__putchar_11034c9b0)(10);
    return;
  }
  return;
}



/* Entry: 109eb77f0; end: 109eb78ef;  */

undefined8 FUN_109eb77f0(long param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_2 + 0x28);
  if ((lVar6 == 0) || (*(int *)(lVar6 + 0x18) != 7)) {
    puVar2 = &UNK_10f614c87;
  }
  else {
    for (lVar3 = *(long *)(lVar6 + 0x20); *(char *)(lVar3 + 4) == '\x13';
        lVar3 = *(long *)(lVar3 + 0x30)) {
    }
    for (lVar5 = *(long *)(param_2 + 0x20); *(char *)(lVar5 + 4) == '\x13';
        lVar5 = *(long *)(lVar5 + 0x30)) {
    }
    if (lVar3 == lVar5) {
      lVar5 = *(long *)(param_1 + 0x40);
      lVar3 = lVar6;
      (**(code **)(lVar5 + 0x10))();
      FUN_109f66ba8(lVar5,lVar3,lVar6);
      if (lVar5 != 0) {
        func_0x000109eb75a8(param_2,*(undefined8 *)(param_1 + 0x20));
        return 0;
      }
    }
    else {
      lVar3 = param_2;
      _printf(&UNK_10f614cc4);
      FUN_109eb54cc(param_2);
      _putchar(10);
      _abort();
    }
    puVar2 = &UNK_10f614d01;
    param_2 = lVar3;
  }
  _printf();
  _abort();
  if (*(long *)(puVar2 + 0x38) == *(long *)(param_2 + 0x78)) {
    if (*(long *)(param_2 + 0x20) != 0) {
      func_0x000109eb75a8(param_2,*(undefined8 *)(puVar2 + 0x20));
      return 0;
    }
    puVar2 = &UNK_10f614d69;
  }
  else {
    _puts(&UNK_10f6151b5);
    puVar2 = &UNK_10f614d47;
  }
  _printf();
  _abort();
  if (*(long *)(puVar2 + 0x38) != 0) goto LAB_109eb7a0c;
  *(long *)(puVar2 + 0x38) = param_2;
  func_0x000109eb75a8(param_2,*(undefined8 *)(puVar2 + 0x20));
  plVar4 = *(long **)(param_2 + 0x28);
  do {
    if ((long *)*plVar4 == (long *)0x0) {
      return 0;
    }
    plVar1 = plVar4 + 2;
    plVar4 = (long *)*plVar4;
  } while ((int)*plVar1 == 0xb);
  do {
    _printf();
    _abort();
LAB_109eb7a0c:
    _puts(&UNK_10f6151f1);
  } while( true );
}



/* Entry: 109eb78f0; end: 109eb7a3f;  */

undefined8 FUN_109eb78f0(long param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x38) == *(long *)(param_2 + 0x78)) {
    if (*(long *)(param_2 + 0x20) != 0) {
      func_0x000109eb75a8(param_2,*(undefined8 *)(param_1 + 0x20));
      return 0;
    }
    puVar2 = &UNK_10f614d69;
  }
  else {
    _puts(&UNK_10f6151b5);
    puVar2 = &UNK_10f614d47;
  }
  _printf();
  _abort();
  if (*(long *)(puVar2 + 0x38) != 0) goto LAB_109eb7a0c;
  *(long *)(puVar2 + 0x38) = param_2;
  func_0x000109eb75a8(param_2,*(undefined8 *)(puVar2 + 0x20));
  plVar3 = *(long **)(param_2 + 0x28);
  do {
    if ((long *)*plVar3 == (long *)0x0) {
      return 0;
    }
    plVar1 = plVar3 + 2;
    plVar3 = (long *)*plVar3;
  } while ((int)*plVar1 == 0xb);
  do {
    _printf();
    _abort();
LAB_109eb7a0c:
    _puts(&UNK_10f6151f1);
  } while( true );
}



/* Entry: 109eb7a40; end: 109eb7a53;  */

undefined8 FUN_109eb7a40(long param_1)

{
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}



/* Entry: 109eb7a54; end: 109eb7e4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_109eb7a54(undefined8 param_1,long param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined1 auVar3 [14];
  bool bVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  ulong *puVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  undefined8 uVar23;
  ulong uVar24;
  undefined1 auVar25 [16];
  ulong uStack_40;
  ulong uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(ushort *)(param_2 + 0x30);
  uVar23 = NEON_ushl(CONCAT26(uVar2,CONCAT24(uVar2,CONCAT22(uVar2,uVar2))),0xfffafffc,2);
  uVar24 = CONCAT44((int)uVar23,CONCAT22(uVar2 >> 2,uVar2)) & 0x3000300030003;
  uStack_40 = CONCAT26(0,CONCAT24((short)(uVar24 >> 0x10),(uint)(ushort)uVar24));
  auVar3._8_2_ = (short)(uVar24 >> 0x20);
  auVar3._0_8_ = uStack_40;
  auVar3._10_2_ = 0;
  auVar3._12_2_ = (short)(uVar24 >> 0x30);
  uStack_38 = (ulong)auVar3._8_6_;
  uVar24 = (ulong)*(byte *)(*(long *)(param_2 + 0x20) + 0xd);
  lVar9 = param_2;
  if (uVar24 != 0) {
    puVar18 = &uStack_40;
    do {
      if ((uint)*(byte *)(*(long *)(*(long *)(param_2 + 0x28) + 0x20) + 0xd) <= (uint)*puVar18) {
        _printf(&UNK_10f614dec);
        FUN_109eb54cc(param_2);
        _abort();
        goto LAB_109eb7b24;
      }
      uVar24 = uVar24 - 1;
      puVar18 = (ulong *)((long)puVar18 + 4);
    } while (uVar24 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
    return (undefined8 *)0x0;
  }
LAB_109eb7b24:
  ___stack_chk_fail();
  lVar14 = *(long *)(*(long *)(lVar9 + 0x28) + 0x20);
  uVar8 = *(uint *)(lVar14 + 4);
  if ((uVar8 & 0xff) == 0x13) {
    if (*(long *)(lVar14 + 0x30) == *(long *)(lVar9 + 0x20)) {
LAB_109eb7bac:
      lVar14 = *(long *)(*(long *)(lVar9 + 0x30) + 0x20);
      if ((*(char *)(lVar14 + 0xd) == '\x01') &&
         (uVar8 = *(uint *)(lVar14 + 4), (uVar8 & 0xf0) == 0)) {
        if ((uVar8 & 0xe) == 0 || (uVar8 & 0xf) - 7 < 2) {
          return (undefined8 *)0x0;
        }
        FUN_109ec69d4();
        puVar5 = &UNK_10f614f23;
      }
      else {
        FUN_109ec69d4();
        puVar5 = &UNK_10f614ee9;
      }
      _printf(puVar5);
      _abort();
LAB_109eb7c2c:
      puVar5 = &UNK_10f614eb9;
    }
    else {
      puVar5 = &UNK_10f614e76;
    }
  }
  else {
    if ((1 < *(byte *)(lVar14 + 0xe) && (uVar8 & 0xff) - 2 < 3) ||
       ((*(byte *)(lVar14 + 0xe) == 1 && 1 < *(byte *)(lVar14 + 0xd)) && (uVar8 & 0xfc) < 0xc)) {
      if ((uint)*(byte *)(*(long *)(lVar9 + 0x20) + 4) == (uVar8 & 0xff)) goto LAB_109eb7bac;
      goto LAB_109eb7c2c;
    }
    puVar5 = &UNK_10f614e2b;
  }
  lVar14 = lVar9;
  _printf(puVar5);
  FUN_109eb54cc(lVar9);
  _putchar(10);
  _abort();
  lVar9 = *(long *)(*(long *)(lVar14 + 0x28) + 0x20);
  if (*(byte *)(lVar9 + 4) - 0x11 < 2) {
    if (*(long *)(*(long *)(lVar9 + 0x30) + (long)*(int *)(lVar14 + 0x30) * 0x30) ==
        *(long *)(lVar14 + 0x20)) {
      return (undefined8 *)0x0;
    }
    puVar5 = &UNK_10f614f94;
  }
  else {
    puVar5 = &UNK_10f614f5e;
  }
  lVar9 = lVar14;
  _printf(puVar5);
  FUN_109eb54cc(lVar14);
  lVar14 = 10;
  _putchar();
  _abort();
  lVar20 = *(long *)(lVar9 + 0x20);
  lVar15 = *(long *)(lVar20 + 0x20);
  if (*(char *)(lVar15 + 0xd) == '\0') {
LAB_109eb7db4:
    lVar19 = *(long *)(*(long *)(lVar9 + 0x28) + 0x20);
    uVar8 = *(uint *)(lVar15 + 4);
LAB_109eb7dc0:
    if ((uint)*(byte *)(lVar19 + 4) == (uVar8 & 0xff)) {
      func_0x000109eb75a8(lVar9,*(undefined8 *)(lVar14 + 0x20));
      return (undefined8 *)0x0;
    }
    lVar14 = lVar9;
    _puts(&UNK_10f615230);
    FUN_109eb54cc(lVar20);
    _putchar(10);
    FUN_109eb54cc(*(undefined8 *)(lVar9 + 0x28));
    _putchar(10);
    _abort();
    lVar9 = lVar14;
LAB_109eb7e34:
    lVar14 = lVar9;
    _printf(&UNK_10f614fd7);
  }
  else {
    if (*(char *)(lVar15 + 0xd) != '\x01') {
      if ((*(char *)(lVar15 + 0xe) != '\x01') ||
         (uVar8 = *(uint *)(lVar15 + 4), 0xb < (uVar8 & 0xfc))) goto LAB_109eb7db4;
      bVar1 = *(byte *)(lVar9 + 0x30);
      if ((bVar1 & 0xf) != 0) goto LAB_109eb7d68;
      goto LAB_109eb7e34;
    }
    uVar8 = *(uint *)(lVar15 + 4);
    if ((uVar8 & 0xf0) != 0) goto LAB_109eb7db4;
    bVar1 = *(byte *)(lVar9 + 0x30);
    if ((bVar1 & 0xf) == 0) goto LAB_109eb7e34;
LAB_109eb7d68:
    uVar13 = bVar1 & 0xf;
    auVar25._0_8_ = (ulong)CONCAT14(bVar1,(uint)bVar1) & 0xf0000000f;
    auVar25._8_4_ = uVar13;
    auVar25._12_4_ = uVar13;
    auVar25 = NEON_ushl(auVar25,_UNK_10e06be10,4);
    uVar24 = auVar25._0_8_ & 0xfffffff1fffffff1;
    lVar19 = *(long *)(*(long *)(lVar9 + 0x28) + 0x20);
    if ((int)uVar24 + (int)(uVar24 >> 0x20) +
        (auVar25._8_4_ & 0xfffffff1) + (auVar25._12_4_ & 0xfffffff1) ==
        (uint)*(byte *)(lVar19 + 0xd)) goto LAB_109eb7dc0;
    lVar14 = lVar9;
    _printf(&UNK_10f61500a);
  }
  FUN_109eb54cc(lVar9);
  _abort();
  lVar15 = *(long *)(lVar14 + 0x28);
  lVar9 = lVar14;
  if (*(int *)(lVar15 + 0x18) == 0xb) {
    lVar20 = lVar15;
    if (*(long *)(lVar14 + 0x20) == 0) {
LAB_109eb7ebc:
      lVar15 = lVar20;
      if (*(undefined **)(lVar20 + 0x20) != &DAT_10e05d768) {
        puVar5 = &UNK_10f615261;
        goto LAB_109eb7ff4;
      }
    }
    else {
      lVar20 = *(long *)(lVar15 + 0x20);
      if (*(long *)(*(long *)(lVar14 + 0x20) + 0x20) != lVar20) {
        FUN_109ec69d4();
        FUN_109ec69d4();
        _printf(&UNK_10f61506e);
        _abort();
        goto LAB_109eb7ebc;
      }
    }
    plVar10 = (long *)**(long **)(lVar15 + 0x28);
    bVar4 = plVar10 == (long *)0x0;
    plVar16 = (long *)**(long **)(lVar14 + 0x30);
    if (bVar4 == (plVar16 == (long *)0x0)) {
      plVar21 = *(long **)(lVar14 + 0x30);
      plVar22 = *(long **)(lVar15 + 0x28);
      do {
        plVar17 = plVar16;
        plVar11 = plVar10;
        if (bVar4) {
          return (undefined8 *)0x0;
        }
        puVar5 = &UNK_10f6152c1;
        if (plVar22[3] != plVar21[3]) break;
        if ((*(uint *)(plVar22 + 7) >> 0xb & 0xf) - 7 < 2) {
          plVar10 = plVar21 + -1;
          lVar9 = 0;
          (**(code **)(*plVar10 + 0x38))();
          if ((int)plVar10 == 0) {
            puVar5 = &UNK_10f615293;
            break;
          }
          plVar11 = (long *)*plVar22;
          plVar17 = (long *)*plVar21;
        }
        bVar4 = (long *)*plVar11 == (long *)0x0;
        plVar10 = (long *)*plVar11;
        plVar16 = (long *)*plVar17;
        puVar5 = &UNK_10f6152e2;
        plVar21 = plVar17;
        plVar22 = plVar11;
      } while (bVar4 == ((long *)*plVar17 == (long *)0x0));
    }
    else {
      puVar5 = &UNK_10f6152e2;
    }
    _puts(puVar5);
    FUN_109eb54cc(lVar14);
    _puts(&UNK_10f61530e);
    FUN_109eb54cc(lVar15);
    _abort();
  }
  puVar5 = &UNK_10f615316;
LAB_109eb7ff4:
  _puts();
  _abort();
  if (*(long *)(puVar5 + 0x38) != 0) {
    return (undefined8 *)0x0;
  }
  _puts(&UNK_10f615349);
  _abort();
  if ((*(long *)(lVar9 + 0x20) != 0) &&
     (*(undefined **)(*(long *)(lVar9 + 0x20) + 0x20) != &DAT_10e05d7a0)) {
    lVar14 = lVar9;
    FUN_109ec69d4();
    _printf(&UNK_10f6150a4);
    FUN_109eb54cc(lVar9);
    _putchar(10);
    _abort();
    if (*(undefined **)(*(long *)(lVar14 + 0x20) + 0x20) == &DAT_10e05d7a0) {
      return (undefined8 *)0x0;
    }
    FUN_109ec69d4();
    _printf(&UNK_10f6150d3);
    FUN_109eb54cc(lVar14);
    puVar6 = (undefined8 *)0xa;
    _putchar();
    _abort();
    *(undefined8 *)((long)puVar6 + 0x29) = 0;
    *(undefined8 *)((long)puVar6 + 0x21) = 0;
    puVar6[4] = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[1] = 0;
    *puVar6 = &PTR_FUN_110b64c58;
    puVar7 = (undefined8 *)0x30;
    _malloc();
    if (puVar7 == (undefined8 *)0x0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      puVar7[4] = 0;
      puVar12 = puVar7 + 6;
      puVar7[1] = 0;
      *puVar7 = 0;
      puVar7[3] = 0;
      puVar7[2] = 0;
    }
    puVar6[8] = puVar12;
    uVar23 = 0;
    FUN_109f64c74(0,0x109f65648,FUN_109f65684);
    puVar6[7] = uVar23;
    *(undefined1 *)(puVar6 + 9) = 1;
    return puVar6;
  }
  return (undefined8 *)0x0;
}



/* Entry: 109eb7e50; end: 109eb7ffb;  */

undefined8 * FUN_109eb7e50(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  
  lVar13 = *(long *)(param_2 + 0x28);
  lVar7 = param_2;
  if (*(int *)(lVar13 + 0x18) == 0xb) {
    lVar2 = lVar13;
    if (*(long *)(param_2 + 0x20) == 0) {
LAB_109eb7ebc:
      lVar13 = lVar2;
      if (*(undefined **)(lVar2 + 0x20) != &DAT_10e05d768) {
        puVar3 = &UNK_10f615261;
        goto LAB_109eb7ff4;
      }
    }
    else {
      lVar2 = *(long *)(lVar13 + 0x20);
      if (*(long *)(*(long *)(param_2 + 0x20) + 0x20) != lVar2) {
        FUN_109ec69d4();
        FUN_109ec69d4();
        _printf(&UNK_10f61506e);
        _abort();
        goto LAB_109eb7ebc;
      }
    }
    plVar8 = (long *)**(long **)(lVar13 + 0x28);
    bVar1 = plVar8 == (long *)0x0;
    plVar11 = (long *)**(long **)(param_2 + 0x30);
    if (bVar1 == (plVar11 == (long *)0x0)) {
      plVar14 = *(long **)(param_2 + 0x30);
      plVar15 = *(long **)(lVar13 + 0x28);
      do {
        plVar12 = plVar11;
        plVar9 = plVar8;
        if (bVar1) {
          return (undefined8 *)0x0;
        }
        puVar3 = &UNK_10f6152c1;
        if (plVar15[3] != plVar14[3]) break;
        if ((*(uint *)(plVar15 + 7) >> 0xb & 0xf) - 7 < 2) {
          plVar8 = plVar14 + -1;
          lVar7 = 0;
          (**(code **)(*plVar8 + 0x38))();
          if ((int)plVar8 == 0) {
            puVar3 = &UNK_10f615293;
            break;
          }
          plVar9 = (long *)*plVar15;
          plVar12 = (long *)*plVar14;
        }
        bVar1 = (long *)*plVar9 == (long *)0x0;
        plVar8 = (long *)*plVar9;
        plVar11 = (long *)*plVar12;
        puVar3 = &UNK_10f6152e2;
        plVar14 = plVar12;
        plVar15 = plVar9;
      } while (bVar1 == ((long *)*plVar12 == (long *)0x0));
    }
    else {
      puVar3 = &UNK_10f6152e2;
    }
    _puts(puVar3);
    FUN_109eb54cc(param_2);
    _puts(&UNK_10f61530e);
    FUN_109eb54cc(lVar13);
    _abort();
  }
  puVar3 = &UNK_10f615316;
LAB_109eb7ff4:
  _puts();
  _abort();
  if (*(long *)(puVar3 + 0x38) != 0) {
    return (undefined8 *)0x0;
  }
  _puts(&UNK_10f615349);
  _abort();
  if ((*(long *)(lVar7 + 0x20) != 0) &&
     (*(undefined **)(*(long *)(lVar7 + 0x20) + 0x20) != &DAT_10e05d7a0)) {
    lVar13 = lVar7;
    FUN_109ec69d4();
    _printf(&UNK_10f6150a4);
    FUN_109eb54cc(lVar7);
    _putchar(10);
    _abort();
    if (*(undefined **)(*(long *)(lVar13 + 0x20) + 0x20) != &DAT_10e05d7a0) {
      FUN_109ec69d4();
      _printf(&UNK_10f6150d3);
      FUN_109eb54cc(lVar13);
      puVar4 = (undefined8 *)0xa;
      _putchar();
      _abort();
      *(undefined8 *)((long)puVar4 + 0x29) = 0;
      *(undefined8 *)((long)puVar4 + 0x21) = 0;
      puVar4[4] = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar4[1] = 0;
      *puVar4 = &PTR_FUN_110b64c58;
      puVar5 = (undefined8 *)0x30;
      _malloc();
      if (puVar5 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)0x0;
      }
      else {
        puVar5[4] = 0;
        puVar10 = puVar5 + 6;
        puVar5[1] = 0;
        *puVar5 = 0;
        puVar5[3] = 0;
        puVar5[2] = 0;
      }
      puVar4[8] = puVar10;
      uVar6 = 0;
      FUN_109f64c74(0,0x109f65648,FUN_109f65684);
      puVar4[7] = uVar6;
      *(undefined1 *)(puVar4 + 9) = 1;
      return puVar4;
    }
    return (undefined8 *)0x0;
  }
  return (undefined8 *)0x0;
}



/* Entry: 109eb7ffc; end: 109eb8023;  */

undefined8 * FUN_109eb7ffc(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    return (undefined8 *)0x0;
  }
  _puts(&UNK_10f615349);
  _abort();
  if ((*(long *)(param_2 + 0x20) != 0) &&
     (*(undefined **)(*(long *)(param_2 + 0x20) + 0x20) != &DAT_10e05d7a0)) {
    lVar4 = param_2;
    FUN_109ec69d4();
    _printf(&UNK_10f6150a4);
    FUN_109eb54cc(param_2);
    _putchar(10);
    _abort();
    if (*(undefined **)(*(long *)(lVar4 + 0x20) + 0x20) == &DAT_10e05d7a0) {
      return (undefined8 *)0x0;
    }
    FUN_109ec69d4();
    _printf(&UNK_10f6150d3);
    FUN_109eb54cc(lVar4);
    puVar1 = (undefined8 *)0xa;
    _putchar();
    _abort();
    *(undefined8 *)((long)puVar1 + 0x29) = 0;
    *(undefined8 *)((long)puVar1 + 0x21) = 0;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = &PTR_FUN_110b64c58;
    puVar2 = (undefined8 *)0x30;
    _malloc();
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      puVar2[4] = 0;
      puVar5 = puVar2 + 6;
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
    }
    puVar1[8] = puVar5;
    uVar3 = 0;
    FUN_109f64c74(0,0x109f65648,FUN_109f65684);
    puVar1[7] = uVar3;
    *(undefined1 *)(puVar1 + 9) = 1;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



/* Entry: 109eb8024; end: 109eb8207;  */

undefined8 * FUN_109eb8024(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if ((*(long *)(param_2 + 0x20) != 0) &&
     (*(undefined **)(*(long *)(param_2 + 0x20) + 0x20) != &DAT_10e05d7a0)) {
    lVar4 = param_2;
    FUN_109ec69d4();
    _printf(&UNK_10f6150a4);
    FUN_109eb54cc(param_2);
    _putchar(10);
    _abort();
    if (*(undefined **)(*(long *)(lVar4 + 0x20) + 0x20) == &DAT_10e05d7a0) {
      return (undefined8 *)0x0;
    }
    FUN_109ec69d4();
    _printf(&UNK_10f6150d3);
    FUN_109eb54cc(lVar4);
    puVar1 = (undefined8 *)0xa;
    _putchar();
    _abort();
    *(undefined8 *)((long)puVar1 + 0x29) = 0;
    *(undefined8 *)((long)puVar1 + 0x21) = 0;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = &PTR_FUN_110b64c58;
    puVar2 = (undefined8 *)0x30;
    _malloc();
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      puVar2[4] = 0;
      puVar5 = puVar2 + 6;
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
    }
    puVar1[8] = puVar5;
    uVar3 = 0;
    FUN_109f64c74(0,0x109f65648,FUN_109f65684);
    puVar1[7] = uVar3;
    *(undefined1 *)(puVar1 + 9) = 1;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



/* Entry: 109eb8208; end: 109eb82af;  */

undefined8 * FUN_109eb8208(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = *(long *)(param_1 + 0x38);
  uVar1 = param_2;
  (**(code **)(lVar2 + 8))(param_2);
  FUN_109f64fdc(lVar2,uVar1,param_2);
  if (lVar2 == 0) {
    puVar3 = (undefined8 *)0x38;
    __Znwm();
    puVar3[3] = 0;
    puVar3[1] = puVar3 + 3;
    puVar3[2] = 0;
    *puVar3 = param_2;
    puVar3[4] = puVar3 + 1;
    puVar3[5] = 0;
    *(undefined1 *)(puVar3 + 6) = 0;
    lVar2 = *(long *)(param_1 + 0x38);
    uVar1 = param_2;
    (**(code **)(lVar2 + 8))(param_2);
    func_0x000109f650c0(lVar2,uVar1,param_2,puVar3);
  }
  else {
    puVar3 = *(undefined8 **)(lVar2 + 0x10);
  }
  return puVar3;
}



/* Entry: 109eb82b0; end: 109eb8333;  */

undefined8 FUN_109eb82b0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_109eb8208();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x30) = 1;
    *(undefined1 *)(lVar1 + 0x31) = *(undefined1 *)(param_1 + 0x48);
  }
  return 0;
}



/* Entry: 109eb8334; end: 109eb83cf;  */

undefined8 FUN_109eb8334(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  *(undefined1 *)(param_1 + 0x48) = 0;
  uVar4 = *(undefined8 *)(param_1 + 8);
  plVar3 = (long *)**(undefined8 **)(param_2 + 0x50);
  if (plVar3 == (long *)0x0) {
LAB_109eb83ac:
    *(undefined8 *)(param_1 + 8) = uVar4;
  }
  else {
    lVar5 = *plVar3;
    plVar6 = *(undefined8 **)(param_2 + 0x50) + -1;
    lVar2 = *plVar6;
    *(long **)(param_1 + 8) = plVar6;
    (**(code **)(lVar2 + 0x18))(plVar6,param_1);
    iVar1 = (int)plVar6;
    while (iVar1 == 0) {
      if (lVar5 == 0) goto LAB_109eb83ac;
      plVar6 = (long *)*plVar3;
      lVar5 = *plVar6;
      plVar3 = plVar3 + -1;
      lVar2 = *plVar3;
      *(long **)(param_1 + 8) = plVar3;
      (**(code **)(lVar2 + 0x18))(plVar3,param_1);
      iVar1 = (int)plVar3;
      plVar3 = plVar6;
    }
  }
  *(undefined1 *)(param_1 + 0x48) = 1;
  return 1;
}



/* Entry: 109eb83d0; end: 109eb850b;  */

undefined8 FUN_109eb83d0(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar2 = *(long **)(param_2 + 0x20);
  (**(code **)(*plVar2 + 0x40))();
  FUN_109eb8208(param_1,plVar2);
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x2c) + 1;
    *(int *)(param_1 + 0x2c) = iVar1;
    if (*(int *)(param_1 + 0x28) == iVar1) {
      plVar2 = (long *)0x1;
      _calloc(1,0x18);
      plVar2[2] = param_2;
      plVar4 = (long *)(param_1 + 8);
      lVar3 = *plVar4;
      *plVar2 = lVar3;
      plVar2[1] = (long)plVar4;
      *(long **)(lVar3 + 8) = plVar2;
      *plVar4 = (long)plVar2;
    }
  }
  return 0;
}



/* Entry: 109eb850c; end: 109eb85d3;  */

long FUN_109eb850c(long param_1,long param_2,long *param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  
  *param_3 = param_1 + param_2;
  if (param_2 == 0) {
    return -1;
  }
  if (*(char *)(param_1 + (param_2 - 1U)) == ']') {
    uVar4 = (param_2 - 1U & 0xffffffff) + 2;
    do {
      if (uVar4 == 2) {
        return -1;
      }
      cVar2 = *(char *)(param_1 + uVar4 + -3);
      if ((long)cVar2 < 0) {
        return -1;
      }
      uVar4 = uVar4 - 1;
    } while ((*(uint *)(PTR___DefaultRuneLocale_11034bcf8 + (long)cVar2 * 4 + 0x3c) >> 10 & 1) != 0)
    ;
    if (cVar2 == '[') {
      lVar1 = param_1 + uVar4;
      lVar3 = lVar1 + -1;
      _strtol(lVar3,0,10);
      if ((-1 < lVar3) &&
         ((*(char *)(lVar1 + -1) != '0' || (*(char *)(param_1 + (uVar4 & 0xffffffff)) == ']')))) {
        *param_3 = lVar1 + -2;
        return lVar3;
      }
    }
  }
  return -1;
}



/* Entry: 109eb85d4; end: 109eb86bb;  */

undefined8
FUN_109eb85d4(long param_1,long param_2,undefined2 param_3,undefined8 param_4,undefined1 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined2 *puVar5;
  
  uVar2 = param_4;
  (**(code **)(param_2 + 0x10))(param_4);
  lVar3 = param_2;
  FUN_109f66ba8(param_2,uVar2,param_4);
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0x68);
    FUN_109f65a40(lVar3,*(undefined8 *)(lVar3 + 0x108),0x18,*(int *)(lVar3 + 0x110) + 1);
    lVar4 = *(long *)(param_1 + 0x68);
    *(long *)(lVar4 + 0x108) = lVar3;
    if (lVar3 == 0) {
      func_0x000109eb844c(param_1,&UNK_10f6153a6);
      return 0;
    }
    uVar1 = *(uint *)(lVar4 + 0x110);
    puVar5 = (undefined2 *)(lVar3 + (ulong)uVar1 * 0x18);
    *puVar5 = param_3;
    *(undefined8 *)(puVar5 + 4) = param_4;
    *(undefined1 *)(puVar5 + 8) = param_5;
    *(uint *)(lVar4 + 0x110) = uVar1 + 1;
    uVar2 = param_4;
    (**(code **)(param_2 + 0x10))(param_4);
    FUN_109f66e48(param_2,uVar2,param_4,0);
    if (param_2 != 0) {
      *(undefined8 *)(param_2 + 8) = param_4;
    }
  }
  return 1;
}



/* Entry: 109eb86bc; end: 109eb874f;  */

int FUN_109eb86bc(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  uVar1 = *(uint *)(param_2 + 0x20);
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x80);
  puVar5 = (undefined8 *)**(undefined8 **)(param_1 + 0x80);
  while( true ) {
    if (puVar5 == (undefined8 *)0x0) {
      return -1;
    }
    iVar3 = *(uint *)((long)puVar4 + 0x14) - uVar1;
    if (iVar3 == 0) break;
    if (uVar1 <= *(uint *)((long)puVar4 + 0x14)) {
      iVar2 = *(int *)(puVar4 + 2);
      *(uint *)(puVar4 + 2) = iVar2 + uVar1;
      *(int *)((long)puVar4 + 0x14) = iVar3;
      return iVar2;
    }
    puVar4 = puVar5;
    puVar5 = (undefined8 *)*puVar5;
  }
  iVar3 = *(int *)(puVar4 + 2);
  puVar6 = (undefined8 *)puVar4[1];
  puVar5[1] = puVar6;
  *puVar6 = puVar5;
  *puVar4 = 0;
  puVar4[1] = 0;
  FUN_109f65aa4(puVar4 + -6);
  FUN_109f65ae0(puVar4 + -6);
  return iVar3;
}



/* Entry: 109eb8750; end: 109eb88a3;  */

void FUN_109eb8750(long param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = (ulong)*(uint *)(param_1 + 0x70);
  if (*(uint *)(param_1 + 0x70) != 0) {
    uVar7 = 0;
    plVar1 = (long *)0x0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x78) + uVar7 * 8) == 0) {
        if (plVar1 == (long *)0x0) {
LAB_109eb87a0:
          plVar2 = (long *)0x50;
          _malloc();
          plVar2[1] = 0;
          *plVar2 = 0;
          plVar2[3] = 0;
          plVar2[2] = 0;
          *plVar2 = param_1 + -0x30;
          lVar4 = *(long *)(param_1 + -0x28);
          plVar2[3] = lVar4;
          plVar2[4] = 0;
          *(long **)(param_1 + -0x28) = plVar2;
          if (lVar4 != 0) {
            *(long **)(lVar4 + 0x10) = plVar2;
            uVar6 = (ulong)*(uint *)(param_1 + 0x70);
          }
          iVar3 = 0;
          plVar1 = plVar2 + 6;
          *plVar1 = param_1 + 0x90;
          *(int *)(plVar2 + 8) = (int)uVar7;
          *(undefined4 *)((long)plVar2 + 0x44) = 0;
          puVar5 = *(undefined8 **)(param_1 + 0x98);
          plVar2[7] = (long)puVar5;
          *puVar5 = plVar1;
          *(long **)(param_1 + 0x98) = plVar1;
        }
        else {
          iVar3 = *(int *)((long)plVar1 + 0x14);
          if (uVar7 != (uint)(iVar3 + (int)plVar1[2])) goto LAB_109eb87a0;
        }
        *(int *)((long)plVar1 + 0x14) = iVar3 + 1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
  return;
}



/* Entry: 109eb88a4; end: 109eb8c0f;  */

void FUN_109eb88a4(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  
  lVar2 = 0;
  uVar7 = 0;
  uVar6 = 0;
  puVar3 = (ulong *)(param_1 + 0xf8);
  do {
    lVar5 = *(long *)(param_2 + 0xa8 + lVar2 * 8);
    if (lVar5 != 0) {
      if (*(uint *)((long)puVar3 + -0x34) < *(uint *)(lVar5 + 0x34)) {
        cVar1 = *(char *)(param_1 + 0x4a4);
        func_0x000109f47670();
        if (cVar1 == '\0') {
          func_0x000109eb844c(param_2,&UNK_10f61547b);
        }
        else {
          func_0x000109eb84b0(param_2,&UNK_10f6153ed);
        }
      }
      if (*puVar3 < (ulong)*(uint *)(lVar5 + 0x38)) {
        cVar1 = *(char *)(param_1 + 0x4a4);
        func_0x000109f47670();
        if (cVar1 == '\0') {
          func_0x000109eb844c(param_2,&UNK_10f615530);
        }
        else {
          func_0x000109eb84b0(param_2,&UNK_10f6154b0);
        }
      }
      uVar6 = uVar6 + *(byte *)(*(long *)(lVar5 + 0x28) + 0x36);
      uVar7 = uVar7 + *(byte *)(*(long *)(lVar5 + 0x28) + 0x34);
    }
    lVar2 = lVar2 + 1;
    puVar3 = puVar3 + 0x10;
  } while (lVar2 != 6);
  if (*(uint *)(param_1 + 0x404) < uVar7) {
    func_0x000109eb844c(param_2,&UNK_10f615557);
  }
  if (*(uint *)(param_1 + 0x414) < uVar6) {
    func_0x000109eb844c(param_2,&UNK_10f615581);
  }
  lVar2 = *(long *)(param_2 + 0x68);
  if (*(int *)(lVar2 + 0x28) != 0) {
    lVar5 = 0;
    uVar4 = 0;
    do {
      if (*(uint *)(param_1 + 0x40c) < *(uint *)(*(long *)(lVar2 + 0x30) + lVar5 + 0x28)) {
        func_0x000109eb844c(param_2,&UNK_10f6155b2);
        lVar2 = *(long *)(param_2 + 0x68);
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x38;
    } while (uVar4 < *(uint *)(lVar2 + 0x28));
  }
  if (*(int *)(lVar2 + 0x2c) != 0) {
    lVar5 = 0;
    uVar4 = 0;
    do {
      if (*(uint *)(param_1 + 0x41c) < *(uint *)(*(long *)(lVar2 + 0x38) + lVar5 + 0x28)) {
        func_0x000109eb844c(param_2,&UNK_10f6155d4);
        lVar2 = *(long *)(param_2 + 0x68);
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x38;
    } while (uVar4 < *(uint *)(lVar2 + 0x2c));
  }
  return;
}



/* Entry: 109eb8c10; end: 109eb8cc7;  */

void FUN_109eb8c10(uint *param_1,uint param_2,int param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    uVar1 = (ulong)param_2;
    do {
      param_2 = param_2 - 1;
      uVar2 = param_1[1];
      if (uVar2 <= *param_1) {
        if (uVar2 == 0) {
          return;
        }
        uVar3 = 0;
        do {
          FUN_109eb8c10(param_1 + 2,param_2,uVar2 * param_3,param_4,param_5);
          uVar3 = uVar3 + 1;
          uVar2 = param_1[1];
          param_4 = (ulong)(uint)((int)param_4 + param_3);
        } while (uVar3 < uVar2);
        return;
      }
      param_4 = (ulong)((int)param_4 + *param_1 * param_3);
      param_3 = uVar2 * param_3;
      uVar1 = uVar1 - 1;
      param_1 = param_1 + 2;
    } while (uVar1 != 0);
  }
  uVar2 = (uint)param_4 >> 5;
  *(uint *)(param_5 + (ulong)uVar2 * 4) =
       1 << (ulong)((uint)param_4 & 0x1f) | *(uint *)(param_5 + (ulong)uVar2 * 4);
  return;
}



/* Entry: 109eb8cc8; end: 109eb8d6f;  */

bool FUN_109eb8cc8(long param_1,long param_2,int param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  
  if (param_1 == param_2) {
    return true;
  }
  if (param_3 != 0) {
    if (((*(byte *)(param_1 + 0xe) < 2) && (*(byte *)(param_2 + 0xe) < 2)) &&
       (*(char *)(param_1 + 0xd) == *(char *)(param_2 + 0xd))) {
      cVar1 = *(char *)(param_2 + 4);
      if (cVar1 == '\x02') {
        if (((*(uint *)(param_1 + 4) & 0xfe) == 0) || ((*(uint *)(param_1 + 4) & 0xff) == 3)) {
          return true;
        }
      }
      else {
        bVar2 = *(byte *)(param_1 + 4);
        if ((param_4 == 0) || (cVar1 != '\0')) {
          return cVar1 == '\x04' && (bVar2 != 4 && (bVar2 & 0xfc) == 0);
        }
        if (bVar2 == 1) {
          return true;
        }
      }
    }
    return false;
  }
  return false;
}



/* Entry: 109eb8d70; end: 109eb8deb;  */

void FUN_109eb8d70(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    param_1[1] = -0x100000000;
  }
  else {
    lVar1 = lVar2;
    _strlen();
    *(int *)(param_1 + 1) = (int)lVar1;
    lVar1 = lVar2;
    _strrchr(lVar2,0x5b);
    if (lVar1 != 0) {
      *(int *)((long)param_1 + 0xc) = (int)lVar1 - (int)lVar2;
      _strcmp();
      *(bool *)(param_1 + 2) = (int)lVar1 == 0;
      return;
    }
    *(undefined4 *)((long)param_1 + 0xc) = 0xffffffff;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}



/* Entry: 109eb8dec; end: 109eb8e8b;  */

undefined1 FUN_109eb8dec(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined **ppuStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined2 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  ppuStack_68 = &PTR_FUN_110b64db0;
  plVar2 = *(long **)*param_1;
  if (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    plVar4 = (undefined8 *)*param_1 + -1;
    plStack_60 = plVar4;
    (**(code **)(*plVar4 + 0x18))(plVar4,&ppuStack_68);
    iVar1 = (int)plVar4;
    while ((iVar1 == 0 && (lVar3 != 0))) {
      plVar4 = (long *)*plVar2;
      lVar3 = *plVar4;
      plVar2 = plVar2 + -1;
      plStack_60 = plVar2;
      (**(code **)(*plVar2 + 0x18))(plVar2,&ppuStack_68);
      iVar1 = (int)plVar2;
      plVar2 = plVar4;
    }
  }
  return uStack_38._1_1_;
}



/* Entry: 109eb8e8c; end: 109eb8ee3;  */

undefined8 FUN_109eb8e8c(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  if ((*(long *)(*(long *)(param_2 + 0x28) + 0x70) != 0) &&
     (*(int *)(*(long *)(param_2 + 0x28) + 0x4c) == 0)) {
    FUN_109ec37dc(param_2);
    lVar1 = *(long *)(param_2 + 8);
    plVar2 = *(long **)(param_2 + 0x10);
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0x31) = 1;
  }
  return 0;
}



/* Entry: 109eb8ee4; end: 109eb8f93;  */

undefined1 FUN_109eb8ee4(undefined8 *param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined **ppuStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined2 uStack_38;
  undefined4 uStack_34;
  
  uStack_34 = 0;
  if (param_2 == 0) {
    uStack_34 = 0xe0000;
  }
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  ppuStack_68 = &PTR_FUN_110b64f08;
  plVar2 = *(long **)*param_1;
  if (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    plVar4 = (undefined8 *)*param_1 + -1;
    plStack_60 = plVar4;
    (**(code **)(*plVar4 + 0x18))(plVar4,&ppuStack_68);
    iVar1 = (int)plVar4;
    while ((iVar1 == 0 && (lVar3 != 0))) {
      plVar4 = (long *)*plVar2;
      lVar3 = *plVar4;
      plVar2 = plVar2 + -1;
      plStack_60 = plVar2;
      (**(code **)(*plVar2 + 0x18))(plVar2,&ppuStack_68);
      iVar1 = (int)plVar2;
      plVar2 = plVar4;
    }
  }
  return uStack_38._1_1_;
}



/* Entry: 109eb8f94; end: 109ebbc8f;  */

undefined8 FUN_109eb8f94(long param_1,long param_2)

{
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  undefined *puVar20;
  undefined4 uVar21;
  ulong uVar22;
  long lVar23;
  undefined8 *puVar24;
  uint uVar25;
  long *plVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  long *plVar30;
  long *plVar31;
  long *plVar32;
  int iVar33;
  long *plVar34;
  long *plStack_c0;
  long *plStack_b0;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long alStack_70 [2];
  
  iVar33 = *(int *)(param_2 + 0x28);
  if (iVar33 < 0x84) {
    if (iVar33 == 0x66) {
      if ((*(byte *)(param_1 + 0x36) >> 2 & 1) == 0) {
        return 0;
      }
      bVar1 = *(byte *)(*(long *)(*(long *)(param_2 + 0x30) + 0x20) + 0xd);
      uVar27 = (ulong)bVar1;
      plVar26 = (long *)0xe0;
      _malloc();
      plVar2 = plVar26;
      if (plVar26 != (long *)0x0) {
        plVar26[1] = 0;
        *plVar26 = 0;
        plVar26[3] = 0;
        plVar26[2] = 0;
        *plVar26 = param_2 + -0x30;
        lVar28 = *(long *)(param_2 + -0x28);
        plVar26[3] = lVar28;
        plVar26[4] = 0;
        *(long **)(param_2 + -0x28) = plVar26;
        if (lVar28 != 0) {
          *(long **)(lVar28 + 0x10) = plVar26;
        }
        plVar2 = plVar26 + 6;
        plVar26[7] = 0;
        *plVar2 = 0;
        plVar26[0x19] = 0;
        plVar26[0x18] = 0;
        plVar26[0x1b] = 0;
        plVar26[0x1a] = 0;
        plVar26[0x15] = 0;
        plVar26[0x14] = 0;
        plVar26[0x17] = 0;
        plVar26[0x16] = 0;
        plVar26[0x11] = 0;
        plVar26[0x10] = 0;
        plVar26[0x13] = 0;
        plVar26[0x12] = 0;
        plVar26[0xd] = 0;
        plVar26[0xc] = 0;
        plVar26[0xf] = 0;
        plVar26[0xe] = 0;
        plVar26[9] = 0;
        plVar26[8] = 0;
        plVar26[0xb] = 0;
        plVar26[10] = 0;
      }
      func_0x000109ea9960(plVar2,0,uVar27);
      plVar4 = (long *)0xe0;
      _malloc();
      plVar26 = plVar4;
      if (plVar4 != (long *)0x0) {
        plVar4[1] = 0;
        *plVar4 = 0;
        plVar4[3] = 0;
        plVar4[2] = 0;
        *plVar4 = param_2 + -0x30;
        lVar28 = *(long *)(param_2 + -0x28);
        plVar4[3] = lVar28;
        plVar4[4] = 0;
        *(long **)(param_2 + -0x28) = plVar4;
        if (lVar28 != 0) {
          *(long **)(lVar28 + 0x10) = plVar4;
        }
        plVar26 = plVar4 + 6;
        plVar4[7] = 0;
        *plVar26 = 0;
        plVar4[0x19] = 0;
        plVar4[0x18] = 0;
        plVar4[0x1b] = 0;
        plVar4[0x1a] = 0;
        plVar4[0x15] = 0;
        plVar4[0x14] = 0;
        plVar4[0x17] = 0;
        plVar4[0x16] = 0;
        plVar4[0x11] = 0;
        plVar4[0x10] = 0;
        plVar4[0x13] = 0;
        plVar4[0x12] = 0;
        plVar4[0xd] = 0;
        plVar4[0xc] = 0;
        plVar4[0xf] = 0;
        plVar4[0xe] = 0;
        plVar4[9] = 0;
        plVar4[8] = 0;
        plVar4[0xb] = 0;
        plVar4[10] = 0;
      }
      func_0x000109ea9960(plVar26,0xffffffff,uVar27);
      plVar18 = (long *)0xe0;
      _malloc();
      plVar4 = plVar18;
      if (plVar18 != (long *)0x0) {
        plVar18[1] = 0;
        *plVar18 = 0;
        plVar18[3] = 0;
        plVar18[2] = 0;
        *plVar18 = param_2 + -0x30;
        lVar28 = *(long *)(param_2 + -0x28);
        plVar18[3] = lVar28;
        plVar18[4] = 0;
        *(long **)(param_2 + -0x28) = plVar18;
        if (lVar28 != 0) {
          *(long **)(lVar28 + 0x10) = plVar18;
        }
        plVar4 = plVar18 + 6;
        plVar18[7] = 0;
        *plVar4 = 0;
        plVar18[0x19] = 0;
        plVar18[0x18] = 0;
        plVar18[0x1b] = 0;
        plVar18[0x1a] = 0;
        plVar18[0x15] = 0;
        plVar18[0x14] = 0;
        plVar18[0x17] = 0;
        plVar18[0x16] = 0;
        plVar18[0x11] = 0;
        plVar18[0x10] = 0;
        plVar18[0x13] = 0;
        plVar18[0x12] = 0;
        plVar18[0xd] = 0;
        plVar18[0xc] = 0;
        plVar18[0xf] = 0;
        plVar18[0xe] = 0;
        plVar18[9] = 0;
        plVar18[8] = 0;
        plVar18[0xb] = 0;
        plVar18[10] = 0;
      }
      func_0x000109ea9960(plVar4,0x17,uVar27);
      plVar6 = (long *)0xe0;
      _malloc();
      plVar18 = plVar6;
      if (plVar6 != (long *)0x0) {
        plVar6[1] = 0;
        *plVar6 = 0;
        plVar6[3] = 0;
        plVar6[2] = 0;
        *plVar6 = param_2 + -0x30;
        lVar28 = *(long *)(param_2 + -0x28);
        plVar6[3] = lVar28;
        plVar6[4] = 0;
        *(long **)(param_2 + -0x28) = plVar6;
        if (lVar28 != 0) {
          *(long **)(lVar28 + 0x10) = plVar6;
        }
        plVar18 = plVar6 + 6;
        plVar6[7] = 0;
        *plVar18 = 0;
        plVar6[0x19] = 0;
        plVar6[0x18] = 0;
        plVar6[0x1b] = 0;
        plVar6[0x1a] = 0;
        plVar6[0x15] = 0;
        plVar6[0x14] = 0;
        plVar6[0x17] = 0;
        plVar6[0x16] = 0;
        plVar6[0x11] = 0;
        plVar6[0x10] = 0;
        plVar6[0x13] = 0;
        plVar6[0x12] = 0;
        plVar6[0xd] = 0;
        plVar6[0xc] = 0;
        plVar6[0xf] = 0;
        plVar6[0xe] = 0;
        plVar6[9] = 0;
        plVar6[8] = 0;
        plVar6[0xb] = 0;
        plVar6[10] = 0;
      }
      func_0x000109ea9960(plVar18,0x7f,uVar27);
      plVar34 = (long *)0xe0;
      _malloc();
      plVar6 = plVar34;
      if (plVar34 != (long *)0x0) {
        plVar34[1] = 0;
        *plVar34 = 0;
        plVar34[3] = 0;
        plVar34[2] = 0;
        *plVar34 = param_2 + -0x30;
        lVar28 = *(long *)(param_2 + -0x28);
        plVar34[3] = lVar28;
        plVar34[4] = 0;
        *(long **)(param_2 + -0x28) = plVar34;
        if (lVar28 != 0) {
          *(long **)(lVar28 + 0x10) = plVar34;
        }
        plVar6 = plVar34 + 6;
        plVar34[7] = 0;
        *plVar6 = 0;
        plVar34[0x19] = 0;
        plVar34[0x18] = 0;
        plVar34[0x1b] = 0;
        plVar34[0x1a] = 0;
        plVar34[0x15] = 0;
        plVar34[0x14] = 0;
        plVar34[0x17] = 0;
        plVar34[0x16] = 0;
        plVar34[0x11] = 0;
        plVar34[0x10] = 0;
        plVar34[0x13] = 0;
        plVar34[0x12] = 0;
        plVar34[0xd] = 0;
        plVar34[0xc] = 0;
        plVar34[0xf] = 0;
        plVar34[0xe] = 0;
        plVar34[9] = 0;
        plVar34[8] = 0;
        plVar34[0xb] = 0;
        plVar34[10] = 0;
      }
      FUN_109ea98b0(plVar6,0xff,uVar27);
      plVar7 = (long *)0xe0;
      _malloc();
      plVar34 = plVar7;
      if (plVar7 != (long *)0x0) {
        plVar7[1] = 0;
        *plVar7 = 0;
        plVar7[3] = 0;
        plVar7[2] = 0;
        *plVar7 = param_2 + -0x30;
        lVar28 = *(long *)(param_2 + -0x28);
        plVar7[3] = lVar28;
        plVar7[4] = 0;
        *(long **)(param_2 + -0x28) = plVar7;
        if (lVar28 != 0) {
          *(long **)(lVar28 + 0x10) = plVar7;
        }
        plVar34 = plVar7 + 6;
        plVar7[7] = 0;
        *plVar34 = 0;
        plVar7[0x19] = 0;
        plVar7[0x18] = 0;
        plVar7[0x1b] = 0;
        plVar7[0x1a] = 0;
        plVar7[0x15] = 0;
        plVar7[0x14] = 0;
        plVar7[0x17] = 0;
        plVar7[0x16] = 0;
        plVar7[0x11] = 0;
        plVar7[0x10] = 0;
        plVar7[0x13] = 0;
        plVar7[0x12] = 0;
        plVar7[0xd] = 0;
        plVar7[0xc] = 0;
        plVar7[0xf] = 0;
        plVar7[0xe] = 0;
        plVar7[9] = 0;
        plVar7[8] = 0;
        plVar7[0xb] = 0;
        plVar7[10] = 0;
      }
      FUN_109ea98b0(plVar34,0xffffff00,uVar27);
      plVar7 = (long *)0xc0;
      _malloc();
      if (plVar7 == (long *)0x0) {
        plVar8 = (long *)0x0;
      }
      else {
        plVar7[1] = 0;
        *plVar7 = 0;
        plVar7[3] = 0;
        plVar7[2] = 0;
        *plVar7 = param_2 + -0x30;
        lVar28 = *(long *)(param_2 + -0x28);
        plVar7[3] = lVar28;
        plVar7[4] = 0;
        *(long **)(param_2 + -0x28) = plVar7;
        if (lVar28 != 0) {
          *(long **)(lVar28 + 0x10) = plVar7;
        }
        plVar8 = plVar7 + 6;
        plVar7[7] = 0;
        *plVar8 = 0;
        plVar7[0x15] = 0;
        plVar7[0x14] = 0;
        plVar7[0x17] = 0;
        plVar7[0x16] = 0;
        plVar7[0x11] = 0;
        plVar7[0x10] = 0;
        plVar7[0x13] = 0;
        plVar7[0x12] = 0;
        plVar7[0xd] = 0;
        plVar7[0xc] = 0;
        plVar7[0xf] = 0;
        plVar7[0xe] = 0;
        plVar7[9] = 0;
        plVar7[8] = 0;
        plVar7[0xb] = 0;
        plVar7[10] = 0;
      }
      uVar25 = (uint)bVar1;
      if (uVar25 == 8) {
        uVar22 = 6;
LAB_109eba170:
        puVar20 = (&PTR_DAT_110b66da0)[uVar22];
      }
      else {
        if (uVar25 == 0x10) {
          uVar22 = 7;
          goto LAB_109eba170;
        }
        uVar22 = uVar27;
        if (0xfffffff8 < uVar25 - 8) goto LAB_109eba170;
        puVar20 = &UNK_10e05d730;
      }
      FUN_109eaba7c(plVar8,puVar20,&DAT_10f3ed9b4,0xb);
      plVar9 = (long *)0xc0;
      _malloc();
      if (plVar9 == (long *)0x0) {
        plVar10 = (long *)0x0;
      }
      else {
        plVar9[1] = 0;
        *plVar9 = 0;
        plVar9[3] = 0;
        plVar9[2] = 0;
        *plVar9 = param_2 + -0x30;
        lVar28 = *(long *)(param_2 + -0x28);
        plVar9[3] = lVar28;
        plVar9[4] = 0;
        *(long **)(param_2 + -0x28) = plVar9;
        if (lVar28 != 0) {
          *(long **)(lVar28 + 0x10) = plVar9;
        }
        plVar10 = plVar9 + 6;
        plVar9[7] = 0;
        *plVar10 = 0;
        plVar9[0x15] = 0;
        plVar9[0x14] = 0;
        plVar9[0x17] = 0;
        plVar9[0x16] = 0;
        plVar9[0x11] = 0;
        plVar9[0x10] = 0;
        plVar9[0x13] = 0;
        plVar9[0x12] = 0;
        plVar9[0xd] = 0;
        plVar9[0xc] = 0;
        plVar9[0xf] = 0;
        plVar9[0xe] = 0;
        plVar9[9] = 0;
        plVar9[8] = 0;
        plVar9[0xb] = 0;
        plVar9[10] = 0;
      }
      uVar25 = (uint)bVar1;
      if (uVar25 == 8) {
        uVar22 = 6;
LAB_109eba224:
        puVar20 = (&PTR_PTR_110b66cc0)[uVar22];
      }
      else {
        if (uVar25 == 0x10) {
          uVar22 = 7;
          goto LAB_109eba224;
        }
        uVar22 = uVar27;
        if (0xfffffff8 < uVar25 - 8) goto LAB_109eba224;
        puVar20 = &UNK_10e05d730;
      }
      FUN_109eaba7c(plVar10,puVar20,&UNK_10f61566c,0xb);
      plVar30 = (long *)0xc0;
      _malloc();
      if (plVar30 == (long *)0x0) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar30[1] = 0;
        *plVar30 = 0;
        plVar30[3] = 0;
        plVar30[2] = 0;
        *plVar30 = param_2 + -0x30;
        lVar28 = *(long *)(param_2 + -0x28);
        plVar30[3] = lVar28;
        plVar30[4] = 0;
        *(long **)(param_2 + -0x28) = plVar30;
        if (lVar28 != 0) {
          *(long **)(lVar28 + 0x10) = plVar30;
        }
        plVar11 = plVar30 + 6;
        plVar30[7] = 0;
        *plVar11 = 0;
        plVar30[0x15] = 0;
        plVar30[0x14] = 0;
        plVar30[0x17] = 0;
        plVar30[0x16] = 0;
        plVar30[0x11] = 0;
        plVar30[0x10] = 0;
        plVar30[0x13] = 0;
        plVar30[0x12] = 0;
        plVar30[0xd] = 0;
        plVar30[0xc] = 0;
        plVar30[0xf] = 0;
        plVar30[0xe] = 0;
        plVar30[9] = 0;
        plVar30[8] = 0;
        plVar30[0xb] = 0;
        plVar30[10] = 0;
      }
      if (uVar25 == 8) {
        uVar27 = 6;
LAB_109eba2d8:
        puVar20 = (&PTR_DAT_110b66d68)[uVar27];
      }
      else {
        if (uVar25 == 0x10) {
          uVar27 = 7;
          goto LAB_109eba2d8;
        }
        if (0xfffffff8 < uVar25 - 8) goto LAB_109eba2d8;
        puVar20 = &UNK_10e05d730;
      }
      FUN_109eaba7c(plVar11,puVar20,&UNK_10f60c31a,0xb);
      lVar29 = *(long *)(param_1 + 8);
      lVar28 = lVar29 + 8;
      plVar8[1] = lVar28;
      plVar32 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        plVar32 = plVar8 + 1;
      }
      puVar24 = *(undefined8 **)(lVar29 + 0x10);
      plVar8[2] = (long)puVar24;
      *puVar24 = plVar32;
      *(long **)(lVar29 + 0x10) = plVar32;
      if (*(char *)(*(long *)(*(long *)(param_2 + 0x30) + 0x20) + 4) == '\0') {
        func_0x000109e244dc(alStack_70,plVar8);
        lVar23 = alStack_70[0];
        func_0x000109eabfa8(alStack_70[0],*(undefined8 *)(param_2 + 0x30),
                            ~(-1 << (ulong)(*(byte *)(*(long *)(alStack_70[0] + 0x20) + 0xd) & 0x1f)
                             ));
      }
      else {
        uVar25 = (uint)bVar1;
        plVar7 = (long *)0xc0;
        _malloc();
        if (plVar7 == (long *)0x0) {
          plVar32 = (long *)0x0;
        }
        else {
          plVar7[1] = 0;
          *plVar7 = 0;
          plVar7[3] = 0;
          plVar7[2] = 0;
          *plVar7 = param_2 + -0x30;
          lVar23 = *(long *)(param_2 + -0x28);
          plVar7[3] = lVar23;
          plVar7[4] = 0;
          *(long **)(param_2 + -0x28) = plVar7;
          if (lVar23 != 0) {
            *(long **)(lVar23 + 0x10) = plVar7;
          }
          plVar32 = plVar7 + 6;
          plVar7[7] = 0;
          *plVar32 = 0;
          plVar7[0x15] = 0;
          plVar7[0x14] = 0;
          plVar7[0x17] = 0;
          plVar7[0x16] = 0;
          plVar7[0x11] = 0;
          plVar7[0x10] = 0;
          plVar7[0x13] = 0;
          plVar7[0x12] = 0;
          plVar7[0xd] = 0;
          plVar7[0xc] = 0;
          plVar7[0xf] = 0;
          plVar7[0xe] = 0;
          plVar7[9] = 0;
          plVar7[8] = 0;
          plVar7[0xb] = 0;
          plVar7[10] = 0;
        }
        uVar27 = (ulong)uVar25;
        if (uVar25 == 8) {
          uVar27 = 6;
LAB_109ebb8dc:
          puVar20 = (&PTR_DAT_110b66d68)[uVar27];
        }
        else {
          if (uVar25 == 0x10) {
            uVar27 = 7;
            goto LAB_109ebb8dc;
          }
          if (0xfffffff8 < uVar25 - 8) goto LAB_109ebb8dc;
          puVar20 = &UNK_10e05d730;
        }
        FUN_109eaba7c(plVar32,puVar20,&UNK_10f615675,0xb);
        plVar31 = (long *)0xe0;
        _malloc();
        plVar12 = plVar31;
        if (plVar31 != (long *)0x0) {
          plVar31[1] = 0;
          *plVar31 = 0;
          plVar31[3] = 0;
          plVar31[2] = 0;
          *plVar31 = param_2 + -0x30;
          lVar23 = *(long *)(param_2 + -0x28);
          plVar31[3] = lVar23;
          plVar31[4] = 0;
          *(long **)(param_2 + -0x28) = plVar31;
          if (lVar23 != 0) {
            *(long **)(lVar23 + 0x10) = plVar31;
          }
          plVar12 = plVar31 + 6;
          plVar31[7] = 0;
          *plVar12 = 0;
          plVar31[0x19] = 0;
          plVar31[0x18] = 0;
          plVar31[0x1b] = 0;
          plVar31[0x1a] = 0;
          plVar31[0x15] = 0;
          plVar31[0x14] = 0;
          plVar31[0x17] = 0;
          plVar31[0x16] = 0;
          plVar31[0x11] = 0;
          plVar31[0x10] = 0;
          plVar31[0x13] = 0;
          plVar31[0x12] = 0;
          plVar31[0xd] = 0;
          plVar31[0xc] = 0;
          plVar31[0xf] = 0;
          plVar31[0xe] = 0;
          plVar31[9] = 0;
          plVar31[8] = 0;
          plVar31[0xb] = 0;
          plVar31[10] = 0;
        }
        func_0x000109ea9960(plVar12,0x1f,uVar25);
        plVar32[1] = lVar28;
        puVar24 = *(undefined8 **)(lVar29 + 0x10);
        plVar31 = (long *)0x0;
        if (plVar7 != (long *)0x0) {
          plVar31 = plVar32 + 1;
        }
        plVar32[2] = (long)puVar24;
        *puVar24 = plVar31;
        *(long **)(lVar29 + 0x10) = plVar31;
        func_0x000109e244dc(alStack_70,plVar32);
        lVar23 = alStack_70[0];
        func_0x000109eabfa8(alStack_70[0],*(undefined8 *)(param_2 + 0x30),
                            ~(-1 << (ulong)(*(byte *)(*(long *)(alStack_70[0] + 0x20) + 0xd) & 0x1f)
                             ));
        *(long *)(lVar23 + 8) = lVar28;
        puVar24 = *(undefined8 **)(lVar29 + 0x10);
        plVar7 = (long *)0x0;
        if (lVar23 != 0) {
          plVar7 = (long *)(lVar23 + 8);
        }
        *(undefined8 **)(lVar23 + 0x10) = puVar24;
        *puVar24 = plVar7;
        *(long **)(lVar29 + 0x10) = plVar7;
        func_0x000109e244dc(alStack_70,plVar8);
        func_0x000109e24460(&uStack_78,plVar32);
        func_0x000109e24460(&uStack_80,plVar32);
        uVar5 = 0x90;
        func_0x000109eac310(0x90,uStack_80,plVar12);
        uVar3 = 0x92;
        func_0x000109eac310(0x92,uStack_78,uVar5);
        uVar5 = 0x15;
        FUN_109eac2ac(0x15,uVar3);
        lVar23 = alStack_70[0];
        func_0x000109eabfa8(alStack_70[0],uVar5,
                            ~(-1 << (ulong)(*(byte *)(*(long *)(alStack_70[0] + 0x20) + 0xd) & 0x1f)
                             ));
      }
      lVar19 = 0;
      if (lVar23 != 0) {
        lVar19 = lVar23 + 8;
      }
      plVar7 = *(long **)(lVar29 + 0x10);
      *(long **)(lVar23 + 0x10) = plVar7;
      *plVar7 = lVar19;
      plVar10[1] = lVar28;
      plVar7 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        plVar7 = plVar10 + 1;
      }
      plVar10[2] = lVar23 + 8;
      *(long **)(lVar23 + 8) = plVar7;
      *(long **)(lVar29 + 0x10) = plVar7;
      func_0x000109e244dc(alStack_70,plVar10);
      func_0x000109e24460(&uStack_78,plVar8);
      uVar5 = 0x89;
      func_0x000109eac310(0x89,plVar6,uStack_78);
      func_0x000109e24460(&uStack_78,plVar8);
      uVar3 = 0x91;
      func_0x000109eac310(0x91,uStack_78,plVar34);
      func_0x000109e24460(&uStack_78,plVar8);
      uVar16 = 0xa2;
      func_0x000109eac384(0xa2,uVar5,uVar3,uStack_78);
      uVar5 = 0x14;
      FUN_109eac2ac(0x14,uVar16);
      lVar19 = alStack_70[0];
      func_0x000109eabfa8(alStack_70[0],uVar5,
                          ~(-1 << (ulong)(*(byte *)(*(long *)(alStack_70[0] + 0x20) + 0xd) & 0x1f)))
      ;
      lVar23 = 0;
      if (lVar19 != 0) {
        lVar23 = lVar19 + 8;
      }
      plVar6 = *(long **)(lVar29 + 0x10);
      *(long **)(lVar19 + 0x10) = plVar6;
      *plVar6 = lVar23;
      plVar11[1] = lVar28;
      plVar6 = (long *)0x0;
      if (plVar30 != (long *)0x0) {
        plVar6 = plVar11 + 1;
      }
      plVar11[2] = lVar23;
      *(long **)(lVar19 + 8) = plVar6;
      *(long **)(lVar29 + 0x10) = plVar6;
      func_0x000109e244dc(alStack_70,plVar11);
      func_0x000109e24460(&uStack_78,plVar10);
      uVar5 = 0x31;
      FUN_109eac2ac(0x31,uStack_78);
      uVar3 = 0x90;
      func_0x000109eac310(0x90,uVar5,plVar4);
      uVar5 = 0x7c;
      func_0x000109eac310(0x7c,uVar3,plVar18);
      lVar23 = alStack_70[0];
      func_0x000109eabfa8(alStack_70[0],uVar5,
                          ~(-1 << (ulong)(*(byte *)(*(long *)(alStack_70[0] + 0x20) + 0xd) & 0x1f)))
      ;
      *(long *)(lVar23 + 8) = lVar28;
      puVar24 = *(undefined8 **)(lVar29 + 0x10);
      plVar4 = (long *)0x0;
      if (lVar23 != 0) {
        plVar4 = (long *)(lVar23 + 8);
      }
      *(undefined8 **)(lVar23 + 0x10) = puVar24;
      *puVar24 = plVar4;
      *(long **)(lVar29 + 0x10) = plVar4;
      *(undefined4 *)(param_2 + 0x28) = 0xa2;
      *(undefined1 *)(param_2 + 0x50) = 3;
      func_0x000109e24460(alStack_70,plVar11);
      uVar5 = 0x89;
      func_0x000109eac310(0x89,alStack_70[0],plVar2);
      *(undefined8 *)(param_2 + 0x30) = uVar5;
      *(long **)(param_2 + 0x38) = plVar26;
      plVar26 = (long *)0x60;
      _malloc();
      plVar2 = plVar26;
      if (plVar26 != (long *)0x0) {
        plVar26[1] = 0;
        *plVar26 = 0;
        plVar26[3] = 0;
        plVar26[2] = 0;
        *plVar26 = param_2 + -0x30;
        lVar28 = *(long *)(param_2 + -0x28);
        plVar26[3] = lVar28;
        plVar26[4] = 0;
        *(long **)(param_2 + -0x28) = plVar26;
        if (lVar28 != 0) {
          *(long **)(lVar28 + 0x10) = plVar26;
        }
        plVar2 = plVar26 + 6;
        plVar26[7] = 0;
        *plVar2 = 0;
        plVar26[9] = 0;
        plVar26[8] = 0;
        plVar26[0xb] = 0;
        plVar26[10] = 0;
      }
      plVar2[1] = 0;
      plVar2[2] = 0;
      *(undefined4 *)(plVar2 + 3) = 2;
      *plVar2 = (long)&PTR_DAT_110b64048;
      lVar28 = plVar11[4];
      plVar2[5] = (long)plVar11;
      goto LAB_109ebbc5c;
    }
    if (iVar33 != 0x67) {
      return 0;
    }
    if ((*(byte *)(param_1 + 0x36) >> 1 & 1) == 0) {
      return 0;
    }
    bVar1 = *(byte *)(*(long *)(*(long *)(param_2 + 0x30) + 0x20) + 0xd);
    uVar27 = (ulong)bVar1;
    plVar26 = (long *)0xe0;
    _malloc();
    plVar2 = plVar26;
    if (plVar26 != (long *)0x0) {
      plVar26[1] = 0;
      *plVar26 = 0;
      plVar26[3] = 0;
      plVar26[2] = 0;
      *plVar26 = param_2 + -0x30;
      lVar28 = *(long *)(param_2 + -0x28);
      plVar26[3] = lVar28;
      plVar26[4] = 0;
      *(long **)(param_2 + -0x28) = plVar26;
      if (lVar28 != 0) {
        *(long **)(lVar28 + 0x10) = plVar26;
      }
      plVar2 = plVar26 + 6;
      plVar26[7] = 0;
      *plVar2 = 0;
      plVar26[0x19] = 0;
      plVar26[0x18] = 0;
      plVar26[0x1b] = 0;
      plVar26[0x1a] = 0;
      plVar26[0x15] = 0;
      plVar26[0x14] = 0;
      plVar26[0x17] = 0;
      plVar26[0x16] = 0;
      plVar26[0x11] = 0;
      plVar26[0x10] = 0;
      plVar26[0x13] = 0;
      plVar26[0x12] = 0;
      plVar26[0xd] = 0;
      plVar26[0xc] = 0;
      plVar26[0xf] = 0;
      plVar26[0xe] = 0;
      plVar26[9] = 0;
      plVar26[8] = 0;
      plVar26[0xb] = 0;
      plVar26[10] = 0;
    }
    FUN_109ea98b0(plVar2,0,uVar27);
    plVar4 = (long *)0xe0;
    _malloc();
    plVar26 = plVar4;
    if (plVar4 != (long *)0x0) {
      plVar4[1] = 0;
      *plVar4 = 0;
      plVar4[3] = 0;
      plVar4[2] = 0;
      *plVar4 = param_2 + -0x30;
      lVar28 = *(long *)(param_2 + -0x28);
      plVar4[3] = lVar28;
      plVar4[4] = 0;
      *(long **)(param_2 + -0x28) = plVar4;
      if (lVar28 != 0) {
        *(long **)(lVar28 + 0x10) = plVar4;
      }
      plVar26 = plVar4 + 6;
      plVar4[7] = 0;
      *plVar26 = 0;
      plVar4[0x19] = 0;
      plVar4[0x18] = 0;
      plVar4[0x1b] = 0;
      plVar4[0x1a] = 0;
      plVar4[0x15] = 0;
      plVar4[0x14] = 0;
      plVar4[0x17] = 0;
      plVar4[0x16] = 0;
      plVar4[0x11] = 0;
      plVar4[0x10] = 0;
      plVar4[0x13] = 0;
      plVar4[0x12] = 0;
      plVar4[0xd] = 0;
      plVar4[0xc] = 0;
      plVar4[0xf] = 0;
      plVar4[0xe] = 0;
      plVar4[9] = 0;
      plVar4[8] = 0;
      plVar4[0xb] = 0;
      plVar4[10] = 0;
    }
    func_0x000109ea9960(plVar26,0xffffffff,uVar27);
    plVar18 = (long *)0xe0;
    _malloc();
    plVar4 = plVar18;
    if (plVar18 != (long *)0x0) {
      plVar18[1] = 0;
      *plVar18 = 0;
      plVar18[3] = 0;
      plVar18[2] = 0;
      *plVar18 = param_2 + -0x30;
      lVar28 = *(long *)(param_2 + -0x28);
      plVar18[3] = lVar28;
      plVar18[4] = 0;
      *(long **)(param_2 + -0x28) = plVar18;
      if (lVar28 != 0) {
        *(long **)(lVar28 + 0x10) = plVar18;
      }
      plVar4 = plVar18 + 6;
      plVar18[7] = 0;
      *plVar4 = 0;
      plVar18[0x19] = 0;
      plVar18[0x18] = 0;
      plVar18[0x1b] = 0;
      plVar18[0x1a] = 0;
      plVar18[0x15] = 0;
      plVar18[0x14] = 0;
      plVar18[0x17] = 0;
      plVar18[0x16] = 0;
      plVar18[0x11] = 0;
      plVar18[0x10] = 0;
      plVar18[0x13] = 0;
      plVar18[0x12] = 0;
      plVar18[0xd] = 0;
      plVar18[0xc] = 0;
      plVar18[0xf] = 0;
      plVar18[0xe] = 0;
      plVar18[9] = 0;
      plVar18[8] = 0;
      plVar18[0xb] = 0;
      plVar18[10] = 0;
    }
    func_0x000109ea9960(plVar4,0x17,uVar27);
    plVar6 = (long *)0xe0;
    _malloc();
    plVar18 = plVar6;
    if (plVar6 != (long *)0x0) {
      plVar6[1] = 0;
      *plVar6 = 0;
      plVar6[3] = 0;
      plVar6[2] = 0;
      *plVar6 = param_2 + -0x30;
      lVar28 = *(long *)(param_2 + -0x28);
      plVar6[3] = lVar28;
      plVar6[4] = 0;
      *(long **)(param_2 + -0x28) = plVar6;
      if (lVar28 != 0) {
        *(long **)(lVar28 + 0x10) = plVar6;
      }
      plVar18 = plVar6 + 6;
      plVar6[7] = 0;
      *plVar18 = 0;
      plVar6[0x19] = 0;
      plVar6[0x18] = 0;
      plVar6[0x1b] = 0;
      plVar6[0x1a] = 0;
      plVar6[0x15] = 0;
      plVar6[0x14] = 0;
      plVar6[0x17] = 0;
      plVar6[0x16] = 0;
      plVar6[0x11] = 0;
      plVar6[0x10] = 0;
      plVar6[0x13] = 0;
      plVar6[0x12] = 0;
      plVar6[0xd] = 0;
      plVar6[0xc] = 0;
      plVar6[0xf] = 0;
      plVar6[0xe] = 0;
      plVar6[9] = 0;
      plVar6[8] = 0;
      plVar6[0xb] = 0;
      plVar6[10] = 0;
    }
    func_0x000109ea9960(plVar18,0x7f,uVar27);
    plVar6 = (long *)0xc0;
    _malloc();
    if (plVar6 == (long *)0x0) {
      plVar34 = (long *)0x0;
    }
    else {
      plVar6[1] = 0;
      *plVar6 = 0;
      plVar6[3] = 0;
      plVar6[2] = 0;
      *plVar6 = param_2 + -0x30;
      lVar28 = *(long *)(param_2 + -0x28);
      plVar6[3] = lVar28;
      plVar6[4] = 0;
      *(long **)(param_2 + -0x28) = plVar6;
      if (lVar28 != 0) {
        *(long **)(lVar28 + 0x10) = plVar6;
      }
      plVar34 = plVar6 + 6;
      plVar6[7] = 0;
      *plVar34 = 0;
      plVar6[0x15] = 0;
      plVar6[0x14] = 0;
      plVar6[0x17] = 0;
      plVar6[0x16] = 0;
      plVar6[0x11] = 0;
      plVar6[0x10] = 0;
      plVar6[0x13] = 0;
      plVar6[0x12] = 0;
      plVar6[0xd] = 0;
      plVar6[0xc] = 0;
      plVar6[0xf] = 0;
      plVar6[0xe] = 0;
      plVar6[9] = 0;
      plVar6[8] = 0;
      plVar6[0xb] = 0;
      plVar6[10] = 0;
    }
    uVar25 = (uint)bVar1;
    if (uVar25 == 8) {
      uVar22 = 6;
LAB_109eba3e0:
      puVar20 = (&PTR_DAT_110b66d68)[uVar22];
    }
    else {
      if (uVar25 == 0x10) {
        uVar22 = 7;
        goto LAB_109eba3e0;
      }
      uVar22 = uVar27;
      if (0xfffffff8 < uVar25 - 8) goto LAB_109eba3e0;
      puVar20 = &UNK_10e05d730;
    }
    FUN_109eaba7c(plVar34,puVar20,&DAT_10f3ed9b4,0xb);
    plVar7 = (long *)0xc0;
    _malloc();
    if (plVar7 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar7[1] = 0;
      *plVar7 = 0;
      plVar7[3] = 0;
      plVar7[2] = 0;
      *plVar7 = param_2 + -0x30;
      lVar28 = *(long *)(param_2 + -0x28);
      plVar7[3] = lVar28;
      plVar7[4] = 0;
      *(long **)(param_2 + -0x28) = plVar7;
      if (lVar28 != 0) {
        *(long **)(lVar28 + 0x10) = plVar7;
      }
      plVar8 = plVar7 + 6;
      plVar7[7] = 0;
      *plVar8 = 0;
      plVar7[0x15] = 0;
      plVar7[0x14] = 0;
      plVar7[0x17] = 0;
      plVar7[0x16] = 0;
      plVar7[0x11] = 0;
      plVar7[0x10] = 0;
      plVar7[0x13] = 0;
      plVar7[0x12] = 0;
      plVar7[0xd] = 0;
      plVar7[0xc] = 0;
      plVar7[0xf] = 0;
      plVar7[0xe] = 0;
      plVar7[9] = 0;
      plVar7[8] = 0;
      plVar7[0xb] = 0;
      plVar7[10] = 0;
    }
    uVar25 = (uint)bVar1;
    if (uVar25 == 8) {
      uVar22 = 6;
LAB_109eba494:
      puVar20 = (&PTR_DAT_110b66da0)[uVar22];
    }
    else {
      if (uVar25 == 0x10) {
        uVar22 = 7;
        goto LAB_109eba494;
      }
      uVar22 = uVar27;
      if (0xfffffff8 < uVar25 - 8) goto LAB_109eba494;
      puVar20 = &UNK_10e05d730;
    }
    FUN_109eaba7c(plVar8,puVar20,&UNK_10f615663,0xb);
    plVar9 = (long *)0xc0;
    _malloc();
    if (plVar9 == (long *)0x0) {
      plVar10 = (long *)0x0;
    }
    else {
      plVar9[1] = 0;
      *plVar9 = 0;
      plVar9[3] = 0;
      plVar9[2] = 0;
      *plVar9 = param_2 + -0x30;
      lVar28 = *(long *)(param_2 + -0x28);
      plVar9[3] = lVar28;
      plVar9[4] = 0;
      *(long **)(param_2 + -0x28) = plVar9;
      if (lVar28 != 0) {
        *(long **)(lVar28 + 0x10) = plVar9;
      }
      plVar10 = plVar9 + 6;
      plVar9[7] = 0;
      *plVar10 = 0;
      plVar9[0x15] = 0;
      plVar9[0x14] = 0;
      plVar9[0x17] = 0;
      plVar9[0x16] = 0;
      plVar9[0x11] = 0;
      plVar9[0x10] = 0;
      plVar9[0x13] = 0;
      plVar9[0x12] = 0;
      plVar9[0xd] = 0;
      plVar9[0xc] = 0;
      plVar9[0xf] = 0;
      plVar9[0xe] = 0;
      plVar9[9] = 0;
      plVar9[8] = 0;
      plVar9[0xb] = 0;
      plVar9[10] = 0;
    }
    if (uVar25 == 8) {
      uVar22 = 6;
LAB_109eba54c:
      puVar20 = (&PTR_PTR_110b66cc0)[uVar22];
    }
    else {
      if (uVar25 == 0x10) {
        uVar22 = 7;
        goto LAB_109eba54c;
      }
      uVar22 = uVar27;
      if (0xfffffff8 < uVar25 - 8) goto LAB_109eba54c;
      puVar20 = &UNK_10e05d730;
    }
    FUN_109eaba7c(plVar10,puVar20,&UNK_10f61566c,0xb);
    plVar30 = (long *)0xc0;
    _malloc();
    if (plVar30 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar30[1] = 0;
      *plVar30 = 0;
      plVar30[3] = 0;
      plVar30[2] = 0;
      *plVar30 = param_2 + -0x30;
      lVar28 = *(long *)(param_2 + -0x28);
      plVar30[3] = lVar28;
      plVar30[4] = 0;
      *(long **)(param_2 + -0x28) = plVar30;
      if (lVar28 != 0) {
        *(long **)(lVar28 + 0x10) = plVar30;
      }
      plVar11 = plVar30 + 6;
      plVar30[7] = 0;
      *plVar11 = 0;
      plVar30[0x15] = 0;
      plVar30[0x14] = 0;
      plVar30[0x17] = 0;
      plVar30[0x16] = 0;
      plVar30[0x11] = 0;
      plVar30[0x10] = 0;
      plVar30[0x13] = 0;
      plVar30[0x12] = 0;
      plVar30[0xd] = 0;
      plVar30[0xc] = 0;
      plVar30[0xf] = 0;
      plVar30[0xe] = 0;
      plVar30[9] = 0;
      plVar30[8] = 0;
      plVar30[0xb] = 0;
      plVar30[10] = 0;
    }
    uVar25 = (uint)bVar1;
    if (uVar25 == 8) {
      uVar27 = 6;
LAB_109eba5f8:
      puVar20 = (&PTR_DAT_110b66d68)[uVar27];
    }
    else {
      if (uVar25 == 0x10) {
        uVar27 = 7;
        goto LAB_109eba5f8;
      }
      if (0xfffffff8 < uVar25 - 8) goto LAB_109eba5f8;
      puVar20 = &UNK_10e05d730;
    }
    FUN_109eaba7c(plVar11,puVar20,&UNK_10f60c31e,0xb);
    lVar29 = *(long *)(param_1 + 8);
    lVar28 = lVar29 + 8;
    plVar34[1] = lVar28;
    plVar32 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      plVar32 = plVar34 + 1;
    }
    puVar24 = *(undefined8 **)(lVar29 + 0x10);
    plVar34[2] = (long)puVar24;
    *puVar24 = plVar32;
    *(long **)(lVar29 + 0x10) = plVar32;
    if (*(char *)(*(long *)(*(long *)(param_2 + 0x30) + 0x20) + 4) == '\x01') {
      func_0x000109e244dc(alStack_70,plVar34);
      uVar5 = *(undefined8 *)(param_2 + 0x30);
    }
    else {
      func_0x000109e244dc(alStack_70,plVar34);
      uVar5 = 0x16;
      FUN_109eac2ac(0x16,*(undefined8 *)(param_2 + 0x30));
    }
    lVar19 = alStack_70[0];
    func_0x000109eabfa8(alStack_70[0],uVar5,
                        ~(-1 << (ulong)(*(byte *)(*(long *)(alStack_70[0] + 0x20) + 0xd) & 0x1f)));
    lVar23 = 0;
    if (lVar19 != 0) {
      lVar23 = lVar19 + 8;
    }
    plVar6 = *(long **)(lVar29 + 0x10);
    *(long **)(lVar19 + 0x10) = plVar6;
    *plVar6 = lVar23;
    plVar8[1] = lVar28;
    plVar6 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      plVar6 = plVar8 + 1;
    }
    plVar8[2] = lVar19 + 8;
    *(long **)(lVar19 + 8) = plVar6;
    *(long **)(lVar29 + 0x10) = plVar6;
    func_0x000109e244dc(alStack_70,plVar8);
    func_0x000109e24460(&uStack_78,plVar34);
    func_0x000109e24460(&uStack_80,plVar34);
    uVar5 = 2;
    FUN_109eac2ac(2,uStack_80);
    uVar3 = 0x91;
    func_0x000109eac310(0x91,uStack_78,uVar5);
    uVar5 = 0x15;
    FUN_109eac2ac(0x15,uVar3);
    lVar19 = alStack_70[0];
    func_0x000109eabfa8(alStack_70[0],uVar5,
                        ~(-1 << (ulong)(*(byte *)(*(long *)(alStack_70[0] + 0x20) + 0xd) & 0x1f)));
    lVar23 = 0;
    if (lVar19 != 0) {
      lVar23 = lVar19 + 8;
    }
    plVar6 = *(long **)(lVar29 + 0x10);
    *(long **)(lVar19 + 0x10) = plVar6;
    *plVar6 = lVar23;
    plVar10[1] = lVar28;
    plVar6 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = plVar10 + 1;
    }
    plVar10[2] = lVar23;
    *(long **)(lVar19 + 8) = plVar6;
    *(long **)(lVar29 + 0x10) = plVar6;
    func_0x000109e244dc(alStack_70,plVar10);
    func_0x000109e24460(&uStack_78,plVar8);
    uVar5 = 0x14;
    FUN_109eac2ac(0x14,uStack_78);
    lVar19 = alStack_70[0];
    func_0x000109eabfa8(alStack_70[0],uVar5,
                        ~(-1 << (ulong)(*(byte *)(*(long *)(alStack_70[0] + 0x20) + 0xd) & 0x1f)));
    lVar23 = 0;
    if (lVar19 != 0) {
      lVar23 = lVar19 + 8;
    }
    plVar6 = *(long **)(lVar29 + 0x10);
    *(long **)(lVar19 + 0x10) = plVar6;
    *plVar6 = lVar23;
    plVar11[1] = lVar28;
    plVar6 = (long *)0x0;
    if (plVar30 != (long *)0x0) {
      plVar6 = plVar11 + 1;
    }
    plVar11[2] = lVar23;
    *(long **)(lVar19 + 8) = plVar6;
    *(long **)(lVar29 + 0x10) = plVar6;
    func_0x000109e244dc(alStack_70,plVar11);
    func_0x000109e24460(&uStack_78,plVar10);
    uVar5 = 0x31;
    FUN_109eac2ac(0x31,uStack_78);
    uVar3 = 0x90;
    func_0x000109eac310(0x90,uVar5,plVar4);
    uVar5 = 0x7c;
    func_0x000109eac310(0x7c,uVar3,plVar18);
    lVar23 = alStack_70[0];
    func_0x000109eabfa8(alStack_70[0],uVar5,
                        ~(-1 << (ulong)(*(byte *)(*(long *)(alStack_70[0] + 0x20) + 0xd) & 0x1f)));
    *(long *)(lVar23 + 8) = lVar28;
    puVar24 = *(undefined8 **)(lVar29 + 0x10);
    plVar4 = (long *)0x0;
    if (lVar23 != 0) {
      plVar4 = (long *)(lVar23 + 8);
    }
    *(undefined8 **)(lVar23 + 0x10) = puVar24;
    *puVar24 = plVar4;
    *(long **)(lVar29 + 0x10) = plVar4;
    *(undefined4 *)(param_2 + 0x28) = 0xa2;
    *(undefined1 *)(param_2 + 0x50) = 3;
    func_0x000109e24460(alStack_70,plVar8);
    uVar5 = 0x8b;
    func_0x000109eac310(0x8b,alStack_70[0],plVar2);
    *(undefined8 *)(param_2 + 0x30) = uVar5;
    *(long **)(param_2 + 0x38) = plVar26;
    plVar26 = (long *)0x60;
    _malloc();
    if (plVar26 == (long *)0x0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar26[1] = 0;
      *plVar26 = 0;
      plVar26[3] = 0;
      plVar26[2] = 0;
      *plVar26 = param_2 + -0x30;
      lVar28 = *(long *)(param_2 + -0x28);
      plVar26[3] = lVar28;
      plVar26[4] = 0;
      *(long **)(param_2 + -0x28) = plVar26;
      if (lVar28 != 0) {
        *(long **)(lVar28 + 0x10) = plVar26;
      }
      plVar2 = plVar26 + 6;
      plVar26[7] = 0;
      *plVar2 = 0;
      plVar26[9] = 0;
      plVar26[8] = 0;
      plVar26[0xb] = 0;
      plVar26[10] = 0;
    }
    plVar2[1] = 0;
    plVar2[2] = 0;
    *(undefined4 *)(plVar2 + 3) = 2;
    *plVar2 = (long)&PTR_DAT_110b64048;
    lVar28 = plVar11[4];
    plVar2[5] = (long)plVar11;
LAB_109ebbc5c:
    plVar2[4] = lVar28;
    *(long **)(param_2 + 0x40) = plVar2;
    *(undefined1 *)(param_1 + 0x31) = 1;
    return 0;
  }
  if (iVar33 != 0x84) {
    if (iVar33 == 0xa1) {
      lVar28 = *(long *)(param_2 + 0x30);
      if (*(char *)(*(long *)(lVar28 + 0x20) + 4) != '\x04') {
        return 0;
      }
      plVar4 = *(long **)(param_2 + 0x40);
      plVar26 = (long *)0xe0;
      _malloc();
      plVar2 = plVar26;
      if (plVar26 != (long *)0x0) {
        plVar26[1] = 0;
        *plVar26 = 0;
        plVar26[3] = 0;
        plVar26[2] = 0;
        *plVar26 = param_2 + -0x30;
        lVar29 = *(long *)(param_2 + -0x28);
        plVar26[3] = lVar29;
        plVar26[4] = 0;
        *(long **)(param_2 + -0x28) = plVar26;
        if (lVar29 != 0) {
          *(long **)(lVar29 + 0x10) = plVar26;
        }
        plVar2 = plVar26 + 6;
        plVar26[7] = 0;
        *plVar2 = 0;
        plVar26[0x19] = 0;
        plVar26[0x18] = 0;
        plVar26[0x1b] = 0;
        plVar26[0x1a] = 0;
        plVar26[0x15] = 0;
        plVar26[0x14] = 0;
        plVar26[0x17] = 0;
        plVar26[0x16] = 0;
        plVar26[0x11] = 0;
        plVar26[0x10] = 0;
        plVar26[0x13] = 0;
        plVar26[0x12] = 0;
        plVar26[0xd] = 0;
        plVar26[0xc] = 0;
        plVar26[0xf] = 0;
        plVar26[0xe] = 0;
        plVar26[9] = 0;
        plVar26[8] = 0;
        plVar26[0xb] = 0;
        plVar26[10] = 0;
      }
      func_0x000109ea9804(0x3ff0000000000000,plVar2,*(undefined1 *)(plVar4[4] + 0xd));
      uVar21 = 0;
      if (*(char *)(plVar4[4] + 0xd) != '\x01') {
        uVar21 = 0x688;
      }
      *(undefined4 *)(param_2 + 0x28) = 0xa0;
      *(undefined1 *)(param_2 + 0x50) = 3;
      plVar26 = plVar4;
      FUN_109eac090(plVar4,uVar21,*(undefined1 *)(*(long *)(lVar28 + 0x20) + 0xd));
      *(long **)(param_2 + 0x30) = plVar26;
      (**(code **)(*plVar4 + 0x20))(plVar4,param_2,0);
      uVar5 = 0x7c;
      func_0x000109eac310(0x7c,plVar2,plVar4);
      uVar3 = 0x82;
      func_0x000109eac310(0x82,uVar5,lVar28);
      *(undefined8 *)(param_2 + 0x40) = uVar3;
      *(undefined1 *)(param_1 + 0x31) = 1;
      return 0;
    }
    if (iVar33 != 0x97) {
      return 0;
    }
    lVar29 = *(long *)(param_2 + 0x30);
    lVar28 = *(long *)(lVar29 + 0x20);
    if (*(char *)(lVar28 + 4) != '\x04') {
      return 0;
    }
    plVar2 = (long *)0xc0;
    _malloc();
    if (plVar2 == (long *)0x0) {
      plVar26 = (long *)0x0;
    }
    else {
      plVar2[1] = 0;
      *plVar2 = 0;
      plVar2[3] = 0;
      plVar2[2] = 0;
      *plVar2 = param_2 + -0x30;
      lVar28 = *(long *)(param_2 + -0x28);
      plVar2[3] = lVar28;
      plVar2[4] = 0;
      *(long **)(param_2 + -0x28) = plVar2;
      if (lVar28 != 0) {
        *(long **)(lVar28 + 0x10) = plVar2;
        lVar29 = *(long *)(param_2 + 0x30);
      }
      plVar26 = plVar2 + 6;
      plVar2[7] = 0;
      *plVar26 = 0;
      plVar2[0x15] = 0;
      plVar2[0x14] = 0;
      plVar2[0x17] = 0;
      plVar2[0x16] = 0;
      plVar2[0x11] = 0;
      plVar2[0x10] = 0;
      plVar2[0x13] = 0;
      plVar2[0x12] = 0;
      plVar2[0xd] = 0;
      plVar2[0xc] = 0;
      plVar2[0xf] = 0;
      plVar2[0xe] = 0;
      plVar2[9] = 0;
      plVar2[8] = 0;
      plVar2[0xb] = 0;
      plVar2[10] = 0;
      lVar28 = *(long *)(lVar29 + 0x20);
    }
    FUN_109ec6810(lVar28);
    FUN_109eaba7c(plVar26,lVar28,&UNK_10f61565b,0xb);
    lVar28 = *(long *)(param_1 + 8);
    plVar26[1] = lVar28 + 8;
    plVar4 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      plVar4 = plVar26 + 1;
    }
    puVar24 = *(undefined8 **)(lVar28 + 0x10);
    plVar26[2] = (long)puVar24;
    *puVar24 = plVar4;
    *(long **)(lVar28 + 0x10) = plVar4;
    lVar28 = *(long *)(param_2 + 0x30);
    uVar25 = (uint)*(byte *)(*(long *)(lVar28 + 0x20) + 0xe) *
             (uint)*(byte *)(*(long *)(lVar28 + 0x20) + 0xd);
    if (1 < uVar25) {
      iVar33 = 0;
      do {
        uVar25 = uVar25 - 1;
        if (iVar33 == 0) {
          func_0x000109e244dc(alStack_70,plVar26);
          plVar2 = *(long **)(param_2 + 0x30);
          (**(code **)(*plVar2 + 0x20))(plVar2,param_2,0);
          FUN_109eac090();
          plVar4 = *(long **)(param_2 + 0x38);
          (**(code **)(*plVar4 + 0x20))(plVar4,param_2,0);
          FUN_109eac090();
          uVar5 = 0x82;
          func_0x000109eac310(0x82,plVar2,plVar4);
        }
        else {
          func_0x000109e244dc(alStack_70,plVar26);
          plVar2 = *(long **)(param_2 + 0x30);
          (**(code **)(*plVar2 + 0x20))(plVar2,param_2,0);
          FUN_109eac090();
          plVar4 = *(long **)(param_2 + 0x38);
          (**(code **)(*plVar4 + 0x20))(plVar4,param_2,0);
          FUN_109eac090();
          func_0x000109e24460(&uStack_78,plVar26);
          uVar5 = 0xa0;
          func_0x000109eac384(0xa0,plVar2,plVar4,uStack_78);
        }
        lVar28 = alStack_70[0];
        func_0x000109eabfa8(alStack_70[0],uVar5,
                            ~(-1 << (ulong)(*(byte *)(*(long *)(alStack_70[0] + 0x20) + 0xd) & 0x1f)
                             ));
        lVar29 = *(long *)(param_1 + 8);
        *(long *)(lVar28 + 8) = lVar29 + 8;
        plVar2 = (long *)0x0;
        if (lVar28 != 0) {
          plVar2 = (long *)(lVar28 + 8);
        }
        puVar24 = *(undefined8 **)(lVar29 + 0x10);
        *(undefined8 **)(lVar28 + 0x10) = puVar24;
        *puVar24 = plVar2;
        *(long **)(lVar29 + 0x10) = plVar2;
        iVar33 = iVar33 + 1;
      } while (1 < (int)uVar25);
      lVar28 = *(long *)(param_2 + 0x30);
    }
    *(undefined4 *)(param_2 + 0x28) = 0xa0;
    *(undefined1 *)(param_2 + 0x50) = 3;
    FUN_109eac090(lVar28,0,1);
    *(long *)(param_2 + 0x30) = lVar28;
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    FUN_109eac090(uVar5,0,1);
    *(undefined8 *)(param_2 + 0x38) = uVar5;
    plVar4 = (long *)0x60;
    _malloc();
    plVar2 = plVar4;
    if (plVar4 != (long *)0x0) {
      plVar4[1] = 0;
      *plVar4 = 0;
      plVar4[3] = 0;
      plVar4[2] = 0;
      *plVar4 = param_2 + -0x30;
      lVar28 = *(long *)(param_2 + -0x28);
      plVar4[3] = lVar28;
      plVar4[4] = 0;
      *(long **)(param_2 + -0x28) = plVar4;
      if (lVar28 != 0) {
        *(long **)(lVar28 + 0x10) = plVar4;
      }
      plVar2 = plVar4 + 6;
      plVar4[7] = 0;
      *plVar2 = 0;
      plVar4[9] = 0;
      plVar4[8] = 0;
      plVar4[0xb] = 0;
      plVar4[10] = 0;
    }
    plVar2[1] = 0;
    plVar2[2] = 0;
    *(undefined4 *)(plVar2 + 3) = 2;
    *plVar2 = (long)&PTR_DAT_110b64048;
    plVar2[4] = plVar26[4];
    plVar2[5] = (long)plVar26;
    *(long **)(param_2 + 0x40) = plVar2;
    *(undefined1 *)(param_1 + 0x31) = 1;
    return 0;
  }
  if ((*(byte *)(param_1 + 0x36) >> 3 & 1) == 0) {
    return 0;
  }
  bVar1 = *(byte *)(*(long *)(*(long *)(param_2 + 0x30) + 0x20) + 0xd);
  uVar27 = (ulong)bVar1;
  plVar2 = (long *)0xc0;
  _malloc();
  if (plVar2 == (long *)0x0) {
    plVar26 = (long *)0x0;
  }
  else {
    plVar2[1] = 0;
    *plVar2 = 0;
    plVar2[3] = 0;
    plVar2[2] = 0;
    *plVar2 = param_2 + -0x30;
    lVar28 = *(long *)(param_2 + -0x28);
    plVar2[3] = lVar28;
    plVar2[4] = 0;
    *(long **)(param_2 + -0x28) = plVar2;
    if (lVar28 != 0) {
      *(long **)(lVar28 + 0x10) = plVar2;
    }
    plVar26 = plVar2 + 6;
    plVar2[7] = 0;
    *plVar26 = 0;
    plVar2[0x15] = 0;
    plVar2[0x14] = 0;
    plVar2[0x17] = 0;
    plVar2[0x16] = 0;
    plVar2[0x11] = 0;
    plVar2[0x10] = 0;
    plVar2[0x13] = 0;
    plVar2[0x12] = 0;
    plVar2[0xd] = 0;
    plVar2[0xc] = 0;
    plVar2[0xf] = 0;
    plVar2[0xe] = 0;
    plVar2[9] = 0;
    plVar2[8] = 0;
    plVar2[0xb] = 0;
    plVar2[10] = 0;
  }
  uVar25 = (uint)bVar1;
  if (uVar25 == 8) {
    uVar22 = 6;
LAB_109eb98f8:
    puVar20 = (&PTR_DAT_110b66da0)[uVar22];
  }
  else {
    if (uVar25 == 0x10) {
      uVar22 = 7;
      goto LAB_109eb98f8;
    }
    uVar22 = uVar27;
    if (0xfffffff8 < uVar25 - 8) goto LAB_109eb98f8;
    puVar20 = &UNK_10e05d730;
  }
  FUN_109eaba7c(plVar26,puVar20,&UNK_10f61567c,0xb);
  plVar4 = (long *)0xc0;
  _malloc();
  if (plVar4 == (long *)0x0) {
    plVar18 = (long *)0x0;
  }
  else {
    plVar4[1] = 0;
    *plVar4 = 0;
    plVar4[3] = 0;
    plVar4[2] = 0;
    *plVar4 = param_2 + -0x30;
    lVar28 = *(long *)(param_2 + -0x28);
    plVar4[3] = lVar28;
    plVar4[4] = 0;
    *(long **)(param_2 + -0x28) = plVar4;
    if (lVar28 != 0) {
      *(long **)(lVar28 + 0x10) = plVar4;
    }
    plVar18 = plVar4 + 6;
    plVar4[7] = 0;
    *plVar18 = 0;
    plVar4[0x15] = 0;
    plVar4[0x14] = 0;
    plVar4[0x17] = 0;
    plVar4[0x16] = 0;
    plVar4[0x11] = 0;
    plVar4[0x10] = 0;
    plVar4[0x13] = 0;
    plVar4[0x12] = 0;
    plVar4[0xd] = 0;
    plVar4[0xc] = 0;
    plVar4[0xf] = 0;
    plVar4[0xe] = 0;
    plVar4[9] = 0;
    plVar4[8] = 0;
    plVar4[0xb] = 0;
    plVar4[10] = 0;
  }
  uVar25 = (uint)bVar1;
  if (uVar25 == 8) {
    uVar22 = 6;
LAB_109eb99a0:
    puVar20 = (&PTR_DAT_110b66da0)[uVar22];
  }
  else {
    if (uVar25 == 0x10) {
      uVar22 = 7;
      goto LAB_109eb99a0;
    }
    uVar22 = uVar27;
    if (0xfffffff8 < uVar25 - 8) goto LAB_109eb99a0;
    puVar20 = &UNK_10e05d730;
  }
  FUN_109eaba7c(plVar18,puVar20,&UNK_10f615681,0xb);
  plVar6 = (long *)0xc0;
  _malloc();
  if (plVar6 == (long *)0x0) {
    plStack_c0 = (long *)0x0;
  }
  else {
    plVar6[1] = 0;
    *plVar6 = 0;
    plVar6[3] = 0;
    plVar6[2] = 0;
    *plVar6 = param_2 + -0x30;
    lVar28 = *(long *)(param_2 + -0x28);
    plVar6[3] = lVar28;
    plVar6[4] = 0;
    *(long **)(param_2 + -0x28) = plVar6;
    if (lVar28 != 0) {
      *(long **)(lVar28 + 0x10) = plVar6;
    }
    plStack_c0 = plVar6 + 6;
    plVar6[7] = 0;
    *plStack_c0 = 0;
    plVar6[0x15] = 0;
    plVar6[0x14] = 0;
    plVar6[0x17] = 0;
    plVar6[0x16] = 0;
    plVar6[0x11] = 0;
    plVar6[0x10] = 0;
    plVar6[0x13] = 0;
    plVar6[0x12] = 0;
    plVar6[0xd] = 0;
    plVar6[0xc] = 0;
    plVar6[0xf] = 0;
    plVar6[0xe] = 0;
    plVar6[9] = 0;
    plVar6[8] = 0;
    plVar6[0xb] = 0;
    plVar6[10] = 0;
  }
  if (uVar25 == 8) {
    uVar22 = 6;
LAB_109eb9a50:
    puVar20 = (&PTR_DAT_110b66da0)[uVar22];
  }
  else {
    if (uVar25 == 0x10) {
      uVar22 = 7;
      goto LAB_109eb9a50;
    }
    uVar22 = uVar27;
    if (0xfffffff8 < uVar25 - 8) goto LAB_109eb9a50;
    puVar20 = &UNK_10e05d730;
  }
  FUN_109eaba7c(plStack_c0,puVar20,&UNK_10f615687,0xb);
  plVar7 = (long *)0xc0;
  _malloc();
  plVar34 = plVar7;
  if (plVar7 != (long *)0x0) {
    plVar7[1] = 0;
    *plVar7 = 0;
    plVar7[3] = 0;
    plVar7[2] = 0;
    *plVar7 = param_2 + -0x30;
    lVar28 = *(long *)(param_2 + -0x28);
    plVar7[3] = lVar28;
    plVar7[4] = 0;
    *(long **)(param_2 + -0x28) = plVar7;
    if (lVar28 != 0) {
      *(long **)(lVar28 + 0x10) = plVar7;
    }
    plVar34 = plVar7 + 6;
    plVar7[7] = 0;
    *plVar34 = 0;
    plVar7[0x15] = 0;
    plVar7[0x14] = 0;
    plVar7[0x17] = 0;
    plVar7[0x16] = 0;
    plVar7[0x11] = 0;
    plVar7[0x10] = 0;
    plVar7[0x13] = 0;
    plVar7[0x12] = 0;
    plVar7[0xd] = 0;
    plVar7[0xc] = 0;
    plVar7[0xf] = 0;
    plVar7[0xe] = 0;
    plVar7[9] = 0;
    plVar7[8] = 0;
    plVar7[0xb] = 0;
    plVar7[10] = 0;
  }
  uVar25 = (uint)bVar1;
  FUN_109eaba7c();
  plVar8 = (long *)0xc0;
  _malloc();
  if (plVar8 == (long *)0x0) {
    plStack_98 = (long *)0x0;
  }
  else {
    plVar8[1] = 0;
    *plVar8 = 0;
    plVar8[3] = 0;
    plVar8[2] = 0;
    *plVar8 = param_2 + -0x30;
    lVar28 = *(long *)(param_2 + -0x28);
    plVar8[3] = lVar28;
    plVar8[4] = 0;
    *(long **)(param_2 + -0x28) = plVar8;
    if (lVar28 != 0) {
      *(long **)(lVar28 + 0x10) = plVar8;
    }
    plStack_98 = plVar8 + 6;
    plVar8[7] = 0;
    *plStack_98 = 0;
    plVar8[0x15] = 0;
    plVar8[0x14] = 0;
    plVar8[0x17] = 0;
    plVar8[0x16] = 0;
    plVar8[0x11] = 0;
    plVar8[0x10] = 0;
    plVar8[0x13] = 0;
    plVar8[0x12] = 0;
    plVar8[0xd] = 0;
    plVar8[0xc] = 0;
    plVar8[0xf] = 0;
    plVar8[0xe] = 0;
    plVar8[9] = 0;
    plVar8[8] = 0;
    plVar8[0xb] = 0;
    plVar8[10] = 0;
  }
  if (uVar25 == 8) {
    uVar22 = 6;
LAB_109eb9ba0:
    puVar20 = (&PTR_DAT_110b66da0)[uVar22];
  }
  else {
    if (uVar25 == 0x10) {
      uVar22 = 7;
      goto LAB_109eb9ba0;
    }
    uVar22 = uVar27;
    if (0xfffffff8 < uVar25 - 8) goto LAB_109eb9ba0;
    puVar20 = &UNK_10e05d730;
  }
  FUN_109eaba7c(plStack_98,puVar20,&UNK_10f615692,0xb);
  plVar9 = (long *)0xc0;
  _malloc();
  if (plVar9 == (long *)0x0) {
    plStack_a0 = (long *)0x0;
  }
  else {
    plVar9[1] = 0;
    *plVar9 = 0;
    plVar9[3] = 0;
    plVar9[2] = 0;
    *plVar9 = param_2 + -0x30;
    lVar28 = *(long *)(param_2 + -0x28);
    plVar9[3] = lVar28;
    plVar9[4] = 0;
    *(long **)(param_2 + -0x28) = plVar9;
    if (lVar28 != 0) {
      *(long **)(lVar28 + 0x10) = plVar9;
    }
    plStack_a0 = plVar9 + 6;
    plVar9[7] = 0;
    *plStack_a0 = 0;
    plVar9[0x15] = 0;
    plVar9[0x14] = 0;
    plVar9[0x17] = 0;
    plVar9[0x16] = 0;
    plVar9[0x11] = 0;
    plVar9[0x10] = 0;
    plVar9[0x13] = 0;
    plVar9[0x12] = 0;
    plVar9[0xd] = 0;
    plVar9[0xc] = 0;
    plVar9[0xf] = 0;
    plVar9[0xe] = 0;
    plVar9[9] = 0;
    plVar9[8] = 0;
    plVar9[0xb] = 0;
    plVar9[10] = 0;
  }
  if (uVar25 == 8) {
    uVar22 = 6;
LAB_109eb9c4c:
    puVar20 = (&PTR_DAT_110b66da0)[uVar22];
  }
  else {
    if (uVar25 == 0x10) {
      uVar22 = 7;
      goto LAB_109eb9c4c;
    }
    uVar22 = uVar27;
    if (0xfffffff8 < uVar25 - 8) goto LAB_109eb9c4c;
    puVar20 = &UNK_10e05d730;
  }
  FUN_109eaba7c(plStack_a0,puVar20,&UNK_10f615698,0xb);
  plVar10 = (long *)0xc0;
  _malloc();
  if (plVar10 == (long *)0x0) {
    plVar30 = (long *)0x0;
  }
  else {
    plVar10[1] = 0;
    *plVar10 = 0;
    plVar10[3] = 0;
    plVar10[2] = 0;
    *plVar10 = param_2 + -0x30;
    lVar28 = *(long *)(param_2 + -0x28);
    plVar10[3] = lVar28;
    plVar10[4] = 0;
    *(long **)(param_2 + -0x28) = plVar10;
    if (lVar28 != 0) {
      *(long **)(lVar28 + 0x10) = plVar10;
    }
    plVar30 = plVar10 + 6;
    plVar10[7] = 0;
    *plVar30 = 0;
    plVar10[0x15] = 0;
    plVar10[0x14] = 0;
    plVar10[0x17] = 0;
    plVar10[0x16] = 0;
    plVar10[0x11] = 0;
    plVar10[0x10] = 0;
    plVar10[0x13] = 0;
    plVar10[0x12] = 0;
    plVar10[0xd] = 0;
    plVar10[0xc] = 0;
    plVar10[0xf] = 0;
    plVar10[0xe] = 0;
    plVar10[9] = 0;
    plVar10[8] = 0;
    plVar10[0xb] = 0;
    plVar10[10] = 0;
  }
  if (uVar25 == 8) {
    uVar22 = 6;
LAB_109eb9cf4:
    puVar20 = (&PTR_DAT_110b66da0)[uVar22];
  }
  else {
    if (uVar25 == 0x10) {
      uVar22 = 7;
      goto LAB_109eb9cf4;
    }
    uVar22 = uVar27;
    if (0xfffffff8 < uVar25 - 8) goto LAB_109eb9cf4;
    puVar20 = &UNK_10e05d730;
  }
  FUN_109eaba7c(plVar30,puVar20,&UNK_10f61569e,0xb);
  plVar11 = (long *)0xc0;
  _malloc();
  if (plVar11 == (long *)0x0) {
    plVar32 = (long *)0x0;
  }
  else {
    plVar11[1] = 0;
    *plVar11 = 0;
    plVar11[3] = 0;
    plVar11[2] = 0;
    *plVar11 = param_2 + -0x30;
    lVar28 = *(long *)(param_2 + -0x28);
    plVar11[3] = lVar28;
    plVar11[4] = 0;
    *(long **)(param_2 + -0x28) = plVar11;
    if (lVar28 != 0) {
      *(long **)(lVar28 + 0x10) = plVar11;
    }
    plVar32 = plVar11 + 6;
    plVar11[7] = 0;
    *plVar32 = 0;
    plVar11[0x15] = 0;
    plVar11[0x14] = 0;
    plVar11[0x17] = 0;
    plVar11[0x16] = 0;
    plVar11[0x11] = 0;
    plVar11[0x10] = 0;
    plVar11[0x13] = 0;
    plVar11[0x12] = 0;
    plVar11[0xd] = 0;
    plVar11[0xc] = 0;
    plVar11[0xf] = 0;
    plVar11[0xe] = 0;
    plVar11[9] = 0;
    plVar11[8] = 0;
    plVar11[0xb] = 0;
    plVar11[10] = 0;
  }
  uVar25 = (uint)bVar1;
  if (uVar25 == 8) {
    uVar22 = 6;
LAB_109eb9d9c:
    puVar20 = (&PTR_DAT_110b66da0)[uVar22];
  }
  else {
    if (uVar25 == 0x10) {
      uVar22 = 7;
      goto LAB_109eb9d9c;
    }
    uVar22 = uVar27;
    if (0xfffffff8 < uVar25 - 8) goto LAB_109eb9d9c;
    puVar20 = &UNK_10e05d730;
  }
  FUN_109eaba7c(plVar32,puVar20,&DAT_10f6156a1,0xb);
  plVar12 = (long *)0xc0;
  _malloc();
  if (plVar12 == (long *)0x0) {
    plVar31 = (long *)0x0;
  }
  else {
    plVar12[1] = 0;
    *plVar12 = 0;
    plVar12[3] = 0;
    plVar12[2] = 0;
    *plVar12 = param_2 + -0x30;
    lVar28 = *(long *)(param_2 + -0x28);
    plVar12[3] = lVar28;
    plVar12[4] = 0;
    *(long **)(param_2 + -0x28) = plVar12;
    if (lVar28 != 0) {
      *(long **)(lVar28 + 0x10) = plVar12;
    }
    plVar31 = plVar12 + 6;
    plVar12[7] = 0;
    *plVar31 = 0;
    plVar12[0x15] = 0;
    plVar12[0x14] = 0;
    plVar12[0x17] = 0;
    plVar12[0x16] = 0;
    plVar12[0x11] = 0;
    plVar12[0x10] = 0;
    plVar12[0x13] = 0;
    plVar12[0x12] = 0;
    plVar12[0xd] = 0;
    plVar12[0xc] = 0;
    plVar12[0xf] = 0;
    plVar12[0xe] = 0;
    plVar12[9] = 0;
    plVar12[8] = 0;
    plVar12[0xb] = 0;
    plVar12[10] = 0;
  }
  if (uVar25 == 8) {
    uVar22 = 6;
LAB_109eb9e48:
    puVar20 = (&PTR_DAT_110b66da0)[uVar22];
  }
  else {
    if (uVar25 == 0x10) {
      uVar22 = 7;
      goto LAB_109eb9e48;
    }
    uVar22 = uVar27;
    if (0xfffffff8 < uVar25 - 8) goto LAB_109eb9e48;
    puVar20 = &UNK_10e05d730;
  }
  FUN_109eaba7c(plVar31,puVar20,&DAT_10f490a77,0xb);
  plVar13 = (long *)0xc0;
  _malloc();
  if (plVar13 == (long *)0x0) {
    plStack_b0 = (long *)0x0;
  }
  else {
    plVar13[1] = 0;
    *plVar13 = 0;
    plVar13[3] = 0;
    plVar13[2] = 0;
    *plVar13 = param_2 + -0x30;
    lVar28 = *(long *)(param_2 + -0x28);
    plVar13[3] = lVar28;
    plVar13[4] = 0;
    *(long **)(param_2 + -0x28) = plVar13;
    if (lVar28 != 0) {
      *(long **)(lVar28 + 0x10) = plVar13;
    }
    plStack_b0 = plVar13 + 6;
    plVar13[7] = 0;
    *plStack_b0 = 0;
    plVar13[0x15] = 0;
    plVar13[0x14] = 0;
    plVar13[0x17] = 0;
    plVar13[0x16] = 0;
    plVar13[0x11] = 0;
    plVar13[0x10] = 0;
    plVar13[0x13] = 0;
    plVar13[0x12] = 0;
    plVar13[0xd] = 0;
    plVar13[0xc] = 0;
    plVar13[0xf] = 0;
    plVar13[0xe] = 0;
    plVar13[9] = 0;
    plVar13[8] = 0;
    plVar13[0xb] = 0;
    plVar13[10] = 0;
  }
  if (uVar25 == 8) {
    uVar22 = 6;
LAB_109eb9ef8:
    puVar20 = (&PTR_DAT_110b66da0)[uVar22];
  }
  else {
    if (uVar25 == 0x10) {
      uVar22 = 7;
      goto LAB_109eb9ef8;
    }
    uVar22 = uVar27;
    if (0xfffffff8 < uVar25 - 8) goto LAB_109eb9ef8;
    puVar20 = &UNK_10e05d730;
  }
  FUN_109eaba7c(plStack_b0,puVar20,&DAT_10f43d08c,0xb);
  plVar14 = (long *)0xe0;
  _malloc();
  if (plVar14 == (long *)0x0) {
    plVar17 = (long *)0x0;
  }
  else {
    plVar14[1] = 0;
    *plVar14 = 0;
    plVar14[3] = 0;
    plVar14[2] = 0;
    *plVar14 = param_2 + -0x30;
    lVar28 = *(long *)(param_2 + -0x28);
    plVar14[3] = lVar28;
    plVar14[4] = 0;
    *(long **)(param_2 + -0x28) = plVar14;
    if (lVar28 != 0) {
      *(long **)(lVar28 + 0x10) = plVar14;
    }
    plVar17 = plVar14 + 6;
    plVar14[7] = 0;
    *plVar17 = 0;
    plVar14[0x19] = 0;
    plVar14[0x18] = 0;
    plVar14[0x1b] = 0;
    plVar14[0x1a] = 0;
    plVar14[0x15] = 0;
    plVar14[0x14] = 0;
    plVar14[0x17] = 0;
    plVar14[0x16] = 0;
    plVar14[0x11] = 0;
    plVar14[0x10] = 0;
    plVar14[0x13] = 0;
    plVar14[0x12] = 0;
    plVar14[0xd] = 0;
    plVar14[0xc] = 0;
    plVar14[0xf] = 0;
    plVar14[0xe] = 0;
    plVar14[9] = 0;
    plVar14[8] = 0;
    plVar14[0xb] = 0;
    plVar14[10] = 0;
  }
  FUN_109ea98b0(plVar17,0xffff,uVar27);
  plVar15 = (long *)0xe0;
  _malloc();
  plVar14 = plVar15;
  if (plVar15 != (long *)0x0) {
    plVar15[1] = 0;
    *plVar15 = 0;
    plVar15[3] = 0;
    plVar15[2] = 0;
    *plVar15 = param_2 + -0x30;
    lVar28 = *(long *)(param_2 + -0x28);
    plVar15[3] = lVar28;
    plVar15[4] = 0;
    *(long **)(param_2 + -0x28) = plVar15;
    if (lVar28 != 0) {
      *(long **)(lVar28 + 0x10) = plVar15;
    }
    plVar14 = plVar15 + 6;
    plVar15[7] = 0;
    *plVar14 = 0;
    plVar15[0x19] = 0;
    plVar15[0x18] = 0;
    plVar15[0x1b] = 0;
    plVar15[0x1a] = 0;
    plVar15[0x15] = 0;
    plVar15[0x14] = 0;
    plVar15[0x17] = 0;
    plVar15[0x16] = 0;
    plVar15[0x11] = 0;
    plVar15[0x10] = 0;
    plVar15[0x13] = 0;
    plVar15[0x12] = 0;
    plVar15[0xd] = 0;
    plVar15[0xc] = 0;
    plVar15[0xf] = 0;
    plVar15[0xe] = 0;
    plVar15[9] = 0;
    plVar15[8] = 0;
    plVar15[0xb] = 0;
    plVar15[10] = 0;
  }
  FUN_109ea98b0(plVar14,0x10,uVar27);
  lVar29 = *(long *)(param_1 + 8);
  lVar28 = lVar29 + 8;
  plVar15 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    plVar15 = plVar26 + 1;
  }
  puVar24 = *(undefined8 **)(lVar29 + 0x10);
  plVar26[2] = (long)puVar24;
  *puVar24 = plVar15;
  plStack_a0[1] = lVar28;
  plVar2 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    plVar2 = plStack_a0 + 1;
  }
  plStack_c0[1] = (long)plVar2;
  plVar9 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    plVar9 = plStack_c0 + 1;
  }
  plStack_98[1] = (long)plVar9;
  plVar6 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    plVar6 = plStack_98 + 1;
  }
  plVar18[1] = (long)plVar6;
  plVar8 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar8 = plVar18 + 1;
  }
  plVar34[1] = (long)plVar8;
  plVar4 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar34 + 1;
  }
  plVar34[2] = (long)plVar15;
  plVar26[1] = (long)plVar4;
  plVar18[2] = (long)plVar4;
  plStack_98[2] = (long)plVar8;
  plStack_c0[2] = (long)plVar6;
  plStack_a0[2] = (long)plVar9;
  *(long **)(lVar29 + 0x10) = plVar2;
  if (*(char *)(*(long *)(*(long *)(param_2 + 0x30) + 0x20) + 4) == '\0') {
    func_0x000109e244dc(alStack_70,plVar26);
    lVar23 = alStack_70[0];
    func_0x000109eabfa8(alStack_70[0],*(undefined8 *)(param_2 + 0x30),
                        ~(-1 << (ulong)(*(byte *)(*(long *)(alStack_70[0] + 0x20) + 0xd) & 0x1f)));
    *(long *)(lVar23 + 8) = lVar28;
    puVar24 = *(undefined8 **)(lVar29 + 0x10);
    plVar2 = (long *)0x0;
    if (lVar23 != 0) {
      plVar2 = (long *)(lVar23 + 8);
    }
    *(undefined8 **)(lVar23 + 0x10) = puVar24;
    *puVar24 = plVar2;
    *(long **)(lVar29 + 0x10) = plVar2;
    func_0x000109e244dc(alStack_70,plVar34);
    lVar23 = alStack_70[0];
    func_0x000109eabfa8(alStack_70[0],*(undefined8 *)(param_2 + 0x38),
                        ~(-1 << (ulong)(*(byte *)(*(long *)(alStack_70[0] + 0x20) + 0xd) & 0x1f)));
    plStack_90 = (long *)0x0;
  }
  else {
    plVar2 = (long *)0xc0;
    _malloc();
    if (plVar2 == (long *)0x0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar2[1] = 0;
      *plVar2 = 0;
      plVar2[3] = 0;
      plVar2[2] = 0;
      *plVar2 = param_2 + -0x30;
      lVar23 = *(long *)(param_2 + -0x28);
      plVar2[3] = lVar23;
      plVar2[4] = 0;
      *(long **)(param_2 + -0x28) = plVar2;
      if (lVar23 != 0) {
        *(long **)(lVar23 + 0x10) = plVar2;
      }
      plVar4 = plVar2 + 6;
      plVar2[7] = 0;
      *plVar4 = 0;
      plVar2[0x15] = 0;
      plVar2[0x14] = 0;
      plVar2[0x17] = 0;
      plVar2[0x16] = 0;
      plVar2[0x11] = 0;
      plVar2[0x10] = 0;
      plVar2[0x13] = 0;
      plVar2[0x12] = 0;
      plVar2[0xd] = 0;
      plVar2[0xc] = 0;
      plVar2[0xf] = 0;
      plVar2[0xe] = 0;
      plVar2[9] = 0;
      plVar2[8] = 0;
      plVar2[0xb] = 0;
      plVar2[10] = 0;
    }
    uVar27 = (ulong)uVar25;
    if (uVar25 == 8) {
      uVar27 = 6;
LAB_109eba978:
      puVar20 = (&PTR_DAT_110b66d68)[uVar27];
    }
    else {
      if (uVar25 == 0x10) {
        uVar27 = 7;
        goto LAB_109eba978;
      }
      if (0xfffffff8 < uVar25 - 8) goto LAB_109eba978;
      puVar20 = &UNK_10e05d730;
    }
    FUN_109eaba7c(plVar4,puVar20,&UNK_10f6156a4,0xb);
    plVar6 = (long *)0xc0;
    _malloc();
    if (plVar6 == (long *)0x0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar6[1] = 0;
      *plVar6 = 0;
      plVar6[3] = 0;
      plVar6[2] = 0;
      *plVar6 = param_2 + -0x30;
      lVar23 = *(long *)(param_2 + -0x28);
      plVar6[3] = lVar23;
      plVar6[4] = 0;
      *(long **)(param_2 + -0x28) = plVar6;
      if (lVar23 != 0) {
        *(long **)(lVar23 + 0x10) = plVar6;
      }
      plVar7 = plVar6 + 6;
      plVar6[7] = 0;
      *plVar7 = 0;
      plVar6[0x15] = 0;
      plVar6[0x14] = 0;
      plVar6[0x17] = 0;
      plVar6[0x16] = 0;
      plVar6[0x11] = 0;
      plVar6[0x10] = 0;
      plVar6[0x13] = 0;
      plVar6[0x12] = 0;
      plVar6[0xd] = 0;
      plVar6[0xc] = 0;
      plVar6[0xf] = 0;
      plVar6[0xe] = 0;
      plVar6[9] = 0;
      plVar6[8] = 0;
      plVar6[0xb] = 0;
      plVar6[10] = 0;
    }
    uVar27 = (ulong)uVar25;
    if (uVar25 == 8) {
      uVar27 = 6;
LAB_109ebaa20:
      puVar20 = (&PTR_DAT_110b66d68)[uVar27];
    }
    else {
      if (uVar25 == 0x10) {
        uVar27 = 7;
        goto LAB_109ebaa20;
      }
      if (0xfffffff8 < uVar25 - 8) goto LAB_109ebaa20;
      puVar20 = &UNK_10e05d730;
    }
    FUN_109eaba7c(plVar7,puVar20,&UNK_10f6156aa,0xb);
    plVar9 = (long *)0xe0;
    _malloc();
    plVar8 = plVar9;
    if (plVar9 != (long *)0x0) {
      plVar9[1] = 0;
      *plVar9 = 0;
      plVar9[3] = 0;
      plVar9[2] = 0;
      *plVar9 = param_2 + -0x30;
      lVar23 = *(long *)(param_2 + -0x28);
      plVar9[3] = lVar23;
      plVar9[4] = 0;
      *(long **)(param_2 + -0x28) = plVar9;
      if (lVar23 != 0) {
        *(long **)(lVar23 + 0x10) = plVar9;
      }
      plVar8 = plVar9 + 6;
      plVar9[7] = 0;
      *plVar8 = 0;
      plVar9[0x19] = 0;
      plVar9[0x18] = 0;
      plVar9[0x1b] = 0;
      plVar9[0x1a] = 0;
      plVar9[0x15] = 0;
      plVar9[0x14] = 0;
      plVar9[0x17] = 0;
      plVar9[0x16] = 0;
      plVar9[0x11] = 0;
      plVar9[0x10] = 0;
      plVar9[0x13] = 0;
      plVar9[0x12] = 0;
      plVar9[0xd] = 0;
      plVar9[0xc] = 0;
      plVar9[0xf] = 0;
      plVar9[0xe] = 0;
      plVar9[9] = 0;
      plVar9[8] = 0;
      plVar9[0xb] = 0;
      plVar9[10] = 0;
    }
    func_0x000109ea9960(plVar8,0,uVar25);
    plVar9 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      plVar9 = plVar4 + 1;
    }
    puVar24 = *(undefined8 **)(lVar29 + 0x10);
    plVar4[2] = (long)puVar24;
    *puVar24 = plVar9;
    plVar7[1] = lVar28;
    plVar2 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      plVar2 = plVar7 + 1;
    }
    plVar7[2] = (long)plVar9;
    plVar4[1] = (long)plVar2;
    *(long **)(lVar29 + 0x10) = plVar2;
    func_0x000109e244dc(alStack_70,plVar4);
    lVar23 = alStack_70[0];
    func_0x000109eabfa8(alStack_70[0],*(undefined8 *)(param_2 + 0x30),
                        ~(-1 << (ulong)(*(byte *)(*(long *)(alStack_70[0] + 0x20) + 0xd) & 0x1f)));
    *(long *)(lVar23 + 8) = lVar28;
    puVar24 = *(undefined8 **)(lVar29 + 0x10);
    plVar2 = (long *)0x0;
    if (lVar23 != 0) {
      plVar2 = (long *)(lVar23 + 8);
    }
    *(undefined8 **)(lVar23 + 0x10) = puVar24;
    *puVar24 = plVar2;
    *(long **)(lVar29 + 0x10) = plVar2;
    func_0x000109e244dc(alStack_70,plVar7);
    lVar23 = alStack_70[0];
    func_0x000109eabfa8(alStack_70[0],*(undefined8 *)(param_2 + 0x38),
                        ~(-1 << (ulong)(*(byte *)(*(long *)(alStack_70[0] + 0x20) + 0xd) & 0x1f)));
    *(long *)(lVar23 + 8) = lVar28;
    puVar24 = *(undefined8 **)(lVar29 + 0x10);
    plVar2 = (long *)0x0;
    if (lVar23 != 0) {
      plVar2 = (long *)(lVar23 + 8);
    }
    *(undefined8 **)(lVar23 + 0x10) = puVar24;
    *puVar24 = plVar2;
    *(long **)(lVar29 + 0x10) = plVar2;
    plVar2 = (long *)0xc0;
    _malloc();
    if (plVar2 == (long *)0x0) {
      plStack_90 = (long *)0x0;
    }
    else {
      plVar2[1] = 0;
      *plVar2 = 0;
      plVar2[3] = 0;
      plVar2[2] = 0;
      *plVar2 = param_2 + -0x30;
      lVar23 = *(long *)(param_2 + -0x28);
      plVar2[3] = lVar23;
      plVar2[4] = 0;
      *(long **)(param_2 + -0x28) = plVar2;
      if (lVar23 != 0) {
        *(long **)(lVar23 + 0x10) = plVar2;
      }
      plStack_90 = plVar2 + 6;
      plVar2[7] = 0;
      *plStack_90 = 0;
      plVar2[0x15] = 0;
      plVar2[0x14] = 0;
      plVar2[0x17] = 0;
      plVar2[0x16] = 0;
      plVar2[0x11] = 0;
      plVar2[0x10] = 0;
      plVar2[0x13] = 0;
      plVar2[0x12] = 0;
      plVar2[0xd] = 0;
      plVar2[0xc] = 0;
      plVar2[0xf] = 0;
      plVar2[0xe] = 0;
      plVar2[9] = 0;
      plVar2[8] = 0;
      plVar2[0xb] = 0;
      plVar2[10] = 0;
    }
    uVar27 = (ulong)uVar25;
    if (uVar25 == 8) {
      uVar27 = 6;
LAB_109ebabf8:
      puVar20 = (&PTR_DAT_110b66dd8)[uVar27];
    }
    else {
      if (uVar25 == 0x10) {
        uVar27 = 7;
        goto LAB_109ebabf8;
      }
      if (0xfffffff8 < uVar25 - 8) goto LAB_109ebabf8;
      puVar20 = &UNK_10e05d730;
    }
    FUN_109eaba7c(plStack_90,puVar20,&UNK_10f6156b0,0xb);
    plStack_90[1] = lVar28;
    puVar24 = *(undefined8 **)(lVar29 + 0x10);
    plVar6 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      plVar6 = plStack_90 + 1;
    }
    plStack_90[2] = (long)puVar24;
    *puVar24 = plVar6;
    *(long **)(lVar29 + 0x10) = plVar6;
    func_0x000109e244dc(alStack_70,plStack_90);
    func_0x000109e24460(&uStack_78,plVar4);
    uVar5 = 0x89;
    func_0x000109eac310(0x89,uStack_78,plVar8);
    func_0x000109e24460(&uStack_78,plVar7);
    (**(code **)(*plVar8 + 0x20))(plVar8,param_2,0);
    uVar3 = 0x89;
    func_0x000109eac310(0x89,uStack_78,plVar8);
    uVar16 = 0x95;
    func_0x000109eac310(0x95,uVar5,uVar3);
    lVar23 = alStack_70[0];
    func_0x000109eabfa8(alStack_70[0],uVar16,
                        ~(-1 << (ulong)(*(byte *)(*(long *)(alStack_70[0] + 0x20) + 0xd) & 0x1f)));
    *(long *)(lVar23 + 8) = lVar28;
    puVar24 = *(undefined8 **)(lVar29 + 0x10);
    plVar2 = (long *)0x0;
    if (lVar23 != 0) {
      plVar2 = (long *)(lVar23 + 8);
    }
    *(undefined8 **)(lVar23 + 0x10) = puVar24;
    *puVar24 = plVar2;
    *(long **)(lVar29 + 0x10) = plVar2;
    func_0x000109e244dc(alStack_70,plVar26);
    func_0x000109e24460(&uStack_78,plVar4);
    uVar5 = 3;
    FUN_109eac2ac(3,uStack_78);
    uVar3 = 0x15;
    FUN_109eac2ac(0x15,uVar5);
    lVar23 = alStack_70[0];
    func_0x000109eabfa8(alStack_70[0],uVar3,
                        ~(-1 << (ulong)(*(byte *)(*(long *)(alStack_70[0] + 0x20) + 0xd) & 0x1f)));
    *(long *)(lVar23 + 8) = lVar28;
    puVar24 = *(undefined8 **)(lVar29 + 0x10);
    plVar2 = (long *)0x0;
    if (lVar23 != 0) {
      plVar2 = (long *)(lVar23 + 8);
    }
    *(undefined8 **)(lVar23 + 0x10) = puVar24;
    *puVar24 = plVar2;
    *(long **)(lVar29 + 0x10) = plVar2;
    func_0x000109e244dc(alStack_70,plVar34);
    func_0x000109e24460(&uStack_78,plVar7);
    uVar5 = 3;
    FUN_109eac2ac(3,uStack_78);
    uVar3 = 0x15;
    FUN_109eac2ac(0x15,uVar5);
    lVar23 = alStack_70[0];
    func_0x000109eabfa8(alStack_70[0],uVar3,
                        ~(-1 << (ulong)(*(byte *)(*(long *)(alStack_70[0] + 0x20) + 0xd) & 0x1f)));
  }
  plVar4 = (long *)(lVar23 + 8);
  *plVar4 = lVar28;
  puVar24 = *(undefined8 **)(lVar29 + 0x10);
  plVar2 = (long *)0x0;
  if (lVar23 != 0) {
    plVar2 = plVar4;
  }
  *(undefined8 **)(lVar23 + 0x10) = puVar24;
  *puVar24 = plVar2;
  *(long **)(lVar29 + 0x10) = plVar4;
  func_0x000109e244dc(alStack_70,plStack_c0);
  func_0x000109e24460(&uStack_78,plVar26);
  uVar5 = 0x91;
  func_0x000109eac310(0x91,uStack_78,plVar17);
  lVar23 = alStack_70[0];
  func_0x000109eabfa8(alStack_70[0],uVar5,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(alStack_70[0] + 0x20) + 0xd) & 0x1f)));
  *(long *)(lVar23 + 8) = lVar28;
  puVar24 = *(undefined8 **)(lVar29 + 0x10);
  plVar2 = (long *)0x0;
  if (lVar23 != 0) {
    plVar2 = (long *)(lVar23 + 8);
  }
  *(undefined8 **)(lVar23 + 0x10) = puVar24;
  *puVar24 = plVar2;
  *(long **)(lVar29 + 0x10) = plVar2;
  func_0x000109e244dc(alStack_70,plStack_a0);
  func_0x000109e24460(&uStack_78,plVar34);
  (**(code **)(*plVar17 + 0x20))(plVar17,param_2,0);
  uVar5 = 0x91;
  func_0x000109eac310(0x91,uStack_78,plVar17);
  lVar23 = alStack_70[0];
  func_0x000109eabfa8(alStack_70[0],uVar5,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(alStack_70[0] + 0x20) + 0xd) & 0x1f)));
  *(long *)(lVar23 + 8) = lVar28;
  puVar24 = *(undefined8 **)(lVar29 + 0x10);
  plVar2 = (long *)0x0;
  if (lVar23 != 0) {
    plVar2 = (long *)(lVar23 + 8);
  }
  *(undefined8 **)(lVar23 + 0x10) = puVar24;
  *puVar24 = plVar2;
  *(long **)(lVar29 + 0x10) = plVar2;
  func_0x000109e244dc(alStack_70,plVar18);
  func_0x000109e24460(&uStack_78,plVar26);
  uVar5 = 0x90;
  func_0x000109eac310(0x90,uStack_78,plVar14);
  lVar23 = alStack_70[0];
  func_0x000109eabfa8(alStack_70[0],uVar5,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(alStack_70[0] + 0x20) + 0xd) & 0x1f)));
  *(long *)(lVar23 + 8) = lVar28;
  puVar24 = *(undefined8 **)(lVar29 + 0x10);
  plVar2 = (long *)0x0;
  if (lVar23 != 0) {
    plVar2 = (long *)(lVar23 + 8);
  }
  *(undefined8 **)(lVar23 + 0x10) = puVar24;
  *puVar24 = plVar2;
  *(long **)(lVar29 + 0x10) = plVar2;
  func_0x000109e244dc(alStack_70,plStack_98);
  func_0x000109e24460(&uStack_78,plVar34);
  plVar2 = plVar14;
  (**(code **)(*plVar14 + 0x20))(plVar14,param_2,0);
  uVar5 = 0x90;
  func_0x000109eac310(0x90,uStack_78,plVar2);
  lVar19 = alStack_70[0];
  func_0x000109eabfa8(alStack_70[0],uVar5,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(alStack_70[0] + 0x20) + 0xd) & 0x1f)));
  lVar23 = 0;
  if (lVar19 != 0) {
    lVar23 = lVar19 + 8;
  }
  plVar2 = *(long **)(lVar29 + 0x10);
  *(long **)(lVar19 + 0x10) = plVar2;
  *plVar2 = lVar23;
  plVar2 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar2 = plVar31 + 1;
  }
  plVar31[2] = lVar23;
  *(long **)(lVar19 + 8) = plVar2;
  plVar32[1] = lVar28;
  plVar26 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    plVar26 = plVar32 + 1;
  }
  plVar30[1] = (long)plVar26;
  plVar4 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    plVar4 = plVar30 + 1;
  }
  plStack_b0[1] = (long)plVar4;
  plStack_b0[2] = (long)plVar2;
  plVar2 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    plVar2 = plStack_b0 + 1;
  }
  plVar31[1] = (long)plVar2;
  plVar30[2] = (long)plVar2;
  plVar32[2] = (long)plVar4;
  *(long **)(lVar29 + 0x10) = plVar26;
  func_0x000109e244dc(alStack_70,plVar31);
  func_0x000109e24460(&uStack_78,plStack_c0);
  func_0x000109e24460(&uStack_80,plStack_a0);
  uVar5 = 0x82;
  func_0x000109eac310(0x82,uStack_78,uStack_80);
  lVar23 = alStack_70[0];
  func_0x000109eabfa8(alStack_70[0],uVar5,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(alStack_70[0] + 0x20) + 0xd) & 0x1f)));
  *(long *)(lVar23 + 8) = lVar28;
  puVar24 = *(undefined8 **)(lVar29 + 0x10);
  plVar2 = (long *)0x0;
  if (lVar23 != 0) {
    plVar2 = (long *)(lVar23 + 8);
  }
  *(undefined8 **)(lVar23 + 0x10) = puVar24;
  *puVar24 = plVar2;
  *(long **)(lVar29 + 0x10) = plVar2;
  func_0x000109e244dc(alStack_70,plVar30);
  func_0x000109e24460(&uStack_78,plStack_c0);
  func_0x000109e24460(&uStack_80,plStack_98);
  uVar5 = 0x82;
  func_0x000109eac310(0x82,uStack_78,uStack_80);
  lVar23 = alStack_70[0];
  func_0x000109eabfa8(alStack_70[0],uVar5,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(alStack_70[0] + 0x20) + 0xd) & 0x1f)));
  *(long *)(lVar23 + 8) = lVar28;
  puVar24 = *(undefined8 **)(lVar29 + 0x10);
  plVar2 = (long *)0x0;
  if (lVar23 != 0) {
    plVar2 = (long *)(lVar23 + 8);
  }
  *(undefined8 **)(lVar23 + 0x10) = puVar24;
  *puVar24 = plVar2;
  *(long **)(lVar29 + 0x10) = plVar2;
  func_0x000109e244dc(alStack_70,plVar32);
  func_0x000109e24460(&uStack_78,plVar18);
  func_0x000109e24460(&uStack_80,plStack_a0);
  uVar5 = 0x82;
  func_0x000109eac310(0x82,uStack_78,uStack_80);
  lVar23 = alStack_70[0];
  func_0x000109eabfa8(alStack_70[0],uVar5,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(alStack_70[0] + 0x20) + 0xd) & 0x1f)));
  *(long *)(lVar23 + 8) = lVar28;
  puVar24 = *(undefined8 **)(lVar29 + 0x10);
  plVar2 = (long *)0x0;
  if (lVar23 != 0) {
    plVar2 = (long *)(lVar23 + 8);
  }
  *(undefined8 **)(lVar23 + 0x10) = puVar24;
  *puVar24 = plVar2;
  *(long **)(lVar29 + 0x10) = plVar2;
  func_0x000109e244dc(alStack_70,plStack_b0);
  func_0x000109e24460(&uStack_78,plVar18);
  func_0x000109e24460(&uStack_80,plStack_98);
  uVar5 = 0x82;
  func_0x000109eac310(0x82,uStack_78,uStack_80);
  lVar23 = alStack_70[0];
  func_0x000109eabfa8(alStack_70[0],uVar5,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(alStack_70[0] + 0x20) + 0xd) & 0x1f)));
  *(long *)(lVar23 + 8) = lVar28;
  puVar24 = *(undefined8 **)(lVar29 + 0x10);
  plVar2 = (long *)0x0;
  if (lVar23 != 0) {
    plVar2 = (long *)(lVar23 + 8);
  }
  *(undefined8 **)(lVar23 + 0x10) = puVar24;
  *puVar24 = plVar2;
  *(long **)(lVar29 + 0x10) = plVar2;
  func_0x000109e244dc(alStack_70,plStack_b0);
  func_0x000109e24460(&uStack_78,plStack_b0);
  func_0x000109e24460(&uStack_80,plVar31);
  func_0x000109e24460(&uStack_88,plVar30);
  plVar2 = plVar14;
  (**(code **)(*plVar14 + 0x20))(plVar14,param_2,0);
  uVar3 = 0x8f;
  func_0x000109eac310(0x8f,uStack_88,plVar2);
  uVar5 = uStack_80;
  FUN_109ebbc90(uStack_80,uVar3);
  uVar3 = 0x7b;
  func_0x000109eac310(0x7b,uStack_78,uVar5);
  lVar23 = alStack_70[0];
  func_0x000109eabfa8(alStack_70[0],uVar3,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(alStack_70[0] + 0x20) + 0xd) & 0x1f)));
  *(long *)(lVar23 + 8) = lVar28;
  puVar24 = *(undefined8 **)(lVar29 + 0x10);
  plVar2 = (long *)0x0;
  if (lVar23 != 0) {
    plVar2 = (long *)(lVar23 + 8);
  }
  *(undefined8 **)(lVar23 + 0x10) = puVar24;
  *puVar24 = plVar2;
  *(long **)(lVar29 + 0x10) = plVar2;
  func_0x000109e244dc(alStack_70,plVar31);
  func_0x000109e24460(&uStack_78,plVar31);
  func_0x000109e24460(&uStack_80,plVar30);
  plVar2 = plVar14;
  (**(code **)(*plVar14 + 0x20))(plVar14,param_2,0);
  uVar5 = 0x8f;
  func_0x000109eac310(0x8f,uStack_80,plVar2);
  uVar3 = 0x7b;
  func_0x000109eac310(0x7b,uStack_78,uVar5);
  lVar23 = alStack_70[0];
  func_0x000109eabfa8(alStack_70[0],uVar3,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(alStack_70[0] + 0x20) + 0xd) & 0x1f)));
  *(long *)(lVar23 + 8) = lVar28;
  puVar24 = *(undefined8 **)(lVar29 + 0x10);
  plVar2 = (long *)0x0;
  if (lVar23 != 0) {
    plVar2 = (long *)(lVar23 + 8);
  }
  *(undefined8 **)(lVar23 + 0x10) = puVar24;
  *puVar24 = plVar2;
  *(long **)(lVar29 + 0x10) = plVar2;
  func_0x000109e244dc(alStack_70,plStack_b0);
  func_0x000109e24460(&uStack_78,plStack_b0);
  func_0x000109e24460(&uStack_80,plVar31);
  func_0x000109e24460(&uStack_88,plVar32);
  plVar2 = plVar14;
  (**(code **)(*plVar14 + 0x20))(plVar14,param_2,0);
  uVar3 = 0x8f;
  func_0x000109eac310(0x8f,uStack_88,plVar2);
  uVar5 = uStack_80;
  FUN_109ebbc90(uStack_80,uVar3);
  uVar3 = 0x7b;
  func_0x000109eac310(0x7b,uStack_78,uVar5);
  lVar23 = alStack_70[0];
  func_0x000109eabfa8(alStack_70[0],uVar3,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(alStack_70[0] + 0x20) + 0xd) & 0x1f)));
  *(long *)(lVar23 + 8) = lVar28;
  puVar24 = *(undefined8 **)(lVar29 + 0x10);
  plVar2 = (long *)0x0;
  if (lVar23 != 0) {
    plVar2 = (long *)(lVar23 + 8);
  }
  *(undefined8 **)(lVar23 + 0x10) = puVar24;
  *puVar24 = plVar2;
  *(long **)(lVar29 + 0x10) = plVar2;
  func_0x000109e244dc(alStack_70,plVar31);
  func_0x000109e24460(&uStack_78,plVar31);
  func_0x000109e24460(&uStack_80,plVar32);
  plVar2 = plVar14;
  (**(code **)(*plVar14 + 0x20))(plVar14,param_2,0);
  uVar5 = 0x8f;
  func_0x000109eac310(0x8f,uStack_80,plVar2);
  uVar3 = 0x7b;
  func_0x000109eac310(0x7b,uStack_78,uVar5);
  lVar23 = alStack_70[0];
  func_0x000109eabfa8(alStack_70[0],uVar3,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(alStack_70[0] + 0x20) + 0xd) & 0x1f)));
  *(long *)(lVar23 + 8) = lVar28;
  puVar24 = *(undefined8 **)(lVar29 + 0x10);
  plVar2 = (long *)0x0;
  if (lVar23 != 0) {
    plVar2 = (long *)(lVar23 + 8);
  }
  *(undefined8 **)(lVar23 + 0x10) = puVar24;
  *puVar24 = plVar2;
  *(long **)(lVar29 + 0x10) = plVar2;
  if (plStack_90 == (long *)0x0) {
    *(undefined4 *)(param_2 + 0x28) = 0x7b;
    *(undefined1 *)(param_2 + 0x50) = 2;
    func_0x000109e24460(alStack_70,plStack_b0);
    func_0x000109e24460(&uStack_78,plVar30);
    plVar2 = plVar14;
    (**(code **)(*plVar14 + 0x20))(plVar14,param_2,0);
    uVar5 = 0x90;
    func_0x000109eac310(0x90,uStack_78,plVar2);
    uVar3 = 0x7b;
    func_0x000109eac310(0x7b,alStack_70[0],uVar5);
    *(undefined8 *)(param_2 + 0x30) = uVar3;
    func_0x000109e24460(alStack_70,plVar32);
    (**(code **)(*plVar14 + 0x20))(plVar14,param_2,0);
    uVar5 = 0x90;
    func_0x000109eac310(0x90,alStack_70[0],plVar14);
    lVar28 = 0x38;
    goto LAB_109ebb8c0;
  }
  func_0x000109e244dc(alStack_70,plStack_b0);
  func_0x000109e24460(&uStack_78,plStack_b0);
  func_0x000109e24460(&uStack_80,plVar30);
  plVar2 = plVar14;
  (**(code **)(*plVar14 + 0x20))(plVar14,param_2,0);
  uVar5 = 0x90;
  func_0x000109eac310(0x90,uStack_80,plVar2);
  uVar3 = 0x7b;
  func_0x000109eac310(0x7b,uStack_78,uVar5);
  func_0x000109e24460(&uStack_78,plVar32);
  (**(code **)(*plVar14 + 0x20))(plVar14,param_2,0);
  uVar5 = 0x90;
  func_0x000109eac310(0x90,uStack_78,plVar14);
  uVar16 = 0x7b;
  func_0x000109eac310(0x7b,uVar3,uVar5);
  lVar23 = alStack_70[0];
  func_0x000109eabfa8(alStack_70[0],uVar16,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(alStack_70[0] + 0x20) + 0xd) & 0x1f)));
  *(long *)(lVar23 + 8) = lVar28;
  puVar24 = *(undefined8 **)(lVar29 + 0x10);
  plVar2 = (long *)0x0;
  if (lVar23 != 0) {
    plVar2 = (long *)(lVar23 + 8);
  }
  *(undefined8 **)(lVar23 + 0x10) = puVar24;
  *puVar24 = plVar2;
  *(long **)(lVar29 + 0x10) = plVar2;
  plVar2 = (long *)0xc0;
  _malloc();
  if (plVar2 == (long *)0x0) {
    plVar26 = (long *)0x0;
  }
  else {
    plVar2[1] = 0;
    *plVar2 = 0;
    plVar2[3] = 0;
    plVar2[2] = 0;
    *plVar2 = param_2 + -0x30;
    lVar23 = *(long *)(param_2 + -0x28);
    plVar2[3] = lVar23;
    plVar2[4] = 0;
    *(long **)(param_2 + -0x28) = plVar2;
    if (lVar23 != 0) {
      *(long **)(lVar23 + 0x10) = plVar2;
    }
    plVar26 = plVar2 + 6;
    plVar2[7] = 0;
    *plVar26 = 0;
    plVar2[0x15] = 0;
    plVar2[0x14] = 0;
    plVar2[0x17] = 0;
    plVar2[0x16] = 0;
    plVar2[0x11] = 0;
    plVar2[0x10] = 0;
    plVar2[0x13] = 0;
    plVar2[0x12] = 0;
    plVar2[0xd] = 0;
    plVar2[0xc] = 0;
    plVar2[0xf] = 0;
    plVar2[0xe] = 0;
    plVar2[9] = 0;
    plVar2[8] = 0;
    plVar2[0xb] = 0;
    plVar2[10] = 0;
  }
  if (uVar25 == 8) {
    uVar27 = 6;
LAB_109ebb694:
    puVar20 = (&PTR_DAT_110b66d68)[uVar27];
  }
  else {
    if (uVar25 == 0x10) {
      uVar27 = 7;
      goto LAB_109ebb694;
    }
    uVar27 = (ulong)uVar25;
    if (0xfffffff8 < uVar25 - 8) goto LAB_109ebb694;
    puVar20 = &UNK_10e05d730;
  }
  FUN_109eaba7c(plVar26,puVar20,&UNK_10f6156c0,0xb);
  plVar18 = (long *)0xe0;
  _malloc();
  plVar4 = plVar18;
  if (plVar18 != (long *)0x0) {
    plVar18[1] = 0;
    *plVar18 = 0;
    plVar18[3] = 0;
    plVar18[2] = 0;
    *plVar18 = param_2 + -0x30;
    lVar23 = *(long *)(param_2 + -0x28);
    plVar18[3] = lVar23;
    plVar18[4] = 0;
    *(long **)(param_2 + -0x28) = plVar18;
    if (lVar23 != 0) {
      *(long **)(lVar23 + 0x10) = plVar18;
    }
    plVar4 = plVar18 + 6;
    plVar18[7] = 0;
    *plVar4 = 0;
    plVar18[0x19] = 0;
    plVar18[0x18] = 0;
    plVar18[0x1b] = 0;
    plVar18[0x1a] = 0;
    plVar18[0x15] = 0;
    plVar18[0x14] = 0;
    plVar18[0x17] = 0;
    plVar18[0x16] = 0;
    plVar18[0x11] = 0;
    plVar18[0x10] = 0;
    plVar18[0x13] = 0;
    plVar18[0x12] = 0;
    plVar18[0xd] = 0;
    plVar18[0xc] = 0;
    plVar18[0xf] = 0;
    plVar18[0xe] = 0;
    plVar18[9] = 0;
    plVar18[8] = 0;
    plVar18[0xb] = 0;
    plVar18[10] = 0;
  }
  FUN_109ea98b0(plVar4,1,(ulong)uVar25);
  plVar26[1] = lVar28;
  puVar24 = *(undefined8 **)(lVar29 + 0x10);
  plVar4 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    plVar4 = plVar26 + 1;
  }
  plVar26[2] = (long)puVar24;
  *puVar24 = plVar4;
  *(long **)(lVar29 + 0x10) = plVar4;
  func_0x000109e244dc(alStack_70,plVar26);
  func_0x000109e24460(&uStack_78,plStack_b0);
  uVar5 = 0x16;
  FUN_109eac2ac(0x16,uStack_78);
  uVar3 = 0;
  FUN_109eac2ac(0,uVar5);
  func_0x000109e24460(&uStack_78,plVar31);
  uVar5 = 0;
  FUN_109eac2ac(0,uStack_78);
  FUN_109ebbc90();
  uVar16 = 0x16;
  FUN_109eac2ac(0x16,uVar5);
  uVar5 = 0x7b;
  func_0x000109eac310(0x7b,uVar3,uVar16);
  lVar23 = alStack_70[0];
  func_0x000109eabfa8(alStack_70[0],uVar5,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(alStack_70[0] + 0x20) + 0xd) & 0x1f)));
  *(long *)(lVar23 + 8) = lVar28;
  puVar24 = *(undefined8 **)(lVar29 + 0x10);
  plVar2 = (long *)0x0;
  if (lVar23 != 0) {
    plVar2 = (long *)(lVar23 + 8);
  }
  *(undefined8 **)(lVar23 + 0x10) = puVar24;
  *puVar24 = plVar2;
  *(long **)(lVar29 + 0x10) = plVar2;
  *(undefined4 *)(param_2 + 0x28) = 0xa2;
  *(undefined1 *)(param_2 + 0x50) = 3;
  plVar4 = (long *)0x60;
  _malloc();
  plVar2 = plVar4;
  if (plVar4 != (long *)0x0) {
    plVar4[1] = 0;
    *plVar4 = 0;
    plVar4[3] = 0;
    plVar4[2] = 0;
    *plVar4 = param_2 + -0x30;
    lVar28 = *(long *)(param_2 + -0x28);
    plVar4[3] = lVar28;
    plVar4[4] = 0;
    *(long **)(param_2 + -0x28) = plVar4;
    if (lVar28 != 0) {
      *(long **)(lVar28 + 0x10) = plVar4;
    }
    plVar2 = plVar4 + 6;
    plVar4[7] = 0;
    *plVar2 = 0;
    plVar4[9] = 0;
    plVar4[8] = 0;
    plVar4[0xb] = 0;
    plVar4[10] = 0;
  }
  plVar2[1] = 0;
  plVar2[2] = 0;
  *(undefined4 *)(plVar2 + 3) = 2;
  *plVar2 = (long)&PTR_DAT_110b64048;
  plVar2[5] = (long)plStack_90;
  plVar2[4] = plStack_90[4];
  *(long **)(param_2 + 0x30) = plVar2;
  plVar4 = (long *)0x60;
  _malloc();
  plVar2 = plVar4;
  if (plVar4 != (long *)0x0) {
    plVar4[1] = 0;
    *plVar4 = 0;
    plVar4[3] = 0;
    plVar4[2] = 0;
    *plVar4 = param_2 + -0x30;
    lVar28 = *(long *)(param_2 + -0x28);
    plVar4[3] = lVar28;
    plVar4[4] = 0;
    *(long **)(param_2 + -0x28) = plVar4;
    if (lVar28 != 0) {
      *(long **)(lVar28 + 0x10) = plVar4;
    }
    plVar2 = plVar4 + 6;
    plVar4[7] = 0;
    *plVar2 = 0;
    plVar4[9] = 0;
    plVar4[8] = 0;
    plVar4[0xb] = 0;
    plVar4[10] = 0;
  }
  plVar2[1] = 0;
  plVar2[2] = 0;
  *(undefined4 *)(plVar2 + 3) = 2;
  *plVar2 = (long)&PTR_DAT_110b64048;
  plVar2[4] = plVar26[4];
  plVar2[5] = (long)plVar26;
  *(long **)(param_2 + 0x38) = plVar2;
  func_0x000109e24460(alStack_70,plStack_b0);
  uVar5 = 0x16;
  FUN_109eac2ac(0x16,alStack_70[0]);
  lVar28 = 0x40;
LAB_109ebb8c0:
  *(undefined8 *)(param_2 + lVar28) = uVar5;
  return 0;
}



/* Entry: 109ebbc90; end: 109ebbda3;  */

/* WARNING: Removing unreachable block (ram,0x000109ea92b4) */
/* WARNING: Removing unreachable block (ram,0x000109ea92ac) */
/* WARNING: Removing unreachable block (ram,0x000109ea92bc) */
/* WARNING: Removing unreachable block (ram,0x000109ea9294) */
/* WARNING: Removing unreachable block (ram,0x000109ea92f0) */

undefined8 * FUN_109ebbc90(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  uVar2 = 0x7b;
  FUN_109eac310(0x7b,param_1,param_2);
  if (param_1 == (long *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (param_1[-6] != 0) {
      lVar4 = param_1[-6] + 0x30;
    }
  }
  (**(code **)(*param_1 + 0x20))(param_1,lVar4,0);
  uVar3 = 0x89;
  FUN_109eac310(0x89,uVar2,param_1);
  lVar4 = 0x13;
  FUN_109eac2ac(0x13,uVar3);
  if (lVar4 == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)0x0;
    if (*(long *)(lVar4 + -0x30) != 0) {
      puVar1 = (undefined8 *)(*(long *)(lVar4 + -0x30) + 0x30);
    }
  }
  FUN_109f658b0(puVar1,0x58);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[10] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  *(undefined4 *)(puVar1 + 3) = 4;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[4] = &UNK_10e05d730;
  *puVar1 = &PTR_FUN_110b64370;
  *(undefined4 *)(puVar1 + 5) = 0x15;
  puVar1[6] = lVar4;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined1 *)(puVar1 + 10) = 1;
  uVar2 = 0;
  func_0x000109ec6c94(0,*(undefined1 *)(*(long *)(lVar4 + 0x20) + 0xd),1,0,0,0,in_x6,in_x7,unaff_x20
                      ,unaff_x19,unaff_x29,unaff_x30);
  puVar1[4] = uVar2;
  return puVar1;
}



/* Entry: 109ebbda4; end: 109ebbdaf;  */

void FUN_109ebbda4(void)

{
  return;
}



/* Entry: 109ebbdb0; end: 109ebc003;  */

void FUN_109ebbdb0(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x78) + 0x20);
  _strcmp(uVar2,"main");
  lVar5 = 0x5a;
  if ((int)uVar2 == 0) {
    lVar5 = 0x5b;
  }
  uVar1 = *(undefined1 *)(param_1 + lVar5);
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  uVar14 = *(undefined8 *)(param_1 + 0x28);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  uVar11 = *(undefined8 *)(param_1 + 0x38);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  uVar15 = *(undefined8 *)(param_1 + 0x48);
  uVar13 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(long *)(param_1 + 0x10) = param_2;
  *(undefined1 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(long *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  plVar7 = *(long **)(param_2 + 0x50);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  for (; *plVar7 != 0; plVar7 = (long *)*plVar7) {
    (**(code **)(plVar7[-1] + 0x10))(plVar7 + -1,param_1);
  }
  *(int *)(param_1 + 0x50) = (int)uVar2;
  *(char *)(param_1 + 0x54) = (char)((ulong)uVar2 >> 0x20);
  if ((((*(char *)(*(long *)(param_2 + 0x20) + 4) == '\x14') &&
       (*(long *)(param_2 + 0x50) != param_2 + 0x60)) &&
      (plVar7 = *(long **)(param_2 + 0x68), plVar7 != (long *)0x0)) &&
     ((*(uint *)(plVar7 + 2) & 0xfffffffe) == 0xe)) {
    lVar5 = *plVar7;
    plVar3 = (long *)plVar7[1];
    *(long **)(lVar5 + 8) = plVar3;
    *plVar3 = lVar5;
    *plVar7 = 0;
    plVar7[1] = 0;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar3 = (long *)0x60;
    _malloc();
    plVar7 = plVar3;
    if (plVar3 != (long *)0x0) {
      plVar3[1] = 0;
      *plVar3 = 0;
      plVar3[3] = 0;
      plVar3[2] = 0;
      *plVar3 = param_2 + -0x30;
      lVar5 = *(long *)(param_2 + -0x28);
      plVar3[3] = lVar5;
      plVar3[4] = 0;
      *(long **)(param_2 + -0x28) = plVar3;
      if (lVar5 != 0) {
        *(long **)(lVar5 + 0x10) = plVar3;
      }
      plVar7 = plVar3 + 6;
      plVar3[7] = 0;
      *plVar7 = 0;
      plVar3[10] = 0;
      plVar3[9] = 0;
      plVar3[8] = 0;
    }
    plVar4 = (long *)0x60;
    _malloc();
    plVar3 = plVar4;
    if (plVar4 != (long *)0x0) {
      plVar4[1] = 0;
      *plVar4 = 0;
      plVar4[3] = 0;
      plVar4[2] = 0;
      *plVar4 = param_2 + -0x30;
      lVar5 = *(long *)(param_2 + -0x28);
      plVar4[3] = lVar5;
      plVar4[4] = 0;
      *(long **)(param_2 + -0x28) = plVar4;
      if (lVar5 != 0) {
        *(long **)(lVar5 + 0x10) = plVar4;
      }
      plVar3 = plVar4 + 6;
      plVar4[7] = 0;
      *plVar3 = 0;
      plVar4[9] = 0;
      plVar4[8] = 0;
      plVar4[0xb] = 0;
      plVar4[10] = 0;
    }
    lVar5 = *(long *)(param_1 + 0x20);
    plVar3[1] = 0;
    plVar3[2] = 0;
    *(undefined4 *)(plVar3 + 3) = 2;
    *plVar3 = (long)&PTR_DAT_110b64048;
    plVar3[4] = *(long *)(lVar5 + 0x20);
    plVar3[5] = lVar5;
    *(undefined4 *)(plVar7 + 3) = 0xf;
    *plVar7 = (long)&PTR_DAT_110b63a60;
    plVar7[4] = (long)plVar3;
    plVar3 = plVar7 + 1;
    *plVar3 = param_2 + 0x60;
    puVar6 = *(undefined8 **)(param_2 + 0x68);
    plVar7[2] = (long)puVar6;
    *puVar6 = plVar3;
    *(long **)(param_2 + 0x68) = plVar3;
  }
  *(undefined8 *)(param_1 + 0x38) = uVar11;
  *(undefined8 *)(param_1 + 0x30) = uVar9;
  *(undefined8 *)(param_1 + 0x48) = uVar15;
  *(undefined8 *)(param_1 + 0x40) = uVar13;
  *(undefined8 *)(param_1 + 0x18) = uVar10;
  *(undefined8 *)(param_1 + 0x10) = uVar8;
  *(undefined8 *)(param_1 + 0x28) = uVar14;
  *(undefined8 *)(param_1 + 0x20) = uVar12;
  return;
}



/* Entry: 109ebc004; end: 109ebc06f;  */

void FUN_109ebc004(void)

{
  return;
}



/* Entry: 109ebc070; end: 109ebcc4b;  */

void FUN_109ebc070(long *param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  long **pplVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined4 uVar13;
  long lVar14;
  int *piVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  long *plVar18;
  int iVar19;
  int *piVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  long *plVar23;
  bool bVar24;
  byte bVar25;
  long *plVar26;
  long *plVar27;
  undefined1 uVar28;
  long lVar29;
  long lVar30;
  long *plVar31;
  long *plVar32;
  ulong uVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long *plStack_f0;
  long *plStack_e8;
  uint uStack_dc;
  long *plStack_d8;
  ulong uStack_d0;
  long *plStack_c8;
  byte bStack_ba;
  byte bStack_b9;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  long alStack_98 [2];
  int iStack_88;
  byte abStack_84 [4];
  int iStack_80;
  byte bStack_7c;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((int)param_1[8] == 0) && (*(long *)param_2[1] == 0)) {
    *(undefined1 *)((long)param_1 + 0x44) = 1;
  }
  *(int *)((long)param_1 + 0x2c) = *(int *)((long)param_1 + 0x2c) + 1;
  *(int *)(param_1 + 8) = (int)param_1[8] + 1;
  plVar32 = (long *)param_2[5];
  plStack_e8 = param_2 + 5;
  lVar30 = param_1[10];
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  plVar18 = param_1;
  plVar12 = param_2;
  for (; *plVar32 != 0; plVar32 = (long *)*plVar32) {
    plVar18 = plVar32 + -1;
    plVar12 = param_1;
    (**(code **)(*plVar18 + 0x10))();
  }
  plVar32 = alStack_98 + 1;
  lVar14 = param_1[10];
  *(int *)(param_1 + 10) = (int)lVar30;
  *(char *)((long)param_1 + 0x54) = (char)((ulong)lVar30 >> 0x20);
  iStack_88 = (int)lVar14;
  abStack_84[0] = (byte)((ulong)lVar14 >> 0x20);
  plVar27 = (long *)param_2[9];
  plStack_f0 = param_2 + 9;
  lVar30 = param_1[10];
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  for (; *plVar27 != 0; plVar27 = (long *)*plVar27) {
    plVar18 = plVar27 + -1;
    plVar12 = param_1;
    (**(code **)(*plVar18 + 0x10))();
  }
  lVar14 = param_1[10];
  plStack_d8 = param_2 + 1;
  *(int *)(param_1 + 10) = (int)lVar30;
  *(char *)((long)param_1 + 0x54) = (char)((ulong)lVar30 >> 0x20);
  iStack_80 = (int)lVar14;
  bStack_7c = (byte)((ulong)lVar14 >> 0x20);
  uStack_dc = 1;
  plVar27 = alStack_98;
  plStack_c8 = param_2;
LAB_109ebc1cc:
  pplVar5 = &plStack_e8;
  if ((uStack_dc & 1) == 0) {
    pplVar5 = &plStack_f0;
  }
  plVar31 = *pplVar5;
  *plVar27 = 0;
  if ((((long *)*plVar31 != plVar31 + 2) && (lVar30 = plVar31[3], lVar30 != 0)) &&
     ((*(uint *)(lVar30 + 0x10) & 0xfffffffe) == 0xe)) {
    *plVar27 = lVar30 + -8;
  }
  plVar27 = plVar32;
  if ((uStack_dc & 1) == 0) {
LAB_109ebc218:
    piVar15 = (int *)&uStack_b8;
    piVar20 = &iStack_88;
    plVar27 = alStack_98;
    bVar6 = true;
    do {
      bVar24 = bVar6;
      if (*plVar27 == 0) {
        iVar19 = 0;
      }
      else {
        iVar19 = *piVar20;
      }
      *piVar15 = iVar19;
      piVar15 = (int *)((long)&uStack_b8 + 4);
      piVar20 = &iStack_80;
      plVar27 = plVar32;
      bVar6 = false;
    } while (bVar24);
    bVar2 = *(byte *)(param_1 + 0xb);
    if (((bVar2 & 1) != 0) && ((int)uStack_b8 == uStack_b8._4_4_)) {
      if ((int)uStack_b8 == 4) {
        if (*(char *)(*(long *)(param_1[2] + 0x20) + 4) != '\x14') goto LAB_109ebc29c;
        plVar12 = (long *)0x28;
        plVar18 = param_2;
        FUN_109f658b0();
        if (plVar18 != (long *)0x0) {
          plVar18[4] = 0;
          plVar18[1] = 0;
          *plVar18 = 0;
          plVar18[3] = 0;
          plVar18[2] = 0;
        }
        plVar27 = plVar18 + 1;
        *plVar27 = 0;
        plVar18[2] = 0;
        *(undefined4 *)(plVar18 + 3) = 0xf;
        *plVar18 = (long)&PTR_DAT_110b63a60;
        plVar18[4] = 0;
      }
      else if ((int)uStack_b8 == 3) {
        plVar12 = (long *)0x20;
        plVar18 = param_2;
        FUN_109f658b0();
        if (plVar18 != (long *)0x0) {
          plVar18[1] = 0;
          *plVar18 = 0;
          plVar18[3] = 0;
          plVar18[2] = 0;
        }
        plVar27 = plVar18 + 1;
        plVar18[2] = 0;
        *plVar27 = 0;
        *plVar18 = (long)&PTR_DAT_110b63ad0;
        plVar18[3] = 0xe;
      }
      else {
        if ((int)uStack_b8 != 2) goto LAB_109ebc29c;
        plVar12 = (long *)0x20;
        plVar18 = param_2;
        FUN_109f658b0();
        if (plVar18 != (long *)0x0) {
          plVar18[1] = 0;
          *plVar18 = 0;
          plVar18[3] = 0;
          plVar18[2] = 0;
        }
        plVar27 = plVar18 + 1;
        plVar18[2] = 0;
        *plVar27 = 0;
        *plVar18 = (long)&PTR_DAT_110b63ad0;
        plVar18[3] = 0x10000000e;
      }
      lVar30 = *plStack_d8;
      plVar18[1] = lVar30;
      plVar18[2] = (long)plStack_d8;
      *(long **)(lVar30 + 8) = plVar27;
      *plStack_d8 = (long)plVar27;
      lVar30 = *(long *)(alStack_98[0] + 8);
      plVar27 = *(long **)(alStack_98[0] + 0x10);
      *(long **)(lVar30 + 8) = plVar27;
      *plVar27 = lVar30;
      *(undefined8 *)(alStack_98[0] + 8) = 0;
      *(undefined8 *)(alStack_98[0] + 0x10) = 0;
      lVar30 = *(long *)(alStack_98[1] + 8);
      plVar27 = *(long **)(alStack_98[1] + 0x10);
      *(long **)(lVar30 + 8) = plVar27;
      *plVar27 = lVar30;
      *(undefined8 *)(alStack_98[1] + 8) = 0;
      *(undefined8 *)(alStack_98[1] + 0x10) = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      alStack_98[0] = 0;
      alStack_98[1] = 0;
      iStack_88 = 0;
      iStack_80 = 0;
      goto LAB_109ebc87c;
    }
LAB_109ebc29c:
    pbVar16 = &bStack_b9;
    plVar27 = alStack_98;
    bVar6 = true;
    do {
      bVar24 = bVar6;
      lVar30 = *plVar27;
      if (lVar30 == 0) {
LAB_109ebc2f4:
        bVar25 = 0;
      }
      else if (*(int *)(lVar30 + 0x18) == 0xf) {
        if ((*(int *)((long)param_1 + 0x2c) == 0) && (**(long **)(lVar30 + 8) == 0))
        goto LAB_109ebc2f4;
        bVar25 = *(byte *)(param_1 + 5);
      }
      else {
        if ((*(int *)(lVar30 + 0x18) != 0xe) || (*(int *)(lVar30 + 0x1c) == 0)) goto LAB_109ebc2f4;
        bVar25 = *(byte *)((long)param_1 + 0x59);
      }
      *pbVar16 = bVar25 & 1;
      pbVar16 = &bStack_ba;
      plVar27 = plVar32;
      bVar6 = false;
    } while (bVar24);
    if ((bStack_ba & 1) == 0) {
      if ((bStack_b9 & 1) == 0) goto LAB_109ebc6f0;
      uVar33 = 0;
    }
    else if (bStack_b9 == 0) {
      uVar33 = 1;
    }
    else {
      uVar33 = (ulong)((int)uStack_b8 < uStack_b8._4_4_);
    }
    iVar19 = *(int *)((long)&uStack_b8 + uVar33 * 4);
    if (iVar19 != 4) goto LAB_109ebc3e8;
    lVar30 = alStack_98[uVar33];
    FUN_109ebd184(param_1,lVar30);
    param_2 = plStack_c8;
    if (param_1[7] == 0) goto LAB_109ebc3f0;
    plVar12 = (long *)0x20;
    plVar18 = plStack_c8;
    FUN_109f658b0();
    if (plVar18 != (long *)0x0) {
      plVar18[1] = 0;
      *plVar18 = 0;
      plVar18[3] = 0;
      plVar18[2] = 0;
    }
    plVar27 = plVar18 + 1;
    plVar18[2] = 0;
    *plVar27 = 0;
    *plVar18 = (long)&PTR_DAT_110b63ad0;
    plVar18[3] = 0xe;
    pbVar16 = abStack_84 + uVar33 * 8 + -4;
    pbVar16[0] = 3;
    pbVar16[1] = 0;
    pbVar16[2] = 0;
    pbVar16[3] = 0;
    puVar21 = *(undefined8 **)(lVar30 + 0x10);
    lVar14 = *(long *)(lVar30 + 8);
    plVar18[2] = *(long *)(lVar30 + 0x10);
    *plVar27 = lVar14;
    *puVar21 = plVar27;
    *(long **)(*(long *)(lVar30 + 8) + 8) = plVar27;
    alStack_98[uVar33] = (long)plVar18;
    goto LAB_109ebc6e8;
  }
  goto LAB_109ebc99c;
LAB_109ebc6f0:
  if ((bVar2 & 1) != 0) {
    if ((alStack_98[0] == 0) || (iStack_80 < 2)) {
      if ((alStack_98[1] == 0) || (lVar30 = alStack_98[1], piVar15 = &iStack_80, iStack_88 < 2))
      goto LAB_109ebc87c;
    }
    else {
      lVar30 = alStack_98[0];
      piVar15 = &iStack_88;
      plVar27 = alStack_98;
    }
    plVar23 = (long *)(lVar30 + 8);
    lVar14 = *plVar23;
    plVar31 = *(long **)(lVar30 + 0x10);
    *(long **)(lVar14 + 8) = plVar31;
    *plVar31 = lVar14;
    *plVar23 = 0;
    *(undefined8 *)(lVar30 + 0x10) = 0;
    lVar14 = *plStack_d8;
    *plVar23 = lVar14;
    *(long **)(lVar30 + 0x10) = plStack_d8;
    *(long **)(lVar14 + 8) = plVar23;
    *plStack_d8 = (long)plVar23;
    *plVar27 = 0;
    *piVar15 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
  }
LAB_109ebc87c:
  iVar19 = iStack_88;
  if (iStack_80 <= iStack_88) {
    iVar19 = iStack_80;
  }
  *(int *)(param_1 + 10) = iVar19;
  if (((*(byte *)((long)param_1 + 0x54) & 1) == 0) && ((abStack_84[0] & 1) == 0)) {
    *(byte *)((long)param_1 + 0x54) = bStack_7c;
    if (iVar19 != 0) {
LAB_109ebc9a4:
      if (param_2 != (long *)0x0) {
        plVar32 = (long *)*plStack_d8;
        lVar30 = *plVar32;
        while (lVar30 != 0) {
          plVar27 = (long *)plVar32[1];
          *(long **)(lVar30 + 8) = plVar27;
          *plVar27 = lVar30;
          *plVar32 = 0;
          plVar32[1] = 0;
          *(undefined1 *)(param_1 + 1) = 1;
          plVar32 = (long *)*plStack_d8;
          lVar30 = *plVar32;
        }
      }
      goto LAB_109ebcb88;
    }
    if ((bStack_7c & 1) == 0) goto LAB_109ebcb88;
  }
  else {
    *(undefined1 *)((long)param_1 + 0x54) = 1;
    if (iVar19 != 0) goto LAB_109ebc9a4;
    if ((iStack_88 != 0) && ((bStack_7c & 1) == 0)) {
      plVar31 = (long *)*plStack_d8;
      plVar27 = plStack_f0;
      piVar15 = &iStack_80;
      goto LAB_109ebc8ec;
    }
  }
  plVar31 = (long *)*plStack_d8;
  if ((iStack_80 == 0) || ((abStack_84[0] & 1) != 0)) {
    plVar32 = (long *)*plVar31;
    if ((long *)*plVar31 != (long *)0x0) goto LAB_109ebc9f0;
    goto LAB_109ebcb88;
  }
  plVar27 = plStack_e8;
  piVar15 = &iStack_88;
LAB_109ebc8ec:
  lVar30 = *plVar31;
  if (lVar30 == 0) goto LAB_109ebcb88;
  plVar23 = plVar31;
  do {
    plVar26 = (long *)plVar23[1];
    *(long **)(lVar30 + 8) = plVar26;
    *plVar26 = lVar30;
    *plVar23 = (long)(plVar27 + 2);
    plVar23[1] = 0;
    puVar21 = (undefined8 *)plVar27[3];
    plVar23[1] = (long)puVar21;
    *puVar21 = plVar23;
    plVar27[3] = (long)plVar23;
    plVar23 = (long *)*plStack_d8;
    lVar30 = *plVar23;
  } while (lVar30 != 0);
  puStack_a0 = &uStack_b8;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = plVar31;
  lVar30 = param_1[10];
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  for (; *plVar31 != 0; plVar31 = (long *)*plVar31) {
    plVar18 = plVar31 + -1;
    plVar12 = param_1;
    (**(code **)(*plVar18 + 0x10))();
  }
  lVar14 = param_1[10];
  *(int *)(param_1 + 10) = (int)lVar30;
  *(char *)((long)param_1 + 0x54) = (char)((ulong)lVar30 >> 0x20);
  *piVar15 = (int)lVar14;
  *(char *)(piVar15 + 1) = (char)((ulong)lVar14 >> 0x20);
  *(undefined1 *)(param_1 + 1) = 1;
  plVar27 = alStack_98;
  param_2 = plStack_c8;
LAB_109ebc99c:
  uStack_dc = uStack_dc ^ 1;
  goto LAB_109ebc1cc;
LAB_109ebc9f0:
  plVar27 = plVar32;
  if (((((int)plVar31[2] == 0xc) && ((long *)plVar31[8] == plVar31 + 10)) &&
      (lVar30 = plVar31[3], lVar30 != 0 && *(int *)(lVar30 + 0x18) == 2)) &&
     (*(long *)(lVar30 + 0x28) == param_1[9])) {
    if ((long *)plVar31[4] == plVar31 + 6) {
      puVar21 = (undefined8 *)plVar31[1];
    }
    else {
      *(long **)plVar31[7] = plVar31;
      plVar32 = (long *)plVar31[1];
      lVar30 = plVar31[4];
      *(long **)(lVar30 + 8) = plVar32;
      *plVar32 = lVar30;
      puVar21 = (undefined8 *)plVar31[7];
      plVar31[1] = (long)puVar21;
      plVar31[4] = (long)(plVar31 + 6);
      plVar31[5] = 0;
      plVar31[6] = 0;
      plVar31[7] = (long)(plVar31 + 4);
      plVar27 = (long *)*plVar31;
    }
    plVar27[1] = (long)puVar21;
    *puVar21 = plVar27;
    *plVar31 = 0;
    plVar31[1] = 0;
    if (*(long *)*plStack_d8 == 0) goto LAB_109ebcb88;
    goto LAB_109ebca44;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  plVar32 = (long *)*plVar27;
  plVar31 = plVar27;
  if ((long *)*plVar27 == (long *)0x0) {
LAB_109ebca44:
    puVar21 = (undefined8 *)0xa0;
    _malloc();
    plVar32 = plStack_d8;
    if (puVar21 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      puVar21[1] = 0;
      *puVar21 = 0;
      puVar21[3] = 0;
      puVar21[2] = 0;
      *puVar21 = param_2 + -6;
      lVar30 = param_2[-5];
      puVar21[3] = lVar30;
      puVar21[4] = 0;
      param_2[-5] = (long)puVar21;
      if (lVar30 != 0) {
        *(undefined8 **)(lVar30 + 0x10) = puVar21;
      }
      puVar7 = puVar21 + 6;
      puVar21[7] = 0;
      *puVar7 = 0;
      puVar21[0x12] = 0;
      puVar21[0xf] = 0;
      puVar21[0xe] = 0;
      puVar21[0x11] = 0;
      puVar21[0x10] = 0;
      puVar21[0xb] = 0;
      puVar21[10] = 0;
      puVar21[0xd] = 0;
      puVar21[0xc] = 0;
      puVar21[9] = 0;
      puVar21[8] = 0;
    }
    plVar27 = (long *)0x60;
    _malloc();
    plVar18 = plVar27;
    if (plVar27 != (long *)0x0) {
      plVar27[1] = 0;
      *plVar27 = 0;
      plVar27[3] = 0;
      plVar27[2] = 0;
      *plVar27 = (long)(param_2 + -6);
      lVar30 = param_2[-5];
      plVar27[3] = lVar30;
      plVar27[4] = 0;
      param_2[-5] = (long)plVar27;
      if (lVar30 != 0) {
        *(long **)(lVar30 + 0x10) = plVar27;
      }
      plVar18 = plVar27 + 6;
      plVar27[7] = 0;
      *plVar18 = 0;
      plVar27[9] = 0;
      plVar27[8] = 0;
      plVar27[0xb] = 0;
      plVar27[10] = 0;
    }
    lVar30 = param_1[9];
    plVar18[1] = 0;
    plVar18[2] = 0;
    *(undefined4 *)(plVar18 + 3) = 2;
    *plVar18 = (long)&PTR_DAT_110b64048;
    plVar18[5] = lVar30;
    plVar18[4] = *(long *)(lVar30 + 0x20);
    puVar21 = puVar7 + 1;
    *puVar21 = 0;
    puVar7[2] = 0;
    *(undefined4 *)(puVar7 + 3) = 0xc;
    *puVar7 = &PTR_FUN_110b639a8;
    puVar7[4] = plVar18;
    puVar8 = puVar7 + 7;
    *puVar8 = 0;
    puVar7[5] = puVar8;
    puVar7[6] = 0;
    puVar7[8] = puVar7 + 5;
    puVar7[0xb] = 0;
    puVar7[9] = puVar7 + 0xb;
    puVar7[10] = 0;
    puVar7[0xc] = puVar7 + 9;
    while( true ) {
      plVar27 = (long *)*plVar32;
      lVar30 = *plVar27;
      if (lVar30 == 0) break;
      plVar31 = (long *)plVar27[1];
      *(long **)(lVar30 + 8) = plVar31;
      *plVar31 = lVar30;
      *plVar27 = (long)puVar8;
      plVar27[1] = 0;
      puVar17 = (undefined8 *)puVar7[8];
      plVar27[1] = (long)puVar17;
      *puVar17 = plVar27;
      puVar7[8] = plVar27;
    }
    puVar7[1] = plVar27;
    puVar7[2] = plVar32;
    plVar27[1] = (long)puVar21;
    *plVar32 = (long)puVar21;
LAB_109ebcb88:
    *(int *)(param_1 + 8) = (int)param_1[8] + -1;
    *(int *)((long)param_1 + 0x2c) = *(int *)((long)param_1 + 0x2c) + -1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
    __Unwind_Resume();
    lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar9 = *(undefined8 *)((long)plVar18 + 0x46);
    *(int *)((long)plVar18 + 0x2c) = *(int *)((long)plVar18 + 0x2c) + 1;
    lVar29 = plVar18[7];
    lVar36 = plVar18[7];
    lVar35 = plVar18[6];
    plVar31 = plVar18 + 8;
    lVar30 = *plVar31;
    uVar4 = *(undefined1 *)((long)plVar18 + 0x44);
    uVar28 = *(undefined1 *)((long)plVar18 + 0x45);
    uVar3 = *(undefined2 *)((long)plVar18 + 0x4e);
    plVar18[6] = plVar18[2];
    plVar18[7] = (long)plVar12;
    *(undefined4 *)plVar31 = 0;
    *(undefined2 *)((long)plVar18 + 0x44) = 0;
    plVar18[9] = 0;
    plVar23 = (long *)plVar12[4];
    lVar34 = plVar18[10];
    *(undefined4 *)(plVar18 + 10) = 0;
    *(undefined1 *)((long)plVar18 + 0x54) = 0;
    plVar32 = plVar18;
    plVar27 = plVar12;
    for (; *plVar23 != 0; plVar23 = (long *)*plVar23) {
      plVar32 = plVar23 + -1;
      plVar27 = plVar18;
      (**(code **)(*plVar32 + 0x10))();
    }
    *(int *)(plVar18 + 10) = (int)lVar34;
    *(char *)((long)plVar18 + 0x54) = (char)((ulong)lVar34 >> 0x20);
    if (((long *)plVar12[4] != plVar12 + 6) &&
       (plVar23 = (long *)plVar12[7], plVar23 != (long *)0x0)) {
      lVar34 = plVar23[2];
      if (((int)lVar34 == 0xe) && (*(int *)((long)plVar23 + 0x14) != 0)) {
        lVar1 = *plVar23;
        plVar26 = (long *)plVar23[1];
        *(long **)(lVar1 + 8) = plVar26;
        *plVar26 = lVar1;
        *plVar23 = 0;
        plVar23[1] = 0;
      }
      if (((int)lVar34 == 0xf) && ((*(byte *)(plVar18 + 5) & 1) != 0)) {
        plVar27 = plVar23 + -1;
        FUN_109ebd184(plVar18);
        puVar21 = (undefined8 *)0x50;
        _malloc();
        puVar21[4] = 0;
        puVar21[1] = 0;
        *puVar21 = 0;
        puVar21[3] = 0;
        puVar21[2] = 0;
        *puVar21 = plVar23 + -7;
        lVar34 = plVar23[-6];
        puVar21[3] = lVar34;
        plVar23[-6] = (long)puVar21;
        if (lVar34 != 0) {
          *(undefined8 **)(lVar34 + 0x10) = puVar21;
        }
        plVar32 = puVar21 + 7;
        puVar21[8] = 0;
        *plVar32 = 0;
        puVar21[6] = &PTR_DAT_110b63ad0;
        puVar21[9] = 0xe;
        puVar7 = (undefined8 *)plVar23[1];
        lVar34 = *plVar23;
        puVar21[8] = plVar23[1];
        *plVar32 = lVar34;
        *puVar7 = plVar32;
        *(long **)(*plVar23 + 8) = plVar32;
      }
    }
    if (*(char *)((long)plVar18 + 0x45) == '\x01') {
      puVar7 = (undefined8 *)0xa0;
      _malloc();
      puVar21 = puVar7;
      if (puVar7 != (undefined8 *)0x0) {
        puVar7[1] = 0;
        *puVar7 = 0;
        puVar7[3] = 0;
        puVar7[2] = 0;
        *puVar7 = plVar12 + -6;
        lVar34 = plVar12[-5];
        puVar7[3] = lVar34;
        puVar7[4] = 0;
        plVar12[-5] = (long)puVar7;
        if (lVar34 != 0) {
          *(undefined8 **)(lVar34 + 0x10) = puVar7;
        }
        puVar21 = puVar7 + 6;
        puVar7[7] = 0;
        *puVar21 = 0;
        puVar7[0x12] = 0;
        puVar7[0xf] = 0;
        puVar7[0xe] = 0;
        puVar7[0x11] = 0;
        puVar7[0x10] = 0;
        puVar7[0xb] = 0;
        puVar7[10] = 0;
        puVar7[0xd] = 0;
        puVar7[0xc] = 0;
        puVar7[9] = 0;
        puVar7[8] = 0;
      }
      puVar8 = (undefined8 *)0x60;
      _malloc();
      puVar7 = puVar8;
      if (puVar8 != (undefined8 *)0x0) {
        puVar8[1] = 0;
        *puVar8 = 0;
        puVar8[3] = 0;
        puVar8[2] = 0;
        *puVar8 = plVar12 + -6;
        lVar34 = plVar12[-5];
        puVar8[3] = lVar34;
        puVar8[4] = 0;
        plVar12[-5] = (long)puVar8;
        if (lVar34 != 0) {
          *(undefined8 **)(lVar34 + 0x10) = puVar8;
        }
        puVar7 = puVar8 + 6;
        puVar8[7] = 0;
        *puVar7 = 0;
        puVar8[9] = 0;
        puVar8[8] = 0;
        puVar8[0xb] = 0;
        puVar8[10] = 0;
      }
      lVar34 = plVar18[3];
      puVar7[1] = 0;
      puVar7[2] = 0;
      *(undefined4 *)(puVar7 + 3) = 2;
      *puVar7 = &PTR_DAT_110b64048;
      uVar22 = *(undefined8 *)(lVar34 + 0x20);
      puVar8 = puVar21 + 1;
      *puVar8 = 0;
      puVar7[4] = uVar22;
      puVar7[5] = lVar34;
      puVar21[2] = 0;
      *(undefined4 *)(puVar21 + 3) = 0xc;
      *puVar21 = &PTR_FUN_110b639a8;
      puVar21[4] = puVar7;
      puVar17 = puVar21 + 7;
      *puVar17 = 0;
      puVar21[5] = puVar17;
      puVar21[6] = 0;
      puVar7 = puVar21 + 0xb;
      *puVar7 = 0;
      puVar21[8] = puVar21 + 5;
      puVar21[9] = puVar7;
      puVar21[10] = 0;
      puVar21[0xc] = puVar21 + 9;
      if (lVar29 == 0) {
        while( true ) {
          plVar32 = (long *)plVar12[1];
          lVar29 = *plVar32;
          if (lVar29 == 0) break;
          plVar23 = (long *)plVar32[1];
          *(long **)(lVar29 + 8) = plVar23;
          *plVar23 = lVar29;
          *plVar32 = (long)puVar7;
          plVar32[1] = 0;
          puVar10 = (undefined8 *)puVar21[0xc];
          plVar32[1] = (long)puVar10;
          *puVar10 = plVar32;
          puVar21[0xc] = plVar32;
        }
        if (*(char *)(*(long *)(plVar18[2] + 0x20) + 4) == '\x14') {
          puVar10 = (undefined8 *)0x60;
          _malloc();
          puVar10[1] = 0;
          *puVar10 = 0;
          puVar10[3] = 0;
          puVar10[2] = 0;
          *puVar10 = plVar12 + -6;
          lVar29 = plVar12[-5];
          puVar10[3] = lVar29;
          puVar10[4] = 0;
          plVar12[-5] = (long)puVar10;
          if (lVar29 != 0) {
            *(undefined8 **)(lVar29 + 0x10) = puVar10;
          }
          puVar7 = puVar10 + 6;
          *puVar7 = &PTR_DAT_110b63a60;
          plVar32 = puVar10 + 7;
          puVar10[8] = 0;
          *plVar32 = 0;
          puVar10[10] = 0;
          puVar10[9] = 0;
          *(undefined4 *)(puVar10 + 9) = 0xf;
        }
        else {
          lVar29 = plVar18[4];
          puVar10 = (undefined8 *)0x60;
          _malloc();
          puVar7 = puVar10;
          if (puVar10 != (undefined8 *)0x0) {
            puVar10[1] = 0;
            *puVar10 = 0;
            puVar10[3] = 0;
            puVar10[2] = 0;
            *puVar10 = plVar12 + -6;
            lVar34 = plVar12[-5];
            puVar10[3] = lVar34;
            puVar10[4] = 0;
            plVar12[-5] = (long)puVar10;
            if (lVar34 != 0) {
              *(undefined8 **)(lVar34 + 0x10) = puVar10;
            }
            puVar7 = puVar10 + 6;
            puVar10[7] = 0;
            *puVar7 = 0;
            puVar10[10] = 0;
            puVar10[9] = 0;
            puVar10[8] = 0;
          }
          puVar11 = (undefined8 *)0x60;
          _malloc();
          puVar10 = puVar11;
          if (puVar11 != (undefined8 *)0x0) {
            puVar11[1] = 0;
            *puVar11 = 0;
            puVar11[3] = 0;
            puVar11[2] = 0;
            *puVar11 = plVar12 + -6;
            lVar34 = plVar12[-5];
            puVar11[3] = lVar34;
            puVar11[4] = 0;
            plVar12[-5] = (long)puVar11;
            if (lVar34 != 0) {
              *(undefined8 **)(lVar34 + 0x10) = puVar11;
            }
            puVar10 = puVar11 + 6;
            puVar11[7] = 0;
            *puVar10 = 0;
            puVar11[9] = 0;
            puVar11[8] = 0;
            puVar11[0xb] = 0;
            puVar11[10] = 0;
          }
          puVar10[1] = 0;
          puVar10[2] = 0;
          *(undefined4 *)(puVar10 + 3) = 2;
          *puVar10 = &PTR_DAT_110b64048;
          puVar10[4] = *(undefined8 *)(lVar29 + 0x20);
          puVar10[5] = lVar29;
          plVar32 = puVar7 + 1;
          puVar7[2] = 0;
          *(undefined4 *)(puVar7 + 3) = 0xf;
          *puVar7 = &PTR_DAT_110b63a60;
          puVar7[4] = puVar10;
        }
      }
      else {
        puVar10 = (undefined8 *)0x50;
        _malloc();
        puVar10[1] = 0;
        *puVar10 = 0;
        puVar10[3] = 0;
        puVar10[2] = 0;
        *puVar10 = plVar12 + -6;
        lVar29 = plVar12[-5];
        puVar10[3] = lVar29;
        puVar10[4] = 0;
        plVar12[-5] = (long)puVar10;
        if (lVar29 != 0) {
          *(undefined8 **)(lVar29 + 0x10) = puVar10;
        }
        plVar32 = puVar10 + 7;
        puVar10[8] = 0;
        *plVar32 = 0;
        puVar7 = puVar10 + 6;
        *puVar7 = &PTR_DAT_110b63ad0;
        puVar10[9] = 0xe;
      }
      *plVar32 = (long)puVar17;
      puVar17 = (undefined8 *)puVar21[8];
      puVar7[2] = puVar17;
      *puVar17 = plVar32;
      plVar12 = plVar12 + 1;
      lVar29 = *plVar12;
      puVar21[8] = plVar32;
      puVar21[1] = lVar29;
      puVar21[2] = plVar12;
      *(undefined8 **)(lVar29 + 8) = puVar8;
      *plVar12 = (long)puVar8;
      uVar28 = 1;
    }
    plVar18[7] = lVar36;
    plVar18[6] = lVar35;
    *(int *)plVar31 = (int)lVar30;
    *(undefined1 *)((long)plVar18 + 0x44) = uVar4;
    *(undefined1 *)((long)plVar18 + 0x45) = uVar28;
    *(undefined8 *)((long)plVar18 + 0x46) = uVar9;
    *(undefined2 *)((long)plVar18 + 0x4e) = uVar3;
    *(int *)((long)plVar18 + 0x2c) = *(int *)((long)plVar18 + 0x2c) + -1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
      return;
    }
    ___stack_chk_fail();
    if (plVar27 != (long *)0x0) {
      plVar18 = (long *)plVar27[1];
      lVar30 = *plVar18;
      while (lVar30 != 0) {
        plVar12 = (long *)plVar18[1];
        *(long **)(lVar30 + 8) = plVar12;
        *plVar12 = lVar30;
        *plVar18 = 0;
        plVar18[1] = 0;
        *(undefined1 *)(plVar32 + 1) = 1;
        plVar18 = (long *)plVar27[1];
        lVar30 = *plVar18;
      }
    }
    uVar13 = 2;
    if (*(int *)((long)plVar27 + 0x1c) == 0) {
      uVar13 = 3;
    }
    *(undefined4 *)(plVar32 + 10) = uVar13;
    return;
  }
  goto LAB_109ebc9f0;
LAB_109ebc3e8:
  if (iVar19 == 2) {
LAB_109ebc3f0:
    lVar30 = param_1[9];
    uStack_d0 = uVar33;
    if (lVar30 == 0) {
      if (param_1[7] == 0) {
        puVar21 = (undefined8 *)param_1[6];
        plVar18 = puVar21 + 10;
      }
      else {
        plVar18 = (long *)(param_1[7] + 0x20);
        puVar21 = (undefined8 *)param_1[6];
      }
      FUN_109f658b0(puVar21,0x90);
      if (puVar21 != (undefined8 *)0x0) {
        puVar21[0xf] = 0;
        puVar21[0xe] = 0;
        puVar21[0x11] = 0;
        puVar21[0x10] = 0;
        puVar21[0xb] = 0;
        puVar21[10] = 0;
        puVar21[0xd] = 0;
        puVar21[0xc] = 0;
        puVar21[7] = 0;
        puVar21[6] = 0;
        puVar21[9] = 0;
        puVar21[8] = 0;
        puVar21[3] = 0;
        puVar21[2] = 0;
        puVar21[5] = 0;
        puVar21[4] = 0;
        puVar21[1] = 0;
        *puVar21 = 0;
      }
      FUN_109eaba7c();
      param_1[9] = (long)puVar21;
      puVar21 = (undefined8 *)param_1[6];
      FUN_109f658b0(puVar21,0x38);
      if (puVar21 != (undefined8 *)0x0) {
        puVar21[6] = 0;
        puVar21[3] = 0;
        puVar21[2] = 0;
        puVar21[5] = 0;
        puVar21[4] = 0;
        puVar21[1] = 0;
        *puVar21 = 0;
      }
      puVar7 = (undefined8 *)param_1[6];
      FUN_109f658b0(puVar7,0x30);
      if (puVar7 != (undefined8 *)0x0) {
        puVar7[3] = 0;
        puVar7[2] = 0;
        puVar7[5] = 0;
        puVar7[4] = 0;
        puVar7[1] = 0;
        *puVar7 = 0;
      }
      lVar30 = param_1[9];
      puVar7[1] = 0;
      puVar7[2] = 0;
      *(undefined4 *)(puVar7 + 3) = 2;
      *puVar7 = &PTR_DAT_110b64048;
      puVar7[5] = lVar30;
      puVar7[4] = *(undefined8 *)(lVar30 + 0x20);
      puVar8 = (undefined8 *)param_1[6];
      FUN_109f658b0(puVar8,0xb0);
      if (puVar8 != (undefined8 *)0x0) {
        puVar8[0x13] = 0;
        puVar8[0x12] = 0;
        puVar8[0x15] = 0;
        puVar8[0x14] = 0;
        puVar8[0xf] = 0;
        puVar8[0xe] = 0;
        puVar8[0x11] = 0;
        puVar8[0x10] = 0;
        puVar8[0xb] = 0;
        puVar8[10] = 0;
        puVar8[0xd] = 0;
        puVar8[0xc] = 0;
        puVar8[7] = 0;
        puVar8[6] = 0;
        puVar8[9] = 0;
        puVar8[8] = 0;
        puVar8[3] = 0;
        puVar8[2] = 0;
        puVar8[5] = 0;
        puVar8[4] = 0;
        puVar8[1] = 0;
        *puVar8 = 0;
      }
      puVar8[1] = 0;
      puVar8[2] = 0;
      *(undefined4 *)(puVar8 + 3) = 3;
      puVar8[4] = &UNK_10e05d730;
      *puVar8 = &PTR_DAT_110b63f80;
      puVar8[0x15] = 0;
      uVar9 = 0xb;
      func_0x000109ec6c94(0xb,1,1,0,0,0);
      puVar8[4] = uVar9;
      *(undefined1 *)(puVar8 + 5) = 1;
      *(undefined8 *)((long)puVar8 + 0x29) = 0;
      puVar8[6] = 0;
      func_0x000109ea9180(puVar21,puVar7,puVar8);
      lVar30 = *plVar18;
      puVar21[1] = lVar30;
      plVar12 = (long *)0x0;
      if (puVar21 != (undefined8 *)0x0) {
        plVar12 = puVar21 + 1;
      }
      *(long **)(lVar30 + 8) = plVar12;
      lVar30 = param_1[9];
      *(undefined8 *)(lVar30 + 8) = plVar12;
      puVar7 = (undefined8 *)0x0;
      if (lVar30 != 0) {
        puVar7 = (undefined8 *)(lVar30 + 8);
      }
      *(long **)(lVar30 + 0x10) = plVar18;
      puVar21[2] = puVar7;
      *plVar18 = (long)puVar7;
      param_2 = plStack_c8;
    }
    lVar14 = alStack_98[uStack_d0];
    plVar27 = param_2;
    FUN_109f658b0(param_2,0x38);
    if (plVar27 != (long *)0x0) {
      plVar27[6] = 0;
      plVar27[3] = 0;
      plVar27[2] = 0;
      plVar27[5] = 0;
      plVar27[4] = 0;
      plVar27[1] = 0;
      *plVar27 = 0;
    }
    plVar12 = param_2;
    FUN_109f658b0(param_2,0x30);
    if (plVar12 != (long *)0x0) {
      plVar12[3] = 0;
      plVar12[2] = 0;
      plVar12[5] = 0;
      plVar12[4] = 0;
      plVar12[1] = 0;
      *plVar12 = 0;
    }
    plVar12[1] = 0;
    plVar12[2] = 0;
    *(undefined4 *)(plVar12 + 3) = 2;
    *plVar12 = (long)&PTR_DAT_110b64048;
    plVar12[5] = lVar30;
    plVar12[4] = *(long *)(lVar30 + 0x20);
    FUN_109f658b0(param_2,0xb0);
    if (param_2 != (long *)0x0) {
      param_2[0x13] = 0;
      param_2[0x12] = 0;
      param_2[0x15] = 0;
      param_2[0x14] = 0;
      param_2[0xf] = 0;
      param_2[0xe] = 0;
      param_2[0x11] = 0;
      param_2[0x10] = 0;
      param_2[0xb] = 0;
      param_2[10] = 0;
      param_2[0xd] = 0;
      param_2[0xc] = 0;
      param_2[7] = 0;
      param_2[6] = 0;
      param_2[9] = 0;
      param_2[8] = 0;
      param_2[3] = 0;
      param_2[2] = 0;
      param_2[5] = 0;
      param_2[4] = 0;
      param_2[1] = 0;
      *param_2 = 0;
    }
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined4 *)(param_2 + 3) = 3;
    param_2[4] = (long)&UNK_10e05d730;
    *param_2 = (long)&PTR_DAT_110b63f80;
    param_2[0x15] = 0;
    lVar30 = 0xb;
    func_0x000109ec6c94(0xb,1,1,0,0,0);
    param_2[4] = lVar30;
    param_2[5] = 0;
    param_2[6] = 0;
    plVar18 = plVar27;
    func_0x000109ea9180(plVar27,plVar12,param_2);
    puVar21 = *(undefined8 **)(lVar14 + 0x10);
    lVar30 = *(long *)(lVar14 + 8);
    plVar27[2] = *(long *)(lVar14 + 0x10);
    plVar27[1] = lVar30;
    plVar31 = (long *)0x0;
    if (plVar27 != (long *)0x0) {
      plVar31 = plVar27 + 1;
    }
    *puVar21 = plVar31;
    *(long **)(*(long *)(lVar14 + 8) + 8) = plVar31;
    alStack_98[uStack_d0] = 0;
    pbVar16 = abStack_84 + uStack_d0 * 8 + -4;
    pbVar16[0] = 1;
    pbVar16[1] = 0;
    pbVar16[2] = 0;
    pbVar16[3] = 0;
    abStack_84[uStack_d0 * 8] = 1;
    param_2 = plStack_c8;
LAB_109ebc6e8:
    *(undefined1 *)(param_1 + 1) = 1;
  }
  goto LAB_109ebc218;
}



/* Entry: 109ebcc4c; end: 109ebd12b;  */

void FUN_109ebcc4c(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  undefined1 uVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = *(undefined8 *)((long)param_1 + 0x46);
  *(int *)((long)param_1 + 0x2c) = *(int *)((long)param_1 + 0x2c) + 1;
  lVar20 = param_1[7];
  lVar24 = param_1[7];
  lVar23 = param_1[6];
  plVar14 = param_1 + 8;
  lVar18 = *plVar14;
  uVar4 = *(undefined1 *)((long)param_1 + 0x44);
  uVar19 = *(undefined1 *)((long)param_1 + 0x45);
  uVar3 = *(undefined2 *)((long)param_1 + 0x4e);
  param_1[6] = param_1[2];
  param_1[7] = (long)param_2;
  *(undefined4 *)plVar14 = 0;
  *(undefined2 *)((long)param_1 + 0x44) = 0;
  param_1[9] = 0;
  plVar22 = (long *)param_2[4];
  lVar21 = param_1[10];
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  plVar17 = param_1;
  plVar9 = param_2;
  for (; *plVar22 != 0; plVar22 = (long *)*plVar22) {
    plVar17 = plVar22 + -1;
    plVar9 = param_1;
    (**(code **)(*plVar17 + 0x10))();
  }
  *(int *)(param_1 + 10) = (int)lVar21;
  *(char *)((long)param_1 + 0x54) = (char)((ulong)lVar21 >> 0x20);
  if (((long *)param_2[4] != param_2 + 6) && (plVar22 = (long *)param_2[7], plVar22 != (long *)0x0))
  {
    lVar21 = plVar22[2];
    if (((int)lVar21 == 0xe) && (*(int *)((long)plVar22 + 0x14) != 0)) {
      lVar1 = *plVar22;
      plVar2 = (long *)plVar22[1];
      *(long **)(lVar1 + 8) = plVar2;
      *plVar2 = lVar1;
      *plVar22 = 0;
      plVar22[1] = 0;
    }
    if (((int)lVar21 == 0xf) && ((*(byte *)(param_1 + 5) & 1) != 0)) {
      plVar9 = plVar22 + -1;
      FUN_109ebd184(param_1);
      puVar5 = (undefined8 *)0x50;
      _malloc();
      puVar5[4] = 0;
      puVar5[1] = 0;
      *puVar5 = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      *puVar5 = plVar22 + -7;
      lVar21 = plVar22[-6];
      puVar5[3] = lVar21;
      plVar22[-6] = (long)puVar5;
      if (lVar21 != 0) {
        *(undefined8 **)(lVar21 + 0x10) = puVar5;
      }
      plVar17 = puVar5 + 7;
      puVar5[8] = 0;
      *plVar17 = 0;
      puVar5[6] = &PTR_DAT_110b63ad0;
      puVar5[9] = 0xe;
      puVar12 = (undefined8 *)plVar22[1];
      lVar21 = *plVar22;
      puVar5[8] = plVar22[1];
      *plVar17 = lVar21;
      *puVar12 = plVar17;
      *(long **)(*plVar22 + 8) = plVar17;
    }
  }
  if (*(char *)((long)param_1 + 0x45) == '\x01') {
    puVar12 = (undefined8 *)0xa0;
    _malloc();
    puVar5 = puVar12;
    if (puVar12 != (undefined8 *)0x0) {
      puVar12[1] = 0;
      *puVar12 = 0;
      puVar12[3] = 0;
      puVar12[2] = 0;
      *puVar12 = param_2 + -6;
      lVar21 = param_2[-5];
      puVar12[3] = lVar21;
      puVar12[4] = 0;
      param_2[-5] = (long)puVar12;
      if (lVar21 != 0) {
        *(undefined8 **)(lVar21 + 0x10) = puVar12;
      }
      puVar5 = puVar12 + 6;
      puVar12[7] = 0;
      *puVar5 = 0;
      puVar12[0x12] = 0;
      puVar12[0xf] = 0;
      puVar12[0xe] = 0;
      puVar12[0x11] = 0;
      puVar12[0x10] = 0;
      puVar12[0xb] = 0;
      puVar12[10] = 0;
      puVar12[0xd] = 0;
      puVar12[0xc] = 0;
      puVar12[9] = 0;
      puVar12[8] = 0;
    }
    puVar6 = (undefined8 *)0x60;
    _malloc();
    puVar12 = puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[1] = 0;
      *puVar6 = 0;
      puVar6[3] = 0;
      puVar6[2] = 0;
      *puVar6 = param_2 + -6;
      lVar21 = param_2[-5];
      puVar6[3] = lVar21;
      puVar6[4] = 0;
      param_2[-5] = (long)puVar6;
      if (lVar21 != 0) {
        *(undefined8 **)(lVar21 + 0x10) = puVar6;
      }
      puVar12 = puVar6 + 6;
      puVar6[7] = 0;
      *puVar12 = 0;
      puVar6[9] = 0;
      puVar6[8] = 0;
      puVar6[0xb] = 0;
      puVar6[10] = 0;
    }
    lVar21 = param_1[3];
    puVar12[1] = 0;
    puVar12[2] = 0;
    *(undefined4 *)(puVar12 + 3) = 2;
    *puVar12 = &PTR_DAT_110b64048;
    uVar16 = *(undefined8 *)(lVar21 + 0x20);
    puVar6 = puVar5 + 1;
    *puVar6 = 0;
    puVar12[4] = uVar16;
    puVar12[5] = lVar21;
    puVar5[2] = 0;
    *(undefined4 *)(puVar5 + 3) = 0xc;
    *puVar5 = &PTR_FUN_110b639a8;
    puVar5[4] = puVar12;
    puVar13 = puVar5 + 7;
    *puVar13 = 0;
    puVar5[5] = puVar13;
    puVar5[6] = 0;
    puVar12 = puVar5 + 0xb;
    *puVar12 = 0;
    puVar5[8] = puVar5 + 5;
    puVar5[9] = puVar12;
    puVar5[10] = 0;
    puVar5[0xc] = puVar5 + 9;
    if (lVar20 == 0) {
      while( true ) {
        plVar17 = (long *)param_2[1];
        lVar20 = *plVar17;
        if (lVar20 == 0) break;
        plVar22 = (long *)plVar17[1];
        *(long **)(lVar20 + 8) = plVar22;
        *plVar22 = lVar20;
        *plVar17 = (long)puVar12;
        plVar17[1] = 0;
        puVar7 = (undefined8 *)puVar5[0xc];
        plVar17[1] = (long)puVar7;
        *puVar7 = plVar17;
        puVar5[0xc] = plVar17;
      }
      if (*(char *)(*(long *)(param_1[2] + 0x20) + 4) == '\x14') {
        puVar7 = (undefined8 *)0x60;
        _malloc();
        puVar7[1] = 0;
        *puVar7 = 0;
        puVar7[3] = 0;
        puVar7[2] = 0;
        *puVar7 = param_2 + -6;
        lVar20 = param_2[-5];
        puVar7[3] = lVar20;
        puVar7[4] = 0;
        param_2[-5] = (long)puVar7;
        if (lVar20 != 0) {
          *(undefined8 **)(lVar20 + 0x10) = puVar7;
        }
        puVar12 = puVar7 + 6;
        *puVar12 = &PTR_DAT_110b63a60;
        plVar17 = puVar7 + 7;
        puVar7[8] = 0;
        *plVar17 = 0;
        puVar7[10] = 0;
        puVar7[9] = 0;
        *(undefined4 *)(puVar7 + 9) = 0xf;
      }
      else {
        lVar20 = param_1[4];
        puVar7 = (undefined8 *)0x60;
        _malloc();
        puVar12 = puVar7;
        if (puVar7 != (undefined8 *)0x0) {
          puVar7[1] = 0;
          *puVar7 = 0;
          puVar7[3] = 0;
          puVar7[2] = 0;
          *puVar7 = param_2 + -6;
          lVar21 = param_2[-5];
          puVar7[3] = lVar21;
          puVar7[4] = 0;
          param_2[-5] = (long)puVar7;
          if (lVar21 != 0) {
            *(undefined8 **)(lVar21 + 0x10) = puVar7;
          }
          puVar12 = puVar7 + 6;
          puVar7[7] = 0;
          *puVar12 = 0;
          puVar7[10] = 0;
          puVar7[9] = 0;
          puVar7[8] = 0;
        }
        puVar8 = (undefined8 *)0x60;
        _malloc();
        puVar7 = puVar8;
        if (puVar8 != (undefined8 *)0x0) {
          puVar8[1] = 0;
          *puVar8 = 0;
          puVar8[3] = 0;
          puVar8[2] = 0;
          *puVar8 = param_2 + -6;
          lVar21 = param_2[-5];
          puVar8[3] = lVar21;
          puVar8[4] = 0;
          param_2[-5] = (long)puVar8;
          if (lVar21 != 0) {
            *(undefined8 **)(lVar21 + 0x10) = puVar8;
          }
          puVar7 = puVar8 + 6;
          puVar8[7] = 0;
          *puVar7 = 0;
          puVar8[9] = 0;
          puVar8[8] = 0;
          puVar8[0xb] = 0;
          puVar8[10] = 0;
        }
        puVar7[1] = 0;
        puVar7[2] = 0;
        *(undefined4 *)(puVar7 + 3) = 2;
        *puVar7 = &PTR_DAT_110b64048;
        puVar7[4] = *(undefined8 *)(lVar20 + 0x20);
        puVar7[5] = lVar20;
        plVar17 = puVar12 + 1;
        puVar12[2] = 0;
        *(undefined4 *)(puVar12 + 3) = 0xf;
        *puVar12 = &PTR_DAT_110b63a60;
        puVar12[4] = puVar7;
      }
    }
    else {
      puVar7 = (undefined8 *)0x50;
      _malloc();
      puVar7[1] = 0;
      *puVar7 = 0;
      puVar7[3] = 0;
      puVar7[2] = 0;
      *puVar7 = param_2 + -6;
      lVar20 = param_2[-5];
      puVar7[3] = lVar20;
      puVar7[4] = 0;
      param_2[-5] = (long)puVar7;
      if (lVar20 != 0) {
        *(undefined8 **)(lVar20 + 0x10) = puVar7;
      }
      plVar17 = puVar7 + 7;
      puVar7[8] = 0;
      *plVar17 = 0;
      puVar12 = puVar7 + 6;
      *puVar12 = &PTR_DAT_110b63ad0;
      puVar7[9] = 0xe;
    }
    *plVar17 = (long)puVar13;
    puVar13 = (undefined8 *)puVar5[8];
    puVar12[2] = puVar13;
    *puVar13 = plVar17;
    param_2 = param_2 + 1;
    lVar20 = *param_2;
    puVar5[8] = plVar17;
    puVar5[1] = lVar20;
    puVar5[2] = param_2;
    *(undefined8 **)(lVar20 + 8) = puVar6;
    *param_2 = (long)puVar6;
    uVar19 = 1;
  }
  param_1[7] = lVar24;
  param_1[6] = lVar23;
  *(int *)plVar14 = (int)lVar18;
  *(undefined1 *)((long)param_1 + 0x44) = uVar4;
  *(undefined1 *)((long)param_1 + 0x45) = uVar19;
  *(undefined8 *)((long)param_1 + 0x46) = uVar15;
  *(undefined2 *)((long)param_1 + 0x4e) = uVar3;
  *(int *)((long)param_1 + 0x2c) = *(int *)((long)param_1 + 0x2c) + -1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  if (plVar9 != (long *)0x0) {
    plVar14 = (long *)plVar9[1];
    lVar18 = *plVar14;
    while (lVar18 != 0) {
      plVar22 = (long *)plVar14[1];
      *(long **)(lVar18 + 8) = plVar22;
      *plVar22 = lVar18;
      *plVar14 = 0;
      plVar14[1] = 0;
      *(undefined1 *)(plVar17 + 1) = 1;
      plVar14 = (long *)plVar9[1];
      lVar18 = *plVar14;
    }
  }
  uVar10 = 2;
  if (*(int *)((long)plVar9 + 0x1c) == 0) {
    uVar10 = 3;
  }
  *(undefined4 *)(plVar17 + 10) = uVar10;
  return;
}



/* Entry: 109ebd12c; end: 109ebd183;  */

void FUN_109ebd12c(long param_1,long param_2)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  if (param_2 != 0) {
    plVar2 = *(long **)(param_2 + 8);
    lVar3 = *plVar2;
    while (lVar3 != 0) {
      plVar4 = (long *)plVar2[1];
      *(long **)(lVar3 + 8) = plVar4;
      *plVar4 = lVar3;
      *plVar2 = 0;
      plVar2[1] = 0;
      *(undefined1 *)(param_1 + 8) = 1;
      plVar2 = *(long **)(param_2 + 8);
      lVar3 = *plVar2;
    }
  }
  uVar1 = 2;
  if (*(int *)(param_2 + 0x1c) == 0) {
    uVar1 = 3;
  }
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  return;
}



/* Entry: 109ebd184; end: 109ebd5a3;  */

void FUN_109ebd184(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = *(long *)(param_1 + 0x18);
  if (lVar10 == 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    FUN_109f658b0(puVar2,0x90);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[0xf] = 0;
      puVar2[0xe] = 0;
      puVar2[0x11] = 0;
      puVar2[0x10] = 0;
      puVar2[0xb] = 0;
      puVar2[10] = 0;
      puVar2[0xd] = 0;
      puVar2[0xc] = 0;
      puVar2[7] = 0;
      puVar2[6] = 0;
      puVar2[9] = 0;
      puVar2[8] = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
    }
    FUN_109eaba7c();
    *(undefined8 **)(param_1 + 0x18) = puVar2;
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    puVar2 = puVar9;
    FUN_109f658b0(puVar9,0x38);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[6] = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
    }
    plVar8 = puVar9 + 10;
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    FUN_109f658b0(puVar9,0x30);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
    }
    lVar10 = *(long *)(param_1 + 0x18);
    puVar9[1] = 0;
    puVar9[2] = 0;
    *(undefined4 *)(puVar9 + 3) = 2;
    *puVar9 = &PTR_DAT_110b64048;
    puVar9[4] = *(undefined8 *)(lVar10 + 0x20);
    puVar9[5] = lVar10;
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    FUN_109f658b0(puVar3,0xb0);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[0x13] = 0;
      puVar3[0x12] = 0;
      puVar3[0x15] = 0;
      puVar3[0x14] = 0;
      puVar3[0xf] = 0;
      puVar3[0xe] = 0;
      puVar3[0x11] = 0;
      puVar3[0x10] = 0;
      puVar3[0xb] = 0;
      puVar3[10] = 0;
      puVar3[0xd] = 0;
      puVar3[0xc] = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[9] = 0;
      puVar3[8] = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
    }
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + 3) = 3;
    puVar3[4] = &UNK_10e05d730;
    *puVar3 = &PTR_DAT_110b63f80;
    puVar3[0x15] = 0;
    uVar4 = 0xb;
    func_0x000109ec6c94(0xb,1,1,0,0,0);
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[4] = uVar4;
    func_0x000109ea9180(puVar2,puVar9,puVar3);
    lVar10 = *plVar8;
    puVar2[1] = lVar10;
    plVar5 = (long *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      plVar5 = puVar2 + 1;
    }
    puVar2[2] = plVar8;
    *(long **)(lVar10 + 8) = plVar5;
    *plVar8 = (long)plVar5;
    lVar10 = *(long *)(param_1 + 0x18);
    plVar5 = (long *)(*(long *)(param_1 + 0x10) + 0x50);
    lVar7 = *plVar5;
    *(long *)(lVar10 + 8) = lVar7;
    plVar8 = (long *)0x0;
    if (lVar10 != 0) {
      plVar8 = (long *)(lVar10 + 8);
    }
    *(long **)(lVar10 + 0x10) = plVar5;
    *(long **)(lVar7 + 8) = plVar8;
    *plVar5 = (long)plVar8;
  }
  lVar11 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar11 + 0x20);
  if (*(char *)(lVar7 + 4) != '\x14') {
    plVar8 = *(long **)(param_1 + 0x20);
    if (plVar8 == (long *)0x0) {
      plVar5 = (long *)0xc0;
      _malloc();
      if (plVar5 == (long *)0x0) {
        plVar8 = (long *)0x0;
      }
      else {
        plVar5[4] = 0;
        plVar5[1] = 0;
        *plVar5 = 0;
        plVar5[3] = 0;
        plVar5[2] = 0;
        *plVar5 = lVar11 + -0x30;
        lVar7 = *(long *)(lVar11 + -0x28);
        plVar5[3] = lVar7;
        *(long **)(lVar11 + -0x28) = plVar5;
        if (lVar7 != 0) {
          *(long **)(lVar7 + 0x10) = plVar5;
        }
        plVar8 = plVar5 + 6;
        plVar5[7] = 0;
        *plVar8 = 0;
        plVar5[0x15] = 0;
        plVar5[0x14] = 0;
        plVar5[0x17] = 0;
        plVar5[0x16] = 0;
        plVar5[0x11] = 0;
        plVar5[0x10] = 0;
        plVar5[0x13] = 0;
        plVar5[0x12] = 0;
        plVar5[0xd] = 0;
        plVar5[0xc] = 0;
        plVar5[0xf] = 0;
        plVar5[0xe] = 0;
        plVar5[9] = 0;
        plVar5[8] = 0;
        plVar5[0xb] = 0;
        plVar5[10] = 0;
        lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x20);
      }
      FUN_109eaba7c(plVar8,lVar7,&UNK_10f6156d3,0xb);
      *(long **)(param_1 + 0x20) = plVar8;
      plVar6 = (long *)(*(long *)(param_1 + 0x10) + 0x50);
      lVar7 = *plVar6;
      plVar8[1] = lVar7;
      plVar1 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        plVar1 = plVar8 + 1;
      }
      plVar8[2] = (long)plVar6;
      *(long **)(lVar7 + 8) = plVar1;
      *plVar6 = (long)plVar1;
    }
    puVar2 = param_2;
    FUN_109f658b0(param_2,0x38);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[6] = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
    }
    puVar9 = param_2;
    FUN_109f658b0(param_2,0x30);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
    }
    puVar9[1] = 0;
    puVar9[2] = 0;
    *(undefined4 *)(puVar9 + 3) = 2;
    *puVar9 = &PTR_DAT_110b64048;
    puVar9[4] = plVar8[4];
    puVar9[5] = plVar8;
    func_0x000109ea9180(puVar2,puVar9,param_2[4]);
    puVar2[1] = param_2 + 1;
    puVar3 = (undefined8 *)param_2[2];
    puVar9 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      puVar9 = puVar2 + 1;
    }
    puVar2[2] = puVar3;
    *puVar3 = puVar9;
    param_2[2] = puVar9;
  }
  puVar2 = param_2;
  FUN_109f658b0(param_2,0x38);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[6] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  puVar9 = param_2;
  FUN_109f658b0(param_2,0x30);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[3] = 0;
    puVar9[2] = 0;
    puVar9[5] = 0;
    puVar9[4] = 0;
    puVar9[1] = 0;
    *puVar9 = 0;
  }
  puVar9[1] = 0;
  puVar9[2] = 0;
  *(undefined4 *)(puVar9 + 3) = 2;
  *puVar9 = &PTR_DAT_110b64048;
  puVar9[4] = *(undefined8 *)(lVar10 + 0x20);
  puVar9[5] = lVar10;
  puVar3 = param_2;
  FUN_109f658b0(param_2,0xb0);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[0x13] = 0;
    puVar3[0x12] = 0;
    puVar3[0x15] = 0;
    puVar3[0x14] = 0;
    puVar3[0xf] = 0;
    puVar3[0xe] = 0;
    puVar3[0x11] = 0;
    puVar3[0x10] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
  }
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 3) = 3;
  puVar3[4] = &UNK_10e05d730;
  *puVar3 = &PTR_DAT_110b63f80;
  puVar3[0x15] = 0;
  uVar4 = 0xb;
  func_0x000109ec6c94(0xb,1,1,0,0,0);
  puVar3[4] = uVar4;
  *(undefined1 *)(puVar3 + 5) = 1;
  *(undefined8 *)((long)puVar3 + 0x29) = 0;
  puVar3[6] = 0;
  func_0x000109ea9180(puVar2,puVar9,puVar3);
  puVar2[1] = param_2 + 1;
  puVar3 = (undefined8 *)param_2[2];
  puVar9 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    puVar9 = puVar2 + 1;
  }
  puVar2[2] = puVar3;
  *puVar3 = puVar9;
  param_2[2] = puVar9;
  *(undefined1 *)(param_1 + 0x45) = 1;
  return;
}



/* Entry: 109ebd5a4; end: 109ebd65b;  */

undefined1 FUN_109ebd5a4(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined **ppuStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  ppuStack_78 = &PTR_FUN_110b65160;
  uStack_38 = 0;
  uStack_40 = 0;
  FUN_109eb33b4(param_1,FUN_109ebd65c);
  plVar2 = *(long **)*param_1;
  if (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    plVar4 = (undefined8 *)*param_1 + -1;
    plStack_70 = plVar4;
    (**(code **)(*plVar4 + 0x18))(plVar4,&ppuStack_78);
    iVar1 = (int)plVar4;
    while ((iVar1 == 0 && (lVar3 != 0))) {
      plVar4 = (long *)*plVar2;
      lVar3 = *plVar4;
      plVar2 = plVar2 + -1;
      plStack_70 = plVar2;
      (**(code **)(*plVar2 + 0x18))(plVar2,&ppuStack_78);
      iVar1 = (int)plVar2;
      plVar2 = plVar4;
    }
  }
  return uStack_38;
}



/* Entry: 109ebd65c; end: 109ebd6bb;  */

undefined8 FUN_109ebd65c(long param_1)

{
  long *plVar1;
  ulong uVar2;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x18) == 4)) &&
     (uVar2 = (ulong)*(byte *)(param_1 + 0x50), uVar2 != 0)) {
    plVar1 = (long *)(param_1 + 0x30);
    do {
      if ((1 < *(byte *)(*(long *)(*plVar1 + 0x20) + 0xe)) &&
         (*(byte *)(*(long *)(*plVar1 + 0x20) + 4) - 2 < 3)) {
        return 1;
      }
      uVar2 = uVar2 - 1;
      plVar1 = plVar1 + 1;
    } while (uVar2 != 0);
  }
  return 0;
}



/* Entry: 109ebd6bc; end: 109ebdfbf;  */

long * FUN_109ebd6bc(long *param_1,long *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  long *plVar20;
  uint uVar21;
  long lVar22;
  long alStack_78 [3];
  
  alStack_78[2] = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar22 = param_2[5];
  plVar7 = param_2;
  if ((lVar22 != 0 && *(int *)(lVar22 + 0x18) == 4) &&
     (uVar15 = (ulong)*(byte *)(lVar22 + 0x50), uVar15 != 0)) {
    plVar13 = (long *)(lVar22 + 0x30);
    plVar16 = plVar13;
    do {
      bVar2 = *(byte *)(*(long *)(*plVar16 + 0x20) + 0xe);
      if ((1 < bVar2) && (*(byte *)(*(long *)(*plVar16 + 0x20) + 4) - 2 < 3)) {
        if (param_2 == (long *)0x0) {
          lVar17 = 0;
        }
        else {
          lVar17 = 0;
          if (param_2[-6] != 0) {
            lVar17 = param_2[-6] + 0x30;
          }
        }
        uVar15 = 0;
        param_1[7] = lVar17;
        plVar16 = (long *)param_2[4];
        lVar17 = plVar16[3];
        goto LAB_109ebd788;
      }
      uVar15 = uVar15 - 1;
      plVar16 = plVar16 + 1;
    } while (uVar15 != 0);
  }
  goto LAB_109ebdee4;
LAB_109ebd788:
  do {
    plVar20 = (long *)plVar13[uVar15];
    if (plVar20 == (long *)0x0 || 2 < *(uint *)(plVar20 + 3)) {
LAB_109ebd7d0:
      puVar14 = (undefined8 *)param_1[7];
      FUN_109f658b0(puVar14,0x90);
      if (puVar14 != (undefined8 *)0x0) {
        puVar14[0xf] = 0;
        puVar14[0xe] = 0;
        puVar14[0x11] = 0;
        puVar14[0x10] = 0;
        puVar14[0xb] = 0;
        puVar14[10] = 0;
        puVar14[0xd] = 0;
        puVar14[0xc] = 0;
        puVar14[7] = 0;
        puVar14[6] = 0;
        puVar14[9] = 0;
        puVar14[8] = 0;
        puVar14[3] = 0;
        puVar14[2] = 0;
        puVar14[5] = 0;
        puVar14[4] = 0;
        puVar14[1] = 0;
        *puVar14 = 0;
      }
      FUN_109eaba7c(puVar14,*(undefined8 *)(plVar13[uVar15] + 0x20),&UNK_10f6156ed,0xb);
      lVar18 = param_1[1];
      puVar14[1] = lVar18 + 8;
      plVar7 = (long *)0x0;
      if (puVar14 != (undefined8 *)0x0) {
        plVar7 = puVar14 + 1;
      }
      puVar8 = *(undefined8 **)(lVar18 + 0x10);
      puVar14[2] = puVar8;
      *puVar8 = plVar7;
      *(long **)(lVar18 + 0x10) = plVar7;
      plVar7 = (long *)param_1[7];
      FUN_109f658b0(plVar7,0x30);
      if (plVar7 != (long *)0x0) {
        plVar7[3] = 0;
        plVar7[2] = 0;
        plVar7[5] = 0;
        plVar7[4] = 0;
        plVar7[1] = 0;
        *plVar7 = 0;
      }
      plVar7[1] = 0;
      plVar7[2] = 0;
      *(undefined4 *)(plVar7 + 3) = 2;
      *plVar7 = (long)&PTR_DAT_110b64048;
      plVar7[4] = puVar14[4];
      plVar7[5] = (long)puVar14;
      alStack_78[uVar15] = (long)plVar7;
      puVar14 = (undefined8 *)param_1[7];
      FUN_109f658b0(puVar14,0x38);
      if (puVar14 != (undefined8 *)0x0) {
        puVar14[6] = 0;
        puVar14[3] = 0;
        puVar14[2] = 0;
        puVar14[5] = 0;
        puVar14[4] = 0;
        puVar14[1] = 0;
        *puVar14 = 0;
      }
      func_0x000109ea9180();
      lVar18 = param_1[1];
      puVar14[1] = lVar18 + 8;
      plVar20 = (long *)0x0;
      if (puVar14 != (undefined8 *)0x0) {
        plVar20 = puVar14 + 1;
      }
      puVar8 = *(undefined8 **)(lVar18 + 0x10);
      puVar14[2] = puVar8;
      *puVar8 = plVar20;
      *(long **)(lVar18 + 0x10) = plVar20;
    }
    else {
      plVar5 = plVar20;
      (**(code **)(*plVar20 + 0x40))();
      plVar6 = plVar16;
      (**(code **)(*plVar16 + 0x40))();
      if (plVar5 == plVar6) goto LAB_109ebd7d0;
      alStack_78[uVar15] = (long)plVar20;
    }
    uVar15 = uVar15 + 1;
  } while (uVar15 < *(byte *)(lVar22 + 0x50));
  plVar13 = plVar16;
  if ((int)lVar17 != 2) {
    plVar13 = (long *)0x0;
  }
  uVar19 = *(uint *)(lVar22 + 0x28);
  uVar21 = uVar19 - 0x7b;
  if (uVar21 < 0x14) {
    uVar4 = 1 << (ulong)(uVar21 & 0x1f);
    if ((uVar4 & 0x2403) == 0) {
      if ((uVar4 & 0xc0000) == 0) {
        if (uVar21 != 7) goto LAB_109ebdd38;
        lVar18 = *(long *)(alStack_78[0] + 0x20);
        lVar22 = alStack_78[1];
        lVar17 = alStack_78[0];
        if (*(byte *)(lVar18 + 0xe) < 2) {
          if ((*(byte *)(lVar18 + 0xe) == 1 && 1 < *(byte *)(lVar18 + 0xd)) &&
             ((*(uint *)(lVar18 + 4) & 0xfc) < 0xc)) {
            FUN_109ebe5f0(param_1,plVar13,alStack_78[0],alStack_78[1]);
            plVar7 = plVar13;
            goto LAB_109ebdec8;
          }
        }
        else if (*(byte *)(lVar18 + 4) - 2 < 3) {
          lVar18 = *(long *)(alStack_78[1] + 0x20);
          lVar22 = alStack_78[0];
          lVar17 = alStack_78[1];
          if (*(byte *)(lVar18 + 0xe) < 2) {
            if (((*(byte *)(lVar18 + 0xe) != 1) || (*(byte *)(lVar18 + 0xd) < 2)) ||
               (0xb < (*(uint *)(lVar18 + 4) & 0xfc))) goto LAB_109ebdec4;
            func_0x000109ebe2d0(param_1,plVar13,alStack_78[0],alStack_78[1]);
            plVar7 = plVar13;
          }
          else {
            if (2 < *(byte *)(lVar18 + 4) - 2) goto LAB_109ebdec4;
            FUN_109ebe0c0(param_1,plVar13,alStack_78[0],alStack_78[1]);
            plVar7 = plVar13;
          }
          goto LAB_109ebdec8;
        }
LAB_109ebdec4:
        func_0x000109ebe4b8(param_1,plVar13,lVar22,lVar17);
        plVar7 = plVar13;
      }
      else {
        bVar2 = *(byte *)(*(long *)(alStack_78[1] + 0x20) + 0xe);
        uVar9 = 0xb;
        func_0x000109ec6c94(0xb,bVar2,1,0,0,0);
        puVar14 = (undefined8 *)param_1[7];
        FUN_109f658b0(puVar14,0x90);
        if (puVar14 != (undefined8 *)0x0) {
          puVar14[0xf] = 0;
          puVar14[0xe] = 0;
          puVar14[0x11] = 0;
          puVar14[0x10] = 0;
          puVar14[0xb] = 0;
          puVar14[10] = 0;
          puVar14[0xd] = 0;
          puVar14[0xc] = 0;
          puVar14[7] = 0;
          puVar14[6] = 0;
          puVar14[9] = 0;
          puVar14[8] = 0;
          puVar14[3] = 0;
          puVar14[2] = 0;
          puVar14[5] = 0;
          puVar14[4] = 0;
          puVar14[1] = 0;
          *puVar14 = 0;
        }
        FUN_109eaba7c(puVar14,uVar9,&UNK_10f615725,0xb);
        lVar22 = param_1[1];
        puVar14[1] = lVar22 + 8;
        plVar7 = (long *)0x0;
        if (puVar14 != (undefined8 *)0x0) {
          plVar7 = puVar14 + 1;
        }
        puVar8 = *(undefined8 **)(lVar22 + 0x10);
        puVar14[2] = puVar8;
        *puVar8 = plVar7;
        *(long **)(lVar22 + 0x10) = plVar7;
        if (bVar2 != 0) {
          uVar21 = 0;
          do {
            puVar8 = (undefined8 *)param_1[7];
            FUN_109f658b0(puVar8,0x58);
            if (puVar8 != (undefined8 *)0x0) {
              puVar8[10] = 0;
              puVar8[7] = 0;
              puVar8[6] = 0;
              puVar8[9] = 0;
              puVar8[8] = 0;
              puVar8[3] = 0;
              puVar8[2] = 0;
              puVar8[5] = 0;
              puVar8[4] = 0;
              puVar8[1] = 0;
              *puVar8 = 0;
            }
            plVar7 = param_1;
            FUN_109ebdfc0(param_1,alStack_78[1],uVar21);
            plVar13 = param_1;
            FUN_109ebdfc0(param_1,alStack_78[0],uVar21);
            func_0x000109ea9448(puVar8,0x8e,plVar7,plVar13);
            puVar10 = (undefined8 *)param_1[7];
            FUN_109f658b0(puVar10,0x30);
            if (puVar10 != (undefined8 *)0x0) {
              puVar10[3] = 0;
              puVar10[2] = 0;
              puVar10[5] = 0;
              puVar10[4] = 0;
              puVar10[1] = 0;
              *puVar10 = 0;
            }
            puVar10[1] = 0;
            puVar10[2] = 0;
            *(undefined4 *)(puVar10 + 3) = 2;
            *puVar10 = &PTR_DAT_110b64048;
            puVar10[4] = puVar14[4];
            puVar10[5] = puVar14;
            puVar11 = (undefined8 *)param_1[7];
            FUN_109f658b0(puVar11,0x38);
            if (puVar11 != (undefined8 *)0x0) {
              puVar11[6] = 0;
              puVar11[3] = 0;
              puVar11[2] = 0;
              puVar11[5] = 0;
              puVar11[4] = 0;
              puVar11[1] = 0;
              *puVar11 = 0;
            }
            puVar11[2] = 0;
            plVar7 = puVar11 + 1;
            *plVar7 = 0;
            *(undefined4 *)(puVar11 + 3) = 8;
            *puVar11 = &PTR_DAT_110b63f38;
            puVar11[4] = puVar10;
            puVar11[5] = puVar8;
            *(byte *)(puVar11 + 6) =
                 *(byte *)(puVar11 + 6) & 0xf0 | (byte)(1 << (ulong)(uVar21 & 0x1f)) & 0xf;
            lVar22 = param_1[1];
            *plVar7 = lVar22 + 8;
            puVar8 = *(undefined8 **)(lVar22 + 0x10);
            puVar11[2] = puVar8;
            *puVar8 = plVar7;
            *(long **)(lVar22 + 0x10) = plVar7;
            uVar21 = uVar21 + 1;
          } while (bVar2 != uVar21);
        }
        puVar8 = (undefined8 *)param_1[7];
        FUN_109f658b0(puVar8,0x30);
        if (puVar8 != (undefined8 *)0x0) {
          puVar8[3] = 0;
          puVar8[2] = 0;
          puVar8[5] = 0;
          puVar8[4] = 0;
          puVar8[1] = 0;
          *puVar8 = 0;
        }
        puVar8[1] = 0;
        puVar8[2] = 0;
        *(undefined4 *)(puVar8 + 3) = 2;
        *puVar8 = &PTR_DAT_110b64048;
        lVar22 = puVar14[4];
        puVar8[4] = lVar22;
        puVar8[5] = puVar14;
        uVar3 = *(undefined1 *)(lVar22 + 0xd);
        puVar14 = (undefined8 *)param_1[7];
        FUN_109f658b0(puVar14,0x58);
        if (puVar14 != (undefined8 *)0x0) {
          puVar14[10] = 0;
          puVar14[7] = 0;
          puVar14[6] = 0;
          puVar14[9] = 0;
          puVar14[8] = 0;
          puVar14[3] = 0;
          puVar14[2] = 0;
          puVar14[5] = 0;
          puVar14[4] = 0;
          puVar14[1] = 0;
          *puVar14 = 0;
        }
        puVar10 = (undefined8 *)param_1[7];
        FUN_109f658b0(puVar10,0xb0);
        if (puVar10 != (undefined8 *)0x0) {
          puVar10[0x13] = 0;
          puVar10[0x12] = 0;
          puVar10[0x15] = 0;
          puVar10[0x14] = 0;
          puVar10[0xf] = 0;
          puVar10[0xe] = 0;
          puVar10[0x11] = 0;
          puVar10[0x10] = 0;
          puVar10[0xb] = 0;
          puVar10[10] = 0;
          puVar10[0xd] = 0;
          puVar10[0xc] = 0;
          puVar10[7] = 0;
          puVar10[6] = 0;
          puVar10[9] = 0;
          puVar10[8] = 0;
          puVar10[3] = 0;
          puVar10[2] = 0;
          puVar10[5] = 0;
          puVar10[4] = 0;
          puVar10[1] = 0;
          *puVar10 = 0;
        }
        func_0x000109ea9b70(puVar10,0,uVar3);
        func_0x000109ea9448(puVar14,0x8e,puVar8,puVar10);
        if (uVar19 == 0x8d) {
          puVar8 = (undefined8 *)param_1[7];
          FUN_109f658b0(puVar8,0x58);
          if (puVar8 != (undefined8 *)0x0) {
            puVar8[10] = 0;
            puVar8[7] = 0;
            puVar8[6] = 0;
            puVar8[9] = 0;
            puVar8[8] = 0;
            puVar8[3] = 0;
            puVar8[2] = 0;
            puVar8[5] = 0;
            puVar8[4] = 0;
            puVar8[1] = 0;
            *puVar8 = 0;
          }
          func_0x000109ea924c(puVar8,1,puVar14);
          puVar14 = puVar8;
        }
        puVar8 = (undefined8 *)param_1[7];
        FUN_109f658b0(puVar8,0x38);
        if (puVar8 != (undefined8 *)0x0) {
          puVar8[6] = 0;
          puVar8[3] = 0;
          puVar8[2] = 0;
          puVar8[5] = 0;
          puVar8[4] = 0;
          puVar8[1] = 0;
          *puVar8 = 0;
        }
        (**(code **)(*plVar16 + 0x20))(plVar16,param_1[7],0);
        func_0x000109ea9180(puVar8,plVar16,puVar14);
        lVar22 = param_1[1];
        puVar8[1] = lVar22 + 8;
        plVar7 = (long *)0x0;
        if (puVar8 != (undefined8 *)0x0) {
          plVar7 = puVar8 + 1;
        }
        puVar14 = *(undefined8 **)(lVar22 + 0x10);
        puVar8[2] = puVar14;
        *puVar14 = plVar7;
        *(long **)(lVar22 + 0x10) = plVar7;
        plVar7 = plVar16;
      }
    }
    else {
      uVar19 = 0;
      do {
        puVar14 = (undefined8 *)param_1[7];
        FUN_109f658b0(puVar14,0x58);
        if (puVar14 != (undefined8 *)0x0) {
          puVar14[10] = 0;
          puVar14[7] = 0;
          puVar14[6] = 0;
          puVar14[9] = 0;
          puVar14[8] = 0;
          puVar14[3] = 0;
          puVar14[2] = 0;
          puVar14[5] = 0;
          puVar14[4] = 0;
          puVar14[1] = 0;
          *puVar14 = 0;
        }
        uVar1 = *(undefined4 *)(lVar22 + 0x28);
        plVar7 = param_1;
        FUN_109ebdfc0(param_1,alStack_78[0],uVar19);
        plVar16 = param_1;
        FUN_109ebdfc0(param_1,alStack_78[1],uVar19);
        func_0x000109ea9448(puVar14,uVar1,plVar7,plVar16);
        puVar8 = (undefined8 *)param_1[7];
        FUN_109f658b0(puVar8,0x38);
        if (puVar8 != (undefined8 *)0x0) {
          puVar8[6] = 0;
          puVar8[3] = 0;
          puVar8[2] = 0;
          puVar8[5] = 0;
          puVar8[4] = 0;
          puVar8[1] = 0;
          *puVar8 = 0;
        }
        plVar7 = param_1;
        FUN_109ebdfc0(param_1,plVar13,uVar19);
        func_0x000109ea9180(puVar8,plVar7,puVar14);
        lVar17 = param_1[1];
        puVar8[1] = lVar17 + 8;
        plVar16 = (long *)0x0;
        if (puVar8 != (undefined8 *)0x0) {
          plVar16 = puVar8 + 1;
        }
        puVar14 = *(undefined8 **)(lVar17 + 0x10);
        puVar8[2] = puVar14;
        *puVar14 = plVar16;
        *(long **)(lVar17 + 0x10) = plVar16;
        uVar19 = uVar19 + 1;
      } while (bVar2 != uVar19);
    }
  }
  else {
LAB_109ebdd38:
    if ((0x1b < uVar19) || ((1 << (ulong)(uVar19 & 0x1f) & 0xf800004U) == 0)) goto LAB_109ebdfa0;
    uVar19 = 0;
    do {
      puVar14 = (undefined8 *)param_1[7];
      FUN_109f658b0(puVar14,0x58);
      if (puVar14 != (undefined8 *)0x0) {
        puVar14[10] = 0;
        puVar14[7] = 0;
        puVar14[6] = 0;
        puVar14[9] = 0;
        puVar14[8] = 0;
        puVar14[3] = 0;
        puVar14[2] = 0;
        puVar14[5] = 0;
        puVar14[4] = 0;
        puVar14[1] = 0;
        *puVar14 = 0;
      }
      uVar1 = *(undefined4 *)(lVar22 + 0x28);
      plVar7 = param_1;
      FUN_109ebdfc0(param_1,alStack_78[0],uVar19);
      func_0x000109ea924c(puVar14,uVar1,plVar7);
      puVar8 = (undefined8 *)param_1[7];
      FUN_109f658b0(puVar8,0x38);
      if (puVar8 != (undefined8 *)0x0) {
        puVar8[6] = 0;
        puVar8[3] = 0;
        puVar8[2] = 0;
        puVar8[5] = 0;
        puVar8[4] = 0;
        puVar8[1] = 0;
        *puVar8 = 0;
      }
      plVar7 = param_1;
      FUN_109ebdfc0(param_1,plVar13,uVar19);
      func_0x000109ea9180(puVar8,plVar7,puVar14);
      lVar17 = param_1[1];
      puVar8[1] = lVar17 + 8;
      plVar16 = (long *)0x0;
      if (puVar8 != (undefined8 *)0x0) {
        plVar16 = puVar8 + 1;
      }
      puVar14 = *(undefined8 **)(lVar17 + 0x10);
      puVar8[2] = puVar14;
      *puVar14 = plVar16;
      *(long **)(lVar17 + 0x10) = plVar16;
      uVar19 = uVar19 + 1;
    } while (bVar2 != uVar19);
  }
LAB_109ebdec8:
  lVar22 = param_2[1];
  plVar13 = (long *)param_2[2];
  *(long **)(lVar22 + 8) = plVar13;
  *plVar13 = lVar22;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_1 + 8) = 1;
LAB_109ebdee4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_78[2]) {
    return (long *)0x0;
  }
  ___stack_chk_fail();
LAB_109ebdfa0:
  puVar12 = &UNK_10f6156fb;
  _printf();
  _abort();
  (**(code **)(*plVar7 + 0x20))(plVar7,*(undefined8 *)(puVar12 + 0x38),0);
  if ((1 < *(byte *)(plVar7[4] + 0xe)) && (*(byte *)(plVar7[4] + 4) - 2 < 3)) {
    plVar13 = *(long **)(puVar12 + 0x38);
    FUN_109f658b0(plVar13,0x38);
    if (plVar13 != (long *)0x0) {
      plVar13[6] = 0;
      plVar13[3] = 0;
      plVar13[2] = 0;
      plVar13[5] = 0;
      plVar13[4] = 0;
      plVar13[1] = 0;
      *plVar13 = 0;
    }
    puVar14 = *(undefined8 **)(puVar12 + 0x38);
    FUN_109f658b0(puVar14,0xb0);
    if (puVar14 != (undefined8 *)0x0) {
      puVar14[0x13] = 0;
      puVar14[0x12] = 0;
      puVar14[0x15] = 0;
      puVar14[0x14] = 0;
      puVar14[0xf] = 0;
      puVar14[0xe] = 0;
      puVar14[0x11] = 0;
      puVar14[0x10] = 0;
      puVar14[0xb] = 0;
      puVar14[10] = 0;
      puVar14[0xd] = 0;
      puVar14[0xc] = 0;
      puVar14[7] = 0;
      puVar14[6] = 0;
      puVar14[9] = 0;
      puVar14[8] = 0;
      puVar14[3] = 0;
      puVar14[2] = 0;
      puVar14[5] = 0;
      puVar14[4] = 0;
      puVar14[1] = 0;
      *puVar14 = 0;
    }
    func_0x000109ea9960();
    plVar13[1] = 0;
    plVar13[2] = 0;
    *(undefined4 *)(plVar13 + 3) = 0;
    plVar13[4] = (long)&UNK_10e05d730;
    *plVar13 = (long)&PTR_DAT_110b640d0;
    plVar13[6] = (long)puVar14;
    FUN_109eab364(plVar13,plVar7);
    plVar7 = plVar13;
  }
  return plVar7;
}



/* Entry: 109ebdfc0; end: 109ebe0bf;  */

long * FUN_109ebdfc0(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  (**(code **)(*param_2 + 0x20))(param_2,*(undefined8 *)(param_1 + 0x38),0);
  if ((1 < *(byte *)(param_2[4] + 0xe)) && (*(byte *)(param_2[4] + 4) - 2 < 3)) {
    plVar1 = *(long **)(param_1 + 0x38);
    FUN_109f658b0(plVar1,0x38);
    if (plVar1 != (long *)0x0) {
      plVar1[6] = 0;
      plVar1[3] = 0;
      plVar1[2] = 0;
      plVar1[5] = 0;
      plVar1[4] = 0;
      plVar1[1] = 0;
      *plVar1 = 0;
    }
    puVar2 = *(undefined8 **)(param_1 + 0x38);
    FUN_109f658b0(puVar2,0xb0);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[0x13] = 0;
      puVar2[0x12] = 0;
      puVar2[0x15] = 0;
      puVar2[0x14] = 0;
      puVar2[0xf] = 0;
      puVar2[0xe] = 0;
      puVar2[0x11] = 0;
      puVar2[0x10] = 0;
      puVar2[0xb] = 0;
      puVar2[10] = 0;
      puVar2[0xd] = 0;
      puVar2[0xc] = 0;
      puVar2[7] = 0;
      puVar2[6] = 0;
      puVar2[9] = 0;
      puVar2[8] = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
    }
    func_0x000109ea9960();
    plVar1[1] = 0;
    plVar1[2] = 0;
    *(undefined4 *)(plVar1 + 3) = 0;
    plVar1[4] = (long)&UNK_10e05d730;
    *plVar1 = (long)&PTR_DAT_110b640d0;
    plVar1[6] = (long)puVar2;
    FUN_109eab364(plVar1,param_2);
    param_2 = plVar1;
  }
  return param_2;
}



/* Entry: 109ebe0c0; end: 109ebe2cf;  */

void FUN_109ebe0c0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  
  if (*(char *)(*(long *)(param_4 + 0x20) + 0xe) != '\0') {
    uVar7 = 0;
    do {
      puVar2 = *(undefined8 **)(param_1 + 0x38);
      FUN_109f658b0(puVar2,0x58);
      if (puVar2 != (undefined8 *)0x0) {
        puVar2[10] = 0;
        puVar2[7] = 0;
        puVar2[6] = 0;
        puVar2[9] = 0;
        puVar2[8] = 0;
        puVar2[3] = 0;
        puVar2[2] = 0;
        puVar2[5] = 0;
        puVar2[4] = 0;
        puVar2[1] = 0;
        *puVar2 = 0;
      }
      lVar6 = param_1;
      FUN_109ebdfc0(param_1,param_3,0);
      lVar3 = param_1;
      FUN_109ebe7cc(param_1,param_4,uVar7,0);
      func_0x000109ea9448(puVar2,0x82,lVar6,lVar3);
      if (1 < *(byte *)(*(long *)(param_3 + 0x20) + 0xe)) {
        uVar8 = 1;
        puVar5 = puVar2;
        do {
          puVar4 = *(undefined8 **)(param_1 + 0x38);
          FUN_109f658b0(puVar4,0x58);
          if (puVar4 != (undefined8 *)0x0) {
            puVar4[10] = 0;
            puVar4[7] = 0;
            puVar4[6] = 0;
            puVar4[9] = 0;
            puVar4[8] = 0;
            puVar4[3] = 0;
            puVar4[2] = 0;
            puVar4[5] = 0;
            puVar4[4] = 0;
            puVar4[1] = 0;
            *puVar4 = 0;
          }
          lVar6 = param_1;
          FUN_109ebdfc0(param_1,param_3,uVar8);
          lVar3 = param_1;
          FUN_109ebe7cc(param_1,param_4,uVar7,uVar8);
          func_0x000109ea9448(puVar4,0x82,lVar6,lVar3);
          puVar2 = *(undefined8 **)(param_1 + 0x38);
          FUN_109f658b0(puVar2,0x58);
          if (puVar2 != (undefined8 *)0x0) {
            puVar2[10] = 0;
            puVar2[7] = 0;
            puVar2[6] = 0;
            puVar2[9] = 0;
            puVar2[8] = 0;
            puVar2[3] = 0;
            puVar2[2] = 0;
            puVar2[5] = 0;
            puVar2[4] = 0;
            puVar2[1] = 0;
            *puVar2 = 0;
          }
          func_0x000109ea9448(puVar2,0x7b,puVar5,puVar4);
          uVar8 = uVar8 + 1;
          puVar5 = puVar2;
        } while (uVar8 < *(byte *)(*(long *)(param_3 + 0x20) + 0xe));
      }
      puVar5 = *(undefined8 **)(param_1 + 0x38);
      FUN_109f658b0(puVar5,0x38);
      if (puVar5 != (undefined8 *)0x0) {
        puVar5[6] = 0;
        puVar5[3] = 0;
        puVar5[2] = 0;
        puVar5[5] = 0;
        puVar5[4] = 0;
        puVar5[1] = 0;
        *puVar5 = 0;
      }
      lVar6 = param_1;
      FUN_109ebdfc0(param_1,param_2,uVar7);
      func_0x000109ea9180(puVar5,lVar6,puVar2);
      lVar6 = *(long *)(param_1 + 8);
      puVar5[1] = lVar6 + 8;
      plVar1 = (long *)0x0;
      if (puVar5 != (undefined8 *)0x0) {
        plVar1 = puVar5 + 1;
      }
      puVar2 = *(undefined8 **)(lVar6 + 0x10);
      puVar5[2] = puVar2;
      *puVar2 = plVar1;
      *(long **)(lVar6 + 0x10) = plVar1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(byte *)(*(long *)(param_4 + 0x20) + 0xe));
  }
  return;
}



/* Entry: 109ebe2d0; end: 109ebe5ef;  */

void FUN_109ebe2d0(long param_1,long *param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  
  puVar2 = *(undefined8 **)(param_1 + 0x38);
  FUN_109f658b0(puVar2,0x58);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[10] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  lVar6 = param_1;
  FUN_109ebdfc0(param_1,param_3,0);
  lVar3 = param_1;
  FUN_109ebe7cc(param_1,param_4,0,0);
  func_0x000109ea9448(puVar2,0x82,lVar6,lVar3);
  if (1 < *(byte *)(*(long *)(param_3 + 0x20) + 0xe)) {
    uVar7 = 1;
    do {
      puVar4 = *(undefined8 **)(param_1 + 0x38);
      FUN_109f658b0(puVar4,0x58);
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[10] = 0;
        puVar4[7] = 0;
        puVar4[6] = 0;
        puVar4[9] = 0;
        puVar4[8] = 0;
        puVar4[3] = 0;
        puVar4[2] = 0;
        puVar4[5] = 0;
        puVar4[4] = 0;
        puVar4[1] = 0;
        *puVar4 = 0;
      }
      lVar6 = param_1;
      FUN_109ebdfc0(param_1,param_3,uVar7);
      lVar3 = param_1;
      FUN_109ebe7cc(param_1,param_4,0,uVar7);
      func_0x000109ea9448(puVar4,0x82,lVar6,lVar3);
      puVar5 = *(undefined8 **)(param_1 + 0x38);
      FUN_109f658b0(puVar5,0x58);
      if (puVar5 != (undefined8 *)0x0) {
        puVar5[10] = 0;
        puVar5[7] = 0;
        puVar5[6] = 0;
        puVar5[9] = 0;
        puVar5[8] = 0;
        puVar5[3] = 0;
        puVar5[2] = 0;
        puVar5[5] = 0;
        puVar5[4] = 0;
        puVar5[1] = 0;
        *puVar5 = 0;
      }
      func_0x000109ea9448(puVar5,0x7b,puVar2,puVar4);
      uVar7 = uVar7 + 1;
      puVar2 = puVar5;
    } while (uVar7 < *(byte *)(*(long *)(param_3 + 0x20) + 0xe));
  }
  (**(code **)(*param_2 + 0x20))(param_2,*(undefined8 *)(param_1 + 0x38),0);
  puVar2 = *(undefined8 **)(param_1 + 0x38);
  FUN_109f658b0(puVar2,0x38);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[6] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  func_0x000109ea9180();
  lVar6 = *(long *)(param_1 + 8);
  puVar2[1] = lVar6 + 8;
  plVar1 = (long *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    plVar1 = puVar2 + 1;
  }
  puVar4 = *(undefined8 **)(lVar6 + 0x10);
  puVar2[2] = puVar4;
  *puVar4 = plVar1;
  *(long **)(lVar6 + 0x10) = plVar1;
  return;
}



/* Entry: 109ebe5f0; end: 109ebe7cb;  */

undefined8 * FUN_109ebe5f0(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined ***pppuVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  ulong unaff_x23;
  undefined8 *unaff_x24;
  undefined **unaff_x27;
  undefined *unaff_x28;
  undefined **ppuStack_1e0;
  long *plStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 uStack_1c0;
  undefined7 uStack_1bf;
  undefined1 uStack_1b8;
  undefined8 uStack_1b7;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined **ppuStack_180;
  long *plStack_178;
  code *pcStack_170;
  code *pcStack_168;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined8 *puStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined *puStack_120;
  undefined **ppuStack_118;
  undefined8 *puStack_110;
  ulong uStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  undefined8 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  int iStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_1;
  puVar3 = param_4;
  if (*(char *)(param_4[4] + 0xe) != '\0') {
    unaff_x23 = 0;
    unaff_x28 = &UNK_10e05d730;
    unaff_x27 = &PTR_DAT_110b641e0;
    do {
      plVar10 = param_2;
      (**(code **)(*param_2 + 0x20))(param_2,param_1[7],0);
      unaff_x24 = (undefined8 *)param_1[7];
      FUN_109f658b0(unaff_x24,0x38);
      if (unaff_x24 != (undefined8 *)0x0) {
        unaff_x24[6] = 0;
        unaff_x24[3] = 0;
        unaff_x24[2] = 0;
        unaff_x24[5] = 0;
        unaff_x24[4] = 0;
        unaff_x24[1] = 0;
        *unaff_x24 = 0;
      }
      unaff_x24[1] = 0;
      unaff_x24[2] = 0;
      *(undefined4 *)(unaff_x24 + 3) = 5;
      *unaff_x24 = &PTR_DAT_110b641e0;
      unaff_x24[4] = &UNK_10e05d730;
      unaff_x24[5] = plVar10;
      uStack_74 = 0;
      uStack_70 = 0;
      iStack_78 = (int)unaff_x23;
      func_0x000109eab760(unaff_x24,&iStack_78,1);
      puVar2 = (undefined8 *)param_1[7];
      FUN_109f658b0(puVar2,0x58);
      if (puVar2 != (undefined8 *)0x0) {
        puVar2[10] = 0;
        puVar2[7] = 0;
        puVar2[6] = 0;
        puVar2[9] = 0;
        puVar2[8] = 0;
        puVar2[3] = 0;
        puVar2[2] = 0;
        puVar2[5] = 0;
        puVar2[4] = 0;
        puVar2[1] = 0;
        *puVar2 = 0;
      }
      plVar10 = param_3;
      (**(code **)(*param_3 + 0x20))(param_3,param_1[7],0);
      puVar3 = param_1;
      FUN_109ebdfc0(param_1,param_4,unaff_x23);
      func_0x000109ea9448(puVar2,0x97,plVar10);
      puVar2 = (undefined8 *)param_1[7];
      FUN_109f658b0(puVar2,0x38);
      if (puVar2 != (undefined8 *)0x0) {
        puVar2[6] = 0;
        puVar2[3] = 0;
        puVar2[2] = 0;
        puVar2[5] = 0;
        puVar2[4] = 0;
        puVar2[1] = 0;
        *puVar2 = 0;
      }
      func_0x000109ea9180();
      lVar9 = param_1[1];
      puVar2[1] = lVar9 + 8;
      plVar10 = (long *)0x0;
      if (puVar2 != (undefined8 *)0x0) {
        plVar10 = puVar2 + 1;
      }
      puVar13 = *(undefined8 **)(lVar9 + 0x10);
      puVar2[2] = puVar13;
      *puVar13 = plVar10;
      *(long **)(lVar9 + 0x10) = plVar10;
      uVar1 = (int)unaff_x23 + 1;
      unaff_x23 = (ulong)uVar1;
      unaff_x19 = param_4;
      unaff_x20 = param_3;
      unaff_x21 = param_2;
      unaff_x22 = param_1;
    } while (uVar1 < *(byte *)(param_4[4] + 0xe));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_88 = FUN_109ebe7cc;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = puVar2;
  puStack_b0 = unaff_x22;
  plStack_a8 = unaff_x21;
  plStack_a0 = unaff_x20;
  puStack_98 = unaff_x19;
  puStack_90 = &stack0xfffffffffffffff0;
  FUN_109ebdfc0();
  puVar2 = (undefined8 *)puVar2[7];
  FUN_109f658b0(puVar2,0x38);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[6] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  puVar2[1] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 3) = 5;
  *puVar2 = &PTR_DAT_110b641e0;
  puVar2[4] = &UNK_10e05d730;
  puVar2[5] = puVar13;
  uStack_c8 = SUB84(puVar3,0);
  uStack_c4 = 0;
  uStack_c0 = 0;
  puVar8 = (undefined8 *)&uStack_c8;
  puVar4 = puVar2;
  func_0x000109eab760(puVar2,puVar8,1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pppuVar7 = &ppuStack_1e0;
  pcStack_d8 = FUN_109ebe898;
  uStack_1b7 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1bf = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  plStack_1d8 = (long *)0x0;
  ppuStack_1e0 = &PTR_FUN_110b652b8;
  uVar5 = 0;
  puStack_120 = unaff_x28;
  ppuStack_118 = unaff_x27;
  puStack_110 = unaff_x24;
  uStack_108 = unaff_x23;
  puStack_100 = unaff_x22;
  puStack_f8 = puVar13;
  puStack_f0 = puVar3;
  puStack_e8 = puVar2;
  ppuStack_e0 = &puStack_90;
  FUN_109f6695c(0,0x109f65648,FUN_109f65684);
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_150 = 0;
  ppuStack_180 = &PTR_FUN_110b65578;
  puStack_148 = (undefined8 *)0x0;
  lStack_140 = 0;
  uStack_138 = 0;
  pcStack_170 = FUN_109ebf1ec;
  pcStack_168 = FUN_109ebf39c;
  uStack_160 = SUB81(&ppuStack_180,0);
  uStack_15f = (undefined7)((ulong)&ppuStack_180 >> 8);
  plVar10 = *(long **)*puVar8;
  plVar11 = (long *)*puVar8;
  uStack_1a8 = uVar5;
  puStack_188 = puVar4;
  uStack_158 = uStack_160;
  uStack_157 = uStack_15f;
  uStack_130 = uVar5;
  puStack_128 = puVar4;
  if (plVar10 == (long *)0x0) {
LAB_109ebe978:
    plStack_178 = (long *)0x0;
  }
  else {
    while( true ) {
      plVar6 = plVar10;
      lVar9 = *plVar6;
      plVar11 = plVar11 + -1;
      plStack_178 = plVar11;
      (**(code **)(*plVar11 + 0x18))(plVar11,&ppuStack_180);
      if ((int)plVar11 != 0) break;
      if (lVar9 == 0) goto LAB_109ebe978;
      plVar10 = (long *)*plVar6;
      plVar11 = plVar6;
    }
  }
  puVar3 = puStack_148;
  ppuStack_180 = &PTR_FUN_110b65578;
  lVar9 = lStack_140;
  if (puStack_148 != (undefined8 *)0x0) {
    for (; (undefined8 *)lVar9 != puVar3; lVar9 = lVar9 + -0x28) {
      if (*(long *)(lVar9 + -0x18) != 0) {
        *(long *)(lVar9 + -0x10) = *(long *)(lVar9 + -0x18);
        __ZdlPv();
      }
    }
    lStack_140 = (long)puVar3;
    __ZdlPv(puStack_148);
  }
  plVar10 = plStack_1d8;
  plVar11 = *(long **)*puVar8;
  plVar6 = (long *)*puVar8;
  plStack_1d8 = plVar10;
  if (plVar11 != (long *)0x0) {
    while( true ) {
      plVar12 = plVar11;
      lVar9 = *plVar12;
      plVar6 = plVar6 + -1;
      plStack_1d8 = plVar6;
      (**(code **)(*plVar6 + 0x18))(plVar6,&ppuStack_1e0);
      if (((int)plVar6 != 0) || (plStack_1d8 = plVar10, lVar9 == 0)) break;
      plVar11 = (long *)*plVar12;
      plVar6 = plVar12;
    }
  }
  uStack_157 = 0;
  uStack_150 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_15f = 0;
  pcStack_168 = (code *)0x0;
  pcStack_170 = (code *)0x0;
  plStack_178 = (long *)0x0;
  ppuStack_180 = &PTR_FUN_110b656d0;
  uVar5 = 0;
  puStack_148 = puVar4;
  FUN_109f6695c(0,0x109f65648,FUN_109f65684);
  plVar10 = *(long **)*puVar8;
  plVar11 = (long *)*puVar8;
  lStack_140 = uVar5;
  if (plVar10 == (long *)0x0) {
LAB_109ebea7c:
    plStack_178 = (long *)0x0;
  }
  else {
    while( true ) {
      plVar6 = plVar10;
      lVar9 = *plVar6;
      plVar11 = plVar11 + -1;
      plStack_178 = plVar11;
      (**(code **)(*plVar11 + 0x18))(plVar11,&ppuStack_180);
      if ((int)plVar11 != 0) break;
      if (lVar9 == 0) goto LAB_109ebea7c;
      plVar10 = (long *)*plVar6;
      plVar11 = plVar6;
    }
  }
  ppuStack_180 = &PTR_FUN_110b656d0;
  func_0x000109f66a2c(lStack_140,0);
  func_0x000109ebeb28(&ppuStack_1e0);
  return pppuVar7;
}



/* Entry: 109ebe7cc; end: 109ebe897;  */

undefined8 * FUN_109ebe7cc(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined ***pppuVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined **ppuStack_160;
  long *plStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  undefined1 uStack_138;
  undefined8 uStack_137;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined **ppuStack_100;
  long *plStack_f8;
  code *pcStack_f0;
  code *pcStack_e8;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined8 *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = param_1;
  FUN_109ebdfc0();
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  FUN_109f658b0(puVar1,0x38);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[6] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 3) = 5;
  *puVar1 = &PTR_DAT_110b641e0;
  puVar1[4] = &UNK_10e05d730;
  puVar1[5] = lVar10;
  uStack_44 = 0;
  uStack_40 = 0;
  puVar6 = (undefined8 *)&uStack_48;
  puVar2 = puVar1;
  uStack_48 = param_4;
  func_0x000109eab760(puVar1,puVar6,1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pppuVar5 = &ppuStack_160;
  uStack_137 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_13f = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  plStack_158 = (long *)0x0;
  ppuStack_160 = &PTR_FUN_110b652b8;
  uVar3 = 0;
  FUN_109f6695c(0,0x109f65648,FUN_109f65684);
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_d0 = 0;
  ppuStack_100 = &PTR_FUN_110b65578;
  puStack_c8 = (undefined8 *)0x0;
  lStack_c0 = 0;
  uStack_b8 = 0;
  pcStack_f0 = FUN_109ebf1ec;
  pcStack_e8 = FUN_109ebf39c;
  uStack_e0 = 0;
  uStack_df = (undefined7)((ulong)&ppuStack_100 >> 8);
  plVar7 = *(long **)*puVar6;
  plVar8 = (long *)*puVar6;
  uStack_128 = uVar3;
  puStack_108 = puVar2;
  uStack_d8 = uStack_e0;
  uStack_d7 = uStack_df;
  uStack_b0 = uVar3;
  puStack_a8 = puVar2;
  if (plVar7 == (long *)0x0) {
LAB_109ebe978:
    plStack_f8 = (long *)0x0;
  }
  else {
    while( true ) {
      plVar4 = plVar7;
      lVar10 = *plVar4;
      plVar8 = plVar8 + -1;
      plStack_f8 = plVar8;
      (**(code **)(*plVar8 + 0x18))(plVar8,&ppuStack_100);
      if ((int)plVar8 != 0) break;
      if (lVar10 == 0) goto LAB_109ebe978;
      plVar7 = (long *)*plVar4;
      plVar8 = plVar4;
    }
  }
  puVar1 = puStack_c8;
  ppuStack_100 = &PTR_FUN_110b65578;
  lVar10 = lStack_c0;
  if (puStack_c8 != (undefined8 *)0x0) {
    for (; (undefined8 *)lVar10 != puVar1; lVar10 = lVar10 + -0x28) {
      if (*(long *)(lVar10 + -0x18) != 0) {
        *(long *)(lVar10 + -0x10) = *(long *)(lVar10 + -0x18);
        __ZdlPv();
      }
    }
    lStack_c0 = (long)puVar1;
    __ZdlPv(puStack_c8);
  }
  plVar7 = plStack_158;
  plVar8 = *(long **)*puVar6;
  plVar4 = (long *)*puVar6;
  plStack_158 = plVar7;
  if (plVar8 != (long *)0x0) {
    while( true ) {
      plVar9 = plVar8;
      lVar10 = *plVar9;
      plVar4 = plVar4 + -1;
      plStack_158 = plVar4;
      (**(code **)(*plVar4 + 0x18))(plVar4,&ppuStack_160);
      if (((int)plVar4 != 0) || (plStack_158 = plVar7, lVar10 == 0)) break;
      plVar8 = (long *)*plVar9;
      plVar4 = plVar9;
    }
  }
  uStack_d7 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_df = 0;
  pcStack_e8 = (code *)0x0;
  pcStack_f0 = (code *)0x0;
  plStack_f8 = (long *)0x0;
  ppuStack_100 = &PTR_FUN_110b656d0;
  uVar3 = 0;
  puStack_c8 = puVar2;
  FUN_109f6695c(0,0x109f65648,FUN_109f65684);
  plVar7 = *(long **)*puVar6;
  plVar8 = (long *)*puVar6;
  lStack_c0 = uVar3;
  if (plVar7 == (long *)0x0) {
LAB_109ebea7c:
    plStack_f8 = (long *)0x0;
  }
  else {
    while( true ) {
      plVar4 = plVar7;
      lVar10 = *plVar4;
      plVar8 = plVar8 + -1;
      plStack_f8 = plVar8;
      (**(code **)(*plVar8 + 0x18))(plVar8,&ppuStack_100);
      if ((int)plVar8 != 0) break;
      if (lVar10 == 0) goto LAB_109ebea7c;
      plVar7 = (long *)*plVar4;
      plVar8 = plVar4;
    }
  }
  ppuStack_100 = &PTR_FUN_110b656d0;
  func_0x000109f66a2c(lStack_c0,0);
  func_0x000109ebeb28(&ppuStack_160);
  return pppuVar5;
}



/* Entry: 109ebe898; end: 109ebeaef;  */

void FUN_109ebe898(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined **ppuStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  undefined1 uStack_e8;
  undefined8 uStack_e7;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  long *plStack_a8;
  code *pcStack_a0;
  code *pcStack_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_e7 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_ef = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  plStack_108 = (long *)0x0;
  ppuStack_110 = &PTR_FUN_110b652b8;
  uVar2 = 0;
  FUN_109f6695c(0,0x109f65648,FUN_109f65684);
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_80 = 0;
  ppuStack_b0 = &PTR_FUN_110b65578;
  lStack_78 = 0;
  lStack_70 = 0;
  uStack_68 = 0;
  pcStack_a0 = FUN_109ebf1ec;
  pcStack_98 = FUN_109ebf39c;
  uStack_90 = SUB81(&ppuStack_b0,0);
  uStack_8f = (undefined7)((ulong)&ppuStack_b0 >> 8);
  plVar4 = *(long **)*param_2;
  plVar5 = (long *)*param_2;
  uStack_d8 = uVar2;
  uStack_b8 = param_1;
  uStack_88 = uStack_90;
  uStack_87 = uStack_8f;
  uStack_60 = uVar2;
  uStack_58 = param_1;
  if (plVar4 == (long *)0x0) {
LAB_109ebe978:
    plStack_a8 = (long *)0x0;
  }
  else {
    while( true ) {
      plVar3 = plVar4;
      lVar7 = *plVar3;
      plVar5 = plVar5 + -1;
      plStack_a8 = plVar5;
      (**(code **)(*plVar5 + 0x18))(plVar5,&ppuStack_b0);
      if ((int)plVar5 != 0) break;
      if (lVar7 == 0) goto LAB_109ebe978;
      plVar4 = (long *)*plVar3;
      plVar5 = plVar3;
    }
  }
  lVar1 = lStack_78;
  ppuStack_b0 = &PTR_FUN_110b65578;
  lVar7 = lStack_70;
  if (lStack_78 != 0) {
    for (; lVar7 != lVar1; lVar7 = lVar7 + -0x28) {
      if (*(long *)(lVar7 + -0x18) != 0) {
        *(long *)(lVar7 + -0x10) = *(long *)(lVar7 + -0x18);
        __ZdlPv();
      }
    }
    lStack_70 = lVar1;
    __ZdlPv(lStack_78);
  }
  plVar4 = plStack_108;
  plVar5 = *(long **)*param_2;
  plVar3 = (long *)*param_2;
  plStack_108 = plVar4;
  if (plVar5 != (long *)0x0) {
    while( true ) {
      plVar6 = plVar5;
      lVar7 = *plVar6;
      plVar3 = plVar3 + -1;
      plStack_108 = plVar3;
      (**(code **)(*plVar3 + 0x18))(plVar3,&ppuStack_110);
      if (((int)plVar3 != 0) || (plStack_108 = plVar4, lVar7 == 0)) break;
      plVar5 = (long *)*plVar6;
      plVar3 = plVar6;
    }
  }
  uStack_87 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_8f = 0;
  pcStack_98 = (code *)0x0;
  pcStack_a0 = (code *)0x0;
  plStack_a8 = (long *)0x0;
  ppuStack_b0 = &PTR_FUN_110b656d0;
  uVar2 = 0;
  lStack_78 = param_1;
  FUN_109f6695c(0,0x109f65648,FUN_109f65684);
  plVar4 = *(long **)*param_2;
  plVar5 = (long *)*param_2;
  lStack_70 = uVar2;
  if (plVar4 == (long *)0x0) {
LAB_109ebea7c:
    plStack_a8 = (long *)0x0;
  }
  else {
    while( true ) {
      plVar3 = plVar4;
      lVar7 = *plVar3;
      plVar5 = plVar5 + -1;
      plStack_a8 = plVar5;
      (**(code **)(*plVar5 + 0x18))(plVar5,&ppuStack_b0);
      if ((int)plVar5 != 0) break;
      if (lVar7 == 0) goto LAB_109ebea7c;
      plVar4 = (long *)*plVar3;
      plVar5 = plVar3;
    }
  }
  ppuStack_b0 = &PTR_FUN_110b656d0;
  func_0x000109f66a2c(lStack_70,0);
  func_0x000109ebeb28(&ppuStack_110);
  return;
}



/* Entry: 109ebeaf0; end: 109ebebb3;  */

undefined8 * FUN_109ebeaf0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b656d0;
  func_0x000109f66a2c(param_1[8],0);
  return param_1;
}



/* Entry: 109ebebb4; end: 109ebed8b;  */

undefined8 FUN_109ebebb4(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  FUN_109eb6f5c();
  plVar2 = *(long **)(param_2 + 0x20);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x40))();
  }
  plVar6 = *(long **)(param_2 + 0x28);
  if ((((*(int *)((long)plVar6 + 0x4c) == 0x16) || (plVar6[0xe] == 0)) ||
      (*(int *)((long)plVar6 + 0x4c) != 0 || plVar2 == (long *)0x0)) ||
     ((*(ushort *)((long)plVar2 + 0x44) >> 4 & 1) == 0)) {
    return 0;
  }
  lVar7 = *(long *)(param_1 + 0x40);
  if (lVar7 == 0) {
    uVar4 = 0;
    FUN_109f64c74(0,0x109f65648,FUN_109f65684);
    *(undefined8 *)(param_1 + 0x40) = uVar4;
    uVar4 = 0;
    FUN_109f64c74(0,0x109f65648,FUN_109f65684);
    *(undefined8 *)(param_1 + 0x48) = uVar4;
    puVar3 = (undefined8 *)0x30;
    _malloc();
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      puVar3[4] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3 = puVar3 + 6;
    }
    *(undefined8 **)(param_1 + 0x50) = puVar3;
  }
  else {
    plVar2 = plVar6;
    (**(code **)(lVar7 + 8))(plVar6);
    FUN_109f64fdc(lVar7,plVar2,plVar6);
    if (lVar7 != 0) {
      plVar2 = *(long **)(lVar7 + 0x10);
      goto LAB_109ebed64;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    puVar3 = *(undefined8 **)(param_1 + 0x50);
  }
  plVar2 = plVar6;
  (**(code **)(*plVar6 + 0x20))(plVar6,puVar3,uVar4);
  uVar4 = *(undefined8 *)(plVar6[0xf] + 0x20);
  _strcmp(uVar4,&UNK_10f491672);
  if ((int)uVar4 != 0) {
    plVar5 = (long *)plVar2[5];
    for (plVar1 = (long *)*(long *)plVar2[5]; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if ((*(ushort *)((long)plVar5 + 0x3c) & 0x18) == 0) {
        *(ushort *)((long)plVar5 + 0x3c) = *(ushort *)((long)plVar5 + 0x3c) | 0x10;
      }
      plVar5 = plVar1;
    }
  }
  FUN_109ebe898(*(undefined8 *)(param_1 + 0x58),plVar2 + 10);
  func_0x000109f64f34(*(undefined8 *)(param_1 + 0x48),0);
  lVar7 = *(long *)(param_1 + 0x40);
  plVar5 = plVar6;
  (**(code **)(lVar7 + 8))(plVar6);
  func_0x000109f650c0(lVar7,plVar5,plVar6,plVar2);
LAB_109ebed64:
  *(long **)(param_2 + 0x28) = plVar2;
  FUN_109ec37dc(param_2,param_2);
  lVar7 = *(long *)(param_2 + 8);
  plVar2 = *(long **)(param_2 + 0x10);
  *(long **)(lVar7 + 8) = plVar2;
  *plVar2 = lVar7;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  return 1;
}



/* Entry: 109ebed8c; end: 109ebf0bb;  */

void FUN_109ebed8c(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  lVar3 = *param_2;
  if (lVar3 != 0) {
    lVar4 = *(long *)(param_1 + 0x38);
    lVar1 = lVar3;
    (**(code **)(lVar4 + 0x10))(lVar3);
    FUN_109f66ba8(lVar4,lVar1,lVar3);
    if (lVar4 != 0) {
      lVar3 = *(long *)(param_1 + 0x38);
      *(undefined **)(lVar4 + 8) = &UNK_10e47dcd0;
      uVar5 = *(undefined8 *)(lVar3 + 0x40);
      *(ulong *)(lVar3 + 0x40) = CONCAT44((int)((ulong)uVar5 >> 0x20) + 1,(int)uVar5 + -1);
      plVar2 = (long *)*param_2;
      if ((plVar2 == (long *)0x0) || (2 < *(uint *)(plVar2 + 3))) {
        uStack_3f = 0;
        uStack_40 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_48 = 0;
        uStack_47 = 0;
        uStack_50 = 0;
        ppuStack_68 = &PTR_FUN_110b65418;
        (**(code **)(*plVar2 + 0x18))(plVar2,&ppuStack_68);
        func_0x000109ebee70();
        if (*(char *)(*(long *)(*param_2 + 0x20) + 4) != '\v') {
          lVar3 = 1;
          func_0x000109ebef74();
          *param_2 = lVar3;
        }
      }
    }
  }
  return;
}



/* Entry: 109ebf0bc; end: 109ebf0db;  */

undefined8 FUN_109ebf0bc(void)

{
  return 1;
}



/* Entry: 109ebf0dc; end: 109ebf177;  */

/* WARNING: Possible PIC construction at 0x000109ec6d10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109ec6d14) */
/* WARNING: Removing unreachable block (ram,0x000109ec6d60) */
/* WARNING: Removing unreachable block (ram,0x000109ec6d84) */
/* WARNING: Removing unreachable block (ram,0x000109ec6d9c) */
/* WARNING: Removing unreachable block (ram,0x000109ec6dcc) */
/* WARNING: Removing unreachable block (ram,0x000109ec6de0) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e88) */
/* WARNING: Removing unreachable block (ram,0x000109ec6dec) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e98) */
/* WARNING: Removing unreachable block (ram,0x000109ec6eac) */
/* WARNING: Removing unreachable block (ram,0x000109ec6eec) */
/* WARNING: Removing unreachable block (ram,0x000109ec6efc) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f10) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f5c) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f64) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f84) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f94) */
/* WARNING: Removing unreachable block (ram,0x000109ec6fc8) */

undefined * FUN_109ebf0dc(undefined4 *param_1,long param_2)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined4 **ppuVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  long lVar16;
  undefined **ppuVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined **ppuVar23;
  undefined8 unaff_x19;
  ulong unaff_x20;
  undefined *puVar24;
  ulong unaff_x21;
  int iVar25;
  undefined8 unaff_x22;
  ulong unaff_x23;
  ulong uVar26;
  uint uVar27;
  ulong unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined4 *puStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar27 = *(uint *)(param_2 + 4);
  if ((uVar27 & 0xff) != 0x13) {
    puVar2 = (uint *)(&UNK_10e06c010 + (ulong)(byte)uVar27 * 4);
    if ((int)param_1 != 0) {
      puVar2 = (uint *)(&UNK_10e06bff8 + (ulong)(uVar27 + 0xfd & 0xff) * 4);
    }
    uVar3 = *puVar2;
    uVar9 = (ulong)uVar3;
    bVar5 = *(byte *)(param_2 + 0xd);
    uVar20 = (ulong)bVar5;
    bVar6 = *(byte *)(param_2 + 0xe);
    uVar21 = (ulong)bVar6;
    puVar8 = (undefined1 *)register0x00000008;
    uVar19 = (ulong)*(uint *)(param_2 + 0x28);
    uVar7 = (ulong)(uVar27 >> 0x18 & 1);
    do {
      uVar22 = uVar7;
      uVar26 = uVar19;
      *(undefined8 *)(puVar8 + -0x60) = unaff_x28;
      *(undefined8 *)(puVar8 + -0x58) = unaff_x27;
      *(undefined8 *)(puVar8 + -0x50) = unaff_x26;
      *(ulong *)(puVar8 + -0x48) = unaff_x25;
      *(ulong *)(puVar8 + -0x40) = unaff_x24;
      *(ulong *)(puVar8 + -0x38) = unaff_x23;
      *(undefined8 *)(puVar8 + -0x30) = unaff_x22;
      *(ulong *)(puVar8 + -0x28) = unaff_x21;
      *(ulong *)(puVar8 + -0x20) = unaff_x20;
      *(undefined8 *)(puVar8 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar8 + -0x10) = unaff_x29;
      *(undefined8 *)(puVar8 + -8) = unaff_x30;
      unaff_x29 = puVar8 + -0x10;
      *(undefined8 *)(puVar8 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      if (uVar3 == 0x14) {
        puVar24 = &DAT_10e05d768;
        uVar9 = unaff_x20;
        uVar21 = unaff_x21;
        uVar26 = unaff_x23;
        uVar20 = unaff_x24;
LAB_109ec6fd4:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(puVar8 + -0x70)) {
          ___stack_chk_fail();
          *(ulong *)(puVar8 + -0x180) = uVar20;
          *(ulong *)(puVar8 + -0x178) = uVar26;
          *(undefined **)(puVar8 + -0x170) = puVar24;
          *(ulong *)(puVar8 + -0x168) = uVar21;
          *(ulong *)(puVar8 + -0x160) = uVar9;
          *(undefined8 *)(puVar8 + -0x158) = unaff_x19;
          *(undefined1 **)(puVar8 + -0x150) = unaff_x29;
          *(code **)(puVar8 + -0x148) = FUN_109ec72ac;
          ppuVar23 = &PTR___tlv_bootstrap_11340ddb0;
          if ((bRam00000001132ff008 & 1) == 0) {
            ppuVar17 = ppuVar23;
            (*(code *)PTR___tlv_bootstrap_11340ddb0)();
            *ppuVar17 = (undefined *)0x1132ff008;
            ppuVar17[1] = FUN_109f67048;
            _pthread_once(0x1132ff010,0x109f686dc);
            bRam00000001132ff008 = 1;
          }
          _pthread_mutex_lock(0x1132ff020);
          if (iRam0000000113834740 == 0) {
            puVar18 = (undefined8 *)0x30;
            _malloc();
            puVar11 = puVar18;
            if (puVar18 != (undefined8 *)0x0) {
              puVar18[4] = 0;
              puVar11 = puVar18 + 6;
              puVar18[1] = 0;
              *puVar18 = 0;
              puVar18[3] = 0;
              puVar18[2] = 0;
            }
            *(undefined4 *)(puVar8 + -0x184) = 0;
            puRam0000000113834730 = puVar11;
            FUN_109f6658c();
            puRam0000000113834738 = puVar11;
          }
          iRam0000000113834740 = iRam0000000113834740 + 1;
          if ((bRam00000001132ff008 & 1) == 0) {
            (*(code *)PTR___tlv_bootstrap_11340ddb0)();
            *ppuVar23 = (undefined *)0x1132ff008;
            ppuVar23[1] = FUN_109f67048;
            _pthread_once(0x1132ff010,0x109f686dc);
            bRam00000001132ff008 = 1;
          }
          puVar24 = (undefined *)0x1132ff020;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__pthread_mutex_unlock_11034c918)(0x1132ff020);
          return puVar24;
        }
        return puVar24;
      }
      if ((int)uVar26 == 0) {
        uVar27 = (uint)bVar5;
        if (bVar6 == 1) {
          switch(uVar9) {
          case 0:
            if (uVar27 == 8) {
              uVar20 = 6;
            }
            else if (uVar27 == 0x10) {
              uVar20 = 7;
            }
            else if (uVar27 - 8 < 0xfffffff9) goto LAB_109ec7288;
            ppuVar23 = &PTR_DAT_110b66da8;
            break;
          case 1:
            if (uVar27 == 8) {
              uVar20 = 6;
            }
            else if (uVar27 == 0x10) {
              uVar20 = 7;
            }
            else if (uVar27 - 8 < 0xfffffff9) goto LAB_109ec7288;
            ppuVar23 = &PTR_DAT_110b66d70;
            break;
          case 2:
            if (uVar27 == 8) {
              uVar20 = 6;
            }
            else if (uVar27 == 0x10) {
              uVar20 = 7;
            }
            else if (uVar27 - 8 < 0xfffffff9) goto LAB_109ec7288;
            ppuVar23 = &PTR_DAT_110b66cc8;
            break;
          case 3:
            if (uVar27 == 8) {
              uVar20 = 6;
            }
            else if (uVar27 == 0x10) {
              uVar20 = 7;
            }
            else if (uVar27 - 8 < 0xfffffff9) goto LAB_109ec7288;
            ppuVar23 = &PTR_DAT_110b66d00;
            break;
          case 4:
            if (uVar27 == 8) {
              uVar20 = 6;
            }
            else if (uVar27 == 0x10) {
              uVar20 = 7;
            }
            else if (uVar27 - 8 < 0xfffffff9) goto LAB_109ec7288;
            ppuVar23 = &PTR_DAT_110b66d38;
            break;
          case 5:
            if (uVar27 == 8) {
              uVar20 = 6;
            }
            else if (uVar27 == 0x10) {
              uVar20 = 7;
            }
            else if (uVar27 - 8 < 0xfffffff9) goto LAB_109ec7288;
            ppuVar23 = &PTR_DAT_110b66f30;
            break;
          case 6:
            if (uVar27 == 8) {
              uVar20 = 6;
            }
            else if (uVar27 == 0x10) {
              uVar20 = 7;
            }
            else if (uVar27 - 8 < 0xfffffff9) goto LAB_109ec7288;
            ppuVar23 = &PTR_DAT_110b66ef8;
            break;
          case 7:
            if (uVar27 == 8) {
              uVar20 = 6;
            }
            else if (uVar27 == 0x10) {
              uVar20 = 7;
            }
            else if (uVar27 - 8 < 0xfffffff9) goto LAB_109ec7288;
            ppuVar23 = &PTR_DAT_110b66ec0;
            break;
          case 8:
            if (uVar27 == 8) {
              uVar20 = 6;
            }
            else if (uVar27 == 0x10) {
              uVar20 = 7;
            }
            else if (uVar27 - 8 < 0xfffffff9) goto LAB_109ec7288;
            ppuVar23 = &PTR_DAT_110b66e88;
            break;
          case 9:
            if (uVar27 == 8) {
              uVar20 = 6;
            }
            else if (uVar27 == 0x10) {
              uVar20 = 7;
            }
            else if (uVar27 - 8 < 0xfffffff9) goto LAB_109ec7288;
            ppuVar23 = &PTR_DAT_110b66e50;
            break;
          case 10:
            if (uVar27 == 8) {
              uVar20 = 6;
            }
            else if (uVar27 == 0x10) {
              uVar20 = 7;
            }
            else if (uVar27 - 8 < 0xfffffff9) goto LAB_109ec7288;
            ppuVar23 = &PTR_DAT_110b66e18;
            break;
          case 0xb:
            if (uVar27 == 8) {
              uVar20 = 6;
            }
            else if (uVar27 == 0x10) {
              uVar20 = 7;
            }
            else if (uVar27 - 8 < 0xfffffff9) goto LAB_109ec7288;
            ppuVar23 = &PTR_DAT_110b66de0;
            break;
          default:
LAB_109ec7288:
            puVar24 = &UNK_10e05d730;
            goto LAB_109ec6fd4;
          }
          puVar24 = ppuVar23[uVar20 - 1];
        }
        else {
          puVar24 = &UNK_10e05d730;
          if ((uVar3 - 5 < 0xfffffffd) || (uVar27 == 1)) goto LAB_109ec6fd4;
          uVar27 = ((uint)bVar6 * 3 + uVar27) - 8;
          if (uVar3 == 2) {
            if (8 < uVar27) goto LAB_109ec6fd4;
            ppuVar23 = &PTR_DAT_110b670d8;
          }
          else if (uVar3 == 3) {
            if (8 < uVar27) goto LAB_109ec6fd4;
            ppuVar23 = &PTR_DAT_110b67120;
          }
          else {
            if (8 < uVar27) goto LAB_109ec6fd4;
            ppuVar23 = &PTR_DAT_110b67090;
          }
          puVar24 = ppuVar23[uVar27];
        }
        goto LAB_109ec6fd4;
      }
      unaff_x30 = 0x109ec6d14;
      puVar8 = puVar8 + -0x140;
      uVar19 = 0;
      uVar7 = 0;
      unaff_x20 = uVar9;
      unaff_x21 = uVar21;
      unaff_x22 = 0;
      unaff_x23 = uVar26;
      unaff_x24 = uVar20;
      unaff_x25 = uVar22;
    } while( true );
  }
  FUN_109ebf0dc(param_1,*(undefined8 *)(param_2 + 0x30));
  if (*(char *)(param_2 + 4) == '\x13') {
    uVar19 = (ulong)*(uint *)(param_2 + 0x10);
  }
  else {
    uVar19 = 0xffffffff;
  }
  uVar27 = *(uint *)(param_2 + 0x28);
  uStack_68 = (ulong)uVar27;
  ppuVar10 = &puStack_78;
  puStack_78 = param_1;
  uStack_70 = uVar19;
  FUN_109f65414(ppuVar10,0x18);
  ppuVar23 = &PTR___tlv_bootstrap_11340ddb0;
  if ((bRam00000001132ff008 & 1) == 0) {
    (*(code *)PTR___tlv_bootstrap_11340ddb0)();
    *ppuVar23 = (undefined *)0x1132ff008;
    ppuVar23[1] = FUN_109f67048;
    _pthread_once(0x1132ff010,0x109f686dc);
    bRam00000001132ff008 = 1;
  }
  _pthread_mutex_lock(0x1132ff020);
  if (puRam0000000113834750 == (undefined8 *)0x0) {
    puVar11 = puRam0000000113834730;
    FUN_109f64c74(puRam0000000113834730,0x109ec7790,0x109eca4cc);
    puRam0000000113834750 = puVar11;
  }
  puVar18 = puRam0000000113834750;
  puVar12 = puRam0000000113834750;
  FUN_109f64fdc(puRam0000000113834750,ppuVar10,&puStack_78);
  puVar11 = puRam0000000113834738;
  if (puVar12 != (undefined8 *)0x0) goto LAB_109ec6c30;
  puVar12 = puRam0000000113834738;
  FUN_109f6650c(puRam0000000113834738,0x38);
  if (puVar12 != (undefined8 *)0x0) {
    puVar12[6] = 0;
    puVar12[3] = 0;
    puVar12[2] = 0;
    puVar12[5] = 0;
    puVar12[4] = 0;
    puVar12[1] = 0;
    *puVar12 = 0;
  }
  *(undefined2 *)((long)puVar12 + 4) = 0x1413;
  iVar25 = (int)uVar19;
  *(int *)(puVar12 + 2) = iVar25;
  uVar4 = param_1[0xb];
  *(uint *)(puVar12 + 5) = uVar27;
  *(undefined4 *)((long)puVar12 + 0x2c) = uVar4;
  puVar12[6] = param_1;
  *(undefined4 *)puVar12 = *param_1;
  if ((*(byte *)(param_1 + 3) >> 1 & 1) == 0) {
    FUN_109eca058();
    if (iVar25 == 0) goto LAB_109ec6b68;
LAB_109ec6b44:
    puVar24 = &UNK_10f6157f7;
  }
  else {
    param_1 = (undefined4 *)(&UNK_10e05bf38 + *(long *)(param_1 + 6));
    if (iVar25 != 0) goto LAB_109ec6b44;
LAB_109ec6b68:
    puVar24 = &UNK_10f6157f2;
  }
  puVar13 = puVar11;
  FUN_109f666b0(puVar11,puVar24);
  puVar14 = param_1;
  _strchr(param_1,0x5b);
  if (puVar14 != (undefined4 *)0x0) {
    lVar1 = (long)puVar13 + ((long)puVar14 - (long)param_1);
    puVar15 = puVar14;
    _strlen();
    lVar16 = lVar1;
    _strlen(lVar1);
    uVar19 = (ulong)(uint)((int)lVar16 - (int)puVar15);
    _memmove(lVar1,lVar1 + ((ulong)puVar15 & 0xffffffff),uVar19);
    _memcpy(lVar1 + uVar19,puVar14,(ulong)puVar15 & 0xffffffff);
  }
  puVar12[3] = puVar13;
  FUN_109f6650c(puVar11,0x18);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
  }
  puVar11[2] = uStack_68;
  puVar11[1] = uStack_70;
  *puVar11 = puStack_78;
  func_0x000109f650c0(puVar18,ppuVar10,puVar11,puVar12);
  puVar12 = puVar18;
LAB_109ec6c30:
  ppuVar23 = &PTR___tlv_bootstrap_11340ddb0;
  puVar24 = (undefined *)puVar12[2];
  if ((bRam00000001132ff008 & 1) == 0) {
    (*(code *)PTR___tlv_bootstrap_11340ddb0)();
    *ppuVar23 = (undefined *)0x1132ff008;
    ppuVar23[1] = FUN_109f67048;
    _pthread_once(0x1132ff010,0x109f686dc);
    bRam00000001132ff008 = 1;
  }
  _pthread_mutex_unlock(0x1132ff020);
  return puVar24;
}



/* Entry: 109ebf178; end: 109ebf1eb;  */

undefined8 * FUN_109ebf178(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_110b65578;
  lVar2 = param_1[7];
  if (lVar2 != 0) {
    lVar3 = param_1[8];
    lVar1 = lVar2;
    if (lVar3 != lVar2) {
      do {
        if (*(long *)(lVar3 + -0x18) != 0) {
          *(long *)(lVar3 + -0x10) = *(long *)(lVar3 + -0x18);
          __ZdlPv();
        }
        lVar3 = lVar3 + -0x28;
      } while (lVar3 != lVar2);
      lVar1 = param_1[7];
    }
    param_1[8] = lVar2;
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 109ebf1ec; end: 109ebf39b;  */

long ** FUN_109ebf1ec(long **param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long **pplVar9;
  long *plVar10;
  ulong uVar11;
  undefined4 uVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  undefined8 *puVar22;
  long lVar23;
  long *plVar24;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 *puStack_68;
  
  bVar4 = *(byte *)(param_2 + 0x30);
  plVar1 = *(long **)(param_2 + 0x40);
  plVar24 = *(long **)(param_2 + 0x48);
  if (plVar1 < plVar24) {
    *plVar1 = (long)param_1;
    *(uint *)(plVar1 + 1) = (uint)bVar4;
    plVar1[3] = 0;
    plVar1[4] = 0;
    plVar19 = plVar1 + 5;
    plVar1[2] = 0;
    goto LAB_109ebf370;
  }
  puVar22 = (undefined8 *)(param_2 + 0x38);
  plVar21 = (long *)*puVar22;
  uVar14 = ((long)plVar1 - (long)plVar21 >> 3) * -0x3333333333333333 + 1;
  if (uVar14 < 0x666666666666667) {
    lVar15 = (long)plVar24 - (long)plVar21 >> 3;
    uVar16 = lVar15 * -0x6666666666666666;
    if (uVar16 < uVar14 || uVar16 - uVar14 == 0) {
      uVar16 = uVar14;
    }
    if (0x333333333333332 < (ulong)(lVar15 * -0x3333333333333333)) {
      uVar16 = 0x666666666666666;
    }
    puStack_68 = puVar22;
    if (uVar16 == 0) {
      plVar6 = (long *)0x0;
    }
    else {
      if (0x666666666666666 < uVar16) goto LAB_109ebf398;
      plVar6 = (long *)(uVar16 * 0x28);
      __Znwm();
    }
    plStack_78 = (long *)((long)plVar6 + ((long)plVar1 - (long)plVar21));
    *plStack_78 = (long)param_1;
    *(uint *)(plStack_78 + 1) = (uint)bVar4;
    plStack_70 = plVar6 + uVar16 * 5;
    plStack_78[3] = 0;
    plStack_78[4] = 0;
    plStack_78[2] = 0;
    plStack_78 = plStack_78 + 5;
    plVar10 = plVar21;
    plVar13 = plVar6;
    plVar19 = plStack_78;
    if (plVar21 != plVar1) {
      do {
        lVar15 = *plVar10;
        *(int *)(plVar13 + 1) = (int)plVar10[1];
        *plVar13 = lVar15;
        plVar13[3] = 0;
        plVar13[4] = 0;
        plVar13[2] = 0;
        lVar15 = plVar10[2];
        plVar13[3] = plVar10[3];
        plVar13[2] = lVar15;
        plVar13[4] = plVar10[4];
        plVar10[2] = 0;
        plVar10[3] = 0;
        plVar10[4] = 0;
        plVar10 = plVar10 + 5;
        plVar13 = plVar13 + 5;
      } while (plVar10 != plVar1);
      do {
        if (plVar21[2] != 0) {
          plVar21[3] = plVar21[2];
          __ZdlPv();
        }
        plVar21 = plVar21 + 5;
      } while (plVar21 != plVar1);
      plVar21 = *(long **)(param_2 + 0x38);
      plVar24 = *(long **)(param_2 + 0x48);
      plVar19 = plStack_78;
    }
    *(long **)(param_2 + 0x38) = plVar6;
    *(long **)(param_2 + 0x40) = plVar19;
    *(long **)(param_2 + 0x48) = plStack_70;
    param_1 = &plStack_88;
    plStack_88 = plVar21;
    plStack_80 = plVar21;
    plStack_78 = plVar21;
    plStack_70 = plVar24;
    FUN_109ebfd4c(param_1);
LAB_109ebf370:
    *(long **)(param_2 + 0x40) = plVar19;
    return param_1;
  }
  FUN_109ebfdac();
LAB_109ebf398:
  func_0x000104c4f740();
  lVar15 = *(long *)(param_2 + 0x40);
  uVar14 = (lVar15 - *(long *)(param_2 + 0x38) >> 3) * -0x3333333333333333;
  if ((1 < uVar14) &&
     (uVar3 = *(uint *)(*(long *)(lVar15 + -0x50) + 0x18),
     *(long *)(lVar15 + -0x50) == 0 || 2 < uVar3 && uVar3 != 6)) {
    if (*(int *)(lVar15 + -0x20) == 2) {
      if (*(int *)(lVar15 + -0x48) == 0) {
        uVar12 = 2;
        goto LAB_109ebf41c;
      }
    }
    else {
      uVar12 = 1;
      if (*(int *)(lVar15 + -0x20) == 1) {
LAB_109ebf41c:
        *(undefined4 *)(lVar15 + -0x48) = uVar12;
      }
    }
  }
  if (*(int *)(lVar15 + -0x20) == 1) {
    puVar2 = *(undefined8 **)(lVar15 + -0x10);
    for (puVar22 = *(undefined8 **)(lVar15 + -0x18); puVar22 != puVar2; puVar22 = puVar22 + 1) {
      lVar15 = *(long *)(param_2 + 0x50);
      uVar18 = *puVar22;
      uVar7 = uVar18;
      (**(code **)(lVar15 + 0x10))(uVar18);
      FUN_109f66e48(lVar15,uVar7,uVar18,0);
      if (lVar15 != 0) {
        *(undefined8 *)(lVar15 + 8) = uVar18;
      }
    }
    goto LAB_109ebf5bc;
  }
  if (*(int *)(lVar15 + -0x20) != 2) goto LAB_109ebf5bc;
  lVar17 = *(long *)(lVar15 + -0x28);
  if (6 < *(uint *)(lVar17 + 0x18) && *(uint *)(lVar17 + 0x18) != 0x16) {
    puVar2 = *(undefined8 **)(lVar15 + -0x10);
    for (puVar22 = *(undefined8 **)(lVar15 + -0x18); puVar22 != puVar2; puVar22 = puVar22 + 1) {
      lVar15 = *(long *)(param_2 + 0x50);
      uVar18 = *puVar22;
      uVar7 = uVar18;
      (**(code **)(lVar15 + 0x10))(uVar18);
      FUN_109f66e48(lVar15,uVar7,uVar18,0);
      if (lVar15 != 0) {
        *(undefined8 *)(lVar15 + 8) = uVar18;
      }
    }
    goto LAB_109ebf5bc;
  }
  if ((uVar14 < 2) ||
     (uVar3 = *(uint *)(*(long *)(lVar15 + -0x50) + 0x18),
     *(long *)(lVar15 + -0x50) != 0 && (uVar3 < 3 || uVar3 == 6))) {
    lVar20 = *(long *)(param_2 + 0x50);
    lVar15 = lVar17;
    (**(code **)(lVar20 + 0x10))(lVar17);
    FUN_109f66e48(lVar20,lVar15,lVar17,0);
    if (lVar20 != 0) {
      *(long *)(lVar20 + 8) = lVar17;
    }
    goto LAB_109ebf5bc;
  }
  plVar1 = *(long **)(lVar15 + -0x38);
  if (plVar1 < *(long **)(lVar15 + -0x30)) {
    plVar24 = plVar1 + 1;
    *plVar1 = lVar17;
LAB_109ebf5b8:
    *(long **)(lVar15 + -0x38) = plVar24;
LAB_109ebf5bc:
    lVar15 = *(long *)(param_2 + 0x40);
    pplVar9 = *(long ***)(lVar15 + -0x18);
    if (pplVar9 != (long **)0x0) {
      *(long ***)(lVar15 + -0x10) = pplVar9;
      __ZdlPv();
    }
    *(long *)(param_2 + 0x40) = lVar15 + -0x28;
    return pplVar9;
  }
  lVar20 = *(long *)(lVar15 + -0x40);
  lVar23 = (long)plVar1 - lVar20;
  uVar14 = (lVar23 >> 3) + 1;
  if (uVar14 >> 0x3d == 0) {
    uVar11 = (long)*(long **)(lVar15 + -0x30) - lVar20;
    uVar16 = (long)uVar11 >> 2;
    if (uVar16 <= uVar14) {
      uVar16 = uVar14;
    }
    if (0x7ffffffffffffff7 < uVar11) {
      uVar16 = 0x1fffffffffffffff;
    }
    if (uVar16 >> 0x3d == 0) {
      lVar8 = uVar16 << 3;
      __Znwm();
      plVar1 = (long *)(lVar8 + lVar23);
      plVar24 = plVar1 + 1;
      *plVar1 = lVar17;
      _memcpy(plVar1 + -(lVar23 >> 3),lVar20,lVar23);
      *(long **)(lVar15 + -0x40) = plVar1 + -(lVar23 >> 3);
      *(long **)(lVar15 + -0x38) = plVar24;
      *(ulong *)(lVar15 + -0x30) = lVar8 + uVar16 * 8;
      if (lVar20 != 0) {
        __ZdlPv(lVar20);
      }
      goto LAB_109ebf5b8;
    }
  }
  else {
    FUN_109ebfd38();
  }
  func_0x000104c4f740();
  FUN_109ebf1ec(param_2,param_1);
  for (lVar15 = *(long *)(param_2 + 0x20); bVar4 = *(byte *)(lVar15 + 4), bVar4 == 0x13;
      lVar15 = *(long *)(lVar15 + 0x30)) {
  }
  if (bVar4 < 0x10) {
    uVar3 = 1 << (ulong)(bVar4 & 0x1f);
    if ((uVar3 & 0xa800) != 0) goto LAB_109ebf680;
    if ((uVar3 & 3) == 0) {
      if (bVar4 != 2) goto LAB_109ebf674;
      cVar5 = (char)param_1[0xb][1];
    }
    else {
      cVar5 = *(char *)((long)param_1[0xb] + 9);
    }
    if (cVar5 != '\0') goto LAB_109ebf680;
  }
LAB_109ebf674:
  *(undefined4 *)(param_1[8] + -4) = 1;
LAB_109ebf680:
  FUN_109ebf39c();
  return (long **)0x0;
}



/* Entry: 109ebf39c; end: 109ebf5f7;  */

long FUN_109ebf39c(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long *plVar18;
  
  lVar8 = *(long *)(param_2 + 0x40);
  uVar9 = (lVar8 - *(long *)(param_2 + 0x38) >> 3) * -0x3333333333333333;
  if ((1 < uVar9) &&
     (uVar3 = *(uint *)(*(long *)(lVar8 + -0x50) + 0x18),
     *(long *)(lVar8 + -0x50) == 0 || 2 < uVar3 && uVar3 != 6)) {
    if (*(int *)(lVar8 + -0x20) == 2) {
      if (*(int *)(lVar8 + -0x48) == 0) {
        uVar11 = 2;
        goto LAB_109ebf41c;
      }
    }
    else {
      uVar11 = 1;
      if (*(int *)(lVar8 + -0x20) == 1) {
LAB_109ebf41c:
        *(undefined4 *)(lVar8 + -0x48) = uVar11;
      }
    }
  }
  if (*(int *)(lVar8 + -0x20) == 1) {
    puVar2 = *(undefined8 **)(lVar8 + -0x10);
    for (puVar16 = *(undefined8 **)(lVar8 + -0x18); puVar16 != puVar2; puVar16 = puVar16 + 1) {
      lVar8 = *(long *)(param_2 + 0x50);
      uVar14 = *puVar16;
      uVar6 = uVar14;
      (**(code **)(lVar8 + 0x10))(uVar14);
      FUN_109f66e48(lVar8,uVar6,uVar14,0);
      if (lVar8 != 0) {
        *(undefined8 *)(lVar8 + 8) = uVar14;
      }
    }
    goto LAB_109ebf5bc;
  }
  if (*(int *)(lVar8 + -0x20) != 2) goto LAB_109ebf5bc;
  lVar13 = *(long *)(lVar8 + -0x28);
  if (6 < *(uint *)(lVar13 + 0x18) && *(uint *)(lVar13 + 0x18) != 0x16) {
    puVar2 = *(undefined8 **)(lVar8 + -0x10);
    for (puVar16 = *(undefined8 **)(lVar8 + -0x18); puVar16 != puVar2; puVar16 = puVar16 + 1) {
      lVar8 = *(long *)(param_2 + 0x50);
      uVar14 = *puVar16;
      uVar6 = uVar14;
      (**(code **)(lVar8 + 0x10))(uVar14);
      FUN_109f66e48(lVar8,uVar6,uVar14,0);
      if (lVar8 != 0) {
        *(undefined8 *)(lVar8 + 8) = uVar14;
      }
    }
    goto LAB_109ebf5bc;
  }
  if ((uVar9 < 2) ||
     (uVar3 = *(uint *)(*(long *)(lVar8 + -0x50) + 0x18),
     *(long *)(lVar8 + -0x50) != 0 && (uVar3 < 3 || uVar3 == 6))) {
    lVar15 = *(long *)(param_2 + 0x50);
    lVar8 = lVar13;
    (**(code **)(lVar15 + 0x10))(lVar13);
    FUN_109f66e48(lVar15,lVar8,lVar13,0);
    if (lVar15 != 0) {
      *(long *)(lVar15 + 8) = lVar13;
    }
    goto LAB_109ebf5bc;
  }
  plVar1 = *(long **)(lVar8 + -0x38);
  if (plVar1 < *(long **)(lVar8 + -0x30)) {
    plVar18 = plVar1 + 1;
    *plVar1 = lVar13;
LAB_109ebf5b8:
    *(long **)(lVar8 + -0x38) = plVar18;
LAB_109ebf5bc:
    lVar13 = *(long *)(param_2 + 0x40);
    lVar8 = *(long *)(lVar13 + -0x18);
    if (lVar8 != 0) {
      *(long *)(lVar13 + -0x10) = lVar8;
      __ZdlPv();
    }
    *(long *)(param_2 + 0x40) = lVar13 + -0x28;
    return lVar8;
  }
  lVar15 = *(long *)(lVar8 + -0x40);
  lVar17 = (long)plVar1 - lVar15;
  uVar9 = (lVar17 >> 3) + 1;
  if (uVar9 >> 0x3d == 0) {
    uVar10 = (long)*(long **)(lVar8 + -0x30) - lVar15;
    uVar12 = (long)uVar10 >> 2;
    if (uVar12 <= uVar9) {
      uVar12 = uVar9;
    }
    if (0x7ffffffffffffff7 < uVar10) {
      uVar12 = 0x1fffffffffffffff;
    }
    if (uVar12 >> 0x3d == 0) {
      lVar7 = uVar12 << 3;
      __Znwm();
      plVar1 = (long *)(lVar7 + lVar17);
      plVar18 = plVar1 + 1;
      *plVar1 = lVar13;
      _memcpy(plVar1 + -(lVar17 >> 3),lVar15,lVar17);
      *(long **)(lVar8 + -0x40) = plVar1 + -(lVar17 >> 3);
      *(long **)(lVar8 + -0x38) = plVar18;
      *(ulong *)(lVar8 + -0x30) = lVar7 + uVar12 * 8;
      if (lVar15 != 0) {
        __ZdlPv(lVar15);
      }
      goto LAB_109ebf5b8;
    }
  }
  else {
    FUN_109ebfd38();
  }
  func_0x000104c4f740();
  FUN_109ebf1ec(param_2,param_1);
  for (lVar8 = *(long *)(param_2 + 0x20); bVar4 = *(byte *)(lVar8 + 4), bVar4 == 0x13;
      lVar8 = *(long *)(lVar8 + 0x30)) {
  }
  if (bVar4 < 0x10) {
    uVar3 = 1 << (ulong)(bVar4 & 0x1f);
    if ((uVar3 & 0xa800) != 0) goto LAB_109ebf680;
    if ((uVar3 & 3) == 0) {
      if (bVar4 != 2) goto LAB_109ebf674;
      cVar5 = *(char *)(*(long *)(param_1 + 0x58) + 8);
    }
    else {
      cVar5 = *(char *)(*(long *)(param_1 + 0x58) + 9);
    }
    if (cVar5 != '\0') goto LAB_109ebf680;
  }
LAB_109ebf674:
  *(undefined4 *)(*(long *)(param_1 + 0x40) + -0x20) = 1;
LAB_109ebf680:
  FUN_109ebf39c();
  return 0;
}



/* Entry: 109ebf5f8; end: 109ebf697;  */

undefined8 FUN_109ebf5f8(long param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  
  FUN_109ebf1ec(param_2,param_1);
  for (lVar4 = *(long *)(param_2 + 0x20); bVar1 = *(byte *)(lVar4 + 4), bVar1 == 0x13;
      lVar4 = *(long *)(lVar4 + 0x30)) {
  }
  if (bVar1 < 0x10) {
    uVar3 = 1 << (ulong)(bVar1 & 0x1f);
    if ((uVar3 & 0xa800) != 0) goto LAB_109ebf680;
    if ((uVar3 & 3) == 0) {
      if (bVar1 != 2) goto LAB_109ebf674;
      cVar2 = *(char *)(*(long *)(param_1 + 0x58) + 8);
    }
    else {
      cVar2 = *(char *)(*(long *)(param_1 + 0x58) + 9);
    }
    if (cVar2 != '\0') goto LAB_109ebf680;
  }
LAB_109ebf674:
  *(undefined4 *)(*(long *)(param_1 + 0x40) + -0x20) = 1;
LAB_109ebf680:
  FUN_109ebf39c();
  return 0;
}



/* Entry: 109ebf698; end: 109ebf70f;  */

undefined8 FUN_109ebf698(long param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN_109ebf1ec(param_2,param_1);
  if (*(int *)(*(long *)(param_1 + 0x40) + -0x20) == 0) {
    lVar2 = param_2[4];
    (**(code **)(*param_2 + 0x70))(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    FUN_109ebfdc0(uVar1,lVar2,param_2);
    *(int *)(*(long *)(param_1 + 0x40) + -0x20) = (int)uVar1;
  }
  FUN_109ebf39c();
  return 0;
}



/* Entry: 109ebf710; end: 109ebf7d3;  */

undefined8 FUN_109ebf710(long param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))(param_2,*(undefined8 *)(param_1 + 0x20));
  }
  lVar4 = *(long *)(param_1 + 0x58);
  for (lVar5 = *(long *)(param_2 + 0x20); bVar1 = *(byte *)(lVar5 + 4), bVar1 == 0x13;
      lVar5 = *(long *)(lVar5 + 0x30)) {
  }
  if (bVar1 < 0x10) {
    uVar3 = 1 << (ulong)(bVar1 & 0x1f);
    if ((uVar3 & 0xa800) != 0) goto LAB_109ebf7a0;
    if ((uVar3 & 3) == 0) {
      if (bVar1 != 2) goto LAB_109ebf794;
      cVar2 = *(char *)(lVar4 + 8);
    }
    else {
      cVar2 = *(char *)(lVar4 + 9);
    }
    if (cVar2 != '\0') goto LAB_109ebf7a0;
  }
LAB_109ebf794:
  *(undefined4 *)(*(long *)(param_1 + 0x40) + -0x20) = 1;
LAB_109ebf7a0:
  if ((*(char *)(lVar4 + 10) == '\0') && (*(int *)(param_2 + 0x28) - 0x54U < 6)) {
    *(undefined4 *)(*(long *)(param_1 + 0x40) + -0x20) = 1;
  }
  return 0;
}



/* Entry: 109ebf7d4; end: 109ebf9f7;  */

undefined8 FUN_109ebf7d4(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))(param_2,*(undefined8 *)(param_1 + 0x20));
  }
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  plVar1 = *(long **)(param_2 + 0x30);
  (**(code **)(*plVar1 + 0x70))();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  FUN_109ebfdc0(uVar2,uVar3,plVar1);
  *(int *)(*(long *)(param_1 + 0x40) + -0x20) = (int)uVar2;
  return 0;
}



/* Entry: 109ebf9f8; end: 109ebfd37;  */

undefined8 FUN_109ebf9f8(long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  ushort uVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))(param_2,*(undefined8 *)(param_1 + 0x28));
  }
  plVar4 = *(long **)(param_2 + 0x20);
  if (plVar4 == (long *)0x0) {
    return 0;
  }
  (**(code **)(*plVar4 + 0x40))();
  lVar15 = *(long *)(param_2 + 0x28);
  if (*(int *)(lVar15 + 0x4c) == 0x16) {
LAB_109ebfa50:
    lVar15 = 0;
    if (*(long *)(param_2 + 0x30) != param_2 + 0x40) {
      lVar15 = *(long *)(param_2 + 0x30);
    }
    plVar5 = (long *)(lVar15 + -8);
    (**(code **)(*plVar5 + 0x40))();
    lVar15 = 0;
    do {
      if ((*(uint *)(&UNK_110b8a938 + lVar15 * 4 + (ulong)*(uint *)(plVar5 + 9) * 0x50) & 0x1f) != 0
         ) goto LAB_109ebfaa4;
      lVar15 = lVar15 + 1;
    } while (lVar15 != 4);
    lVar15 = -1;
LAB_109ebfaa4:
    uVar1 = *(uint *)(&UNK_110b8a938 + (ulong)*(uint *)(plVar5 + 9) * 0x50 + lVar15 * 4);
    uVar3 = uVar1 >> 6 & 1;
    if ((uVar1 & 0x1f) == 4) {
      uVar3 = 1;
    }
    uVar10 = 0x880;
    if (uVar3 == 0) {
      uVar10 = 0x580;
    }
    uVar7 = 1;
    if ((uVar1 & 0xff80) < uVar10) {
      uVar7 = 2;
    }
    goto LAB_109ebfb74;
  }
  if (*(long *)(lVar15 + 0x70) == 0) {
    bVar2 = *(byte *)(lVar15 + 0x48);
LAB_109ebfb70:
    uVar7 = bVar2 >> 1 & 3;
    goto LAB_109ebfb74;
  }
  lVar12 = *(long *)(param_1 + 0x50);
  uVar6 = *(undefined8 *)(*(long *)(lVar15 + 0x78) + 0x20);
  _strcmp(uVar6,&UNK_10f60a7ff);
  if ((int)uVar6 == 0) goto LAB_109ebfa50;
  bVar2 = *(byte *)(lVar15 + 0x48);
  if ((bVar2 & 6) != 0) goto LAB_109ebfb70;
  plVar8 = *(long **)(param_2 + 0x30);
  iVar11 = 1;
  plVar5 = plVar8;
  do {
    plVar5 = (long *)*plVar5;
    iVar11 = iVar11 + -1;
  } while (plVar5 != (long *)0x0);
  if (iVar11 == 0) {
LAB_109ebfbec:
    bVar2 = *(byte *)(lVar15 + 0x48) >> 1;
    uVar7 = bVar2 & 3;
    if ((bVar2 & 3) != 0) goto LAB_109ebfb74;
    uVar14 = *(undefined8 *)(*(long *)(lVar15 + 0x78) + 0x20);
    uVar6 = uVar14;
    _strcmp(uVar14,&UNK_10f4916cc);
    if (((((int)uVar6 != 0) && (uVar6 = uVar14, _strcmp(uVar14,&UNK_10f4916db), (int)uVar6 != 0)) &&
        (uVar6 = uVar14, _strcmp(uVar14,&UNK_10f49171e), (int)uVar6 != 0)) &&
       (uVar6 = uVar14, _strcmp(uVar14,&UNK_10f4918ae), (int)uVar6 != 0)) {
      plVar8 = *(long **)(param_2 + 0x30);
      iVar11 = -1;
      plVar5 = plVar8;
      do {
        plVar5 = (long *)*plVar5;
        iVar11 = iVar11 + 1;
      } while (plVar5 != (long *)0x0);
      uVar6 = uVar14;
      _strcmp(uVar14,&UNK_10f60b934);
      if ((((int)uVar6 == 0) || (uVar6 = uVar14, _strcmp(uVar14,&UNK_10f60b948), (int)uVar6 == 0))
         || (uVar6 = uVar14, _strcmp(uVar14,&UNK_10f60b8c0), (int)uVar6 == 0)) {
        iVar13 = 1;
      }
      else {
        _strcmp(uVar14,&UNK_10f60b8d0);
        iVar13 = 2;
        if ((int)uVar14 != 0) {
          iVar13 = iVar11;
        }
      }
      plVar5 = plVar8 + -1;
      uVar7 = 2;
      if ((*plVar8 != 0) && (iVar13 != 0)) {
        do {
          iVar13 = iVar13 + -1;
          if ((int)plVar5[3] != 3) {
            plVar8 = plVar5;
            (**(code **)(lVar12 + 0x10))(plVar5);
            lVar15 = lVar12;
            FUN_109f66ba8(lVar12,plVar8,plVar5);
            if (lVar15 == 0) goto LAB_109ebfd30;
          }
          plVar8 = plVar5 + 1;
          lVar15 = *(long *)*plVar8;
          plVar5 = (long *)0x0;
          if (lVar15 != 0) {
            plVar5 = (long *)*plVar8 + -1;
          }
        } while (lVar15 != 0 && iVar13 != 0);
        uVar7 = 2;
      }
      goto LAB_109ebfb74;
    }
  }
  else {
    plVar5 = (long *)0x0;
    if (plVar8 != (long *)(param_2 + 0x40)) {
      plVar5 = plVar8;
    }
    plVar5 = plVar5 + -1;
    (**(code **)(*plVar5 + 0x40))();
    if (plVar5 == (long *)0x0) {
      lVar15 = *(long *)(param_2 + 0x28);
      goto LAB_109ebfbec;
    }
    for (lVar9 = plVar5[4]; *(char *)(lVar9 + 4) == '\x13'; lVar9 = *(long *)(lVar9 + 0x30)) {
    }
    lVar15 = *(long *)(param_2 + 0x28);
    if (*(char *)(lVar9 + 4) != '\r') goto LAB_109ebfbec;
    uVar6 = *(undefined8 *)(*(long *)(lVar15 + 0x78) + 0x20);
    _strcmp(uVar6,&UNK_10f60b671);
    if ((int)uVar6 != 0) {
      uVar7 = *(ushort *)((long)plVar5 + 0x44) >> 3 & 3;
      goto LAB_109ebfb74;
    }
  }
LAB_109ebfd30:
  uVar7 = 1;
LAB_109ebfb74:
  uVar6 = *(undefined8 *)(param_1 + 0x58);
  FUN_109ebfdc0(uVar6,plVar4[4],uVar7);
  uVar7 = 0x10;
  if ((int)uVar6 != 2) {
    uVar7 = 8;
  }
  *(ushort *)((long)plVar4 + 0x44) = *(ushort *)((long)plVar4 + 0x44) & 0xffe7 | uVar7;
  return 0;
}



/* Entry: 109ebfd38; end: 109ebfd4b;  */

long * FUN_109ebfd38(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar1 = plVar3[1];
  lVar2 = plVar3[2];
  while (lVar4 = lVar2, lVar4 != lVar1) {
    plVar3[2] = lVar4 + -0x28;
    lVar2 = lVar4 + -0x28;
    if (*(long *)(lVar4 + -0x18) != 0) {
      *(long *)(lVar4 + -0x10) = *(long *)(lVar4 + -0x18);
      __ZdlPv();
      lVar2 = plVar3[2];
    }
  }
  if (*plVar3 != 0) {
    __ZdlPv();
  }
  return plVar3;
}



/* Entry: 109ebfd4c; end: 109ebfdab;  */

long * FUN_109ebfd4c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar3 = lVar2, lVar3 != lVar1) {
    param_1[2] = lVar3 + -0x28;
    lVar2 = lVar3 + -0x28;
    if (*(long *)(lVar3 + -0x18) != 0) {
      *(long *)(lVar3 + -0x10) = *(long *)(lVar3 + -0x18);
      __ZdlPv();
      lVar2 = param_1[2];
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109ebfdac; end: 109ebfdbf;  */

undefined4 FUN_109ebfdac(undefined8 param_1,long param_2,uint param_3)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  for (; bVar1 = *(byte *)(param_2 + 4), bVar1 == 0x13; param_2 = *(long *)(param_2 + 0x30)) {
  }
  uVar3 = 1;
  uVar5 = (uint)bVar1;
  if (bVar1 < 0x10) {
    if ((1 << (ulong)(uVar5 & 0x1f) & 0xa800U) == 0) {
      if ((1 << (ulong)(uVar5 & 0x1f) & 3U) == 0) {
        if (uVar5 != 2) {
          return uVar3;
        }
        cVar2 = puVar4[8];
      }
      else {
        cVar2 = puVar4[9];
      }
      if (cVar2 == '\0') {
        return uVar3;
      }
    }
    if (param_3 < 4) {
      return *(undefined4 *)(&UNK_10dd962f0 + (ulong)param_3 * 4);
    }
  }
  return uVar3;
}



/* Entry: 109ebfdc0; end: 109ebfe43;  */

undefined4 FUN_109ebfdc0(long param_1,long param_2,uint param_3)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  
  for (; bVar1 = *(byte *)(param_2 + 4), bVar1 == 0x13; param_2 = *(long *)(param_2 + 0x30)) {
  }
  uVar3 = 1;
  uVar4 = (uint)bVar1;
  if (bVar1 < 0x10) {
    if ((1 << (ulong)(uVar4 & 0x1f) & 0xa800U) == 0) {
      if ((1 << (ulong)(uVar4 & 0x1f) & 3U) == 0) {
        if (uVar4 != 2) {
          return uVar3;
        }
        cVar2 = *(char *)(param_1 + 8);
      }
      else {
        cVar2 = *(char *)(param_1 + 9);
      }
      if (cVar2 == '\0') {
        return uVar3;
      }
    }
    if (param_3 < 4) {
      return *(undefined4 *)(&UNK_10dd962f0 + (ulong)param_3 * 4);
    }
  }
  return uVar3;
}



/* Entry: 109ebfe44; end: 109ec001f;  */

undefined8 FUN_109ebfe44(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  
  uVar8 = *(uint *)(param_2 + 0x40) >> 0xb & 0xf;
  if (uVar8 != 0 && uVar8 != 0xb) {
    if (uVar8 != 1) {
      return 0;
    }
    if (*(long *)(param_2 + 0x88) != 0) {
      return 0;
    }
    if (*(char *)(*(long *)(param_1 + 0x38) + 0xb) == '\0') {
      return 0;
    }
    for (lVar9 = *(long *)(param_2 + 0x20); *(char *)(lVar9 + 4) == '\x13';
        lVar9 = *(long *)(lVar9 + 0x30)) {
    }
    if (*(char *)(lVar9 + 4) != '\x02') {
      return 0;
    }
  }
  lVar7 = *(long *)(param_2 + 0x20);
  bVar1 = *(byte *)(lVar7 + 4);
  lVar9 = lVar7;
  bVar2 = bVar1;
  while (bVar2 == 0x13) {
    lVar9 = *(long *)(lVar9 + 0x30);
    bVar2 = *(byte *)(lVar9 + 4);
  }
  if ((bVar2 < 3) && (lVar9 = lVar7, (*(ushort *)(param_2 + 0x44) >> 4 & 1) != 0)) {
    while (bVar1 == 0x13) {
      bVar1 = *(byte *)(*(long *)(lVar9 + 0x30) + 4);
      lVar9 = *(long *)(lVar9 + 0x30);
    }
    uVar8 = (uint)bVar1;
    if (uVar8 < 0x10) {
      lVar9 = *(long *)(param_1 + 0x38);
      uVar4 = 1 << (ulong)(uVar8 & 0x1f);
      if ((uVar4 & 0xa800) == 0) {
        if ((uVar4 & 3) == 0) {
          if (uVar8 != 2) {
            return 0;
          }
          cVar3 = *(char *)(lVar9 + 8);
        }
        else {
          cVar3 = *(char *)(lVar9 + 9);
        }
        if (cVar3 == '\0') {
          return 0;
        }
      }
      plVar5 = *(long **)(param_2 + 0x70);
      if ((plVar5 != (long *)0x0) && (lVar7 == plVar5[4])) {
        if (*(char *)(lVar9 + 0xc) == '\0') {
          return 0;
        }
        lVar9 = 0;
        if (*(long *)(param_2 + -0x30) != 0) {
          lVar9 = *(long *)(param_2 + -0x30) + 0x30;
        }
        (**(code **)(*plVar5 + 0x20))(plVar5,lVar9,0);
        *(long **)(param_2 + 0x70) = plVar5;
        FUN_109ec0c50();
        lVar7 = *(long *)(param_2 + 0x20);
      }
      plVar5 = *(long **)(param_2 + 0x78);
      if ((plVar5 != (long *)0x0) && (lVar7 == plVar5[4])) {
        if (*(char *)(*(long *)(param_1 + 0x38) + 0xc) == '\0') {
          return 0;
        }
        lVar9 = 0;
        if (*(long *)(param_2 + -0x30) != 0) {
          lVar9 = *(long *)(param_2 + -0x30) + 0x30;
        }
        (**(code **)(*plVar5 + 0x20))(plVar5,lVar9,0);
        *(long **)(param_2 + 0x78) = plVar5;
        FUN_109ec0c50();
        lVar7 = *(long *)(param_2 + 0x20);
      }
      uVar6 = 0;
      FUN_109ebf0dc(0,lVar7);
      *(undefined8 *)(param_2 + 0x20) = uVar6;
      lVar7 = *(long *)(param_1 + 0x40);
      lVar9 = param_2;
      (**(code **)(lVar7 + 0x10))(param_2);
      FUN_109f66e48(lVar7,lVar9,param_2,0);
      if (lVar7 != 0) {
        *(long *)(lVar7 + 8) = param_2;
      }
    }
  }
  return 0;
}



/* Entry: 109ec0020; end: 109ec07a7;  */

undefined8 FUN_109ec0020(long *param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  
  plVar9 = *(long **)(param_2 + 0x20);
  plVar3 = plVar9;
  (**(code **)(*plVar9 + 0x40))();
  plVar7 = (long *)(param_2 + 0x28);
  plVar8 = (long *)*plVar7;
  uVar6 = *(uint *)(plVar8 + 3);
  plVar5 = plVar8;
  if (2 < uVar6) {
    plVar5 = (long *)0x0;
  }
  if (plVar5 == (long *)0x0) {
    plVar10 = (long *)0x0;
    plVar4 = plVar8;
  }
  else {
    plVar10 = plVar8;
    (**(code **)(*plVar8 + 0x40))();
    uVar6 = *(uint *)((long *)*plVar7 + 3);
    plVar4 = (long *)*plVar7;
  }
  if ((*(char *)(plVar9[4] + 4) != '\x13') || ((plVar10 == (long *)0x0 && (uVar6 != 3)))) {
    if (plVar3 == (long *)0x0) goto LAB_109ec01f0;
    goto LAB_109ec00bc;
  }
  if (plVar10 == (long *)0x0) goto LAB_109ec0278;
  if (plVar3 == (long *)0x0) goto LAB_109ec01f0;
  for (lVar11 = plVar3[4]; uVar1 = *(uint *)(lVar11 + 4), (uVar1 & 0xff) == 0x13;
      lVar11 = *(long *)(lVar11 + 0x30)) {
  }
  for (lVar11 = plVar10[4]; bVar2 = *(byte *)(lVar11 + 4), bVar2 == 0x13;
      lVar11 = *(long *)(lVar11 + 0x30)) {
  }
  uVar1 = (uint)((uVar1 & 0xff) < 9) & 0x188U >> (ulong)(uVar1 & 0x1f);
  if (bVar2 < 9 && (1 << (ulong)(bVar2 & 0x1f) & 0x188U) != 0) {
    if (uVar1 == 0) {
LAB_109ec0278:
      if (uVar6 == 3) {
        if (plVar3 == (long *)0x0) goto LAB_109ec01f0;
        for (lVar11 = plVar3[4]; bVar2 = *(byte *)(lVar11 + 4), bVar2 == 0x13;
            lVar11 = *(long *)(lVar11 + 0x30)) {
        }
        if (bVar2 < 9 && (1 << (ulong)(bVar2 & 0x1f) & 0x188U) != 0) {
          for (lVar11 = plVar4[4]; *(byte *)(lVar11 + 4) == 0x13; lVar11 = *(long *)(lVar11 + 0x30))
          {
          }
          if (*(byte *)(lVar11 + 4) < 3) goto LAB_109ec02d8;
        }
      }
      else {
LAB_109ec02d8:
        if (plVar10 != (long *)0x0) {
          lVar11 = param_1[8];
          plVar4 = plVar10;
          (**(code **)(lVar11 + 0x10))(plVar10);
          FUN_109f66ba8(lVar11,plVar4,plVar10);
          if (lVar11 != 0) {
            FUN_109ec0d78(plVar5);
            goto LAB_109ec0378;
          }
        }
        if (plVar3 == (long *)0x0) goto LAB_109ec01f0;
        lVar11 = param_1[8];
        plVar5 = plVar3;
        (**(code **)(lVar11 + 0x10))(plVar3);
        FUN_109f66ba8(lVar11,plVar5,plVar3);
        if (lVar11 != 0) {
          for (lVar11 = *(long *)(*plVar7 + 0x20); *(byte *)(lVar11 + 4) == 0x13;
              lVar11 = *(long *)(lVar11 + 0x30)) {
          }
          if (*(byte *)(lVar11 + 4) < 3) {
            FUN_109ec0d78(plVar9);
            plVar5 = *(long **)(param_2 + 0x28);
LAB_109ec0378:
            FUN_109ec0dd8(param_1,plVar9,plVar5,1);
            lVar11 = *(long *)(param_2 + 8);
            plVar5 = *(long **)(param_2 + 0x10);
            *(long **)(lVar11 + 8) = plVar5;
            *plVar5 = lVar11;
            *(undefined8 *)(param_2 + 8) = 0;
            *(undefined8 *)(param_2 + 0x10) = 0;
            return 0;
          }
        }
      }
    }
  }
  else if (uVar1 != 0) goto LAB_109ec0278;
LAB_109ec00bc:
  lVar11 = param_1[8];
  plVar5 = plVar3;
  (**(code **)(lVar11 + 0x10))(plVar3);
  FUN_109f66ba8(lVar11,plVar5,plVar3);
  if (lVar11 != 0) {
    for (lVar11 = plVar9[4]; *(byte *)(lVar11 + 4) == 0x13; lVar11 = *(long *)(lVar11 + 0x30)) {
    }
    if (*(byte *)(lVar11 + 4) < 3) {
      FUN_109ec0d78(plVar9);
    }
    if (plVar10 != (long *)0x0) {
      lVar11 = param_1[8];
      plVar5 = plVar10;
      (**(code **)(lVar11 + 0x10))(plVar10);
      FUN_109f66ba8(lVar11,plVar5,plVar10);
      if (lVar11 != 0) {
        for (lVar11 = plVar8[4]; *(byte *)(lVar11 + 4) == 0x13; lVar11 = *(long *)(lVar11 + 0x30)) {
        }
        if (*(byte *)(lVar11 + 4) < 3) {
          FUN_109ec0d78(plVar8);
        }
      }
    }
    lVar11 = *plVar7;
    if (*(byte *)(*(long *)(lVar11 + 0x20) + 4) < 3) {
      if (((*(int *)(lVar11 + 0x18) != 4) ||
          (0x28 < *(uint *)(lVar11 + 0x28) ||
           (1L << ((ulong)*(uint *)(lVar11 + 0x28) & 0x3f) & 0x14008000000U) == 0)) ||
         (lVar11 = *(long *)(lVar11 + 0x30), bVar2 = *(byte *)(*(long *)(lVar11 + 0x20) + 4),
         8 < bVar2 || (1 << (ulong)(bVar2 & 0x1f) & 0x188U) == 0)) {
        lVar11 = 0;
        func_0x000109ebef74();
      }
      *plVar7 = lVar11;
    }
  }
LAB_109ec01f0:
  (**(code **)(*param_1 + 0x130))(param_1,plVar7);
  return 0;
}



/* Entry: 109ec07a8; end: 109ec0c17;  */

undefined8 FUN_109ec07a8(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  
  if (param_2 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)0x0;
    if (*(long *)(param_2 + -0x30) != 0) {
      puVar4 = (undefined8 *)(*(long *)(param_2 + -0x30) + 0x30);
    }
  }
  puVar6 = (undefined8 *)(param_2 + 0x20);
  plVar7 = (long *)*puVar6;
  if (((plVar7 != (long *)0x0) && (*(uint *)(plVar7 + 3) < 3)) &&
     (plVar1 = plVar7, (**(code **)(*plVar7 + 0x40))(), plVar1 != (long *)0x0)) {
    lVar8 = param_1[8];
    plVar2 = plVar1;
    (**(code **)(lVar8 + 0x10))();
    FUN_109f66ba8(lVar8,plVar2,plVar1);
    if (lVar8 != 0) {
      for (lVar8 = plVar7[4]; *(byte *)(lVar8 + 4) == 0x13; lVar8 = *(long *)(lVar8 + 0x30)) {
      }
      if (*(byte *)(lVar8 + 4) < 3) {
        puVar3 = puVar4;
        FUN_109f658b0(puVar4,0x90);
        if (puVar3 != (undefined8 *)0x0) {
          puVar3[0xf] = 0;
          puVar3[0xe] = 0;
          puVar3[0x11] = 0;
          puVar3[0x10] = 0;
          puVar3[0xb] = 0;
          puVar3[10] = 0;
          puVar3[0xd] = 0;
          puVar3[0xc] = 0;
          puVar3[7] = 0;
          puVar3[6] = 0;
          puVar3[9] = 0;
          puVar3[8] = 0;
          puVar3[3] = 0;
          puVar3[2] = 0;
          puVar3[5] = 0;
          puVar3[4] = 0;
          puVar3[1] = 0;
          *puVar3 = 0;
        }
        FUN_109eaba7c(puVar3,plVar7[4],&UNK_10f615732,0xb);
        lVar8 = param_1[1];
        puVar3[1] = lVar8 + 8;
        plVar1 = (long *)0x0;
        if (puVar3 != (undefined8 *)0x0) {
          plVar1 = puVar3 + 1;
        }
        puVar5 = *(undefined8 **)(lVar8 + 0x10);
        puVar3[2] = puVar5;
        *puVar5 = plVar1;
        *(long **)(lVar8 + 0x10) = plVar1;
        FUN_109ec0d78(plVar7);
        puVar5 = puVar4;
        FUN_109f658b0(puVar4,0x30);
        if (puVar5 != (undefined8 *)0x0) {
          puVar5[3] = 0;
          puVar5[2] = 0;
          puVar5[5] = 0;
          puVar5[4] = 0;
          puVar5[1] = 0;
          *puVar5 = 0;
        }
        puVar5[1] = 0;
        puVar5[2] = 0;
        *(undefined4 *)(puVar5 + 3) = 2;
        *puVar5 = &PTR_DAT_110b64048;
        puVar5[4] = puVar3[4];
        puVar5[5] = puVar3;
        FUN_109ec0dd8(param_1,puVar5,plVar7,1);
        FUN_109f658b0(puVar4,0x30);
        if (puVar4 != (undefined8 *)0x0) {
          puVar4[3] = 0;
          puVar4[2] = 0;
          puVar4[5] = 0;
          puVar4[4] = 0;
          puVar4[1] = 0;
          *puVar4 = 0;
        }
        puVar4[1] = 0;
        puVar4[2] = 0;
        *(undefined4 *)(puVar4 + 3) = 2;
        *puVar4 = &PTR_DAT_110b64048;
        puVar4[4] = puVar3[4];
        puVar4[5] = puVar3;
        *puVar6 = puVar4;
      }
    }
  }
  (**(code **)(*param_1 + 0x130))(param_1,puVar6);
  return 0;
}



/* Entry: 109ec0c18; end: 109ec0c4f;  */

void FUN_109ec0c18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b656d0;
  func_0x000109f66a2c(param_1[8],0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109ec0c50; end: 109ec0d77;  */

void FUN_109ec0c50(long param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
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
  
  lVar4 = *(long *)(param_1 + 0x20);
  if (*(char *)(lVar4 + 4) == '\x13') {
    uVar6 = 0;
    cVar2 = '\x13';
    while( true ) {
      if (cVar2 == '\x13') {
        iVar5 = *(int *)(lVar4 + 0x10);
      }
      else {
        iVar5 = -1;
      }
      if (iVar5 <= (int)uVar6) break;
      uVar1 = uVar6;
      if (*(uint *)(lVar4 + 0x10) <= uVar6) {
        uVar1 = *(uint *)(lVar4 + 0x10) - 1;
      }
      FUN_109ec0c50(*(undefined8 *)(*(long *)(param_1 + 0xa8) + (ulong)uVar1 * 8));
      uVar6 = uVar6 + 1;
      lVar4 = *(long *)(param_1 + 0x20);
      cVar2 = *(char *)(lVar4 + 4);
    }
    uVar3 = 0;
    FUN_109ebf0dc();
    *(undefined8 *)(param_1 + 0x20) = uVar3;
  }
  else {
    lVar4 = 0;
    FUN_109ebf0dc();
    *(long *)(param_1 + 0x20) = lVar4;
    if (*(char *)(lVar4 + 4) == '\x03') {
      lVar7 = 0;
      do {
        FUN_109f64b28((short)*(undefined4 *)(param_1 + 0x28 + lVar7 * 4));
        *(short *)((long)&uStack_b0 + lVar7 * 2) = (short)lVar4;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x10);
    }
    else {
      uStack_a8 = CONCAT26((short)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20),
                           CONCAT24((short)*(undefined8 *)(param_1 + 0x40),
                                    CONCAT22((short)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20)
                                             ,(short)*(undefined8 *)(param_1 + 0x38))));
      uStack_b0 = CONCAT26((short)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20),
                           CONCAT24((short)*(undefined8 *)(param_1 + 0x30),
                                    CONCAT22((short)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20)
                                             ,(short)*(undefined8 *)(param_1 + 0x28))));
      uStack_98 = CONCAT26((short)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20),
                           CONCAT24((short)*(undefined8 *)(param_1 + 0x60),
                                    CONCAT22((short)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20)
                                             ,(short)*(undefined8 *)(param_1 + 0x58))));
      uStack_a0 = CONCAT26((short)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20),
                           CONCAT24((short)*(undefined8 *)(param_1 + 0x50),
                                    CONCAT22((short)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20)
                                             ,(short)*(undefined8 *)(param_1 + 0x48))));
    }
    *(undefined8 *)(param_1 + 0x70) = uStack_68;
    *(undefined8 *)(param_1 + 0x68) = uStack_70;
    *(undefined8 *)(param_1 + 0x80) = uStack_58;
    *(undefined8 *)(param_1 + 0x78) = uStack_60;
    *(undefined8 *)(param_1 + 0x90) = uStack_48;
    *(undefined8 *)(param_1 + 0x88) = uStack_50;
    *(undefined8 *)(param_1 + 0xa0) = uStack_38;
    *(undefined8 *)(param_1 + 0x98) = uStack_40;
    *(undefined8 *)(param_1 + 0x30) = uStack_a8;
    *(undefined8 *)(param_1 + 0x28) = uStack_b0;
    *(undefined8 *)(param_1 + 0x40) = uStack_98;
    *(undefined8 *)(param_1 + 0x38) = uStack_a0;
    *(undefined8 *)(param_1 + 0x50) = uStack_88;
    *(undefined8 *)(param_1 + 0x48) = uStack_90;
    *(undefined8 *)(param_1 + 0x60) = uStack_78;
    *(undefined8 *)(param_1 + 0x58) = uStack_80;
  }
  return;
}



/* Entry: 109ec0d78; end: 109ec0dd7;  */

void FUN_109ec0d78(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_109ebf0dc(0,*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
    do {
      uVar1 = 0;
      FUN_109ebf0dc(0,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20));
      param_1 = *(long *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x20) = uVar1;
    } while (param_1 != 0 && *(int *)(param_1 + 0x18) == 0);
  }
  return;
}



/* Entry: 109ec0dd8; end: 109ec1053;  */

void FUN_109ec0dd8(long param_1,long *param_2,long *param_3,int param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  
  if (param_2 == (long *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)0x0;
    if (param_2[-6] != 0) {
      puVar4 = (undefined8 *)(param_2[-6] + 0x30);
    }
  }
  if (*(char *)(param_2[4] + 4) == '\x13') {
    if (*(int *)(param_2[4] + 0x10) != 0) {
      uVar9 = 0;
      do {
        puVar1 = puVar4;
        FUN_109f658b0(puVar4,0x38);
        if (puVar1 != (undefined8 *)0x0) {
          puVar1[6] = 0;
          puVar1[3] = 0;
          puVar1[2] = 0;
          puVar1[5] = 0;
          puVar1[4] = 0;
          puVar1[1] = 0;
          *puVar1 = 0;
        }
        plVar2 = param_2;
        (**(code **)(*param_2 + 0x20))(param_2,puVar4,0);
        puVar7 = puVar4;
        FUN_109f658b0(puVar4,0xb0);
        if (puVar7 != (undefined8 *)0x0) {
          puVar7[0x13] = 0;
          puVar7[0x12] = 0;
          puVar7[0x15] = 0;
          puVar7[0x14] = 0;
          puVar7[0xf] = 0;
          puVar7[0xe] = 0;
          puVar7[0x11] = 0;
          puVar7[0x10] = 0;
          puVar7[0xb] = 0;
          puVar7[10] = 0;
          puVar7[0xd] = 0;
          puVar7[0xc] = 0;
          puVar7[7] = 0;
          puVar7[6] = 0;
          puVar7[9] = 0;
          puVar7[8] = 0;
          puVar7[3] = 0;
          puVar7[2] = 0;
          puVar7[5] = 0;
          puVar7[4] = 0;
          puVar7[1] = 0;
          *puVar7 = 0;
        }
        FUN_109ea98b0();
        puVar1[1] = 0;
        puVar1[2] = 0;
        *(undefined4 *)(puVar1 + 3) = 0;
        puVar1[4] = &UNK_10e05d730;
        *puVar1 = &PTR_DAT_110b640d0;
        puVar1[6] = puVar7;
        FUN_109eab364(puVar1,plVar2);
        puVar7 = puVar4;
        FUN_109f658b0(puVar4,0x38);
        if (puVar7 != (undefined8 *)0x0) {
          puVar7[6] = 0;
          puVar7[3] = 0;
          puVar7[2] = 0;
          puVar7[5] = 0;
          puVar7[4] = 0;
          puVar7[1] = 0;
          *puVar7 = 0;
        }
        plVar2 = param_3;
        (**(code **)(*param_3 + 0x20))(param_3,puVar4,0);
        puVar3 = puVar4;
        FUN_109f658b0(puVar4,0xb0);
        if (puVar3 != (undefined8 *)0x0) {
          puVar3[0x13] = 0;
          puVar3[0x12] = 0;
          puVar3[0x15] = 0;
          puVar3[0x14] = 0;
          puVar3[0xf] = 0;
          puVar3[0xe] = 0;
          puVar3[0x11] = 0;
          puVar3[0x10] = 0;
          puVar3[0xb] = 0;
          puVar3[10] = 0;
          puVar3[0xd] = 0;
          puVar3[0xc] = 0;
          puVar3[7] = 0;
          puVar3[6] = 0;
          puVar3[9] = 0;
          puVar3[8] = 0;
          puVar3[3] = 0;
          puVar3[2] = 0;
          puVar3[5] = 0;
          puVar3[4] = 0;
          puVar3[1] = 0;
          *puVar3 = 0;
        }
        FUN_109ea98b0();
        puVar7[1] = 0;
        puVar7[2] = 0;
        *(undefined4 *)(puVar7 + 3) = 0;
        puVar7[4] = &UNK_10e05d730;
        *puVar7 = &PTR_DAT_110b640d0;
        puVar7[6] = puVar3;
        FUN_109eab364(puVar7,plVar2);
        FUN_109ec0dd8(param_1,puVar1,puVar7,param_4);
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(param_2[4] + 0x10));
    }
  }
  else {
    FUN_109f658b0(puVar4,0x38);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[6] = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
    }
    uVar5 = (ulong)(*(byte *)(param_2[4] + 4) < 3);
    func_0x000109ebef74(uVar5,param_3);
    func_0x000109ea9180(puVar4,param_2,uVar5);
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    if (param_4 == 0) {
      puVar8 = (undefined8 *)*puVar1;
      puVar7 = puVar8 + 1;
      puVar3 = puVar1;
      puVar6 = puVar1;
    }
    else {
      puVar6 = (undefined8 *)(*(long *)(param_1 + 8) + 0x10);
      puVar7 = (undefined8 *)*puVar6;
      puVar3 = puVar7;
      puVar8 = puVar1;
    }
    puVar4[1] = puVar8;
    puVar4[2] = puVar3;
    *puVar7 = puVar4 + 1;
    *puVar6 = puVar4 + 1;
  }
  return;
}



/* Entry: 109ec1054; end: 109ec10f3;  */

undefined1 FUN_109ec1054(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined **ppuStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  ppuStack_70 = &PTR_FUN_110b65840;
  plVar2 = *(long **)*param_1;
  if (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    plVar4 = (undefined8 *)*param_1 + -1;
    plStack_68 = plVar4;
    uStack_38 = param_2;
    (**(code **)(*plVar4 + 0x18))(plVar4,&ppuStack_70);
    iVar1 = (int)plVar4;
    while ((iVar1 == 0 && (lVar3 != 0))) {
      plVar4 = (long *)*plVar2;
      lVar3 = *plVar4;
      plVar2 = plVar2 + -1;
      plStack_68 = plVar2;
      (**(code **)(*plVar2 + 0x18))(plVar2,&ppuStack_70);
      iVar1 = (int)plVar2;
      plVar2 = plVar4;
    }
  }
  return uStack_40._1_1_;
}



/* Entry: 109ec10f4; end: 109ec1437;  */

undefined8 FUN_109ec10f4(long param_1,long param_2)

{
  bool bVar1;
  undefined8 **ppuVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  
  if (*(long *)(param_2 + 0x50) == 0) {
    return 0;
  }
  plVar18 = (long *)0x0;
  if (*(long *)(param_2 + -0x30) != 0) {
    plVar18 = (long *)(*(long *)(param_2 + -0x30) + 0x30);
  }
  uVar3 = *(uint *)(*(long *)(param_1 + 0x38) + 0x5b0);
  if (0 < (int)uVar3) {
    lVar13 = 0;
    uVar20 = (ulong)uVar3;
    do {
      lVar19 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x5b8) + (uVar20 - 1) * 8);
      plVar6 = plVar18;
      FUN_109f658b0(plVar18,0xb0);
      if (plVar6 != (long *)0x0) {
        plVar6[0x13] = 0;
        plVar6[0x12] = 0;
        plVar6[0x15] = 0;
        plVar6[0x14] = 0;
        plVar6[0xf] = 0;
        plVar6[0xe] = 0;
        plVar6[0x11] = 0;
        plVar6[0x10] = 0;
        plVar6[0xb] = 0;
        plVar6[10] = 0;
        plVar6[0xd] = 0;
        plVar6[0xc] = 0;
        plVar6[7] = 0;
        plVar6[6] = 0;
        plVar6[9] = 0;
        plVar6[8] = 0;
        plVar6[3] = 0;
        plVar6[2] = 0;
        plVar6[5] = 0;
        plVar6[4] = 0;
        plVar6[1] = 0;
        *plVar6 = 0;
      }
      func_0x000109ea9960(plVar6,*(undefined4 *)(lVar19 + 0x58),1);
      lVar11 = lVar13;
      if (0 < (int)*(uint *)(lVar19 + 0x4c)) {
        uVar14 = 0;
        lVar16 = *(long *)(*(long *)(param_2 + 0x50) + 0x20);
        lVar5 = lVar16;
        cVar4 = *(char *)(lVar16 + 4);
joined_r0x000109ec11cc:
        while (cVar4 == '\x13') {
          plVar7 = (long *)(lVar5 + 0x30);
          lVar5 = *plVar7;
          cVar4 = *(char *)(*plVar7 + 4);
        }
        if (lVar5 != *(long *)(*(long *)(lVar19 + 0x50) + uVar14 * 8)) goto code_r0x000109ec11f0;
        plVar7 = *(long **)(param_2 + 0x58);
        if (plVar7 == (long *)0x0) {
          plVar7 = plVar18;
          FUN_109f658b0(plVar18,0x30);
          if (plVar7 != (long *)0x0) {
            plVar7[3] = 0;
            plVar7[2] = 0;
            plVar7[5] = 0;
            plVar7[4] = 0;
            plVar7[1] = 0;
            *plVar7 = 0;
          }
          lVar11 = *(long *)(param_2 + 0x50);
          plVar7[1] = 0;
          plVar7[2] = 0;
          *(undefined4 *)(plVar7 + 3) = 2;
          *plVar7 = (long)&PTR_DAT_110b64048;
          plVar7[4] = *(long *)(lVar11 + 0x20);
          plVar7[5] = lVar11;
        }
        else {
          (**(code **)(*plVar7 + 0x20))(plVar7,plVar18,0);
        }
        FUN_109eb38b8(lVar19,*(undefined8 *)(param_1 + 0x38),param_2 + 0x30);
        puVar12 = (undefined8 *)0x0;
        if (*(long *)(param_2 + -0x30) != 0) {
          puVar12 = (undefined8 *)(*(long *)(param_2 + -0x30) + 0x30);
        }
        plVar8 = *(long **)(param_2 + 0x20);
        if (plVar8 == (long *)0x0) {
          plVar8 = (long *)0x0;
        }
        else {
          (**(code **)(*plVar8 + 0x20))(plVar8,puVar12,0);
        }
        uStack_78 = 0;
        uStack_70 = 0;
        puStack_80 = &uStack_70;
        ppuStack_68 = &puStack_80;
        for (plVar17 = *(long **)(param_2 + 0x30); *plVar17 != 0; plVar17 = (long *)*plVar17) {
          plVar9 = plVar17 + -1;
          (**(code **)(*plVar9 + 0x20))(plVar9,puVar12,0);
          plVar9[1] = (long)&uStack_70;
          plVar9[2] = (long)ppuStack_68;
          ppuVar2 = (undefined8 **)0x0;
          if (plVar9 != (long *)0x0) {
            ppuVar2 = (undefined8 **)(plVar9 + 1);
          }
          *ppuStack_68 = ppuVar2;
          ppuStack_68 = ppuVar2;
        }
        FUN_109f658b0(puVar12,0x60);
        if (puVar12 != (undefined8 *)0x0) {
          puVar12[9] = 0;
          puVar12[8] = 0;
          puVar12[0xb] = 0;
          puVar12[10] = 0;
          puVar12[5] = 0;
          puVar12[4] = 0;
          puVar12[7] = 0;
          puVar12[6] = 0;
          puVar12[1] = 0;
          *puVar12 = 0;
          puVar12[3] = 0;
          puVar12[2] = 0;
        }
        puVar12[1] = 0;
        puVar12[2] = 0;
        *(undefined4 *)(puVar12 + 3) = 9;
        *puVar12 = &PTR_DAT_110b63a00;
        puVar15 = puVar12 + 6;
        *puVar15 = puVar12 + 8;
        puVar12[4] = plVar8;
        puVar12[5] = lVar19;
        puVar12[10] = 0;
        puVar12[0xb] = 0;
        puVar12[9] = puVar15;
        if (puStack_80 == &uStack_70) {
          puVar12[7] = 0;
          puVar12[8] = 0;
        }
        else {
          puVar12[6] = puStack_80;
          puVar12[7] = 0;
          puVar12[8] = 0;
          puVar12[9] = ppuStack_68;
          puStack_80[1] = puVar15;
          *(undefined8 **)puVar12[9] = puVar12 + 8;
        }
        uVar10 = 0x72;
        FUN_109eac2ac(0x72,plVar7);
        lVar11 = 0x8b;
        FUN_109eac310(0x8b,uVar10,plVar6);
        if (lVar13 == 0) {
          FUN_109eac498();
        }
        else {
          FUN_109eac54c();
        }
      }
LAB_109ec13d8:
      bVar1 = 1 < (long)uVar20;
      lVar13 = lVar11;
      uVar20 = uVar20 - 1;
    } while (bVar1);
    if (lVar11 != 0) {
      plVar18 = (long *)(lVar11 + 8);
      *plVar18 = param_2 + 8;
      puVar12 = *(undefined8 **)(param_2 + 0x10);
      *(undefined8 **)(lVar11 + 0x10) = puVar12;
      *puVar12 = plVar18;
      goto LAB_109ec1404;
    }
  }
  plVar18 = *(long **)(param_2 + 0x10);
LAB_109ec1404:
  lVar13 = *(long *)(param_2 + 8);
  *(long **)(lVar13 + 8) = plVar18;
  *plVar18 = lVar13;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  return 0;
code_r0x000109ec11f0:
  uVar14 = uVar14 + 1;
  lVar5 = lVar16;
  cVar4 = *(char *)(lVar16 + 4);
  if (uVar14 == *(uint *)(lVar19 + 0x4c)) goto LAB_109ec13d8;
  goto joined_r0x000109ec11cc;
}



/* Entry: 109ec1438; end: 109ec1533;  */

undefined1 FUN_109ec1438(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined **ppuStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined2 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  ppuStack_68 = &PTR_FUN_110b65998;
  plVar2 = *(long **)*param_1;
  if (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    plVar4 = (undefined8 *)*param_1 + -1;
    plStack_60 = plVar4;
    (**(code **)(*plVar4 + 0x18))(plVar4,&ppuStack_68);
    iVar1 = (int)plVar4;
    while ((iVar1 == 0 && (lVar3 != 0))) {
      plVar4 = (long *)*plVar2;
      lVar3 = *plVar4;
      plVar2 = plVar2 + -1;
      plStack_60 = plVar2;
      (**(code **)(*plVar2 + 0x18))(plVar2,&ppuStack_68);
      iVar1 = (int)plVar2;
      plVar2 = plVar4;
    }
  }
  return uStack_38._1_1_;
}



/* Entry: 109ec1534; end: 109ec158b;  */

undefined8 FUN_109ec1534(undefined8 param_1,long param_2)

{
  FUN_109ec1674(param_1,*(undefined8 *)(param_2 + 0x28));
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return 0;
}


