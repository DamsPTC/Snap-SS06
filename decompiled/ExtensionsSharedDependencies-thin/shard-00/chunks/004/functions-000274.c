/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 005828c8; end: 00582ed3;  */

void FUN_005828c8(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  if ((param_2[0xf] != 0) && (plVar1 = param_2, (**(code **)(*param_2 + 0x30))(), (int)plVar1 == 0))
  {
    lVar2 = param_2[0xf];
    _fseeko(lVar2,param_3[0x10],0);
    if ((int)lVar2 == 0) {
      lVar3 = param_3[1];
      lVar2 = *param_3;
      lVar5 = param_3[3];
      lVar4 = param_3[2];
      lVar7 = param_3[5];
      lVar6 = param_3[4];
      lVar9 = param_3[7];
      lVar8 = param_3[6];
      lVar11 = param_3[9];
      lVar10 = param_3[8];
      lVar13 = param_3[0xb];
      lVar12 = param_3[10];
      lVar15 = param_3[0xd];
      lVar14 = param_3[0xc];
      lVar16 = param_3[0xe];
      param_2[0x20] = param_3[0xf];
      param_2[0x1f] = lVar16;
      param_2[0x1e] = lVar15;
      param_2[0x1d] = lVar14;
      param_2[0x1c] = lVar13;
      param_2[0x1b] = lVar12;
      param_2[0x1a] = lVar11;
      param_2[0x19] = lVar10;
      param_2[0x18] = lVar9;
      param_2[0x17] = lVar8;
      param_2[0x16] = lVar7;
      param_2[0x15] = lVar6;
      param_2[0x14] = lVar5;
      param_2[0x13] = lVar4;
      param_2[0x12] = lVar3;
      param_2[0x11] = lVar2;
      lVar3 = param_3[1];
      lVar2 = *param_3;
      lVar5 = param_3[3];
      lVar4 = param_3[2];
      lVar6 = param_3[4];
      lVar8 = param_3[7];
      lVar7 = param_3[6];
      param_1[5] = param_3[5];
      param_1[4] = lVar6;
      param_1[7] = lVar8;
      param_1[6] = lVar7;
      param_1[1] = lVar3;
      *param_1 = lVar2;
      param_1[3] = lVar5;
      param_1[2] = lVar4;
      lVar3 = param_3[9];
      lVar2 = param_3[8];
      lVar5 = param_3[0xb];
      lVar4 = param_3[10];
      lVar7 = param_3[0xd];
      lVar6 = param_3[0xc];
      lVar9 = param_3[0xf];
      lVar8 = param_3[0xe];
      param_1[0x10] = param_3[0x10];
      param_1[0xd] = lVar7;
      param_1[0xc] = lVar6;
      param_1[0xf] = lVar9;
      param_1[0xe] = lVar8;
      param_1[9] = lVar3;
      param_1[8] = lVar2;
      param_1[0xb] = lVar5;
      param_1[10] = lVar4;
      return;
    }
  }
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0x10] = -1;
  return;
}



/* Entry: 00582ed4; end: 00582f2f;  */

undefined8 FUN_00582ed4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  if ((*(long *)(param_1 + 0x78) != 0) &&
     (uVar1 = *(ulong *)(param_1 + 0x18), *(ulong *)(param_1 + 0x10) < uVar1)) {
    if ((uint)param_2 == 0xffffffff) {
      *(ulong *)(param_1 + 0x18) = uVar1 - 1;
      return 0;
    }
    if (((*(byte *)(param_1 + 0x188) >> 4 & 1) != 0) ||
       ((uint)*(byte *)(uVar1 - 1) == ((uint)param_2 & 0xff))) {
      *(ulong *)(param_1 + 0x18) = uVar1 - 1;
      *(char *)(uVar1 - 1) = (char)param_2;
      return param_2;
    }
  }
  return 0xffffffff;
}



/* Entry: 00582f30; end: 0058317f;  */

ulong FUN_00582f30(long param_1,uint param_2)

{
  undefined1 *puVar1;
  int iVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  char *pcVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  long lStack_68;
  undefined1 *puStack_60;
  undefined1 uStack_51;
  
  if (*(long *)(param_1 + 0x78) == 0) {
    return 0xffffffff;
  }
  if ((*(byte *)(param_1 + 0x18c) >> 4 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    uVar10 = *(ulong *)(param_1 + 0x60);
    if (uVar10 < 9) {
      puVar14 = (undefined1 *)0x0;
      puVar12 = (undefined1 *)0x0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x18c) = 0x10;
      puVar15 = (undefined1 *)0x0;
      goto joined_r0x00582f94;
    }
    if (*(char *)(param_1 + 0x192) == '\x01') {
      puVar12 = *(undefined1 **)(param_1 + 0x40);
    }
    else {
      puVar12 = *(undefined1 **)(param_1 + 0x68);
      uVar10 = *(ulong *)(param_1 + 0x70);
    }
    puVar14 = puVar12 + (uVar10 - 1);
    *(undefined1 **)(param_1 + 0x28) = puVar12;
    *(undefined1 **)(param_1 + 0x30) = puVar12;
    *(undefined1 **)(param_1 + 0x38) = puVar14;
    *(undefined4 *)(param_1 + 0x18c) = 0x10;
    puVar15 = puVar12;
    if (param_2 != 0xffffffff) goto LAB_00582f98;
LAB_005830c8:
    puVar1 = puVar12 + -(long)puVar15;
    puVar4 = puVar15;
  }
  else {
    puVar12 = *(undefined1 **)(param_1 + 0x30);
    puVar14 = *(undefined1 **)(param_1 + 0x38);
    puVar15 = *(undefined1 **)(param_1 + 0x28);
joined_r0x00582f94:
    if (param_2 == 0xffffffff) goto LAB_005830c8;
LAB_00582f98:
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &uStack_51;
      *(undefined1 **)(param_1 + 0x28) = puVar12;
      *(undefined1 **)(param_1 + 0x30) = puVar12;
      *(undefined1 **)(param_1 + 0x38) = &stack0xffffffffffffffb0;
    }
    *puVar12 = (char)param_2;
    puVar12 = (undefined1 *)(*(long *)(param_1 + 0x30) + 1);
    *(undefined1 **)(param_1 + 0x30) = puVar12;
    puVar1 = puVar12 + -(long)*(undefined1 **)(param_1 + 0x28);
    puVar4 = *(undefined1 **)(param_1 + 0x28);
  }
  if (puVar1 == (undefined1 *)0x0) {
    uVar7 = 0;
    if (param_2 != 0xffffffff) {
      uVar7 = param_2;
    }
    return (ulong)uVar7;
  }
  if (*(char *)(param_1 + 0x192) == '\x01') {
    _fwrite(puVar4,1,puVar1,*(undefined8 *)(param_1 + 0x78));
    if (puVar4 == puVar1) {
LAB_0058310c:
      *(undefined1 **)(param_1 + 0x28) = puVar15;
      *(undefined1 **)(param_1 + 0x30) = puVar15;
      *(undefined1 **)(param_1 + 0x38) = puVar14;
      uVar7 = 0;
      if (param_2 != 0xffffffff) {
        uVar7 = param_2;
      }
      return (ulong)uVar7;
    }
  }
  else {
    plVar3 = *(long **)(param_1 + 0x80);
    if (plVar3 == (long *)0x0) {
      FUN_00583180();
      uVar10 = 8;
      ___cxa_allocate_exception();
      __ZNSt8bad_castC1Ev();
      puVar5 = PTR___ZTISt8bad_cast_00998d58;
      puVar8 = PTR___ZNSt8bad_castD1Ev_00998ce8;
      ___cxa_throw();
      if (*(long *)(uVar10 + 0x78) == 0) {
        uVar7 = (uint)puVar8;
        pcVar11 = "w";
        switch(uVar7 & 0xfffffffd) {
        case 1:
        case 0x11:
          pcVar11 = "a";
          break;
        default:
          goto LAB_005831c0;
        case 5:
        case 0x15:
          pcVar11 = "ab";
          break;
        case 8:
          pcVar11 = "r";
          break;
        case 9:
        case 0x19:
          pcVar11 = "a+";
          break;
        case 0xc:
          pcVar11 = "rb";
          break;
        case 0xd:
        case 0x1d:
          pcVar11 = "a+b";
          break;
        case 0x10:
        case 0x30:
          break;
        case 0x14:
        case 0x34:
          pcVar11 = "wb";
          break;
        case 0x18:
          pcVar11 = "r+";
          break;
        case 0x1c:
          pcVar11 = "r+b";
          break;
        case 0x38:
          pcVar11 = "w+";
          break;
        case 0x3c:
          pcVar11 = "w+b";
        }
        _fopen(puVar5,pcVar11);
        *(undefined **)(uVar10 + 0x78) = puVar5;
        if (puVar5 != (undefined *)0x0) {
          *(uint *)(uVar10 + 0x188) = uVar7;
          if (*(int *)(uVar10 + 0x18c) == 0x22) {
            _setbuf();
            *(undefined4 *)(uVar10 + 0x18c) = 0;
          }
          if ((uVar7 >> 1 & 1) != 0) {
            *(undefined4 *)(uVar10 + 0x18c) = 0;
            uVar6 = *(undefined8 *)(uVar10 + 0x78);
            _fseek(uVar6,0,2);
            if ((int)uVar6 != 0) {
              _fclose(*(undefined8 *)(uVar10 + 0x78));
              *(undefined8 *)(uVar10 + 0x78) = 0;
              return 0;
            }
          }
          return uVar10;
        }
      }
LAB_005831c0:
      return 0;
    }
    lVar9 = *(long *)(param_1 + 0x40);
    lStack_68 = lVar9;
    while ((**(code **)(*plVar3 + 0x18))
                     (plVar3,param_1 + 0x88,puVar4,puVar12,&puStack_60,lVar9,
                      lVar9 + *(long *)(param_1 + 0x60),&lStack_68), puStack_60 != puVar4) {
      iVar2 = (int)plVar3;
      if (iVar2 != 1) {
        if (iVar2 == 0) {
          lVar9 = *(long *)(param_1 + 0x40);
          lVar13 = lStack_68 - lVar9;
          _fwrite(lVar9,1,lVar13,*(undefined8 *)(param_1 + 0x78));
          if (lVar9 == lVar13) goto LAB_0058310c;
        }
        else if ((iVar2 == 3) &&
                (lVar9 = -(long)puVar4,
                _fwrite(puVar4,1,puVar12 + lVar9,*(undefined8 *)(param_1 + 0x78)),
                puVar4 == puVar12 + lVar9)) goto LAB_0058310c;
        break;
      }
      lVar9 = *(long *)(param_1 + 0x40);
      lVar13 = lStack_68 - lVar9;
      _fwrite(lVar9,1,lVar13,*(undefined8 *)(param_1 + 0x78));
      if (lVar9 != lVar13) break;
      plVar3 = *(long **)(param_1 + 0x80);
      lVar9 = *(long *)(param_1 + 0x40);
      puVar4 = puStack_60;
    }
  }
  if (*(long *)(param_1 + 0x30) == *(long *)(param_1 + 0x38) + 1) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
  }
  return 0xffffffff;
}



