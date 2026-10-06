/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10598aa20; end: 10598aa5f;  */

void FUN_10598aa20(long param_1)

{
  ulong *puVar1;
  
  func_0x00010029b2d4(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10598aa60; end: 10598ab17;  */

long * FUN_10598aa60(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  uVar3 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar3 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar3 + 8);
  }
  if (lVar4 != 0) {
    param_2 = param_3;
    func_0x0001001a5a30(param_3,1);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    plVar1 = param_3;
    func_0x0001001a597c(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x18);
    uVar2 = 0x10;
    func_0x0001001a59d0(0x10,plVar1);
    func_0x0001001a59fc(param_2,uVar2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar3 < 0) {
      lVar4 = *(long *)(uVar5 + 8);
      uVar3 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar4 = uVar5 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar6 = (int)uVar3;
        uVar3 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar4 = (long)param_2 + (long)iVar7;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar4,uVar3 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar3);
  }
  return param_2;
}



/* Entry: 10598ab18; end: 10598aba3;  */

void FUN_10598ab18(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_10598ab50;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_10598ab50:
    iVar1 = 0;
    goto LAB_10598ab54;
  }
  func_0x0001006016cc();
  iVar1 = (int)uVar2 + 1;
LAB_10598ab54:
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  return;
}



/* Entry: 10598aba4; end: 10598aba7;  */

void FUN_10598aba4(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x0001001a53d4(param_1 + 0x10,uVar1,uVar2);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10598aba8; end: 10598ac23;  */

void FUN_10598aba8(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x0001001a53d4(param_1 + 0x10,uVar1,uVar2);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10598ac24; end: 10598ac2b;  */

void FUN_10598ac24(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x20);
  }
  *puVar1 = &PTR_FUN_1108c5d10;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = 0;
  return;
}



/* Entry: 10598ac2c; end: 10598ac77;  */

void FUN_10598ac2c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_1108c5d10;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = 0;
  return;
}



/* Entry: 10598ac78; end: 10598ac8b;  */

void FUN_10598ac78(void)

{
  return;
}



/* Entry: 10598ac8c; end: 10598aea3;  */

void FUN_10598ac8c(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010598f114();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010598acb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10ddc71e0)[extraout_x8] * 4 + 0x10598acb8))();
    return;
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 10598aea4; end: 10598afa3;  */

void FUN_10598aea4(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *unaff_x19;
  
  lVar3 = param_3;
  func_0x00010598ee60();
  puVar2 = (undefined8 *)(param_1 + 8);
  *puVar2 = param_2;
  *unaff_x19 = &PTR_DAT_1108c6278;
  if ((*(ulong *)(lVar3 + 8) & 1) != 0) {
    func_0x00010598ec98();
  }
  *(undefined4 *)(unaff_x19 + 3) = 0;
  uVar1 = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)((long)unaff_x19 + 0x1c) = uVar1;
  switch(uVar1) {
  case 1:
    func_0x00010598ee90();
    func_0x00010598e5b0();
    break;
  case 2:
    func_0x00010598ee90();
    func_0x00010598e60c();
    break;
  case 3:
    func_0x00010598ee90();
    func_0x00010598e670();
    break;
  case 4:
    func_0x00010598ee90();
    FUN_10598e6dc();
    break;
  case 5:
    func_0x00010598ee90();
    func_0x00010598e780();
    break;
  case 6:
    func_0x00010598ee90();
    func_0x00010598e7e8();
    break;
  case 7:
    func_0x00010598ee90();
    func_0x00010598e850();
    break;
  case 8:
    func_0x00010598ee90();
    FUN_10598e8b8();
    break;
  case 9:
    func_0x00010598ee90();
    FUN_10598e95c();
    break;
  case 10:
    func_0x00010598ee90();
    FUN_10598e9b0();
    break;
  case 0xb:
    func_0x00010598ee90();
    FUN_10598ea34();
    break;
  case 0xc:
    func_0x00010598ee90();
    FUN_10598eab4();
    break;
  default:
    goto LAB_10598ec38;
  }
  unaff_x19[2] = puVar2;
LAB_10598ec38:
  return;
}



/* Entry: 10598afa4; end: 10598afcf;  */

undefined8 FUN_10598afa4(undefined8 param_1)

{
  func_0x00010598eda8();
  FUN_10598afd0(param_1);
  return param_1;
}



/* Entry: 10598afd0; end: 10598afe3;  */

void FUN_10598afd0(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_0x00010598f114();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010598acb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10ddc71e0)[extraout_x8] * 4 + 0x10598acb8))();
    return;
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 10598afe4; end: 10598aff7;  */

void FUN_10598afe4(void)

