/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1088fb0c4; end: 1088fb1d7;  */

void FUN_1088fb0c4(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x000108901838();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108901bd4();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_1088fb1bc;
  iVar2 = *(int *)((long)unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_1088ff63c();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 3) {
    if (iVar2 == 3) {
      func_0x000108901ee0();
      FUN_1088ff91c();
      goto LAB_1088fb1bc;
    }
    func_0x000108901724();
    param_1 = unaff_x22;
  }
  else if (iVar1 == 2) {
    if (iVar2 == 2) {
      func_0x000108901ee0();
      func_0x0001088ff8d8();
      goto LAB_1088fb1bc;
    }
    FUN_1089016c8();
    param_1 = unaff_x22;
  }
  else {
    if (iVar1 != 1) goto LAB_1088fb1bc;
    if (iVar2 == 1) {
      func_0x000108901ee0();
      FUN_1088ff86c();
      goto LAB_1088fb1bc;
    }
    FUN_10890164c();
    param_1 = unaff_x22;
  }
  unaff_x21[2] = (ulong)param_1;
LAB_1088fb1bc:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089018f8();
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



/* Entry: 1088fb1d8; end: 1088fb22f;  */

void FUN_1088fb1d8(long param_1,long param_2)

{
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



/* Entry: 1088fb230; end: 1088fb293;  */

void FUN_1088fb230(ulong *param_1)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x000108901838();
  if ((unaff_x22 & 1) != 0) {
    func_0x000108901bd4();
  }
  func_0x000108901bc8();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x30);
    if (param_1 == (ulong *)0x0) {
      func_0x000108901b1c();
      *(ulong **)(unaff_x21 + 0x30) = param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  func_0x000108901860();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089018f8();
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



/* Entry: 1088fb294; end: 1088fb2e7;  */

void FUN_1088fb294(ulong *param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 extraout_w8;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  
  uVar3 = param_2 == param_1;
  if ((bool)uVar3) {
    return;
  }
  func_0x000108901b74();
  FUN_1088f9dc0();
  func_0x000108901e6c();
  func_0x000108901838();
  if ((unaff_x22 & 1) != 0) {
    func_0x000108901bd4();
  }
  func_0x000108901d50();
  if (!(bool)uVar3) {
    if ((unaff_w23 & 1) != 0) {
      func_0x000108901cdc();
      if (param_1 == (ulong *)0x0) {
        func_0x000108901b1c();
        unaff_x21[3] = (ulong)param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x000108901d5c();
      if (param_1 == (ulong *)0x0) {
        func_0x000108901b1c();
        unaff_x21[4] = (ulong)param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  if (*(ulong *)(unaff_x20 + 0x28) != 0) {
    unaff_x21[5] = *(ulong *)(unaff_x20 + 0x28);
  }
  if (*(ulong *)(unaff_x20 + 0x30) != 0) {
    unaff_x21[6] = *(ulong *)(unaff_x20 + 0x30);
  }
  func_0x000108901fac();
  if ((bool)uVar3) {
    *(undefined1 *)(unaff_x21 + 7) = extraout_w8;
  }
  func_0x00010890198c();
  iVar1 = *(int *)(unaff_x20 + 0x48);
  if (iVar1 != 0) {
    iVar2 = (int)unaff_x21[9];
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_1088f9614();
      }
      *(int *)(unaff_x21 + 9) = iVar1;
    }
    switch(iVar1) {
    case 4:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fa818();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_1089006ac();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fa8d8();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_10890072c();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fa96c();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x0001089007e0();
      break;
    case 7:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fa9ec();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x00010890085c();
      break;
    case 8:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088faa88();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x0001089008e8();
      break;
    default:
      goto LAB_1088fa7fc;
    case 10:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fab34();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x000108900984();
      break;
    case 0xb:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fabf0();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x000108900a20();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fac54();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x000108900a7c();
      break;
    case 0xd:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088facb8();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x000108900ae8();
      break;
    case 0xf:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fad10();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x000108900b44();
      break;
    case 0x10:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fad9c();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x000108900bcc();
      break;
    case 0x11:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_108928c48();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_108900c28();
      break;
    case 0x12:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fae00();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x000108900c60();
      break;
    case 0x13:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fae80();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x000108900cdc();
      break;
    case 0x14:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088faed8();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x000108900d38();
      break;
    case 0x15:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088faf3c();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x000108900d94();
      break;
    case 0x16:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fafa0();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_108900df0();
      break;
    case 0x18:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fafc0();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_108900e48();
      break;
    case 0x19:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fafe4();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_108900ea4();
      break;
    case 0x1a:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x000108901f30();
        FUN_1088fb03c();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_108900f00();
      break;
    case 0x1c:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fb04c();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_108900f50();
      break;
    case 0x1d:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x000108901f30();
        func_0x0001088fb0a4();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_108900fac();
      break;
    case 0x1e:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x000108901f30();
        func_0x0001088fb0b4();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_108900ffc();
      break;
    case 0x1f:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fb0c4();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_10890104c();
      break;
    case 0x20:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fb1d8();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_1089010f8();
      break;
    case 0x21:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fb1ec();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_108901158();
      break;
    case 0x22:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fb20c();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_1089011b0();
      break;
    case 0x23:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fb230();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_10890120c();
    }
    unaff_x21[8] = (ulong)param_1;
  }
LAB_1088fa7fc:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089018f8();
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



/* Entry: 1088fb2e8; end: 1088fb30b;  */

undefined8 FUN_1088fb2e8(undefined8 param_1)

{
  func_0x000108901ab8();
  return param_1;
}



/* Entry: 1088fb30c; end: 1088fb31f;  */

void FUN_1088fb30c(void)

{
  FUN_1088fb2e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088fb320; end: 1088fb39b;  */

undefined ** FUN_1088fb320(void)

{
  return &PTR_DAT_110a8edc0;
}



/* Entry: 1088fb39c; end: 1088fb3bf;  */

undefined8 FUN_1088fb39c(undefined8 param_1)

{
  func_0x000108901ab8();
  return param_1;
}



/* Entry: 1088fb3c0; end: 1088fb3d3;  */

void FUN_1088fb3c0(void)

{
  FUN_1088fb39c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088fb3d4; end: 1088fb44f;  */

undefined ** FUN_1088fb3d4(void)

{
  return &PTR_DAT_110a8ee10;
}



/* Entry: 1088fb450; end: 1088fb483;  */

long FUN_1088fb450(long param_1)

{
  func_0x000108901ab8();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088fb484; end: 1088fb497;  */

void FUN_1088fb484(void)

{
  FUN_1088fb450();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088fb498; end: 1088fb4a3;  */

undefined ** FUN_1088fb498(void)

{
  return &PTR_DAT_110a8ee68;
}



/* Entry: 1088fb4a4; end: 1088fb573;  */

void FUN_1088fb4a4(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x000108901b10();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108901b24();
  }
  func_0x000108901bbc();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 1088fb574; end: 1088fb577;  */

void FUN_1088fb574(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010890184c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108901c50();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108901c44();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108901bac();
    }
  }
  func_0x000108901874();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089018f8();
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



/* Entry: 1088fb578; end: 1088fb5ab;  */

long FUN_1088fb578(long param_1)

{
  func_0x000108901ab8();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088fb5ac; end: 1088fb5bf;  */

void FUN_1088fb5ac(void)

{
  FUN_1088fb578();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088fb5c0; end: 1088fb5cb;  */

undefined ** FUN_1088fb5c0(void)

{
  return &PTR_DAT_110a8eeb8;
}



/* Entry: 1088fb5cc; end: 1088fb69b;  */

void FUN_1088fb5cc(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x000108901b10();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108901b24();
  }
  func_0x000108901bbc();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 1088fb69c; end: 1088fb69f;  */

void FUN_1088fb69c(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010890184c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108901c50();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108901c44();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108901bac();
    }
  }
  func_0x000108901874();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089018f8();
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



/* Entry: 1088fb6a0; end: 1088fb6d3;  */

long FUN_1088fb6a0(long param_1)

{
  func_0x000108901ab8();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088fb6d4; end: 1088fb6e7;  */

void FUN_1088fb6d4(void)

{
  FUN_1088fb6a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088fb6e8; end: 1088fb6f3;  */

undefined ** FUN_1088fb6e8(void)

{
  return &PTR_DAT_110a8ef08;
}



/* Entry: 1088fb6f4; end: 1088fb727;  */

void FUN_1088fb6f4(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x000108901b10();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108901b24();
  }
  func_0x000108901ef0();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 1088fb728; end: 1088fb79b;  */

long * FUN_1088fb728(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108901824();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089017a4();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x0001089018c0();
    func_0x000108901bb4();
    func_0x0001089019d0();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108901ae0();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8_00 + 8);
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    else {
      lVar2 = extraout_x8_00 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 1088fb79c; end: 1088fb7f7;  */

void FUN_1088fb79c(int param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x000108901b10();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108901b2c();
    param_1 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x000108901a78();
    func_0x000108901eac();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108901f00();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 1088fb7f8; end: 1088fb7fb;  */

void FUN_1088fb7f8(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010890184c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108901c50();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108901c44();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108901bac();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x000108901874();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089018f8();
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



/* Entry: 1088fb7fc; end: 1088fb82f;  */

long FUN_1088fb7fc(long param_1)

{
  func_0x000108901ab8();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088fb830; end: 1088fb843;  */

void FUN_1088fb830(void)

{
  FUN_1088fb7fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088fb844; end: 1088fb84f;  */

undefined ** FUN_1088fb844(void)

{
  return &PTR_DAT_110a8ef58;
}



/* Entry: 1088fb850; end: 1088fb883;  */

void FUN_1088fb850(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x000108901b10();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108901b24();
  }
  func_0x000108901d34();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 1088fb884; end: 1088fb8ef;  */

long * FUN_1088fb884(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108901824();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089017a4();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x0001089018c0();
    func_0x000108901a68();
    func_0x0001089019c4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108901ae0();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8_00 + 8);
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    else {
      lVar2 = extraout_x8_00 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 1088fb8f0; end: 1088fb947;  */

void FUN_1088fb8f0(int param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x000108901b10();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108901b2c();
    param_1 = param_1 + 1;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x000108901a0c();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108901f00();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 1088fb948; end: 1088fb94b;  */

void FUN_1088fb948(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010890184c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108901c50();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108901c44();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108901bac();
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  func_0x000108901874();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089018f8();
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



/* Entry: 1088fb94c; end: 1088fb97f;  */

long FUN_1088fb94c(long param_1)

{
  func_0x000108901ab8();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088fb980; end: 1088fb993;  */

void FUN_1088fb980(void)

{
  FUN_1088fb94c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088fb994; end: 1088fb99f;  */

undefined ** FUN_1088fb994(void)

{
  return &PTR_DAT_110a8efa8;
}



/* Entry: 1088fb9a0; end: 1088fba6f;  */

void FUN_1088fb9a0(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x000108901b10();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108901b24();
  }
  func_0x000108901bbc();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 1088fba70; end: 1088fba73;  */

void FUN_1088fba70(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010890184c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108901c50();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108901c44();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108901bac();
    }
  }
  func_0x000108901874();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089018f8();
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



/* Entry: 1088fba74; end: 1088fba97;  */

undefined8 FUN_1088fba74(undefined8 param_1)

{
  func_0x000108901ab8();
  return param_1;
}



/* Entry: 1088fba98; end: 1088fbaab;  */

void FUN_1088fba98(void)

{
  FUN_1088fba74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088fbaac; end: 1088fbacb;  */

undefined ** FUN_1088fbaac(void)

{
  return &PTR_DAT_110a8eff0;
}



/* Entry: 1088fbacc; end: 1088fbb33;  */

long * FUN_1088fbacc(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108901824();
  if (extraout_w8 == 1) {
    func_0x0001089018c0();
    func_0x000108901cb0();
    func_0x0001089019dc();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x000108901ae0();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 1088fbb34; end: 1088fbb63;  */

long FUN_1088fbb34(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = (ulong)*(byte *)(param_1 + 0x10) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 1088fbb64; end: 1088fbb87;  */

undefined8 FUN_1088fbb64(undefined8 param_1)

{
  func_0x000108901ab8();
  return param_1;
}



/* Entry: 1088fbb88; end: 1088fbb9b;  */

void FUN_1088fbb88(void)

{
  FUN_1088fbb64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088fbb9c; end: 1088fbbbb;  */

undefined ** FUN_1088fbb9c(void)

{
  return &PTR_DAT_110a8f040;
}



/* Entry: 1088fbbbc; end: 1088fbc23;  */

long * FUN_1088fbbbc(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108901824();
  if (extraout_w8 == 1) {
    func_0x0001089018c0();
    func_0x000108901cb0();
    func_0x0001089019dc();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x000108901ae0();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 1088fbc24; end: 1088fbc53;  */

long FUN_1088fbc24(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = (ulong)*(byte *)(param_1 + 0x10) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 1088fbc54; end: 1088fbc77;  */

undefined8 FUN_1088fbc54(undefined8 param_1)

{
  func_0x000108901ab8();
  return param_1;
}



/* Entry: 1088fbc78; end: 1088fbc8b;  */

void FUN_1088fbc78(void)

{
  FUN_1088fbc54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088fbc8c; end: 1088fbd07;  */

undefined ** FUN_1088fbc8c(void)

{
  return &PTR_DAT_110a8f088;
}



/* Entry: 1088fbd08; end: 1088fbd3b;  */

long FUN_1088fbd08(long param_1)

{
  func_0x000108901ab8();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088fbd3c; end: 1088fbd4f;  */

void FUN_1088fbd3c(void)

{
  FUN_1088fbd08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088fbd50; end: 1088fbd5b;  */

undefined ** FUN_1088fbd50(void)

{
  return &PTR_DAT_110a8f0d8;
}



/* Entry: 1088fbd5c; end: 1088fbd8f;  */

void FUN_1088fbd5c(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x000108901b10();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108901b24();
  }
  func_0x000108901ef0();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 1088fbd90; end: 1088fbe03;  */

long * FUN_1088fbd90(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108901824();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089017a4();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x0001089018c0();
    func_0x000108901bb4();
    func_0x0001089019d0();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108901ae0();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8_00 + 8);
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    else {
      lVar2 = extraout_x8_00 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 1088fbe04; end: 1088fbe5f;  */

void FUN_1088fbe04(int param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x000108901b10();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108901b2c();
    param_1 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x000108901a78();
    func_0x000108901eac();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108901f00();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 1088fbe60; end: 1088fbe63;  */

void FUN_1088fbe60(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010890184c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108901c50();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108901c44();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108901bac();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x000108901874();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089018f8();
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



/* Entry: 1088fbe64; end: 1088fbe97;  */

long FUN_1088fbe64(long param_1)

{
  func_0x000108901ab8();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088fbe98; end: 1088fbe9b;  */

long FUN_1088fbe98(long param_1)

{
  func_0x000108901ab8();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088fbe9c; end: 1088fbeaf;  */

void FUN_1088fbe9c(void)

{
  FUN_1088fbe64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088fbeb0; end: 1088fbebb;  */

undefined ** FUN_1088fbeb0(void)

{
  return &PTR_DAT_110a8f130;
}



/* Entry: 1088fbebc; end: 1088fbeef;  */

void FUN_1088fbebc(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x000108901b10();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108901b24();
  }
  func_0x000108901d34();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 1088fbef0; end: 1088fbf5b;  */

long * FUN_1088fbef0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108901824();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089017a4();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x0001089018c0();
    func_0x000108901a68();
    func_0x0001089019c4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108901ae0();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8_00 + 8);
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    else {
      lVar2 = extraout_x8_00 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 1088fbf5c; end: 1088fbfb3;  */

void FUN_1088fbf5c(int param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x000108901b10();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108901b2c();
    param_1 = param_1 + 1;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x000108901a0c();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108901f00();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 1088fbfb4; end: 1088fbfb7;  */

void FUN_1088fbfb4(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010890184c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108901c50();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108901c44();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108901bac();
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  func_0x000108901874();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089018f8();
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



/* Entry: 1088fbfb8; end: 1088fc01b;  */

void FUN_1088fbfb8(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010890184c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108901c50();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108901c44();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108901bac();
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  func_0x000108901874();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089018f8();
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



/* Entry: 1088fc01c; end: 1088fc02b;  */

void FUN_1088fc01c(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
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



/* Entry: 1088fc02c; end: 1088fc04f;  */

undefined8 FUN_1088fc02c(undefined8 param_1)

{
  func_0x000108901ab8();
  return param_1;
}



/* Entry: 1088fc050; end: 1088fc053;  */

undefined8 FUN_1088fc050(undefined8 param_1)

{
  func_0x000108901ab8();
  return param_1;
}



/* Entry: 1088fc054; end: 1088fc067;  */

void FUN_1088fc054(void)

{
  FUN_1088fc02c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088fc068; end: 1088fc0e3;  */

undefined ** FUN_1088fc068(void)

{
  return &PTR_DAT_110a8f188;
}



/* Entry: 1088fc0e4; end: 1088fc28f;  */

void FUN_1088fc0e4(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  
  switch(*(undefined4 *)(param_1 + 0x48)) {
  case 3:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_1088fc218;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fd300();
    }
    break;
  case 4:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_1088fc218;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fe98c();
    }
    break;
  case 5:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_1088fc218;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088feeb8();
    }
    break;
  case 6:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_05;
    }
    if (uVar1 != 0) goto LAB_1088fc218;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fdf5c();
    }
    break;
  case 7:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_06;
    }
    if (uVar1 != 0) goto LAB_1088fc218;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_10892a544();
    }
    break;
  default:
    goto LAB_1088fc218;
  case 9:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_1088fc218;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fd778();
    }
    break;
  case 0xb:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_1088fc218;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fe32c();
    }
    break;
  case 0xc:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_04;
    }
    if (uVar1 != 0) goto LAB_1088fc218;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fbe64();
    }
    break;
  case 0xd:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_07;
    }
    if (uVar1 != 0) goto LAB_1088fc218;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fc02c();
    }
  }
  __ZdlPv();
LAB_1088fc218:
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 1088fc290; end: 1088fc38b;  */

void FUN_1088fc290(undefined8 param_1)

{
  undefined4 uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x000108901b60();
  func_0x000108901ec4(&PTR_FUN_110a8ea68);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089018b4();
  }
  func_0x000108901c68();
  func_0x000108900070();
  uVar1 = *(undefined4 *)(unaff_x21 + 0x48);
  *(undefined4 *)(unaff_x19 + 0x48) = uVar1;
  if ((*(byte *)(unaff_x19 + 0x10) & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108901b8c();
    uVar1 = *(undefined4 *)(unaff_x19 + 0x48);
  }
  *(undefined8 *)(unaff_x19 + 0x30) = param_1;
  *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(unaff_x21 + 0x38);
  switch(uVar1) {
  case 3:
    func_0x000108901b04();
    FUN_1089006ac();
    break;
  case 4:
    func_0x000108901b04();
    FUN_108901278();
    break;
  case 5:
    func_0x000108901b04();
    FUN_10890132c();
    break;
  case 6:
    func_0x000108901b04();
    func_0x00010890085c();
    break;
  case 7:
    func_0x000108901b04();
    FUN_108901388();
    break;
  default:
    goto code_r0x0001004a6814;
  case 9:
    func_0x000108901b04();
    FUN_1089013c4();
    break;
  case 0xb:
    func_0x000108901b04();
    func_0x000108901414();
    break;
  case 0xc:
    func_0x000108901b04();
    func_0x000108901470();
    break;
  case 0xd:
    func_0x000108901b04();
    FUN_1089014cc();
  }
  *(undefined8 *)(unaff_x19 + 0x40) = param_1;
code_r0x0001004a6814:
  return;
}



/* Entry: 1088fc38c; end: 1088fc3b7;  */

undefined8 FUN_1088fc38c(undefined8 param_1)

{
  func_0x000108901ab8();
  FUN_1088fc3b8(param_1);
  return param_1;
}



/* Entry: 1088fc3b8; end: 1088fc3f7;  */

long * FUN_1088fc3b8(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_1088fc0e4(param_1);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000108901f58();
  }
  return (long *)(param_1 + 0x18);
}



/* Entry: 1088fc3f8; end: 1088fc3fb;  */

undefined8 FUN_1088fc3f8(undefined8 param_1)

{
  func_0x000108901ab8();
  FUN_1088fc3b8(param_1);
  return param_1;
}



/* Entry: 1088fc3fc; end: 1088fc40f;  */

void FUN_1088fc3fc(void)

{
  FUN_1088fc38c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088fc410; end: 1088fc42b;  */

long FUN_1088fc410(long param_1)

{
  func_0x000108901ab8();
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_1088f7004();
  }
  __ZdlPv();
  FUN_108900108(param_1 + 0x30);
  func_0x000107c2a418(param_1 + 0x18);
  return param_1;
}



/* Entry: 1088fc42c; end: 1088fc473;  */

void FUN_1088fc42c(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x000108901d98();
  FUN_10879ee7c();
  if ((unaff_x19[2] & 1) != 0) {
    func_0x000108901f6c();
  }
  unaff_x19[7] = 0;
  FUN_1088fc0e4();
  func_0x000108901bbc();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 1088fc474; end: 1088fc56b;  */

long * FUN_1088fc474(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar4;
  int iVar5;
  
  func_0x000108901824();
  if ((extraout_x8 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x30);
    func_0x0001089017dc();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    func_0x0001089018c0();
    unaff_w21 = (int)*(undefined8 *)(unaff_x20 + 0x38);
    param_2 = param_1;
    func_0x000108901bb4();
    func_0x0001089019c4();
    param_4 = param_1;
  }
  plVar2 = (long *)(ulong)*(uint *)(unaff_x20 + 0x48);
  if (*(uint *)(unaff_x20 + 0x48) - 3 < 5) {
    param_2 = *(long **)(unaff_x20 + 0x40);
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    func_0x000108901aa8();
    param_4 = plVar2;
  }
  func_0x000108901ce8();
  while (unaff_w22 != unaff_w21) {
    func_0x000108901898();
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    func_0x000108901aa8(8);
    func_0x000108901eb8();
  }
  plVar2 = (long *)(ulong)*(uint *)(unaff_x20 + 0x48);
  uVar1 = *(uint *)(unaff_x20 + 0x48) - 9;
  if ((uVar1 < 5) && ((0x1dU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x40) +
                              *(long *)(&UNK_10df6f530 + (ulong)uVar1 * 8));
    func_0x000108901aa8();
    param_4 = plVar2;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108901ae0();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8_00 + 8);
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    else {
      lVar3 = extraout_x8_00 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar5 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar4 = (int)param_3;
        uVar1 = iVar4 - iVar5;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 1088fc56c; end: 1088fc677;  */

void FUN_1088fc56c(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x0001089017b8();
  while (unaff_x22 != 0) {
    FUN_1088f34c8(*unaff_x21);
    func_0x000108901cb8();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x000108901f74();
    func_0x000108901b54();
  }
  func_0x000108901e28(*(undefined8 *)(unaff_x19 + 0x38));
  switch(*(undefined4 *)(unaff_x19 + 0x48)) {
  case 3:
    func_0x0001088fa1ac(*(undefined8 *)(unaff_x19 + 0x40));
    goto LAB_1088fc650;
  case 4:
    FUN_1088feb28(*(undefined8 *)(unaff_x19 + 0x40));
    break;
  case 5:
    func_0x0001088fef90(*(undefined8 *)(unaff_x19 + 0x40));
    break;
  case 6:
    func_0x0001088fa1c8(*(undefined8 *)(unaff_x19 + 0x40));
    goto LAB_1088fc650;
  case 7:
    FUN_1088fc678(*(undefined8 *)(unaff_x19 + 0x40));
  default:
    goto LAB_1088fc650;
  case 9:
    func_0x0001088fd7fc(*(undefined8 *)(unaff_x19 + 0x40));
    break;
  case 0xb:
    func_0x0001088fe404(*(undefined8 *)(unaff_x19 + 0x40));
    break;
  case 0xc:
    FUN_1088fbf5c(*(undefined8 *)(unaff_x19 + 0x40));
    break;
  case 0xd:
    func_0x0001088fc0b4(*(undefined8 *)(unaff_x19 + 0x40));
  }
  func_0x0001089017ec();
  func_0x000108901f94();
LAB_1088fc650:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108901f00();
  }
  func_0x000108901c80();
  return;
}



/* Entry: 1088fc678; end: 1088fc693;  */

long FUN_1088fc678(long param_1)

{
  long extraout_x8;
  
  func_0x00010892a788();
  func_0x0001089017ec();
  return param_1 + extraout_x8;
}



/* Entry: 1088fc694; end: 1088fc697;  */

void FUN_1088fc694(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x000108901838();
  if ((unaff_x22 & 1) != 0) {
    func_0x000108901bd4();
  }
  func_0x000108901f3c();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = (ulong *)unaff_x21[6];
    if (param_1 == (ulong *)0x0) {
      func_0x000108901b1c();
      unaff_x21[6] = (ulong)param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  if (*(ulong *)(unaff_x20 + 0x38) != 0) {
    unaff_x21[7] = *(ulong *)(unaff_x20 + 0x38);
  }
  func_0x00010890198c();
  iVar1 = *(int *)(unaff_x20 + 0x48);
  if (iVar1 != 0) {
    iVar2 = (int)unaff_x21[9];
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_1088fc0e4();
      }
      *(int *)(unaff_x21 + 9) = iVar1;
    }
    switch(iVar1) {
    case 3:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fa818();
        goto LAB_1088fc8e8;
      }
      func_0x000108901af8();
      FUN_1089006ac();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fc904();
        goto LAB_1088fc8e8;
      }
      func_0x000108901af8();
      FUN_108901278();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fc9a0();
        goto LAB_1088fc8e8;
      }
      func_0x000108901af8();
      FUN_10890132c();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fa9ec();
        goto LAB_1088fc8e8;
      }
      func_0x000108901af8();
      func_0x00010890085c();
      break;
    case 7:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_10892a898();
        goto LAB_1088fc8e8;
      }
      func_0x000108901af8();
      FUN_108901388();
      break;
    default:
      goto LAB_1088fc8e8;
    case 9:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x000108901f30();
        FUN_1088fc9f8();
        goto LAB_1088fc8e8;
      }
      func_0x000108901af8();
      FUN_1089013c4();
      break;
    case 0xb:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fca08();
        goto LAB_1088fc8e8;
      }
      func_0x000108901af8();
      func_0x000108901414();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fbfb8();
        goto LAB_1088fc8e8;
      }
      func_0x000108901af8();
      func_0x000108901470();
      break;
    case 0xd:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x000108901f30();
        FUN_1088fc01c();
        goto LAB_1088fc8e8;
      }
      func_0x000108901af8();
      FUN_1089014cc();
    }
    unaff_x21[8] = (ulong)param_1;
  }
LAB_1088fc8e8:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089018f8();
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



/* Entry: 1088fc698; end: 1088fc99f;  */

void FUN_1088fc698(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x000108901838();
  if ((unaff_x22 & 1) != 0) {
    func_0x000108901bd4();
  }
  func_0x000108901f3c();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = (ulong *)unaff_x21[6];
    if (param_1 == (ulong *)0x0) {
      func_0x000108901b1c();
      unaff_x21[6] = (ulong)param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  if (*(ulong *)(unaff_x20 + 0x38) != 0) {
    unaff_x21[7] = *(ulong *)(unaff_x20 + 0x38);
  }
  func_0x00010890198c();
  iVar1 = *(int *)(unaff_x20 + 0x48);
  if (iVar1 != 0) {
    iVar2 = (int)unaff_x21[9];
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_1088fc0e4();
      }
      *(int *)(unaff_x21 + 9) = iVar1;
    }
    switch(iVar1) {
    case 3:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fa818();
        goto LAB_1088fc8e8;
      }
      func_0x000108901af8();
      FUN_1089006ac();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fc904();
        goto LAB_1088fc8e8;
      }
      func_0x000108901af8();
      FUN_108901278();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fc9a0();
        goto LAB_1088fc8e8;
      }
      func_0x000108901af8();
      FUN_10890132c();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fa9ec();
        goto LAB_1088fc8e8;
      }
      func_0x000108901af8();
      func_0x00010890085c();
      break;
    case 7:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_10892a898();
        goto LAB_1088fc8e8;
      }
      func_0x000108901af8();
      FUN_108901388();
      break;
    default:
      goto LAB_1088fc8e8;
    case 9:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x000108901f30();
        FUN_1088fc9f8();
        goto LAB_1088fc8e8;
      }
      func_0x000108901af8();
      FUN_1089013c4();
      break;
    case 0xb:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fca08();
        goto LAB_1088fc8e8;
      }
      func_0x000108901af8();
      func_0x000108901414();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fbfb8();
        goto LAB_1088fc8e8;
      }
      func_0x000108901af8();
      func_0x000108901470();
      break;
    case 0xd:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x000108901f30();
        FUN_1088fc01c();
        goto LAB_1088fc8e8;
      }
      func_0x000108901af8();
      FUN_1089014cc();
    }
    unaff_x21[8] = (ulong)param_1;
  }
LAB_1088fc8e8:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089018f8();
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



/* Entry: 1088fc9a0; end: 1088fc9f7;  */

void FUN_1088fc9a0(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010890184c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108901c50();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108901c44();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108901bac();
    }
  }
  func_0x000108901874();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089018f8();
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



/* Entry: 1088fc9f8; end: 1088fca07;  */

void FUN_1088fc9f8(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
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



/* Entry: 1088fca08; end: 1088fca5f;  */

void FUN_1088fca08(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010890184c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108901c50();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108901c44();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108901bac();
    }
  }
  func_0x000108901874();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089018f8();
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



/* Entry: 1088fca60; end: 1088fcb3f;  */

void FUN_1088fca60(ulong *param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000108901b74();
  FUN_1088fc42c();
  func_0x000108901e6c();
  func_0x000108901838();
  if ((unaff_x22 & 1) != 0) {
    func_0x000108901bd4();
  }
  func_0x000108901f3c();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = (ulong *)unaff_x21[6];
    if (param_1 == (ulong *)0x0) {
      func_0x000108901b1c();
      unaff_x21[6] = (ulong)param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  if (*(ulong *)(unaff_x20 + 0x38) != 0) {
    unaff_x21[7] = *(ulong *)(unaff_x20 + 0x38);
  }
  func_0x00010890198c();
  iVar1 = *(int *)(unaff_x20 + 0x48);
  if (iVar1 != 0) {
    iVar2 = (int)unaff_x21[9];
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_1088fc0e4();
      }
      *(int *)(unaff_x21 + 9) = iVar1;
    }
    switch(iVar1) {
    case 3:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fa818();
        goto LAB_1088fc8e8;
      }
      func_0x000108901af8();
      FUN_1089006ac();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fc904();
        goto LAB_1088fc8e8;
      }
      func_0x000108901af8();
      FUN_108901278();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fc9a0();
        goto LAB_1088fc8e8;
      }
      func_0x000108901af8();
      FUN_10890132c();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fa9ec();
        goto LAB_1088fc8e8;
      }
      func_0x000108901af8();
      func_0x00010890085c();
      break;
    case 7:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_10892a898();
        goto LAB_1088fc8e8;
      }
      func_0x000108901af8();
      FUN_108901388();
      break;
    default:
      goto LAB_1088fc8e8;
    case 9:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x000108901f30();
        FUN_1088fc9f8();
        goto LAB_1088fc8e8;
      }
      func_0x000108901af8();
      FUN_1089013c4();
      break;
    case 0xb:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fca08();
        goto LAB_1088fc8e8;
      }
      func_0x000108901af8();
      func_0x000108901414();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fbfb8();
        goto LAB_1088fc8e8;
      }
      func_0x000108901af8();
      func_0x000108901470();
      break;
    case 0xd:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x000108901f30();
        FUN_1088fc01c();
        goto LAB_1088fc8e8;
      }
      func_0x000108901af8();
      FUN_1089014cc();
    }
    unaff_x21[8] = (ulong)param_1;
  }
LAB_1088fc8e8:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089018f8();
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



/* Entry: 1088fcb40; end: 1088fcbd7;  */

void FUN_1088fcb40(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x000108901b60();
  func_0x000108901ec4(&PTR_FUN_110a8ebf8);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089018b4();
  }
  uVar1 = *(uint *)(unaff_x21 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  iVar2 = *(int *)(unaff_x21 + 0x30);
  *(int *)(unaff_x19 + 0x30) = iVar2;
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108901b8c();
    iVar2 = *(int *)(unaff_x19 + 0x30);
  }
  *(undefined8 *)(unaff_x19 + 0x18) = param_1;
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x21 + 0x20);
  if (iVar2 == 4) {
    func_0x0001088b6ce4();
  }
  else {
    if (iVar2 != 3) {
      return;
    }
    FUN_10890151c();
  }
  *(undefined8 *)(unaff_x19 + 0x28) = unaff_x20;
  return;
}



/* Entry: 1088fcbd8; end: 1088fcc03;  */

undefined8 FUN_1088fcbd8(undefined8 param_1)

{
  func_0x000108901ab8();
  FUN_1088fcc04(param_1);
  return param_1;
}



/* Entry: 1088fcc04; end: 1088fcc43;  */

void FUN_1088fcc04(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x30) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x30) == 4) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_1088fcb1c;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_1089058f8();
    }
  }
  else {
    if (*(int *)(param_1 + 0x30) != 3) goto LAB_1088fcb1c;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_1088fcb1c;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_1088fd050();
    }
  }
  __ZdlPv();
