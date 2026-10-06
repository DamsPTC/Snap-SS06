/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106aec1d4; end: 106aec427;  */

void FUN_106aec1d4(int *param_1,ulong *param_2)

{
  long lVar1;
  uint *puVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  ulong uVar10;
  char *pcVar11;
  ulong uVar12;
  uint *puVar13;
  int iVar14;
  ulong uVar15;
  int *unaff_x23;
  
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  piVar7 = param_1;
  __dyld_image_count();
  uVar15 = 0;
  piVar8 = piVar7;
  do {
    iVar14 = (int)uVar15;
    if (iVar14 == (int)piVar7) {
      return;
    }
    func_0x000106aec660();
    piVar9 = (int *)0x0;
    if (piVar8 != (int *)0x0) {
      func_0x000106aec654();
      piVar9 = unaff_x23;
      func_0x0001001d5d14();
      if (piVar9 != (int *)0x0) {
        uVar10 = (long)param_1 - (long)piVar8;
        for (iVar4 = unaff_x23[4]; iVar4 != 0; iVar4 = iVar4 + -1) {
          if (*piVar9 == 0x19) {
            if (*(ulong *)(piVar9 + 6) <= uVar10) {
              uVar12 = *(long *)(piVar9 + 8) + *(ulong *)(piVar9 + 6);
              goto LAB_106aec278;
            }
          }
          else if ((*piVar9 == 1) && ((uint)piVar9[6] <= uVar10)) {
            uVar12 = (ulong)(uint)(piVar9[7] + piVar9[6]);
LAB_106aec278:
            if (uVar10 < uVar12) {
              if (iVar14 == -1) {
                return;
              }
              func_0x000106aec660();
              func_0x000106aec654();
              piVar8 = piVar9;
              func_0x000106aec660();
              piVar7 = piVar8;
              func_0x0001001d5d14();
              if (piVar7 == (int *)0x0) goto LAB_106aec308;
              iVar14 = piVar8[4];
              piVar8 = piVar7;
              goto joined_r0x000106aec2cc;
            }
          }
          piVar9 = (int *)((long)piVar9 + (ulong)(uint)piVar9[1]);
        }
      }
    }
    uVar15 = (ulong)(iVar14 + 1);
    piVar8 = piVar9;
  } while( true );
joined_r0x000106aec2cc:
  if (iVar14 == 0) {
LAB_106aec308:
    uVar10 = 0;
LAB_106aec30c:
    lVar1 = uVar10 + (long)piVar9;
    if (lVar1 != 0) {
      __dyld_get_image_name();
      *param_2 = uVar15;
      param_2[1] = (ulong)unaff_x23;
      piVar7 = unaff_x23;
      func_0x0001001d5d14();
      if (piVar7 != (int *)0x0) {
        uVar15 = 0xffffffffffffffff;
        for (iVar14 = 0; iVar14 != unaff_x23[4]; iVar14 = iVar14 + 1) {
          if (*piVar7 == 2) {
            puVar13 = (uint *)0x0;
            puVar2 = (uint *)(lVar1 + (ulong)(uint)piVar7[2]);
            for (uVar10 = (ulong)(uint)piVar7[3]; uVar10 != 0; uVar10 = uVar10 - 1) {
              uVar12 = *(ulong *)(puVar2 + 2);
              if ((uVar12 != 0) &&
                 (uVar6 = ((long)param_1 - (long)piVar9) - uVar12,
                 uVar12 <= (ulong)((long)param_1 - (long)piVar9) && uVar6 <= uVar15)) {
                uVar15 = uVar6;
                puVar13 = puVar2;
              }
              puVar2 = puVar2 + 4;
            }
            if (puVar13 != (uint *)0x0) {
              uVar5 = piVar7[4];
              param_2[3] = *(long *)(puVar13 + 2) + (long)piVar9;
              if (*(short *)((long)puVar13 + 6) == 0x10) {
                pcVar11 = (char *)0x0;
              }
              else {
                pcVar3 = (char *)(lVar1 + (ulong)uVar5 + (ulong)*puVar13);
                param_2[2] = (ulong)pcVar3;
                pcVar11 = pcVar3 + 1;
                if (*pcVar3 != '_') {
                  return;
                }
              }
              param_2[2] = (ulong)pcVar11;
              return;
            }
          }
          piVar7 = (int *)((long)piVar7 + (ulong)(uint)piVar7[1]);
        }
      }
    }
    return;
  }
  if (*piVar7 == 0x19) {
    func_0x000106aec674();
    if ((int)piVar8 == 0) {
      uVar10 = *(long *)(piVar7 + 6) - *(long *)(piVar7 + 10);
      goto LAB_106aec30c;
    }
  }
  else if ((*piVar7 == 1) && (func_0x000106aec674(), (int)piVar8 == 0)) {
    uVar10 = (ulong)(uint)(piVar7[6] - piVar7[8]);
    goto LAB_106aec30c;
  }
  piVar7 = (int *)((long)piVar7 + (ulong)(uint)piVar7[1]);
  iVar14 = iVar14 + -1;
  goto joined_r0x000106aec2cc;
}



/* Entry: 106aec428; end: 106aec477;  */

bool FUN_106aec428(uint *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uStack_68;
  
  puVar5 = param_1;
  __dyld_get_image_header();
  if (puVar5 == (uint *)0x0) {
    return false;
  }
  __dyld_get_image_name();
  puVar6 = puVar5;
  func_0x0001001d5d14();
  if (puVar6 != (uint *)0x0) {
    uVar9 = 0;
    puVar10 = (uint *)0x0;
    uVar12 = 0;
    uVar11 = 0;
    puVar1 = puVar6;
    puVar7 = puVar6;
    for (uVar2 = puVar5[4]; uVar2 != 0; uVar2 = uVar2 - 1) {
      uVar3 = *puVar1;
      if (uVar3 == 0x1b) {
        puVar10 = puVar1 + 2;
      }
      else if (uVar3 == 0xd) {
        uVar9 = (ulong)puVar1[4];
      }
      else if (uVar3 == 0x19) {
        func_0x000106aec668();
        if ((int)puVar7 == 0) {
          uVar12 = *(ulong *)(puVar1 + 6);
          uVar11 = *(ulong *)(puVar1 + 8);
        }
      }
      else if ((uVar3 == 1) && (func_0x000106aec668(), (int)puVar7 == 0)) {
        uVar12 = (ulong)puVar1[6];
        uVar11 = (ulong)puVar1[7];
      }
      puVar1 = (uint *)((long)puVar1 + (ulong)puVar1[1]);
    }
    *param_2 = puVar5;
    param_2[1] = uVar12;
    param_2[2] = uVar11;
    param_2[3] = param_1;
    param_2[4] = puVar10;
    param_2[5] = *(undefined8 *)(puVar5 + 1);
    param_2[6] = uVar9 >> 0x10;
    param_2[7] = uVar9 >> 8 & 0xff;
    param_2[8] = uVar9 & 0xff;
    uStack_68 = 0;
    _getsectiondata(puVar5,&UNK_10f3b2c13,&UNK_10f3b2cc5,&uStack_68);
    if ((((puVar5 != (uint *)0x0) && (0x27 < uStack_68)) &&
        (puVar10 = puVar5, func_0x000106aef390(), (int)puVar10 != 0)) &&
       (((*puVar5 & 0xfffffffe) == 4 &&
        ((lVar8 = *(long *)(puVar5 + 2), lVar8 != 0 || (*(long *)(puVar5 + 8) != 0)))))) {
      FUN_106aec610();
      if ((int)lVar8 != 0) {
        param_2[9] = *(undefined8 *)(puVar5 + 2);
      }
      iVar4 = (int)*(undefined8 *)(puVar5 + 8);
      FUN_106aec610();
      if (iVar4 != 0) {
        param_2[10] = *(undefined8 *)(puVar5 + 8);
      }
    }
  }
  return puVar6 != (uint *)0x0;
}



/* Entry: 106aec478; end: 106aec60f;  */

bool FUN_106aec478(uint *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uStack_68;
  
  puVar5 = param_1;
  func_0x0001001d5d14();
  if (puVar5 != (uint *)0x0) {
    uVar8 = 0;
    puVar9 = (uint *)0x0;
    uVar11 = 0;
    uVar10 = 0;
    puVar1 = puVar5;
    puVar6 = puVar5;
    for (uVar2 = param_1[4]; uVar2 != 0; uVar2 = uVar2 - 1) {
      uVar3 = *puVar1;
      if (uVar3 == 0x1b) {
        puVar9 = puVar1 + 2;
      }
      else if (uVar3 == 0xd) {
        uVar8 = (ulong)puVar1[4];
      }
      else if (uVar3 == 0x19) {
        func_0x000106aec668();
        if ((int)puVar6 == 0) {
          uVar11 = *(ulong *)(puVar1 + 6);
          uVar10 = *(ulong *)(puVar1 + 8);
        }
      }
      else if ((uVar3 == 1) && (func_0x000106aec668(), (int)puVar6 == 0)) {
        uVar11 = (ulong)puVar1[6];
        uVar10 = (ulong)puVar1[7];
      }
      puVar1 = (uint *)((long)puVar1 + (ulong)puVar1[1]);
    }
    *param_3 = param_1;
    param_3[1] = uVar11;
    param_3[2] = uVar10;
    param_3[3] = param_2;
    param_3[4] = puVar9;
    param_3[5] = *(undefined8 *)(param_1 + 1);
    param_3[6] = uVar8 >> 0x10;
    param_3[7] = uVar8 >> 8 & 0xff;
    param_3[8] = uVar8 & 0xff;
    uStack_68 = 0;
    _getsectiondata(param_1,&UNK_10f3b2c13,&UNK_10f3b2cc5,&uStack_68);
    if ((((param_1 != (uint *)0x0) && (0x27 < uStack_68)) &&
        (puVar9 = param_1, func_0x000106aef390(), (int)puVar9 != 0)) &&
       (((*param_1 & 0xfffffffe) == 4 &&
        ((lVar7 = *(long *)(param_1 + 2), lVar7 != 0 || (*(long *)(param_1 + 8) != 0)))))) {
      FUN_106aec610();
      if ((int)lVar7 != 0) {
        param_3[9] = *(undefined8 *)(param_1 + 2);
      }
      iVar4 = (int)*(undefined8 *)(param_1 + 8);
      FUN_106aec610();
      if (iVar4 != 0) {
        param_3[10] = *(undefined8 *)(param_1 + 8);
      }
    }
  }
  return puVar5 != (uint *)0x0;
}



/* Entry: 106aec610; end: 106aec653;  */

void FUN_106aec610(char *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  ulong uVar5;
  
  if (param_1 != (char *)0x0) {
    pcVar4 = param_1;
    FUN_106aef31c(param_1,0x401);
    uVar3 = (uint)pcVar4;
    if (uVar3 != 0) {
      uVar5 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
      do {
        bVar2 = uVar5 == 0;
        uVar5 = uVar5 - 1;
        if (bVar2) {
          return;
        }
        cVar1 = *param_1;
        param_1 = param_1 + 1;
      } while (cVar1 != '\0');
    }
  }
  return;
}



/* Entry: 106aec654; end: 106aec67f;  */

void FUN_106aec654(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbda24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___dyld_get_image_vmaddr_slide_11034be58)();
  return;
}



/* Entry: 106aec680; end: 106aec6a7;  */

long FUN_106aec680(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  lVar1 = 0;
  if ((param_1 != 0) && (func_0x000106aecea4(), lVar1 = unaff_x19, param_1 != 0)) {
    lVar1 = param_1 + 1;
  }
  return lVar1;
}



/* Entry: 106aec6a8; end: 106aec71f;  */

uint FUN_106aec6a8(int *param_1,ulong param_2)

{
  uint uVar1;
  undefined8 extraout_x8;
  
  _remove();
  uVar1 = (uint)param_1;
  if (((int)uVar1 < 0) && (((param_2 & 1) != 0 || (___error(), *param_1 != 2)))) {
    ___error();
    func_0x000106aece74();
    func_0x000106aece60();
    func_0x000106aee914(extraout_x8);
  }
  return ~uVar1 >> 0x1f;
}



/* Entry: 106aec720; end: 106aec7ab;  */