/* Entry: 00583180; end: 005831a7;  */

long FUN_00583180(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined *puVar5;
  char *pcVar6;
  
  lVar1 = 8;
  ___cxa_allocate_exception();
  __ZNSt8bad_castC1Ev();
  puVar2 = PTR___ZTISt8bad_cast_00998d58;
  puVar5 = PTR___ZNSt8bad_castD1Ev_00998ce8;
  ___cxa_throw();
  if (*(long *)(lVar1 + 0x78) == 0) {
    uVar4 = (uint)puVar5;
    pcVar6 = "w";
    switch(uVar4 & 0xfffffffd) {
    case 1:
    case 0x11:
      pcVar6 = "a";
      break;
    default:
      goto LAB_005831c0;
    case 5:
    case 0x15:
      pcVar6 = "ab";
      break;
    case 8:
      pcVar6 = "r";
      break;
    case 9:
    case 0x19:
      pcVar6 = "a+";
      break;
    case 0xc:
      pcVar6 = "rb";
      break;
    case 0xd:
    case 0x1d:
      pcVar6 = "a+b";
      break;
    case 0x10:
    case 0x30:
      break;
    case 0x14:
    case 0x34:
      pcVar6 = "wb";
      break;
    case 0x18:
      pcVar6 = "r+";
      break;
    case 0x1c:
      pcVar6 = "r+b";
      break;
    case 0x38:
      pcVar6 = "w+";
      break;
    case 0x3c:
      pcVar6 = "w+b";
    }
    _fopen(puVar2,pcVar6);
    *(undefined **)(lVar1 + 0x78) = puVar2;
    if (puVar2 != (undefined *)0x0) {
      *(uint *)(lVar1 + 0x188) = uVar4;
      if (*(int *)(lVar1 + 0x18c) == 0x22) {
        _setbuf();
        *(undefined4 *)(lVar1 + 0x18c) = 0;
      }
      if ((uVar4 >> 1 & 1) != 0) {
        *(undefined4 *)(lVar1 + 0x18c) = 0;
        uVar3 = *(undefined8 *)(lVar1 + 0x78);
        _fseek(uVar3,0,2);
        if ((int)uVar3 != 0) {
          _fclose(*(undefined8 *)(lVar1 + 0x78));
          *(undefined8 *)(lVar1 + 0x78) = 0;
          return 0;
        }
      }
      return lVar1;
    }
  }
LAB_005831c0:
  return 0;
}



/* Entry: 005831a8; end: 005832ff;  */

long FUN_005831a8(long param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  
  if (*(long *)(param_1 + 0x78) == 0) {
    pcVar2 = "w";
    switch(param_3 & 0xfffffffd) {
    case 1:
    case 0x11:
      pcVar2 = "a";
      break;
    default:
      goto LAB_005831c0;
    case 5:
    case 0x15:
      pcVar2 = "ab";
      break;
    case 8:
      pcVar2 = "r";
      break;
    case 9:
    case 0x19:
      pcVar2 = "a+";
      break;
    case 0xc:
      pcVar2 = "rb";
      break;
    case 0xd:
    case 0x1d:
      pcVar2 = "a+b";
      break;
    case 0x10:
    case 0x30:
      break;
    case 0x14:
    case 0x34:
      pcVar2 = "wb";
      break;
    case 0x18:
      pcVar2 = "r+";
      break;
    case 0x1c:
      pcVar2 = "r+b";
      break;
    case 0x38:
      pcVar2 = "w+";
      break;
    case 0x3c:
      pcVar2 = "w+b";
    }
    _fopen(param_2,pcVar2);
    *(long *)(param_1 + 0x78) = param_2;
    if (param_2 != 0) {
      *(uint *)(param_1 + 0x188) = param_3;
      if (*(int *)(param_1 + 0x18c) == 0x22) {
        _setbuf();
        *(undefined4 *)(param_1 + 0x18c) = 0;
      }
      if ((param_3 >> 1 & 1) != 0) {
        *(undefined4 *)(param_1 + 0x18c) = 0;
        uVar1 = *(undefined8 *)(param_1 + 0x78);
        _fseek(uVar1,0,2);
        if ((int)uVar1 != 0) {
          _fclose(*(undefined8 *)(param_1 + 0x78));
          *(undefined8 *)(param_1 + 0x78) = 0;
          return 0;
        }
      }
      return param_1;
    }
  }
LAB_005831c0:
  return 0;
}



/* Entry: 00583300; end: 005833db;  */

long * FUN_00583300(long *param_1)

{
  long lVar1;
  
  *param_1 = (long)&PTR_FUN_00a02138;
  lVar1 = param_1[0xf];
  if (lVar1 != 0) {
    func_0x005829a4(param_1);
    _fclose(lVar1);
    param_1[0xf] = 0;
    (**(code **)(*param_1 + 0x18))(param_1,0,0);
  }
  if (((char)param_1[0x32] == '\x01') && (param_1[8] != 0)) {
    __ZdaPv();
  }
  if ((*(char *)((long)param_1 + 0x191) == '\x01') && (param_1[0xd] != 0)) {
    __ZdaPv();
  }
  *param_1 = (long)(PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_00998de8 + 0x10);
  __ZNSt3__16localeD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 005833dc; end: 0058344f;  */

undefined8 * FUN_005833dc(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_00a021d0;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
    lVar1 = param_1[1];
    *param_1 = &PTR_FUN_00a01fa8;
    param_1[1] = 0;
  }
  else {
    lVar1 = param_1[1];
    *param_1 = &PTR_FUN_00a01fa8;
    param_1[1] = 0;
  }
  if (lVar1 != 0) {
    (*(code *)param_1[2])();
  }
  return param_1;
}



/* Entry: 00583450; end: 005834c3;  */

void FUN_00583450(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_00a021d0;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
    lVar1 = param_1[1];
    *param_1 = &PTR_FUN_00a01fa8;
    param_1[1] = 0;
  }
  else {
    lVar1 = param_1[1];
    *param_1 = &PTR_FUN_00a01fa8;
    param_1[1] = 0;
  }
  if (lVar1 != 0) {
    (*(code *)param_1[2])();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_1);
  return;
}



/* Entry: 005834c4; end: 005834eb;  */

void FUN_005834c4(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (-1 < *(char *)(param_2 + 0x37)) {
    uVar3 = *(ulong *)(param_2 + 0x20);
    param_1[1] = *(ulong *)(param_2 + 0x28);
    *param_1 = uVar3;
    param_1[2] = *(ulong *)(param_2 + 0x30);
    return;
  }
  uVar3 = *(ulong *)(param_2 + 0x28);
  if (uVar3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar3;
  }
  else {
    if (0x7ffffffffffffff7 < uVar3) {
      FUN_0026329c(param_1,*(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x002972c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(undefined *)0x2972c4)();
      return;
    }
    uVar1 = 0x19;
    if ((uVar3 | 7) != 0x17) {
      uVar1 = (uVar3 | 7) + 1;
    }
    uVar2 = uVar1;
    __Znwm();
    param_1[1] = uVar3;
    param_1[2] = uVar1 | 0x8000000000000000;
    *param_1 = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_0099a400)();
  return;
}



/* Entry: 005834ec; end: 00583657;  */

void FUN_005834ec(long *param_1,long param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  undefined1 auStack_70 [56];
  long lStack_38;
  
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  param_1[3] = (long)"-00";
  lVar1 = 0;
  __ZNSt3__16chrono12system_clock11from_time_tEl();
  lVar1 = SUB168(SEXT816(lVar1) * SEXT816(-0x431bde82d7b634db),8);
  lVar1 = ((lVar1 >> 0x12) - (lVar1 >> 0x3f)) + *param_3;
  plVar2 = &lStack_38;
  lStack_38 = lVar1;
  if (*(char *)(param_2 + 8) == '\x01') {
    _localtime_r();
  }
  else {
    _gmtime_r(plVar2,auStack_70);
  }
  if (plVar2 != (long *)0x0) {
    lVar1 = (long)*(int *)((long)plVar2 + 0x14) + 0x76c;
    lVar3 = (long)(int)plVar2[2] + 1;
    FUN_005700e8(lVar1,lVar3,(long)*(int *)((long)plVar2 + 0xc),(long)(int)plVar2[1],
                 (long)*(int *)((long)plVar2 + 4),(long)(int)*plVar2);
    *param_1 = lVar1;
    *(int *)(param_1 + 1) = (int)lVar3;
    *(char *)((long)param_1 + 0xc) = (char)((ulong)lVar3 >> 0x20);
    *(int *)(param_1 + 2) = (int)plVar2[5];
    if (*(char *)(param_2 + 8) == '\x01') {
      pcVar5 = (char *)plVar2[6];
    }
    else {
      pcVar5 = "UTC";
    }
    param_1[3] = (long)pcVar5;
    *(bool *)((long)param_1 + 0x14) = 0 < (int)plVar2[4];
    return;
  }
  if (lVar1 < 0) {
    *param_1 = -0x8000000000000000;
    param_1[1] = 0x101;
    return;
  }
  lVar1 = 0x7fffffffffffffff;
  uVar4 = 0xc;
  FUN_0057044c(0x7fffffffffffffff,0xc,0x1f,0,0x17,0x3b,0x3b);
  *param_1 = lVar1;
  param_1[1] = uVar4 & 0xffffffffff;
  return;
}



/* Entry: 00583658; end: 00583dd3;  */

void FUN_00583658(undefined4 *param_1,long param_2,ulong *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *unaff_x22;
  undefined1 *puVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uStack_110;
  undefined8 uStack_108;
  int iStack_100;
  int iStack_fc;
  int iStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  int iStack_c0;
  int iStack_bc;
  int iStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [56];
  
  puVar3 = &uStack_110;
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    if ((bRam0000000000b62938 & 1) == 0) {
      iVar1 = 0xb62938;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        lVar10 = 0;
        __ZNSt3__16chrono12system_clock11from_time_tEl(0);
        lVar10 = SUB168(SEXT816(lVar10) * SEXT816(-0x431bde82d7b634db),8);
        uVar8 = (lVar10 >> 0x12) - (lVar10 >> 0x3f) ^ 0x8000000000000000;
        uVar9 = 0x7b2;
        uVar11 = 1;
        FUN_005700e8(0x7b2,1,1,0,(long)uVar8 / 0x3c,(long)uVar8 % 0x3c);
        _uRam0000000000b62950 = uVar11 & 0xffffffffff;
        uRam0000000000b62948 = uVar9;
        ___cxa_guard_release(0xb62938);
      }
    }
    if ((bRam0000000000b62940 & 1) == 0) {
      iVar1 = 0xb62940;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        lVar10 = 0;
        __ZNSt3__16chrono12system_clock11from_time_tEl(0);
        lVar10 = SUB168(SEXT816(lVar10) * SEXT816(-0x431bde82d7b634db),8);
        lVar10 = ((lVar10 >> 0x12) - (lVar10 >> 0x3f)) + 0x7fffffffffffffff;
        uVar9 = 0x7b2;
        uVar11 = 1;
        FUN_005700e8(0x7b2,1,1,0,lVar10 / 0x3c,lVar10 % 0x3c);
        _uRam0000000000b62960 = uVar11 & 0xffffffffff;
        uRam0000000000b62958 = uVar9;
        ___cxa_guard_release(0xb62940);
      }
    }
    uVar9 = *param_3;
    if ((long)uVar9 < (long)uRam0000000000b62948) {
LAB_005836dc:
      lVar10 = -0x8000000000000000;
    }
    else {
      if (uVar9 == uRam0000000000b62948) {
        if ((char)param_3[1] < (char)uRam0000000000b62950) goto LAB_005836dc;
        if ((char)param_3[1] == (char)uRam0000000000b62950) {
          if (*(char *)((long)param_3 + 9) < uRam0000000000b62950._1_1_) goto LAB_005836dc;
          if (*(char *)((long)param_3 + 9) == uRam0000000000b62950._1_1_) {
            if (*(char *)((long)param_3 + 10) < cRam0000000000b62952) goto LAB_005836dc;
            if (*(char *)((long)param_3 + 10) == cRam0000000000b62952) {
              if ((*(char *)((long)param_3 + 0xb) < cRam0000000000b62953) ||
                 ((*(char *)((long)param_3 + 0xb) == cRam0000000000b62953 &&
                  (*(char *)((long)param_3 + 0xc) < cRam0000000000b62954)))) goto LAB_005836dc;
            }
          }
        }
      }
      if ((long)uRam0000000000b62958 < (long)uVar9) {
        lVar10 = 0x7fffffffffffffff;
      }
      else {
        if (uRam0000000000b62958 == uVar9) {
          if ((char)uRam0000000000b62960 < (char)param_3[1]) {
LAB_0058390c:
            lVar10 = 0x7fffffffffffffff;
            goto LAB_00583c14;
          }
          if ((char)uRam0000000000b62960 == (char)param_3[1]) {
            if (uRam0000000000b62960._1_1_ < *(char *)((long)param_3 + 9)) goto LAB_0058390c;
            if (uRam0000000000b62960._1_1_ == *(char *)((long)param_3 + 9)) {
              if (cRam0000000000b62962 < *(char *)((long)param_3 + 10)) goto LAB_0058390c;
              if (cRam0000000000b62962 == *(char *)((long)param_3 + 10)) {
                if ((cRam0000000000b62963 < *(char *)((long)param_3 + 0xb)) ||
                   ((cRam0000000000b62963 == *(char *)((long)param_3 + 0xb) &&
                    (cRam0000000000b62964 < *(char *)((long)param_3 + 0xc))))) goto LAB_0058390c;
              }
            }
          }
        }
        uVar11 = param_3[1];
        func_0x0057bb14(uVar9,(int)(char)uVar11,(long)(uVar11 << 0x30) >> 0x38,0x7b2,1,1);
        lVar10 = 0;
        __ZNSt3__16chrono12system_clock11from_time_tEl();
        lVar10 = lVar10 / 1000000 + (long)((int)(uVar11 >> 8) >> 0x18) +
                 ((uVar9 * 0x18 + (long)(((int)uVar11 << 8) >> 0x18)) * 0x3c +
                 (long)((int)uVar11 >> 0x18)) * 0x3c;
      }
    }