{
  FUN_10598afa4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10598aff8; end: 10598b02f;  */

undefined8 FUN_10598aff8(undefined8 param_1)

{
  func_0x00010598eda8();
  func_0x00010598eea4();
  func_0x00010598ef9c();
  return param_1;
}



/* Entry: 10598b030; end: 10598b1bb;  */

void FUN_10598b030(long param_1)

{
  ulong *puVar1;
  
  FUN_10598ac8c();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10598b1bc; end: 10598b2db;  */

void FUN_10598b1bc(void)

{
  FUN_10598c010();
  FUN_10598ec04();
  return;
}



/* Entry: 10598b2dc; end: 10598b2df;  */

void FUN_10598b2dc(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x00010598ed50();
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x1c);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_10598ac8c();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x00010598ecc8();
        FUN_10598b5ac();
        goto LAB_10598b590;
      }
      func_0x00010598ee84();
      func_0x00010598e5b0();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x00010598ecc8();
        FUN_10598b618();
        goto LAB_10598b590;
      }
      func_0x00010598ee84();
      func_0x00010598e60c();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x00010598ecc8();
        FUN_10598b6e8();
        goto LAB_10598b590;
      }
      func_0x00010598ee84();
      func_0x00010598e670();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x00010598ecc8();
        func_0x00010598b764();
        goto LAB_10598b590;
      }
      func_0x00010598ee84();
      FUN_10598e6dc();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x00010598ecc8();
        func_0x00010598b86c();
        goto LAB_10598b590;
      }
      func_0x00010598ee84();
      func_0x00010598e780();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x00010598ecc8();
        func_0x00010598b930();
        goto LAB_10598b590;
      }
      func_0x00010598ee84();
      func_0x00010598e7e8();
      break;
    case 7:
      if (iVar2 == iVar1) {
        func_0x00010598ecc8();
        FUN_10598b9f4();
        goto LAB_10598b590;
      }
      func_0x00010598ee84();
      func_0x00010598e850();
      break;
    case 8:
      if (iVar2 == iVar1) {
        func_0x00010598ecc8();
        FUN_10598ba2c();
        goto LAB_10598b590;
      }
      func_0x00010598ee84();
      FUN_10598e8b8();
      break;
    case 9:
      if (iVar2 == iVar1) {
        func_0x00010598ecc8();
        func_0x00010598bb14();
        goto LAB_10598b590;
      }
      func_0x00010598ee84();
      FUN_10598e95c();
      break;
    case 10:
      if (iVar2 == iVar1) {
        func_0x00010598ecc8();
        func_0x00010598bb5c();
        goto LAB_10598b590;
      }
      func_0x00010598ee84();
      FUN_10598e9b0();
      break;
    case 0xb:
      if (iVar2 == iVar1) {
        func_0x00010598ecc8();
        func_0x00010598bba0();
        goto LAB_10598b590;
      }
      func_0x00010598ee84();
      FUN_10598ea34();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        func_0x00010598ecc8();
        FUN_10598f5d0();
        goto LAB_10598b590;
      }
      func_0x00010598ee84();
      FUN_10598eab4();
      break;
    default:
      goto LAB_10598b590;
    }
    unaff_x21[2] = (ulong)param_1;
  }
LAB_10598b590:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010598ed60();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10598b2e0; end: 10598b5ab;  */

void FUN_10598b2e0(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x00010598ed50();
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x1c);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_10598ac8c();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x00010598ecc8();
        FUN_10598b5ac();
        goto LAB_10598b590;
      }
      func_0x00010598ee84();
      func_0x00010598e5b0();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x00010598ecc8();
        FUN_10598b618();
        goto LAB_10598b590;
      }
      func_0x00010598ee84();
      func_0x00010598e60c();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x00010598ecc8();
        FUN_10598b6e8();
        goto LAB_10598b590;
      }
      func_0x00010598ee84();
      func_0x00010598e670();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x00010598ecc8();
        func_0x00010598b764();
        goto LAB_10598b590;
      }
      func_0x00010598ee84();
      FUN_10598e6dc();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x00010598ecc8();
        func_0x00010598b86c();
        goto LAB_10598b590;
      }
      func_0x00010598ee84();
      func_0x00010598e780();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x00010598ecc8();
        func_0x00010598b930();
        goto LAB_10598b590;
      }
      func_0x00010598ee84();
      func_0x00010598e7e8();
      break;
    case 7:
      if (iVar2 == iVar1) {
        func_0x00010598ecc8();
        FUN_10598b9f4();
        goto LAB_10598b590;
      }
      func_0x00010598ee84();
      func_0x00010598e850();
      break;
    case 8:
      if (iVar2 == iVar1) {
        func_0x00010598ecc8();
        FUN_10598ba2c();
        goto LAB_10598b590;
      }
      func_0x00010598ee84();
      FUN_10598e8b8();
      break;
    case 9:
      if (iVar2 == iVar1) {
        func_0x00010598ecc8();
        func_0x00010598bb14();
        goto LAB_10598b590;
      }
      func_0x00010598ee84();
      FUN_10598e95c();
      break;
    case 10:
      if (iVar2 == iVar1) {
        func_0x00010598ecc8();
        func_0x00010598bb5c();
        goto LAB_10598b590;
      }
      func_0x00010598ee84();
      FUN_10598e9b0();
      break;
    case 0xb:
      if (iVar2 == iVar1) {
        func_0x00010598ecc8();
        func_0x00010598bba0();
        goto LAB_10598b590;
      }
      func_0x00010598ee84();
      FUN_10598ea34();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        func_0x00010598ecc8();
        FUN_10598f5d0();
        goto LAB_10598b590;
      }
      func_0x00010598ee84();
      FUN_10598eab4();
      break;
    default:
      goto LAB_10598b590;
    }
    unaff_x21[2] = (ulong)param_1;
  }
LAB_10598b590:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010598ed60();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10598b5ac; end: 10598b617;  */

void FUN_10598b5ac(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010598ecb0();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010598edbc();
    }
    func_0x00010598ef30();
  }
  func_0x00010598edc8(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010598edbc();
    }
    func_0x00010598f058();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010598ed70();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10598b618; end: 10598b6e7;  */

