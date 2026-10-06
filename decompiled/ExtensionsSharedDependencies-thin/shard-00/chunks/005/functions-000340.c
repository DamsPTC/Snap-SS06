/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00698898; end: 006988df;  */

long FUN_00698898(long param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  if (param_1 != param_2) {
    FUN_00697e3c(param_1);
    func_0x00698f0c();
    FUN_006988e0(param_1,auStack_38,0);
  }
  return param_1;
}



/* Entry: 006988e0; end: 006989a7;  */

void FUN_006988e0(int *param_1,long *param_2,long param_3)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  while (lVar3 = *param_2, lVar3 != param_3) {
    lVar2 = lVar3 + 8;
    piVar1 = param_1;
    func_0x00698da4(param_1,lVar2);
    if (piVar1 == (int *)0x0) {
      piVar1 = param_1;
      FUN_006989a8(param_1,*param_1 + 1);
      if ((int)piVar1 != 0) {
        lVar2 = lVar3 + 8;
        func_0x00698da4(param_1,lVar2);
      }
      piVar1 = param_1;
      func_0x0048ffb4(param_1,0x38);
      FUN_00698b1c(piVar1 + 2,*(undefined8 *)(param_1 + 6),lVar3 + 8);
      uVar4 = *(undefined8 *)(lVar3 + 0x28);
      *(undefined8 *)(piVar1 + 0xc) = *(undefined8 *)(lVar3 + 0x30);
      *(undefined8 *)(piVar1 + 10) = uVar4;
      FUN_00698b68(param_1,lVar2,piVar1);
      *param_1 = *param_1 + 1;
    }
    func_0x0048fcb8(param_2);
  }
  return;
}



/* Entry: 006989a8; end: 00698b1b;  */

undefined8 FUN_006989a8(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  ulong *puVar9;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar6 = (ulong)uVar1;
  uVar4 = (uVar6 & 0xfffffffe) - ((ulong)(uVar1 >> 2) & 0x3ffffffc);
  if (uVar4 < param_2) {
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (uVar1 == 1) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 4) = 2;
      lVar3 = param_1;
      FUN_004903c4(param_1,2);
      *(long *)(param_1 + 0x10) = lVar3;
      lVar3 = param_1;
      func_0x0049040c();
      *(int *)(param_1 + 8) = (int)lVar3;
      return 1;
    }
    uVar2 = uVar1 << 1;
  }
  else {
    if (uVar1 < 3 || uVar4 >> 2 < param_2) {
      return 0;
    }
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
    } while (param_2 + (param_2 >> 2) + 1 << (uVar5 & 0x3f) < uVar4);
    uVar2 = uVar1 >> (ulong)((uint)uVar5 & 0x1f);
    if (uVar2 < 3) {
      uVar2 = 2;
    }
    if (uVar2 == uVar1) {
      return 0;
    }
  }
  lVar7 = *(long *)(param_1 + 0x10);
  *(uint *)(param_1 + 4) = uVar2;
  lVar3 = param_1;
  FUN_004903c4();
  *(long *)(param_1 + 0x10) = lVar3;
  uVar1 = *(uint *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 4);
  for (uVar4 = (ulong)uVar1; uVar4 < uVar6; uVar4 = uVar4 + 1) {
    puVar8 = *(ulong **)(lVar7 + uVar4 * 8);
    if ((puVar8 == (ulong *)0x0) || (((ulong)puVar8 & 1) != 0)) {
      if (((ulong)puVar8 & 1) != 0) {
        FUN_00547b74(param_1,(long)puVar8 - 1,FUN_00698c04);
      }
    }
    else {
      do {
        puVar9 = (ulong *)*puVar8;
        lVar3 = param_1;
        FUN_00698784(param_1,puVar8 + 1);
        FUN_00698b68(param_1,lVar3,puVar8);
        puVar8 = puVar9;
      } while (puVar9 != (ulong *)0x0);
    }
  }
  FUN_004904c8(param_1,lVar7,uVar6);
  return 1;
}



/* Entry: 00698b1c; end: 00698b67;  */

void FUN_00698b1c(long param_1,long *param_2,undefined8 param_3)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar2;
  ulong extraout_x10;
  ulong extraout_x10_00;
  
  lVar1 = param_1;
  FUN_00698c0c(param_1,param_3);
  if ((lVar1 != 0) && (param_2 != (long *)0x0)) {
    FUN_00550458();
    lVar1 = param_2[1];
    if (0xf < (ulong)(lVar1 - *param_2)) {
      param_2[1] = lVar1 + -0x10;
      if (((lVar1 + -0x10) - param_2[3] < 0x181) && ((ulong)param_2[2] < (ulong)param_2[3])) {
        func_0x00551264();
        for (uVar2 = extraout_x9_00; extraout_x10_00 < uVar2; uVar2 = uVar2 - 0x40) {
          Hint_Prefetch(uVar2,2,0,0);
        }
        param_2[3] = uVar2;
        lVar1 = extraout_x8_00;
      }
      *(long *)(lVar1 + -0x10) = param_1;
      *(code **)(lVar1 + -8) = FUN_00698c30;
      return;
    }
    func_0x005504b4();
    lVar1 = param_2[1];
    param_2[1] = lVar1 + -0x10;
    if (((lVar1 + -0x10) - param_2[3] < 0x181) && ((ulong)param_2[2] < (ulong)param_2[3])) {
      func_0x00551264();
      for (uVar2 = extraout_x9; extraout_x10 < uVar2; uVar2 = uVar2 - 0x40) {
        Hint_Prefetch(uVar2,2,0,0);
      }
      param_2[3] = uVar2;
      lVar1 = extraout_x8;
    }
    *(long *)(lVar1 + -0x10) = param_1;
    *(code **)(lVar1 + -8) = FUN_00698c30;
    return;
  }
  return;
}



/* Entry: 00698b68; end: 00698c03;  */

void FUN_00698b68(ulong param_1,ulong param_2,undefined8 *param_3)

{
  uint uVar1;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lStack_60;
  ulong uStack_58;
  undefined8 *puStack_48;
  
  lVar3 = *(long *)(param_1 + 0x10);
  uVar4 = *(ulong *)(lVar3 + (param_2 & 0xffffffff) * 8);
  if (uVar4 == 0) {
    *param_3 = 0;
    *(undefined8 **)(lVar3 + (param_2 & 0xffffffff) * 8) = param_3;
    uVar1 = (uint)param_2;
    if (*(uint *)(param_1 + 0xc) <= (uint)param_2) {
      uVar1 = *(uint *)(param_1 + 0xc);
    }
    *(uint *)(param_1 + 0xc) = uVar1;
  }
  else {
    if (((uVar4 & 1) != 0) || (uVar4 = param_1, func_0x004906e8(param_1,param_2), (uVar4 & 1) != 0))
    {
      uVar5 = *(ulong *)(*(long *)(param_1 + 0x10) + (param_2 & 0xffffffff) * 8);
      uVar4 = uVar5;
      puStack_48 = param_3;
      if ((uVar5 != 0) && ((uVar5 & 1) == 0)) {
        uVar4 = param_1;
        FUN_00547a54(param_1,uVar5,FUN_00698c04);
        *(ulong *)(*(long *)(param_1 + 0x10) + (param_2 & 0xffffffff) * 8) = uVar4;
      }
      FUN_00698c04();
      func_0x005497cc(&lStack_60);
      if (lStack_60 != **(long **)(uVar4 - 1) || (uStack_58 & 0xffffffff) != 0) {
        FUN_005478bc(lStack_60,uStack_58);
        func_0x00549700();
        **(undefined8 **)(extraout_x8 + 0x20) = puStack_48;
      }
      FUN_00547b48(lStack_60,uStack_58,1);
      if (*(long *)(uVar4 + 0xf) == lStack_60 &&
          (uint)uStack_58 == (uint)*(byte *)(*(long *)(uVar4 + 0xf) + 10)) {
        uVar2 = 0;
      }
      else {
        func_0x00549700();
        uVar2 = *(undefined8 *)(extraout_x8_00 + 0x20);
      }
      *puStack_48 = uVar2;
      return;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    *param_3 = *(undefined8 *)(lVar3 + (param_2 & 0xffffffff) * 8);
    *(undefined8 **)(lVar3 + (param_2 & 0xffffffff) * 8) = param_3;
  }
  return;
}



/* Entry: 00698c04; end: 00698c0b;  */

void FUN_00698c04(int param_1)

{
  param_1 = param_1 + 8;
  func_0x00698db8();
                    /* WARNING: Could not recover jumptable at 0x00695f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_00827718)[param_1 - 1] * 4 + 0x695f5c))();
  return;
}



/* Entry: 00698c0c; end: 00698c2f;  */

long FUN_00698c0c(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_006987e8();
  return param_1;
}



/* Entry: 00698c30; end: 00698c33;  */

void FUN_00698c30(long param_1)

{
  if (*(int *)(param_1 + 0x18) == 9) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 00698c34; end: 00698c5b;  */

void FUN_00698c34(dword *param_1)

{
  if (param_1 == (dword *)0x0) {
    param_1 = &MACH_HEADER.cputype;
    __Znwm();
  }
  else {
    func_0x00698e08();
  }
  *param_1 = 0;
  return;
}



/* Entry: 00698c5c; end: 00698f77;  */

void FUN_00698c5c(void)

{
  func_0x00684f3c(&stack0x00000010,&UNK_00914598);
  func_0x00684ed4();
  return;
}



/* Entry: 00698f78; end: 00698f9f;  */

void FUN_00698f78(ulong *param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*param_1 & 1) == 0) {
    func_0x00699010();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (*param_1 != param_1[1]) {
    lVar1 = (long)((param_1[1] - *param_1) * 0x10000000) >> 0x20;
    lVar2 = lVar1 + 1;
    lVar1 = lVar1 * 0x10;
    do {
      lVar1 = lVar1 + -0x10;
      FUN_006a4904(*param_1 + lVar1);
      lVar2 = lVar2 + -1;
    } while (1 < lVar2);
    param_1[1] = *param_1;
    return;
  }
  return;
}



/* Entry: 00698fa0; end: 0069907f;  */

void FUN_00698fa0(ulong *param_1,long *param_2)

{
  long lVar1;
  long unaff_x22;
  
  if ((*param_1 & 1) == 0) {
    func_0x00699010();
  }
  if (0 < (int)((ulong)(param_2[1] - *param_2) >> 4)) {
    func_0x006a5744();
    for (lVar1 = 0; unaff_x22 * 0x10 - lVar1 != 0; lVar1 = lVar1 + 0x10) {
      func_0x006a57c0();
      func_0x006a580c();
    }
  }
  return;
}



/* Entry: 00699080; end: 0069908f;  */

long ***** FUN_00699080(long *****param_1,long *****param_2)

{
  long ***ppplVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  long *****ppppplVar7;
  long ****pppplVar8;
  undefined8 extraout_x8;
  long *****unaff_x21;
  long *****ppppplVar9;
  long lVar10;
  long ****pppplVar11;
  long *****ppppplVar12;
  long *****ppppplVar13;
  long ***ppplVar14;
  uint uVar15;
  long *****ppppplVar16;
  long *****ppppplVar17;
  undefined1 auStack_2c0 [24];
  long ***ppplStack_2a8;
  long ***ppplStack_2a0;
  undefined8 uStack_298;
  long ****pppplStack_230;
  long ****pppplStack_228;
  long ****pppplStack_220;
  long ***ppplStack_218;
  undefined8 uStack_210;
  undefined4 uStack_208;
  long ***appplStack_1c8 [8];
  long ***appplStack_188 [2];
  undefined8 uStack_178;
  long ***appplStack_108 [2];
  undefined1 auStack_f8 [24];
  long ****pppplStack_e0;
  long ****pppplStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  uint uStack_bc;
  long ***ppplStack_b8;
  long ***appplStack_b0 [3];
  long ***appplStack_98 [3];
  long ****pppplStack_80;
  long ***ppplStack_78;
  undefined8 uStack_70;
  long ****pppplStack_68;
  
  if (param_2 == param_1) {
    ppppplVar13 = param_2;
    ppppplVar7 = param_1;
    func_0x0069be68(param_2,param_1,&UNK_00914cad);
    FUN_00554814();
    func_0x00533528();
    ppppplVar5 = (long *****)&UNK_00914cb9;
    FUN_00776794(&pppplStack_80,&UNK_00914cb9,0x33,ppppplVar13,ppppplVar7);
  }
  else {
    ppppplVar13 = param_2;
    FUN_00699298();
    pppplStack_68 = (long ****)ppppplVar13;
    func_0x0069bec4();
    ppppplVar5 = &pppplStack_80;
    pppplStack_80 = (long ****)ppppplVar13;
    FUN_0068e61c(ppppplVar5,&pppplStack_68,&UNK_00914cf2);
    if (ppppplVar5 == (long *****)0x0) {
      FUN_0069b80c();
      func_0x0069bf38();
      ppppplVar16 = (long *****)unaff_x21[0xb];
      ppppplVar13 = param_2;
      FUN_006994c8();
      ppppplVar17 = (long *****)param_2[0xb];
      ppppplVar7 = ppppplVar13;
      FUN_006994c8();
      pppplStack_80 = (long ****)0x0;
      ppplStack_78 = (long ***)0x0;
      uStack_70 = 0;
      ppppplVar5 = unaff_x21;
      FUN_0068b260();
      ppplStack_b8 = ppplStack_78;
      uStack_bc = (uint)((ppppplVar16 == ppppplVar13) != (ppppplVar17 != ppppplVar7));
      pppplVar8 = pppplStack_80;
      do {
        uVar2 = pppplVar8 == (long ****)ppplStack_b8;
        if ((bool)uVar2) {
          func_0x0069bf18();
          if (*ppppplVar5 != ppppplVar5[1]) {
            func_0x006895cc(param_2,param_1);
            ppppplVar5 = param_2;
            func_0x0069bf18();
            FUN_006a4a80(param_2,ppppplVar5);
          }
          ppppplVar5 = &pppplStack_80;
          FUN_00666dd0(ppppplVar5);
          return ppppplVar5;
        }
        ppppplVar13 = (long *****)*pppplVar8;
        if ((*(byte *)((long)ppppplVar13 + 1) >> 5 & 1) == 0) {
          func_0x0069bf00();
          switch((int)ppppplVar5) {
          case 1:
            func_0x0069be48();
            FUN_0068b4e8();
            func_0x0069be58();
            FUN_0068b594();
            break;
          case 2:
            func_0x0069be48();
            FUN_0068b804();
            func_0x0069be58();
            FUN_0068b8b0();
            break;
          case 3:
            func_0x0069be48();
            FUN_0068bb28();
            func_0x0069be58();
            FUN_0068bbd4();
            break;
          case 4:
            func_0x0069be48();
            FUN_0068be44();
            func_0x0069be58();
            FUN_0068bef0();
            break;
          case 5:
            func_0x0069be48();
            FUN_0068c4ac();
            func_0x0069be58();
            FUN_0068c558();
            break;
          case 6:
            func_0x0069be48();
            FUN_0068c168();
            func_0x0069be58();
            FUN_0068c214();
            break;
          case 7:
            func_0x0069be48();
            FUN_0068c7f0();
            func_0x0069be58();
            FUN_0068c8a0();
            break;
          case 8:
            func_0x0069be48();
            FUN_0068d744();
            func_0x0069be58();
            FUN_0068d82c();
            break;
          case 9:
            func_0x0069be48(appplStack_b0);
            FUN_0068cb34();
            func_0x0069be58();
            FUN_0068ceac();
            ppppplVar5 = (long *****)appplStack_b0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
            break;
          case 10:
            func_0x0069be48();
            func_0x0069bf30();
            if (unaff_x21 == param_2) {
              FUN_00699298();
            }
            func_0x0069be58();
            FUN_0068dd94();
            FUN_00699090();
          }
        }
        else {
          if ((uStack_bc != 0) &&
             (func_0x006595dc(), ppppplVar5 = ppppplVar13, (int)ppppplVar13 != 0)) {
            func_0x0069be48();
            func_0x0068efe0();
            ppppplVar5 = ppppplVar13;
            func_0x0069be58();
            func_0x0068efa4();
            if (((((ulong)ppppplVar5[1] & 1) == 0) || (func_0x0069be74(), !(bool)uVar2)) &&
               ((((ulong)ppppplVar13[1] & 1) == 0 || (func_0x0069be74(), !(bool)uVar2)))) {
              (*(code *)(*ppppplVar5)[6])();
              goto LAB_0069b6a0;
            }
          }
          func_0x0069be48();
          FUN_0068af64();
          uVar4 = (uint)ppppplVar5;
          for (uVar15 = 0; (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) != uVar15;
              uVar15 = uVar15 + 1) {
            func_0x0069bf00();
            switch((int)ppppplVar5) {
            case 1:
              func_0x0069be34();
              func_0x0068b6ac();
              func_0x0069be58();
              FUN_0068b73c();
              break;
            case 2:
              func_0x0069be34();
              func_0x0068b9cc();
              func_0x0069be58();
              FUN_0068ba5c();
              break;
            case 3:
              func_0x0069be34();
              func_0x0068bcec();
              func_0x0069be58();
              FUN_0068bd7c();
              break;
            case 4:
              func_0x0069be34();
              func_0x0068c00c();
              func_0x0069be58();
              FUN_0068c09c();
              break;
            case 5:
              func_0x0069be34();
              FUN_0068c680();
              func_0x0069be58();
              FUN_0068c710();
              break;
            case 6:
              func_0x0069be34();
              FUN_0068c33c();
              func_0x0069be58();
              FUN_0068c3cc();
              break;
            case 7:
              func_0x0069be34();
              func_0x0068c9b8();
              func_0x0069be58();
              FUN_0068ca6c();
              break;
            case 8:
              func_0x0069be34();
              FUN_0068d98c();
              func_0x0069be58();
              FUN_0068da48();
              break;
            case 9:
              func_0x0069be34(appplStack_98);
              FUN_0068d4b4();
              func_0x0069be58();
              FUN_0068d62c();
              ppppplVar5 = (long *****)appplStack_98;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
              break;
            case 10:
              func_0x0069be34();
              func_0x0068e124();
              if (unaff_x21 == param_2) {
                FUN_00699298();
              }
              func_0x0069be58();
              FUN_0068e1d0();
              FUN_00699090();
            }
          }
        }
LAB_0069b6a0:
        pppplVar8 = pppplVar8 + 1;
      } while( true );
    }
    pppplVar8 = (long ****)(long)*(char *)((long)ppppplVar5 + 0x17);
    ppppplVar13 = ppppplVar5;
    if ((long)pppplVar8 < 0) {
      ppppplVar13 = (long *****)*ppppplVar5;
      pppplVar8 = ppppplVar5[1];
    }
    FUN_00776714(&pppplStack_80,&UNK_00914cb9,0x36,ppppplVar13,pppplVar8);
    param_2 = &pppplStack_80;
    FUN_00537a3c(param_2,&UNK_00914d14);
    FUN_00554ab4();
    func_0x0069bef4(pppplStack_68[1]);
    ppppplVar5 = param_2;
    FUN_00554ab4(param_2,&UNK_00914d48,4);
    func_0x0069bec4();
    func_0x0069bef4(ppppplVar5[1]);
    ppppplVar5 = (long *****)&UNK_00910052;
    FUN_00537a9c(param_2);
  }
  ppppplVar13 = &pppplStack_80;
  FUN_005558a0();
  pcStack_c8 = FUN_0069b80c;
  pppplStack_e0 = (long ****)param_2;
  pppplStack_d8 = (long ****)param_1;
  puStack_d0 = &stack0xfffffffffffffff0;
  FUN_00699298();
  if (ppppplVar5 != (long *****)0x0) {
    return ppppplVar5;
  }
  func_0x0069bec4();
  if (ppppplVar13 == (long *****)0x0) {
    FUN_00425cb4(auStack_f8,&UNK_00914d4d);
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_f8,ppppplVar13[1]);
  }
  ppppplVar13 = (long *****)((long)&segment_command_00000020.cmdsize + 2);
  FUN_0077670c(appplStack_108,&UNK_00914cb9,0x26);
  FUN_0054ff4c(appplStack_108,&UNK_00914d55);
  FUN_00555478();
  pppplVar8 = (long ****)&UNK_00914d80;
  func_0x0065ae70();
  ppppplVar5 = (long *****)appplStack_108;
  FUN_005558a0();
  func_0x0069bee4();
  func_0x0069be84();
  ppppplVar7 = &pppplStack_230;
  func_0x0069bea0();
  uStack_178 = extraout_x8;
  FUN_00699298();
  func_0x0069bf38();
  uVar15 = *(uint *)((long)unaff_x21 + 4);
  for (lVar10 = 0; (ulong)(uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU)) * 0x58 - lVar10 != 0;
      lVar10 = lVar10 + 0x58) {
    ppppplVar13 = (long *****)((long)unaff_x21[7] + lVar10);
    uVar2 = *(int *)(ppppplVar13[9] + 6) == 3;
    if ((bool)uVar2) {
      func_0x0069be68();
      FUN_0068ae9c();
      if ((int)ppppplVar5 == 0) {
        ppppplVar16 = (long *****)0x0;
        goto LAB_0069bad4;
      }
    }
  }
  pppplStack_230 = (long ****)0x0;
  pppplStack_228 = (long ****)0x0;
  pppplStack_220 = (long ****)0x0;
  if (*(char *)((long)unaff_x21[4] + 0x53) == '\x01') {
    pppplVar11 = unaff_x21[7];
    ppppplVar5 = &pppplStack_220;
    pppplVar8 = (long ****)((long)&MACH_HEADER.magic + 1);
    FUN_00666d44();
    pppplStack_220 = (long ****)(ppppplVar5 + (long)pppplVar8);
    pppplStack_228 = (long ****)(ppppplVar5 + 1);
    *ppppplVar5 = pppplVar11 + 0xb;
    ppppplVar7 = ppppplVar13;
    ppppplVar9 = ppppplVar5;
    pppplStack_230 = (long ****)ppppplVar5;
    ppppplVar17 = (long *****)pppplStack_228;
  }
  else {
    func_0x0069be68();
    FUN_0068b260();
    ppppplVar9 = (long *****)pppplStack_230;
    ppppplVar17 = (long *****)pppplStack_228;
  }
  while( true ) {
    ppppplVar16 = (long *****)(ulong)(ppppplVar9 == ppppplVar17);
    uVar2 = 1;
    ppppplVar13 = ppppplVar7;
    if (ppppplVar9 == ppppplVar17) break;
    ppppplVar12 = (long *****)*ppppplVar9;
    ppppplVar5 = ppppplVar12;
    FUN_00656c60();
    uVar2 = (int)ppppplVar5 == 10;
    if ((bool)uVar2) {
      ppppplVar6 = ppppplVar12;
      func_0x006595dc();
      if ((int)ppppplVar6 == 0) {
LAB_0069ba00:
        ppppplVar5 = ppppplVar6;
        if ((*(byte *)((long)ppppplVar12 + 1) >> 5 & 1) == 0) {
          func_0x0069be68();
          func_0x0069bf30();
          FUN_00549a28();
          ppppplVar7 = ppppplVar12;
          ppppplVar13 = ppppplVar12;
          if (((ulong)ppppplVar5 & 1) == 0) break;
        }
        else {
          func_0x0069be68();
          ppppplVar13 = ppppplVar12;
          FUN_0068af64();
          uVar15 = 0;
          uVar4 = (uint)ppppplVar5;
          while (uVar2 = (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) == uVar15,
                ppppplVar7 = ppppplVar13, !(bool)uVar2) {
            func_0x0069be68();
            ppppplVar13 = ppppplVar12;
            func_0x0068e124();
            FUN_00549a28();
            uVar15 = uVar15 + 1;
            if (((ulong)ppppplVar5 & 1) == 0) goto LAB_0069bacc;
          }
        }
      }
      else {
        ppppplVar5 = ppppplVar12;
        FUN_00656024();
        ppppplVar5 = (long *****)(ppppplVar5[7] + 0xb);
        FUN_00656c60();
        uVar3 = (int)ppppplVar5 == 10;
        if ((bool)uVar3) {
          func_0x0069be68();
          ppppplVar13 = ppppplVar12;
          func_0x0068efe0();
          if (((ulong)ppppplVar5[1] & 1) != 0) {
            ppppplVar6 = ppppplVar5;
            func_0x0069be74();
            uVar2 = 1;
            if ((bool)uVar3) goto LAB_0069ba00;
          }
          func_0x0069bf24(appplStack_1c8);
          func_0x0069bf24(&ppplStack_218);
          pppplVar8 = appplStack_1c8;
          FUN_00696774(ppppplVar5,pppplVar8);
          ppplStack_218 = (long ***)0x0;
          uStack_210 = 0;
          uStack_208 = 0;
          while (uVar2 = appplStack_1c8[0] == ppplStack_218, !(bool)uVar2) {
            ppppplVar5 = (long *****)appplStack_188;
            FUN_0069721c();
            FUN_00549a28();
            if (((ulong)ppppplVar5 & 1) == 0) {
              func_0x0069bf10();
              func_0x0069bf08();
LAB_0069bacc:
              ppppplVar16 = (long *****)0x0;
              goto LAB_0069bad0;
            }
            ppppplVar5 = (long *****)appplStack_1c8;
            FUN_0068fbf0();
          }
          func_0x0069bf10();
          func_0x0069bf08();
          ppppplVar7 = ppppplVar13;
        }
      }
    }
    ppppplVar9 = ppppplVar9 + 1;
  }
LAB_0069bad0:
  func_0x0069becc();
LAB_0069bad4:
  func_0x0069be8c(uStack_178);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x0069becc();
    func_0x0069be84();
    ppppplVar7 = ppppplVar5;
    FUN_00699298();
    ppppplVar16 = ppppplVar5;
    FUN_0069b80c();
    uVar15 = *(uint *)((long)ppppplVar7 + 4);
    for (lVar10 = 0; (ulong)(uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU)) * 0x58 - lVar10 != 0;
        lVar10 = lVar10 + 0x58) {
      if ((*(int *)(*(long *)((long)ppppplVar7[7] + lVar10 + 0x48) + 0x30) == 3) &&
         (ppppplVar17 = ppppplVar16, FUN_0068ae9c(ppppplVar16,ppppplVar5),
         ((ulong)ppppplVar17 & 1) == 0)) {
        FUN_00682f98(&ppplStack_2a8,pppplVar8,*(undefined8 *)((long)ppppplVar7[7] + lVar10 + 8));
        func_0x0045a4f0(ppppplVar13,&ppplStack_2a8);
        func_0x0069bee4();
      }
    }
    ppplStack_2a8 = (long ***)0x0;
    ppplStack_2a0 = (long ***)0x0;
    uStack_298 = 0;
    FUN_0068b260(ppppplVar16,ppppplVar5,&ppplStack_2a8);
    ppplVar1 = ppplStack_2a0;
    for (pppplVar11 = (long ****)ppplStack_2a8; pppplVar11 != (long ****)ppplVar1;
        pppplVar11 = pppplVar11 + 1) {
      ppplVar14 = *pppplVar11;
      func_0x0069bf00();
      if ((int)ppppplVar16 == 10) {
        if ((*(byte *)((long)ppplVar14 + 1) >> 5 & 1) == 0) {
          func_0x0069bed4();
          func_0x0069bf30();
          FUN_0069bd3c(auStack_2c0,pppplVar8,ppplVar14,0xffffffff);
          FUN_0069bb4c(ppppplVar16,auStack_2c0,ppppplVar13);
          func_0x0069bebc();
        }
        else {
          func_0x0069bed4();
          FUN_0068af64();
          uVar4 = (uint)ppppplVar16;
          for (uVar15 = 0; (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) != uVar15;
              uVar15 = uVar15 + 1) {
            func_0x0069bed4();
            func_0x0068e124();
            FUN_0069bd3c(auStack_2c0,pppplVar8,ppplVar14,uVar15);
            FUN_0069bb4c(ppppplVar16,auStack_2c0,ppppplVar13);
            func_0x0069bebc();
          }
        }
      }
    }
    ppppplVar5 = (long *****)&ppplStack_2a8;
    FUN_00666dd0(ppppplVar5);
    return ppppplVar5;
  }
  return ppppplVar16;
}