LAB_00583c14:
    *param_1 = 0;
    *(long *)(param_1 + 2) = lVar10;
    *(long *)(param_1 + 4) = lVar10;
LAB_00583c1c:
    *(long *)(param_1 + 6) = lVar10;
    return;
  }
  uVar9 = *param_3;
  if ((long)uVar9 < 0) {
    if (uVar9 < 0xffffffff8000076c) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 4) = 0x8000000000000000;
      *(undefined8 *)(param_1 + 2) = 0x8000000000000000;
      lVar10 = -0x8000000000000000;
      goto LAB_00583c1c;
    }
  }
  else if (0x8000076b < uVar9) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 4) = 0x7ff8000000000000;
    *(undefined8 *)(param_1 + 2) = 0x7ff8000000000000;
    lVar10 = 0x7fffffffffffffff;
    goto LAB_00583c1c;
  }
  iStack_bc = (int)uVar9 + -0x76c;
  iStack_c0 = (char)param_3[1] + -1;
  uVar15 = *(undefined4 *)((long)param_3 + 9);
  auVar16._0_4_ = (int)(short)(char)uVar15;
  auVar16._4_4_ = (int)(short)(char)((uint)uVar15 >> 8);
  auVar16._8_4_ = (int)(short)(char)((uint)uVar15 >> 0x10);
  auVar16._12_4_ = (int)(short)(char)((uint)uVar15 >> 0x18);
  auVar16 = NEON_rev64(auVar16,4);
  auVar16 = NEON_ext(auVar16,auVar16,8,1);
  uStack_c8 = auVar16._8_8_;
  uStack_d0 = auVar16._0_8_;
  iStack_b0 = 0;
  puVar2 = &uStack_d0;
  _mktime();
  puStack_90 = puVar2;
  if (puVar2 == (undefined8 *)0xffffffffffffffff) {
    ppuVar4 = &puStack_90;
    _localtime_r(ppuVar4,auStack_78);
    if (((((ppuVar4 != (undefined8 **)0x0) && (*(int *)((long)ppuVar4 + 0x14) == iStack_bc)) &&
         (*(int *)(ppuVar4 + 2) == iStack_c0)) &&
        ((*(int *)((long)ppuVar4 + 0xc) == uStack_c8._4_4_ &&
         (*(int *)(ppuVar4 + 1) == (int)uStack_c8)))) &&
       ((*(int *)((long)ppuVar4 + 4) == uStack_d0._4_4_ && (*(int *)ppuVar4 == (int)uStack_d0))))
    goto LAB_005837e4;
LAB_00583984:
    if (((long)*param_3 < 0x7b2) ||
       ((*param_3 == 0x7b2 &&
        (((char)param_3[1] < '\x01' ||
         (((char)param_3[1] == '\x01' &&
          ((*(char *)((long)param_3 + 9) < '\x01' ||
           ((*(char *)((long)param_3 + 9) == '\x01' &&
            ((*(char *)((long)param_3 + 10) < '\0' ||
             ((*(char *)((long)param_3 + 10) == '\0' &&
              ((*(char *)((long)param_3 + 0xb) < '\0' ||
               ((*(char *)((long)param_3 + 0xb) == '\0' && (*(char *)((long)param_3 + 0xc) < '\0')))
               ))))))))))))))))) {
      puVar7 = (undefined1 *)0x8000000000000000;
    }
    else {
      puVar7 = (undefined1 *)0x7fffffffffffffff;
    }
    *param_1 = 0;
  }
  else {
LAB_005837e4:
    iStack_fc = (int)*param_3 + -0x76c;
    iStack_100 = (char)param_3[1] + -1;
    uVar15 = *(undefined4 *)((long)param_3 + 9);
    auVar17._0_4_ = (int)(short)(char)uVar15;
    auVar17._4_4_ = (int)(short)(char)((uint)uVar15 >> 8);
    auVar17._8_4_ = (int)(short)(char)((uint)uVar15 >> 0x10);
    auVar17._12_4_ = (int)(short)(char)((uint)uVar15 >> 0x18);
    auVar16 = NEON_rev64(auVar17,4);
    auVar16 = NEON_ext(auVar16,auVar16,8,1);
    uStack_108 = auVar16._8_8_;
    uStack_110 = auVar16._0_8_;
    iStack_f0 = 1;
    _mktime();
    puStack_98 = puVar3;
    if (puVar3 == (undefined8 *)0xffffffffffffffff) {
      ppuVar4 = &puStack_98;
      _localtime_r(ppuVar4,auStack_78);
      if ((((ppuVar4 == (undefined8 **)0x0) || (*(int *)((long)ppuVar4 + 0x14) != iStack_fc)) ||
          ((*(int *)(ppuVar4 + 2) != iStack_100 ||
           (((*(int *)((long)ppuVar4 + 0xc) != uStack_108._4_4_ ||
             (*(int *)(ppuVar4 + 1) != (int)uStack_108)) ||
            (*(int *)((long)ppuVar4 + 4) != uStack_110._4_4_)))))) ||
         (*(int *)ppuVar4 != (int)uStack_110)) goto LAB_00583984;
    }
    puVar3 = puStack_98;
    if (iStack_b0 != iStack_f0) {
      puVar2 = puStack_90;
      puStack_80 = puStack_98;
      puVar12 = puStack_a8;
      if ((long)puStack_90 < (long)puStack_98) {
        puStack_98 = puStack_90;
        puStack_90 = puVar3;
        puVar2 = puVar3;
        puStack_80 = puStack_98;
        puVar12 = puStack_e8;
      }
      do {
        puVar3 = puVar2;
        if ((undefined8 *)((long)puStack_80 + 1) == puVar2) break;
        puStack_88 = (undefined8 *)((long)puStack_80 + ((long)puVar2 - (long)puStack_80) / 2);
        ppuVar4 = &puStack_88;
        _localtime_r(ppuVar4,auStack_78);
        if (ppuVar4 == (undefined8 **)0x0) {
          puStack_80 = (undefined8 *)((long)puStack_80 + 1);
          if (puStack_80 == puVar2) break;
          do {
            ppuVar5 = &puStack_80;
            _localtime_r(ppuVar5,auStack_78);
            if ((ppuVar5 != (undefined8 **)0x0) && (unaff_x22 = puStack_80, ppuVar5[5] == puVar12))
            break;
            puStack_80 = (undefined8 *)((long)puStack_80 + 1);
            unaff_x22 = puVar2;
          } while (puStack_80 != puVar2);
        }
        else {
          puVar3 = puStack_88;
          if (ppuVar4[5] != puVar12) {
            puStack_80 = puStack_88;
            puVar3 = puVar2;
          }
        }
        puVar2 = puVar3;
        puVar3 = unaff_x22;
      } while (ppuVar4 != (undefined8 **)0x0);
      lVar10 = 0;
      __ZNSt3__16chrono12system_clock11from_time_tEl();
      puVar12 = puStack_90;
      puVar2 = puStack_98;
      if (iStack_b0 == 0) {
        lVar6 = 0;
        __ZNSt3__16chrono12system_clock11from_time_tEl();
        puVar14 = puStack_90;
        puVar13 = (undefined1 *)(lVar6 / 1000000 + (long)puVar2);
        lVar6 = 0;
        __ZNSt3__16chrono12system_clock11from_time_tEl();
        uVar15 = 2;
      }
      else {
        lVar6 = 0;
        __ZNSt3__16chrono12system_clock11from_time_tEl();
        puVar14 = puStack_98;
        puVar13 = (undefined1 *)(lVar6 / 1000000 + (long)puVar12);
        lVar6 = 0;
        __ZNSt3__16chrono12system_clock11from_time_tEl();
        uVar15 = 1;
      }
      *param_1 = uVar15;
      puVar7 = (undefined1 *)(lVar6 / 1000000 + (long)puVar14);
      *(undefined1 **)(param_1 + 2) = puVar13;
      *(undefined1 **)(param_1 + 4) = (undefined1 *)(lVar10 / 1000000 + (long)puVar3);
      goto LAB_005839d4;
    }
    puVar3 = puStack_90;
    if (iStack_b0 != 0) {
      puVar3 = puStack_98;
    }
    lVar10 = 0;
    __ZNSt3__16chrono12system_clock11from_time_tEl();
    *param_1 = 0;
    puVar7 = (undefined1 *)(lVar10 / 1000000 + (long)puVar3);
  }
  *(undefined1 **)(param_1 + 2) = puVar7;
  *(undefined1 **)(param_1 + 4) = puVar7;