long FUN_106aec720(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auStack_f8 [4];
  ushort uStack_f4;
  
  lVar1 = param_1;
  func_0x000106aec754();
  if ((int)lVar1 == 0) {
    return lVar1;
  }
  _bzero(auStack_f8,0x90);
  lVar1 = param_1;
  _stat(param_1,auStack_f8);
  if ((int)lVar1 == 0) {
    if ((uStack_f4 & 0xf000) == 0x4000) {
      lVar1 = param_1;
      _opendir();
      if (lVar1 == 0) {
        ___error();
        func_0x000106aece74();
        func_0x000106aece60();
        func_0x000106aece90();
        func_0x000106aee914();
        plVar4 = (long *)0x0;
        plVar6 = (long *)0x0;
      }
      else {
        plVar4 = (long *)0xffffffffffffffff;
        do {
          lVar5 = lVar1;
          _readdir();
          plVar4 = (long *)((long)plVar4 + 1);
        } while (lVar5 != 0);
        _closedir(lVar1);
        if ((int)plVar4 != 0) {
          _opendir();
          if (param_1 != 0) {
            plVar6 = plVar4;
            _calloc(plVar4,8);
            plVar7 = plVar4;
            plVar2 = plVar6;
            while (lVar1 = param_1, _readdir(), lVar1 != 0) {
              if (plVar7 == (long *)0x0) {
                func_0x000106aece7c();
                func_0x000106aee914();
                break;
              }
              lVar1 = lVar1 + 0x15;
              _strdup();
              *plVar2 = lVar1;
              plVar7 = (long *)((long)plVar7 + -1);
              plVar2 = plVar2 + 1;
            }
            _closedir(param_1);
            goto LAB_106aec960;
          }
          ___error();
          func_0x000106aece74();
          func_0x000106aece60();
          func_0x000106aece90();
          func_0x000106aee914();
        }
        plVar6 = (long *)0x0;
      }
LAB_106aec960:
      plVar2 = (long *)0x1f4;
      _malloc(500);
      _snprintf();
      plVar7 = plVar2;
      _strlen(plVar2);
      if (plVar6 != (long *)0x0) {
        for (lVar1 = 0; ((ulong)plVar4 & 0xffffffff) << 3 != lVar1; lVar1 = lVar1 + 8) {
          lVar5 = *(long *)((long)plVar6 + lVar1);
          if ((lVar5 != 0) && (lVar3 = lVar5, func_0x000106aec754(), (int)lVar3 != 0)) {
            _strncpy((long)plVar2 + (long)plVar7,lVar5,(long)(500 - (int)plVar7));
            FUN_106aec7ac(plVar2,1);
          }
        }
        _free(plVar2);
        for (lVar1 = 0; plVar2 = plVar6, ((ulong)plVar4 & 0xffffffff) * 8 - lVar1 != 0;
            lVar1 = lVar1 + 8) {
          _free(*(undefined8 *)((long)plVar6 + lVar1));
        }
      }
      _free(plVar2);
    }
    else {
      if (-0x7001 < (short)uStack_f4) {
        func_0x000106aece7c();
        goto LAB_106aec814;
      }
      FUN_106aec6a8(param_1,0);
    }
    lVar1 = 1;
  }
  else {
    ___error();
    func_0x000106aece74();
    func_0x000106aece60();
    func_0x000106aece90();
LAB_106aec814:
    func_0x000106aee914();
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 106aec7ac; end: 106aeca4f;  */

undefined8 FUN_106aec7ac(long param_1,ulong param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined1 auStack_f8 [4];
  ushort uStack_f4;
  
  _bzero(auStack_f8,0x90);
  lVar8 = param_1;
  _stat(param_1,auStack_f8);
  if ((int)lVar8 == 0) {
    if ((uStack_f4 & 0xf000) == 0x4000) {
      lVar8 = param_1;
      _opendir();
      if (lVar8 == 0) {
        ___error();
        func_0x000106aece74();
        func_0x000106aece60();
        func_0x000106aece90();
        func_0x000106aee914();
        plVar4 = (long *)0x0;
        plVar6 = (long *)0x0;
      }
      else {
        plVar4 = (long *)0xffffffffffffffff;
        do {
          lVar5 = lVar8;
          _readdir();
          plVar4 = (long *)((long)plVar4 + 1);
        } while (lVar5 != 0);
        _closedir(lVar8);
        if ((int)plVar4 != 0) {
          lVar8 = param_1;
          _opendir();
          if (lVar8 != 0) {
            plVar6 = plVar4;
            _calloc(plVar4,8);
            plVar7 = plVar4;
            plVar2 = plVar6;
            while (lVar5 = lVar8, _readdir(), lVar5 != 0) {
              if (plVar7 == (long *)0x0) {
                func_0x000106aece7c();
                func_0x000106aee914();
                break;
              }
              lVar5 = lVar5 + 0x15;
              _strdup();
              *plVar2 = lVar5;
              plVar7 = (long *)((long)plVar7 + -1);
              plVar2 = plVar2 + 1;
            }
            _closedir(lVar8);
            goto LAB_106aec960;
          }
          ___error();
          func_0x000106aece74();
          func_0x000106aece60();
          func_0x000106aece90();
          func_0x000106aee914();
        }
        plVar6 = (long *)0x0;
      }
LAB_106aec960:
      plVar2 = (long *)0x1f4;
      _malloc(500);
      _snprintf();
      plVar7 = plVar2;
      _strlen(plVar2);
      if (plVar6 != (long *)0x0) {
        for (lVar8 = 0; ((ulong)plVar4 & 0xffffffff) << 3 != lVar8; lVar8 = lVar8 + 8) {
          lVar5 = *(long *)((long)plVar6 + lVar8);
          if ((lVar5 != 0) && (lVar3 = lVar5, func_0x000106aec754(), (int)lVar3 != 0)) {
            _strncpy((long)plVar2 + (long)plVar7,lVar5,(long)(500 - (int)plVar7));
            FUN_106aec7ac(plVar2,1);
          }
        }
        _free(plVar2);
        for (lVar8 = 0; plVar2 = plVar6, ((ulong)plVar4 & 0xffffffff) * 8 - lVar8 != 0;
            lVar8 = lVar8 + 8) {
          _free(*(undefined8 *)((long)plVar6 + lVar8));
        }
      }
      _free(plVar2);
      if ((param_2 & 1) != 0) goto LAB_106aeca20;
    }
    else {
      if (-0x7001 < (short)uStack_f4) {
        func_0x000106aece7c();
        goto LAB_106aec814;
      }
LAB_106aeca20:
      FUN_106aec6a8(param_1,0);
    }
    uVar1 = 1;
  }
  else {
    ___error();
    func_0x000106aece74();
    func_0x000106aece60();
    func_0x000106aece90();
LAB_106aec814:
    func_0x000106aee914();
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 106aeca50; end: 106aecacb;  */

uint FUN_106aeca50(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = param_4;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  _open(param_2,0xa02);
  uVar1 = (uint)param_2;
  *(uint *)(param_1 + 2) = uVar1;
  if ((int)uVar1 < 0) {
    ___error();
    func_0x000106aece74();
    func_0x000106aece60();
    func_0x000106aece90();
    func_0x000106aee914();
  }
  return ~uVar1 >> 0x1f;
}



/* Entry: 106aecacc; end: 106aecb4b;  */

void FUN_106aecacc(long param_1)

{
  if (0 < *(int *)(param_1 + 0x10)) {
    func_0x000106aecb08();
    _close(*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  return;
}



/* Entry: 106aecb4c; end: 106aecbdf;  */

bool FUN_106aecb4c(long *param_1,long param_2,int param_3)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  if (iVar2 - *(int *)((long)param_1 + 0xc) < param_3) {
    func_0x000106aecb08(param_1);
    iVar2 = (int)param_1[1];
  }
  if (param_3 <= iVar2) {
    _memcpy(*param_1 + (long)*(int *)((long)param_1 + 0xc),param_2,(long)param_3);
    *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + param_3;
    return true;
  }
  lVar1 = param_1[2];
  do {
    if (param_3 < 1) {
code_r0x0001001df73c:
      return param_3 < 1;
    }
    iVar2 = (int)lVar1;
    func_0x000107c616d4((int)lVar1,param_2,param_3);
    if (iVar2 == -1) {
      func_0x000107c60e5c();
      func_0x000106aece74();
      func_0x000106aece60();
      func_0x000106aeceb0();
      func_0x000106aee914();
      goto code_r0x0001001df73c;
    }
    param_3 = param_3 - iVar2;
    param_2 = param_2 + iVar2;
  } while( true );
}



/* Entry: 106aecbe0; end: 106aecca3;  */

undefined8 FUN_106aecbe0(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 extraout_x8;
  
  if (0 < (int)*(uint *)((long)param_1 + 0xc)) {
    _memmove(*param_1,*param_1 + (ulong)*(uint *)((long)param_1 + 0xc));
    lVar2 = (long)(int)param_1[2] - (long)*(int *)((long)param_1 + 0xc);
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    *(int *)(param_1 + 2) = (int)lVar2;
    *(undefined1 *)(*param_1 + lVar2) = 0;
  }
  if (0 < (int)param_1[1] - (int)param_1[2]) {
    iVar1 = *(int *)((long)param_1 + 0x14);
    _read(iVar1,*param_1 + (long)(int)param_1[2]);
    if (iVar1 < 0) {
      ___error();
      func_0x000106aece74();
      func_0x000106aece60();
      func_0x000106aee914(extraout_x8);
      return 0;
    }
    lVar2 = (long)(int)param_1[2] + (long)iVar1;
    *(int *)(param_1 + 2) = (int)lVar2;
    *(undefined1 *)(*param_1 + lVar2) = 0;
  }
  return 1;
}



/* Entry: 106aecca4; end: 106aecd97;  */

undefined8 FUN_106aecca4(long *param_1,undefined8 param_2,long param_3,int *param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = 0;
  iVar8 = *param_4;
  do {
    if (iVar8 < 1) break;
    iVar3 = (int)param_1[2] - *(int *)((long)param_1 + 0xc);
    if (iVar8 <= iVar3) {
      iVar3 = iVar8;
    }
    lVar1 = *param_1 + (long)*(int *)((long)param_1 + 0xc);
    lVar5 = lVar1;
    _strchr(lVar1,param_2);
    iVar4 = (int)lVar5 - (int)lVar1;
    iVar2 = iVar3;
    if (iVar4 + 1 < iVar3) {
      iVar2 = iVar4 + 1;
    }
    if (lVar5 != 0) {
      iVar3 = iVar2;
    }
    _memcpy(param_3,lVar1,(long)iVar3);
    *(int *)((long)param_1 + 0xc) = iVar3 + *(int *)((long)param_1 + 0xc);
    iVar7 = iVar3 + iVar7;
    if (lVar5 != 0) {
      uVar6 = 1;
      goto LAB_106aecd78;
    }
    param_3 = param_3 + iVar3;
    iVar8 = iVar8 - iVar3;
  } while ((iVar8 < 1) || (FUN_106aecbe0(param_1), (int)param_1[2] != *(int *)((long)param_1 + 0xc))
          );
  uVar6 = 0;
LAB_106aecd78:
  *param_4 = iVar7;
  return uVar6;
}



/* Entry: 106aecd98; end: 106aece2b;  */

uint FUN_106aecd98(undefined8 *param_1,undefined8 param_2,undefined1 *param_3,int param_4)

{
  uint uVar1;
  
  *param_3 = 0;
  param_3[(long)param_4 + -1] = 0;
  *param_1 = param_3;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(int *)(param_1 + 1) = (int)((long)param_4 + -1);
  _open(param_2,0);
  uVar1 = (uint)param_2;
  *(uint *)((long)param_1 + 0x14) = uVar1;
  if ((int)uVar1 < 0) {
    ___error();
    func_0x000106aece74();
    func_0x000106aece60();
    func_0x000106aece90();
    func_0x000106aee914();
  }
  else {
    FUN_106aecbe0(param_1);
  }
  return ~uVar1 >> 0x1f;
}



/* Entry: 106aece2c; end: 106aece5f;  */

void FUN_106aece2c(long param_1)

{
  if (0 < *(int *)(param_1 + 0x14)) {
    _close();
    *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  }
  return;
}



/* Entry: 106aece60; end: 106aececf;  */

void FUN_106aece60(void)

{
  return;
}



/* Entry: 106aeced0; end: 106aecfa3;  */

undefined * FUN_106aeced0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = (undefined *)0x0;
  if ((param_1 != 0) && (param_2 != 0)) {
    _strncmp(param_1,param_2);
    if ((int)param_1 == 0) {
      puVar3 = (undefined *)0x1;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      _NSClassFromString();
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      _NSClassFromString();
      func_0x00010c080080(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
  }
  return puVar3;
}



/* Entry: 106aecfa4; end: 106aecfcb;  */

undefined * FUN_106aecfa4(int param_1)

{
  if (param_1 - 1U < 5) {
    return (&PTR_DAT_11095fc78)[param_1 - 1U];
  }
  return &UNK_10f3b3175;
}



/* Entry: 106aecfcc; end: 106aed08b;  */

void FUN_106aecfcc(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  
  func_0x0001001e02c0();
  func_0x0001001df548();
  if ((int)param_1 == 0) {
    func_0x0001001e0a0c();
    func_0x0001001e0a1c();
    func_0x0001001e0a28();
  }
  func_0x0001001e0914(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = param_1;
  func_0x0001001df548();
  if ((int)puVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001001df6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_1)(&UNK_10f3b31ac,4,param_1[1]);
    return;
  }
  return;
}



/* Entry: 106aed08c; end: 106aed153;  */

void FUN_106aed08c(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = param_1;
  UNRECOVERED_JUMPTABLE = param_4;
  func_0x000106aed060();
  if (((int)uVar1 == 0) && (func_0x000106aed0d8(param_1,param_3,param_4), (int)param_1 == 0)) {
    func_0x000106aed6c8();
                    /* WARNING: Could not recover jumptable at 0x0001001e31d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 106aed154; end: 106aed1ab;  */

void FUN_106aed154(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long extraout_x8;
  
  iVar2 = *(int *)(param_1 + 2);
  if (-1 < iVar2) {
    puVar1 = param_1;
    func_0x0001001df548();
    if ((int)puVar1 != 0) {
      return;
    }
    iVar2 = *(int *)(param_1 + 2);
  }
  func_0x0001001df6b4(iVar2);
  *(undefined1 *)(extraout_x8 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0xdc) = 1;
                    /* WARNING: Could not recover jumptable at 0x0001001df6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)(&UNK_10f3b31b3,1,param_1[1]);
  return;
}



/* Entry: 106aed1ac; end: 106aed2f7;  */

undefined8 FUN_106aed1ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 in_ZR;
  undefined8 uVar2;
  undefined1 **ppuVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  long lStack_768;
  undefined1 **ppuStack_760;
  undefined1 *puStack_758;
  undefined8 uStack_750;
  undefined4 uStack_748;
  undefined1 uStack_744;
  undefined1 uStack_743;
  undefined2 uStack_742;
  code *pcStack_740;
  undefined1 *puStack_738;
  undefined1 *puStack_730;
  undefined8 *puStack_728;
  undefined8 uStack_720;
  undefined1 *puStack_718;
  undefined8 uStack_710;
  undefined1 *puStack_708;
  long *plStack_700;
  undefined1 auStack_6f8 [76];
  undefined1 auStack_6ac [1000];
  undefined1 auStack_2c4 [500];
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
  undefined4 uStack_70;
  undefined8 uStack_68;
  
  func_0x0001001e02c0();
  puVar4 = (undefined8 *)0x48;
  uStack_68 = extraout_x8;
  _memcpy(auStack_6f8,&PTR_FUN_11095fbe8);
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  _bzero(auStack_2c4,500);
  _bzero(auStack_6ac,1000);
  uStack_720 = 100;
  uStack_710 = 500;
  uVar2 = param_3;
  puStack_730 = auStack_2c4;
  puStack_728 = &uStack_d0;
  puStack_718 = auStack_2c4;
  puStack_708 = auStack_6f8;
  _open(param_3,0);
  ppuStack_760 = &puStack_738;
  uStack_748 = (undefined4)uVar2;
  uStack_744 = 0;
  uStack_743 = (undefined1)param_4;
  uStack_742 = 0;
  pcStack_740 = FUN_106aed48c;
  plStack_700 = &lStack_768;
  iVar1 = *(int *)(param_1 + 0x10);
  lStack_768 = param_1;
  puStack_758 = auStack_6ac;
  uStack_750 = param_3;
  puStack_738 = auStack_2c4;
  FUN_106aed48c(&lStack_768);
  ppuVar3 = &puStack_738;
  func_0x00010018a17c(param_2,ppuVar3);
  _close(uVar2);
  if ((int)param_4 != 0) {
    while( true ) {
      in_ZR = *(int *)(param_1 + 0x10) == iVar1;
      if (*(int *)(param_1 + 0x10) <= iVar1) break;
      func_0x0001001e30cc();
    }
  }
  func_0x0001001e0914(uStack_68);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x0001001e0a40(*puVar4,uVar2,ppuVar3);
  FUN_106aed6a4();
  return param_4;
}



/* Entry: 106aed2f8; end: 106aed39f;  */

void FUN_106aed2f8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  func_0x0001001e0a40(*param_3,param_1,param_2);
  FUN_106aed6a4();
  return;
}



/* Entry: 106aed3a0; end: 106aed3eb;  */

undefined8 FUN_106aed3a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_3;
  uVar1 = param_2;
  _strlen(param_2);
  func_0x0001001e3054(uVar2,param_1,param_2,uVar1);
  FUN_106aed6a4();
  return param_2;
}



/* Entry: 106aed3ec; end: 106aed483;  */

void FUN_106aed3ec(void)

{
  func_0x000106aed6b8();
  func_0x0001001df65c();
  func_0x000106aed6a8();
  return;
}



/* Entry: 106aed484; end: 106aed48b;  */

undefined8 FUN_106aed484(void)

{
  return 0;
}



/* Entry: 106aed48c; end: 106aed55f;  */

void FUN_106aed48c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    uVar1 = **(undefined8 **)(param_1 + 8);
    iVar5 = (int)(*(undefined8 **)(param_1 + 8))[1];
    iVar3 = iVar5 - (int)lVar2;
    iVar5 = iVar5 - (int)uVar1;
    if (iVar5 < iVar3 / 2) {
      iVar3 = iVar3 - iVar5;
      _memcpy(lVar2,uVar1,(long)iVar5);
      **(long **)(param_1 + 8) = lVar2;
      iVar4 = *(int *)(param_1 + 0x20);
      _read(iVar4,lVar2 + iVar5,iVar3);
      if (iVar4 < iVar3) {
        if (iVar4 < 0) {
          ___error();
          _strerror();
          func_0x000106aee914(&UNK_10f3b31bb,&UNK_10f3b31c1,0x4be,&UNK_10f3b31fe,&UNK_10f3b3238);
        }
        *(undefined1 *)(param_1 + 0x24) = 1;
      }
    }
  }
  return;
}



/* Entry: 106aed560; end: 106aed6a3;  */

undefined8 FUN_106aed560(long param_1,undefined8 param_2,long param_3,int param_4,int param_5)

{
  int iVar1;
  undefined1 in_ZR;
  undefined8 uVar2;
  undefined8 extraout_x8;
  long lStack_1500;
  long *plStack_14f8;
  long lStack_14f0;
  undefined8 uStack_14e8;
  undefined4 uStack_14e0;
  undefined1 uStack_14dc;
  undefined1 uStack_14db;
  undefined2 uStack_14da;
  code *pcStack_14d8;
  long lStack_14d0;
  long lStack_14c8;
  undefined8 *puStack_14c0;
  undefined8 uStack_14b8;
  undefined1 *puStack_14b0;
  undefined8 uStack_14a8;
  undefined1 *puStack_14a0;
  undefined1 *puStack_1498;
  undefined1 auStack_1490 [72];
  undefined1 auStack_1448 [5000];
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
  undefined4 uStack_60;
  undefined8 uStack_58;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001001e02c0();
  uStack_58 = extraout_x8;
  _memcpy(auStack_1490,&PTR_FUN_11095fc30,0x48);
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  _bzero(auStack_1448,5000);
  lStack_14c8 = param_3 + param_4;
  puStack_14c0 = &uStack_c0;
  uStack_14b8 = 100;
  uStack_14a8 = 5000;
  plStack_14f8 = &lStack_14d0;
  uStack_14e8 = 0;
  uStack_14e0 = 0;
  uStack_14dc = 0;
  uStack_14db = (undefined1)param_5;
  uStack_14da = 0;
  pcStack_14d8 = FUN_106aed6a4;
  iVar1 = *(int *)(param_1 + 0x10);
  lStack_1500 = param_1;
  lStack_14f0 = param_3;
  lStack_14d0 = param_3;
  puStack_14b0 = auStack_1448;
  puStack_14a0 = auStack_1490;
  puStack_1498 = (undefined1 *)&lStack_1500;
  func_0x00010018a17c(param_2,&lStack_14d0);
  uVar2 = param_2;
  if (param_5 != 0) {
    while( true ) {
      in_ZR = *(int *)(param_1 + 0x10) == iVar1;
      if (*(int *)(param_1 + 0x10) <= iVar1) break;
      func_0x0001001e30cc();
    }
  }
  func_0x0001001e0914(uStack_58);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  return uVar2;
}



/* Entry: 106aed6a4; end: 106aed6db;  */

void FUN_106aed6a4(void)

{
  return;
}



/* Entry: 106aed6dc; end: 106aed70b; +[KSJSONCodec codecWithEncodeOptions:decodeOptions:] */

void FUN_106aed6dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_alloc();
  func_0x00010c00fb20(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106aed70c; end: 106aed96f; -[KSJSONCodec initWithEncodeOptions:decodeOptions:] */

undefined8 * FUN_106aed70c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f4cb8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1819e0(puVar1);
    func_0x000106aee6f4();
    _malloc(0x48);
    puVar2 = puVar1;
    func_0x00010c175c20();
    func_0x000106aee6ec();
    puVar2[6] = 0x106aed860;
    func_0x000106aee6ec();
    puVar2[5] = 0x106aed8bc;
    func_0x000106aee6ec();
    *puVar2 = 0x106aed918;
    func_0x000106aee6ec();
    puVar2[7] = FUN_106aed970;
    func_0x000106aee6ec();
    puVar2[8] = FUN_106aeda24;
    func_0x000106aee6ec();
    puVar2[1] = FUN_106aeda2c;
    func_0x000106aee6ec();
    puVar2[2] = FUN_106aeda9c;
    func_0x000106aee6ec();
    puVar2[3] = 0x106aedaf4;
    func_0x000106aee6ec();
    puVar2[4] = 0x106aedba4;
    func_0x00010c1e1720(puVar1);
    func_0x00010c2068a0(puVar1);
    func_0x00010c1a9d00(puVar1);
    func_0x00010c1a9d20(puVar1);
  }
  return puVar1;
}



/* Entry: 106aed970; end: 106aeda23;  */

undefined8 FUN_106aed970(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000106aee778(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x00010bf99220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196ee0(param_1,param_2,puVar2);
    func_0x000106aee6dc();
    uVar4 = 5;
  }
  else {
    func_0x00010c12cd60(*(undefined8 *)(param_1 + 0x20));
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      uVar4 = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0dfd20(uVar3,param_2,lVar1 + -1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar4 = 0;
      *(undefined8 *)(param_1 + 0x18) = uVar3;
    }
  }
  func_0x000106aee718();
  return uVar4;
}



/* Entry: 106aeda24; end: 106aeda2b;  */

undefined8 FUN_106aeda24(void)

{
  return 0;
}



/* Entry: 106aeda2c; end: 106aeda9b;  */

undefined8 FUN_106aeda2c(undefined8 param_1,undefined8 param_2)

{
  FUN_106aee524();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106aee7c4();
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106aee708();
  FUN_106aee554();
  func_0x000106aee6e4();
  func_0x000106aee6dc();
  return param_2;
}



/* Entry: 106aeda9c; end: 106aedc03;  */

undefined8 FUN_106aeda9c(undefined8 param_1)

{
  FUN_106aee524();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106aee7c4();
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106aee6c8();
  func_0x000106aee6dc();
  func_0x000106aee6e4();
  return param_1;
}



/* Entry: 106aedc04; end: 106aedc4b; -[KSJSONCodec dealloc] */

void FUN_106aedc04(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bf286c0();
  _free();
  puStack_28 = PTR_PTR_1126f4cb8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106aedc4c; end: 106aedd73; +[KSJSONCodec encode:options:error:] */

undefined *
FUN_106aedc4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4,
             undefined8 *param_5)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_128 [204];
  undefined1 uStack_5c;
  byte bStack_5b;
  undefined8 uStack_58;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  _bzero(auStack_128,0xd0);
  uStack_5c = 1;
  bStack_5b = param_4 & 1;
  func_0x00010bf3f060();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  uVar3 = param_1;
  FUN_106aedd9c();
  _objc_release(param_3);
  if (param_5 != (undefined8 *)0x0) {
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_5 = param_1;
  }
  uVar1 = (int)uVar3 == 0;
  if (!(bool)uVar1) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  func_0x000106aee6e4();
  func_0x000106aee6dc();
  func_0x000106aee7d0(uStack_58);
  if ((bool)uVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010bf06a40(uVar4);
  return (undefined *)0x0;
}



/* Entry: 106aedd74; end: 106aedd9b;  */

undefined8 FUN_106aedd74(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  func_0x00010bf06a40(param_3,param_2,param_1,param_2);
  return 0;
}



/* Entry: 106aedd9c; end: 106aee237;  */

undefined *
FUN_106aedd9c(undefined *param_1,undefined *param_2,undefined *param_3,undefined *param_4,
             undefined **param_5)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *puVar7;
  undefined *unaff_x25;
  long unaff_x26;
  undefined *puVar8;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined1 auStack_264 [4];
  long lStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_17d [277];
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  puVar6 = param_4;
  _objc_retain();
  uVar4 = (uint)puVar6;
  func_0x000106aee760();
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x000106aee6ac();
  puVar2 = param_3;
  if (((ulong)puVar6 & 1) == 0) {
    func_0x000106aee7c4();
    _objc_opt_class();
    func_0x000106aee6ac();
    if (((ulong)puVar6 & 1) != 0) {
      puVar6 = param_2;
      _CFNumberGetType();
      in_ZR = puVar6 == (undefined *)0x10;
      if (puVar6 < (undefined *)0x11) {
        in_ZR = (1L << ((ulong)puVar6 & 0x3f) & 0x13060U) == 0;
        if (!(bool)in_ZR) {
          puVar6 = param_2;
          func_0x00010bf885a0();
          func_0x000106aee6fc();
          func_0x0001001e1004();
          puVar1 = puVar6;
          goto LAB_106aee0d4;
        }
        in_ZR = puVar6 == (undefined *)0x7;
        if ((bool)in_ZR) {
          puVar6 = param_2;
          func_0x00010bf1f3c0();
          puVar3 = puVar6;
          func_0x000106aee6fc();
          func_0x0001001e0a40();
          puVar1 = puVar6;
          goto LAB_106aee0d4;
        }
      }
      puVar6 = param_2;
      func_0x00010c0b4ca0();
      puVar3 = puVar6;
      func_0x000106aee6fc();
      func_0x0001001e02d0();
      puVar1 = puVar6;
      goto LAB_106aee0d4;
    }
    func_0x000106aee784();
    func_0x000106aee6ac();
    if (((ulong)puVar6 & 1) != 0) {
      func_0x000106aee6fc();
      FUN_106aed154();
      puVar1 = puVar6;
      if ((int)puVar6 == 0) {
        uStack_198 = 0;
        uStack_1a0 = 0;
        uStack_188 = 0;
        uStack_190 = 0;
        lStack_1b8 = 0;
        uStack_1c0 = 0;
        uStack_1a8 = 0;
        puStack_1b0 = (undefined8 *)0x0;
        func_0x000106aee760();
        func_0x000106aee720();
        puVar7 = unaff_x24;
        if (puVar6 != (undefined *)0x0) {
          puVar7 = (undefined *)*puStack_1b0;
          puVar2 = puVar6;
          do {
            unaff_x25 = (undefined *)0x0;
            do {
              in_ZR = (undefined *)*puStack_1b0 == puVar7;
              if (!(bool)in_ZR) {
                _objc_enumerationMutation(param_2);
              }
              puVar3 = (undefined *)0x0;
              param_3 = param_1;
              puVar6 = param_4;
              FUN_106aedd9c(param_1,*(undefined8 *)(lStack_1b8 + (long)unaff_x25 * 8));
              uVar4 = (uint)puVar6;
              puVar6 = param_2;
              puVar1 = param_3;
              if ((int)param_3 != 0) goto LAB_106aede7c;
              unaff_x25 = unaff_x25 + 1;
              in_ZR = unaff_x25 == puVar2;
            } while (unaff_x25 < puVar2);
            func_0x000106aee720();
            puVar2 = param_3;
          } while (param_3 != (undefined *)0x0);
        }
        func_0x000106aee6dc();
        puVar6 = param_4;
        func_0x0001001e3108();
        puVar1 = puVar6;
        unaff_x24 = puVar7;
      }
      goto LAB_106aee0d4;
    }
    func_0x000106aee7a4();
    func_0x000106aee6ac();
    if (((ulong)puVar6 & 1) == 0) {
      puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
      _objc_opt_class();
      func_0x000106aee6ac();
      if (((ulong)puVar6 & 1) != 0) {
        func_0x000106aee6fc();
        func_0x000106aed028();
        puVar1 = puVar6;
        goto LAB_106aee0d4;
      }
      puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
      _objc_opt_class();
      func_0x000106aee6ac();
      if (((ulong)puVar6 & 1) == 0) {
        puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
        _objc_opt_class();
        func_0x000106aee6ac();
        puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
        if (((ulong)puVar6 & 1) == 0) {
          puVar6 = param_2;
          _objc_opt_class();
          puStack_210 = puVar6;
          func_0x000106aee778();
          param_5 = &PTR____CFConstantStringClassReference_110e70318;
          uVar4 = 0;
          puVar6 = puVar2;
          func_0x00010bf99220();
          _objc_retainAutoreleasedReturnValue();
          func_0x000106aee768();
          func_0x000106aee6e4();
          param_4 = puVar2;
          puVar1 = (undefined *)0x5;
        }
        else {
          _objc_retainAutorelease(param_2);
          _objc_retain();
          puVar3 = param_2;
          func_0x00010bf25f00();
          unaff_x24 = param_2;
          func_0x00010c08fa60();
          puVar6 = unaff_x24;
          func_0x000106aee6dc();
          func_0x000106aee6fc();
          puVar2 = unaff_x24;
          FUN_106aed08c();
          uVar4 = (uint)puVar2;
          puVar1 = puVar6;
        }
        goto LAB_106aee0d4;
      }
      func_0x00010c26f320(param_2);
      func_0x0001001d5b6c((long)(double)CONCAT17(in_register_00005007,
                                                 CONCAT16(in_register_00005006,
                                                          CONCAT15(in_register_00005005,
                                                                   CONCAT14(in_register_00005004,
                                                                            CONCAT13(
                                                  in_register_00005003,
                                                  CONCAT12(in_register_00005002,
                                                           CONCAT11(in_register_00005001,in_b0))))))
                                                ),auStack_17d);
      puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
      _strnlen(auStack_17d,0x14);
      puVar7 = puVar3;
      func_0x00010bf64a00();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar7;
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      func_0x000106aee790();
      puVar6 = puVar1;
      func_0x000106aee6fc();
      uVar4 = (uint)puVar6;
      func_0x0001001e3054();
      puVar6 = puVar7;
    }
    else {
      func_0x000106aee6fc();
      func_0x0001001df65c();
      puVar1 = puVar6;
      if ((int)puVar6 != 0) goto LAB_106aee0d4;
      puVar6 = param_2;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      in_ZR = param_1[9] == '\x01';
      if ((bool)in_ZR) {
        puVar3 = PTR_s_compare__1125ae690;
        func_0x00010c246d00();
        _objc_retainAutoreleasedReturnValue();
        func_0x000106aee6f4();
      }
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      lStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1e8 = 0;
      plStack_1f0 = (long *)0x0;
      puVar7 = puVar6;
      _objc_retain();
      func_0x000106aee734();
      puVar2 = puVar6;
      if (puVar7 != (undefined *)0x0) {
        unaff_x26 = *plStack_1f0;
        do {
          puVar8 = (undefined *)0x0;
          do {
            in_ZR = *plStack_1f0 == unaff_x26;
            if (!(bool)in_ZR) {
              _objc_enumerationMutation(puVar6);
            }
            puVar3 = *(undefined **)(lStack_1f8 + (long)puVar8 * 8);
            unaff_x25 = param_2;
            func_0x00010c296f60();
            _objc_retainAutoreleasedReturnValue();
            puVar1 = param_1;
            puVar5 = param_4;
            FUN_106aedd9c(param_1,unaff_x25);
            uVar4 = (uint)puVar5;
            unaff_x24 = unaff_x25;
            _objc_release();
            if ((int)puVar1 != 0) {
              func_0x000106aee6f4();
              goto LAB_106aede7c;
            }
            puVar8 = puVar8 + 1;
            in_ZR = puVar8 == puVar7;
          } while (puVar8 < puVar7);
          func_0x000106aee734();
          puVar7 = unaff_x24;
        } while (unaff_x24 != (undefined *)0x0);
      }
      func_0x000106aee6f4();
      puVar1 = param_4;
      func_0x0001001e3108();
      puVar7 = unaff_x24;
    }
  }
  else {
    puVar7 = param_2;
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar7;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    func_0x000106aee790();
    puVar3 = puVar1;
    func_0x000106aee6fc();
    uVar4 = (uint)puVar3;
    func_0x0001001e3054();
    in_ZR = (int)puVar1 == 1;
    puVar6 = puVar7;
    puVar3 = unaff_x23;
    if ((bool)in_ZR) {
      puStack_210 = param_2;
      func_0x000106aee778(PTR__OBJC_CLASS___NSError_1126ae858);
      param_5 = &PTR____CFConstantStringClassReference_110e702f8;
      uVar4 = 0;
      func_0x00010bf99220();
      _objc_retainAutoreleasedReturnValue();
      func_0x000106aee768();
      func_0x000106aee6e4();
      puVar3 = unaff_x23;
    }
  }
LAB_106aede7c:
  _objc_release();
  param_3 = puVar2;
  unaff_x24 = puVar7;
LAB_106aee0d4:
  func_0x000106aee6dc();
  func_0x000106aee718();
  func_0x000106aee7d0(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pcStack_218 = FUN_106aee238;
    lStack_260 = unaff_x26;
    puStack_258 = unaff_x25;
    puStack_250 = unaff_x24;
    puStack_248 = puVar1;
    puStack_240 = param_3;
    puStack_238 = param_4;
    puStack_230 = param_2;
    puStack_228 = param_1;
    puStack_220 = &stack0xfffffffffffffff0;
    _objc_retain(puVar3);
    func_0x00010bf3f060();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    func_0x00010bf64b80(PTR__OBJC_CLASS___NSMutableData_1126b4958);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    puVar1 = puVar3;
    func_0x00010c08fa60(puVar3);
    _objc_release(puVar3);
    puVar3 = puVar2;
    _objc_retainAutorelease(puVar2);
    func_0x00010c0d3c60();
    func_0x00010c08fa60(puVar2);
    puVar8 = puVar6;
    func_0x00010bf286c0(puVar6);
    func_0x00010018a69c(puVar7,puVar1,puVar3,puVar2,puVar8,puVar6,auStack_264);
    if ((int)puVar7 != 0) {
      puVar2 = puVar6;
      func_0x00010bf987e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      if (puVar2 == (undefined *)0x0) {
        FUN_106aecfa4();
        func_0x000106aee778();
        func_0x00010bf99220(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c196ee0(puVar6);
        _objc_release(puVar3);
      }
    }
    if (param_5 != (undefined **)0x0) {
      puVar3 = puVar6;
      func_0x00010bf987e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_5 = puVar3;
    }
    if (((uVar4 >> 2 & 1) == 0) && ((int)puVar7 != 0)) {
      puVar6 = (undefined *)0x0;
    }
    else {
      func_0x00010c274660(puVar6);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x000106aee6f4();
    func_0x000106aee718();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  return puVar1;
}



/* Entry: 106aee238; end: 106aee3e7; +[KSJSONCodec decode:options:error:] */

void FUN_106aee238(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,long *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_54 [4];
  
  _objc_retain(param_3);
  func_0x00010bf3f060();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x00010bf64b80(PTR__OBJC_CLASS___NSMutableData_1126b4958);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  uVar3 = param_3;
  func_0x00010c08fa60(param_3);
  _objc_release(param_3);
  puVar4 = puVar1;
  _objc_retainAutorelease(puVar1);
  func_0x00010c0d3c60();
  func_0x00010c08fa60(puVar1);
  lVar5 = param_1;
  func_0x00010bf286c0(param_1);
  func_0x00010018a69c(uVar2,uVar3,puVar4,puVar1,lVar5,param_1,auStack_54);
  if ((int)uVar2 != 0) {
    lVar5 = param_1;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (lVar5 == 0) {
      FUN_106aecfa4();
      func_0x000106aee778();
      func_0x00010bf99220(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c196ee0(param_1);
      _objc_release(puVar1);
    }
  }
  if (param_5 != (long *)0x0) {
    lVar5 = param_1;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_5 = lVar5;
  }
  if (((param_4 >> 2 & 1) == 0) && ((int)uVar2 != 0)) {
    param_1 = 0;
  }
  else {
    func_0x00010c274660(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x000106aee6f4();
  func_0x000106aee718();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106aee3e8; end: 106aee3ef; -[KSJSONCodec topLevelContainer] */

undefined8 FUN_106aee3e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106aee3f0; end: 106aee40f; -[KSJSONCodec setTopLevelContainer:] */

void FUN_106aee3f0(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x000106aee6b8();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106aee410; end: 106aee417; -[KSJSONCodec currentContainer] */

undefined8 FUN_106aee410(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106aee418; end: 106aee41f; -[KSJSONCodec setCurrentContainer:] */

void FUN_106aee418(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 106aee420; end: 106aee427; -[KSJSONCodec containerStack] */

undefined8 FUN_106aee420(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106aee428; end: 106aee447; -[KSJSONCodec setContainerStack:] */

void FUN_106aee428(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x000106aee6b8();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106aee448; end: 106aee44f; -[KSJSONCodec callbacks] */

undefined8 FUN_106aee448(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106aee450; end: 106aee457; -[KSJSONCodec setCallbacks:] */

void FUN_106aee450(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 106aee458; end: 106aee45f; -[KSJSONCodec serializedData] */

undefined8 FUN_106aee458(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106aee460; end: 106aee47f; -[KSJSONCodec setSerializedData:] */

void FUN_106aee460(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x000106aee6b8();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106aee480; end: 106aee487; -[KSJSONCodec error] */

undefined8 FUN_106aee480(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106aee488; end: 106aee4a7; -[KSJSONCodec setError:] */

void FUN_106aee488(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x000106aee6b8();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106aee4a8; end: 106aee4af; -[KSJSONCodec prettyPrint] */

undefined1 FUN_106aee4a8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106aee4b0; end: 106aee4b7; -[KSJSONCodec setPrettyPrint:] */

void FUN_106aee4b0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106aee4b8; end: 106aee4bf; -[KSJSONCodec sorted] */

undefined1 FUN_106aee4b8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106aee4c0; end: 106aee4c7; -[KSJSONCodec setSorted:] */

void FUN_106aee4c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 106aee4c8; end: 106aee4cf; -[KSJSONCodec ignoreNullsInArrays] */

undefined1 FUN_106aee4c8(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 106aee4d0; end: 106aee4d7; -[KSJSONCodec setIgnoreNullsInArrays:] */

void FUN_106aee4d0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 106aee4d8; end: 106aee4df; -[KSJSONCodec ignoreNullsInObjects] */

undefined1 FUN_106aee4d8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 106aee4e0; end: 106aee4e7; -[KSJSONCodec setIgnoreNullsInObjects:] */

void FUN_106aee4e0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}



/* Entry: 106aee4e8; end: 106aee523; -[KSJSONCodec .cxx_destruct] */

void FUN_106aee4e8(long param_1)

{
  func_0x000106aee7bc(param_1 + 0x38);
  func_0x000106aee7bc(param_1 + 0x30);
  func_0x000106aee7bc(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106aee524; end: 106aee553;  */

void FUN_106aee524(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    func_0x00010c25d8e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_1,4);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106aee554; end: 106aee69f;  */

undefined8 FUN_106aee554(void)

{
  undefined *puVar1;
  long unaff_x19;
  ulong uVar2;
  undefined8 uVar3;
  
  func_0x000106aee750();
  func_0x000106aee760();
  func_0x000106aee79c();
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  uVar2 = *(ulong *)(unaff_x19 + 0x18);
  if (uVar2 == 0) {
    _objc_opt_class();
    func_0x000106aee778();
    func_0x00010bf99220(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196ee0();
    func_0x000106aee6f4();
    uVar3 = 5;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_class(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_opt_isKindOfClass(uVar2,puVar1);
    if ((uVar2 & 1) == 0) {
      func_0x00010befa120(*(undefined8 *)(unaff_x19 + 0x18));
    }
    else {
      func_0x00010c220220();
    }
    uVar3 = 0;
  }
  func_0x000106aee6e4();
  func_0x000106aee6dc();
  func_0x000106aee718();
  return uVar3;
}



/* Entry: 106aee6a0; end: 106aee7e3;  */

void FUN_106aee6a0(void)

{
  return;
}



/* Entry: 106aee7e4; end: 106aee80b;  */

void FUN_106aee7e4(undefined8 param_1)

{
  FUN_106aee81c(param_1,&stack0x00000000);
  return;
}



/* Entry: 106aee80c; end: 106aee81b;  */

/* WARNING: Removing unreachable block (ram,0x0001001d2430) */
/* WARNING: Removing unreachable block (ram,0x0001001d2400) */
/* WARNING: Removing unreachable block (ram,0x0001001d2448) */

undefined8 FUN_106aee80c(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = 0x1381b920;
  func_0x000107c611c4(0x11381b920,0x601);
  iRam0000000113170288 = iVar1;
  if (iVar1 < 0) {
    func_0x000107c60e5c();
    func_0x000107c613cc();
    FUN_106aee7e4(&UNK_10f3b3306);
    uVar2 = 0;
  }
  else {
    if (2 < iRam000000011317028c) {
      func_0x000107c60f10();
    }
    uVar2 = 1;
    iRam000000011317028c = iVar1;
  }
  return uVar2;
}



/* Entry: 106aee81c; end: 106aee897;  */

void FUN_106aee81c(undefined *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined *puVar3;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined *puVar4;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auStack_430 [8];
  undefined1 auStack_428 [1024];
  undefined8 uStack_28;
  
  puVar1 = &stack0xfffffffffffffff0;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 == (undefined *)0x0) {
    func_0x000106aeeb28();
    if ((bool)in_ZR) {
      param_1 = &UNK_10f3b333a;
      goto code_r0x000106aee898;
    }
  }
  else {
    _vsnprintf(auStack_428,0x400,param_1,param_2);
    param_1 = auStack_428;
    FUN_106aee898();
    func_0x000106aeeb28();
    if ((bool)in_ZR) {
      return;
    }
  }
  unaff_x30 = FUN_106aee898;
  ___stack_chk_fail();
  register0x00000008 = (BADSPACEBASE *)auStack_430;
  unaff_x29 = puVar1;
code_r0x000106aee898:
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  if (-1 < iRam000000011317028c) {
    puVar4 = param_1;
    _strlen();
    puVar3 = param_1;
    do {
      if ((int)puVar4 < 1) break;
      iVar2 = iRam000000011317028c;
      _write(iRam000000011317028c,puVar3,(ulong)puVar4 & 0xffffffff);
      puVar4 = (undefined *)(ulong)(uint)((int)puVar4 - iVar2);
      puVar3 = puVar3 + iVar2;
    } while (iVar2 != -1);
  }
  puVar3 = param_1;
  _strlen(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__write_11034cdf0)(1,param_1,puVar3);
  return;
}



/* Entry: 106aee898; end: 106aee97f;  */

void FUN_106aee898(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (-1 < iRam000000011317028c) {
    uVar3 = param_1;
    _strlen();
    uVar2 = param_1;
    do {
      if ((int)uVar3 < 1) break;
      iVar1 = iRam000000011317028c;
      _write(iRam000000011317028c,uVar2,uVar3 & 0xffffffff);
      uVar3 = (ulong)(uint)((int)uVar3 - iVar1);
      uVar2 = uVar2 + (long)iVar1;
    } while (iVar1 != -1);
  }
  uVar2 = param_1;
  _strlen(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__write_11034cdf0)(1,param_1,uVar2);
  return;
}



/* Entry: 106aee980; end: 106aee9ab;  */

long FUN_106aee980(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _strrchr(param_1,0x2f);
  if (lVar1 != 0) {
    param_1 = lVar1 + 1;
  }
  return param_1;
}



/* Entry: 106aee9ac; end: 106aeea5b;  */

void FUN_106aee9ac(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  if (param_1 != 0) {
    uVar4 = 0;
    _CFStringCreateWithFormatAndArguments(0,0,param_1,&stack0x00000000);
    uVar5 = uVar4;
    _CFStringGetLength();
    uVar1 = (int)uVar5 << 2 | 1;
    puVar7 = (undefined *)(ulong)uVar1;
    _malloc(puVar7);
    uVar5 = uVar4;
    _CFStringGetCString(uVar4,puVar7,(long)(int)uVar1,0x8000100);
    puVar3 = &UNK_10f3b3341;
    if ((int)uVar5 != 0) {
      puVar3 = puVar7;
    }
    FUN_106aee898(puVar3);
    func_0x000106aeeb40();
    _free(puVar7);
    _CFRelease(uVar4);
    return;
  }
  puVar3 = &UNK_10f3b333a;
  if (-1 < iRam000000011317028c) {
    puVar6 = puVar3;
    _strlen();
    puVar7 = puVar3;
    do {
      if ((int)puVar6 < 1) break;
      iVar2 = iRam000000011317028c;
      _write(iRam000000011317028c,puVar7,(ulong)puVar6 & 0xffffffff);
      puVar6 = (undefined *)(ulong)(uint)((int)puVar6 - iVar2);
      puVar7 = puVar7 + iVar2;
    } while (iVar2 != -1);
  }
  _strlen(&UNK_10f3b333a);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__write_11034cdf0)(1,&UNK_10f3b333a,puVar3);
  return;
}



/* Entry: 106aeea5c; end: 106aeeb17;  */

void FUN_106aeea5c(undefined8 param_1)

{
  undefined8 uVar1;
  long in_x4;
  
  if (in_x4 == 0) {
    FUN_106aeeb18(param_1,&UNK_10f3b337e);
    func_0x000106aeeb4c();
    FUN_106aee9ac();
  }
  else {
    uVar1 = 0;
    _CFStringCreateWithFormatAndArguments(0,0,in_x4,&stack0x00000000);
    FUN_106aeeb18();
    func_0x000106aeeb4c();
    FUN_106aee9ac();
    _CFRelease(uVar1);
  }
  _CFRelease();
  return;
}



/* Entry: 106aeeb18; end: 106aeeb9b;  */

void FUN_106aeeb18(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdba82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFStringCreateWithCString_11034a8a8)(0,param_2,0x8000100);
  return;
}



/* Entry: 106aeeb9c; end: 106aeec1b;  */

undefined8 FUN_106aeeb9c(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = param_2;
  _bzero(param_2,0x4d0);
  *param_2 = (int)param_1;
  func_0x0001001d32d8();
  *(char *)(param_2 + 0x66) = (char)param_3;
  *(undefined1 *)((long)param_2 + 0x19b) = 0;
  *(bool *)((long)param_2 + 0x199) = param_1 == puVar1;
  if (param_1 == puVar1) {
    if (param_3 == 0) {
      return 1;
    }
  }
  else {
    func_0x000106aeba98(param_2);
    if ((*(byte *)(param_2 + 0x66) & 1) == 0) {
      return 1;
    }
  }
  FUN_106aeec1c(param_2);
  func_0x000106aef2d4();
  return 1;
}



/* Entry: 106aeec1c; end: 106aeec5f;  */

undefined1 FUN_106aeec1c(undefined8 param_1)

{
  ulong uVar1;
  undefined1 auStack_388 [44];
  undefined1 uStack_35c;
  code *pcStack_350;
  
  func_0x000106af0a04(auStack_388,0x96,param_1);
  do {
    uVar1 = 0;
    (*pcStack_350)();
  } while ((uVar1 & 1) != 0);
  return uStack_35c;
}



/* Entry: 106aeec60; end: 106aeed57;  */

void FUN_106aeec60(long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *extraout_x8;
  ulong uVar6;
  uint uStack_3c;
  undefined4 *puStack_38;
  
  func_0x000106aef2f4();
  iVar1 = *extraout_x8;
  iVar4 = iVar1;
  _task_threads(iVar1,&puStack_38,&uStack_3c);
  if (iVar4 == 0) {
    uVar5 = uStack_3c;
    if (100 < (int)uStack_3c) {
      func_0x000106aef280();
      func_0x000106aee914();
      uVar5 = 100;
    }
    puVar2 = (undefined4 *)(param_1 + 4);
    puVar3 = puStack_38;
    for (uVar6 = (ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)); uVar6 != 0; uVar6 = uVar6 - 1)
    {
      *puVar2 = *puVar3;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(uint *)(param_1 + 0x194) = uVar5;
    for (uVar6 = 0; uVar6 < uStack_3c; uVar6 = uVar6 + 1) {
      _mach_port_deallocate(iVar1,((undefined4 *)(param_1 + 4))[uVar6]);
    }
    _vm_deallocate(iVar1,puStack_38,(ulong)uStack_3c << 2);
  }
  else {
    _mach_error_string();
    func_0x000106aef2b4();
    func_0x000106aef2a0();
    func_0x000106aee914();
  }
  return;
}



/* Entry: 106aeed58; end: 106aeeda7;  */

undefined8 FUN_106aeed58(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = param_2 + 0x68;
  _memcpy(puVar2,*(undefined8 *)(param_1 + 0x30),0x330);
  uVar1 = SUB84(puVar2,0);
  func_0x0001001d32d8();
  *param_2 = uVar1;
  *(undefined1 *)(param_2 + 0x66) = 1;
  *(undefined1 *)((long)param_2 + 0x19b) = 1;
  FUN_106aeec1c(param_2);
  func_0x000106aef2d4();
  return 1;
}



/* Entry: 106aeeda8; end: 106aeee8f;  */

void FUN_106aeeda8(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar4;
  uint *extraout_x8;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar3;
  
  plVar3 = param_1;
  func_0x000106aef2f4();
  uVar2 = (uint)plVar3;
  uVar5 = (ulong)*extraout_x8;
  func_0x0001001d32d8();
  uVar4 = uVar5;
  _task_threads(uVar5,param_1,param_2);
  if ((int)uVar4 == 0) {
    func_0x000106aef2e0();
    for (uVar7 = 0; uVar7 < *param_2; uVar7 = uVar7 + 1) {
      uVar1 = *(uint *)(*param_1 + uVar7 * 4);
      uVar6 = (ulong)uVar1;
      if (((uVar1 != uVar2) && (func_0x000106aef2c8(), (uVar4 & 1) == 0)) &&
         (_thread_suspend(), uVar4 = uVar6, (int)uVar6 != 0)) {
        _mach_error_string();
        uVar4 = uVar5;
        func_0x000106aef294();
      }
    }
  }
  else {
    _mach_error_string();
    func_0x000106aef2b4();
    func_0x000106aef2a0();
    func_0x000106aee914();
  }
  func_0x000106aef300();
  return;
}



/* Entry: 106aeee90; end: 106aeeed3;  */

bool FUN_106aeee90(ulong param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = (ulong)param_2;
  uVar3 = 0;
  do {
    uVar4 = uVar2;
    if (uVar2 == uVar3) break;
    lVar1 = uVar3 * 8;
    uVar4 = uVar3;
    uVar3 = uVar3 + 1;
  } while (*(ulong *)(lVar1 + 0x11381bd28) != (param_1 & 0xffffffff));
  return uVar4 < uVar2;
}



/* Entry: 106aeeed4; end: 106aef137;  */

/* WARNING: Possible PIC construction at 0x000106aeef5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106aeefe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106aef018: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106aeef60) */

void FUN_106aeeed4(uint *param_1,uint *param_2,uint *param_3,undefined8 param_4,uint *param_5)

{
  uint uVar1;
  ulong uVar2;
  uint **ppuVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  uint *extraout_x8;
  uint *extraout_x8_00;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  ulong uVar12;
  undefined1 *puVar13;
  code *pcVar14;
  double dVar15;
  double dVar16;
  uint *puStack_1a0;
  uint *puStack_198;
  ulong uStack_190;
  ulong uStack_188;
  uint *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  uint *puStack_160;
  uint *puStack_158;
  uint *puStack_150;
  undefined8 uStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  uint *puStack_130;
  uint *puStack_128;
  uint *puStack_118;
  uint *puStack_110;
  undefined4 uStack_104;
  undefined1 auStack_100 [16];
  int iStack_f0;
  byte bStack_e4;
  long lStack_80;
  
  ppuVar3 = &puStack_130;
  puVar13 = &stack0xfffffffffffffff0;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  _bzero(param_3,0x4c0);
  func_0x000106aef2f4();
  puVar10 = (uint *)(ulong)*extraout_x8;
  func_0x0001001d32d8();
  puVar5 = param_1;
  _task_threads(puVar10,param_1,param_2);
  if ((int)puVar10 == 0) {
    puVar8 = &UNK_10f3b3948;
    param_5 = (uint *)&UNK_10f3b392e;
    puVar6 = (uint *)0x0;
    puStack_110 = param_3;
    while (param_3 = puVar6, param_3 < (uint *)(ulong)*param_2) {
      uVar1 = *(uint *)(*(long *)param_1 + (long)param_3 * 4);
      puVar11 = (uint *)(ulong)uVar1;
      puVar6 = puVar10;
      if (uVar1 != (uint)puVar4) {
        puVar5 = (uint *)(ulong)uRam000000011381bd20;
        puVar6 = puVar11;
        FUN_106aeee90();
        if ((((ulong)puVar6 & 1) == 0) && (puVar6 = puVar11, _thread_suspend(), (int)puVar6 != 0)) {
          _mach_error_string();
          uVar7 = 0xe0;
          pcVar14 = (code *)0x106aeefe8;
          ppuVar3 = &puStack_130;
          puVar10 = (uint *)&UNK_10f3b3838;
          puVar5 = (uint *)&UNK_10f3b383e;
          puStack_130 = puVar11;
          puStack_128 = puVar6;
          goto SUB_106aee914;
        }
      }
      puVar10 = puVar6;
      puVar6 = (uint *)((long)param_3 + 1);
    }
    if (*param_2 < 0x65) {
      uVar9 = 0;
      puStack_118 = puStack_110 + 100;
      dVar16 = 0.0;
      param_3 = (uint *)0x20;
      func_0x000106aef2e0();
      puVar6 = puVar5;
      for (uVar12 = 0; uVar12 < *param_2; uVar12 = uVar12 + 1) {
        uVar1 = *(uint *)(*(long *)param_1 + uVar12 * 4);
        param_5 = (uint *)(ulong)uVar1;
        uStack_104 = 0x20;
        puVar6 = (uint *)0x3;
        puVar10 = param_5;
        _thread_info(param_5,3,auStack_100,&uStack_104);
        if ((int)puVar10 == 0) {
          if ((bStack_e4 >> 1 & 1) == 0) {
            dVar15 = ((double)iStack_f0 / 1000.0) * 100.0;
            dVar16 = dVar16 + dVar15;
            if (uVar12 < 100) {
              puStack_110[uVar12] = uVar1;
              *(double *)(puStack_110 + uVar12 * 2 + 100) = dVar15;
              uVar1 = (uint)uVar12;
              if (dVar15 <= *(double *)(puStack_118 + uVar9 * 2)) {
                uVar1 = (uint)uVar9;
              }
              uVar9 = (ulong)uVar1;
            }
          }
        }
        else {
          puVar10 = puVar4;
          puVar6 = (uint *)&UNK_10f3b3838;
          func_0x000106aef294(puVar4,&UNK_10f3b3838,0xfa);
        }
      }
      *(double *)(puStack_110 + 0x12e) = dVar16;
      puStack_110[300] = (uint)uVar9;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
        return;
      }
      ___stack_chk_fail();
      puStack_178 = &UNK_10f3b39f2;
      puStack_170 = &UNK_10f3b3948;
      puStack_168 = &UNK_10f3b3838;
      uStack_148 = 0x20;
      pcStack_138 = FUN_106aef138;
      puVar11 = puVar10;
      puVar5 = puVar6;
      uStack_190 = uVar12;
      uStack_188 = uVar9;
      puStack_180 = param_5;
      puStack_160 = puVar4;
      puStack_158 = param_1;
      puStack_150 = param_2;
      puStack_140 = puVar13;
      func_0x000106aef2f4();
      param_2 = (uint *)(ulong)*extraout_x8_00;
      func_0x0001001d32d8();
      if ((puVar10 != (uint *)0x0) && ((int)puVar6 != 0)) {
        uVar9 = (ulong)puVar6 & 0xffffffff;
        puVar4 = puVar10;
        puVar5 = puVar11;
        for (uVar12 = uVar9; uVar2 = uVar9, puVar6 = puVar10, uVar12 != 0; uVar12 = uVar12 - 1) {
          uVar1 = *puVar4;
          if (((uVar1 != (uint)puVar11) && (func_0x000106aef2c8(), ((ulong)puVar5 & 1) == 0)) &&
             (puVar5 = (uint *)(ulong)uVar1, _thread_resume(), (int)puVar5 != 0)) {
            _mach_error_string();
            puStack_1a0 = (uint *)(ulong)uVar1;
            puStack_198 = puVar5;
            func_0x000106aef280();
            func_0x000106aef294();
          }
          puVar4 = puVar4 + 1;
        }
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          _mach_port_deallocate(param_2,*puVar6);
          puVar6 = puVar6 + 1;
        }
        func_0x000106aef300(param_2,puVar10,uVar9 << 2,pcStack_138);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__vm_deallocate_11034cd98)();
        return;
      }
      func_0x000106aef280();
      puVar13 = puStack_140;
      puVar8 = &UNK_10f3b3a0b;
      param_5 = (uint *)&UNK_10f3b3a53;
      uVar7 = 0x123;
      pcVar14 = pcStack_138;
      func_0x000106aef300();
      ppuVar3 = &puStack_1a0;
      puVar10 = puVar11;
      puVar4 = puVar6;
    }
    else {
      func_0x000106aef280();
      puVar8 = &UNK_10f3b3948;
      param_5 = (uint *)&UNK_10f3b39c5;
      puStack_128 = (uint *)0x64;
      uVar7 = 0xf3;
      pcVar14 = (code *)0x106aef01c;
      puStack_130 = param_2;
    }
  }
  else {
    _mach_error_string();
    func_0x000106aef2b4();
    puVar8 = &UNK_10f3b3948;
    func_0x000106aef2a0();
    uVar7 = 0xd3;
    pcVar14 = (code *)0x106aeef60;
    ppuVar3 = &puStack_130;
  }
SUB_106aee914:
  *(uint **)((long)ppuVar3 + -0x30) = puVar4;
  *(uint **)((long)ppuVar3 + -0x28) = param_1;
  *(uint **)((long)ppuVar3 + -0x20) = param_2;
  *(uint **)((long)ppuVar3 + -0x18) = param_3;
  *(undefined1 **)((long)ppuVar3 + -0x10) = puVar13;
  *(code **)((long)ppuVar3 + -8) = pcVar14;
  FUN_106aee980();
  *(undefined8 *)((long)ppuVar3 + -0x50) = uVar7;
  *(undefined **)((long)ppuVar3 + -0x48) = puVar8;
  *(uint **)((long)ppuVar3 + -0x60) = puVar10;
  *(uint **)((long)ppuVar3 + -0x58) = puVar5;
  FUN_106aee7e4(&UNK_10f3b3328);
  *(uint ***)((long)ppuVar3 + -0x38) = ppuVar3;
  FUN_106aee81c(param_5,ppuVar3);
  func_0x000106aeeb40();
  return;
}



/* Entry: 106aef138; end: 106aef247;  */

void FUN_106aef138(uint *param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  undefined *puVar8;
  undefined4 *extraout_x8;
  ulong uVar9;
  ulong uVar10;
  undefined8 unaff_x30;
  uint *puStack_70;
  uint *puStack_68;
  
  puVar6 = param_1;
  func_0x000106aef2f4();
  uVar1 = *extraout_x8;
  func_0x0001001d32d8();
  if ((param_1 != (uint *)0x0) && (param_2 != 0)) {
    uVar9 = (ulong)param_2;
    puVar7 = puVar6;
    puVar3 = param_1;
    for (uVar10 = uVar9; uVar4 = uVar9, puVar5 = param_1, uVar10 != 0; uVar10 = uVar10 - 1) {
      uVar2 = *puVar3;
      if (((uVar2 != (uint)puVar6) && (func_0x000106aef2c8(), ((ulong)puVar7 & 1) == 0)) &&
         (puVar7 = (uint *)(ulong)uVar2, _thread_resume(), (int)puVar7 != 0)) {
        _mach_error_string();
        puStack_70 = (uint *)(ulong)uVar2;
        puStack_68 = puVar7;
        func_0x000106aef280();
        func_0x000106aef294();
      }
      puVar3 = puVar3 + 1;
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      _mach_port_deallocate(uVar1,*puVar5);
      puVar5 = puVar5 + 1;
    }
    func_0x000106aef300(uVar1,param_1,uVar9 << 2,unaff_x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__vm_deallocate_11034cd98)();
    return;
  }
  func_0x000106aef280();
  puVar8 = &UNK_10f3b3a53;
  func_0x000106aef300();
  FUN_106aee980();
  FUN_106aee7e4(&UNK_10f3b3328);
  FUN_106aee81c(puVar8,&puStack_70);
  func_0x000106aeeb40();
  return;
}



/* Entry: 106aef248; end: 106aef31b;  */

ulong FUN_106aef248(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = 0;
  while( true ) {
    if ((*(uint *)(param_1 + 0x194) & ((int)*(uint *)(param_1 + 0x194) >> 0x1f ^ 0xffffffffU)) ==
        uVar1) {
      return 0xffffffff;
    }
    if (param_2 == *(uint *)(param_1 + 4 + uVar1 * 4)) break;
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}



/* Entry: 106aef31c; end: 106aef3f3;  */

int FUN_106aef31c(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((0x2800 < param_2 + iVar2 &&
         (lVar1 = param_1, func_0x000106aef390(param_1,0x2800), (int)lVar1 != 0))) {
    param_1 = param_1 + 0x2800;
    iVar2 = iVar2 + -0x2800;
  }
  FUN_106aef3f4(param_1,0x11381bd78,0x2800);
  return (int)param_1 - iVar2;
}



/* Entry: 106aef3f4; end: 106aef4bb;  */

ulong FUN_106aef3f4(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  
  lVar1 = param_1;
  func_0x000106aef4d8(param_1,param_2,1);
  if ((int)lVar1 == 1) {
    if (1 < (int)param_3) {
      lVar1 = param_1 + (param_3 & 0xffffffff);
      param_3 = 0;
      lVar5 = lVar1;
      while( true ) {
        uVar4 = lVar5 - param_1;
        iVar3 = (int)uVar4;
        if (iVar3 < 1) break;
        lVar2 = param_1;
        func_0x000106aef4d8(param_1,param_2,uVar4);
        if ((int)lVar2 == iVar3) {
          param_3 = (ulong)(uint)((int)param_3 + iVar3);
          param_1 = param_1 + (uVar4 & 0x7fffffff);
          param_2 = param_2 + (uVar4 & 0x7fffffff);
          lVar5 = param_1 + (lVar1 - param_1) / 2;
        }
        else {
          if (iVar3 == 1) {
            return param_3;
          }
          lVar1 = lVar5;
          lVar5 = param_1 + (uVar4 >> 1 & 0x3fffffff);
        }
      }
    }
  }
  else {
    param_3 = 0;
  }
  return param_3;
}



/* Entry: 106aef4bc; end: 106aef51f;  */

bool FUN_106aef4bc(int param_1)

{
  func_0x000106aef4d8();
  return param_1 != 0;
}



/* Entry: 106aef520; end: 106aef56b;  */

void FUN_106aef520(void)

{
  return;
}



/* Entry: 106aef56c; end: 106aef607;  */

uint FUN_106aef56c(uint *param_1)

{
  FUN_106aef6f0();
  return *param_1 & 1;
}



/* Entry: 106aef608; end: 106aef66f;  */

/* WARNING: Possible PIC construction at 0x000106aef630: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106aef634) */
/* WARNING: Removing unreachable block (ram,0x000106aef638) */
/* WARNING: Removing unreachable block (ram,0x000106aef640) */
/* WARNING: Removing unreachable block (ram,0x000106aef650) */

bool FUN_106aef608(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  
  lVar4 = param_1;
  func_0x000106af080c();
  if ((int)lVar4 == 0) {
    return false;
  }
  uVar6 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffff8;
  uVar2 = 0x20;
  do {
    uVar5 = uVar2;
    if ((int)uVar5 < 1) break;
    uVar1 = uVar5;
    if (0x27ff < uVar5) {
      uVar1 = 0x2800;
    }
    uVar3 = uVar6;
    func_0x000106aef4d8(uVar6,0x11381bd78,uVar1);
    uVar2 = uVar5 - uVar1;
  } while ((uint)uVar3 == uVar1);
  return uVar5 == 0;
}



/* Entry: 106aef670; end: 106aef6c7;  */

ulong FUN_106aef670(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  
  iVar4 = 0x15;
  uVar2 = param_1;
  while( true ) {
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      return 0;
    }
    uVar1 = uVar2;
    func_0x000106aef588();
    if ((uVar1 & 1) != 0) break;
    uVar3 = *(ulong *)(uVar2 + 8);
    uVar1 = uVar3;
    FUN_106aef608();
    param_1 = uVar2;
    uVar2 = uVar3;
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  return param_1;
}



/* Entry: 106aef6c8; end: 106aef6ef;  */

undefined4 FUN_106aef6c8(long param_1)

{
  undefined4 uVar1;
  
  FUN_106aef6f0();
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x30) + 4);
  }
  return uVar1;
}



/* Entry: 106aef6f0; end: 106aef70b;  */

ulong FUN_106aef6f0(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)((*(ulong *)(param_1 + 0x20) & 0xfffffffffffffff8) + 8);
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
  }
  return uVar1;
}



/* Entry: 106aef70c; end: 106aef82f;  */

uint FUN_106aef70c(uint param_1,long param_2)

{
  ulong uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar5;
  
  if (param_2 != 0) {
    func_0x000106af07b4();
    FUN_106aef6c8();
    if (param_1 != 0) {
      if ((int)param_1 <= (int)unaff_w19) {
        unaff_w19 = param_1;
      }
      FUN_106aef6f0();
      puVar2 = *(uint **)(unaff_x21 + 0x30);
      puVar3 = puVar2 + 2;
      puVar4 = (undefined4 *)(unaff_x20 + 0x10);
      for (uVar1 = 0; (unaff_w19 & ((int)unaff_w19 >> 0x1f ^ 0xffffffffU)) != uVar1;
          uVar1 = uVar1 + 1) {
        uVar5 = *(undefined8 *)(puVar3 + 2);
        *(undefined8 *)(puVar4 + -2) = *(undefined8 *)(puVar3 + 4);
        *(undefined8 *)(puVar4 + -4) = uVar5;
        *puVar4 = (int)uVar1;
        puVar3 = (uint *)((long)puVar3 + (ulong)*puVar2);
        puVar4 = puVar4 + 6;
      }
      return unaff_w19;
    }
  }
  return 0;
}



/* Entry: 106aef830; end: 106aef90f;  */

void FUN_106aef830(long param_1)

{
  long lVar1;
  
  if ((((param_1 != 0) && (-1 < param_1)) &&
      (lVar1 = param_1, func_0x000106aef8b8(), (int)lVar1 != 0)) &&
     (FUN_106aef910(), (int)param_1 != 0)) {
    func_0x000106af0850();
    FUN_106aef670();
    if (((param_1 == 0) || (func_0x000106aef5a4(), param_1 == 0)) || (_strcmp(), (int)param_1 != 0))
    {
      func_0x000106aef56c();
    }
  }
  return;
}



/* Entry: 106aef910; end: 106aefa7b;  */

ulong FUN_106aef910(uint *param_1,uint **param_2,ulong param_3)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  undefined1 in_ZR;
  uint *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  ulong uVar16;
  uint *puVar17;
  uint *puStack_d0;
  uint *puStack_c8;
  uint *puStack_c0;
  byte abStack_ac [100];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_1;
  func_0x000106af080c();
  if (((int)puVar6 != 0) && (FUN_106aef608(), puVar6 = param_1, (int)param_1 != 0)) {
    func_0x000106af0858();
    puVar6 = *(uint **)(param_1 + 6);
    func_0x000106af01b0();
    if ((int)puVar6 != 0) {
      func_0x000106af0858();
      puVar12 = *(uint **)(puVar6 + 0xc);
      if (puVar12 != (uint *)0x0) {
        puVar6 = puVar12;
        func_0x000106af080c();
        if ((int)puVar6 == 0) goto LAB_106aefa44;
        uVar15 = puVar12[1];
        if (uVar15 != 0) {
          puVar14 = (uint *)((long)puVar12 + (ulong)*puVar12 + 8);
          uVar11 = 1;
          while( true ) {
            in_ZR = uVar11 == uVar15;
            uVar16 = (ulong)(uVar15 <= uVar11);
            if (uVar15 <= uVar11) break;
            param_3 = 0x20;
            puVar6 = puVar14;
            param_2 = &puStack_d0;
            FUN_106aef4bc();
            if ((int)puVar6 == 0) break;
            param_2 = (uint **)(ulong)*puVar12;
            puVar6 = puVar14;
            func_0x000106aef390();
            if ((int)puVar6 == 0) break;
            param_2 = (uint **)0x4;
            puVar6 = puStack_d0;
            func_0x000106aef390();
            if (((int)puVar6 == 0) ||
               (puVar6 = puStack_c8, func_0x000106af01b0(), puVar17 = puStack_c0, (int)puVar6 == 0))
            break;
            in_ZR = puStack_c0 == (uint *)0xffffffffffffff9b;
            if ((uint *)0xffffffffffffff9b < puStack_c0) goto LAB_106aefa44;
            param_2 = (uint **)abStack_ac;
            param_3 = 100;
            puVar6 = puStack_c0;
            FUN_106aef3f4();
            uVar15 = (uint)puVar6;
            if ((uVar15 == 0) ||
               (in_ZR = (*(uint *)(&UNK_10dde4838 + (ulong)(byte)*puVar17 * 4) & 7) == 0,
               (bool)in_ZR)) goto LAB_106aefa44;
            uVar16 = (ulong)(uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU));
            do {
              if (uVar16 == 0) goto LAB_106aefa44;
              uVar15 = *puVar17;
              uVar16 = uVar16 - 1;
              puVar17 = (uint *)((long)puVar17 + 1);
            } while ((char)uVar15 != '\0');
            uVar15 = puVar12[1];
            puVar14 = (uint *)((long)puVar14 + (ulong)*puVar12);
            uVar11 = uVar11 + 1;
          }
          goto LAB_106aefa48;
        }
      }
      uVar16 = 1;
      goto LAB_106aefa48;
    }
  }
LAB_106aefa44:
  uVar16 = 0;
LAB_106aefa48:
  func_0x000106af0890(uStack_48);
  if ((bool)in_ZR) {
    return uVar16;
  }
  ___stack_chk_fail();
  iVar13 = (int)param_3;
  if (((long)puVar6 < 0) && (((ulong)puVar6 & 0x7000000000000000) == 0x2000000000000000)) {
    uVar15 = (uint)puVar6 & 0xf;
    uVar11 = uVar15;
    if ((int)(iVar13 - 1U) <= (int)uVar15) {
      uVar11 = iVar13 - 1U;
    }
    uVar16 = (ulong)puVar6 >> 4 & 0xffffffffffffff;
    uVar1 = (int)uVar11 >> 0x1f;
    if (uVar15 < 8) {
      pbVar8 = (byte *)param_2;
      for (uVar10 = (ulong)(uVar11 & (uVar1 ^ 0xffffffff)); uVar10 != 0; uVar10 = uVar10 - 1) {
        *pbVar8 = (byte)uVar16 & 0x7f;
        uVar16 = uVar16 >> 8;
        pbVar8 = pbVar8 + 1;
      }
    }
    else if (uVar15 < 10) {
      uVar3 = uVar15 * 6;
      pbVar8 = (byte *)param_2;
      for (uVar10 = (ulong)(uVar11 & (uVar1 ^ 0xffffffff)); uVar10 != 0; uVar10 = uVar10 - 1) {
        uVar3 = uVar3 - 6;
        *pbVar8 = (&UNK_10f3b3b23)[uVar16 >> ((ulong)uVar3 & 0x3f) & 0x3f];
        pbVar8 = pbVar8 + 1;
      }
    }
    else if (uVar15 < 0xc) {
      uVar3 = uVar15 * 5;
      pbVar8 = (byte *)param_2;
      for (uVar10 = (ulong)(uVar11 & (uVar1 ^ 0xffffffff)); uVar10 != 0; uVar10 = uVar10 - 1) {
        uVar3 = uVar3 - 5;
        *pbVar8 = (&UNK_10f3b3b23)[uVar16 >> ((ulong)uVar3 & 0x3f) & 0x1f];
        pbVar8 = pbVar8 + 1;
      }
    }
    else {
      *(byte *)param_2 = 0;
    }
    *(byte *)((long)param_2 + ((ulong)puVar6 & 0xf)) = 0;
    return (ulong)uVar15;
  }
  bVar4 = (byte)puVar6[2];
  if ((bVar4 & 5) == 4) {
    puVar12 = puVar6 + 4;
    if ((bVar4 & 0x60) != 0) {
      puVar12 = *(uint **)puVar12;
    }
    uVar15 = (uint)(byte)*puVar12;
  }
  else if ((bVar4 & 0x60) == 0) {
    uVar15 = puVar6[4];
  }
  else {
    uVar15 = puVar6[6];
  }
  func_0x000106aefd4c();
  if ((bVar4 >> 4 & 1) == 0) {
    if (iVar13 != 0) {
      if (uVar15 != 0) {
        if (iVar13 <= (int)uVar15) {
          uVar15 = iVar13 - 1;
        }
        FUN_106aef4bc();
        if (((ulong)puVar6 & 1) != 0) {
          *(byte *)((long)param_2 + (long)(int)uVar15) = 0;
          return (ulong)uVar15;
        }
      }
LAB_106aefc60:
      param_3 = 0;
      *(byte *)param_2 = 0;
    }
  }
  else {
    pbVar7 = (byte *)((long)param_2 + (long)iVar13 + -1);
    pbVar8 = (byte *)param_2;
    for (; 0 < (int)uVar15 && pbVar8 < pbVar7; uVar15 = uVar15 - 1) {
      puVar12 = (uint *)((long)puVar6 + 2);
      uVar2 = (ushort)*puVar6;
      uVar11 = (uint)uVar2;
      if (0xfffff7ff < uVar2 - 0xe000) {
        if ((0x36 < uVar2 >> 10) || (uVar2 = *(ushort *)puVar12, (uVar2 & 0xfc00) != 0xdc00))
        goto LAB_106aefc60;
        puVar12 = puVar6 + 1;
        uVar11 = (uint)uVar2 + uVar11 * 0x400 + 0xfca02400;
        uVar15 = uVar15 - 1;
      }
      if (uVar11 < 0x80) {
        pbVar9 = pbVar8 + 1;
        *pbVar8 = (byte)uVar11;
      }
      else {
        bVar4 = (byte)uVar11 & 0x3f | 0x80;
        if (uVar11 < 0x800) {
          if ((long)pbVar7 - (long)pbVar8 < 2) break;
          *pbVar8 = (byte)(uVar11 >> 6) | 0xc0;
          pbVar8[1] = bVar4;
          pbVar9 = pbVar8 + 2;
        }
        else {
          bVar5 = (byte)(uVar11 >> 6) & 0x3f | 0x80;
          if (uVar11 >> 0x10 == 0) {
            if ((long)pbVar7 - (long)pbVar8 < 3) break;
            *pbVar8 = (byte)(uVar11 >> 0xc) | 0xe0;
            pbVar8[1] = bVar5;
            pbVar8[2] = bVar4;
            pbVar9 = pbVar8 + 3;
          }
          else {
            if ((long)pbVar7 - (long)pbVar8 < 4) break;
            *pbVar8 = (byte)(uVar11 >> 0x12) | 0xf0;
            pbVar8[1] = (byte)(uVar11 >> 0xc) & 0x3f | 0x80;
            pbVar8[2] = bVar5;
            pbVar8[3] = bVar4;
            pbVar9 = pbVar8 + 4;
          }
        }
      }
      puVar6 = puVar12;
      pbVar8 = pbVar9;
    }
    *pbVar8 = 0;
    param_3 = (ulong)(uint)((int)pbVar8 - (int)param_2);
  }
  return param_3;
}



/* Entry: 106aefa7c; end: 106aefc6b;  */

ulong FUN_106aefa7c(ushort *param_1,byte *param_2,ulong param_3)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  ushort *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  
  iVar13 = (int)param_3;
  if (((long)param_1 < 0) && (((ulong)param_1 & 0x7000000000000000) == 0x2000000000000000)) {
    uVar14 = (uint)param_1 & 0xf;
    uVar12 = uVar14;
    if ((int)(iVar13 - 1U) <= (int)uVar14) {
      uVar12 = iVar13 - 1U;
    }
    uVar10 = (ulong)param_1 >> 4 & 0xffffffffffffff;
    uVar1 = (int)uVar12 >> 0x1f;
    if (uVar14 < 8) {
      pbVar8 = param_2;
      for (uVar11 = (ulong)(uVar12 & (uVar1 ^ 0xffffffff)); uVar11 != 0; uVar11 = uVar11 - 1) {
        *pbVar8 = (byte)uVar10 & 0x7f;
        uVar10 = uVar10 >> 8;
        pbVar8 = pbVar8 + 1;
      }
    }
    else if (uVar14 < 10) {
      uVar3 = uVar14 * 6;
      pbVar8 = param_2;
      for (uVar11 = (ulong)(uVar12 & (uVar1 ^ 0xffffffff)); uVar11 != 0; uVar11 = uVar11 - 1) {
        uVar3 = uVar3 - 6;
        *pbVar8 = (&UNK_10f3b3b23)[uVar10 >> ((ulong)uVar3 & 0x3f) & 0x3f];
        pbVar8 = pbVar8 + 1;
      }
    }
    else if (uVar14 < 0xc) {
      uVar3 = uVar14 * 5;
      pbVar8 = param_2;
      for (uVar11 = (ulong)(uVar12 & (uVar1 ^ 0xffffffff)); uVar11 != 0; uVar11 = uVar11 - 1) {
        uVar3 = uVar3 - 5;
        *pbVar8 = (&UNK_10f3b3b23)[uVar10 >> ((ulong)uVar3 & 0x3f) & 0x1f];
        pbVar8 = pbVar8 + 1;
      }
    }
    else {
      *param_2 = 0;
    }
    param_2[(ulong)param_1 & 0xf] = 0;
    return (ulong)uVar14;
  }
  bVar4 = (byte)param_1[4];
  if ((bVar4 & 5) == 4) {
    puVar6 = param_1 + 8;
    if ((bVar4 & 0x60) != 0) {
      puVar6 = *(ushort **)puVar6;
    }
    uVar14 = (uint)(byte)*puVar6;
  }
  else if ((bVar4 & 0x60) == 0) {
    uVar14 = *(uint *)(param_1 + 8);
  }
  else {
    uVar14 = *(uint *)(param_1 + 0xc);
  }
  func_0x000106aefd4c();
  if ((bVar4 >> 4 & 1) == 0) {
    if (iVar13 != 0) {
      if (uVar14 != 0) {
        if (iVar13 <= (int)uVar14) {
          uVar14 = iVar13 - 1;
        }
        FUN_106aef4bc();
        if (((ulong)param_1 & 1) != 0) {
          param_2[(int)uVar14] = 0;
          return (ulong)uVar14;
        }
      }
LAB_106aefc60:
      param_3 = 0;
      *param_2 = 0;
    }
  }
  else {
    pbVar7 = param_2 + (long)iVar13 + -1;
    pbVar8 = param_2;
    for (; 0 < (int)uVar14 && pbVar8 < pbVar7; uVar14 = uVar14 - 1) {
      puVar6 = param_1 + 1;
      uVar2 = *param_1;
      uVar12 = (uint)uVar2;
      if (0xfffff7ff < uVar2 - 0xe000) {
        if ((0x36 < uVar2 >> 10) || (uVar2 = *puVar6, (uVar2 & 0xfc00) != 0xdc00))
        goto LAB_106aefc60;
        puVar6 = param_1 + 2;
        uVar12 = (uint)uVar2 + uVar12 * 0x400 + 0xfca02400;
        uVar14 = uVar14 - 1;
      }
      if (uVar12 < 0x80) {
        pbVar9 = pbVar8 + 1;
        *pbVar8 = (byte)uVar12;
      }
      else {
        bVar4 = (byte)uVar12 & 0x3f | 0x80;
        if (uVar12 < 0x800) {
          if ((long)pbVar7 - (long)pbVar8 < 2) break;
          *pbVar8 = (byte)(uVar12 >> 6) | 0xc0;
          pbVar8[1] = bVar4;
          pbVar9 = pbVar8 + 2;
        }
        else {
          bVar5 = (byte)(uVar12 >> 6) & 0x3f | 0x80;
          if (uVar12 >> 0x10 == 0) {
            if ((long)pbVar7 - (long)pbVar8 < 3) break;
            *pbVar8 = (byte)(uVar12 >> 0xc) | 0xe0;
            pbVar8[1] = bVar5;
            pbVar8[2] = bVar4;
            pbVar9 = pbVar8 + 3;
          }
          else {
            if ((long)pbVar7 - (long)pbVar8 < 4) break;
            *pbVar8 = (byte)(uVar12 >> 0x12) | 0xf0;
            pbVar8[1] = (byte)(uVar12 >> 0xc) & 0x3f | 0x80;
            pbVar8[2] = bVar5;
            pbVar8[3] = bVar4;
            pbVar9 = pbVar8 + 4;
          }
        }
      }
      param_1 = puVar6;
      pbVar8 = pbVar9;
    }
    *pbVar8 = 0;
    param_3 = (ulong)(uint)((int)pbVar8 - (int)param_2);
  }
  return param_3;
}



/* Entry: 106aefc6c; end: 106aefdb3;  */

void FUN_106aefc6c(ulong param_1,byte *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = (uint)param_1 & 0xf;
  uVar3 = uVar2;
  if ((int)(param_3 - 1U) <= (int)uVar2) {
    uVar3 = param_3 - 1U;
  }
  uVar5 = param_1 >> 4 & 0xffffffffffffff;
  uVar1 = (int)uVar3 >> 0x1f;
  if (uVar2 < 8) {
    pbVar4 = param_2;
    for (uVar6 = (ulong)(uVar3 & (uVar1 ^ 0xffffffff)); uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar4 = (byte)uVar5 & 0x7f;
      uVar5 = uVar5 >> 8;
      pbVar4 = pbVar4 + 1;
    }
  }
  else if (uVar2 < 10) {
    uVar2 = uVar2 * 6;
    pbVar4 = param_2;
    for (uVar6 = (ulong)(uVar3 & (uVar1 ^ 0xffffffff)); uVar6 != 0; uVar6 = uVar6 - 1) {
      uVar2 = uVar2 - 6;
      *pbVar4 = (&UNK_10f3b3b23)[uVar5 >> ((ulong)uVar2 & 0x3f) & 0x3f];
      pbVar4 = pbVar4 + 1;
    }
  }
  else if (uVar2 < 0xc) {
    uVar2 = uVar2 * 5;
    pbVar4 = param_2;
    for (uVar6 = (ulong)(uVar3 & (uVar1 ^ 0xffffffff)); uVar6 != 0; uVar6 = uVar6 - 1) {
      uVar2 = uVar2 - 5;
      *pbVar4 = (&UNK_10f3b3b23)[uVar5 >> ((ulong)uVar2 & 0x3f) & 0x1f];
      pbVar4 = pbVar4 + 1;
    }
  }
  else {
    *param_2 = 0;
  }
  param_2[param_1 & 0xf] = 0;
  return;
}



/* Entry: 106aefdb4; end: 106aefe5b;  */

double FUN_106aefdb4(ulong param_1)

{
  ulong uVar1;
  int extraout_w8;
  int iVar2;
  double dVar3;
  
  if (((long)param_1 < 0) && (func_0x000106af07c4(param_1 >> 0x3c & 7), extraout_w8 != 0)) {
    return (double)((long)(param_1 << 4) >> 8);
  }
  uVar1 = param_1;
  _CFNumberGetType();
  switch(uVar1) {
  case 1:
  case 7:
    iVar2 = (int)*(char *)(param_1 + 0x10);
    goto code_r0x000106aefe40;
  case 2:
  case 8:
    iVar2 = (int)*(short *)(param_1 + 0x10);
    goto code_r0x000106aefe40;
  case 3:
  case 9:
    iVar2 = *(int *)(param_1 + 0x10);
code_r0x000106aefe40:
    dVar3 = (double)iVar2;
    break;
  case 4:
  case 10:
  case 0xb:
  case 0xe:
  case 0xf:
    dVar3 = (double)*(long *)(param_1 + 0x10);
    break;
  case 5:
  case 0xc:
    dVar3 = (double)*(float *)(param_1 + 0x10);
    break;
  case 6:
  case 0xd:
  case 0x10:
    dVar3 = *(double *)(param_1 + 0x10);
    break;
  default:
    dVar3 = NAN;
  }
  return dVar3;
}



/* Entry: 106aefe5c; end: 106aefe7b;  */

bool FUN_106aefe5c(long param_1)

{
  func_0x000106aeff54();
  return *(int *)(param_1 + 0xc) == 1;
}



/* Entry: 106aefe7c; end: 106aeffd3;  */

int FUN_106aefe7c(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = param_1;
  FUN_106aefe5c();
  if ((int)lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 8);
    if (((int)param_3 <= lVar3) || (param_3 = lVar3, 0 < lVar3)) {
      iVar4 = (int)param_3;
      lVar3 = param_1;
      func_0x000106aeff54();
      if ((*(byte *)(lVar3 + 0x10) & 1) == 0) {
        plVar2 = (long *)(param_1 + 0x10);
        goto LAB_106aeff38;
      }
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x10);
    if (((int)param_3 <= lVar3) || (param_3 = lVar3, 0 < lVar3)) {
      iVar4 = (int)param_3;
      bVar1 = *(byte *)(param_1 + 8);
      if ((bVar1 & 3) == 2) {
        plVar2 = *(long **)(param_1 + 0x28) + **(long **)(param_1 + 0x28) + 2;
      }
      else {
        lVar3 = 0x58;
        if (((bVar1 ^ 0xff) & 0xc) != 0) {
          lVar3 = 0x30;
        }
        plVar2 = (long *)0x0;
        if ((bVar1 & 3) == 0) {
          plVar2 = (long *)(param_1 + lVar3);
        }
      }
LAB_106aeff38:
      FUN_106aef4bc(plVar2,param_2,iVar4 << 3);
      if ((int)plVar2 != 0) {
        return iVar4;
      }
      return 0;
    }
  }
  return 0;
}



/* Entry: 106aeffd4; end: 106aeffeb;  */

undefined4 FUN_106aeffd4(long param_1)

{
  func_0x000106aeff54();
  return *(undefined4 *)(param_1 + 8);
}