/* Entry: 00699090; end: 006990e7;  */

long ***** FUN_00699090(long *****param_1,long *****param_2)

{
  long ***ppplVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  long *****ppppplVar7;
  long *****ppppplVar8;
  long ****UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x8;
  long *****unaff_x21;
  long lVar9;
  long ****pppplVar10;
  long *****ppppplVar11;
  long *****ppppplVar12;
  long ***ppplVar13;
  uint uVar14;
  long *****ppppplVar15;
  long *****ppppplVar16;
  undefined1 auStack_2c0 [24];
  long ***ppplStack_2a8;
  long ***ppplStack_2a0;
  undefined8 uStack_298;
  long ****pppplStack_230;
  long ****pppplStack_228;
  long ****pppplStack_220;
  long ***ppplStack_218;
  undefined8 uStack_210;
  undefined4 uStack_208;
  long ***appplStack_1c8 [8];
  long ***appplStack_188 [2];
  undefined8 uStack_178;
  long ***appplStack_108 [2];
  undefined1 auStack_f8 [24];
  long ****pppplStack_e0;
  long ****pppplStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  uint uStack_bc;
  long ***ppplStack_b8;
  long ***appplStack_b0 [3];
  long ***appplStack_98 [3];
  long ****pppplStack_80;
  long ***ppplStack_78;
  undefined8 uStack_70;
  long ****pppplStack_68;
  
  func_0x0069b0dc();
  func_0x0069af04();
  ppppplVar11 = param_1;
  func_0x0069aef4();
  if (param_1 != (long *****)0x0 && param_1 == ppppplVar11) {
    UNRECOVERED_JUMPTABLE = param_1[4];
    func_0x0069aff0();
                    /* WARNING: Could not recover jumptable at 0x006990e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)();
    return ppppplVar11;
  }
  func_0x0069b0d0();
  if (ppppplVar11 == param_2) {
    ppppplVar6 = ppppplVar11;
    ppppplVar12 = param_2;
    func_0x0069be68();
    FUN_00554814();
    func_0x00533528();
    ppppplVar5 = (long *****)&UNK_00914cb9;
    FUN_00776794(&pppplStack_80,&UNK_00914cb9,0x33,ppppplVar6,ppppplVar12);
  }
  else {
    ppppplVar6 = ppppplVar11;
    FUN_00699298();
    pppplStack_68 = (long ****)ppppplVar6;
    func_0x0069bec4();
    ppppplVar5 = &pppplStack_80;
    pppplStack_80 = (long ****)ppppplVar6;
    FUN_0068e61c(ppppplVar5,&pppplStack_68,&UNK_00914cf2);
    if (ppppplVar5 == (long *****)0x0) {
      ppppplVar6 = ppppplVar11;
      FUN_0069b80c();
      func_0x0069bf38();
      ppppplVar15 = (long *****)unaff_x21[0xb];
      ppppplVar12 = ppppplVar6;
      FUN_006994c8();
      ppppplVar16 = (long *****)ppppplVar6[0xb];
      ppppplVar8 = ppppplVar12;
      FUN_006994c8();
      pppplStack_80 = (long ****)0x0;
      ppplStack_78 = (long ***)0x0;
      uStack_70 = 0;
      ppppplVar5 = unaff_x21;
      FUN_0068b260(unaff_x21,ppppplVar11,&pppplStack_80);
      ppplStack_b8 = ppplStack_78;
      uStack_bc = (uint)((ppppplVar15 == ppppplVar12) != (ppppplVar16 != ppppplVar8));
      UNRECOVERED_JUMPTABLE = pppplStack_80;
      do {
        uVar2 = UNRECOVERED_JUMPTABLE == (long ****)ppplStack_b8;
        if ((bool)uVar2) {
          func_0x0069bf18();
          if (*ppppplVar5 != ppppplVar5[1]) {
            func_0x006895cc(ppppplVar6,param_2);
            ppppplVar11 = ppppplVar6;
            func_0x0069bf18();
            FUN_006a4a80(ppppplVar6,ppppplVar11);
          }
          ppppplVar11 = &pppplStack_80;
          FUN_00666dd0(ppppplVar11);
          return ppppplVar11;
        }
        ppppplVar11 = (long *****)*UNRECOVERED_JUMPTABLE;
        if ((*(byte *)((long)ppppplVar11 + 1) >> 5 & 1) == 0) {
          func_0x0069bf00();
          switch((int)ppppplVar5) {
          case 1:
            func_0x0069be48();
            FUN_0068b4e8();
            func_0x0069be58();
            FUN_0068b594();
            break;
          case 2:
            func_0x0069be48();
            FUN_0068b804();
            func_0x0069be58();
            FUN_0068b8b0();
            break;
          case 3:
            func_0x0069be48();
            FUN_0068bb28();
            func_0x0069be58();
            FUN_0068bbd4();
            break;
          case 4:
            func_0x0069be48();
            FUN_0068be44();
            func_0x0069be58();
            FUN_0068bef0();
            break;
          case 5:
            func_0x0069be48();
            FUN_0068c4ac();
            func_0x0069be58();
            FUN_0068c558();
            break;
          case 6:
            func_0x0069be48();
            FUN_0068c168();
            func_0x0069be58();
            FUN_0068c214();
            break;
          case 7:
            func_0x0069be48();
            FUN_0068c7f0();
            func_0x0069be58();
            FUN_0068c8a0();
            break;
          case 8:
            func_0x0069be48();
            FUN_0068d744();
            func_0x0069be58();
            FUN_0068d82c();
            break;
          case 9:
            func_0x0069be48(appplStack_b0);
            FUN_0068cb34();
            func_0x0069be58();
            FUN_0068ceac();
            ppppplVar5 = (long *****)appplStack_b0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
            break;
          case 10:
            func_0x0069be48();
            func_0x0069bf30();
            if (unaff_x21 == ppppplVar6) {
              FUN_00699298();
            }
            func_0x0069be58();
            FUN_0068dd94();
            FUN_00699090();
          }
        }
        else {
          if ((uStack_bc != 0) &&
             (func_0x006595dc(), ppppplVar5 = ppppplVar11, (int)ppppplVar11 != 0)) {
            func_0x0069be48();
            func_0x0068efe0();
            ppppplVar5 = ppppplVar11;
            func_0x0069be58();
            func_0x0068efa4();
            if (((((ulong)ppppplVar5[1] & 1) == 0) || (func_0x0069be74(), !(bool)uVar2)) &&
               ((((ulong)ppppplVar11[1] & 1) == 0 || (func_0x0069be74(), !(bool)uVar2)))) {
              (*(code *)(*ppppplVar5)[6])();
              goto LAB_0069b6a0;
            }
          }
          func_0x0069be48();
          FUN_0068af64();
          uVar4 = (uint)ppppplVar5;
          for (uVar14 = 0; (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) != uVar14;
              uVar14 = uVar14 + 1) {
            func_0x0069bf00();
            switch((int)ppppplVar5) {
            case 1:
              func_0x0069be34();
              func_0x0068b6ac();
              func_0x0069be58();
              FUN_0068b73c();
              break;
            case 2:
              func_0x0069be34();
              func_0x0068b9cc();
              func_0x0069be58();
              FUN_0068ba5c();
              break;
            case 3:
              func_0x0069be34();
              func_0x0068bcec();
              func_0x0069be58();
              FUN_0068bd7c();
              break;
            case 4:
              func_0x0069be34();
              func_0x0068c00c();
              func_0x0069be58();
              FUN_0068c09c();
              break;
            case 5:
              func_0x0069be34();
              FUN_0068c680();
              func_0x0069be58();
              FUN_0068c710();
              break;
            case 6:
              func_0x0069be34();
              FUN_0068c33c();
              func_0x0069be58();
              FUN_0068c3cc();
              break;
            case 7:
              func_0x0069be34();
              func_0x0068c9b8();
              func_0x0069be58();
              FUN_0068ca6c();
              break;
            case 8:
              func_0x0069be34();
              FUN_0068d98c();
              func_0x0069be58();
              FUN_0068da48();
              break;
            case 9:
              func_0x0069be34(appplStack_98);
              FUN_0068d4b4();
              func_0x0069be58();
              FUN_0068d62c();
              ppppplVar5 = (long *****)appplStack_98;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
              break;
            case 10:
              func_0x0069be34();
              func_0x0068e124();
              if (unaff_x21 == ppppplVar6) {
                FUN_00699298();
              }
              func_0x0069be58();
              FUN_0068e1d0();
              FUN_00699090();
            }
          }
        }
LAB_0069b6a0:
        UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + 1;
      } while( true );
    }
    UNRECOVERED_JUMPTABLE = (long ****)(long)*(char *)((long)ppppplVar5 + 0x17);
    ppppplVar11 = ppppplVar5;
    if ((long)UNRECOVERED_JUMPTABLE < 0) {
      ppppplVar11 = (long *****)*ppppplVar5;
      UNRECOVERED_JUMPTABLE = ppppplVar5[1];
    }
    FUN_00776714(&pppplStack_80,&UNK_00914cb9,0x36,ppppplVar11,UNRECOVERED_JUMPTABLE);
    ppppplVar11 = &pppplStack_80;
    FUN_00537a3c(ppppplVar11,&UNK_00914d14);
    FUN_00554ab4();
    func_0x0069bef4(pppplStack_68[1]);
    ppppplVar5 = ppppplVar11;
    FUN_00554ab4(ppppplVar11,&UNK_00914d48,4);
    func_0x0069bec4();
    func_0x0069bef4(ppppplVar5[1]);
    ppppplVar5 = (long *****)&UNK_00910052;
    FUN_00537a9c(ppppplVar11);
  }
  ppppplVar6 = &pppplStack_80;
  FUN_005558a0();
  pcStack_c8 = FUN_0069b80c;
  pppplStack_e0 = (long ****)ppppplVar11;
  pppplStack_d8 = (long ****)param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  FUN_00699298();
  if (ppppplVar5 != (long *****)0x0) {
    return ppppplVar5;
  }
  func_0x0069bec4();
  if (ppppplVar6 == (long *****)0x0) {
    FUN_00425cb4(auStack_f8,&UNK_00914d4d);
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_f8,ppppplVar6[1]);
  }
  ppppplVar5 = (long *****)((long)&segment_command_00000020.cmdsize + 2);
  FUN_0077670c(appplStack_108,&UNK_00914cb9,0x26);
  FUN_0054ff4c(appplStack_108,&UNK_00914d55);
  FUN_00555478();
  UNRECOVERED_JUMPTABLE = (long ****)&UNK_00914d80;
  func_0x0065ae70();
  ppppplVar11 = (long *****)appplStack_108;
  FUN_005558a0();
  func_0x0069bee4();
  func_0x0069be84();
  ppppplVar6 = &pppplStack_230;
  func_0x0069bea0();
  uStack_178 = extraout_x8;
  FUN_00699298();
  func_0x0069bf38();
  uVar14 = *(uint *)((long)unaff_x21 + 4);
  for (lVar9 = 0; (ulong)(uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU)) * 0x58 - lVar9 != 0;
      lVar9 = lVar9 + 0x58) {
    ppppplVar5 = (long *****)((long)unaff_x21[7] + lVar9);
    uVar2 = *(int *)(ppppplVar5[9] + 6) == 3;
    if ((bool)uVar2) {
      func_0x0069be68();
      FUN_0068ae9c();
      if ((int)ppppplVar11 == 0) {
        ppppplVar12 = (long *****)0x0;
        goto LAB_0069bad4;
      }
    }
  }
  pppplStack_230 = (long ****)0x0;
  pppplStack_228 = (long ****)0x0;
  pppplStack_220 = (long ****)0x0;
  if (*(char *)((long)unaff_x21[4] + 0x53) == '\x01') {
    pppplVar10 = unaff_x21[7];
    ppppplVar11 = &pppplStack_220;
    UNRECOVERED_JUMPTABLE = (long ****)((long)&MACH_HEADER.magic + 1);
    FUN_00666d44();
    pppplStack_220 = (long ****)(ppppplVar11 + (long)UNRECOVERED_JUMPTABLE);
    pppplStack_228 = (long ****)(ppppplVar11 + 1);
    *ppppplVar11 = pppplVar10 + 0xb;
    ppppplVar6 = ppppplVar5;
    ppppplVar15 = ppppplVar11;
    pppplStack_230 = (long ****)ppppplVar11;
    ppppplVar8 = (long *****)pppplStack_228;
  }
  else {
    func_0x0069be68();
    FUN_0068b260();
    ppppplVar15 = (long *****)pppplStack_230;
    ppppplVar8 = (long *****)pppplStack_228;
  }
  while( true ) {
    ppppplVar12 = (long *****)(ulong)(ppppplVar15 == ppppplVar8);
    uVar2 = 1;
    ppppplVar5 = ppppplVar6;
    if (ppppplVar15 == ppppplVar8) break;
    ppppplVar16 = (long *****)*ppppplVar15;
    ppppplVar11 = ppppplVar16;
    FUN_00656c60();
    uVar2 = (int)ppppplVar11 == 10;
    if ((bool)uVar2) {
      ppppplVar7 = ppppplVar16;
      func_0x006595dc();
      if ((int)ppppplVar7 == 0) {
LAB_0069ba00:
        ppppplVar11 = ppppplVar7;
        if ((*(byte *)((long)ppppplVar16 + 1) >> 5 & 1) == 0) {
          func_0x0069be68();
          func_0x0069bf30();
          FUN_00549a28();
          ppppplVar6 = ppppplVar16;
          ppppplVar5 = ppppplVar16;
          if (((ulong)ppppplVar11 & 1) == 0) break;
        }
        else {
          func_0x0069be68();
          ppppplVar5 = ppppplVar16;
          FUN_0068af64();
          uVar14 = 0;
          uVar4 = (uint)ppppplVar11;
          while (uVar2 = (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) == uVar14,
                ppppplVar6 = ppppplVar5, !(bool)uVar2) {
            func_0x0069be68();
            ppppplVar5 = ppppplVar16;
            func_0x0068e124();
            FUN_00549a28();
            uVar14 = uVar14 + 1;
            if (((ulong)ppppplVar11 & 1) == 0) goto LAB_0069bacc;
          }
        }
      }
      else {
        ppppplVar11 = ppppplVar16;
        FUN_00656024();
        ppppplVar11 = (long *****)(ppppplVar11[7] + 0xb);
        FUN_00656c60();
        uVar3 = (int)ppppplVar11 == 10;
        if ((bool)uVar3) {
          func_0x0069be68();
          ppppplVar5 = ppppplVar16;
          func_0x0068efe0();
          if (((ulong)ppppplVar11[1] & 1) != 0) {
            ppppplVar7 = ppppplVar11;
            func_0x0069be74();
            uVar2 = 1;
            if ((bool)uVar3) goto LAB_0069ba00;
          }
          func_0x0069bf24(appplStack_1c8);
          func_0x0069bf24(&ppplStack_218);
          UNRECOVERED_JUMPTABLE = appplStack_1c8;
          FUN_00696774(ppppplVar11,UNRECOVERED_JUMPTABLE);
          ppplStack_218 = (long ***)0x0;
          uStack_210 = 0;
          uStack_208 = 0;
          while (uVar2 = appplStack_1c8[0] == ppplStack_218, !(bool)uVar2) {
            ppppplVar11 = (long *****)appplStack_188;
            FUN_0069721c();
            FUN_00549a28();
            if (((ulong)ppppplVar11 & 1) == 0) {
              func_0x0069bf10();
              func_0x0069bf08();
LAB_0069bacc:
              ppppplVar12 = (long *****)0x0;
              goto LAB_0069bad0;
            }
            ppppplVar11 = (long *****)appplStack_1c8;
            FUN_0068fbf0();
          }
          func_0x0069bf10();
          func_0x0069bf08();
          ppppplVar6 = ppppplVar5;
        }
      }
    }
    ppppplVar15 = ppppplVar15 + 1;
  }
LAB_0069bad0:
  func_0x0069becc();
LAB_0069bad4:
  func_0x0069be8c(uStack_178);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x0069becc();
    func_0x0069be84();
    ppppplVar6 = ppppplVar11;
    FUN_00699298();
    ppppplVar12 = ppppplVar11;
    FUN_0069b80c();
    uVar14 = *(uint *)((long)ppppplVar6 + 4);
    for (lVar9 = 0; (ulong)(uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU)) * 0x58 - lVar9 != 0;
        lVar9 = lVar9 + 0x58) {
      if ((*(int *)(*(long *)((long)ppppplVar6[7] + lVar9 + 0x48) + 0x30) == 3) &&
         (ppppplVar8 = ppppplVar12, FUN_0068ae9c(ppppplVar12,ppppplVar11),
         ((ulong)ppppplVar8 & 1) == 0)) {
        FUN_00682f98(&ppplStack_2a8,UNRECOVERED_JUMPTABLE,
                     *(undefined8 *)((long)ppppplVar6[7] + lVar9 + 8));
        func_0x0045a4f0(ppppplVar5,&ppplStack_2a8);
        func_0x0069bee4();
      }
    }
    ppplStack_2a8 = (long ***)0x0;
    ppplStack_2a0 = (long ***)0x0;
    uStack_298 = 0;
    FUN_0068b260(ppppplVar12,ppppplVar11,&ppplStack_2a8);
    ppplVar1 = ppplStack_2a0;
    for (pppplVar10 = (long ****)ppplStack_2a8; pppplVar10 != (long ****)ppplVar1;
        pppplVar10 = pppplVar10 + 1) {
      ppplVar13 = *pppplVar10;
      func_0x0069bf00();
      if ((int)ppppplVar12 == 10) {
        if ((*(byte *)((long)ppplVar13 + 1) >> 5 & 1) == 0) {
          func_0x0069bed4();
          func_0x0069bf30();
          FUN_0069bd3c(auStack_2c0,UNRECOVERED_JUMPTABLE,ppplVar13,0xffffffff);
          FUN_0069bb4c(ppppplVar12,auStack_2c0,ppppplVar5);
          func_0x0069bebc();
        }
        else {
          func_0x0069bed4();
          FUN_0068af64();
          uVar4 = (uint)ppppplVar12;
          for (uVar14 = 0; (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) != uVar14;
              uVar14 = uVar14 + 1) {
            func_0x0069bed4();
            func_0x0068e124();
            FUN_0069bd3c(auStack_2c0,UNRECOVERED_JUMPTABLE,ppplVar13,uVar14);
            FUN_0069bb4c(ppppplVar12,auStack_2c0,ppppplVar5);
            func_0x0069bebc();
          }
        }
      }
    }
    ppppplVar11 = (long *****)&ppplStack_2a8;
    FUN_00666dd0(ppppplVar11);
    return ppppplVar11;
  }
  return ppppplVar12;
}



/* Entry: 006990e8; end: 006990eb;  */

long ***** FUN_006990e8(long *****param_1,long *****param_2)

{
  long ***ppplVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  long *****ppppplVar7;
  long *****ppppplVar8;
  long ****UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x8;
  long *****unaff_x21;
  long lVar9;
  long ****pppplVar10;
  long *****ppppplVar11;
  long *****ppppplVar12;
  long ***ppplVar13;
  uint uVar14;
  long *****ppppplVar15;
  long *****ppppplVar16;
  undefined1 auStack_2c0 [24];
  long ***ppplStack_2a8;
  long ***ppplStack_2a0;
  undefined8 uStack_298;
  long ****pppplStack_230;
  long ****pppplStack_228;
  long ****pppplStack_220;
  long ***ppplStack_218;
  undefined8 uStack_210;
  undefined4 uStack_208;
  long ***appplStack_1c8 [8];
  long ***appplStack_188 [2];
  undefined8 uStack_178;
  long ***appplStack_108 [2];
  undefined1 auStack_f8 [24];
  long ****pppplStack_e0;
  long ****pppplStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  uint uStack_bc;
  long ***ppplStack_b8;
  long ***appplStack_b0 [3];
  long ***appplStack_98 [3];
  long ****pppplStack_80;
  long ***ppplStack_78;
  undefined8 uStack_70;
  long ****pppplStack_68;
  
  func_0x0069b0dc();
  func_0x0069af04();
  ppppplVar11 = param_1;
  func_0x0069aef4();
  if (param_1 != (long *****)0x0 && param_1 == ppppplVar11) {
    UNRECOVERED_JUMPTABLE = param_1[4];
    func_0x0069aff0();
                    /* WARNING: Could not recover jumptable at 0x006990e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)();
    return ppppplVar11;
  }
  func_0x0069b0d0();
  if (ppppplVar11 == param_2) {
    ppppplVar6 = ppppplVar11;
    ppppplVar12 = param_2;
    func_0x0069be68();
    FUN_00554814();
    func_0x00533528();
    ppppplVar5 = (long *****)&UNK_00914cb9;
    FUN_00776794(&pppplStack_80,&UNK_00914cb9,0x33,ppppplVar6,ppppplVar12);
  }
  else {
    ppppplVar6 = ppppplVar11;
    FUN_00699298();
    pppplStack_68 = (long ****)ppppplVar6;
    func_0x0069bec4();
    ppppplVar5 = &pppplStack_80;
    pppplStack_80 = (long ****)ppppplVar6;
    FUN_0068e61c(ppppplVar5,&pppplStack_68,&UNK_00914cf2);
    if (ppppplVar5 == (long *****)0x0) {
      ppppplVar6 = ppppplVar11;
      FUN_0069b80c();
      func_0x0069bf38();
      ppppplVar15 = (long *****)unaff_x21[0xb];
      ppppplVar12 = ppppplVar6;
      FUN_006994c8();
      ppppplVar16 = (long *****)ppppplVar6[0xb];
      ppppplVar8 = ppppplVar12;
      FUN_006994c8();
      pppplStack_80 = (long ****)0x0;
      ppplStack_78 = (long ***)0x0;
      uStack_70 = 0;
      ppppplVar5 = unaff_x21;
      FUN_0068b260(unaff_x21,ppppplVar11,&pppplStack_80);
      ppplStack_b8 = ppplStack_78;
      uStack_bc = (uint)((ppppplVar15 == ppppplVar12) != (ppppplVar16 != ppppplVar8));
      UNRECOVERED_JUMPTABLE = pppplStack_80;
      do {
        uVar2 = UNRECOVERED_JUMPTABLE == (long ****)ppplStack_b8;
        if ((bool)uVar2) {
          func_0x0069bf18();
          if (*ppppplVar5 != ppppplVar5[1]) {
            func_0x006895cc(ppppplVar6,param_2);
            ppppplVar11 = ppppplVar6;
            func_0x0069bf18();
            FUN_006a4a80(ppppplVar6,ppppplVar11);
          }
          ppppplVar11 = &pppplStack_80;
          FUN_00666dd0(ppppplVar11);
          return ppppplVar11;
        }
        ppppplVar11 = (long *****)*UNRECOVERED_JUMPTABLE;
        if ((*(byte *)((long)ppppplVar11 + 1) >> 5 & 1) == 0) {
          func_0x0069bf00();
          switch((int)ppppplVar5) {
          case 1:
            func_0x0069be48();
            FUN_0068b4e8();
            func_0x0069be58();
            FUN_0068b594();
            break;
          case 2:
            func_0x0069be48();
            FUN_0068b804();
            func_0x0069be58();
            FUN_0068b8b0();
            break;
          case 3:
            func_0x0069be48();
            FUN_0068bb28();
            func_0x0069be58();
            FUN_0068bbd4();
            break;
          case 4:
            func_0x0069be48();
            FUN_0068be44();
            func_0x0069be58();
            FUN_0068bef0();
            break;
          case 5:
            func_0x0069be48();
            FUN_0068c4ac();
            func_0x0069be58();
            FUN_0068c558();
            break;
          case 6:
            func_0x0069be48();
            FUN_0068c168();
            func_0x0069be58();
            FUN_0068c214();
            break;
          case 7:
            func_0x0069be48();
            FUN_0068c7f0();
            func_0x0069be58();
            FUN_0068c8a0();
            break;
          case 8:
            func_0x0069be48();
            FUN_0068d744();
            func_0x0069be58();
            FUN_0068d82c();
            break;
          case 9:
            func_0x0069be48(appplStack_b0);
            FUN_0068cb34();
            func_0x0069be58();
            FUN_0068ceac();
            ppppplVar5 = (long *****)appplStack_b0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
            break;
          case 10:
            func_0x0069be48();
            func_0x0069bf30();
            if (unaff_x21 == ppppplVar6) {
              FUN_00699298();
            }
            func_0x0069be58();
            FUN_0068dd94();
            FUN_00699090();
          }
        }
        else {
          if ((uStack_bc != 0) &&
             (func_0x006595dc(), ppppplVar5 = ppppplVar11, (int)ppppplVar11 != 0)) {
            func_0x0069be48();
            func_0x0068efe0();
            ppppplVar5 = ppppplVar11;
            func_0x0069be58();
            func_0x0068efa4();
            if (((((ulong)ppppplVar5[1] & 1) == 0) || (func_0x0069be74(), !(bool)uVar2)) &&
               ((((ulong)ppppplVar11[1] & 1) == 0 || (func_0x0069be74(), !(bool)uVar2)))) {
              (*(code *)(*ppppplVar5)[6])();
              goto LAB_0069b6a0;
            }
          }
          func_0x0069be48();
          FUN_0068af64();
          uVar4 = (uint)ppppplVar5;
          for (uVar14 = 0; (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) != uVar14;
              uVar14 = uVar14 + 1) {
            func_0x0069bf00();
            switch((int)ppppplVar5) {
            case 1:
              func_0x0069be34();
              func_0x0068b6ac();
              func_0x0069be58();
              FUN_0068b73c();
              break;
            case 2:
              func_0x0069be34();
              func_0x0068b9cc();
              func_0x0069be58();
              FUN_0068ba5c();
              break;
            case 3:
              func_0x0069be34();
              func_0x0068bcec();
              func_0x0069be58();
              FUN_0068bd7c();
              break;
            case 4:
              func_0x0069be34();
              func_0x0068c00c();
              func_0x0069be58();
              FUN_0068c09c();
              break;
            case 5:
              func_0x0069be34();
              FUN_0068c680();
              func_0x0069be58();
              FUN_0068c710();
              break;
            case 6:
              func_0x0069be34();
              FUN_0068c33c();
              func_0x0069be58();
              FUN_0068c3cc();
              break;
            case 7:
              func_0x0069be34();
              func_0x0068c9b8();
              func_0x0069be58();
              FUN_0068ca6c();
              break;
            case 8:
              func_0x0069be34();
              FUN_0068d98c();
              func_0x0069be58();
              FUN_0068da48();
              break;
            case 9:
              func_0x0069be34(appplStack_98);
              FUN_0068d4b4();
              func_0x0069be58();
              FUN_0068d62c();
              ppppplVar5 = (long *****)appplStack_98;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
              break;
            case 10:
              func_0x0069be34();
              func_0x0068e124();
              if (unaff_x21 == ppppplVar6) {
                FUN_00699298();
              }
              func_0x0069be58();
              FUN_0068e1d0();
              FUN_00699090();
            }
          }
        }
LAB_0069b6a0:
        UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + 1;
      } while( true );
    }
    UNRECOVERED_JUMPTABLE = (long ****)(long)*(char *)((long)ppppplVar5 + 0x17);
    ppppplVar11 = ppppplVar5;
    if ((long)UNRECOVERED_JUMPTABLE < 0) {
      ppppplVar11 = (long *****)*ppppplVar5;
      UNRECOVERED_JUMPTABLE = ppppplVar5[1];
    }
    FUN_00776714(&pppplStack_80,&UNK_00914cb9,0x36,ppppplVar11,UNRECOVERED_JUMPTABLE);
    ppppplVar11 = &pppplStack_80;
    FUN_00537a3c(ppppplVar11,&UNK_00914d14);
    FUN_00554ab4();
    func_0x0069bef4(pppplStack_68[1]);
    ppppplVar5 = ppppplVar11;
    FUN_00554ab4(ppppplVar11,&UNK_00914d48,4);
    func_0x0069bec4();
    func_0x0069bef4(ppppplVar5[1]);
    ppppplVar5 = (long *****)&UNK_00910052;
    FUN_00537a9c(ppppplVar11);
  }
  ppppplVar6 = &pppplStack_80;
  FUN_005558a0();
  pcStack_c8 = FUN_0069b80c;
  pppplStack_e0 = (long ****)ppppplVar11;
  pppplStack_d8 = (long ****)param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  FUN_00699298();
  if (ppppplVar5 != (long *****)0x0) {
    return ppppplVar5;
  }
  func_0x0069bec4();
  if (ppppplVar6 == (long *****)0x0) {
    FUN_00425cb4(auStack_f8,&UNK_00914d4d);
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_f8,ppppplVar6[1]);
  }
  ppppplVar5 = (long *****)((long)&segment_command_00000020.cmdsize + 2);
  FUN_0077670c(appplStack_108,&UNK_00914cb9,0x26);
  FUN_0054ff4c(appplStack_108,&UNK_00914d55);
  FUN_00555478();
  UNRECOVERED_JUMPTABLE = (long ****)&UNK_00914d80;
  func_0x0065ae70();
  ppppplVar11 = (long *****)appplStack_108;
  FUN_005558a0();
  func_0x0069bee4();
  func_0x0069be84();
  ppppplVar6 = &pppplStack_230;
  func_0x0069bea0();
  uStack_178 = extraout_x8;
  FUN_00699298();
  func_0x0069bf38();
  uVar14 = *(uint *)((long)unaff_x21 + 4);
  for (lVar9 = 0; (ulong)(uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU)) * 0x58 - lVar9 != 0;
      lVar9 = lVar9 + 0x58) {
    ppppplVar5 = (long *****)((long)unaff_x21[7] + lVar9);
    uVar2 = *(int *)(ppppplVar5[9] + 6) == 3;
    if ((bool)uVar2) {
      func_0x0069be68();
      FUN_0068ae9c();
      if ((int)ppppplVar11 == 0) {
        ppppplVar12 = (long *****)0x0;
        goto LAB_0069bad4;
      }
    }
  }
  pppplStack_230 = (long ****)0x0;
  pppplStack_228 = (long ****)0x0;
  pppplStack_220 = (long ****)0x0;
  if (*(char *)((long)unaff_x21[4] + 0x53) == '\x01') {
    pppplVar10 = unaff_x21[7];
    ppppplVar11 = &pppplStack_220;
    UNRECOVERED_JUMPTABLE = (long ****)((long)&MACH_HEADER.magic + 1);
    FUN_00666d44();
    pppplStack_220 = (long ****)(ppppplVar11 + (long)UNRECOVERED_JUMPTABLE);
    pppplStack_228 = (long ****)(ppppplVar11 + 1);
    *ppppplVar11 = pppplVar10 + 0xb;
    ppppplVar6 = ppppplVar5;
    ppppplVar15 = ppppplVar11;
    pppplStack_230 = (long ****)ppppplVar11;
    ppppplVar8 = (long *****)pppplStack_228;
  }
  else {
    func_0x0069be68();
    FUN_0068b260();
    ppppplVar15 = (long *****)pppplStack_230;
    ppppplVar8 = (long *****)pppplStack_228;
  }
  while( true ) {
    ppppplVar12 = (long *****)(ulong)(ppppplVar15 == ppppplVar8);
    uVar2 = 1;
    ppppplVar5 = ppppplVar6;
    if (ppppplVar15 == ppppplVar8) break;
    ppppplVar16 = (long *****)*ppppplVar15;
    ppppplVar11 = ppppplVar16;
    FUN_00656c60();
    uVar2 = (int)ppppplVar11 == 10;
    if ((bool)uVar2) {
      ppppplVar7 = ppppplVar16;
      func_0x006595dc();
      if ((int)ppppplVar7 == 0) {
LAB_0069ba00:
        ppppplVar11 = ppppplVar7;
        if ((*(byte *)((long)ppppplVar16 + 1) >> 5 & 1) == 0) {
          func_0x0069be68();
          func_0x0069bf30();
          FUN_00549a28();
          ppppplVar6 = ppppplVar16;
          ppppplVar5 = ppppplVar16;
          if (((ulong)ppppplVar11 & 1) == 0) break;
        }
        else {
          func_0x0069be68();
          ppppplVar5 = ppppplVar16;
          FUN_0068af64();
          uVar14 = 0;
          uVar4 = (uint)ppppplVar11;
          while (uVar2 = (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) == uVar14,
                ppppplVar6 = ppppplVar5, !(bool)uVar2) {
            func_0x0069be68();
            ppppplVar5 = ppppplVar16;
            func_0x0068e124();
            FUN_00549a28();
            uVar14 = uVar14 + 1;
            if (((ulong)ppppplVar11 & 1) == 0) goto LAB_0069bacc;
          }
        }
      }
      else {
        ppppplVar11 = ppppplVar16;
        FUN_00656024();
        ppppplVar11 = (long *****)(ppppplVar11[7] + 0xb);
        FUN_00656c60();
        uVar3 = (int)ppppplVar11 == 10;
        if ((bool)uVar3) {
          func_0x0069be68();
          ppppplVar5 = ppppplVar16;
          func_0x0068efe0();
          if (((ulong)ppppplVar11[1] & 1) != 0) {
            ppppplVar7 = ppppplVar11;
            func_0x0069be74();
            uVar2 = 1;
            if ((bool)uVar3) goto LAB_0069ba00;
          }
          func_0x0069bf24(appplStack_1c8);
          func_0x0069bf24(&ppplStack_218);
          UNRECOVERED_JUMPTABLE = appplStack_1c8;
          FUN_00696774(ppppplVar11,UNRECOVERED_JUMPTABLE);
          ppplStack_218 = (long ***)0x0;
          uStack_210 = 0;
          uStack_208 = 0;
          while (uVar2 = appplStack_1c8[0] == ppplStack_218, !(bool)uVar2) {
            ppppplVar11 = (long *****)appplStack_188;
            FUN_0069721c();
            FUN_00549a28();
            if (((ulong)ppppplVar11 & 1) == 0) {
              func_0x0069bf10();
              func_0x0069bf08();
LAB_0069bacc:
              ppppplVar12 = (long *****)0x0;
              goto LAB_0069bad0;
            }
            ppppplVar11 = (long *****)appplStack_1c8;
            FUN_0068fbf0();
          }
          func_0x0069bf10();
          func_0x0069bf08();
          ppppplVar6 = ppppplVar5;
        }
      }
    }
    ppppplVar15 = ppppplVar15 + 1;
  }
LAB_0069bad0:
  func_0x0069becc();
LAB_0069bad4:
  func_0x0069be8c(uStack_178);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x0069becc();
    func_0x0069be84();
    ppppplVar6 = ppppplVar11;
    FUN_00699298();
    ppppplVar12 = ppppplVar11;
    FUN_0069b80c();
    uVar14 = *(uint *)((long)ppppplVar6 + 4);
    for (lVar9 = 0; (ulong)(uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU)) * 0x58 - lVar9 != 0;
        lVar9 = lVar9 + 0x58) {
      if ((*(int *)(*(long *)((long)ppppplVar6[7] + lVar9 + 0x48) + 0x30) == 3) &&
         (ppppplVar8 = ppppplVar12, FUN_0068ae9c(ppppplVar12,ppppplVar11),
         ((ulong)ppppplVar8 & 1) == 0)) {
        FUN_00682f98(&ppplStack_2a8,UNRECOVERED_JUMPTABLE,
                     *(undefined8 *)((long)ppppplVar6[7] + lVar9 + 8));
        func_0x0045a4f0(ppppplVar5,&ppplStack_2a8);
        func_0x0069bee4();
      }
    }
    ppplStack_2a8 = (long ***)0x0;
    ppplStack_2a0 = (long ***)0x0;
    uStack_298 = 0;
    FUN_0068b260(ppppplVar12,ppppplVar11,&ppplStack_2a8);
    ppplVar1 = ppplStack_2a0;
    for (pppplVar10 = (long ****)ppplStack_2a8; pppplVar10 != (long ****)ppplVar1;
        pppplVar10 = pppplVar10 + 1) {
      ppplVar13 = *pppplVar10;
      func_0x0069bf00();
      if ((int)ppppplVar12 == 10) {
        if ((*(byte *)((long)ppplVar13 + 1) >> 5 & 1) == 0) {
          func_0x0069bed4();
          func_0x0069bf30();
          FUN_0069bd3c(auStack_2c0,UNRECOVERED_JUMPTABLE,ppplVar13,0xffffffff);
          FUN_0069bb4c(ppppplVar12,auStack_2c0,ppppplVar5);
          func_0x0069bebc();
        }
        else {
          func_0x0069bed4();
          FUN_0068af64();
          uVar4 = (uint)ppppplVar12;
          for (uVar14 = 0; (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) != uVar14;
              uVar14 = uVar14 + 1) {
            func_0x0069bed4();
            func_0x0068e124();
            FUN_0069bd3c(auStack_2c0,UNRECOVERED_JUMPTABLE,ppplVar13,uVar14);
            FUN_0069bb4c(ppppplVar12,auStack_2c0,ppppplVar5);
            func_0x0069bebc();
          }
        }
      }
    }
    ppppplVar11 = (long *****)&ppplStack_2a8;
    FUN_00666dd0(ppppplVar11);
    return ppppplVar11;
  }
  return ppppplVar12;
}



/* Entry: 006990ec; end: 00699213;  */

long * FUN_006990ec(long *param_1,long *param_2)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  long alStack_48 [2];
  undefined1 auStack_38 [8];
  
  if (param_2 != param_1) {
    func_0x0069b0dc();
    func_0x0069af04();
    plVar1 = param_1;
    func_0x0069aef4();
    if (plVar1 != (long *)0x0 && plVar1 == param_1) {
      (**(code **)(*unaff_x20 + 0x18))();
      UNRECOVERED_JUMPTABLE = (code *)param_1[4];
      func_0x0069aff0();
                    /* WARNING: Could not recover jumptable at 0x00699198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return unaff_x20;
    }
    FUN_00699298();
    FUN_00699298();
    param_1 = alStack_48;
    FUN_0068e61c(param_1,auStack_38,&UNK_00914b0e);
    if (param_1 != (long *)0x0) {
      lVar2 = (long)*(char *)((long)param_1 + 0x17);
      plVar1 = param_1;
      if (lVar2 < 0) {
        plVar1 = (long *)*param_1;
        lVar2 = param_1[1];
      }
      FUN_00776714(alStack_48,&UNK_00914b31,0x66,plVar1,lVar2);
      plVar1 = alStack_48;
      FUN_00699214(plVar1,&UNK_00914b63);
      FUN_00555478();
      FUN_00682fec();
      FUN_00699298();
      lVar2 = *(long *)(unaff_x19 + 8) + 0x18;
      FUN_00555478(plVar1,lVar2);
      FUN_005558a0(alStack_48);
      func_0x0069b0dc();
      _strlen(lVar2);
      func_0x0069aff0();
      FUN_00554ab4();
      return plVar1;
    }
    func_0x0069b0d0();
    FUN_0069b200();
  }
  return param_1;
}



/* Entry: 00699214; end: 00699243;  */

void FUN_00699214(undefined8 param_1,undefined8 param_2)

{
  func_0x0069b0dc();
  _strlen(param_2);
  func_0x0069aff0();
  FUN_00554ab4();
  return;
}



/* Entry: 00699244; end: 0069924b;  */

void FUN_00699244(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar2 = param_1;
  FUN_0069b80c();
  lStack_48 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  FUN_0068b260();
  lVar1 = lStack_40;
  for (lVar3 = lStack_48; lVar3 != lVar1; lVar3 = lVar3 + 8) {
    func_0x0069be68();
    FUN_0068a7dc();
  }
  if ((*(byte *)(param_1 + (ulong)*(uint *)(lVar2 + 0x24)) & 1) != 0) {
    func_0x0069be68();
    func_0x006895cc();
    FUN_0066bdb8();
  }
  FUN_00666dd0(&lStack_48);
  return;
}



/* Entry: 0069924c; end: 00699297;  */

void FUN_0069924c(void)

{
  undefined1 auStack_38 [24];
  
  func_0x0069b0dc();
  FUN_00425cb4(auStack_38,&UNK_00914ba7);
  FUN_0069bb4c();
  func_0x0069b0b4();
  return;
}



/* Entry: 00699298; end: 006992ab;  */

undefined1  [16] FUN_00699298(long param_1)

{
  undefined1 auVar1 [16];
  long lStack_28;
  
  func_0x0069af04();
  lStack_28 = *(long *)(param_1 + 0x30);
  if (lStack_28 != 0) {
    if (*(code **)(param_1 + 0x48) != (code *)0x0) {
      (**(code **)(param_1 + 0x48))();
    }
    if (**(int **)(lStack_28 + 0x18) != 0xdd) {
      FUN_0069a1a8(*(int **)(lStack_28 + 0x18),&lStack_28);
    }
  }
  auVar1._8_8_ = *(undefined8 *)(param_1 + 0x38);
  auVar1._0_8_ = *(undefined8 *)(param_1 + 0x40);
  return auVar1;
}



/* Entry: 006992ac; end: 006992ff;  */

undefined1  [16] FUN_006992ac(long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    if (*(code **)(param_1 + 0x48) != (code *)0x0) {
      (**(code **)(param_1 + 0x48))();
    }
    if (**(int **)(lVar1 + 0x18) != 0xdd) {
      lStack_28 = lVar1;
      FUN_0069a1a8(*(int **)(lVar1 + 0x18),&lStack_28);
    }
  }
  auVar2._8_8_ = *(undefined8 *)(param_1 + 0x38);
  auVar2._0_8_ = *(undefined8 *)(param_1 + 0x40);
  return auVar2;
}



/* Entry: 00699300; end: 00699303;  */

undefined8 FUN_00699300(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puStack_68;
  
  lVar1 = param_1;
  FUN_00699298();
  FUN_00699298(param_1);
  puStack_68 = (undefined8 *)0x0;
  if (*(char *)(*(long *)(lVar1 + 0x20) + 0x53) == '\x01') {
    for (lVar2 = 0; lVar2 < *(int *)(lVar1 + 4); lVar2 = lVar2 + 1) {
      func_0x006ab158();
    }
  }
  else {
    func_0x006aabdc();
    FUN_0068b260();
  }
  for (; puStack_68 != (undefined8 *)0x0; puStack_68 = puStack_68 + 1) {
    func_0x006aabe8(*puStack_68);
    FUN_006a6f40();
  }
  if (*(char *)(*(long *)(lVar1 + 0x20) + 0x50) == '\x01') {
    func_0x006aabdc();
    FUN_006895b0();
    func_0x006aaf10();
    FUN_006a5c08();
  }
  else {
    func_0x006aabdc();
    FUN_006895b0();
    func_0x006aaf10();
    FUN_006a5a40();
  }
  func_0x006aac8c();
  return param_3;
}



/* Entry: 00699304; end: 00699373;  */

long FUN_00699304(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  FUN_006a8f04();
  lVar2 = lVar1;
  func_0x0069aef4();
  *(int *)(param_1 + (ulong)*(uint *)(lVar2 + 0x18)) = (int)lVar1;
  return lVar1;
}



/* Entry: 00699374; end: 00699387;  */

long FUN_00699374(long param_1,long param_2,undefined4 *param_3)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *param_3 = (int)param_2;
    return param_2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_006a480c();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_006a5cc8();
  *param_3 = (int)(param_1 + param_2);
  return param_1 + param_2;
}



/* Entry: 00699388; end: 00699447;  */

void FUN_00699388(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0069af04();
                    /* WARNING: Could not recover jumptable at 0x006993b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x28) + 0x18))(param_1);
  return;
}



/* Entry: 00699448; end: 006994a3;  */

void FUN_00699448(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_0069924c(param_2,&uStack_38);
  FUN_0066855c(param_1,&uStack_38,", ",2);
  func_0x00459128(&uStack_38);
  return;
}



/* Entry: 006994a4; end: 006994c7;  */

undefined8 * FUN_006994a4(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  undefined8 **ppuVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x19;
  long unaff_x20;
  undefined8 **ppuVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  byte bVar17;
  uint6 uVar18;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  undefined8 uVar19;
  byte bVar25;
  undefined8 *puStack_90;
  long lStack_88;
  
  uVar7 = param_1;
  FUN_006994c8();
  func_0x0069b0dc();
  puVar6 = (undefined8 *)(uVar7 + 0x68);
  puVar12 = puVar6;
  puStack_90 = puVar6;
  FUN_00567614();
  func_0x0069aff0();
  FUN_00699f7c();
  ppuVar4 = &puStack_90;
  FUN_00666628();
  if (((param_1 & 1) == 0) || (puVar12 == (undefined8 *)0x0)) {
    ppuVar11 = *(undefined8 ***)(*(long *)(unaff_x19 + 0x10) + 0x18);
    func_0x006559c0();
    if (ppuVar11 == ppuVar4) {
      puVar13 = *(undefined8 **)(*(long *)(unaff_x19 + 0x10) + 8);
      lVar14 = (long)*(char *)((long)puVar13 + 0x17);
      puVar12 = puVar13;
      if (lVar14 < 0) {
        puVar12 = (undefined8 *)*puVar13;
        lVar14 = puVar13[1];
      }
      Hint_Prefetch(*(undefined8 *)(unaff_x20 + 8),0,2,0);
      ppuVar4 = &puStack_90;
      puStack_90 = puVar12;
      lStack_88 = lVar14;
      func_0x006665f0(*(undefined8 *)(unaff_x20 + 8));
      lVar8 = 0;
      lVar1 = *(long *)(unaff_x20 + 0x10);
      uVar2 = *(ulong *)(unaff_x20 + 0x18);
      uVar9 = *(ulong *)(unaff_x20 + 8);
      uVar7 = uVar9 >> 0xc ^ (ulong)ppuVar4 >> 7;
      bVar3 = (byte)ppuVar4;
      uVar18 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3)))))
               & 0x7f7f7f7f7f7f;
      while( true ) {
        uVar7 = uVar7 & uVar2;
        uVar19 = *(undefined8 *)(uVar9 + uVar7);
        cVar20 = (char)((ulong)uVar19 >> 8);
        cVar21 = (char)((ulong)uVar19 >> 0x10);
        cVar22 = (char)((ulong)uVar19 >> 0x18);
        cVar23 = (char)((ulong)uVar19 >> 0x20);
        cVar24 = (char)((ulong)uVar19 >> 0x28);
        bVar17 = (byte)((ulong)uVar19 >> 0x30);
        bVar25 = (byte)((ulong)uVar19 >> 0x38);
        for (uVar10 = CONCAT17(-(bVar25 == (bVar3 & 0x7f)),
                               CONCAT16(-(bVar17 == (bVar3 & 0x7f)),
                                        CONCAT15(-(cVar24 == (char)(uVar18 >> 0x28)),
                                                 CONCAT14(-(cVar23 == (char)(uVar18 >> 0x20)),
                                                          CONCAT13(-(cVar22 ==
                                                                    (char)(uVar18 >> 0x18)),
                                                                   CONCAT12(-(cVar21 ==
                                                                             (char)(uVar18 >> 0x10))
                                                                            ,CONCAT11(-(cVar20 ==
                                                                                       (char)(uVar18
                                                                                             >> 8)),
                                                                                      -((char)uVar19
                                                                                       == (char)
                                                  uVar18)))))))) & 0x8080808080808080; uVar10 != 0;
            uVar10 = uVar10 - 1 & uVar10) {
          uVar5 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar16 = uVar7 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar2;
          uVar15 = *(ulong *)(*(long *)(lVar1 + uVar16 * 8) + 0x10);
          uVar5 = uVar15;
          _strlen();
          func_0x00465a14(uVar15,uVar5,puVar12,lVar14);
          if ((uVar15 & 1) != 0) {
            puVar12 = *(undefined8 **)(*(long *)(unaff_x20 + 0x10) + uVar16 * 8);
            if (puVar12 != (undefined8 *)0x0) {
              puStack_90 = puVar6;
              FUN_00567528(puVar6);
              func_0x0069aff0();
              FUN_00699f7c();
              if ((uVar5 & 1) == 0) {
                FUN_0068fa84(puVar12);
                func_0x0069aff0();
                FUN_00699f7c();
                puVar6 = puVar12;
              }
              FUN_0066723c(&puStack_90);
              return puVar6;
            }
            goto LAB_0069960c;
          }
        }
        bVar17 = NEON_umaxv(CONCAT17(-(bVar25 == 0x80),
                                     CONCAT16(-(bVar17 == 0x80),
                                              CONCAT15(-(cVar24 == -0x80),
                                                       CONCAT14(-(cVar23 == -0x80),
                                                                CONCAT13(-(cVar22 == -0x80),
                                                                         CONCAT12(-(cVar21 == -0x80)
                                                                                  ,CONCAT11(-(cVar20
                                                                                             == 
                                                  -0x80),-((char)uVar19 == -0x80)))))))),1);
        if ((bVar17 & 1) != 0) break;
        lVar8 = lVar8 + 8;
        uVar7 = lVar8 + uVar7;
      }
    }
LAB_0069960c:
    puVar12 = (undefined8 *)0x0;
  }
  return puVar12;
}