LAB_005839d4:
  *(undefined1 **)(param_1 + 6) = puVar7;
  return;
}



/* Entry: 00583dd4; end: 00583def;  */

undefined8 FUN_00583dd4(void)

{
  return 0;
}



/* Entry: 00583df0; end: 00583e47;  */

void FUN_00583df0(long param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  bool bVar3;
  
  bVar3 = *(char *)(param_2 + 8) == '\0';
  pcVar1 = "localtime";
  if (bVar3) {
    pcVar1 = "UTC";
  }
  lVar2 = 9;
  if (bVar3) {
    lVar2 = 3;
  }
  *(char *)(param_1 + 0x17) = (char)lVar2;
  _memcpy(param_1,pcVar1,lVar2);
  *(undefined1 *)(param_1 + lVar2) = 0;
  return;
}



/* Entry: 00583e48; end: 00583e4f;  */

void FUN_00583e48(void)

{
  return;
}



/* Entry: 00583e50; end: 00583f17;  */

void FUN_00583e50(undefined8 param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if ((*param_2 == 0) && (lVar2 = lRam0000000000b6b6a0, (bRam0000000000b6b6a8 & 1) == 0)) {
    iVar1 = 0xb6b6a8;
    ___cxa_guard_acquire();
    lVar2 = lRam0000000000b6b6a0;
    if (iVar1 != 0) {
      lVar2 = 0x20;
      __Znwm();
      FUN_0057cad4();
      lRam0000000000b6b6a0 = lVar2;
      ___cxa_guard_release(0xb6b6a8);
      lVar2 = lRam0000000000b6b6a0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00583ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar2 + 0x18) + 0x10))(param_1,*(long **)(lVar2 + 0x18),param_3);
  return;
}



/* Entry: 00583f18; end: 00583fdf;  */

void FUN_00583f18(undefined8 param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if ((*param_2 == 0) && (lVar2 = lRam0000000000b6b6a0, (bRam0000000000b6b6a8 & 1) == 0)) {
    iVar1 = 0xb6b6a8;
    ___cxa_guard_acquire();
    lVar2 = lRam0000000000b6b6a0;
    if (iVar1 != 0) {
      lVar2 = 0x20;
      __Znwm();
      FUN_0057cad4();
      lRam0000000000b6b6a0 = lVar2;
      ___cxa_guard_release(0xb6b6a8);
      lVar2 = lRam0000000000b6b6a0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00583f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar2 + 0x18) + 0x18))(param_1,*(long **)(lVar2 + 0x18),param_3);
  return;
}



/* Entry: 00583fe0; end: 00584087;  */

undefined8 FUN_00583fe0(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((bRam0000000000b6b6a8 & 1) == 0) {
    iVar1 = 0xb6b6a8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uVar2 = 0x20;
      __Znwm();
      FUN_0057cad4();
      uRam0000000000b6b6a0 = uVar2;
      ___cxa_guard_release(0xb6b6a8);
      return uRam0000000000b6b6a0;
    }
  }
  return uRam0000000000b6b6a0;
}



/* Entry: 00584088; end: 005842a7;  */

undefined8 FUN_00584088(long param_1)

{
  dword *pdVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  undefined1 **ppuVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 **ppuVar9;
  undefined1 *puStack_60;
  char *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar6 = &puStack_60;
  ppuVar9 = &puStack_60;
  _CFTimeZoneCopyDefault();
  lVar3 = param_1;
  _CFTimeZoneGetName();
  pcVar8 = ":localtime";
  if (lVar3 == 0) {
    pcVar7 = (char *)0x0;
  }
  else {
    lVar4 = lVar3;
    _CFStringGetLength();
    _CFStringGetMaximumSizeForEncoding();
    if (lVar4 < -1) {
      FUN_0052fd94();
      goto LAB_00584248;
    }
    pcVar7 = (char *)(lVar4 + 1);
    __Znwm();
    _bzero();
    _CFStringGetCString(lVar3,pcVar7,lVar4 + 1,0x8000100);
    if ((int)lVar3 != 0) {
      pcVar8 = pcVar7;
    }
  }
  _CFRelease(param_1);
  pcVar5 = "TZ";
  _getenv();
  if (pcVar5 != (char *)0x0) {
    pcVar8 = pcVar5;
  }
  if (*pcVar8 == ':') {
    pcVar8 = pcVar8 + 1;
  }
  pcVar5 = pcVar8;
  _strcmp(pcVar8,"localtime");
  if ((int)pcVar5 == 0) {
    pcVar5 = "LOCALTIME";
    _getenv();
    pcVar8 = "/etc/localtime";
    if (pcVar5 != (char *)0x0) {
      pcVar8 = pcVar5;
    }
  }
  pcVar5 = pcVar8;
  _strlen();
  if ((char *)0x7ffffffffffffff6 < pcVar5) {
    FUN_0040d740();
LAB_00584248:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x58424c);
    (*pcVar2)();
  }
  if ((char *)((long)&MACH_HEADER.sizeofcmds + 2) < pcVar5) {
    pdVar1 = &MACH_HEADER.flags;
    if ((dword *)((ulong)pcVar5 | 7) != (dword *)0x17) {
      pdVar1 = (dword *)((ulong)pcVar5 | 7);
    }
    ppuVar6 = (undefined1 **)((long)pdVar1 + 1);
    __Znwm();
    uStack_50 = (ulong)((long)pdVar1 + 1) | 0x8000000000000000;
    puStack_60 = (undefined1 *)ppuVar6;
    pcStack_58 = pcVar5;
  }
  else {
    uStack_50 = CONCAT17((char)pcVar5,(undefined7)uStack_50);
    if (pcVar5 == (char *)0x0) goto LAB_005841ec;
  }
  _memmove(ppuVar6,pcVar8,pcVar5);
  ppuVar9 = ppuVar6;
LAB_005841ec:
  *(undefined1 *)((long)ppuVar9 + (long)pcVar5) = 0;
  uStack_48 = 0;
  FUN_0057c020(&puStack_60,&uStack_48);
  if ((long)uStack_50 < 0) {
    __ZdlPv(puStack_60);
  }
  if (pcVar7 != (char *)0x0) {
    __ZdlPv(pcVar7);
  }
  return uStack_48;
}



/* Entry: 005842a8; end: 005844a3;  */

bool FUN_005842a8(byte *param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  pbVar7 = *(byte **)param_1;
  if (-1 < (char)param_1[0x17]) {
    pbVar7 = param_1;
  }
  uVar4 = (ulong)*pbVar7;
  pbVar6 = pbVar7;
  if (*pbVar7 == 0) {
LAB_00584350:
    lVar3 = (long)pbVar6 - (long)pbVar7;
    if (lVar3 < 3) {
LAB_0058435c:
      pbVar6 = (byte *)0x0;
      goto LAB_0058436c;
    }
  }
  else {
    if (uVar4 == 0x3a) {
      return false;
    }
    if (uVar4 != 0x3c) {
      do {
        uVar5 = 1L << (uVar4 & 0x3f);
        if (((uVar4 < 0x40) && ((uVar5 & 0x380000000001) != 0)) ||
           ((uVar4 < 0x40 && ((uVar5 & 0x3ff000000000001) != 0)))) break;
        pbVar6 = pbVar6 + 1;
        uVar4 = (ulong)*pbVar6;
      } while (*pbVar6 != 0);
      goto LAB_00584350;
    }
    lVar3 = -1;
    pbVar8 = pbVar7 + 1;
    do {
      pbVar6 = pbVar8 + 1;
      bVar1 = *pbVar8;
      if (bVar1 == 0) goto LAB_0058435c;
      lVar3 = lVar3 + 1;
      pbVar8 = pbVar6;
    } while (bVar1 != 0x3e);
    pbVar7 = pbVar7 + 1;
  }
  FUN_00460cf4(param_2,pbVar7,lVar3);
LAB_0058436c:
  FUN_005844a4(pbVar6,0,0x18,0xffffffff,param_2 + 0x18);
  bVar2 = false;
  if (pbVar6 != (byte *)0x0) {
    bVar1 = *pbVar6;
    if (bVar1 == 0) {
      bVar2 = true;
    }
    else {
      pbVar7 = pbVar6;
      if (bVar1 == 0x3c) {
        lVar3 = -1;
        pbVar8 = pbVar6 + 1;
        do {
          pbVar7 = pbVar8 + 1;
          bVar1 = *pbVar8;
          if (bVar1 == 0) {
            return false;
          }
          lVar3 = lVar3 + 1;
          pbVar8 = pbVar7;
        } while (bVar1 != 0x3e);
        pbVar6 = pbVar6 + 1;
      }
      else {
        do {
          uVar4 = 1L << ((ulong)bVar1 & 0x3f);
          if (((bVar1 < 0x40) && ((uVar4 & 0x380000000001) != 0)) ||
             ((bVar1 < 0x40 && ((uVar4 & 0x3ff000000000001) != 0)))) break;
          pbVar7 = pbVar7 + 1;
          bVar1 = *pbVar7;
        } while (bVar1 != 0);
        lVar3 = (long)pbVar7 - (long)pbVar6;
        if (lVar3 < 3) {
          return false;
        }
      }
      FUN_00460cf4(param_2 + 0x20,pbVar6,lVar3);
      *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x18) + 0xe10;
      if (*pbVar7 != 0x2c) {
        FUN_005844a4(pbVar7,0,0x18,0xffffffff);
      }
      FUN_00584750(pbVar7,param_2 + 0x3c);
      FUN_00584750();
      bVar2 = false;
      if (pbVar7 != (byte *)0x0) {
        return *pbVar7 == 0;
      }
    }
  }
  return bVar2;
}



/* Entry: 005844a4; end: 0058474f;  */