void FUN_10598b618(ulong *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong uVar5;
  
  func_0x00010598ed50();
  uVar3 = *(ulong *)(unaff_x19 + 8);
  uVar5 = uVar3;
  if ((uVar3 & 1) != 0) {
    uVar5 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  func_0x00010598edc8(*(undefined8 *)(unaff_x20 + 0x10));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      func_0x00010598edbc();
    }
    func_0x00010598f050();
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x24);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_10598c0cc();
      }
      *(int *)((long)unaff_x21 + 0x24) = iVar1;
    }
    func_0x00010598eeac();
    if ((iVar1 == 3) || (iVar1 == 1)) {
      if (iVar2 != iVar1) {
        unaff_x21[3] = extraout_x8_00;
      }
      uVar3 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
      if (*(int *)(unaff_x20 + 0x24) != iVar1) {
        uVar3 = extraout_x8_00;
      }
      param_1 = unaff_x21 + 3;
      func_0x0001001a53d4(param_1,uVar3,uVar5);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010598ed60();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10598b6e8; end: 10598b763;  */

void FUN_10598b6e8(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010598ed50();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar3 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar3 == (ulong *)0x0) {
      FUN_10598eb08();
      *(ulong **)(unaff_x21 + 0x18) = puVar2;
    }
    else {
      func_0x00010bceb748();
      puVar2 = puVar3;
    }
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010598ed60();
    if ((*puVar2 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10598b764; end: 10598b9f3;  */

void FUN_10598b764(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010598ed50();
  puVar2 = (ulong *)(unaff_x21 + 0x18);
  lVar3 = unaff_x20 + 0x18;
  FUN_10598c954();
  func_0x00010598edc8(*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010598edbc();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x30);
    func_0x0001001a53d4();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x38);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010598ef70();
        *(ulong **)(unaff_x21 + 0x38) = puVar2;
      }
      else {
        func_0x00010bceb748();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x40);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010598ef70();
        *(ulong **)(unaff_x21 + 0x40) = puVar2;
      }
      else {
        func_0x00010bceb748();
      }
    }
  }
  if (*(char *)(unaff_x20 + 0x48) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x48) = 1;
  }
  if (*(char *)(unaff_x20 + 0x49) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x49) = 1;
  }
  if (*(char *)(unaff_x20 + 0x4a) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x4a) = 1;
  }
  if (*(char *)(unaff_x20 + 0x4b) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x4b) = 1;
  }
  func_0x00010598f0d0();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  func_0x00010598ed60();
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10598b9f4; end: 10598ba2b;  */

void FUN_10598b9f4(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  func_0x00010598ee60();
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_10598daa0();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010598ed70();
    if ((*puVar1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10598ba2c; end: 10598bb13;  */

void FUN_10598ba2c(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010598ed50();
  puVar2 = (ulong *)(unaff_x21 + 0x18);
  lVar3 = unaff_x20 + 0x18;
  FUN_10598c954();
  func_0x00010598edc8(*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010598edbc();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x30);
    func_0x0001001a53d4();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x38);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010598ef70();
        *(ulong **)(unaff_x21 + 0x38) = puVar2;
      }
      else {
        func_0x00010bceb748();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x40);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010598ef70();
        *(ulong **)(unaff_x21 + 0x40) = puVar2;
      }
      else {
        func_0x00010bceb748();
      }
    }
  }
  if (*(char *)(unaff_x20 + 0x48) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x48) = 1;
  }
  if (*(char *)(unaff_x20 + 0x49) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x49) = 1;
  }
  func_0x00010598f0d0();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  func_0x00010598ed60();
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10598bb14; end: 10598bc3f;  */

void FUN_10598bb14(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010598ecb0();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010598edbc();
    }
    func_0x00010598ef30();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010598ed70();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10598bc40; end: 10598bc73;  */

long FUN_10598bc40(long param_1)