/* Entry: 006994c8; end: 0069959b;  */

qword * FUN_006994c8(void)

{
  int iVar1;
  qword *pqVar2;
  
  if ((bRam0000000000b6c898 & 1) == 0) {
    iVar1 = 0xb6c898;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      pqVar2 = &section_00000068.size;
      __Znwm();
      *pqVar2 = (qword)&PTR_FUN_00a0f400;
      pqVar2[1] = (qword)&UNK_00811030;
      pqVar2[2] = 0;
      pqVar2[3] = 0;
      pqVar2[4] = 0;
      pqVar2[5] = (qword)&PTR_FUN_00a0ef08;
      pqVar2[6] = 0;
      pqVar2[8] = (qword)&UNK_00811030;
      pqVar2[10] = 0;
      pqVar2[9] = 0;
      pqVar2[0xc] = 0;
      pqVar2[0xb] = 0;
      pqVar2[0xd] = 0;
      pqVar2[0xe] = (qword)&UNK_00811030;
      pqVar2[0x10] = 0;
      pqVar2[0x11] = 0;
      pqVar2[0xf] = 0;
      *(undefined1 *)(pqVar2 + 7) = 1;
      FUN_0054a414(FUN_00699c24,pqVar2);
      pqRam0000000000b6c890 = pqVar2;
      ___cxa_guard_release(0xb6c898);
    }
  }
  return pqRam0000000000b6c890;
}