void FUN_005844a4(char *param_1,int param_2,int param_3,int param_4,int *param_5)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  char *pcVar10;
  char cVar11;
  
  if (param_1 == (char *)0x0) {
    return;
  }
  cVar11 = *param_1;
  if ((cVar11 == '-') || (iVar5 = param_4, cVar11 == '+')) {
    bVar2 = cVar11 != '-';
    param_1 = param_1 + 1;
    cVar11 = *param_1;
    iVar5 = -param_4;
    if (bVar2) {
      iVar5 = param_4;
    }
  }
  puVar3 = &UNK_00815aeb;
  _memchr(&UNK_00815aeb,(int)cVar11,0xb);
  if (puVar3 == (undefined *)0x0) {
    return;
  }
  uVar7 = (int)puVar3 - 0x815aeb;
  pcVar10 = param_1;
  if ((int)uVar7 < 10) {
    iVar9 = 0;
    do {
      if (0xccccccc < iVar9) {
        return;
      }
      if ((int)(uVar7 ^ 0x7fffffff) < iVar9 * 10) {
        return;
      }
      iVar9 = uVar7 + iVar9 * 10;
      pcVar10 = pcVar10 + 1;
      cVar11 = *pcVar10;
      puVar3 = &UNK_00815aeb;
      _memchr(&UNK_00815aeb,(long)cVar11,0xb);
    } while ((puVar3 != (undefined *)0x0) && (uVar7 = (int)puVar3 - 0x815aeb, (int)uVar7 < 10));
  }
  else {
    iVar9 = 0;
  }
  if (pcVar10 == param_1) {
    return;
  }
  if (iVar9 < param_2) {
    return;
  }
  if (param_3 < iVar9) {
    return;
  }
  if (cVar11 == ':') {
    cVar11 = pcVar10[1];
    puVar3 = &UNK_00815aeb;
    _memchr(&UNK_00815aeb,(long)cVar11,0xb);
    if (puVar3 == (undefined *)0x0) {
      return;
    }
    uVar6 = (int)puVar3 - 0x815aeb;
    if ((int)uVar6 < 10) {
      uVar7 = 0;
      lVar8 = 2;
      do {
        lVar4 = lVar8;
        if (0xccccccc < (int)uVar7) {
          return;
        }
        if ((int)(uVar6 ^ 0x7fffffff) < (int)(uVar7 * 10)) {
          return;
        }
        uVar7 = uVar6 + uVar7 * 10;
        cVar11 = pcVar10[lVar4];
        puVar3 = &UNK_00815aeb;
        _memchr(&UNK_00815aeb,(long)cVar11,0xb);
        uVar6 = (int)puVar3 - 0x815aeb;
        lVar8 = lVar4 + 1;
      } while (puVar3 != (undefined *)0x0 && (int)uVar6 < 10);
    }
    else {
      uVar7 = 0;
      lVar4 = 1;
    }
    if (lVar4 == 1) {
      return;
    }
    if (0x3b < uVar7) {
      return;
    }
    if (cVar11 == ':') {
      puVar3 = &UNK_00815aeb;
      _memchr(&UNK_00815aeb,(long)pcVar10[lVar4 + 1],0xb);
      if (puVar3 == (undefined *)0x0) {
        return;
      }
      uVar6 = 0;
      lVar8 = 2;
      do {
        uVar1 = (int)puVar3 - 0x815aeb;
        if (9 < (int)uVar1) break;
        if (0xccccccc < (int)uVar6) {
          return;
        }
        if ((int)(uVar1 ^ 0x7fffffff) < (int)(uVar6 * 10)) {
          return;
        }
        uVar6 = uVar1 + uVar6 * 10;
        puVar3 = &UNK_00815aeb;
        _memchr(&UNK_00815aeb,(long)pcVar10[lVar8 + lVar4],0xb);
        lVar8 = lVar8 + 1;
      } while (puVar3 != (undefined *)0x0);
      if (lVar8 == 2) {
        return;
      }
      if (0x3b < uVar6) {
        return;
      }
      goto LAB_005845f8;
    }
  }
  else {
    uVar7 = 0;
  }
  uVar6 = 0;
LAB_005845f8:
  *param_5 = (uVar6 + (uVar7 + iVar9 * 0x3c) * 0x3c) * iVar5;
  return;
}



/* Entry: 00584750; end: 00584b13;  */

void FUN_00584750(char *param_1,undefined4 *param_2)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  long lVar9;
  int iVar10;
  char *pcVar11;
  char cVar12;
  
  if (param_1 == (char *)0x0) {
    return;
  }
  if (*param_1 == ',') {
    cVar12 = param_1[1];
    if (cVar12 == 'M') {
      puVar3 = &UNK_00815aeb;
      _memchr(&UNK_00815aeb,(long)param_1[2],0xb);
      if (puVar3 == (undefined *)0x0) {
        return;
      }
      uVar7 = (int)puVar3 - 0x815aeb;
      if (9 < (int)uVar7) {
        return;
      }
      iVar5 = 0;
      lVar9 = 3;
      do {
        lVar4 = lVar9;
        if (0xccccccc < iVar5) {
          return;
        }
        if ((int)(uVar7 ^ 0x7fffffff) < iVar5 * 10) {
          return;
        }
        iVar5 = uVar7 + iVar5 * 10;
        cVar12 = param_1[lVar4];
        puVar3 = &UNK_00815aeb;
        _memchr(&UNK_00815aeb,(long)cVar12,0xb);
        uVar7 = (int)puVar3 - 0x815aeb;
        lVar9 = lVar4 + 1;
      } while (puVar3 != (undefined *)0x0 && (int)uVar7 < 10);
      if (lVar4 == 2) {
        return;
      }
      if (iVar5 - 0xdU < 0xfffffff4) {
        return;
      }
      param_1 = param_1 + lVar4;
      if (cVar12 == '.') {
        cVar12 = param_1[1];
        puVar3 = &UNK_00815aeb;
        _memchr(&UNK_00815aeb,(long)cVar12,0xb);
        if (puVar3 == (undefined *)0x0) {
          return;
        }
        uVar7 = (int)puVar3 - 0x815aeb;
        if ((int)uVar7 < 10) {
          iVar10 = 0;
          lVar9 = 2;
          do {
            lVar4 = lVar9;
            if (0xccccccc < iVar10) {
              return;
            }
            if ((int)(uVar7 ^ 0x7fffffff) < iVar10 * 10) {
              return;
            }
            iVar10 = uVar7 + iVar10 * 10;
            cVar12 = param_1[lVar4];
            puVar3 = &UNK_00815aeb;
            _memchr(&UNK_00815aeb,(long)cVar12,0xb);
            uVar7 = (int)puVar3 - 0x815aeb;
            lVar9 = lVar4 + 1;
          } while (puVar3 != (undefined *)0x0 && (int)uVar7 < 10);
        }
        else {
          iVar10 = 0;
          lVar4 = 1;
        }
        if (lVar4 == 1) {
          return;
        }
        if (iVar10 - 6U < 0xfffffffb) {
          return;
        }
        param_1 = param_1 + lVar4;
        if (cVar12 == '.') {
          param_1 = param_1 + 1;
          FUN_00584b14(param_1,&stack0xffffffffffffffac);
          if (param_1 == (char *)0x0) {
            return;
          }
          *param_2 = 2;
          *(char *)(param_2 + 1) = (char)iVar5;
          *(char *)((long)param_2 + 5) = (char)iVar10;
          *(undefined1 *)((long)param_2 + 6) = 0;
        }
      }
    }
    else {
      if (cVar12 == 'J') {
        puVar3 = &UNK_00815aeb;
        _memchr(&UNK_00815aeb,(long)param_1[2],0xb);
        if (puVar3 == (undefined *)0x0) {
          return;
        }
        uVar7 = 0;
        lVar9 = 3;
        do {
          uVar6 = (int)puVar3 - 0x815aeb;
          if (9 < (int)uVar6) break;
          if (0xccccccc < (int)uVar7) {
            return;
          }
          if ((int)(uVar6 ^ 0x7fffffff) < (int)(uVar7 * 10)) {
            return;
          }
          uVar7 = uVar6 + uVar7 * 10;
          puVar3 = &UNK_00815aeb;
          _memchr(&UNK_00815aeb,(long)param_1[lVar9],0xb);
          lVar9 = lVar9 + 1;
        } while (puVar3 != (undefined *)0x0);
        lVar9 = lVar9 + -1;
        if (lVar9 == 2) {
          return;
        }
        if (uVar7 - 0x16e < 0xfffffe93) {
          return;
        }
        *param_2 = 0;
      }
      else {
        puVar3 = &UNK_00815aeb;
        _memchr(&UNK_00815aeb,(int)cVar12,0xb);
        if (puVar3 == (undefined *)0x0) {
          return;
        }
        uVar7 = 0;
        lVar9 = 2;
        do {
          uVar6 = (int)puVar3 - 0x815aeb;
          if (9 < (int)uVar6) break;
          if (0xccccccc < (int)uVar7) {
            return;
          }
          if ((int)(uVar6 ^ 0x7fffffff) < (int)(uVar7 * 10)) {
            return;
          }
          uVar7 = uVar6 + uVar7 * 10;
          puVar3 = &UNK_00815aeb;
          _memchr(&UNK_00815aeb,(long)param_1[lVar9],0xb);
          lVar9 = lVar9 + 1;
        } while (puVar3 != (undefined *)0x0);
        lVar9 = lVar9 + -1;
        if (lVar9 == 1) {
          return;
        }
        if (0x16d < uVar7) {
          return;
        }
        *param_2 = 1;
      }
      param_1 = param_1 + lVar9;
      *(short *)(param_2 + 1) = (short)uVar7;
    }
  }
  param_2[2] = 0x1c20;
  if (*param_1 != '/') {
    return;
  }
  pcVar8 = param_1 + 1;
  if (pcVar8 == (char *)0x0) {
    return;
  }
  iVar5 = 1;
  cVar12 = *pcVar8;
  if ((cVar12 == '-') || (cVar12 == '+')) {
    bVar2 = cVar12 != '-';
    pcVar8 = param_1 + 2;
    cVar12 = *pcVar8;
    iVar5 = -1;
    if (bVar2) {
      iVar5 = 1;
    }
  }
  puVar3 = &UNK_00815aeb;
  _memchr(&UNK_00815aeb,(int)cVar12,0xb);
  if (puVar3 == (undefined *)0x0) {
    return;
  }
  uVar7 = (int)puVar3 - 0x815aeb;
  pcVar11 = pcVar8;
  if ((int)uVar7 < 10) {
    iVar10 = 0;
    do {
      if (0xccccccc < iVar10) {
        return;
      }
      if ((int)(uVar7 ^ 0x7fffffff) < iVar10 * 10) {
        return;
      }
      iVar10 = uVar7 + iVar10 * 10;
      pcVar11 = pcVar11 + 1;
      cVar12 = *pcVar11;
      puVar3 = &UNK_00815aeb;
      _memchr(&UNK_00815aeb,(long)cVar12,0xb);
    } while ((puVar3 != (undefined *)0x0) && (uVar7 = (int)puVar3 - 0x815aeb, (int)uVar7 < 10));
  }
  else {
    iVar10 = 0;
  }
  if (pcVar11 == pcVar8) {
    return;
  }
  if (iVar10 < -0xa7) {
    return;
  }
  if (0xa7 < iVar10) {
    return;
  }
  if (cVar12 == ':') {
    cVar12 = pcVar11[1];
    puVar3 = &UNK_00815aeb;
    _memchr(&UNK_00815aeb,(long)cVar12,0xb);
    if (puVar3 == (undefined *)0x0) {
      return;
    }
    uVar6 = (int)puVar3 - 0x815aeb;
    if ((int)uVar6 < 10) {
      uVar7 = 0;
      lVar9 = 2;
      do {
        lVar4 = lVar9;
        if (0xccccccc < (int)uVar7) {
          return;
        }
        if ((int)(uVar6 ^ 0x7fffffff) < (int)(uVar7 * 10)) {
          return;
        }
        uVar7 = uVar6 + uVar7 * 10;
        cVar12 = pcVar11[lVar4];
        puVar3 = &UNK_00815aeb;
        _memchr(&UNK_00815aeb,(long)cVar12,0xb);
        uVar6 = (int)puVar3 - 0x815aeb;
        lVar9 = lVar4 + 1;
      } while (puVar3 != (undefined *)0x0 && (int)uVar6 < 10);
    }
    else {
      uVar7 = 0;
      lVar4 = 1;
    }
    if (lVar4 == 1) {
      return;
    }
    if (0x3b < uVar7) {
      return;
    }
    if (cVar12 == ':') {
      puVar3 = &UNK_00815aeb;
      _memchr(&UNK_00815aeb,(long)pcVar11[lVar4 + 1],0xb);
      if (puVar3 == (undefined *)0x0) {
        return;
      }
      uVar6 = 0;
      lVar9 = 2;
      do {
        uVar1 = (int)puVar3 - 0x815aeb;
        if (9 < (int)uVar1) break;
        if (0xccccccc < (int)uVar6) {
          return;
        }
        if ((int)(uVar1 ^ 0x7fffffff) < (int)(uVar6 * 10)) {
          return;
        }
        uVar6 = uVar1 + uVar6 * 10;
        puVar3 = &UNK_00815aeb;
        _memchr(&UNK_00815aeb,(long)pcVar11[lVar9 + lVar4],0xb);
        lVar9 = lVar9 + 1;
      } while (puVar3 != (undefined *)0x0);
      if (lVar9 == 2) {
        return;
      }
      if (0x3b < uVar6) {
        return;
      }
      goto LAB_005845f8;
    }
  }
  else {
    uVar7 = 0;
  }
  uVar6 = 0;