{
  func_0x00010598eda8();
  FUN_10598e0e4(param_1 + 0x28);
  FUN_10598e0e4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10598bc74; end: 10598bc87;  */

void FUN_10598bc74(void)

{
  FUN_10598bc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10598bc88; end: 10598bcab;  */

undefined ** FUN_10598bc88(void)

{
  return &PTR_DAT_1108c6300;
}



/* Entry: 10598bcac; end: 10598be73;  */

long * FUN_10598bcac(undefined1 *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long *unaff_x19;
  long unaff_x20;
  ulong *puVar6;
  int iVar7;
  int iVar8;
  
  func_0x00010598ee38();
  uVar2 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar2) {
    func_0x00010598ee14();
    puVar4 = param_1 + 2;
    *param_1 = 0x12;
    while (0x7f < uVar2) {
      func_0x00010598f0a4();
    }
    puVar4[-1] = (char)uVar2;
    puVar6 = *(ulong **)(unaff_x20 + 0x18);
    puVar1 = puVar6 + *(int *)(unaff_x20 + 0x10);
    do {
      func_0x00010598ee14();
      uVar5 = *puVar6;
      param_4 = (long *)(param_1 + 1);
      while (0x7f < uVar5) {
        func_0x00010598f128();
        uVar5 = extraout_x8;
      }
      puVar6 = puVar6 + 1;
      *(char *)((long)param_4 + -1) = (char)uVar5;
    } while (puVar6 < puVar1);
  }
  uVar2 = *(uint *)(unaff_x20 + 0x38);
  if (0 < (int)uVar2) {
    func_0x00010598ee14();
    puVar4 = param_1 + 2;
    *param_1 = 0x1a;
    while (0x7f < uVar2) {
      func_0x00010598f0a4();
    }
    puVar4[-1] = (char)uVar2;
    puVar6 = *(ulong **)(unaff_x20 + 0x30);
    puVar1 = puVar6 + *(int *)(unaff_x20 + 0x28);
    do {
      func_0x00010598ee14();
      uVar5 = *puVar6;
      param_4 = (long *)(param_1 + 1);
      while (0x7f < uVar5) {
        func_0x00010598f128();
        uVar5 = extraout_x8_00;
      }
      puVar6 = puVar6 + 1;
      *(char *)((long)param_4 + -1) = (char)uVar5;
    } while (puVar6 < puVar1);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010598ee78();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8_01 + 8);
      param_3 = *(ulong *)(extraout_x8_01 + 0x10);
    }
    else {
      lVar3 = extraout_x8_01 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar8 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar7 = (int)param_3;
        uVar2 = iVar7 - iVar8;
        param_3 = (ulong)uVar2;
        if (uVar2 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar7);
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10598be74; end: 10598be77;  */

void FUN_10598be74(long param_1,long param_2)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010598ee60();
  FUN_10598be78(param_1 + 0x10,param_2 + 0x10);
  puVar1 = (ulong *)(unaff_x19 + 0x28);
  FUN_10598be78();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010598ed70();
    if ((*puVar1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10598be78; end: 10598bed7;  */

undefined1  [16] FUN_10598be78(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  iVar3 = *param_2;
  if (iVar3 != 0) {
    FUN_10598eaec(param_1,*param_1 + iVar3);
    iVar1 = *param_1;
    *param_1 = iVar1 + iVar3;
    puVar4 = (undefined8 *)(*(long *)(param_1 + 2) + (long)iVar1 * 8);
    puVar2 = *(undefined8 **)(param_2 + 2);
    puVar5 = puVar2;
    puVar6 = puVar4;
    while (0 < iVar3) {
      *puVar6 = *puVar5;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
      iVar3 = iVar3 + -1;
    }
    auVar7._8_8_ = puVar4;
    auVar7._0_8_ = puVar2;
    return auVar7;
  }
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = param_1;
  return auVar8;
}



/* Entry: 10598bed8; end: 10598bf03;  */

undefined8 FUN_10598bed8(undefined8 param_1)

{
  func_0x00010598eda8();
  func_0x00010598eea4();
  func_0x00010598ef9c();
  return param_1;
}



/* Entry: 10598bf04; end: 10598bf17;  */

void FUN_10598bf04(void)

{
  FUN_10598bed8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10598bf18; end: 10598bf23;  */

undefined ** FUN_10598bf18(void)

{
  return &PTR_DAT_1108c6348;
}



/* Entry: 10598bf24; end: 10598bf53;  */

void FUN_10598bf24(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010598ed08();
  func_0x00010598f060();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10598bf54; end: 10598c00f;  */

long * FUN_10598bf54(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x00010598ee28();
  func_0x00010598edd4(param_1[2]);
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10598bf8c;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10598bf8c:
      param_4 = (long *)&UNK_10f31777b;
      func_0x00010598eda0();
      func_0x00010598ef88();
      func_0x00010598ecf0();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x00010598edd4(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10598bfdc;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10598bfdc;
  param_4 = (long *)&UNK_10f3177b4;
  func_0x00010598eda0();
  func_0x00010598ec44();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10598bfdc:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010598ee78();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010598efd0();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      param_3 = (ulong)(uint)(iVar3 - iVar4);
      if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar4);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10598c010; end: 10598c07b;  */

void FUN_10598c010(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long unaff_x19;
  
  func_0x00010598ec58();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    FUN_10598f13c();
  }
  func_0x00010598edb0(*(undefined8 *)(unaff_x19 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    FUN_10598ed14();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010598eff4();
  }
  func_0x00010598f108();
  return;
}



/* Entry: 10598c07c; end: 10598c07f;  */

void FUN_10598c07c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010598ecb0();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010598edbc();
    }
    func_0x00010598ef30();
  }
  func_0x00010598edc8(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010598edbc();
    }
    func_0x00010598f058();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010598ed70();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10598c080; end: 10598c0b7;  */

long FUN_10598c080(long param_1)

{
  func_0x00010598eda8();
  func_0x00010598eea4();
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_10598c0cc(param_1);
  }
  return param_1;
}



/* Entry: 10598c0b8; end: 10598c0cb;  */

void FUN_10598c0b8(void)

{
  FUN_10598c080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10598c0cc; end: 10598c0fb;  */

void FUN_10598c0cc(long param_1)

{
  if ((*(uint *)(param_1 + 0x24) | 2) == 3) {
    func_0x00010598ef9c();
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10598c0fc; end: 10598c107;  */

undefined ** FUN_10598c0fc(void)

{
  return &PTR_DAT_1108c6390;
}



/* Entry: 10598c108; end: 10598c13b;  */

void FUN_10598c108(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010598ed08();
  FUN_10598c0cc();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10598c13c; end: 10598c1ff;  */

long * FUN_10598c13c(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x00010598ee28();
  func_0x00010598efc4();
  if ((bool)in_ZR) {
    param_3 = *(ulong *)(unaff_x21 + 0x18) & 0xfffffffffffffffc;
    func_0x00010598ef88();
    func_0x0001001a5a30();
    param_4 = unaff_x20;
    unaff_x20 = param_1;
  }
  func_0x00010598edd4(*(undefined8 *)(unaff_x21 + 0x10));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10598c1a8;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10598c1a8;
  param_4 = (long *)&UNK_10f3177ed;
  func_0x00010598eda0();
  func_0x00010598ec44();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10598c1a8:
  if (*(int *)(unaff_x21 + 0x24) == 3) {
    param_3 = *(ulong *)(unaff_x21 + 0x18) & 0xfffffffffffffffc;
    func_0x00010598f0b8();
    func_0x0001001a5a30();
    param_4 = unaff_x20;
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010598ee78();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010598efd0();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar3 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar2 = (int)param_3;
      param_3 = (ulong)(uint)(iVar2 - iVar3);
      if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar3);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar2);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10598c200; end: 10598c273;  */

void FUN_10598c200(long param_1)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  
  func_0x00010598ec58();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    FUN_10598f13c();
  }
  if ((*(uint *)(unaff_x19 + 0x24) | 2) == 3) {
    func_0x0001006016cc(*(ulong *)(unaff_x19 + 0x18) & 0xfffffffffffffffc);
    func_0x00010598ede8();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010598eff4();
  }
  func_0x00010598f108();
  return;
}



/* Entry: 10598c274; end: 10598c277;  */

void FUN_10598c274(ulong *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong uVar5;
  
  func_0x00010598ed50();
  uVar3 = *(ulong *)(unaff_x19 + 8);
  uVar5 = uVar3;
  if ((uVar3 & 1) != 0) {
    uVar5 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  func_0x00010598edc8(*(undefined8 *)(unaff_x20 + 0x10));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      func_0x00010598edbc();
    }
    func_0x00010598f050();
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x24);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_10598c0cc();
      }
      *(int *)((long)unaff_x21 + 0x24) = iVar1;
    }
    func_0x00010598eeac();
    if ((iVar1 == 3) || (iVar1 == 1)) {
      if (iVar2 != iVar1) {
        unaff_x21[3] = extraout_x8_00;
      }
      uVar3 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
      if (*(int *)(unaff_x20 + 0x24) != iVar1) {
        uVar3 = extraout_x8_00;
      }
      param_1 = unaff_x21 + 3;
      func_0x0001001a53d4(param_1,uVar3,uVar5);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010598ed60();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10598c278; end: 10598c2ab;  */

long FUN_10598c278(long param_1)

{
  func_0x00010598eda8();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010bceb6c4();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10598c2ac; end: 10598c2bf;  */

void FUN_10598c2ac(void)

{
  FUN_10598c278();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10598c2c0; end: 10598c2cb;  */

undefined ** FUN_10598c2c0(void)

{
  return &PTR_DAT_1108c63d0;
}



/* Entry: 10598c2cc; end: 10598c3bf;  */

void FUN_10598c2cc(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010bceb764(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10598c3c0; end: 10598c3d7;  */

void FUN_10598c3c0(void)

{
  func_0x00010bceb7d4();
  FUN_10598ec04();
  return;
}



/* Entry: 10598c3d8; end: 10598c3db;  */

void FUN_10598c3d8(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010598ed50();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar3 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar3 == (ulong *)0x0) {
      FUN_10598eb08();
      *(ulong **)(unaff_x21 + 0x18) = puVar2;
    }
    else {
      func_0x00010bceb748();
      puVar2 = puVar3;
    }
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010598ed60();
    if ((*puVar2 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10598c3dc; end: 10598c403;  */

undefined8 FUN_10598c3dc(undefined8 param_1)

{
  func_0x00010598eda8();
  func_0x00010598eea4();
  return param_1;
}



/* Entry: 10598c404; end: 10598c407;  */

undefined8 FUN_10598c404(undefined8 param_1)

{
  func_0x00010598eda8();
  func_0x00010598eea4();
  return param_1;
}



/* Entry: 10598c408; end: 10598c41b;  */

void FUN_10598c408(void)

{
  FUN_10598c3dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10598c41c; end: 10598c427;  */

undefined ** FUN_10598c41c(void)

{
  return &PTR_DAT_1108c6410;
}



/* Entry: 10598c428; end: 10598c457;  */

void FUN_10598c428(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010598ed08();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10598c458; end: 10598c523;  */

long * FUN_10598c458(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long extraout_x8;
  long unaff_x20;
  long *unaff_x21;
  int iVar4;
  long *unaff_x22;
  int iVar5;
  
  func_0x00010598eed4();
  func_0x00010598edd4(param_1[2]);
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10598c4a8;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10598c4a8;
  param_4 = (long *)&UNK_10f317823;
  func_0x00010598eda0();
  func_0x00010598ef88();
  func_0x00010598ec6c();
  param_1 = unaff_x22;
  unaff_x21 = unaff_x22;
LAB_10598c4a8:
  plVar2 = param_1;
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x00010598eca4();
    plVar2 = (long *)0x10;
    func_0x0001001a59d0(0x10,param_1);
    func_0x00010598f074();
    unaff_x21 = plVar2;
  }
  plVar3 = plVar2;
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x00010598eca4();
    plVar3 = (long *)0x18;
    func_0x0001001a59d0(0x18,plVar2);
    func_0x00010598f074();
    unaff_x21 = plVar3;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010598ee78();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x00010598f0c4();
    if (*plVar3 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar5 = ((int)*plVar3 - (int)param_4) + 0x10;
        iVar4 = (int)param_3;
        param_3 = (ulong)(uint)(iVar4 - iVar5);
        if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        puVar1 = (undefined *)((long)param_4 + (long)iVar5);
        param_4 = plVar3;
        func_0x000107c303e4(plVar3,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return unaff_x21;
}



/* Entry: 10598c524; end: 10598c617;  */

void FUN_10598c524(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010598ec58();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x0001001a5744();
    iVar1 = (int)param_1 + 1;
  }
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    iVar1 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x18)) * -9 + 0x2c0U >> 6) + iVar1;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    iVar1 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x20)) * -9 + 0x2c0U >> 6) + iVar1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010598eff4();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x28) = iVar1;
  return;
}



/* Entry: 10598c618; end: 10598c667;  */

long FUN_10598c618(long param_1)

{
  func_0x00010598eda8();
  func_0x00010598f02c();
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00010bceb6c4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x00010bceb6c4();
  }
  __ZdlPv();
  FUN_10598e158(param_1 + 0x18);
  return param_1;
}



/* Entry: 10598c668; end: 10598c67b;  */

void FUN_10598c668(void)

{
  FUN_10598c618();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10598c67c; end: 10598c687;  */

undefined ** FUN_10598c67c(void)

{
  return &PTR_DAT_1108c6458;
}



/* Entry: 10598c688; end: 10598c6eb;  */

void FUN_10598c688(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  FUN_10598e59c(param_1 + 0x18);
  func_0x00010598f040();
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010bceb764(*(undefined8 *)(param_1 + 0x38));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010bceb764(*(undefined8 *)(param_1 + 0x40));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 10598c6ec; end: 10598c863;  */

long * FUN_10598c6ec(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long extraout_x8;
  long unaff_x20;
  long *unaff_x21;
  int iVar5;
  long *unaff_x22;
  int iVar6;
  
  func_0x00010598eed4();
  if ((char)param_1[9] == '\x01') {
    func_0x00010598eca4();
    func_0x00010598efa4();
    func_0x00010598ecfc();
    unaff_x21 = param_1;
  }
  func_0x00010598edd4(*(undefined8 *)(unaff_x20 + 0x30));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10598c75c;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10598c75c;
  param_4 = (long *)&UNK_10f317855;
  func_0x00010598eda0();
  func_0x00010598f0b8();
  func_0x00010598ec6c();
  param_1 = unaff_x22;
  unaff_x21 = unaff_x22;
LAB_10598c75c:
  uVar2 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x38) + 0x18);
    param_1 = (long *)0x5;
    func_0x00010598ed2c();
    unaff_x21 = param_1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x40) + 0x18);
    param_1 = (long *)0x6;
    func_0x00010598ed2c();
    unaff_x21 = param_1;
  }
  iVar6 = *(int *)(unaff_x20 + 0x20);
  for (iVar5 = 0; iVar6 != iVar5; iVar5 = iVar5 + 1) {
    func_0x00010598ef38();
    param_1 = (long *)0x7;
    func_0x00010598ed2c();
    unaff_x21 = param_1;
  }
  plVar3 = param_1;
  if ((*(byte *)(unaff_x20 + 0x49) & 1) != 0) {
    func_0x00010598eca4();
    plVar3 = (long *)0x40;
    func_0x0001001a59d0(0x40,param_1);
    func_0x00010598ecfc();
    unaff_x21 = plVar3;
  }
  plVar4 = plVar3;
  if (*(char *)(unaff_x20 + 0x4a) == '\x01') {
    func_0x00010598eca4();
    plVar4 = (long *)0x48;
    func_0x0001001a59d0(0x48,plVar3);
    func_0x00010598ecfc();
    unaff_x21 = plVar4;
  }
  plVar3 = plVar4;
  if (*(char *)(unaff_x20 + 0x4b) == '\x01') {
    func_0x00010598eca4();
    plVar3 = (long *)0x50;
    func_0x0001001a59d0(0x50,plVar4);
    func_0x00010598ecfc();
    unaff_x21 = plVar3;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x00010598ee78();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010598f0c4();
  if (*plVar3 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar6 = ((int)*plVar3 - (int)param_4) + 0x10;
      iVar5 = (int)param_3;
      param_3 = (ulong)(uint)(iVar5 - iVar6);
      if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar6);
      param_4 = plVar3;
      func_0x000107c303e4(plVar3,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar5);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10598c864; end: 10598c93b;  */

void FUN_10598c864(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined4 uVar5;
  
  iVar2 = (int)unaff_x20;
  lVar3 = param_1;
  func_0x00010598ee48();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar3 = *unaff_x21;
    FUN_10598c93c();
    unaff_x20 = lVar3 + unaff_x20;
    iVar2 = (int)unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x00010598edb0(*(undefined8 *)(param_1 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    FUN_10598ed14();
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10598c3c0(*(undefined8 *)(param_1 + 0x38));
      func_0x00010598ede8();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10598c3c0(*(undefined8 *)(param_1 + 0x40));
      func_0x00010598ede8();
    }
  }
  uVar5 = *(undefined4 *)(param_1 + 0x48);
  iVar2 = ((ushort)((ushort)(byte)uVar5 * 2) & 0xff) +
          (uint)(byte)((char)((uint)uVar5 >> 0x10) * '\x02') +
          ((ushort)((ushort)(byte)((uint)uVar5 >> 8) * 2) & 0xff) +
          (uint)(byte)((char)((uint)uVar5 >> 0x18) * '\x02') + iVar2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010598eff4();
    lVar3 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



/* Entry: 10598c93c; end: 10598c953;  */

void FUN_10598c93c(void)

{
  FUN_10598c524();
  FUN_10598ec04();
  return;
}



/* Entry: 10598c954; end: 10598c967;  */

void FUN_10598c954(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010598ed50();
  puVar2 = (ulong *)(unaff_x21 + 0x18);
  lVar3 = unaff_x20 + 0x18;
  FUN_10598c954();
  func_0x00010598edc8(*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010598edbc();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x30);
    func_0x0001001a53d4();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x38);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010598ef70();
        *(ulong **)(unaff_x21 + 0x38) = puVar2;
      }
      else {
        func_0x00010bceb748();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x40);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010598ef70();
        *(ulong **)(unaff_x21 + 0x40) = puVar2;
      }
      else {
        func_0x00010bceb748();
      }
    }
  }
  if (*(char *)(unaff_x20 + 0x48) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x48) = 1;
  }
  if (*(char *)(unaff_x20 + 0x49) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x49) = 1;
  }
  if (*(char *)(unaff_x20 + 0x4a) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x4a) = 1;
  }
  if (*(char *)(unaff_x20 + 0x4b) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x4b) = 1;
  }
  func_0x00010598f0d0();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  func_0x00010598ed60();
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10598c968; end: 10598c9b7;  */