/* Entry: 0069959c; end: 00699783;  */

undefined8 * FUN_0069959c(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  undefined8 **ppuVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x19;
  long unaff_x20;
  undefined8 **ppuVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  byte bVar17;
  uint6 uVar18;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  undefined8 uVar19;
  byte bVar25;
  undefined8 *puStack_90;
  long lStack_88;
  
  func_0x0069b0dc();
  puVar6 = (undefined8 *)(param_1 + 0x68);
  puVar12 = puVar6;
  puStack_90 = puVar6;
  FUN_00567614();
  func_0x0069aff0();
  FUN_00699f7c();
  ppuVar4 = &puStack_90;
  FUN_00666628();
  if (((param_2 & 1) == 0) || (puVar12 == (undefined8 *)0x0)) {
    ppuVar11 = *(undefined8 ***)(*(long *)(unaff_x19 + 0x10) + 0x18);
    func_0x006559c0();
    if (ppuVar11 == ppuVar4) {
      puVar13 = *(undefined8 **)(*(long *)(unaff_x19 + 0x10) + 8);
      lVar14 = (long)*(char *)((long)puVar13 + 0x17);
      puVar12 = puVar13;
      if (lVar14 < 0) {
        puVar12 = (undefined8 *)*puVar13;
        lVar14 = puVar13[1];
      }
      Hint_Prefetch(*(undefined8 *)(unaff_x20 + 8),0,2,0);
      ppuVar4 = &puStack_90;
      puStack_90 = puVar12;
      lStack_88 = lVar14;
      func_0x006665f0(*(undefined8 *)(unaff_x20 + 8));
      lVar8 = 0;
      lVar1 = *(long *)(unaff_x20 + 0x10);
      uVar2 = *(ulong *)(unaff_x20 + 0x18);
      uVar9 = *(ulong *)(unaff_x20 + 8);
      uVar7 = uVar9 >> 0xc ^ (ulong)ppuVar4 >> 7;
      bVar3 = (byte)ppuVar4;
      uVar18 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3)))))
               & 0x7f7f7f7f7f7f;
      while( true ) {
        uVar7 = uVar7 & uVar2;
        uVar19 = *(undefined8 *)(uVar9 + uVar7);
        cVar20 = (char)((ulong)uVar19 >> 8);
        cVar21 = (char)((ulong)uVar19 >> 0x10);
        cVar22 = (char)((ulong)uVar19 >> 0x18);
        cVar23 = (char)((ulong)uVar19 >> 0x20);
        cVar24 = (char)((ulong)uVar19 >> 0x28);
        bVar17 = (byte)((ulong)uVar19 >> 0x30);
        bVar25 = (byte)((ulong)uVar19 >> 0x38);
        for (uVar10 = CONCAT17(-(bVar25 == (bVar3 & 0x7f)),
                               CONCAT16(-(bVar17 == (bVar3 & 0x7f)),
                                        CONCAT15(-(cVar24 == (char)(uVar18 >> 0x28)),
                                                 CONCAT14(-(cVar23 == (char)(uVar18 >> 0x20)),
                                                          CONCAT13(-(cVar22 ==
                                                                    (char)(uVar18 >> 0x18)),
                                                                   CONCAT12(-(cVar21 ==
                                                                             (char)(uVar18 >> 0x10))
                                                                            ,CONCAT11(-(cVar20 ==
                                                                                       (char)(uVar18
                                                                                             >> 8)),
                                                                                      -((char)uVar19
                                                                                       == (char)
                                                  uVar18)))))))) & 0x8080808080808080; uVar10 != 0;
            uVar10 = uVar10 - 1 & uVar10) {
          uVar5 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar16 = uVar7 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar2;
          uVar15 = *(ulong *)(*(long *)(lVar1 + uVar16 * 8) + 0x10);
          uVar5 = uVar15;
          _strlen();
          func_0x00465a14(uVar15,uVar5,puVar12,lVar14);
          if ((uVar15 & 1) != 0) {
            puVar12 = *(undefined8 **)(*(long *)(unaff_x20 + 0x10) + uVar16 * 8);
            if (puVar12 != (undefined8 *)0x0) {
              puStack_90 = puVar6;
              FUN_00567528(puVar6);
              func_0x0069aff0();
              FUN_00699f7c();
              if ((uVar5 & 1) == 0) {
                FUN_0068fa84(puVar12);
                func_0x0069aff0();
                FUN_00699f7c();
                puVar6 = puVar12;
              }
              FUN_0066723c(&puStack_90);
              return puVar6;
            }
            goto LAB_0069960c;
          }
        }
        bVar17 = NEON_umaxv(CONCAT17(-(bVar25 == 0x80),
                                     CONCAT16(-(bVar17 == 0x80),
                                              CONCAT15(-(cVar24 == -0x80),
                                                       CONCAT14(-(cVar23 == -0x80),
                                                                CONCAT13(-(cVar22 == -0x80),
                                                                         CONCAT12(-(cVar21 == -0x80)
                                                                                  ,CONCAT11(-(cVar20
                                                                                             == 
                                                  -0x80),-((char)uVar19 == -0x80)))))))),1);
        if ((bVar17 & 1) != 0) break;
        lVar8 = lVar8 + 8;
        uVar7 = lVar8 + uVar7;
      }
    }
LAB_0069960c:
    puVar12 = (undefined8 *)0x0;
  }
  return puVar12;
}



/* Entry: 00699784; end: 00699917;  */

void FUN_00699784(ulong param_1)