LAB_005845f8:
  param_2[2] = (uVar6 + (uVar7 + iVar10 * 0x3c) * 0x3c) * iVar5;
  return;
}



/* Entry: 00584b14; end: 00584be7;  */

char * FUN_00584b14(char *param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  
  puVar2 = &UNK_00815aeb;
  _memchr(&UNK_00815aeb,(long)*param_1,0xb);
  pcVar3 = (char *)0x0;
  if (puVar2 != (undefined *)0x0) {
    uVar4 = 0;
    pcVar5 = param_1;
    do {
      uVar1 = (int)puVar2 - 0x815aeb;
      if (9 < (int)uVar1) break;
      if ((0xccccccc < (int)uVar4) || ((int)(uVar1 ^ 0x7fffffff) < (int)(uVar4 * 10))) {
        return (char *)0x0;
      }
      uVar4 = uVar1 + uVar4 * 10;
      pcVar5 = pcVar5 + 1;
      puVar2 = &UNK_00815aeb;
      _memchr(&UNK_00815aeb,(long)*pcVar5,0xb);
    } while (puVar2 != (undefined *)0x0);
    pcVar3 = (char *)0x0;
    if ((pcVar5 != param_1) && (uVar4 < 7)) {
      *param_2 = uVar4;
      pcVar3 = pcVar5;
    }
  }
  return pcVar3;
}



/* Entry: 00584be8; end: 00584c0f;  */

void FUN_00584be8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  uint *puVar13;
  undefined4 *puVar14;
  uint uStack_c3c;
  undefined4 *puStack_c38;
  undefined4 auStack_c30 [750];
  long lStack_78;
  undefined8 uVar9;
  
  plVar7 = *(long **)(param_2 + 0x18);
  if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00584c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x30))(plVar7,param_1);
    return;
  }
  func_0x004686dc();
  uVar8 = 0x10;
  ___cxa_allocate_exception();
  FUN_00435584();
  uVar9 = uVar8;
  ___cxa_throw();
  iVar5 = (int)uVar9;
  ___cxa_free_exception(uVar8);
  __Unwind_Resume();
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_c38 = auStack_c30;
  uStack_c3c = 3000;
  FUN_00584e44(&puStack_c38,&uStack_c3c,"[%s : %d] RAW: ");
  puVar10 = puStack_c38;
  uVar4 = uStack_c3c;
  if ((int)uStack_c3c < 0) {
LAB_00584d3c:
    puVar13 = &uStack_c3c;
    FUN_00584e44(&puStack_c38,puVar13,"%s");
    iVar12 = (int)puVar13;
    puVar10 = auStack_c30;
    _strlen();
    puVar11 = (undefined4 *)0x0;
    if (puVar10 == (undefined4 *)0x0) goto LAB_00584d8c;
  }
  else {
    _vsnprintf(puStack_c38,uStack_c3c,param_4);
    uVar6 = (uint)puStack_c38;
    uVar1 = 0;
    if (0x19 < uVar4) {
      uVar1 = uVar4 - 0x1a;
    }
    uVar2 = uVar6;
    if (0x7fffffff < uVar6 || uVar4 < uVar6) {
      uVar2 = uVar1;
    }
    uStack_c3c = uVar4 - uVar2;
    puStack_c38 = (undefined4 *)((long)puVar10 + (ulong)uVar2);
    if (0x7fffffff < uVar6 || uVar4 < uVar6) goto LAB_00584d3c;
    puVar13 = &uStack_c3c;
    FUN_00584e44(&puStack_c38,puVar13,"\n");
    iVar12 = (int)puVar13;
    puVar10 = auStack_c30;
    _strlen();
    if (puVar10 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
      goto LAB_00584d8c;
    }
  }
  puVar11 = puVar10;
  ___error();
  uVar3 = *puVar11;
  puVar14 = auStack_c30;
  puVar11 = (undefined4 *)((long)&MACH_HEADER.magic + 2);
  _write(2,puVar14,puVar10);
  iVar12 = (int)puVar14;
  ___error();
  *puVar11 = uVar3;
LAB_00584d8c:
  if (iVar5 == 3) {
    _abort();
  }
  else if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if (iVar12 != 0) {
    func_0x0040cf10(puVar11);
  }
  __Unwind_Resume(puVar11);
  FUN_00584c60();
  return;
}



/* Entry: 00584c10; end: 00584c5f;  */

void FUN_00584c10(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  uint *puVar12;
  undefined4 *puVar13;
  undefined8 in_x3;
  uint uStack_c2c;
  undefined4 *puStack_c28;
  undefined4 auStack_c20 [750];
  long lStack_68;
  undefined8 uVar8;
  
  uVar7 = 0x10;
  ___cxa_allocate_exception();
  FUN_00435584();
  uVar8 = uVar7;
  ___cxa_throw();
  iVar5 = (int)uVar8;
  ___cxa_free_exception(uVar7);
  __Unwind_Resume();
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_c28 = auStack_c20;
  uStack_c2c = 3000;
  FUN_00584e44(&puStack_c28,&uStack_c2c,"[%s : %d] RAW: ");
  puVar9 = puStack_c28;
  uVar4 = uStack_c2c;
  if ((int)uStack_c2c < 0) {
LAB_00584d3c:
    puVar12 = &uStack_c2c;
    FUN_00584e44(&puStack_c28,puVar12,"%s");
    iVar11 = (int)puVar12;
    puVar9 = auStack_c20;
    _strlen();
    puVar10 = (undefined4 *)0x0;
    if (puVar9 == (undefined4 *)0x0) goto LAB_00584d8c;
  }
  else {
    _vsnprintf(puStack_c28,uStack_c2c,in_x3);
    uVar6 = (uint)puStack_c28;
    uVar1 = 0;
    if (0x19 < uVar4) {
      uVar1 = uVar4 - 0x1a;
    }
    uVar2 = uVar6;
    if (0x7fffffff < uVar6 || uVar4 < uVar6) {
      uVar2 = uVar1;
    }
    uStack_c2c = uVar4 - uVar2;
    puStack_c28 = (undefined4 *)((long)puVar9 + (ulong)uVar2);
    if (0x7fffffff < uVar6 || uVar4 < uVar6) goto LAB_00584d3c;
    puVar12 = &uStack_c2c;
    FUN_00584e44(&puStack_c28,puVar12,"\n");
    iVar11 = (int)puVar12;
    puVar9 = auStack_c20;
    _strlen();
    if (puVar9 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
      goto LAB_00584d8c;
    }
  }
  puVar10 = puVar9;
  ___error();
  uVar3 = *puVar10;
  puVar13 = auStack_c20;
  puVar10 = (undefined4 *)((long)&MACH_HEADER.magic + 2);
  _write(2,puVar13,puVar9);
  iVar11 = (int)puVar13;
  ___error();
  *puVar10 = uVar3;
LAB_00584d8c:
  if (iVar5 == 3) {
    _abort();
  }
  else if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (iVar11 != 0) {
    func_0x0040cf10(puVar10);
  }
  __Unwind_Resume(puVar10);
  FUN_00584c60();
  return;
}



/* Entry: 00584c60; end: 00584dff;  */