LAB_1088fcb1c:
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 1088fcc44; end: 1088fcc47;  */

undefined8 FUN_1088fcc44(undefined8 param_1)

{
  func_0x000108901ab8();
  FUN_1088fcc04(param_1);
  return param_1;
}



/* Entry: 1088fcc48; end: 1088fcc5b;  */

void FUN_1088fcc48(void)

{
  FUN_1088fcbd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088fcc5c; end: 1088fcc6b;  */

long FUN_1088fcc5c(long param_1)

{
  func_0x000108901ab8();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088fc38c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_1088b93c4();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088fcc6c; end: 1088fccab;  */

void FUN_1088fcc6c(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x000108901b10();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108901b24();
  }
  unaff_x19[4] = 0;
  func_0x0001088fcac0();
  func_0x000108901bbc();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 1088fccac; end: 1088fcd37;  */

long * FUN_1088fccac(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x000108901824();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089017a4();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x0001089018c0();
    func_0x000108901a68();
    func_0x0001089019c4();
    param_4 = param_1;
  }
  plVar2 = (long *)(ulong)*(uint *)(unaff_x20 + 0x30);
  if (*(uint *)(unaff_x20 + 0x30) - 3 < 2) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x14);
    func_0x000108901aa8();
    param_4 = plVar2;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108901ae0();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8_00 + 8);
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    else {
      lVar3 = extraout_x8_00 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar5 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar4 = (int)param_3;
        uVar1 = iVar4 - iVar5;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 1088fcd38; end: 1088fcddf;  */

void FUN_1088fcd38(void)

{
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x000108901b10();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108901b2c();
  }
  if (*(int *)(unaff_x19 + 0x30) == 4) {
    FUN_1088b6b30(*(undefined8 *)(unaff_x19 + 0x28));
  }
  else if (*(int *)(unaff_x19 + 0x30) == 3) {
    func_0x0001088fd238(*(undefined8 *)(unaff_x19 + 0x28));
    func_0x0001089017ec();
    func_0x000108901f94();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108901f00();
  }
  func_0x000108901c80();
  return;
}