{
  long *plVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  byte bVar18;
  uint6 uVar19;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  undefined8 uVar20;
  byte bVar26;
  undefined1 auStack_90 [16];
  
  uVar3 = param_1;
  FUN_006994c8();
  puVar14 = (ulong *)(uVar3 + 8);
  Hint_Prefetch(*puVar14,0,2,0);
  uVar4 = param_1;
  FUN_0069a050(*puVar14);
  lVar17 = 0;
  uVar12 = *puVar14;
  uVar13 = *(ulong *)(uVar3 + 0x18);
  uVar9 = uVar12 >> 0xc ^ uVar4 >> 7;
  bVar2 = (byte)uVar4;
  uVar19 = CONCAT15(bVar2,CONCAT14(bVar2,CONCAT13(bVar2,CONCAT12(bVar2,CONCAT11(bVar2,bVar2))))) &
           0x7f7f7f7f7f7f;
  do {
    uVar9 = uVar9 & uVar13;
    uVar20 = *(undefined8 *)(uVar12 + uVar9);
    cVar21 = (char)((ulong)uVar20 >> 8);
    cVar22 = (char)((ulong)uVar20 >> 0x10);
    cVar23 = (char)((ulong)uVar20 >> 0x18);
    cVar24 = (char)((ulong)uVar20 >> 0x20);
    cVar25 = (char)((ulong)uVar20 >> 0x28);
    bVar18 = (byte)((ulong)uVar20 >> 0x30);
    bVar26 = (byte)((ulong)uVar20 >> 0x38);
    for (uVar11 = CONCAT17(-(bVar26 == (bVar2 & 0x7f)),
                           CONCAT16(-(bVar18 == (bVar2 & 0x7f)),
                                    CONCAT15(-(cVar25 == (char)(uVar19 >> 0x28)),
                                             CONCAT14(-(cVar24 == (char)(uVar19 >> 0x20)),
                                                      CONCAT13(-(cVar23 == (char)(uVar19 >> 0x18)),
                                                               CONCAT12(-(cVar22 ==
                                                                         (char)(uVar19 >> 0x10)),
                                                                        CONCAT11(-(cVar21 ==
                                                                                  (char)(uVar19 >> 8
                                                                                        )),
                                                                                 -((char)uVar20 ==
                                                                                  (char)uVar19))))))
                                   )) & 0x8080808080808080; uVar11 != 0;
        uVar11 = uVar11 - 1 & uVar11) {
      uVar10 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = *(ulong *)(*(long *)(uVar3 + 0x10) +
                         (uVar9 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uVar13) *
                         8);
      if (uVar10 == param_1) {
LAB_006998b0:
        func_0x0069b108();
        FUN_0077670c();
        puVar6 = auStack_90;
        FUN_005512e8(puVar6,&UNK_00914bd4);
        param_1 = param_1 + 0x10;
        FUN_0055130c();
        func_0x0069af60();
        puVar7 = puVar6;
        uVar9 = param_1;
        FUN_006994c8();
        puVar8 = puVar7 + 0x68;
        FUN_005685a0();
        func_0x0069b19c();
        if ((uVar9 & 1) != 0) {
          plVar1 = (long *)(*(long *)(puVar7 + 0x78) + (long)puVar8 * 0x10);
          *plVar1 = (long)puVar6;
          plVar1[1] = param_1;
        }
        return;
      }
      uVar15 = *(ulong *)(uVar10 + 0x10);
      uVar10 = uVar15;
      _strlen(uVar15);
      uVar16 = *(undefined8 *)(param_1 + 0x10);
      uVar5 = uVar16;
      _strlen(uVar16);
      func_0x00465a14(uVar15,uVar10,uVar16,uVar5);
      if ((uVar15 & 1) != 0) goto LAB_006998b0;
    }
    bVar18 = NEON_umaxv(CONCAT17(-(bVar26 == 0x80),
                                 CONCAT16(-(bVar18 == 0x80),
                                          CONCAT15(-(cVar25 == -0x80),
                                                   CONCAT14(-(cVar24 == -0x80),
                                                            CONCAT13(-(cVar23 == -0x80),
                                                                     CONCAT12(-(cVar22 == -0x80),
                                                                              CONCAT11(-(cVar21 ==
                                                                                        -0x80),-((
                                                  char)uVar20 == -0x80)))))))),1);
    if ((bVar18 & 1) != 0) {
      FUN_0069a080(puVar14,uVar4);
      *(ulong *)(*(long *)(uVar3 + 0x10) + (long)puVar14 * 8) = param_1;
      return;
    }
    lVar17 = lVar17 + 8;
    uVar9 = lVar17 + uVar9;
  } while( true );
}



/* Entry: 00699918; end: 00699973;  */

void FUN_00699918(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = (uint)param_2;
  lVar2 = param_1;
  FUN_006994c8();
  lVar3 = lVar2 + 0x68;
  FUN_005685a0();
  func_0x0069b19c();
  if ((uVar4 & 1) != 0) {
    plVar1 = (long *)(*(long *)(lVar2 + 0x78) + lVar3 * 0x10);
    *plVar1 = param_1;
    plVar1[1] = param_2;
  }
  return;
}



/* Entry: 00699974; end: 00699b7f;  */