long FUN_10598c968(long param_1)

{
  func_0x00010598eda8();
  func_0x00010598f02c();
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00010bceb6c4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x00010bceb6c4();
  }
  __ZdlPv();
  FUN_10598e158(param_1 + 0x18);
  return param_1;
}



/* Entry: 10598c9b8; end: 10598c9cb;  */

void FUN_10598c9b8(void)

{
  FUN_10598c968();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10598c9cc; end: 10598c9d7;  */

undefined ** FUN_10598c9cc(void)

{
  return &PTR_DAT_1108c6498;
}



/* Entry: 10598c9d8; end: 10598ca3b;  */

void FUN_10598c9d8(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  FUN_10598e59c(param_1 + 0x18);
  func_0x00010598f040();
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010bceb764(*(undefined8 *)(param_1 + 0x38));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010bceb764(*(undefined8 *)(param_1 + 0x40));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined2 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 10598ca3c; end: 10598cb6b;  */

long * FUN_10598ca3c(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar4;
  long unaff_x22;
  int iVar5;
  
  func_0x00010598eed4();
  if ((char)param_1[9] == '\x01') {
    func_0x00010598eca4();
    func_0x00010598efa4();
    func_0x00010598ecfc();
    unaff_x21 = param_1;
  }
  func_0x00010598edd4(*(undefined8 *)(unaff_x20 + 0x30));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10598cab0;
  }
  else if ((int)param_2 == 0) goto LAB_10598cab0;
  param_4 = (long *)&UNK_10f317884;
  func_0x00010598eda0();
  func_0x00010598ec6c();
  param_1 = unaff_x19;
  unaff_x21 = unaff_x19;
LAB_10598cab0:
  uVar2 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x38) + 0x18);
    param_1 = (long *)0x3;
    func_0x00010598ed2c();
    unaff_x21 = param_1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x40) + 0x18);
    param_1 = (long *)0x4;
    func_0x00010598ed2c();
    unaff_x21 = param_1;
  }
  plVar3 = param_1;
  if (*(char *)(unaff_x20 + 0x49) == '\x01') {
    func_0x00010598eca4();
    plVar3 = (long *)0x28;
    func_0x0001001a59d0(0x28,param_1);
    func_0x00010598ecfc();
    unaff_x21 = plVar3;
  }
  iVar5 = *(int *)(unaff_x20 + 0x20);
  for (iVar4 = 0; iVar5 != iVar4; iVar4 = iVar4 + 1) {
    func_0x00010598ef38();
    plVar3 = (long *)0x6;
    func_0x00010598ed2c();
    unaff_x21 = plVar3;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010598ee78();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x00010598f0c4();
    if (*plVar3 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar5 = ((int)*plVar3 - (int)param_4) + 0x10;
        iVar4 = (int)param_3;
        param_3 = (ulong)(uint)(iVar4 - iVar5);
        if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        puVar1 = (undefined *)((long)param_4 + (long)iVar5);
        param_4 = plVar3;
        func_0x000107c303e4(plVar3,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return unaff_x21;
}



/* Entry: 10598cb6c; end: 10598cc1f;  */

void FUN_10598cb6c(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  iVar2 = (int)unaff_x20;
  lVar3 = param_1;
  func_0x00010598ee48();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar3 = *unaff_x21;
    FUN_10598c93c();
    unaff_x20 = lVar3 + unaff_x20;
    iVar2 = (int)unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x00010598edb0(*(undefined8 *)(param_1 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    FUN_10598ed14();
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10598c3c0(*(undefined8 *)(param_1 + 0x38));
      func_0x00010598ede8();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10598c3c0(*(undefined8 *)(param_1 + 0x40));
      func_0x00010598ede8();
    }
  }
  iVar2 = iVar2 + (uint)*(byte *)(param_1 + 0x48) * 2 + (uint)*(byte *)(param_1 + 0x49) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010598eff4();
    lVar3 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



/* Entry: 10598cc20; end: 10598cc2f;  */

void FUN_10598cc20(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010598ed50();
  puVar2 = (ulong *)(unaff_x21 + 0x18);
  lVar3 = unaff_x20 + 0x18;
  FUN_10598c954();
  func_0x00010598edc8(*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010598edbc();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x30);
    func_0x0001001a53d4();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x38);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010598ef70();
        *(ulong **)(unaff_x21 + 0x38) = puVar2;
      }
      else {
        func_0x00010bceb748();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x40);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010598ef70();
        *(ulong **)(unaff_x21 + 0x40) = puVar2;
      }
      else {
        func_0x00010bceb748();
      }
    }
  }
  if (*(char *)(unaff_x20 + 0x48) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x48) = 1;
  }
  if (*(char *)(unaff_x20 + 0x49) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x49) = 1;
  }
  func_0x00010598f0d0();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  func_0x00010598ed60();
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10598cc30; end: 10598cc53;  */