/* Entry: 1088fcde0; end: 1088fcde3;  */

void FUN_1088fcde0(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x000108901838();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108901bd4();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108901cdc();
    if (param_1 == (ulong *)0x0) {
      func_0x000108901b1c();
      unaff_x21[3] = (ulong)param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  if (*(ulong *)(unaff_x20 + 0x20) != 0) {
    unaff_x21[4] = *(ulong *)(unaff_x20 + 0x20);
  }
  func_0x00010890198c();
  iVar1 = *(int *)(unaff_x20 + 0x30);
  if (iVar1 == 0) goto LAB_1088fcee0;
  iVar2 = (int)unaff_x21[6];
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      func_0x0001088fcac0();
    }
    *(int *)(unaff_x21 + 6) = iVar1;
  }
  if (iVar1 == 4) {
    if (iVar2 == 4) {
      param_1 = (ulong *)unaff_x21[5];
      FUN_108905d54();
      goto LAB_1088fcee0;
    }
    func_0x0001088b6ce4();
    param_1 = unaff_x22;
  }
  else {
    if (iVar1 != 3) goto LAB_1088fcee0;
    if (iVar2 == 3) {
      param_1 = (ulong *)unaff_x21[5];
      func_0x0001088fcefc();
      goto LAB_1088fcee0;
    }
    FUN_10890151c();
    param_1 = unaff_x22;
  }
  unaff_x21[5] = (ulong)param_1;
LAB_1088fcee0:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089018f8();
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