void FUN_00584c60(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint *puVar9;
  undefined4 *puVar10;
  uint uStack_c0c;
  undefined4 *puStack_c08;
  undefined4 auStack_c00 [750];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_c08 = auStack_c00;
  uStack_c0c = 3000;
  FUN_00584e44(&puStack_c08,&uStack_c0c,"[%s : %d] RAW: ");
  puVar6 = puStack_c08;
  uVar4 = uStack_c0c;
  if ((int)uStack_c0c < 0) {
LAB_00584d3c:
    puVar9 = &uStack_c0c;
    FUN_00584e44(&puStack_c08,puVar9,"%s");
    iVar8 = (int)puVar9;
    puVar6 = auStack_c00;
    _strlen();
    puVar7 = (undefined4 *)0x0;
    if (puVar6 == (undefined4 *)0x0) goto LAB_00584d8c;
  }
  else {
    _vsnprintf(puStack_c08,uStack_c0c,param_4);
    uVar5 = (uint)puStack_c08;
    uVar1 = 0;
    if (0x19 < uVar4) {
      uVar1 = uVar4 - 0x1a;
    }
    uVar2 = uVar5;
    if (0x7fffffff < uVar5 || uVar4 < uVar5) {
      uVar2 = uVar1;
    }
    uStack_c0c = uVar4 - uVar2;
    puStack_c08 = (undefined4 *)((long)puVar6 + (ulong)uVar2);
    if (0x7fffffff < uVar5 || uVar4 < uVar5) goto LAB_00584d3c;
    puVar9 = &uStack_c0c;
    FUN_00584e44(&puStack_c08,puVar9,"\n");
    iVar8 = (int)puVar9;
    puVar6 = auStack_c00;
    _strlen();
    if (puVar6 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
      goto LAB_00584d8c;
    }
  }
  puVar7 = puVar6;
  ___error();
  uVar3 = *puVar7;
  puVar10 = auStack_c00;
  puVar7 = (undefined4 *)((long)&MACH_HEADER.magic + 2);
  _write(2,puVar10,puVar6);
  iVar8 = (int)puVar10;
  ___error();
  *puVar7 = uVar3;
LAB_00584d8c:
  if (param_1 == 3) {
    _abort();
  }
  else if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (iVar8 != 0) {
    func_0x0040cf10(puVar7);
  }
  __Unwind_Resume(puVar7);
  FUN_00584c60();
  return;
}



/* Entry: 00584e00; end: 00584e43;  */

void FUN_00584e00(void)

{
  FUN_00584c60();
  return;
}



/* Entry: 00584e44; end: 00584eab;  */

void FUN_00584e44(ulong *param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  
  if (-1 < *param_2) {
    uVar2 = *param_1;
    _vsnprintf(uVar2,(long)*param_2,param_3,&stack0x00000000);
    iVar1 = (int)uVar2;
    if ((-1 < iVar1) && (iVar1 <= *param_2)) {
      *param_2 = *param_2 - iVar1;
      *param_1 = *param_1 + (uVar2 & 0xffffffff);
    }
  }
  return;
}



/* Entry: 00584eac; end: 00584f1b;  */

void FUN_00584eac(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar1 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar2 = param_6[2];
  uVar6 = param_6[1];
  uVar5 = *param_6;
  param_6[1] = 0;
  param_6[2] = 0;
  *param_6 = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  param_1[2] = uVar1;
  param_1[3] = param_3;
  param_1[4] = param_4;
  *(undefined4 *)(param_1 + 5) = param_5;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[8] = uVar2;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_0040d974(&uStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_30);
  return;
}



/* Entry: 00584f1c; end: 00584faf;  */

undefined8 FUN_00584f1c(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((bRam0000000000b6b6b8 & 1) == 0) {
    iVar1 = 0xb6b6b8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uVar2 = 0x110;
      __Znwm();
      _bzero();
      func_0x00585000(uVar2);
      uRam0000000000b6b6b0 = uVar2;
      ___cxa_guard_release(0xb6b6b8);
    }
  }
  return uRam0000000000b6b6b0;
}



/* Entry: 00584fb0; end: 0058503b;  */

void FUN_00584fb0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_30 [16];
  
  FUN_00584f1c();
  FUN_005850fc();
  lVar4 = *(long *)(unaff_x20 + 0xb8);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xb0);
  param_1[1] = *(undefined8 *)(unaff_x20 + 0xb8);
  *param_1 = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_005850c8(auStack_30);
  return;
}



/* Entry: 0058503c; end: 0058503f;  */

undefined8 * FUN_0058503c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a022a8;
  func_0x00529ba8(param_1 + 0x20);
  func_0x00529ba8(param_1 + 0x1e);
  func_0x00529ba8(param_1 + 0x1c);
  func_0x00529ba8(param_1 + 0x1a);
  func_0x00529ba8(param_1 + 0x18);
  func_0x00529ba8(param_1 + 0x16);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0xf);
  __ZNSt3__118condition_variableD1Ev(param_1 + 9);
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 00585040; end: 00585053;  */

void FUN_00585040(void)

{
  FUN_00585054();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00585054; end: 005850c7;  */

undefined8 * FUN_00585054(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a022a8;
  func_0x00529ba8(param_1 + 0x20);
  func_0x00529ba8(param_1 + 0x1e);
  func_0x00529ba8(param_1 + 0x1c);
  func_0x00529ba8(param_1 + 0x1a);
  func_0x00529ba8(param_1 + 0x18);
  func_0x00529ba8(param_1 + 0x16);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0xf);
  __ZNSt3__118condition_variableD1Ev(param_1 + 9);
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 005850c8; end: 005850fb;  */

undefined8 * FUN_005850c8(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    __ZNSt3__119__shared_mutex_base13unlock_sharedEv(*param_1);
  }
  return param_1;
}



/* Entry: 005850fc; end: 00585127;  */

void FUN_005850fc(long param_1)

{
  long lStack0000000000000000;
  undefined1 uStack0000000000000008;
  
  lStack0000000000000000 = param_1 + 8;
  uStack0000000000000008 = 1;
                    /* WARNING: Could not recover jumptable at 0x00779e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_mutex_base11lock_sharedEv_00998b80)();
  return;
}



/* Entry: 00585128; end: 0058519b; -[SCNativeDispatchQueue initWithPerformer:] */

undefined1 * FUN_00585128(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR__OBJC_CLASS___SCNativeDispatchQueue_00ac3ea8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0058519c; end: 00585223; -[SCNativeDispatchQueue submit:] */

void FUN_0058519c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_48 = PTR___NSConcreteStackBlock_00999f30;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_00585224;
  puStack_30 = &UNK_009e3fc0;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0078a560(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 00585224; end: 0058522b;  */

void FUN_00585224(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078bdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x20),PTR_s_run_00abdc88);
  return;
}



/* Entry: 0058522c; end: 005852df; -[SCNativeDispatchQueue submitWithDelay:delayMs:] */

void FUN_0058522c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    puStack_68 = PTR___NSConcreteStackBlock_00999f30;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_005852e0;
    puStack_50 = &UNK_009e3fc0;
    _objc_retain(param_3);
    lStack_48 = param_3;
    func_0x0078a580((double)param_4 / 1000.0,uVar1,param_2,&puStack_68);
    _objc_release(lStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 005852e0; end: 005852e7;  */

void FUN_005852e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078bdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x20),PTR_s_run_00abdc88);
  return;
}



/* Entry: 005852e8; end: 005852ef; -[SCNativeDispatchQueue isCurrentQueueOrTrueOnAndroid] */

void FUN_005852e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007875d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 8),PTR_s_isCurrentPerformer_00abca78);
  return;
}



/* Entry: 005852f0; end: 005852fb; -[SCNativeDispatchQueue .cxx_destruct] */

void FUN_005852f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 005852fc; end: 00585373; -[SCNativeDispatchTaskWrapper initWithCallback:] */

undefined1 * FUN_005852fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac3eb0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00585374; end: 0058537f; -[SCNativeDispatchTaskWrapper run] */

void FUN_00585374(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0058537c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 00585380; end: 0058538b; -[SCNativeDispatchTaskWrapper .cxx_destruct] */

void FUN_00585380(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0058538c; end: 005853ff; -[SCAppExtensionDefaultsImpl initWithNSUserDefaults:] */

undefined1 * FUN_0058538c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac3eb8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00585400; end: 00585407; -[SCAppExtensionDefaultsImpl objectForKey:] */

void FUN_00585400(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00789eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 8),PTR_s_objectForKey__00abd4b8);
  return;
}



/* Entry: 00585408; end: 0058540f; -[SCAppExtensionDefaultsImpl setObject:forKey:] */

void FUN_00585408(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 8),PTR_s_setObject_forKey__00abea38);
  return;
}



/* Entry: 00585410; end: 00585417; -[SCAppExtensionDefaultsImpl stringForKey:] */

void FUN_00585410(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00792070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 8),PTR_s_stringForKey__00abf528);
  return;
}



/* Entry: 00585418; end: 0058541f; -[SCAppExtensionDefaultsImpl setString:forKey:] */

void FUN_00585418(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 8),PTR_s_setObject_forKey__00abea38);
  return;
}



/* Entry: 00585420; end: 00585427; -[SCAppExtensionDefaultsImpl boolForKey:] */

void FUN_00585420(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077fbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 8),PTR_s_boolForKey__00ababe0);
  return;
}



/* Entry: 00585428; end: 0058542f; -[SCAppExtensionDefaultsImpl setBool:forKey:] */

void FUN_00585428(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078d050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 8),PTR_s_setBool_forKey__00abe120)
  ;
  return;
}



/* Entry: 00585430; end: 00585437; -[SCAppExtensionDefaultsImpl integerForKey:] */

void FUN_00585430(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007871f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 8),PTR_s_integerForKey__00abc980);
  return;
}



/* Entry: 00585438; end: 0058543f; -[SCAppExtensionDefaultsImpl setInteger:forKey:] */

void FUN_00585438(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 8),PTR_s_setInteger_forKey__00abe6c0);
  return;
}



/* Entry: 00585440; end: 00585447; -[SCAppExtensionDefaultsImpl removeObjectForKey:] */

void FUN_00585440(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeObjectForKey__00abda38);
  return;
}



/* Entry: 00585448; end: 00585453; -[SCAppExtensionDefaultsImpl .cxx_destruct] */

void FUN_00585448(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00585454; end: 00585583; +[SCAppExtensionStorageServiceImpl sharedInstance] */

void FUN_00585454(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
  func_0x00788c00(PTR__OBJC_CLASS___NSBundle_00ac2c38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x0078c000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSUserDefaults_00ac3018;
  _objc_alloc();
  func_0x007869e0();
  puVar1 = PTR__OBJC_CLASS___SCLazy_00ac29d0;
  puStack_68 = PTR___NSConcreteStackBlock_00999f30;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_00585584;
  puStack_50 = &UNK_00a022e0;
  puStack_48 = puVar3;
  _objc_retain();
  func_0x0077f660(puVar1,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___SCLazy_00ac29d0;
  func_0x0077f660(PTR__OBJC_CLASS___SCLazy_00ac29d0,param_2,&PTR___NSConcreteGlobalBlock_00a02330);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_00ac3030;
  _objc_alloc(PTR_PTR_00ac3030);
  func_0x00784ba0();
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puStack_48);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar5);
  return;
}



/* Entry: 00585584; end: 0058560f;  */

void FUN_00585584(void)

{
  _objc_alloc(PTR_PTR_00ac3020);
  func_0x00785c20();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00585610; end: 005856b3; -[SCUserExtensionDefaultsImpl initWithNSUserDefaults:withUserId:] */

undefined1 *
FUN_00585610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac3ec0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 005856b4; end: 0058571f; -[SCUserExtensionDefaultsImpl objectForKey:] */

void FUN_005856b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a29b40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00789ea0(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 00585720; end: 005857a7; -[SCUserExtensionDefaultsImpl setObject:forKey:] */

void FUN_00585720(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x007921a0(puVar2,param_2,&PTR____CFConstantStringClassReference_00a29b40);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4a0(uVar1,param_2,param_3,puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar2);
  return;
}



/* Entry: 005857a8; end: 00585813; -[SCUserExtensionDefaultsImpl stringForKey:] */

void FUN_005857a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a29b40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00792060(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 00585814; end: 0058589b; -[SCUserExtensionDefaultsImpl setString:forKey:] */

void FUN_00585814(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x007921a0(puVar2,param_2,&PTR____CFConstantStringClassReference_00a29b40);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4a0(uVar1,param_2,param_3,puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar2);
  return;
}



/* Entry: 0058589c; end: 005858ff; -[SCUserExtensionDefaultsImpl boolForKey:] */

undefined8 FUN_0058589c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a29b40);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077fba0(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 00585900; end: 00585967; -[SCUserExtensionDefaultsImpl setBool:forKey:] */

void FUN_00585900(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a29b40);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078d040(uVar1,param_2,param_3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar2);
  return;
}



/* Entry: 00585968; end: 005859cb; -[SCUserExtensionDefaultsImpl integerForKey:] */

undefined8 FUN_00585968(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a29b40);
  _objc_retainAutoreleasedReturnValue();
  func_0x007871e0(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 005859cc; end: 00585a33; -[SCUserExtensionDefaultsImpl setInteger:forKey:] */

void FUN_005859cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a29b40);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078e6c0(uVar1,param_2,param_3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar2);
  return;
}



/* Entry: 00585a34; end: 00585a3b; -[SCUserExtensionDefaultsImpl removeObjectForKey:] */

void FUN_00585a34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeObjectForKey__00abda38);
  return;
}