undefined8 FUN_10598cc30(undefined8 param_1)

{
  func_0x00010598eda8();
  return param_1;
}



/* Entry: 10598cc54; end: 10598cc57;  */

undefined8 FUN_10598cc54(undefined8 param_1)

{
  func_0x00010598eda8();
  return param_1;
}



/* Entry: 10598cc58; end: 10598cc6b;  */

void FUN_10598cc58(void)

{
  FUN_10598cc30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10598cc6c; end: 10598cceb;  */

undefined ** FUN_10598cc6c(void)

{
  return &PTR_DAT_1108c64d8;
}



/* Entry: 10598ccec; end: 10598cd37;  */

void FUN_10598ccec(long param_1)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  
  func_0x00010598efc4();
  if ((bool)in_ZR) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010598ee6c();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_10598cc30();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10598cd38; end: 10598cd6f;  */

long FUN_10598cd38(long param_1)

{
  func_0x00010598eda8();
  func_0x00010598eea4();
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_10598ccec(param_1);
  }
  return param_1;
}



/* Entry: 10598cd70; end: 10598cd83;  */

void FUN_10598cd70(void)

{
  FUN_10598cd38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10598cd84; end: 10598cd8f;  */

undefined ** FUN_10598cd84(void)

{
  return &PTR_DAT_1108c6520;
}



/* Entry: 10598cd90; end: 10598cdc3;  */

void FUN_10598cd90(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010598ed08();
  FUN_10598ccec();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10598cdc4; end: 10598ce63;  */

long * FUN_10598cdc4(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x00010598ee28();
  func_0x00010598efc4();
  if ((bool)in_ZR) {
    param_2 = *(long *)(unaff_x21 + 0x18);
    param_3 = (ulong)*(uint *)(param_2 + 0x10);
    param_1 = (long *)0x1;
    func_0x00010598ee20();
    param_4 = unaff_x20;
    unaff_x20 = param_1;
  }
  func_0x00010598edd4(*(undefined8 *)(unaff_x21 + 0x10));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10598ce30;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10598ce30;
  param_4 = (long *)&UNK_10f3178b3;
  func_0x00010598eda0();
  func_0x00010598ec44();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10598ce30:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010598ee78();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010598efd0();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar3 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar2 = (int)param_3;
      param_3 = (ulong)(uint)(iVar2 - iVar3);
      if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar3);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar2);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10598ce64; end: 10598cedb;  */

void FUN_10598ce64(long param_1)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  
  func_0x00010598ec58();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    FUN_10598f13c();
  }
  if (*(int *)(unaff_x19 + 0x24) == 1) {
    func_0x00010598ccbc(*(undefined8 *)(unaff_x19 + 0x18));
    func_0x00010598ec20();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010598eff4();
  }
  func_0x00010598f108();
  return;
}