void FUN_00699974(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  ulong extraout_x9_04;
  ulong extraout_x9_05;
  ulong extraout_x9_06;
  ulong extraout_x9_07;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  if ((*(byte *)((long)param_2 + 1) >> 5 & 1) != 0) {
    puVar2 = param_2;
    FUN_00656c60();
    switch((int)puVar2) {
    case 1:
    case 8:
      FUN_00699b80();
      return;
    case 2:
      iVar1 = 0xb63d18;
      func_0x0069b048();
      if ((extraout_x9_01 & 1) != 0) {
        return;
      }
      func_0x0069aed8();
      if (iVar1 == 0) {
        return;
      }
      ppuVar3 = &PTR_DAT_00a0f658;
      break;
    case 3:
      iVar1 = 0xb63d08;
      func_0x0069b048();
      if ((extraout_x9_02 & 1) != 0) {
        return;
      }
      func_0x0069aed8();
      if (iVar1 == 0) {
        return;
      }
      ppuVar3 = &PTR_DAT_00a0f580;
      break;
    case 4:
      iVar1 = 0xb63d28;
      func_0x0069b048();
      if ((extraout_x9 & 1) != 0) {
        return;
      }
      func_0x0069aed8();
      if (iVar1 == 0) {
        return;
      }
      ppuVar3 = &PTR_DAT_00a0f730;
      break;
    case 5:
      iVar1 = 0xb63d48;
      func_0x0069b048();
      if ((extraout_x9_04 & 1) != 0) {
        return;
      }
      func_0x0069aed8();
      if (iVar1 == 0) {
        return;
      }
      ppuVar3 = &PTR_DAT_00a0f8e0;
      break;
    case 6:
      iVar1 = 0xb63d38;
      func_0x0069b048();
      if ((extraout_x9_05 & 1) != 0) {
        return;
      }
      func_0x0069aed8();
      if (iVar1 == 0) {
        return;
      }
      ppuVar3 = &PTR_DAT_00a0f808;
      break;
    case 7:
      iVar1 = 0xb63d58;
      func_0x0069b048();
      if ((extraout_x9_03 & 1) != 0) {
        return;
      }
      func_0x0069aed8();
      if (iVar1 == 0) {
        return;
      }
      ppuVar3 = &PTR_DAT_00a0f9b8;
      break;
    case 9:
      iVar1 = 0xb63d68;
      func_0x0069b048();
      if ((extraout_x9_06 & 1) != 0) {
        return;
      }
      func_0x0069aed8();
      if (iVar1 == 0) {
        return;
      }
      ppuVar3 = &PTR_DAT_00a0fa90;
      break;
    case 10:
      puVar2 = param_2;
      func_0x006595dc();
      if ((int)puVar2 == 0) {
        iVar1 = 0xb63d88;
        func_0x0069b048();
        if ((extraout_x9_07 & 1) != 0) {
          return;
        }
        func_0x0069aed8();
        if (iVar1 == 0) {
          return;
        }
        ppuVar3 = &PTR_DAT_00a0fc48;
      }
      else {
        iVar1 = 0xb63d78;
        func_0x0069b048();
        if ((extraout_x9_00 & 1) != 0) {
          return;
        }
        func_0x0069aed8();
        if (iVar1 == 0) {
          return;
        }
        ppuVar3 = &PTR_FUN_00a0fb70;
      }
      break;
    default:
      func_0x0069b108();
      FUN_0077670c();
      func_0x0068300c(auStack_30,&UNK_00914bbd);
      goto LAB_00699b7c;
    }
    *param_2 = ppuVar3;
    ___cxa_guard_release(param_2 + 1);
    return;
  }
  FUN_00533884(auStack_40,&UNK_00914ba8);
  func_0x0069b108();
  FUN_00776794();
LAB_00699b7c:
  func_0x0069af60();
  if ((bRam0000000000b63d00 & 1) == 0) {
    iVar1 = 0xb63d00;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ppuRam0000000000b63cf8 = &PTR_FUN_00a0f480;
                    /* WARNING: Could not recover jumptable at 0x0077a114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_00998e68)(0xb63d00);
      return;
    }
  }
  return;
}



/* Entry: 00699b80; end: 00699bc7;  */

void FUN_00699b80(void)

{
  int iVar1;
  
  if ((bRam0000000000b63d00 & 1) == 0) {
    iVar1 = 0xb63d00;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ppuRam0000000000b63cf8 = &PTR_FUN_00a0f480;
                    /* WARNING: Could not recover jumptable at 0x0077a114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_00998e68)(0xb63d00);
      return;
    }
  }
  return;
}



/* Entry: 00699bc8; end: 00699c23;  */

void FUN_00699bc8(ulong param_1)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  int iVar4;
  long lVar5;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long lVar6;
  
  func_0x0069afc8();
  iVar4 = (int)param_1;
  if (((param_1 & 1) != 0) || (func_0x0069b0e8(), iVar4 == 0)) {
    lVar6 = *unaff_x20;
    lVar5 = lVar6;
    FUN_0068f044();
    *(long *)(lVar6 + 0x68) = lVar5;
    do {
      uVar1 = *unaff_x19;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
      if (bVar3) {
        *unaff_x19 = 0xdd;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    func_0x0069b1d8(uVar1);
    if ((bool)in_ZR) {
      func_0x0069b17c();
    }
  }
  return;
}



/* Entry: 00699c24; end: 00699c3b;  */

void FUN_00699c24(long param_1)

{
  if (param_1 != 0) {
    FUN_00699c3c();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00699c3c; end: 00699cb3;  */

long FUN_00699c3c(long param_1)

{
  if (*(long *)(param_1 + 0x80) != 0) {
    __ZdlPv(*(long *)(param_1 + 0x70) + -8);
  }
  FUN_00567000(param_1 + 0x68);
  FUN_006862fc(param_1 + 0x28);
  func_0x00699c84(param_1 + 8);
  return param_1;
}



/* Entry: 00699cb4; end: 00699cc7;  */

void FUN_00699cb4(void)

{
  FUN_00699c3c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00699cc8; end: 00699d73;  */

ulong FUN_00699cc8(ulong param_1,ulong param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lStack_40;
  ulong uStack_38;
  
  uVar4 = param_1;
  uStack_38 = param_2;
  FUN_0069959c();
  if (uVar4 == 0) {
    uVar3 = *(ulong *)(*(long *)(param_2 + 0x10) + 0x18);
    func_0x006559c0();
    if (uVar3 == uVar4) {
      uVar4 = param_1 + 0x28;
      FUN_006863f0();
      lVar2 = param_1 + 0x68;
      lStack_40 = lVar2;
      FUN_00567528();
      func_0x0069b19c();
      puVar1 = (ulong *)(*(long *)(param_1 + 0x78) + lVar2 * 0x10);
      if ((param_2 & 1) != 0) {
        *puVar1 = uStack_38;
        puVar1[1] = 0;
      }
      puVar1[1] = uVar4;
      FUN_0066723c(&lStack_40);
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}



/* Entry: 00699d74; end: 00699edb;  */

void FUN_00699d74(ulong *param_1,long *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  undefined8 uVar8;
  byte bVar14;
  
  Hint_Prefetch(*param_1,0,2,0);
  puVar2 = param_1;
  FUN_0066e1a4(*param_1);
  lVar3 = 0;
  uVar5 = *param_1 >> 0xc ^ (ulong)puVar2 >> 7;
  bVar4 = (byte)puVar2 & 0x7f;
  while( true ) {
    uVar5 = uVar5 & param_1[2];
    uVar8 = *(undefined8 *)(*param_1 + uVar5);
    bVar7 = (byte)((ulong)uVar8 >> 8);
    bVar9 = (byte)((ulong)uVar8 >> 0x10);
    bVar10 = (byte)((ulong)uVar8 >> 0x18);
    bVar11 = (byte)((ulong)uVar8 >> 0x20);
    bVar12 = (byte)((ulong)uVar8 >> 0x28);
    bVar13 = (byte)((ulong)uVar8 >> 0x30);
    bVar14 = (byte)((ulong)uVar8 >> 0x38);
    for (uVar6 = CONCAT17(-(bVar14 == bVar4),
                          CONCAT16(-(bVar13 == bVar4),
                                   CONCAT15(-(bVar12 == bVar4),
                                            CONCAT14(-(bVar11 == bVar4),
                                                     CONCAT13(-(bVar10 == bVar4),
                                                              CONCAT12(-(bVar9 == bVar4),
                                                                       CONCAT11(-(bVar7 == bVar4),
                                                                                -((byte)uVar8 ==
                                                                                 bVar4)))))))) &
                 0x8080808080808080; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      uVar1 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      if (*(long *)(param_1[1] +
                   (uVar5 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_1[2]) *
                   0x10) == *param_2) {
        return;
      }
    }
    bVar7 = NEON_umaxv(CONCAT17(-(bVar14 == 0x80),
                                CONCAT16(-(bVar13 == 0x80),
                                         CONCAT15(-(bVar12 == 0x80),
                                                  CONCAT14(-(bVar11 == 0x80),
                                                           CONCAT13(-(bVar10 == 0x80),
                                                                    CONCAT12(-(bVar9 == 0x80),
                                                                             CONCAT11(-(bVar7 == 
                                                  0x80),-((byte)uVar8 == 0x80)))))))),1);
    if ((bVar7 & 1) != 0) break;
    lVar3 = lVar3 + 8;
    uVar5 = lVar3 + uVar5;
  }
  func_0x00699e40(param_1);
  return;
}



/* Entry: 00699edc; end: 00699f6b;  */

void FUN_00699edc(long *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar1 = *param_1;
  puVar5 = (undefined8 *)param_1[1];
  lVar6 = param_1[2];
  param_1[2] = param_2;
  plVar3 = param_1;
  FUN_003b3200();
  lVar8 = param_1[1];
  for (lVar7 = 0; lVar6 != lVar7; lVar7 = lVar7 + 1) {
    plVar4 = plVar3;
    if (-1 < *(char *)(lVar1 + lVar7)) {
      func_0x0069b0d0();
      FUN_0066e1a4();
      plVar4 = param_1;
      func_0x00553d3c(param_1,plVar3);
      func_0x0069b068((uint)plVar3 & 0x7f);
      uVar9 = *puVar5;
      puVar2 = (undefined8 *)(lVar8 + (long)plVar4 * 0x10);
      puVar2[1] = puVar5[1];
      *puVar2 = uVar9;
    }
    puVar5 = puVar5 + 2;
    plVar3 = plVar4;
  }
  if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 00699f6c; end: 00699f7b;  */

void FUN_00699f6c(void)

{
  func_0x00675d0c();
  return;
}



/* Entry: 00699f7c; end: 0069a04f;  */

undefined1  [16] FUN_00699f7c(long param_1,long param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  byte bVar10;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  undefined8 uVar11;
  byte bVar17;
  undefined1 auVar18 [16];
  long lStack_28;
  
  puVar9 = (ulong *)(param_1 + 0x70);
  Hint_Prefetch(*puVar9,0,2,0);
  puVar1 = puVar9;
  lStack_28 = param_2;
  FUN_0066e1a4(*puVar9,puVar9,&lStack_28);
  lVar3 = 0;
  uVar4 = *puVar9;
  uVar6 = uVar4 >> 0xc ^ (ulong)puVar1 >> 7;
  bVar5 = (byte)puVar1 & 0x7f;
  while( true ) {
    uVar6 = uVar6 & *(ulong *)(param_1 + 0x80);
    uVar11 = *(undefined8 *)(uVar4 + uVar6);
    bVar10 = (byte)((ulong)uVar11 >> 8);
    bVar12 = (byte)((ulong)uVar11 >> 0x10);
    bVar13 = (byte)((ulong)uVar11 >> 0x18);
    bVar14 = (byte)((ulong)uVar11 >> 0x20);
    bVar15 = (byte)((ulong)uVar11 >> 0x28);
    bVar16 = (byte)((ulong)uVar11 >> 0x30);
    bVar17 = (byte)((ulong)uVar11 >> 0x38);
    for (uVar7 = CONCAT17(-(bVar17 == bVar5),
                          CONCAT16(-(bVar16 == bVar5),
                                   CONCAT15(-(bVar15 == bVar5),
                                            CONCAT14(-(bVar14 == bVar5),
                                                     CONCAT13(-(bVar13 == bVar5),
                                                              CONCAT12(-(bVar12 == bVar5),
                                                                       CONCAT11(-(bVar10 == bVar5),
                                                                                -((byte)uVar11 ==
                                                                                 bVar5)))))))) &
                 0x8080808080808080; uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
      uVar8 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar6 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) &
              *(ulong *)(param_1 + 0x80);
      if (*(long *)(*(long *)(param_1 + 0x78) + uVar8 * 0x10) == lStack_28) {
        if (uVar4 == 0) goto LAB_0069a040;
        uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x78) + uVar8 * 0x10 + 8);
        uVar2 = 1;
        goto LAB_0069a048;
      }
    }
    bVar10 = NEON_umaxv(CONCAT17(-(bVar17 == 0x80),
                                 CONCAT16(-(bVar16 == 0x80),
                                          CONCAT15(-(bVar15 == 0x80),
                                                   CONCAT14(-(bVar14 == 0x80),
                                                            CONCAT13(-(bVar13 == 0x80),
                                                                     CONCAT12(-(bVar12 == 0x80),
                                                                              CONCAT11(-(bVar10 ==
                                                                                        0x80),-((
                                                  byte)uVar11 == 0x80)))))))),1);
    if ((bVar10 & 1) != 0) break;
    lVar3 = lVar3 + 8;
    uVar6 = lVar3 + uVar6;
  }
LAB_0069a040:
  uVar11 = 0;
  uVar2 = 0;
LAB_0069a048:
  auVar18._8_8_ = uVar2;
  auVar18._0_8_ = uVar11;
  return auVar18;
}



/* Entry: 0069a050; end: 0069a07f;  */

void FUN_0069a050(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uStack_20 = uVar1;
  _strlen();
  uStack_18 = uVar1;
  func_0x006665f0(&uStack_20);
  return;
}



/* Entry: 0069a080; end: 0069a117;  */

void FUN_0069a080(long *param_1,undefined *param_2)

{
  long lVar1;
  undefined1 in_ZR;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 extraout_x8;
  long lVar5;
  ulong uVar6;
  ulong extraout_x8_00;
  long *unaff_x19;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  func_0x0069b128();
  func_0x00553d3c();
  lVar5 = *unaff_x19;
  if ((*(long *)(lVar5 + -8) == 0) && (in_ZR = *(char *)(lVar5 + (long)param_1) == -2, !(bool)in_ZR)
     ) {
    uVar6 = unaff_x19[2];
    bVar2 = 8 < uVar6;
    in_ZR = uVar6 == 9;
    param_1 = unaff_x19;
    if ((bVar2) && (func_0x0069b1b0(), uVar6 = extraout_x8_00, bVar2)) {
      param_2 = &UNK_00a0f450;
      FUN_00553d9c();
    }
    else {
      param_2 = (undefined *)(uVar6 << 1 | 1);
      FUN_0069a118();
    }
    func_0x0069b03c();
    lVar5 = *unaff_x19;
  }
  func_0x0069af10(lVar5);
  func_0x0069b1ec(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = *param_1;
  plVar7 = (long *)param_1[1];
  lVar8 = param_1[2];
  param_1[2] = (long)param_2;
  FUN_0066d34c();
  lVar9 = param_1[1];
  for (lVar5 = 0; lVar8 != lVar5; lVar5 = lVar5 + 1) {
    if (-1 < *(char *)(lVar1 + lVar5)) {
      lVar3 = *plVar7;
      FUN_0069a050();
      lVar4 = lVar3;
      func_0x0069b03c();
      func_0x0069b068((uint)lVar3 & 0x7f);
      *(long *)(lVar9 + lVar4 * 8) = *plVar7;
    }
    plVar7 = plVar7 + 1;
  }
  if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 0069a118; end: 0069a19f;  */

void FUN_0069a118(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = *param_1;
  plVar4 = (long *)param_1[1];
  lVar5 = param_1[2];
  param_1[2] = param_2;
  FUN_0066d34c();
  lVar7 = param_1[1];
  for (lVar6 = 0; lVar5 != lVar6; lVar6 = lVar6 + 1) {
    if (-1 < *(char *)(lVar1 + lVar6)) {
      lVar2 = *plVar4;
      FUN_0069a050();
      lVar3 = lVar2;
      func_0x0069b03c();
      func_0x0069b068((uint)lVar2 & 0x7f);
      *(long *)(lVar7 + lVar3 * 8) = *plVar4;
    }
    plVar4 = plVar4 + 1;
  }
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 0069a1a0; end: 0069a1a7;  */

void FUN_0069a1a0(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = *(undefined8 *)(*param_2 + 0x10);
  uStack_20 = uVar1;
  _strlen();
  uStack_18 = uVar1;
  func_0x006665f0(&uStack_20);
  return;
}



/* Entry: 0069a1a8; end: 0069a1fb;  */

void FUN_0069a1a8(ulong param_1)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0069afc8();
  iVar4 = (int)param_1;
  if (((param_1 & 1) != 0) || (func_0x0069b0e8(), iVar4 == 0)) {
    FUN_0068f828(*unaff_x20);
    do {
      uVar1 = *unaff_x19;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
      if (bVar3) {
        *unaff_x19 = 0xdd;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    func_0x0069b1d8(uVar1);
    if ((bool)in_ZR) {
      func_0x0069b17c();
    }
  }
  return;
}



/* Entry: 0069a1fc; end: 0069a21f;  */

bool FUN_0069a1fc(undefined8 param_1,int *param_2)

{
  return *param_2 == 0;
}



/* Entry: 0069a220; end: 0069a26b;  */

void FUN_0069a220(undefined4 param_1)

{
  code *extraout_x8;
  int unaff_w19;
  long unaff_x20;
  
  func_0x0069ae78();
  (*extraout_x8)();
  *(undefined4 *)(*(long *)(unaff_x20 + 8) + (long)unaff_w19 * 4) = param_1;
  return;
}



/* Entry: 0069a26c; end: 0069a27f;  */

void FUN_0069a26c(undefined8 param_1,int *param_2)

{
  *param_2 = *param_2 + -1;
  return;
}



/* Entry: 0069a280; end: 0069a2ab;  */

undefined1  [16] FUN_0069a280(long param_1,undefined1 *param_2,long param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  int extraout_w9;
  long extraout_x9;
  int extraout_w10;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uStack_30;
  long lStack_28;
  
  if (param_1 != param_3) {
    func_0x0069ae68();
    func_0x0069ae50();
    func_0x0069af60();
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_2;
    return auVar3 << 0x40;
  }
  puVar4 = &uStack_30;
  if (param_2 != param_4) {
    func_0x00692b18();
    if (extraout_w9 != 0) {
      func_0x006930f0();
    }
    func_0x00692c38();
    lStack_28 = extraout_x8;
    if (extraout_w10 != 0) {
      lStack_28 = *(long *)(extraout_x8 + -8);
    }
    if (extraout_x9 == lStack_28) {
      func_0x00692cd0();
      puVar1 = param_2 + 0x10;
      puVar5 = param_4;
      for (; param_2 != puVar1; param_2 = param_2 + 1) {
        uVar2 = *param_2;
        *param_2 = *puVar5;
        *puVar5 = uVar2;
        param_4 = param_4 + 1;
        puVar5 = puVar5 + 1;
      }
      auVar6._8_8_ = param_4;
      auVar6._0_8_ = puVar1;
      return auVar6;
    }
    uStack_30 = 0;
    func_0x006930fc();
    FUN_0048ebf4();
    func_0x00692cd0();
    FUN_00691d10();
    func_0x006930e4();
    func_0x00691d24();
    FUN_0048ed64(&uStack_30);
    param_2 = (undefined1 *)puVar4;
  }
  auVar7._8_8_ = param_4;
  auVar7._0_8_ = param_2;
  return auVar7;
}



/* Entry: 0069a2ac; end: 0069a2b3;  */

undefined8 FUN_0069a2ac(void)

{
  return 0;
}



/* Entry: 0069a2b4; end: 0069a2d3;  */

long FUN_0069a2b4(long *param_1)

{
  (**(code **)(*param_1 + 8))();
  return (long)(int)param_1;
}



/* Entry: 0069a2d4; end: 0069a32b;  */

undefined8 FUN_0069a2d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



/* Entry: 0069a32c; end: 0069a377;  */

void FUN_0069a32c(undefined4 param_1)

{
  code *extraout_x8;
  int unaff_w19;
  long unaff_x20;
  
  func_0x0069ae78();
  (*extraout_x8)();
  *(undefined4 *)(*(long *)(unaff_x20 + 8) + (long)unaff_w19 * 4) = param_1;
  return;
}



/* Entry: 0069a378; end: 0069a38b;  */

void FUN_0069a378(undefined8 param_1,int *param_2)

{
  *param_2 = *param_2 + -1;
  return;
}



/* Entry: 0069a38c; end: 0069a3b7;  */

undefined1  [16] FUN_0069a38c(long param_1,uint *param_2,long param_3,uint *param_4)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  long extraout_x8;
  int extraout_w9;
  long extraout_x9;
  int extraout_w10;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint auStack_30 [2];
  long lStack_28;
  
  if (param_1 != param_3) {
    func_0x0069ae68();
    func_0x0069ae50();
    func_0x0069af60();
    auVar6._4_4_ = 0;
    auVar6._0_4_ = *param_2;
    auVar6._8_8_ = param_2;
    return auVar6;
  }
  puVar2 = auStack_30;
  if (param_2 != param_4) {
    func_0x00692b18();
    if (extraout_w9 != 0) {
      func_0x006930f0();
    }
    func_0x00692c38();
    lStack_28 = extraout_x8;
    if (extraout_w10 != 0) {
      lStack_28 = *(long *)(extraout_x8 + -8);
    }
    if (extraout_x9 == lStack_28) {
      func_0x00692cd0();
      puVar2 = param_2 + 4;
      puVar3 = param_4;
      for (; param_2 != puVar2; param_2 = (uint *)((long)param_2 + 1)) {
        uVar1 = *param_2;
        *(char *)param_2 = (char)*puVar3;
        *(char *)puVar3 = (char)uVar1;
        param_4 = (uint *)((long)param_4 + 1);
        puVar3 = (uint *)((long)puVar3 + 1);
      }
      auVar4._8_8_ = param_4;
      auVar4._0_8_ = puVar2;
      return auVar4;
    }
    auStack_30[0] = 0;
    auStack_30[1] = 0;
    func_0x006930fc();
    FUN_004ead8c();
    func_0x00692cd0();
    func_0x00691d58();
    func_0x006930e4();
    func_0x00691d6c();
    FUN_004eb4cc(auStack_30);
    param_2 = puVar2;
  }
  auVar5._8_8_ = param_4;
  auVar5._0_8_ = param_2;
  return auVar5;
}



/* Entry: 0069a3b8; end: 0069a3e3;  */

undefined4 FUN_0069a3b8(undefined8 param_1,undefined4 *param_2)

{
  return *param_2;
}



/* Entry: 0069a3e4; end: 0069a42f;  */

void FUN_0069a3e4(undefined8 param_1)

{
  code *extraout_x8;
  int unaff_w19;
  long unaff_x20;
  
  func_0x0069ae78();
  (*extraout_x8)();
  *(undefined8 *)(*(long *)(unaff_x20 + 8) + (long)unaff_w19 * 8) = param_1;
  return;
}



/* Entry: 0069a430; end: 0069a443;  */

void FUN_0069a430(undefined8 param_1,int *param_2)

{
  *param_2 = *param_2 + -1;
  return;
}



/* Entry: 0069a444; end: 0069a46f;  */

undefined1  [16] FUN_0069a444(long param_1,undefined8 *param_2,long param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long extraout_x8;
  int extraout_w9;
  long extraout_x9;
  int extraout_w10;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uStack_30;
  long lStack_28;
  
  if (param_1 != param_3) {
    func_0x0069ae68();
    func_0x0069ae50();
    func_0x0069af60();
    auVar6._0_8_ = *param_2;
    auVar6._8_8_ = param_2;
    return auVar6;
  }
  puVar2 = &uStack_30;
  if (param_2 != param_4) {
    func_0x00692b18();
    if (extraout_w9 != 0) {
      func_0x006930f0();
    }
    func_0x00692c38();
    lStack_28 = extraout_x8;
    if (extraout_w10 != 0) {
      lStack_28 = *(long *)(extraout_x8 + -8);
    }
    if (extraout_x9 == lStack_28) {
      func_0x00692cd0();
      puVar2 = param_2 + 2;
      puVar3 = param_4;
      for (; param_2 != puVar2; param_2 = (undefined8 *)((long)param_2 + 1)) {
        uVar1 = *(undefined1 *)param_2;
        *(undefined1 *)param_2 = *(undefined1 *)puVar3;
        *(undefined1 *)puVar3 = uVar1;
        param_4 = (undefined8 *)((long)param_4 + 1);
        puVar3 = (undefined8 *)((long)puVar3 + 1);
      }
      auVar4._8_8_ = param_4;
      auVar4._0_8_ = puVar2;
      return auVar4;
    }
    uStack_30 = 0;
    func_0x006930fc();
    FUN_00488f08();
    func_0x00692cd0();
    func_0x00691d34();
    func_0x006930e4();
    func_0x00691d48();
    FUN_0048b2d0(&uStack_30);
    param_2 = puVar2;
  }
  auVar5._8_8_ = param_4;
  auVar5._0_8_ = param_2;
  return auVar5;
}



/* Entry: 0069a470; end: 0069a49f;  */

undefined8 FUN_0069a470(undefined8 param_1,undefined8 *param_2)

{
  return *param_2;
}



/* Entry: 0069a4a0; end: 0069a4eb;  */

void FUN_0069a4a0(undefined8 param_1)

{
  code *extraout_x8;
  int unaff_w19;
  long unaff_x20;
  
  func_0x0069ae78();
  (*extraout_x8)();
  *(undefined8 *)(*(long *)(unaff_x20 + 8) + (long)unaff_w19 * 8) = param_1;
  return;
}



/* Entry: 0069a4ec; end: 0069a4ff;  */

void FUN_0069a4ec(undefined8 param_1,int *param_2)

{
  *param_2 = *param_2 + -1;
  return;
}



/* Entry: 0069a500; end: 0069a52b;  */

undefined1  [16] FUN_0069a500(long param_1,undefined8 *param_2,long param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long extraout_x8;
  int extraout_w9;
  long extraout_x9;
  int extraout_w10;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uStack_30;
  long lStack_28;
  
  if (param_1 != param_3) {
    func_0x0069ae68();
    func_0x0069ae50();
    func_0x0069af60();
    auVar6._0_8_ = *param_2;
    auVar6._8_8_ = param_2;
    return auVar6;
  }
  puVar2 = &uStack_30;
  if (param_2 != param_4) {
    func_0x00692b18();
    if (extraout_w9 != 0) {
      func_0x006930f0();
    }
    func_0x00692c38();
    lStack_28 = extraout_x8;
    if (extraout_w10 != 0) {
      lStack_28 = *(long *)(extraout_x8 + -8);
    }
    if (extraout_x9 == lStack_28) {
      func_0x00692cd0();
      puVar2 = param_2 + 2;
      puVar3 = param_4;
      for (; param_2 != puVar2; param_2 = (undefined8 *)((long)param_2 + 1)) {
        uVar1 = *(undefined1 *)param_2;
        *(undefined1 *)param_2 = *(undefined1 *)puVar3;
        *(undefined1 *)puVar3 = uVar1;
        param_4 = (undefined8 *)((long)param_4 + 1);
        puVar3 = (undefined8 *)((long)puVar3 + 1);
      }
      auVar4._8_8_ = param_4;
      auVar4._0_8_ = puVar2;
      return auVar4;
    }
    uStack_30 = 0;
    func_0x006930fc();
    FUN_004df784();
    func_0x00692cd0();
    func_0x00691d7c();
    func_0x006930e4();
    func_0x00691d90();
    FUN_004dfa80(&uStack_30);
    param_2 = puVar2;
  }
  auVar5._8_8_ = param_4;
  auVar5._0_8_ = param_2;
  return auVar5;
}



/* Entry: 0069a52c; end: 0069a55b;  */

undefined8 FUN_0069a52c(undefined8 param_1,undefined8 *param_2)

{
  return *param_2;
}



/* Entry: 0069a55c; end: 0069a5a3;  */

void FUN_0069a55c(undefined4 param_1)

{
  code *extraout_x8;
  int unaff_w19;
  long unaff_x20;
  
  func_0x0069ae78();
  (*extraout_x8)();
  *(undefined4 *)(*(long *)(unaff_x20 + 8) + (long)unaff_w19 * 4) = param_1;
  return;
}



/* Entry: 0069a5a4; end: 0069a5cb;  */

void FUN_0069a5a4(undefined8 param_1,int *param_2)

{
  *param_2 = *param_2 + -1;
  return;
}



/* Entry: 0069a5cc; end: 0069a5f7;  */

undefined1 *
FUN_0069a5cc(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long extraout_x8;
  int extraout_w9;
  long extraout_x9;
  int extraout_w10;
  undefined8 uStack_30;
  long lStack_28;
  
  if (param_1 != param_3) {
    func_0x0069ae68();
    func_0x0069ae50();
    func_0x0069af60();
    return param_1;
  }
  puVar3 = &uStack_30;
  if (param_2 != param_4) {
    func_0x00692b18();
    if (extraout_w9 != 0) {
      func_0x006930f0();
    }
    func_0x00692c38();
    lStack_28 = extraout_x8;
    if (extraout_w10 != 0) {
      lStack_28 = *(long *)(extraout_x8 + -8);
    }
    if (extraout_x9 == lStack_28) {
      func_0x00692cd0();
      puVar1 = param_2 + 0x10;
      for (; param_2 != puVar1; param_2 = param_2 + 1) {
        uVar2 = *param_2;
        *param_2 = *param_4;
        *param_4 = uVar2;
        param_4 = param_4 + 1;
      }
      return puVar1;
    }
    uStack_30 = 0;
    func_0x006930fc();
    FUN_00535464();
    func_0x00692cd0();
    func_0x00691da0();
    func_0x006930e4();
    func_0x00691db4();
    FUN_00538dcc(&uStack_30);
    param_2 = (undefined1 *)puVar3;
  }
  return param_2;
}



/* Entry: 0069a5f8; end: 0069a627;  */

undefined4 FUN_0069a5f8(undefined8 param_1,undefined4 *param_2)

{
  return *param_2;
}



/* Entry: 0069a628; end: 0069a66f;  */

void FUN_0069a628(undefined8 param_1)

{
  code *extraout_x8;
  int unaff_w19;
  long unaff_x20;
  
  func_0x0069ae78();
  (*extraout_x8)();
  *(undefined8 *)(*(long *)(unaff_x20 + 8) + (long)unaff_w19 * 8) = param_1;
  return;
}



/* Entry: 0069a670; end: 0069a697;  */

void FUN_0069a670(undefined8 param_1,int *param_2)

{
  *param_2 = *param_2 + -1;
  return;
}



/* Entry: 0069a698; end: 0069a6c3;  */

undefined1 *
FUN_0069a698(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long extraout_x8;
  int extraout_w9;
  long extraout_x9;
  int extraout_w10;
  undefined8 uStack_30;
  long lStack_28;
  
  if (param_1 != param_3) {
    func_0x0069ae68();
    func_0x0069ae50();
    func_0x0069af60();
    return param_1;
  }
  puVar3 = &uStack_30;
  if (param_2 != param_4) {
    func_0x00692b18();
    if (extraout_w9 != 0) {
      func_0x006930f0();
    }
    func_0x00692c38();
    lStack_28 = extraout_x8;
    if (extraout_w10 != 0) {
      lStack_28 = *(long *)(extraout_x8 + -8);
    }
    if (extraout_x9 == lStack_28) {
      func_0x00692cd0();
      puVar1 = param_2 + 0x10;
      for (; param_2 != puVar1; param_2 = param_2 + 1) {
        uVar2 = *param_2;
        *param_2 = *param_4;
        *param_4 = uVar2;
        param_4 = param_4 + 1;
      }
      return puVar1;
    }
    uStack_30 = 0;
    func_0x006930fc();
    func_0x005354ac();
    func_0x00692cd0();
    func_0x00691dc4();
    func_0x006930e4();
    func_0x00691dd8();
    FUN_00538e10(&uStack_30);
    param_2 = (undefined1 *)puVar3;
  }
  return param_2;
}



/* Entry: 0069a6c4; end: 0069a6f3;  */

undefined8 FUN_0069a6c4(undefined8 param_1,undefined8 *param_2)

{
  return *param_2;
}



/* Entry: 0069a6f4; end: 0069a73f;  */

void FUN_0069a6f4(undefined1 param_1)

{
  code *extraout_x8;
  int unaff_w19;
  long unaff_x20;
  
  func_0x0069ae78();
  (*extraout_x8)();
  *(undefined1 *)(*(long *)(unaff_x20 + 8) + (long)unaff_w19) = param_1;
  return;
}



/* Entry: 0069a740; end: 0069a767;  */

void FUN_0069a740(undefined8 param_1,int *param_2)

{
  *param_2 = *param_2 + -1;
  return;
}



/* Entry: 0069a768; end: 0069a793;  */

undefined1  [16] FUN_0069a768(long param_1,byte *param_2,long param_3,byte *param_4)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  long extraout_x8;
  int extraout_w9;
  long extraout_x9;
  int extraout_w10;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  byte abStack_30 [8];
  long lStack_28;
  
  if (param_1 != param_3) {
    func_0x0069ae68();
    func_0x0069ae50();
    func_0x0069af60();
    auVar6._1_7_ = 0;
    auVar6[0] = *param_2;
    auVar6._8_8_ = param_2;
    return auVar6;
  }
  pbVar2 = abStack_30;
  if (param_2 != param_4) {
    func_0x00692b18();
    if (extraout_w9 != 0) {
      func_0x006930f0();
    }
    func_0x00692c38();
    lStack_28 = extraout_x8;
    if (extraout_w10 != 0) {
      lStack_28 = *(long *)(extraout_x8 + -8);
    }
    if (extraout_x9 == lStack_28) {
      func_0x00692cd0();
      pbVar2 = param_2 + 0x10;
      pbVar3 = param_4;
      for (; param_2 != pbVar2; param_2 = param_2 + 1) {
        bVar1 = *param_2;
        *param_2 = *pbVar3;
        *pbVar3 = bVar1;
        param_4 = param_4 + 1;
        pbVar3 = pbVar3 + 1;
      }
      auVar4._8_8_ = param_4;
      auVar4._0_8_ = pbVar2;
      return auVar4;
    }
    abStack_30[0] = 0;
    abStack_30[1] = 0;
    abStack_30[2] = 0;
    abStack_30[3] = 0;
    abStack_30[4] = 0;
    abStack_30[5] = 0;
    abStack_30[6] = 0;
    abStack_30[7] = 0;
    func_0x006930fc();
    func_0x005354f4();
    func_0x00692cd0();
    func_0x00691de8();
    func_0x006930e4();
    func_0x00691dfc();
    FUN_00538e54(abStack_30);
    param_2 = pbVar2;
  }
  auVar5._8_8_ = param_4;
  auVar5._0_8_ = param_2;
  return auVar5;
}



/* Entry: 0069a794; end: 0069a7c7;  */

undefined1 FUN_0069a794(undefined8 param_1,undefined1 *param_2)

{
  return *param_2;
}



/* Entry: 0069a7c8; end: 0069a893;  */

void FUN_0069a7c8(long *param_1,ulong *param_2,long param_3)

{
  long *plVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  ulong *extraout_x8_01;
  undefined8 unaff_x19;
  ulong *unaff_x20;
  ulong uVar4;
  
  plVar1 = param_1;
  func_0x0069aee4();
  (**(code **)(*param_1 + 0x90))(param_1,param_3,plVar1);
  uVar4 = param_2[2];
  if ((uVar4 == 0) && (puVar2 = param_2, FUN_0068808c(), (int)puVar2 == 0)) {
    puVar2 = param_2;
    if ((*param_2 & 1) != 0) {
      puVar2 = (ulong *)(*param_2 + 7);
    }
    uVar4 = param_2[1];
    puVar3 = param_2;
    FUN_0048cf58();
    if ((int)uVar4 < (int)puVar3) {
      uVar4 = puVar2[(int)param_2[1]];
      puVar3 = param_2;
      FUN_0048cf58();
      puVar2[(int)puVar3] = uVar4;
    }
    uVar4 = param_2[1];
    *(int *)(param_2 + 1) = (int)uVar4 + 1;
    puVar2[(int)uVar4] = (ulong)plVar1;
    uVar4 = *param_2;
    if ((uVar4 & 1) == 0) {
      return;
    }
    *(int *)(uVar4 - 1) = *(int *)(uVar4 - 1) + 1;
    return;
  }
  func_0x0069b0d0();
  func_0x0069b0dc();
  if ((param_3 != 0) && (uVar4 != 0)) {
    FUN_00550ffc(uVar4,unaff_x19,FUN_00533154);
  }
  if (*(int *)((long)unaff_x20 + 0xc) < (int)unaff_x20[1]) {
    FUN_0054cdf0(unaff_x20,1);
LAB_0069aa98:
    uVar4 = *unaff_x20;
  }
  else {
    puVar2 = unaff_x20;
    FUN_0068808c();
    uVar4 = unaff_x20[1];
    if ((int)puVar2 != 0) {
      func_0x0069b118(*unaff_x20);
      FUN_0048cf74(*extraout_x8,unaff_x20[2]);
      uVar4 = *unaff_x20;
      goto LAB_0069aad4;
    }
    puVar2 = unaff_x20;
    FUN_0048cf58();
    if ((int)uVar4 < (int)puVar2) {
      puVar2 = unaff_x20;
      if ((*unaff_x20 & 1) != 0) {
        puVar2 = (ulong *)(*unaff_x20 + (long)(int)unaff_x20[1] * 8 + 7);
      }
      uVar4 = *puVar2;
      FUN_0048cf58(unaff_x20);
      func_0x0069b118(*unaff_x20);
      *extraout_x8_01 = uVar4;
      goto LAB_0069aa98;
    }
    uVar4 = *unaff_x20;
    if ((uVar4 & 1) == 0) goto LAB_0069aad4;
  }
  *(int *)(uVar4 - 1) = *(int *)(uVar4 - 1) + 1;
LAB_0069aad4:
  *(int *)(unaff_x20 + 1) = (int)unaff_x20[1] + 1;
  func_0x0069b118(uVar4);
  *extraout_x8_00 = unaff_x19;
  return;
}



/* Entry: 0069a894; end: 0069a8a3;  */

void FUN_0069a894(undefined8 param_1,undefined8 *param_2)

{
  func_0x0053acb0();
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    *(undefined1 *)param_2 = 0;
    *(undefined1 *)((long)param_2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*param_2 = 0;
  param_2[1] = 0;
  return;
}



/* Entry: 0069a8a4; end: 0069aa1f;  */

undefined1  [16] FUN_0069a8a4(ulong *param_1,undefined1 *param_2,ulong *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  uint uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  int extraout_w8;
  undefined1 *puVar5;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  undefined1 *unaff_x20;
  ulong uVar6;
  uint uVar7;
  long unaff_x23;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auStack_88 [24];
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_1 != param_3) {
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    puVar3 = &uStack_70;
    puVar4 = param_2;
    FUN_0069ab48(puVar3,param_2);
    func_0x0069aff0(*(undefined8 *)(*param_3 + 8));
    (*extraout_x8)();
    uVar2 = (uint)puVar3;
    for (uVar7 = 0; (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) != uVar7; uVar7 = uVar7 + 1) {
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_58 = 0;
      func_0x0069aff0(*(undefined8 *)(*param_3 + 0x10));
      (*extraout_x8_00)();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_88,puVar3);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_58);
      puVar3 = param_1;
      puVar4 = param_2;
      FUN_0069ab6c(param_1,param_2,auStack_88);
      func_0x0069b0b4();
    }
    uVar7 = *(uint *)(param_2 + 8);
    func_0x0069aff0(*(undefined8 *)(*param_3 + 0x18));
    (*extraout_x8_01)();
    for (uVar6 = (ulong)(uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)); uVar6 != 0; uVar6 = uVar6 - 1)
    {
      func_0x0069aff0();
      FUN_0069ab6c();
    }
    puVar3 = &uStack_70;
    FUN_00437b14(puVar3);
    auVar10._8_8_ = puVar4;
    auVar10._0_8_ = puVar3;
    return auVar10;
  }
  if (param_2 == param_4) {
    auVar11._8_8_ = param_4;
    auVar11._0_8_ = param_2;
    return auVar11;
  }
  if (*(long *)(param_2 + 0x10) == *(long *)(param_4 + 0x10)) {
    puVar4 = param_2 + 0x10;
    puVar5 = param_4;
    for (; param_2 != puVar4; param_2 = param_2 + 1) {
      uVar1 = *param_2;
      *param_2 = *puVar5;
      *puVar5 = uVar1;
      param_4 = param_4 + 1;
      puVar5 = puVar5 + 1;
    }
    auVar8._8_8_ = param_4;
    auVar8._0_8_ = puVar4;
    return auVar8;
  }
  func_0x00692d80();
  func_0x00693510();
  if (extraout_w8 != 0) {
    param_2 = &stack0xffffffffffffffc8;
    FUN_0054d20c(param_2,unaff_x20);
    param_4 = unaff_x20;
  }
  func_0x00692cd0();
  func_0x00691e5c();
  func_0x00693354();
  if (unaff_x23 != 0) {
    param_2 = &stack0xffffffffffffffc8;
    FUN_00437b48(param_2);
  }
  auVar9._8_8_ = param_4;
  auVar9._0_8_ = param_2;
  return auVar9;
}



/* Entry: 0069aa20; end: 0069aa3f;  */

void FUN_0069aa20(void)

{
  dword *pdVar1;
  
  pdVar1 = &MACH_HEADER.flags;
  __Znwm();
  *(undefined8 *)(pdVar1 + 2) = 0;
  *(undefined8 *)(pdVar1 + 4) = 0;
  *(undefined8 *)pdVar1 = 0;
  return;
}



/* Entry: 0069aa40; end: 0069aa4b;  */

void FUN_0069aa40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00779c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__00998a38)
            (param_3);
  return;
}



/* Entry: 0069aa4c; end: 0069ab47;  */

void FUN_0069aa4c(undefined8 param_1,long param_2,long param_3)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  ulong *extraout_x8_01;
  undefined8 unaff_x19;
  ulong *unaff_x20;
  
  func_0x0069b0dc();
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_00550ffc(param_3);
  }
  if (*(int *)((long)unaff_x20 + 0xc) < (int)unaff_x20[1]) {
    FUN_0054cdf0();
LAB_0069aa98:
    uVar2 = *unaff_x20;
  }
  else {
    puVar1 = unaff_x20;
    FUN_0068808c();
    uVar2 = unaff_x20[1];
    if ((int)puVar1 != 0) {
      func_0x0069b118(*unaff_x20);
      FUN_0048cf74(*extraout_x8,unaff_x20[2]);
      uVar2 = *unaff_x20;
      goto LAB_0069aad4;
    }
    puVar1 = unaff_x20;
    FUN_0048cf58();
    if ((int)uVar2 < (int)puVar1) {
      puVar1 = unaff_x20;
      if ((*unaff_x20 & 1) != 0) {
        puVar1 = (ulong *)(*unaff_x20 + (long)(int)unaff_x20[1] * 8 + 7);
      }
      uVar2 = *puVar1;
      FUN_0048cf58();
      func_0x0069b118(*unaff_x20);
      *extraout_x8_01 = uVar2;
      goto LAB_0069aa98;
    }
    uVar2 = *unaff_x20;
    if ((uVar2 & 1) == 0) goto LAB_0069aad4;
  }
  *(int *)(uVar2 - 1) = *(int *)(uVar2 - 1) + 1;
LAB_0069aad4:
  *(int *)(unaff_x20 + 1) = (int)unaff_x20[1] + 1;
  func_0x0069b118(uVar2);
  *extraout_x8_00 = unaff_x19;
  return;
}



/* Entry: 0069ab48; end: 0069ab6b;  */

undefined1  [16] FUN_0069ab48(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  int extraout_w8;
  long *plVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long alStack_38 [3];
  
  if (param_1 == param_2) {
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = param_1;
    return auVar6;
  }
  if (param_1[2] != param_2[2]) {
    func_0x00692d80();
    func_0x00693510();
    if (extraout_w8 != 0) {
      param_1 = alStack_38;
      FUN_0054d20c(param_1);
      param_2 = unaff_x20;
    }
    func_0x00692cd0();
    func_0x00691e5c();
    func_0x00693354();
    if (alStack_38[0] != 0) {
      param_1 = alStack_38;
      FUN_00437b48(param_1);
    }
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = param_1;
    return auVar5;
  }
  plVar1 = param_1 + 2;
  plVar3 = param_2;
  for (; param_1 != plVar1; param_1 = (long *)((long)param_1 + 1)) {
    lVar2 = *param_1;
    *(char *)param_1 = (char)*plVar3;
    *(char *)plVar3 = (char)lVar2;
    param_2 = (long *)((long)param_2 + 1);
    plVar3 = (long *)((long)plVar3 + 1);
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = plVar1;
  return auVar4;
}



/* Entry: 0069ab6c; end: 0069abb7;  */

void FUN_0069ab6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *extraout_x8;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x0069b0dc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_38,param_3);
  func_0x0069aff0(*(undefined8 *)(*unaff_x20 + 0x28));
  (*extraout_x8)();
  func_0x0069b0b4();
  return;
}



/* Entry: 0069abb8; end: 0069abbb;  */

void FUN_0069abb8(void)

{
  return;
}



/* Entry: 0069abbc; end: 0069abf3;  */

bool FUN_0069abbc(long param_1)

{
  func_0x0069b188();
  return *(int *)(param_1 + 8) == 0;
}



/* Entry: 0069abf4; end: 0069ac1b;  */

void FUN_0069abf4(undefined8 *param_1)

{
  func_0x0069b188();
  func_0x0069b1c4(*param_1);
  return;
}



/* Entry: 0069ac1c; end: 0069ac2f;  */

void FUN_0069ac1c(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  func_0x0069b054();
  if (0 < (int)param_1[1]) {
    uVar1 = (uint)param_1[1];
    puVar2 = param_1;
    if ((*param_1 & 1) != 0) {
      puVar2 = (ulong *)(*param_1 + 7);
    }
    if ((int)uVar1 < 2) {
      uVar1 = 1;
    }
    uVar3 = (ulong)uVar1;
    do {
      (**(code **)(*(long *)*puVar2 + 0x18))();
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != 0);
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  return;
}



/* Entry: 0069ac30; end: 0069ac63;  */

long * FUN_0069ac30(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  long alStack_48 [2];
  undefined1 auStack_38 [8];
  
  func_0x0069b054();
  func_0x0069b1c4(*param_1);
  if (param_4 != param_1) {
    func_0x0069b0dc();
    func_0x0069af04();
    plVar1 = param_1;
    func_0x0069aef4();
    if (plVar1 != (long *)0x0 && plVar1 == param_1) {
      (**(code **)(*unaff_x20 + 0x18))(unaff_x20);
      UNRECOVERED_JUMPTABLE = (code *)param_1[4];
      func_0x0069aff0();
                    /* WARNING: Could not recover jumptable at 0x00699198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return unaff_x20;
    }
    FUN_00699298();
    FUN_00699298();
    param_1 = alStack_48;
    FUN_0068e61c(param_1,auStack_38,&UNK_00914b0e);
    if (param_1 != (long *)0x0) {
      lVar2 = (long)*(char *)((long)param_1 + 0x17);
      plVar1 = param_1;
      if (lVar2 < 0) {
        plVar1 = (long *)*param_1;
        lVar2 = param_1[1];
      }
      FUN_00776714(alStack_48,&UNK_00914b31,0x66,plVar1,lVar2);
      plVar1 = alStack_48;
      FUN_00699214(plVar1,&UNK_00914b63);
      FUN_00555478();
      FUN_00682fec();
      FUN_00699298();
      lVar2 = *(long *)(unaff_x19 + 8) + 0x18;
      FUN_00555478(plVar1,lVar2);
      FUN_005558a0(alStack_48);
      func_0x0069b0dc();
      _strlen(lVar2);
      func_0x0069aff0();
      FUN_00554ab4();
      return plVar1;
    }
    func_0x0069b0d0();
    FUN_0069b200();
  }
  return param_1;
}



/* Entry: 0069ac64; end: 0069acaf;  */

void FUN_0069ac64(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  ulong *puVar2;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong uVar3;
  ulong uVar4;
  
  (**(code **)(*param_3 + 0x10))(param_3,0);
  FUN_006990ec();
  FUN_00696894(param_2);
  func_0x00692d80();
  uVar3 = param_3[1];
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar4 = unaff_x20[2];
  if (uVar4 == uVar3) {
    puVar2 = unaff_x20;
    FUN_0068808c();
    iVar1 = (int)puVar2;
    if (iVar1 == 0) {
      puVar2 = unaff_x20;
      if ((*unaff_x20 & 1) != 0) {
        puVar2 = (ulong *)(*unaff_x20 + 7);
      }
      uVar3 = unaff_x20[1];
      func_0x00693198();
      if ((int)uVar3 < iVar1) {
        uVar3 = puVar2[(int)unaff_x20[1]];
        func_0x00693198();
        puVar2[iVar1] = uVar3;
      }
      uVar3 = unaff_x20[1];
      *(int *)(unaff_x20 + 1) = (int)uVar3 + 1;
      puVar2[(int)uVar3] = (ulong)unaff_x19;
      uVar3 = *unaff_x20;
      if ((uVar3 & 1) != 0) {
        *(int *)(uVar3 - 1) = *(int *)(uVar3 - 1) + 1;
      }
      return;
    }
  }
  func_0x00692cd0();
  func_0x00693204();
  if ((uVar3 == 0) && (uVar4 != 0)) {
    if (unaff_x20 != (ulong *)0x0) {
      FUN_00550ffc(uVar4,unaff_x20,FUN_00538668);
    }
  }
  else if (uVar4 != uVar3) {
    (**(code **)(*unaff_x20 + 0x10))(unaff_x20,uVar4);
    (**(code **)(*unaff_x20 + 0x20))();
  }
  if (*(int *)((long)unaff_x19 + 0xc) < (int)unaff_x19[1]) {
    FUN_0054cdf0(unaff_x19,1);
LAB_00688168:
    uVar4 = *unaff_x19;
  }
  else {
    puVar2 = unaff_x19;
    FUN_0068808c();
    uVar3 = unaff_x19[1];
    iVar1 = (int)puVar2;
    if (iVar1 != 0) {
      uVar4 = *unaff_x19;
      puVar2 = unaff_x19;
      if ((uVar4 & 1) != 0) {
        puVar2 = (ulong *)(uVar4 + (long)(int)uVar3 * 8 + 7);
      }
      if ((*puVar2 != 0) && (unaff_x19[2] == 0)) {
        func_0x006884f0();
        uVar4 = *unaff_x19;
      }
      goto LAB_00688178;
    }
    func_0x00688440();
    if ((int)uVar3 < iVar1) {
      puVar2 = unaff_x19;
      if ((*unaff_x19 & 1) != 0) {
        puVar2 = (ulong *)(*unaff_x19 + (long)(int)unaff_x19[1] * 8 + 7);
      }
      uVar3 = *puVar2;
      func_0x00688440();
      puVar2 = unaff_x19;
      if ((*unaff_x19 & 1) != 0) {
        puVar2 = (ulong *)(*unaff_x19 + (long)iVar1 * 8 + 7);
      }
      *puVar2 = uVar3;
      goto LAB_00688168;
    }
    uVar4 = *unaff_x19;
    if ((uVar4 & 1) == 0) goto LAB_00688178;
  }
  *(int *)(uVar4 - 1) = *(int *)(uVar4 - 1) + 1;
LAB_00688178:
  uVar3 = unaff_x19[1];
  *(int *)(unaff_x19 + 1) = (int)uVar3 + 1;
  if ((uVar4 & 1) != 0) {
    unaff_x19 = (ulong *)(uVar4 + (long)(int)uVar3 * 8 + 7);
  }
  *unaff_x19 = (ulong)unaff_x20;
  return;
}



/* Entry: 0069acb0; end: 0069acc3;  */

void FUN_0069acb0(ulong *param_1)

{
  long lVar1;
  
  func_0x0069b054();
  lVar1 = (long)(int)param_1[1] + -1;
  *(int *)(param_1 + 1) = (int)lVar1;
  if ((*param_1 & 1) != 0) {
    param_1 = (ulong *)(*param_1 + lVar1 * 8 + 7);
  }
                    /* WARNING: Could not recover jumptable at 0x0068b244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x18))();
  return;
}



/* Entry: 0069acc4; end: 0069ad6b;  */

ulong * FUN_0069acc4(ulong *param_1,undefined8 param_2,char *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  uint *puVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong *unaff_x19;
  uint *unaff_x20;
  uint *unaff_x21;
  int *piVar11;
  undefined8 unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  func_0x0069b054();
  puVar4 = (undefined1 *)register0x00000008;
  while( true ) {
    puVar7 = param_1;
    uVar2 = (int)param_3 + ~*(uint *)((long)puVar7 + 0xc);
    uVar8 = (ulong)uVar2;
    if ((int)uVar2 < 1) {
      return puVar7;
    }
    *(ulong *)(puVar4 + -0x40) = unaff_x24;
    *(ulong *)(puVar4 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
    *(uint **)(puVar4 + -0x28) = unaff_x21;
    *(uint **)(puVar4 + -0x20) = unaff_x20;
    *(ulong **)(puVar4 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar4 + -0x10) = unaff_x29;
    *(code **)(puVar4 + -8) = unaff_x30;
    unaff_x29 = puVar4 + -0x10;
    uVar1 = *(int *)((long)puVar7 + 0xc) + 1;
    unaff_x24 = (ulong)uVar1;
    uVar2 = uVar1 + uVar2;
    unaff_x20 = (uint *)puVar7[2];
    unaff_x23 = 1;
    if (0 < (int)uVar2) {
      if ((int)uVar2 < (int)(uVar1 * 2 | 1)) {
        uVar2 = uVar1 * 2 + 1;
      }
      uVar3 = 0x7fffffff;
      if (*(int *)((long)puVar7 + 0xc) < 0x3ffffffb) {
        uVar3 = uVar2;
      }
      unaff_x23 = (ulong)uVar3;
    }
    unaff_x21 = (uint *)(unaff_x23 * 8 + 8);
    if (unaff_x20 == (uint *)0x0) break;
    *(uint **)(puVar4 + -0x58) = unaff_x21;
    *(undefined8 *)(puVar4 + -0x48) = 0xffffffffffffffff;
    puVar5 = (undefined8 *)(puVar4 + -0x58);
    func_0x0048b1cc(puVar5,puVar4 + -0x48,
                    "num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)");
    if (puVar5 == (undefined8 *)0x0) {
      puVar6 = unaff_x20;
      func_0x0048b21c(unaff_x20,unaff_x21,1);
      unaff_x21 = puVar6;
      goto LAB_0054ceac;
    }
    lVar10 = (long)*(char *)((long)puVar5 + 0x17);
    puVar9 = puVar5;
    if (lVar10 < 0) {
      puVar9 = (undefined8 *)*puVar5;
      lVar10 = puVar5[1];
    }
    FUN_00776714(puVar4 + -0x58,
                 "bazel-out/ios_arm64-opt-ios-arm64-min15.0-ST-d6543be58b10/bin/external/protobuf+/src/google/protobuf/_virtual_includes/protobuf_lite/google/protobuf/arena.h"
                 ,0x10a,puVar9,lVar10);
    param_3 = "Requested size is too large to fit into size_t.";
    func_0x0048b1e8(puVar4 + -0x58);
    param_1 = (ulong *)(puVar4 + -0x58);
    unaff_x30 = FUN_0054cf78;
    FUN_005558a0();
    puVar4 = puVar4 + -0x60;
    unaff_x19 = puVar7;
  }
  FUN_0048b180();
  unaff_x23 = uVar8 + 0x7fffffff8 >> 3;
LAB_0054ceac:
  uVar8 = *puVar7;
  if ((uVar8 & 1) == 0) {
    *unaff_x21 = (uint)(uVar8 != 0);
    *(ulong *)(unaff_x21 + 2) = uVar8;
  }
  else {
    piVar11 = (int *)(uVar8 - 1);
    _memcpy(unaff_x21,piVar11,(long)*piVar11 * 8 + 8);
    if (unaff_x20 == (uint *)0x0) {
      __ZdlPv(piVar11);
    }
    else {
      FUN_0048b264(unaff_x20,piVar11,
                   (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | unaff_x24 << 3) + 8);
    }
  }
  *puVar7 = (long)unaff_x21 + 1;
  *(int *)((long)puVar7 + 0xc) = (int)unaff_x23 + -1;
  return (ulong *)(unaff_x21 + (long)(int)puVar7[1] * 2 + 2);
}



/* Entry: 0069ad6c; end: 0069ada7;  */

void FUN_0069ad6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0069ada8; end: 0069adf3;  */

void FUN_0069ada8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong *puVar2;
  long *plVar3;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong uVar4;
  ulong uVar5;
  
  plVar3 = param_1;
  func_0x0069aee4();
  (**(code **)(*param_1 + 0x90))(param_1,param_3,plVar3);
  func_0x00692d80(param_2);
  uVar4 = plVar3[1];
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar5 = unaff_x20[2];
  if (uVar5 == uVar4) {
    puVar2 = unaff_x20;
    FUN_0068808c();
    iVar1 = (int)puVar2;
    if (iVar1 == 0) {
      puVar2 = unaff_x20;
      if ((*unaff_x20 & 1) != 0) {
        puVar2 = (ulong *)(*unaff_x20 + 7);
      }
      uVar4 = unaff_x20[1];
      func_0x00693198();
      if ((int)uVar4 < iVar1) {
        uVar4 = puVar2[(int)unaff_x20[1]];
        func_0x00693198();
        puVar2[iVar1] = uVar4;
      }
      uVar4 = unaff_x20[1];
      *(int *)(unaff_x20 + 1) = (int)uVar4 + 1;
      puVar2[(int)uVar4] = (ulong)unaff_x19;
      uVar4 = *unaff_x20;
      if ((uVar4 & 1) != 0) {
        *(int *)(uVar4 - 1) = *(int *)(uVar4 - 1) + 1;
      }
      return;
    }
  }
  func_0x00692cd0();
  func_0x00693204();
  if ((uVar4 == 0) && (uVar5 != 0)) {
    if (unaff_x20 != (ulong *)0x0) {
      FUN_00550ffc(uVar5,unaff_x20,FUN_00538668);
    }
  }
  else if (uVar5 != uVar4) {
    (**(code **)(*unaff_x20 + 0x10))(unaff_x20,uVar5);
    (**(code **)(*unaff_x20 + 0x20))();
  }
  if (*(int *)((long)unaff_x19 + 0xc) < (int)unaff_x19[1]) {
    FUN_0054cdf0(unaff_x19,1);
LAB_00688168:
    uVar5 = *unaff_x19;
  }
  else {
    puVar2 = unaff_x19;
    FUN_0068808c();
    uVar4 = unaff_x19[1];
    iVar1 = (int)puVar2;
    if (iVar1 != 0) {
      uVar5 = *unaff_x19;
      puVar2 = unaff_x19;
      if ((uVar5 & 1) != 0) {
        puVar2 = (ulong *)(uVar5 + (long)(int)uVar4 * 8 + 7);
      }
      if ((*puVar2 != 0) && (unaff_x19[2] == 0)) {
        func_0x006884f0();
        uVar5 = *unaff_x19;
      }
      goto LAB_00688178;
    }
    func_0x00688440();
    if ((int)uVar4 < iVar1) {
      puVar2 = unaff_x19;
      if ((*unaff_x19 & 1) != 0) {
        puVar2 = (ulong *)(*unaff_x19 + (long)(int)unaff_x19[1] * 8 + 7);
      }
      uVar4 = *puVar2;
      func_0x00688440();
      puVar2 = unaff_x19;
      if ((*unaff_x19 & 1) != 0) {
        puVar2 = (ulong *)(*unaff_x19 + (long)iVar1 * 8 + 7);
      }
      *puVar2 = uVar4;
      goto LAB_00688168;
    }
    uVar5 = *unaff_x19;
    if ((uVar5 & 1) == 0) goto LAB_00688178;
  }
  *(int *)(uVar5 - 1) = *(int *)(uVar5 - 1) + 1;
LAB_00688178:
  uVar4 = unaff_x19[1];
  *(int *)(unaff_x19 + 1) = (int)uVar4 + 1;
  if ((uVar5 & 1) != 0) {
    unaff_x19 = (ulong *)(uVar5 + (long)(int)uVar4 * 8 + 7);
  }
  *unaff_x19 = (ulong)unaff_x20;
  return;
}



/* Entry: 0069adf4; end: 0069ae03;  */

void FUN_0069adf4(undefined8 param_1,ulong *param_2)

{
  long lVar1;
  
  lVar1 = (long)(int)param_2[1] + -1;
  *(int *)(param_2 + 1) = (int)lVar1;
  if ((*param_2 & 1) != 0) {
    param_2 = (ulong *)(*param_2 + lVar1 * 8 + 7);
  }
                    /* WARNING: Could not recover jumptable at 0x0068b244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))();
  return;
}



/* Entry: 0069ae04; end: 0069ae37;  */

undefined1  [16] FUN_0069ae04(long param_1,long *param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  int extraout_w8;
  long *plVar4;
  long *unaff_x20;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long alStack_38 [3];
  
  if (param_1 != param_3) {
    func_0x0069ae68();
    func_0x0069ae90();
    FUN_00776794();
    func_0x0069af60();
    uVar3 = 0;
                    /* WARNING: Could not recover jumptable at 0x0069b0cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x10))(param_2,0);
    auVar8._8_8_ = uVar3;
    auVar8._0_8_ = param_2;
    return auVar8;
  }
  if (param_2 != param_4) {
    if (param_2[2] != param_4[2]) {
      func_0x00692d80();
      func_0x00693510();
      if (extraout_w8 != 0) {
        param_2 = alStack_38;
        func_0x0054d484(param_2);
        param_4 = unaff_x20;
      }
      func_0x00692cd0();
      func_0x00691ee8();
      func_0x00693354();
      if (alStack_38[0] != 0) {
        param_2 = alStack_38;
        FUN_00691f24(param_2);
      }
      auVar6._8_8_ = param_4;
      auVar6._0_8_ = param_2;
      return auVar6;
    }
    plVar1 = param_2 + 2;
    plVar4 = param_4;
    for (; param_2 != plVar1; param_2 = (long *)((long)param_2 + 1)) {
      lVar2 = *param_2;
      *(char *)param_2 = (char)*plVar4;
      *(char *)plVar4 = (char)lVar2;
      param_4 = (long *)((long)param_4 + 1);
      plVar4 = (long *)((long)plVar4 + 1);
    }
    auVar5._8_8_ = param_4;
    auVar5._0_8_ = plVar1;
    return auVar5;
  }
  auVar7._8_8_ = param_4;
  auVar7._0_8_ = param_2;
  return auVar7;
}



/* Entry: 0069ae38; end: 0069b1ff;  */

void FUN_0069ae38(undefined8 param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0069b0cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2,0);
  return;
}



/* Entry: 0069b200; end: 0069b237;  */

long ***** FUN_0069b200(long *****param_1,long *****param_2)

{
  long ***ppplVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  long *****ppppplVar7;
  long ****pppplVar8;
  undefined8 extraout_x8;
  long *****unaff_x21;
  long lVar9;
  long ****pppplVar10;
  long *****ppppplVar11;
  long *****ppppplVar12;
  long *****ppppplVar13;
  long ***ppplVar14;
  uint uVar15;
  long *****ppppplVar16;
  long *****ppppplVar17;
  undefined1 auStack_2c0 [24];
  long ***ppplStack_2a8;
  long ***ppplStack_2a0;
  undefined8 uStack_298;
  long ****pppplStack_230;
  long ****pppplStack_228;
  long ****pppplStack_220;
  long ***ppplStack_218;
  undefined8 uStack_210;
  undefined4 uStack_208;
  long ***appplStack_1c8 [8];
  long ***appplStack_188 [2];
  undefined8 uStack_178;
  long ***appplStack_108 [2];
  undefined1 auStack_f8 [24];
  long ****pppplStack_e0;
  long ****pppplStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  uint uStack_bc;
  long ***ppplStack_b8;
  long ***appplStack_b0 [3];
  long ***appplStack_98 [3];
  long ****pppplStack_80;
  long ***ppplStack_78;
  undefined8 uStack_70;
  long ****pppplStack_68;
  
  if (param_1 == param_2) {
    return param_1;
  }
  ppppplVar6 = param_2;
  FUN_0069b238();
  func_0x0069be68();
  if (param_2 == ppppplVar6) {
    ppppplVar12 = param_2;
    ppppplVar13 = ppppplVar6;
    func_0x0069be68();
    FUN_00554814();
    func_0x00533528();
    ppppplVar5 = (long *****)&UNK_00914cb9;
    FUN_00776794(&pppplStack_80,&UNK_00914cb9,0x33,ppppplVar12,ppppplVar13);
  }
  else {
    ppppplVar12 = param_2;
    FUN_00699298();
    pppplStack_68 = (long ****)ppppplVar12;
    func_0x0069bec4();
    ppppplVar5 = &pppplStack_80;
    pppplStack_80 = (long ****)ppppplVar12;
    FUN_0068e61c(ppppplVar5,&pppplStack_68,&UNK_00914cf2);
    if (ppppplVar5 == (long *****)0x0) {
      FUN_0069b80c();
      func_0x0069bf38();
      ppppplVar16 = (long *****)unaff_x21[0xb];
      ppppplVar12 = param_2;
      FUN_006994c8();
      ppppplVar17 = (long *****)param_2[0xb];
      ppppplVar13 = ppppplVar12;
      FUN_006994c8();
      pppplStack_80 = (long ****)0x0;
      ppplStack_78 = (long ***)0x0;
      uStack_70 = 0;
      ppppplVar5 = unaff_x21;
      FUN_0068b260();
      ppplStack_b8 = ppplStack_78;
      uStack_bc = (uint)((ppppplVar16 == ppppplVar12) != (ppppplVar17 != ppppplVar13));
      pppplVar8 = pppplStack_80;
      do {
        uVar2 = pppplVar8 == (long ****)ppplStack_b8;
        if ((bool)uVar2) {
          func_0x0069bf18();
          if (*ppppplVar5 != ppppplVar5[1]) {
            func_0x006895cc(param_2,ppppplVar6);
            ppppplVar6 = param_2;
            func_0x0069bf18();
            FUN_006a4a80(param_2,ppppplVar6);
          }
          ppppplVar6 = &pppplStack_80;
          FUN_00666dd0(ppppplVar6);
          return ppppplVar6;
        }
        ppppplVar12 = (long *****)*pppplVar8;
        if ((*(byte *)((long)ppppplVar12 + 1) >> 5 & 1) == 0) {
          func_0x0069bf00();
          switch((int)ppppplVar5) {
          case 1:
            func_0x0069be48();
            FUN_0068b4e8();
            func_0x0069be58();
            FUN_0068b594();
            break;
          case 2:
            func_0x0069be48();
            FUN_0068b804();
            func_0x0069be58();
            FUN_0068b8b0();
            break;
          case 3:
            func_0x0069be48();
            FUN_0068bb28();
            func_0x0069be58();
            FUN_0068bbd4();
            break;
          case 4:
            func_0x0069be48();
            FUN_0068be44();
            func_0x0069be58();
            FUN_0068bef0();
            break;
          case 5:
            func_0x0069be48();
            FUN_0068c4ac();
            func_0x0069be58();
            FUN_0068c558();
            break;
          case 6:
            func_0x0069be48();
            FUN_0068c168();
            func_0x0069be58();
            FUN_0068c214();
            break;
          case 7:
            func_0x0069be48();
            FUN_0068c7f0();
            func_0x0069be58();
            FUN_0068c8a0();
            break;
          case 8:
            func_0x0069be48();
            FUN_0068d744();
            func_0x0069be58();
            FUN_0068d82c();
            break;
          case 9:
            func_0x0069be48(appplStack_b0);
            FUN_0068cb34();
            func_0x0069be58();
            FUN_0068ceac();
            ppppplVar5 = (long *****)appplStack_b0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
            break;
          case 10:
            func_0x0069be48();
            func_0x0069bf30();
            if (unaff_x21 == param_2) {
              FUN_00699298();
            }
            func_0x0069be58();
            FUN_0068dd94();
            FUN_00699090();
          }
        }
        else {
          if ((uStack_bc != 0) &&
             (func_0x006595dc(), ppppplVar5 = ppppplVar12, (int)ppppplVar12 != 0)) {
            func_0x0069be48();
            func_0x0068efe0();
            ppppplVar5 = ppppplVar12;
            func_0x0069be58();
            func_0x0068efa4();
            if (((((ulong)ppppplVar5[1] & 1) == 0) || (func_0x0069be74(), !(bool)uVar2)) &&
               ((((ulong)ppppplVar12[1] & 1) == 0 || (func_0x0069be74(), !(bool)uVar2)))) {
              (*(code *)(*ppppplVar5)[6])();
              goto LAB_0069b6a0;
            }
          }
          func_0x0069be48();
          FUN_0068af64();
          uVar4 = (uint)ppppplVar5;
          for (uVar15 = 0; (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) != uVar15;
              uVar15 = uVar15 + 1) {
            func_0x0069bf00();
            switch((int)ppppplVar5) {
            case 1:
              func_0x0069be34();
              func_0x0068b6ac();
              func_0x0069be58();
              FUN_0068b73c();
              break;
            case 2:
              func_0x0069be34();
              func_0x0068b9cc();
              func_0x0069be58();
              FUN_0068ba5c();
              break;
            case 3:
              func_0x0069be34();
              func_0x0068bcec();
              func_0x0069be58();
              FUN_0068bd7c();
              break;
            case 4:
              func_0x0069be34();
              func_0x0068c00c();
              func_0x0069be58();
              FUN_0068c09c();
              break;
            case 5:
              func_0x0069be34();
              FUN_0068c680();
              func_0x0069be58();
              FUN_0068c710();
              break;
            case 6:
              func_0x0069be34();
              FUN_0068c33c();
              func_0x0069be58();
              FUN_0068c3cc();
              break;
            case 7:
              func_0x0069be34();
              func_0x0068c9b8();
              func_0x0069be58();
              FUN_0068ca6c();
              break;
            case 8:
              func_0x0069be34();
              FUN_0068d98c();
              func_0x0069be58();
              FUN_0068da48();
              break;
            case 9:
              func_0x0069be34(appplStack_98);
              FUN_0068d4b4();
              func_0x0069be58();
              FUN_0068d62c();
              ppppplVar5 = (long *****)appplStack_98;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
              break;
            case 10:
              func_0x0069be34();
              func_0x0068e124();
              if (unaff_x21 == param_2) {
                FUN_00699298();
              }
              func_0x0069be58();
              FUN_0068e1d0();
              FUN_00699090();
            }
          }
        }
LAB_0069b6a0:
        pppplVar8 = pppplVar8 + 1;
      } while( true );
    }
    pppplVar8 = (long ****)(long)*(char *)((long)ppppplVar5 + 0x17);
    ppppplVar12 = ppppplVar5;
    if ((long)pppplVar8 < 0) {
      ppppplVar12 = (long *****)*ppppplVar5;
      pppplVar8 = ppppplVar5[1];
    }
    FUN_00776714(&pppplStack_80,&UNK_00914cb9,0x36,ppppplVar12,pppplVar8);
    param_2 = &pppplStack_80;
    FUN_00537a3c(param_2,&UNK_00914d14);
    FUN_00554ab4();
    func_0x0069bef4(pppplStack_68[1]);
    ppppplVar5 = param_2;
    FUN_00554ab4(param_2,&UNK_00914d48,4);
    func_0x0069bec4();
    func_0x0069bef4(ppppplVar5[1]);
    ppppplVar5 = (long *****)&UNK_00910052;
    FUN_00537a9c(param_2);
  }
  ppppplVar12 = &pppplStack_80;
  FUN_005558a0();
  pcStack_c8 = FUN_0069b80c;
  pppplStack_e0 = (long ****)param_2;
  pppplStack_d8 = (long ****)ppppplVar6;
  puStack_d0 = &stack0xfffffffffffffff0;
  FUN_00699298();
  if (ppppplVar5 != (long *****)0x0) {
    return ppppplVar5;
  }
  func_0x0069bec4();
  if (ppppplVar12 == (long *****)0x0) {
    FUN_00425cb4(auStack_f8,&UNK_00914d4d);
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_f8,ppppplVar12[1]);
  }
  ppppplVar5 = (long *****)((long)&segment_command_00000020.cmdsize + 2);
  FUN_0077670c(appplStack_108,&UNK_00914cb9,0x26);
  FUN_0054ff4c(appplStack_108,&UNK_00914d55);
  FUN_00555478();
  pppplVar8 = (long ****)&UNK_00914d80;
  func_0x0065ae70();
  ppppplVar6 = (long *****)appplStack_108;
  FUN_005558a0();
  func_0x0069bee4();
  func_0x0069be84();
  ppppplVar12 = &pppplStack_230;
  func_0x0069bea0();
  uStack_178 = extraout_x8;
  FUN_00699298();
  func_0x0069bf38();
  uVar15 = *(uint *)((long)unaff_x21 + 4);
  for (lVar9 = 0; (ulong)(uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU)) * 0x58 - lVar9 != 0;
      lVar9 = lVar9 + 0x58) {
    ppppplVar5 = (long *****)((long)unaff_x21[7] + lVar9);
    uVar2 = *(int *)(ppppplVar5[9] + 6) == 3;
    if ((bool)uVar2) {
      func_0x0069be68();
      FUN_0068ae9c();
      if ((int)ppppplVar6 == 0) {
        ppppplVar13 = (long *****)0x0;
        goto LAB_0069bad4;
      }
    }
  }
  pppplStack_230 = (long ****)0x0;
  pppplStack_228 = (long ****)0x0;
  pppplStack_220 = (long ****)0x0;
  if (*(char *)((long)unaff_x21[4] + 0x53) == '\x01') {
    pppplVar10 = unaff_x21[7];
    ppppplVar6 = &pppplStack_220;
    pppplVar8 = (long ****)((long)&MACH_HEADER.magic + 1);
    FUN_00666d44();
    pppplStack_220 = (long ****)(ppppplVar6 + (long)pppplVar8);
    pppplStack_228 = (long ****)(ppppplVar6 + 1);
    *ppppplVar6 = pppplVar10 + 0xb;
    ppppplVar12 = ppppplVar5;
    ppppplVar17 = ppppplVar6;
    pppplStack_230 = (long ****)ppppplVar6;
    ppppplVar16 = (long *****)pppplStack_228;
  }
  else {
    func_0x0069be68();
    FUN_0068b260();
    ppppplVar17 = (long *****)pppplStack_230;
    ppppplVar16 = (long *****)pppplStack_228;
  }
  while( true ) {
    ppppplVar13 = (long *****)(ulong)(ppppplVar17 == ppppplVar16);
    uVar2 = 1;
    ppppplVar5 = ppppplVar12;
    if (ppppplVar17 == ppppplVar16) break;
    ppppplVar11 = (long *****)*ppppplVar17;
    ppppplVar6 = ppppplVar11;
    FUN_00656c60();
    uVar2 = (int)ppppplVar6 == 10;
    if ((bool)uVar2) {
      ppppplVar7 = ppppplVar11;
      func_0x006595dc();
      if ((int)ppppplVar7 == 0) {
LAB_0069ba00:
        ppppplVar6 = ppppplVar7;
        if ((*(byte *)((long)ppppplVar11 + 1) >> 5 & 1) == 0) {
          func_0x0069be68();
          func_0x0069bf30();
          FUN_00549a28();
          ppppplVar12 = ppppplVar11;
          ppppplVar5 = ppppplVar11;
          if (((ulong)ppppplVar6 & 1) == 0) break;
        }
        else {
          func_0x0069be68();
          ppppplVar5 = ppppplVar11;
          FUN_0068af64();
          uVar15 = 0;
          uVar4 = (uint)ppppplVar6;
          while (uVar2 = (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) == uVar15,
                ppppplVar12 = ppppplVar5, !(bool)uVar2) {
            func_0x0069be68();
            ppppplVar5 = ppppplVar11;
            func_0x0068e124();
            FUN_00549a28();
            uVar15 = uVar15 + 1;
            if (((ulong)ppppplVar6 & 1) == 0) goto LAB_0069bacc;
          }
        }
      }
      else {
        ppppplVar6 = ppppplVar11;
        FUN_00656024();
        ppppplVar6 = (long *****)(ppppplVar6[7] + 0xb);
        FUN_00656c60();
        uVar3 = (int)ppppplVar6 == 10;
        if ((bool)uVar3) {
          func_0x0069be68();
          ppppplVar5 = ppppplVar11;
          func_0x0068efe0();
          if (((ulong)ppppplVar6[1] & 1) != 0) {
            ppppplVar7 = ppppplVar6;
            func_0x0069be74();
            uVar2 = 1;
            if ((bool)uVar3) goto LAB_0069ba00;
          }
          func_0x0069bf24(appplStack_1c8);
          func_0x0069bf24(&ppplStack_218);
          pppplVar8 = appplStack_1c8;
          FUN_00696774(ppppplVar6,pppplVar8);
          ppplStack_218 = (long ***)0x0;
          uStack_210 = 0;
          uStack_208 = 0;
          while (uVar2 = appplStack_1c8[0] == ppplStack_218, !(bool)uVar2) {
            ppppplVar6 = (long *****)appplStack_188;
            FUN_0069721c();
            FUN_00549a28();
            if (((ulong)ppppplVar6 & 1) == 0) {
              func_0x0069bf10();
              func_0x0069bf08();
LAB_0069bacc:
              ppppplVar13 = (long *****)0x0;
              goto LAB_0069bad0;
            }
            ppppplVar6 = (long *****)appplStack_1c8;
            FUN_0068fbf0();
          }
          func_0x0069bf10();
          func_0x0069bf08();
          ppppplVar12 = ppppplVar5;
        }
      }
    }
    ppppplVar17 = ppppplVar17 + 1;
  }
LAB_0069bad0:
  func_0x0069becc();
LAB_0069bad4:
  func_0x0069be8c(uStack_178);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x0069becc();
    func_0x0069be84();
    ppppplVar12 = ppppplVar6;
    FUN_00699298();
    ppppplVar13 = ppppplVar6;
    FUN_0069b80c();
    uVar15 = *(uint *)((long)ppppplVar12 + 4);
    for (lVar9 = 0; (ulong)(uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU)) * 0x58 - lVar9 != 0;
        lVar9 = lVar9 + 0x58) {
      if ((*(int *)(*(long *)((long)ppppplVar12[7] + lVar9 + 0x48) + 0x30) == 3) &&
         (ppppplVar16 = ppppplVar13, FUN_0068ae9c(ppppplVar13,ppppplVar6),
         ((ulong)ppppplVar16 & 1) == 0)) {
        FUN_00682f98(&ppplStack_2a8,pppplVar8,*(undefined8 *)((long)ppppplVar12[7] + lVar9 + 8));
        func_0x0045a4f0(ppppplVar5,&ppplStack_2a8);
        func_0x0069bee4();
      }
    }
    ppplStack_2a8 = (long ***)0x0;
    ppplStack_2a0 = (long ***)0x0;
    uStack_298 = 0;
    FUN_0068b260(ppppplVar13,ppppplVar6,&ppplStack_2a8);
    ppplVar1 = ppplStack_2a0;
    for (pppplVar10 = (long ****)ppplStack_2a8; pppplVar10 != (long ****)ppplVar1;
        pppplVar10 = pppplVar10 + 1) {
      ppplVar14 = *pppplVar10;
      func_0x0069bf00();
      if ((int)ppppplVar13 == 10) {
        if ((*(byte *)((long)ppplVar14 + 1) >> 5 & 1) == 0) {
          func_0x0069bed4();
          func_0x0069bf30();
          FUN_0069bd3c(auStack_2c0,pppplVar8,ppplVar14,0xffffffff);
          FUN_0069bb4c(ppppplVar13,auStack_2c0,ppppplVar5);
          func_0x0069bebc();
        }
        else {
          func_0x0069bed4();
          FUN_0068af64();
          uVar4 = (uint)ppppplVar13;
          for (uVar15 = 0; (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) != uVar15;
              uVar15 = uVar15 + 1) {
            func_0x0069bed4();
            func_0x0068e124();
            FUN_0069bd3c(auStack_2c0,pppplVar8,ppplVar14,uVar15);
            FUN_0069bb4c(ppppplVar13,auStack_2c0,ppppplVar5);
            func_0x0069bebc();
          }
        }
      }
    }
    ppppplVar6 = (long *****)&ppplStack_2a8;
    FUN_00666dd0(ppppplVar6);
    return ppppplVar6;
  }
  return ppppplVar13;
}