/* Entry: 00585a3c; end: 00585a6b; -[SCUserExtensionDefaultsImpl .cxx_destruct] */

void FUN_00585a3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00585a6c; end: 00585bff; +[SCUserExtensionStorageServiceImpl sharedInstanceWithUserId:] */

void FUN_00585a6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
  func_0x00788c00(PTR__OBJC_CLASS___NSBundle_00ac2c38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x0078c000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSUserDefaults_00ac3018;
  _objc_alloc();
  func_0x007869e0();
  puVar4 = PTR__OBJC_CLASS___SCLazy_00ac29d0;
  puVar1 = PTR___NSConcreteStackBlock_00999f30;
  puStack_80 = PTR___NSConcreteStackBlock_00999f30;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_00585c00;
  puStack_68 = &UNK_00a02350;
  puStack_60 = puVar3;
  _objc_retain(param_3);
  uStack_58 = param_3;
  _objc_retain(puVar3);
  func_0x0077f660(puVar4,param_2,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___SCLazy_00ac29d0;
  puStack_a8 = puVar1;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x585c30;
  puStack_90 = &UNK_00a022e0;
  uStack_88 = param_3;
  _objc_retain(param_3);
  func_0x0077f660(puVar5,param_2,&puStack_a8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_00ac3040;
  _objc_alloc(PTR_PTR_00ac3040);
  func_0x00784ba0();
  _objc_release(puVar5);
  _objc_release(uStack_88);
  _objc_release(puVar4);
  _objc_release(uStack_58);
  _objc_release(puStack_60);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00585c00; end: 00585c93;  */

void FUN_00585c00(void)

{
  _objc_alloc(PTR_PTR_00ac3038);
  func_0x00785c40();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00585c94; end: 00585d07; -[SCAppGroupPlistStorage initWithFile:] */

undefined1 * FUN_00585c94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR__OBJC_CLASS___SCAppGroupPlistStorage_00ac3ec8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00585d08; end: 00585e5f; -[SCAppGroupPlistStorage _objectForKey:] */

void FUN_00585d08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x0078aee0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00585d9c();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x00789ea0(lVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar3);
  return;
}



/* Entry: 00585e60; end: 00585f2b; -[SCAppGroupPlistStorage _setObject:forKey:] */

void FUN_00585e60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uStack_68 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_00999f30;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_00585f2c;
  puStack_48 = &UNK_00a02380;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x007894e0(uVar1,param_2,&puStack_60,&uStack_68);
  uVar1 = uStack_68;
  _objc_retain(uStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 00585f2c; end: 00585faf;  */

void FUN_00585f2c(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  
  func_0x00585d9c();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == (undefined *)0x0) {
    param_2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8);
  }
  func_0x0078f4e0(param_2);
  puVar1 = PTR__OBJC_CLASS___NSPropertyListSerialization_00ac2e98;
  func_0x00781740(PTR__OBJC_CLASS___NSPropertyListSerialization_00ac2e98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00585fb0; end: 00585feb; -[SCAppGroupPlistStorage boolForKey:] */

undefined8 FUN_00585fb0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x0077d480();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0077fbc0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 00585fec; end: 0058605b; -[SCAppGroupPlistStorage setBool:forKey:] */

void FUN_00585fec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  _objc_retain(param_4);
  func_0x00789be0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077db40(param_1,param_2,puVar1,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 0058605c; end: 00586097; -[SCAppGroupPlistStorage integerForKey:] */

undefined8 FUN_0058605c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x0077d480();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00787200();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 00586098; end: 00586107; -[SCAppGroupPlistStorage setInteger:forKey:] */

void FUN_00586098(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  _objc_retain(param_4);
  func_0x00789c80(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077db40(param_1,param_2,puVar1,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 00586108; end: 0058610b; -[SCAppGroupPlistStorage objectForKey:] */

void FUN_00586108(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s__objectForKey__00aba218);
  return;
}



/* Entry: 0058610c; end: 0058610f; -[SCAppGroupPlistStorage setObject:forKey:] */

void FUN_0058610c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077db50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s__setObject_forKey__00aba3c8);
  return;
}



/* Entry: 00586110; end: 00586113; -[SCAppGroupPlistStorage stringForKey:] */

void FUN_00586110(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s__objectForKey__00aba218);
  return;
}



/* Entry: 00586114; end: 00586117; -[SCAppGroupPlistStorage setString:forKey:] */

void FUN_00586114(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077db50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s__setObject_forKey__00aba3c8);
  return;
}



/* Entry: 00586118; end: 00586123; -[SCAppGroupPlistStorage removeObjectForKey:] */

void FUN_00586118(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0077db50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s__setObject_forKey__00aba3c8,0,param_3);
  return;
}



/* Entry: 00586124; end: 0058612f; -[SCAppGroupPlistStorage .cxx_destruct] */

void FUN_00586124(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00586130; end: 005861d3; -[SCUserExtensionStorageServices initWithAppGroupUserDefaults:appGroupPlistStorage:] */

undefined1 *
FUN_00586130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac3ed0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 005861d4; end: 005861db; -[SCUserExtensionStorageServices appGroupUserDefaults] */

undefined8 FUN_005861d4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 005861dc; end: 005861e3; -[SCUserExtensionStorageServices appGroupPlistStorage] */

undefined8 FUN_005861dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 005861e4; end: 00586213; -[SCUserExtensionStorageServices .cxx_destruct] */

void FUN_005861e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00586214; end: 005862b7; -[SCAppExtensionStorageServices initWithAppGroupUserDefaults:appGroupPlistStorage:] */

undefined1 *
FUN_00586214(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac3ed8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 005862b8; end: 005862bf; -[SCAppExtensionStorageServices appGroupUserDefaults] */

undefined8 FUN_005862b8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 005862c0; end: 005862c7; -[SCAppExtensionStorageServices appGroupPlistStorage] */

undefined8 FUN_005862c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 005862c8; end: 005862f7; -[SCAppExtensionStorageServices .cxx_destruct] */

void FUN_005862c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 005862f8; end: 0058637f; +[SCExtensionNetworkingAPIClient sharedClient] */

void FUN_005862f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_00999f30;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_00586380;
  puStack_30 = &UNK_00a023b0;
  uStack_28 = param_1;
  if (lRam0000000000b62988 != -1) {
    _dispatch_once(0xb62988,&puStack_48);
  }
  uVar1 = uRam0000000000b62990;
  _objc_retain(uRam0000000000b62990);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00586380; end: 0058640f;  */

void FUN_00586380(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSURL_00ac2a90;
  puVar3 = PTR_PTR_00ac3048;
  func_0x00782960(PTR_PTR_00ac3048);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077bc60(puVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077ce60(uVar2,param_2,puVar4);
  uVar1 = uRam0000000000b62990;
  uRam0000000000b62990 = uVar2;
  _objc_release(uVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar3);
  return;
}



/* Entry: 00586410; end: 00586497; +[SCExtensionNetworkingAPIClient sharedAuthServiceClient] */

void FUN_00586410(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_00999f30;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_00586498;
  puStack_30 = &UNK_00a023b0;
  uStack_28 = param_1;
  if (lRam0000000000b62998 != -1) {
    _dispatch_once(0xb62998,&puStack_48);
  }
  uVar1 = uRam0000000000b629a0;
  _objc_retain(uRam0000000000b629a0);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00586498; end: 00586527;  */

void FUN_00586498(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSURL_00ac2a90;
  puVar3 = PTR_PTR_00ac3050;
  func_0x0077f540(PTR_PTR_00ac3050);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077bc60(puVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077ce60(uVar2,param_2,puVar4);
  uVar1 = uRam0000000000b629a0;
  uRam0000000000b629a0 = uVar2;
  _objc_release(uVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar3);
  return;
}



/* Entry: 00586528; end: 0058661b; +[SCExtensionNetworkingAPIClient sharedApiGatewayServiceClient] */

void FUN_00586528(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_00999f30;
  uStack_40 = 0xc0000000;
  uStack_38 = 0x5865b0;
  puStack_30 = &UNK_00a023b0;
  uStack_28 = param_1;
  if (lRam0000000000b629a8 != -1) {
    _dispatch_once(0xb629a8,&puStack_48);
  }
  uVar1 = uRam0000000000b629b0;
  _objc_retain(uRam0000000000b629b0);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0058661c; end: 0058670b; +[SCExtensionNetworkingAPIClient sharedGrapheneServiceClient] */

void FUN_0058661c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_00999f30;
  uStack_40 = 0xc0000000;
  uStack_38 = 0x5866a4;
  puStack_30 = &UNK_00a023b0;
  uStack_28 = param_1;
  if (lRam0000000000b629b8 != -1) {
    _dispatch_once(0xb629b8,&puStack_48);
  }
  uVar1 = uRam0000000000b629c0;
  _objc_retain(uRam0000000000b629c0);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0058670c; end: 005867fb; +[SCExtensionNetworkingAPIClient sharedGCPServiceClient] */

void FUN_0058670c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_00999f30;
  uStack_40 = 0xc0000000;
  uStack_38 = 0x586794;
  puStack_30 = &UNK_00a023b0;
  uStack_28 = param_1;
  if (lRam0000000000b629c8 != -1) {
    _dispatch_once(0xb629c8,&puStack_48);
  }
  uVar1 = uRam0000000000b629d0;
  _objc_retain(uRam0000000000b629d0);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}