/* Entry: 10598cedc; end: 10598ceeb;  */

void FUN_10598cedc(ulong *param_1,long param_2)

{
  int iVar1;
  ulong *puVar2;
  ulong *puVar3;
  long extraout_x8;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x00010598ed50();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  func_0x00010598edc8(*(undefined8 *)(unaff_x20 + 0x10));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if (((ulong)puVar3 & 1) != 0) {
      func_0x00010598edbc();
    }
    func_0x00010598f050();
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    if (*(int *)((long)unaff_x21 + 0x24) == iVar1) {
      if (iVar1 == 1) {
        param_1 = (ulong *)unaff_x21[3];
        FUN_10598cc20();
      }
    }
    else {
      if (*(int *)((long)unaff_x21 + 0x24) != 0) {
        param_1 = unaff_x21;
        FUN_10598ccec();
      }
      *(int *)((long)unaff_x21 + 0x24) = iVar1;
      if (iVar1 == 1) {
        FUN_10598eb44();
        unaff_x21[3] = (ulong)puVar2;
        param_1 = puVar2;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010598ed60();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10598ceec; end: 10598cf0f;  */

undefined8 FUN_10598ceec(undefined8 param_1)

{
  func_0x00010598eda8();
  return param_1;
}



/* Entry: 10598cf10; end: 10598cf13;  */

undefined8 FUN_10598cf10(undefined8 param_1)

{
  func_0x00010598eda8();
  return param_1;
}



/* Entry: 10598cf14; end: 10598cf27;  */

void FUN_10598cf14(void)

{
  FUN_10598ceec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10598cf28; end: 10598cfa7;  */

undefined ** FUN_10598cf28(void)

{
  return &PTR_DAT_1108c6568;
}



/* Entry: 10598cfa8; end: 10598cff3;  */

void FUN_10598cfa8(long param_1)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  
  func_0x00010598efc4();
  if ((bool)in_ZR) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010598ee6c();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_10598ceec();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10598cff4; end: 10598d02b;  */

long FUN_10598cff4(long param_1)

{
  func_0x00010598eda8();
  func_0x00010598eea4();
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_10598cfa8(param_1);
  }
  return param_1;
}



/* Entry: 10598d02c; end: 10598d03f;  */

void FUN_10598d02c(void)

{
  FUN_10598cff4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10598d040; end: 10598d04b;  */

undefined ** FUN_10598d040(void)

{
  return &PTR_DAT_1108c65b8;
}



/* Entry: 10598d04c; end: 10598d07f;  */

void FUN_10598d04c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010598ed08();
  FUN_10598cfa8();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10598d080; end: 10598d11f;  */

long * FUN_10598d080(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x00010598ee28();
  func_0x00010598efc4();
  if ((bool)in_ZR) {
    param_2 = *(long *)(unaff_x21 + 0x18);
    param_3 = (ulong)*(uint *)(param_2 + 0x10);
    param_1 = (long *)0x1;
    func_0x00010598ee20();
    param_4 = unaff_x20;
    unaff_x20 = param_1;
  }
  func_0x00010598edd4(*(undefined8 *)(unaff_x21 + 0x10));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10598d0ec;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10598d0ec;
  param_4 = (long *)&UNK_10f3178e8;
  func_0x00010598eda0();
  func_0x00010598ec44();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10598d0ec:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010598ee78();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010598efd0();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar3 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar2 = (int)param_3;
      param_3 = (ulong)(uint)(iVar2 - iVar3);
      if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar3);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar2);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10598d120; end: 10598d197;  */

void FUN_10598d120(long param_1)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  
  func_0x00010598ec58();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    FUN_10598f13c();
  }
  if (*(int *)(unaff_x19 + 0x24) == 1) {
    func_0x00010598cf78(*(undefined8 *)(unaff_x19 + 0x18));
    func_0x00010598ec20();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010598eff4();
  }
  func_0x00010598f108();
  return;
}



/* Entry: 10598d198; end: 10598d19b;  */

void FUN_10598d198(ulong *param_1,long param_2)

{
  int iVar1;
  ulong *puVar2;
  ulong *puVar3;
  long extraout_x8;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x00010598ed50();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  func_0x00010598edc8(*(undefined8 *)(unaff_x20 + 0x10));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if (((ulong)puVar3 & 1) != 0) {
      func_0x00010598edbc();
    }
    func_0x00010598f050();
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    if (*(int *)((long)unaff_x21 + 0x24) == iVar1) {
      if (iVar1 == 1) {
        param_1 = (ulong *)unaff_x21[3];
        FUN_10598cedc();
      }
    }
    else {
      if (*(int *)((long)unaff_x21 + 0x24) != 0) {
        param_1 = unaff_x21;
        FUN_10598cfa8();
      }
      *(int *)((long)unaff_x21 + 0x24) = iVar1;
      if (iVar1 == 1) {
        FUN_10598eba4();
        unaff_x21[3] = (ulong)puVar2;
        param_1 = puVar2;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010598ed60();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10598d19c; end: 10598d203;  */

long FUN_10598d19c(long param_1)

{
  func_0x00010598eda8();
  func_0x00010598eea4();
  func_0x00010598ef9c();
  func_0x000100067de0(param_1 + 0x20);
  func_0x000100067de0(param_1 + 0x28);
  func_0x00010598f02c();
  func_0x000100067de0(param_1 + 0x38);
  func_0x000100067de0(param_1 + 0x40);
  func_0x000100067de0(param_1 + 0x48);
  func_0x000100067de0(param_1 + 0x50);
  func_0x000100067de0(param_1 + 0x58);
  return param_1;
}



/* Entry: 10598d204; end: 10598d207;  */

long FUN_10598d204(long param_1)

{
  func_0x00010598eda8();
  func_0x00010598eea4();
  func_0x00010598ef9c();
  func_0x000100067de0(param_1 + 0x20);
  func_0x000100067de0(param_1 + 0x28);
  func_0x00010598f02c();
  func_0x000100067de0(param_1 + 0x38);
  func_0x000100067de0(param_1 + 0x40);
  func_0x000100067de0(param_1 + 0x48);
  func_0x000100067de0(param_1 + 0x50);
  func_0x000100067de0(param_1 + 0x58);
  return param_1;
}


